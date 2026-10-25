// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14605a3ce FUN_14605a3ce body=269 status=ok
// SIG undefined FUN_14605a3ce(void)

int * FUN_14605a3ce(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7d7a8;
  iVar3 = DAT_14cb7d780;
  if (DAT_14cb7d7ac == 0) {
    iVar2 = DAT_14cb7d780 + 1;
    bVar7 = DAT_14cb7d784 == DAT_14cb7d780;
    DAT_14cb7d780 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb7d778,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7d788,1);
    puVar4 = DAT_14cb7d798;
    if (DAT_14cb7d798 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb7d788;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb7d7a8;
    DAT_14cb7d7a8 = *(int *)(DAT_14cb7d778 + 4 + lVar6 * 0x20);
    DAT_14cb7d7ac = DAT_14cb7d7ac + -1;
    if (DAT_14cb7d7ac != 0) {
      *(undefined4 *)(DAT_14cb7d778 + (longlong)DAT_14cb7d7a8 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7d788;
  if (DAT_14cb7d798 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb7d798;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb7d778;
  return param_1;
}



// FUNCTION 14605a4dc FUN_14605a4dc body=239 status=ok
// SIG undefined FUN_14605a4dc(void)

undefined8 FUN_14605a4dc(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_FUN_14b4032f0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1461539fc;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605a5cc FUN_14605a5cc body=489 status=ok
// SIG undefined FUN_14605a5cc(void)

void FUN_14605a5cc(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb7d7b8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb7d7b8,0,0,4);
  }
  uVar2 = DAT_14cb7d7c0;
  uVar3 = local_50;
  if (DAT_14cb7d7c0 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb7d7b0,0,DAT_14cb7d7c0,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14cb7d7b8;
        if (DAT_14cb7d7b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7d7b0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb7d7c0 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb7d788;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb7d7a0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb7d778;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                (int)((uint)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) ^
                     (uint)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14cb7d7c0 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14cb7d7b8;
        if (DAT_14cb7d7b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7d7b0;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb7d7c0 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb7d7b8;
        if (DAT_14cb7d7b8 == (undefined *)0x0) {
          puVar5 = &DAT_14cb7d7b0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb7d7c0 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14605a7b6 FUN_14605a7b6 body=2704 status=ok
// SIG undefined FUN_14605a7b6(void)

void FUN_14605a7b6(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad852e;
  local_58 = L"CommandText_GetByName";
  local_50 = 0x15;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"<PackageName> //Query the asset registry for assets matching the supplied package name"
               );
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d7f0,L"AssetRegistry.GetByName",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad85fe;
  local_58 = L"CommandText_GetByPath";
  local_50 = 0x15;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"<Path> //Query the asset registry for assets matching the supplied package path");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d800,L"AssetRegistry.GetByPath",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad86ce;
  local_58 = L"CommandText_GetByClass";
  local_50 = 0x16;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"<ClassName> //Query the asset registry for assets matching the supplied class");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d810,L"AssetRegistry.GetByClass",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad87b0;
  local_58 = L"CommandText_GetByTag";
  local_50 = 0x14;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"<TagName> <TagValue> //Query the asset registry for assets matching the supplied tag and value"
               );
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d820,L"AssetRegistry.GetByTag",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad8914;
  local_58 = L"CommandText_GetDependencies";
  local_50 = 0x1b;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"<PackageName> //Query the asset registry for dependencies for the specified package"
               );
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d830,L"AssetRegistry.GetDependencies",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad89de;
  local_58 = L"CommandText_GetReferencers";
  local_50 = 0x1a;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"<ObjectPath> //Query the asset registry for referencers for the specified package"
               );
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d840,L"AssetRegistry.GetReferencers",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad8aa8;
  local_58 = L"CommandText_FindInvalidUAssets";
  local_50 = 0x1e;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"Finds a list of all assets which are in UAsset files but do not share the name of the package"
               );
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d850,L"AssetRegistry.Debug.FindInvalidUAssets",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad8ba0;
  local_58 = L"CommandText_ScanPath";
  local_50 = 0x14;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"<PathToScan> //Scan the given filename or directoryname for package files and load them into the assetregistry. Extra string parameters: -forcerescan, -ignoreDenyLists, -asfile, -asdir"
               );
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d860,L"AssetRegistry.ScanPath",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = &LAB_142ad9250;
  local_58 = L"CommandText_DumpAllocatedSize";
  local_50 = 0x1d;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"Dump the allocations of the asset registry state to the log");
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d870,L"AssetRegistry.DumpAllocatedSize",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_149e001f0;
  uVar1 = FUN_144a3f946();
  puVar2[2] = uVar1;
  *puVar2 = &PTR_FUN_149fc9910;
  puVar2[3] = &DAT_14c99d7f0;
  puVar2[4] = FUN_142ad9266;
  local_58 = L"CommandText_DumpState";
  local_50 = 0x15;
  FUN_1446e940c(local_6c,&local_58);
  local_58 = L"AssetRegistry";
  local_50 = 0xd;
  FUN_1446e940c(local_70,&local_58);
  FUN_140208bae(&local_58,local_70,local_6c,
                L"Dump the state of the asset registry to a file. Pass -log to dump to the log as well. Extra string parameters: All, ObjectPath, PackageName, Path, Class, Tag, Dependencies, DependencyDetails, PackageData, AssetBundles, AssetTags"
               );
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  local_78 = 0;
  FUN_1415c7246(&DAT_14c99d880,L"AssetRegistry.DumpState",puVar3,&local_68);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  FUN_1449db362(&local_68);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605b248 FUN_14605b248 body=123 status=ok
// SIG undefined FUN_14605b248(void)

void FUN_14605b248(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x40);
  if (lVar1 == 0) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_38 = &LAB_145c7bf1c;
    local_30 = 0;
    FUN_14605b620(local_28);
    FUN_14605b2c4(lVar1,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605b2c4 FUN_14605b2c4 body=258 status=ok
// SIG undefined FUN_14605b2c4(void)

void FUN_14605b2c4(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar2 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14b4c34a0;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0;
  FUN_14114e6dc(local_40 + 1,param_2);
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
  puVar2[3] = lVar4;
  *puVar2 = &PTR_FUN_14b4f2d60;
  puVar2[4] = param_1;
  puVar2[5] = FUN_145a9d6ec;
  local_48 = param_1;
  FUN_14605b3c8(uVar1,&local_48,&local_40);
  FUN_1449db362(&local_40);
  FUN_1449db362(param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605b3c8 FUN_14605b3c8 body=314 status=ok
// SIG undefined FUN_14605b3c8(void)

void FUN_14605b3c8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b4f3300;
  plVar1 = plVar3 + 2;
  local_48 = (longlong *)*param_3;
  *param_3 = 0;
  local_40 = (longlong *)CONCAT44(local_40._4_4_,*(undefined4 *)(param_3 + 1));
  *(undefined4 *)(param_3 + 1) = 0;
  FUN_14605b504(plVar1,*param_2,&local_48);
  local_58 = plVar1;
  local_50 = plVar3;
  FUN_14605b57e(&local_58,plVar1);
  local_48 = plVar1;
  local_40 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_1411d7792(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_1411d7792(param_1);
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
  }
  plVar1 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605b504 FUN_14605b504 body=121 status=ok
// SIG undefined FUN_14605b504(void)

undefined8 * FUN_14605b504(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  iVar1 = DAT_14cb970bc + 1;
  *(int *)((longlong)param_1 + 0x1c) = DAT_14cb970bc;
  DAT_14cb970bc = iVar1;
  param_1[5] = 0;
  param_1[6] = param_2;
  *param_1 = &PTR_FUN_14b4f3320;
  param_1[4] = &PTR_LAB_14b4f3348;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_14114e6dc(param_1 + 7,param_3);
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  FUN_1449db362(param_3);
  return param_1;
}



// FUNCTION 14605b57e FUN_14605b57e body=162 status=ok
// SIG undefined FUN_14605b57e(void)

void FUN_14605b57e(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14605b5bd;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14605b5bd;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14605b5bd:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014605b61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14605b620 FUN_14605b620 body=428 status=ok
// SIG undefined FUN_14605b620(void)

longlong * FUN_14605b620(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14605b700:
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea550;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14605b700;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4ea550;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14605b7d4 FUN_14605b7d4 body=274 status=ok
// SIG undefined FUN_14605b7d4(void)

undefined8 * FUN_14605b7d4(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a17f650;
  param_1[5] = &PTR_FUN_14a17f8f0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_FUN_14a1832f0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[2] = &PTR_FUN_14a182e30;
  FUN_141028572(puVar5 + 3);
  *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  param_1[6] = puVar5 + 2;
  param_1[7] = puVar5;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_141028572(param_1 + 10);
  uVar3 = param_1[6];
  plVar4 = (longlong *)param_1[7];
  if (plVar4 == (longlong *)0x0) {
    param_1[8] = uVar3;
    plVar6 = (longlong *)param_1[9];
    if (plVar6 == (longlong *)0x0) {
      return param_1;
    }
    param_1[9] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[8] = uVar3;
    plVar6 = (longlong *)param_1[9];
    if (plVar4 == plVar6) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x00014605b8c0;
    }
    param_1[9] = plVar4;
    if (plVar6 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar6 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar6)(plVar6);
  LOCK();
  piVar1 = (int *)((longlong)plVar6 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar6;
joined_r0x00014605b8c0:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 14605b8e6 FUN_14605b8e6 body=26 status=ok
// SIG undefined FUN_14605b8e6(void)

void FUN_14605b8e6(undefined8 param_1)

{
  FUN_145db284c();
  FUN_14605b900(param_1);
  return;
}



// FUNCTION 14605b900 FUN_14605b900 body=239 status=ok
// SIG undefined FUN_14605b900(void)

void FUN_14605b900(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1401cb356();
  local_28 = *(undefined8 *)(param_1 + 0x118);
  local_20 = *(longlong *)(param_1 + 0x120);
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_28);
  plVar2 = *(longlong **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_1401cb356();
  local_38 = *(undefined8 *)(param_1 + 0x180);
  local_30 = *(longlong *)(param_1 + 0x188);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 0xc) = *(int *)(local_30 + 0xc) + 1;
    UNLOCK();
  }
  FUN_140d61352(&local_38);
  lVar3 = *(longlong *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605ba00 FUN_14605ba00 body=169 status=ok
// SIG undefined FUN_14605ba00(void)

bool FUN_14605ba00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605baaa FUN_14605baaa body=252 status=ok
// SIG undefined FUN_14605baaa(void)

void FUN_14605baaa(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [192];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((param_2 != 0) && (lVar2 = FUN_14497e828(), lVar2 == param_2)) {
    (**(code **)(*param_1 + 0x330))(param_1,0);
    plVar1 = (longlong *)param_1[0x52c];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))(plVar1,0);
    }
    local_30 = (undefined1 *)0x0;
    local_28 = 0x1800000000;
    FUN_145a9de08(param_1,local_f0);
    puVar4 = local_30;
    if (local_30 == (undefined1 *)0x0) {
      puVar4 = local_f0;
    }
    lVar2 = (longlong)(int)local_28;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_14045627c(*(undefined8 *)(puVar4 + lVar3),1,1);
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14605bba8 FUN_14605bba8 body=21 status=ok
// SIG undefined FUN_14605bba8(void)

undefined8 FUN_14605bba8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14605bbbe FUN_14605bbbe body=229 status=ok
// SIG undefined FUN_14605bbbe(void)

void FUN_14605bbbe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14605bcb6(&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (plVar4 == (longlong *)0x0) goto LAB_14605bc0a;
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_14605bc4e:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14605bc0a;
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
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x18) = local_30;
    plVar4 = *(longlong **)(param_1 + 0x20);
    if (local_28 != plVar4) {
      *(longlong **)(param_1 + 0x20) = local_28;
      if (plVar4 == (longlong *)0x0) goto LAB_14605bc0a;
      goto LAB_14605bc4e;
    }
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14605bc0a;
    (**(code **)*local_28)(local_28);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14605bc0a:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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



// FUNCTION 14605bcb6 FUN_14605bcb6 body=413 status=ok
// SIG undefined FUN_14605bcb6(void)

longlong * FUN_14605bcb6(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14001cc68(0x58,0x10);
  FUN_14605be54(lVar2);
  *param_1 = lVar2;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bea8fd0;
  plVar3[2] = lVar2;
  param_1[1] = (longlong)plVar3;
  if (lVar2 == 0) {
    local_30 = 0;
    goto LAB_14605bd71;
  }
  if (((*(longlong *)(lVar2 + 8) == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x10) + 8) < 1)) {
    if (plVar3 == (longlong *)0x0) {
      *(longlong *)(lVar2 + 8) = lVar2;
      plVar4 = *(longlong **)(lVar2 + 0x10);
      if (plVar4 != (longlong *)0x0) {
LAB_14605bdf7:
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        *(longlong **)(lVar2 + 0x10) = plVar3;
        if (plVar3 != (longlong *)0x0) goto LAB_14605bd60;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(longlong *)(lVar2 + 8) = lVar2;
      if (*(longlong **)(lVar2 + 0x10) != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar4 = *(longlong **)(lVar2 + 0x10);
        if (plVar4 != (longlong *)0x0) goto LAB_14605bdf7;
        *(longlong **)(lVar2 + 0x10) = plVar3;
      }
LAB_14605bd60:
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  local_30 = *param_1;
  plVar3 = (longlong *)param_1[1];
LAB_14605bd71:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_28 = plVar3;
  FUN_141332b2e(&local_30);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14605be54 FUN_14605be54 body=1543 status=ok
// SIG undefined FUN_14605be54(void)

undefined8 * FUN_14605be54(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bea6fe0;
  *(undefined1 *)(param_1 + 10) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc29650) && (FUN_144b3d300(&DAT_14cc29650), DAT_14cc29650 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc29648 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ViewTextureMipBias.Min",1);
    _Init_thread_footer(&DAT_14cc29650);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc29660) && (FUN_144b3d300(&DAT_14cc29660), DAT_14cc29660 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc29658 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ViewTextureMipBias.Offset",1);
    _Init_thread_footer(&DAT_14cc29660);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc29670) && (FUN_144b3d300(&DAT_14cc29670), DAT_14cc29670 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc29668 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Velocity.EnableVertexDeformation",1);
    _Init_thread_footer(&DAT_14cc29670);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc29680) && (FUN_144b3d300(&DAT_14cc29680), DAT_14cc29680 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc29678 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Velocity.EnableLandscapeGrass",1);
    _Init_thread_footer(&DAT_14cc29680);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc29690) && (FUN_144b3d300(&DAT_14cc29690), DAT_14cc29690 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc29688 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SeparateTranslucency",1);
    _Init_thread_footer(&DAT_14cc29690);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc296a0) && (FUN_144b3d300(&DAT_14cc296a0), DAT_14cc296a0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cc29698 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SSR.ExperimentalDenoiser",1);
    _Init_thread_footer(&DAT_14cc296a0);
  }
  uVar8 = (**(code **)(*DAT_14ca83900 + 0x20))();
  FUN_140056680(&local_50,uVar8);
  puVar13 = local_50;
  if (local_48 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  iVar5 = FUN_144a80a00(puVar13,&DAT_14a3502a2);
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  puVar14 = DAT_14cc28a68;
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar11 + 0xc60) == 0x40000002) {
    *(undefined4 *)(param_1 + 5) = *DAT_14cc28a68;
  }
  else {
    piVar2 = (int *)(lVar11 + 0xc60);
    bVar4 = FUN_144a61b4f();
    iVar5 = *piVar2;
    *(undefined4 *)(param_1 + 5) = puVar14[bVar4 ^ 1];
    puVar3 = DAT_14cc28a68;
    puVar14 = DAT_14cc28a68;
    if (iVar5 != 0x40000002) {
      bVar4 = FUN_144a61b4f();
      puVar14 = DAT_14cc28a68;
      iVar5 = *piVar2;
      *(undefined4 *)((longlong)param_1 + 0x2c) = puVar3[bVar4 ^ 1];
      if (iVar5 == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar9 = (ulonglong)(bVar4 ^ 1);
      }
      goto LAB_14605c1dd;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = *puVar14;
  uVar9 = 0;
LAB_14605c1dd:
  *(undefined4 *)(param_1 + 6) = puVar14[uVar9];
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  uVar7 = 0;
  uVar6 = 0;
  if (DAT_14cc29668 != (longlong *)0x0) {
    uVar6 = (**(code **)(*DAT_14cc29668 + 0xb0))();
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  if (DAT_14cc29678 != (longlong *)0x0) {
    uVar7 = (**(code **)(*DAT_14cc29678 + 0xb0))();
  }
  *(undefined4 *)(param_1 + 8) = uVar7;
  uVar7 = 0;
  uVar6 = 0;
  if (DAT_14cc29648 != (longlong *)0x0) {
    uVar6 = (**(code **)(*DAT_14cc29648 + 0xb8))();
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar6;
  if (DAT_14cc29658 != (longlong *)0x0) {
    uVar7 = (**(code **)(*DAT_14cc29658 + 0xb8))();
  }
  *(undefined4 *)(param_1 + 7) = uVar7;
  uVar7 = 0;
  uVar6 = 0;
  if (DAT_14cc29688 != (longlong *)0x0) {
    uVar6 = (**(code **)(*DAT_14cc29688 + 0xb0))();
  }
  *(undefined4 *)(param_1 + 9) = uVar6;
  if (DAT_14cc29698 != (longlong *)0x0) {
    uVar7 = (**(code **)(*DAT_14cc29698 + 0xb0))();
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  FUN_1446f470e(&local_58,L"FFXFSR3TemporalUpscaling",1);
  uVar8 = FUN_144a52528();
  plVar10 = (longlong *)FUN_1401e3324(uVar8,local_58);
  lVar11 = (**(code **)(*plVar10 + 0x48))(plVar10);
  if (lVar11 == 0) {
    plVar12 = (longlong *)FUN_14001cc68(0x228,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14bea8ff0;
    plVar1 = plVar12 + 2;
    FUN_14605c4e0(plVar1);
    local_68 = plVar1;
    if (plVar12 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
      FUN_14605c462(plVar10);
    }
    else {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      local_60 = plVar12;
      FUN_14605c462(plVar10);
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14605c462 FUN_14605c462 body=125 status=ok
// SIG undefined FUN_14605c462(void)

void FUN_14605c462(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014605c4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14605c4e0 FUN_14605c4e0 body=685 status=ok
// SIG undefined FUN_14605c4e0(void)

undefined8 * FUN_14605c4e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_14bea6bd0;
  param_1[1] = &PTR_FUN_14bea6c00;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  FUN_1415e1712(param_1 + 0x10);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x25),4000);
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 3;
  param_1[2] = 0;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  puVar1 = local_70;
  local_68 = 2;
  *local_70 = &PTR_LAB_14adffad0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14bea8b70;
  puVar1[3] = param_1;
  FUN_14605c78e(&DAT_14cc295f8,&local_70);
  FUN_1449db362(&local_70);
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,2,0x10);
  puVar1 = local_70;
  local_68 = 2;
  *local_70 = &PTR_LAB_149e170a0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149e17030;
  puVar1[3] = FUN_14981b046;
  (**(code **)(*DAT_14cc28a60 + 200))(DAT_14cc28a60,&local_70);
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,2,0x10);
  puVar1 = local_80;
  local_78 = 2;
  *local_80 = &PTR_LAB_149e170a0;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149e17030;
  puVar1[3] = &LAB_14981b06a;
  (**(code **)(*DAT_14cc28ca0 + 200))(DAT_14cc28ca0,&local_80);
  cVar2 = (**(code **)(*DAT_14cc28a60 + 0xa8))();
  if (cVar2 != '\0') {
    FUN_14981b07c();
    FUN_14981b0c4();
  }
  FUN_1415e18b4(DAT_14cb0d2b0,param_1 + 0x10);
  FUN_1449db362(&local_80);
  FUN_1449db362(&local_70);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605c78e FUN_14605c78e body=78 status=ok
// SIG undefined FUN_14605c78e(void)

void FUN_14605c78e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  local_18 = param_2;
  FUN_14605c7de(&DAT_14caf3250,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605c7de FUN_14605c7de body=368 status=ok
// SIG undefined FUN_14605c7de(void)

undefined4 *
FUN_14605c7de(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14605ca84(param_1,local_50);
  uVar1 = param_3[1];
  *local_48 = *(undefined8 *)*param_3;
  local_48[1] = 0;
  *(undefined4 *)(local_48 + 2) = 0;
  FUN_14605c950(local_48 + 1,uVar1);
  *(undefined4 *)(local_48 + 3) = 0xffffffff;
  local_54 = local_50[0];
  uVar1 = *local_48;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  local_68 = param_4;
  cVar3 = FUN_14605c9ce(param_1,uVar8,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14605cb6a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605c950 FUN_14605c950 body=124 status=ok
// SIG undefined FUN_14605c950(void)

void FUN_14605c950(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605c9ce FUN_14605c9ce body=182 status=ok
// SIG undefined FUN_14605c9ce(void)

void FUN_14605c9ce(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          FUN_1449db362(puVar1 + 2);
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_145d5c62e(param_1,*param_4);
          *param_4 = iVar8;
          uVar6 = 1;
          break;
        }
        iVar8 = puVar1[6];
        uVar6 = 0;
      } while (iVar8 != -1);
      goto LAB_14605ca45;
    }
  }
  uVar6 = 0;
LAB_14605ca45:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14605ca84 FUN_14605ca84 body=230 status=ok
// SIG undefined FUN_14605ca84(void)

int * FUN_14605ca84(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14605cb6a FUN_14605cb6a body=485 status=ok
// SIG undefined FUN_14605cb6a(void)

void FUN_14605cb6a(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 14605cd50 FUN_14605cd50 body=290 status=ok
// SIG undefined FUN_14605cd50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14605cd50(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca895c0) {
    FUN_144b3d300(&DAT_14ca895c0);
    if (DAT_14ca895c0 == -1) {
      uVar1 = FUN_14605cfc6();
      FUN_14605ce72();
      FUN_140db5666(&DAT_14ca89518,0,&DAT_14ca894b0,L"FMobileMultiViewVertexShaderVS",
                    L"/Engine/Private/Tools/FullscreenVertexShader.usf",L"MainVS",0,1,FUN_1474195b4,
                    FUN_14741958c,FUN_14631bb80,&LAB_147419588,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    uVar1);
      _DAT_14ca89518 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f21cc);
      _Init_thread_footer(&DAT_14ca895c0);
    }
  }
  return &DAT_14ca89518;
}



// FUNCTION 14605ce72 FUN_14605ce72 body=206 status=ok
// SIG undefined FUN_14605ce72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14605ce72(void)

{
  if ((DAT_14ca89517 & 2) == 0) {
    DAT_14ca89517 = DAT_14ca89517 | 2;
    _DAT_14ca894b8 = L"FMobileMultiViewVertexShaderVS";
    _DAT_14ca894d0 = FUN_146826540;
    _DAT_14ca894d8 = FUN_146825d77;
    _DAT_14ca894e0 = FUN_146825fd6;
    _DAT_14ca894e8 = FUN_1407e02ea;
    _DAT_14ca894f0 = FUN_146826273;
    _DAT_14ca894c8 = FUN_147419558;
    _DAT_14ca89508 = 0xffffffff000000e0;
    _DAT_14ca89510 = 8;
    DAT_14ca89514 = 0;
    _DAT_14ca894f8 = &LAB_147419584;
    FUN_14605cf40();
    FUN_1407e00cc(&DAT_14ca894b0);
  }
  return &DAT_14ca894b0;
}



// FUNCTION 14605cf40 FUN_14605cf40 body=133 status=ok
// SIG undefined FUN_14605cf40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605cf40(void)

{
  _DAT_14ca93cb0 = L"BASE";
  DAT_14ca93cda = 4;
  FUN_145e0d8e0();
  _DAT_14ca93cc0 = DAT_14ca894c0;
  _DAT_14ca93cb8 = &DAT_14ca89260;
  _DAT_14ca93cc8 = &LAB_14682652b;
  DAT_14ca894c0 = &DAT_14ca93cb0;
  DAT_14ca89515 = DAT_14ca89515 + '\x01';
  _DAT_14ca93cd0 = 0x100000000;
  if (DAT_14ca892c4 != '\0') {
    DAT_14ca89516 = DAT_14ca89516 + '\x01';
  }
  return;
}



// FUNCTION 14605cfc6 FUN_14605cfc6 body=270 status=ok
// SIG undefined FUN_14605cfc6(void)

undefined * FUN_14605cfc6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca91370) {
    FUN_144b3d300(&DAT_14ca91370);
    if (DAT_14ca91370 == -1) {
      FUN_14605d0d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca912f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f879a);
      _Init_thread_footer(&DAT_14ca91370);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca912f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605d0d6 FUN_14605d0d6 body=228 status=ok
// SIG undefined FUN_14605d0d6(void)

longlong * FUN_14605d0d6(longlong *param_1)

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
  pcVar13 = FUN_147422bbe;
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
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14605d1bc FUN_14605d1bc body=63 status=ok
// SIG undefined FUN_14605d1bc(void)

void FUN_14605d1bc(void)

{
  FUN_1415c72b6(&DAT_14c9a1b70,0);
  if (DAT_14c9a1b90 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1b70 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14605d1fc FUN_14605d1fc body=1286 status=ok
// SIG undefined FUN_14605d1fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14605d1fc(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  longlong *local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined4 local_458;
  undefined1 local_450 [104];
  undefined4 local_3e8;
  char local_3e4;
  undefined4 local_3e0;
  undefined1 local_3dc;
  uint local_3d8;
  undefined4 uStack_3d4;
  undefined4 local_3d0;
  undefined4 local_3b0;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined4 local_360;
  uint local_35c;
  undefined8 local_358;
  uint local_350;
  undefined8 local_34c;
  undefined8 local_344;
  undefined4 local_33c;
  undefined8 local_338;
  undefined5 uStack_330;
  undefined3 uStack_32b;
  undefined2 uStack_328;
  undefined1 uStack_326;
  undefined2 uStack_325;
  undefined4 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  char local_278;
  undefined8 local_268;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined8 uStack_257;
  longlong local_240 [2];
  longlong local_230;
  int local_228;
  undefined1 local_168 [24];
  longlong local_150;
  longlong local_140;
  undefined8 local_e8 [20];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_468 = param_2;
  FUN_140cf02e4(param_2,local_168);
  if (local_150 == 0) goto LAB_14605d601;
  local_3dc = 0;
  FUN_14605d73c(param_1,local_450,1);
  uVar9 = ram0x00014c94861c;
  uVar6 = (uint)DAT_14c948618;
  local_458 = *(undefined4 *)((longlong)param_1 + 0xd4);
  local_460 = *(undefined8 *)((longlong)param_1 + 0xcc);
  if (local_140 == 0) {
LAB_14605d654:
    local_478 = 0;
    uVar10 = uVar9;
    uVar11 = uVar6;
LAB_14605d663:
    local_470 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_1407fc0e2();
    if ((*(int *)(*(longlong *)(local_140 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_140 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_14605d654;
    if (*(char *)(local_140 + 0xe38) == '\x01') {
      if (*(int *)(local_140 + 0xe2c) != 0) {
        local_458 = *(undefined4 *)(local_140 + 0xe34);
        local_460 = *(undefined8 *)(local_140 + 0xe2c);
      }
      local_3d0 = *(undefined4 *)(local_140 + 0xe28);
      local_3d8 = (uint)*(undefined8 *)(local_140 + 0xe20);
      uStack_3d4 = (undefined4)((ulonglong)*(undefined8 *)(local_140 + 0xe20) >> 0x20);
      bVar1 = 1;
    }
    else {
      if (*(int *)(local_140 + 0xde8) != 0) {
        local_458 = *(undefined4 *)(local_140 + 0xdf0);
        local_460 = *(undefined8 *)(local_140 + 0xde8);
      }
      FUN_14883cbcc(local_140 + 0xd10,&local_3d8);
      bVar1 = *(byte *)(local_140 + 0xe38);
    }
    uVar11 = local_3d8;
    uVar9 = CONCAT44(local_3d0,uStack_3d4);
    if ((bVar1 & 1) == 0) {
      FUN_14883cbbc(local_140 + 0xd10,&local_3d8);
    }
    else {
      local_3d0 = *(undefined4 *)(local_140 + 0xe1c);
      local_3d8 = (uint)*(undefined8 *)(local_140 + 0xe14);
      uStack_3d4 = (undefined4)((ulonglong)*(undefined8 *)(local_140 + 0xe14) >> 0x20);
    }
    uVar6 = local_3d8;
    uVar10 = CONCAT44(local_3d0,uStack_3d4);
    plVar5 = *(longlong **)(local_140 + 0xe40);
    if (plVar5 == (longlong *)0x0) {
LAB_14605d646:
      local_478 = 0;
    }
    else {
      lVar2 = (**(code **)(*plVar5 + 8))(plVar5);
      lVar3 = FUN_14605d704();
      if (((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) goto LAB_14605d646;
      local_478 = CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),(char)plVar5[1]);
    }
    lVar2 = *(longlong *)(local_140 + 0xa8);
    if (lVar2 == 0) goto LAB_14605d663;
    uVar4 = FUN_14593f178();
    local_470 = (longlong *)FUN_144718840(lVar2,uVar4);
  }
  local_3d8 = local_3d8 & 0xffffff00;
  local_3b0 = 0;
  FUN_1456bb102(&local_3d8,local_150);
  FUN_140368c94(local_450,local_240,&local_3d8,0);
  FUN_144a5ac3a(&local_3d8);
  if (local_240[0] != 0) {
    if ((longlong)local_228 != 0) {
      lVar2 = 0;
      do {
        if (*(longlong *)(local_230 + lVar2) == 0) goto LAB_14605d5ea;
        lVar2 = lVar2 + 8;
      } while ((longlong)local_228 * 8 != lVar2);
    }
    (**(code **)(*param_1 + 0x158))(param_1,local_468,local_240);
    plVar5 = (longlong *)FUN_14007a5e6(local_150);
    if (plVar5 != (longlong *)0x0) {
      local_368 = DAT_14c8464f0;
      local_378 = DAT_14c8464e0;
      uStack_370 = DAT_14c8464e8;
      local_360 = 0;
      local_320 = 0xffffffff;
      local_278 = '\0';
      local_268 = 0;
      uStack_260 = 0;
      uStack_25f = 0;
      uStack_258 = 0;
      uStack_257 = 0;
      local_318 = 0;
      uStack_310 = 0;
      local_308 = 0;
      lStack_300 = 0;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      puVar7 = local_e8;
      puVar8 = &local_3d8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *(undefined8 *)puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 2;
      }
      local_358 = uVar10;
      local_35c = uVar6;
      if (uVar6 == 0) {
        local_358 = ram0x00014cb7bd6c;
        local_35c = (uint)DAT_14cb7bd68;
      }
      local_34c = uVar9;
      local_350 = uVar11;
      if (uVar11 == 0) {
        local_34c = ram0x00014cb7bd84;
        local_350 = (uint)DAT_14cb7bd80;
      }
      local_338 = 0;
      uStack_328 = 0;
      uStack_325 = 0;
      local_344 = local_460;
      local_33c = local_458;
      uStack_330 = SUB85(local_168,0);
      uStack_32b = (undefined3)((ulonglong)local_168 >> 0x28);
      uStack_326 = 1;
      if ((char)local_478 == '\0') {
        uStack_326 = (undefined1)param_1[0x19];
      }
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_3e8,local_240);
      if (local_3e4 == '\x01') {
        local_3e0 = local_3e8;
        local_3dc = 1;
      }
      if (local_278 == '\x01') {
        local_278 = '\0';
      }
      if (lStack_300 != 0) {
        FUN_1400020a8();
      }
      if (local_470 != (longlong *)0x0 && local_3e4 == '\x01') {
        (**(code **)(*local_470 + 0x20))(local_470,&local_3e0);
      }
    }
  }
LAB_14605d5ea:
  FUN_140368b56(local_240);
  FUN_140372a38(local_450);
LAB_14605d601:
  FUN_1415c74ac(local_468);
  FUN_1415c74b4(local_168);
  if ((local_48 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605d704 FUN_14605d704 body=55 status=ok
// SIG undefined FUN_14605d704(void)

void FUN_14605d704(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6e408 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6e408 = FUN_140002ddd(FUN_14653abba,uVar1,L"SpawnedPickupActorDefPayload");
  }
  return;
}



// FUNCTION 14605d73c FUN_14605d73c body=315 status=ok
// SIG undefined FUN_14605d73c(void)

undefined8 * FUN_14605d73c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_80 [40];
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_80[0] = 0;
  local_58 = 0;
  FUN_14575a19a(local_80,0);
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = 1;
  FUN_140371a87(&local_98,param_1 + 0x90,param_3,local_80);
  FUN_144a5ac3a(local_80);
  if ((int)uStack_90 < 1) {
    *param_2 = 0;
    *(undefined4 *)param_2 = 1;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    FUN_140265f12();
    param_2[8] = &DAT_14cb83310;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[7] = &PTR_FUN_14b1828b0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
  }
  else {
    FUN_1415c753c(param_2,local_98);
  }
  FUN_14036924e(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605d878 FUN_14605d878 body=278 status=ok
// SIG undefined FUN_14605d878(void)

void FUN_14605d878(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
      plVar3 = local_38;
      if (local_38 != (longlong *)0x0) {
        local_58 = FUN_145c9e1b6;
        local_50 = 0;
        FUN_14605d990(local_48,param_1);
        (**(code **)(*plVar3 + 0x50))(plVar3,&local_58,local_48);
        *(code **)(param_1 + 0x138) = local_58;
        FUN_1449db362(local_48);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x10);
        }
        (**(code **)(*local_38 + 0x40))
                  (local_38,*(undefined8 *)(param_1 + 0x38),uVar4,param_1 + 0x48);
      }
      goto LAB_14605d936;
    }
  }
  local_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
LAB_14605d936:
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605d990 FUN_14605d990 body=428 status=ok
// SIG undefined FUN_14605d990(void)

longlong * FUN_14605d990(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14605da70:
    *puVar5 = &PTR_LAB_149eae4d0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f29b0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14605da70;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149eae4d0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b4f29b0;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14605db3c FUN_14605db3c body=161 status=ok
// SIG undefined FUN_14605db3c(void)

void FUN_14605db3c(longlong param_1)

{
  FUN_140e6b124(*(undefined8 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3d0));
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FUN_1400020a8();
  }
  FUN_140e6b124(*(undefined8 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x3c0));
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1400020a8();
  }
  FUN_14605dc10(param_1 + 0x358);
  FUN_14605dd02(param_1 + 0x2f8);
  FUN_14605dd80(param_1 + 0x298);
  FUN_14605de40(param_1 + 0x18);
  FUN_14605dbdd(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14605dbdd FUN_14605dbdd body=50 status=ok
// SIG undefined FUN_14605dbdd(void)

void FUN_14605dbdd(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14605dc10 FUN_14605dc10 body=56 status=ok
// SIG undefined FUN_14605dc10(void)

void FUN_14605dc10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14605dc48(param_1);
  return;
}



// FUNCTION 14605dc48 FUN_14605dc48 body=55 status=ok
// SIG undefined FUN_14605dc48(void)

void FUN_14605dc48(longlong *param_1)

{
  FUN_14605dc80(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14605dc80 FUN_14605dc80 body=128 status=ok
// SIG undefined FUN_14605dc80(void)

void FUN_14605dc80(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14605dd02 FUN_14605dd02 body=70 status=ok
// SIG undefined FUN_14605dd02(void)

void FUN_14605dd02(longlong param_1)

{
  FUN_14099205e(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14605dd48(param_1);
  return;
}



// FUNCTION 14605dd48 FUN_14605dd48 body=55 status=ok
// SIG undefined FUN_14605dd48(void)

void FUN_14605dd48(longlong *param_1)

{
  FUN_14605ddc6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14605dd80 FUN_14605dd80 body=70 status=ok
// SIG undefined FUN_14605dd80(void)

void FUN_14605dd80(longlong param_1)

{
  FUN_1400c8e09(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14605dc48(param_1);
  return;
}



// FUNCTION 14605ddc6 FUN_14605ddc6 body=121 status=ok
// SIG undefined FUN_14605ddc6(void)

void FUN_14605ddc6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 14605de40 FUN_14605de40 body=872 status=ok
// SIG undefined FUN_14605de40(void)

void FUN_14605de40(longlong *param_1)

{
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14605e1a8(param_1 + 0x10);
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14605e1a8 FUN_14605e1a8 body=58 status=ok
// SIG undefined FUN_14605e1a8(void)

void FUN_14605e1a8(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_140332567(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14605e1ee FUN_14605e1ee body=272 status=ok
// SIG undefined FUN_14605e1ee(void)

undefined8 * FUN_14605e1ee(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14affe740;
  param_1[0x72] = &PTR_FUN_14affed80;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a9) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x4000;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x414) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x86) = 1;
  FUN_1403121a6(param_1,0);
  uVar1 = DAT_14cb73888;
  if (param_1[0x39] == 0) {
    uVar2 = FUN_144a799b0();
    lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,1,0);
    if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
      param_1[0x39] = lVar3;
      if (lVar3 == 0) {
        return param_1;
      }
    }
    else {
      FUN_1456cec3c(lVar3);
      param_1[0x39] = lVar3;
    }
    *(undefined1 *)(lVar3 + 0x1fb) = 0;
  }
  return param_1;
}



// FUNCTION 14605e306 FUN_14605e306 body=275 status=ok
// SIG undefined FUN_14605e306(void)

undefined8 * FUN_14605e306(undefined8 *param_1)

{
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b60aec0;
  FUN_140440628(param_1 + 0x33,&DAT_14cbcab18,0);
  *(undefined1 *)(param_1 + 0x3a) = 1;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined2 *)(param_1 + 0x42) = 4;
  *(undefined4 *)(param_1 + 0x3f) = 1;
  *(undefined1 *)(param_1 + 0x43) = 2;
  *(byte *)(param_1 + 0x44) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x45] = 0;
  *(undefined2 *)(param_1 + 0x49) = 4;
  *(undefined4 *)(param_1 + 0x46) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4a) = 3;
  *(char *)(param_1 + 0x4b) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x4c] = 0;
  *(undefined2 *)(param_1 + 0x50) = 4;
  *(undefined4 *)(param_1 + 0x4d) = 0x42340000;
  *(undefined1 *)(param_1 + 0x51) = 3;
  *(char *)(param_1 + 0x52) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  FUN_140440628(param_1 + 0x53,&DAT_14cbcab28,0);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  return param_1;
}



// FUNCTION 14605e41a FUN_14605e41a body=519 status=ok
// SIG undefined FUN_14605e41a(void)

void FUN_14605e41a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c872a71 != '\0') goto LAB_14605e535;
  lVar5 = param_2[1];
  if (lVar5 == 0) {
    uVar3 = FUN_145d1039e();
    lVar5 = FUN_14477b664(uVar3);
    param_2[1] = lVar5;
  }
  lVar4 = param_2[2];
  if (param_2[2] == 0) {
    if ((lVar5 != 0) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar4;
        if (lVar4 != 0) goto LAB_14605e4b7;
      }
    }
    FUN_148eea321(&local_38);
    if (local_30 == 0) {
      uVar3 = FUN_145d1039e();
      local_30 = FUN_14477b664(uVar3);
    }
    lVar4 = local_28;
    if (local_28 != 0) goto LAB_14605e4b7;
    if ((((local_38 != 0) && (local_30 != 0)) &&
        (plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,&local_38);
      if (lVar4 != 0) goto LAB_14605e4b7;
    }
  }
  else {
LAB_14605e4b7:
    FUN_14605e850(param_1,lVar4);
  }
  FUN_14605e622(&local_38);
  if (local_30 == 0) {
    uVar3 = FUN_145d1039e();
    local_30 = FUN_14477b664(uVar3);
  }
  if (local_28 == 0) {
    if (((local_38 == 0) || (local_30 == 0)) ||
       ((plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 == (longlong *)0x0 ||
        (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')))) goto LAB_14605e535;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_28 = FUN_144aff482(uVar3,&local_38);
    if (local_28 == 0) goto LAB_14605e535;
  }
  FUN_14605e690(param_1,local_28);
LAB_14605e535:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14605e622 FUN_14605e622 body=37 status=ok
// SIG undefined FUN_14605e622(void)

undefined8 FUN_14605e622(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  FUN_14605e648(param_1,lVar1 + 0x1e8);
  return param_1;
}



// FUNCTION 14605e648 FUN_14605e648 body=71 status=ok
// SIG undefined FUN_14605e648(void)

undefined8 * FUN_14605e648(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14605e690 FUN_14605e690 body=446 status=ok
// SIG undefined FUN_14605e690(void)

void FUN_14605e690(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined1 local_188;
  undefined1 local_187;
  undefined8 local_180;
  undefined8 uStack_178;
  longlong local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_149;
  longlong local_148;
  longlong *local_140;
  undefined1 local_138 [248];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1413e28b0(local_138);
  local_198 = &local_149;
  FUN_145bd45fc(local_138,&local_148,param_2 + 0x20,0);
  if (local_148 != 0) {
    lVar4 = FUN_1409be8d8();
    if (lVar4 != 0) {
      lVar5 = FUN_1402d2740();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        lVar5 = 0;
        lVar4 = FUN_14090ceee(lVar4,0,0);
        *(longlong *)(param_1 + 0x3b0) = lVar4;
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        FUN_1447f71cc(lVar5,0x40000000);
        FUN_140648376(param_1 + 0x3c0,*(undefined8 *)(param_1 + 0x3b0));
        local_168 = 1;
        local_160 = 0;
        uStack_158 = 0;
        local_170 = param_1 + 0x3c0;
        FUN_140a5cfd6(*(longlong *)(param_1 + 0x470) + 0x1e0,*(longlong *)(param_1 + 0x470),
                      &local_170);
        FUN_1449db362(&local_160);
        local_188 = DAT_14c96b238;
        local_187 = 1;
        local_180 = 0;
        uStack_178 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0x1c0))();
      }
    }
  }
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  FUN_140f77756(local_138);
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605e850 FUN_14605e850 body=566 status=ok
// SIG undefined FUN_14605e850(void)

void FUN_14605e850(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1a9;
  longlong local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_168;
  double local_160;
  undefined1 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [248];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    local_198 = *(undefined8 *)(param_2 + 0x68);
    uStack_190 = *(undefined8 *)(param_2 + 0x70);
    local_188 = 0;
    local_184 = 1;
    local_180 = 0;
    uStack_178 = 0;
    FUN_14605ea88();
  }
  FUN_1413e28b0(local_138);
  local_1f8 = &local_1a9;
  FUN_145bd45fc(local_138,&local_1a8,param_2 + 0x48,0);
  if (local_1a8 != 0) {
    lVar6 = FUN_1409be8d8();
    if (lVar6 != 0) {
      lVar7 = FUN_144a79692();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        lVar7 = *(longlong *)(param_1 + 0x2e8);
        if (lVar7 != lVar6) {
          if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48(lVar7);
          }
          FUN_1401924dc(lVar6);
          *(longlong *)(param_1 + 0x2e8) = lVar6;
          lVar7 = lVar6;
        }
        FUN_140648376(param_1 + 0x2f0,lVar7);
        uVar3 = *(undefined8 *)(param_1 + 0x3a0);
        iVar4 = FUN_144a92d14(lVar6);
        iVar5 = FUN_144a92d02(lVar6);
        local_168 = (double)iVar5;
        local_158 = 1;
        local_150 = 1;
        local_148 = 0;
        uStack_140 = 0;
        local_160 = (double)iVar4;
        FUN_14605eab4(uVar3);
        local_1c8 = 1;
        local_1c0 = 0;
        uStack_1b8 = 0;
        local_1d0 = param_1 + 0x2f0;
        FUN_140a5cfd6(*(longlong *)(param_1 + 0x3a0) + 0x1e0,*(longlong *)(param_1 + 0x3a0),
                      &local_1d0);
        FUN_1449db362(&local_1c0);
        local_1e8 = DAT_14c96b238;
        local_1e7 = 1;
        local_1e0 = 0;
        uStack_1d8 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x298) + 0x1c0))();
      }
    }
  }
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar2 = (int *)((longlong)local_1a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_1a0 + 0x10))(local_1a0);
      }
    }
  }
  FUN_140f77756(local_138);
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605ea88 FUN_14605ea88 body=43 status=ok
// SIG undefined FUN_14605ea88(void)

void FUN_14605ea88(longlong param_1,longlong param_2)

{
  FUN_140a5abdc(param_1 + 0x270,param_1,param_2);
  FUN_1449db362(param_2 + 0x18);
  return;
}



// FUNCTION 14605eab4 FUN_14605eab4 body=51 status=ok
// SIG undefined FUN_14605eab4(void)

void FUN_14605eab4(longlong param_1,longlong param_2)

{
  FUN_14605eae8(param_1 + 0x200,param_1,param_2);
  FUN_1449db362(param_2 + 0x20);
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14605eae8 FUN_14605eae8 body=395 status=ok
// SIG undefined FUN_14605eae8(void)

void FUN_14605eae8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)param_3[4] != (longlong *)0x0 && *(int *)(param_3 + 5) != 0) {
    cVar1 = (**(code **)(*(longlong *)param_3[4] + 0x30))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_3 + 3) = 0;
      if ((longlong *)param_3[4] == (longlong *)0x0 || *(int *)(param_3 + 5) == 0) {
LAB_14605ec53:
        local_38 = *(char *)(param_3 + 2);
        if (local_38 == '\x01') {
          local_48 = *param_3;
          uStack_40 = *(undefined4 *)(param_3 + 1);
          uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
        }
        local_30 = 0;
      }
      else {
        cVar1 = (**(code **)(*(longlong *)param_3[4] + 0x30))();
        if (cVar1 == '\0') goto LAB_14605ec53;
        local_48 = param_3[4];
        param_3[4] = 0;
        uStack_40 = *(undefined4 *)(param_3 + 5);
        *(undefined4 *)(param_3 + 5) = 0;
        local_30 = 1;
      }
      FUN_14697c8d6(param_1,param_2,&local_48);
      bVar2 = local_30;
      goto LAB_14605eb79;
    }
  }
  if (*(char *)(param_3 + 3) != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *(undefined1 *)(param_3 + 3) = 0;
  if ((longlong *)param_3[4] == (longlong *)0x0 || *(int *)(param_3 + 5) == 0) {
LAB_14605eb49:
    local_38 = *(char *)(param_3 + 2);
    if (local_38 == '\x01') {
      local_48 = *param_3;
      uStack_40 = *(undefined4 *)(param_3 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    }
    bVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[4] + 0x30))();
    if (cVar1 == '\0') goto LAB_14605eb49;
    local_48 = param_3[4];
    param_3[4] = 0;
    uStack_40 = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)(param_3 + 5) = 0;
    bVar2 = 1;
  }
  local_30 = bVar2;
  FUN_14605ec94(param_1,param_2,&local_48);
LAB_14605eb79:
  (*(code *)(&PTR_FUN_149ef00a0)[bVar2])(&local_48);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605ec88 FUN_14605ec88 body=11 status=ok
// SIG undefined FUN_14605ec88(void)

void FUN_14605ec88(longlong param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 14605ec94 FUN_14605ec94 body=136 status=ok
// SIG undefined FUN_14605ec94(void)

undefined8 FUN_14605ec94(double *param_1,undefined8 param_2,double *param_3)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  undefined1 uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_3 + 2);
  if ((bVar1 == bVar2 & bVar1) == 1) {
    if ((*param_1 == *param_3) && (!NAN(*param_1) && !NAN(*param_3))) {
      if ((param_1[1] == param_3[1]) && (!NAN(param_1[1]) && !NAN(param_3[1]))) {
        return 0;
      }
    }
  }
  else if (bVar1 == bVar2) {
    return 0;
  }
  if (param_3 != param_1) {
    if (bVar2 == 0) {
      if ((bVar1 & 1) == 0) goto LAB_14605ecdb;
      uVar4 = 0;
    }
    else {
      dVar3 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = dVar3;
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar4;
  }
LAB_14605ecdb:
  FUN_14094e0ca(param_2,param_1,0,0);
  return 1;
}



// FUNCTION 14605ed1c FUN_14605ed1c body=112 status=ok
// SIG undefined FUN_14605ed1c(void)

void FUN_14605ed1c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *(undefined8 *)(DAT_14ca94dc8 + 0x10);
  uVar2 = *(undefined8 *)(DAT_14ca94dc8 + 0x18);
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = FUN_14001cc68(0x90,0x10);
    *(longlong *)(param_1 + 0x20) = lVar3;
  }
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0x3f80000000000000;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  *(undefined8 *)(lVar3 + 0x68) = 0;
  *(undefined8 *)(lVar3 + 0x70) = uVar1;
  *(undefined8 *)(lVar3 + 0x78) = uVar1;
  *(undefined8 *)(lVar3 + 0x80) = uVar2;
  *(undefined8 *)(lVar3 + 0x88) = uVar2;
  FUN_14605ed8c(param_1);
  return;
}



// FUNCTION 14605ed8c FUN_14605ed8c body=208 status=ok
// SIG undefined FUN_14605ed8c(void)

void FUN_14605ed8c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1415c767c(&local_20,*(longlong *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x10));
    lVar3 = *(longlong *)(param_1 + 0x18);
    *(longlong *)(param_1 + 0x18) = local_20;
    local_20 = 0;
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
      if (local_20 != 0) {
        LOCK();
        puVar1 = (uint *)(local_20 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605ee5e FUN_14605ee5e body=130 status=ok
// SIG undefined FUN_14605ee5e(void)

void FUN_14605ee5e(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14158cbd4();
  cVar2 = FUN_144729dda(param_1 + 0x30);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  else {
    local_38 = param_1;
    FUN_14605eee2(local_30,param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = FUN_14479d2ce(param_1 + 0x30);
    FUN_1415c7772(uVar3,uVar1,local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605eee2 FUN_14605eee2 body=422 status=ok
// SIG undefined FUN_14605eee2(void)

longlong * FUN_14605eee2(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = *(longlong **)(param_2 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14605efbc:
    *puVar3 = &PTR_LAB_14b4f3a70;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0e90;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = *param_3;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_14605efbc;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b4f3a70;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b4f0e90;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = *param_3;
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



// FUNCTION 14605f088 FUN_14605f088 body=21 status=ok
// SIG undefined FUN_14605f088(void)

undefined8 FUN_14605f088(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14605f09e FUN_14605f09e body=221 status=ok
// SIG undefined FUN_14605f09e(void)

void FUN_14605f09e(longlong param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14480f766(&DAT_14cb89710);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_14605f25c(param_1,&local_30);
  FUN_145a45af4(param_1,&local_40);
  FUN_145a45ca4(&local_40,&local_30);
  FUN_14127b1cd(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_14127b1cd(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_14605f17c(&local_30,param_1);
    *(longlong *)(param_1 + 8) = local_30;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605f17c FUN_14605f17c body=223 status=ok
// SIG undefined FUN_14605f17c(void)

undefined8 FUN_14605f17c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_14b4f38d0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b4f2500;
  local_30[3] = param_2;
  local_30[4] = FUN_145b044f6;
  FUN_145a5cf80(&DAT_14cb89710,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605f25c FUN_14605f25c body=383 status=ok
// SIG undefined FUN_14605f25c(void)

longlong * FUN_14605f25c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14127bdbc(*(undefined8 *)(*param_1 + 0x30),&local_58);
  lVar6 = local_58;
  if ((longlong)local_50 != 0) {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar6 + lVar8);
      if (lVar4 != 0) {
        lVar7 = FUN_140082f10();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          FUN_1408e4d18(lVar4 + 0x4e8,&local_68);
          plVar5 = local_60;
          lVar4 = local_68;
          if (local_68 != 0) {
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_1413eac7e(param_2,iVar3);
            }
            lVar7 = *param_2;
            *(longlong *)(lVar7 + (longlong)iVar3 * 0x10) = lVar4;
            *(longlong **)(lVar7 + 8 + (longlong)iVar3 * 0x10) = plVar5;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
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
          }
          plVar5 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)local_50 * 8 != lVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14605f3e8 FUN_14605f3e8 body=272 status=ok
// SIG undefined FUN_14605f3e8(void)

undefined8 * FUN_14605f3e8(undefined8 *param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b4b170();
  *param_1 = &PTR_FUN_14a444650;
  local_50 = L"AnimationLibraryWarning";
  local_48._0_4_ = 0x17;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"UKismetAnimationLibrary";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x17);
  FUN_1446e940c(local_68,&local_50);
  FUN_140208bae(&local_60,local_68,local_64,L"Animation Library Warning");
  local_50 = DAT_14caab7e0;
  local_48 = local_60;
  if (local_60 == (longlong *)0x0) {
    local_40 = local_58;
  }
  else {
    (**(code **)(*local_60 + 8))();
    local_40 = local_58;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  FUN_145c79fb4(&local_50);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605f4fa FUN_14605f4fa body=259 status=ok
// SIG undefined FUN_14605f4fa(void)

void FUN_14605f4fa(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_14605f576;
  local_38 = FUN_1400b465c();
  plVar3 = (longlong *)FUN_14605f5fe();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14605f694(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
LAB_14605f5aa:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014605f5d5:
        if (iVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar4;
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar4 = plVar3;
        goto joined_r0x00014605f5d5;
      }
    }
    else {
      *(longlong **)(param_1 + 0x38) = plVar3;
      if (plVar4 != (longlong *)0x0) goto LAB_14605f5aa;
    }
  }
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14605f576:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605f5fe FUN_14605f5fe body=149 status=ok
// SIG undefined FUN_14605f5fe(void)

undefined8 * FUN_14605f5fe(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b4f2470;
  uVar1 = *param_1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_14485c47a(puVar2 + 4,uVar1);
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0xffffffff;
  puVar2[0xb] = 0;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined8 *)((longlong)puVar2 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = 0;
  puVar2[0xf] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  return puVar2;
}



// FUNCTION 14605f694 FUN_14605f694 body=159 status=ok
// SIG undefined FUN_14605f694(void)

void FUN_14605f694(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14605f6d1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14605f6d1;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14605f6d1:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014605f72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14605f73e FUN_14605f73e body=420 status=ok
// SIG undefined FUN_14605f73e(void)

undefined8 * FUN_14605f73e(undefined8 *param_1)

{
  FUN_14605f8e2();
  *param_1 = &PTR_FUN_14b62e2c0;
  param_1[0x72] = &PTR_FUN_14b62e9b0;
  param_1[0x73] = &PTR_FUN_14b62ea20;
  param_1[0x74] = &PTR_FUN_14b62ea90;
  param_1[0x75] = &PTR_FUN_14b62eac0;
  param_1[0x76] = &PTR_FUN_14b62eaf0;
  param_1[0x77] = &PTR_FUN_14b62eb20;
  param_1[0x78] = &PTR_FUN_14b62eb60;
  param_1[0x79] = &PTR_FUN_14b62eb80;
  param_1[0x7a] = &PTR_FUN_14b62ebb0;
  param_1[0x7b] = &PTR_FUN_14b62ec80;
  param_1[0x7c] = &PTR_FUN_14b62ecd0;
  param_1[0x7d] = &PTR_FUN_14b62ed90;
  param_1[0x7e] = &PTR_FUN_14b62edb0;
  param_1[0x7f] = &PTR_FUN_14b62ee30;
  param_1[0x80] = &PTR_FUN_14b62ee50;
  param_1[0x81] = &PTR_FUN_14b62ee60;
  param_1[0x82] = &PTR_FUN_14b62eea0;
  param_1[0x83] = &PTR_FUN_14b62ef10;
  param_1[0x84] = &PTR_FUN_14b62ef40;
  param_1[0x85] = &PTR_FUN_14b62efe0;
  param_1[0x86] = &PTR_FUN_14b62f000;
  param_1[0x87] = &PTR_FUN_14b62f020;
  param_1[0x2a7] = &PTR_FUN_14b62f040;
  param_1[0x2a8] = &PTR_FUN_14b62f080;
  param_1[0x2a9] = &PTR_FUN_14b62f0a0;
  param_1[0x2aa] = &PTR_FUN_14b62f140;
  param_1[0x2ab] = &PTR_FUN_14b62f170;
  *(undefined4 *)(param_1 + 0x30f) = 0;
  return param_1;
}



// FUNCTION 14605f8e2 FUN_14605f8e2 body=421 status=ok
// SIG undefined FUN_14605f8e2(void)

undefined8 * FUN_14605f8e2(undefined8 *param_1)

{
  FUN_140c4a87c();
  *param_1 = &PTR_FUN_14b7ebc80;
  param_1[0x72] = &PTR_FUN_14b7ec370;
  param_1[0x73] = &PTR_FUN_14b7ec3e0;
  param_1[0x74] = &PTR_FUN_14b7ec450;
  param_1[0x75] = &PTR_FUN_14b7ec480;
  param_1[0x76] = &PTR_FUN_14b7ec4b0;
  param_1[0x77] = &PTR_FUN_14b7ec4e0;
  param_1[0x78] = &PTR_FUN_14b7ec520;
  param_1[0x79] = &PTR_FUN_14b7ec540;
  param_1[0x7a] = &PTR_FUN_14b7ec570;
  param_1[0x7b] = &PTR_FUN_14b7ec640;
  param_1[0x7c] = &PTR_FUN_14b7ec690;
  param_1[0x7d] = &PTR_FUN_14b7ec750;
  param_1[0x7e] = &PTR_FUN_14b7ec770;
  param_1[0x7f] = &PTR_FUN_14b7ec7f0;
  param_1[0x80] = &PTR_FUN_14b7ec810;
  param_1[0x81] = &PTR_FUN_14b7ec820;
  param_1[0x82] = &PTR_FUN_14b7ec860;
  param_1[0x83] = &PTR_FUN_14b7ec8d0;
  param_1[0x84] = &PTR_FUN_14b7ec900;
  param_1[0x85] = &PTR_FUN_14b7ec9a0;
  param_1[0x86] = &PTR_FUN_14b7ec9c0;
  param_1[0x87] = &PTR_FUN_14b7ec9e0;
  param_1[0x2a7] = &PTR_FUN_14b7eca00;
  param_1[0x2a8] = &PTR_FUN_14b7eca40;
  param_1[0x2a9] = &PTR_FUN_14b7eca60;
  param_1[0x2aa] = &PTR_FUN_14b7ecb00;
  param_1[0x2ab] = &PTR_FUN_14b7ecb30;
  param_1[0x30e] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 14605fa92 FUN_14605fa92 body=272 status=ok
// SIG undefined FUN_14605fa92(void)

undefined8 * FUN_14605fa92(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_38,L"SpawnComponent",1);
  uVar1 = FUN_145a8a728();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar1,0);
  uVar1 = DAT_14cb8c398;
  uVar2 = FUN_145a8a814();
  FUN_140486538(param_2,uVar1);
  FUN_14048646a(param_2 + 0x20,uVar1,uVar2,0);
  FUN_1407fbd50(param_1,param_2);
  *param_1 = &PTR_FUN_14b6dc270;
  param_1[0x72] = &PTR_FUN_14b6dc8b0;
  param_1[0x73] = &PTR_FUN_14b6dc8d0;
  param_1[0x83] = &PTR_FUN_14b6dc8f0;
  param_1[0x84] = &PTR_FUN_14b6dc910;
  param_1[0x85] = &PTR_FUN_14b6dc930;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605fba4 FUN_14605fba4 body=459 status=ok
// SIG undefined FUN_14605fba4(void)

void FUN_14605fba4(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_1415c789c(&DAT_14c967000,L"r.DebugSafeZone.TitleRatio",&DAT_14c75ed00,
                L"The safe zone ratio that will be returned by FDisplayMetrics::GetDisplayMetrics on platforms that don\'t have a defined safe zone (0..1)\n default: 1.0"
               );
  local_68 = 0;
  FUN_1415c789c(&DAT_14c967010,L"r.DebugActionZone.ActionRatio",&DAT_14c75ed04,
                L"The action zone ratio that will be returned by FDisplayMetrics::GetDisplayMetrics on platforms that don\'t have a defined safe zone (0..1)\n default: 1.0"
               );
  plVar1 = DAT_14c967008;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  *local_58 = &PTR_LAB_149e170a0;
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
  local_58[2] = lVar3;
  *local_58 = &PTR_FUN_149ec8090;
  local_58[3] = &DAT_14c967000;
  local_58[4] = &LAB_14691cc04;
  (**(code **)(*plVar1 + 200))(plVar1,&local_58);
  FUN_1449db362(&local_58);
  plVar1 = DAT_14c967018;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  local_50 = 3;
  *local_58 = &PTR_LAB_149e170a0;
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
  local_58[2] = lVar3;
  *local_58 = &PTR_FUN_149ec8090;
  local_58[3] = &DAT_14c967000;
  local_58[4] = &LAB_14691cc04;
  (**(code **)(*plVar1 + 200))(plVar1,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605fd70 FUN_14605fd70 body=162 status=ok
// SIG undefined FUN_14605fd70(void)

void FUN_14605fd70(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14605fdfd;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14605fdfd:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14605fe12 FUN_14605fe12 body=154 status=ok
// SIG undefined FUN_14605fe12(void)

bool FUN_14605fe12(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14605feb6 FUN_14605feb6 body=277 status=ok
// SIG undefined FUN_14605feb6(void)

undefined8 * FUN_14605feb6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1400ea892(param_1,uVar1);
  *param_1 = &PTR_FUN_14af05230;
  param_1[5] = &PTR_FUN_14af05cb0;
  param_1[6] = &PTR_LAB_14af05cf0;
  param_1[0x55] = &PTR_FUN_14af05d40;
  param_1[0x56] = &PTR_FUN_14af05dc0;
  param_1[0x57] = &PTR_FUN_14af05dd0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6f4) = 0xffffffff00000080;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) & 0xfd;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  *(undefined1 *)(param_1 + 0xd1) = 1;
  FUN_1400ea934(param_1,DAT_14cad0f30,1);
  return param_1;
}



// FUNCTION 14605ffcc FUN_14605ffcc body=40 status=ok
// SIG undefined FUN_14605ffcc(void)

undefined8 FUN_14605ffcc(undefined8 param_1,int param_2)

{
  FUN_14605fff4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14605fff4 FUN_14605fff4 body=245 status=ok
// SIG undefined FUN_14605fff4(void)

void FUN_14605fff4(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14af19f20;
  if (param_1[0x2c] != 0) {
    plVar1 = param_1 + 0x30;
    if ((longlong *)param_1[0x2e] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x2e];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x24] != 0) {
    plVar1 = param_1 + 0x28;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x26];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1460600ea FUN_1460600ea body=21 status=ok
// SIG undefined FUN_1460600ea(void)

undefined8 FUN_1460600ea(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146060100 FUN_146060100 body=288 status=ok
// SIG undefined FUN_146060100(void)

void FUN_146060100(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[1] == '\0') {
    if (param_2 != (longlong *)0x0) {
      lVar2 = FUN_140e21508();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        cVar1 = (**(code **)(*param_2 + 0x310))(param_2);
        if (cVar1 != '\0') {
          local_40 = (undefined8 **)0x0;
          FUN_14485c47a(&local_40,param_2);
          local_48 = local_40;
          FUN_146060222(param_1 + 0x10);
          if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x44)) {
            *param_1 = 0;
          }
          goto LAB_1460601c5;
        }
      }
    }
    *param_1 = 1;
    local_48 = (undefined8 **)0x0;
    FUN_14485c47a(&local_48,param_2);
    local_50 = (undefined8 *)0x0;
    if (param_2 != (longlong *)0x0) {
      local_40 = (undefined8 *)0x0;
      FUN_14485c47a(&local_40,param_2);
      local_50 = local_40;
    }
    local_40 = &local_50;
    local_38 = &local_48;
    FUN_1460602a4(param_1 + 0x10,local_2c);
  }
LAB_1460601c5:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146060222 FUN_146060222 body=129 status=ok
// SIG undefined FUN_146060222(void)

void FUN_146060222(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(lVar1 + lVar4 * 0x18) == *param_2) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x18) == param_2[1])) {
          FUN_148afd42c(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1460602a4 FUN_1460602a4 body=300 status=ok
// SIG undefined FUN_1460602a4(void)

undefined4 * FUN_1460602a4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146060460(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = FUN_144a78877(uVar6,uVar6 >> 0x20);
  cVar3 = FUN_1460603d2(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146060548(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460603d2 FUN_1460603d2 body=141 status=ok
// SIG undefined FUN_1460603d2(void)

undefined8 FUN_1460603d2(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      while( true ) {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar7 * 0x18) == param_3[1])
           ) break;
        iVar7 = piVar1[4];
        if (iVar7 == -1) {
          return 0;
        }
      }
      iVar2 = *param_3;
      iVar3 = param_3[1];
      iVar4 = param_3[2];
      iVar5 = param_3[3];
      *piVar1 = iVar2;
      piVar1[1] = iVar3;
      piVar1[2] = iVar4;
      piVar1[3] = iVar5;
      FUN_148afd484(iVar2,*param_4);
      *param_4 = iVar7;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 146060460 FUN_146060460 body=231 status=ok
// SIG undefined FUN_146060460(void)

int * FUN_146060460(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1403951a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 146060548 FUN_146060548 body=455 status=ok
// SIG undefined FUN_146060548(void)

void FUN_146060548(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x18),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x18));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146060710 FUN_146060710 body=439 status=ok
// SIG undefined FUN_146060710(void)

char FUN_146060710(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  byte bVar13;
  char cVar14;
  undefined8 uVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  
  pcVar1 = (char *)(param_1 + 0x5b0);
  LOCK();
  bVar18 = *(char *)(param_1 + 0x5b0) == '\0';
  if (bVar18) {
    *(char *)(param_1 + 0x5b0) = '\x01';
  }
  UNLOCK();
  if (!bVar18) {
    FUN_1447d2058();
  }
  LOCK();
  bVar13 = *(byte *)(param_1 + 0x5ac);
  if (bVar13 == 0) {
    *(byte *)(param_1 + 0x5ac) = 1;
    bVar13 = 0;
  }
  UNLOCK();
  if ((bVar13 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x598);
    *(uint *)(param_1 + 0x598) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x59c) < iVar4 + 1U) {
      FUN_1460608c8((longlong *)(param_1 + 0x590),iVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x590);
    lVar17 = (longlong)iVar4 * 0x40;
    *(undefined8 *)(lVar5 + lVar17) = *param_2;
    *(undefined8 *)(lVar5 + 0x10 + lVar17) = param_2[2];
    param_2[2] = 0;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar8 = *(undefined4 *)(param_2 + 5);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar11 = *(undefined4 *)(param_2 + 7);
    uVar12 = *(undefined4 *)((longlong)param_2 + 0x3c);
    puVar2 = (undefined4 *)(lVar5 + 0x30 + lVar17);
    *puVar2 = *(undefined4 *)(param_2 + 6);
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar17);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    if (*(longlong *)(lVar5 + lVar17) != 0) {
      *param_2 = 0;
    }
    FUN_141098246();
  }
  else {
    if ((*(byte *)(param_1 + 0x5ad) & 1) != 0) {
      LOCK();
      cVar14 = *pcVar1;
      if (cVar14 == '\x01') {
        *pcVar1 = '\0';
      }
      UNLOCK();
      if (cVar14 != '\x01') {
        FUN_14008cdb0(pcVar1);
      }
      UNRECOVERED_JUMPTABLE = (code *)*param_2;
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return '\0';
      }
      plVar16 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar16 = (longlong *)param_2[2];
      }
      uVar15 = (**(code **)(*plVar16 + 8))(plVar16);
                    /* WARNING: Could not recover jumptable at 0x000146060839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      cVar14 = (*UNRECOVERED_JUMPTABLE)(uVar15);
      return cVar14;
    }
    iVar4 = *(int *)(param_1 + 0x598);
    *(uint *)(param_1 + 0x598) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x59c) < iVar4 + 1U) {
      FUN_1460608c8((longlong *)(param_1 + 0x590),iVar4);
    }
    lVar5 = *(longlong *)(param_1 + 0x590);
    lVar17 = (longlong)iVar4 * 0x40;
    *(undefined8 *)(lVar5 + lVar17) = *param_2;
    *(undefined8 *)(lVar5 + 0x10 + lVar17) = param_2[2];
    param_2[2] = 0;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar8 = *(undefined4 *)(param_2 + 5);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x2c);
    uVar15 = param_2[7];
    puVar3 = (undefined8 *)(lVar5 + 0x30 + lVar17);
    *puVar3 = param_2[6];
    puVar3[1] = uVar15;
    puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar17);
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    if (*(longlong *)(lVar5 + lVar17) != 0) {
      *param_2 = 0;
    }
  }
  LOCK();
  cVar14 = *pcVar1;
  bVar18 = cVar14 == '\x01';
  if (bVar18) {
    *pcVar1 = '\0';
    cVar14 = '\x01';
  }
  UNLOCK();
  if (bVar18) {
    return cVar14;
  }
  cVar14 = FUN_14008cdb0(pcVar1);
  return cVar14;
}



// FUNCTION 1460608c8 FUN_1460608c8 body=132 status=ok
// SIG undefined FUN_1460608c8(void)

void FUN_1460608c8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14606094c FUN_14606094c body=200 status=ok
// SIG undefined FUN_14606094c(void)

void FUN_14606094c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar3 = (**(code **)(*param_1 + 0x180))();
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar3 = FUN_14116599c();
      if (lVar3 != 0) {
        lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
        if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x1f0), plVar1 != (longlong *)0x0)) {
          lVar4 = FUN_1403ca142();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
             ((*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
               == lVar4 + 0x30 && ((char)plVar1[0xad] == '\x01')))) {
            cVar2 = FUN_146060a14(lVar3,*(undefined4 *)(param_2 + 0x20));
            if (cVar2 == '\0') {
              (**(code **)(*plVar1 + 0x450))(plVar1,*(undefined4 *)(param_2 + 0x20));
              FUN_146060a78(param_1);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 146060a14 FUN_146060a14 body=99 status=ok
// SIG undefined FUN_146060a14(void)

longlong FUN_146060a14(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x210) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x210);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x218) - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        bVar3 = *(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)iVar2 * 0x20) == param_2;
        lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar3);
        if (bVar3) {
          return lVar1;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x1d0) + 0x18);
      } while (iVar2 != -1);
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 146060a78 FUN_146060a78 body=271 status=ok
// SIG undefined FUN_146060a78(void)

void FUN_146060a78(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = *(longlong *)(local_38 + 0x30);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + 1;
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
  if (*(char *)(lVar3 + 0x30) == '\0') {
    if (*(int *)(lVar3 + 0x34) != 0) goto LAB_146060ae5;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar3 + 0x34) + 1;
  }
  *(undefined1 *)(lVar3 + 0x30) = 0;
  *(int *)(lVar3 + 0x34) = iVar4;
LAB_146060ae5:
  uVar5 = FUN_140495e96(param_1 + 0x30);
  lVar6 = FUN_1404960a8(uVar5);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    FUN_14143c516(puVar7);
    *puVar7 = &PTR_FUN_14b9b6c58;
    FUN_14039144e(lVar6,puVar7);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x40));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146060b88 FUN_146060b88 body=122 status=ok
// SIG undefined FUN_146060b88(void)

undefined2 * FUN_146060b88(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_144a84b50();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      uVar2 = (**(code **)(*param_2 + 0x2d0))(param_2);
      FUN_146060c02(param_1,param_2[0x19],uVar2);
      return param_1;
    }
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 146060c02 FUN_146060c02 body=234 status=ok
// SIG undefined FUN_146060c02(void)

undefined8 * FUN_146060c02(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14054e628(&local_30);
  if ((longlong)local_28 != 0) {
    lVar3 = local_30 + 0x20;
    lVar2 = (longlong)local_28 * 0x48;
    do {
      iVar1 = FUN_14054e860(lVar3 + -0x20);
      if (iVar1 == 3) {
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        *param_1 = *(undefined8 *)(lVar3 + -0x10);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + -8);
        FUN_1447715ec(param_1 + 2,lVar3);
        goto LAB_146060c7f;
      }
      lVar3 = lVar3 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
LAB_146060c7f:
  FUN_14054e5f7(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146060cee FUN_146060cee body=122 status=ok
// SIG undefined FUN_146060cee(void)

undefined8 * FUN_146060cee(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(200,0x10);
  FUN_146060d68(uVar1);
  *param_1 = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 146060d68 FUN_146060d68 body=164 status=ok
// SIG undefined FUN_146060d68(void)

void FUN_146060d68(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_149edb640;
  param_1[1] = 0;
  param_1[2] = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  param_1[3] = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_149f18f98;
  param_1[4] = 0;
  param_1[5] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3fe0000000000000;
  param_1[0x11] = 0x3fe0000000000000;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0x100;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 146060e14 FUN_146060e14 body=278 status=ok
// SIG undefined FUN_146060e14(void)

undefined8 * FUN_146060e14(undefined8 *param_1)

{
  FUN_145a3619c();
  *param_1 = &PTR_FUN_14aec9910;
  param_1[5] = &PTR_FUN_14aec9c50;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 2;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x32] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x34] = &PTR_LAB_14aeb6a30;
  param_1[0x35] = &LAB_14844dca8;
  param_1[0x30] = FUN_146bd3274;
  param_1[0x3a] = 0;
  param_1[0x3c] = &PTR_LAB_14aeb6a50;
  param_1[0x3d] = &LAB_14844dcac;
  param_1[0x38] = &LAB_14841c744;
  return param_1;
}



// FUNCTION 146060f36 FUN_146060f36 body=274 status=ok
// SIG undefined FUN_146060f36(void)

undefined8 * FUN_146060f36(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b00ad80;
  param_1[0x72] = &PTR_FUN_14b00b3b8;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  FUN_1446f470e(&local_28,L"BreadcrumbRouteComponent",1);
  uVar2 = FUN_14585de9a();
  local_30 = 0;
  local_38 = 1;
  plVar3 = (longlong *)FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (plVar3 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(plVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x73] = plVar3;
  if ((plVar3 != (longlong *)0x0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(plVar3);
    plVar3 = (longlong *)param_1[0x73];
  }
  param_1[0x39] = plVar3;
  (**(code **)(*plVar3 + 0x588))(plVar3,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606104a FUN_14606104a body=226 status=ok
// SIG undefined FUN_14606104a(void)

longlong * FUN_14606104a(longlong *param_1)

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
  pcVar13 = FUN_1463d10ca;
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



// FUNCTION 146061132 FUN_146061132 body=138 status=ok
// SIG undefined FUN_146061132(void)

code * FUN_146061132(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExtraTileCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1460611bc;
}



// FUNCTION 1460611bc FUN_1460611bc body=138 status=ok
// SIG undefined FUN_1460611bc(void)

code * FUN_1460611bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TilesPerGroup";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463d1152;
}



// FUNCTION 146061252 FUN_146061252 body=775 status=ok
// SIG undefined FUN_146061252(void)

longlong * FUN_146061252(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = L"AreaComponent";
  local_30 = 0xd;
  FUN_145abb12c(param_2);
  local_48 = L"AreaComponent";
  local_40 = 0xd;
  FUN_145abb20c(param_2 + 0x20,&local_48,0);
  FUN_1410b71be(param_1,param_2);
  *param_1 = (longlong)&PTR_FUN_14b670fd0;
  param_1[0x72] = (longlong)&PTR_FUN_14b671660;
  param_1[0x73] = (longlong)&PTR_FUN_14b671680;
  param_1[0x74] = (longlong)&PTR_FUN_14b6716b0;
  param_1[0x75] = (longlong)&PTR_FUN_14b6716c0;
  param_1[0x76] = (longlong)&PTR_FUN_14b671730;
  param_1[0x77] = (longlong)&PTR_FUN_14b671760;
  param_1[0x78] = (longlong)&PTR_FUN_14b671790;
  param_1[0x7f] = (longlong)&PTR_FUN_14b671840;
  param_1[0x80] = (longlong)&PTR_FUN_14b6718b0;
  param_1[0x81] = (longlong)&PTR_FUN_14b671920;
  param_1[0x82] = (longlong)&PTR_FUN_14b671950;
  param_1[0x83] = (longlong)&PTR_FUN_14b671990;
  param_1[0x84] = (longlong)&PTR_FUN_14b671a30;
  param_1[0x85] = (longlong)&PTR_FUN_14b671a50;
  param_1[0x89] = (longlong)&PTR_FUN_14b671a70;
  param_1[0x8a] = (longlong)&PTR_FUN_14b671b30;
  param_1[0x8b] = (longlong)&PTR_FUN_14b671bb0;
  param_1[0x8c] = (longlong)&PTR_FUN_14b671c00;
  param_1[0x8d] = (longlong)&PTR_FUN_14b671c40;
  param_1[0x8e] = (longlong)&PTR_FUN_14b671c60;
  param_1[0x8f] = (longlong)&PTR_FUN_14b671c80;
  param_1[0x90] = (longlong)&PTR_FUN_14b671ca0;
  param_1[0x91] = (longlong)&PTR_FUN_14b671cc0;
  param_1[0x92] = (longlong)&PTR_FUN_14b671ce0;
  param_1[0x93] = (longlong)&PTR_FUN_14b671d00;
  param_1[0x94] = (longlong)&PTR_FUN_14b671d20;
  param_1[0x95] = (longlong)&PTR_FUN_14b671d40;
  param_1[0x96] = (longlong)&PTR_FUN_14b671d60;
  param_1[0x34b] = (longlong)&PTR_FUN_14b671d80;
  param_1[0x352] = (longlong)&PTR_FUN_14b671d90;
  param_1[0x353] = (longlong)&PTR_FUN_14b671dd0;
  param_1[0x354] = (longlong)&PTR_FUN_14b671e10;
  param_1[0x355] = (longlong)&PTR_FUN_14b671e60;
  param_1[0x356] = (longlong)&PTR_FUN_14b671e90;
  param_1[0x359] = (longlong)&PTR_FUN_14b671ed0;
  param_1[0x35a] = (longlong)&PTR_FUN_14b671ee0;
  param_1[0x35b] = (longlong)&PTR_FUN_14b671f10;
  param_1[0x35c] = (longlong)&PTR_FUN_14b671fb0;
  param_1[0x4bf] = (longlong)&PTR_FUN_14b671fd0;
  FUN_1411c3dfa(param_1 + 0x4e0);
  param_1[0x4e0] = (longlong)&PTR_FUN_14b676410;
  param_1[0x4ce] = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  if (*(int *)((longlong)param_1 + 0x26a4) != 0) {
    FUN_148e121be(param_1 + 0x4d3);
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    (**(code **)(*param_1 + 0x330))(param_1,1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606155a FUN_14606155a body=85 status=ok
// SIG undefined FUN_14606155a(void)

void FUN_14606155a(longlong param_1)

{
  char cVar1;
  
  FUN_14033f58e();
  if ((*(byte *)(param_1 + 0x39) & 0x19) == 0) {
    *(undefined1 *)(param_1 + 0x2b7) = 0;
  }
  *(bool *)(*(longlong *)(param_1 + 0x238) + 0x18a) = (*(byte *)(param_1 + 0x39) & 0x19) != 0;
  cVar1 = FUN_1404d5a16(*(undefined8 *)(param_1 + 0x238));
  if (cVar1 != '\0') {
    FUN_1415c8144(*(undefined8 *)(param_1 + 0x238));
    return;
  }
  return;
}



// FUNCTION 1460615ba FUN_1460615ba body=281 status=ok
// SIG undefined FUN_1460615ba(void)

undefined8 * FUN_1460615ba(undefined8 *param_1)

{
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
  *param_1 = &PTR_FUN_14a675430;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  memset(param_1 + 0x25,0,0xf4);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caeb098) {
    FUN_144b3d300(&DAT_14caeb098);
    if (DAT_14caeb098 == -1) {
      FUN_1415c8fc2();
      atexit(FUN_14356dc5f);
      _Init_thread_footer(&DAT_14caeb098);
    }
  }
  return param_1;
}



// FUNCTION 1460616d4 FUN_1460616d4 body=133 status=ok
// SIG undefined FUN_1460616d4(void)

longlong FUN_1460616d4(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14606175a();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_146061721;
  }
  local_30 = param_3;
  FUN_146061816(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_146061721:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 14606175a FUN_14606175a body=187 status=ok
// SIG undefined FUN_14606175a(void)

int FUN_14606175a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x68;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
        }
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
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x60 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 146061816 FUN_146061816 body=269 status=ok
// SIG undefined FUN_146061816(void)

undefined4 * FUN_146061816(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146061a56(param_1,local_48);
  FUN_146061924(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_146061b3a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_146061dd6(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146061924 FUN_146061924 body=179 status=ok
// SIG undefined FUN_146061924(void)

undefined8 * FUN_146061924(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  lVar2 = puVar1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_1460619d8(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145d2368a(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460619d8 FUN_1460619d8 body=125 status=ok
// SIG undefined FUN_1460619d8(void)

undefined8 * FUN_1460619d8(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_146061c28();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 146061a56 FUN_146061a56 body=227 status=ok
// SIG undefined FUN_146061a56(void)

int * FUN_146061a56(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406a7630(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 146061b3a FUN_146061b3a body=237 status=ok
// SIG undefined FUN_146061b3a(void)

undefined8 FUN_146061b3a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar4 = FUN_14606175a(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      iVar4 = FUN_14606175a(param_1);
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
    }
    if (iVar4 != -1) {
      _Dst = (void *)((longlong)iVar4 * 0x68 + *param_1);
      FUN_145d2362a(_Dst);
      memmove(_Dst,param_3,0x60);
      FUN_145d236c0(param_1,*param_4);
      *param_4 = iVar4;
      uVar5 = 1;
      goto LAB_146061b60;
    }
  }
  uVar5 = 0;
LAB_146061b60:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146061c28 FUN_146061c28 body=429 status=ok
// SIG undefined FUN_146061c28(void)

longlong * FUN_146061c28(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_145d23884((longlong)iVar6 * 0x38 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146061dd6 FUN_146061dd6 body=500 status=ok
// SIG undefined FUN_146061dd6(void)

void FUN_146061dd6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x68;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 100) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x60) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146061fcc FUN_146061fcc body=445 status=ok
// SIG undefined FUN_146061fcc(void)

undefined8
FUN_146061fcc(undefined8 *param_1,int param_2,ulonglong param_3,uint param_4,int param_5,
             uint param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68 [2];
  int local_58 [3];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = *param_1;
  FUN_14606218a(local_58);
  if ((param_4 >> 0xb & 1) == 0) {
    local_74 = *(undefined4 *)((longlong)param_1 + 0xc);
  }
  else {
    local_74 = 1;
  }
  FUN_140056680(local_68,L"D3D12 Pool Allocator");
  if (param_6 < 0x101) {
    bVar7 = (param_3 & 4) == 0;
    if (param_5 != 0) {
      bVar7 = param_5 != 2;
    }
    uVar5 = (uint)bVar7;
  }
  else {
    uVar5 = 0;
  }
  bVar7 = local_4c != 0x400000;
  uVar6 = 0x1000000;
  if (param_2 == 3 && bVar7) {
    uVar6 = 0x10000;
  }
  uVar4 = 0x2000000;
  if (param_2 == 3 && bVar7) {
    uVar4 = 0x400000;
  }
  uVar3 = 0x100;
  if (uVar5 == 0) {
    uVar3 = 0x10000;
  }
  uVar2 = FUN_14001cc68(0x100,0x10);
  local_80 = *(undefined4 *)(param_1 + 9);
  local_b8 = local_68;
  local_90 = 0;
  local_b0 = uVar5;
  local_a8 = uVar4;
  local_a0 = uVar3;
  local_98 = uVar6;
  local_88 = local_58[0] == 1 && bVar7;
  FUN_14156b70a(uVar2,local_70,local_74,local_58);
  iVar1 = *(int *)(param_1 + 3);
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1460621d0(param_1 + 2,iVar1);
  }
  *(undefined8 *)(param_1[2] + (longlong)iVar1 * 8) = uVar2;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606218a FUN_14606218a body=69 status=ok
// SIG undefined FUN_14606218a(void)

void FUN_14606218a(int *param_1,int param_2,int param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  if ((param_4 >> 0xd & 1) == 0) {
    if (param_2 == 3) {
      param_1[3] = 0x400;
    }
    else if ((param_4 & 8) == 0) {
      param_1[3] = 0xac3;
    }
    else {
      param_1[3] = 8;
    }
  }
  else {
    param_1[3] = 0x400000;
  }
  param_1[1] = 0xc0;
  return;
}



// FUNCTION 1460621d0 FUN_1460621d0 body=132 status=ok
// SIG undefined FUN_1460621d0(void)

void FUN_1460621d0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146062274 FUN_146062274 body=209 status=ok
// SIG undefined FUN_146062274(void)

bool FUN_146062274(longlong param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x20,&local_48,0);
    lVar5 = local_48;
  }
  else {
    lVar5 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x20);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x30);
    local_48 = 0;
    local_40 = 0;
    FUN_14009d848(&local_48,param_1 + 8);
    (*pcVar2)(iVar1 + lVar4,param_2,&local_48);
  }
  if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146062346 FUN_146062346 body=596 status=ok
// SIG undefined FUN_146062346(void)

void FUN_146062346(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar3 = FUN_1400b465c();
  lVar4 = FUN_14119d4d6(uVar3);
  iVar1 = *(int *)(lVar4 + 0xe0);
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar4 = param_1 + 0x1d0;
  FUN_1460626ac(lVar4,local_98);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar6 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar6 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar6) || (local_b0 != local_88)) {
    do {
      iVar2 = *(int *)(*local_e0 + (longlong)iStack_c4 * 0xc);
      if (iVar2 != iVar1) {
        local_e8 = param_1 + 0x58;
        FUN_146062814(param_1,iVar2);
        FUN_1401861f4(local_e8,iVar2);
        FUN_148a8d43a(lVar4,iVar2);
      }
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (((iStack_c4 != iVar6) || (local_d0 != local_88)) || (local_e0 != local_98));
  }
  FUN_146062814(param_1,iVar1);
  FUN_1401861f4(param_1 + 0x58,iVar1);
  FUN_145cfb06c(lVar4);
  lVar4 = FUN_1400b465c(param_1);
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x48), lVar4 != 0)) {
    lVar5 = FUN_140b7066c();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_14606259c(lVar4);
    }
  }
  *(undefined1 *)(param_1 + 0x221) = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*param_3 + 0x60))();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(local_98);
  FUN_1449db362(param_3);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606259c FUN_14606259c body=255 status=ok
// SIG undefined FUN_14606259c(void)

void FUN_14606259c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x300) == '\x01') {
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x300) = 0;
  }
  if (*(char *)(param_1 + 800) == '\x01') {
    if (*(longlong *)(param_1 + 0x310) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 800) = 0;
  }
  if (*(char *)(param_1 + 0x329) == '\x01') {
    *(undefined1 *)(param_1 + 0x329) = 0;
  }
  if (((*(longlong *)(param_1 + 0x330) != 0) && (*(longlong *)(param_1 + 0x338) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x338) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x330);
    local_20 = *(longlong *)(param_1 + 0x338);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x338);
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460626ac FUN_1460626ac body=359 status=ok
// SIG undefined FUN_1460626ac(void)

void FUN_1460626ac(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402226aa(param_2);
  uVar3 = (longlong)(int)param_1[1] - (longlong)*(int *)((longlong)param_1 + 0x34);
  uVar2 = (uint)uVar3;
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar2) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_1400bac10(param_2,uVar3 & 0xffffffff);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar1)) {
      *(int *)(param_2 + 0x48) = iVar1;
      FUN_144a56d22(param_2);
    }
  }
  local_38 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_60 = local_40;
  local_58 = local_38;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1447cbafe(param_2,&local_40,(longlong)iStack_4c * 0x20 + *local_68,0);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146062814 FUN_146062814 body=426 status=ok
// SIG undefined FUN_146062814(void)

void FUN_146062814(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2d0))();
  FUN_146062b5e(param_1,param_2);
  (**(code **)(*param_1 + 0x410))(param_1,param_2);
  FUN_1446f470e(&local_40,L"SHIFT",1);
  (**(code **)(*param_1 + 0x180))(param_1);
  local_28 = local_40;
  plVar3 = (longlong *)FUN_1401e3228();
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0xb0))(local_38,param_2);
    }
  }
  lVar4 = FUN_1400b465c(param_1);
  lVar4 = *(longlong *)(lVar4 + 0x48);
  if (lVar4 != 0) {
    lVar5 = FUN_140b7066c();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_1460629c0(lVar4,param_2);
      FUN_1415c90dc(lVar4,param_2,0);
    }
  }
  lVar4 = FUN_1460695f4(param_1);
  if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x1e0), lVar4 != 0)) &&
     (lVar5 = *(longlong *)(lVar4 + 0x68), lVar5 != 0)) {
    FUN_140ceec26(lVar5,&local_28,param_2);
    plVar3 = *(longlong **)(lVar4 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      local_44 = FUN_140b9fef0(lVar5,&local_28,0);
      (**(code **)(*plVar3 + 0x2b8))(plVar3);
    }
    FUN_1415c92c6(lVar5,&local_28);
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460629c0 FUN_1460629c0 body=75 status=ok
// SIG undefined FUN_1460629c0(void)

void FUN_1460629c0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_144a7cc9e(param_1 + 0x410);
  iVar1 = FUN_146062a0c(param_1 + 0x3b8,param_2);
  if (iVar1 != 0) {
    FUN_145ec8f34(param_1 + 0x270,param_2,0);
    return;
  }
  return;
}



// FUNCTION 146062a0c FUN_146062a0c body=103 status=ok
// SIG undefined FUN_146062a0c(void)

undefined8 FUN_146062a0c(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_146062a74(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146062a74 FUN_146062a74 body=95 status=ok
// SIG undefined FUN_146062a74(void)

void FUN_146062a74(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_146062ad4(param_1,param_2,1);
  return;
}



// FUNCTION 146062ad4 FUN_146062ad4 body=138 status=ok
// SIG undefined FUN_146062ad4(void)

void FUN_146062ad4(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146062b5e FUN_146062b5e body=860 status=ok
// SIG undefined FUN_146062b5e(void)

void FUN_146062b5e(longlong *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = (int)param_1[0x1f];
  iVar5 = *(int *)((longlong)param_1 + 0x124);
  if (iVar2 != iVar5) {
    plVar4 = (longlong *)param_1[0x26];
    if ((longlong *)param_1[0x26] == (longlong *)0x0) {
      plVar4 = param_1 + 0x25;
    }
    iVar7 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x27] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      plVar4 = param_1 + 0x1e;
      do {
        if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x18) == param_2) {
          plVar3 = (longlong *)FUN_140a68038(CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1));
          if (plVar3 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            plStack_40 = (longlong *)0x0;
            goto LAB_146062c6d;
          }
          (**(code **)(*plVar3 + 0x80))(plVar3,&local_48);
          if (local_48 == (longlong *)0x0) goto LAB_146062c6d;
          if ((int)param_1[0x1f] != *(int *)((longlong)param_1 + 0x124)) {
            plVar3 = param_1 + 0x25;
            if ((longlong *)param_1[0x26] != (longlong *)0x0) {
              plVar3 = (longlong *)param_1[0x26];
            }
            uVar6 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[0x27] - 1U & param_2) * 4)
            ;
            if (uVar6 != 0xffffffff) {
              goto LAB_146062c43;
            }
          }
          puVar8 = (uint *)0x0;
          goto LAB_146062c57;
        }
        iVar7 = *(int *)(*plVar4 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
    goto LAB_146062c8d;
  }
LAB_146062c91:
  if (param_1[0x32] != 0) {
    FUN_14480f766(&DAT_14c872c10);
  }
  param_1[0x32] = 0;
  goto LAB_146062cb4;
  while( true ) {
    uVar6 = puVar8[4];
    puVar8 = (uint *)0x0;
    if (uVar6 == 0xffffffff) break;
LAB_146062d9d:
    puVar8 = (uint *)(*plVar4 + (longlong)(int)uVar6 * 0x18);
    if (*puVar8 == param_2) break;
  }
LAB_146062db1:
  (**(code **)(*local_48 + 0x30))(local_48,param_2,puVar8 + 2);
  FUN_146062ebc(plVar4,param_2);
LAB_146062dc7:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  goto LAB_146062ddb;
  while( true ) {
    uVar6 = puVar8[4];
    puVar8 = (uint *)0x0;
    if (uVar6 == 0xffffffff) break;
LAB_146062c43:
    puVar8 = (uint *)(*plVar4 + (longlong)(int)uVar6 * 0x18);
    if (*puVar8 == param_2) break;
  }
LAB_146062c57:
  (**(code **)(*local_48 + 0x30))(local_48,param_2,puVar8 + 2);
  FUN_146062ebc(plVar4,param_2);
LAB_146062c6d:
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  iVar2 = (int)param_1[0x1f];
  iVar5 = *(int *)((longlong)param_1 + 0x124);
LAB_146062c8d:
  if (iVar2 == iVar5) goto LAB_146062c91;
LAB_146062cb4:
  if ((int)param_1[0x29] != *(int *)((longlong)param_1 + 0x174)) {
    plVar4 = (longlong *)param_1[0x30];
    if ((longlong *)param_1[0x30] == (longlong *)0x0) {
      plVar4 = param_1 + 0x2f;
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x31] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      plVar4 = param_1 + 0x28;
      do {
        if (*(uint *)(*plVar4 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1446f470e(&local_50,L"SHIFT",1);
          (**(code **)(*param_1 + 0x180))(param_1);
          local_38 = local_50;
          plVar3 = (longlong *)FUN_1401e3228();
          if (plVar3 == (longlong *)0x0) {
            local_48 = (longlong *)0x0;
            plStack_40 = (longlong *)0x0;
            goto LAB_146062dc7;
          }
          (**(code **)(*plVar3 + 0x80))(plVar3,&local_48);
          if (local_48 == (longlong *)0x0) goto LAB_146062dc7;
          if ((int)param_1[0x29] != *(int *)((longlong)param_1 + 0x174)) {
            plVar3 = param_1 + 0x2f;
            if ((longlong *)param_1[0x30] != (longlong *)0x0) {
              plVar3 = (longlong *)param_1[0x30];
            }
            uVar6 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[0x31] - 1U & param_2) * 4)
            ;
            if (uVar6 != 0xffffffff) {
              goto LAB_146062d9d;
            }
          }
          puVar8 = (uint *)0x0;
          goto LAB_146062db1;
        }
        iVar2 = *(int *)(*plVar4 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
LAB_146062ddb:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146062ebc FUN_146062ebc body=104 status=ok
// SIG undefined FUN_146062ebc(void)

undefined8 FUN_146062ebc(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14581b41a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146062f24 FUN_146062f24 body=1070 status=ok
// SIG undefined FUN_146062f24(void)

void FUN_146062f24(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[0x104] != 0) {
    FUN_14480f766(DAT_14cb0d2b0 + 0xec8);
  }
  if (param_1[0x105] != 0) {
    FUN_14480f766(DAT_14cb0d2b0 + 0xeb0);
  }
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x358))(local_28,param_1 + 0xe1);
  }
  plVar3 = (longlong *)FUN_140a68038(0);
  if (plVar3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x358))(local_38,param_1 + 0xe2);
      (**(code **)(*local_38 + 0x338))(local_38,param_1 + 0xe3);
      (**(code **)(*local_38 + 0x410))(local_38,param_1 + 0xe4);
      (**(code **)(*local_38 + 0x430))(local_38,param_1 + 0xe6);
    }
  }
  uVar4 = FUN_141546c72();
  FUN_146063354(uVar4,param_1[0x107]);
  param_1[0x107] = 0;
  uVar4 = FUN_1457fac5a();
  if (param_1[0x11b] != 0) {
    FUN_14480f766(uVar4);
  }
  if (param_1[0x11d] != 0) {
    FUN_14480f766(&DAT_14c872c10);
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_14591aa10();
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) {
      FUN_140457ffc(*(longlong *)(lVar5 + 0x30) + 0x10,param_1);
    }
  }
  if (param_1[0x11a] != 0) {
    lVar5 = (**(code **)(*param_1 + 0x2d0))(param_1);
    if (lVar5 != 0) {
      lVar6 = FUN_1403ca142();
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) && (param_1[0x11a] != 0)) {
        FUN_14480f766(lVar5 + 0x2a8);
      }
    }
    param_1[0x11a] = 0;
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_14116599c();
    if (lVar5 != 0) {
      if (param_1[0xf2] != 0) {
        FUN_14480f766(lVar5 + 0x40);
        param_1[0xf2] = 0;
      }
      if (param_1[0x11f] != 0) {
        FUN_14480f766(lVar5 + 0x40);
        param_1[0x11f] = 0;
      }
    }
  }
  if (((param_1[0x120] != 0) && (param_1[0x121] != 0)) && (0 < *(int *)(param_1[0x121] + 8))) {
    FUN_1401cb356();
    local_48 = param_1[0x120];
    local_40 = param_1[0x121];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_48);
    plVar3 = (longlong *)param_1[0x121];
    param_1[0x120] = 0;
    param_1[0x121] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  if ((longlong *)param_1[0xb3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb3] + 0x30))();
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_1414ac30e();
    if (lVar5 != 0) {
      if (param_1[0x123] != 0) {
        FUN_14480f766(lVar5 + 0x38);
      }
      param_1[0x123] = 0;
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x1f0) != 0)) {
    lVar5 = FUN_14094c9c2();
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x30) != 0)) {
      FUN_146063400();
    }
  }
  FUN_14606355a(param_1);
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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



// FUNCTION 146063354 FUN_146063354 body=66 status=ok
// SIG undefined FUN_146063354(void)

void FUN_146063354(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_146063398(param_1 + 0x48,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146063398 FUN_146063398 body=103 status=ok
// SIG undefined FUN_146063398(void)

void FUN_146063398(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == lVar2) {
          FUN_14606346a();
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 146063400 FUN_146063400 body=105 status=ok
// SIG undefined FUN_146063400(void)

void FUN_146063400(longlong param_1)

{
  if (*(longlong *)(DAT_14cb98ab0 + 0x28) != 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FUN_14480f766(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x30);
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    if (*(longlong *)(param_1 + 0x188) != 0) {
      FUN_14480f766(*(longlong *)(DAT_14cb98ab0 + 0x28) + 0x48);
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
  }
  return;
}



// FUNCTION 14606346a FUN_14606346a body=123 status=ok
// SIG undefined FUN_14606346a(void)

void FUN_14606346a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x1c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x20 + 0x18);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x18);
  FUN_1449db362(*param_1 + lVar2 + 8);
  FUN_1460634e6(param_1,param_2);
  return;
}



// FUNCTION 1460634e6 FUN_1460634e6 body=116 status=ok
// SIG undefined FUN_1460634e6(void)

void FUN_1460634e6(longlong *param_1,int param_2)

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



// FUNCTION 14606355a FUN_14606355a body=379 status=ok
// SIG undefined FUN_14606355a(void)

void FUN_14606355a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  (**(code **)(*param_1 + 0x180))();
  plVar1 = (longlong *)FUN_1401e3228(&local_20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x178))(plVar1,param_1 + 0x6c);
    param_1[0x6c] = 0;
  }
  plVar1 = (longlong *)FUN_140a68038(0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x178))(plVar1,param_1 + 0x6b);
    param_1[0x6b] = 0;
  }
  if (param_1[0x6f] != 0) {
    FUN_14480f766(&DAT_14cb896c8);
  }
  if (param_1[0x70] != 0) {
    FUN_14480f766(&DAT_14cb896e0);
  }
  if (param_1[0x71] != 0) {
    FUN_14480f766(&DAT_14cb71558);
  }
  if (param_1[0x72] != 0) {
    FUN_14480f766(&DAT_14cb7df38);
  }
  lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1);
  if (param_1[0x6d] != 0) {
    FUN_14480f766(lVar2 + 0x60);
  }
  param_1[0x6d] = 0;
  if (param_1[0x6e] != 0) {
    FUN_14480f766(&DAT_14c9647a0);
  }
  param_1[0x6e] = 0;
  if (param_1[0x73] != 0) {
    FUN_14480f766(&DAT_14c86a9c0);
  }
  FUN_146063762(param_1);
  FUN_1460636d6(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460636d6 FUN_1460636d6 body=138 status=ok
// SIG undefined FUN_1460636d6(void)

void FUN_1460636d6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x338))(local_28,param_1 + 0x16);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146063762 FUN_146063762 body=173 status=ok
// SIG undefined FUN_146063762(void)

void FUN_146063762(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x3a8) != 0) && (*(longlong *)(param_1 + 0x3b0) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x3b0) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x3a8);
    local_20 = *(longlong *)(param_1 + 0x3b0);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar2 = *(longlong *)(param_1 + 0x3b0);
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    if (lVar2 != 0) {
      LOCK();
      piVar1 = (int *)(lVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606382c FUN_14606382c body=275 status=ok
// SIG undefined FUN_14606382c(void)

undefined8 * FUN_14606382c(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14a81a970;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_1446f470e(&local_20,L"Collision",1);
  param_1[6] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606394e FUN_14606394e body=275 status=ok
// SIG undefined FUN_14606394e(void)

undefined8 * FUN_14606394e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14ad8d2e0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar2 = FUN_144830b78(param_1 + 9,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 9) = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14ad965e0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_38 = FUN_1446f8646();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  local_30 = 1;
  local_2e = 0;
  local_2c = 0xffffffff;
  uVar2 = FUN_144830b78(local_24);
  *(undefined4 *)(param_1 + 9) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146063a6e FUN_146063a6e body=275 status=ok
// SIG undefined FUN_146063a6e(void)

undefined8 * FUN_146063a6e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14adc4f30;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar2 = FUN_144830b78(param_1 + 9,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 9) = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcb160;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_38 = FUN_144a7937e();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_38);
  }
  local_30 = 1;
  local_2e = 0;
  local_2c = 0xffffffff;
  uVar2 = FUN_144830b78(local_24);
  *(undefined4 *)(param_1 + 9) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146063b8e FUN_146063b8e body=276 status=ok
// SIG undefined FUN_146063b8e(void)

undefined8 * FUN_146063b8e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14af0aba0;
  param_1[5] = &PTR_FUN_14af0ae50;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xe] = 2;
  uVar1 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar1;
  param_1[0x26] = DAT_14c8464f0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2d] = DAT_14c8464e0;
  param_1[0x2e] = uVar1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3a] = 0x7fefffffffffffff;
  param_1[0x3b] = 0x7fefffffffffffff;
  param_1[0x3c] = 0xffefffffffffffff;
  param_1[0x3d] = 0xffefffffffffffff;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return param_1;
}



// FUNCTION 146063ca2 FUN_146063ca2 body=124 status=ok
// SIG undefined FUN_146063ca2(void)

longlong * FUN_146063ca2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x290,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b10fef0;
  FUN_146063d1e(plVar3 + 2,0);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 146063d1e FUN_146063d1e body=163 status=ok
// SIG undefined FUN_146063d1e(void)

undefined8 * FUN_146063d1e(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_1458d592e(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_1458d592e();
  }
  FUN_145c6c452(param_1,param_2);
  *param_1 = &PTR_FUN_14b3f7e20;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 6;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  return param_1;
}



// FUNCTION 146063dc2 FUN_146063dc2 body=24 status=ok
// SIG undefined FUN_146063dc2(void)

void FUN_146063dc2(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146063dd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146063dda FUN_146063dda body=38 status=ok
// SIG undefined FUN_146063dda(void)

undefined8 FUN_146063dda(undefined8 param_1,int param_2)

{
  FUN_1415c95fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146063e00 FUN_146063e00 body=133 status=ok
// SIG undefined FUN_146063e00(void)

longlong FUN_146063e00(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1415c991c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x68;
    if (lVar3 + lVar2 != 0) goto LAB_146063e4d;
  }
  local_30 = param_3;
  FUN_146063e86(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x68;
LAB_146063e4d:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x10;
}



// FUNCTION 146063e86 FUN_146063e86 body=269 status=ok
// SIG undefined FUN_146063e86(void)

undefined4 * FUN_146063e86(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460640c6(param_1,local_48);
  FUN_146063f94(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_1460641aa(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14606444a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146063f94 FUN_146063f94 body=179 status=ok
// SIG undefined FUN_146063f94(void)

undefined8 * FUN_146063f94(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  lVar2 = puVar1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_146064048(param_2 + 2,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1459b0970(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146064048 FUN_146064048 body=125 status=ok
// SIG undefined FUN_146064048(void)

undefined8 * FUN_146064048(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14606429c();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1460640c6 FUN_1460640c6 body=227 status=ok
// SIG undefined FUN_1460640c6(void)

int * FUN_1460640c6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406a7630(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 1460641aa FUN_1460641aa body=241 status=ok
// SIG undefined FUN_1460641aa(void)

undefined8 FUN_1460641aa(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    local_38 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      iVar4 = FUN_1415c991c(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      iVar4 = FUN_1415c991c(param_1);
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
    }
    if (iVar4 != -1) {
      _Dst = (void *)((longlong)iVar4 * 0x68 + *param_1);
      FUN_1459b0910(_Dst);
      memmove(_Dst,param_3,0x60);
      FUN_1459b09a6(param_1,*param_4);
      *param_4 = iVar4;
      uVar5 = 1;
      goto LAB_1460641d0;
    }
  }
  uVar5 = 0;
LAB_1460641d0:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606429c FUN_14606429c body=429 status=ok
// SIG undefined FUN_14606429c(void)

longlong * FUN_14606429c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_1459b0b4e((longlong)iVar6 * 0x68 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14606444a FUN_14606444a body=500 status=ok
// SIG undefined FUN_14606444a(void)

void FUN_14606444a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x68;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 100) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x60) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146064640 FUN_146064640 body=127 status=ok
// SIG undefined FUN_146064640(void)

void FUN_146064640(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460646c0();
  FUN_146064870(param_1);
  lVar1 = FUN_1411c1a08();
  local_30 = &LAB_145eda39a;
  local_28 = 0;
  FUN_146064770(lVar1 + 0x90,&local_20,param_1);
  *(undefined8 *)(param_1 + 0xd80) = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460646c0 FUN_1460646c0 body=175 status=ok
// SIG undefined FUN_1460646c0(void)

void FUN_1460646c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x390) != '\0') {
    iVar1 = FUN_14487fd02(param_1);
    if (iVar1 != 3) {
      iVar1 = *(byte *)(param_1 + 0x390) - 1;
      uVar2 = FUN_1447210f0(param_1);
      FUN_147daac2c(uVar2,param_1,iVar1);
      plVar3 = (longlong *)FUN_1414fb874(param_1,iVar1);
      if (plVar3 != (longlong *)0x0) {
        local_28 = 0;
        local_24 = 1;
        local_20 = 0x40000000;
        (**(code **)(*plVar3 + 0xe38))(plVar3,param_1);
      }
    }
  }
  FUN_1405f1eac(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146064770 FUN_146064770 body=254 status=ok
// SIG undefined FUN_146064770(void)

undefined8
FUN_146064770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14ae30180;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b965b90;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145851a76(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146064870 FUN_146064870 body=681 status=ok
// SIG undefined FUN_146064870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146064870(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = FUN_1447210f0();
  if ((lVar9 != 0) && (lVar3 = *(longlong *)(param_1 + 0x398), lVar3 != 0)) {
    if (*(char *)(param_1 + 0xd10) == '\0') {
      lVar9 = FUN_146064b1a(lVar9);
      if (lVar9 != 0) {
        FUN_146064bdc(param_1);
      }
    }
    if (*(char *)(param_1 + 0xd10) == '\x01') {
      fVar1 = *(float *)(param_1 + 0xd08);
      fVar2 = *(float *)(param_1 + 0xd0c);
      auVar11 = *(undefined1 (*) [16])(lVar3 + 0x1b0);
      dVar6 = auVar11._0_8_;
      dVar7 = auVar11._8_8_;
      dVar16 = *(double *)(lVar3 + 0x1c0);
      puVar10 = *(undefined8 **)(lVar3 + 0x230);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        uVar8 = DAT_14c8463d8;
        *puVar10 = DAT_14c8463d0;
        puVar10[1] = uVar8;
        uVar8 = DAT_14c8463e8;
        puVar10[2] = DAT_14c8463e0;
        puVar10[3] = uVar8;
        uVar8 = DAT_14c846500;
        puVar10[4] = DAT_14c8464f8;
        puVar10[5] = uVar8;
        puVar10[6] = DAT_14c846508;
        *(undefined8 **)(lVar3 + 0x230) = puVar10;
      }
      if (((((double)puVar10[4] != dVar6) || (NAN((double)puVar10[4]) || NAN(dVar6))) ||
          ((double)puVar10[5] != dVar7)) ||
         (((NAN((double)puVar10[5]) || NAN(dVar7) || ((double)puVar10[6] != dVar16)) ||
          (NAN((double)puVar10[6]) || NAN(dVar16))))) {
        auVar19._8_8_ = 0;
        auVar19._0_8_ = dVar16;
        dVar4 = (double)DAT_1499387d0;
        dVar5 = DAT_1499387d0._8_8_;
        auVar11 = divpd(auVar11,_DAT_1499387d0);
        auVar14 = divpd(auVar19,_DAT_1499387d0);
        auVar11 = roundpd(auVar11,auVar11,3);
        auVar14 = roundpd(auVar14,auVar14,3);
        dVar6 = dVar6 - auVar11._0_8_ * dVar4;
        dVar7 = dVar7 - auVar11._8_8_ * dVar5;
        auVar20._0_8_ = dVar16 - auVar14._0_8_ * dVar4;
        auVar20._8_8_ = 0.0 - auVar14._8_8_ * dVar5;
        auVar18._0_8_ = dVar6 + dVar4;
        auVar18._8_8_ = dVar7 + dVar5;
        auVar17._0_8_ = dVar4 + auVar20._0_8_;
        auVar17._8_8_ = dVar5 + auVar20._8_8_;
        auVar14._8_8_ = -(ulonglong)(0.0 <= dVar7);
        auVar14._0_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar11._8_4_ = SUB84(dVar7,0);
        auVar11._0_8_ = dVar6;
        auVar11._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar14 = blendvpd(auVar18,auVar11,auVar14);
        auVar12._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
        auVar12._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
        auVar11 = blendvpd(auVar17,auVar20,auVar12);
        auVar15._0_8_ = auVar14._0_8_ + -360.0;
        auVar15._8_8_ = auVar14._8_8_ + -360.0;
        auVar13._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
        auVar13._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
        auVar14 = blendvpd(auVar14,auVar15,auVar13);
        dVar16 = auVar11._0_8_;
        *(undefined1 (*) [16])(puVar10 + 4) = auVar14;
        puVar10[6] = ~-(ulonglong)(180.0 < dVar16) & (ulonglong)dVar16 |
                     (ulonglong)(dVar16 + -360.0) & -(ulonglong)(180.0 < dVar16);
        FUN_144a7484c(puVar10 + 4,&local_78);
        puVar10[2] = local_68;
        puVar10[3] = uStack_60;
        *puVar10 = local_78;
        puVar10[1] = uStack_70;
      }
      local_78 = *puVar10;
      uStack_70 = puVar10[1];
      local_68 = puVar10[2];
      uStack_60 = puVar10[3];
      local_98 = 0;
      uStack_90 = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_88 = (double)(fVar1 * fVar2 + 0.0);
      FUN_144927ad4(lVar3,&local_98,&local_78,0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146064b1a FUN_146064b1a body=117 status=ok
// SIG undefined FUN_146064b1a(void)

longlong FUN_146064b1a(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_146064b8f();
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x3d0) != 0)) {
    lVar4 = FUN_144a78b9e();
    lVar3 = *(longlong *)(lVar3 + 0x3d0);
    if (((lVar3 != 0) &&
        (((lVar4 != 0 && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      uVar5 = FUN_1415c99d8(lVar3 + 0x10b0);
      cVar2 = FUN_1415c99e0(uVar5);
      if (cVar2 != '\0') {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 146064b8f FUN_146064b8f body=77 status=ok
// SIG undefined FUN_146064b8f(void)

longlong FUN_146064b8f(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
     (lVar1 = FUN_140fe13cc(*(longlong *)(param_1 + 0x1f0),0), lVar1 != 0)) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 146064bdc FUN_146064bdc body=105 status=ok
// SIG undefined FUN_146064bdc(void)

void FUN_146064bdc(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  plVar1 = (longlong *)FUN_145a8ada2();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    fVar3 = 0.0;
    if (lVar2 == 0) goto LAB_146064c09;
  }
  fVar3 = *(float *)(lVar2 + 0x80);
LAB_146064c09:
  *(float *)(param_1 + 0xd0c) = param_2 - fVar3;
  *(undefined1 *)(param_1 + 0xd10) = 1;
  return;
}



// FUNCTION 146064c52 FUN_146064c52 body=707 status=ok
// SIG undefined FUN_146064c52(void)

ulonglong FUN_146064c52(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar5 = (longlong)((int)param_3[1] + -1) * 0x20;
  uVar14 = *(uint *)(*param_3 + 8 + lVar5);
  plVar7 = *(longlong **)(*param_3 + 0x18 + lVar5);
  local_48 = plVar7;
  if (((((ulonglong)plVar7 & 1) != 0) && (((ulonglong)plVar7 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  uVar6 = FUN_1446e6bbc();
  bVar3 = FUN_1400164de(&local_48,uVar6);
  uVar6 = DAT_14c872be8;
  uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if ((bVar3 == 0) || (plVar7 == (longlong *)0x0)) {
    lVar5 = FUN_140010bca();
    if ((((ulonglong)plVar7 & 1) != 0) &&
       (uVar8 = (ulonglong)plVar7 & 0xfffffffffffffffe, uVar8 != 0)) {
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(uVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        bVar3 = FUN_146064f16(param_2,uVar8,puVar2);
        bVar9 = 1;
        goto LAB_146064d0d;
      }
    }
    uVar6 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_48,uVar6);
    uVar6 = DAT_14c872be8;
    bVar3 = 1;
    bVar9 = 0;
    uVar10 = 0;
    if ((cVar4 == '\0') || (plVar7 == (longlong *)0x0)) goto LAB_146064d0d;
    bVar9 = 0;
    uVar10 = 0;
    if ((ulonglong)uVar14 == 0xffffffff) {
      uVar14 = 0;
    }
    if ((int)plVar7[6] <= (int)uVar14) goto LAB_146064d0d;
    param_2 = (longlong)(int)uVar14 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
              param_2 + *(int *)((longlong)plVar7 + 0x44);
    if (param_2 != 0) {
      if (*(int *)(puVar2 + 1) == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      else {
        puVar11 = (undefined2 *)*puVar2;
      }
      cVar4 = FUN_140d50488(plVar7,0,DAT_14c872be8);
      uVar10 = 0;
      if ((cVar4 != '\0') && (puVar11 != (undefined2 *)0x0)) goto LAB_146064dba;
      goto LAB_146064de5;
    }
LAB_146064e49:
    bVar3 = 1;
    bVar9 = 0;
    uVar10 = 0;
  }
  else {
    puVar13 = (ulonglong *)(*(int *)((longlong)plVar7 + 0x44) + param_2);
    if (uVar14 == 0xffffffff) {
      if (puVar13 == (ulonglong *)0x0) {
        bVar9 = 0;
        uVar10 = 0;
        goto LAB_146064d0d;
      }
      if (*(int *)(puVar2 + 1) == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      else {
        puVar11 = (undefined2 *)*puVar2;
      }
      cVar4 = FUN_140d50488(plVar7,0,DAT_14c872be8);
      if ((cVar4 != '\0') && (puVar11 != (undefined2 *)0x0)) {
        lVar5 = *plVar7;
        local_58 = uVar6;
        uVar12 = 1;
        goto LAB_146064ddf;
      }
    }
    else {
      bVar3 = *(byte *)(plVar7 + 0xe);
      (**(code **)(*(longlong *)plVar7[0xf] + 0x178))();
      uVar6 = DAT_14c872be8;
      if (((int)uVar14 < 0) || ((int)puVar13[1] <= (int)uVar14)) goto LAB_146064e49;
      if ((bVar3 & 1) == 0) {
        uVar8 = *puVar13;
      }
      else {
        uVar8 = *puVar13;
        if ((uVar8 & 1) != 0) {
          uVar8 = (longlong)puVar13 + ((longlong)uVar8 >> 0x18);
        }
      }
      plVar7 = (longlong *)plVar7[0xf];
      if (*(int *)(puVar2 + 1) == 0) {
        puVar11 = &DAT_149dfb77a;
      }
      else {
        puVar11 = (undefined2 *)*puVar2;
      }
      iVar1 = *(int *)((longlong)plVar7 + 0x34);
      cVar4 = FUN_140d50488(plVar7,0,DAT_14c872be8);
      if ((cVar4 != '\0') && (puVar11 != (undefined2 *)0x0)) {
        param_2 = uVar8 + (longlong)iVar1 * (ulonglong)uVar14;
LAB_146064dba:
        lVar5 = *plVar7;
        uVar12 = 0;
        local_58 = uVar6;
LAB_146064ddf:
        local_60 = 0x8000000;
        local_68 = 0;
        (**(code **)(lVar5 + 0xf8))(plVar7,puVar11,param_2,uVar12);
      }
    }
LAB_146064de5:
    bVar9 = 1;
    bVar3 = 1;
  }
LAB_146064d0d:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar10,bVar9 & bVar3) & 0xffffffff;
}



// FUNCTION 146064f16 FUN_146064f16 body=416 status=ok
// SIG undefined FUN_146064f16(void)

undefined8 FUN_146064f16(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(char *)(param_2 + 0xb4) == '\x01') && (lVar4 = FUN_140d2ab24(param_2), lVar4 == 0)) &&
     (plVar5 = (longlong *)FUN_1460650b7(), plVar5 != (longlong *)0x0)) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      local_48 = (void *)0x0;
      uStack_40 = (ulonglong)*(uint *)((longlong)plVar5 + 0x34);
      if (*(uint *)((longlong)plVar5 + 0x34) != 0) {
        FUN_1447403be(&local_48,0);
      }
      if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
        (**(code **)(*plVar5 + 0x160))(plVar5);
      }
      else {
        memset(local_48,0,(longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34));
      }
      pvVar2 = local_48;
      uVar6 = DAT_14c872be8;
      if (*(int *)(param_3 + 1) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)*param_3;
      }
      cVar3 = FUN_140d50488(plVar5,0,DAT_14c872be8);
      if ((cVar3 != '\0') && (puVar7 != (undefined2 *)0x0)) {
        local_58 = uVar6;
        local_60 = 0x8000000;
        local_68 = 0;
        (**(code **)(*plVar5 + 0xf8))(plVar5,puVar7,pvVar2,0);
      }
      (**(code **)(*param_1 + 0x248))(param_1,param_2,local_48);
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar6 = 1;
      goto LAB_14606506f;
    }
  }
  uVar6 = 0;
LAB_14606506f:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1460650b7 FUN_1460650b7 body=164 status=ok
// SIG undefined FUN_1460650b7(void)

longlong FUN_1460650b7(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(longlong *)(param_1 + 0x50);
  }
  local_18 = 0xffffffff;
  local_14 = 0x101;
  local_12 = 0;
  local_28 = param_1;
  FUN_144a2daf0(&local_28);
  if (local_20 == 0) {
LAB_146065132:
    lVar1 = 0;
  }
  else {
    do {
      if (-1 < (char)*(undefined8 *)(local_20 + 0x38)) goto LAB_146065132;
      lVar1 = local_20;
      if (((uint)*(undefined8 *)(local_20 + 0x38) >> 10 & 1) == 0) break;
      local_20 = *(longlong *)(local_20 + 0x18);
      FUN_144a2daf0(&local_28);
      lVar1 = 0;
    } while (local_20 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14606515c FUN_14606515c body=130 status=ok
// SIG undefined FUN_14606515c(void)

void FUN_14606515c(longlong param_1,int param_2)

{
  if ((*(int *)(param_1 + 0xad0) != -1) && (param_2 == 0 && *(longlong *)(param_1 + 0xac8) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x8c0) + 0x18))(param_1 + 0x8c0);
  }
  FUN_140ef6a7a(*(undefined8 *)(param_1 + 0x968),*(undefined4 *)(param_1 + 0x970));
  *(undefined4 *)(param_1 + 0x970) = 0;
  if (*(int *)(param_1 + 0x974) != 0) {
    FUN_1460651de(param_1 + 0x968,0);
  }
  FUN_140f0695c(param_1,param_2);
  return;
}



// FUNCTION 1460651de FUN_1460651de body=96 status=ok
// SIG undefined FUN_1460651de(void)

void FUN_1460651de(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14606523e FUN_14606523e body=1428 status=ok
// SIG undefined FUN_14606523e(void)

void FUN_14606523e(longlong *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[0x42] == param_3) {
    *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
    if (param_1[0x41] != 0) {
      local_30 = param_1[0x41];
      FUN_1447cd2ec(param_1 + 6);
      lVar6 = param_1[0x41];
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
      (**(code **)(*plVar5 + 0x6a0))(plVar5,lVar6);
      if (lVar6 != 0) {
        FUN_140f065f6(lVar6,param_1,param_3);
      }
      cVar1 = (char)param_1[-0xe9];
      plVar5 = param_1 + 0x1d;
      cVar4 = FUN_1403ae288(plVar5);
      if (cVar4 != '\0') {
        if (param_1[0x43] != 0) {
          lVar6 = FUN_14008e0ae(plVar5);
          if (param_1[0x43] != 0) {
            FUN_14480f766(lVar6 + 0x198);
          }
          param_1[0x43] = 0;
        }
        if (param_1[0x44] != 0) {
          lVar6 = FUN_14008e0ae(plVar5);
          if (param_1[0x44] != 0) {
            FUN_14480f766(lVar6 + 0x1b0);
          }
          param_1[0x44] = 0;
        }
        if (param_1[0x45] != 0) {
          lVar6 = FUN_14008e0ae(plVar5);
          if (param_1[0x45] != 0) {
            FUN_14480f766(lVar6 + 0x168);
          }
          param_1[0x45] = 0;
        }
        if (param_1[0x46] != 0) {
          lVar6 = FUN_14008e0ae(plVar5);
          if (param_1[0x46] != 0) {
            FUN_14480f766(lVar6 + 0x180);
          }
          param_1[0x46] = 0;
        }
        if (param_1[0x47] != 0) {
          lVar6 = FUN_14008e0ae(plVar5);
          if (param_1[0x47] != 0) {
            FUN_14480f766(lVar6 + 0x198);
          }
          param_1[0x47] = 0;
        }
        if (param_1[0x49] != 0) {
          lVar6 = FUN_14008e0ae(plVar5);
          if (param_1[0x49] != 0) {
            FUN_14480f766(lVar6 + 0x168);
          }
          param_1[0x49] = 0;
        }
        if (param_1[0x4a] != 0) {
          lVar6 = FUN_14008e0ae(plVar5);
          if (param_1[0x4a] != 0) {
            FUN_14480f766(lVar6 + 0x180);
          }
          param_1[0x4a] = 0;
        }
        cVar4 = *(char *)((longlong)param_1 + 0x201);
        if (cVar4 == '\0') {
          if (param_1[0x4b] != 0) {
            lVar6 = FUN_14008e0ae(plVar5);
            if (param_1[0x4b] != 0) {
              FUN_14480f766(lVar6 + 0x240);
            }
            param_1[0x4b] = 0;
          }
          if (param_1[0x4c] != 0) {
            lVar6 = FUN_14008e0ae(plVar5);
            if (param_1[0x4c] != 0) {
              FUN_14480f766(lVar6 + 600);
            }
            param_1[0x4c] = 0;
          }
          cVar4 = *(char *)((longlong)param_1 + 0x201);
        }
        if (((cVar4 == '\x01') && (0 < (int)param_1[0x32])) && (param_1[0x3b] != 0)) {
          if (param_1[0x4d] != 0) {
            lVar6 = FUN_14008e0ae(plVar5);
            if (param_1[0x4d] != 0) {
              FUN_14480f766(lVar6 + 0x1c8);
            }
            param_1[0x4d] = 0;
          }
          if (param_1[0x4e] != 0) {
            lVar6 = FUN_14008e0ae(plVar5);
            if (param_1[0x4e] != 0) {
              FUN_14480f766(lVar6 + 0x1f8);
            }
            param_1[0x4e] = 0;
          }
          if (param_1[0x48] != 0) {
            lVar6 = FUN_14008e0ae(plVar5);
            if (param_1[0x48] != 0) {
              FUN_14480f766(lVar6 + 0x1b0);
            }
            param_1[0x48] = 0;
          }
          if ((param_1[0x51] != 0) && (param_1[0x41] != 0)) {
            if (cVar1 == '\x03') {
              FUN_14480f766(param_1[0x41] + 0x4ad8);
              param_1[0x51] = 0;
            }
            FUN_140609c6a(param_1 + 0x25);
          }
          if ((cVar1 == '\x03') && (0 < (int)param_1[0x1a])) {
            FUN_14053d8da(param_1 + 0x19,1);
          }
        }
        FUN_140609c6a(plVar5);
      }
      plVar5 = param_1 + -0x118;
      if (((*(char *)((longlong)param_1 + 0x201) == '\x03') && (0.0 < *(float *)(param_1 + 0x35)))
         && (param_1[0x3a] != 0)) {
        if ((char)param_1[0x3e] == '\x01') {
          FUN_148d649d6(plVar5);
        }
        FUN_148d64aba(plVar5);
        FUN_140609c6a(param_1 + 0x21);
        puVar3 = (undefined8 *)param_1[0x3a];
        if (puVar3 != (undefined8 *)0x0) {
          param_1[0x3a] = 0;
          (**(code **)*puVar3)(puVar3,1);
        }
      }
      if ((cVar1 == '\x03') && (param_1[0x53] != 0)) {
        lVar6 = (**(code **)(*(longlong *)(param_1[0x41] + 0x10a0) + 0x20))(param_1[0x41] + 0x10a0);
        if (lVar6 != 0) {
          if (param_1[0x53] != 0) {
            FUN_14480f766(lVar6 + 0xf8);
          }
          param_1[0x53] = 0;
        }
      }
      if (((*(char *)((longlong)param_1 + 0x201) == '\x01') && (0 < (int)param_1[0x32])) &&
         (0.0 < *(float *)(param_1 + 0x38))) {
        FUN_148d64b6a(plVar5);
      }
      if (cVar1 == '\x03') {
        if (param_1[0x3f] != 0) {
          FUN_145ac621c(param_1 + 3);
        }
        lVar6 = param_1[0x16];
        if ((longlong)(int)lVar6 != 0) {
          lVar2 = param_1[0x15];
          lVar7 = 0;
          do {
            plVar5 = *(longlong **)(lVar2 + lVar7);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x20))(plVar5,param_1[0x41]);
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)(int)lVar6 * 8 != lVar7);
        }
      }
      param_1[0x41] = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460657de FUN_1460657de body=276 status=ok
// SIG undefined FUN_1460657de(void)

undefined8 * FUN_1460657de(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ae88e40;
  param_1[0x72] = &PTR_FUN_14ae89480;
  param_1[0x73] = 0;
  FUN_1446f470e(&local_20,L"WaterSpline",1);
  uVar1 = FUN_140719a38();
  local_30 = 0;
  local_38 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar2);
  }
  param_1[0x73] = plVar2;
  (**(code **)(*plVar2 + 0x588))(plVar2,0);
  plVar2 = (longlong *)param_1[0x73];
  *(undefined2 *)((longlong)plVar2 + 0x695) = 1;
  (**(code **)(*plVar2 + 0xa38))();
  lVar3 = param_1[0x73];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_1[0x73];
    }
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460658f4 FUN_1460658f4 body=69 status=ok
// SIG undefined FUN_1460658f4(void)

longlong FUN_1460658f4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1415ca610();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 != 0)) {
    lVar2 = FUN_140b6d0be();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14606593a FUN_14606593a body=202 status=ok
// SIG undefined FUN_14606593a(void)

void FUN_14606593a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_146065a06(*(longlong *)(param_1 + 0xd8),param_2);
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1415ca660(*(longlong *)(param_1 + 0xf8),param_2);
  }
  if ((*(longlong *)(param_1 + 0x118) != 0) && (lVar3 = *param_2, *(int *)(lVar3 + 0x14) == 2)) {
    plVar4 = (longlong *)param_2[1];
    local_28 = lVar3;
    local_20 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_1460662aa(*(longlong *)(param_1 + 0x118),&local_28);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_1460662aa();
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
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146065a06 FUN_146065a06 body=511 status=ok
// SIG undefined FUN_146065a06(void)

void FUN_146065a06(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60 [12];
  undefined1 local_54 [4];
  undefined8 *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_50);
  FUN_140b6d1a4(param_1 + 0x4c8,&local_70,&local_50,0);
  plVar4 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  lVar5 = *(longlong *)(lVar3 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_50 = (undefined8 *)0x0;
  local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = (longlong *)CONCAT44(local_48._4_4_,3);
  *local_50 = &PTR_LAB_14b507320;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_50[2] = lVar7;
  *local_50 = &PTR_FUN_14ba3d9b0;
  local_50[3] = param_1;
  local_50[4] = lVar3;
  local_50[5] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  FUN_146065c06(lVar5 + 0x140,local_60,&local_50);
  FUN_1449db362(&local_50);
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_70);
  local_50 = &local_70;
  local_48 = (longlong *)local_60;
  FUN_146065cec(param_1 + 0x388,local_54,&local_50,0);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146065c06 FUN_146065c06 body=216 status=ok
// SIG undefined FUN_146065c06(void)

undefined8 * FUN_146065c06(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 146065cec FUN_146065cec body=431 status=ok
// SIG undefined FUN_146065cec(void)

undefined4 *
FUN_146065cec(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146065e9c(param_1,local_48);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  plVar8 = (longlong *)*puVar2;
  *local_40 = plVar8;
  lVar11 = puVar2[1];
  local_40[1] = lVar11;
  if (lVar11 == 0) {
    local_40[2] = *puVar3;
    *(undefined4 *)(local_40 + 3) = 0xffffffff;
  }
  else {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
    plVar8 = (longlong *)*local_40;
    plVar4 = (longlong *)local_40[1];
    local_40[2] = *puVar3;
    *(undefined4 *)(local_40 + 3) = 0xffffffff;
    local_4c = local_48[0];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      uVar6 = (**(code **)(*plVar8 + 0x40))();
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
      goto LAB_146065d84;
    }
  }
  local_4c = local_48[0];
  uVar6 = (**(code **)(*plVar8 + 0x40))();
LAB_146065d84:
  local_58 = param_4;
  cVar5 = FUN_146065f82(param_1,uVar6,local_40,&local_4c);
  if (cVar5 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar9) {
      uVar7 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x1c) = uVar6;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1460660b4(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146065e9c FUN_146065e9c body=230 status=ok
// SIG undefined FUN_146065e9c(void)

int * FUN_146065e9c(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146065f82 FUN_146065f82 body=304 status=ok
// SIG undefined FUN_146065f82(void)

void FUN_146065f82(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_50 = *param_3;
    local_48 = (longlong *)param_3[1];
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    iVar10 = FUN_1460361b4(param_1,param_2,&local_50);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (iVar10 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar10 * 0x20);
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_3[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_145bf7268(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_146065fb4;
    }
  }
  uVar9 = 0;
LAB_146065fb4:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460660b4 FUN_1460660b4 body=500 status=ok
// SIG undefined FUN_1460660b4(void)

void FUN_1460660b4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x20;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x1c) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x18) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460662aa FUN_1460662aa body=668 status=ok
// SIG undefined FUN_1460662aa(void)

void FUN_1460662aa(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_78;
  longlong *plStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_68);
  FUN_1415ca7f2(param_1,&local_50,&local_68);
  plVar4 = uStack_60;
  if (uStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_60)(uStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,&local_68);
  if ((longlong **)(local_50 + 0x28) == &local_68) {
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(local_50 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(local_50 + 0x28) = local_68;
    local_68 = (longlong *)0x0;
    *(undefined4 *)(local_50 + 0x30) = (undefined4)uStack_60;
    *(undefined4 *)(local_50 + 0x34) = uStack_60._4_4_;
    uStack_60 = (longlong *)0x0;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_68 = (longlong *)0x0;
  uStack_60 = (longlong *)0x0;
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_78);
  uStack_60 = (longlong *)CONCAT44(uStack_60._4_4_,1);
  FUN_1413eac7e(&local_68,0);
  plVar4 = plStack_70;
  *local_68 = local_78;
  local_68[1] = (longlong)plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
    UNLOCK();
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
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
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  local_88 = &local_78;
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(lVar3 + 0x10),1,&local_68);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(lVar3 + 0x10),1,&local_68);
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
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14127b1cd(local_68,(ulonglong)uStack_60 & 0xffffffff);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146066548 FUN_146066548 body=226 status=ok
// SIG undefined FUN_146066548(void)

longlong * FUN_146066548(longlong *param_1)

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
  pcVar13 = FUN_1462dae9c;
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



// FUNCTION 14606662c FUN_14606662c body=138 status=ok
// SIG undefined FUN_14606662c(void)

undefined1 * FUN_14606662c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14155df5c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLocalFogVolumeTiledRenderVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f0120;
  return &LAB_1471e7582;
}



// FUNCTION 1460666b6 FUN_1460666b6 body=138 status=ok
// SIG undefined FUN_1460666b6(void)

code * FUN_1460666b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileDrawIndirectBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x130000002da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462daf24;
}



// FUNCTION 146066740 FUN_146066740 body=146 status=ok
// SIG undefined FUN_146066740(void)

code * FUN_146066740(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14155ec3a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLocalFogVolumeTiledRenderPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f01a8;
  return FUN_14606662c;
}



// FUNCTION 1460667d2 FUN_1460667d2 body=235 status=ok
// SIG undefined FUN_1460667d2(void)

void FUN_1460667d2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_144a126be();
  local_30 = 0;
  local_28 = 0;
  (**(code **)(*DAT_14cb49720 + 200))(DAT_14cb49720,&local_30);
  (**(code **)(*DAT_14cb496f0 + 200))(DAT_14cb496f0,&local_30);
  (**(code **)(*DAT_14cb49680 + 200))(DAT_14cb49680,&local_30);
  (**(code **)(*DAT_14cb49558 + 200))(DAT_14cb49558,&local_30);
  (**(code **)(*DAT_14cb49570 + 200))(DAT_14cb49570,&local_30);
  FUN_140457ffc(lVar1 + 0x690,param_1);
  FUN_140f40f76(lVar1,param_1 + 0xa8);
  FUN_1460668be(param_1 + 200);
  FUN_1413e1940(param_1);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460668be FUN_1460668be body=103 status=ok
// SIG undefined FUN_1460668be(void)

void FUN_1460668be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1415cd2e6();
    *(undefined8 *)(param_1 + 0xa8) = 0;
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000146066921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 146066926 FUN_146066926 body=24 status=ok
// SIG undefined FUN_146066926(void)

void FUN_146066926(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014606693a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14606693e FUN_14606693e body=190 status=ok
// SIG undefined FUN_14606693e(void)

bool FUN_14606693e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_48,0);
    lVar3 = local_48;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    local_58 = *(undefined8 *)(param_1 + 8);
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460669fe FUN_1460669fe body=205 status=ok
// SIG undefined FUN_1460669fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460669fe(void)

{
  if ((DAT_14caefb37 & 2) == 0) {
    DAT_14caefb37 = DAT_14caefb37 | 2;
    _DAT_14caefad8 = L"FMaterialTextureParameterInfo";
    _DAT_14caefaf0 = FUN_146826540;
    _DAT_14caefaf8 = FUN_146825d77;
    _DAT_14caefb00 = FUN_146825fd6;
    _DAT_14caefb08 = FUN_1407e02ea;
    _DAT_14caefb10 = FUN_146826273;
    _DAT_14caefae8 = &LAB_147bc00aa;
    _DAT_14caefb28 = 0xffffffff0000001c;
    _DAT_14caefb30 = 4;
    DAT_14caefb34 = 0;
    _DAT_14caefb18 = &LAB_147bc00ba;
    FUN_146066acc();
    FUN_1407e00cc(&DAT_14caefad0);
    return;
  }
  return;
}



// FUNCTION 146066acc FUN_146066acc body=128 status=ok
// SIG undefined FUN_146066acc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146066acc(void)

{
  FUN_146066b4c();
  _DAT_14caf0f60 = L"ParameterInfo";
  DAT_14caf0f8a = FUN_140850cc5();
  FUN_145eebb9a();
  _DAT_14caf0f68 = &DAT_14caef6e0;
  _DAT_14caf0f78 = &LAB_14682652b;
  _DAT_14caf0f80 = 0x100000000;
  _DAT_14caf0f88 = 0;
  _DAT_14caf0f70 = DAT_14caefae0;
  DAT_14caefae0 = &DAT_14caf0f60;
  return;
}



// FUNCTION 146066b4c FUN_146066b4c body=276 status=ok
// SIG undefined FUN_146066b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146066b4c(void)

{
  FUN_146066c60();
  _DAT_14caf0f90 = L"TextureIndex";
  DAT_14caf0fba = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14caf0f98 = &DAT_14c951bf8;
  _DAT_14caf0fa8 = &LAB_14682652b;
  _DAT_14caf0fb0 = &DAT_100000014;
  _DAT_14caf0fb8 = 0;
  _DAT_14caf0fa0 = DAT_14caefae0;
  DAT_14caefae0 = &DAT_14caf0f90;
  return;
}



// FUNCTION 146066c60 FUN_146066c60 body=275 status=ok
// SIG undefined FUN_146066c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146066c60(void)

{
  FUN_146066d74();
  _DAT_14caf0fc0 = L"SamplerSource";
  DAT_14caf0fea = FUN_140850cc5();
  if ((DAT_14caf1087 & 2) == 0) {
    DAT_14caf1087 = DAT_14caf1087 | 3;
    _DAT_14caf1028 = L"TEnumAsByte<T>";
    _DAT_14caf1040 = &LAB_147bc4fb2;
    _DAT_14caf1048 = &LAB_147bc4fbe;
    _DAT_14caf1050 = &LAB_147bc4fca;
    _DAT_14caf1058 = &LAB_147bc4fd0;
    _DAT_14caf1060 = &LAB_147bc4fd4;
    _DAT_14caf1038 = &LAB_147bc4fda;
    _DAT_14caf1078 = &DAT_100000001;
    _DAT_14caf1080 = 1;
    DAT_14caf1084 = 0;
  }
  _DAT_14caf0fc8 = &DAT_14caf1020;
  _DAT_14caf0fd8 = &LAB_14682652b;
  _DAT_14caf0fe0 = &DAT_100000018;
  _DAT_14caf0fe8 = 0;
  _DAT_14caf0fd0 = DAT_14caefae0;
  DAT_14caefae0 = &DAT_14caf0fc0;
  return;
}



// FUNCTION 146066d74 FUN_146066d74 body=271 status=ok
// SIG undefined FUN_146066d74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146066d74(void)

{
  _DAT_14caf0ff0 = L"VirtualTextureLayerIndex";
  DAT_14caf101a = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14caf0ff8 = &DAT_14ca76fe8;
  _DAT_14caf1008 = &LAB_14682652b;
  _DAT_14caf1010 = 0x100000019;
  _DAT_14caf1018 = 0;
  _DAT_14caf1000 = DAT_14caefae0;
  DAT_14caefae0 = &DAT_14caf0ff0;
  return;
}



// FUNCTION 146066e84 FUN_146066e84 body=49 status=ok
// SIG undefined FUN_146066e84(void)

void FUN_146066e84(undefined8 param_1)

{
  FUN_145adf2ae();
  (**(code **)(DAT_14cbf71a8 + 0xa0))(&DAT_14cbf71a8,param_1);
  switchD_143c3d4dc::caseD_1f(param_1);
  return;
}



// FUNCTION 146066eb6 FUN_146066eb6 body=400 status=ok
// SIG undefined FUN_146066eb6(void)

void FUN_146066eb6(longlong param_1,ulonglong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x78);
  AcquireSRWLockShared(SRWLock);
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      do {
        if (*(ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18) == param_2) {
          ReleaseSRWLockShared(SRWLock);
          FUN_14080c2b4();
          goto LAB_146066f51;
        }
        iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0x18 + 0x10);
      } while (iVar6 != -1);
    }
  }
  ReleaseSRWLockShared(SRWLock);
LAB_146066f51:
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar6 * 0x18);
        if (*puVar2 == param_2) {
          if ((puVar2 != (ulonglong *)0x0) && (puVar2 + 1 != (ulonglong *)0x0)) {
            uVar3 = puVar2[1];
            FUN_146067046(plVar1,param_2);
            ReleaseSRWLockExclusive(SRWLock);
            if (uVar3 != 0) {
              FUN_1415cd930(uVar3);
              FUN_1400020a8(uVar3);
              return;
            }
            return;
          }
          break;
        }
        iVar6 = (int)puVar2[2];
      } while (iVar6 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146067034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 146067046 FUN_146067046 body=132 status=ok
// SIG undefined FUN_146067046(void)

void FUN_146067046(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_1460670ca(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1460670ca FUN_1460670ca body=85 status=ok
// SIG undefined FUN_1460670ca(void)

void FUN_1460670ca(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_146067120();
  return;
}



// FUNCTION 146067120 FUN_146067120 body=116 status=ok
// SIG undefined FUN_146067120(void)

void FUN_146067120(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1460671a0 FUN_1460671a0 body=277 status=ok
// SIG undefined FUN_1460671a0(void)

undefined8 * FUN_1460671a0(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4f0890;
  param_1[8] = &PTR_FUN_14a4f0b70;
  puVar1 = (undefined2 *)FUN_145f643ae();
  *(undefined2 *)(param_1 + 6) = *puVar1;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar1 + 4);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1413336e6();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460672c2 FUN_1460672c2 body=442 status=ok
// SIG undefined FUN_1460672c2(void)

undefined8 * FUN_1460672c2(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14ad656b0;
  *(undefined4 *)(param_1 + 7) = 0x1010101;
  *(undefined2 *)((longlong)param_1 + 0x3c) = 0x102;
  *(undefined4 *)(param_1 + 8) = 0x3e000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0x106;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x20101;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  plVar1 = param_1 + 0x1f;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_14606747e(plVar1,0);
  *(undefined1 *)param_1[0x1f] = 1;
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x104) < iVar2 + 1U) {
    FUN_14606747e(plVar1,iVar2);
  }
  *(undefined1 *)(*plVar1 + (longlong)iVar2) = 2;
  FUN_1400b22c2(&local_38,"{project_dir}/Saved/NiagaraSimCache");
  if (param_1 + 0x21 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0x21] != 0) {
      FUN_1400020a8();
    }
    param_1[0x21] = local_38;
    *(undefined4 *)(param_1 + 0x22) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x114) = local_2c;
  }
  param_1[0x23] = 5000;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606747e FUN_14606747e body=124 status=ok
// SIG undefined FUN_14606747e(void)

void FUN_14606747e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar3 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146067502 FUN_146067502 body=280 status=ok
// SIG undefined FUN_146067502(void)

undefined8 * FUN_146067502(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bec7ab0;
  *(undefined1 *)(param_1 + 5) = 1;
  FUN_144757f48(param_1,8);
  *param_1 = &PTR_FUN_14bec91b0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0x41700000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  param_1[10] = 0x3f3333333f000000;
  *(undefined2 *)(param_1 + 0xb) = 0x200;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_1446f470e(&local_30,L"Effector",1);
  uVar1 = FUN_145989290();
  local_40 = 0;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0xc] = lVar2;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606761c FUN_14606761c body=120 status=ok
// SIG undefined FUN_14606761c(void)

void FUN_14606761c(longlong *param_1,undefined4 param_2)

{
  FUN_144a7e84a();
  FUN_146067694(param_1);
  if ((int)param_1[0xf3] == 0) {
    FUN_146067756(param_1,param_2);
  }
  if ((((int)param_1[0x107] < 1) && ((int)param_1[0x10c] != 1)) &&
     ((int)param_1[0xf1] <= (int)param_1[0x11c])) {
                    /* WARNING: Could not recover jumptable at 0x000146067686. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 146067694 FUN_146067694 body=193 status=ok
// SIG undefined FUN_146067694(void)

void FUN_146067694(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_1 + 0x838) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x830);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x838) * 0x18;
    do {
      if ((*(longlong *)(lVar3 + 8) != 0) && (cVar2 = FUN_144729dda(lVar3), cVar2 != '\0')) {
        if (*(int *)(param_1 + 0x760) == 0) {
LAB_146067705:
          if (*(char *)(lVar3 + 0x10) == '\0') {
            *(undefined1 *)(lVar3 + 0x10) = 1;
            FUN_148927ddc(*(undefined8 *)(lVar3 + 8),param_1);
          }
        }
        else {
          cVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x18))();
          if ((longlong)*(int *)(param_1 + 0x760) != 0) {
            lVar4 = 0;
            do {
              if (*(char *)(*(longlong *)(param_1 + 0x758) + lVar4) == cVar2) goto LAB_146067705;
              lVar4 = lVar4 + 1;
            } while (*(int *)(param_1 + 0x760) != lVar4);
          }
          if ((*(char *)(lVar3 + 0x10) != '\0') && (*(char *)(param_1 + 0x768) == '\x01')) {
            *(undefined1 *)(lVar3 + 0x10) = 0;
            FUN_148927d6e(*(undefined8 *)(lVar3 + 8),param_1);
          }
        }
      }
      lVar3 = lVar3 + 0x18;
    } while (lVar3 != lVar1);
  }
  return;
}



// FUNCTION 146067756 FUN_146067756 body=1273 status=ok
// SIG undefined FUN_146067756(void)

void FUN_146067756(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined8 uVar30;
  undefined1 uVar31;
  int iVar32;
  int iVar33;
  double *pdVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  double *pdVar38;
  bool bVar39;
  longlong lVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_168 [44];
  float local_13c;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  local_13c = param_2;
  if (lVar2 == 0) goto LAB_146067a07;
  *(int *)(param_1 + 0x8e0) = *(int *)(param_1 + 0x8e0) + 1;
  pdVar38 = (double *)&DAT_14c846480;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    pdVar38 = (double *)(*(longlong *)(lVar2 + 0x1c8) + 0x240);
  }
  pdVar34 = (double *)(param_1 + 0x870);
  if (*(char *)(param_1 + 0x8d0) == '\0') {
    pdVar34 = pdVar38;
  }
  dVar41 = *pdVar34;
  dVar42 = pdVar34[1];
  dVar43 = pdVar34[2];
  dVar11 = pdVar34[3];
  dVar12 = pdVar34[4];
  dVar13 = pdVar34[5];
  dVar14 = pdVar34[6];
  dVar15 = pdVar34[7];
  dVar16 = pdVar34[8];
  dVar17 = pdVar34[9];
  dVar18 = pdVar34[10];
  dVar19 = pdVar34[0xb];
  dVar20 = *pdVar38;
  dVar21 = pdVar38[1];
  dVar22 = pdVar38[2];
  dVar23 = pdVar38[3];
  dVar44 = pdVar38[4];
  dVar45 = pdVar38[5];
  dVar24 = pdVar38[6];
  dVar25 = pdVar38[7];
  dVar26 = pdVar38[8];
  dVar27 = pdVar38[9];
  dVar28 = pdVar38[10];
  dVar29 = pdVar38[0xb];
  *(double *)(param_1 + 0x870) = dVar20;
  *(double *)(param_1 + 0x878) = dVar21;
  *(double *)(param_1 + 0x880) = dVar22;
  *(double *)(param_1 + 0x888) = dVar23;
  *(double *)(param_1 + 0x890) = dVar44;
  *(double *)(param_1 + 0x898) = dVar45;
  *(double *)(param_1 + 0x8a0) = dVar24;
  *(double *)(param_1 + 0x8a8) = dVar25;
  *(double *)(param_1 + 0x8b0) = dVar26;
  *(double *)(param_1 + 0x8b8) = dVar27;
  *(double *)(param_1 + 0x8c0) = dVar28;
  *(double *)(param_1 + 0x8c8) = dVar29;
  *(undefined1 *)(param_1 + 0x8d0) = 1;
  dVar44 = dVar44 - dVar12;
  dVar45 = dVar45 - dVar13;
  lVar40 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar45));
  auVar6._8_4_ = (int)lVar40;
  auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar44));
  auVar6._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
  iVar32 = movmskpd((int)pdVar34,auVar6);
  lVar40 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar25 - dVar15));
  auVar7._8_4_ = (int)lVar40;
  auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar24 - dVar14));
  auVar7._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
  uVar36 = movmskpd((int)pdVar38,auVar7);
  if ((uVar36 & 0x3fffffff) == 0 && iVar32 == 0) {
    lVar40 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar21 - dVar42));
    auVar10._8_4_ = (int)lVar40;
    auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar20 - dVar41));
    auVar10._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    uVar36 = movmskpd(iVar32,auVar10);
    lVar40 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar23 - dVar11));
    auVar8._8_4_ = (int)lVar40;
    auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar22 - dVar43));
    auVar8._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    iVar32 = movmskpd(0,auVar8);
    uVar37 = iVar32 << 2 | uVar36;
    if (uVar37 != 0) {
      lVar40 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar42 + dVar21));
      auVar9._8_4_ = (int)lVar40;
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar41 + dVar20));
      auVar9._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar36 = movmskpd(uVar36,auVar9);
      lVar40 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar11 + dVar23));
      auVar5._8_4_ = (int)lVar40;
      auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar43 + dVar22));
      auVar5._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
      uVar37 = movmskpd(uVar37,auVar5);
      if ((uVar37 & 0x3fffffff) != 0 || uVar36 != 0) goto LAB_146067ac9;
    }
    lVar40 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar27 - dVar17));
    auVar4._8_4_ = (int)lVar40;
    auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar26 - dVar16));
    auVar4._12_4_ = (int)((ulonglong)lVar40 >> 0x20);
    iVar32 = movmskpd(uVar36,auVar4);
    auVar3._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar29 - dVar19));
    auVar3._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar28 - dVar18));
    uVar36 = movmskpd(0,auVar3);
    bVar39 = (uVar36 & 0x3fffffff) == 0 && iVar32 == 0;
  }
  else {
LAB_146067ac9:
    bVar39 = false;
  }
  dVar41 = DAT_14c8464f0;
  dVar42 = DAT_14c8464e0;
  dVar43 = DAT_14c8464e8;
  if ((1e-08 < param_2) && (bVar39 == false)) {
    dVar43 = 1.0 / (double)param_2;
    dVar41 = (dVar24 - dVar14) * dVar43;
    dVar42 = dVar43 * dVar44;
    dVar43 = dVar45 * dVar43;
  }
  if (bVar39 == false) {
    *(undefined4 *)(param_1 + 0x8e0) = 0;
  }
  *(double *)(param_1 + 0x1e0) = dVar42;
  *(double *)(param_1 + 0x1e8) = dVar43;
  *(double *)(param_1 + 0x1f0) = dVar41;
  if (*(char *)(param_1 + 0x784) == '\x01') {
    plVar1 = (longlong *)(lVar2 + 0x240);
    lVar40 = lVar2 + 0x250;
    local_110 = 0x100000000;
    local_100 = 0xffffffff;
    local_f8 = 0;
    iVar32 = 0;
    local_108 = lVar40;
    if (*(int *)(lVar2 + 0x268) != 0) {
      FUN_1449c0562(&local_110);
      iVar32 = *(int *)(lVar2 + 0x268);
    }
    local_130 = local_110;
    local_128 = local_108;
    local_120 = local_100;
    uVar30 = local_120;
    local_118 = local_f8;
    local_114 = local_f4;
    local_120._4_4_ = (int)((ulonglong)local_100 >> 0x20);
    iVar33 = local_120._4_4_;
    local_138 = plVar1;
    if ((local_120._4_4_ != iVar32) || (local_120 = local_100, local_108 != lVar40)) {
      do {
        local_120 = uVar30;
        lVar2 = *(longlong *)(*local_138 + (longlong)iVar33 * 0x10);
        if (lVar2 != 0) {
          lVar35 = FUN_144a799b0();
          if (((*(int *)(lVar35 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
              (lVar2 != param_1)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar35 + 0x38) * 8) == lVar35 + 0x30)) {
            *(undefined8 *)(lVar2 + 0x1f0) = *(undefined8 *)(param_1 + 0x1f0);
            uVar30 = *(undefined8 *)(param_1 + 0x1e8);
            *(undefined8 *)(lVar2 + 0x1e0) = *(undefined8 *)(param_1 + 0x1e0);
            *(undefined8 *)(lVar2 + 0x1e8) = uVar30;
          }
        }
        local_120 = CONCAT44(local_120._4_4_,(uint)local_120 & ~local_130._4_4_);
        FUN_1449c0562(&local_130);
        iVar33 = local_120._4_4_;
        uVar30 = local_120;
      } while (local_138 != plVar1 || (local_128 != lVar40 || local_120._4_4_ != iVar32));
    }
  }
  FUN_146067c50(param_1,bVar39 ^ 1,0);
  if (*(int *)(param_1 + 0x798) == 2) {
    uVar31 = *(undefined1 *)(param_1 + 0x8e5);
  }
  else {
    uVar31 = 1;
    if (*(int *)(param_1 + 0x798) == 1) {
      uVar31 = *(undefined1 *)(param_1 + 0x8e4);
    }
  }
  FUN_146067d2e(param_1,uVar31,0);
LAB_146067a07:
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146067c50 FUN_146067c50 body=220 status=ok
// SIG undefined FUN_146067c50(void)

void FUN_146067c50(longlong param_1,int param_2,byte param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x860) == param_2 & (param_3 ^ 1)) == 0) &&
     (*(longlong *)(param_1 + 0x858) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x850);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x18))();
      local_30 = DAT_14cb88a18;
      local_28 = 0xffffffff;
      cVar1 = FUN_144a7a548(uVar2);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x860) = param_2;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x18))();
        local_1c = 0;
        local_30 = DAT_14cb88a18;
        local_28 = 0xffffffff;
        FUN_1413630d6(uVar2,&local_30,*(undefined4 *)(param_1 + 0x860));
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146067d2e FUN_146067d2e body=220 status=ok
// SIG undefined FUN_146067d2e(void)

void FUN_146067d2e(longlong param_1,int param_2,byte param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x864) == param_2 & (param_3 ^ 1)) == 0) &&
     (*(longlong *)(param_1 + 0x858) != 0)) {
    cVar1 = FUN_144729dda(param_1 + 0x850);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x18))();
      local_30 = DAT_14cb88a20;
      local_28 = 0xffffffff;
      cVar1 = FUN_144a7a548(uVar2);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 0x864) = param_2;
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x18))();
        local_1c = 0;
        local_30 = DAT_14cb88a20;
        local_28 = 0xffffffff;
        FUN_1413630d6(uVar2,&local_30,*(undefined4 *)(param_1 + 0x864));
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146067e0c FUN_146067e0c body=106 status=ok
// SIG undefined FUN_146067e0c(void)

undefined8 * FUN_146067e0c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8447f8) {
    FUN_144b3d300(&DAT_14c8447f8);
    if (DAT_14c8447f8 == -1) {
      FUN_146067e76(&DAT_14c844708);
      atexit((_func_5014 *)&LAB_14276098b);
      _Init_thread_footer(&DAT_14c8447f8);
    }
  }
  return &DAT_14c844708;
}



// FUNCTION 146067e76 FUN_146067e76 body=184 status=ok
// SIG undefined FUN_146067e76(void)

undefined8 * FUN_146067e76(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 10),4000);
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  return param_1;
}



// FUNCTION 146067f2e FUN_146067f2e body=58 status=ok
// SIG undefined FUN_146067f2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146067f2e(void)

{
  if (DAT_14c846020 != 0) {
    FUN_1400020a8();
  }
  _DAT_14c846018 = 0;
  if (DAT_14c846010 != 0) {
    FUN_1400020a8();
  }
  FUN_146067f68();
  return;
}



// FUNCTION 146067f68 FUN_146067f68 body=54 status=ok
// SIG undefined FUN_146067f68(void)

void FUN_146067f68(void)

{
  FUN_1415cdbc6();
  if (DAT_14c845ff0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c845fd0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 146067faa FUN_146067faa body=278 status=ok
// SIG undefined FUN_146067faa(void)

undefined8 * FUN_146067faa(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4cbbe0;
  param_1[8] = &PTR_FUN_14a4cbec0;
  lVar1 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0x6c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar1 + 0x74);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1412217cc();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460680cc FUN_1460680cc body=278 status=ok
// SIG undefined FUN_1460680cc(void)

undefined8 * FUN_1460680cc(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4d0450;
  param_1[8] = &PTR_FUN_14a4d0730;
  lVar1 = FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0x3c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar1 + 0x44);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1412217cc();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460681e4 FUN_1460681e4 body=297 status=ok
// SIG undefined FUN_1460681e4(void)

void FUN_1460681e4(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
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
  plVar1 = param_1 + 0x90;
  plVar2 = param_1 + 0x92;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar2;
  if ((int)param_1[0x95] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = (int)param_1[0x95];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != plVar2)) {
    bVar6 = 0;
    do {
      do {
        bVar4 = bVar6;
        lVar3 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x20);
        bVar7 = *(int *)(lVar3 + 0x90) != *(int *)(lVar3 + 0xbc);
        bVar6 = bVar4 | bVar7;
        local_68 = local_68 & ~uStack_74;
        FUN_1449c0562(&local_78);
      } while (iStack_64 != iVar5);
    } while (((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar2) || (local_80 != plVar1));
    if ((bool)(bVar4 | bVar7)) goto LAB_1460682e3;
  }
  (**(code **)(*param_1 + 0x530))(param_1);
LAB_1460682e3:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606830e FUN_14606830e body=75 status=ok
// SIG undefined FUN_14606830e(void)

void FUN_14606830e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x520))();
  *(undefined1 *)((longlong)param_1 + 0x35c) = 1;
  if ((char)param_1[0x6c] == '\0') {
    *(undefined1 *)(param_1 + 0x6c) = 1;
    FUN_1447f69b6(&DAT_14cacd8d8);
    FUN_1448a8284(&DAT_14cacd8d8);
    return;
  }
  return;
}



// FUNCTION 146068364 FUN_146068364 body=279 status=ok
// SIG undefined FUN_146068364(void)

undefined8 * FUN_146068364(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  *param_1 = &PTR_FUN_14aea7d90;
  param_1[5] = &PTR_FUN_14aea8030;
  param_1[0xc] = 0;
  param_1[0xe] = &PTR_LAB_14aeb5620;
  param_1[0xf] = &LAB_14841beb2;
  param_1[10] = &LAB_14841be3a;
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14aeb5680;
  param_1[0x17] = &LAB_14841beb6;
  param_1[0x12] = &LAB_14841bebc;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3ca3d70a;
  uVar1 = DAT_14c8463f8;
  param_1[0x1f] = DAT_14c8463f0;
  param_1[0x20] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x23] = DAT_14c8463f0;
  param_1[0x24] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x21] = DAT_14c8463f0;
  param_1[0x22] = uVar1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3ff00000;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x3ff0000000000000;
  param_1[0x3b] = 0x3ff0000000000000;
  param_1[0x3c] = 0x3ff0000000000000;
  param_1[0x3d] = 0;
  return param_1;
}



// FUNCTION 14606847b FUN_14606847b body=96 status=ok
// SIG undefined FUN_14606847b(void)

void FUN_14606847b(void)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x800000014afcb6b0;
  local_18 = FUN_140b397c6(L"XeSSUnreal",10);
  local_14 = 1;
  FUN_1460684dc(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460684dc FUN_1460684dc body=192 status=ok
// SIG undefined FUN_1460684dc(void)

void FUN_1460684dc(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14afcb6d0;
  puVar1[3] = &DAT_14cb530ec;
  puVar1[4] = FUN_1459a64c2;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606859e FUN_14606859e body=41 status=ok
// SIG undefined FUN_14606859e(void)

void FUN_14606859e(longlong param_1)

{
  FUN_1405f1eac();
  if (*(char *)(param_1 + 0x178) == '\x03') {
    return;
  }
  FUN_1460685c8(param_1);
  return;
}



// FUNCTION 1460685c8 FUN_1460685c8 body=103 status=ok
// SIG undefined FUN_1460685c8(void)

void FUN_1460685c8(longlong param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1;
  if (param_1 != 0) {
    local_30 = FUN_1447210f0();
    if (local_30 != 0) {
      local_20 = &local_30;
      local_18 = &local_28;
      FUN_14589108a(local_c);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606863c FUN_14606863c body=279 status=ok
// SIG undefined FUN_14606863c(void)

undefined8 * FUN_14606863c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1457e6eec();
  *param_1 = &PTR_FUN_14b4ba360;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = &PTR_FUN_14b4c3b18;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_145ad316c(param_1 + 0x10);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 9999;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_1446efa72(param_1 + 0x2f,0,3,0x10);
  *(undefined4 *)(param_1 + 0x30) = 3;
  puVar1 = (undefined8 *)param_1[0x2f];
  *puVar1 = &PTR_LAB_14b4c2ba0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b4c2b30;
  puVar1[3] = 0;
  FUN_14485c47a(puVar1 + 3,param_1);
  puVar1[4] = FUN_143ed3e92;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 146068754 FUN_146068754 body=103 status=ok
// SIG undefined FUN_146068754(void)

ulonglong FUN_146068754(longlong param_1)

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
LAB_14606879e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14606879e;
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



// FUNCTION 1460687bc FUN_1460687bc body=186 status=ok
// SIG undefined FUN_1460687bc(void)

void FUN_1460687bc(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    if (param_2 != 0) goto LAB_146068830;
LAB_146068854:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    if (plVar3[2] != param_2) goto LAB_146068830;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    if (plVar3 == (longlong *)0x0) goto LAB_146068854;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x80))(local_38,param_1 + 0x50);
    }
  }
  plVar3 = plStack_30;
  *(undefined1 *)(param_1 + 0x48) = param_3;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_146068830:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146068878 FUN_146068878 body=191 status=ok
// SIG undefined FUN_146068878(void)

void FUN_146068878(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1414c6652(param_1,&local_50,param_4,param_1);
  lVar1 = local_50;
  if ((longlong)local_48 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined4 **)(*(longlong *)(lVar1 + lVar3) + 8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_14c9485f0;
      }
      FUN_1447325ac(puVar2,&local_58,1);
      FUN_146068938(param_3,param_2,local_58);
      lVar3 = lVar3 + 8;
    } while ((longlong)local_48 * 8 != lVar3);
  }
  if (local_50 != 0) {
    FUN_1400020a8(local_50);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146068938 FUN_146068938 body=80 status=ok
// SIG undefined FUN_146068938(void)

void FUN_146068938(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  uVar1 = FUN_1403363fe();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14606898a(param_1,param_2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606898a FUN_14606898a body=162 status=ok
// SIG undefined FUN_14606898a(void)

void FUN_14606898a(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (param_3 != (longlong *)0x0) {
    puVar2 = (undefined8 *)FUN_140d18446();
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      lVar1 = *param_3;
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x4a0) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = **(undefined8 **)(lVar1 + 0x498);
      }
      puVar2[1] = uVar3;
      *(undefined1 *)((longlong)puVar2 + 0x11) = 0;
      if ((*param_3 != 0) && (*(char *)(*param_3 + 0x119) == '\x01')) {
        *(undefined4 *)((longlong)puVar2 + 0x14) = 0xffffffff;
      }
      plVar4 = (longlong *)FUN_140d1799c(param_1,param_2);
      if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146068a29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x50))
                  (plVar4,*(undefined4 *)(puVar2 + 3),0,*(code **)(*plVar4 + 0x50));
        return;
      }
    }
  }
  return;
}



// FUNCTION 146068a2c FUN_146068a2c body=96 status=ok
// SIG undefined FUN_146068a2c(void)

void FUN_146068a2c(void)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0x800000014b9e2b30;
  local_18 = FUN_140b397c6(L"OakGameAudioDSP",0xf);
  local_14 = 1;
  FUN_146068a8e(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146068a8e FUN_146068a8e body=192 status=ok
// SIG undefined FUN_146068a8e(void)

void FUN_146068a8e(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b9e2b50;
  puVar1[3] = &DAT_14cbf2340;
  puVar1[4] = FUN_1459a685c;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146068b58 FUN_146068b58 body=281 status=ok
// SIG undefined FUN_146068b58(void)

longlong * FUN_146068b58(longlong *param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140fe66fa();
  *param_1 = (longlong)&PTR_FUN_14bdd2b20;
  param_1[5] = (longlong)&PTR_LAB_14bdd2eb0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  local_48 = 0;
  FUN_1411b354a(param_1 + 0x1b,0,0,0);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  local_38 = L"VolumeToMeshToolName";
  local_30 = 0x14;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"UVolumeToMeshTool";
  local_30 = 0x11;
  FUN_1446e940c(local_40,&local_38);
  FUN_140208bae(&local_38,local_40,local_3c,L"Volume to Mesh");
  (**(code **)(*param_1 + 0x370))(param_1,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146068c7e FUN_146068c7e body=398 status=ok
// SIG undefined FUN_146068c7e(void)

undefined8 * FUN_146068c7e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14596d9a8();
  *param_1 = &PTR_FUN_14abf8b70;
  param_1[5] = &PTR_LAB_14abf8e90;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x41200000;
  FUN_1400b22c2(&local_38,"Rotate to face BB entry");
  if (param_1 + 6 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 7) = local_30;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_2c;
  }
  *(uint *)(param_1 + 0xd) = *(uint *)(param_1 + 0xd) & 0xfffffff9 | 2;
  local_40 = FUN_144a6c4d8();
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_40);
  }
  puVar1 = param_1 + 0xe;
  FUN_1446f470e(&local_48,L"BlackboardKey",1);
  FUN_1458b8c86(puVar1,param_1,local_48,&local_40);
  FUN_1446f470e(&local_50,L"BlackboardKey",1);
  FUN_1458b89d2(puVar1,param_1,local_50);
  FUN_1446f470e(&local_58,L"BlackboardKey",1);
  FUN_146068e0e(puVar1,param_1,local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146068e0e FUN_146068e0e body=272 status=ok
// SIG undefined FUN_146068e0e(void)

void FUN_146068e0e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  FUN_1400021e4(&local_28,local_48);
  FUN_144a882a8(&local_38,local_48,L"_Rotator");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar3,1);
  lVar2 = FUN_146068f1f(param_2,local_50);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1412dc08c(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146068f1f FUN_146068f1f body=187 status=ok
// SIG undefined FUN_146068f1f(void)

undefined8 FUN_146068f1f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a752c0();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146068fdc FUN_146068fdc body=1559 status=ok
// SIG undefined FUN_146068fdc(void)

void FUN_146068fdc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  int local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined **local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_7c;
  undefined **local_78;
  longlong *local_70;
  longlong *local_68;
  byte local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d4 = param_2;
  lVar7 = FUN_1400b465c();
  if ((longlong)*(int *)(lVar7 + 0x40) != 0) {
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar11);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0xe0) == local_d4)) {
        lVar7 = FUN_140628492();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          lVar7 = FUN_1460695f4(param_1);
          if ((*(longlong *)(lVar7 + 0x1e0) != 0) &&
             (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x1e0) + 0x68), lVar7 != 0)) {
            FUN_146069634(lVar7);
            FUN_1414c0ef2(lVar7,&local_7c,lVar3);
            if (-1 < (short)local_7c) {
              FUN_1446f470e(&local_98,L"SHIFT",1);
              FUN_145ed8890(lVar3,&local_90,local_98);
              if (local_90 != (longlong *)0x0) {
                FUN_146069750(lVar3);
                local_78 = &PTR_FUN_14a184370;
                local_70 = local_90;
                local_68 = local_88;
                if (local_88 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_88 + 1) = (int)local_88[1] + 1;
                  UNLOCK();
                }
                local_60 = 0;
                local_e8 = (undefined1 *)CONCAT71(local_e8._1_7_,1);
                FUN_1414c1098(lVar7,&local_c0,&local_7c,&local_78);
                local_7c = local_c0;
                local_78 = &PTR_FUN_14a184370;
                (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
              }
              local_78 = (undefined **)0x0;
              (**(code **)(*param_1 + 0x180))(param_1);
              plVar8 = (longlong *)FUN_1401e3228(&local_78);
              plVar9 = (longlong *)FUN_140a68038(1);
              iVar12 = local_d4;
              local_a0 = (undefined **)0x0;
              local_d0 = param_1;
              if ((plVar9 != (longlong *)0x0) && (plVar9 != plVar8)) {
                (**(code **)(*plVar9 + 0x10))(plVar9,&local_78);
                local_a0 = local_78;
                FUN_141589e20(lVar7,&local_78,&local_7c);
                local_7c = local_78._0_4_;
                (**(code **)(*plVar9 + 0x80))(plVar9,&local_78);
                if ((local_78 != (undefined **)0x0) &&
                   (iVar6 = (**(code **)(*local_78 + 0x138))(local_78,iVar12), iVar6 != 0)) {
                  (**(code **)(*plVar9 + 0x10))(plVar9,local_ac);
                  (**(code **)(*local_78 + 0x148))(local_78,&local_c0,iVar12);
                  local_e8 = local_ac;
                  FUN_141589eda(lVar7,&local_a4,&local_7c,&local_c0);
                  local_7c = local_a4;
                  if (CONCAT44(uStack_bc,local_c0) != 0) {
                    FUN_1400020a8();
                  }
                }
                plVar5 = local_70;
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_70 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_70)(local_70);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
                lVar11 = *(longlong *)(lVar3 + 0x30);
                if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x398) != 0)) {
                  lVar10 = FUN_140082f10();
                  lVar11 = *(longlong *)(lVar11 + 0x398);
                  if (((lVar11 != 0) &&
                      (((lVar10 != 0 && (lVar4 = *(longlong *)(lVar11 + 0x10), lVar4 != 0)) &&
                       (*(int *)(lVar10 + 0x38) <= *(int *)(lVar4 + 0x38))))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                      lVar10 + 0x30)) {
                    (**(code **)(*plVar9 + 0x10))(plVar9,&local_c8);
                    FUN_145ed8890(lVar3,&local_c0,local_c8);
                    local_70 = (longlong *)CONCAT44(uStack_bc,local_c0);
                    local_68 = local_b8;
                    if (local_b8 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
                      UNLOCK();
                    }
                    local_60 = 0;
                    local_78 = &PTR_FUN_14a5af930;
                    local_58 = 0;
                    uStack_50 = 0;
                    FUN_1461170a2(lVar11,&local_78);
                    local_78 = &PTR_FUN_14a5af930;
                    if (local_58 != 0) {
                      FUN_1400020a8();
                    }
                    local_78 = &PTR_FUN_14a184370;
                    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_60])(&local_70);
                    iVar12 = local_d4;
                    if (local_b8 != (longlong *)0x0) {
                      LOCK();
                      plVar9 = local_b8 + 1;
                      *(int *)plVar9 = (int)*plVar9 + -1;
                      UNLOCK();
                      if ((int)*plVar9 == 0) {
                        (**(code **)*local_b8)(local_b8);
                        LOCK();
                        piVar2 = (int *)((longlong)local_b8 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        if (*piVar2 == 0) {
                          (**(code **)(*local_b8 + 0x10))(local_b8);
                        }
                      }
                    }
                  }
                }
              }
              if (plVar8 != (longlong *)0x0) {
                if (local_a0 == (undefined **)0x0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8,&local_78);
                  local_a0 = local_78;
                  FUN_141589e20(lVar7,&local_78,&local_7c);
                  local_7c = local_78._0_4_;
                }
                (**(code **)(*plVar8 + 0x80))(plVar8,&local_78);
                if ((local_78 != (undefined **)0x0) &&
                   (iVar6 = (**(code **)(*local_78 + 0x138))(local_78,iVar12), iVar6 != 0)) {
                  (**(code **)(*plVar8 + 0x10))(plVar8,local_ac);
                  (**(code **)(*local_78 + 0x148))(local_78,&local_c0,iVar12);
                  local_e8 = local_ac;
                  FUN_141589eda(lVar7,&local_a4,&local_7c,&local_c0);
                  local_7c = local_a4;
                  if (CONCAT44(uStack_bc,local_c0) != 0) {
                    FUN_1400020a8();
                  }
                }
                plVar8 = local_70;
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_70 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*local_70)(local_70);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar8 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
              }
              param_1 = local_d0;
              if (local_88 != (longlong *)0x0) {
                LOCK();
                plVar8 = local_88 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  (**(code **)*local_88)(local_88);
                  LOCK();
                  piVar2 = (int *)((longlong)local_88 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  param_1 = local_d0;
                  if (*piVar2 == 0) {
                    (**(code **)(*local_88 + 0x10))(local_88);
                    param_1 = local_d0;
                  }
                }
              }
            }
          }
          lVar7 = FUN_1460695f4(param_1);
          FUN_1460696ae(lVar7 + 0x1c8,lVar3);
        }
        break;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)*(int *)(lVar7 + 0x40) * 8 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460695f4 FUN_1460695f4 body=63 status=ok
// SIG undefined FUN_1460695f4(void)

longlong FUN_1460695f4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400b465c();
  if (lVar1 != 0) {
    lVar2 = FUN_144a79464();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 146069634 FUN_146069634 body=121 status=ok
// SIG undefined FUN_146069634(void)

undefined8 FUN_146069634(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar6 = 0;
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if (((lVar3 != 0) && (*(short *)(lVar3 + 4) < 0)) &&
         (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 != 0)) {
        lVar4 = FUN_14479d2ce(lVar3);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 0xe0) != *(int *)(lVar3 + 8))) {
          *(int *)(lVar3 + 8) = *(int *)(lVar4 + 0xe0);
          uVar5 = 1;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5;
}



// FUNCTION 1460696ae FUN_1460696ae body=162 status=ok
// SIG undefined FUN_1460696ae(void)

void FUN_1460696ae(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14606973b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14606973b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146069750 FUN_146069750 body=645 status=ok
// SIG undefined FUN_146069750(void)

void FUN_146069750(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_a8 [40];
  longlong local_80 [2];
  undefined **local_70;
  undefined8 local_68;
  longlong *local_60;
  byte local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = *(longlong **)(param_2 + 0x10);
  if (plVar5 == (longlong *)0x0) {
LAB_146069953:
    plVar5 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar5[1];
    do {
      if (iVar4 == 0) goto LAB_146069953;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
  }
  local_68 = 0;
  if (plVar5 != (longlong *)0x0) {
    local_68 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_58 = 0;
  local_70 = &PTR_FUN_14a5af930;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = plVar5;
  (**(code **)(*param_1 + 0x348))(param_1,&local_70);
  local_70 = &PTR_FUN_14a5af930;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_70 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if (param_1[6] != 0) {
    plVar5 = *(longlong **)(param_1[6] + 0x398);
    if ((plVar5 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(plVar5);
    }
    else if (plVar5 == (longlong *)0x0) goto LAB_14606992c;
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (plVar6 == (longlong *)0x0) {
LAB_14606995a:
      plVar6 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar6[1];
      do {
        if (iVar4 == 0) goto LAB_14606995a;
        LOCK();
        iVar3 = (int)plVar6[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar7);
    }
    local_68 = 0;
    if (plVar6 != (longlong *)0x0) {
      local_68 = *(undefined8 *)(param_2 + 8);
    }
    local_58 = 0;
    local_60 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      local_70 = &PTR_FUN_14a5af930;
      local_50 = 0;
      uStack_48 = 0;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_58 = 0;
      local_70 = &PTR_FUN_14a5af930;
      local_50 = 0;
      uStack_48 = 0;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1460699d6(plVar5,&local_70);
    (**(code **)(*param_1 + 0x330))(param_1,local_80);
    (**(code **)(*plVar5 + 0x688))(plVar5,local_80);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
    local_70 = &PTR_FUN_14a5af930;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    local_70 = &PTR_FUN_14a184370;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_58])(&local_68);
  }
LAB_14606992c:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460699d6 FUN_1460699d6 body=61 status=ok
// SIG undefined FUN_1460699d6(void)

void FUN_1460699d6(longlong *param_1,undefined8 param_2)

{
  FUN_144a62f0c(param_1,param_1[5],0x14);
  FUN_141238a10(param_1 + 0x74,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146069a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6f8))(param_1);
  return;
}



// FUNCTION 146069a14 FUN_146069a14 body=131 status=ok
// SIG undefined FUN_146069a14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146069a14(longlong param_1)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146069a98();
  local_48 = DAT_14cbe6760;
  local_50 = _DAT_14cbe6758;
  FUN_1448075d0(local_40);
  FUN_146069b2e(param_1 + 0x70,&local_50,local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146069a98 FUN_146069a98 body=149 status=ok
// SIG undefined FUN_146069a98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146069a98(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = DAT_14cb8dd38;
  local_58 = _DAT_14cb8dd30;
  FUN_1448075d0(local_48);
  FUN_1404e49fa(param_1 + 0x130,local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_140128f82(param_1 + 0x70,local_48,param_1 + 0x130,0);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146069b2e FUN_146069b2e body=298 status=ok
// SIG undefined FUN_146069b2e(void)

undefined4 * FUN_146069b2e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140129182(param_1,local_48);
  FUN_1404e49e4(local_40,param_3);
  local_40[10] = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = *local_40;
  local_58 = 0;
  cVar1 = FUN_1401290b2(param_1,uVar3,local_40);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_40[0xb] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_40[10] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140129534(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146069c5a FUN_146069c5a body=205 status=ok
// SIG undefined FUN_146069c5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146069c5a(void)

{
  if ((DAT_14ca9819f & 2) == 0) {
    DAT_14ca9819f = DAT_14ca9819f | 2;
    _DAT_14ca98140 = L"FShaderPipeline";
    _DAT_14ca98158 = FUN_146826540;
    _DAT_14ca98160 = FUN_146825d77;
    _DAT_14ca98168 = FUN_146825fd6;
    _DAT_14ca98170 = FUN_1407e02ea;
    DAT_14ca98178 = FUN_146826273;
    _DAT_14ca98150 = &LAB_14743235c;
    _DAT_14ca98190 = 0xffffffff00000048;
    _DAT_14ca98198 = 8;
    DAT_14ca9819c = 0;
    _DAT_14ca98180 = &LAB_147432382;
    FUN_146069d28();
    FUN_1407e00cc(&DAT_14ca98138);
    return;
  }
  return;
}



// FUNCTION 146069d28 FUN_146069d28 body=121 status=ok
// SIG undefined FUN_146069d28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146069d28(void)

{
  FUN_146069da2();
  _DAT_14ca99958 = L"TypeName";
  DAT_14ca99982 = FUN_140850cc5();
  _DAT_14ca99960 = FUN_1457fb358();
  _DAT_14ca99970 = &LAB_14682652b;
  _DAT_14ca99978 = 0x100000000;
  _DAT_14ca99980 = 0;
  _DAT_14ca99968 = DAT_14ca98148;
  DAT_14ca98148 = &DAT_14ca99958;
  return;
}



// FUNCTION 146069da2 FUN_146069da2 body=275 status=ok
// SIG undefined FUN_146069da2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146069da2(void)

{
  FUN_146069eb6();
  _DAT_14ca99988 = L"Shaders";
  DAT_14ca999b2 = FUN_140850cc5();
  if ((DAT_14ca9985f & 2) == 0) {
    DAT_14ca9985f = DAT_14ca9985f | 3;
    _DAT_14ca99800 = L"TMemoryImagePtr<T>";
    _DAT_14ca99818 = &LAB_1474377c6;
    _DAT_14ca99820 = FUN_1474377cc;
    _DAT_14ca99828 = &LAB_1474377e2;
    _DAT_14ca99830 = &LAB_1474377f0;
    _DAT_14ca99838 = &LAB_1474377fe;
    _DAT_14ca99810 = &LAB_14743780a;
    _DAT_14ca99850 = 0x800000008;
    _DAT_14ca99858 = 8;
    DAT_14ca9985c = 0;
  }
  _DAT_14ca99990 = &DAT_14ca997f8;
  _DAT_14ca999a0 = &LAB_14682652b;
  _DAT_14ca999a8 = 0x500000008;
  _DAT_14ca999b0 = 0;
  _DAT_14ca99998 = DAT_14ca98148;
  DAT_14ca98148 = &DAT_14ca99988;
  return;
}



// FUNCTION 146069eb6 FUN_146069eb6 body=271 status=ok
// SIG undefined FUN_146069eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146069eb6(void)

{
  _DAT_14ca999b8 = L"PermutationIds";
  DAT_14ca999e2 = FUN_140850cc5();
  if ((DAT_14c951c5f & 2) == 0) {
    DAT_14c951c5f = DAT_14c951c5f | 3;
    _DAT_14c951c00 = &DAT_149e97ffe;
    _DAT_14c951c18 = &LAB_1468cb2bc;
    _DAT_14c951c20 = &LAB_1468cb2c8;
    _DAT_14c951c28 = &LAB_1468cb2d4;
    _DAT_14c951c30 = &LAB_14280d956;
    _DAT_14c951c38 = &LAB_1468cb2da;
    _DAT_14c951c10 = &LAB_1468cb2e2;
    _DAT_14c951c50 = 0x400000004;
    _DAT_14c951c58 = 4;
    DAT_14c951c5c = 0;
  }
  _DAT_14ca999c0 = &DAT_14c951bf8;
  _DAT_14ca999d0 = &LAB_14682652b;
  _DAT_14ca999d8 = 0x500000030;
  _DAT_14ca999e0 = 0;
  _DAT_14ca999c8 = DAT_14ca98148;
  DAT_14ca98148 = &DAT_14ca999b8;
  return;
}



// FUNCTION 146069fc6 FUN_146069fc6 body=40 status=ok
// SIG undefined FUN_146069fc6(void)

undefined8 FUN_146069fc6(undefined8 param_1,int param_2)

{
  FUN_146069fee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146069fee FUN_146069fee body=614 status=ok
// SIG undefined FUN_146069fee(void)

void FUN_146069fee(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5fb450;
  param_1[0x72] = &PTR_FUN_14b5fbac0;
  param_1[0x73] = &PTR_FUN_14b5fbae0;
  param_1[0x74] = &PTR_FUN_14b5fbb10;
  param_1[0x75] = &PTR_FUN_14b5fbb20;
  param_1[0x76] = &PTR_FUN_14b5fbb90;
  param_1[0x77] = &PTR_FUN_14b5fbbc0;
  param_1[0x78] = &PTR_FUN_14b5fbbf0;
  param_1[0x7f] = &PTR_FUN_14b5fbca0;
  param_1[0x80] = &PTR_FUN_14b5fbd10;
  param_1[0x81] = &PTR_FUN_14b5fbd80;
  param_1[0x82] = &PTR_FUN_14b5fbdb0;
  param_1[0x83] = &PTR_FUN_14b5fbdf0;
  param_1[0x84] = &PTR_FUN_14b5fbe90;
  param_1[0x85] = &PTR_FUN_14b5fbeb0;
  param_1[0x89] = &PTR_FUN_14b5fbed0;
  param_1[0x8a] = &PTR_FUN_14b5fbf90;
  param_1[0x8b] = &PTR_FUN_14b5fc010;
  param_1[0x8c] = &PTR_FUN_14b5fc060;
  param_1[0x8d] = &PTR_FUN_14b5fc0a0;
  param_1[0x8e] = &PTR_FUN_14b5fc0c0;
  param_1[0x8f] = &PTR_FUN_14b5fc0e0;
  param_1[0x90] = &PTR_FUN_14b5fc100;
  param_1[0x91] = &PTR_FUN_14b5fc120;
  param_1[0x92] = &PTR_FUN_14b5fc140;
  param_1[0x93] = &PTR_FUN_14b5fc160;
  param_1[0x94] = &PTR_FUN_14b5fc180;
  param_1[0x95] = &PTR_FUN_14b5fc1a0;
  param_1[0x96] = &PTR_FUN_14b5fc1c0;
  param_1[0x34b] = &PTR_FUN_14b5fc1e0;
  param_1[0x352] = &PTR_FUN_14b5fc1f0;
  param_1[0x353] = &PTR_FUN_14b5fc230;
  param_1[0x354] = &PTR_FUN_14b5fc270;
  param_1[0x355] = &PTR_FUN_14b5fc2c0;
  param_1[0x356] = &PTR_FUN_14b5fc2f0;
  param_1[0x359] = &PTR_FUN_14b5fc330;
  param_1[0x35a] = &PTR_FUN_14b5fc340;
  param_1[0x35b] = &PTR_FUN_14b5fc370;
  param_1[0x35c] = &PTR_FUN_14b5fc410;
  if (param_1[0x4c3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4bf] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 14606a260 FUN_14606a260 body=279 status=ok
// SIG undefined FUN_14606a260(void)

undefined8 * FUN_14606a260(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14130963a();
  *param_1 = &PTR_FUN_14add3170;
  *(undefined1 *)((longlong)param_1 + 0x3d) = 3;
  param_1[8] = 0;
  uVar2 = FUN_144830b78(param_1 + 9,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 9) = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14add40d0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_140f1f190();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar2 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 9) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606a384 FUN_14606a384 body=279 status=ok
// SIG undefined FUN_14606a384(void)

undefined8 * FUN_14606a384(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined4 local_2c;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14addad70;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar2 = FUN_144830b78(param_1 + 9,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 9) = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14addcc00;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)((longlong)puVar3 + 0x3c) = 0x80;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_38 = FUN_1446f8646();
  if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_38);
  }
  local_30 = 1;
  local_2e = 0;
  local_2c = 0xffffffff;
  uVar2 = FUN_144830b78(local_24);
  *(undefined4 *)(param_1 + 9) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14606a49c FUN_14606a49c body=255 status=ok
// SIG undefined FUN_14606a49c(void)

void FUN_14606a49c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_1458c4094(&local_30);
    uVar3 = (ulonglong)local_20;
    if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
      do {
        lVar1 = *(longlong *)(local_30 + (uVar3 & 0xffffffff) * 8);
        if ((lVar1 != 0) &&
           (((*(uint *)(lVar1 + 8) & 0x50) == 0 && (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)
            ))) {
          lVar2 = FUN_141210d5c();
          lVar1 = *(longlong *)(lVar1 + 0x10);
          if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30)) {
            FUN_148117120(param_1,*(undefined8 *)(local_30 + (longlong)(int)local_20 * 8),0);
          }
        }
        uVar3 = (longlong)(int)local_20;
        do {
          uVar4 = uVar3;
          uVar3 = uVar4 + 1;
          local_20 = (uint)uVar3;
          if ((longlong)local_28 <= (longlong)uVar3) break;
        } while (*(longlong *)(local_30 + uVar3 * 8) == 0);
      } while ((-2 < (longlong)uVar4) && ((int)local_20 < local_28));
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14606a59c FUN_14606a59c body=62 status=ok
// SIG undefined FUN_14606a59c(void)

longlong FUN_14606a59c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14606a62a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 200 + *param_1;
  FUN_14606a5da(lVar2);
  return lVar2;
}



// FUNCTION 14606a5da FUN_14606a5da body=79 status=ok
// SIG undefined FUN_14606a5da(void)

void FUN_14606a5da(void *param_1)

{
  memset(param_1,0,0x88);
  *(undefined2 **)((longlong)param_1 + 0x90) = &DAT_149dfb77a;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  return;
}



// FUNCTION 14606a62a FUN_14606a62a body=150 status=ok
// SIG undefined FUN_14606a62a(void)

void FUN_14606a62a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 200,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 200)) {
      uVar5 = uVar4 / 200 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,200,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}


