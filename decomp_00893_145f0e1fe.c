// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f0e1fe FUN_145f0e1fe body=138 status=ok
// SIG undefined FUN_145f0e1fe(void)

code * FUN_145f0e1fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWInstanceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148043718;
}



// FUNCTION 145f0e288 FUN_145f0e288 body=292 status=ok
// SIG undefined FUN_145f0e288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0e288(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2d728) {
    FUN_144b3d300(&DAT_14cb2d728);
    if (DAT_14cb2d728 == -1) {
      FUN_145f0e4f6();
      FUN_145f0e3ac();
      FUN_140db5666(&DAT_14cb2d680,0,&DAT_14cb2d618,L"FNiagaraUpdateCollisionGroupMapCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraRayTraceCollisionGroupShaders.usf",
                    L"UpdatePrimIdToCollisionGroupMap",5,1,FUN_14804b2ec,FUN_14804b28c,
                    &LAB_14804b288,&LAB_14804b284,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb33238)
      ;
      _DAT_14cb2d680 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f79e8);
      _Init_thread_footer(&DAT_14cb2d728);
    }
  }
  return &DAT_14cb2d680;
}



// FUNCTION 145f0e3ac FUN_145f0e3ac body=205 status=ok
// SIG undefined FUN_145f0e3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0e3ac(void)

{
  if ((DAT_14cb2d67f & 2) == 0) {
    DAT_14cb2d67f = DAT_14cb2d67f | 2;
    _DAT_14cb2d620 = L"FNiagaraUpdateCollisionGroupMapCS";
    _DAT_14cb2d638 = FUN_146826540;
    _DAT_14cb2d640 = FUN_146825d77;
    _DAT_14cb2d648 = FUN_146825fd6;
    _DAT_14cb2d650 = FUN_1407e02ea;
    _DAT_14cb2d658 = FUN_146826273;
    _DAT_14cb2d630 = FUN_14804b256;
    _DAT_14cb2d670 = 0xffffffff000000e0;
    _DAT_14cb2d678 = 8;
    DAT_14cb2d67c = 0;
    _DAT_14cb2d660 = &LAB_14804b280;
    FUN_145f0e47a();
    FUN_1407e00cc(&DAT_14cb2d618);
    return;
  }
  return;
}



// FUNCTION 145f0e47a FUN_145f0e47a body=123 status=ok
// SIG undefined FUN_145f0e47a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0e47a(void)

{
  _DAT_14cb35240 = L"BASE";
  DAT_14cb3526a = 4;
  _DAT_14cb35248 = FUN_140b35ae4();
  _DAT_14cb35250 = DAT_14cb2d628;
  _DAT_14cb35258 = &LAB_14682652b;
  DAT_14cb2d628 = &DAT_14cb35240;
  DAT_14cb2d67d = DAT_14cb2d67d + '\x01';
  _DAT_14cb35260 = 0x100000000;
  if (*(char *)(_DAT_14cb35248 + 100) != '\0') {
    DAT_14cb2d67e = DAT_14cb2d67e + '\x01';
  }
  return;
}



// FUNCTION 145f0e4f6 FUN_145f0e4f6 body=261 status=ok
// SIG undefined FUN_145f0e4f6(void)

void FUN_145f0e4f6(void)

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
              0x110) < DAT_14cb332b8) {
    FUN_144b3d300(&DAT_14cb332b8);
    if (DAT_14cb332b8 == -1) {
      FUN_145f0e5fc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x34;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33238,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb664);
      _Init_thread_footer(&DAT_14cb332b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0e5fc FUN_145f0e5fc body=226 status=ok
// SIG undefined FUN_145f0e5fc(void)

longlong * FUN_145f0e5fc(longlong *param_1)

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
  pcVar13 = FUN_146460de4;
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



// FUNCTION 145f0e6e0 FUN_145f0e6e0 body=130 status=ok
// SIG undefined FUN_145f0e6e0(void)

undefined1 * FUN_145f0e6e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWHashTable";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<UINT>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x35;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14804ee2a;
}



// FUNCTION 145f0e762 FUN_145f0e762 body=138 status=ok
// SIG undefined FUN_145f0e762(void)

code * FUN_145f0e762(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HashTableSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0e6e0;
}



// FUNCTION 145f0e7ec FUN_145f0e7ec body=138 status=ok
// SIG undefined FUN_145f0e7ec(void)

code * FUN_145f0e7ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWHashToCollisionGroups";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<UINT>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0e762;
}



// FUNCTION 145f0e876 FUN_145f0e876 body=292 status=ok
// SIG undefined FUN_145f0e876(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0e876(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48630) {
    FUN_144b3d300(&DAT_14cb48630);
    if (DAT_14cb48630 == -1) {
      FUN_145f0eae4();
      FUN_145f0e99a();
      FUN_140db5666(&DAT_14cb48588,0,&DAT_14cb48520,L"FWaterQuadTreeBucketPrefixSumCS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainCS",5,2,FUN_1483fcf26,
                    FUN_1483fcec6,&LAB_1483fcec2,&LAB_1483fcebe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48fc8);
      _DAT_14cb48588 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bd31);
      _Init_thread_footer(&DAT_14cb48630);
    }
  }
  return &DAT_14cb48588;
}



// FUNCTION 145f0e99a FUN_145f0e99a body=205 status=ok
// SIG undefined FUN_145f0e99a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0e99a(void)

{
  if ((DAT_14cb48587 & 2) == 0) {
    DAT_14cb48587 = DAT_14cb48587 | 2;
    _DAT_14cb48528 = L"FWaterQuadTreeBucketPrefixSumCS";
    _DAT_14cb48540 = FUN_146826540;
    _DAT_14cb48548 = FUN_146825d77;
    _DAT_14cb48550 = FUN_146825fd6;
    _DAT_14cb48558 = FUN_1407e02ea;
    _DAT_14cb48560 = FUN_146826273;
    _DAT_14cb48538 = FUN_1483fce90;
    _DAT_14cb48578 = 0xffffffff000000e0;
    _DAT_14cb48580 = 8;
    DAT_14cb48584 = 0;
    _DAT_14cb48568 = &LAB_1483fceba;
    FUN_145f0ea68();
    FUN_1407e00cc(&DAT_14cb48520);
    return;
  }
  return;
}



// FUNCTION 145f0ea68 FUN_145f0ea68 body=123 status=ok
// SIG undefined FUN_145f0ea68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0ea68(void)

{
  _DAT_14cb493a8 = L"BASE";
  DAT_14cb493d2 = 4;
  _DAT_14cb493b0 = FUN_140b35ae4();
  _DAT_14cb493b8 = DAT_14cb48530;
  _DAT_14cb493c0 = &LAB_14682652b;
  DAT_14cb48530 = &DAT_14cb493a8;
  DAT_14cb48585 = DAT_14cb48585 + '\x01';
  _DAT_14cb493c8 = 0x100000000;
  if (*(char *)(_DAT_14cb493b0 + 100) != '\0') {
    DAT_14cb48586 = DAT_14cb48586 + '\x01';
  }
  return;
}



// FUNCTION 145f0eae4 FUN_145f0eae4 body=261 status=ok
// SIG undefined FUN_145f0eae4(void)

void FUN_145f0eae4(void)

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
              0x110) < DAT_14cb49048) {
    FUN_144b3d300(&DAT_14cb49048);
    if (DAT_14cb49048 == -1) {
      FUN_145f0ebea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x141;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48fc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d231);
      _Init_thread_footer(&DAT_14cb49048);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0ebea FUN_145f0ebea body=226 status=ok
// SIG undefined FUN_145f0ebea(void)

longlong * FUN_145f0ebea(longlong *param_1)

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
  pcVar13 = FUN_146488dd8;
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



// FUNCTION 145f0ecce FUN_145f0ecce body=130 status=ok
// SIG undefined FUN_145f0ecce(void)

undefined1 * FUN_145f0ecce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BucketPrefixSums";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x142;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_148400ad8;
}



// FUNCTION 145f0ed50 FUN_145f0ed50 body=138 status=ok
// SIG undefined FUN_145f0ed50(void)

code * FUN_145f0ed50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000145;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400a4e;
}



// FUNCTION 145f0edda FUN_145f0edda body=138 status=ok
// SIG undefined FUN_145f0edda(void)

code * FUN_145f0edda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BucketCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000143;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0ecce;
}



// FUNCTION 145f0ee64 FUN_145f0ee64 body=205 status=ok
// SIG undefined FUN_145f0ee64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0ee64(void)

{
  if ((DAT_14cb506cf & 2) == 0) {
    DAT_14cb506cf = DAT_14cb506cf | 2;
    _DAT_14cb50670 = L"FComputeDivergenceCS";
    _DAT_14cb50688 = FUN_146826540;
    _DAT_14cb50690 = FUN_146825d77;
    _DAT_14cb50698 = FUN_146825fd6;
    _DAT_14cb506a0 = FUN_1407e02ea;
    _DAT_14cb506a8 = FUN_146826273;
    _DAT_14cb50680 = FUN_1485ec62e;
    _DAT_14cb506c0 = 0xffffffff000000e0;
    _DAT_14cb506c8 = 8;
    DAT_14cb506cc = 0;
    _DAT_14cb506b0 = &LAB_1485ec658;
    FUN_145f0ef32();
    FUN_1407e00cc(&DAT_14cb50668);
    return;
  }
  return;
}



// FUNCTION 145f0ef32 FUN_145f0ef32 body=123 status=ok
// SIG undefined FUN_145f0ef32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0ef32(void)

{
  _DAT_14cb50f38 = L"BASE";
  DAT_14cb50f62 = 4;
  _DAT_14cb50f40 = FUN_140b35ae4();
  _DAT_14cb50f48 = DAT_14cb50678;
  _DAT_14cb50f50 = &LAB_14682652b;
  DAT_14cb50678 = &DAT_14cb50f38;
  DAT_14cb506cd = DAT_14cb506cd + '\x01';
  _DAT_14cb50f58 = 0x100000000;
  if (*(char *)(_DAT_14cb50f40 + 100) != '\0') {
    DAT_14cb506ce = DAT_14cb506ce + '\x01';
  }
  return;
}



// FUNCTION 145f0efae FUN_145f0efae body=226 status=ok
// SIG undefined FUN_145f0efae(void)

longlong * FUN_145f0efae(longlong *param_1)

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
  pcVar13 = FUN_1464a498c;
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



// FUNCTION 145f0f092 FUN_145f0f092 body=136 status=ok
// SIG undefined FUN_145f0f092(void)

code * FUN_145f0f092(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Velocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a4a14;
}



// FUNCTION 145f0f11a FUN_145f0f11a body=138 status=ok
// SIG undefined FUN_145f0f11a(void)

code * FUN_145f0f11a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SphereSourceBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FGbxWindSphereSourceData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0f1a4;
}



// FUNCTION 145f0f1a4 FUN_145f0f1a4 body=138 status=ok
// SIG undefined FUN_145f0f1a4(void)

code * FUN_145f0f1a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutDivergence";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed72c;
}



// FUNCTION 145f0f22e FUN_145f0f22e body=292 status=ok
// SIG undefined FUN_145f0f22e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0f22e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb198) {
    FUN_144b3d300(&DAT_14cbfb198);
    if (DAT_14cbfb198 == -1) {
      FUN_145f0f49c();
      FUN_145f0f352();
      FUN_140db5666(&DAT_14cbfb0f0,0,&DAT_14cbfb088,L"FHairPatchAttributeCS",
                    L"/Engine/Private/HairStrands/HairStrandsInterpolation.usf",L"MainCS",5,3,
                    FUN_14909a520,FUN_14909a4c0,&LAB_14667c8ac,&LAB_14909a4bc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfcb88);
      _DAT_14cbfb0f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443fa91);
      _Init_thread_footer(&DAT_14cbfb198);
    }
  }
  return &DAT_14cbfb0f0;
}



// FUNCTION 145f0f352 FUN_145f0f352 body=205 status=ok
// SIG undefined FUN_145f0f352(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0f352(void)

{
  if ((DAT_14cbfb0ef & 2) == 0) {
    DAT_14cbfb0ef = DAT_14cbfb0ef | 2;
    _DAT_14cbfb090 = L"FHairPatchAttributeCS";
    _DAT_14cbfb0a8 = FUN_146826540;
    _DAT_14cbfb0b0 = FUN_146825d77;
    _DAT_14cbfb0b8 = FUN_146825fd6;
    _DAT_14cbfb0c0 = FUN_1407e02ea;
    _DAT_14cbfb0c8 = FUN_146826273;
    _DAT_14cbfb0a0 = FUN_14909a48e;
    _DAT_14cbfb0e0 = 0xffffffff000000e0;
    _DAT_14cbfb0e8 = 8;
    DAT_14cbfb0ec = 0;
    _DAT_14cbfb0d0 = &LAB_14909a4b8;
    FUN_145f0f420();
    FUN_1407e00cc(&DAT_14cbfb088);
    return;
  }
  return;
}



// FUNCTION 145f0f420 FUN_145f0f420 body=123 status=ok
// SIG undefined FUN_145f0f420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0f420(void)

{
  _DAT_14cbfd678 = L"BASE";
  DAT_14cbfd6a2 = 4;
  _DAT_14cbfd680 = FUN_140b35ae4();
  _DAT_14cbfd688 = DAT_14cbfb098;
  _DAT_14cbfd690 = &LAB_14682652b;
  DAT_14cbfb098 = &DAT_14cbfd678;
  DAT_14cbfb0ed = DAT_14cbfb0ed + '\x01';
  _DAT_14cbfd698 = 0x100000000;
  if (*(char *)(_DAT_14cbfd680 + 100) != '\0') {
    DAT_14cbfb0ee = DAT_14cbfb0ee + '\x01';
  }
  return;
}



// FUNCTION 145f0f49c FUN_145f0f49c body=261 status=ok
// SIG undefined FUN_145f0f49c(void)

void FUN_145f0f49c(void)

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
              0x110) < DAT_14cbfcc08) {
    FUN_144b3d300(&DAT_14cbfcc08);
    if (DAT_14cbfcc08 == -1) {
      FUN_145f0f5a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x2ec;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcb88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14444944e);
      _Init_thread_footer(&DAT_14cbfcc08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0f5a2 FUN_145f0f5a2 body=226 status=ok
// SIG undefined FUN_145f0f5a2(void)

longlong * FUN_145f0f5a2(longlong *param_1)

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
  pcVar13 = FUN_14667d608;
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



// FUNCTION 145f0f686 FUN_145f0f686 body=132 status=ok
// SIG undefined FUN_145f0f686(void)

undefined1 * FUN_145f0f686(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1490a9620;
}



// FUNCTION 145f0f70a FUN_145f0f70a body=136 status=ok
// SIG undefined FUN_145f0f70a(void)

code * FUN_145f0f70a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenCurveBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667d690;
}



// FUNCTION 145f0f792 FUN_145f0f792 body=138 status=ok
// SIG undefined FUN_145f0f792(void)

code * FUN_145f0f792(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveInterpolationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000002f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0f70a;
}



// FUNCTION 145f0f81c FUN_145f0f81c body=292 status=ok
// SIG undefined FUN_145f0f81c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0f81c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb8a8) {
    FUN_144b3d300(&DAT_14cbfb8a8);
    if (DAT_14cbfb8a8 == -1) {
      FUN_145f0fa8a();
      FUN_145f0f940();
      FUN_140db5666(&DAT_14cbfb800,0,&DAT_14cbfb798,L"FSkinUpdateCS",
                    L"/Engine/Private/HairStrands/HairStrandsSkinUpdate.usf",L"UpdateSkinPositionCS"
                    ,5,0x20,FUN_14909ba20,FUN_14909b9c0,&LAB_141905dba,&LAB_14444215e,&LAB_14712ac0c
                    ,&LAB_14712ac08,0xe0,&DAT_14cbfceb8);
      _DAT_14cbfb800 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144442161);
      _Init_thread_footer(&DAT_14cbfb8a8);
    }
  }
  return &DAT_14cbfb800;
}



// FUNCTION 145f0f940 FUN_145f0f940 body=205 status=ok
// SIG undefined FUN_145f0f940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0f940(void)

{
  if ((DAT_14cbfb7ff & 2) == 0) {
    DAT_14cbfb7ff = DAT_14cbfb7ff | 2;
    _DAT_14cbfb7a0 = L"FSkinUpdateCS";
    _DAT_14cbfb7b8 = FUN_146826540;
    _DAT_14cbfb7c0 = FUN_146825d77;
    _DAT_14cbfb7c8 = FUN_146825fd6;
    _DAT_14cbfb7d0 = FUN_1407e02ea;
    _DAT_14cbfb7d8 = FUN_146826273;
    _DAT_14cbfb7b0 = FUN_14909b992;
    _DAT_14cbfb7f0 = 0xffffffff000000e0;
    _DAT_14cbfb7f8 = 8;
    DAT_14cbfb7fc = 0;
    _DAT_14cbfb7e0 = &LAB_14909b9bc;
    FUN_145f0fa0e();
    FUN_1407e00cc(&DAT_14cbfb798);
    return;
  }
  return;
}



// FUNCTION 145f0fa0e FUN_145f0fa0e body=123 status=ok
// SIG undefined FUN_145f0fa0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0fa0e(void)

{
  _DAT_14cbfd8d8 = L"BASE";
  DAT_14cbfd902 = 4;
  _DAT_14cbfd8e0 = FUN_140b35ae4();
  _DAT_14cbfd8e8 = DAT_14cbfb7a8;
  _DAT_14cbfd8f0 = &LAB_14682652b;
  DAT_14cbfb7a8 = &DAT_14cbfd8d8;
  DAT_14cbfb7fd = DAT_14cbfb7fd + '\x01';
  _DAT_14cbfd8f8 = 0x100000000;
  if (*(char *)(_DAT_14cbfd8e0 + 100) != '\0') {
    DAT_14cbfb7fe = DAT_14cbfb7fe + '\x01';
  }
  return;
}



// FUNCTION 145f0fa8a FUN_145f0fa8a body=261 status=ok
// SIG undefined FUN_145f0fa8a(void)

void FUN_145f0fa8a(void)

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
              0x110) < DAT_14cbfcf38) {
    FUN_144b3d300(&DAT_14cbfcf38);
    if (DAT_14cbfcf38 == -1) {
      FUN_145f0fb90(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfceb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449496);
      _Init_thread_footer(&DAT_14cbfcf38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f0fb90 FUN_145f0fb90 body=226 status=ok
// SIG undefined FUN_145f0fb90(void)

longlong * FUN_145f0fb90(longlong *param_1)

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
  pcVar13 = FUN_14667dbf6;
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



// FUNCTION 145f0fc74 FUN_145f0fc74 body=132 status=ok
// SIG undefined FUN_145f0fc74(void)

undefined1 * FUN_145f0fc74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bWriteTangent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1490ab250;
}



// FUNCTION 145f0fcf8 FUN_145f0fcf8 body=136 status=ok
// SIG undefined FUN_145f0fcf8(void)

code * FUN_145f0fcf8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RestPositions";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490aad76;
}



// FUNCTION 145f0fd80 FUN_145f0fd80 body=138 status=ok
// SIG undefined FUN_145f0fd80(void)

code * FUN_145f0fd80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RestTangents";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f0fcf8;
}



// FUNCTION 145f0fe0a FUN_145f0fe0a body=292 status=ok
// SIG undefined FUN_145f0fe0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f0fe0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfbaf8) {
    FUN_144b3d300(&DAT_14cbfbaf8);
    if (DAT_14cbfbaf8 == -1) {
      FUN_145f10078();
      FUN_145f0ff2e();
      FUN_140db5666(&DAT_14cbfba50,0,&DAT_14cbfb9e8,L"FHairMeshesInterpolateCS",
                    L"/Engine/Private/HairStrands/HairStrandsMesh.usf",L"MainHairMeshesCS",5,1,
                    FUN_14909bc42,FUN_14909bbe2,&LAB_14667c8fa,&LAB_14909bbde,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfcfc8);
      _DAT_14cbfba50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1444431fc);
      _Init_thread_footer(&DAT_14cbfbaf8);
    }
  }
  return &DAT_14cbfba50;
}



// FUNCTION 145f0ff2e FUN_145f0ff2e body=205 status=ok
// SIG undefined FUN_145f0ff2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0ff2e(void)

{
  if ((DAT_14cbfba4f & 2) == 0) {
    DAT_14cbfba4f = DAT_14cbfba4f | 2;
    _DAT_14cbfb9f0 = L"FHairMeshesInterpolateCS";
    _DAT_14cbfba08 = FUN_146826540;
    _DAT_14cbfba10 = FUN_146825d77;
    _DAT_14cbfba18 = FUN_146825fd6;
    _DAT_14cbfba20 = FUN_1407e02ea;
    _DAT_14cbfba28 = FUN_146826273;
    _DAT_14cbfba00 = FUN_14909bbb0;
    _DAT_14cbfba40 = 0xffffffff000000e0;
    _DAT_14cbfba48 = 8;
    DAT_14cbfba4c = 0;
    _DAT_14cbfba30 = &LAB_14909bbda;
    FUN_145f0fffc();
    FUN_1407e00cc(&DAT_14cbfb9e8);
    return;
  }
  return;
}



// FUNCTION 145f0fffc FUN_145f0fffc body=123 status=ok
// SIG undefined FUN_145f0fffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f0fffc(void)

{
  _DAT_14cbfd938 = L"BASE";
  DAT_14cbfd962 = 4;
  _DAT_14cbfd940 = FUN_140b35ae4();
  _DAT_14cbfd948 = DAT_14cbfb9f8;
  _DAT_14cbfd950 = &LAB_14682652b;
  DAT_14cbfb9f8 = &DAT_14cbfd938;
  DAT_14cbfba4d = DAT_14cbfba4d + '\x01';
  _DAT_14cbfd958 = 0x100000000;
  if (*(char *)(_DAT_14cbfd940 + 100) != '\0') {
    DAT_14cbfba4e = DAT_14cbfba4e + '\x01';
  }
  return;
}



// FUNCTION 145f10078 FUN_145f10078 body=261 status=ok
// SIG undefined FUN_145f10078(void)

void FUN_145f10078(void)

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
              0x110) < DAT_14cbfd048) {
    FUN_144b3d300(&DAT_14cbfd048);
    if (DAT_14cbfd048 == -1) {
      FUN_145f1017e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x193;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcfc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444499a5);
      _Init_thread_footer(&DAT_14cbfd048);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1017e FUN_145f1017e body=226 status=ok
// SIG undefined FUN_145f1017e(void)

longlong * FUN_145f1017e(longlong *param_1)

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
  pcVar13 = FUN_14667dd8e;
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



// FUNCTION 145f10262 FUN_145f10262 body=132 status=ok
// SIG undefined FUN_145f10262(void)

undefined1 * FUN_145f10262(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x194;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1490abcd2;
}



// FUNCTION 145f102e6 FUN_145f102e6 body=136 status=ok
// SIG undefined FUN_145f102e6(void)

code * FUN_145f102e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000195;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f10262;
}



// FUNCTION 145f1036e FUN_145f1036e body=138 status=ok
// SIG undefined FUN_145f1036e(void)

code * FUN_145f1036e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSampleWeightsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000198;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490abc48;
}



// FUNCTION 145f103f8 FUN_145f103f8 body=292 status=ok
// SIG undefined FUN_145f103f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f103f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29208) {
    FUN_144b3d300(&DAT_14cc29208);
    if (DAT_14cc29208 == -1) {
      FUN_145f10666();
      FUN_145f1051c();
      FUN_140db5666(&DAT_14cc29160,0,&DAT_14cc290f8,L"FFXFSR3ConvertVelocityCS",
                    L"/Plugin/FSR3/Private/PostProcessFFX_FSR3ConvertVelocity.usf",L"MainCS",5,1,
                    FUN_14981ac88,FUN_14981ac28,&LAB_14981ac10,&LAB_14981ac0c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a4f8);
      _DAT_14cc29160 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14464fbd4);
      _Init_thread_footer(&DAT_14cc29208);
    }
  }
  return &DAT_14cc29160;
}



// FUNCTION 145f1051c FUN_145f1051c body=205 status=ok
// SIG undefined FUN_145f1051c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1051c(void)

{
  if ((DAT_14cc2915f & 2) == 0) {
    DAT_14cc2915f = DAT_14cc2915f | 2;
    _DAT_14cc29100 = L"FFXFSR3ConvertVelocityCS";
    _DAT_14cc29118 = FUN_146826540;
    _DAT_14cc29120 = FUN_146825d77;
    _DAT_14cc29128 = FUN_146825fd6;
    _DAT_14cc29130 = FUN_1407e02ea;
    _DAT_14cc29138 = FUN_146826273;
    _DAT_14cc29110 = FUN_14981abde;
    _DAT_14cc29150 = 0xffffffff000000e0;
    _DAT_14cc29158 = 8;
    DAT_14cc2915c = 0;
    _DAT_14cc29140 = &LAB_14981ac08;
    FUN_145f105ea();
    FUN_1407e00cc(&DAT_14cc290f8);
    return;
  }
  return;
}



// FUNCTION 145f105ea FUN_145f105ea body=123 status=ok
// SIG undefined FUN_145f105ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f105ea(void)

{
  _DAT_14cc2a848 = L"BASE";
  DAT_14cc2a872 = 4;
  _DAT_14cc2a850 = FUN_140b35ae4();
  _DAT_14cc2a858 = DAT_14cc29108;
  _DAT_14cc2a860 = &LAB_14682652b;
  DAT_14cc29108 = &DAT_14cc2a848;
  DAT_14cc2915d = DAT_14cc2915d + '\x01';
  _DAT_14cc2a868 = 0x100000000;
  if (*(char *)(_DAT_14cc2a850 + 100) != '\0') {
    DAT_14cc2915e = DAT_14cc2915e + '\x01';
  }
  return;
}



// FUNCTION 145f10666 FUN_145f10666 body=261 status=ok
// SIG undefined FUN_145f10666(void)

void FUN_145f10666(void)

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
              0x110) < DAT_14cc2a578) {
    FUN_144b3d300(&DAT_14cc2a578);
    if (DAT_14cc2a578 == -1) {
      FUN_145f1076c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x55;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a4f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465611d);
      _Init_thread_footer(&DAT_14cc2a578);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f1076c FUN_145f1076c body=226 status=ok
// SIG undefined FUN_145f1076c(void)

longlong * FUN_145f1076c(longlong *param_1)

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
  pcVar13 = FUN_1467621fa;
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



// FUNCTION 145f10850 FUN_145f10850 body=130 status=ok
// SIG undefined FUN_145f10850(void)

undefined1 * FUN_145f10850(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x56;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14981e3aa;
}



// FUNCTION 145f108d2 FUN_145f108d2 body=138 status=ok
// SIG undefined FUN_145f108d2(void)

code * FUN_145f108d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputVelocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1095c;
}



// FUNCTION 145f1095c FUN_145f1095c body=138 status=ok
// SIG undefined FUN_145f1095c(void)

code * FUN_145f1095c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f10850;
}



// FUNCTION 145f109ee FUN_145f109ee body=224 status=ok
// SIG undefined FUN_145f109ee(void)

undefined8 * FUN_145f109ee(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_1459a1e40(param_1,uVar1);
  *param_1 = &PTR_FUN_14a46e2e0;
  param_1[0xc] = &PTR_FUN_14a46e5d0;
  FUN_144757f48(param_1,1);
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfe;
  *param_1 = &PTR_FUN_14a4640f0;
  param_1[0xc] = &PTR_FUN_14a4643e0;
  FUN_1406ed1bc(param_1 + 0xe);
  param_1[0xe] = &PTR_FUN_14a464530;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  local_28 = &LAB_147588ef4;
  local_20 = 0;
  FUN_145f10ad0(param_1 + 8,local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f10ad0 FUN_145f10ad0 body=199 status=ok
// SIG undefined FUN_145f10ad0(void)

undefined8
FUN_145f10ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = 0;
  local_50 = 0;
  puVar3 = (undefined8 *)FUN_144a72ab6(0x30,&local_58);
  *puVar3 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14a499520;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f10b98 FUN_145f10b98 body=285 status=ok
// SIG undefined FUN_145f10b98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f10b98(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03f50) {
    FUN_144b3d300(&DAT_14ca03f50);
    if (DAT_14ca03f50 == -1) {
      FUN_145f10e00();
      FUN_145f10cb6();
      FUN_140db5666(&DAT_14ca03ea8,0,&DAT_14ca03e40,L"FLumenVisualizeCompactRaysCS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"FLumenVisualizeCompactRaysCS",5,2,FUN_14722619e,FUN_14722613e,&LAB_1462e7460,
                    &LAB_14722613a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06cd0);
      _DAT_14ca03ea8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8dc0);
      _Init_thread_footer(&DAT_14ca03f50);
    }
  }
  return &DAT_14ca03ea8;
}



// FUNCTION 145f10cb6 FUN_145f10cb6 body=205 status=ok
// SIG undefined FUN_145f10cb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f10cb6(void)

{
  if ((DAT_14ca03ea7 & 2) == 0) {
    DAT_14ca03ea7 = DAT_14ca03ea7 | 2;
    _DAT_14ca03e48 = L"FLumenVisualizeCompactRaysCS";
    _DAT_14ca03e60 = FUN_146826540;
    _DAT_14ca03e68 = FUN_146825d77;
    _DAT_14ca03e70 = FUN_146825fd6;
    _DAT_14ca03e78 = FUN_1407e02ea;
    _DAT_14ca03e80 = FUN_146826273;
    _DAT_14ca03e58 = FUN_14722610c;
    _DAT_14ca03e98 = 0xffffffff000000e0;
    _DAT_14ca03ea0 = 8;
    DAT_14ca03ea4 = 0;
    _DAT_14ca03e88 = &LAB_147226136;
    FUN_145f10d84();
    FUN_1407e00cc(&DAT_14ca03e40);
    return;
  }
  return;
}



// FUNCTION 145f10d84 FUN_145f10d84 body=123 status=ok
// SIG undefined FUN_145f10d84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f10d84(void)

{
  _DAT_14ca07ff8 = L"BASE";
  DAT_14ca08022 = 4;
  _DAT_14ca08000 = FUN_140b35ae4();
  _DAT_14ca08008 = DAT_14ca03e50;
  _DAT_14ca08010 = &LAB_14682652b;
  DAT_14ca03e50 = &DAT_14ca07ff8;
  DAT_14ca03ea5 = DAT_14ca03ea5 + '\x01';
  _DAT_14ca08018 = 0x100000000;
  if (*(char *)(_DAT_14ca08000 + 100) != '\0') {
    DAT_14ca03ea6 = DAT_14ca03ea6 + '\x01';
  }
  return;
}



// FUNCTION 145f10e00 FUN_145f10e00 body=261 status=ok
// SIG undefined FUN_145f10e00(void)

void FUN_145f10e00(void)

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
              0x110) < DAT_14ca06d50) {
    FUN_144b3d300(&DAT_14ca06d50);
    if (DAT_14ca06d50 == -1) {
      FUN_145f10f06(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x112;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06cd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3adf);
      _Init_thread_footer(&DAT_14ca06d50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f10f06 FUN_145f10f06 body=226 status=ok
// SIG undefined FUN_145f10f06(void)

longlong * FUN_145f10f06(longlong *param_1)

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
  pcVar13 = FUN_1462ea998;
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



// FUNCTION 145f10fea FUN_145f10fea body=138 status=ok
// SIG undefined FUN_145f10fea(void)

code * FUN_145f10fea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TraceDataPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<LumenVisualize::FTraceDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000116;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722cf1e;
}



// FUNCTION 145f11074 FUN_145f11074 body=138 status=ok
// SIG undefined FUN_145f11074(void)

code * FUN_145f11074(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCompactedRayDataPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<LumenVisualize::FRayDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000011c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722ce94;
}



// FUNCTION 145f110fe FUN_145f110fe body=138 status=ok
// SIG undefined FUN_145f110fe(void)

code * FUN_145f110fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCompactedTraceDataPacked";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<LumenVisualize::FTraceDataPacked>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000011d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f11074;
}



// FUNCTION 145f11188 FUN_145f11188 body=292 status=ok
// SIG undefined FUN_145f11188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f11188(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b7908) {
    FUN_144b3d300(&DAT_14c9b7908);
    if (DAT_14c9b7908 == -1) {
      FUN_145f113f6();
      FUN_145f112ac();
      FUN_140db5666(&DAT_14c9b7860,0,&DAT_14c9b77f8,L"FGTAOUpsamplePS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"GTAOUpsamplePS",3,1,
                    FUN_147135a16,FUN_1471359b6,&LAB_14713599e,&LAB_14713599a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b8a48);
      _DAT_14c9b7860 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8d0b8);
      _Init_thread_footer(&DAT_14c9b7908);
    }
  }
  return &DAT_14c9b7860;
}



// FUNCTION 145f112ac FUN_145f112ac body=205 status=ok
// SIG undefined FUN_145f112ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f112ac(void)

{
  if ((DAT_14c9b785f & 2) == 0) {
    DAT_14c9b785f = DAT_14c9b785f | 2;
    _DAT_14c9b7800 = L"FGTAOUpsamplePS";
    _DAT_14c9b7818 = FUN_146826540;
    _DAT_14c9b7820 = FUN_146825d77;
    _DAT_14c9b7828 = FUN_146825fd6;
    _DAT_14c9b7830 = FUN_1407e02ea;
    _DAT_14c9b7838 = FUN_146826273;
    _DAT_14c9b7810 = FUN_14713596c;
    _DAT_14c9b7850 = 0xffffffff000000e0;
    _DAT_14c9b7858 = 8;
    DAT_14c9b785c = 0;
    _DAT_14c9b7840 = &LAB_147135996;
    FUN_145f1137a();
    FUN_1407e00cc(&DAT_14c9b77f8);
    return;
  }
  return;
}



// FUNCTION 145f1137a FUN_145f1137a body=123 status=ok
// SIG undefined FUN_145f1137a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1137a(void)

{
  _DAT_14c9c0230 = L"BASE";
  DAT_14c9c025a = 4;
  _DAT_14c9c0238 = FUN_140b35ae4();
  _DAT_14c9c0240 = DAT_14c9b7808;
  _DAT_14c9c0248 = &LAB_14682652b;
  DAT_14c9b7808 = &DAT_14c9c0230;
  DAT_14c9b785d = DAT_14c9b785d + '\x01';
  _DAT_14c9c0250 = 0x100000000;
  if (*(char *)(_DAT_14c9c0238 + 100) != '\0') {
    DAT_14c9b785e = DAT_14c9b785e + '\x01';
  }
  return;
}



// FUNCTION 145f113f6 FUN_145f113f6 body=261 status=ok
// SIG undefined FUN_145f113f6(void)

void FUN_145f113f6(void)

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
              0x110) < DAT_14c9b8ac8) {
    FUN_144b3d300(&DAT_14c9b8ac8);
    if (DAT_14c9b8ac8 == -1) {
      FUN_145f114fc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x662;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8a48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b9096d);
      _Init_thread_footer(&DAT_14c9b8ac8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f114fc FUN_145f114fc body=226 status=ok
// SIG undefined FUN_145f114fc(void)

longlong * FUN_145f114fc(longlong *param_1)

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
  pcVar13 = FUN_1462b9d80;
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



// FUNCTION 145f115e0 FUN_145f115e0 body=132 status=ok
// SIG undefined FUN_145f115e0(void)

undefined1 * FUN_145f115e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GTAOUpsampleTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x663;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14713b696;
}



// FUNCTION 145f11664 FUN_145f11664 body=138 status=ok
// SIG undefined FUN_145f11664(void)

code * FUN_145f11664(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GTAOUpsampleSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000664;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f115e0;
}



// FUNCTION 145f116ee FUN_145f116ee body=138 status=ok
// SIG undefined FUN_145f116ee(void)

code * FUN_145f116ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GTAOUpsamplePixelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000665;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f11664;
}



// FUNCTION 145f11778 FUN_145f11778 body=205 status=ok
// SIG undefined FUN_145f11778(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f11778(void)

{
  if ((DAT_14c9c17ff & 2) == 0) {
    DAT_14c9c17ff = DAT_14c9c17ff | 2;
    _DAT_14c9c17a0 = L"FPostProcessEdgeDetection2CS";
    _DAT_14c9c17b8 = FUN_146826540;
    _DAT_14c9c17c0 = FUN_146825d77;
    _DAT_14c9c17c8 = FUN_146825fd6;
    _DAT_14c9c17d0 = FUN_1407e02ea;
    _DAT_14c9c17d8 = FUN_146826273;
    _DAT_14c9c17b0 = FUN_147144a7c;
    _DAT_14c9c17f0 = 0xffffffff000000e0;
    _DAT_14c9c17f8 = 8;
    DAT_14c9c17fc = 0;
    _DAT_14c9c17e0 = &LAB_147144aa6;
    FUN_145f11846();
    FUN_1407e00cc(&DAT_14c9c1798);
    return;
  }
  return;
}



// FUNCTION 145f11846 FUN_145f11846 body=123 status=ok
// SIG undefined FUN_145f11846(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f11846(void)

{
  _DAT_14c9c4128 = L"BASE";
  DAT_14c9c4152 = 4;
  _DAT_14c9c4130 = FUN_140b35ae4();
  _DAT_14c9c4138 = DAT_14c9c17a8;
  _DAT_14c9c4140 = &LAB_14682652b;
  DAT_14c9c17a8 = &DAT_14c9c4128;
  DAT_14c9c17fd = DAT_14c9c17fd + '\x01';
  _DAT_14c9c4148 = 0x100000000;
  if (*(char *)(_DAT_14c9c4130 + 100) != '\0') {
    DAT_14c9c17fe = DAT_14c9c17fe + '\x01';
  }
  return;
}



// FUNCTION 145f118c2 FUN_145f118c2 body=138 status=ok
// SIG undefined FUN_145f118c2(void)

code * FUN_145f118c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeHighlightSourceIntensityHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xdc000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471477f4;
}



// FUNCTION 145f1194c FUN_145f1194c body=138 status=ok
// SIG undefined FUN_145f1194c(void)

code * FUN_145f1194c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HotspotThreshHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcc000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147147992;
}



// FUNCTION 145f119d6 FUN_145f119d6 body=138 status=ok
// SIG undefined FUN_145f119d6(void)

code * FUN_145f119d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HighlightHueShift";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000cf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471473a4;
}



// FUNCTION 145f11a60 FUN_145f11a60 body=205 status=ok
// SIG undefined FUN_145f11a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f11a60(void)

{
  if ((DAT_14c9c218f & 2) == 0) {
    DAT_14c9c218f = DAT_14c9c218f | 2;
    _DAT_14c9c2130 = L"FPostProcessOutlineTechPS";
    _DAT_14c9c2148 = FUN_146826540;
    _DAT_14c9c2150 = FUN_146825d77;
    _DAT_14c9c2158 = FUN_146825fd6;
    _DAT_14c9c2160 = FUN_1407e02ea;
    _DAT_14c9c2168 = FUN_146826273;
    _DAT_14c9c2140 = FUN_147145294;
    _DAT_14c9c2180 = 0xffffffff000000e0;
    _DAT_14c9c2188 = 8;
    DAT_14c9c218c = 0;
    _DAT_14c9c2170 = &LAB_1471452be;
    FUN_145f11b2e();
    FUN_1407e00cc(&DAT_14c9c2128);
    return;
  }
  return;
}



// FUNCTION 145f11b2e FUN_145f11b2e body=123 status=ok
// SIG undefined FUN_145f11b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f11b2e(void)

{
  _DAT_14c9c4278 = L"BASE";
  DAT_14c9c42a2 = 4;
  _DAT_14c9c4280 = FUN_140b35ae4();
  _DAT_14c9c4288 = DAT_14c9c2138;
  _DAT_14c9c4290 = &LAB_14682652b;
  DAT_14c9c2138 = &DAT_14c9c4278;
  DAT_14c9c218d = DAT_14c9c218d + '\x01';
  _DAT_14c9c4298 = 0x100000000;
  if (*(char *)(_DAT_14c9c4280 + 100) != '\0') {
    DAT_14c9c218e = DAT_14c9c218e + '\x01';
  }
  return;
}



// FUNCTION 145f11baa FUN_145f11baa body=138 status=ok
// SIG undefined FUN_145f11baa(void)

code * FUN_145f11baa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Thickness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147148f28;
}



// FUNCTION 145f11c34 FUN_145f11c34 body=138 status=ok
// SIG undefined FUN_145f11c34(void)

code * FUN_145f11c34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147148e14;
}



// FUNCTION 145f11cbe FUN_145f11cbe body=138 status=ok
// SIG undefined FUN_145f11cbe(void)

code * FUN_145f11cbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CustomDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bc5c4;
}



// FUNCTION 145f11d48 FUN_145f11d48 body=205 status=ok
// SIG undefined FUN_145f11d48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f11d48(void)

{
  if ((DAT_14c9c7a4f & 2) == 0) {
    DAT_14c9c7a4f = DAT_14c9c7a4f | 2;
    _DAT_14c9c79f0 = L"FComputeDistanceFieldAssetWantedMipsCS";
    _DAT_14c9c7a08 = FUN_146826540;
    _DAT_14c9c7a10 = FUN_146825d77;
    _DAT_14c9c7a18 = FUN_146825fd6;
    _DAT_14c9c7a20 = FUN_1407e02ea;
    _DAT_14c9c7a28 = FUN_146826273;
    _DAT_14c9c7a00 = FUN_14714fb8a;
    _DAT_14c9c7a40 = 0xffffffff000000e0;
    _DAT_14c9c7a48 = 8;
    DAT_14c9c7a4c = 0;
    _DAT_14c9c7a30 = &LAB_14714fbb4;
    FUN_145f11e16();
    FUN_1407e00cc(&DAT_14c9c79e8);
    return;
  }
  return;
}



// FUNCTION 145f11e16 FUN_145f11e16 body=123 status=ok
// SIG undefined FUN_145f11e16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f11e16(void)

{
  _DAT_14c9c99d8 = L"BASE";
  DAT_14c9c9a02 = 4;
  _DAT_14c9c99e0 = FUN_140b35ae4();
  _DAT_14c9c99e8 = DAT_14c9c79f8;
  _DAT_14c9c99f0 = &LAB_14682652b;
  DAT_14c9c79f8 = &DAT_14c9c99d8;
  DAT_14c9c7a4d = DAT_14c9c7a4d + '\x01';
  _DAT_14c9c99f8 = 0x100000000;
  if (*(char *)(_DAT_14c9c99e0 + 100) != '\0') {
    DAT_14c9c7a4e = DAT_14c9c7a4e + '\x01';
  }
  return;
}



// FUNCTION 145f11e92 FUN_145f11e92 body=226 status=ok
// SIG undefined FUN_145f11e92(void)

longlong * FUN_145f11e92(longlong *param_1)

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
  pcVar13 = FUN_1462c14fc;
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



// FUNCTION 145f11f76 FUN_145f11f76 body=138 status=ok
// SIG undefined FUN_145f11f76(void)

code * FUN_145f11f76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Mip1WorldTranslatedCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715440c;
}



// FUNCTION 145f12000 FUN_145f12000 body=138 status=ok
// SIG undefined FUN_145f12000(void)

code * FUN_145f12000(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Mip2WorldExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147154382;
}



// FUNCTION 145f1208a FUN_145f1208a body=138 status=ok
// SIG undefined FUN_145f1208a(void)

code * FUN_145f1208a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreViewTranslationHigh";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f12000;
}



// FUNCTION 145f12114 FUN_145f12114 body=292 status=ok
// SIG undefined FUN_145f12114(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f12114(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca828) {
    FUN_144b3d300(&DAT_14c9ca828);
    if (DAT_14c9ca828 == -1) {
      FUN_145f12382();
      FUN_145f12238();
      FUN_140db5666(&DAT_14c9ca780,0,&DAT_14c9ca718,L"FDownsampleSceneColorCS",
                    L"/Engine/Private/DistortFiltering.usf",L"DownsampleColorCS",5,1,FUN_14715801c,
                    FUN_147157fbc,&LAB_147157fa4,&LAB_147157fa0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9cdda8);
      _DAT_14c9ca780 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bf7eb8);
      _Init_thread_footer(&DAT_14c9ca828);
    }
  }
  return &DAT_14c9ca780;
}



// FUNCTION 145f12238 FUN_145f12238 body=205 status=ok
// SIG undefined FUN_145f12238(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f12238(void)

{
  if ((DAT_14c9ca77f & 2) == 0) {
    DAT_14c9ca77f = DAT_14c9ca77f | 2;
    _DAT_14c9ca720 = L"FDownsampleSceneColorCS";
    _DAT_14c9ca738 = FUN_146826540;
    _DAT_14c9ca740 = FUN_146825d77;
    _DAT_14c9ca748 = FUN_146825fd6;
    _DAT_14c9ca750 = FUN_1407e02ea;
    _DAT_14c9ca758 = FUN_146826273;
    _DAT_14c9ca730 = FUN_147157f72;
    _DAT_14c9ca770 = 0xffffffff000000e0;
    _DAT_14c9ca778 = 8;
    DAT_14c9ca77c = 0;
    _DAT_14c9ca760 = &LAB_147157f9c;
    FUN_145f12306();
    FUN_1407e00cc(&DAT_14c9ca718);
    return;
  }
  return;
}



// FUNCTION 145f12306 FUN_145f12306 body=123 status=ok
// SIG undefined FUN_145f12306(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f12306(void)

{
  _DAT_14c9ceff8 = L"BASE";
  DAT_14c9cf022 = 4;
  _DAT_14c9cf000 = FUN_140b35ae4();
  _DAT_14c9cf008 = DAT_14c9ca728;
  _DAT_14c9cf010 = &LAB_14682652b;
  DAT_14c9ca728 = &DAT_14c9ceff8;
  DAT_14c9ca77d = DAT_14c9ca77d + '\x01';
  _DAT_14c9cf018 = 0x100000000;
  if (*(char *)(_DAT_14c9cf000 + 100) != '\0') {
    DAT_14c9ca77e = DAT_14c9ca77e + '\x01';
  }
  return;
}



// FUNCTION 145f12382 FUN_145f12382 body=261 status=ok
// SIG undefined FUN_145f12382(void)

void FUN_145f12382(void)

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
              0x110) < DAT_14c9cde28) {
    FUN_144b3d300(&DAT_14c9cde28);
    if (DAT_14c9cde28 == -1) {
      FUN_145f12488(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x166;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cdda8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1c977);
      _Init_thread_footer(&DAT_14c9cde28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f12488 FUN_145f12488 body=226 status=ok
// SIG undefined FUN_145f12488(void)

longlong * FUN_145f12488(longlong *param_1)

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
  pcVar13 = FUN_1462c2cca;
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



// FUNCTION 145f1256c FUN_145f1256c body=132 status=ok
// SIG undefined FUN_145f1256c(void)

undefined1 * FUN_145f1256c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcMipIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x167;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14715cf7e;
}



// FUNCTION 145f125f0 FUN_145f125f0 body=138 status=ok
// SIG undefined FUN_145f125f0(void)

code * FUN_145f125f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000016b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1267a;
}



// FUNCTION 145f1267a FUN_145f1267a body=138 status=ok
// SIG undefined FUN_145f1267a(void)

code * FUN_145f1267a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000016a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715cef4;
}



// FUNCTION 145f12704 FUN_145f12704 body=205 status=ok
// SIG undefined FUN_145f12704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f12704(void)

{
  if ((DAT_14c9cbb9f & 2) == 0) {
    DAT_14c9cbb9f = DAT_14c9cbb9f | 2;
    _DAT_14c9cbb40 = L"FComposeHeightfieldsIntoPagesCS";
    _DAT_14c9cbb58 = FUN_146826540;
    _DAT_14c9cbb60 = FUN_146825d77;
    _DAT_14c9cbb68 = FUN_146825fd6;
    _DAT_14c9cbb70 = FUN_1407e02ea;
    _DAT_14c9cbb78 = FUN_146826273;
    _DAT_14c9cbb50 = FUN_14715a8d2;
    _DAT_14c9cbb90 = 0xffffffff000000e0;
    _DAT_14c9cbb98 = 8;
    DAT_14c9cbb9c = 0;
    _DAT_14c9cbb80 = &LAB_14715a8fc;
    FUN_145f127d2();
    FUN_1407e00cc(&DAT_14c9cbb38);
    return;
  }
  return;
}



// FUNCTION 145f127d2 FUN_145f127d2 body=123 status=ok
// SIG undefined FUN_145f127d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f127d2(void)

{
  _DAT_14c9cf460 = L"BASE";
  DAT_14c9cf48a = 4;
  _DAT_14c9cf468 = FUN_140b35ae4();
  _DAT_14c9cf470 = DAT_14c9cbb48;
  _DAT_14c9cf478 = &LAB_14682652b;
  DAT_14c9cbb48 = &DAT_14c9cf460;
  DAT_14c9cbb9d = DAT_14c9cbb9d + '\x01';
  _DAT_14c9cf480 = 0x100000000;
  if (*(char *)(_DAT_14c9cf468 + 100) != '\0') {
    DAT_14c9cbb9e = DAT_14c9cbb9e + '\x01';
  }
  return;
}



// FUNCTION 145f1284e FUN_145f1284e body=138 status=ok
// SIG undefined FUN_145f1284e(void)

code * FUN_145f1284e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisibilityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000096;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471617ce;
}



// FUNCTION 145f128d8 FUN_145f128d8 body=138 status=ok
// SIG undefined FUN_145f128d8(void)

code * FUN_145f128d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComposeIndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000087;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147161ed0;
}



// FUNCTION 145f12962 FUN_145f12962 body=138 status=ok
// SIG undefined FUN_145f12962(void)

code * FUN_145f12962(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComposeTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f128d8;
}



// FUNCTION 145f129ec FUN_145f129ec body=205 status=ok
// SIG undefined FUN_145f129ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f129ec(void)

{
  if ((DAT_14c9cbcc7 & 2) == 0) {
    DAT_14c9cbcc7 = DAT_14c9cbcc7 | 2;
    _DAT_14c9cbc68 = L"FCompositeHeightfieldsIntoObjectGridPagesCS";
    _DAT_14c9cbc80 = FUN_146826540;
    _DAT_14c9cbc88 = FUN_146825d77;
    _DAT_14c9cbc90 = FUN_146825fd6;
    _DAT_14c9cbc98 = FUN_1407e02ea;
    _DAT_14c9cbca0 = FUN_146826273;
    _DAT_14c9cbc78 = FUN_14715a998;
    _DAT_14c9cbcb8 = 0xffffffff000000e0;
    _DAT_14c9cbcc0 = 8;
    DAT_14c9cbcc4 = 0;
    _DAT_14c9cbca8 = &LAB_14715a9c2;
    FUN_145f12aba();
    FUN_1407e00cc(&DAT_14c9cbc60);
    return;
  }
  return;
}



// FUNCTION 145f12aba FUN_145f12aba body=123 status=ok
// SIG undefined FUN_145f12aba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f12aba(void)

{
  _DAT_14c9cf490 = L"BASE";
  DAT_14c9cf4ba = 4;
  _DAT_14c9cf498 = FUN_140b35ae4();
  _DAT_14c9cf4a0 = DAT_14c9cbc70;
  _DAT_14c9cf4a8 = &LAB_14682652b;
  DAT_14c9cbc70 = &DAT_14c9cf490;
  DAT_14c9cbcc5 = DAT_14c9cbcc5 + '\x01';
  _DAT_14c9cf4b0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf498 + 100) != '\0') {
    DAT_14c9cbcc6 = DAT_14c9cbcc6 + '\x01';
  }
  return;
}



// FUNCTION 145f12b36 FUN_145f12b36 body=138 status=ok
// SIG undefined FUN_145f12b36(void)

code * FUN_145f12b36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComposeIndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147162912;
}



// FUNCTION 145f12bc0 FUN_145f12bc0 body=138 status=ok
// SIG undefined FUN_145f12bc0(void)

code * FUN_145f12bc0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147162774;
}



// FUNCTION 145f12c4a FUN_145f12c4a body=138 status=ok
// SIG undefined FUN_145f12c4a(void)

code * FUN_145f12c4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightfieldSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000000d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716229a;
}



// FUNCTION 145f12cd4 FUN_145f12cd4 body=205 status=ok
// SIG undefined FUN_145f12cd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f12cd4(void)

{
  if ((DAT_14c9cc2b7 & 2) == 0) {
    DAT_14c9cc2b7 = DAT_14c9cc2b7 | 2;
    _DAT_14c9cc258 = L"FBuildGridTilesCS";
    _DAT_14c9cc270 = FUN_146826540;
    _DAT_14c9cc278 = FUN_146825d77;
    _DAT_14c9cc280 = FUN_146825fd6;
    _DAT_14c9cc288 = FUN_1407e02ea;
    _DAT_14c9cc290 = FUN_146826273;
    _DAT_14c9cc268 = FUN_14715abea;
    _DAT_14c9cc2a8 = 0xffffffff000000e0;
    _DAT_14c9cc2b0 = 8;
    DAT_14c9cc2b4 = 0;
    _DAT_14c9cc298 = &LAB_14715ac14;
    FUN_145f12da2();
    FUN_1407e00cc(&DAT_14c9cc250);
    return;
  }
  return;
}



// FUNCTION 145f12da2 FUN_145f12da2 body=123 status=ok
// SIG undefined FUN_145f12da2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f12da2(void)

{
  _DAT_14c9cf520 = L"BASE";
  DAT_14c9cf54a = 4;
  _DAT_14c9cf528 = FUN_140b35ae4();
  _DAT_14c9cf530 = DAT_14c9cc260;
  _DAT_14c9cf538 = &LAB_14682652b;
  DAT_14c9cc260 = &DAT_14c9cf520;
  DAT_14c9cc2b5 = DAT_14c9cc2b5 + '\x01';
  _DAT_14c9cf540 = 0x100000000;
  if (*(char *)(_DAT_14c9cf528 + 100) != '\0') {
    DAT_14c9cc2b6 = DAT_14c9cc2b6 + '\x01';
  }
  return;
}



// FUNCTION 145f12e1e FUN_145f12e1e body=226 status=ok
// SIG undefined FUN_145f12e1e(void)

longlong * FUN_145f12e1e(longlong *param_1)

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
  pcVar13 = FUN_1462c43ca;
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



// FUNCTION 145f12f02 FUN_145f12f02 body=138 status=ok
// SIG undefined FUN_145f12f02(void)

code * FUN_145f12f02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumUpdateBounds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000625;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147162f8a;
}



// FUNCTION 145f12f8c FUN_145f12f8c body=138 status=ok
// SIG undefined FUN_145f12f8c(void)

code * FUN_145f12f8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCullGridIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000623;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163014;
}



// FUNCTION 145f13016 FUN_145f13016 body=138 status=ok
// SIG undefined FUN_145f13016(void)

code * FUN_145f13016(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InfluenceRadiusSq";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000626;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f12f02;
}



// FUNCTION 145f130a0 FUN_145f130a0 body=205 status=ok
// SIG undefined FUN_145f130a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f130a0(void)

{
  if ((DAT_14c9ccbf7 & 2) == 0) {
    DAT_14c9ccbf7 = DAT_14c9ccbf7 | 2;
    _DAT_14c9ccb98 = L"FPropagateMipDistanceCS";
    _DAT_14c9ccbb0 = FUN_146826540;
    _DAT_14c9ccbb8 = FUN_146825d77;
    _DAT_14c9ccbc0 = FUN_146825fd6;
    _DAT_14c9ccbc8 = FUN_1407e02ea;
    _DAT_14c9ccbd0 = FUN_146826273;
    _DAT_14c9ccba8 = FUN_14715b20e;
    _DAT_14c9ccbe8 = 0xffffffff000000e0;
    _DAT_14c9ccbf0 = 8;
    DAT_14c9ccbf4 = 0;
    _DAT_14c9ccbd8 = &LAB_14715b238;
    FUN_145f1316e();
    FUN_1407e00cc(&DAT_14c9ccb90);
    return;
  }
  return;
}



// FUNCTION 145f1316e FUN_145f1316e body=123 status=ok
// SIG undefined FUN_145f1316e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1316e(void)

{
  _DAT_14c9cf6a0 = L"BASE";
  DAT_14c9cf6ca = 4;
  _DAT_14c9cf6a8 = FUN_140b35ae4();
  _DAT_14c9cf6b0 = DAT_14c9ccba0;
  _DAT_14c9cf6b8 = &LAB_14682652b;
  DAT_14c9ccba0 = &DAT_14c9cf6a0;
  DAT_14c9ccbf5 = DAT_14c9ccbf5 + '\x01';
  _DAT_14c9cf6c0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf6a8 + 100) != '\0') {
    DAT_14c9ccbf6 = DAT_14c9ccbf6 + '\x01';
  }
  return;
}



// FUNCTION 145f131ea FUN_145f131ea body=138 status=ok
// SIG undefined FUN_145f131ea(void)

code * FUN_145f131ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldInvPageAtlasSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000007ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716597e;
}



// FUNCTION 145f13274 FUN_145f13274 body=138 status=ok
// SIG undefined FUN_145f13274(void)

code * FUN_145f13274(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GbxGIMesh_PrevMipTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000007b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716552e;
}



// FUNCTION 145f132fe FUN_145f132fe body=138 status=ok
// SIG undefined FUN_145f132fe(void)

code * FUN_145f132fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapMipResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000007ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471658f4;
}



// FUNCTION 145f13388 FUN_145f13388 body=292 status=ok
// SIG undefined FUN_145f13388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f13388(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ccef0) {
    FUN_144b3d300(&DAT_14c9ccef0);
    if (DAT_14c9ccef0 == -1) {
      FUN_145f135f6();
      FUN_145f134ac();
      FUN_140db5666(&DAT_14c9cce48,0,&DAT_14c9ccde0,L"FGlobalDistanceFieldPageStatsCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldDebug.usf",
                    L"GlobalDistanceFieldPageStatsCS",5,1,FUN_14715b42c,FUN_14715b3cc,&LAB_1462c2068
                    ,&LAB_14715b3c8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ced98);
      _DAT_14c9cce48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03e94);
      _Init_thread_footer(&DAT_14c9ccef0);
    }
  }
  return &DAT_14c9cce48;
}



// FUNCTION 145f134ac FUN_145f134ac body=205 status=ok
// SIG undefined FUN_145f134ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f134ac(void)

{
  if ((DAT_14c9cce47 & 2) == 0) {
    DAT_14c9cce47 = DAT_14c9cce47 | 2;
    _DAT_14c9ccde8 = L"FGlobalDistanceFieldPageStatsCS";
    _DAT_14c9cce00 = FUN_146826540;
    _DAT_14c9cce08 = FUN_146825d77;
    _DAT_14c9cce10 = FUN_146825fd6;
    _DAT_14c9cce18 = FUN_1407e02ea;
    _DAT_14c9cce20 = FUN_146826273;
    _DAT_14c9ccdf8 = FUN_14715b39a;
    _DAT_14c9cce38 = 0xffffffff000000e0;
    _DAT_14c9cce40 = 8;
    DAT_14c9cce44 = 0;
    _DAT_14c9cce28 = &LAB_14715b3c4;
    FUN_145f1357a();
    FUN_1407e00cc(&DAT_14c9ccde0);
    return;
  }
  return;
}



// FUNCTION 145f1357a FUN_145f1357a body=123 status=ok
// SIG undefined FUN_145f1357a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1357a(void)

{
  _DAT_14c9cf700 = L"BASE";
  DAT_14c9cf72a = 4;
  _DAT_14c9cf708 = FUN_140b35ae4();
  _DAT_14c9cf710 = DAT_14c9ccdf0;
  _DAT_14c9cf718 = &LAB_14682652b;
  DAT_14c9ccdf0 = &DAT_14c9cf700;
  DAT_14c9cce45 = DAT_14c9cce45 + '\x01';
  _DAT_14c9cf720 = 0x100000000;
  if (*(char *)(_DAT_14c9cf708 + 100) != '\0') {
    DAT_14c9cce46 = DAT_14c9cce46 + '\x01';
  }
  return;
}



// FUNCTION 145f135f6 FUN_145f135f6 body=261 status=ok
// SIG undefined FUN_145f135f6(void)

void FUN_145f135f6(void)

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
              0x110) < DAT_14c9cee18) {
    FUN_144b3d300(&DAT_14c9cee18);
    if (DAT_14c9cee18 == -1) {
      FUN_145f136fc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x7ef;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ced98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e2ac);
      _Init_thread_footer(&DAT_14c9cee18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f136fc FUN_145f136fc body=226 status=ok
// SIG undefined FUN_145f136fc(void)

longlong * FUN_145f136fc(longlong *param_1)

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
  pcVar13 = FUN_1462c50bc;
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



// FUNCTION 145f137e0 FUN_145f137e0 body=132 status=ok
// SIG undefined FUN_145f137e0(void)

undefined1 * FUN_145f137e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageStatsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147165d42;
}



// FUNCTION 145f13864 FUN_145f13864 body=138 status=ok
// SIG undefined FUN_145f13864(void)

code * FUN_145f13864(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableCombinedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000007f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f137e0;
}



// FUNCTION 145f138ee FUN_145f138ee body=138 status=ok
// SIG undefined FUN_145f138ee(void)

code * FUN_145f138ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000007f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147165c2e;
}



// FUNCTION 145f13978 FUN_145f13978 body=292 status=ok
// SIG undefined FUN_145f13978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f13978(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6458) {
    FUN_144b3d300(&DAT_14c9d6458);
    if (DAT_14c9d6458 == -1) {
      FUN_145f13be6();
      FUN_145f13a9c();
      FUN_140db5666(&DAT_14c9d63b0,0,&DAT_14c9d6348,L"FHairStrandsTileDebugPrintPassCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityTile.usf",L"MainCS",5,1,
                    FUN_14717ebaa,FUN_14717eb4a,FUN_1462ca39c,&LAB_14717eb46,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da020);
      _DAT_14c9d63b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60156);
      _Init_thread_footer(&DAT_14c9d6458);
    }
  }
  return &DAT_14c9d63b0;
}



// FUNCTION 145f13a9c FUN_145f13a9c body=205 status=ok
// SIG undefined FUN_145f13a9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f13a9c(void)

{
  if ((DAT_14c9d63af & 2) == 0) {
    DAT_14c9d63af = DAT_14c9d63af | 2;
    _DAT_14c9d6350 = L"FHairStrandsTileDebugPrintPassCS";
    _DAT_14c9d6368 = FUN_146826540;
    _DAT_14c9d6370 = FUN_146825d77;
    _DAT_14c9d6378 = FUN_146825fd6;
    _DAT_14c9d6380 = FUN_1407e02ea;
    _DAT_14c9d6388 = FUN_146826273;
    _DAT_14c9d6360 = FUN_14717eb18;
    _DAT_14c9d63a0 = 0xffffffff000000e0;
    _DAT_14c9d63a8 = 8;
    DAT_14c9d63ac = 0;
    _DAT_14c9d6390 = &LAB_14717eb42;
    FUN_145f13b6a();
    FUN_1407e00cc(&DAT_14c9d6348);
    return;
  }
  return;
}



// FUNCTION 145f13b6a FUN_145f13b6a body=123 status=ok
// SIG undefined FUN_145f13b6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f13b6a(void)

{
  _DAT_14c9db8b8 = L"BASE";
  DAT_14c9db8e2 = 4;
  _DAT_14c9db8c0 = FUN_140b35ae4();
  _DAT_14c9db8c8 = DAT_14c9d6358;
  _DAT_14c9db8d0 = &LAB_14682652b;
  DAT_14c9d6358 = &DAT_14c9db8b8;
  DAT_14c9d63ad = DAT_14c9d63ad + '\x01';
  _DAT_14c9db8d8 = 0x100000000;
  if (*(char *)(_DAT_14c9db8c0 + 100) != '\0') {
    DAT_14c9d63ae = DAT_14c9d63ae + '\x01';
  }
  return;
}



// FUNCTION 145f13be6 FUN_145f13be6 body=261 status=ok
// SIG undefined FUN_145f13be6(void)

void FUN_145f13be6(void)

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
              0x110) < DAT_14c9da0a0) {
    FUN_144b3d300(&DAT_14c9da0a0);
    if (DAT_14c9da0a0 == -1) {
      FUN_145f13cec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x123;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da020,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c6fe07);
      _Init_thread_footer(&DAT_14c9da0a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f13cec FUN_145f13cec body=226 status=ok
// SIG undefined FUN_145f13cec(void)

longlong * FUN_145f13cec(longlong *param_1)

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
  pcVar13 = FUN_1462cac40;
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



// FUNCTION 145f13dd0 FUN_145f13dd0 body=132 status=ok
// SIG undefined FUN_145f13dd0(void)

undefined1 * FUN_145f13dd0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x124;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147187fa0;
}



// FUNCTION 145f13e54 FUN_145f13e54 body=138 status=ok
// SIG undefined FUN_145f13e54(void)

code * FUN_145f13e54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000126;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f13ede;
}



// FUNCTION 145f13ede FUN_145f13ede body=138 status=ok
// SIG undefined FUN_145f13ede(void)

code * FUN_145f13ede(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000125;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f13dd0;
}



// FUNCTION 145f13f68 FUN_145f13f68 body=292 status=ok
// SIG undefined FUN_145f13f68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f13f68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9b90) {
    FUN_144b3d300(&DAT_14c9d9b90);
    if (DAT_14c9d9b90 == -1) {
      FUN_145f141d6();
      FUN_145f1408c();
      FUN_140db5666(&DAT_14c9d9ae8,0,&DAT_14c9d9a80,L"FHairStrandsEmitSelectionPS",
                    L"/Engine/Private/HairStrands/HairStrandsHitProxy.usf",L"EmitPS",3,1,
                    FUN_147185926,FUN_1471858c6,&LAB_1462ca4c2,&LAB_1471858c2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9db360);
      _DAT_14c9d9ae8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661ed);
      _Init_thread_footer(&DAT_14c9d9b90);
    }
  }
  return &DAT_14c9d9ae8;
}



// FUNCTION 145f1408c FUN_145f1408c body=205 status=ok
// SIG undefined FUN_145f1408c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1408c(void)

{
  if ((DAT_14c9d9ae7 & 2) == 0) {
    DAT_14c9d9ae7 = DAT_14c9d9ae7 | 2;
    _DAT_14c9d9a88 = L"FHairStrandsEmitSelectionPS";
    _DAT_14c9d9aa0 = FUN_146826540;
    _DAT_14c9d9aa8 = FUN_146825d77;
    _DAT_14c9d9ab0 = FUN_146825fd6;
    _DAT_14c9d9ab8 = FUN_1407e02ea;
    _DAT_14c9d9ac0 = FUN_146826273;
    _DAT_14c9d9a98 = FUN_147185894;
    _DAT_14c9d9ad8 = 0xffffffff000000e0;
    _DAT_14c9d9ae0 = 8;
    DAT_14c9d9ae4 = 0;
    _DAT_14c9d9ac8 = &LAB_1471858be;
    FUN_145f1415a();
    FUN_1407e00cc(&DAT_14c9d9a80);
    return;
  }
  return;
}



// FUNCTION 145f1415a FUN_145f1415a body=123 status=ok
// SIG undefined FUN_145f1415a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1415a(void)

{
  _DAT_14c9dc3c8 = L"BASE";
  DAT_14c9dc3f2 = 4;
  _DAT_14c9dc3d0 = FUN_140b35ae4();
  _DAT_14c9dc3d8 = DAT_14c9d9a90;
  _DAT_14c9dc3e0 = &LAB_14682652b;
  DAT_14c9d9a90 = &DAT_14c9dc3c8;
  DAT_14c9d9ae5 = DAT_14c9d9ae5 + '\x01';
  _DAT_14c9dc3e8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc3d0 + 100) != '\0') {
    DAT_14c9d9ae6 = DAT_14c9d9ae6 + '\x01';
  }
  return;
}



// FUNCTION 145f141d6 FUN_145f141d6 body=261 status=ok
// SIG undefined FUN_145f141d6(void)

void FUN_145f141d6(void)

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
              0x110) < DAT_14c9db3e0) {
    FUN_144b3d300(&DAT_14c9db3e0);
    if (DAT_14c9db3e0 == -1) {
      FUN_145f142dc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0xfee;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db360,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71dc9);
      _Init_thread_footer(&DAT_14c9db3e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f142dc FUN_145f142dc body=226 status=ok
// SIG undefined FUN_145f142dc(void)

longlong * FUN_145f142dc(longlong *param_1)

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
  pcVar13 = FUN_1462cdd48;
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



// FUNCTION 145f143c0 FUN_145f143c0 body=132 status=ok
// SIG undefined FUN_145f143c0(void)

undefined1 * FUN_145f143c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CoverageThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfef;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14718fc5a;
}



// FUNCTION 145f14444 FUN_145f14444 body=138 status=ok
// SIG undefined FUN_145f14444(void)

code * FUN_145f14444(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairOnlyDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000ff5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cddd0;
}



// FUNCTION 145f144ce FUN_145f144ce body=138 status=ok
// SIG undefined FUN_145f144ce(void)

code * FUN_145f144ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SelectionMaterialIdBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000ff7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718fa32;
}



// FUNCTION 145f14558 FUN_145f14558 body=292 status=ok
// SIG undefined FUN_145f14558(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f14558(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3000) {
    FUN_144b3d300(&DAT_14c9e3000);
    if (DAT_14c9e3000 == -1) {
      FUN_145f147c6();
      FUN_145f1467c();
      FUN_140db5666(&DAT_14c9e2f58,0,&DAT_14c9e2ef0,L"FGenerateRasterTiles",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"GenerateRasterTiles",5,2,FUN_1471b69e0,FUN_1471b6980,&LAB_1471b6944,
                    &LAB_1471b6940,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5e48);
      _DAT_14c9e2f58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad88c);
      _Init_thread_footer(&DAT_14c9e3000);
    }
  }
  return &DAT_14c9e2f58;
}



// FUNCTION 145f1467c FUN_145f1467c body=205 status=ok
// SIG undefined FUN_145f1467c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1467c(void)

{
  if ((DAT_14c9e2f57 & 2) == 0) {
    DAT_14c9e2f57 = DAT_14c9e2f57 | 2;
    _DAT_14c9e2ef8 = L"FGenerateRasterTiles";
    _DAT_14c9e2f10 = FUN_146826540;
    _DAT_14c9e2f18 = FUN_146825d77;
    _DAT_14c9e2f20 = FUN_146825fd6;
    _DAT_14c9e2f28 = FUN_1407e02ea;
    _DAT_14c9e2f30 = FUN_146826273;
    _DAT_14c9e2f08 = FUN_1471b6912;
    _DAT_14c9e2f48 = 0xffffffff000000e0;
    _DAT_14c9e2f50 = 8;
    DAT_14c9e2f54 = 0;
    _DAT_14c9e2f38 = &LAB_1471b693c;
    FUN_145f1474a();
    FUN_1407e00cc(&DAT_14c9e2ef0);
    return;
  }
  return;
}



// FUNCTION 145f1474a FUN_145f1474a body=123 status=ok
// SIG undefined FUN_145f1474a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1474a(void)

{
  _DAT_14c9e6d40 = L"BASE";
  DAT_14c9e6d6a = 4;
  _DAT_14c9e6d48 = FUN_140b35ae4();
  _DAT_14c9e6d50 = DAT_14c9e2f00;
  _DAT_14c9e6d58 = &LAB_14682652b;
  DAT_14c9e2f00 = &DAT_14c9e6d40;
  DAT_14c9e2f55 = DAT_14c9e2f55 + '\x01';
  _DAT_14c9e6d60 = 0x100000000;
  if (*(char *)(_DAT_14c9e6d48 + 100) != '\0') {
    DAT_14c9e2f56 = DAT_14c9e2f56 + '\x01';
  }
  return;
}



// FUNCTION 145f147c6 FUN_145f147c6 body=261 status=ok
// SIG undefined FUN_145f147c6(void)

void FUN_145f147c6(void)

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
              0x110) < DAT_14c9e5ec8) {
    FUN_144b3d300(&DAT_14c9e5ec8);
    if (DAT_14c9e5ec8 == -1) {
      FUN_145f148cc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x2fb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5e48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf5e);
      _Init_thread_footer(&DAT_14c9e5ec8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f148cc FUN_145f148cc body=226 status=ok
// SIG undefined FUN_145f148cc(void)

longlong * FUN_145f148cc(longlong *param_1)

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
  pcVar13 = FUN_1462d1ffe;
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



// FUNCTION 145f149b0 FUN_145f149b0 body=132 status=ok
// SIG undefined FUN_145f149b0(void)

undefined1 * FUN_145f149b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471c2370;
}



// FUNCTION 145f14a34 FUN_145f14a34 body=138 status=ok
// SIG undefined FUN_145f14a34(void)

code * FUN_145f14a34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FTopLevelGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000304;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c22e6;
}



// FUNCTION 145f14abe FUN_145f14abe body=138 status=ok
// SIG undefined FUN_145f14abe(void)

code * FUN_145f14abe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRasterTileAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000306;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f14a34;
}



// FUNCTION 145f14b48 FUN_145f14b48 body=292 status=ok
// SIG undefined FUN_145f14b48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f14b48(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3d80) {
    FUN_144b3d300(&DAT_14c9e3d80);
    if (DAT_14c9e3d80 == -1) {
      FUN_145f14db6();
      FUN_145f14c6c();
      FUN_140db5666(&DAT_14c9e3cd8,0,&DAT_14c9e3c70,L"FIESAtlasDebugInfoCS",
                    L"/Engine/Private/IESAtlas.usf",L"MainCS",5,1,FUN_1471ba138,FUN_1471ba0d8,
                    &LAB_1462d1270,&LAB_1471ba0d4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6420)
      ;
      _DAT_14c9e3cd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbd4c3);
      _Init_thread_footer(&DAT_14c9e3d80);
    }
  }
  return &DAT_14c9e3cd8;
}



// FUNCTION 145f14c6c FUN_145f14c6c body=205 status=ok
// SIG undefined FUN_145f14c6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f14c6c(void)

{
  if ((DAT_14c9e3cd7 & 2) == 0) {
    DAT_14c9e3cd7 = DAT_14c9e3cd7 | 2;
    _DAT_14c9e3c78 = L"FIESAtlasDebugInfoCS";
    _DAT_14c9e3c90 = FUN_146826540;
    _DAT_14c9e3c98 = FUN_146825d77;
    _DAT_14c9e3ca0 = FUN_146825fd6;
    _DAT_14c9e3ca8 = FUN_1407e02ea;
    _DAT_14c9e3cb0 = FUN_146826273;
    _DAT_14c9e3c88 = FUN_1471ba0a6;
    _DAT_14c9e3cc8 = 0xffffffff000000e0;
    _DAT_14c9e3cd0 = 8;
    DAT_14c9e3cd4 = 0;
    _DAT_14c9e3cb8 = &LAB_1471ba0d0;
    FUN_145f14d3a();
    FUN_1407e00cc(&DAT_14c9e3c70);
    return;
  }
  return;
}



// FUNCTION 145f14d3a FUN_145f14d3a body=123 status=ok
// SIG undefined FUN_145f14d3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f14d3a(void)

{
  _DAT_14c9e6f50 = L"BASE";
  DAT_14c9e6f7a = 4;
  _DAT_14c9e6f58 = FUN_140b35ae4();
  _DAT_14c9e6f60 = DAT_14c9e3c80;
  _DAT_14c9e6f68 = &LAB_14682652b;
  DAT_14c9e3c80 = &DAT_14c9e6f50;
  DAT_14c9e3cd5 = DAT_14c9e3cd5 + '\x01';
  _DAT_14c9e6f70 = 0x100000000;
  if (*(char *)(_DAT_14c9e6f58 + 100) != '\0') {
    DAT_14c9e3cd6 = DAT_14c9e3cd6 + '\x01';
  }
  return;
}



// FUNCTION 145f14db6 FUN_145f14db6 body=261 status=ok
// SIG undefined FUN_145f14db6(void)

void FUN_145f14db6(void)

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
              0x110) < DAT_14c9e64a0) {
    FUN_144b3d300(&DAT_14c9e64a0);
    if (DAT_14c9e64a0 == -1) {
      FUN_145f14ebc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x6c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6420,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccfe2);
      _Init_thread_footer(&DAT_14c9e64a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f14ebc FUN_145f14ebc body=226 status=ok
// SIG undefined FUN_145f14ebc(void)

longlong * FUN_145f14ebc(longlong *param_1)

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
  pcVar13 = FUN_1462d2b5e;
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



// FUNCTION 145f14fa0 FUN_145f14fa0 body=132 status=ok
// SIG undefined FUN_145f14fa0(void)

undefined1 * FUN_145f14fa0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471c494c;
}



// FUNCTION 145f15024 FUN_145f15024 body=138 status=ok
// SIG undefined FUN_145f15024(void)

code * FUN_145f15024(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ValidSlotCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c4838;
}



// FUNCTION 145f150ae FUN_145f150ae body=138 status=ok
// SIG undefined FUN_145f150ae(void)

code * FUN_145f150ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UsedSliceCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f15024;
}



// FUNCTION 145f15138 FUN_145f15138 body=205 status=ok
// SIG undefined FUN_145f15138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15138(void)

{
  if ((DAT_14c9e466f & 2) == 0) {
    DAT_14c9e466f = DAT_14c9e466f | 2;
    _DAT_14c9e4610 = L"FDiffuseIndirectCompositePS";
    _DAT_14c9e4628 = FUN_146826540;
    _DAT_14c9e4630 = FUN_146825d77;
    _DAT_14c9e4638 = FUN_146825fd6;
    _DAT_14c9e4640 = FUN_1407e02ea;
    _DAT_14c9e4648 = FUN_146826273;
    _DAT_14c9e4620 = FUN_1471bdeb8;
    _DAT_14c9e4660 = 0xffffffff000000e0;
    _DAT_14c9e4668 = 8;
    DAT_14c9e466c = 0;
    _DAT_14c9e4650 = &LAB_1471bdee2;
    FUN_145f15206();
    FUN_1407e00cc(&DAT_14c9e4608);
    return;
  }
  return;
}



// FUNCTION 145f15206 FUN_145f15206 body=123 status=ok
// SIG undefined FUN_145f15206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15206(void)

{
  _DAT_14c9e7088 = L"BASE";
  DAT_14c9e70b2 = 4;
  _DAT_14c9e7090 = FUN_140b35ae4();
  _DAT_14c9e7098 = DAT_14c9e4618;
  _DAT_14c9e70a0 = &LAB_14682652b;
  DAT_14c9e4618 = &DAT_14c9e7088;
  DAT_14c9e466d = DAT_14c9e466d + '\x01';
  _DAT_14c9e70a8 = 0x100000000;
  if (*(char *)(_DAT_14c9e7090 + 100) != '\0') {
    DAT_14c9e466e = DAT_14c9e466e + '\x01';
  }
  return;
}



// FUNCTION 145f15282 FUN_145f15282 body=138 status=ok
// SIG undefined FUN_145f15282(void)

code * FUN_145f15282(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiffuseIndirect_Lumen_3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d3520;
}



// FUNCTION 145f1530c FUN_145f1530c body=138 status=ok
// SIG undefined FUN_145f1530c(void)

code * FUN_145f1530c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa8000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c5d10;
}



// FUNCTION 145f15396 FUN_145f15396 body=138 status=ok
// SIG undefined FUN_145f15396(void)

code * FUN_145f15396(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x250000000d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c58c0;
}



// FUNCTION 145f15420 FUN_145f15420 body=205 status=ok
// SIG undefined FUN_145f15420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15420(void)

{
  if ((DAT_14c9e82af & 2) == 0) {
    DAT_14c9e82af = DAT_14c9e82af | 2;
    _DAT_14c9e8250 = L"FLightGridInjectionCS";
    _DAT_14c9e8268 = FUN_146826540;
    _DAT_14c9e8270 = FUN_146825d77;
    _DAT_14c9e8278 = FUN_146825fd6;
    _DAT_14c9e8280 = FUN_1407e02ea;
    _DAT_14c9e8288 = FUN_146826273;
    _DAT_14c9e8260 = FUN_1471d0cac;
    _DAT_14c9e82a0 = 0xffffffff000000e0;
    _DAT_14c9e82a8 = 8;
    DAT_14c9e82ac = 0;
    _DAT_14c9e8290 = &LAB_1471d0cd6;
    FUN_145f154ee();
    FUN_1407e00cc(&DAT_14c9e8248);
    return;
  }
  return;
}



// FUNCTION 145f154ee FUN_145f154ee body=123 status=ok
// SIG undefined FUN_145f154ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f154ee(void)

{
  _DAT_14c9eb280 = L"BASE";
  DAT_14c9eb2aa = 4;
  _DAT_14c9eb288 = FUN_140b35ae4();
  _DAT_14c9eb290 = DAT_14c9e8258;
  _DAT_14c9eb298 = &LAB_14682652b;
  DAT_14c9e8258 = &DAT_14c9eb280;
  DAT_14c9e82ad = DAT_14c9e82ad + '\x01';
  _DAT_14c9eb2a0 = 0x100000000;
  if (*(char *)(_DAT_14c9eb288 + 100) != '\0') {
    DAT_14c9e82ae = DAT_14c9e82ae + '\x01';
  }
  return;
}



// FUNCTION 145f1556a FUN_145f1556a body=138 status=ok
// SIG undefined FUN_145f1556a(void)

code * FUN_145f1556a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumGridCells";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000111;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d666c;
}



// FUNCTION 145f155f4 FUN_145f155f4 body=138 status=ok
// SIG undefined FUN_145f155f4(void)

code * FUN_145f155f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ParentGridSizeFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000122;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d5ee0;
}



// FUNCTION 145f1567e FUN_145f1567e body=138 status=ok
// SIG undefined FUN_145f1567e(void)

code * FUN_145f1567e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumReflectionCaptures";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c0000010e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d52c0;
}



// FUNCTION 145f15708 FUN_145f15708 body=205 status=ok
// SIG undefined FUN_145f15708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15708(void)

{
  if ((DAT_14c9edd9f & 2) == 0) {
    DAT_14c9edd9f = DAT_14c9edd9f | 2;
    _DAT_14c9edd40 = L"FCombineObjectIndexBuffersCS";
    _DAT_14c9edd58 = FUN_146826540;
    _DAT_14c9edd60 = FUN_146825d77;
    _DAT_14c9edd68 = FUN_146825fd6;
    _DAT_14c9edd70 = FUN_1407e02ea;
    _DAT_14c9edd78 = FUN_146826273;
    _DAT_14c9edd50 = FUN_1471deb26;
    _DAT_14c9edd90 = 0xffffffff000000e0;
    _DAT_14c9edd98 = 8;
    DAT_14c9edd9c = 0;
    _DAT_14c9edd80 = &LAB_1471deb50;
    FUN_145f157d6();
    FUN_1407e00cc(&DAT_14c9edd38);
    return;
  }
  return;
}



// FUNCTION 145f157d6 FUN_145f157d6 body=123 status=ok
// SIG undefined FUN_145f157d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f157d6(void)

{
  _DAT_14c9f1978 = L"BASE";
  DAT_14c9f19a2 = 4;
  _DAT_14c9f1980 = FUN_140b35ae4();
  _DAT_14c9f1988 = DAT_14c9edd48;
  _DAT_14c9f1990 = &LAB_14682652b;
  DAT_14c9edd48 = &DAT_14c9f1978;
  DAT_14c9edd9d = DAT_14c9edd9d + '\x01';
  _DAT_14c9f1998 = 0x100000000;
  if (*(char *)(_DAT_14c9f1980 + 100) != '\0') {
    DAT_14c9edd9e = DAT_14c9edd9e + '\x01';
  }
  return;
}



// FUNCTION 145f15852 FUN_145f15852 body=226 status=ok
// SIG undefined FUN_145f15852(void)

longlong * FUN_145f15852(longlong *param_1)

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
  pcVar13 = FUN_1462d855a;
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



// FUNCTION 145f15936 FUN_145f15936 body=138 status=ok
// SIG undefined FUN_145f15936(void)

code * FUN_145f15936(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCulledHeightfieldObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f159c0;
}



// FUNCTION 145f159c0 FUN_145f159c0 body=138 status=ok
// SIG undefined FUN_145f159c0(void)

code * FUN_145f159c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumCulledMeshSDFObjects";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f15a4a;
}



// FUNCTION 145f15a4a FUN_145f15a4a body=138 status=ok
// SIG undefined FUN_145f15a4a(void)

code * FUN_145f15a4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HeightfieldIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d85e2;
}



// FUNCTION 145f15ad4 FUN_145f15ad4 body=205 status=ok
// SIG undefined FUN_145f15ad4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15ad4(void)

{
  if ((DAT_14c9ee8e7 & 2) == 0) {
    DAT_14c9ee8e7 = DAT_14c9ee8e7 | 2;
    _DAT_14c9ee888 = L"FUpdateCacheForUsedProbesCS";
    _DAT_14c9ee8a0 = FUN_146826540;
    _DAT_14c9ee8a8 = FUN_146825d77;
    _DAT_14c9ee8b0 = FUN_146825fd6;
    _DAT_14c9ee8b8 = FUN_1407e02ea;
    _DAT_14c9ee8c0 = FUN_146826273;
    _DAT_14c9ee898 = FUN_1471df486;
    _DAT_14c9ee8d8 = 0xffffffff000000e0;
    _DAT_14c9ee8e0 = 8;
    DAT_14c9ee8e4 = 0;
    _DAT_14c9ee8c8 = &LAB_1471df4b0;
    FUN_145f15ba2();
    FUN_1407e00cc(&DAT_14c9ee880);
    return;
  }
  return;
}



// FUNCTION 145f15ba2 FUN_145f15ba2 body=123 status=ok
// SIG undefined FUN_145f15ba2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15ba2(void)

{
  _DAT_14c9f1bb0 = L"BASE";
  DAT_14c9f1bda = 4;
  _DAT_14c9f1bb8 = FUN_140b35ae4();
  _DAT_14c9f1bc0 = DAT_14c9ee890;
  _DAT_14c9f1bc8 = &LAB_14682652b;
  DAT_14c9ee890 = &DAT_14c9f1bb0;
  DAT_14c9ee8e5 = DAT_14c9ee8e5 + '\x01';
  _DAT_14c9f1bd0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1bb8 + 100) != '\0') {
    DAT_14c9ee8e6 = DAT_14c9ee8e6 + '\x01';
  }
  return;
}



// FUNCTION 145f15c1e FUN_145f15c1e body=226 status=ok
// SIG undefined FUN_145f15c1e(void)

longlong * FUN_145f15c1e(longlong *param_1)

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
  pcVar13 = FUN_1462d90b4;
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



// FUNCTION 145f15d02 FUN_145f15d02 body=138 status=ok
// SIG undefined FUN_145f15d02(void)

code * FUN_145f15d02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumFramesToKeepCachedProbes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21400000153;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e29ae;
}



// FUNCTION 145f15d8c FUN_145f15d8c body=138 status=ok
// SIG undefined FUN_145f15d8c(void)

undefined1 * FUN_145f15d8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x149;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471e2d74;
}



// FUNCTION 145f15e16 FUN_145f15e16 body=138 status=ok
// SIG undefined FUN_145f15e16(void)

code * FUN_145f15e16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbeLastUsedFrame";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000014e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e2b4c;
}



// FUNCTION 145f15ea0 FUN_145f15ea0 body=205 status=ok
// SIG undefined FUN_145f15ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15ea0(void)

{
  if ((DAT_14c9eec5f & 2) == 0) {
    DAT_14c9eec5f = DAT_14c9eec5f | 2;
    _DAT_14c9eec00 = L"FAllocateProbeTracesCS";
    _DAT_14c9eec18 = FUN_146826540;
    _DAT_14c9eec20 = FUN_146825d77;
    _DAT_14c9eec28 = FUN_146825fd6;
    _DAT_14c9eec30 = FUN_1407e02ea;
    _DAT_14c9eec38 = FUN_146826273;
    _DAT_14c9eec10 = FUN_1471df6d8;
    _DAT_14c9eec50 = 0xffffffff000000e0;
    _DAT_14c9eec58 = 8;
    DAT_14c9eec5c = 0;
    _DAT_14c9eec40 = &LAB_1471df702;
    FUN_145f15f6e();
    FUN_1407e00cc(&DAT_14c9eebf8);
    return;
  }
  return;
}



// FUNCTION 145f15f6e FUN_145f15f6e body=123 status=ok
// SIG undefined FUN_145f15f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f15f6e(void)

{
  _DAT_14c9f1c40 = L"BASE";
  DAT_14c9f1c6a = 4;
  _DAT_14c9f1c48 = FUN_140b35ae4();
  _DAT_14c9f1c50 = DAT_14c9eec08;
  _DAT_14c9f1c58 = &LAB_14682652b;
  DAT_14c9eec08 = &DAT_14c9f1c40;
  DAT_14c9eec5d = DAT_14c9eec5d + '\x01';
  _DAT_14c9f1c60 = 0x100000000;
  if (*(char *)(_DAT_14c9f1c48 + 100) != '\0') {
    DAT_14c9eec5e = DAT_14c9eec5e + '\x01';
  }
  return;
}



// FUNCTION 145f15fea FUN_145f15fea body=138 status=ok
// SIG undefined FUN_145f15fea(void)

code * FUN_145f15fea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNumProbes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000001d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e3364;
}



// FUNCTION 145f16074 FUN_145f16074 body=138 status=ok
// SIG undefined FUN_145f16074(void)

code * FUN_145f16074(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbesToUpdateTraceCost";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e383e;
}



// FUNCTION 145f160fe FUN_145f160fe body=138 status=ok
// SIG undefined FUN_145f160fe(void)

code * FUN_145f160fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FirstClipmapWorldExtentRcp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000001cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d9486;
}



// FUNCTION 145f16188 FUN_145f16188 body=205 status=ok
// SIG undefined FUN_145f16188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16188(void)

{
  if ((DAT_14c9eefd7 & 2) == 0) {
    DAT_14c9eefd7 = DAT_14c9eefd7 | 2;
    _DAT_14c9eef78 = L"FSetupProbeIndirectArgsCS";
    _DAT_14c9eef90 = FUN_146826540;
    _DAT_14c9eef98 = FUN_146825d77;
    _DAT_14c9eefa0 = FUN_146825fd6;
    _DAT_14c9eefa8 = FUN_1407e02ea;
    _DAT_14c9eefb0 = FUN_146826273;
    _DAT_14c9eef88 = FUN_1471df92a;
    _DAT_14c9eefc8 = 0xffffffff000000e0;
    _DAT_14c9eefd0 = 8;
    DAT_14c9eefd4 = 0;
    _DAT_14c9eefb8 = &LAB_1471df954;
    FUN_145f16256();
    FUN_1407e00cc(&DAT_14c9eef70);
    return;
  }
  return;
}



// FUNCTION 145f16256 FUN_145f16256 body=123 status=ok
// SIG undefined FUN_145f16256(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16256(void)

{
  _DAT_14c9f1cd0 = L"BASE";
  DAT_14c9f1cfa = 4;
  _DAT_14c9f1cd8 = FUN_140b35ae4();
  _DAT_14c9f1ce0 = DAT_14c9eef80;
  _DAT_14c9f1ce8 = &LAB_14682652b;
  DAT_14c9eef80 = &DAT_14c9f1cd0;
  DAT_14c9eefd5 = DAT_14c9eefd5 + '\x01';
  _DAT_14c9f1cf0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1cd8 + 100) != '\0') {
    DAT_14c9eefd6 = DAT_14c9eefd6 + '\x01';
  }
  return;
}



// FUNCTION 145f162d2 FUN_145f162d2 body=226 status=ok
// SIG undefined FUN_145f162d2(void)

longlong * FUN_145f162d2(longlong *param_1)

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
  pcVar13 = FUN_1462d973e;
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



// FUNCTION 145f163b6 FUN_145f163b6 body=138 status=ok
// SIG undefined FUN_145f163b6(void)

code * FUN_145f163b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWClearProbePDFsIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000023c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e405a;
}



// FUNCTION 145f16440 FUN_145f16440 body=138 status=ok
// SIG undefined FUN_145f16440(void)

code * FUN_145f16440(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWFixupProbeBordersIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000241;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e3e32;
}



// FUNCTION 145f164ca FUN_145f164ca body=138 status=ok
// SIG undefined FUN_145f164ca(void)

code * FUN_145f164ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClearProbePDFGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c800000246;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e3c94;
}



// FUNCTION 145f16554 FUN_145f16554 body=205 status=ok
// SIG undefined FUN_145f16554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16554(void)

{
  if ((DAT_14c9f2f9f & 2) == 0) {
    DAT_14c9f2f9f = DAT_14c9f2f9f | 2;
    _DAT_14c9f2f40 = L"FLumenRadiositySpatialFilterProbeRadiance";
    _DAT_14c9f2f58 = FUN_146826540;
    _DAT_14c9f2f60 = FUN_146825d77;
    _DAT_14c9f2f68 = FUN_146825fd6;
    _DAT_14c9f2f70 = FUN_1407e02ea;
    _DAT_14c9f2f78 = FUN_146826273;
    _DAT_14c9f2f50 = FUN_1471ed5ea;
    _DAT_14c9f2f90 = 0xffffffff000000e0;
    _DAT_14c9f2f98 = 8;
    DAT_14c9f2f9c = 0;
    _DAT_14c9f2f80 = &LAB_1471ed614;
    FUN_145f16622();
    FUN_1407e00cc(&DAT_14c9f2f38);
    return;
  }
  return;
}



// FUNCTION 145f16622 FUN_145f16622 body=123 status=ok
// SIG undefined FUN_145f16622(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16622(void)

{
  _DAT_14c9f7a90 = L"BASE";
  DAT_14c9f7aba = 4;
  _DAT_14c9f7a98 = FUN_140b35ae4();
  _DAT_14c9f7aa0 = DAT_14c9f2f48;
  _DAT_14c9f7aa8 = &LAB_14682652b;
  DAT_14c9f2f48 = &DAT_14c9f7a90;
  DAT_14c9f2f9d = DAT_14c9f2f9d + '\x01';
  _DAT_14c9f7ab0 = 0x100000000;
  if (*(char *)(_DAT_14c9f7a98 + 100) != '\0') {
    DAT_14c9f2f9e = DAT_14c9f2f9e + '\x01';
  }
  return;
}



// FUNCTION 145f1669e FUN_145f1669e body=226 status=ok
// SIG undefined FUN_145f1669e(void)

longlong * FUN_145f1669e(longlong *param_1)

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
  pcVar13 = FUN_1462dc834;
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



// FUNCTION 145f16782 FUN_145f16782 body=132 status=ok
// SIG undefined FUN_145f16782(void)

undefined1 * FUN_145f16782(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471f4b2e;
}



// FUNCTION 145f16806 FUN_145f16806 body=138 status=ok
// SIG undefined FUN_145f16806(void)

code * FUN_145f16806(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWFilteredTraceRadianceAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000001d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dc8bc;
}



// FUNCTION 145f16890 FUN_145f16890 body=144 status=ok
// SIG undefined FUN_145f16890(void)

code * FUN_145f16890(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1449a4512();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LumenCardScene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenCardScene";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000001d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462dc94e;
}



// FUNCTION 145f16920 FUN_145f16920 body=205 status=ok
// SIG undefined FUN_145f16920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16920(void)

{
  if ((DAT_14c9f4227 & 2) == 0) {
    DAT_14c9f4227 = DAT_14c9f4227 | 2;
    _DAT_14c9f41c8 = L"FLumenReflectionDenoiserTemporalCS";
    _DAT_14c9f41e0 = FUN_146826540;
    _DAT_14c9f41e8 = FUN_146825d77;
    _DAT_14c9f41f0 = FUN_146825fd6;
    _DAT_14c9f41f8 = FUN_1407e02ea;
    _DAT_14c9f4200 = FUN_146826273;
    _DAT_14c9f41d8 = FUN_1471ef6da;
    _DAT_14c9f4218 = 0xffffffff000000e0;
    _DAT_14c9f4220 = 8;
    DAT_14c9f4224 = 0;
    _DAT_14c9f4208 = &LAB_1471ef704;
    FUN_145f169ee();
    FUN_1407e00cc(&DAT_14c9f41c0);
    return;
  }
  return;
}



// FUNCTION 145f169ee FUN_145f169ee body=123 status=ok
// SIG undefined FUN_145f169ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f169ee(void)

{
  _DAT_14c9f7d88 = L"BASE";
  DAT_14c9f7db2 = 4;
  _DAT_14c9f7d90 = FUN_140b35ae4();
  _DAT_14c9f7d98 = DAT_14c9f41d0;
  _DAT_14c9f7da0 = &LAB_14682652b;
  DAT_14c9f41d0 = &DAT_14c9f7d88;
  DAT_14c9f4225 = DAT_14c9f4225 + '\x01';
  _DAT_14c9f7da8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7d90 + 100) != '\0') {
    DAT_14c9f4226 = DAT_14c9f4226 + '\x01';
  }
  return;
}



// FUNCTION 145f16a6a FUN_145f16a6a body=138 status=ok
// SIG undefined FUN_145f16a6a(void)

code * FUN_145f16a6a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryGatherUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27000000330;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f8f16;
}



// FUNCTION 145f16af4 FUN_145f16af4 body=138 status=ok
// SIG undefined FUN_145f16af4(void)

code * FUN_145f16af4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthHistory";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2480000032d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f902a;
}



// FUNCTION 145f16b7e FUN_145f16b7e body=138 status=ok
// SIG undefined FUN_145f16b7e(void)

code * FUN_145f16b7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevSceneColorPreExposureCorrection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000331;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f16a6a;
}



// FUNCTION 145f16c08 FUN_145f16c08 body=205 status=ok
// SIG undefined FUN_145f16c08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16c08(void)

{
  if ((DAT_14c9f4477 & 2) == 0) {
    DAT_14c9f4477 = DAT_14c9f4477 | 2;
    _DAT_14c9f4418 = L"FLumenReflectionDenoiserSpatialCS";
    _DAT_14c9f4430 = FUN_146826540;
    _DAT_14c9f4438 = FUN_146825d77;
    _DAT_14c9f4440 = FUN_146825fd6;
    _DAT_14c9f4448 = FUN_1407e02ea;
    _DAT_14c9f4450 = FUN_146826273;
    _DAT_14c9f4428 = FUN_1471ef87c;
    _DAT_14c9f4468 = 0xffffffff000000e0;
    _DAT_14c9f4470 = 8;
    DAT_14c9f4474 = 0;
    _DAT_14c9f4458 = &LAB_1471ef8a6;
    FUN_145f16cd6();
    FUN_1407e00cc(&DAT_14c9f4410);
    return;
  }
  return;
}



// FUNCTION 145f16cd6 FUN_145f16cd6 body=123 status=ok
// SIG undefined FUN_145f16cd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16cd6(void)

{
  _DAT_14c9f7de8 = L"BASE";
  DAT_14c9f7e12 = 4;
  _DAT_14c9f7df0 = FUN_140b35ae4();
  _DAT_14c9f7df8 = DAT_14c9f4420;
  _DAT_14c9f7e00 = &LAB_14682652b;
  DAT_14c9f4420 = &DAT_14c9f7de8;
  DAT_14c9f4475 = DAT_14c9f4475 + '\x01';
  _DAT_14c9f7e08 = 0x100000000;
  if (*(char *)(_DAT_14c9f7df0 + 100) != '\0') {
    DAT_14c9f4476 = DAT_14c9f4476 + '\x01';
  }
  return;
}



// FUNCTION 145f16d52 FUN_145f16d52 body=226 status=ok
// SIG undefined FUN_145f16d52(void)

longlong * FUN_145f16d52(longlong *param_1)

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
  pcVar13 = FUN_1462deb58;
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



// FUNCTION 145f16e36 FUN_145f16e36 body=138 status=ok
// SIG undefined FUN_145f16e36(void)

code * FUN_145f16e36(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpecularLightingAndSecondMomentTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22800000386;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f16ec0;
}



// FUNCTION 145f16ec0 FUN_145f16ec0 body=138 status=ok
// SIG undefined FUN_145f16ec0(void)

code * FUN_145f16ec0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWSpecularIndirectAccumulated";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22000000385;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dec68;
}



// FUNCTION 145f16f4a FUN_145f16f4a body=138 status=ok
// SIG undefined FUN_145f16f4a(void)

code * FUN_145f16f4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SpatialFilterDepthWeightScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23800000388;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462debe0;
}



// FUNCTION 145f16fd4 FUN_145f16fd4 body=205 status=ok
// SIG undefined FUN_145f16fd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f16fd4(void)

{
  if ((DAT_14c9f4a77 & 2) == 0) {
    DAT_14c9f4a77 = DAT_14c9f4a77 | 2;
    _DAT_14c9f4a18 = L"FReflectionCompactTracesCS";
    _DAT_14c9f4a30 = FUN_146826540;
    _DAT_14c9f4a38 = FUN_146825d77;
    _DAT_14c9f4a40 = FUN_146825fd6;
    _DAT_14c9f4a48 = FUN_1407e02ea;
    _DAT_14c9f4a50 = FUN_146826273;
    _DAT_14c9f4a28 = FUN_1471efb90;
    _DAT_14c9f4a68 = 0xffffffff000000e0;
    _DAT_14c9f4a70 = 8;
    DAT_14c9f4a74 = 0;
    _DAT_14c9f4a58 = &LAB_1471efbba;
    FUN_145f170a2();
    FUN_1407e00cc(&DAT_14c9f4a10);
    return;
  }
  return;
}



// FUNCTION 145f170a2 FUN_145f170a2 body=123 status=ok
// SIG undefined FUN_145f170a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f170a2(void)

{
  _DAT_14c9f7ea8 = L"BASE";
  DAT_14c9f7ed2 = 4;
  _DAT_14c9f7eb0 = FUN_140b35ae4();
  _DAT_14c9f7eb8 = DAT_14c9f4a20;
  _DAT_14c9f7ec0 = &LAB_14682652b;
  DAT_14c9f4a20 = &DAT_14c9f7ea8;
  DAT_14c9f4a75 = DAT_14c9f4a75 + '\x01';
  _DAT_14c9f7ec8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7eb0 + 100) != '\0') {
    DAT_14c9f4a76 = DAT_14c9f4a76 + '\x01';
  }
  return;
}



// FUNCTION 145f1711e FUN_145f1711e body=226 status=ok
// SIG undefined FUN_145f1711e(void)

longlong * FUN_145f1711e(longlong *param_1)

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
  pcVar13 = FUN_1462df164;
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



// FUNCTION 145f17202 FUN_145f17202 body=138 status=ok
// SIG undefined FUN_145f17202(void)

code * FUN_145f17202(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionTracingTileIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000014a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f17316;
}



// FUNCTION 145f1728c FUN_145f1728c body=138 status=ok
// SIG undefined FUN_145f1728c(void)

code * FUN_145f1728c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactionTracingEndDistanceFromCamera";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26400000146;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f973c;
}



// FUNCTION 145f17316 FUN_145f17316 body=138 status=ok
// SIG undefined FUN_145f17316(void)

code * FUN_145f17316(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCompactedTraceTexelData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27800000149;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f96b2;
}



// FUNCTION 145f173a0 FUN_145f173a0 body=205 status=ok
// SIG undefined FUN_145f173a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f173a0(void)

{
  if ((DAT_14c9f8cc7 & 2) == 0) {
    DAT_14c9f8cc7 = DAT_14c9f8cc7 | 2;
    _DAT_14c9f8c68 = L"FBuildLightTilesCS";
    _DAT_14c9f8c80 = FUN_146826540;
    _DAT_14c9f8c88 = FUN_146825d77;
    _DAT_14c9f8c90 = FUN_146825fd6;
    _DAT_14c9f8c98 = FUN_1407e02ea;
    _DAT_14c9f8ca0 = FUN_146826273;
    _DAT_14c9f8c78 = FUN_147204b58;
    _DAT_14c9f8cb8 = 0xffffffff000000e0;
    _DAT_14c9f8cc0 = 8;
    DAT_14c9f8cc4 = 0;
    _DAT_14c9f8ca8 = &LAB_147204b82;
    FUN_145f1746e();
    FUN_1407e00cc(&DAT_14c9f8c60);
    return;
  }
  return;
}



// FUNCTION 145f1746e FUN_145f1746e body=123 status=ok
// SIG undefined FUN_145f1746e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f1746e(void)

{
  _DAT_14c9ffbb8 = L"BASE";
  DAT_14c9ffbe2 = 4;
  _DAT_14c9ffbc0 = FUN_140b35ae4();
  _DAT_14c9ffbc8 = DAT_14c9f8c70;
  _DAT_14c9ffbd0 = &LAB_14682652b;
  DAT_14c9f8c70 = &DAT_14c9ffbb8;
  DAT_14c9f8cc5 = DAT_14c9f8cc5 + '\x01';
  _DAT_14c9ffbd8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffbc0 + 100) != '\0') {
    DAT_14c9f8cc6 = DAT_14c9f8cc6 + '\x01';
  }
  return;
}



// FUNCTION 145f174ea FUN_145f174ea body=138 status=ok
// SIG undefined FUN_145f174ea(void)

code * FUN_145f174ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWLightTileAllocatorPerLight";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000001af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720a006;
}



// FUNCTION 145f17574 FUN_145f17574 body=138 status=ok
// SIG undefined FUN_145f17574(void)

code * FUN_145f17574(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CardTileAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000001b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147209f7c;
}



// FUNCTION 145f175fe FUN_145f175fe body=138 status=ok
// SIG undefined FUN_145f175fe(void)

code * FUN_145f175fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreViewTranslationLow";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x130000001ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147209bb6;
}



// FUNCTION 145f17688 FUN_145f17688 body=205 status=ok
// SIG undefined FUN_145f17688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f17688(void)

{
  if ((DAT_14c9f8f17 & 2) == 0) {
    DAT_14c9f8f17 = DAT_14c9f8f17 | 2;
    _DAT_14c9f8eb8 = L"FCompactLightTilesCS";
    _DAT_14c9f8ed0 = FUN_146826540;
    _DAT_14c9f8ed8 = FUN_146825d77;
    _DAT_14c9f8ee0 = FUN_146825fd6;
    _DAT_14c9f8ee8 = FUN_1407e02ea;
    _DAT_14c9f8ef0 = FUN_146826273;
    _DAT_14c9f8ec8 = FUN_147204ce4;
    _DAT_14c9f8f08 = 0xffffffff000000e0;
    _DAT_14c9f8f10 = 8;
    DAT_14c9f8f14 = 0;
    _DAT_14c9f8ef8 = &LAB_147204d0e;
    FUN_145f17756();
    FUN_1407e00cc(&DAT_14c9f8eb0);
    return;
  }
  return;
}



// FUNCTION 145f17756 FUN_145f17756 body=123 status=ok
// SIG undefined FUN_145f17756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f17756(void)

{
  _DAT_14c9ffc18 = L"BASE";
  DAT_14c9ffc42 = 4;
  _DAT_14c9ffc20 = FUN_140b35ae4();
  _DAT_14c9ffc28 = DAT_14c9f8ec0;
  _DAT_14c9ffc30 = &LAB_14682652b;
  DAT_14c9f8ec0 = &DAT_14c9ffc18;
  DAT_14c9f8f15 = DAT_14c9f8f15 + '\x01';
  _DAT_14c9ffc38 = 0x100000000;
  if (*(char *)(_DAT_14c9ffc20 + 100) != '\0') {
    DAT_14c9f8f16 = DAT_14c9f8f16 + '\x01';
  }
  return;
}



// FUNCTION 145f177d2 FUN_145f177d2 body=226 status=ok
// SIG undefined FUN_145f177d2(void)

longlong * FUN_145f177d2(longlong *param_1)

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
  pcVar13 = FUN_1462e1fc4;
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



// FUNCTION 145f178b6 FUN_145f178b6 body=138 status=ok
// SIG undefined FUN_145f178b6(void)

code * FUN_145f178b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCompactedLightTiles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720a568;
}



// FUNCTION 145f17940 FUN_145f17940 body=138 status=ok
// SIG undefined FUN_145f17940(void)

code * FUN_145f17940(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWLightTilesPerCardTile";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f178b6;
}



// FUNCTION 145f179ca FUN_145f179ca body=138 status=ok
// SIG undefined FUN_145f179ca(void)

code * FUN_145f179ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightTiles";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720a454;
}



// FUNCTION 145f17a54 FUN_145f17a54 body=292 status=ok
// SIG undefined FUN_145f17a54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f17a54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9e48) {
    FUN_144b3d300(&DAT_14c9f9e48);
    if (DAT_14c9f9e48 == -1) {
      FUN_145f17cc2();
      FUN_145f17b78();
      FUN_140db5666(&DAT_14c9f9da0,0,&DAT_14c9f9d38,L"FLumenSceneGenerateLightSamplesCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingStochastic.usf",
                    L"GenerateLightSamplesCS",5,0x18,FUN_147205b76,FUN_147205b16,&LAB_14176b5b0,
                    &LAB_142d694fc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fe448);
      _DAT_14c9f9da0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d694ff);
      _Init_thread_footer(&DAT_14c9f9e48);
    }
  }
  return &DAT_14c9f9da0;
}



// FUNCTION 145f17b78 FUN_145f17b78 body=205 status=ok
// SIG undefined FUN_145f17b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f17b78(void)

{
  if ((DAT_14c9f9d9f & 2) == 0) {
    DAT_14c9f9d9f = DAT_14c9f9d9f | 2;
    _DAT_14c9f9d40 = L"FLumenSceneGenerateLightSamplesCS";
    _DAT_14c9f9d58 = FUN_146826540;
    _DAT_14c9f9d60 = FUN_146825d77;
    _DAT_14c9f9d68 = FUN_146825fd6;
    _DAT_14c9f9d70 = FUN_1407e02ea;
    _DAT_14c9f9d78 = FUN_146826273;
    _DAT_14c9f9d50 = FUN_147205ae8;
    _DAT_14c9f9d90 = 0xffffffff000000e0;
    _DAT_14c9f9d98 = 8;
    DAT_14c9f9d9c = 0;
    _DAT_14c9f9d80 = &LAB_147205b12;
    FUN_145f17c46();
    FUN_1407e00cc(&DAT_14c9f9d38);
    return;
  }
  return;
}



// FUNCTION 145f17c46 FUN_145f17c46 body=123 status=ok
// SIG undefined FUN_145f17c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f17c46(void)

{
  _DAT_14c9ffe58 = L"BASE";
  DAT_14c9ffe82 = 4;
  _DAT_14c9ffe60 = FUN_140b35ae4();
  _DAT_14c9ffe68 = DAT_14c9f9d48;
  _DAT_14c9ffe70 = &LAB_14682652b;
  DAT_14c9f9d48 = &DAT_14c9ffe58;
  DAT_14c9f9d9d = DAT_14c9f9d9d + '\x01';
  _DAT_14c9ffe78 = 0x100000000;
  if (*(char *)(_DAT_14c9ffe60 + 100) != '\0') {
    DAT_14c9f9d9e = DAT_14c9f9d9e + '\x01';
  }
  return;
}



// FUNCTION 145f17cc2 FUN_145f17cc2 body=261 status=ok
// SIG undefined FUN_145f17cc2(void)

void FUN_145f17cc2(void)

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
              0x110) < DAT_14c9fe4c8) {
    FUN_144b3d300(&DAT_14c9fe4c8);
    if (DAT_14c9fe4c8 == -1) {
      FUN_145f17dc8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x12a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe448,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d993b3);
      _Init_thread_footer(&DAT_14c9fe4c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f17dc8 FUN_145f17dc8 body=226 status=ok
// SIG undefined FUN_145f17dc8(void)

longlong * FUN_145f17dc8(longlong *param_1)

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
  pcVar13 = FUN_1462e31dc;
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



// FUNCTION 145f17eac FUN_145f17eac body=132 status=ok
// SIG undefined FUN_145f17eac(void)

undefined1 * FUN_145f17eac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 299;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14720e3a8;
}



// FUNCTION 145f17f30 FUN_145f17f30 body=138 status=ok
// SIG undefined FUN_145f17f30(void)

code * FUN_145f17f30(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCardTilePerLightCounters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a800000132;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720dc18;
}



// FUNCTION 145f17fba FUN_145f17fba body=138 status=ok
// SIG undefined FUN_145f17fba(void)

code * FUN_145f17fba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWSampleLuminanceSum";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000012f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ddcef0;
}



// FUNCTION 145f18044 FUN_145f18044 body=205 status=ok
// SIG undefined FUN_145f18044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f18044(void)

{
  if ((DAT_14c9fb1a7 & 2) == 0) {
    DAT_14c9fb1a7 = DAT_14c9fb1a7 | 2;
    _DAT_14c9fb148 = L"FClearCardUpdateContextCS";
    _DAT_14c9fb160 = FUN_146826540;
    _DAT_14c9fb168 = FUN_146825d77;
    _DAT_14c9fb170 = FUN_146825fd6;
    _DAT_14c9fb178 = FUN_1407e02ea;
    _DAT_14c9fb180 = FUN_146826273;
    _DAT_14c9fb158 = FUN_147207bf8;
    _DAT_14c9fb198 = 0xffffffff000000e0;
    _DAT_14c9fb1a0 = 8;
    DAT_14c9fb1a4 = 0;
    _DAT_14c9fb188 = &LAB_147207c22;
    FUN_145f18112();
    FUN_1407e00cc(&DAT_14c9fb140);
    return;
  }
  return;
}



// FUNCTION 145f18112 FUN_145f18112 body=123 status=ok
// SIG undefined FUN_145f18112(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f18112(void)

{
  _DAT_14ca00178 = L"BASE";
  DAT_14ca001a2 = 4;
  _DAT_14ca00180 = FUN_140b35ae4();
  _DAT_14ca00188 = DAT_14c9fb150;
  _DAT_14ca00190 = &LAB_14682652b;
  DAT_14c9fb150 = &DAT_14ca00178;
  DAT_14c9fb1a5 = DAT_14c9fb1a5 + '\x01';
  _DAT_14ca00198 = 0x100000000;
  if (*(char *)(_DAT_14ca00180 + 100) != '\0') {
    DAT_14c9fb1a6 = DAT_14c9fb1a6 + '\x01';
  }
  return;
}



// FUNCTION 145f1818e FUN_145f1818e body=226 status=ok
// SIG undefined FUN_145f1818e(void)

longlong * FUN_145f1818e(longlong *param_1)

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
  pcVar13 = FUN_1462e48c0;
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



// FUNCTION 145f18272 FUN_145f18272 body=138 status=ok
// SIG undefined FUN_145f18272(void)

code * FUN_145f18272(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWCardPageTileAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000012f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f18386;
}



// FUNCTION 145f182fc FUN_145f182fc body=138 status=ok
// SIG undefined FUN_145f182fc(void)

code * FUN_145f182fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectLightingCardPageIndexAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000012d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e4948;
}



// FUNCTION 145f18386 FUN_145f18386 body=138 status=ok
// SIG undefined FUN_145f18386(void)

code * FUN_145f18386(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWMaxUpdateBucket";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000012e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f182fc;
}



// FUNCTION 145f18410 FUN_145f18410 body=205 status=ok
// SIG undefined FUN_145f18410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f18410(void)

{
  if ((DAT_14c9fb2cf & 2) == 0) {
    DAT_14c9fb2cf = DAT_14c9fb2cf | 2;
    _DAT_14c9fb270 = L"FBuildPageUpdatePriorityHistogramCS";
    _DAT_14c9fb288 = FUN_146826540;
    _DAT_14c9fb290 = FUN_146825d77;
    _DAT_14c9fb298 = FUN_146825fd6;
    _DAT_14c9fb2a0 = FUN_1407e02ea;
    _DAT_14c9fb2a8 = FUN_146826273;
    _DAT_14c9fb280 = FUN_147207cbe;
    _DAT_14c9fb2c0 = 0xffffffff000000e0;
    _DAT_14c9fb2c8 = 8;
    DAT_14c9fb2cc = 0;
    _DAT_14c9fb2b0 = &LAB_147207ce8;
    FUN_145f184de();
    FUN_1407e00cc(&DAT_14c9fb268);
    return;
  }
  return;
}



// FUNCTION 145f184de FUN_145f184de body=123 status=ok
// SIG undefined FUN_145f184de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f184de(void)

{
  _DAT_14ca001a8 = L"BASE";
  DAT_14ca001d2 = 4;
  _DAT_14ca001b0 = FUN_140b35ae4();
  _DAT_14ca001b8 = DAT_14c9fb278;
  _DAT_14ca001c0 = &LAB_14682652b;
  DAT_14c9fb278 = &DAT_14ca001a8;
  DAT_14c9fb2cd = DAT_14c9fb2cd + '\x01';
  _DAT_14ca001c8 = 0x100000000;
  if (*(char *)(_DAT_14ca001b0 + 100) != '\0') {
    DAT_14c9fb2ce = DAT_14c9fb2ce + '\x01';
  }
  return;
}



// FUNCTION 145f1855a FUN_145f1855a body=226 status=ok
// SIG undefined FUN_145f1855a(void)

longlong * FUN_145f1855a(longlong *param_1)

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
  pcVar13 = FUN_1462e49ca;
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



// FUNCTION 145f1863e FUN_145f1863e body=138 status=ok
// SIG undefined FUN_145f1863e(void)

code * FUN_145f1863e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CardPageNum";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147214d9e;
}



// FUNCTION 145f186c8 FUN_145f186c8 body=138 status=ok
// SIG undefined FUN_145f186c8(void)

code * FUN_145f186c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CardPageLastUsedBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000014e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e4ada;
}



// FUNCTION 145f18752 FUN_145f18752 body=138 status=ok
// SIG undefined FUN_145f18752(void)

code * FUN_145f18752(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"WorldCameraOrigins";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000155;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147214d14;
}



// FUNCTION 145f187dc FUN_145f187dc body=205 status=ok
// SIG undefined FUN_145f187dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f187dc(void)

{
  if ((DAT_14c9fb3f7 & 2) == 0) {
    DAT_14c9fb3f7 = DAT_14c9fb3f7 | 2;
    _DAT_14c9fb398 = L"FSelectMaxUpdateBucketCS";
    _DAT_14c9fb3b0 = FUN_146826540;
    _DAT_14c9fb3b8 = FUN_146825d77;
    _DAT_14c9fb3c0 = FUN_146825fd6;
    _DAT_14c9fb3c8 = FUN_1407e02ea;
    _DAT_14c9fb3d0 = FUN_146826273;
    _DAT_14c9fb3a8 = FUN_147207d84;
    _DAT_14c9fb3e8 = 0xffffffff000000e0;
    _DAT_14c9fb3f0 = 8;
    DAT_14c9fb3f4 = 0;
    _DAT_14c9fb3d8 = &LAB_147207dae;
    FUN_145f188aa();
    FUN_1407e00cc(&DAT_14c9fb390);
    return;
  }
  return;
}



// FUNCTION 145f188aa FUN_145f188aa body=123 status=ok
// SIG undefined FUN_145f188aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f188aa(void)

{
  _DAT_14ca001d8 = L"BASE";
  DAT_14ca00202 = 4;
  _DAT_14ca001e0 = FUN_140b35ae4();
  _DAT_14ca001e8 = DAT_14c9fb3a0;
  _DAT_14ca001f0 = &LAB_14682652b;
  DAT_14c9fb3a0 = &DAT_14ca001d8;
  DAT_14c9fb3f5 = DAT_14c9fb3f5 + '\x01';
  _DAT_14ca001f8 = 0x100000000;
  if (*(char *)(_DAT_14ca001e0 + 100) != '\0') {
    DAT_14c9fb3f6 = DAT_14c9fb3f6 + '\x01';
  }
  return;
}



// FUNCTION 145f18926 FUN_145f18926 body=226 status=ok
// SIG undefined FUN_145f18926(void)

longlong * FUN_145f18926(longlong *param_1)

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
  pcVar13 = FUN_1462e4b6c;
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



// FUNCTION 145f18a0a FUN_145f18a0a body=138 status=ok
// SIG undefined FUN_145f18a0a(void)

code * FUN_145f18a0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurfaceCacheUpdateFrameIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000017a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f18b1e;
}



// FUNCTION 145f18a94 FUN_145f18a94 body=138 status=ok
// SIG undefined FUN_145f18a94(void)

code * FUN_145f18a94(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxDirectLightingTilesToUpdate";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000178;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e4bf4;
}


