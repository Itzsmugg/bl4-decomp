// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145fc56a2 FUN_145fc56a2 body=653 status=ok
// SIG undefined FUN_145fc56a2(void)

void FUN_145fc56a2(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionByPercentageDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectByPercentage",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectByPercentage",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionByPercentageDataflowNode",1);
  if (DAT_14cc25d70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d70 =
         FUN_140002ddd(FUN_146758a7b,uVar3,L"CollectionTransformSelectionByPercentageDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25d70,local_108,local_100);
  if (DAT_14cc25d70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d70 =
         FUN_140002ddd(FUN_146758a7b,uVar3,L"CollectionTransformSelectionByPercentageDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25d70);
  if (DAT_14cc25d70 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d70 =
         FUN_140002ddd(FUN_146758a7b,uVar3,L"CollectionTransformSelectionByPercentageDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25d70);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionByPercentageDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e270;
  local_50 = FUN_1497bd0e4;
  local_78 = FUN_1497bd316;
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



// FUNCTION 145fc5930 FUN_145fc5930 body=653 status=ok
// SIG undefined FUN_145fc5930(void)

void FUN_145fc5930(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionChildrenDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectChildren",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectChildren",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionChildrenDataflowNode",1);
  if (DAT_14cc25d88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d88 =
         FUN_140002ddd(FUN_146758b11,uVar3,L"CollectionTransformSelectionChildrenDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25d88,local_108,local_100);
  if (DAT_14cc25d88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d88 =
         FUN_140002ddd(FUN_146758b11,uVar3,L"CollectionTransformSelectionChildrenDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25d88);
  if (DAT_14cc25d88 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25d88 =
         FUN_140002ddd(FUN_146758b11,uVar3,L"CollectionTransformSelectionChildrenDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25d88);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionChildrenDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e290;
  local_50 = FUN_1497bd34e;
  local_78 = FUN_1497bd512;
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



// FUNCTION 145fc5bbe FUN_145fc5bbe body=653 status=ok
// SIG undefined FUN_145fc5bbe(void)

void FUN_145fc5bbe(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionSiblingsDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectSiblings",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectSiblings",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionSiblingsDataflowNode",1);
  if (DAT_14cc25da0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25da0 =
         FUN_140002ddd(FUN_146758ba7,uVar3,L"CollectionTransformSelectionSiblingsDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25da0,local_108,local_100);
  if (DAT_14cc25da0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25da0 =
         FUN_140002ddd(FUN_146758ba7,uVar3,L"CollectionTransformSelectionSiblingsDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25da0);
  if (DAT_14cc25da0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25da0 =
         FUN_140002ddd(FUN_146758ba7,uVar3,L"CollectionTransformSelectionSiblingsDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25da0);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionSiblingsDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e2b0;
  local_50 = FUN_1497bd54a;
  local_78 = FUN_1497bd70e;
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



// FUNCTION 145fc5e4c FUN_145fc5e4c body=653 status=ok
// SIG undefined FUN_145fc5e4c(void)

void FUN_145fc5e4c(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionLevelDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectLevels",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectLevels",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionLevelDataflowNode",1);
  if (DAT_14cc25db8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25db8 =
         FUN_140002ddd(FUN_146758c3d,uVar3,L"CollectionTransformSelectionLevelDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25db8,local_108,local_100);
  if (DAT_14cc25db8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25db8 =
         FUN_140002ddd(FUN_146758c3d,uVar3,L"CollectionTransformSelectionLevelDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25db8);
  if (DAT_14cc25db8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25db8 =
         FUN_140002ddd(FUN_146758c3d,uVar3,L"CollectionTransformSelectionLevelDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25db8);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionLevelDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e2d0;
  local_50 = FUN_1497bd746;
  local_78 = FUN_1497bd90a;
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



// FUNCTION 145fc60da FUN_145fc60da body=653 status=ok
// SIG undefined FUN_145fc60da(void)

void FUN_145fc60da(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionTargetLevelDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectTargetLevel",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectTargetLevel",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionTargetLevelDataflowNode",1);
  if (DAT_14cc25dd0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25dd0 =
         FUN_140002ddd(FUN_146758cd3,uVar3,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25dd0,local_108,local_100);
  if (DAT_14cc25dd0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25dd0 =
         FUN_140002ddd(FUN_146758cd3,uVar3,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25dd0);
  if (DAT_14cc25dd0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25dd0 =
         FUN_140002ddd(FUN_146758cd3,uVar3,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25dd0);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionTargetLevelDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e2f0;
  local_50 = FUN_1497bd942;
  local_78 = FUN_1497bdb2e;
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



// FUNCTION 145fc6368 FUN_145fc6368 body=653 status=ok
// SIG undefined FUN_145fc6368(void)

void FUN_145fc6368(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionContactDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectContact",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectContact",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionContactDataflowNode",1);
  if (DAT_14cc25de8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25de8 =
         FUN_140002ddd(FUN_146758d69,uVar3,L"CollectionTransformSelectionContactDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25de8,local_108,local_100);
  if (DAT_14cc25de8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25de8 =
         FUN_140002ddd(FUN_146758d69,uVar3,L"CollectionTransformSelectionContactDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25de8);
  if (DAT_14cc25de8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25de8 =
         FUN_140002ddd(FUN_146758d69,uVar3,L"CollectionTransformSelectionContactDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25de8);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionContactDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e310;
  local_50 = FUN_1497bdb66;
  local_78 = FUN_1497bdd30;
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



// FUNCTION 145fc65f6 FUN_145fc65f6 body=653 status=ok
// SIG undefined FUN_145fc65f6(void)

void FUN_145fc65f6(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionLeafDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectLeaf",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectLeaf",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionLeafDataflowNode",1);
  if (DAT_14cc25e00 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e00 =
         FUN_140002ddd(FUN_146758dff,uVar3,L"CollectionTransformSelectionLeafDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25e00,local_108,local_100);
  if (DAT_14cc25e00 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e00 =
         FUN_140002ddd(FUN_146758dff,uVar3,L"CollectionTransformSelectionLeafDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25e00);
  if (DAT_14cc25e00 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e00 =
         FUN_140002ddd(FUN_146758dff,uVar3,L"CollectionTransformSelectionLeafDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25e00);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionLeafDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e330;
  local_50 = FUN_1497bdd68;
  local_78 = FUN_1497bdf12;
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



// FUNCTION 145fc6884 FUN_145fc6884 body=653 status=ok
// SIG undefined FUN_145fc6884(void)

void FUN_145fc6884(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionClusterDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectCluster",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectCluster",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionClusterDataflowNode",1);
  if (DAT_14cc25e18 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e18 =
         FUN_140002ddd(FUN_146758e95,uVar3,L"CollectionTransformSelectionClusterDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25e18,local_108,local_100);
  if (DAT_14cc25e18 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e18 =
         FUN_140002ddd(FUN_146758e95,uVar3,L"CollectionTransformSelectionClusterDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25e18);
  if (DAT_14cc25e18 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e18 =
         FUN_140002ddd(FUN_146758e95,uVar3,L"CollectionTransformSelectionClusterDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25e18);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionClusterDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e350;
  local_50 = FUN_1497bdf4a;
  local_78 = FUN_1497be0f4;
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



// FUNCTION 145fc6b12 FUN_145fc6b12 body=653 status=ok
// SIG undefined FUN_145fc6b12(void)

void FUN_145fc6b12(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionClusterDataflowNode_v2",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectCluster",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectCluster",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionClusterDataflowNode_v2",1);
  if (DAT_14cc25e30 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e30 =
         FUN_140002ddd(FUN_146758f2b,uVar3,L"CollectionTransformSelectionClusterDataflowNode_v2");
  }
  FUN_1406751de(local_f8,DAT_14cc25e30,local_108,local_100);
  if (DAT_14cc25e30 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e30 =
         FUN_140002ddd(FUN_146758f2b,uVar3,L"CollectionTransformSelectionClusterDataflowNode_v2");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25e30);
  if (DAT_14cc25e30 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e30 =
         FUN_140002ddd(FUN_146758f2b,uVar3,L"CollectionTransformSelectionClusterDataflowNode_v2");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25e30);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionClusterDataflowNode_v2",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e370;
  local_50 = FUN_1497be12c;
  local_78 = FUN_1497be2d6;
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



// FUNCTION 145fc6da0 FUN_145fc6da0 body=653 status=ok
// SIG undefined FUN_145fc6da0(void)

void FUN_145fc6da0(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionBySizeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectBySize",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectBySize",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionBySizeDataflowNode",1);
  if (DAT_14cc25e78 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e78 =
         FUN_140002ddd(FUN_146759089,uVar3,L"CollectionTransformSelectionBySizeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25e78,local_108,local_100);
  if (DAT_14cc25e78 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e78 =
         FUN_140002ddd(FUN_146759089,uVar3,L"CollectionTransformSelectionBySizeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25e78);
  if (DAT_14cc25e78 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e78 =
         FUN_140002ddd(FUN_146759089,uVar3,L"CollectionTransformSelectionBySizeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25e78);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionBySizeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e390;
  local_50 = FUN_1497be30e;
  local_78 = FUN_1497be540;
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



// FUNCTION 145fc702e FUN_145fc702e body=653 status=ok
// SIG undefined FUN_145fc702e(void)

void FUN_145fc702e(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionByVolumeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectByVolume",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectByVolume",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionByVolumeDataflowNode",1);
  if (DAT_14cc25e90 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e90 =
         FUN_140002ddd(FUN_14675911f,uVar3,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25e90,local_108,local_100);
  if (DAT_14cc25e90 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e90 =
         FUN_140002ddd(FUN_14675911f,uVar3,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25e90);
  if (DAT_14cc25e90 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e90 =
         FUN_140002ddd(FUN_14675911f,uVar3,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25e90);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionByVolumeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e3b0;
  local_50 = FUN_1497be578;
  local_78 = FUN_1497be7a2;
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



// FUNCTION 145fc72bc FUN_145fc72bc body=653 status=ok
// SIG undefined FUN_145fc72bc(void)

void FUN_145fc72bc(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionInBoxDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectInBox",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectInBox",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionInBoxDataflowNode",1);
  if (DAT_14cc25ec0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ec0 =
         FUN_140002ddd(FUN_1467591e5,uVar3,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25ec0,local_108,local_100);
  if (DAT_14cc25ec0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ec0 =
         FUN_140002ddd(FUN_1467591e5,uVar3,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25ec0);
  if (DAT_14cc25ec0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ec0 =
         FUN_140002ddd(FUN_1467591e5,uVar3,L"CollectionTransformSelectionInBoxDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25ec0);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionInBoxDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e3d0;
  local_50 = FUN_1497be7da;
  local_78 = FUN_1497bea56;
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



// FUNCTION 145fc754a FUN_145fc754a body=653 status=ok
// SIG undefined FUN_145fc754a(void)

void FUN_145fc754a(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionInSphereDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectInSphere",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectInSphere",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionInSphereDataflowNode",1);
  if (DAT_14cc25ed8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ed8 =
         FUN_140002ddd(FUN_14675927b,uVar3,L"CollectionTransformSelectionInSphereDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25ed8,local_108,local_100);
  if (DAT_14cc25ed8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ed8 =
         FUN_140002ddd(FUN_14675927b,uVar3,L"CollectionTransformSelectionInSphereDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25ed8);
  if (DAT_14cc25ed8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ed8 =
         FUN_140002ddd(FUN_14675927b,uVar3,L"CollectionTransformSelectionInSphereDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25ed8);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionInSphereDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e3f0;
  local_50 = FUN_1497bea8e;
  local_78 = FUN_1497becfc;
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



// FUNCTION 145fc77d8 FUN_145fc77d8 body=653 status=ok
// SIG undefined FUN_145fc77d8(void)

void FUN_145fc77d8(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionByFloatAttrDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectByFloatAttribute",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectByFloatAttribute",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionByFloatAttrDataflowNode",1);
  if (DAT_14cc25ef0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ef0 =
         FUN_140002ddd(FUN_146759311,uVar3,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25ef0,local_108,local_100);
  if (DAT_14cc25ef0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ef0 =
         FUN_140002ddd(FUN_146759311,uVar3,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25ef0);
  if (DAT_14cc25ef0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ef0 =
         FUN_140002ddd(FUN_146759311,uVar3,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25ef0);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionByFloatAttrDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e410;
  local_50 = FUN_1497bed34;
  local_78 = FUN_1497bef84;
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



// FUNCTION 145fc7a66 FUN_145fc7a66 body=653 status=ok
// SIG undefined FUN_145fc7a66(void)

void FUN_145fc7a66(void)

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
  FUN_1446ddc76(&local_c8,"FSelectFloatArrayIndicesInRangeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"SelectFloatArrayIndicesInRange",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Array",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"SelectFloatArrayIndicesInRange",1);
  FUN_1446ddc76(local_108,"FSelectFloatArrayIndicesInRangeDataflowNode",1);
  if (DAT_14cc25e60 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e60 = FUN_140002ddd(FUN_146758ff3,uVar3,L"SelectFloatArrayIndicesInRangeDataflowNode")
    ;
  }
  FUN_1406751de(local_f8,DAT_14cc25e60,local_108,local_100);
  if (DAT_14cc25e60 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e60 = FUN_140002ddd(FUN_146758ff3,uVar3,L"SelectFloatArrayIndicesInRangeDataflowNode")
    ;
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25e60);
  if (DAT_14cc25e60 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25e60 = FUN_140002ddd(FUN_146758ff3,uVar3,L"SelectFloatArrayIndicesInRangeDataflowNode")
    ;
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25e60);
  FUN_1446ddc76(local_118,"FSelectFloatArrayIndicesInRangeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e430;
  local_50 = FUN_1497befbc;
  local_78 = FUN_1497bf1b2;
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



// FUNCTION 145fc7cf4 FUN_145fc7cf4 body=653 status=ok
// SIG undefined FUN_145fc7cf4(void)

void FUN_145fc7cf4(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionTransformSelectionByIntAttrDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionTransformSelectByIntAttribute",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Transform",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionTransformSelectByIntAttribute",1);
  FUN_1446ddc76(local_108,"FCollectionTransformSelectionByIntAttrDataflowNode",1);
  if (DAT_14cc25f08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f08 =
         FUN_140002ddd(FUN_1467593a7,uVar3,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25f08,local_108,local_100);
  if (DAT_14cc25f08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f08 =
         FUN_140002ddd(FUN_1467593a7,uVar3,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25f08);
  if (DAT_14cc25f08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f08 =
         FUN_140002ddd(FUN_1467593a7,uVar3,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25f08);
  FUN_1446ddc76(local_118,"FCollectionTransformSelectionByIntAttrDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e450;
  local_50 = FUN_1497bf1ea;
  local_78 = FUN_1497bf43a;
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



// FUNCTION 145fc7f82 FUN_145fc7f82 body=653 status=ok
// SIG undefined FUN_145fc7f82(void)

void FUN_145fc7f82(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionVertexSelectionCustomDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionVertexSelectCustom",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Vertex",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionVertexSelectCustom",1);
  FUN_1446ddc76(local_108,"FCollectionVertexSelectionCustomDataflowNode",1);
  if (DAT_14cc25f20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f20 =
         FUN_140002ddd(FUN_14675943d,uVar3,L"CollectionVertexSelectionCustomDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25f20,local_108,local_100);
  if (DAT_14cc25f20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f20 =
         FUN_140002ddd(FUN_14675943d,uVar3,L"CollectionVertexSelectionCustomDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25f20);
  if (DAT_14cc25f20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f20 =
         FUN_140002ddd(FUN_14675943d,uVar3,L"CollectionVertexSelectionCustomDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25f20);
  FUN_1446ddc76(local_118,"FCollectionVertexSelectionCustomDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e470;
  local_50 = FUN_1497bf472;
  local_78 = FUN_1497bf656;
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



// FUNCTION 145fc8210 FUN_145fc8210 body=653 status=ok
// SIG undefined FUN_145fc8210(void)

void FUN_145fc8210(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionFaceSelectionCustomDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionFaceSelectCustom",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Face",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionFaceSelectCustom",1);
  FUN_1446ddc76(local_108,"FCollectionFaceSelectionCustomDataflowNode",1);
  if (DAT_14cc25f38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f38 = FUN_140002ddd(FUN_1467594d3,uVar3,L"CollectionFaceSelectionCustomDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25f38,local_108,local_100);
  if (DAT_14cc25f38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f38 = FUN_140002ddd(FUN_1467594d3,uVar3,L"CollectionFaceSelectionCustomDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25f38);
  if (DAT_14cc25f38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f38 = FUN_140002ddd(FUN_1467594d3,uVar3,L"CollectionFaceSelectionCustomDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25f38);
  FUN_1446ddc76(local_118,"FCollectionFaceSelectionCustomDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e490;
  local_50 = FUN_1497bf68e;
  local_78 = FUN_1497bf8ec;
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



// FUNCTION 145fc849e FUN_145fc849e body=653 status=ok
// SIG undefined FUN_145fc849e(void)

void FUN_145fc849e(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionSelectionConvertDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionSelectionConvert",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionSelectionConvert",1);
  FUN_1446ddc76(local_108,"FCollectionSelectionConvertDataflowNode",1);
  if (DAT_14cc25f50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f50 = FUN_140002ddd(FUN_146759569,uVar3,L"CollectionSelectionConvertDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25f50,local_108,local_100);
  if (DAT_14cc25f50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f50 = FUN_140002ddd(FUN_146759569,uVar3,L"CollectionSelectionConvertDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25f50);
  if (DAT_14cc25f50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f50 = FUN_140002ddd(FUN_146759569,uVar3,L"CollectionSelectionConvertDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25f50);
  FUN_1446ddc76(local_118,"FCollectionSelectionConvertDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e4b0;
  local_50 = FUN_1497bf924;
  local_78 = FUN_1497bfbb8;
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



// FUNCTION 145fc872c FUN_145fc872c body=653 status=ok
// SIG undefined FUN_145fc872c(void)

void FUN_145fc872c(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionFaceSelectionInvertDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionFaceSelectInvert",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Face",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionFaceSelectInvert",1);
  FUN_1446ddc76(local_108,"FCollectionFaceSelectionInvertDataflowNode",1);
  if (DAT_14cc25f68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f68 = FUN_140002ddd(FUN_1467595ff,uVar3,L"CollectionFaceSelectionInvertDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25f68,local_108,local_100);
  if (DAT_14cc25f68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f68 = FUN_140002ddd(FUN_1467595ff,uVar3,L"CollectionFaceSelectionInvertDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25f68);
  if (DAT_14cc25f68 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f68 = FUN_140002ddd(FUN_1467595ff,uVar3,L"CollectionFaceSelectionInvertDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25f68);
  FUN_1446ddc76(local_118,"FCollectionFaceSelectionInvertDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e4d0;
  local_50 = FUN_1497bfbf0;
  local_78 = FUN_1497bfd5a;
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



// FUNCTION 145fc89ba FUN_145fc89ba body=653 status=ok
// SIG undefined FUN_145fc89ba(void)

void FUN_145fc89ba(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionVertexSelectionByPercentageDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionVertexSelectByPercentage",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Vertex",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionVertexSelectByPercentage",1);
  FUN_1446ddc76(local_108,"FCollectionVertexSelectionByPercentageDataflowNode",1);
  if (DAT_14cc25f80 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f80 =
         FUN_140002ddd(FUN_146759695,uVar3,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25f80,local_108,local_100);
  if (DAT_14cc25f80 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f80 =
         FUN_140002ddd(FUN_146759695,uVar3,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25f80);
  if (DAT_14cc25f80 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f80 =
         FUN_140002ddd(FUN_146759695,uVar3,L"CollectionVertexSelectionByPercentageDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25f80);
  FUN_1446ddc76(local_118,"FCollectionVertexSelectionByPercentageDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e4f0;
  local_50 = FUN_1497bfd92;
  local_78 = FUN_1497bffc4;
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



// FUNCTION 145fc8c48 FUN_145fc8c48 body=653 status=ok
// SIG undefined FUN_145fc8c48(void)

void FUN_145fc8c48(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionVertexSelectionSetOperationDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionVertexSelectionSetOperation",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|Vertex",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionVertexSelectionSetOperation",1);
  FUN_1446ddc76(local_108,"FCollectionVertexSelectionSetOperationDataflowNode",1);
  if (DAT_14cc25f98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f98 =
         FUN_140002ddd(FUN_14675972b,uVar3,L"CollectionVertexSelectionSetOperationDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25f98,local_108,local_100);
  if (DAT_14cc25f98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f98 =
         FUN_140002ddd(FUN_14675972b,uVar3,L"CollectionVertexSelectionSetOperationDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25f98);
  if (DAT_14cc25f98 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25f98 =
         FUN_140002ddd(FUN_14675972b,uVar3,L"CollectionVertexSelectionSetOperationDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25f98);
  FUN_1446ddc76(local_118,"FCollectionVertexSelectionSetOperationDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e510;
  local_50 = FUN_1497bfffc;
  local_78 = FUN_1497c01cc;
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



// FUNCTION 145fc8ed6 FUN_145fc8ed6 body=653 status=ok
// SIG undefined FUN_145fc8ed6(void)

void FUN_145fc8ed6(void)

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
  FUN_1446ddc76(&local_c8,"FCollectionSelectionByAttrDataflowNode",1);
  FUN_1446ddc76(&local_d0,"CollectionSelectByAttr",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|All",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"CollectionSelectByAttr",1);
  FUN_1446ddc76(local_108,"FCollectionSelectionByAttrDataflowNode",1);
  if (DAT_14cc25fe0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25fe0 = FUN_140002ddd(FUN_14675981f,uVar3,L"CollectionSelectionByAttrDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25fe0,local_108,local_100);
  if (DAT_14cc25fe0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25fe0 = FUN_140002ddd(FUN_14675981f,uVar3,L"CollectionSelectionByAttrDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25fe0);
  if (DAT_14cc25fe0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25fe0 = FUN_140002ddd(FUN_14675981f,uVar3,L"CollectionSelectionByAttrDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25fe0);
  FUN_1446ddc76(local_118,"FCollectionSelectionByAttrDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e530;
  local_50 = FUN_1497c0204;
  local_78 = FUN_1497c0550;
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



// FUNCTION 145fc9164 FUN_145fc9164 body=653 status=ok
// SIG undefined FUN_145fc9164(void)

void FUN_145fc9164(void)

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
  FUN_1446ddc76(&local_c8,"FGeometrySelectionToVertexSelectionDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GeometrySelectionToVertexSelection",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Selection|All",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GeometrySelectionToVertexSelection",1);
  FUN_1446ddc76(local_108,"FGeometrySelectionToVertexSelectionDataflowNode",1);
  if (DAT_14cc25ff8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ff8 =
         FUN_140002ddd(FUN_1467598b5,uVar3,L"GeometrySelectionToVertexSelectionDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25ff8,local_108,local_100);
  if (DAT_14cc25ff8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ff8 =
         FUN_140002ddd(FUN_1467598b5,uVar3,L"GeometrySelectionToVertexSelectionDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25ff8);
  if (DAT_14cc25ff8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25ff8 =
         FUN_140002ddd(FUN_1467598b5,uVar3,L"GeometrySelectionToVertexSelectionDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25ff8);
  FUN_1446ddc76(local_118,"FGeometrySelectionToVertexSelectionDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e550;
  local_50 = FUN_1497c0588;
  local_78 = FUN_1497c075a;
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



// FUNCTION 145fc93f2 FUN_145fc93f2 body=653 status=ok
// SIG undefined FUN_145fc93f2(void)

void FUN_145fc93f2(void)

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
  FUN_1446ddc76(&local_c8,"FGetFloatOverrideFromAssetDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetFloatOverrideFromAsset",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Overrides",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetFloatOverrideFromAsset",1);
  FUN_1446ddc76(local_108,"FGetFloatOverrideFromAssetDataflowNode",1);
  if (DAT_14cc25bc0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bc0 = FUN_140002ddd(FUN_146758055,uVar3,L"GetFloatOverrideFromAssetDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25bc0,local_108,local_100);
  if (DAT_14cc25bc0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bc0 = FUN_140002ddd(FUN_146758055,uVar3,L"GetFloatOverrideFromAssetDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25bc0);
  if (DAT_14cc25bc0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bc0 = FUN_140002ddd(FUN_146758055,uVar3,L"GetFloatOverrideFromAssetDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25bc0);
  FUN_1446ddc76(local_118,"FGetFloatOverrideFromAssetDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e010;
  local_50 = FUN_1497ba3c6;
  local_78 = FUN_1497ba654;
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



// FUNCTION 145fc9680 FUN_145fc9680 body=653 status=ok
// SIG undefined FUN_145fc9680(void)

void FUN_145fc9680(void)

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
  FUN_1446ddc76(&local_c8,"FGetIntOverrideFromAssetDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetIntOverrideFromAsset",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Overrides",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetIntOverrideFromAsset",1);
  FUN_1446ddc76(local_108,"FGetIntOverrideFromAssetDataflowNode",1);
  if (DAT_14cc25bd8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bd8 = FUN_140002ddd(FUN_1467580eb,uVar3,L"GetIntOverrideFromAssetDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25bd8,local_108,local_100);
  if (DAT_14cc25bd8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bd8 = FUN_140002ddd(FUN_1467580eb,uVar3,L"GetIntOverrideFromAssetDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25bd8);
  if (DAT_14cc25bd8 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bd8 = FUN_140002ddd(FUN_1467580eb,uVar3,L"GetIntOverrideFromAssetDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25bd8);
  FUN_1446ddc76(local_118,"FGetIntOverrideFromAssetDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e030;
  local_50 = FUN_1497ba68c;
  local_78 = FUN_1497ba7fe;
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



// FUNCTION 145fc990e FUN_145fc990e body=653 status=ok
// SIG undefined FUN_145fc990e(void)

void FUN_145fc990e(void)

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
  FUN_1446ddc76(&local_c8,"FGetBoolOverrideFromAssetDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetBoolOverrideFromAsset",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Overrides",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetBoolOverrideFromAsset",1);
  FUN_1446ddc76(local_108,"FGetBoolOverrideFromAssetDataflowNode",1);
  if (DAT_14cc25bf0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bf0 = FUN_140002ddd(FUN_146758181,uVar3,L"GetBoolOverrideFromAssetDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25bf0,local_108,local_100);
  if (DAT_14cc25bf0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bf0 = FUN_140002ddd(FUN_146758181,uVar3,L"GetBoolOverrideFromAssetDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25bf0);
  if (DAT_14cc25bf0 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25bf0 = FUN_140002ddd(FUN_146758181,uVar3,L"GetBoolOverrideFromAssetDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25bf0);
  FUN_1446ddc76(local_118,"FGetBoolOverrideFromAssetDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e050;
  local_50 = FUN_1497ba836;
  local_78 = FUN_1497ba9aa;
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



// FUNCTION 145fc9b9c FUN_145fc9b9c body=653 status=ok
// SIG undefined FUN_145fc9b9c(void)

void FUN_145fc9b9c(void)

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
  FUN_1446ddc76(&local_c8,"FGetStringOverrideFromAssetDataflowNode",1);
  FUN_1446ddc76(&local_d0,"GetStringOverrideFromAsset",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection|Overrides",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"GetStringOverrideFromAsset",1);
  FUN_1446ddc76(local_108,"FGetStringOverrideFromAssetDataflowNode",1);
  if (DAT_14cc25c08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c08 = FUN_140002ddd(FUN_146758217,uVar3,L"GetStringOverrideFromAssetDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25c08,local_108,local_100);
  if (DAT_14cc25c08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c08 = FUN_140002ddd(FUN_146758217,uVar3,L"GetStringOverrideFromAssetDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25c08);
  if (DAT_14cc25c08 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c08 = FUN_140002ddd(FUN_146758217,uVar3,L"GetStringOverrideFromAssetDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25c08);
  FUN_1446ddc76(local_118,"FGetStringOverrideFromAssetDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e070;
  local_50 = FUN_1497ba9e2;
  local_78 = FUN_1497bab5e;
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



// FUNCTION 145fc9e2a FUN_145fc9e2a body=653 status=ok
// SIG undefined FUN_145fc9e2a(void)

void FUN_145fc9e2a(void)

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
  FUN_1446ddc76(&local_c8,"FUniformPointSamplingDataflowNode",1);
  FUN_1446ddc76(&local_d0,"UniformPointSampling",1);
  FUN_1446ddc76(&local_d8,"PointSampling",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"UniformPointSampling",1);
  FUN_1446ddc76(local_108,"FUniformPointSamplingDataflowNode",1);
  if (DAT_14cc25c20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c20 = FUN_140002ddd(FUN_1467582ad,uVar3,L"UniformPointSamplingDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25c20,local_108,local_100);
  if (DAT_14cc25c20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c20 = FUN_140002ddd(FUN_1467582ad,uVar3,L"UniformPointSamplingDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25c20);
  if (DAT_14cc25c20 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c20 = FUN_140002ddd(FUN_1467582ad,uVar3,L"UniformPointSamplingDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25c20);
  FUN_1446ddc76(local_118,"FUniformPointSamplingDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e0b0;
  local_50 = FUN_1497bad3c;
  local_78 = FUN_1497bb05c;
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



// FUNCTION 145fca0b8 FUN_145fca0b8 body=653 status=ok
// SIG undefined FUN_145fca0b8(void)

void FUN_145fca0b8(void)

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
  FUN_1446ddc76(&local_c8,"FNonUniformPointSamplingDataflowNode",1);
  FUN_1446ddc76(&local_d0,"NonUniformPointSampling",1);
  FUN_1446ddc76(&local_d8,"PointSampling",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"NonUniformPointSampling",1);
  FUN_1446ddc76(local_108,"FNonUniformPointSamplingDataflowNode",1);
  if (DAT_14cc25c38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c38 = FUN_140002ddd(FUN_146758343,uVar3,L"NonUniformPointSamplingDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25c38,local_108,local_100);
  if (DAT_14cc25c38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c38 = FUN_140002ddd(FUN_146758343,uVar3,L"NonUniformPointSamplingDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25c38);
  if (DAT_14cc25c38 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c38 = FUN_140002ddd(FUN_146758343,uVar3,L"NonUniformPointSamplingDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25c38);
  FUN_1446ddc76(local_118,"FNonUniformPointSamplingDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e0d0;
  local_50 = FUN_1497bb094;
  local_78 = FUN_1497bb498;
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



// FUNCTION 145fca346 FUN_145fca346 body=653 status=ok
// SIG undefined FUN_145fca346(void)

void FUN_145fca346(void)

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
  FUN_1446ddc76(&local_c8,"FVertexWeightedPointSamplingDataflowNode",1);
  FUN_1446ddc76(&local_d0,"VertexWeightedPointSampling",1);
  FUN_1446ddc76(&local_d8,"PointSampling",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"VertexWeightedPointSampling",1);
  FUN_1446ddc76(local_108,"FVertexWeightedPointSamplingDataflowNode",1);
  if (DAT_14cc25c50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c50 = FUN_140002ddd(FUN_1467583d9,uVar3,L"VertexWeightedPointSamplingDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc25c50,local_108,local_100);
  if (DAT_14cc25c50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c50 = FUN_140002ddd(FUN_1467583d9,uVar3,L"VertexWeightedPointSamplingDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc25c50);
  if (DAT_14cc25c50 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc25c50 = FUN_140002ddd(FUN_1467583d9,uVar3,L"VertexWeightedPointSamplingDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc25c50);
  FUN_1446ddc76(local_118,"FVertexWeightedPointSamplingDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6e0f0;
  local_50 = FUN_1497bb4d0;
  local_78 = FUN_1497bb91e;
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



// FUNCTION 145fca5d4 FUN_145fca5d4 body=653 status=ok
// SIG undefined FUN_145fca5d4(void)

void FUN_145fca5d4(void)

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
  FUN_1446ddc76(&local_c8,"FTransformCollectionAttributeDataflowNode",1);
  FUN_1446ddc76(&local_d0,"TransformCollectionAttribute",1);
  FUN_1446ddc76(&local_d8,"GeometryCollection",1);
  FUN_1400b22c2(local_e8,&DAT_149e02088);
  FUN_1446ddc76(local_100,"TransformCollectionAttribute",1);
  FUN_1446ddc76(local_108,"FTransformCollectionAttributeDataflowNode",1);
  if (DAT_14cc26120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar3,L"TransformCollectionAttributeDataflowNode");
  }
  FUN_1406751de(local_f8,DAT_14cc26120,local_108,local_100);
  if (DAT_14cc26120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar3,L"TransformCollectionAttributeDataflowNode");
  }
  uVar1 = FUN_1403ed7aa(DAT_14cc26120);
  if (DAT_14cc26120 == 0) {
    uVar3 = FUN_140a6b3ed();
    DAT_14cc26120 = FUN_140002ddd(FUN_14675b421,uVar3,L"TransformCollectionAttributeDataflowNode");
  }
  uVar2 = FUN_1403ed7ae(DAT_14cc26120);
  FUN_1446ddc76(local_118,"FTransformCollectionAttributeDataflowNode",1);
  FUN_140d9ac66(&local_110,local_118);
  local_128 = local_110;
  local_148 = local_e8;
  local_140 = local_f8;
  local_138 = uVar1;
  local_130 = uVar2;
  FUN_140d7e4ae(local_c0,local_c8,local_d0,local_d8);
  uVar3 = FUN_1414c23f2();
  local_68 = 0;
  local_58 = &PTR_LAB_14be6ff50;
  local_50 = FUN_1497c5c28;
  local_78 = FUN_1497c5e12;
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



// FUNCTION 145fca862 FUN_145fca862 body=854 status=ok
// SIG undefined FUN_145fca862(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fca862(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  uint local_f0;
  int iStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_e0;
  undefined1 *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_bc [4];
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  _DAT_14c99cf40 = 0;
  _DAT_14c99cf48 = 0;
  DAT_14c99cf20 = 0;
  _DAT_14c99cf28 = 0;
  _DAT_14c99cf4c = 0xffffffff00000080;
  DAT_14c99cf54 = 0;
  DAT_14c99cf60 = (undefined *)0x0;
  DAT_14c99cf68 = 0;
  _DAT_14c99cf70 = 0;
  lVar8 = FUN_1415ac8a0();
  lVar10 = *(longlong *)(lVar8 + 0x110);
  if (lVar10 == 0) {
    FUN_140aa6c08(lVar8);
    lVar10 = *(longlong *)(lVar8 + 0x110);
  }
  FUN_145fcadd4(lVar10 + 0xd8,local_b8);
  _DAT_14c99cf70 = local_b8[0];
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_145fcacde(local_b8,lVar10 + 0x88);
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  iStack_cc = 0;
  local_c8 = 0;
  iVar14 = 0;
  local_d8 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_e0);
    iVar14 = local_90;
  }
  local_f0 = local_d0;
  iStack_ec = iStack_cc;
  local_e8 = local_c8;
  local_e4 = local_c4;
  local_100 = local_e0;
  local_f8 = local_d8;
  local_108 = local_b8;
  if ((iStack_cc != iVar14) || (local_d8 != local_a8)) {
LAB_145fcaa30:
    lVar10 = *local_108 + (longlong)iStack_ec * 0x30;
    if (DAT_14c99cf28 != DAT_14c99cf54) {
      lVar8 = *(longlong *)(*local_108 + (longlong)iStack_ec * 0x30);
      uVar2 = (uint)((ulonglong)lVar8 >> 0x10);
      uVar12 = (uint)lVar8 & 0xffff;
      puVar9 = DAT_14c99cf60;
      if (DAT_14c99cf60 == (undefined *)0x0) {
        puVar9 = &DAT_14c99cf58;
      }
      iVar11 = *(int *)(puVar9 + (ulonglong)
                                 (DAT_14c99cf68 - 1U &
                                 (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar12) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4)) * 4);
      for (iVar1 = iVar11; iVar1 != -1;
          iVar1 = *(int *)((longlong)iVar1 * 0x30 + DAT_14c99cf20 + 0x28)) {
        if (*(longlong *)(DAT_14c99cf20 + (longlong)iVar1 * 0x30) == lVar8) {
          goto LAB_145fcaaae;
        }
      }
    }
    local_d8 = (undefined1 *)(lVar10 + 8);
    local_e0 = lVar10;
    FUN_1415ac986(&DAT_14c99cf20,local_bc,&local_e0,0);
    goto LAB_145fcaa74;
  }
LAB_145fca9b4:
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_145fcabba(local_b8);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar11 = *(int *)(lVar13 + 0x28), iVar11 != -1) {
LAB_145fcaaae:
    lVar13 = DAT_14c99cf20 + (longlong)iVar11 * 0x30;
    if (*(longlong *)(DAT_14c99cf20 + (longlong)iVar11 * 0x30) == lVar8) goto LAB_145fcaba3;
  }
  lVar13 = 0;
LAB_145fcaba3:
  uVar3 = *(undefined4 *)(lVar10 + 8);
  uVar4 = *(undefined4 *)(lVar10 + 0xc);
  uVar5 = *(undefined4 *)(lVar10 + 0x10);
  uVar6 = *(undefined4 *)(lVar10 + 0x14);
  uVar7 = *(undefined8 *)(lVar10 + 0x20);
  *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 *)(lVar13 + 0x20) = uVar7;
  *(undefined4 *)(lVar13 + 8) = uVar3;
  *(undefined4 *)(lVar13 + 0xc) = uVar4;
  *(undefined4 *)(lVar13 + 0x10) = uVar5;
  *(undefined4 *)(lVar13 + 0x14) = uVar6;
LAB_145fcaa74:
  local_f0 = local_f0 & ~local_100._4_4_;
  FUN_1449c0562(&local_100);
  if (((iStack_ec != iVar14) || (local_f8 != local_a8)) || (local_108 != local_b8))
  goto LAB_145fcaa30;
  goto LAB_145fca9b4;
}



// FUNCTION 145fcabba FUN_145fcabba body=55 status=ok
// SIG undefined FUN_145fcabba(void)

void FUN_145fcabba(longlong *param_1)

{
  FUN_145fcabf2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fcabf2 FUN_145fcabf2 body=121 status=ok
// SIG undefined FUN_145fcabf2(void)

void FUN_145fcabf2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_145fcac6c(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145fcac6c FUN_145fcac6c body=113 status=ok
// SIG undefined FUN_145fcac6c(void)

void FUN_145fcac6c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,4);
  }
  return;
}



// FUNCTION 145fcacde FUN_145fcacde body=122 status=ok
// SIG undefined FUN_145fcacde(void)

longlong FUN_145fcacde(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_145fcad58(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145fcad58 FUN_145fcad58 body=123 status=ok
// SIG undefined FUN_145fcad58(void)

undefined8 * FUN_145fcad58(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145fcabf2(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_145faae12(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x30);
    }
  }
  return param_1;
}



// FUNCTION 145fcadd4 FUN_145fcadd4 body=189 status=ok
// SIG undefined FUN_145fcadd4(void)

undefined8 FUN_145fcadd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149fb8e80;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149fb8e10;
  puVar1[3] = &DAT_14c99cf20;
  puVar1[4] = FUN_146fb8c3a;
  FUN_145fcae92(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcae92 FUN_145fcae92 body=216 status=ok
// SIG undefined FUN_145fcae92(void)

undefined8 * FUN_145fcae92(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcaf84 FUN_145fcaf84 body=222 status=ok
// SIG undefined FUN_145fcaf84(void)

undefined8 * FUN_145fcaf84(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_14480568a(param_1,uVar1);
  *param_1 = &PTR_FUN_14a1d8ee0;
  param_1[5] = &PTR_LAB_14a1d98e0;
  param_1[6] = &PTR_LAB_14a1d9920;
  param_1[0x55] = &PTR_LAB_14a1d9970;
  param_1[0x56] = &PTR_LAB_14a1d99f0;
  param_1[0x57] = &PTR_LAB_14a1d9a00;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  FUN_14057a3b2(param_1,1,1,1);
  FUN_140613f88(param_1,&DAT_14c846480,0,0,0);
  return param_1;
}



// FUNCTION 145fcb062 FUN_145fcb062 body=278 status=ok
// SIG undefined FUN_145fcb062(void)

undefined * FUN_145fcb062(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e9098) {
    FUN_144b3d300(&DAT_14c9e9098);
    if (DAT_14c9e9098 == -1) {
      FUN_1415ad18c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"IndirectLightingCache";
      local_78 = L"FIndirectLightingCacheUniformParameters";
      local_50 = 0x110;
      local_58 = 0x18;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e9018,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ce724a);
      _Init_thread_footer(&DAT_14c9e9098);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e9018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcb17a FUN_145fcb17a body=138 status=ok
// SIG undefined FUN_145fcb17a(void)

code * FUN_145fcb17a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DirectionalLightShadowing";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x104;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcb28e;
}



// FUNCTION 145fcb204 FUN_145fcb204 body=138 status=ok
// SIG undefined FUN_145fcb204(void)

code * FUN_145fcb204(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectLightingSHCoefficients2";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d724a;
}



// FUNCTION 145fcb28e FUN_145fcb28e body=138 status=ok
// SIG undefined FUN_145fcb28e(void)

code * FUN_145fcb28e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointSkyBentNormal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d735e;
}



// FUNCTION 145fcb318 FUN_145fcb318 body=226 status=ok
// SIG undefined FUN_145fcb318(void)

longlong * FUN_145fcb318(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146305060;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcb3fc FUN_145fcb3fc body=144 status=ok
// SIG undefined FUN_145fcb3fc(void)

code * FUN_145fcb3fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144886e74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"OpaqueBasePass";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FOpaqueBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb0000000a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1463050e8;
}



// FUNCTION 145fcb48c FUN_145fcb48c body=144 status=ok
// SIG undefined FUN_145fcb48c(void)

code * FUN_145fcb48c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d50964();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MobileBasePass";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc0000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145fcb3fc;
}



// FUNCTION 145fcb51c FUN_145fcb51c body=146 status=ok
// SIG undefined FUN_145fcb51c(void)

code * FUN_145fcb51c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a888ee();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionCapture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FReflectionCaptureShaderData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca41b90;
  return FUN_146305178;
}



// FUNCTION 145fcb5ae FUN_145fcb5ae body=278 status=ok
// SIG undefined FUN_145fcb5ae(void)

undefined * FUN_145fcb5ae(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8d848) {
    FUN_144b3d300(&DAT_14ca8d848);
    if (DAT_14ca8d848 == -1) {
      FUN_145fcb6c6(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"NV12ConvertUB";
      local_78 = L"FNV12ConvertUB";
      local_50 = 0xc0;
      local_58 = 0xca;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8d7c8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f724e);
      _Init_thread_footer(&DAT_14ca8d848);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8d7c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcb6c6 FUN_145fcb6c6 body=226 status=ok
// SIG undefined FUN_145fcb6c6(void)

longlong * FUN_145fcb6c6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14631ca3c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcb7aa FUN_145fcb7aa body=138 status=ok
// SIG undefined FUN_145fcb7aa(void)

code * FUN_145fcb7aa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ToneMapMethod";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000000cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423672;
}



// FUNCTION 145fcb834 FUN_145fcb834 body=138 status=ok
// SIG undefined FUN_145fcb834(void)

code * FUN_145fcb834(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SRV_UV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742355e;
}



// FUNCTION 145fcb8be FUN_145fcb8be body=138 status=ok
// SIG undefined FUN_145fcb8be(void)

code * FUN_145fcb8be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputWidth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474236fc;
}



// FUNCTION 145fcb948 FUN_145fcb948 body=278 status=ok
// SIG undefined FUN_145fcb948(void)

undefined * FUN_145fcb948(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8da08) {
    FUN_144b3d300(&DAT_14ca8da08);
    if (DAT_14ca8da08 == -1) {
      FUN_145fcba60(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"NV12ConvertAsBytesUB";
      local_78 = L"FNV12ConvertAsBytesUB";
      local_50 = 0xb0;
      local_58 = 0x106;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8d988,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f735a);
      _Init_thread_footer(&DAT_14ca8da08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8d988;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcba60 FUN_145fcba60 body=226 status=ok
// SIG undefined FUN_145fcba60(void)

longlong * FUN_145fcba60(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14631cb4c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcbb44 FUN_145fcbb44 body=138 status=ok
// SIG undefined FUN_145fcbb44(void)

code * FUN_145fcbb44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x840000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcbbce;
}



// FUNCTION 145fcbbce FUN_145fcbbce body=138 status=ok
// SIG undefined FUN_145fcbbce(void)

code * FUN_145fcbbce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputWidth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000109;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcbc58;
}



// FUNCTION 145fcbc58 FUN_145fcbc58 body=138 status=ok
// SIG undefined FUN_145fcbc58(void)

code * FUN_145fcbc58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000108;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423a36;
}



// FUNCTION 145fcbce2 FUN_145fcbce2 body=278 status=ok
// SIG undefined FUN_145fcbce2(void)

undefined * FUN_145fcbce2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8ee70) {
    FUN_144b3d300(&DAT_14ca8ee70);
    if (DAT_14ca8ee70 == -1) {
      FUN_145fcbdfa(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YUVv210ConvertUB";
      local_78 = L"FYUVv210ConvertUB";
      local_50 = 0xa0;
      local_58 = 0x2a9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8edf0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7b1a);
      _Init_thread_footer(&DAT_14ca8ee70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8edf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcbdfa FUN_145fcbdfa body=226 status=ok
// SIG undefined FUN_145fcbdfa(void)

longlong * FUN_145fcbdfa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14631d3cc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcbede FUN_145fcbede body=138 status=ok
// SIG undefined FUN_145fcbede(void)

code * FUN_145fcbede(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IsCbY0CrY1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000002ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d454;
}



// FUNCTION 145fcbf68 FUN_145fcbf68 body=138 status=ok
// SIG undefined FUN_145fcbf68(void)

code * FUN_145fcbf68(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputDimY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474250d6;
}



// FUNCTION 145fcbff2 FUN_145fcbff2 body=138 status=ok
// SIG undefined FUN_145fcbff2(void)

code * FUN_145fcbff2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CSTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474251ea;
}



// FUNCTION 145fcc07c FUN_145fcc07c body=278 status=ok
// SIG undefined FUN_145fcc07c(void)

undefined * FUN_145fcc07c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8f1f0) {
    FUN_144b3d300(&DAT_14ca8f1f0);
    if (DAT_14ca8f1f0 == -1) {
      FUN_145fcc194(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ARGB16BigConvertUB";
      local_78 = L"FARGB16BigConvertUB";
      local_50 = 0x60;
      local_58 = 0x2f0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8f170,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7d32);
      _Init_thread_footer(&DAT_14ca8f1f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8f170;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcc194 FUN_145fcc194 body=226 status=ok
// SIG undefined FUN_145fcc194(void)

longlong * FUN_145fcc194(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14631d5ec;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcc278 FUN_145fcc278 body=138 status=ok
// SIG undefined FUN_145fcc278(void)

code * FUN_145fcc278(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000002f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcc302;
}



// FUNCTION 145fcc302 FUN_145fcc302 body=138 status=ok
// SIG undefined FUN_145fcc302(void)

code * FUN_145fcc302(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputHeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x44000002f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d674;
}



// FUNCTION 145fcc38c FUN_145fcc38c body=138 status=ok
// SIG undefined FUN_145fcc38c(void)

code * FUN_145fcc38c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EOTF";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcc278;
}



// FUNCTION 145fcc422 FUN_145fcc422 body=219 status=ok
// SIG undefined FUN_145fcc422(void)

undefined8 * FUN_145fcc422(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a3a6030;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x23] = 0x8000000000000000;
  param_1[0x24] = 0x8000000000000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  return param_1;
}



// FUNCTION 145fcc508 FUN_145fcc508 body=469 status=ok
// SIG undefined FUN_145fcc508(void)

undefined8 * FUN_145fcc508(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4b0510;
  FUN_145fcc6de(param_1 + 0x1f);
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x43] = &PTR_FUN_14a46be50;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x7fffffff;
  *(undefined1 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a492060;
  plVar1 = plVar4 + 2;
  FUN_145fcc79a(plVar1,param_1 + 0x1f);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_140aec6f8(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    param_1[0x1c] = local_38;
    plVar4 = (longlong *)param_1[0x1d];
    if (plVar4 == (longlong *)0x0) goto LAB_145fcc631;
    param_1[0x1d] = 0;
LAB_145fcc683:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_145fcc631;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    param_1[0x1c] = local_38;
    plVar4 = (longlong *)param_1[0x1d];
    if (local_30 != plVar4) {
      param_1[0x1d] = local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_145fcc631;
      goto LAB_145fcc683;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145fcc631;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_145fcc631:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcc6de FUN_145fcc6de body=187 status=ok
// SIG undefined FUN_145fcc6de(void)

void FUN_145fcc6de(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 2;
  *param_1 = &PTR_FUN_14a4abbf0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = DAT_14cab4520;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  return;
}



// FUNCTION 145fcc79a FUN_145fcc79a body=252 status=ok
// SIG undefined FUN_145fcc79a(void)

undefined8 * FUN_145fcc79a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 2;
  param_1[8] = 0;
  param_1[9] = 0x100000000;
  if (DAT_14cab4d20 == 0) {
    uVar3 = FUN_140d2a6db();
    DAT_14cab4d20 = FUN_140002ddd(FUN_1463471df,uVar3,L"MovieSceneActorReferenceData");
    iVar5 = *(int *)(param_1 + 9);
    uVar4 = *(uint *)((longlong)param_1 + 0x4c);
  }
  else {
    iVar5 = 0;
    uVar4 = 1;
  }
  puVar1 = param_1 + 5;
  uVar3 = *(undefined8 *)(DAT_14cab4d20 + 0x18);
  *(uint *)(param_1 + 9) = iVar5 + 1U;
  if (uVar4 < iVar5 + 1U) {
    FUN_1457d67de(puVar1,iVar5);
  }
  puVar2 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar2[(longlong)iVar5 * 3] = uVar3;
  puVar2[(longlong)iVar5 * 3 + 1] = 0;
  (puVar2 + (longlong)iVar5 * 3 + 1)[1] = 0;
  puVar2 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  iVar5 = *(int *)(puVar2 + 2);
  *(uint *)(puVar2 + 2) = iVar5 + 1U;
  if (*(uint *)((longlong)puVar2 + 0x14) < iVar5 + 1U) {
    FUN_140aec898(puVar2 + 1,iVar5);
  }
  *(undefined8 *)(puVar2[1] + (longlong)iVar5 * 8) = param_2;
  return param_1;
}



// FUNCTION 145fcc8a2 FUN_145fcc8a2 body=301 status=ok
// SIG undefined FUN_145fcc8a2(void)

undefined8 * FUN_145fcc8a2(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14a6a9810;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_14020fad6(param_1 + 0x16,L"Switch");
  iVar2 = *(int *)(param_1 + 0x25);
  *(uint *)(param_1 + 0x25) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 300) < iVar2 + 1U) {
    FUN_145fcc9d0(param_1 + 0x24,iVar2);
  }
  lVar3 = param_1[0x24];
  lVar4 = (longlong)iVar2 * 0x30;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  FUN_1446f470e(&local_38,&DAT_149dfb77a,1);
  *(undefined8 *)param_1[0x24] = local_38;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcc9d0 FUN_145fcc9d0 body=147 status=ok
// SIG undefined FUN_145fcc9d0(void)

void FUN_145fcc9d0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145fcca64 FUN_145fcca64 body=278 status=ok
// SIG undefined FUN_145fcca64(void)

undefined * FUN_145fcca64(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade4c8) {
    FUN_144b3d300(&DAT_14cade4c8);
    if (DAT_14cade4c8 == -1) {
      FUN_145fccb7c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"GeometryCollectionVF";
      local_78 = L"FGeometryCollectionVertexFactoryUniformShaderParameters";
      local_50 = 0x40;
      local_58 = 0xd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cade448,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14350f606);
      _Init_thread_footer(&DAT_14cade4c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cade448;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fccb7c FUN_145fccb7c body=226 status=ok
// SIG undefined FUN_145fccb7c(void)

longlong * FUN_145fccb7c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463d0d0e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fccc60 FUN_145fccc60 body=138 status=ok
// SIG undefined FUN_145fccc60(void)

code * FUN_145fccc60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_PackedTangentsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fccd74;
}



// FUNCTION 145fcccea FUN_145fcccea body=138 status=ok
// SIG undefined FUN_145fcccea(void)

code * FUN_145fcccea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_TexCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463d0d96;
}



// FUNCTION 145fccd74 FUN_145fccd74 body=138 status=ok
// SIG undefined FUN_145fccd74(void)

code * FUN_145fccd74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcccea;
}



// FUNCTION 145fccdfe FUN_145fccdfe body=278 status=ok
// SIG undefined FUN_145fccdfe(void)

undefined * FUN_145fccdfe(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3e70) {
    FUN_144b3d300(&DAT_14caf3e70);
    if (DAT_14caf3e70 == -1) {
      FUN_1415ad374(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"EmitterUniforms";
      local_78 = L"FGPUSpriteEmitterUniformParameters";
      local_50 = 0xc0;
      local_58 = 0x2e1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf3df0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435d06d5);
      _Init_thread_footer(&DAT_14caf3e70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf3df0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fccf16 FUN_145fccf16 body=138 status=ok
// SIG undefined FUN_145fccf16(void)

code * FUN_145fccf16(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CameraMotionBlurAmount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000002ef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fccfa0;
}



// FUNCTION 145fccfa0 FUN_145fccfa0 body=138 status=ok
// SIG undefined FUN_145fccfa0(void)

code * FUN_145fccfa0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RotationBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa4000002ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463efd82;
}



// FUNCTION 145fcd02a FUN_145fcd02a body=138 status=ok
// SIG undefined FUN_145fcd02a(void)

code * FUN_145fcd02a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MiscBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002e7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c22354;
}



// FUNCTION 145fcd0b4 FUN_145fcd0b4 body=278 status=ok
// SIG undefined FUN_145fcd0b4(void)

undefined * FUN_145fcd0b4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02bf0) {
    FUN_144b3d300(&DAT_14cb02bf0);
    if (DAT_14cb02bf0 == -1) {
      FUN_1415ad458(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LightmapResourceCluster";
      local_78 = L"FLightmapResourceClusterShaderParameters";
      local_50 = 0x80;
      local_58 = 0x2e7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb02b70,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a2543);
      _Init_thread_footer(&DAT_14cb02bf0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb02b70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcd1cc FUN_145fcd1cc body=138 status=ok
// SIG undefined FUN_145fcd1cc(void)

code * FUN_145fcd1cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VTStaticShadowTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf311c;
}



// FUNCTION 145fcd256 FUN_145fcd256 body=138 status=ok
// SIG undefined FUN_145fcd256(void)

code * FUN_145fcd256(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyOcclusionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf33ce;
}



// FUNCTION 145fcd2e0 FUN_145fcd2e0 body=138 status=ok
// SIG undefined FUN_145fcd2e0(void)

code * FUN_145fcd2e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AOMaterialMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcd256;
}



// FUNCTION 145fcd36a FUN_145fcd36a body=278 status=ok
// SIG undefined FUN_145fcd36a(void)

undefined * FUN_145fcd36a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb09790) {
    FUN_144b3d300(&DAT_14cb09790);
    if (DAT_14cb09790 == -1) {
      FUN_1415ad53c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"SpeedTreeData";
      local_78 = L"FSpeedTreeUniformParameters";
      local_50 = 0x260;
      local_58 = 0x14e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb09710,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14370bc9a);
      _Init_thread_footer(&DAT_14cb09790);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb09710;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcd482 FUN_145fcd482 body=138 status=ok
// SIG undefined FUN_145fcd482(void)

code * FUN_145fcd482(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindAnimation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000161;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56b4c;
}



// FUNCTION 145fcd50c FUN_145fcd50c body=138 status=ok
// SIG undefined FUN_145fcd50c(void)

code * FUN_145fcd50c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindRollingLeafAndDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23000000173;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56336;
}



// FUNCTION 145fcd596 FUN_145fcd596 body=138 status=ok
// SIG undefined FUN_145fcd596(void)

code * FUN_145fcd596(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindRollingBranch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf00000015e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56c60;
}



// FUNCTION 145fcd620 FUN_145fcd620 body=38 status=ok
// SIG undefined FUN_145fcd620(void)

undefined8 FUN_145fcd620(undefined8 param_1,int param_2)

{
  FUN_145fcd646();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fcd646 FUN_145fcd646 body=77 status=ok
// SIG undefined FUN_145fcd646(void)

void FUN_145fcd646(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b411880;
  FUN_1456be52b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145fcd68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145fcd694 FUN_145fcd694 body=25 status=ok
// SIG undefined FUN_145fcd694(void)

undefined8 FUN_145fcd694(undefined8 param_1,undefined8 param_2)

{
  FUN_145fcd6ae(param_2);
  return param_2;
}



// FUNCTION 145fcd6ae FUN_145fcd6ae body=422 status=ok
// SIG undefined FUN_145fcd6ae(void)

longlong * FUN_145fcd6ae(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb89520 != (longlong *)0x0 && DAT_14cb89528 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb89520 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb89520;
    if (DAT_14cb89528 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145fcd77f;
  }
  lVar3 = FUN_14001cc68(0x88,0x10);
  FUN_145fcd856(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b41f030;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145fcd77f;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145fcd77f;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145fcd7fa:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145fcd775;
    }
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong *)(lVar3 + 0x10) = lVar3;
    if (*(longlong **)(lVar3 + 0x18) != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      plVar5 = *(longlong **)(lVar3 + 0x18);
      if (plVar5 != (longlong *)0x0) goto LAB_145fcd7fa;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145fcd775:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_145fcd77f:
  *param_1 = local_38;
  param_1[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145fcd856 FUN_145fcd856 body=127 status=ok
// SIG undefined FUN_145fcd856(void)

undefined8 * FUN_145fcd856(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b41ebc0;
  FUN_1409e1656(param_1 + 4);
  *param_1 = &PTR_FUN_14b41e4a0;
  param_1[4] = &PTR_FUN_14b41e4c0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x500000000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 145fcd8d6 FUN_145fcd8d6 body=40 status=ok
// SIG undefined FUN_145fcd8d6(void)

undefined8 FUN_145fcd8d6(undefined8 param_1,int param_2)

{
  FUN_145fcd8fe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fcd8fe FUN_145fcd8fe body=190 status=ok
// SIG undefined FUN_145fcd8fe(void)

void FUN_145fcd8fe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b445cd0;
  plVar3 = (longlong *)param_1[0x7f];
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
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145fcd9bc FUN_145fcd9bc body=102 status=ok
// SIG undefined FUN_145fcd9bc(void)

ulonglong FUN_145fcd9bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145fcda05:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145fcda05;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145fcda30 FUN_145fcda30 body=52 status=ok
// SIG undefined FUN_145fcda30(void)

void FUN_145fcda30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_145fcda64();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  return;
}



// FUNCTION 145fcda64 FUN_145fcda64 body=177 status=ok
// SIG undefined FUN_145fcda64(void)

undefined8 FUN_145fcda64(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1458b5d10();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcdb16 FUN_145fcdb16 body=55 status=ok
// SIG undefined FUN_145fcdb16(void)

void FUN_145fcdb16(longlong *param_1)

{
  FUN_1415ad620(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fcdb4e FUN_145fcdb4e body=116 status=ok
// SIG undefined FUN_145fcdb4e(void)

void FUN_145fcdb4e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x238,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x238)) {
      uVar2 = uVar1 / 0x238 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x238,8);
  }
  return;
}



// FUNCTION 145fcdbc2 FUN_145fcdbc2 body=62 status=ok
// SIG undefined FUN_145fcdbc2(void)

void FUN_145fcdbc2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145fcdc00(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 145fcdc00 FUN_145fcdc00 body=89 status=ok
// SIG undefined FUN_145fcdc00(void)

ulonglong FUN_145fcdc00(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 145fcdc64 FUN_145fcdc64 body=106 status=ok
// SIG undefined FUN_145fcdc64(void)

void FUN_145fcdc64(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b98b6b0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14124efea(param_1 + 7);
  *param_1 = &PTR_LAB_14b98b6e0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145fcdcca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145fcdcce FUN_145fcdcce body=421 status=ok
// SIG undefined FUN_145fcdcce(void)

void FUN_145fcdcce(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_58 [8];
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145fcde88();
  lVar3 = FUN_14497e828(param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_1403ca142();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) && (param_2 != 0))
       && (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
      uVar2 = FUN_1402d8968(param_2,param_3);
      if (2 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
      }
      FUN_140056680(local_40,L"OakPC_CharSelectCheck");
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar1 = local_50;
      local_48 = 3;
      *local_50 = &PTR_LAB_14b3e9ca0;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_50[2] = lVar4;
      *local_50 = &PTR_FUN_14b995020;
      local_50[3] = 0;
      FUN_14485c47a(local_50 + 3,param_1);
      puVar1[4] = FUN_1441ee1ee;
      *(undefined4 *)(puVar1 + 5) = 0;
      local_68 = 1;
      local_70 = 0x80000;
      local_78 = local_40;
      FUN_1413d987a(param_2,local_58,param_3,&local_50);
      FUN_1449db362(&local_50);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcde88 FUN_145fcde88 body=467 status=ok
// SIG undefined FUN_145fcde88(void)

void FUN_145fcde88(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 *local_58 [2];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_1447210f0();
  if (lVar4 != 0) {
    lVar4 = FUN_1400f6f32(lVar4);
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x68);
      goto LAB_145fcdec6;
    }
  }
  lVar4 = 0;
LAB_145fcdec6:
  FUN_140d27df6(lVar4,local_2c,param_1);
  if ((lVar4 != 0) && (-1 < local_2c[0])) {
    uVar3 = FUN_1402d8968(lVar4,local_2c);
    if ((uVar3 < 8) || (*(longlong *)(param_1 + 0xf48) == 0)) {
      if (*(longlong *)(param_1 + 0x27c8) == 0) {
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        puVar1 = local_40;
        local_38 = 3;
        *local_40 = &PTR_LAB_14b3e9ca0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar2 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        local_40[2] = lVar5;
        *local_40 = &PTR_FUN_14b995020;
        local_40[3] = 0;
        FUN_14485c47a(local_40 + 3,param_1);
        puVar1[4] = FUN_141644b8e;
        *(undefined4 *)(puVar1 + 5) = 0;
        FUN_140056680(local_58,L"PlayerEquipInventory");
        local_68 = 1;
        local_70 = 0x1000000;
        local_78 = local_58;
        FUN_1413d987a(lVar4,&local_48,local_2c,&local_40);
        *(undefined8 *)(param_1 + 0x27c8) = local_48;
        if (local_58[0] != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1449db362(&local_40);
      }
    }
    else {
      local_78 = &local_40;
      FUN_141644b8e(param_1,lVar4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fce05c FUN_145fce05c body=278 status=ok
// SIG undefined FUN_145fce05c(void)

undefined * FUN_145fce05c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfa7e0) {
    FUN_144b3d300(&DAT_14cbfa7e0);
    if (DAT_14cbfa7e0 == -1) {
      FUN_1415ad9dc(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"HairCardsVF";
      local_78 = L"FHairCardsVertexFactoryUniformShaderParameters";
      local_50 = 0xb0;
      local_58 = 0x19;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa760,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14443ac4d);
      _Init_thread_footer(&DAT_14cbfa7e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cbfa760;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fce174 FUN_145fce174 body=138 status=ok
// SIG undefined FUN_145fce174(void)

code * FUN_145fce174(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LayoutIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7386;
}



// FUNCTION 145fce1fe FUN_145fce1fe body=138 status=ok
// SIG undefined FUN_145fce1fe(void)

code * FUN_145fce1fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture0Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a6e22;
}



// FUNCTION 145fce288 FUN_145fce288 body=138 status=ok
// SIG undefined FUN_145fce288(void)

code * FUN_145fce288(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture1Sampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a6d0e;
}



// FUNCTION 145fce31e FUN_145fce31e body=219 status=ok
// SIG undefined FUN_145fce31e(void)

undefined8 * FUN_145fce31e(undefined8 *param_1)

{
  FUN_140d2f8ee();
  *param_1 = &PTR_FUN_14bdb7630;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 1;
  param_1[0x17] = 0x3c23d70a00000032;
  param_1[0x18] = 0x100010101;
  *(undefined2 *)(param_1 + 0x19) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x14;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0x3f0000000000000a;
  param_1[0x1e] = 0x3dcccccd00000000;
  param_1[0x1f] = 0x4024000000000000;
  param_1[0x20] = 0x4044000000000000;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x43dcccccd;
  *(undefined1 **)((longlong)param_1 + 0x114) = &DAT_10000000a;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 1;
  return param_1;
}



// FUNCTION 145fce3fa FUN_145fce3fa body=38 status=ok
// SIG undefined FUN_145fce3fa(void)

undefined8 FUN_145fce3fa(undefined8 param_1,int param_2)

{
  FUN_1415add74();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fce420 FUN_145fce420 body=226 status=ok
// SIG undefined FUN_145fce420(void)

longlong * FUN_145fce420(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463e97a8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fce508 FUN_145fce508 body=132 status=ok
// SIG undefined FUN_145fce508(void)

undefined1 * FUN_145fce508(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_Parameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145fce504;
}



// FUNCTION 145fce58c FUN_145fce58c body=136 status=ok
// SIG undefined FUN_145fce58c(void)

code * FUN_145fce58c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_TexCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ba7f02;
}



// FUNCTION 145fce614 FUN_145fce614 body=54 status=ok
// SIG undefined FUN_145fce614(void)

void FUN_145fce614(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb72108);
  DAT_14cb72100 = 0;
  if (DAT_14cb720f8 != 0) {
    FUN_1400020a8();
  }
  FUN_145fce64a();
  return;
}



// FUNCTION 145fce64a FUN_145fce64a body=54 status=ok
// SIG undefined FUN_145fce64a(void)

void FUN_145fce64a(void)

{
  FUN_145fce680();
  if (DAT_14cb720d8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb720b8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fce680 FUN_145fce680 body=358 status=ok
// SIG undefined FUN_145fce680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fce680(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb720c8;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb720e0 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb720b8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_145fce7e8(*local_58 + (longlong)iStack_3c * 0x98 + 0x10);
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb720c0 = 0;
  if (DAT_14cb720c4 != 0) {
    FUN_140f776e6(&DAT_14cb720b8,0);
  }
  _DAT_14cb720e8 = 0xffffffff;
  DAT_14cb720e0 = 0;
  if (0x80 < DAT_14cb720e4) {
    DAT_14cb720e4 = 0x80;
    FUN_1446efbd8(&DAT_14cb720c8,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fce7e8 FUN_145fce7e8 body=108 status=ok
// SIG undefined FUN_145fce7e8(void)

void FUN_145fce7e8(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_14c872bd8 == '\0') {
    lVar1 = FUN_1408c3c8e(param_1 + 0x50);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      FUN_14480f766(lVar1 + 0x2d8);
    }
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145fce854(param_1);
  return;
}



// FUNCTION 145fce854 FUN_145fce854 body=53 status=ok
// SIG undefined FUN_145fce854(void)

void FUN_145fce854(longlong *param_1)

{
  FUN_145fce88a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145fce88a FUN_145fce88a body=351 status=ok
// SIG undefined FUN_145fce88a(void)

void FUN_145fce88a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140c85ee4(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fce9ea FUN_145fce9ea body=154 status=ok
// SIG undefined FUN_145fce9ea(void)

undefined8 * FUN_145fce9ea(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fcea88(&local_28);
  if (((local_24 == 0 && local_28 == 0) && local_20 == 0) && local_1c == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1407c869a(&local_28,local_38,0);
  FUN_144a6c01e(local_38,param_1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcea88 FUN_145fcea88 body=534 status=ok
// SIG undefined FUN_145fcea88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_145fcea88(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  byte bVar5;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  longlong local_78 [2];
  GUID local_68;
  longlong local_58;
  uchar auStack_50 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  auStack_50[0] = '\0';
  auStack_50[1] = '\0';
  auStack_50[2] = '\0';
  auStack_50[3] = '\0';
  auStack_50[4] = '\0';
  auStack_50[5] = '\0';
  auStack_50[6] = '\0';
  auStack_50[7] = '\0';
  if (((DAT_14c83e758 == 0 && _DAT_14c83e754 == 0) && _DAT_14c83e75c == 0) && _DAT_14c83e760 == 0) {
    FUN_140056680(&local_68,L"MachineId");
    FUN_140056680(local_78,L"Unreal Engine/Identifiers");
    FUN_140056680(local_88,L"Epic Games");
    cVar4 = FUN_14606d744(local_88,local_78,&local_68,&local_58);
    if (cVar4 == '\0') {
      bVar5 = 1;
    }
    else {
      bVar5 = FUN_140b10a34(&local_58,&DAT_14c83e754);
      bVar5 = bVar5 ^ 1;
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    if (local_68._0_8_ != 0) {
      FUN_1400020a8();
    }
    if (bVar5 != 0) {
      local_68.Data1 = 0;
      local_68.Data2 = 0;
      local_68.Data3 = 0;
      local_68.Data4[0] = '\0';
      local_68.Data4[1] = '\0';
      local_68.Data4[2] = '\0';
      local_68.Data4[3] = '\0';
      local_68.Data4[4] = '\0';
      local_68.Data4[5] = '\0';
      local_68.Data4[6] = '\0';
      local_68.Data4[7] = '\0';
      CoCreateGuid(&local_68);
      _DAT_14c83e754 = local_68.Data1;
      DAT_14c83e758._0_2_ = local_68.Data2;
      DAT_14c83e758._2_2_ = local_68.Data3;
      DAT_14c83e75c = local_68.Data4[0];
      DAT_14c83e75c_1._0_1_ = local_68.Data4[1];
      DAT_14c83e75c_1._1_1_ = local_68.Data4[2];
      DAT_14c83e75c_1._2_1_ = local_68.Data4[3];
      DAT_14c83e760 = local_68.Data4[4];
      DAT_14c83e75c_1._4_1_ = local_68.Data4[5];
      DAT_14c83e75c_1._5_1_ = local_68.Data4[6];
      DAT_14c83e75c_1._6_1_ = local_68.Data4[7];
      local_68.Data1 = 0;
      local_68.Data2 = 0;
      local_68.Data3 = 0;
      local_68.Data4[0] = '\0';
      local_68.Data4[1] = '\0';
      local_68.Data4[2] = '\0';
      local_68.Data4[3] = '\0';
      local_68.Data4[4] = '\0';
      local_68.Data4[5] = '\0';
      local_68.Data4[6] = '\0';
      local_68.Data4[7] = '\0';
      FUN_1407c869a(&DAT_14c83e754,&local_68,0);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_58._0_4_ = local_68.Data1;
      local_58._4_2_ = local_68.Data2;
      local_58._6_2_ = local_68.Data3;
      auStack_50[0] = local_68.Data4[0];
      auStack_50[1] = local_68.Data4[1];
      auStack_50[2] = local_68.Data4[2];
      auStack_50[3] = local_68.Data4[3];
      auStack_50[4] = local_68.Data4[4];
      auStack_50[5] = local_68.Data4[5];
      auStack_50[6] = local_68.Data4[6];
      auStack_50[7] = local_68.Data4[7];
      FUN_140056680(&local_68,L"MachineId");
      FUN_140056680(local_78,L"Unreal Engine/Identifiers");
      FUN_140056680(local_88,L"Epic Games");
      cVar4 = FUN_14682f926(local_88,local_78,&local_68,&local_58);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (cVar4 == '\0') {
        _DAT_14c83e754 = 0;
        DAT_14c83e758._0_2_ = 0;
        DAT_14c83e758._2_2_ = 0;
        DAT_14c83e75c = '\0';
        DAT_14c83e75c_1._0_1_ = '\0';
        DAT_14c83e75c_1._1_1_ = '\0';
        DAT_14c83e75c_1._2_1_ = '\0';
        DAT_14c83e760 = '\0';
        DAT_14c83e75c_1._4_1_ = '\0';
        DAT_14c83e75c_1._5_1_ = '\0';
        DAT_14c83e75c_1._6_1_ = '\0';
      }
    }
  }
  uVar1 = DAT_14c83e758;
  uVar2 = _DAT_14c83e75c;
  uVar3 = _DAT_14c83e760;
  *param_1 = _DAT_14c83e754;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fceca0 FUN_145fceca0 body=25 status=ok
// SIG undefined FUN_145fceca0(void)

undefined8 FUN_145fceca0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145fcecba FUN_145fcecba body=94 status=ok
// SIG undefined FUN_145fcecba(void)

undefined8 FUN_145fcecba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_145fced18(lVar2,puVar1 + 1);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[3];
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145fced18 FUN_145fced18 body=79 status=ok
// SIG undefined FUN_145fced18(void)

undefined8 * FUN_145fced18(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148633e48(param_1,iVar1);
      FUN_140070a2a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145fced68 FUN_145fced68 body=99 status=ok
// SIG undefined FUN_145fced68(void)

void FUN_145fced68(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000145fcedc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145fcedaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 145fcedcc FUN_145fcedcc body=78 status=ok
// SIG undefined FUN_145fcedcc(void)

void FUN_145fcedcc(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x288) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + 0x13c) = 0;
  }
  uVar1 = FUN_14001cc68(0x30,0x10);
  FUN_145fcee1a(uVar1,*(undefined8 *)(param_1 + 0x30));
  FUN_140391314(param_1,uVar1);
  return;
}



// FUNCTION 145fcee1a FUN_145fcee1a body=168 status=ok
// SIG undefined FUN_145fcee1a(void)

undefined8 * FUN_145fcee1a(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9cbc30;
  local_18 = param_2;
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(&local_18);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(lVar2 + 0x3c0);
    lVar2 = *(longlong *)(lVar2 + 0x3c8);
    param_1[5] = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fceec4 FUN_145fceec4 body=377 status=ok
// SIG undefined FUN_145fceec4(void)

void FUN_145fceec4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10),&local_28);
  if (local_28 != (longlong *)0x0) {
    lVar5 = (**(code **)(*local_28 + 0x20))(local_28,*(undefined8 *)(param_1 + 0x28));
    if (lVar5 != 0) {
      (**(code **)(*local_28 + 0x28))(local_28,*(undefined8 *)(param_1 + 0x28));
      iVar4 = (**(code **)(*local_28 + 0x448))();
      if (iVar4 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                  (*(longlong **)(param_1 + 0x10),&local_38);
        if (local_38 != (longlong *)0x0) {
          cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x120))();
          if (cVar3 == '\0') {
            (**(code **)(*local_38 + 0x50))();
          }
          (**(code **)(*local_38 + 0x68))();
        }
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x230))
                  (*(longlong **)(param_1 + 0x10),&local_48);
        if (local_48 != 0) {
          FUN_1415ae18e();
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
            }
          }
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcf03e FUN_145fcf03e body=49 status=ok
// SIG undefined FUN_145fcf03e(void)

undefined4 FUN_145fcf03e(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  uVar1 = *(undefined4 *)(param_1 + 0x2c0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x290));
  return uVar1;
}



// FUNCTION 145fcf070 FUN_145fcf070 body=658 status=ok
// SIG undefined FUN_145fcf070(void)

void FUN_145fcf070(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined1 local_b4 [4];
  undefined8 local_b0;
  ushort local_98;
  byte local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_3 != 0) && (*(longlong *)(param_2 + 0x398) != 0)) {
    lVar4 = FUN_144a7b4ca();
    if ((*(longlong *)(param_2 + 0x398) != 0) &&
       ((((lVar4 != 0 && (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x398) + 0x10), lVar1 != 0))
         && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)))) {
      lVar4 = FUN_1403b0700();
      if (((*(longlong *)(lVar4 + 0x38) != 0) && (*(longlong *)(lVar4 + 0x38) != DAT_14cb71810)) &&
         (plVar6 = *(longlong **)(param_2 + 0xa08), plVar6 != (longlong *)0x0)) {
        uVar5 = FUN_1407ca880();
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar5);
        if (plVar6 != (longlong *)0x0) {
          uVar5 = FUN_1407ca880();
          plVar7 = (longlong *)FUN_144718840(plVar6,uVar5);
          if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
            local_68 = 0;
            local_60 = 0;
            local_88 = 0;
            uStack_80 = 0;
            local_5c = 0xffffffff00000080;
            local_54 = 0;
            local_48 = 0;
            local_40 = 0;
            local_98 = 4;
            local_b0 = (undefined8 *)(CONCAT44(local_b0._4_4_,param_4) & 0xffffffff000000ff);
            local_90 = 1;
            local_c8 = &DAT_14cbd3df0;
            local_c0 = &local_b0;
            FUN_140881f5a(&local_88,local_b4,&local_c8,0);
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
            if (pcVar2 != (code *)0x0) {
              puVar8 = &local_b0;
              if (0x18 < local_98) {
                puVar8 = local_b0;
              }
              (*pcVar2)(puVar8);
            }
            if (0x18 < local_98) {
              FUN_1400020a8(local_b0);
            }
            local_d0 = 0;
            FUN_14485c47a(&local_d0,param_2);
            local_b0 = (undefined8 *)local_d0;
            iVar3 = FUN_141340124((longlong *)(param_1 + 0x1e0),
                                  (uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0);
            if (iVar3 != -1) {
              lVar4 = *(longlong *)(param_1 + 0x1e0);
              if ((lVar4 + (longlong)iVar3 * 0x60 != 0) && (lVar4 + (longlong)iVar3 * 0x60 != -8)) {
                FUN_145fcf304(&local_88);
              }
            }
            uVar5 = (**(code **)(*plVar7 + 0x50))(plVar7);
            FUN_14096df60(uVar5,param_3,0,&local_88);
            local_40 = 0;
            if (local_48 != 0) {
              FUN_1400020a8();
            }
            FUN_140333f4e(&local_88);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcf304 FUN_145fcf304 body=399 status=ok
// SIG undefined FUN_145fcf304(void)

void FUN_145fcf304(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_145fcf494(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140882160(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar3 = 0;
  local_50 = plVar1;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (local_50 != plVar1)) {
    do {
      do {
        local_58 = *local_80 + (longlong)iStack_64 * 0x38;
        local_50 = (longlong *)((longlong)iStack_64 * 0x38 + *local_80 + 8);
        FUN_14088374e(param_1,local_34,&local_58,0);
        local_68 = local_68 & ~local_78._4_4_;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar3);
    } while ((local_70 != plVar1) || (local_80 != param_2));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145fcf494 FUN_145fcf494 body=442 status=ok
// SIG undefined FUN_145fcf494(void)

void FUN_145fcf494(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144748838(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447030e2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x38 + lVar2 + -0x34);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xe;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 145fcf64e FUN_145fcf64e body=58 status=ok
// SIG undefined FUN_145fcf64e(void)

void FUN_145fcf64e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140b4b170(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a8af020;
  if (DAT_14cad5b0c < 0x200) {
    FUN_145fcf688();
    return;
  }
  return;
}



// FUNCTION 145fcf688 FUN_145fcf688 body=173 status=ok
// SIG undefined FUN_145fcf688(void)

undefined8 FUN_145fcf688(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x3000;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c842100];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x3000,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0x1ff < (int)(uVar3 / 0x18)) {
    uVar4 = uVar3 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != DAT_14cad5b0c) {
    DAT_14cad5b0c = (int)uVar4;
    uVar2 = FUN_1446f8d3c(&DAT_14cad5b00,DAT_14cad5b08,uVar4,0x18,8);
  }
  return uVar2;
}



// FUNCTION 145fcf736 FUN_145fcf736 body=40 status=ok
// SIG undefined FUN_145fcf736(void)

undefined8 FUN_145fcf736(undefined8 param_1,int param_2)

{
  FUN_1415ae37e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fcf76a FUN_145fcf76a body=220 status=ok
// SIG undefined FUN_145fcf76a(void)

undefined8 * FUN_145fcf76a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1413d1192();
  param_1[0x21] = &DAT_3f8000003f800000;
  param_1[0x22] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 **)((longlong)param_1 + 0x11c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x124) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = &DAT_3f8000003f800000;
  param_1[0x27] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x4000000040000000;
  *param_1 = &PTR_FUN_14aec0e30;
  uVar1 = DAT_14c8464e8;
  param_1[0x2b] = DAT_14c8464e0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = DAT_14c8464f0;
  param_1[0x2e] = &DAT_3f8000003f800000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3ff0000000000000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3ff0000000000000;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x10001;
  return param_1;
}



// FUNCTION 145fcf862 FUN_145fcf862 body=203 status=ok
// SIG undefined FUN_145fcf862(void)

void FUN_145fcf862(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar8 = false;
  do {
    lVar6 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar6) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar6), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4,param_5),
           cVar4 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar8) {
          return;
        }
        goto LAB_145fcf913;
      }
    }
    uVar5 = uVar7 - 1;
    bVar8 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145fcf913:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145fcf92e FUN_145fcf92e body=226 status=ok
// SIG undefined FUN_145fcf92e(void)

longlong * FUN_145fcf92e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463149ea;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcfa16 FUN_145fcfa16 body=144 status=ok
// SIG undefined FUN_145fcfa16(void)

code * FUN_145fcfa16(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000551;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146314b02;
}



// FUNCTION 145fcfaa6 FUN_145fcfaa6 body=146 status=ok
// SIG undefined FUN_145fcfaa6(void)

code * FUN_145fcfaa6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1403f0ce6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TraceVolumetricCloudParamsUB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRenderVolumetricCloudGlobalParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000552;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca69a28;
  return FUN_145fcfa16;
}



// FUNCTION 145fcfb38 FUN_145fcfb38 body=289 status=ok
// SIG undefined FUN_145fcfb38(void)

undefined * FUN_145fcfb38(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d5a80) {
    FUN_144b3d300(&DAT_14c9d5a80);
    if (DAT_14c9d5a80 == -1) {
      FUN_145fcfc5a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"DeepRasterPass";
      local_78 = L"FHairDeepShadowRasterUniformParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d5a00,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c59915);
      _Init_thread_footer(&DAT_14c9d5a80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d5a00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcfc5a FUN_145fcfc5a body=226 status=ok
// SIG undefined FUN_145fcfc5a(void)

longlong * FUN_145fcfc5a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ca90e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcfd3e FUN_145fcfd3e body=132 status=ok
// SIG undefined FUN_145fcfd3e(void)

undefined1 * FUN_145fcfd3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasSlotIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471867c4;
}



// FUNCTION 145fcfdc2 FUN_145fcfdc2 body=138 status=ok
// SIG undefined FUN_145fcfdc2(void)

code * FUN_145fcfdc2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LayerDepths";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcfd3e;
}



// FUNCTION 145fcfe4c FUN_145fcfe4c body=138 status=ok
// SIG undefined FUN_145fcfe4c(void)

code * FUN_145fcfe4c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FrontDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcfdc2;
}



// FUNCTION 145fcfed6 FUN_145fcfed6 body=289 status=ok
// SIG undefined FUN_145fcfed6(void)

undefined * FUN_145fcfed6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d7718) {
    FUN_144b3d300(&DAT_14c9d7718);
    if (DAT_14c9d7718 == -1) {
      FUN_145fcfff8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"MaterialPassParameters";
      local_78 = L"FVisibilityMaterialPassUniformParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x376;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d7698,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c6603f);
      _Init_thread_footer(&DAT_14c9d7718);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d7698;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fcfff8 FUN_145fcfff8 body=226 status=ok
// SIG undefined FUN_145fcfff8(void)

longlong * FUN_145fcfff8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cbf62;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd00dc FUN_145fd00dc body=132 status=ok
// SIG undefined FUN_145fd00dc(void)

undefined1 * FUN_145fd00dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x377;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14718b76e;
}



// FUNCTION 145fd0160 FUN_145fd0160 body=138 status=ok
// SIG undefined FUN_145fd0160(void)

code * FUN_145fd0160(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutNodeData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FPackedHairSample>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000381;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718b3a8;
}



// FUNCTION 145fd01ea FUN_145fd01ea body=138 status=ok
// SIG undefined FUN_145fd01ea(void)

code * FUN_145fd01ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TotalNodeCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000037d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718b4bc;
}



// FUNCTION 145fd0274 FUN_145fd0274 body=281 status=ok
// SIG undefined FUN_145fd0274(void)

void FUN_145fd0274(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_40 = 0;
  local_38 = 0x19100;
  local_30 = 0;
  FUN_1446ef920();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_40;
  local_50 = local_38;
  local_48 = 0;
  uVar1 = FUN_145fd038e(local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd038e FUN_145fd038e body=65 status=ok
// SIG undefined FUN_145fd038e(void)

undefined8 FUN_145fd038e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_14114f501();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    uVar3 = FUN_140a6b362(param_2);
    uVar2 = FUN_14117f118(uVar2,uVar3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145fd03d6 FUN_145fd03d6 body=111 status=ok
// SIG undefined FUN_145fd03d6(void)

void FUN_145fd03d6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1415ae43e();
  local_40 = 0;
  FUN_14485c47a(&local_40,uVar1);
  local_38 = &local_40;
  local_30 = param_1;
  FUN_145fd0446(param_2,local_24);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd0446 FUN_145fd0446 body=337 status=ok
// SIG undefined FUN_145fd0446(void)

undefined4 * FUN_145fd0446(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145fd0654(param_1,local_48);
  plVar1 = (longlong *)param_3[1];
  uVar5 = *(undefined8 *)*param_3;
  *local_40 = uVar5;
  lVar9 = *plVar1;
  local_40[2] = lVar9;
  local_40[4] = 0;
  if (lVar9 != 0) {
    plVar6 = plVar1 + 4;
    if ((longlong *)plVar1[2] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar1[2];
    }
    (**(code **)*plVar6)(plVar6,local_40 + 4);
    uVar5 = *local_40;
  }
  *(undefined4 *)(local_40 + 10) = 0xffffffff;
  local_4c = local_48[0];
  uVar10 = (uint)((ulonglong)uVar5 >> 0x20) ^ (uint)uVar5;
  cVar3 = FUN_145fd0598(param_1,uVar10,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar4) {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar10 = *(int *)(param_1 + 0x48) - 1U & uVar10;
      *(uint *)((longlong)local_40 + 0x54) = uVar10;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 10) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar10) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_145fd0744(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd0598 FUN_145fd0598 body=186 status=ok
// SIG undefined FUN_145fd0598(void)

undefined8 FUN_145fd0598(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  void *_Dst;
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_38 = *param_3;
    iVar1 = FUN_1487bf05c();
    if (iVar1 != -1) {
      _Dst = (void *)(*param_1 + (longlong)iVar1 * 0x60);
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar1 * 0x60) != 0) {
        plVar3 = (longlong *)((longlong)_Dst + 0x30);
        if (*(longlong **)((longlong)_Dst + 0x20) != (longlong *)0x0) {
          plVar3 = *(longlong **)((longlong)_Dst + 0x20);
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      memmove(_Dst,param_3,0x50);
      FUN_1487bf11a(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_145fd05be;
    }
  }
  uVar2 = 0;
LAB_145fd05be:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd0654 FUN_145fd0654 body=239 status=ok
// SIG undefined FUN_145fd0654(void)

int * FUN_145fd0654(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1401284dc(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 145fd0744 FUN_145fd0744 body=449 status=ok
// SIG undefined FUN_145fd0744(void)

void FUN_145fd0744(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145fd0906 FUN_145fd0906 body=343 status=ok
// SIG undefined FUN_145fd0906(void)

ulonglong FUN_145fd0906(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50 [6];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_145fd0a5e();
  if (cVar1 != '\0') {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(int *)(param_1 + 0x158) == -1) goto LAB_145fd09bb;
    local_60 = *param_2;
    local_58 = *(undefined4 *)(param_2 + 1);
    FUN_1448075d0(local_50);
    lVar2 = FUN_14060eaf6(local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (lVar2 == 0) goto LAB_145fd09bb;
    plVar3 = (longlong *)FUN_14050cbd4(lVar2);
    if (plVar3 == (longlong *)0x0) goto LAB_145fd09bb;
    lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar4 = FUN_14050caa6();
    if ((((lVar4 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar4 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)) || ((char)plVar3[0x1a] != '\x01')) goto LAB_145fd09bb;
    lVar2 = FUN_141563480(plVar3 + 0x1b);
    if (lVar2 == 0) goto LAB_145fd09bb;
    cVar1 = FUN_140114204(lVar2 + 0x90);
    if (cVar1 == '\0') goto LAB_145fd09bb;
    uVar5 = FUN_148843e08(param_1);
    lVar4 = FUN_1412d7211(uVar5);
    if (lVar4 == 0) goto LAB_145fd09bb;
    local_50[0] = *(undefined4 *)(param_1 + 0x158);
    plVar3 = (longlong *)FUN_143d2992a(lVar4);
    if (plVar3 == (longlong *)0x0) goto LAB_145fd09bb;
    cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,lVar2 + 0x90);
    if (cVar1 != '\0') goto LAB_145fd09bb;
  }
  uVar6 = 0;
LAB_145fd09bb:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd0a5e FUN_145fd0a5e body=3 status=ok
// SIG undefined FUN_145fd0a5e(void)

undefined1 FUN_145fd0a5e(void)

{
  return 1;
}



// FUNCTION 145fd0a62 FUN_145fd0a62 body=162 status=ok
// SIG undefined FUN_145fd0a62(void)

undefined8 * FUN_145fd0a62(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14ba420c0;
  param_1[4] = param_2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  uVar2 = FUN_145fd0b04(param_2);
  param_1[5] = uVar2;
  uVar1 = FUN_145fd0b0c(param_1);
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  return param_1;
}



// FUNCTION 145fd0b04 FUN_145fd0b04 body=8 status=ok
// SIG undefined FUN_145fd0b04(void)

undefined8 FUN_145fd0b04(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x148);
}



// FUNCTION 145fd0b0c FUN_145fd0b0c body=132 status=ok
// SIG undefined FUN_145fd0b0c(void)

ulonglong FUN_145fd0b0c(longlong param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0xd8) < 1) {
    FUN_145fd0b92(local_40);
    uVar1 = FUN_1415ae478(local_40,param_1 + 0xd0);
    uVar2 = (ulonglong)uVar1;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd0b92 FUN_145fd0b92 body=105 status=ok
// SIG undefined FUN_145fd0b92(void)

undefined8 * FUN_145fd0b92(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = DAT_14c872cf0;
  _Src = DAT_14c872ce8;
  lVar2 = (longlong)DAT_14c872cf0;
  *(int *)(param_1 + 1) = DAT_14c872cf0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  FUN_140056680(param_1 + 2,L"OnlineSubsystemSteam");
  return param_1;
}



// FUNCTION 145fd0bfc FUN_145fd0bfc body=143 status=ok
// SIG undefined FUN_145fd0bfc(void)

void FUN_145fd0bfc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145fd0c98 FUN_145fd0c98 body=451 status=ok
// SIG undefined FUN_145fd0c98(void)

undefined8 * FUN_145fd0c98(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14ac88ff0;
  *(undefined4 *)(param_1 + 0x16) = 0x1001f;
  param_1[0x17] = "perception";
  FUN_1400b22c2(local_58,"AI.Perception");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14141a7c8();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd0d90;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd0d90:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd0e68 FUN_145fd0e68 body=451 status=ok
// SIG undefined FUN_145fd0e68(void)

undefined8 * FUN_145fd0e68(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14ac89430;
  *(undefined4 *)(param_1 + 0x16) = 0xf;
  param_1[0x17] = &DAT_14ac8d393;
  FUN_1400b22c2(local_58,"AI.Team");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_1405a25e0();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd0f60;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd0f60:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd1038 FUN_145fd1038 body=451 status=ok
// SIG undefined FUN_145fd1038(void)

undefined8 * FUN_145fd1038(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b136720;
  *(undefined4 *)(param_1 + 0x16) = 0x148cfb0c;
  param_1[0x17] = "gbx_discovery_viewable_map_meta_data";
  FUN_1400b22c2(local_58,"Discovery.Viewable Map Meta Data");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_141496b36();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd1130;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd1130:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd1208 FUN_145fd1208 body=451 status=ok
// SIG undefined FUN_145fd1208(void)

undefined8 * FUN_145fd1208(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b18f310;
  *(undefined4 *)(param_1 + 0x16) = 0xdeadbeec;
  param_1[0x17] = "ingredient_list";
  FUN_1400b22c2(local_58,"GbxItem.IngredientList");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_140103600();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd1300;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd1300:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd13d8 FUN_145fd13d8 body=451 status=ok
// SIG undefined FUN_145fd13d8(void)

undefined8 * FUN_145fd13d8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b389760;
  *(undefined4 *)(param_1 + 0x16) = 0x2000;
  param_1[0x17] = "missionset";
  FUN_140056680(local_58,L"Missions.MissionSets");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_140b79a36();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd14d0;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd14d0:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd15a8 FUN_145fd15a8 body=451 status=ok
// SIG undefined FUN_145fd15a8(void)

undefined8 * FUN_145fd15a8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b3925d0;
  *(undefined4 *)(param_1 + 0x16) = 0xb9480acf;
  param_1[0x17] = "activity";
  FUN_1400b22c2(local_58,"Activities.Activities");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_1405dc3a0();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd16a0;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd16a0:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd1778 FUN_145fd1778 body=451 status=ok
// SIG undefined FUN_145fd1778(void)

undefined8 * FUN_145fd1778(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b60cf60;
  *(undefined4 *)(param_1 + 0x16) = 0x401d;
  param_1[0x17] = "challenge";
  FUN_1400b22c2(local_58,"Challenges");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_14054e994();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd1870;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd1870:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd1948 FUN_145fd1948 body=451 status=ok
// SIG undefined FUN_145fd1948(void)

undefined8 * FUN_145fd1948(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b61b950;
  *(undefined4 *)(param_1 + 0x16) = 0x401f;
  param_1[0x17] = "challenge_list";
  FUN_1400b22c2(local_58,"Challenge Lists");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_141221512();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd1a40;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd1a40:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd1b18 FUN_145fd1b18 body=451 status=ok
// SIG undefined FUN_145fd1b18(void)

undefined8 * FUN_145fd1b18(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b6afe60;
  *(undefined4 *)(param_1 + 0x16) = 0xb9480ace;
  param_1[0x17] = "firmware";
  FUN_1400b22c2(local_58,"Inventory.Firmware");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_141008c3c();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd1c10;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd1c10:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd1ce8 FUN_145fd1ce8 body=451 status=ok
// SIG undefined FUN_145fd1ce8(void)

undefined8 * FUN_145fd1ce8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b78b2b0;
  *(undefined4 *)(param_1 + 0x16) = 0xbaddecaf;
  param_1[0x17] = "vending_machine";
  FUN_1400b22c2(local_58,"OakInventoryShopDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_1457512de();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd1de0;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd1de0:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd1eb8 FUN_145fd1eb8 body=451 status=ok
// SIG undefined FUN_145fd1eb8(void)

undefined8 * FUN_145fd1eb8(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b7d1990;
  *(undefined4 *)(param_1 + 0x16) = 0x414e0009;
  param_1[0x17] = "OrderRewind";
  FUN_1400b22c2(local_58,"AI.OrderRewind");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_140350ee2();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd1fb0;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd1fb0:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd2088 FUN_145fd2088 body=451 status=ok
// SIG undefined FUN_145fd2088(void)

undefined8 * FUN_145fd2088(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b803fb0;
  *(undefined4 *)(param_1 + 0x16) = 0xfabdeed0;
  param_1[0x17] = "tracker_location";
  FUN_1400b22c2(local_58,"VaultTracker.TrackerObjectLocationDef");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_1404e6bfe();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145fd2180;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145fd2180:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd224c FUN_145fd224c body=265 status=ok
// SIG undefined FUN_145fd224c(void)

void FUN_145fd224c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_145fd22be:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar8 = 0;
          do {
            uVar5 = *(ushort *)(*plVar3 + lVar8);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(*param_2 + lVar8);
            if (uVar5 == uVar7) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar5)) goto LAB_145fd2318;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_145fd2318;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_145fd231e;
      }
      if (iVar2 + iVar1 == 1) goto LAB_145fd231e;
      goto LAB_145fd233b;
    }
  }
  return;
LAB_145fd2318:
  if (uVar5 == uVar7) {
LAB_145fd231e:
    FUN_145fd2356(param_1);
    return;
  }
LAB_145fd233b:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_145fd22be;
}



// FUNCTION 145fd2356 FUN_145fd2356 body=89 status=ok
// SIG undefined FUN_145fd2356(void)

void FUN_145fd2356(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145fd23b0();
  return;
}



// FUNCTION 145fd23b0 FUN_145fd23b0 body=51 status=ok
// SIG undefined FUN_145fd23b0(void)

void FUN_145fd23b0(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_145fd23e4(param_1,param_2);
  return;
}



// FUNCTION 145fd23e4 FUN_145fd23e4 body=116 status=ok
// SIG undefined FUN_145fd23e4(void)

void FUN_145fd23e4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145fd2464 FUN_145fd2464 body=221 status=ok
// SIG undefined FUN_145fd2464(void)

undefined8 * FUN_145fd2464(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14abe0870;
  param_1[5] = &PTR_FUN_14abe0cf0;
  param_1[6] = &PTR_LAB_14abe0d30;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x9f) = *(byte *)((longlong)param_1 + 0x9f) | 1;
  *(byte *)(param_1 + 0x42) = *(byte *)(param_1 + 0x42) & 0xfc;
  return param_1;
}



// FUNCTION 145fd2542 FUN_145fd2542 body=432 status=ok
// SIG undefined FUN_145fd2542(void)

void FUN_145fd2542(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar1 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0xffffffffffffffff;
  uStack_38 = 0;
  lStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_40;
  uStack_54 = local_40._4_4_;
  uStack_50 = (undefined4)uStack_38;
  uStack_4c = uStack_38._4_4_;
  local_48 = lStack_30;
  if ((lStack_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1415aea72(local_20,plVar1,&local_58);
  if ((DAT_14c950c29 == 1) && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd26fe FUN_145fd26fe body=221 status=ok
// SIG undefined FUN_145fd26fe(void)

undefined8 * FUN_145fd26fe(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = &PTR_LAB_14af10080;
  param_1[0x1d] = &LAB_14850c1c4;
  param_1[0x18] = &LAB_147dfa654;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0;
  memset(param_1 + 0x2b,0,0x100);
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xffffffff;
  *param_1 = &PTR_FUN_14af08fd0;
  param_1[6] = &PTR_LAB_14af09290;
  param_1[0x4e] = &PTR_LAB_14af092d0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 1;
  return param_1;
}



// FUNCTION 145fd27dc FUN_145fd27dc body=45 status=ok
// SIG undefined FUN_145fd27dc(void)

undefined8 FUN_145fd27dc(undefined8 param_1,int param_2)

{
  FUN_145fd280a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 145fd280a FUN_145fd280a body=71 status=ok
// SIG undefined FUN_145fd280a(void)

void FUN_145fd280a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b299fb0;
  param_1[1] = &DAT_14a176f00;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 2);
  return;
}



// FUNCTION 145fd285a FUN_145fd285a body=322 status=ok
// SIG undefined FUN_145fd285a(void)

undefined8 * FUN_145fd285a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14007ca06();
  FUN_144805d84(param_1,uVar1);
  FUN_145af9302(param_1 + 0x22);
  *param_1 = &PTR_FUN_14b453b70;
  param_1[5] = &PTR_FUN_14b453ff0;
  param_1[6] = &PTR_LAB_14b454030;
  param_1[0x22] = &PTR_FUN_14b454080;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined1 *)(param_1 + 9) = 6;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 7;
  FUN_145fd299d(local_40);
  lVar2 = FUN_140081d40(local_40,0);
  if (lVar2 != 0) {
    lVar3 = FUN_140a1dfd8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_145fd2963;
  }
  lVar2 = 0;
LAB_145fd2963:
  param_1[0x51] = lVar2;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd299d FUN_145fd299d body=132 status=ok
// SIG undefined FUN_145fd299d(void)

undefined8 * FUN_145fd299d(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b22c2(&local_38,
                "Material\'/CohtmlPlugin/CohtmlCompositorMaterial.CohtmlCompositorMaterial\'");
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = local_38;
  local_20 = local_30 + -1;
  if (local_30 == 0) {
    local_20 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145fd2a22 FUN_145fd2a22 body=103 status=ok
// SIG undefined FUN_145fd2a22(void)

ulonglong FUN_145fd2a22(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145fd2a6c:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145fd2a6c;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145fd2a98 FUN_145fd2a98 body=40 status=ok
// SIG undefined FUN_145fd2a98(void)

undefined8 FUN_145fd2a98(undefined8 param_1,int param_2)

{
  FUN_1415aec28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145fd2ac0 FUN_145fd2ac0 body=131 status=ok
// SIG undefined FUN_145fd2ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd2ac0(void)

{
  _DAT_14cbcbb90 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(&DAT_14cbcbb98);
  _DAT_14cbcbbf8 = 0;
  _DAT_14cbcbc00 = 0;
  _DAT_14cbcbba8 = 0;
  uRam000000014cbcbbb0 = 0;
  _DAT_14cbcbbb8 = 0;
  uRam000000014cbcbbc0 = 0;
  _DAT_14cbcbbc8 = 0;
  uRam000000014cbcbbd0 = 0;
  _DAT_14cbcbbd8 = 0;
  uRam000000014cbcbbe0 = 0;
  _DAT_14cbcbc04 = 0xffffffff00000080;
  _DAT_14cbcbc0c = 0;
  _DAT_14cbcbc18 = 0;
  _DAT_14cbcbc20 = 0;
  _DAT_14cbcbb90 = &PTR_FUN_14b6040c0;
  return;
}



// FUNCTION 145fd2b44 FUN_145fd2b44 body=131 status=ok
// SIG undefined FUN_145fd2b44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd2b44(void)

{
  _DAT_14cbcc6f0 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(&DAT_14cbcc6f8);
  _DAT_14cbcc758 = 0;
  _DAT_14cbcc760 = 0;
  _DAT_14cbcc708 = 0;
  uRam000000014cbcc710 = 0;
  _DAT_14cbcc718 = 0;
  uRam000000014cbcc720 = 0;
  _DAT_14cbcc728 = 0;
  uRam000000014cbcc730 = 0;
  _DAT_14cbcc738 = 0;
  uRam000000014cbcc740 = 0;
  _DAT_14cbcc764 = 0xffffffff00000080;
  _DAT_14cbcc76c = 0;
  _DAT_14cbcc778 = 0;
  _DAT_14cbcc780 = 0;
  _DAT_14cbcc6f0 = &PTR_FUN_14b92d970;
  return;
}



// FUNCTION 145fd2bd0 FUN_145fd2bd0 body=224 status=ok
// SIG undefined FUN_145fd2bd0(void)

undefined8 * FUN_145fd2bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar1);
  *param_1 = &PTR_FUN_14bcbd7b0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  return param_1;
}



// FUNCTION 145fd2cb0 FUN_145fd2cb0 body=287 status=ok
// SIG undefined FUN_145fd2cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd2cb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09a00) {
    FUN_144b3d300(&DAT_14ca09a00);
    if (DAT_14ca09a00 == -1) {
      FUN_145fd2dd0();
      FUN_140db5666(&DAT_14ca09958,2,&DAT_14ca098f0,L"TMobileBasePassVSFNoLightMapPolicy",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_14723e62a,
                    FUN_14723e602,&LAB_142de8292,&LAB_14723e5fe,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca09958 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de82b4);
      _Init_thread_footer(&DAT_14ca09a00);
    }
  }
  return &DAT_14ca09958;
}



// FUNCTION 145fd2dd0 FUN_145fd2dd0 body=205 status=ok
// SIG undefined FUN_145fd2dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd2dd0(void)

{
  if ((DAT_14ca09957 & 2) == 0) {
    DAT_14ca09957 = DAT_14ca09957 | 2;
    _DAT_14ca098f8 = L"TMobileBasePassVSFNoLightMapPolicy";
    _DAT_14ca09910 = FUN_146826540;
    _DAT_14ca09918 = FUN_146825d77;
    _DAT_14ca09920 = FUN_146825fd6;
    _DAT_14ca09928 = FUN_1407e02ea;
    _DAT_14ca09930 = FUN_146826273;
    _DAT_14ca09908 = FUN_14723e5b6;
    _DAT_14ca09948 = 0xffffffff00000110;
    _DAT_14ca09950 = 8;
    DAT_14ca09954 = 0;
    _DAT_14ca09938 = &LAB_14723e5fa;
    FUN_145fd2e9e();
    FUN_1407e00cc(&DAT_14ca098f0);
    return;
  }
  return;
}



// FUNCTION 145fd2e9e FUN_145fd2e9e body=133 status=ok
// SIG undefined FUN_145fd2e9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd2e9e(void)

{
  _DAT_14ca0ec50 = L"BASE";
  DAT_14ca0ec7a = 4;
  FUN_145fd2f24();
  _DAT_14ca0ec60 = DAT_14ca09900;
  _DAT_14ca0ec58 = &DAT_14ca0ec80;
  _DAT_14ca0ec68 = &LAB_14682652b;
  DAT_14ca09900 = &DAT_14ca0ec50;
  DAT_14ca09955 = DAT_14ca09955 + '\x01';
  _DAT_14ca0ec70 = 0x100000000;
  if (DAT_14ca0ece4 != '\0') {
    DAT_14ca09956 = DAT_14ca09956 + '\x01';
  }
  return;
}



// FUNCTION 145fd2f24 FUN_145fd2f24 body=205 status=ok
// SIG undefined FUN_145fd2f24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd2f24(void)

{
  if ((DAT_14ca0ece7 & 2) == 0) {
    DAT_14ca0ece7 = DAT_14ca0ece7 | 2;
    _DAT_14ca0ec88 = L"TMobileBasePassVSBaseType";
    _DAT_14ca0eca0 = FUN_146826540;
    _DAT_14ca0eca8 = FUN_146825d77;
    _DAT_14ca0ecb0 = FUN_146825fd6;
    _DAT_14ca0ecb8 = FUN_1407e02ea;
    _DAT_14ca0ecc0 = FUN_146826273;
    _DAT_14ca0ec98 = FUN_14724b784;
    _DAT_14ca0ecd8 = 0xffffffff00000110;
    _DAT_14ca0ece0 = 8;
    DAT_14ca0ece4 = 0;
    _DAT_14ca0ecc8 = &LAB_14724b7c8;
    FUN_145fd2ff2();
    FUN_1407e00cc(&DAT_14ca0ec80);
    return;
  }
  return;
}



// FUNCTION 145fd2ff2 FUN_145fd2ff2 body=133 status=ok
// SIG undefined FUN_145fd2ff2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd2ff2(void)

{
  _DAT_14ca0ece8 = L"BASE";
  DAT_14ca0ed12 = 4;
  FUN_145fd3078();
  _DAT_14ca0ecf8 = DAT_14ca0ec90;
  _DAT_14ca0ecf0 = &DAT_14ca0ed18;
  _DAT_14ca0ed00 = &LAB_14682652b;
  DAT_14ca0ec90 = &DAT_14ca0ece8;
  DAT_14ca0ece5 = DAT_14ca0ece5 + '\x01';
  _DAT_14ca0ed08 = 0x100000000;
  if (DAT_14ca0ed7c != '\0') {
    DAT_14ca0ece6 = DAT_14ca0ece6 + '\x01';
  }
  return;
}



// FUNCTION 145fd3078 FUN_145fd3078 body=205 status=ok
// SIG undefined FUN_145fd3078(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3078(void)

{
  if ((DAT_14ca0ed7f & 2) == 0) {
    DAT_14ca0ed7f = DAT_14ca0ed7f | 2;
    _DAT_14ca0ed20 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca0ed38 = FUN_146826540;
    _DAT_14ca0ed40 = FUN_146825d77;
    _DAT_14ca0ed48 = FUN_146825fd6;
    _DAT_14ca0ed50 = FUN_1407e02ea;
    _DAT_14ca0ed58 = FUN_146826273;
    _DAT_14ca0ed30 = FUN_14724b7cc;
    _DAT_14ca0ed70 = 0xffffffff00000110;
    _DAT_14ca0ed78 = 8;
    DAT_14ca0ed7c = 0;
    _DAT_14ca0ed60 = &LAB_14724b810;
    FUN_145fd3146();
    FUN_1407e00cc(&DAT_14ca0ed18);
    return;
  }
  return;
}



// FUNCTION 145fd3146 FUN_145fd3146 body=225 status=ok
// SIG undefined FUN_145fd3146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3146(void)

{
  _DAT_14ca0ed80 = L"BASE";
  DAT_14ca0edaa = 4;
  _DAT_14ca0ed88 = FUN_1411cad6c();
  _DAT_14ca0ed90 = DAT_14ca0ed28;
  _DAT_14ca0ed98 = &LAB_14682652b;
  DAT_14ca0ed28 = &DAT_14ca0ed80;
  DAT_14ca0ed7d = DAT_14ca0ed7d + '\x01';
  _DAT_14ca0eda0 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0ed88 + 100) != '\0') {
    DAT_14ca0ed7e = DAT_14ca0ed7e + '\x01';
  }
  _DAT_14ca0edb0 = L"BASE";
  DAT_14ca0edda = 4;
  _DAT_14ca0edb8 = FUN_141092e92();
  _DAT_14ca0edc0 = DAT_14ca0ed28;
  _DAT_14ca0edc8 = &LAB_14682652b;
  DAT_14ca0ed28 = &DAT_14ca0edb0;
  DAT_14ca0ed7d = DAT_14ca0ed7d + '\x01';
  _DAT_14ca0edd0 = 0x100000000;
  if (*(char *)(_DAT_14ca0edb8 + 100) != '\0') {
    DAT_14ca0ed7e = DAT_14ca0ed7e + '\x01';
  }
  return;
}



// FUNCTION 145fd3228 FUN_145fd3228 body=287 status=ok
// SIG undefined FUN_145fd3228(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd3228(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a218) {
    FUN_144b3d300(&DAT_14ca0a218);
    if (DAT_14ca0a218 == -1) {
      FUN_145fd3348();
      FUN_140db5666(&DAT_14ca0a170,2,&DAT_14ca0a108,L"TMobileBasePassVSTLightMapPolicyLQ",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_14723ebfe,
                    FUN_14723ebd6,&LAB_142de8308,&LAB_14723ebd2,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca0a170 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de832d);
      _Init_thread_footer(&DAT_14ca0a218);
    }
  }
  return &DAT_14ca0a170;
}



// FUNCTION 145fd3348 FUN_145fd3348 body=205 status=ok
// SIG undefined FUN_145fd3348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3348(void)

{
  if ((DAT_14ca0a16f & 2) == 0) {
    DAT_14ca0a16f = DAT_14ca0a16f | 2;
    _DAT_14ca0a110 = L"TMobileBasePassVSTLightMapPolicyLQ";
    _DAT_14ca0a128 = FUN_146826540;
    _DAT_14ca0a130 = FUN_146825d77;
    _DAT_14ca0a138 = FUN_146825fd6;
    _DAT_14ca0a140 = FUN_1407e02ea;
    _DAT_14ca0a148 = FUN_146826273;
    _DAT_14ca0a120 = FUN_14723eb8a;
    _DAT_14ca0a160 = 0xffffffff00000110;
    _DAT_14ca0a168 = 8;
    DAT_14ca0a16c = 0;
    _DAT_14ca0a150 = &LAB_14723ebce;
    FUN_145fd3416();
    FUN_1407e00cc(&DAT_14ca0a108);
    return;
  }
  return;
}



// FUNCTION 145fd3416 FUN_145fd3416 body=133 status=ok
// SIG undefined FUN_145fd3416(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3416(void)

{
  _DAT_14ca0f0f0 = L"BASE";
  DAT_14ca0f11a = 4;
  FUN_145fd349c();
  _DAT_14ca0f100 = DAT_14ca0a118;
  _DAT_14ca0f0f8 = &DAT_14ca0f120;
  _DAT_14ca0f108 = &LAB_14682652b;
  DAT_14ca0a118 = &DAT_14ca0f0f0;
  DAT_14ca0a16d = DAT_14ca0a16d + '\x01';
  _DAT_14ca0f110 = 0x100000000;
  if (DAT_14ca0f184 != '\0') {
    DAT_14ca0a16e = DAT_14ca0a16e + '\x01';
  }
  return;
}



// FUNCTION 145fd349c FUN_145fd349c body=205 status=ok
// SIG undefined FUN_145fd349c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd349c(void)

{
  if ((DAT_14ca0f187 & 2) == 0) {
    DAT_14ca0f187 = DAT_14ca0f187 | 2;
    _DAT_14ca0f128 = L"TMobileBasePassVSBaseType";
    _DAT_14ca0f140 = FUN_146826540;
    _DAT_14ca0f148 = FUN_146825d77;
    _DAT_14ca0f150 = FUN_146825fd6;
    _DAT_14ca0f158 = FUN_1407e02ea;
    _DAT_14ca0f160 = FUN_146826273;
    _DAT_14ca0f138 = FUN_14724ba7c;
    _DAT_14ca0f178 = 0xffffffff00000110;
    _DAT_14ca0f180 = 8;
    DAT_14ca0f184 = 0;
    _DAT_14ca0f168 = &LAB_14724bac0;
    FUN_145fd356a();
    FUN_1407e00cc(&DAT_14ca0f120);
    return;
  }
  return;
}



// FUNCTION 145fd356a FUN_145fd356a body=133 status=ok
// SIG undefined FUN_145fd356a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd356a(void)

{
  _DAT_14ca0f188 = L"BASE";
  DAT_14ca0f1b2 = 4;
  FUN_145fd35f0();
  _DAT_14ca0f198 = DAT_14ca0f130;
  _DAT_14ca0f190 = &DAT_14ca0f1b8;
  _DAT_14ca0f1a0 = &LAB_14682652b;
  DAT_14ca0f130 = &DAT_14ca0f188;
  DAT_14ca0f185 = DAT_14ca0f185 + '\x01';
  _DAT_14ca0f1a8 = 0x100000000;
  if (DAT_14ca0f21c != '\0') {
    DAT_14ca0f186 = DAT_14ca0f186 + '\x01';
  }
  return;
}



// FUNCTION 145fd35f0 FUN_145fd35f0 body=205 status=ok
// SIG undefined FUN_145fd35f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd35f0(void)

{
  if ((DAT_14ca0f21f & 2) == 0) {
    DAT_14ca0f21f = DAT_14ca0f21f | 2;
    _DAT_14ca0f1c0 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca0f1d8 = FUN_146826540;
    _DAT_14ca0f1e0 = FUN_146825d77;
    _DAT_14ca0f1e8 = FUN_146825fd6;
    _DAT_14ca0f1f0 = FUN_1407e02ea;
    _DAT_14ca0f1f8 = FUN_146826273;
    _DAT_14ca0f1d0 = FUN_14724bac4;
    _DAT_14ca0f210 = 0xffffffff00000110;
    _DAT_14ca0f218 = 8;
    DAT_14ca0f21c = 0;
    _DAT_14ca0f200 = &LAB_14724bb08;
    FUN_145fd36be();
    FUN_1407e00cc(&DAT_14ca0f1b8);
    return;
  }
  return;
}



// FUNCTION 145fd36be FUN_145fd36be body=225 status=ok
// SIG undefined FUN_145fd36be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd36be(void)

{
  _DAT_14ca0f220 = L"BASE";
  DAT_14ca0f24a = 4;
  _DAT_14ca0f228 = FUN_1411cad6c();
  _DAT_14ca0f230 = DAT_14ca0f1c8;
  _DAT_14ca0f238 = &LAB_14682652b;
  DAT_14ca0f1c8 = &DAT_14ca0f220;
  DAT_14ca0f21d = DAT_14ca0f21d + '\x01';
  _DAT_14ca0f240 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0f228 + 100) != '\0') {
    DAT_14ca0f21e = DAT_14ca0f21e + '\x01';
  }
  _DAT_14ca0f250 = L"BASE";
  DAT_14ca0f27a = 4;
  _DAT_14ca0f258 = FUN_141092e92();
  _DAT_14ca0f260 = DAT_14ca0f1c8;
  _DAT_14ca0f268 = &LAB_14682652b;
  DAT_14ca0f1c8 = &DAT_14ca0f250;
  DAT_14ca0f21d = DAT_14ca0f21d + '\x01';
  _DAT_14ca0f270 = 0x100000000;
  if (*(char *)(_DAT_14ca0f258 + 100) != '\0') {
    DAT_14ca0f21e = DAT_14ca0f21e + '\x01';
  }
  return;
}



// FUNCTION 145fd37a0 FUN_145fd37a0 body=287 status=ok
// SIG undefined FUN_145fd37a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd37a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0aa30) {
    FUN_144b3d300(&DAT_14ca0aa30);
    if (DAT_14ca0aa30 == -1) {
      FUN_145fd38c0();
      FUN_140db5666(&DAT_14ca0a988,2,&DAT_14ca0a920,
                    L"TMobileBasePassVSFMobileDistanceFieldShadowsAndLQLightMapPolicy",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_14723f1d2,
                    FUN_14723f1aa,&LAB_142de8382,&LAB_14723f1a6,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca0a988 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de83a7);
      _Init_thread_footer(&DAT_14ca0aa30);
    }
  }
  return &DAT_14ca0a988;
}



// FUNCTION 145fd38c0 FUN_145fd38c0 body=205 status=ok
// SIG undefined FUN_145fd38c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd38c0(void)

{
  if ((DAT_14ca0a987 & 2) == 0) {
    DAT_14ca0a987 = DAT_14ca0a987 | 2;
    _DAT_14ca0a928 = L"TMobileBasePassVSFMobileDistanceFieldShadowsAndLQLightMapPolicy";
    _DAT_14ca0a940 = FUN_146826540;
    _DAT_14ca0a948 = FUN_146825d77;
    _DAT_14ca0a950 = FUN_146825fd6;
    _DAT_14ca0a958 = FUN_1407e02ea;
    _DAT_14ca0a960 = FUN_146826273;
    _DAT_14ca0a938 = FUN_14723f15e;
    _DAT_14ca0a978 = 0xffffffff00000110;
    _DAT_14ca0a980 = 8;
    DAT_14ca0a984 = 0;
    _DAT_14ca0a968 = &LAB_14723f1a2;
    FUN_145fd398e();
    FUN_1407e00cc(&DAT_14ca0a920);
    return;
  }
  return;
}



// FUNCTION 145fd398e FUN_145fd398e body=133 status=ok
// SIG undefined FUN_145fd398e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd398e(void)

{
  _DAT_14ca0f590 = L"BASE";
  DAT_14ca0f5ba = 4;
  FUN_145fd3a14();
  _DAT_14ca0f5a0 = DAT_14ca0a930;
  _DAT_14ca0f598 = &DAT_14ca0f5c0;
  _DAT_14ca0f5a8 = &LAB_14682652b;
  DAT_14ca0a930 = &DAT_14ca0f590;
  DAT_14ca0a985 = DAT_14ca0a985 + '\x01';
  _DAT_14ca0f5b0 = 0x100000000;
  if (DAT_14ca0f624 != '\0') {
    DAT_14ca0a986 = DAT_14ca0a986 + '\x01';
  }
  return;
}



// FUNCTION 145fd3a14 FUN_145fd3a14 body=205 status=ok
// SIG undefined FUN_145fd3a14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3a14(void)

{
  if ((DAT_14ca0f627 & 2) == 0) {
    DAT_14ca0f627 = DAT_14ca0f627 | 2;
    _DAT_14ca0f5c8 = L"TMobileBasePassVSBaseType";
    _DAT_14ca0f5e0 = FUN_146826540;
    _DAT_14ca0f5e8 = FUN_146825d77;
    _DAT_14ca0f5f0 = FUN_146825fd6;
    _DAT_14ca0f5f8 = FUN_1407e02ea;
    _DAT_14ca0f600 = FUN_146826273;
    _DAT_14ca0f5d8 = FUN_14724bd74;
    _DAT_14ca0f618 = 0xffffffff00000110;
    _DAT_14ca0f620 = 8;
    DAT_14ca0f624 = 0;
    _DAT_14ca0f608 = &LAB_14724bdb8;
    FUN_145fd3ae2();
    FUN_1407e00cc(&DAT_14ca0f5c0);
    return;
  }
  return;
}



// FUNCTION 145fd3ae2 FUN_145fd3ae2 body=133 status=ok
// SIG undefined FUN_145fd3ae2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3ae2(void)

{
  _DAT_14ca0f628 = L"BASE";
  DAT_14ca0f652 = 4;
  FUN_145fd3b68();
  _DAT_14ca0f638 = DAT_14ca0f5d0;
  _DAT_14ca0f630 = &DAT_14ca0f658;
  _DAT_14ca0f640 = &LAB_14682652b;
  DAT_14ca0f5d0 = &DAT_14ca0f628;
  DAT_14ca0f625 = DAT_14ca0f625 + '\x01';
  _DAT_14ca0f648 = 0x100000000;
  if (DAT_14ca0f6bc != '\0') {
    DAT_14ca0f626 = DAT_14ca0f626 + '\x01';
  }
  return;
}



// FUNCTION 145fd3b68 FUN_145fd3b68 body=205 status=ok
// SIG undefined FUN_145fd3b68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3b68(void)

{
  if ((DAT_14ca0f6bf & 2) == 0) {
    DAT_14ca0f6bf = DAT_14ca0f6bf | 2;
    _DAT_14ca0f660 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca0f678 = FUN_146826540;
    _DAT_14ca0f680 = FUN_146825d77;
    _DAT_14ca0f688 = FUN_146825fd6;
    _DAT_14ca0f690 = FUN_1407e02ea;
    _DAT_14ca0f698 = FUN_146826273;
    _DAT_14ca0f670 = FUN_14724bdbc;
    _DAT_14ca0f6b0 = 0xffffffff00000110;
    _DAT_14ca0f6b8 = 8;
    DAT_14ca0f6bc = 0;
    _DAT_14ca0f6a0 = &LAB_14724be00;
    FUN_145fd3c36();
    FUN_1407e00cc(&DAT_14ca0f658);
    return;
  }
  return;
}



// FUNCTION 145fd3c36 FUN_145fd3c36 body=225 status=ok
// SIG undefined FUN_145fd3c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3c36(void)

{
  _DAT_14ca0f6c0 = L"BASE";
  DAT_14ca0f6ea = 4;
  _DAT_14ca0f6c8 = FUN_1411cad6c();
  _DAT_14ca0f6d0 = DAT_14ca0f668;
  _DAT_14ca0f6d8 = &LAB_14682652b;
  DAT_14ca0f668 = &DAT_14ca0f6c0;
  DAT_14ca0f6bd = DAT_14ca0f6bd + '\x01';
  _DAT_14ca0f6e0 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0f6c8 + 100) != '\0') {
    DAT_14ca0f6be = DAT_14ca0f6be + '\x01';
  }
  _DAT_14ca0f6f0 = L"BASE";
  DAT_14ca0f71a = 4;
  _DAT_14ca0f6f8 = FUN_141092e92();
  _DAT_14ca0f700 = DAT_14ca0f668;
  _DAT_14ca0f708 = &LAB_14682652b;
  DAT_14ca0f668 = &DAT_14ca0f6f0;
  DAT_14ca0f6bd = DAT_14ca0f6bd + '\x01';
  _DAT_14ca0f710 = 0x100000000;
  if (*(char *)(_DAT_14ca0f6f8 + 100) != '\0') {
    DAT_14ca0f6be = DAT_14ca0f6be + '\x01';
  }
  return;
}



// FUNCTION 145fd3d18 FUN_145fd3d18 body=287 status=ok
// SIG undefined FUN_145fd3d18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd3d18(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b248) {
    FUN_144b3d300(&DAT_14ca0b248);
    if (DAT_14ca0b248 == -1) {
      FUN_145fd3e38();
      FUN_140db5666(&DAT_14ca0b1a0,2,&DAT_14ca0b138,
                    L"TMobileBasePassVSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_14723f7a6,
                    FUN_14723f77e,&LAB_142de83fc,&LAB_14723f77a,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca0b1a0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8421);
      _Init_thread_footer(&DAT_14ca0b248);
    }
  }
  return &DAT_14ca0b1a0;
}



// FUNCTION 145fd3e38 FUN_145fd3e38 body=205 status=ok
// SIG undefined FUN_145fd3e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3e38(void)

{
  if ((DAT_14ca0b19f & 2) == 0) {
    DAT_14ca0b19f = DAT_14ca0b19f | 2;
    _DAT_14ca0b140 = L"TMobileBasePassVSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicy";
    _DAT_14ca0b158 = FUN_146826540;
    _DAT_14ca0b160 = FUN_146825d77;
    _DAT_14ca0b168 = FUN_146825fd6;
    _DAT_14ca0b170 = FUN_1407e02ea;
    _DAT_14ca0b178 = FUN_146826273;
    _DAT_14ca0b150 = FUN_14723f732;
    _DAT_14ca0b190 = 0xffffffff00000110;
    _DAT_14ca0b198 = 8;
    DAT_14ca0b19c = 0;
    _DAT_14ca0b180 = &LAB_14723f776;
    FUN_145fd3f06();
    FUN_1407e00cc(&DAT_14ca0b138);
    return;
  }
  return;
}



// FUNCTION 145fd3f06 FUN_145fd3f06 body=133 status=ok
// SIG undefined FUN_145fd3f06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3f06(void)

{
  _DAT_14ca0fa30 = L"BASE";
  DAT_14ca0fa5a = 4;
  FUN_145fd3f8c();
  _DAT_14ca0fa40 = DAT_14ca0b148;
  _DAT_14ca0fa38 = &DAT_14ca0fa60;
  _DAT_14ca0fa48 = &LAB_14682652b;
  DAT_14ca0b148 = &DAT_14ca0fa30;
  DAT_14ca0b19d = DAT_14ca0b19d + '\x01';
  _DAT_14ca0fa50 = 0x100000000;
  if (DAT_14ca0fac4 != '\0') {
    DAT_14ca0b19e = DAT_14ca0b19e + '\x01';
  }
  return;
}



// FUNCTION 145fd3f8c FUN_145fd3f8c body=205 status=ok
// SIG undefined FUN_145fd3f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd3f8c(void)

{
  if ((DAT_14ca0fac7 & 2) == 0) {
    DAT_14ca0fac7 = DAT_14ca0fac7 | 2;
    _DAT_14ca0fa68 = L"TMobileBasePassVSBaseType";
    _DAT_14ca0fa80 = FUN_146826540;
    _DAT_14ca0fa88 = FUN_146825d77;
    _DAT_14ca0fa90 = FUN_146825fd6;
    _DAT_14ca0fa98 = FUN_1407e02ea;
    _DAT_14ca0faa0 = FUN_146826273;
    _DAT_14ca0fa78 = FUN_14724c06c;
    _DAT_14ca0fab8 = 0xffffffff00000110;
    _DAT_14ca0fac0 = 8;
    DAT_14ca0fac4 = 0;
    _DAT_14ca0faa8 = &LAB_14724c0b0;
    FUN_145fd405a();
    FUN_1407e00cc(&DAT_14ca0fa60);
    return;
  }
  return;
}



// FUNCTION 145fd405a FUN_145fd405a body=133 status=ok
// SIG undefined FUN_145fd405a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd405a(void)

{
  _DAT_14ca0fac8 = L"BASE";
  DAT_14ca0faf2 = 4;
  FUN_145fd40e0();
  _DAT_14ca0fad8 = DAT_14ca0fa70;
  _DAT_14ca0fad0 = &DAT_14ca0faf8;
  _DAT_14ca0fae0 = &LAB_14682652b;
  DAT_14ca0fa70 = &DAT_14ca0fac8;
  DAT_14ca0fac5 = DAT_14ca0fac5 + '\x01';
  _DAT_14ca0fae8 = 0x100000000;
  if (DAT_14ca0fb5c != '\0') {
    DAT_14ca0fac6 = DAT_14ca0fac6 + '\x01';
  }
  return;
}



// FUNCTION 145fd40e0 FUN_145fd40e0 body=205 status=ok
// SIG undefined FUN_145fd40e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd40e0(void)

{
  if ((DAT_14ca0fb5f & 2) == 0) {
    DAT_14ca0fb5f = DAT_14ca0fb5f | 2;
    _DAT_14ca0fb00 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca0fb18 = FUN_146826540;
    _DAT_14ca0fb20 = FUN_146825d77;
    _DAT_14ca0fb28 = FUN_146825fd6;
    _DAT_14ca0fb30 = FUN_1407e02ea;
    _DAT_14ca0fb38 = FUN_146826273;
    _DAT_14ca0fb10 = FUN_14724c0b4;
    _DAT_14ca0fb50 = 0xffffffff00000110;
    _DAT_14ca0fb58 = 8;
    DAT_14ca0fb5c = 0;
    _DAT_14ca0fb40 = &LAB_14724c0f8;
    FUN_145fd41ae();
    FUN_1407e00cc(&DAT_14ca0faf8);
    return;
  }
  return;
}



// FUNCTION 145fd41ae FUN_145fd41ae body=225 status=ok
// SIG undefined FUN_145fd41ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd41ae(void)

{
  _DAT_14ca0fb60 = L"BASE";
  DAT_14ca0fb8a = 4;
  _DAT_14ca0fb68 = FUN_1411cad6c();
  _DAT_14ca0fb70 = DAT_14ca0fb08;
  _DAT_14ca0fb78 = &LAB_14682652b;
  DAT_14ca0fb08 = &DAT_14ca0fb60;
  DAT_14ca0fb5d = DAT_14ca0fb5d + '\x01';
  _DAT_14ca0fb80 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0fb68 + 100) != '\0') {
    DAT_14ca0fb5e = DAT_14ca0fb5e + '\x01';
  }
  _DAT_14ca0fb90 = L"BASE";
  DAT_14ca0fbba = 4;
  _DAT_14ca0fb98 = FUN_141092e92();
  _DAT_14ca0fba0 = DAT_14ca0fb08;
  _DAT_14ca0fba8 = &LAB_14682652b;
  DAT_14ca0fb08 = &DAT_14ca0fb90;
  DAT_14ca0fb5d = DAT_14ca0fb5d + '\x01';
  _DAT_14ca0fbb0 = 0x100000000;
  if (*(char *)(_DAT_14ca0fb98 + 100) != '\0') {
    DAT_14ca0fb5e = DAT_14ca0fb5e + '\x01';
  }
  return;
}



// FUNCTION 145fd4290 FUN_145fd4290 body=287 status=ok
// SIG undefined FUN_145fd4290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd4290(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0ba60) {
    FUN_144b3d300(&DAT_14ca0ba60);
    if (DAT_14ca0ba60 == -1) {
      FUN_145fd43b0();
      FUN_140db5666(&DAT_14ca0b9b8,2,&DAT_14ca0b950,
                    L"TMobileBasePassVSFMobileDirectionalLightCSMAndLightMapPolicy",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_14723fd7a,
                    FUN_14723fd52,&LAB_142de8476,&LAB_14723fd4e,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca0b9b8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de849b);
      _Init_thread_footer(&DAT_14ca0ba60);
    }
  }
  return &DAT_14ca0b9b8;
}



// FUNCTION 145fd43b0 FUN_145fd43b0 body=205 status=ok
// SIG undefined FUN_145fd43b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd43b0(void)

{
  if ((DAT_14ca0b9b7 & 2) == 0) {
    DAT_14ca0b9b7 = DAT_14ca0b9b7 | 2;
    _DAT_14ca0b958 = L"TMobileBasePassVSFMobileDirectionalLightCSMAndLightMapPolicy";
    _DAT_14ca0b970 = FUN_146826540;
    _DAT_14ca0b978 = FUN_146825d77;
    _DAT_14ca0b980 = FUN_146825fd6;
    _DAT_14ca0b988 = FUN_1407e02ea;
    _DAT_14ca0b990 = FUN_146826273;
    _DAT_14ca0b968 = FUN_14723fd06;
    _DAT_14ca0b9a8 = 0xffffffff00000110;
    _DAT_14ca0b9b0 = 8;
    DAT_14ca0b9b4 = 0;
    _DAT_14ca0b998 = &LAB_14723fd4a;
    FUN_145fd447e();
    FUN_1407e00cc(&DAT_14ca0b950);
    return;
  }
  return;
}



// FUNCTION 145fd447e FUN_145fd447e body=133 status=ok
// SIG undefined FUN_145fd447e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd447e(void)

{
  _DAT_14ca0fed0 = L"BASE";
  DAT_14ca0fefa = 4;
  FUN_145fd4504();
  _DAT_14ca0fee0 = DAT_14ca0b960;
  _DAT_14ca0fed8 = &DAT_14ca0ff00;
  _DAT_14ca0fee8 = &LAB_14682652b;
  DAT_14ca0b960 = &DAT_14ca0fed0;
  DAT_14ca0b9b5 = DAT_14ca0b9b5 + '\x01';
  _DAT_14ca0fef0 = 0x100000000;
  if (DAT_14ca0ff64 != '\0') {
    DAT_14ca0b9b6 = DAT_14ca0b9b6 + '\x01';
  }
  return;
}



// FUNCTION 145fd4504 FUN_145fd4504 body=205 status=ok
// SIG undefined FUN_145fd4504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4504(void)

{
  if ((DAT_14ca0ff67 & 2) == 0) {
    DAT_14ca0ff67 = DAT_14ca0ff67 | 2;
    _DAT_14ca0ff08 = L"TMobileBasePassVSBaseType";
    _DAT_14ca0ff20 = FUN_146826540;
    _DAT_14ca0ff28 = FUN_146825d77;
    _DAT_14ca0ff30 = FUN_146825fd6;
    _DAT_14ca0ff38 = FUN_1407e02ea;
    _DAT_14ca0ff40 = FUN_146826273;
    _DAT_14ca0ff18 = FUN_14724c364;
    _DAT_14ca0ff58 = 0xffffffff00000110;
    _DAT_14ca0ff60 = 8;
    DAT_14ca0ff64 = 0;
    _DAT_14ca0ff48 = &LAB_14724c3a8;
    FUN_145fd45d2();
    FUN_1407e00cc(&DAT_14ca0ff00);
    return;
  }
  return;
}



// FUNCTION 145fd45d2 FUN_145fd45d2 body=133 status=ok
// SIG undefined FUN_145fd45d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd45d2(void)

{
  _DAT_14ca0ff68 = L"BASE";
  DAT_14ca0ff92 = 4;
  FUN_145fd4658();
  _DAT_14ca0ff78 = DAT_14ca0ff10;
  _DAT_14ca0ff70 = &DAT_14ca0ff98;
  _DAT_14ca0ff80 = &LAB_14682652b;
  DAT_14ca0ff10 = &DAT_14ca0ff68;
  DAT_14ca0ff65 = DAT_14ca0ff65 + '\x01';
  _DAT_14ca0ff88 = 0x100000000;
  if (DAT_14ca0fffc != '\0') {
    DAT_14ca0ff66 = DAT_14ca0ff66 + '\x01';
  }
  return;
}



// FUNCTION 145fd4658 FUN_145fd4658 body=205 status=ok
// SIG undefined FUN_145fd4658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4658(void)

{
  if ((DAT_14ca0ffff & 2) == 0) {
    DAT_14ca0ffff = DAT_14ca0ffff | 2;
    _DAT_14ca0ffa0 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca0ffb8 = FUN_146826540;
    _DAT_14ca0ffc0 = FUN_146825d77;
    _DAT_14ca0ffc8 = FUN_146825fd6;
    _DAT_14ca0ffd0 = FUN_1407e02ea;
    _DAT_14ca0ffd8 = FUN_146826273;
    _DAT_14ca0ffb0 = FUN_14724c3ac;
    _DAT_14ca0fff0 = 0xffffffff00000110;
    _DAT_14ca0fff8 = 8;
    DAT_14ca0fffc = 0;
    _DAT_14ca0ffe0 = &LAB_14724c3f0;
    FUN_145fd4726();
    FUN_1407e00cc(&DAT_14ca0ff98);
    return;
  }
  return;
}



// FUNCTION 145fd4726 FUN_145fd4726 body=225 status=ok
// SIG undefined FUN_145fd4726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4726(void)

{
  _DAT_14ca10000 = L"BASE";
  DAT_14ca1002a = 4;
  _DAT_14ca10008 = FUN_1411cad6c();
  _DAT_14ca10010 = DAT_14ca0ffa8;
  _DAT_14ca10018 = &LAB_14682652b;
  DAT_14ca0ffa8 = &DAT_14ca10000;
  DAT_14ca0fffd = DAT_14ca0fffd + '\x01';
  _DAT_14ca10020 = &DAT_100000108;
  if (*(char *)(_DAT_14ca10008 + 100) != '\0') {
    DAT_14ca0fffe = DAT_14ca0fffe + '\x01';
  }
  _DAT_14ca10030 = L"BASE";
  DAT_14ca1005a = 4;
  _DAT_14ca10038 = FUN_141092e92();
  _DAT_14ca10040 = DAT_14ca0ffa8;
  _DAT_14ca10048 = &LAB_14682652b;
  DAT_14ca0ffa8 = &DAT_14ca10030;
  DAT_14ca0fffd = DAT_14ca0fffd + '\x01';
  _DAT_14ca10050 = 0x100000000;
  if (*(char *)(_DAT_14ca10038 + 100) != '\0') {
    DAT_14ca0fffe = DAT_14ca0fffe + '\x01';
  }
  return;
}



// FUNCTION 145fd4808 FUN_145fd4808 body=287 status=ok
// SIG undefined FUN_145fd4808(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd4808(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c278) {
    FUN_144b3d300(&DAT_14ca0c278);
    if (DAT_14ca0c278 == -1) {
      FUN_145fd4928();
      FUN_140db5666(&DAT_14ca0c1d0,2,&DAT_14ca0c168,
                    L"TMobileBasePassVSFMobileDirectionalLightAndSHIndirectPolicy",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_14724034e,
                    FUN_147240326,&LAB_142de84f0,&LAB_147240322,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca0c1d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8515);
      _Init_thread_footer(&DAT_14ca0c278);
    }
  }
  return &DAT_14ca0c1d0;
}



// FUNCTION 145fd4928 FUN_145fd4928 body=205 status=ok
// SIG undefined FUN_145fd4928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4928(void)

{
  if ((DAT_14ca0c1cf & 2) == 0) {
    DAT_14ca0c1cf = DAT_14ca0c1cf | 2;
    _DAT_14ca0c170 = L"TMobileBasePassVSFMobileDirectionalLightAndSHIndirectPolicy";
    _DAT_14ca0c188 = FUN_146826540;
    _DAT_14ca0c190 = FUN_146825d77;
    _DAT_14ca0c198 = FUN_146825fd6;
    _DAT_14ca0c1a0 = FUN_1407e02ea;
    _DAT_14ca0c1a8 = FUN_146826273;
    _DAT_14ca0c180 = FUN_1472402da;
    _DAT_14ca0c1c0 = 0xffffffff00000110;
    _DAT_14ca0c1c8 = 8;
    DAT_14ca0c1cc = 0;
    _DAT_14ca0c1b0 = &LAB_14724031e;
    FUN_145fd49f6();
    FUN_1407e00cc(&DAT_14ca0c168);
    return;
  }
  return;
}



// FUNCTION 145fd49f6 FUN_145fd49f6 body=133 status=ok
// SIG undefined FUN_145fd49f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd49f6(void)

{
  _DAT_14ca10370 = L"BASE";
  DAT_14ca1039a = 4;
  FUN_145fd4a7c();
  _DAT_14ca10380 = DAT_14ca0c178;
  _DAT_14ca10378 = &DAT_14ca103a0;
  _DAT_14ca10388 = &LAB_14682652b;
  DAT_14ca0c178 = &DAT_14ca10370;
  DAT_14ca0c1cd = DAT_14ca0c1cd + '\x01';
  _DAT_14ca10390 = 0x100000000;
  if (DAT_14ca10404 != '\0') {
    DAT_14ca0c1ce = DAT_14ca0c1ce + '\x01';
  }
  return;
}



// FUNCTION 145fd4a7c FUN_145fd4a7c body=205 status=ok
// SIG undefined FUN_145fd4a7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4a7c(void)

{
  if ((DAT_14ca10407 & 2) == 0) {
    DAT_14ca10407 = DAT_14ca10407 | 2;
    _DAT_14ca103a8 = L"TMobileBasePassVSBaseType";
    _DAT_14ca103c0 = FUN_146826540;
    _DAT_14ca103c8 = FUN_146825d77;
    _DAT_14ca103d0 = FUN_146825fd6;
    _DAT_14ca103d8 = FUN_1407e02ea;
    _DAT_14ca103e0 = FUN_146826273;
    _DAT_14ca103b8 = FUN_14724c65c;
    _DAT_14ca103f8 = 0xffffffff00000110;
    _DAT_14ca10400 = 8;
    DAT_14ca10404 = 0;
    _DAT_14ca103e8 = &LAB_14724c6a0;
    FUN_145fd4b4a();
    FUN_1407e00cc(&DAT_14ca103a0);
    return;
  }
  return;
}



// FUNCTION 145fd4b4a FUN_145fd4b4a body=133 status=ok
// SIG undefined FUN_145fd4b4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4b4a(void)

{
  _DAT_14ca10408 = L"BASE";
  DAT_14ca10432 = 4;
  FUN_145fd4bd0();
  _DAT_14ca10418 = DAT_14ca103b0;
  _DAT_14ca10410 = &DAT_14ca10438;
  _DAT_14ca10420 = &LAB_14682652b;
  DAT_14ca103b0 = &DAT_14ca10408;
  DAT_14ca10405 = DAT_14ca10405 + '\x01';
  _DAT_14ca10428 = 0x100000000;
  if (DAT_14ca1049c != '\0') {
    DAT_14ca10406 = DAT_14ca10406 + '\x01';
  }
  return;
}



// FUNCTION 145fd4bd0 FUN_145fd4bd0 body=205 status=ok
// SIG undefined FUN_145fd4bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4bd0(void)

{
  if ((DAT_14ca1049f & 2) == 0) {
    DAT_14ca1049f = DAT_14ca1049f | 2;
    _DAT_14ca10440 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca10458 = FUN_146826540;
    _DAT_14ca10460 = FUN_146825d77;
    _DAT_14ca10468 = FUN_146825fd6;
    _DAT_14ca10470 = FUN_1407e02ea;
    _DAT_14ca10478 = FUN_146826273;
    _DAT_14ca10450 = FUN_14724c6a4;
    _DAT_14ca10490 = 0xffffffff00000110;
    _DAT_14ca10498 = 8;
    DAT_14ca1049c = 0;
    _DAT_14ca10480 = &LAB_14724c6e8;
    FUN_145fd4c9e();
    FUN_1407e00cc(&DAT_14ca10438);
    return;
  }
  return;
}



// FUNCTION 145fd4c9e FUN_145fd4c9e body=225 status=ok
// SIG undefined FUN_145fd4c9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4c9e(void)

{
  _DAT_14ca104a0 = L"BASE";
  DAT_14ca104ca = 4;
  _DAT_14ca104a8 = FUN_1411cad6c();
  _DAT_14ca104b0 = DAT_14ca10448;
  _DAT_14ca104b8 = &LAB_14682652b;
  DAT_14ca10448 = &DAT_14ca104a0;
  DAT_14ca1049d = DAT_14ca1049d + '\x01';
  _DAT_14ca104c0 = &DAT_100000108;
  if (*(char *)(_DAT_14ca104a8 + 100) != '\0') {
    DAT_14ca1049e = DAT_14ca1049e + '\x01';
  }
  _DAT_14ca104d0 = L"BASE";
  DAT_14ca104fa = 4;
  _DAT_14ca104d8 = FUN_141092e92();
  _DAT_14ca104e0 = DAT_14ca10448;
  _DAT_14ca104e8 = &LAB_14682652b;
  DAT_14ca10448 = &DAT_14ca104d0;
  DAT_14ca1049d = DAT_14ca1049d + '\x01';
  _DAT_14ca104f0 = 0x100000000;
  if (*(char *)(_DAT_14ca104d8 + 100) != '\0') {
    DAT_14ca1049e = DAT_14ca1049e + '\x01';
  }
  return;
}



// FUNCTION 145fd4d80 FUN_145fd4d80 body=287 status=ok
// SIG undefined FUN_145fd4d80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd4d80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0ca90) {
    FUN_144b3d300(&DAT_14ca0ca90);
    if (DAT_14ca0ca90 == -1) {
      FUN_145fd4ea0();
      FUN_140db5666(&DAT_14ca0c9e8,2,&DAT_14ca0c980,
                    L"TMobileBasePassVSFMobileDirectionalLightCSMAndSHIndirectPolicy",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_147240922,
                    FUN_1472408fa,&LAB_142de856a,&LAB_1472408f6,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca0c9e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de858f);
      _Init_thread_footer(&DAT_14ca0ca90);
    }
  }
  return &DAT_14ca0c9e8;
}



// FUNCTION 145fd4ea0 FUN_145fd4ea0 body=205 status=ok
// SIG undefined FUN_145fd4ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4ea0(void)

{
  if ((DAT_14ca0c9e7 & 2) == 0) {
    DAT_14ca0c9e7 = DAT_14ca0c9e7 | 2;
    _DAT_14ca0c988 = L"TMobileBasePassVSFMobileDirectionalLightCSMAndSHIndirectPolicy";
    _DAT_14ca0c9a0 = FUN_146826540;
    _DAT_14ca0c9a8 = FUN_146825d77;
    _DAT_14ca0c9b0 = FUN_146825fd6;
    _DAT_14ca0c9b8 = FUN_1407e02ea;
    _DAT_14ca0c9c0 = FUN_146826273;
    _DAT_14ca0c998 = FUN_1472408ae;
    _DAT_14ca0c9d8 = 0xffffffff00000110;
    _DAT_14ca0c9e0 = 8;
    DAT_14ca0c9e4 = 0;
    _DAT_14ca0c9c8 = &LAB_1472408f2;
    FUN_145fd4f6e();
    FUN_1407e00cc(&DAT_14ca0c980);
    return;
  }
  return;
}



// FUNCTION 145fd4f6e FUN_145fd4f6e body=133 status=ok
// SIG undefined FUN_145fd4f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4f6e(void)

{
  _DAT_14ca10810 = L"BASE";
  DAT_14ca1083a = 4;
  FUN_145fd4ff4();
  _DAT_14ca10820 = DAT_14ca0c990;
  _DAT_14ca10818 = &DAT_14ca10840;
  _DAT_14ca10828 = &LAB_14682652b;
  DAT_14ca0c990 = &DAT_14ca10810;
  DAT_14ca0c9e5 = DAT_14ca0c9e5 + '\x01';
  _DAT_14ca10830 = 0x100000000;
  if (DAT_14ca108a4 != '\0') {
    DAT_14ca0c9e6 = DAT_14ca0c9e6 + '\x01';
  }
  return;
}



// FUNCTION 145fd4ff4 FUN_145fd4ff4 body=205 status=ok
// SIG undefined FUN_145fd4ff4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd4ff4(void)

{
  if ((DAT_14ca108a7 & 2) == 0) {
    DAT_14ca108a7 = DAT_14ca108a7 | 2;
    _DAT_14ca10848 = L"TMobileBasePassVSBaseType";
    _DAT_14ca10860 = FUN_146826540;
    _DAT_14ca10868 = FUN_146825d77;
    _DAT_14ca10870 = FUN_146825fd6;
    _DAT_14ca10878 = FUN_1407e02ea;
    _DAT_14ca10880 = FUN_146826273;
    _DAT_14ca10858 = FUN_14724c954;
    _DAT_14ca10898 = 0xffffffff00000110;
    _DAT_14ca108a0 = 8;
    DAT_14ca108a4 = 0;
    _DAT_14ca10888 = &LAB_14724c998;
    FUN_145fd50c2();
    FUN_1407e00cc(&DAT_14ca10840);
    return;
  }
  return;
}



// FUNCTION 145fd50c2 FUN_145fd50c2 body=133 status=ok
// SIG undefined FUN_145fd50c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd50c2(void)

{
  _DAT_14ca108a8 = L"BASE";
  DAT_14ca108d2 = 4;
  FUN_145fd5148();
  _DAT_14ca108b8 = DAT_14ca10850;
  _DAT_14ca108b0 = &DAT_14ca108d8;
  _DAT_14ca108c0 = &LAB_14682652b;
  DAT_14ca10850 = &DAT_14ca108a8;
  DAT_14ca108a5 = DAT_14ca108a5 + '\x01';
  _DAT_14ca108c8 = 0x100000000;
  if (DAT_14ca1093c != '\0') {
    DAT_14ca108a6 = DAT_14ca108a6 + '\x01';
  }
  return;
}



// FUNCTION 145fd5148 FUN_145fd5148 body=205 status=ok
// SIG undefined FUN_145fd5148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd5148(void)

{
  if ((DAT_14ca1093f & 2) == 0) {
    DAT_14ca1093f = DAT_14ca1093f | 2;
    _DAT_14ca108e0 = L"TMobileBasePassVSPolicyParamType";
    _DAT_14ca108f8 = FUN_146826540;
    _DAT_14ca10900 = FUN_146825d77;
    _DAT_14ca10908 = FUN_146825fd6;
    _DAT_14ca10910 = FUN_1407e02ea;
    _DAT_14ca10918 = FUN_146826273;
    _DAT_14ca108f0 = FUN_14724c99c;
    _DAT_14ca10930 = 0xffffffff00000110;
    _DAT_14ca10938 = 8;
    DAT_14ca1093c = 0;
    _DAT_14ca10920 = &LAB_14724c9e0;
    FUN_145fd5216();
    FUN_1407e00cc(&DAT_14ca108d8);
    return;
  }
  return;
}



// FUNCTION 145fd5216 FUN_145fd5216 body=225 status=ok
// SIG undefined FUN_145fd5216(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd5216(void)

{
  _DAT_14ca10940 = L"BASE";
  DAT_14ca1096a = 4;
  _DAT_14ca10948 = FUN_1411cad6c();
  _DAT_14ca10950 = DAT_14ca108e8;
  _DAT_14ca10958 = &LAB_14682652b;
  DAT_14ca108e8 = &DAT_14ca10940;
  DAT_14ca1093d = DAT_14ca1093d + '\x01';
  _DAT_14ca10960 = &DAT_100000108;
  if (*(char *)(_DAT_14ca10948 + 100) != '\0') {
    DAT_14ca1093e = DAT_14ca1093e + '\x01';
  }
  _DAT_14ca10970 = L"BASE";
  DAT_14ca1099a = 4;
  _DAT_14ca10978 = FUN_141092e92();
  _DAT_14ca10980 = DAT_14ca108e8;
  _DAT_14ca10988 = &LAB_14682652b;
  DAT_14ca108e8 = &DAT_14ca10970;
  DAT_14ca1093d = DAT_14ca1093d + '\x01';
  _DAT_14ca10990 = 0x100000000;
  if (*(char *)(_DAT_14ca10978 + 100) != '\0') {
    DAT_14ca1093e = DAT_14ca1093e + '\x01';
  }
  return;
}



// FUNCTION 145fd52f8 FUN_145fd52f8 body=287 status=ok
// SIG undefined FUN_145fd52f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145fd52f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d2a8) {
    FUN_144b3d300(&DAT_14ca0d2a8);
    if (DAT_14ca0d2a8 == -1) {
      FUN_145fd5418();
      FUN_140db5666(&DAT_14ca0d200,2,&DAT_14ca0d198,
                    L"TMobileBasePassVSFMobileDirectionalLightAndCSMPolicy",
                    L"/Engine/Private/MobileBasePassVertexShader.usf",L"Main",0,1,FUN_147240ef6,
                    FUN_147240ece,&LAB_142de85e4,&LAB_147240eca,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14ca0d200 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8609);
      _Init_thread_footer(&DAT_14ca0d2a8);
    }
  }
  return &DAT_14ca0d200;
}



// FUNCTION 145fd5418 FUN_145fd5418 body=205 status=ok
// SIG undefined FUN_145fd5418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd5418(void)

{
  if ((DAT_14ca0d1ff & 2) == 0) {
    DAT_14ca0d1ff = DAT_14ca0d1ff | 2;
    _DAT_14ca0d1a0 = L"TMobileBasePassVSFMobileDirectionalLightAndCSMPolicy";
    _DAT_14ca0d1b8 = FUN_146826540;
    _DAT_14ca0d1c0 = FUN_146825d77;
    _DAT_14ca0d1c8 = FUN_146825fd6;
    _DAT_14ca0d1d0 = FUN_1407e02ea;
    _DAT_14ca0d1d8 = FUN_146826273;
    _DAT_14ca0d1b0 = FUN_147240e82;
    _DAT_14ca0d1f0 = 0xffffffff00000110;
    _DAT_14ca0d1f8 = 8;
    DAT_14ca0d1fc = 0;
    _DAT_14ca0d1e0 = &LAB_147240ec6;
    FUN_145fd54e6();
    FUN_1407e00cc(&DAT_14ca0d198);
    return;
  }
  return;
}



// FUNCTION 145fd54e6 FUN_145fd54e6 body=133 status=ok
// SIG undefined FUN_145fd54e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd54e6(void)

{
  _DAT_14ca10cb0 = L"BASE";
  DAT_14ca10cda = 4;
  FUN_145fd556c();
  _DAT_14ca10cc0 = DAT_14ca0d1a8;
  _DAT_14ca10cb8 = &DAT_14ca10ce0;
  _DAT_14ca10cc8 = &LAB_14682652b;
  DAT_14ca0d1a8 = &DAT_14ca10cb0;
  DAT_14ca0d1fd = DAT_14ca0d1fd + '\x01';
  _DAT_14ca10cd0 = 0x100000000;
  if (DAT_14ca10d44 != '\0') {
    DAT_14ca0d1fe = DAT_14ca0d1fe + '\x01';
  }
  return;
}



// FUNCTION 145fd556c FUN_145fd556c body=205 status=ok
// SIG undefined FUN_145fd556c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145fd556c(void)

{
  if ((DAT_14ca10d47 & 2) == 0) {
    DAT_14ca10d47 = DAT_14ca10d47 | 2;
    _DAT_14ca10ce8 = L"TMobileBasePassVSBaseType";
    _DAT_14ca10d00 = FUN_146826540;
    _DAT_14ca10d08 = FUN_146825d77;
    _DAT_14ca10d10 = FUN_146825fd6;
    _DAT_14ca10d18 = FUN_1407e02ea;
    _DAT_14ca10d20 = FUN_146826273;
    _DAT_14ca10cf8 = FUN_14724cc4c;
    _DAT_14ca10d38 = 0xffffffff00000110;
    _DAT_14ca10d40 = 8;
    DAT_14ca10d44 = 0;
    _DAT_14ca10d28 = &LAB_14724cc90;
    FUN_145fd563a();
    FUN_1407e00cc(&DAT_14ca10ce0);
    return;
  }
  return;
}


