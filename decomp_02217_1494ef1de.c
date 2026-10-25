// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1494ef1de FUN_1494ef1de body=95 status=ok
// SIG undefined FUN_1494ef1de(void)

void FUN_1494ef1de(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1494ef23e FUN_1494ef23e body=258 status=ok
// SIG undefined FUN_1494ef23e(void)

void FUN_1494ef23e(void)

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
              0x110) < DAT_14cc1dcc8) {
    FUN_144b3d300(&DAT_14cc1dcc8);
    if (DAT_14cc1dcc8 == -1) {
      FUN_1494ef342(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGroomGuideDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x45;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1dc48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144535ea1);
      _Init_thread_footer(&DAT_14cc1dcc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ef342 FUN_1494ef342 body=226 status=ok
// SIG undefined FUN_1494ef342(void)

longlong * FUN_1494ef342(longlong *param_1)

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
  pcVar13 = FUN_1494ef426;
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



// FUNCTION 1494ef426 FUN_1494ef426 body=142 status=ok
// SIG undefined FUN_1494ef426(void)

code * FUN_1494ef426(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf5782();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Resources";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceResourceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x13000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1494ef4b4;
}



// FUNCTION 1494ef4b4 FUN_1494ef4b4 body=136 status=ok
// SIG undefined FUN_1494ef4b4(void)

undefined1 * FUN_1494ef4b4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf55e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x46;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1494ef53c;
}



// FUNCTION 1494ef540 FUN_1494ef540 body=258 status=ok
// SIG undefined FUN_1494ef540(void)

void FUN_1494ef540(void)

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
              0x110) < DAT_14cc1dd50) {
    FUN_144b3d300(&DAT_14cc1dd50);
    if (DAT_14cc1dd50 == -1) {
      FUN_1494ef644(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGroomWriteDataInterfaceParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x72;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc1dcd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144535ead);
      _Init_thread_footer(&DAT_14cc1dd50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ef644 FUN_1494ef644 body=226 status=ok
// SIG undefined FUN_1494ef644(void)

longlong * FUN_1494ef644(longlong *param_1)

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
  pcVar13 = FUN_1494ef728;
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



// FUNCTION 1494ef728 FUN_1494ef728 body=136 status=ok
// SIG undefined FUN_1494ef728(void)

code * FUN_1494ef728(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointAttributeBufferUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15800000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494ef7b0;
}



// FUNCTION 1494ef7b0 FUN_1494ef7b0 body=136 status=ok
// SIG undefined FUN_1494ef7b0(void)

code * FUN_1494ef7b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveAttributeBufferUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494ef838;
}



// FUNCTION 1494ef838 FUN_1494ef838 body=136 status=ok
// SIG undefined FUN_1494ef838(void)

code * FUN_1494ef838(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBufferUAV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14800000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494ef8c0;
}



// FUNCTION 1494ef8c0 FUN_1494ef8c0 body=136 status=ok
// SIG undefined FUN_1494ef8c0(void)

code * FUN_1494ef8c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBufferSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494ef948;
}



// FUNCTION 1494ef948 FUN_1494ef948 body=136 status=ok
// SIG undefined FUN_1494ef948(void)

code * FUN_1494ef948(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionOffsetBufferSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494ef9d0;
}



// FUNCTION 1494ef9d0 FUN_1494ef9d0 body=136 status=ok
// SIG undefined FUN_1494ef9d0(void)

code * FUN_1494ef9d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputStreamStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1494efa58;
}



// FUNCTION 1494efa58 FUN_1494efa58 body=136 status=ok
// SIG undefined FUN_1494efa58(void)

undefined1 * FUN_1494efa58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf55e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsInstanceCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x73;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1494efae0;
}



// FUNCTION 1494efae3 FUN_1494efae3 body=19 status=ok
// SIG undefined FUN_1494efae3(void)

void FUN_1494efae3(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1494efaf6 FUN_1494efaf6 body=132 status=ok
// SIG undefined FUN_1494efaf6(void)

void FUN_1494efaf6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494efb7c FUN_1494efb7c body=36 status=ok
// SIG undefined FUN_1494efb7c(void)

undefined8 FUN_1494efb7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1494efbbc FUN_1494efbbc body=93 status=ok
// SIG undefined FUN_1494efbbc(void)

void FUN_1494efbbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd255d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1494efc1a FUN_1494efc1a body=123 status=ok
// SIG undefined FUN_1494efc1a(void)

void FUN_1494efc1a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd255d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494efc96 FUN_1494efc96 body=21 status=ok
// SIG undefined FUN_1494efc96(void)

undefined8 FUN_1494efc96(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1494efcac FUN_1494efcac body=468 status=ok
// SIG undefined FUN_1494efcac(void)

void FUN_1494efcac(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  QueryPerformanceCounter(&local_68);
  dVar3 = (double)local_68.QuadPart;
  local_68.QuadPart = 0;
  uStack_60 = 0;
  puVar2 = (undefined8 *)param_1[0xc];
  puVar10 = puVar2;
  if ((longlong)(int)param_1[0xd] != 0) {
    dVar3 = dVar3 * DAT_14c83f420 + 16777216.0 + -10.0;
    puVar11 = puVar2 + (longlong)(int)param_1[0xd] * 3;
    puVar12 = puVar2;
    do {
      while (puVar10 = puVar12, uVar8 = uStack_60, (double)puVar10[2] < dVar3) {
        lVar13 = (longlong)(int)uStack_60;
        uVar9 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
        if (uStack_60._4_4_ < uVar9) {
          FUN_14706f770(&local_68,uVar8 & 0xffffffff);
        }
        uVar7 = puVar10[1];
        puVar12 = (undefined8 *)(local_68.QuadPart + lVar13 * 0x10);
        *puVar12 = *puVar10;
        puVar12[1] = uVar7;
        puVar12 = puVar11;
        while (uVar8 = uStack_60, puVar11 = puVar12 + -3, (double)puVar12[-1] < dVar3) {
          lVar13 = (longlong)(int)uStack_60;
          uVar9 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
          if (uStack_60._4_4_ < uVar9) {
            FUN_14706f770(&local_68,uVar8 & 0xffffffff);
          }
          uVar4 = *(undefined4 *)((longlong)puVar12 + -0x14);
          uVar5 = *(undefined4 *)(puVar12 + -2);
          uVar6 = *(undefined4 *)((longlong)puVar12 + -0xc);
          puVar1 = (undefined4 *)(local_68.QuadPart + lVar13 * 0x10);
          *puVar1 = *(undefined4 *)puVar11;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          puVar12 = puVar11;
          if (puVar11 == puVar10) goto LAB_1494efd0c;
        }
        puVar10[2] = puVar12[-1];
        uVar4 = *(undefined4 *)((longlong)puVar12 + -0x14);
        uVar5 = *(undefined4 *)(puVar12 + -2);
        uVar6 = *(undefined4 *)((longlong)puVar12 + -0xc);
        *(undefined4 *)puVar10 = *(undefined4 *)puVar11;
        *(undefined4 *)((longlong)puVar10 + 4) = uVar4;
        *(undefined4 *)(puVar10 + 1) = uVar5;
        *(undefined4 *)((longlong)puVar10 + 0xc) = uVar6;
        puVar12 = puVar10 + 3;
        if (puVar11 == puVar10 + 3) {
          puVar10 = puVar10 + 3;
          goto LAB_1494efd0c;
        }
      }
      puVar12 = puVar10 + 3;
      puVar10 = puVar11;
    } while (puVar12 != puVar11);
  }
LAB_1494efd0c:
  FUN_1494efe82(param_1 + 0xc,
                (int)((ulonglong)((longlong)puVar10 - (longlong)puVar2) >> 3) * -0x55555555);
  if (0 < (int)uStack_60) {
    (**(code **)(*param_1 + 0x38))(param_1,&local_68);
    FUN_1447f69b6(param_1 + 0x1c);
  }
  if (local_68.QuadPart != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494efe82 FUN_1494efe82 body=71 status=ok
// SIG undefined FUN_1494efe82(void)

void FUN_1494efe82(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1494f3400();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1494f3494();
      return;
    }
  }
  return;
}



// FUNCTION 1494efeca FUN_1494efeca body=394 status=ok
// SIG undefined FUN_1494efeca(void)

void FUN_1494efeca(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 *local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8 [3];
  undefined1 local_a0 [80];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,0);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  FUN_1406fa324(puVar5,param_3);
  FUN_14054c6c4(puVar5 + 2,param_3 + 0x10);
  puVar5[4] = param_2;
  local_b8[0] = 0;
  local_b8[1] = 0;
  FUN_1494f0056(param_1,param_2,local_b8);
  lVar3 = param_1[5];
  local_c0 = 0x2bca2875f4373fff;
  local_c8 = 0;
  local_d8 = 0;
  plStack_d0 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x40))(param_1,local_a0);
  if (DAT_14cc1ddf0 == 0) {
    uVar6 = FUN_14585f8b9();
    DAT_14cc1ddf0 = FUN_140002ddd(FUN_14673d22b,uVar6,L"LiveLinkSubjectDataMessage");
  }
  local_e8 = &local_c0;
  local_f0 = &local_c8;
  local_100 = &local_d8;
  local_108 = local_a0;
  local_f8 = local_b8;
  FUN_1494f0154(lVar3,puVar5,DAT_14cc1ddf0,0);
  plVar4 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f0056 FUN_1494f0056 body=252 status=ok
// SIG undefined FUN_1494f0056(void)

void FUN_1494f0056(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1494efcac();
  iVar5 = (int)param_1[0xd];
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
    FUN_14706f710(param_3);
    iVar5 = (int)param_1[0xd];
  }
  if (iVar5 != 0) {
    lVar3 = param_1[0xc];
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(lVar3 + lVar6);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      cVar4 = (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_58);
      if (cVar4 != '\0') {
        puVar1 = (undefined4 *)(lVar3 + lVar6);
        local_58 = *puVar1;
        uStack_54 = puVar1[1];
        uStack_50 = puVar1[2];
        uStack_4c = puVar1[3];
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_14706f770(param_3,iVar2);
        }
        puVar1 = (undefined4 *)(*param_3 + (longlong)iVar2 * 0x10);
        *puVar1 = local_58;
        puVar1[1] = uStack_54;
        puVar1[2] = uStack_50;
        puVar1[3] = uStack_4c;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar5 * 0x18 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f0154 FUN_1494f0154 body=417 status=ok
// SIG undefined FUN_1494f0154(void)

void FUN_1494f0154(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x48) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 0x40), plVar3 != (longlong *)0x0)) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1494f02b1;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    plVar4 = *(longlong **)(param_1 + 0x38);
    if (plVar4 != (longlong *)0x0) {
      plStack_50 = *(longlong **)(param_1 + 0x20);
      if (plStack_50 == (longlong *)0x0) {
LAB_1494f0211:
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        bVar8 = true;
      }
      else {
        iVar7 = (int)plStack_50[1];
        do {
          if (iVar7 == 0) goto LAB_1494f0211;
          LOCK();
          iVar6 = (int)plStack_50[1];
          bVar8 = iVar7 == iVar6;
          if (bVar8) {
            *(int *)(plStack_50 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar8);
        local_58 = *(longlong *)(param_1 + 0x18) + 8;
        if (*(longlong *)(param_1 + 0x18) == 0) {
          local_58 = 0;
        }
        LOCK();
        *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
        UNLOCK();
        bVar8 = false;
      }
      plVar5 = plStack_50;
      local_60 = &local_58;
      local_68 = in_stack_00000048;
      local_70 = in_stack_00000040;
      local_78 = in_stack_00000038;
      local_80 = in_stack_00000030;
      local_88 = in_stack_00000028;
      (**(code **)(*plVar4 + 0x30))(plVar4);
      plVar4 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (!bVar8) {
        LOCK();
        plVar4 = plVar5 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_1494f02b1:
  *(undefined4 *)(in_stack_00000028 + 0x48) = 0;
  if (*(longlong *)(in_stack_00000028 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(in_stack_00000028);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f02f6 FUN_1494f02f6 body=408 status=ok
// SIG undefined FUN_1494f02f6(void)

void FUN_1494f02f6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 *local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8 [3];
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar5 = (undefined8 *)FUN_1494f0490();
  FUN_144756208(puVar5 + 1,param_3 + 0x20);
  *puVar5 = param_2;
  FUN_1492e3c24(puVar5 + 3,param_3 + 0x30);
  FUN_140bb2e20(puVar5 + 5,param_3 + 0x40);
  uVar6 = *(undefined8 *)(param_3 + 0x98);
  puVar5[0xf] = *(undefined8 *)(param_3 + 0x90);
  puVar5[0x10] = uVar6;
  puVar5[0x11] = *(undefined8 *)(param_3 + 0xa0);
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_1494f0056(param_1,param_2,local_a8);
  lVar3 = param_1[5];
  local_b0 = 0x2bca2875f4373fff;
  local_b8 = 0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x40))(param_1,local_90);
  if (DAT_14cc1de08 == 0) {
    uVar6 = FUN_14585f8b9();
    DAT_14cc1de08 = FUN_140002ddd(FUN_14673d2c1,uVar6,L"LiveLinkSubjectFrameMessage");
  }
  local_d8 = &local_b0;
  local_e0 = &local_b8;
  local_f0 = &local_c8;
  local_f8 = local_90;
  local_e8 = local_a8;
  FUN_1494f0154(lVar3,puVar5,DAT_14cc1de08,0);
  plVar4 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f0490 FUN_1494f0490 body=91 status=ok
// SIG undefined FUN_1494f0490(void)

void FUN_1494f0490(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0);
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
  puVar1[0xf] = 0;
  puVar1[0x10] = &DAT_100000018;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 1494f04ec FUN_1494f04ec body=499 status=ok
// SIG undefined FUN_1494f04ec(void)

void FUN_1494f04ec(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x70);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar3) == param_2) {
        if (lVar4 + lVar3 != 0) {
          FUN_14912c540(lVar4 + lVar3 + 0x38,param_5);
          if ((longlong *)(lVar4 + lVar3 + 0x10) != param_4) {
            (**(code **)(*(longlong *)(lVar4 + 0x10 + lVar3) + 0x48))();
            *(longlong *)(lVar4 + 0x18 + lVar3) = param_4[1];
            *(longlong *)(lVar4 + 0x20 + lVar3) = param_4[2];
            *(char *)(lVar4 + 0x30 + lVar3) = (char)param_4[4];
            *(undefined1 *)(param_4 + 4) = 0;
            (**(code **)(*param_4 + 0x48))(param_4);
          }
          if (*param_3 != 0) {
            FUN_1411f0380();
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
        }
        break;
      }
      lVar3 = lVar3 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x78) * 0x88 != lVar3);
  }
  lVar4 = *param_3;
  if ((((lVar4 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *param_3;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  *(uint *)(param_1 + 0x78) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
    FUN_1494f3c70((longlong *)(param_1 + 0x70),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x70);
  FUN_1468fdb70(local_68,param_4);
  local_70 = 0;
  FUN_14485c47a(&local_70,lVar4);
  plVar1 = (longlong *)((longlong)iVar2 * 0x88 + lVar3);
  *plVar1 = param_2;
  plVar1[1] = local_70;
  FUN_1468fdb70(plVar1 + 2,local_68);
  FUN_140d69258((longlong)iVar2 * 0x88 + lVar3 + 0x38,param_5);
  FUN_1448eac94(local_68);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f06fa FUN_1494f06fa body=311 status=ok
// SIG undefined FUN_1494f06fa(void)

void FUN_1494f06fa(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68 [40];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0x80);
  iVar1 = *(int *)(param_1 + 0x88);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar2 = lVar4 << 7;
    plVar5 = plVar3;
    do {
      if (*plVar5 == param_2) {
        if (plVar5 != (longlong *)0x0) {
          if (plVar5 + 1 != param_3) {
            (**(code **)(plVar5[1] + 0x48))();
            plVar5[2] = param_3[1];
            plVar5[3] = param_3[2];
            *(char *)(plVar5 + 5) = (char)param_3[4];
            *(undefined1 *)(param_3 + 4) = 0;
            (**(code **)(*param_3 + 0x48))(param_3);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
        }
        break;
      }
      plVar5 = plVar5 + 0x10;
      lVar2 = lVar2 + -0x80;
    } while (lVar2 != 0);
  }
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_1494f3d08((undefined8 *)(param_1 + 0x80),iVar1);
    plVar3 = *(longlong **)(param_1 + 0x80);
  }
  FUN_1468fdb70(local_68,param_3);
  plVar3[lVar4 * 0x10] = param_2;
  FUN_1468fdb70(plVar3 + lVar4 * 0x10 + 1,local_68);
  FUN_140d69258(plVar3 + lVar4 * 0x10 + 6,param_4);
  FUN_1448eac94(local_68);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f084c FUN_1494f084c body=209 status=ok
// SIG undefined FUN_1494f084c(void)

void FUN_1494f084c(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_1494f3d8e(param_1 + 0x90);
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + lVar3) == *param_2) {
        if (iVar2 != 1) {
          FUN_1494f3ea2(param_1 + 0x80,-iVar2);
          FUN_1494f3f0c(param_1 + 0x80);
        }
        break;
      }
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + 0x80;
    } while ((longlong)*(int *)(param_1 + 0x88) * 0x80 != lVar3);
  }
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    uVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x70) + uVar1) == *param_2) {
        if ((int)(uVar1 >> 3) * -0xf0f0f0f == -1) {
          return;
        }
        FUN_1494f3fe0(param_1 + 0x70);
        FUN_1494f405c(param_1 + 0x70);
        return;
      }
      uVar1 = uVar1 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x78) * 0x88 != uVar1);
  }
  return;
}



// FUNCTION 1494f091e FUN_1494f091e body=381 status=ok
// SIG undefined FUN_1494f091e(void)

undefined8 * FUN_1494f091e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [8];
  undefined1 local_88 [72];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14bd26130;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  uVar2 = FUN_1468306ee();
  FUN_140056680(param_1 + 3,uVar2);
  param_1[5] = 0;
  param_1[6] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 2;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(local_90,puVar3,1);
  FUN_1458bfb2e(local_88,local_90);
  FUN_1494f0a9c(param_1,local_88);
  FUN_1458bf708(local_88);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f0a9c FUN_1494f0a9c body=260 status=ok
// SIG undefined FUN_1494f0a9c(void)

void FUN_1494f0a9c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 0x44) = 0xff;
  FUN_1494f2408(param_2,param_1);
  FUN_1494f24ac(param_2,param_1);
  FUN_1494f2550(param_2,param_1);
  FUN_1458bfc2e(param_2,&local_38);
  plVar1 = local_30;
  if ((longlong *)(param_1 + 0x28) != &local_38) {
    *(longlong *)(param_1 + 0x28) = local_38;
    local_38 = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (local_30 != plVar3) {
      local_30 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x30) = plVar1;
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
  }
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1494f4662();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f0ba2 FUN_1494f0ba2 body=327 status=ok
// SIG undefined FUN_1494f0ba2(void)

void FUN_1494f0ba2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd26130;
  if (param_1[5] != 0) {
    *(undefined1 *)(param_1[5] + 0x48) = 0;
    param_1[5] = 0;
    plVar3 = (longlong *)param_1[6];
    if (plVar3 != (longlong *)0x0) {
      param_1[6] = 0;
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
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_1494f3096(param_1 + 0x12);
  FUN_1494f4173(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1494f414a(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  plVar3 = (longlong *)param_1[6];
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
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494f0cea FUN_1494f0cea body=408 status=ok
// SIG undefined FUN_1494f0cea(void)

void FUN_1494f0cea(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  void **ppvVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  uVar2 = *param_2;
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  lVar6 = FUN_1494f3542(param_1 + 0x90,
                        ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4),param_2);
  FUN_1406fa324(lVar6,param_3);
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_4 + 1);
  lVar8 = (longlong)local_48;
  pvVar3 = (void *)*param_4;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_144a06ca8(&local_50,local_48,0);
    memcpy(local_50,pvVar3,lVar8 << 2);
  }
  iVar5 = local_48;
  pvVar3 = local_50;
  ppvVar1 = (void **)(lVar6 + 0x10);
  if (ppvVar1 != &local_50) {
    lVar8 = (longlong)local_48;
    *(int *)(lVar6 + 0x18) = local_48;
    if (local_48 == 0 && *(int *)(lVar6 + 0x1c) == 0) {
      *(undefined4 *)(lVar6 + 0x1c) = 0;
    }
    else {
      FUN_144a06ca8(ppvVar1,local_48);
      if (iVar5 != 0) {
        memcpy(*ppvVar1,pvVar3,lVar8 << 2);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(lVar6 + 0x28) = 0;
  if (*(int *)(lVar6 + 0x2c) != 0) {
    FUN_1401a2688(lVar6 + 0x20,0);
  }
  FUN_1494efeca(param_1,*param_2,lVar6);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f0e84 FUN_1494f0e84 body=285 status=ok
// SIG undefined FUN_1494f0e84(void)

void FUN_1494f0e84(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8 [3];
  undefined1 local_b0 [80];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_1494f0056(param_1,param_2,local_c8);
  lVar3 = param_1[5];
  local_d0 = 0x2bca2875f4373fff;
  local_d8 = 0;
  local_e8 = 0;
  plStack_e0 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x40))(param_1,local_b0);
  puVar5 = (undefined8 *)FUN_14001cc68(8,0);
  *puVar5 = param_2;
  local_108 = local_c8;
  local_100 = &local_d8;
  local_f8 = &local_d0;
  FUN_1494f0fa2(lVar3,puVar5,local_b0,&local_e8);
  plVar4 = plStack_e0;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f0fa2 FUN_1494f0fa2 body=297 status=ok
// SIG undefined FUN_1494f0fa2(void)

void FUN_1494f0fa2(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_140bb2e20(&local_98,param_3);
  if (DAT_14cc1ddd8 == 0) {
    uVar1 = FUN_14585f8b9();
    DAT_14cc1ddd8 = FUN_140002ddd(FUN_14673d195,uVar1,L"LiveLinkClearSubject");
  }
  local_a8 = param_7;
  local_b0 = param_6;
  local_b8 = param_5;
  local_c8 = &local_98;
  local_c0 = param_4;
  FUN_1494f0154(param_1,param_2,DAT_14cc1ddd8,1);
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_3);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f10cc FUN_1494f10cc body=1067 status=ok
// SIG undefined FUN_1494f10cc(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1494f10cc(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  longlong *local_170;
  undefined8 **local_168;
  longlong *local_160;
  longlong *local_158;
  longlong local_150 [4];
  longlong *plStack_130;
  longlong local_120;
  undefined8 *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_120 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if ((((param_2 != 0) && (lVar4 = *param_3, lVar4 != 0)) && (lVar3 = FUN_1411f0380(), lVar3 != 0))
     && (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)) && (lVar4 = *param_3, lVar4 != 0)))) {
    lVar3 = FUN_1411f0380();
    if (((lVar3 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *param_3;
    }
    plVar7 = *(longlong **)(lVar4 + 0x110);
    if (plVar7 == (longlong *)0x0) {
      FUN_140aa6c08(lVar4);
      plVar7 = *(longlong **)(lVar4 + 0x110);
    }
    lVar4 = (**(code **)(*plVar7 + 0x2a0))();
    lVar3 = FUN_1492dc406(param_4);
    if (lVar4 == lVar3) {
      if ((longlong)(int)param_1[0xf] != 0) {
        plVar7 = (longlong *)param_1[0xe];
        lVar4 = (longlong)(int)param_1[0xf] * 0x88;
        do {
          if (*plVar7 == param_2) {
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*param_1 + 0x58))(param_1,&local_120);
            }
            break;
          }
          plVar7 = plVar7 + 0x11;
          lVar4 = lVar4 + -0x88;
        } while (lVar4 != 0);
      }
      FUN_1494efcac(param_1);
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      plVar7 = local_150 + 3;
      FUN_1400021e4(&local_120,plVar7);
      local_118 = &DAT_14cc1de1c;
      plStack_110 = plVar7;
      FUN_145739864(&local_b8,local_150 + 2,&local_118,0);
      if (local_150[3] != 0) {
        FUN_1400020a8();
      }
      lVar4 = *param_3;
      if ((((lVar4 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
          (*(int *)(lVar4 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_3;
      }
      local_118 = *(undefined8 **)(lVar4 + 0x18);
      FUN_1400021e4(&local_118,plVar7);
      local_118 = &DAT_14cc1de24;
      plStack_110 = plVar7;
      FUN_145739864(&local_b8,local_150 + 2,&local_118,0);
      if (local_150[3] != 0) {
        FUN_1400020a8();
      }
      FUN_1494f14f8(&local_b8,param_5);
      if (0 < (int)param_1[0xd]) {
        local_118 = (undefined8 *)0x0;
        plStack_110 = (longlong *)0x0;
        FUN_1494f0056(param_1,local_120,&local_118);
        lVar4 = param_1[5];
        local_150[2] = 0x2bca2875f4373fff;
        local_150[1] = 0;
        local_150[3] = 0;
        plStack_130 = (longlong *)0x0;
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        FUN_140bb2e20(&local_108,&local_b8);
        uVar5 = FUN_1492dc406(param_4);
        uVar6 = FUN_1494f1672(param_4);
        local_158 = local_150 + 2;
        local_160 = local_150 + 1;
        local_168 = &local_118;
        local_178 = &local_108;
        local_170 = plVar7;
        FUN_1494f0154(lVar4,uVar6,uVar5,1);
        plVar7 = plStack_130;
        if (plStack_130 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_130 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_130)(plStack_130);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (local_118 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      local_150[0] = *param_3;
      if ((local_150[0] != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e();
      }
      local_178 = &local_b8;
      FUN_1494f04ec(param_1,local_120,local_150,param_4);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(&local_b8);
      uVar8 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      goto LAB_1494f1152;
    }
  }
  uVar8 = 0;
LAB_1494f1152:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1494f14f8 FUN_1494f14f8 body=375 status=ok
// SIG undefined FUN_1494f14f8(void)

void FUN_1494f14f8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
    FUN_140ede01e(param_1,uVar4);
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
      FUN_1406e2aa2(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0x20;
      uStack_50 = (longlong *)((longlong)iStack_64 * 0x20 + *local_80 + 8);
      FUN_1406e263c(param_1,local_34,&local_58,0);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f1672 FUN_1494f1672 body=149 status=ok
// SIG undefined FUN_1494f1672(void)

undefined8 FUN_1494f1672(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1446f4bba();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar4 = -*(int *)((longlong)plVar1 + 0x5c) &
              ((int)plVar1[0xb] + *(int *)((longlong)plVar1 + 0x5c)) - 1U;
      uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
      (**(code **)(*plVar1 + 0x2e8))(plVar1,uVar3,1);
      FUN_1449b16b6(plVar1,uVar3,*(undefined8 *)(param_1 + 0x10),1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1494f1708 FUN_1494f1708 body=55 status=ok
// SIG undefined FUN_1494f1708(void)

void FUN_1494f1708(longlong *param_1,undefined8 *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  (**(code **)(*param_1 + 0x10))(param_1,*param_2);
                    /* WARNING: Could not recover jumptable at 0x0001494f1738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return;
}



// FUNCTION 1494f1740 FUN_1494f1740 body=114 status=ok
// SIG undefined FUN_1494f1740(void)

void FUN_1494f1740(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  FUN_1494f084c(param_1,&local_30);
  FUN_1494f0e84(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001494f17a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f17b4 FUN_1494f17b4 body=196 status=ok
// SIG undefined FUN_1494f17b4(void)

void FUN_1494f17b4(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  lVar3 = FUN_1494f3542(param_1 + 0x90,
                        ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4),param_2);
  FUN_144756208(lVar3 + 0x20,param_3);
  FUN_1492e3c24(lVar3 + 0x30,param_4);
  *(undefined8 *)(lVar3 + 0xa0) = param_5;
  FUN_1494f02f6(param_1,*param_2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001494f1871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1494f1878 FUN_1494f1878 body=231 status=ok
// SIG undefined FUN_1494f1878(void)

void FUN_1494f1878(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  uVar1 = *param_2;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  lVar6 = FUN_1494f3542(param_1 + 0x90,
                        ((uint)uVar1 << 0x10 | uVar7) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4),param_2);
  FUN_144756208(lVar6 + 0x20,param_3);
  FUN_1492e3c24(lVar6 + 0x30,param_4);
  FUN_140bb2e20(lVar6 + 0x40,param_5);
  uVar3 = *(undefined4 *)(param_5 + 0x54);
  uVar4 = *(undefined4 *)(param_5 + 0x58);
  uVar5 = *(undefined4 *)(param_5 + 0x5c);
  *(undefined4 *)(lVar6 + 0x90) = *(undefined4 *)(param_5 + 0x50);
  *(undefined4 *)(lVar6 + 0x94) = uVar3;
  *(undefined4 *)(lVar6 + 0x98) = uVar4;
  *(undefined4 *)(lVar6 + 0x9c) = uVar5;
  *(undefined8 *)(lVar6 + 0xa0) = param_6;
  FUN_1494f02f6(param_1,*param_2,lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001494f1958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1494f1960 FUN_1494f1960 body=746 status=ok
// SIG undefined FUN_1494f1960(void)

ulonglong FUN_1494f1960(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  longlong *local_170;
  undefined8 **local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong *plStack_130;
  longlong local_120;
  undefined8 *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_120 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x78) != 0)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar7) == param_2) {
        lVar8 = *(longlong *)(param_1 + 0x70) - lVar8;
        if (lVar8 != 0) {
          lVar8 = FUN_14479d2ce(lVar8 + 8);
          if (lVar8 != 0) {
            plVar6 = *(longlong **)(lVar8 + 0x110);
            if (plVar6 == (longlong *)0x0) {
              FUN_140aa6c08(lVar8);
              plVar6 = *(longlong **)(lVar8 + 0x110);
            }
            lVar8 = (**(code **)(*plVar6 + 0x2a8))();
            lVar7 = FUN_1492dc4d4(param_3);
            uVar9 = 0;
            if (lVar8 == lVar7) {
              FUN_1494efcac(param_1);
              local_98 = 0;
              local_90 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_8c = 0xffffffff00000080;
              local_84 = 0;
              local_78 = 0;
              local_70 = 0;
              FUN_1400021e4(&local_120,&local_138);
              local_118 = &DAT_14cc1de1c;
              plStack_110 = &local_138;
              FUN_145739864(&local_b8,&local_140,&local_118,0);
              if (local_138 != 0) {
                FUN_1400020a8();
              }
              FUN_1494f14f8(&local_b8,param_4);
              if (0 < *(int *)(param_1 + 0x68)) {
                local_118 = (undefined8 *)0x0;
                plStack_110 = (longlong *)0x0;
                FUN_1494f0056(param_1,local_120,&local_118);
                uVar3 = *(undefined8 *)(param_1 + 0x28);
                local_140 = 0x2bca2875f4373fff;
                local_148 = 0;
                local_138 = 0;
                plStack_130 = (longlong *)0x0;
                local_e8 = 0;
                local_e0 = 0;
                local_108 = 0;
                uStack_100 = 0;
                local_dc = 0xffffffff00000080;
                local_d4 = 0;
                local_c8 = 0;
                local_c0 = 0;
                FUN_140bb2e20(&local_108,&local_b8);
                uVar4 = FUN_1492dc4d4(param_3);
                uVar5 = FUN_1494f1c4c(param_3);
                local_158 = &local_140;
                local_160 = &local_148;
                local_178 = &local_108;
                local_170 = &local_138;
                local_168 = &local_118;
                FUN_1494f0154(uVar3,uVar5,uVar4,0);
                plVar6 = plStack_130;
                if (plStack_130 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_130 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_130)(plStack_130);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar6 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                if (local_118 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
              FUN_1494f06fa(param_1,local_120,param_3,&local_b8);
              local_70 = 0;
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              FUN_140bb2a1a(&local_b8);
              uVar9 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
            }
            goto LAB_1494f19e5;
          }
        }
        break;
      }
      lVar8 = lVar8 + -0x88;
      lVar7 = lVar7 + 0x88;
    } while ((longlong)*(int *)(param_1 + 0x78) * -0x88 - lVar8 != 0);
  }
  uVar9 = 0;
LAB_1494f19e5:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f1c4c FUN_1494f1c4c body=149 status=ok
// SIG undefined FUN_1494f1c4c(void)

undefined8 FUN_1494f1c4c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1446f4bba();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      uVar4 = -*(int *)((longlong)plVar1 + 0x5c) &
              ((int)plVar1[0xb] + *(int *)((longlong)plVar1 + 0x5c)) - 1U;
      uVar3 = FUN_14001cc68((longlong)(int)(uVar4 + (uVar4 == 0)),0);
      (**(code **)(*plVar1 + 0x2e8))(plVar1,uVar3,1);
      FUN_1449b16b6(plVar1,uVar3,*(undefined8 *)(param_1 + 0x10),1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1494f1ce2 FUN_1494f1ce2 body=178 status=ok
// SIG undefined FUN_1494f1ce2(void)

ulonglong FUN_1494f1ce2(ulonglong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
  EnterCriticalSection(lpCriticalSection);
  QueryPerformanceCounter(&local_20);
  piVar1 = (int *)(param_1 + 0x68);
  if ((longlong)*piVar1 == 0) {
    param_1 = 0;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x60);
    lVar3 = 0;
    do {
      bVar4 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0 + -10.0 <=
              *(double *)(*plVar2 + 0x10 + lVar3);
      param_1 = CONCAT71((int7)(param_1 >> 8),bVar4);
      if (bVar4) break;
      bVar4 = (longlong)*piVar1 * 0x18 + -0x18 != lVar3;
      lVar3 = lVar3 + 0x18;
    } while (bVar4);
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 1494f1d96 FUN_1494f1d96 body=120 status=ok
// SIG undefined FUN_1494f1d96(void)

undefined8 FUN_1494f1d96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  local_28 = 0;
  FUN_14009d848(&local_30,param_3);
  FUN_1448b6402(param_1 + 0xe0,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f1e22 FUN_1494f1e22 body=505 status=ok
// SIG undefined FUN_1494f1e22(void)

void FUN_1494f1e22(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  void **local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined4 *local_b8;
  ulonglong uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_90 = 0x2bca2875f4373fff;
  local_98 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 1;
  FUN_14706f770(&local_b8,0);
  _Src = local_b8;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *local_b8 = *param_4;
  local_b8[1] = uVar3;
  local_b8[2] = uVar4;
  local_b8[3] = uVar5;
  local_a8 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_b0;
  local_a0 = (int)uStack_b0;
  if (lVar8 == 0) {
    local_9c = 0;
  }
  else {
    FUN_14707042c(&local_a8,uStack_b0 & 0xffffffff,0);
    memcpy(local_a8,_Src,lVar8 << 4);
  }
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_140bb2e20(&local_88,param_3);
  if (DAT_14cc1dd90 == 0) {
    uVar7 = FUN_14585f8b9();
    DAT_14cc1dd90 = FUN_140002ddd(FUN_14673cfd3,uVar7,L"LiveLinkPongMessage");
  }
  local_d8 = &local_90;
  local_e0 = &local_98;
  local_e8 = &local_a8;
  local_f0 = &local_c8;
  local_f8 = &local_88;
  FUN_1494f0154(param_1,param_2,DAT_14cc1dd90,0);
  plVar6 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_3);
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f201c FUN_1494f201c body=392 status=ok
// SIG undefined FUN_1494f201c(void)

void FUN_1494f201c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_c8 [32];
  int *local_a8;
  LARGE_INTEGER local_a0;
  undefined1 local_98 [80];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  plVar1 = (longlong *)*param_3;
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  piVar8 = (int *)param_1[0xc];
  lVar4 = (longlong)(int)param_1[0xd];
  if (lVar4 == 0) {
    bVar3 = true;
    piVar9 = piVar8;
  }
  else {
    local_a8 = piVar8 + lVar4 * 6;
    lVar4 = lVar4 * 0x18;
    do {
      piVar5 = (int *)(**(code **)(*plVar1 + 0x48))(plVar1);
      bVar3 = piVar8[3] != piVar5[3] ||
              (piVar8[2] != piVar5[2] || (piVar8[1] != piVar5[1] || *piVar8 != *piVar5));
      piVar9 = piVar8;
      if (piVar8[3] == piVar5[3] &&
          (piVar8[2] == piVar5[2] && (piVar8[1] == piVar5[1] && *piVar8 == *piVar5))) break;
      piVar8 = piVar8 + 6;
      lVar4 = lVar4 + -0x18;
      piVar9 = local_a8;
    } while (lVar4 != 0);
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar8 = (int *)((longlong)plVar2 + 0xc);
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (!(bool)(bVar3 | piVar9 == (int *)0x0)) {
    QueryPerformanceCounter(&local_a0);
    *(double *)(piVar9 + 4) = (double)local_a0.QuadPart * DAT_14c83f420 + 16777216.0;
    lVar4 = param_1[5];
    uVar6 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    (**(code **)(*param_1 + 0x40))(param_1,local_98);
    uVar7 = FUN_14001cc68(1,0);
    FUN_1494f21a6(lVar4,uVar7,local_98,uVar6);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f21a6 FUN_1494f21a6 body=505 status=ok
// SIG undefined FUN_1494f21a6(void)

void FUN_1494f21a6(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  void **local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined4 *local_b8;
  ulonglong uStack_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_90 = 0x2bca2875f4373fff;
  local_98 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 1;
  FUN_14706f770(&local_b8,0);
  _Src = local_b8;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *local_b8 = *param_4;
  local_b8[1] = uVar3;
  local_b8[2] = uVar4;
  local_b8[3] = uVar5;
  local_a8 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_b0;
  local_a0 = (int)uStack_b0;
  if (lVar8 == 0) {
    local_9c = 0;
  }
  else {
    FUN_14707042c(&local_a8,uStack_b0 & 0xffffffff,0);
    memcpy(local_a8,_Src,lVar8 << 4);
  }
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_140bb2e20(&local_88,param_3);
  if (DAT_14cc1ddc0 == 0) {
    uVar7 = FUN_14585f8b9();
    DAT_14cc1ddc0 = FUN_140002ddd(FUN_14673d0ff,uVar7,L"LiveLinkHeartbeatMessage");
  }
  local_d8 = &local_90;
  local_e0 = &local_98;
  local_e8 = &local_a8;
  local_f0 = &local_c8;
  local_f8 = &local_88;
  FUN_1494f0154(param_1,param_2,DAT_14cc1ddc0,0);
  plVar6 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_3 + 0x48) = 0;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_3);
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f23a0 FUN_1494f23a0 body=103 status=ok
// SIG undefined FUN_1494f23a0(void)

undefined8 * FUN_1494f23a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1494f091e(uVar1,param_2);
  *param_1 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14bd26c20;
  puVar2[2] = uVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1494f2408 FUN_1494f2408 body=164 status=ok
// SIG undefined FUN_1494f2408(void)

longlong FUN_1494f2408(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd26c38;
  puVar3[1] = param_2;
  puVar3[2] = FUN_144536100;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd26c50;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1494f24ac FUN_1494f24ac body=164 status=ok
// SIG undefined FUN_1494f24ac(void)

longlong FUN_1494f24ac(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd26c68;
  puVar3[1] = param_2;
  puVar3[2] = FUN_1445361b6;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd26c80;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1494f2550 FUN_1494f2550 body=164 status=ok
// SIG undefined FUN_1494f2550(void)

longlong FUN_1494f2550(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd26c98;
  puVar3[1] = param_2;
  puVar3[2] = FUN_1494f201c;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd26cb0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 1494f25f4 FUN_1494f25f4 body=43 status=ok
// SIG undefined FUN_1494f25f4(void)

undefined8 FUN_1494f25f4(undefined8 param_1,int param_2)

{
  FUN_1494f0ba2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1494f26d0 FUN_1494f26d0 body=59 status=ok
// SIG undefined FUN_1494f26d0(void)

undefined8 FUN_1494f26d0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f27c2 FUN_1494f27c2 body=47 status=ok
// SIG undefined FUN_1494f27c2(void)

void FUN_1494f27c2(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494f2808 FUN_1494f2808 body=83 status=ok
// SIG undefined FUN_1494f2808(void)

undefined1 FUN_1494f2808(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    uVar4 = *(undefined4 *)(param_3 + 0x30);
    uVar5 = *(undefined4 *)(param_3 + 0x34);
    uVar6 = *(undefined4 *)(param_3 + 0x38);
    uVar7 = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined4 *)(param_2 + 0x30) = uVar4;
    *(undefined4 *)(param_2 + 0x34) = uVar5;
    *(undefined4 *)(param_2 + 0x38) = uVar6;
    *(undefined4 *)(param_2 + 0x3c) = uVar7;
    param_2 = param_2 + 0x40;
    param_3 = param_3 + 0x40;
  }
  return 1;
}



// FUNCTION 1494f2884 FUN_1494f2884 body=59 status=ok
// SIG undefined FUN_1494f2884(void)

undefined8 FUN_1494f2884(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f2922 FUN_1494f2922 body=51 status=ok
// SIG undefined FUN_1494f2922(void)

void FUN_1494f2922(longlong *param_1)

{
  if ((char)param_1[8] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1494f29c2 FUN_1494f29c2 body=59 status=ok
// SIG undefined FUN_1494f29c2(void)

undefined8 FUN_1494f29c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f2aac FUN_1494f2aac body=59 status=ok
// SIG undefined FUN_1494f2aac(void)

undefined8 FUN_1494f2aac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f2bba FUN_1494f2bba body=59 status=ok
// SIG undefined FUN_1494f2bba(void)

undefined8 FUN_1494f2bba(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f2c84 FUN_1494f2c84 body=47 status=ok
// SIG undefined FUN_1494f2c84(void)

void FUN_1494f2c84(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494f2cca FUN_1494f2cca body=75 status=ok
// SIG undefined FUN_1494f2cca(void)

undefined8 FUN_1494f2cca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1406fa324(param_2,param_3);
    FUN_14054c6c4(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1494f2d3e FUN_1494f2d3e body=59 status=ok
// SIG undefined FUN_1494f2d3e(void)

undefined8 FUN_1494f2d3e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f2ddc FUN_1494f2ddc body=51 status=ok
// SIG undefined FUN_1494f2ddc(void)

void FUN_1494f2ddc(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1494f2eba FUN_1494f2eba body=156 status=ok
// SIG undefined FUN_1494f2eba(void)

undefined8 FUN_1494f2eba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    do {
      *(undefined8 *)(param_2 + lVar4) = *(undefined8 *)(param_3 + lVar4);
      FUN_144756208();
      FUN_1492e3c24(param_2 + lVar4 + 0x18,param_3 + lVar4 + 0x18);
      lVar1 = param_3 + lVar4;
      lVar2 = param_2 + lVar4;
      FUN_140bb2e20(lVar2 + 0x28,lVar1 + 0x28);
      uVar3 = *(undefined8 *)(lVar1 + 0x80);
      *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar1 + 0x78);
      *(undefined8 *)(lVar2 + 0x80) = uVar3;
      *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar1 + 0x88);
      lVar4 = lVar4 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1494f2f7e FUN_1494f2f7e body=59 status=ok
// SIG undefined FUN_1494f2f7e(void)

undefined8 FUN_1494f2f7e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f2fca FUN_1494f2fca body=40 status=ok
// SIG undefined FUN_1494f2fca(void)

void FUN_1494f2fca(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    FUN_1494f3040(param_2);
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 1494f3040 FUN_1494f3040 body=84 status=ok
// SIG undefined FUN_1494f3040(void)

void FUN_1494f3040(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494f3096 FUN_1494f3096 body=52 status=ok
// SIG undefined FUN_1494f3096(void)

void FUN_1494f3096(longlong *param_1)

{
  FUN_1494f30ca();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1494f30ca FUN_1494f30ca body=313 status=ok
// SIG undefined FUN_1494f30ca(void)

void FUN_1494f30ca(longlong *param_1)

{
  longlong *plVar1;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1494f3204(*local_68 + (longlong)iStack_4c * 0xb8 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14018c050(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f3204 FUN_1494f3204 body=117 status=ok
// SIG undefined FUN_1494f3204(void)

void FUN_1494f3204(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 8);
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



// FUNCTION 1494f327a FUN_1494f327a body=34 status=ok
// SIG undefined FUN_1494f327a(void)

void FUN_1494f327a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd26be0;
  return;
}



// FUNCTION 1494f329c FUN_1494f329c body=36 status=ok
// SIG undefined FUN_1494f329c(void)

undefined8 FUN_1494f329c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1494f32dc FUN_1494f32dc body=93 status=ok
// SIG undefined FUN_1494f32dc(void)

void FUN_1494f32dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd26b70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1494f333a FUN_1494f333a body=126 status=ok
// SIG undefined FUN_1494f333a(void)

void FUN_1494f333a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd26b70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001494f33a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1494f33c4 FUN_1494f33c4 body=21 status=ok
// SIG undefined FUN_1494f33c4(void)

undefined8 FUN_1494f33c4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1494f33da FUN_1494f33da body=34 status=ok
// SIG undefined FUN_1494f33da(void)

undefined8 FUN_1494f33da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1494f3400 FUN_1494f3400 body=147 status=ok
// SIG undefined FUN_1494f3400(void)

void FUN_1494f3400(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494f3494 FUN_1494f3494 body=62 status=ok
// SIG undefined FUN_1494f3494(void)

void FUN_1494f3494(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494f34d2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 1494f34d2 FUN_1494f34d2 body=112 status=ok
// SIG undefined FUN_1494f34d2(void)

ulonglong FUN_1494f34d2(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1494f350c;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1494f350c:
  return param_2 & 0xffffffff;
}



// FUNCTION 1494f3542 FUN_1494f3542 body=189 status=ok
// SIG undefined FUN_1494f3542(void)

longlong FUN_1494f3542(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xb8;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xb8) == *param_3) {
          if (lVar3 != 0) goto LAB_1494f35e2;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xb0);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1494f3600(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xb8 + *param_1;
LAB_1494f35e2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1494f3600 FUN_1494f3600 body=281 status=ok
// SIG undefined FUN_1494f3600(void)

undefined4 * FUN_1494f3600(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_1494f371a(param_1,local_48);
  FUN_1494f38aa(param_4,local_40);
  *(undefined4 *)(local_40 + 0xb0) = 0xffffffff;
  cVar1 = FUN_1494f3806(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0xb4) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb0) =
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
      FUN_1494f3a8c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f371a FUN_1494f371a body=235 status=ok
// SIG undefined FUN_1494f371a(void)

int * FUN_1494f371a(longlong *param_1,int *param_2)

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
      FUN_140d69e26(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xb8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xb8) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xb8 + *param_1;
  return param_2;
}



// FUNCTION 1494f3806 FUN_1494f3806 body=164 status=ok
// SIG undefined FUN_1494f3806(void)

undefined8 FUN_1494f3806(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xb8);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xb8) == *param_3) {
          FUN_1494f3204((longlong)_Dst + 8);
          memmove(_Dst,param_3,0xb0);
          FUN_1494f3a12(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xb0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1494f38aa FUN_1494f38aa body=167 status=ok
// SIG undefined FUN_1494f38aa(void)

undefined8 * FUN_1494f38aa(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [108];
  undefined8 local_5c;
  undefined4 local_38;
  undefined1 *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memset(local_c8,0,0xa8);
  local_5c = 0xffffffff00000080;
  local_38 = 0;
  local_30 = &DAT_100000018;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1494f3952(param_2 + 1,local_c8);
  FUN_1494f3204(local_c8);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f3952 FUN_1494f3952 body=191 status=ok
// SIG undefined FUN_1494f3952(void)

undefined8 * FUN_1494f3952(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  FUN_140d69258(param_1 + 8,param_2 + 8);
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  param_1[0x14] = param_2[0x14];
  return param_1;
}



// FUNCTION 1494f3a12 FUN_1494f3a12 body=122 status=ok
// SIG undefined FUN_1494f3a12(void)

void FUN_1494f3a12(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xb8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xb8 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1494f3a8c FUN_1494f3a8c body=482 status=ok
// SIG undefined FUN_1494f3a8c(void)

void FUN_1494f3a8c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xb8;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xb4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb0 + lVar7) =
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



// FUNCTION 1494f3c70 FUN_1494f3c70 body=150 status=ok
// SIG undefined FUN_1494f3c70(void)

void FUN_1494f3c70(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x88,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x88)) {
      uVar5 = uVar4 / 0x88 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x88,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494f3d08 FUN_1494f3d08 body=132 status=ok
// SIG undefined FUN_1494f3d08(void)

void FUN_1494f3d08(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1494f3d8e FUN_1494f3d8e body=138 status=ok
// SIG undefined FUN_1494f3d8e(void)

void FUN_1494f3d8e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xb8) == param_2) {
          FUN_1494f3e18(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0xb8 + *param_1 + 0xb0);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1494f3e18 FUN_1494f3e18 body=138 status=ok
// SIG undefined FUN_1494f3e18(void)

void FUN_1494f3e18(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0xb8;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0xb4 + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0xb0 + lVar6 * 0xb8);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0xb8 + 0xb0);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0xb0);
  FUN_1494f3204(*param_1 + lVar2 + 8);
  FUN_1494f3a12(param_1,param_2);
  return;
}



// FUNCTION 1494f3ea2 FUN_1494f3ea2 body=106 status=ok
// SIG undefined FUN_1494f3ea2(void)

void FUN_1494f3ea2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x80 + lVar1);
  FUN_1494f3f4a(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x80),(longlong)iVar3 << 7);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1494f3f0c FUN_1494f3f0c body=62 status=ok
// SIG undefined FUN_1494f3f0c(void)

void FUN_1494f3f0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494f3f82(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,8);
  }
  return;
}



// FUNCTION 1494f3f4a FUN_1494f3f4a body=55 status=ok
// SIG undefined FUN_1494f3f4a(void)

void FUN_1494f3f4a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x30);
  FUN_1448eac94(param_1 + 8);
  return;
}



// FUNCTION 1494f3f82 FUN_1494f3f82 body=93 status=ok
// SIG undefined FUN_1494f3f82(void)

ulonglong FUN_1494f3f82(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 7,8);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 1494f3fe0 FUN_1494f3fe0 body=124 status=ok
// SIG undefined FUN_1494f3fe0(void)

void FUN_1494f3fe0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x88 + lVar1);
  FUN_1494f409a(_Dst);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x88),(longlong)iVar3 * 0x88);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1494f405c FUN_1494f405c body=62 status=ok
// SIG undefined FUN_1494f405c(void)

void FUN_1494f405c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1494f40d4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x88,8);
  }
  return;
}



// FUNCTION 1494f409a FUN_1494f409a body=58 status=ok
// SIG undefined FUN_1494f409a(void)

void FUN_1494f409a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x38);
  FUN_1448eac94(param_1 + 0x10);
  return;
}



// FUNCTION 1494f40d4 FUN_1494f40d4 body=118 status=ok
// SIG undefined FUN_1494f40d4(void)

ulonglong FUN_1494f40d4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x88) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1494f4111;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x88,8);
      param_2 = param_2 / 0x88;
    }
  }
LAB_1494f4111:
  return param_2 & 0xffffffff;
}



// FUNCTION 1494f414a FUN_1494f414a body=41 status=ok
// SIG undefined FUN_1494f414a(void)

void FUN_1494f414a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1494f409a(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1494f4173 FUN_1494f4173 body=38 status=ok
// SIG undefined FUN_1494f4173(void)

void FUN_1494f4173(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1494f3f4a(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 1494f419a FUN_1494f419a body=271 status=ok
// SIG undefined FUN_1494f419a(void)

undefined8 *
FUN_1494f419a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(param_1 + 4) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = 2;
  QueryPerformanceCounter(&local_38);
  param_1[7] = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f42c2 FUN_1494f42c2 body=34 status=ok
// SIG undefined FUN_1494f42c2(void)

undefined8 FUN_1494f42c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1494f42e4 FUN_1494f42e4 body=202 status=ok
// SIG undefined FUN_1494f42e4(void)

void FUN_1494f42e4(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc1dd78 == 0) {
    uVar3 = FUN_14585f8b9();
    DAT_14cc1dd78 = FUN_140002ddd(FUN_14673cf3c,uVar3,L"LiveLinkPingMessage");
    if (DAT_14cc1dd78 == 0) goto LAB_1494f4337;
  }
  lVar2 = DAT_14cc1dd78;
  FUN_14706e08c(*param_2,&local_40);
  FUN_1414d7078(lVar2,&local_50);
  if ((local_40 == local_50) && (local_38 == local_48)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (*pcVar1)(uVar3,uVar4,param_2);
  }
LAB_1494f4337:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f43b0 FUN_1494f43b0 body=34 status=ok
// SIG undefined FUN_1494f43b0(void)

undefined8 FUN_1494f43b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1494f43ec FUN_1494f43ec body=34 status=ok
// SIG undefined FUN_1494f43ec(void)

undefined8 FUN_1494f43ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1494f440e FUN_1494f440e body=202 status=ok
// SIG undefined FUN_1494f440e(void)

void FUN_1494f440e(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc1dda8 == 0) {
    uVar3 = FUN_14585f8b9();
    DAT_14cc1dda8 = FUN_140002ddd(FUN_14673d069,uVar3,L"LiveLinkConnectMessage");
    if (DAT_14cc1dda8 == 0) goto LAB_1494f4461;
  }
  lVar2 = DAT_14cc1dda8;
  FUN_14706e08c(*param_2,&local_40);
  FUN_1414d7078(lVar2,&local_50);
  if ((local_40 == local_50) && (local_38 == local_48)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (*pcVar1)(uVar3,uVar4,param_2);
  }
LAB_1494f4461:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f44da FUN_1494f44da body=34 status=ok
// SIG undefined FUN_1494f44da(void)

undefined8 FUN_1494f44da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1494f4516 FUN_1494f4516 body=34 status=ok
// SIG undefined FUN_1494f4516(void)

undefined8 FUN_1494f4516(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1494f4538 FUN_1494f4538 body=202 status=ok
// SIG undefined FUN_1494f4538(void)

void FUN_1494f4538(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cc1ddc0 == 0) {
    uVar3 = FUN_14585f8b9();
    DAT_14cc1ddc0 = FUN_140002ddd(FUN_14673d0ff,uVar3,L"LiveLinkHeartbeatMessage");
    if (DAT_14cc1ddc0 == 0) goto LAB_1494f458b;
  }
  lVar2 = DAT_14cc1ddc0;
  FUN_14706e08c(*param_2,&local_40);
  FUN_1414d7078(lVar2,&local_50);
  if ((local_40 == local_50) && (local_38 == local_48)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    uVar4 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    (*pcVar1)(uVar3,uVar4,param_2);
  }
LAB_1494f458b:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f4604 FUN_1494f4604 body=34 status=ok
// SIG undefined FUN_1494f4604(void)

undefined8 FUN_1494f4604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1494f4640 FUN_1494f4640 body=34 status=ok
// SIG undefined FUN_1494f4640(void)

undefined8 FUN_1494f4640(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1494f4662 FUN_1494f4662 body=141 status=ok
// SIG undefined FUN_1494f4662(void)

void FUN_1494f4662(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined1 local_2c [16];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0x20001;
  if (DAT_14cc1dd78 == 0) {
    uVar1 = FUN_14585f8b9();
    DAT_14cc1dd78 = FUN_140002ddd(FUN_14673cf3c,uVar1,L"LiveLinkPingMessage");
  }
  FUN_1414d7078(DAT_14cc1dd78,local_2c);
  FUN_1414d7090(param_1,local_2c,&local_1c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f4708 FUN_1494f4708 body=111 status=ok
// SIG undefined FUN_1494f4708(void)

void FUN_1494f4708(double *param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  
  param_3 = param_3 - param_2;
  dVar1 = *param_1;
  dVar4 = ABS(dVar1 - param_3);
  if (dVar4 < param_1[1] || dVar4 == param_1[1]) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    iVar3 = *(int *)((longlong)param_1 + 0x1c);
    *(int *)((longlong)param_1 + 0x1c) = iVar3 + 1;
    if (*(int *)(param_1 + 3) <= iVar3) goto LAB_1494f4772;
  }
  dVar2 = param_1[2];
  if (dVar2 <= dVar4) {
    param_3 = (double)(~-(ulonglong)(dVar1 < param_3) & (ulonglong)-dVar2 |
                      (ulonglong)dVar2 & -(ulonglong)(dVar1 < param_3)) + dVar1;
  }
LAB_1494f4772:
  *param_1 = param_3;
  return;
}



// FUNCTION 1494f477c FUN_1494f477c body=466 status=ok
// SIG undefined FUN_1494f477c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1494f477c(double *param_1,double *param_2,undefined1 (*param_3) [16],float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  
  dVar10 = (double)(1.0 - param_4);
  dVar11 = (double)(1.0 - param_4);
  dVar17 = param_1[8];
  dVar18 = param_1[9];
  dVar19 = param_1[10];
  dVar20 = param_1[0xb];
  dVar21 = param_1[4];
  dVar5 = param_1[5] * dVar11;
  dVar22 = param_1[6];
  dVar7 = param_1[7] * dVar11;
  dVar35 = *param_1 * dVar10;
  dVar39 = param_1[1] * dVar11;
  dVar42 = dVar10 * param_1[2];
  dVar44 = dVar11 * param_1[3];
  auVar12._8_4_ = SUB84(dVar39,0);
  auVar12._0_8_ = dVar35;
  auVar12._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  *param_3 = auVar12;
  auVar8._8_4_ = SUB84(dVar44,0);
  auVar8._0_8_ = dVar42;
  auVar8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  param_3[1] = auVar8;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar21 * dVar10;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  param_3[2] = auVar4;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar22 * dVar10;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  param_3[3] = auVar6;
  *(double *)param_3[4] = dVar17 * dVar10;
  *(double *)(param_3[4] + 8) = dVar18 * dVar11;
  *(double *)param_3[5] = dVar19 * dVar10;
  *(double *)(param_3[5] + 8) = dVar20 * dVar11;
  dVar40 = (double)param_4;
  dVar41 = (double)param_4;
  dVar14 = *param_2 * dVar40;
  dVar29 = param_2[1] * dVar41;
  dVar33 = param_2[2] * dVar40;
  dVar16 = param_2[3] * dVar41;
  dVar34 = dVar42 * dVar33 + dVar35 * dVar14;
  dVar38 = dVar44 * dVar16 + dVar39 * dVar29;
  lVar23 = -(ulonglong)(0.0 <= dVar34 + dVar38);
  lVar24 = -(ulonglong)(0.0 <= dVar34 + dVar38);
  uVar26 = (undefined4)lVar24;
  uVar27 = (undefined4)((ulonglong)lVar24 >> 0x20);
  auVar36._0_8_ = 0.0 - dVar14;
  auVar36._8_8_ = 0.0 - dVar29;
  auVar43._0_8_ = 0.0 - dVar33;
  auVar43._8_8_ = 0.0 - dVar16;
  auVar37._8_4_ = uVar26;
  auVar37._0_8_ = lVar23;
  auVar37._12_4_ = uVar27;
  auVar13._8_4_ = SUB84(dVar29,0);
  auVar13._0_8_ = dVar14;
  auVar13._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  auVar37 = blendvpd(auVar36,auVar13,auVar37);
  dVar35 = auVar37._0_8_ + dVar35;
  dVar39 = auVar37._8_8_ + dVar39;
  auVar31._8_4_ = uVar26;
  auVar31._0_8_ = lVar23;
  auVar31._12_4_ = uVar27;
  auVar15._8_4_ = SUB84(dVar16,0);
  auVar15._0_8_ = dVar33;
  auVar15._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar37 = blendvpd(auVar43,auVar15,auVar31);
  dVar42 = auVar37._0_8_ + dVar42;
  dVar44 = auVar37._8_8_ + dVar44;
  *(double *)*param_3 = dVar35;
  *(double *)(*param_3 + 8) = dVar39;
  *(double *)param_3[1] = dVar42;
  *(double *)(param_3[1] + 8) = dVar44;
  dVar14 = param_2[6];
  dVar5 = param_2[5] * dVar41 + dVar5;
  dVar7 = param_2[7] * dVar41 + dVar7;
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = param_2[4] * dVar40 + dVar21 * dVar10;
  auVar1._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  param_3[2] = auVar1;
  auVar9._8_4_ = SUB84(dVar7,0);
  auVar9._0_8_ = dVar14 * dVar40 + dVar22 * dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  param_3[3] = auVar9;
  dVar7 = param_2[10];
  dVar14 = param_2[0xb];
  dVar5 = param_2[9] * dVar41 + dVar18 * dVar11;
  auVar28._0_8_ = dVar35 * dVar35;
  auVar28._8_8_ = dVar39 * dVar39;
  dVar29 = dVar42 * dVar42 + auVar28._0_8_;
  dVar33 = dVar44 * dVar44 + auVar28._8_8_;
  auVar30._0_8_ = dVar29 + dVar33;
  auVar30._8_8_ = dVar29 + dVar33;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = param_2[8] * dVar40 + dVar17 * dVar10;
  auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  param_3[4] = auVar2;
  *(double *)param_3[5] = dVar40 * dVar7 + dVar19 * dVar10;
  *(double *)(param_3[5] + 8) = dVar41 * dVar14 + dVar20 * dVar11;
  uVar25 = -(ulonglong)(1e-08 <= auVar30._8_8_);
  auVar37 = sqrtpd(auVar28,auVar30);
  auVar31 = divpd(_DAT_149934d80,auVar37);
  auVar32._0_8_ = auVar31._0_8_ * dVar42;
  auVar32._8_8_ = auVar31._8_8_ * dVar44;
  auVar3._8_4_ = (int)uVar25;
  auVar3._0_8_ = -(ulonglong)(1e-08 <= auVar30._0_8_);
  auVar3._12_4_ = (int)(uVar25 >> 0x20);
  auVar37 = blendvpd(_DAT_149935300,auVar32,auVar3);
  *(ulonglong *)*param_3 =
       (ulonglong)(dVar35 * auVar31._0_8_) & -(ulonglong)(1e-08 <= auVar30._0_8_);
  *(ulonglong *)(*param_3 + 8) = (ulonglong)(dVar39 * auVar31._8_8_) & uVar25;
  param_3[1] = auVar37;
  return;
}



// FUNCTION 1494f494e FUN_1494f494e body=74 status=ok
// SIG undefined FUN_1494f494e(void)

undefined8 FUN_1494f494e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc4d4();
  if (((lVar2 == 0) || (lVar3 = FUN_146719588(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1494f4998 FUN_1494f4998 body=113 status=ok
// SIG undefined FUN_1494f4998(void)

void FUN_1494f4998(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140ee84a4(param_3,(int)param_1[1],0);
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_1494f477c(*param_1 + lVar1,*param_2 + lVar1,*param_3 + lVar1,param_4);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x60;
    } while (lVar2 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1494f4a0a FUN_1494f4a0a body=49 status=ok
// SIG undefined FUN_1494f4a0a(void)

longlong * FUN_1494f4a0a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494f4a3c FUN_1494f4a3c body=40 status=ok
// SIG undefined FUN_1494f4a3c(void)

void FUN_1494f4a3c(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1494f4a64(param_2,param_4,param_5,*(undefined1 *)(param_1 + 8),param_6);
  return;
}



// FUNCTION 1494f4a64 FUN_1494f4a64 body=533 status=ok
// SIG undefined FUN_1494f4a64(void)

void FUN_1494f4a64(double param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = -1;
  local_70 = -1;
  local_78 = param_5;
  cVar2 = FUN_1494f6e60();
  if (cVar2 == '\0') {
    *(undefined1 *)(param_5 + 0x11) = 1;
  }
  else {
    lVar6 = (longlong)local_6c;
    lVar7 = (longlong)local_70;
    lVar5 = param_3 + 0x28;
    if (local_6c == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
    }
    uVar3 = FUN_146719588();
    local_68 = 0;
    FUN_14485c47a(&local_68,uVar3);
    uVar3 = local_68;
    (**(code **)(*(longlong *)(param_3 + 0x28) + 0x40))(lVar5);
    *(undefined8 *)(param_3 + 0x30) = uVar3;
    (*(code *)**(undefined8 **)(param_3 + 0x28))(lVar5);
    lVar1 = *param_2;
    lVar6 = lVar1 + lVar6 * 0x28;
    dVar9 = **(double **)(lVar1 + 0x10 + lVar7 * 0x28) - **(double **)(lVar6 + 0x10);
    dVar10 = (param_1 - **(double **)(lVar6 + 0x10)) / dVar9;
    dVar9 = ABS(dVar9);
    if ((1e-08 < dVar9) && (ABS(dVar10) <= 1e-08)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
    }
    lVar1 = lVar1 + lVar7 * 0x28;
    uVar8 = -(ulonglong)(1e-08 < dVar9);
    dVar10 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)dVar10 & uVar8);
    if (ABS(1.0 - dVar10) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
    }
    lVar7 = FUN_149445212(lVar6);
    lVar4 = FUN_149445212(lVar1);
    FUN_1494f494e(lVar5);
    local_68._0_4_ = CONCAT13(param_4,0x10001);
    local_78 = lVar5;
    FUN_1494f682c(dVar10,&local_68,lVar6,lVar1);
    lVar5 = FUN_1494f494e(lVar5);
    FUN_1494f4998(lVar7 + 0xa0,lVar4 + 0xa0,lVar5 + 0xa0,(float)dVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f4cb4 FUN_1494f4cb4 body=87 status=ok
// SIG undefined FUN_1494f4cb4(void)

void FUN_1494f4cb4(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_28 = param_6;
  FUN_1494f4d0c(&local_18,param_4,param_5,
                CONCAT71((int7)(local_8 >> 8),*(undefined1 *)(param_1 + 8)));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f4d0c FUN_1494f4d0c body=523 status=ok
// SIG undefined FUN_1494f4d0c(void)

void FUN_1494f4d0c(undefined8 *param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_70;
  int local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_6c = -1;
  local_70 = -1;
  local_88 = *param_1;
  uStack_80 = param_1[1];
  local_a8 = param_5;
  cVar1 = FUN_1494f6f28();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_5 + 0x11) = 1;
  }
  else {
    lVar7 = (longlong)local_6c;
    lVar6 = (longlong)local_70;
    lVar5 = param_3 + 0x28;
    if (local_6c == local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
    }
    uVar2 = FUN_146719588();
    local_68 = 0;
    FUN_14485c47a(&local_68,uVar2);
    uVar2 = local_68;
    (**(code **)(*(longlong *)(param_3 + 0x28) + 0x40))(lVar5);
    *(undefined8 *)(param_3 + 0x30) = uVar2;
    (*(code *)**(undefined8 **)(param_3 + 0x28))(lVar5);
    lVar7 = *param_2 + lVar7 * 0x28;
    lVar6 = *param_2 + lVar6 * 0x28;
    local_98 = *param_1;
    uStack_90 = param_1[1];
    dVar8 = (double)FUN_1494f6d5c(&local_98,lVar7,lVar6);
    if (ABS(dVar8) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
    }
    if (ABS(1.0 - dVar8) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
    }
    lVar3 = FUN_149445212(lVar7);
    lVar4 = FUN_149445212(lVar6);
    FUN_1494f494e(lVar5);
    local_68._0_4_ = CONCAT13(param_4,0x10001);
    local_a8 = lVar5;
    FUN_1494f682c(dVar8,&local_68,lVar7,lVar6);
    lVar5 = FUN_1494f494e(lVar5);
    FUN_1494f4998(lVar3 + 0xa0,lVar4 + 0xa0,lVar5 + 0xa0,(float)dVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f4f52 FUN_1494f4f52 body=49 status=ok
// SIG undefined FUN_1494f4f52(void)

longlong * FUN_1494f4f52(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494f4f84 FUN_1494f4f84 body=293 status=ok
// SIG undefined FUN_1494f4f84(void)

undefined8 * FUN_1494f4f84(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x40) != 0) goto LAB_1494f4f9a;
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14bd352f0;
  *(undefined1 *)(plVar4 + 3) = *(undefined1 *)(param_1 + 0x28);
  plVar4[2] = (longlong)&PTR_FUN_14bd28260;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar5 == (longlong *)0x0) goto LAB_1494f4f9a;
    *(undefined8 *)(param_1 + 0x48) = 0;
LAB_1494f501d:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1494f4f9a;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x40) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x48);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x48) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1494f501d;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1494f4f9a:
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = *(longlong *)(param_1 + 0x48);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1494f50b4 FUN_1494f50b4 body=49 status=ok
// SIG undefined FUN_1494f50b4(void)

longlong * FUN_1494f50b4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14599ae76();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494f50e6 FUN_1494f50e6 body=293 status=ok
// SIG undefined FUN_1494f50e6(void)

undefined8 * FUN_1494f50e6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x30) != 0) goto LAB_1494f50fc;
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bd35310;
  uVar3 = *(undefined1 *)(param_1 + 0x28);
  plVar5[2] = (longlong)&PTR_FUN_14bd28670;
  *(undefined1 *)(plVar5 + 3) = uVar3;
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0x10;
    plVar6 = *(longlong **)(param_1 + 0x38);
    if (plVar6 == (longlong *)0x0) goto LAB_1494f50fc;
    *(undefined8 *)(param_1 + 0x38) = 0;
LAB_1494f517f:
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
    if (plVar5 == (longlong *)0x0) goto LAB_1494f50fc;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x30) = plVar5 + 2;
    plVar6 = *(longlong **)(param_1 + 0x38);
    if (plVar5 == plVar6) {
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
    else {
      *(longlong **)(param_1 + 0x38) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_1494f517f;
    }
  }
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
LAB_1494f50fc:
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  lVar4 = *(longlong *)(param_1 + 0x38);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1494f520c FUN_1494f520c body=49 status=ok
// SIG undefined FUN_1494f520c(void)

longlong * FUN_1494f520c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14599ae76();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1494f523d FUN_1494f523d body=413 status=ok
// SIG undefined FUN_1494f523d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1494f523d(ulonglong *param_1,double *param_2,double *param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  
  dVar5 = (double)(1.0 - param_4);
  dVar6 = (double)(1.0 - param_4);
  dVar11 = param_2[8];
  dVar12 = param_2[9];
  dVar13 = param_2[10];
  dVar14 = param_2[0xb];
  dVar15 = param_2[6];
  dVar30 = (double)param_4;
  dVar31 = (double)param_4;
  dVar21 = *param_3 * dVar30;
  dVar8 = param_3[1] * dVar31;
  dVar10 = param_3[2] * dVar30;
  dVar23 = param_3[3] * dVar31;
  dVar26 = dVar5 * param_2[2] * dVar10 + *param_2 * dVar5 * dVar21;
  dVar29 = dVar6 * param_2[3] * dVar23 + param_2[1] * dVar6 * dVar8;
  lVar16 = -(ulonglong)(0.0 <= dVar26 + dVar29);
  lVar17 = -(ulonglong)(0.0 <= dVar26 + dVar29);
  uVar19 = (undefined4)lVar17;
  uVar20 = (undefined4)((ulonglong)lVar17 >> 0x20);
  auVar27._0_8_ = 0.0 - dVar21;
  auVar27._8_8_ = 0.0 - dVar8;
  auVar33._0_8_ = 0.0 - dVar10;
  auVar33._8_8_ = 0.0 - dVar23;
  auVar28._8_4_ = uVar19;
  auVar28._0_8_ = lVar16;
  auVar28._12_4_ = uVar20;
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar21;
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar28 = blendvpd(auVar27,auVar7,auVar28);
  dVar26 = auVar28._0_8_ + *param_2 * dVar5;
  dVar29 = auVar28._8_8_ + param_2[1] * dVar6;
  auVar24._8_4_ = uVar19;
  auVar24._0_8_ = lVar16;
  auVar24._12_4_ = uVar20;
  auVar9._8_4_ = SUB84(dVar23,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar28 = blendvpd(auVar33,auVar9,auVar24);
  dVar32 = auVar28._0_8_ + dVar5 * param_2[2];
  dVar34 = auVar28._8_8_ + dVar6 * param_2[3];
  dVar21 = param_3[5] * dVar31 + param_2[5] * dVar6;
  dVar10 = param_3[6];
  dVar8 = param_3[7] * dVar31 + param_2[7] * dVar6;
  auVar1._8_4_ = SUB84(dVar21,0);
  auVar1._0_8_ = param_3[4] * dVar30 + param_2[4] * dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 4) = auVar1;
  auVar4._8_4_ = SUB84(dVar8,0);
  auVar4._0_8_ = dVar10 * dVar30 + dVar15 * dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 6) = auVar4;
  dVar21 = param_3[9] * dVar31 + dVar12 * dVar6;
  dVar8 = param_3[10];
  dVar10 = param_3[0xb];
  auVar2._8_4_ = SUB84(dVar21,0);
  auVar2._0_8_ = param_3[8] * dVar30 + dVar11 * dVar5;
  auVar2._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  dVar21 = dVar32 * dVar32 + dVar26 * dVar26;
  dVar23 = dVar34 * dVar34 + dVar29 * dVar29;
  auVar22._0_8_ = dVar21 + dVar23;
  auVar22._8_8_ = dVar21 + dVar23;
  param_1[10] = (ulonglong)(dVar30 * dVar8 + dVar13 * dVar5);
  param_1[0xb] = (ulonglong)(dVar31 * dVar10 + dVar14 * dVar6);
  uVar18 = -(ulonglong)(1e-08 <= auVar22._8_8_);
  auVar28 = sqrtpd(auVar22,auVar22);
  auVar24 = divpd(_DAT_149934d80,auVar28);
  auVar25._0_8_ = auVar24._0_8_ * dVar32;
  auVar25._8_8_ = auVar24._8_8_ * dVar34;
  auVar3._8_4_ = (int)uVar18;
  auVar3._0_8_ = -(ulonglong)(1e-08 <= auVar22._0_8_);
  auVar3._12_4_ = (int)(uVar18 >> 0x20);
  auVar28 = blendvpd(_DAT_149935300,auVar25,auVar3);
  *param_1 = (ulonglong)(dVar26 * auVar24._0_8_) & -(ulonglong)(1e-08 <= auVar22._0_8_);
  param_1[1] = (ulonglong)(dVar29 * auVar24._8_8_) & uVar18;
  *(undefined1 (*) [16])(param_1 + 2) = auVar28;
  return param_1;
}



// FUNCTION 1494f53da FUN_1494f53da body=739 status=ok
// SIG undefined FUN_1494f53da(void)

void FUN_1494f53da(longlong param_1,char param_2,undefined4 param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  char local_a4;
  byte local_a3;
  byte local_a2;
  byte local_a1;
  longlong local_a0;
  longlong local_98;
  ulonglong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_1 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = *(longlong *)(param_1 + 0x50);
  }
  local_68 = 0xffffffff;
  local_64 = 0x101;
  local_62 = 0;
  local_a4 = param_2;
  local_a0 = param_4;
  local_78 = param_1;
  FUN_144a2daf0(&local_78);
  do {
    lVar3 = local_70;
    if (local_70 == 0) {
      if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    if ((local_a4 == '\0') || ((*(byte *)(local_70 + 0x3c) & 2) != 0)) {
      lVar13 = *(longlong *)(local_70 + 8);
      lVar4 = FUN_1446e6bbc();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar14 = lVar13 != 0;
        if (lVar13 != lVar4 && bVar14) {
          do {
            lVar13 = *(longlong *)(lVar13 + 0x30);
            bVar14 = lVar13 != 0;
            if (lVar13 == lVar4) break;
          } while (lVar13 != 0);
        }
        if (!bVar14) goto LAB_1494f565d;
      }
      else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) {
LAB_1494f565d:
        local_b8 = param_6;
        FUN_1494f56be(lVar3,param_3,local_a0,param_5);
        goto LAB_1494f560a;
      }
      if (0 < *(int *)(lVar3 + 0x30)) {
        lVar13 = 0;
        do {
          lVar7 = (longlong)*(int *)(lVar3 + 0x44);
          lVar4 = local_a0 + lVar7;
          lVar9 = *(int *)(lVar3 + 0x34) * lVar13;
          local_a1 = *(byte *)(lVar3 + 0x70);
          (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
          local_80 = (longlong)*(int *)((longlong)*(longlong **)(lVar3 + 0x78) + 0x34);
          local_a2 = *(byte *)(lVar3 + 0x70);
          (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
          local_88 = (longlong)*(int *)((longlong)*(longlong **)(lVar3 + 0x78) + 0x34);
          local_a3 = *(byte *)(lVar3 + 0x70);
          (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
          uVar1 = *(uint *)(lVar9 + 8 + lVar7 + param_6);
          uVar2 = *(uint *)(lVar9 + 8 + param_5 + lVar7);
          if ((int)uVar2 < (int)uVar1) {
            uVar1 = uVar2;
          }
          uVar2 = *(uint *)(lVar9 + 8 + lVar4);
          if ((int)uVar2 < (int)uVar1) {
            uVar1 = uVar2;
          }
          uVar5 = (ulonglong)uVar1;
          if (0 < (int)uVar1) {
            local_90 = (ulonglong *)(lVar4 + lVar9);
            puVar6 = (ulonglong *)(param_5 + lVar7 + lVar9);
            puVar8 = (ulonglong *)(lVar7 + param_6 + lVar9);
            local_98 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x78) + 0x34);
            lVar7 = 0;
            lVar4 = 0;
            lVar9 = 0;
            do {
              if ((int)puVar8[1] == 0) {
                local_b8 = 0;
              }
              else {
                if ((local_a3 & 1) == 0) {
                  uVar11 = *puVar8;
                }
                else {
                  uVar11 = *puVar8;
                  if ((uVar11 & 1) != 0) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar8;
                  }
                }
                local_b8 = uVar11 + lVar7;
              }
              if ((int)puVar6[1] == 0) {
                lVar12 = 0;
              }
              else {
                if ((local_a2 & 1) == 0) {
                  uVar11 = *puVar6;
                }
                else {
                  uVar11 = *puVar6;
                  if ((uVar11 & 1) != 0) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar6;
                  }
                }
                lVar12 = uVar11 + lVar4;
              }
              if ((int)local_90[1] == 0) {
                lVar10 = 0;
              }
              else {
                if ((local_a1 & 1) == 0) {
                  uVar11 = *local_90;
                }
                else {
                  uVar11 = *local_90;
                  if ((uVar11 & 1) != 0) {
                    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)local_90;
                  }
                }
                lVar10 = uVar11 + lVar9;
              }
              FUN_1494f56be(*(undefined8 *)(lVar3 + 0x78),param_3,lVar10,lVar12);
              lVar9 = lVar9 + local_80;
              lVar4 = lVar4 + local_88;
              lVar7 = lVar7 + local_98;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar3 + 0x30));
      }
    }
LAB_1494f560a:
    local_70 = *(longlong *)(local_70 + 0x18);
    FUN_144a2daf0(&local_78);
  } while( true );
}



// FUNCTION 1494f56be FUN_1494f56be body=1110 status=ok
// SIG undefined FUN_1494f56be(void)

void FUN_1494f56be(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  uint local_64;
  ulonglong local_60;
  
  fVar9 = (float)param_2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == (longlong *)0x0) goto LAB_1494f5852;
  lVar5 = param_1[1];
  lVar3 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar6 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (!bVar6) goto LAB_1494f58b2;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_1494f58b2:
    lVar5 = param_1[1];
    lVar3 = FUN_14475b26a();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (!bVar6) goto LAB_1494f5852;
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1494f5852;
    cVar2 = (**(code **)(*param_1 + 0x1e0))(param_1);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*param_1 + 0x1e8))(param_1);
      if (((cVar2 != '\0') && (lVar5 = (**(code **)(*param_1 + 0x1f0))(param_1), lVar5 == 0)) &&
         (0 < (int)param_1[6])) {
        lVar5 = 0;
        do {
          lVar3 = (**(code **)(*param_1 + 0x220))
                            (param_1,*(int *)((longlong)param_1 + 0x34) * lVar5 +
                                     *(int *)((longlong)param_1 + 0x44) + param_3);
          lVar4 = (**(code **)(*param_1 + 0x220))
                            (param_1,*(int *)((longlong)param_1 + 0x34) * lVar5 +
                                     *(int *)((longlong)param_1 + 0x44) + param_4);
          (**(code **)(*param_1 + 0x1f8))
                    (param_1,*(int *)((longlong)param_1 + 0x34) * lVar5 +
                             *(int *)((longlong)param_1 + 0x44) + param_5,
                     (longlong)((float)(lVar4 - lVar3) * fVar9 + (float)lVar3));
          lVar5 = lVar5 + 1;
        } while (lVar5 < (int)param_1[6]);
      }
    }
    else if (0 < (int)param_1[6]) {
      lVar5 = 0;
      do {
        dVar7 = (double)(**(code **)(*param_1 + 0x240))
                                  (param_1,*(int *)((longlong)param_1 + 0x34) * lVar5 +
                                           *(int *)((longlong)param_1 + 0x44) + param_3);
        dVar8 = (double)(**(code **)(*param_1 + 0x240))
                                  (param_1,*(int *)((longlong)param_1 + 0x34) * lVar5 +
                                           *(int *)((longlong)param_1 + 0x44) + param_4);
        (**(code **)(*param_1 + 0x208))
                  (param_1,*(int *)((longlong)param_1 + 0x34) * lVar5 +
                           *(int *)((longlong)param_1 + 0x44) + param_5,
                   dVar7 + (dVar8 - dVar7) * (double)fVar9);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_1[6]);
    }
    goto LAB_1494f5852;
  }
  uVar1 = *(ulonglong *)(param_1[0xe] + 0x18);
  FUN_1401a700c(&local_64,0x3b);
  if (uVar1 == local_64) {
    local_78 = param_5;
    FUN_1494f5b15(param_1,fVar9,param_3,param_4);
  }
  else {
    uVar1 = *(ulonglong *)(param_1[0xe] + 0x18);
    FUN_1401a700c(&local_64,0x39);
    if (uVar1 == local_64) {
      local_78 = param_5;
      FUN_1494f5c3f(param_1,fVar9,param_3,param_4);
    }
    else {
      uVar1 = *(ulonglong *)(param_1[0xe] + 0x18);
      FUN_1401a700c(&local_64,0x3c);
      if (uVar1 == local_64) {
        local_78 = param_5;
        FUN_1494f5da9(param_1,fVar9,param_3,param_4);
      }
      else {
        uVar1 = *(ulonglong *)(param_1[0xe] + 0x18);
        FUN_1401a700c(&local_64,0x45);
        if (uVar1 == local_64) {
          local_78 = param_5;
          FUN_1494f6059(param_1,fVar9,param_3,param_4);
        }
        else {
          uVar1 = *(ulonglong *)(param_1[0xe] + 0x18);
          FUN_1401a700c(&local_64,0x47);
          if (uVar1 == local_64) {
            local_78 = param_5;
            FUN_1494f6213(param_1,fVar9,param_3,param_4);
          }
          else {
            uVar1 = *(ulonglong *)(param_1[0xe] + 0x18);
            FUN_1401a700c(&local_64,0x41);
            if (uVar1 == local_64) {
              local_78 = param_5;
              FUN_1494f6308(param_1,fVar9,param_3,param_4);
            }
            else if (0 < (int)param_1[6]) {
              lVar5 = 0;
              do {
                lVar3 = (longlong)*(int *)((longlong)param_1 + 0x44);
                lVar4 = *(int *)((longlong)param_1 + 0x34) * lVar5;
                local_78 = param_4 + lVar3 + lVar4;
                local_70 = lVar3 + param_5 + lVar4;
                FUN_1494f53da(param_1[0xe],0,param_2,param_3 + lVar3 + lVar4);
                lVar5 = lVar5 + 1;
              } while (lVar5 < (int)param_1[6]);
            }
          }
        }
      }
    }
  }
LAB_1494f5852:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f5b15 FUN_1494f5b15 body=297 status=ok
// SIG undefined FUN_1494f5b15(void)

void FUN_1494f5b15(longlong *param_1,float param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double *_Dst;
  longlong lVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_1[6]) {
    dVar3 = (double)param_2;
    lVar6 = 0;
    do {
      lVar5 = (longlong)*(int *)((longlong)param_1 + 0x44);
      lVar1 = param_3 + lVar5;
      lVar4 = lVar6 * *(int *)((longlong)param_1 + 0x34);
      lVar2 = param_4 + lVar5;
      _Dst = (double *)(lVar5 + param_5 + lVar4);
      local_58 = *(double *)(lVar4 + 0x10 + lVar1);
      local_60 = *(double *)(lVar4 + 8 + lVar1);
      local_58 = (*(double *)(lVar4 + 0x10 + lVar2) - local_58) * dVar3 + local_58;
      local_60 = (*(double *)(lVar4 + 8 + lVar2) - local_60) * dVar3 + local_60;
      local_68 = (*(double *)(lVar4 + lVar2) - *(double *)(lVar4 + lVar1)) * dVar3 +
                 *(double *)(lVar4 + lVar1);
      if (_Dst != &local_68) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_68,1);
        }
        else {
          memcpy(_Dst,&local_68,(longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[6]);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f5c3f FUN_1494f5c3f body=361 status=ok
// SIG undefined FUN_1494f5c3f(void)

void FUN_1494f5c3f(longlong *param_1,float param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double *_Dst;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < (int)param_1[6]) {
    dVar3 = (double)param_2;
    lVar6 = 0;
    do {
      lVar5 = (longlong)*(int *)((longlong)param_1 + 0x44);
      lVar1 = param_3 + lVar5;
      lVar4 = lVar6 * *(int *)((longlong)param_1 + 0x34);
      lVar2 = param_4 + lVar5;
      _Dst = (double *)(lVar5 + param_5 + lVar4);
      local_80 = *(double *)(lVar4 + 0x18 + lVar1);
      local_88 = *(double *)(lVar4 + 0x10 + lVar1);
      local_90 = *(double *)(lVar4 + 8 + lVar1);
      local_80 = (*(double *)(lVar4 + 0x18 + lVar2) - local_80) * dVar3 + local_80;
      local_88 = (*(double *)(lVar4 + 0x10 + lVar2) - local_88) * dVar3 + local_88;
      local_90 = (*(double *)(lVar4 + 8 + lVar2) - local_90) * dVar3 + local_90;
      local_98 = (*(double *)(lVar4 + lVar2) - *(double *)(lVar4 + lVar1)) * dVar3 +
                 *(double *)(lVar4 + lVar1);
      if (_Dst != &local_98) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_98,1);
        }
        else {
          memcpy(_Dst,&local_98,(longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[6]);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f5da9 FUN_1494f5da9 body=687 status=ok
// SIG undefined FUN_1494f5da9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1494f5da9(longlong *param_1,float param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  double *_Dst;
  longlong lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  auVar6 = _DAT_1499387d0;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0 < (int)param_1[6]) {
    dVar5 = (double)param_2;
    lVar9 = 0;
    dVar3 = (double)DAT_1499387d0;
    dVar4 = DAT_1499387d0._8_8_;
    do {
      lVar8 = (longlong)*(int *)((longlong)param_1 + 0x44);
      lVar1 = param_3 + lVar8;
      lVar7 = lVar9 * *(int *)((longlong)param_1 + 0x34);
      lVar2 = param_4 + lVar8;
      local_e8 = *(double *)(lVar7 + 0x10 + lVar1);
      dVar10 = *(double *)(lVar7 + 0x10 + lVar2) - local_e8;
      local_f0 = *(double *)(lVar7 + 8 + lVar1);
      dVar14 = *(double *)(lVar7 + 8 + lVar2) - local_f0;
      dVar21 = *(double *)(lVar7 + lVar2) - *(double *)(lVar7 + lVar1);
      auVar15._8_8_ = dVar14;
      auVar15._0_8_ = dVar21;
      auVar16 = divpd(auVar15,auVar6);
      auVar11._0_8_ = dVar10 / 360.0;
      auVar11._8_8_ = 0;
      auVar17 = roundpd(auVar16,auVar16,3);
      auVar16 = roundpd(auVar11,auVar11,3);
      auVar20._0_8_ = dVar10 - auVar16._0_8_ * dVar3;
      auVar20._8_8_ = 0.0 - auVar16._8_8_ * dVar4;
      dVar21 = dVar21 - auVar17._0_8_ * dVar3;
      dVar14 = dVar14 - auVar17._8_8_ * dVar4;
      auVar19._0_8_ = dVar21 + dVar3;
      auVar19._8_8_ = dVar14 + dVar4;
      auVar22._0_8_ = auVar20._0_8_ + dVar3;
      auVar22._8_8_ = auVar20._8_8_ + dVar4;
      auVar17._8_8_ = -(ulonglong)(0.0 <= dVar14);
      auVar17._0_8_ = -(ulonglong)(0.0 <= dVar21);
      auVar16._8_4_ = SUB84(dVar14,0);
      auVar16._0_8_ = dVar21;
      auVar16._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar16 = blendvpd(auVar19,auVar16,auVar17);
      auVar12._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
      auVar12._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
      auVar11 = blendvpd(auVar22,auVar20,auVar12);
      auVar18._0_8_ = auVar16._0_8_ + -360.0;
      auVar18._8_8_ = auVar16._8_8_ + -360.0;
      auVar13._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
      auVar13._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
      auVar16 = blendvpd(auVar16,auVar18,auVar13);
      _Dst = (double *)(lVar8 + param_5 + lVar7);
      dVar21 = auVar11._0_8_;
      local_e8 = (double)(~-(ulonglong)(180.0 < dVar21) & (ulonglong)dVar21 |
                         (ulonglong)(dVar21 + -360.0) & -(ulonglong)(180.0 < dVar21)) * dVar5 +
                 local_e8;
      local_f0 = auVar16._8_8_ * dVar5 + local_f0;
      local_f8 = auVar16._0_8_ * dVar5 + *(double *)(lVar7 + lVar1);
      if (_Dst != &local_f8) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_f8,1);
        }
        else {
          memcpy(_Dst,&local_f8,(longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[6]);
  }
  if ((local_e0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f6059 FUN_1494f6059 body=441 status=ok
// SIG undefined FUN_1494f6059(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1494f6059(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *_Dst;
  ulonglong uVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  ulonglong local_90;
  
  auVar1 = _DAT_149934d80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (0 < (int)param_1[6]) {
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)((longlong)param_1 + 0x44);
      lVar2 = *(int *)((longlong)param_1 + 0x34) * lVar3;
      _Dst = (ulonglong *)(lVar4 + param_5 + lVar2);
      FUN_144a44da6(&local_b8,param_3 + lVar4 + lVar2,param_4 + lVar4 + lVar2);
      dVar6 = local_a8 * local_a8 + local_b8 * local_b8;
      dVar9 = dStack_a0 * dStack_a0 + dStack_b0 * dStack_b0;
      auVar7._0_8_ = dVar6 + dVar9;
      auVar7._8_8_ = dVar6 + dVar9;
      uVar5 = -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_);
      auVar8 = sqrtpd(auVar7,auVar7);
      auVar8 = divpd(auVar1,auVar8);
      auVar10._0_8_ = auVar8._0_8_ * local_a8;
      auVar10._8_8_ = auVar8._8_8_ * dStack_a0;
      local_d8 = (ulonglong)(local_b8 * auVar8._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
      uStack_d0 = (ulonglong)(dStack_b0 * auVar8._8_8_) & uVar5;
      auVar8._8_4_ = (int)uVar5;
      auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
      auVar8._12_4_ = (int)(uVar5 >> 0x20);
      local_c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar8);
      if (_Dst != &local_d8) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_d8,1);
        }
        else {
          memcpy(_Dst,&local_d8,(longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[6]);
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f6213 FUN_1494f6213 body=244 status=ok
// SIG undefined FUN_1494f6213(void)

void FUN_1494f6213(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *_Dst;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [104];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < (int)param_1[6]) {
    lVar3 = 0;
    do {
      lVar4 = (longlong)*(int *)((longlong)param_1 + 0x44);
      iVar1 = *(int *)((longlong)param_1 + 0x34);
      lVar2 = lVar3 * iVar1;
      _Dst = (undefined1 *)(lVar4 + param_5 + lVar2);
      FUN_1494f523d(local_c8,param_3 + lVar4 + lVar2,param_4 + lVar4 + lVar2,param_2);
      if (_Dst != local_c8) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst,local_c8,1);
        }
        else {
          memcpy(_Dst,local_c8,(longlong)iVar1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[6]);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f6308 FUN_1494f6308 body=349 status=ok
// SIG undefined FUN_1494f6308(void)

void FUN_1494f6308(longlong *param_1,float param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *_Dst;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (int)param_1[6]) {
    lVar5 = 0;
    do {
      lVar4 = (longlong)*(int *)((longlong)param_1 + 0x44);
      lVar1 = param_3 + lVar4;
      lVar3 = lVar5 * *(int *)((longlong)param_1 + 0x34);
      lVar2 = param_4 + lVar4;
      _Dst = (float *)(lVar4 + param_5 + lVar3);
      local_74 = *(float *)(lVar3 + 0xc + lVar1);
      local_78 = *(float *)(lVar3 + 8 + lVar1);
      local_7c = *(float *)(lVar3 + 4 + lVar1);
      local_74 = (*(float *)(lVar3 + 0xc + lVar2) - local_74) * param_2 + local_74;
      local_78 = (*(float *)(lVar3 + 8 + lVar2) - local_78) * param_2 + local_78;
      local_7c = (*(float *)(lVar3 + 4 + lVar2) - local_7c) * param_2 + local_7c;
      local_80 = (*(float *)(lVar3 + lVar2) - *(float *)(lVar3 + lVar1)) * param_2 +
                 *(float *)(lVar3 + lVar1);
      if (_Dst != &local_80) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_80,1);
        }
        else {
          memcpy(_Dst,&local_80,(longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[6]);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f6466 FUN_1494f6466 body=40 status=ok
// SIG undefined FUN_1494f6466(void)

void FUN_1494f6466(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1494f648e(param_2,param_4,param_5,*(undefined1 *)(param_1 + 8),param_6);
  return;
}



// FUNCTION 1494f648e FUN_1494f648e body=392 status=ok
// SIG undefined FUN_1494f648e(void)

void FUN_1494f648e(double param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_4c;
  undefined2 local_4b;
  undefined1 local_49;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = -1;
  local_48 = -1;
  local_58 = param_5;
  cVar4 = FUN_1494f6e60();
  if (cVar4 == '\0') {
    *(undefined1 *)(param_5 + 0x11) = 1;
  }
  else {
    *(int *)(param_5 + 8) = local_44;
    lVar5 = (longlong)local_48;
    *(int *)(param_5 + 0xc) = local_48;
    if (local_44 == local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    lVar3 = *param_2;
    lVar1 = lVar3 + (longlong)local_44 * 0x28;
    dVar2 = **(double **)(lVar1 + 0x10);
    dVar7 = **(double **)(lVar3 + 0x10 + lVar5 * 0x28) - dVar2;
    dVar2 = (param_1 - dVar2) / dVar7;
    dVar7 = ABS(dVar7);
    if ((1e-08 < dVar7) && (ABS(dVar2) <= 1e-08)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    uVar6 = -(ulonglong)(1e-08 < dVar7);
    if (ABS(1.0 - (double)(~uVar6 & 0x3ff0000000000000 | (ulonglong)dVar2 & uVar6)) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    local_49 = 1;
    local_4b = 0x101;
    local_58 = param_3 + 0x28;
    local_4c = param_4;
    FUN_1494f682c(lVar5 * 5,&local_4c,lVar1,lVar3 + lVar5 * 0x28);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f6644 FUN_1494f6644 body=87 status=ok
// SIG undefined FUN_1494f6644(void)

void FUN_1494f6644(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  local_28 = param_6;
  FUN_1494f669c(&local_18,param_4,param_5,
                CONCAT71((int7)(local_8 >> 8),*(undefined1 *)(param_1 + 8)));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f669c FUN_1494f669c body=355 status=ok
// SIG undefined FUN_1494f669c(void)

void FUN_1494f669c(undefined8 *param_1,longlong *param_2,longlong param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  double dVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_5c;
  undefined2 local_5b;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_34 = -1;
  local_38 = -1;
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_68 = param_5;
  cVar3 = FUN_1494f6f28();
  if (cVar3 == '\0') {
    *(undefined1 *)(param_5 + 0x11) = 1;
  }
  else {
    *(int *)(param_5 + 8) = local_34;
    *(int *)(param_5 + 0xc) = local_38;
    if (local_34 == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    lVar1 = *param_2 + (longlong)local_34 * 0x28;
    lVar2 = *param_2 + (longlong)local_38 * 0x28;
    local_58 = *param_1;
    uStack_50 = param_1[1];
    dVar4 = (double)FUN_1494f6d5c(&local_58,lVar1,lVar2);
    if (ABS(dVar4) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    if (ABS(1.0 - dVar4) <= 1e-08) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    local_59 = 1;
    local_5b = 0x101;
    local_68 = param_3 + 0x28;
    local_5c = param_4;
    FUN_1494f682c(dVar4,&local_5c,lVar1,lVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f682c FUN_1494f682c body=1160 status=ok
// SIG undefined FUN_1494f682c(void)

void FUN_1494f682c(double param_1,char *param_2,longlong param_3,longlong param_4,longlong *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar22 [12];
  undefined1 auVar21 [16];
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar13 = param_3;
  if (0.5 < param_1) {
    lVar13 = param_4;
  }
  if (param_2[1] == '\x01') {
    uVar9 = *(undefined8 *)(lVar13 + 0x10);
    uVar8 = FUN_1492dc4d4(param_3);
    FUN_1494f6cb8(param_5,uVar8,uVar9);
  }
  else {
    uVar9 = FUN_1492dc4d4(param_3);
    local_98 = 0;
    FUN_14485c47a(&local_98,uVar9);
    lVar5 = local_98;
    (**(code **)(*param_5 + 0x40))(param_5);
    param_5[1] = lVar5;
    (**(code **)*param_5)(param_5);
    if (param_2[2] == '\x01') {
      lVar5 = *(longlong *)(lVar13 + 0x10);
      lVar6 = param_5[2];
      FUN_140bb2e20(lVar6 + 0x10,lVar5 + 0x10);
      uVar9 = *(undefined8 *)(lVar5 + 0x68);
      *(undefined8 *)(lVar6 + 0x60) = *(undefined8 *)(lVar5 + 0x60);
      *(undefined8 *)(lVar6 + 0x68) = uVar9;
    }
  }
  pdVar4 = (double *)param_5[2];
  *pdVar4 = (**(double **)(param_4 + 0x10) - **(double **)(param_3 + 0x10)) * param_1 +
            **(double **)(param_3 + 0x10);
  pdVar4[1] = 0.0;
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x60);
  fVar19 = *(float *)(*(longlong *)(param_3 + 0x10) + 100);
  fVar15 = *(float *)(*(longlong *)(param_4 + 0x10) + 100) - fVar19;
  auVar14 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15),1);
  fVar15 = (fVar15 - auVar14._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar15) {
    fVar15 = 0.99999994;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  dVar17 = ((double)fVar15 +
           (double)((int)auVar14._0_4_ + (*(int *)(*(longlong *)(param_4 + 0x10) + 0x60) - iVar1)))
           * param_1;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar17;
  auVar14 = roundpd(unaff_XMM9,auVar14,1);
  dVar20 = auVar14._0_8_;
  dVar17 = dVar17 - dVar20;
  if (2147483647.0 <= dVar20) {
    dVar20 = 2147483647.0;
  }
  if (dVar20 <= -2147483648.0) {
    dVar20 = -2147483648.0;
  }
  fVar15 = (float)dVar17;
  auVar22 = (undefined1  [12])0x0;
  if (0.99999994 <= fVar15) {
    auVar22 = ZEXT812(0);
    fVar15 = 0.99999994;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar15 = fVar15 + 0.5 + -0.5;
  if (0.99999994 <= fVar15) {
    fVar15 = 0.99999994;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  auVar21._0_4_ = fVar15 + fVar19;
  auVar21._4_12_ = auVar22;
  auVar14 = roundss(ZEXT416(0),auVar21,9);
  fVar19 = (auVar21._0_4_ - auVar14._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar19) {
    fVar19 = 0.99999994;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  lVar5 = param_5[2];
  *(int *)(lVar5 + 0x60) =
       (int)dVar20 + iVar1 + ((int)ROUND(auVar21._0_4_ + auVar21._0_4_ + -0.5) >> 1);
  *(float *)(lVar5 + 100) = fVar19;
  dVar17 = *(double *)(*(longlong *)(param_3 + 0x10) + 0x80);
  *(double *)(param_5[2] + 0x80) =
       (*(double *)(*(longlong *)(param_4 + 0x10) + 0x80) - dVar17) * param_1 + dVar17;
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x10) + 0x88);
  fVar19 = *(float *)(*(longlong *)(param_3 + 0x10) + 0x8c);
  fVar15 = *(float *)(*(longlong *)(param_4 + 0x10) + 0x8c) - fVar19;
  auVar14 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15),1);
  iVar12 = *(int *)(*(longlong *)(param_4 + 0x10) + 0x88) - iVar1;
  fVar15 = (fVar15 - auVar14._0_4_) + 0.5 + -0.5;
  auVar21 = ZEXT416((uint)fVar15);
  if (0.99999994 <= fVar15) {
    auVar21 = ZEXT416(0x3f7fffff);
  }
  if (auVar21._0_4_ <= 0.0) {
    auVar7._12_4_ = 0;
    auVar7._0_12_ = auVar21._4_12_;
    auVar21 = auVar7 << 0x20;
  }
  dVar20 = ((double)auVar21._0_4_ + (double)((int)auVar14._0_4_ + iVar12)) * param_1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar20;
  auVar14 = roundpd(auVar18,auVar18,1);
  dVar17 = auVar14._0_8_;
  dVar20 = dVar20 - dVar17;
  if (2147483647.0 <= dVar17) {
    dVar17 = 2147483647.0;
  }
  if (dVar17 <= -2147483648.0) {
    dVar17 = -2147483648.0;
  }
  auVar16._4_12_ = SUB1612(ZEXT816(0x41dfffffffc00000),4);
  fVar15 = (float)dVar20;
  if (0.99999994 <= fVar15) {
    fVar15 = 0.99999994;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  fVar15 = fVar15 + 0.5 + -0.5;
  if (0.99999994 <= fVar15) {
    fVar15 = 0.99999994;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  auVar16._0_4_ = fVar15 + fVar19;
  auVar14 = roundss(ZEXT416(0),auVar16,9);
  fVar19 = (auVar16._0_4_ - auVar14._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar19) {
    fVar19 = 0.99999994;
  }
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  lVar5 = param_5[2];
  *(int *)(lVar5 + 0x88) =
       (int)dVar17 + iVar1 + ((int)ROUND(auVar16._0_4_ + auVar16._0_4_ + -0.5) >> 1);
  *(float *)(lVar5 + 0x8c) = fVar19;
  if (*param_2 == '\x01') {
    lVar13 = *(longlong *)(param_3 + 0x10);
    lVar5 = *(longlong *)(param_4 + 0x10);
    lVar6 = param_5[2];
    uVar2 = *(uint *)(lVar5 + 0x78);
    uVar3 = *(uint *)(lVar13 + 0x78);
    if ((int)uVar3 < (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_144a84024((longlong *)(lVar6 + 0x70),uVar2,CONCAT71((uint7)(uint3)((uint)iVar12 >> 8),1));
    if (0 < (int)uVar2) {
      uVar11 = 0;
      do {
        fVar19 = *(float *)(*(longlong *)(lVar13 + 0x70) + uVar11 * 4);
        *(float *)(*(longlong *)(lVar6 + 0x70) + uVar11 * 4) =
             (float)((double)(*(float *)(*(longlong *)(lVar5 + 0x70) + uVar11 * 4) - fVar19) *
                     param_1 + (double)fVar19);
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
  }
  else if (param_2[1] == '\0') {
    FUN_144a67f5c(param_5[2] + 0x70,*(longlong *)(lVar13 + 0x10) + 0x70);
  }
  if (param_2[3] == '\x01') {
    lVar13 = param_5[2];
    uVar9 = *(undefined8 *)(param_4 + 0x10);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    uVar10 = FUN_1492dc4d4(param_3);
    local_a8 = uVar9;
    local_a0 = lVar13;
    FUN_1494f53da(uVar10,1,(float)param_1,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_c8);
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f6cb8 FUN_1494f6cb8 body=135 status=ok
// SIG undefined FUN_1494f6cb8(void)

void FUN_1494f6cb8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  lVar1 = local_28;
  (**(code **)(*param_1 + 0x40))(param_1);
  param_1[1] = lVar1;
  (**(code **)*param_1)(param_1);
  if (param_3 != 0) {
    FUN_1492dc4d4(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f6d5c FUN_1494f6d5c body=259 status=ok
// SIG undefined FUN_1494f6d5c(void)

double FUN_1494f6d5c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x60);
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x68);
  dVar3 = ((double)((lVar2 >> 0x20) * (longlong)(int)uVar1) +
          (double)(int)((ulonglong)lVar2 >> 0x20) * (double)(float)((ulonglong)uVar1 >> 0x20)) /
          (double)(int)lVar2;
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x60);
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x68);
  dVar4 = ((double)((lVar2 >> 0x20) * (longlong)(int)uVar1) +
          (double)(int)((ulonglong)lVar2 >> 0x20) * (double)(float)((ulonglong)uVar1 >> 0x20)) /
          (double)(int)lVar2 - dVar3;
  if (1e-08 < ABS(dVar4)) {
    lVar2 = param_1[1];
    return (((double)((lVar2 >> 0x20) * (longlong)(int)*param_1) +
            (double)(int)((ulonglong)lVar2 >> 0x20) * (double)(float)((ulonglong)*param_1 >> 0x20))
            / (double)(int)lVar2 - dVar3) / dVar4;
  }
  return 1.0;
}



// FUNCTION 1494f6e60 FUN_1494f6e60 body=199 status=ok
// SIG undefined FUN_1494f6e60(void)

undefined4
FUN_1494f6e60(double param_1,longlong *param_2,uint *param_3,uint *param_4,float *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    *param_5 = (float)(**(double **)(*param_2 + 0x10 + (longlong)(iVar2 + -1) * 0x28) - param_1);
    param_5[1] = (float)(param_1 - **(double **)(*param_2 + 0x10));
    uVar6 = (ulonglong)*(uint *)(param_2 + 1);
    puVar3 = (undefined8 *)(*param_2 + uVar6 * 0x28 + 0x10);
    iVar7 = -1;
    do {
      uVar4 = (uint)uVar6;
      if ((int)uVar4 < 1) {
        *param_3 = 0;
        *param_4 = 0;
        *(undefined1 *)(param_5 + 4) = 1;
        goto LAB_1494f6efc;
      }
      puVar1 = puVar3 + -5;
      puVar3 = puVar3 + -5;
      uVar5 = uVar4 - 1;
      uVar6 = (ulonglong)uVar5;
      iVar7 = iVar7 + 1;
    } while (param_1 < *(double *)*puVar1);
    *param_3 = uVar5;
    if (iVar7 == 0) {
      *param_4 = uVar5;
      *(bool *)((longlong)param_5 + 0x11) = 1e-08 < ABS(param_1 - *(double *)*puVar3);
    }
    else {
      *param_4 = uVar4;
    }
  }
LAB_1494f6efc:
  return CONCAT31((int3)((uint)iVar2 >> 8),iVar2 != 0);
}



// FUNCTION 1494f6f28 FUN_1494f6f28 body=698 status=ok
// SIG undefined FUN_1494f6f28(void)

undefined4
FUN_1494f6f28(undefined8 *param_1,longlong *param_2,uint *param_3,uint *param_4,float *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  
  iVar1 = (int)param_2[1];
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(*param_2 + 0x10 + (longlong)(iVar1 + -1) * 0x28);
    uVar3 = *(undefined8 *)(lVar2 + 0x60);
    lVar2 = *(longlong *)(lVar2 + 0x68);
    lVar4 = param_1[1];
    *param_5 = ((float)((lVar2 >> 0x20) * (longlong)(int)uVar3) +
               (float)(int)((ulonglong)lVar2 >> 0x20) * (float)((ulonglong)uVar3 >> 0x20)) /
               (float)(int)lVar2 -
               ((float)((lVar4 >> 0x20) * (longlong)(int)*param_1) +
               (float)(int)((ulonglong)lVar4 >> 0x20) * (float)((ulonglong)*param_1 >> 0x20)) /
               (float)(int)lVar4;
    lVar2 = param_1[1];
    uVar3 = *(undefined8 *)(*(longlong *)(*param_2 + 0x10) + 0x60);
    lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + 0x68);
    param_5[1] = ((float)((lVar2 >> 0x20) * (longlong)(int)*param_1) +
                 (float)(int)((ulonglong)lVar2 >> 0x20) * (float)((ulonglong)*param_1 >> 0x20)) /
                 (float)(int)lVar2 -
                 ((float)((lVar4 >> 0x20) * (longlong)(int)uVar3) +
                 (float)(int)((ulonglong)lVar4 >> 0x20) * (float)((ulonglong)uVar3 >> 0x20)) /
                 (float)(int)lVar4;
    lVar2 = param_1[1];
    fVar5 = ((float)((lVar2 >> 0x20) * (longlong)(int)*param_1) +
            (float)(int)((ulonglong)lVar2 >> 0x20) * (float)((ulonglong)*param_1 >> 0x20)) /
            (float)(int)lVar2;
    uVar8 = (ulonglong)*(uint *)(param_2 + 1);
    plVar9 = (longlong *)(*param_2 + uVar8 * 0x28 + 0x10);
    iVar10 = -1;
    do {
      uVar6 = (uint)uVar8;
      if ((int)uVar6 < 1) {
        *param_3 = 0;
        *param_4 = 0;
        *(undefined1 *)(param_5 + 4) = 1;
        goto LAB_1494f716a;
      }
      uVar3 = *(undefined8 *)(plVar9[-5] + 0x60);
      lVar2 = *(longlong *)(plVar9[-5] + 0x68);
      plVar9 = plVar9 + -5;
      uVar7 = uVar6 - 1;
      uVar8 = (ulonglong)uVar7;
      iVar10 = iVar10 + 1;
    } while (fVar5 < ((float)((lVar2 >> 0x20) * (longlong)(int)uVar3) +
                     (float)(int)((ulonglong)lVar2 >> 0x20) * (float)((ulonglong)uVar3 >> 0x20)) /
                     (float)(int)lVar2);
    *param_3 = uVar7;
    if (iVar10 == 0) {
      *param_4 = uVar7;
      uVar3 = *(undefined8 *)(*plVar9 + 0x60);
      lVar2 = *(longlong *)(*plVar9 + 0x68);
      *(bool *)((longlong)param_5 + 0x11) =
           1e-08 < ABS(fVar5 - ((float)((lVar2 >> 0x20) * (longlong)(int)uVar3) +
                               (float)(int)((ulonglong)lVar2 >> 0x20) *
                               (float)((ulonglong)uVar3 >> 0x20)) / (float)(int)lVar2);
    }
    else {
      *param_4 = uVar6;
    }
  }
LAB_1494f716a:
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
}



// FUNCTION 1494f71ee FUN_1494f71ee body=652 status=ok
// SIG undefined FUN_1494f71ee(void)

void FUN_1494f71ee(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  int local_ac;
  undefined2 *local_a8;
  int local_a0;
  int *local_98;
  undefined8 *puStack_90;
  longlong local_80;
  int *local_78;
  undefined8 *puStack_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_98 = (int *)0x0;
  puStack_90 = (undefined8 *)0x0;
  local_80 = param_3;
  if (param_3 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    FUN_1400021e4(&local_80,&local_a8);
    FUN_144a882a8(&local_78,&local_a8);
    puStack_90 = puStack_70;
    piVar5 = local_78;
    local_98 = local_78;
    local_78 = (int *)0x0;
    puStack_70 = (undefined8 *)0x0;
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar2 = (int)param_2[1];
  iVar4 = (int)param_1[1] + iVar2;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
    FUN_1402191ca(param_1);
    iVar2 = (int)param_2[1];
  }
  if (iVar2 != 0) {
    param_2 = (longlong *)*param_2;
    plVar1 = param_2 + iVar2;
    local_c0 = param_4;
    do {
      if ((longlong)(int)param_1[1] != 0) {
        lVar3 = (longlong)(int)param_1[1] << 3;
        lVar7 = 0;
        do {
          if (*(longlong *)(*param_1 + lVar7 * 8) == *param_2) {
            local_ac = (int)lVar7;
            if (local_ac != -1) {
              FUN_1400021e4(param_2,&local_78);
              FUN_140ba7826(&local_a8,L"__REPLACED_BONE_",&local_78);
              if (local_78 != (int *)0x0) {
                FUN_1400020a8();
              }
              puVar6 = &DAT_149dfb77a;
              if (local_a0 != 0) {
                puVar6 = local_a8;
              }
              FUN_1446f470e(&local_b8,puVar6,1);
              local_78 = &local_ac;
              puStack_70 = &local_b8;
              FUN_149515ed8(local_c0,local_64,&local_78);
              if (local_a8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            goto LAB_1494f7303;
          }
          lVar7 = lVar7 + 1;
          lVar3 = lVar3 + -8;
        } while (lVar3 != 0);
      }
      local_ac = -1;
LAB_1494f7303:
      FUN_1400021e4(param_2,&local_a8);
      FUN_1407ec8fc(&local_78,&local_98,&local_a8);
      piVar5 = (int *)&DAT_149dfb77a;
      if ((int)puStack_70 != 0) {
        piVar5 = local_78;
      }
      FUN_1446f470e(&local_b8,piVar5);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = local_b8;
      if (local_78 != (int *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = param_2 + 1;
      piVar5 = local_98;
    } while (param_2 != plVar1);
  }
  if (piVar5 != (int *)0x0) {
    FUN_1400020a8(piVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f747c FUN_1494f747c body=155 status=ok
// SIG undefined FUN_1494f747c(void)

void FUN_1494f747c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = param_1[1];
  iVar3 = (int)param_2[1];
  iVar5 = iVar3 + (int)lVar2;
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_1 + 0xc) < iVar5) {
    FUN_14481578e(param_1);
    iVar3 = (int)param_2[1];
  }
  if (iVar3 != 0) {
    lVar1 = *param_2;
    lVar7 = 0;
    do {
      if (*(int *)(lVar1 + lVar7) == -1) {
        iVar5 = (int)param_1[1];
        uVar4 = iVar5 + 1;
        *(uint *)(param_1 + 1) = uVar4;
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(lVar1 + lVar7) + (int)lVar2;
        iVar5 = (int)param_1[1];
        uVar4 = iVar5 + 1;
        *(uint *)(param_1 + 1) = uVar4;
      }
      if (*(uint *)((longlong)param_1 + 0xc) < uVar4) {
        FUN_1446f48e2(param_1,iVar5);
      }
      *(int *)(*param_1 + (longlong)iVar5 * 4) = iVar6;
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar3 * 4 != lVar7);
  }
  return;
}



// FUNCTION 1494f7518 FUN_1494f7518 body=299 status=ok
// SIG undefined FUN_1494f7518(void)

void FUN_1494f7518(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + -0x28);
  FUN_1492dc704(plVar1);
  FUN_1492dc796(plVar1);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1a0))
            (*(longlong **)(param_1 + 0x38),local_30,0,0);
  cVar2 = FUN_1494f7644(plVar1,local_30);
  if (cVar2 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x158) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x150);
      lVar3 = (longlong)*(int *)(param_1 + 0x158) * 0x60;
      do {
        FUN_1494f7980(lVar4,param_1 + 0x10);
        lVar4 = lVar4 + 0x60;
        lVar3 = lVar3 + -0x60;
      } while (lVar3 != 0);
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    if (*(char *)(param_1 + 0x210) == '\x01') {
      FUN_144536b58(plVar1);
    }
    cVar2 = FUN_1494f77e8(plVar1,&local_48);
    if (cVar2 != '\0') {
      (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_48);
      (**(code **)(*plVar1 + 0x2c0))(plVar1,&local_48);
    }
    FUN_149516000(local_48,uStack_40 & 0xffffffff);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f7644 FUN_1494f7644 body=419 status=ok
// SIG undefined FUN_1494f7644(void)

undefined8 FUN_1494f7644(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar2 < 1) {
LAB_1494f77a0:
    uVar5 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x38);
    plVar8 = plVar3;
    do {
      if ((longlong)(int)param_2[1] == 0) goto LAB_1494f77a0;
      lVar7 = *param_2;
      lVar6 = (longlong)(int)param_2[1] * 0x18;
      while (*(longlong *)(lVar7 + 0x10) != *plVar8) {
        lVar7 = lVar7 + 0x18;
        lVar6 = lVar6 + -0x18;
        if (lVar6 == 0) goto LAB_1494f77a0;
      }
      if ((((lVar7 == 0) ||
           ((**(code **)(**(longlong **)(param_1 + 0x60) + 0x180))
                      (*(longlong **)(param_1 + 0x60),&local_48), lVar7 = local_48, local_48 == 0))
          || (lVar4 = FUN_1411f0380(), lVar6 = local_48, lVar4 == 0)) ||
         (((*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30)) || (local_48 == 0)))) goto LAB_1494f77a0;
      lVar7 = FUN_1411f0380();
      if (((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) ||
         (lVar4 = local_48,
         *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)) {
        lVar4 = 0;
      }
      lVar6 = FUN_145a92b78();
      lVar7 = local_48;
      if (((lVar6 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) {
        if (((local_48 == 0) || (lVar6 = FUN_1411f0380(), lVar6 == 0)) ||
           ((*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38) ||
            (lVar4 = local_48,
            *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)))) {
          lVar4 = 0;
        }
        lVar7 = FUN_14599ae76();
        if (lVar4 != lVar7) goto LAB_1494f77a0;
      }
      plVar1 = plVar3 + iVar2;
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
    uVar5 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1494f77e8 FUN_1494f77e8 body=406 status=ok
// SIG undefined FUN_1494f77e8(void)

undefined8 FUN_1494f77e8(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1494f7b8e(param_2,*(undefined4 *)(param_1 + 0x40));
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 == 0) {
    uVar5 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar8 = 0;
    do {
      uVar5 = FUN_1494f7bcc(param_2);
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x178))
                (*(longlong **)(param_1 + 0x60),&local_50,*(undefined8 *)(lVar2 + lVar8));
      lVar7 = local_50;
      if ((((local_50 == 0) || (lVar6 = FUN_1411f0380(), lVar4 = local_50, lVar6 == 0)) ||
          (*(int *)(lVar7 + 0x38) < *(int *)(lVar6 + 0x38))) ||
         (local_50 == 0 ||
          *(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
          lVar6 + 0x30)) {
LAB_1494f7894:
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))((longlong *)(param_1 + 0x28),&local_58);
      }
      else {
        lVar7 = FUN_1411f0380();
        if (((lVar7 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar7 + 0x38))) ||
           (lVar6 = local_50,
           *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)) {
          lVar6 = 0;
        }
        lVar7 = FUN_14599ae76();
        if (lVar6 != lVar7) goto LAB_1494f7894;
        local_58 = local_50;
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x60);
      local_60 = local_58;
      if ((local_58 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uVar5 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(lVar2 + lVar8),&local_60,uVar5);
    } while (((char)uVar5 != '\0') &&
            (bVar9 = (longlong)iVar1 * 8 + -8 != lVar8, lVar8 = lVar8 + 8, bVar9));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1494f7980 FUN_1494f7980 body=525 status=ok
// SIG undefined FUN_1494f7980(void)

undefined8 FUN_1494f7980(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_1 == 0) || (param_1[2] == 0)) {
    local_38 = L"InvalidSubjectError";
    local_30 = 0x13;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"VirtualSubjectBoneAttachment";
    local_30 = 0x1c;
    FUN_1446e940c(local_40,&local_38);
    pwVar7 = L"One or more subject name is not specified.";
    goto LAB_1494f7a92;
  }
  if ((param_1[1] == 0) || (param_1[3] == 0)) {
    local_38 = L"InvalidBoneError";
    local_30 = 0x10;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"VirtualSubjectBoneAttachment";
    local_30 = 0x1c;
    FUN_1446e940c(local_40,&local_38);
    pwVar7 = L"One or more bone name is not specified.";
    goto LAB_1494f7a92;
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar5 = (longlong)(int)param_2[1] * 8;
    lVar6 = 0;
    do {
      if (*(longlong *)(*param_2 + lVar6) == *param_1) {
        lVar6 = 0;
        goto LAB_1494f7b3c;
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 != lVar6);
  }
  goto LAB_1494f79f0;
  while (lVar6 = lVar6 + 8, lVar5 != lVar6) {
LAB_1494f7b3c:
    if (*(longlong *)(*param_2 + lVar6) == param_1[2]) {
      plVar3 = (longlong *)FUN_140e82300();
      plVar1 = (longlong *)*plVar3;
      plVar2 = (longlong *)param_1[10];
      if (plVar2 != plVar1) {
        param_1[10] = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      lVar5 = plVar3[1];
      *(int *)(param_1 + 0xb) = (int)lVar5;
      uVar4 = CONCAT71((uint7)(uint3)((uint)(int)lVar5 >> 8),1);
      goto LAB_1494f7ac4;
    }
  }
LAB_1494f79f0:
  local_38 = L"DisabledSubject";
  local_30 = 0xf;
  FUN_1446e940c(local_3c,&local_38);
  local_38 = L"VirtualSubjectBoneAttachment";
  local_30 = 0x1c;
  FUN_1446e940c(local_40,&local_38);
  pwVar7 = L"One or more subject is not enabled.";
LAB_1494f7a92:
  FUN_140208bae(&local_38,local_40,local_3c,pwVar7);
  FUN_140008f88(param_1 + 10,&local_38);
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
  uVar4 = 0;
LAB_1494f7ac4:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1494f7b8e FUN_1494f7b8e body=61 status=ok
// SIG undefined FUN_1494f7b8e(void)

void FUN_1494f7b8e(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_149516030(param_1);
    return;
  }
  FUN_149516000(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1494f7bcc FUN_1494f7bcc body=63 status=ok
// SIG undefined FUN_1494f7bcc(void)

longlong FUN_1494f7bcc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1495160fc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_1495160da(lVar2);
  return lVar2;
}



// FUNCTION 1494f7c0c FUN_1494f7c0c body=1497 status=ok
// SIG undefined FUN_1494f7c0c(void)

void FUN_1494f7c0c(longlong *param_1,longlong *param_2)

{
  void **ppvVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_178 [32];
  longlong *local_158;
  void *local_150;
  int local_148;
  undefined4 local_144;
  longlong *local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 uStack_110;
  void *local_108;
  ulonglong uStack_100;
  void *local_f8;
  ulonglong uStack_f0;
  undefined1 local_e0 [40];
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar7 = FUN_1492dca80();
  if ((cVar7 == '\0') || ((char)param_1[0x2e] == '\x01')) {
    FUN_149516190(param_1 + 0x33);
    FUN_14951631e(param_1 + 0x3d);
    uVar9 = FUN_1467194c4();
    FUN_1446e6d0e(local_e0,uVar9);
    local_158 = (longlong *)FUN_1494f81e6();
    local_f8 = (void *)0x0;
    uStack_f0 = 0;
    local_108 = (void *)0x0;
    uStack_100 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_118 = 0;
    uStack_110 = 0;
    if (0 < (int)param_2[1]) {
      lVar12 = 0;
      do {
        lVar15 = lVar12 * 0x50 + *param_2;
        lVar10 = FUN_1494451c8(lVar15);
        if (lVar10 != 0) {
          if ((char)param_1[0x32] == '\x01') {
            uVar9 = *(undefined8 *)(param_1[7] + lVar12 * 8);
          }
          else {
            uVar9 = 0;
          }
          FUN_1494f71ee(&local_f8,lVar10 + 0x10,uVar9,local_98);
          FUN_1494f747c(&local_108,lVar10 + 0x20);
          if (0 < (int)uStack_f0) {
            lVar10 = 0;
            do {
              local_140 = *(longlong **)(param_1[7] + lVar12 * 8);
              local_138 = *(undefined8 *)((longlong)local_f8 + lVar10 * 8);
              uVar2 = (uint)((ulonglong)local_140 >> 0x10);
              uVar13 = (uint)local_140 & 0xffff;
              uVar13 = ((uint)local_140 << 0x10 | uVar13) + (int)((ulonglong)local_140 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar13 >> 4);
              uVar2 = (uint)((ulonglong)local_138 >> 0x10);
              uVar14 = (uint)local_138 & 0xffff;
              puVar11 = (undefined4 *)
                        FUN_1495164ac(param_1 + 0x3d,
                                      (uVar13 >> 2) +
                                      ((uint)local_138 << 0x10 | uVar14) +
                                      (int)((ulonglong)local_138 >> 0x20) +
                                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4) +
                                      uVar13 * 0x40 + 0x9e3779b9 ^ uVar13);
              *puVar11 = (int)lVar10;
              lVar10 = lVar10 + 1;
            } while (lVar10 < (int)uStack_f0);
          }
        }
        uVar6 = uStack_110;
        puVar3 = *(undefined8 **)(lVar15 + 0x10);
        uVar2 = *(uint *)(puVar3 + 1);
        if ((longlong)(int)uVar2 != 0) {
          iVar16 = (int)uStack_110;
          lVar10 = (longlong)(int)uStack_110;
          uStack_110 = CONCAT44(uStack_110._4_4_,uVar2 + (int)uStack_110);
          if ((uint)(uStack_110._4_4_ - iVar16) < uVar2) {
            FUN_1446f84a2(&local_118,uVar6 & 0xffffffff);
          }
          memcpy((void *)(lVar10 * 8 + local_118),(void *)*puVar3,(longlong)(int)uVar2 << 3);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_2[1]);
    }
    FUN_1494f8230(param_1,&local_108);
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar16 = 0;
    local_b0 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar16 = local_70;
    }
    local_128 = local_a8;
    uVar9 = local_128;
    local_120 = local_a0;
    local_11c = local_9c;
    local_138 = local_b8;
    local_130 = local_b0;
    local_128._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_140 = local_98;
    if ((local_128._4_4_ != iVar16) || (local_b0 != local_88)) {
      iVar8 = local_128._4_4_;
      local_128 = uVar9;
      do {
        *(undefined8 *)
         ((longlong)local_f8 + (longlong)*(int *)(*local_140 + (longlong)iVar8 * 0x14) * 8) =
             *(undefined8 *)(*local_140 + 4 + (longlong)iVar8 * 0x14);
        local_128 = CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
        FUN_1449c0562(&local_138);
        iVar8 = local_128._4_4_;
        uVar9 = local_128;
      } while (local_140 != local_98 || (local_130 != local_88 || local_128._4_4_ != iVar16));
    }
    local_128 = uVar9;
    pvVar5 = local_f8;
    plVar4 = local_158;
    ppvVar1 = (void **)(local_158 + 2);
    if (ppvVar1 != &local_f8) {
      iVar16 = (int)uStack_f0;
      lVar12 = (longlong)(int)uStack_f0;
      *(int *)(local_158 + 3) = (int)uStack_f0;
      if ((int)uStack_f0 == 0 && *(int *)((longlong)local_158 + 0x1c) == 0) {
        *(undefined4 *)((longlong)local_158 + 0x1c) = 0;
      }
      else {
        FUN_1401b309e(ppvVar1,uStack_f0 & 0xffffffff);
        if (iVar16 != 0) {
          memcpy(*ppvVar1,pvVar5,lVar12 << 3);
        }
      }
    }
    pvVar5 = local_108;
    local_150 = (void *)0x0;
    lVar12 = (longlong)(int)uStack_100;
    local_148 = (int)uStack_100;
    if (lVar12 == 0) {
      local_144 = 0;
    }
    else {
      FUN_144a06ca8(&local_150,uStack_100 & 0xffffffff,0);
      memcpy(local_150,pvVar5,lVar12 << 2);
    }
    iVar16 = local_148;
    pvVar5 = local_150;
    ppvVar1 = (void **)(plVar4 + 4);
    if (ppvVar1 != &local_150) {
      lVar12 = (longlong)local_148;
      *(int *)(plVar4 + 5) = local_148;
      if (local_148 == 0 && *(int *)((longlong)plVar4 + 0x2c) == 0) {
        *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
      }
      else {
        FUN_144a06ca8(ppvVar1,local_148);
        if (iVar16 != 0) {
          memcpy(*ppvVar1,pvVar5,lVar12 << 2);
        }
      }
    }
    if (local_150 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar4 != &local_118) {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      *plVar4 = local_118;
      local_118 = 0;
      *(int *)(plVar4 + 1) = (int)uStack_110;
      *(int *)((longlong)plVar4 + 0xc) = uStack_110._4_4_;
      uStack_110 = 0;
    }
    FUN_1492dcaca(param_1,local_e0);
    *(undefined1 *)(param_1 + 0x2e) = 0;
    (**(code **)(*param_1 + 0x2c8))(param_1);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1403dd50a(local_98);
    if (local_108 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1448eac94(local_e0);
  }
  else {
    local_98[0] = 0;
    local_98[1] = 0;
    FUN_1494f8230(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f81e6 FUN_1494f81e6 body=74 status=ok
// SIG undefined FUN_1494f81e6(void)

undefined8 FUN_1494f81e6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc406();
  if (((lVar2 == 0) || (lVar3 = FUN_1467194c4(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 1494f8230 FUN_1494f8230 body=1218 status=ok
// SIG undefined FUN_1494f8230(void)

void FUN_1494f8230(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  int local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e4;
  uint *local_e0;
  int *local_d8;
  undefined1 local_cc [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_e4 = 0xffffffff;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_190 = param_2;
  if ((longlong)*(int *)(param_1 + 0x180) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x178);
    plVar10 = plVar9 + (longlong)*(int *)(param_1 + 0x180) * 0xc;
    lVar16 = param_1 + 0x38;
    local_180 = param_1 + 0x220;
    local_188 = param_1 + 0x198;
    iVar17 = -1;
    local_198 = lVar16;
    do {
      cVar7 = FUN_1494f7980(plVar9,lVar16);
      if (cVar7 != '\0') {
        FUN_149517bda(&local_c8,&local_178,plVar9 + 2);
        FUN_149517bda(&local_c8,&local_178,plVar9);
        if (*(int *)(param_1 + 0x1f0) != *(int *)(param_1 + 0x21c)) {
          lVar16 = *plVar9;
          lVar2 = plVar9[1];
          uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar12 = (uint)lVar2 & 0xffff;
          uVar11 = (uint)((ulonglong)lVar16 >> 0x10);
          uVar14 = (uint)lVar16 & 0xffff;
          uVar11 = (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar14) +
                   (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar14 >> 4);
          lVar8 = *(longlong *)(param_1 + 0x228);
          if (*(longlong *)(param_1 + 0x228) == 0) {
            lVar8 = local_180;
          }
          uVar14 = *(int *)(param_1 + 0x230) - 1;
          iVar13 = *(int *)(lVar8 + (ulonglong)
                                    (((uVar11 >> 2) +
                                      (int)((ulonglong)lVar2 >> 0x20) + (uint)lVar2 * 0x10000 +
                                      uVar12 + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4) +
                                      uVar11 * 0x40 + 0x9e3779b9 ^ uVar11) & uVar14) * 4);
          if (iVar13 != -1) {
            lVar3 = *(longlong *)(param_1 + 0x1e8);
            do {
              lVar5 = (longlong)iVar13 * 0x1c;
              lVar1 = lVar3 + lVar5;
              if ((*(longlong *)(lVar3 + lVar5) == lVar16) &&
                 (*(longlong *)(lVar3 + 8 + lVar5) == lVar2)) {
                if ((int *)(lVar1 + 0x10) != (int *)0x0 && lVar1 != 0) {
                  iVar17 = *(int *)(lVar1 + 0x10);
                }
                break;
              }
              iVar13 = *(int *)(lVar1 + 0x14);
            } while (iVar13 != -1);
          }
          lVar2 = plVar9[2];
          lVar3 = plVar9[3];
          uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
          uVar12 = (uint)lVar3 & 0xffff;
          uVar11 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar15 = (uint)lVar2 & 0xffff;
          uVar11 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar15) +
                   (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar15 >> 4);
          iVar13 = *(int *)(lVar8 + (ulonglong)
                                    (((uVar11 >> 2) +
                                      (int)((ulonglong)lVar3 >> 0x20) + (uint)lVar3 * 0x10000 +
                                      uVar12 + (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4) +
                                      uVar11 * 0x40 + 0x9e3779b9 ^ uVar11) & uVar14) * 4);
          lVar16 = local_198;
          if (iVar13 != -1) {
            lVar8 = *(longlong *)(param_1 + 0x1e8);
            do {
              lVar5 = (longlong)iVar13 * 0x1c;
              lVar1 = lVar8 + lVar5;
              if ((*(longlong *)(lVar8 + lVar5) == lVar2) &&
                 (*(longlong *)(lVar8 + 8 + lVar5) == lVar3)) {
                if ((uint *)(lVar1 + 0x10) != (uint *)0x0 && lVar1 != 0) {
                  local_e4 = *(uint *)(lVar1 + 0x10);
                }
                break;
              }
              iVar13 = *(int *)(lVar1 + 0x14);
            } while (iVar13 != -1);
          }
        }
        if (local_e4 != 0xffffffff && iVar17 != -1) {
          if ((-1 < (int)local_e4) && ((int)local_e4 < (int)local_190[1])) {
            *(int *)(*local_190 + (ulonglong)local_e4 * 4) = iVar17;
          }
          local_f8 = DAT_14c8464d0;
          uStack_f0 = uRam000000014c8464d8;
          local_108 = (undefined4)DAT_14c8464c0;
          uStack_104 = DAT_14c8464c0._4_4_;
          uStack_100 = (undefined4)DAT_14c8464c8;
          uStack_fc = DAT_14c8464c8._4_4_;
          lVar8 = plVar9[4];
          lVar3 = plVar9[5];
          lVar2 = plVar9[6];
          FUN_144a7484c(plVar9 + 7,&local_178);
          uStack_150 = uStack_160;
          uVar6 = CONCAT44(uStack_174,local_178);
          uStack_160 = uStack_170;
          local_158 = local_168;
          uStack_130 = 0;
          local_118 = (undefined4)local_f8;
          uStack_114 = local_f8._4_4_;
          uStack_110 = (undefined4)uStack_f0;
          uStack_10c = uStack_f0._4_4_;
          local_128 = local_108;
          uStack_124 = uStack_104;
          uStack_120 = uStack_100;
          uStack_11c = uStack_fc;
          local_e0 = &local_e4;
          local_178 = iVar17;
          local_168 = uVar6;
          local_148 = lVar8;
          lStack_140 = lVar3;
          local_138 = lVar2;
          local_d8 = &local_178;
          FUN_1495180c8(local_188,local_cc,&local_e0);
        }
      }
      plVar9 = plVar9 + 0xc;
    } while (plVar9 != plVar10);
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_149517b4c(&local_c8);
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f86f4 FUN_1494f86f4 body=801 status=ok
// SIG undefined FUN_1494f86f4(void)

void FUN_1494f86f4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [40];
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_1;
  uVar5 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x98))(param_1 + 0x28);
  lVar6 = FUN_1494451c8(uVar5);
  uVar5 = FUN_146719588();
  FUN_1446e6d0e(local_98,uVar5);
  lVar7 = FUN_1494f494e(local_98);
  local_d0 = lVar7 + 0xa0;
  FUN_140ee6e38(local_d0,*(undefined4 *)(lVar6 + 0x18));
  FUN_145dd240c(lVar7 + 0x10,0);
  local_e8 = (longlong *)(lVar7 + 0x70);
  *(undefined4 *)(lVar7 + 0x78) = 0;
  local_d8 = lVar7;
  if (*(int *)(lVar7 + 0x7c) != 0) {
    FUN_14482f6fa(local_e8,0);
  }
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    local_c8 = param_2;
    do {
      lVar1 = *local_c8 + lVar6 * 0x50;
      lVar8 = FUN_149445212(lVar1 + 0x28);
      if (lVar8 != 0) {
        FUN_1406f47cc(local_d0,lVar8 + 0xa0);
      }
      lVar8 = *(longlong *)(lVar1 + 0x38);
      uVar2 = *(uint *)(lVar8 + 0x78);
      if ((longlong)(int)uVar2 != 0) {
        iVar9 = *(int *)(local_d8 + 0x78);
        *(uint *)(local_d8 + 0x78) = iVar9 + uVar2;
        if ((uint)(*(int *)(local_d8 + 0x7c) - iVar9) < uVar2) {
          FUN_14475e4ac(local_e8,iVar9);
        }
        memcpy((void *)((longlong)iVar9 * 4 + *local_e8),*(void **)(lVar8 + 0x70),
               (longlong)(int)uVar2 << 2);
        lVar8 = *(longlong *)(lVar1 + 0x38);
      }
      lVar1 = lVar8 + 0x20;
      local_70 = 0x100000000;
      local_60 = 0xffffffff;
      local_58 = 0;
      iVar9 = 0;
      local_68 = lVar1;
      if (*(int *)(lVar8 + 0x38) != 0) {
        FUN_1449c0562(&local_70,local_4c);
        iVar9 = *(int *)(lVar8 + 0x38);
      }
      lVar3 = local_e0;
      plVar10 = (longlong *)(lVar8 + 0x10);
      local_a8 = local_60;
      uVar5 = local_a8;
      local_a0 = local_58;
      local_9c = local_54;
      local_b8 = local_70;
      local_b0 = local_68;
      local_a8._4_4_ = (int)((ulonglong)local_60 >> 0x20);
      iVar4 = local_a8._4_4_;
      local_c0 = plVar10;
      if ((local_a8._4_4_ != iVar9) || (local_a8 = uVar5, local_68 != lVar1)) {
        do {
          local_a8 = uVar5;
          local_68 = (longlong)iVar4 * 0x20 + *local_c0 + 8;
          local_70 = lVar6 * 8 + *(longlong *)(lVar3 + 0x38);
          FUN_149516b02(lVar7 + 0x10,local_4c,&local_70);
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
          iVar4 = local_a8._4_4_;
          uVar5 = local_a8;
        } while (local_c0 != plVar10 || (local_b0 != lVar1 || local_a8._4_4_ != iVar9));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)local_c8[1]);
  }
  lVar6 = local_e0;
  FUN_1494f8a16(local_e0,local_d8);
  FUN_1492dcb38(lVar6,local_98);
  FUN_1448eac94(local_98);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f8a16 FUN_1494f8a16 body=2527 status=ok
// SIG undefined FUN_1494f8a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1494f8a16(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  ulonglong uVar16;
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar27;
  double dVar28;
  undefined1 auVar26 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  longlong *local_2c0;
  undefined8 local_2b8;
  double dStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  plVar1 = (longlong *)(param_1 + 0x198);
  dVar2 = (double)(param_1 + 0x1a8);
  local_178 = 2.12199579096527e-314;
  local_168 = 2.12199579047121e-314;
  uStack_160 = 0;
  dStack_170 = dVar2;
  if (*(int *)(param_1 + 0x1c0) == 0) {
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_178);
    iVar15 = *(int *)(param_1 + 0x1c0);
  }
  uStack_2a0 = CONCAT44(uStack_15c,uStack_160);
  local_2a8 = local_168;
  dVar25 = local_2a8;
  local_2b8 = local_178;
  dStack_2b0 = dStack_170;
  local_2a8._4_4_ = (int)((ulonglong)local_168 >> 0x20);
  iVar10 = local_2a8._4_4_;
  local_2c0 = plVar1;
  if ((local_2a8._4_4_ != iVar15) || (local_2a8 = dVar25, dStack_170 != dVar2)) {
    do {
      local_2a8 = dVar25;
      auVar35 = _DAT_149934d80;
      lVar4 = *local_2c0;
      lVar12 = (longlong)iVar10 * 0x90;
      pdVar13 = (double *)
                ((longlong)*(int *)(lVar4 + 0x10 + lVar12) * 0x60 + *(longlong *)(param_2 + 0xa0));
      pauVar14 = (undefined1 (*) [16])
                 ((longlong)*(int *)(lVar4 + lVar12) * 0x60 + *(longlong *)(param_2 + 0xa0));
      iVar10 = *(int *)(param_1 + 0x188);
      if (iVar10 == 2) {
        dVar33 = pdVar13[4] * *(double *)pauVar14[4];
        dVar18 = pdVar13[5] * *(double *)(pauVar14[4] + 8);
        dVar19 = pdVar13[6] * *(double *)pauVar14[5];
        dVar24 = *(double *)*pauVar14;
        dVar27 = *(double *)(*pauVar14 + 8);
        dVar23 = *(double *)pauVar14[1];
        dVar25 = *(double *)(pauVar14[1] + 8);
        dVar34 = dVar18 * dVar24 - dVar33 * dVar27;
        dVar31 = dVar19 * dVar27 - dVar18 * dVar23;
        dVar28 = dVar33 * dVar23 - dVar24 * dVar19;
        dVar31 = dVar31 + dVar31;
        dVar28 = dVar28 + dVar28;
        dVar34 = dVar34 + dVar34;
        local_2d8 = (dVar34 * dVar27 - dVar28 * dVar23) + dVar25 * dVar31 + dVar33 +
                    *(double *)pauVar14[2];
        dStack_2d0 = (dVar23 * dVar31 - dVar24 * dVar34) +
                     *(double *)(pauVar14[1] + 8) * dVar28 + dVar18 + *(double *)(pauVar14[2] + 8);
        local_2e8 = dVar34 * dVar25 + dVar19 + (dVar28 * dVar24 - dVar31 * dVar27) +
                    *(double *)pauVar14[3];
      }
      else if (iVar10 == 1) {
        local_2d8 = *(double *)pauVar14[2];
        dStack_2d0 = *(double *)(pauVar14[2] + 8);
        local_2e8 = *(double *)pauVar14[3];
      }
      else {
        local_2d8 = 0.0;
        dStack_2d0 = 0.0;
        local_2e8 = 0.0;
        if (iVar10 == 0) {
          local_2d8 = pdVar13[4];
          dStack_2d0 = pdVar13[5];
          local_2e8 = pdVar13[6];
        }
      }
      iVar10 = *(int *)(param_1 + 0x18c);
      uStack_2e0 = 0;
      if (iVar10 == 2) {
        dVar34 = *pdVar13;
        dVar31 = pdVar13[1];
        dVar29 = pdVar13[2];
        dVar30 = pdVar13[3];
        dVar28 = *(double *)(pauVar14[1] + 8);
        dVar25 = *(double *)(pauVar14[1] + 8);
        dVar24 = *(double *)(*pauVar14 + 8);
        dVar27 = *(double *)(*pauVar14 + 8);
        dVar33 = *(double *)pauVar14[1];
        dVar23 = *(double *)pauVar14[1];
        dVar18 = dVar31 * dVar33 * -1.0 +
                 dVar29 * dVar24 + dVar30 * *(double *)*pauVar14 * 1.0 + dVar34 * dVar28;
        dVar19 = dVar34 * dVar23 * 1.0 +
                 dVar30 * dVar27 + dVar29 * *(double *)*pauVar14 * -1.0 + dVar31 * dVar25;
        dVar28 = dVar30 * dVar33 * 1.0 +
                 ((*(double *)*pauVar14 * dVar31 * 1.0 + dVar28 * dVar29) - dVar34 * dVar24);
        dVar25 = dVar29 * dVar23 * -1.0 +
                 ((*(double *)*pauVar14 * dVar34 * -1.0 + dVar25 * dVar30) - dVar31 * dVar27);
      }
      else if (iVar10 == 1) {
        dVar18 = *(double *)*pauVar14;
        dVar19 = *(double *)(*pauVar14 + 8);
        dVar28 = *(double *)pauVar14[1];
        dVar25 = *(double *)(pauVar14[1] + 8);
      }
      else if (iVar10 == 0) {
        dVar18 = *pdVar13;
        dVar19 = pdVar13[1];
        dVar28 = pdVar13[2];
        dVar25 = pdVar13[3];
      }
      else {
        dVar18 = 0.0;
        dVar19 = 0.0;
        dVar28 = 0.0;
        dVar25 = 1.0;
      }
      pdVar13 = (double *)(lVar4 + 0x20 + lVar12);
      dVar23 = *pdVar13;
      dVar33 = pdVar13[1];
      pdVar13 = (double *)(lVar4 + 0x30 + lVar12);
      dVar34 = *pdVar13;
      dVar31 = pdVar13[1];
      pdVar13 = (double *)(lVar4 + 0x40 + lVar12);
      dVar29 = *pdVar13;
      dVar30 = pdVar13[1];
      pdVar13 = (double *)(lVar4 + 0x50 + lVar12);
      dVar32 = *pdVar13;
      auVar3 = *(undefined1 (*) [16])(lVar4 + 0x60 + lVar12);
      dVar24 = auVar3._0_8_;
      dVar27 = auVar3._8_8_;
      local_2f8 = *(undefined1 (*) [16])(lVar4 + 0x70 + lVar12);
      auVar21 = minpd(_DAT_149934d80,auVar3);
      auVar37 = minpd(ZEXT816(0x3ff0000000000000),local_2f8);
      auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
      auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
      iVar10 = movmskpd((int)lVar4,auVar22);
      auVar21._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
      auVar21._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
      uVar11 = movmskpd((int)lVar12,auVar21);
      uVar9 = local_2f8._8_8_;
      uVar8 = local_2f8._0_8_;
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar6 = dVar19 * dVar34 * -1.0 + dVar28 * dVar33 + dVar23 * dVar25 * 1.0 + dVar31 * dVar18;
        dVar7 = dVar18 * dVar34 * 1.0 + dVar25 * dVar33 + dVar23 * dVar28 * -1.0 + dVar31 * dVar19;
        auVar35._0_8_ =
             dVar25 * dVar34 * 1.0 + ((dVar23 * dVar19 * 1.0 + dVar31 * dVar28) - dVar33 * dVar18);
        auVar35._8_8_ =
             dVar28 * dVar34 * -1.0 + ((dVar23 * dVar18 * -1.0 + dVar31 * dVar25) - dVar33 * dVar19)
        ;
        dVar24 = local_2d8 * dVar24;
        dVar27 = dStack_2d0 * dVar27;
        dVar18 = local_2e8 * (double)local_2f8._0_8_;
        dVar19 = (double)local_2f8._8_8_ * 0.0;
        dVar25 = dVar27 * dVar23 - dVar33 * dVar24;
        dVar20 = dVar18 * dVar33 - dVar34 * dVar27;
        dVar38 = dVar24 * dVar34 - dVar23 * dVar18;
        dVar28 = dVar19 * dVar31 - dVar31 * dVar19;
        dVar20 = dVar20 + dVar20;
        dVar38 = dVar38 + dVar38;
        dVar25 = dVar25 + dVar25;
        dVar28 = dVar28 + dVar28;
        dVar29 = dVar29 + (dVar25 * dVar33 - dVar34 * dVar38) + dVar31 * dVar20 + dVar24;
        dVar30 = dVar30 + (dVar20 * dVar34 - dVar25 * dVar23) + dVar31 * dVar38 + dVar27;
        dVar32 = dVar32 + (dVar38 * dVar23 - dVar33 * dVar20) + dVar31 * dVar25 + dVar18;
        dVar25 = pdVar13[1] + (dVar28 * dVar31 - dVar28 * dVar31) + dVar31 * dVar28 + dVar19;
      }
      else {
        dVar38 = dVar33 + dVar33;
        dVar6 = dVar34 + dVar34;
        dVar20 = dVar23 * (dVar23 + dVar23);
        local_1f8 = ((double)DAT_149934d80 - (dVar34 * dVar6 + dVar33 * dVar38)) * dVar24;
        dVar34 = (DAT_149934d80._8_8_ - (dVar34 * dVar6 + dVar20)) * dVar27;
        dVar7 = (dVar23 + dVar23) * dVar31;
        dStack_1b0 = (dVar6 * dVar33 - dVar7) * (double)local_2f8._0_8_;
        local_1b8 = (dVar38 * dVar31 + dVar23 * dVar6) * (double)local_2f8._0_8_;
        dStack_1f0 = (dVar38 * dVar23 + dVar6 * dVar31) * dVar24;
        local_1c8 = (dVar6 * dVar33 + dVar7) * dVar27;
        local_1e8 = (dVar23 * dVar6 - dVar38 * dVar31) * dVar24;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar34,0);
        local_1d8._0_8_ = (dVar38 * dVar23 - dVar6 * dVar31) * dVar27;
        local_1d8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        local_1a8 = (1.0 - (dVar20 + dVar33 * dVar38)) * (double)local_2f8._0_8_;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        uStack_180 = 0x3ff0000000000000;
        dVar23 = dVar19 + dVar19;
        dVar34 = dVar28 + dVar28;
        dVar33 = dVar18 * (dVar18 + dVar18);
        local_278 = (double)DAT_149934d80 - (dVar28 * dVar34 + dVar19 * dVar23);
        dStack_250 = DAT_149934d80._8_8_ - (dVar28 * dVar34 + dVar33);
        local_228 = 1.0 - (dVar33 + dVar19 * dVar23);
        dStack_230 = (dVar18 + dVar18) * dVar25;
        dStack_270 = dVar23 * dVar18 + dVar34 * dVar25;
        local_248 = dVar34 * dVar19 + dStack_230;
        local_258 = dVar23 * dVar18 - dVar34 * dVar25;
        dStack_230 = dVar34 * dVar19 - dStack_230;
        local_238 = dVar23 * dVar25 + dVar18 * dVar34;
        local_268 = dVar18 * dVar34 - dVar23 * dVar25;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0x3ff0000000000000;
        dVar25 = (double)local_2f8._0_8_ * 1.0;
        local_218 = local_2d8;
        dStack_210 = dStack_2d0;
        local_208 = local_2e8;
        local_198 = dVar29;
        dStack_190 = dVar30;
        local_188 = dVar32;
        FUN_1447fea8d(&local_178);
        FUN_144a1c686(&local_178,0x3e45798ee0000000);
        auVar37._8_8_ = -(ulonglong)(0.0 <= dVar27);
        auVar37._0_8_ = -(ulonglong)(0.0 <= dVar24);
        auVar21 = blendvpd(_DAT_149936790,auVar35,auVar37);
        uVar16 = -(ulonglong)(0.0 <= dVar25);
        dVar25 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
        dVar28 = auVar21._0_8_;
        local_168 = local_168 * dVar28;
        dStack_170 = dStack_170 * dVar28;
        local_178 = local_178 * dVar28;
        dVar28 = auVar21._8_8_;
        local_148 = local_148 * dVar28;
        local_150 = local_150 * dVar28;
        local_158 = dVar28 * local_158;
        local_128 = local_128 * dVar25;
        local_130 = local_130 * dVar25;
        local_138 = dVar25 * local_138;
        FUN_14481fd10(&local_298,&local_178);
        dVar25 = local_288 * local_288 + local_298 * local_298;
        dVar28 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar26._0_8_ = dVar25 + dVar28;
        auVar26._8_8_ = dVar25 + dVar28;
        auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar21 = sqrtpd(auVar26,auVar26);
        auVar35 = divpd(auVar35,auVar21);
        auVar36._0_8_ = auVar35._0_8_ * local_288;
        auVar36._8_8_ = auVar35._8_8_ * dStack_280;
        dVar6 = (double)((ulonglong)(local_298 * auVar35._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        dVar7 = (double)((ulonglong)(dStack_290 * auVar35._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
        auVar35 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar17);
        dVar25 = 0.0;
        dVar29 = local_118;
        dVar30 = dStack_110;
        dVar32 = local_108;
      }
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar6;
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *pauVar14 = auVar5;
      pauVar14[1] = auVar35;
      *(double *)pauVar14[2] = dVar29;
      *(double *)(pauVar14[2] + 8) = dVar30;
      *(double *)pauVar14[3] = dVar32;
      *(double *)(pauVar14[3] + 8) = dVar25;
      pauVar14[4] = auVar3;
      auVar3._8_4_ = SUB84((double)uVar9 * 0.0,0);
      auVar3._0_8_ = (double)uVar8 * 1.0;
      auVar3._12_4_ = (int)((ulonglong)((double)uVar9 * 0.0) >> 0x20);
      pauVar14[5] = auVar3;
      local_2a8 = (double)CONCAT44(local_2a8._4_4_,(uint)local_2a8 & ~local_2b8._4_4_);
      FUN_1449c0562(&local_2b8);
      iVar10 = local_2a8._4_4_;
      dVar25 = local_2a8;
    } while (local_2c0 != plVar1 || (dStack_2b0 != dVar2 || local_2a8._4_4_ != iVar15));
  }
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494f93f6 FUN_1494f93f6 body=230 status=ok
// SIG undefined FUN_1494f93f6(void)

void FUN_1494f93f6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [40];
  undefined **local_40 [2];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1492dd8b2(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pppuVar4 = local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1492ddad8(pppuVar4);
  *param_3 = uVar3;
  local_40[0] = &PTR_FUN_14bc17778;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f94de FUN_1494f94de body=397 status=ok
// SIG undefined FUN_1494f94de(void)

void FUN_1494f94de(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_40 [2];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1492dd8b2(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pppuVar4 = local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar3 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492dd994(pppuVar4,puVar3);
  local_40[0] = &PTR_FUN_14bc17778;
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
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f968c FUN_1494f968c body=550 status=ok
// SIG undefined FUN_1494f968c(void)

void FUN_1494f968c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  double *pdVar5;
  undefined ***pppuVar6;
  undefined1 auStack_138 [40];
  undefined **local_110;
  undefined8 local_108;
  longlong *plStack_100;
  LARGE_INTEGER local_f8;
  double local_f0 [6];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = &PTR_FUN_14bc1c700;
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_110);
  }
  pppuVar6 = &local_110;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  local_f0[1] = 0.0;
  QueryPerformanceCounter(&local_f8);
  local_f0[0] = (double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0;
  local_c0 = 0;
  local_b8 = 0;
  local_f0[2] = 0.0;
  local_f0[3] = 0.0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0x18;
  uStack_84 = 1;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = &DAT_100000018;
  local_58 = 0xffffffff;
  local_50 = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
  pdVar5 = *(double **)(param_2 + 0x38);
  if (*(double **)(param_2 + 0x38) == (double *)0x0) {
    pdVar5 = local_f0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1494f98b4(pppuVar6,pdVar5);
  *param_3 = uVar4;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_1492e11ae(local_f0);
  plVar3 = plStack_100;
  local_110 = &PTR_FUN_14bc1c700;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f98b4 FUN_1494f98b4 body=122 status=ok
// SIG undefined FUN_1494f98b4(void)

bool FUN_1494f98b4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  puVar8 = (undefined4 *)FUN_1492ddfa6();
  if (puVar8 != (undefined4 *)0x0) {
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *param_2 = *puVar8;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    FUN_140bb2e20(param_2 + 4,puVar8 + 4);
    uVar1 = puVar8[0x19];
    uVar2 = puVar8[0x1a];
    uVar3 = puVar8[0x1b];
    param_2[0x18] = puVar8[0x18];
    param_2[0x19] = uVar1;
    param_2[0x1a] = uVar2;
    param_2[0x1b] = uVar3;
    FUN_144a67f5c(param_2 + 0x1c,puVar8 + 0x1c);
    uVar1 = puVar8[0x21];
    uVar2 = puVar8[0x22];
    uVar3 = puVar8[0x23];
    uVar4 = puVar8[0x23];
    uVar5 = puVar8[0x24];
    uVar6 = puVar8[0x25];
    uVar7 = puVar8[0x26];
    param_2[0x20] = puVar8[0x20];
    param_2[0x21] = uVar1;
    param_2[0x22] = uVar2;
    param_2[0x23] = uVar3;
    param_2[0x23] = uVar4;
    param_2[0x24] = uVar5;
    param_2[0x25] = uVar6;
    param_2[0x26] = uVar7;
    FUN_144756208(param_2 + 0x28,puVar8 + 0x28);
  }
  return puVar8 != (undefined4 *)0x0;
}



// FUNCTION 1494f9934 FUN_1494f9934 body=340 status=ok
// SIG undefined FUN_1494f9934(void)

void FUN_1494f9934(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &PTR_FUN_14bc1c700;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pppuVar6 = &local_48;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar6 = *(undefined ****)(param_2 + 0x38);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1494f9a8a(pppuVar6,puVar5);
  *param_3 = uVar4;
  FUN_1492df7de(&local_78);
  plVar3 = plStack_38;
  local_48 = &PTR_FUN_14bc1c700;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f9a8a FUN_1494f9a8a body=75 status=ok
// SIG undefined FUN_1494f9a8a(void)

bool FUN_1494f9a8a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1492ddf96();
  if (lVar1 != 0) {
    FUN_1406fa324(param_2,lVar1);
    FUN_1406fa324(param_2 + 0x10,lVar1 + 0x10);
    FUN_14054c6c4(param_2 + 0x20,lVar1 + 0x20);
  }
  return lVar1 != 0;
}



// FUNCTION 1494f9ad6 FUN_1494f9ad6 body=527 status=ok
// SIG undefined FUN_1494f9ad6(void)

void FUN_1494f9ad6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  longlong *plStack_128;
  LARGE_INTEGER local_120;
  undefined **local_118;
  longlong local_110;
  undefined8 uStack_108;
  double local_100 [6];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = &PTR_FUN_14bc1c700;
  local_130 = 0;
  plStack_128 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  pppuVar5 = &local_138;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  local_118 = &PTR_FUN_14bc19110;
  local_100[1] = 0.0;
  local_110 = 0;
  uStack_108 = 0;
  QueryPerformanceCounter(&local_120);
  local_100[0] = (double)local_120.QuadPart * DAT_14c83f420 + 16777216.0;
  local_d0 = 0;
  local_c8 = 0;
  local_100[2] = 0.0;
  local_100[3] = 0.0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0x18;
  uStack_94 = 1;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = &DAT_100000018;
  local_68 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_118;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494f9ce6(pppuVar5,pppuVar4);
  local_118 = &PTR_FUN_14bc19110;
  FUN_1492e11ae(local_100);
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_128;
  local_138 = &PTR_FUN_14bc1c700;
  if (plStack_128 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_128 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_128)(plStack_128);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f9ce6 FUN_1494f9ce6 body=132 status=ok
// SIG undefined FUN_1494f9ce6(void)

void FUN_1494f9ce6(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  
  lVar7 = FUN_1492ddf96();
  if (lVar7 != 0) {
    FUN_1406fa324(param_2 + 8,lVar7);
  }
  puVar8 = (undefined4 *)FUN_1492ddfa6(param_1);
  if (puVar8 != (undefined4 *)0x0) {
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *(undefined4 *)(param_2 + 0x18) = *puVar8;
    *(undefined4 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x20) = uVar2;
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    FUN_140bb2e20(param_2 + 0x28,puVar8 + 4);
    uVar1 = puVar8[0x19];
    uVar2 = puVar8[0x1a];
    uVar3 = puVar8[0x1b];
    *(undefined4 *)(param_2 + 0x78) = puVar8[0x18];
    *(undefined4 *)(param_2 + 0x7c) = uVar1;
    *(undefined4 *)(param_2 + 0x80) = uVar2;
    *(undefined4 *)(param_2 + 0x84) = uVar3;
    FUN_144a67f5c(param_2 + 0x88,puVar8 + 0x1c);
    uVar4 = *(undefined8 *)(puVar8 + 0x22);
    uVar5 = *(undefined8 *)(puVar8 + 0x23);
    uVar6 = *(undefined8 *)(puVar8 + 0x25);
    *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(puVar8 + 0x20);
    *(undefined8 *)(param_2 + 0xa0) = uVar4;
    *(undefined8 *)(param_2 + 0xa4) = uVar5;
    *(undefined8 *)(param_2 + 0xac) = uVar6;
  }
  return;
}



// FUNCTION 1494f9d6a FUN_1494f9d6a body=330 status=ok
// SIG undefined FUN_1494f9d6a(void)

void FUN_1494f9d6a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  undefined **local_40 [2];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1492dd8b2(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pppuVar3 = local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar3 = *(undefined ****)(param_2 + 0x38);
  }
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ddb44(pppuVar3,plVar2);
  FUN_1492e4ef8(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_40[0] = &PTR_FUN_14bc17778;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494f9eb6 FUN_1494f9eb6 body=415 status=ok
// SIG undefined FUN_1494f9eb6(void)

void FUN_1494f9eb6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined1 auStack_b8 [40];
  undefined **local_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = &PTR_FUN_14bc1c700;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  pppuVar5 = &local_90;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ddc94(pppuVar5,puVar4);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(&local_78);
  plVar3 = plStack_80;
  local_90 = &PTR_FUN_14bc1c700;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fa05a FUN_1494fa05a body=220 status=ok
// SIG undefined FUN_1494fa05a(void)

void FUN_1494fa05a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494fa138(&local_30,local_1c != 0);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fa138 FUN_1494fa138 body=262 status=ok
// SIG undefined FUN_1494fa138(void)

longlong * FUN_1494fa138(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (0 < iVar1) {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x1a0))(lVar3 + -8,&local_40,0,param_2);
    FUN_1494fccea(param_1,local_38);
    lVar3 = local_40;
    if ((longlong)local_38 != 0) {
      lVar4 = 0;
      do {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_149517260(param_1,iVar1);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + 0x10 + lVar4);
        lVar4 = lVar4 + 0x18;
      } while ((longlong)local_38 * 0x18 != lVar4);
    }
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1494fa240 FUN_1494fa240 body=195 status=ok
// SIG undefined FUN_1494fa240(void)

void FUN_1494fa240(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494fa304(&local_28,local_20);
  if (DAT_14c950c29 == '\x01') {
    if (local_28 == 0) {
      local_28 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fa304 FUN_1494fa304 body=101 status=ok
// SIG undefined FUN_1494fa304(void)

undefined8 * FUN_1494fa304(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (iVar1 < 1) {
    *param_1 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x178))(lVar3 + -8,param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1494fa374 FUN_1494fa374 body=302 status=ok
// SIG undefined FUN_1494fa374(void)

void FUN_1494fa374(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494fa4a4(&local_38,iVar1 != 0,local_28 != 0);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fa4a4 FUN_1494fa4a4 body=109 status=ok
// SIG undefined FUN_1494fa4a4(void)

undefined8 * FUN_1494fa4a4(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (iVar1 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x1a0))(lVar3 + -8,param_1,param_2,param_3);
  }
  return param_1;
}



// FUNCTION 1494fa512 FUN_1494fa512 body=155 status=ok
// SIG undefined FUN_1494fa512(void)

void FUN_1494fa512(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494fa5ae(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fa5ae FUN_1494fa5ae body=92 status=ok
// SIG undefined FUN_1494fa5ae(void)

undefined8 FUN_1494fa5ae(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (0 < iVar1) {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
                    /* WARNING: Could not recover jumptable at 0x0001494fa5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x1e8))(lVar3 + -8,param_1);
    return uVar4;
  }
  return 4;
}



// FUNCTION 1494fa60a FUN_1494fa60a body=449 status=ok
// SIG undefined FUN_1494fa60a(void)

void FUN_1494fa60a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = &PTR_FUN_14bc1c700;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  pppuVar5 = &local_b0;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_3b = 0;
  uStack_38 = 0;
  local_30 = 0x10000ea60;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_98;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ddcda(pppuVar5,puVar4);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&local_98);
  plVar3 = plStack_a0;
  local_b0 = &PTR_FUN_14bc1c700;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fa7cc FUN_1494fa7cc body=375 status=ok
// SIG undefined FUN_1494fa7cc(void)

void FUN_1494fa7cc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [32];
  undefined **local_68 [2];
  longlong *local_58;
  undefined **local_48 [2];
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1492dd8b2(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  pppuVar4 = local_48;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  FUN_1492dd8b2(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pppuVar3 = local_68;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar3 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492dd9d6(pppuVar4,pppuVar3);
  local_68[0] = &PTR_FUN_14bc17778;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  local_48[0] = &PTR_FUN_14bc17778;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fa94c FUN_1494fa94c body=693 status=ok
// SIG undefined FUN_1494fa94c(void)

void FUN_1494fa94c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_128 [36];
  undefined4 local_104;
  LARGE_INTEGER local_100;
  undefined **local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  double local_e0 [6];
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = &PTR_FUN_14bc19110;
  local_e0[1] = 0.0;
  local_f0 = 0;
  uStack_e8 = 0;
  QueryPerformanceCounter(&local_100);
  local_e0[0] = (double)local_100.QuadPart * DAT_14c83f420 + 16777216.0;
  local_b0 = 0;
  local_a8 = 0;
  local_e0[2] = 0.0;
  local_e0[3] = 0.0;
  local_a4 = 0xffffffff00000080;
  local_9c = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0x18;
  uStack_74 = 1;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = &DAT_100000018;
  local_48 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  pppuVar2 = *(undefined ****)(param_2 + 0x38);
  local_100.QuadPart = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  puVar4 = &local_104;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar5 = pppuVar2;
  if (pppuVar2 == (undefined ***)0x0) {
    pppuVar5 = &local_f8;
  }
  iVar1 = *(int *)(pppuVar5 + 2);
  if (iVar1 == *(int *)(pppuVar5 + 0x12)) {
    pppuVar6 = &local_f8;
    if (pppuVar2 != (undefined ***)0x0) {
      pppuVar6 = pppuVar2;
    }
    if (iVar1 != 0) {
      uVar8 = 0;
      lVar7 = 0;
      do {
        if (*(longlong *)((longlong)pppuVar6[1] + uVar8) == local_100.QuadPart) {
          if ((int)(~uVar8 >> 3) != 0) {
            *puVar4 = *(undefined4 *)((longlong)pppuVar5[0x11] + (lVar7 >> 0x20) * 4);
            uVar3 = 1;
            goto LAB_1494fab59;
          }
          break;
        }
        lVar7 = lVar7 + 0x100000000;
        uVar8 = uVar8 + 8;
      } while ((longlong)iVar1 * 8 != uVar8);
    }
  }
  uVar3 = 0;
LAB_1494fab59:
  *param_3 = uVar3;
  local_f8 = &PTR_FUN_14bc19110;
  FUN_1492e11ae(local_e0);
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494fac02 FUN_1494fac02 body=388 status=ok
// SIG undefined FUN_1494fac02(void)

void FUN_1494fac02(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 auStack_88 [32];
  undefined **local_68 [2];
  longlong *local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = &PTR_FUN_14bc1c700;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pppuVar5 = &local_48;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  FUN_1492dd8b2(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pppuVar4 = local_68;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ddd98(pppuVar5,pppuVar4);
  local_68[0] = &PTR_FUN_14bc17778;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  plVar1 = plStack_38;
  local_48 = &PTR_FUN_14bc1c700;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fad88 FUN_1494fad88 body=253 status=ok
// SIG undefined FUN_1494fad88(void)

void FUN_1494fad88(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &PTR_FUN_14bc18ce0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar4 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494fae86(local_48,pppuVar4);
  FUN_140008f88(param_3,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  plVar3 = plStack_28;
  local_38 = &PTR_FUN_14bc18ce0;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 1494fae86 FUN_1494fae86 body=70 status=ok
// SIG undefined FUN_1494fae86(void)

longlong * FUN_1494fae86(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar2[1];
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_1);
  }
  return param_1;
}



// FUNCTION 1494faecc FUN_1494faecc body=253 status=ok
// SIG undefined FUN_1494faecc(void)

void FUN_1494faecc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &PTR_FUN_14bc18ce0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar4 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494fafca(local_48,pppuVar4);
  FUN_140008f88(param_3,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  plVar3 = plStack_28;
  local_38 = &PTR_FUN_14bc18ce0;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 1494fafca FUN_1494fafca body=70 status=ok
// SIG undefined FUN_1494fafca(void)

longlong * FUN_1494fafca(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar2[1];
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_1);
  }
  return param_1;
}



// FUNCTION 1494fb010 FUN_1494fb010 body=253 status=ok
// SIG undefined FUN_1494fb010(void)

void FUN_1494fb010(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = &PTR_FUN_14bc18ce0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  pppuVar4 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1494fb10e(local_48,pppuVar4);
  FUN_140008f88(param_3,local_48);
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  plVar3 = plStack_28;
  local_38 = &PTR_FUN_14bc18ce0;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
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



// FUNCTION 1494fb10e FUN_1494fb10e body=70 status=ok
// SIG undefined FUN_1494fb10e(void)

longlong * FUN_1494fb10e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  if (plVar1 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e82300();
    plVar1 = (longlong *)*plVar2;
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar2[1];
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  }
  return param_1;
}



// FUNCTION 1494fb154 FUN_1494fb154 body=193 status=ok
// SIG undefined FUN_1494fb154(void)

void FUN_1494fb154(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  uStack_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  FUN_1494fb216(local_38);
  FUN_140008f88(param_3,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fb216 FUN_1494fb216 body=171 status=ok
// SIG undefined FUN_1494fb216(void)

longlong * FUN_1494fb216(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (iVar1 < 1) {
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    *param_1 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_1 + 1) = (int)plVar4[1];
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x110))(lVar3 + -8,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fb2c2 FUN_1494fb2c2 body=220 status=ok
// SIG undefined FUN_1494fb2c2(void)

void FUN_1494fb2c2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = local_28;
  FUN_1494fb3a0(&local_40);
  if (DAT_14c950c29 == '\x01') {
    if (local_40 == 0) {
      local_40 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_40;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fb3a0 FUN_1494fb3a0 body=101 status=ok
// SIG undefined FUN_1494fb3a0(void)

undefined8 * FUN_1494fb3a0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (iVar1 < 1) {
    *param_1 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x180))(lVar3 + -8,param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1494fb406 FUN_1494fb406 body=469 status=ok
// SIG undefined FUN_1494fb406(void)

void FUN_1494fb406(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 auStack_98 [40];
  undefined **local_70 [2];
  longlong *local_60;
  undefined4 local_4c;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &PTR_FUN_14bc1c700;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pppuVar5 = &local_48;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  FUN_1492dd8b2(local_70);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  pppuVar4 = local_70;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492dde34(pppuVar5,local_4c,pppuVar4);
  local_70[0] = &PTR_FUN_14bc17778;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  plVar1 = plStack_38;
  local_48 = &PTR_FUN_14bc1c700;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fb5dc FUN_1494fb5dc body=471 status=ok
// SIG undefined FUN_1494fb5dc(void)

void FUN_1494fb5dc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined1 auStack_98 [40];
  undefined **local_70 [2];
  longlong *local_60;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &PTR_FUN_14bc1c700;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pppuVar5 = &local_48;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  local_50 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  FUN_1492dd8b2(local_70);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  pppuVar4 = local_70;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ddecc(pppuVar5,local_50,pppuVar4);
  local_70[0] = &PTR_FUN_14bc17778;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  plVar1 = plStack_38;
  local_48 = &PTR_FUN_14bc1c700;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fb7ba FUN_1494fb7ba body=230 status=ok
// SIG undefined FUN_1494fb7ba(void)

void FUN_1494fb7ba(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [40];
  undefined **local_40 [2];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1492dd8b2(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pppuVar4 = local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1492dd9ac(pppuVar4);
  *param_3 = uVar3;
  local_40[0] = &PTR_FUN_14bc17778;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fb8a8 FUN_1494fb8a8 body=155 status=ok
// SIG undefined FUN_1494fb8a8(void)

void FUN_1494fb8a8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1494fb944(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fb944 FUN_1494fb944 body=92 status=ok
// SIG undefined FUN_1494fb944(void)

undefined8 FUN_1494fb944(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (0 < iVar1) {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
                    /* WARNING: Could not recover jumptable at 0x0001494fb994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x1b8))(lVar3 + -8,param_1);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1494fb9a6 FUN_1494fb9a6 body=243 status=ok
// SIG undefined FUN_1494fb9a6(void)

void FUN_1494fb9a6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_14bc18ce0;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pppuVar5 = &local_38;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar5 = *(undefined ****)(param_2 + 0x38);
  }
  if (pppuVar5[1] == (undefined **)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*pppuVar5[1] + 0x28))();
  }
  plVar3 = plStack_28;
  *param_3 = uVar4;
  local_38 = &PTR_FUN_14bc18ce0;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fbaa6 FUN_1494fbaa6 body=258 status=ok
// SIG undefined FUN_1494fbaa6(void)

void FUN_1494fbaa6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uVar1 = FUN_1494fbbaa(&local_58,local_3c != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fbbaa FUN_1494fbbaa body=100 status=ok
// SIG undefined FUN_1494fbbaa(void)

undefined8 FUN_1494fbbaa(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (0 < iVar1) {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
                    /* WARNING: Could not recover jumptable at 0x0001494fbc01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x1c0))(lVar3 + -8,param_1,param_2);
    return uVar4;
  }
  return 0;
}



// FUNCTION 1494fbc0e FUN_1494fbc0e body=230 status=ok
// SIG undefined FUN_1494fbc0e(void)

void FUN_1494fbc0e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14bc1c700;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_40;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1492ddd6a(pppuVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  local_40 = &PTR_FUN_14bc1c700;
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fbcf6 FUN_1494fbcf6 body=397 status=ok
// SIG undefined FUN_1494fbcf6(void)

void FUN_1494fbcf6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined **local_40 [2];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1492dd8b2(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pppuVar4 = local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar3 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492dd948(pppuVar4,puVar3);
  local_40[0] = &PTR_FUN_14bc17778;
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
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fbe8a FUN_1494fbe8a body=223 status=ok
// SIG undefined FUN_1494fbe8a(void)

void FUN_1494fbe8a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14bc18ce0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_40;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1494fbf6a(pppuVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  local_40 = &PTR_FUN_14bc18ce0;
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
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fbf6a FUN_1494fbf6a body=162 status=ok
// SIG undefined FUN_1494fbf6a(void)

undefined8 FUN_1494fbf6a(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar2 = (longlong *)FUN_1448c2e86();
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
    if (0 < iVar1) {
      lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
      local_28 = *(undefined8 *)(param_1 + 8);
      local_20 = *(longlong *)(param_1 + 0x10);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*(longlong *)(lVar3 + -8) + 0xe8))((longlong *)(lVar3 + -8),&local_28);
      uVar4 = 1;
      goto LAB_1494fbfef;
    }
  }
  uVar4 = 0;
LAB_1494fbfef:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fc014 FUN_1494fc014 body=251 status=ok
// SIG undefined FUN_1494fc014(void)

void FUN_1494fc014(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_18;
  local_48 = (undefined4)local_28;
  uStack_44 = local_28._4_4_;
  uStack_40 = (undefined4)uStack_20;
  uStack_3c = uStack_20._4_4_;
  FUN_1494fc110(&local_48,local_2c != 0);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fc110 FUN_1494fc110 body=99 status=ok
// SIG undefined FUN_1494fc110(void)

void FUN_1494fc110(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (0 < iVar1) {
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
                    /* WARNING: Could not recover jumptable at 0x0001494fc167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar3 + -8) + 0x1c8))(lVar3 + -8,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1494fc174 FUN_1494fc174 body=324 status=ok
// SIG undefined FUN_1494fc174(void)

void FUN_1494fc174(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40 [2];
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1492dd8b2(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pppuVar4 = local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492dd8ce(pppuVar4,puVar3);
  local_40[0] = &PTR_FUN_14bc17778;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fc2ba FUN_1494fc2ba body=340 status=ok
// SIG undefined FUN_1494fc2ba(void)

void FUN_1494fc2ba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  undefined **local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = &PTR_FUN_14bc1c700;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  pppuVar4 = &local_40;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar4 = *(undefined ****)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1492ddd7e(pppuVar4,plVar3);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_30;
  local_40 = &PTR_FUN_14bc1c700;
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



// FUNCTION 1494fc410 FUN_1494fc410 body=425 status=ok
// SIG undefined FUN_1494fc410(void)

void FUN_1494fc410(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  lStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
    }
    lVar5 = 0;
    if (bVar6) {
      lVar5 = lVar1;
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x18;
  uStack_4c = 1;
  local_68 = local_48;
  local_60 = lStack_40;
  if ((lStack_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = &local_58;
  local_80 = 0;
  local_88 = 0;
  local_70 = uVar2;
  uVar3 = FUN_1494fcd14(param_1,param_2,lVar5,&local_68);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494fc5ba FUN_1494fc5ba body=667 status=ok
// SIG undefined FUN_1494fc5ba(void)

void FUN_1494fc5ba(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_140019cf2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  uStack_58 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
    }
    lVar5 = 0;
    if (bVar6) {
      lVar5 = lVar1;
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1468002e8(&local_80);
  FUN_147516d62(&local_68,local_78,&local_80);
  local_74 = 0;
  local_70 = local_80;
  if (local_50 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_50);
  }
  local_90 = local_48;
  local_88 = local_50;
  if ((local_50 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(local_50);
  }
  local_b0 = 0;
  local_b8 = 2;
  local_a8 = local_78;
  local_a0 = uVar2;
  uVar3 = FUN_1494fcd14(param_1,param_2,lVar5,&local_90);
  *param_3 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494fc856 FUN_1494fc856 body=648 status=ok
// SIG undefined FUN_1494fc856(void)

void FUN_1494fc856(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  float fVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  double local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float local_74;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_68 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_140019cf2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)(lVar1 + 8);
    lVar6 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar6 + 8) == 0) {
      bVar8 = lVar7 != 0;
      if (lVar7 != lVar6 && bVar8) {
        do {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          bVar8 = lVar7 != 0;
          if (lVar7 == lVar6) break;
        } while (lVar7 != 0);
      }
    }
    else {
      bVar8 = (*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0;
    }
    lVar7 = 0;
    if (bVar8) {
      lVar7 = lVar1;
    }
  }
  fVar4 = local_74;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar3 = DAT_14c866ff8;
  local_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x18;
  uStack_78 = 1;
  if (local_70 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_70);
  }
  local_98 = local_68;
  local_90 = local_70;
  if ((local_70 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(local_70);
  }
  local_b0 = dVar3 + (double)fVar4;
  local_a8 = &local_84;
  local_b8 = 1;
  local_a0 = uVar2;
  uVar5 = FUN_1494fcd14(param_1,param_2,lVar7,&local_98);
  *param_3 = uVar5;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494fcae0 FUN_1494fcae0 body=518 status=ok
// SIG undefined FUN_1494fcae0(void)

void FUN_1494fcae0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_140019cf2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar1 + 8);
    lVar4 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar6 = lVar5 != 0;
      if (lVar5 != lVar4 && bVar6) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar6 = lVar5 != 0;
          if (lVar5 == lVar4) break;
        } while (lVar5 != 0);
      }
    }
    else {
      bVar6 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
    }
    lVar5 = 0;
    if (bVar6) {
      lVar5 = lVar1;
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x18;
  uStack_4c = 1;
  if (local_48 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_48);
  }
  local_68 = local_40;
  local_60 = local_48;
  if ((local_48 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(local_48);
  }
  local_78 = &local_58;
  local_80 = 0;
  local_88 = 0;
  local_70 = uVar2;
  uVar3 = FUN_1494fcd14(param_1,param_2,lVar5,&local_68);
  *param_3 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1494fccea FUN_1494fccea body=41 status=ok
// SIG undefined FUN_1494fccea(void)

void FUN_1494fccea(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_149517aec();
  return;
}



// FUNCTION 1494fcd14 FUN_1494fcd14 body=1318 status=ok
// SIG undefined FUN_1494fcd14(void)

undefined4
FUN_1494fcd14(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4,int param_5,
             undefined4 param_6,undefined8 param_7,longlong param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined1 auStack_128 [32];
  undefined ***local_108;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined **local_e0;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined **local_b8;
  undefined8 local_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  longlong *local_90;
  undefined4 local_88;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = param_4[1];
  if ((((lVar5 == 0) || (lVar4 = FUN_1411f0380(), lVar4 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     (((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30 || (lVar5 = param_4[1], lVar5 == 0)) || (*param_4 == 0)))) {
    local_e0 = (undefined **)0x14bd2be70;
    local_d8._0_4_ = 0x10;
    FUN_1446e940c(local_64,&local_e0);
    local_e0 = (undefined **)0x14bd2be92;
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x15);
    FUN_1446e940c(local_68,&local_e0);
    pwVar8 = L"Failed to resolve the subject. Be sure the subject name and role are valid.";
LAB_1494fcdd5:
    FUN_140208bae(&local_90,local_68,local_64,pwVar8);
    local_e0 = (undefined **)CONCAT44(local_e0._4_4_,3);
    local_d8 = local_90;
    if (local_90 == (longlong *)0x0) {
      uStack_d0 = local_88;
    }
    else {
      (**(code **)(*local_90 + 8))();
      uStack_d0 = local_88;
      if (local_90 != (longlong *)0x0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    FUN_14282556a(param_1,param_2,&local_e0);
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
  }
  else {
    if (param_8 == 0 || param_3 == 0) {
      local_e0 = (undefined **)0x14a8aa7ae;
      local_d8._0_4_ = 0x15;
      FUN_1446e940c(local_64,&local_e0);
      local_e0 = (undefined **)0x14bd2be92;
      local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x15);
      FUN_1446e940c(local_68,&local_e0);
      pwVar8 = L"Failed to resolve the output parameter for EvaluateLiveLinkFrame.";
      goto LAB_1494fcdd5;
    }
    lVar4 = FUN_1411f0380();
    if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)param_4[1];
    }
    plVar7 = (longlong *)plVar6[0x22];
    if (plVar7 == (longlong *)0x0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      plVar7 = (longlong *)plVar6[0x22];
      if (plVar7 != (longlong *)0x0) goto LAB_1494fcefe;
    }
    else {
LAB_1494fcefe:
      lVar5 = FUN_1411f0380();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        lVar5 = *(longlong *)(param_3 + 0x70);
        lVar4 = (**(code **)(*plVar7 + 0x2b0))(plVar7);
        if ((lVar5 == lVar4) ||
           ((((lVar4 != 0 && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) && (cVar1 = FUN_146891eee(lVar5,lVar4,0), cVar1 != '\0')))) {
          FUN_1468fbe3e(&local_90,lVar5,param_8);
          plVar6 = (longlong *)FUN_1448c2e86();
          iVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,DAT_14cc0b540);
          if (iVar2 < 1) {
            uVar3 = 0;
          }
          else {
            lVar5 = (**(code **)(*plVar6 + 0x20))(plVar6,DAT_14cc0b540,0);
            plVar6 = (longlong *)(lVar5 + -8);
            local_e0 = &PTR_FUN_149eacb10;
            local_d8 = (longlong *)0x0;
            uStack_d0 = 0;
            uStack_cc = 0;
            uStack_c8 = 0;
            uStack_c7 = 0;
            local_b8 = &PTR_FUN_149eacb10;
            local_b0 = 0;
            uStack_a8 = 0;
            uStack_a7 = 0;
            uStack_a0 = 0;
            uStack_9f = 0;
            lVar5 = param_4[1];
            if (param_5 == 2) {
              local_f0 = lVar5;
              if ((lVar5 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_108 = &local_e0;
              cVar1 = (**(code **)(*plVar6 + 0x248))(plVar6,*param_4,param_7,&local_f0);
            }
            else if (param_5 == 1) {
              local_e8 = lVar5;
              if ((lVar5 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              local_108 = &local_e0;
              cVar1 = (**(code **)(*plVar6 + 0x240))(plVar6,*param_4,param_6,&local_e8);
            }
            else {
              local_f8 = lVar5;
              if ((lVar5 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
              cVar1 = (**(code **)(*plVar6 + 0x238))(plVar6,*param_4,&local_f8,&local_e0);
            }
            if (cVar1 == '\0') {
              uVar3 = 0;
            }
            else {
              plVar6 = (longlong *)param_4[1];
              if (plVar6 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
              }
              else {
                plVar7 = (longlong *)plVar6[0x22];
                if (plVar7 == (longlong *)0x0) {
                  (**(code **)(*plVar6 + 1000))(plVar6);
                  plVar7 = (longlong *)plVar6[0x22];
                }
              }
              uVar3 = (**(code **)(*plVar7 + 0x2b8))(plVar7,&local_e0,&local_90);
            }
            FUN_1448eac94(&local_b8);
            FUN_1448eac94(&local_e0);
          }
          FUN_1448eac94(&local_90);
          goto LAB_1494fce4b;
        }
        local_e0 = (undefined **)0x14a8aa70c;
        local_d8._0_4_ = 0x14;
        FUN_1446e940c(local_64,&local_e0);
        local_e0 = (undefined **)0x14bd2be92;
        local_d8 = (longlong *)CONCAT44(local_d8._4_4_,0x15);
        FUN_1446e940c(local_68,&local_e0);
        pwVar8 = 
        L"Incompatible output blueprint data; the role blueprint\'s data type is not the same as the return type."
        ;
        goto LAB_1494fcdd5;
      }
    }
  }
  uVar3 = 0;
LAB_1494fce4b:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1494fd23c FUN_1494fd23c body=73 status=ok
// SIG undefined FUN_1494fd23c(void)

void FUN_1494fd23c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = *(undefined8 *)(param_2 + 4);
  FUN_1494fd316(local_28,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fd286 FUN_1494fd286 body=144 status=ok
// SIG undefined FUN_1494fd286(void)

undefined8 * FUN_1494fd286(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_2 = *(undefined8 *)(param_3 + 0x10);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x210))(param_1,param_3);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1459888c4();
    if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar2 = FUN_14594cb18();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        (**(code **)(*plVar1 + 0x2b0))(plVar1,param_2);
      }
    }
    else {
      (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2);
    }
  }
  return param_2;
}



// FUNCTION 1494fd316 FUN_1494fd316 body=291 status=ok
// SIG undefined FUN_1494fd316(void)

void FUN_1494fd316(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1494fd286(param_1,&local_28,param_2);
    iVar6 = FUN_1447addd0(param_2,0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
    uVar7 = (uint)uVar3 & 0xffff;
    iVar6 = FUN_1495192ee(param_1 + 0x1a8,
                          (((uint)uVar3 << 0x10 | uVar7) + (int)((ulonglong)uVar3 >> 0x20) +
                           (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 0xd + iVar6,param_2);
    if (iVar6 != -1) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),local_28)
      ;
      FUN_1494fd43a(param_1 + 0x1a8,param_2);
      if (*(int *)(param_1 + 0x1b0) <= *(int *)(param_1 + 0x1dc)) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        plVar4 = *(longlong **)(param_1 + 0x18);
        if (plVar4 != (longlong *)0x0) {
          *(undefined8 *)(param_1 + 0x18) = 0;
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
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fd43a FUN_1494fd43a body=229 status=ok
// SIG undefined FUN_1494fd43a(void)

void FUN_1494fd43a(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = FUN_1447addd0(param_2,0x10);
    lVar2 = *(longlong *)(param_2 + 4);
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    ((longlong)
                     (int)((((uint)lVar2 << 0x10 | uVar6) + (int)((ulonglong)lVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 0xd + iVar4) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar4 * 0x20);
        if ((((*(longlong *)(*param_1 + 0x10 + (longlong)iVar4 * 0x20) == lVar2) &&
             (*piVar1 == *param_2)) && (piVar1[1] == param_2[1])) &&
           ((piVar1[2] == param_2[2] && (piVar1[3] == param_2[3])))) {
          FUN_1495195de(param_1);
          return;
        }
        iVar4 = piVar1[6];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 1494fd520 FUN_1494fd520 body=292 status=ok
// SIG undefined FUN_1494fd520(void)

ulonglong FUN_1494fd520(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),3);
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    lVar5 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar4 * 0x28);
        if (*plVar1 == param_2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            local_18 = plVar1[3];
            local_28 = (undefined4)plVar1[1];
            uStack_24 = *(undefined4 *)((longlong)plVar1 + 0xc);
            uStack_20 = (undefined4)plVar1[2];
            uStack_1c = *(undefined4 *)((longlong)plVar1 + 0x14);
            lVar5 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
            if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) {
              bVar3 = (**(code **)(*(longlong *)(lVar5 + 8) + 8))(lVar5 + 8);
              uVar6 = 4;
              if (bVar3 < 3) {
                uVar6 = (ulonglong)bVar3;
              }
            }
          }
          break;
        }
        iVar4 = (int)plVar1[4];
      } while (iVar4 != -1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1494fd646 FUN_1494fd646 body=118 status=ok
// SIG undefined FUN_1494fd646(void)

int * FUN_1494fd646(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_14490b2fc(param_1 + 0x150);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0x38;
    do {
      if ((((*(longlong *)(piVar1 + 4) == *(longlong *)(param_2 + 4)) && (*piVar1 == *param_2)) &&
          (piVar1[1] == param_2[1])) && ((piVar1[2] == param_2[2] && (piVar1[3] == param_2[3]))))
      goto LAB_1494fd6a9;
      piVar1 = piVar1 + 0xe;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
  }
  piVar1 = (int *)0x0;
LAB_1494fd6a9:
  FUN_144a6a7be(param_1 + 0x150);
  return piVar1;
}



// FUNCTION 1494fd6bc FUN_1494fd6bc body=887 status=ok
// SIG undefined FUN_1494fd6bc(void)

/* WARNING: Removing unreachable block (ram,0x0001494fd88e) */
/* WARNING: Removing unreachable block (ram,0x0001494fd899) */
/* WARNING: Removing unreachable block (ram,0x0001494fd8ac) */

undefined8 * FUN_1494fd6bc(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined2 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_58 = *param_3;
  local_50 = param_3[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  lVar4 = FUN_1494fda34(uVar3,&local_58);
  if (lVar4 != 0) goto LAB_1494fd723;
  FUN_1412e3d1e(param_2);
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  local_88 = 0;
  local_98 = *(undefined4 *)param_2;
  uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_90 = *(undefined4 *)(param_2 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_80 = *param_3;
  local_78 = param_3[1];
  if (local_78 == 0) {
    local_78 = 0;
  }
  else {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bd35480;
  plVar7 = plVar5 + 2;
  local_48 = *(undefined4 *)param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = *(undefined4 *)(param_2 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_14950ea98(plVar7,param_1);
  local_70 = SUB82(plVar7,0);
  uStack_6e = (undefined2)((ulonglong)plVar7 >> 0x10);
  uStack_6c = (undefined4)((ulonglong)plVar7 >> 0x20);
  if (plVar5 == (longlong *)0x0) {
    plVar7 = (longlong *)CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
    if (plVar7 != (longlong *)0x0) {
      uStack_68 = 0;
      uStack_66 = 0;
      uStack_64 = 0;
LAB_1494fd83c:
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (plVar5 != (longlong *)0x0) goto LAB_1494fd906;
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar7 = (longlong *)CONCAT44(uStack_64,CONCAT22(uStack_66,uStack_68));
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    else {
      uStack_68 = SUB82(plVar5,0);
      uStack_66 = (undefined2)((ulonglong)plVar5 >> 0x10);
      uStack_64 = (undefined4)((ulonglong)plVar5 >> 0x20);
      if (plVar7 != (longlong *)0x0) goto LAB_1494fd83c;
    }
LAB_1494fd906:
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  (**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,&local_48);
  lVar4 = CONCAT44(uStack_44,local_48);
  if ((((lVar4 == 0) || (lVar6 = FUN_14590a714(), lVar6 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30 || (lVar4 = CONCAT44(uStack_44,local_48), lVar4 == 0)))) {
    lVar4 = FUN_14590a714();
  }
  lVar4 = FUN_1494fdae4(DAT_14c951640,lVar4);
  if (lVar4 != 0) {
    FUN_1401924dc(lVar4);
  }
  if ((local_88 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  local_d8 = CONCAT44(uStack_94,local_98);
  uStack_d0 = CONCAT44(uStack_8c,uStack_90);
  local_88 = 0;
  local_c0 = uStack_80;
  lStack_b8 = local_78;
  uStack_80 = 0;
  local_78 = 0;
  local_b0 = CONCAT22(uStack_6e,local_70);
  uStack_a8 = CONCAT22(uStack_66,uStack_68);
  uStack_ac = uStack_6c;
  uStack_a4 = uStack_64;
  local_70 = 0;
  uStack_6e = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  local_a0 = uStack_60;
  local_c8 = lVar4;
  FUN_1494fdb94(*(undefined8 *)(param_1 + 8));
  local_e8 = *(undefined4 *)param_2;
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_e0 = *(undefined4 *)(param_2 + 1);
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0xc);
  (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,param_1);
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,lVar4);
  FUN_14606bbe0(&local_98);
LAB_1494fd723:
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fda34 FUN_1494fda34 body=176 status=ok
// SIG undefined FUN_1494fda34(void)

longlong FUN_1494fda34(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14490b2fc(param_1 + 0x2b);
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((longlong)(int)param_1[1] != 0) {
    lVar6 = *param_1;
    lVar5 = (longlong)(int)param_1[1] << 6;
    do {
      if (*(longlong *)(lVar6 + 0x18) == lVar3) goto LAB_1494fda85;
      lVar6 = lVar6 + 0x40;
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
  }
  lVar6 = 0;
LAB_1494fda85:
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
  FUN_144a6a7be(param_1 + 0x2b);
  plVar4 = (longlong *)param_2[1];
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
  return lVar6;
}



// FUNCTION 1494fdae4 FUN_1494fdae4 body=175 status=ok
// SIG undefined FUN_1494fdae4(void)

undefined8 FUN_1494fdae4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1494fdb94 FUN_1494fdb94 body=591 status=ok
// SIG undefined FUN_1494fdb94(void)

void FUN_1494fdb94(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  longlong *local_98 [2];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60;
  undefined4 local_5c;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14490b2fc(param_1 + 0x2b);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14606bca8(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar5 = (longlong)iVar1 * 0x40;
  uVar3 = param_2[1];
  *(undefined8 *)(lVar2 + lVar5) = *param_2;
  ((undefined8 *)(lVar2 + lVar5))[1] = uVar3;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar5) = param_2[2];
  param_2[2] = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar5) = param_2[3];
  *(undefined8 *)(lVar2 + 0x20 + lVar5) = param_2[4];
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar5) = param_2[5];
  *(undefined8 *)(lVar2 + 0x30 + lVar5) = param_2[6];
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined2 *)(lVar2 + 0x38 + lVar5) = *(undefined2 *)(param_2 + 7);
  plVar4 = (longlong *)(lVar2 + lVar5);
  local_88 = *plVar4;
  uStack_80 = (undefined4)plVar4[1];
  uStack_7c = *(undefined4 *)((longlong)plVar4 + 0xc);
  FUN_14951ea80(param_1 + 10);
  FUN_1447f69b6(param_1 + 4);
  plVar4 = *(longlong **)(lVar2 + 0x18 + lVar5);
  if ((plVar4 != (longlong *)0x0) && (DAT_14cad8288 != 0)) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    (**(code **)(*plVar4 + 0x38))(plVar4,local_98);
    uVar3 = FUN_1447a1f4a(local_98);
    FUN_140056680(local_a8,L"Type");
    FUN_146b280ea(&local_88,local_a8,uVar3);
    uStack_50 = CONCAT44(uStack_50._4_4_,1);
    FUN_146b17dba(&local_58,0);
    *local_58 = 0;
    *local_58 = local_88;
    local_88 = 0;
    *(undefined4 *)(local_58 + 1) = uStack_80;
    *(undefined4 *)((longlong)local_58 + 0xc) = uStack_7c;
    uStack_80 = 0;
    uStack_7c = 0;
    local_58[2] = 0;
    local_58[2] = local_78;
    local_78 = 0;
    *(undefined4 *)(local_58 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_58 + 0x1c) = local_70._4_4_;
    local_70 = 0;
    local_58[4] = local_68;
    *(undefined1 *)(local_58 + 5) = local_60;
    *(undefined4 *)((longlong)local_58 + 0x2c) = local_5c;
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    plVar4 = (longlong *)FUN_147a89392();
    FUN_140056680(&local_88,L"Usage.LiveLink.SourceAdded");
    (**(code **)(*plVar4 + 0xf0))(plVar4,&local_88,&local_58);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_146b17e4e(local_58,uStack_50 & 0xffffffff);
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_144a6a7be(param_1 + 0x2b);
  FUN_14606bbe0(param_2);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fdde4 FUN_1494fdde4 body=760 status=ok
// SIG undefined FUN_1494fdde4(void)

/* WARNING: Removing unreachable block (ram,0x0001494fdfd2) */
/* WARNING: Removing unreachable block (ram,0x0001494fdfdd) */
/* WARNING: Removing unreachable block (ram,0x0001494fdff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1494fdde4(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *plStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined2 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_78;
  undefined2 uStack_70;
  undefined2 local_6e;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  param_2[1] = 0;
  local_50 = param_3;
  lVar4 = FUN_1494fe0de(*(undefined8 *)(param_1 + 8),param_3);
  if (lVar4 != 0) {
    FUN_1400021e4(&local_50,&local_98);
    if (CONCAT44(uStack_94,local_98) != 0) {
      FUN_1400020a8();
    }
    goto LAB_1494fde50;
  }
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bd354a0;
  plVar5[2] = (longlong)&PTR_FUN_14bd354c0;
  plVar5[3] = 0;
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
  plVar1 = plVar5 + 2;
  FUN_1412e3d1e(param_2);
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5f = 0;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_6e = 0;
  uStack_6c = 0;
  local_88 = 0;
  local_98 = *(undefined4 *)param_2;
  uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_90 = *(undefined4 *)(param_2 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
  plStack_80 = plVar1;
  plVar3 = local_78;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar3 = plVar5;
    if (plVar5 == (longlong *)0x0) {
      LOCK();
      _DAT_00000008 = _DAT_00000008 + -1;
      UNLOCK();
      plVar3 = local_78;
      if (_DAT_00000008 == 0) {
        (*(code *)*_DAT_00000000)(0);
        LOCK();
        _DAT_0000000c = _DAT_0000000c + -1;
        UNLOCK();
        plVar3 = local_78;
        if (_DAT_0000000c == 0) {
          (*(code *)_DAT_00000000[2])(0);
          plVar3 = local_78;
        }
      }
    }
  }
  local_78 = plVar3;
  uVar6 = FUN_1459f7ae2();
  lVar4 = FUN_14606bd2c(DAT_14c951640,uVar6);
  *(undefined8 *)(lVar4 + 0xb0) = local_50;
  if (lVar4 == 0) {
    local_c8 = 0;
    lVar7 = local_88;
    if (local_88 != 0) goto LAB_1494fe01c;
  }
  else {
    FUN_1401924dc(lVar4);
    lVar7 = lVar4;
    local_c8 = local_88;
    if (local_88 != lVar4) {
      if ((local_88 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48(local_88);
      }
      FUN_1401924dc(lVar4);
      local_c8 = lVar4;
    }
LAB_1494fe01c:
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48(lVar7);
    }
  }
  uStack_5f = 1;
  local_d8 = CONCAT44(uStack_94,local_98);
  uStack_d0 = CONCAT44(uStack_8c,uStack_90);
  local_88 = 0;
  local_c0 = plStack_80;
  plStack_b8 = local_78;
  plStack_80 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_b0 = CONCAT22(local_6e,uStack_70);
  uStack_a8 = CONCAT22(uStack_66,uStack_68);
  uStack_ac = uStack_6c;
  uStack_a4 = uStack_64;
  uStack_70 = 0;
  local_6e = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  local_a0 = CONCAT11(1,uStack_60);
  FUN_1494fdb94(*(undefined8 *)(param_1 + 8));
  local_e8 = *(undefined4 *)param_2;
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_e0 = *(undefined4 *)(param_2 + 1);
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0xc);
  (**(code **)(plVar5[2] + 8))(plVar1,param_1);
  (**(code **)(plVar5[2] + 0x10))(plVar1,lVar4);
  FUN_14606bbe0(&local_98);
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
LAB_1494fde50:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fe0de FUN_1494fe0de body=143 status=ok
// SIG undefined FUN_1494fe0de(void)

longlong FUN_1494fe0de(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14490b2fc(param_1 + 0x2b);
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 6;
    do {
      if ((*(char *)(lVar3 + 0x39) == '\x01') && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0))
      {
        lVar2 = FUN_1459f7ae2();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30 &&
            (*(longlong *)(lVar1 + 0xb0) == param_2)))) goto LAB_1494fe156;
      }
      lVar3 = lVar3 + 0x40;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
  }
  lVar3 = 0;
LAB_1494fe156:
  FUN_144a6a7be(param_1 + 0x2b);
  return lVar3;
}



// FUNCTION 1494fe16e FUN_1494fe16e body=1528 status=ok
// SIG undefined FUN_1494fe16e(void)

ulonglong FUN_1494fe16e(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong *local_110;
  longlong *plStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined2 local_f0;
  undefined1 local_e0 [40];
  longlong local_b8 [2];
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  longlong local_98;
  longlong *plStack_90;
  longlong *local_88;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(param_2 + 4) != 0) {
    if ((param_2[3] != -0x574db5a6 ||
         (param_2[2] != 0x4af0635d || (param_2[1] != -0x33a6ee32 || *param_2 != 0x4ed2dc4e))) &&
       (((param_2[1] != 0 || *param_2 != 0) || param_2[2] != 0) || param_2[3] != 0)) {
      local_68 = *param_2;
      iStack_64 = param_2[1];
      iStack_60 = param_2[2];
      iStack_5c = param_2[3];
      lVar7 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
      if (lVar7 == 0) {
        uStack_78 = 0;
        uStack_76 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6f = 0;
        local_88 = (longlong *)0x0;
        local_80 = 0;
        uStack_7e = 0;
        uStack_7c = 0;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        local_a8 = *param_2;
        iStack_a4 = param_2[1];
        iStack_a0 = param_2[2];
        iStack_9c = param_2[3];
        lVar7 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x10);
        lVar8 = FUN_1459f7ae2();
        if (lVar7 == lVar8) {
          plVar9 = (longlong *)FUN_14001cc68(0x20,0x10);
          plVar9[1] = (longlong)&DAT_100000001;
          *plVar9 = (longlong)&PTR_FUN_14bd354a0;
          plVar9[2] = (longlong)&PTR_FUN_14bd354c0;
          plVar9[3] = 0;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            LOCK();
            plVar13 = plVar9 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          plVar13 = plVar9 + 2;
          uStack_6f = 1;
LAB_1494fe2e2:
          plVar5 = local_88;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          plStack_90 = plVar13;
          plVar12 = plVar9;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_88 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              puVar4 = (undefined8 *)*local_88;
              local_88 = plVar9;
              (*(code *)*puVar4)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar12 = local_88;
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                plVar12 = local_88;
              }
            }
          }
          local_88 = plVar12;
          (**(code **)(*plVar13 + 0x50))(plVar13,&local_58);
          lVar7 = CONCAT44(iStack_54,local_58);
          if (((lVar7 == 0) || (lVar8 = FUN_14590a714(), lVar8 == 0)) ||
             ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38) ||
              (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
               lVar8 + 0x30)))) {
            lVar7 = *(longlong *)(param_2 + 4);
LAB_1494fe49b:
            uVar6 = DAT_14c951640;
            uVar11 = FUN_14590a714();
            lVar7 = FUN_14092e757(uVar11,lVar7,uVar6,0);
          }
          else {
            lVar8 = CONCAT44(iStack_54,local_58);
            lVar7 = *(longlong *)(param_2 + 4);
            if ((lVar8 == 0) || (lVar8 == *(longlong *)(lVar7 + 0x10))) goto LAB_1494fe49b;
            local_b8[0] = *(longlong *)(lVar8 + 0x18);
            FUN_1400021e4(local_b8,&local_58);
            local_48 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 4) + 0x10) + 0x18);
            FUN_1400021e4(&local_48,local_b8);
            FUN_1447a1f4a(param_2 + 6);
            if (local_b8[0] != 0) {
              FUN_1400020a8();
            }
            if (CONCAT44(iStack_54,local_58) != 0) {
              FUN_1400020a8();
            }
            lVar7 = FUN_1494fdae4(DAT_14c951640,lVar8);
            FUN_147d81e8c(local_e0);
            FUN_1437656e6(*(undefined8 *)(param_2 + 4),lVar7,local_e0);
          }
          if (lVar7 != 0) {
            FUN_1401924dc(lVar7);
          }
          if ((local_98 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          local_128 = CONCAT44(iStack_a4,local_a8);
          uStack_120 = CONCAT44(iStack_9c,iStack_a0);
          local_98 = 0;
          local_110 = plStack_90;
          plStack_108 = local_88;
          plStack_90 = (longlong *)0x0;
          local_88 = (longlong *)0x0;
          local_100 = CONCAT22(uStack_7e,local_80);
          uStack_f8 = CONCAT22(uStack_76,uStack_78);
          uStack_fc = uStack_7c;
          uStack_f4 = uStack_74;
          local_80 = 0;
          uStack_7e = 0;
          uStack_7c = 0;
          uStack_78 = 0;
          uStack_76 = 0;
          uStack_74 = 0;
          local_f0 = CONCAT11(uStack_6f,uStack_70);
          local_118 = lVar7;
          FUN_1494fdb94(*(undefined8 *)(param_1 + 8));
          local_138 = *param_2;
          iStack_134 = param_2[1];
          iStack_130 = param_2[2];
          iStack_12c = param_2[3];
          (**(code **)(*plVar13 + 8))(plVar13,param_1);
          (**(code **)(*plVar13 + 0x10))(plVar13,lVar7);
          uVar14 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        }
        else {
          lVar7 = *(longlong *)(param_2 + 4);
          lVar8 = *(longlong *)(lVar7 + 0xa0);
          if ((((lVar8 == 0) || (lVar10 = FUN_1459d8e1a(), lVar10 == 0)) ||
              (*(int *)(lVar8 + 0x38) < *(int *)(lVar10 + 0x38))) ||
             ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
               lVar10 + 0x30 || (*(longlong *)(lVar7 + 0xa0) == 0)))) {
LAB_1494fe485:
            FUN_14606bbe0(&local_a8);
            goto LAB_1494fe1e7;
          }
          lVar7 = *(longlong *)(param_2 + 4);
          lVar8 = *(longlong *)(lVar7 + 0xa0);
          if (((lVar8 == 0) ||
              ((lVar10 = FUN_1459d8e1a(), lVar10 == 0 ||
               (*(int *)(lVar8 + 0x38) < *(int *)(lVar10 + 0x38))))) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
              lVar10 + 0x30)) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(longlong *)(lVar7 + 0xa0);
          }
          lVar8 = FUN_1459d8e1a();
          if (lVar7 == lVar8) goto LAB_1494fe485;
          lVar7 = *(longlong *)(param_2 + 4);
          lVar8 = *(longlong *)(lVar7 + 0xa0);
          if ((((lVar8 == 0) || (lVar10 = FUN_1459d8e1a(), lVar10 == 0)) ||
              (*(int *)(lVar8 + 0x38) < *(int *)(lVar10 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
              lVar10 + 0x30)) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = *(longlong **)(lVar7 + 0xa0);
          }
          plVar9 = (longlong *)plVar13[0x22];
          if (plVar9 == (longlong *)0x0) {
            (**(code **)(*plVar13 + 1000))(plVar13);
            plVar9 = (longlong *)plVar13[0x22];
          }
          (**(code **)(*plVar9 + 0x2d0))(plVar9,&local_58,*(longlong *)(param_2 + 4) + 0x90);
          plVar13 = (longlong *)CONCAT44(iStack_54,local_58);
          plVar9 = (longlong *)CONCAT44(iStack_4c,iStack_50);
          if (plVar13 != (longlong *)0x0) {
            plVar12 = (longlong *)FUN_14001cc68(0xa8,0x10);
            plVar12[1] = (longlong)&DAT_100000001;
            *plVar12 = (longlong)&PTR_FUN_14bd35480;
            plVar5 = plVar12 + 2;
            local_58 = *param_2;
            iStack_54 = param_2[1];
            iStack_50 = param_2[2];
            iStack_4c = param_2[3];
            FUN_14950ea98(plVar5,param_1);
            local_80 = SUB82(plVar5,0);
            uStack_7e = (undefined2)((ulonglong)plVar5 >> 0x10);
            uStack_7c = (undefined4)((ulonglong)plVar5 >> 0x20);
            if (plVar12 == (longlong *)0x0) goto LAB_1494fe2e2;
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            plVar5 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
            if (plVar12 == plVar5) {
              LOCK();
              plVar5 = plVar12 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar3 = *piVar1;
                UNLOCK();
                plVar5 = plVar12;
joined_r0x0001494fe72f:
                if (iVar3 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
            else {
              uStack_78 = SUB82(plVar12,0);
              uStack_76 = (undefined2)((ulonglong)plVar12 >> 0x10);
              uStack_74 = (undefined4)((ulonglong)plVar12 >> 0x20);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  iVar3 = *piVar1;
                  UNLOCK();
                  goto joined_r0x0001494fe72f;
                }
              }
            }
            LOCK();
            plVar5 = plVar12 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
            goto LAB_1494fe2e2;
          }
          uVar14 = 0;
        }
        FUN_14606bbe0(&local_a8);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar9 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        goto LAB_1494fe1e9;
      }
    }
  }
LAB_1494fe1e7:
  uVar14 = 0;
LAB_1494fe1e9:
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fe768 FUN_1494fe768 body=109 status=ok
// SIG undefined FUN_1494fe768(void)

int * FUN_1494fe768(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  
  FUN_14490b2fc(param_1 + 0x2b);
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    piVar2 = (int *)*param_1;
    lVar1 = (longlong)*(int *)(param_1 + 1) << 6;
    do {
      if ((((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) && (piVar2[2] == param_2[2])) &&
         (piVar2[3] == param_2[3])) goto LAB_1494fe7c2;
      piVar2 = piVar2 + 0x10;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  piVar2 = (int *)0x0;
LAB_1494fe7c2:
  FUN_144a6a7be(param_1 + 0x2b);
  return piVar2;
}



// FUNCTION 1494fe7d6 FUN_1494fe7d6 body=147 status=ok
// SIG undefined FUN_1494fe7d6(void)

void FUN_1494fe7d6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(undefined8 *)(param_1 + 8);
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  lVar4 = FUN_1494fda34(uVar2,&local_28);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x38) = 1;
  }
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
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



// FUNCTION 1494fe87a FUN_1494fe87a body=75 status=ok
// SIG undefined FUN_1494fe87a(void)

void FUN_1494fe87a(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar1 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x38) = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fe8c6 FUN_1494fe8c6 body=1160 status=ok
// SIG undefined FUN_1494fe8c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1494fe8c6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar26 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong lVar31;
  undefined1 auVar32 [16];
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar42 [16];
  
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_14490b2fc(plVar1 + 0x2b);
  auVar15 = _DAT_149931e80;
  if ((longlong)(int)plVar1[1] != 0) {
    uVar17 = (longlong)(int)plVar1[1] + 0x3ffffffffffffff;
    uVar18 = uVar17 & 0x3ffffffffffffff;
    auVar20._8_4_ = (int)uVar18;
    auVar20._0_8_ = uVar18;
    auVar20._12_4_ = (int)(uVar18 >> 0x20);
    puVar16 = (undefined1 *)(*plVar1 + 0x3f8);
    lVar19 = 0;
    auVar21 = pmovsxbq(in_XMM1,0xf0e);
    auVar22 = pmovsxbq(in_XMM2,0xd0c);
    auVar23 = pmovsxbq(in_XMM3,0xb0a);
    auVar24 = pmovsxbq(in_XMM4,0x908);
    auVar25 = pmovsxbq(in_XMM5,0x706);
    auVar26 = pmovsxbq(unaff_XMM6,0x504);
    auVar27 = pmovsxbq(unaff_XMM7,0x302);
    auVar28 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar29._8_4_ = (int)lVar19;
      auVar29._0_8_ = lVar19;
      auVar29._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      auVar32 = auVar20 | auVar15;
      auVar34 = (auVar29 | auVar28) ^ auVar15;
      lVar31 = auVar32._0_8_;
      auVar35._0_8_ = -(ulonglong)(lVar31 < auVar34._0_8_);
      lVar33 = auVar32._8_8_;
      auVar35._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
      auVar42 = pshuflw(unaff_XMM14,auVar35,0xe8);
      auVar34._8_4_ = 0xffffffff;
      auVar34._0_8_ = 0xffffffffffffffff;
      auVar34._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar42 ^ auVar34,auVar42 ^ auVar34);
      if ((auVar34._0_4_ & 1) != 0) {
        puVar16[-0x3c0] = 1;
      }
      auVar35 = packssdw(auVar35,auVar35);
      auVar42._8_4_ = 0xffffffff;
      auVar42._0_8_ = 0xffffffffffffffff;
      auVar42._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar42,auVar35 ^ auVar42);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[1] & 1) != 0) {
        puVar16[-0x380] = 1;
      }
      auVar35 = (auVar29 | auVar27) ^ auVar15;
      auVar36._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar36);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar2,auVar34 ^ auVar2);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[2] & 1) != 0) {
        puVar16[-0x340] = 1;
      }
      auVar35 = pshufhw(auVar36,auVar36,0x84);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar3,auVar35 ^ auVar3);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[3] & 1) != 0) {
        puVar16[-0x300] = 1;
      }
      auVar35 = (auVar29 | auVar26) ^ auVar15;
      auVar37._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar37,0xe8);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar4,auVar34 ^ auVar4);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[4] & 1) != 0) {
        puVar16[-0x2c0] = 1;
      }
      auVar35 = packssdw(auVar37,auVar37);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar5,auVar35 ^ auVar5);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[5] & 1) != 0) {
        puVar16[-0x280] = 1;
      }
      auVar35 = (auVar29 | auVar25) ^ auVar15;
      auVar38._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar38);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar6,auVar34 ^ auVar6);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[6] & 1) != 0) {
        puVar16[-0x240] = 1;
      }
      auVar35 = pshufhw(auVar38,auVar38,0x84);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar7,auVar35 ^ auVar7);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[7] & 1) != 0) {
        puVar16[-0x200] = 1;
      }
      auVar35 = (auVar29 | auVar24) ^ auVar15;
      auVar39._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar39,0xe8);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar8,auVar34 ^ auVar8);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[8] & 1) != 0) {
        puVar16[-0x1c0] = 1;
      }
      auVar35 = packssdw(auVar39,auVar39);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar9,auVar35 ^ auVar9);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[9] & 1) != 0) {
        puVar16[-0x180] = 1;
      }
      auVar35 = (auVar29 | auVar23) ^ auVar15;
      auVar40._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = packssdw(auVar34,auVar40);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar10,auVar34 ^ auVar10);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[10] & 1) != 0) {
        puVar16[-0x140] = 1;
      }
      auVar35 = pshufhw(auVar40,auVar40,0x84);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar35 = packssdw(auVar35 ^ auVar11,auVar35 ^ auVar11);
      auVar35 = packsswb(auVar35,auVar35);
      if ((auVar35[0xb] & 1) != 0) {
        puVar16[-0x100] = 1;
      }
      auVar35 = (auVar29 | auVar22) ^ auVar15;
      auVar41._0_8_ = -(ulonglong)(lVar31 < auVar35._0_8_);
      auVar41._8_8_ = -(ulonglong)(lVar33 < auVar35._8_8_);
      auVar34 = pshuflw(auVar34,auVar41,0xe8);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar12,auVar34 ^ auVar12);
      unaff_XMM14 = packsswb(auVar34,auVar34);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar16[-0xc0] = 1;
      }
      auVar34 = packssdw(auVar41,auVar41);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar13,auVar34 ^ auVar13);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xd] & 1) != 0) {
        puVar16[-0x80] = 1;
      }
      auVar34 = (auVar29 | auVar21) ^ auVar15;
      auVar30._0_8_ = -(ulonglong)(lVar31 < auVar34._0_8_);
      auVar30._8_8_ = -(ulonglong)(lVar33 < auVar34._8_8_);
      auVar34 = packssdw(auVar32,auVar30);
      auVar32._8_4_ = 0xffffffff;
      auVar32._0_8_ = 0xffffffffffffffff;
      auVar32._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar32,auVar34 ^ auVar32);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xe] & 1) != 0) {
        puVar16[-0x40] = 1;
      }
      auVar34 = pshufhw(auVar30,auVar30,0x84);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar14,auVar34 ^ auVar14);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xf] & 1) != 0) {
        *puVar16 = 1;
      }
      lVar19 = lVar19 + 0x10;
      puVar16 = puVar16 + 0x400;
    } while ((uVar18 - ((uint)uVar17 & 0xf)) + 0x10 != lVar19);
  }
  FUN_144a6a7be(plVar1 + 0x2b);
  return;
}



// FUNCTION 1494fed4e FUN_1494fed4e body=150 status=ok
// SIG undefined FUN_1494fed4e(void)

ulonglong FUN_1494fed4e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  lVar5 = FUN_1494fda34(uVar3,&local_28);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(undefined1 *)(lVar5 + 0x38)) ^ 1;
  }
  plVar4 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fede6 FUN_1494fede6 body=151 status=ok
// SIG undefined FUN_1494fede6(void)

undefined8 * FUN_1494fede6(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  local_40 = param_2;
  local_38 = param_3;
  FUN_14490b2fc(plVar1 + 0x2b);
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = *plVar1;
    lVar3 = (longlong)(int)plVar1[1] << 6;
    do {
      FUN_14453dd62(&local_40,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  FUN_144a6a7be(plVar1 + 0x2b);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fee7e FUN_1494fee7e body=151 status=ok
// SIG undefined FUN_1494fee7e(void)

undefined8 * FUN_1494fee7e(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  param_2[1] = 0;
  plVar1 = *(longlong **)(param_1 + 8);
  local_40 = param_2;
  local_38 = param_3;
  FUN_14490b2fc(plVar1 + 0x2b);
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = *plVar1;
    lVar3 = (longlong)(int)plVar1[1] << 6;
    do {
      FUN_14453ddb0(&local_40,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  FUN_144a6a7be(plVar1 + 0x2b);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fef16 FUN_1494fef16 body=404 status=ok
// SIG undefined FUN_1494fef16(void)

int * FUN_1494fef16(longlong param_1,int *param_2,undefined4 *param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    param_4 = DAT_14c951640;
  }
  piVar1 = param_2 + 6;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  FUN_144a5dc74(piVar1);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  piVar7 = (int *)FUN_1494fe768(*(undefined8 *)(param_1 + 8));
  if (((piVar7 != (int *)0x0) &&
      ((((*piVar7 != 0x4ed2dc4e || (piVar7[1] != -0x33a6ee32)) || (piVar7[2] != 0x4af0635d)) ||
       (piVar7[3] != -0x574db5a6)))) &&
     ((*(longlong *)(piVar7 + 4) != 0 && (*(longlong *)(piVar7 + 6) != 0)))) {
    iVar3 = piVar7[1];
    iVar4 = piVar7[2];
    iVar5 = piVar7[3];
    *param_2 = *piVar7;
    param_2[1] = iVar3;
    param_2[2] = iVar4;
    param_2[3] = iVar5;
    cVar6 = (**(code **)(**(longlong **)(piVar7 + 6) + 0x20))();
    if (cVar6 == '\0') {
      plVar8 = (longlong *)FUN_140e82300();
      plVar11 = (longlong *)*plVar8;
      local_58 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      local_50 = (int)plVar8[1];
    }
    else {
      (**(code **)(**(longlong **)(piVar7 + 6) + 0x38))(*(longlong **)(piVar7 + 6),&local_58);
      plVar11 = local_58;
    }
    plVar8 = *(longlong **)piVar1;
    if (plVar8 != plVar11) {
      *(longlong **)piVar1 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      plVar11 = local_58;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        plVar11 = local_58;
      }
    }
    param_2[8] = local_50;
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    uVar2 = *(undefined8 *)(piVar7 + 4);
    uVar9 = FUN_14590a714();
    lVar10 = FUN_14092e757(uVar9,uVar2,param_4,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_2 + 4) = lVar10;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1494ff0ac FUN_1494ff0ac body=193 status=ok
// SIG undefined FUN_1494ff0ac(void)

void FUN_1494ff0ac(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = *(undefined8 *)(param_2 + 4);
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  local_a0 = *param_3;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1468fdb70(local_98,param_4);
  local_50 = 0;
  uStack_38 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_48 = 0x8000000000;
  local_40 = 0xffffffff;
  FUN_1494ff16e(param_1,&local_b8);
  FUN_1494ff31a(&local_b8);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ff16e FUN_1494ff16e body=428 status=ok
// SIG undefined FUN_1494ff16e(void)

void FUN_1494ff16e(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar7 = DAT_14cc1e070;
  cVar3 = FUN_144a8728e();
  if (cVar3 == '\0') {
    bVar4 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar4 ^ 1);
  }
  else {
    uVar6 = 0;
  }
  iVar5 = *(int *)(lVar7 + uVar6 * 4);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  if (iVar5 < *(int *)(param_1 + 0x50)) {
    LeaveCriticalSection(lpCriticalSection);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc1e0c4) {
      FUN_144b3d300(&DAT_14cc1e0c4);
      if (DAT_14cc1e0c4 == -1) {
        FUN_1446ddc76(&DAT_14cc1e0bc,"LiveLinkClient_TooManyStatic",1);
        _Init_thread_footer(&DAT_14cc1e0c4);
        return;
      }
    }
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
  iVar5 = FUN_1447addd0(param_2,0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  iVar5 = FUN_14951985a((longlong *)(param_1 + 0x108),
                        (((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 0xd + iVar5,param_2);
  if ((iVar5 != -1) &&
     (lVar7 = (longlong)iVar5 * 0xa0 + *(longlong *)(param_1 + 0x108), lVar8 = lVar7 + 0x18,
     lVar8 != 0 && lVar7 != 0)) {
    FUN_149519c56(lVar8,param_2 + 0x20);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
  iVar5 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar5 + 1U) {
    FUN_149519d62((longlong *)(param_1 + 0x48),iVar5);
  }
  FUN_149519d02((longlong)iVar5 * 0x98 + *(longlong *)(param_1 + 0x48),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001494ff2c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1494ff31a FUN_1494ff31a body=61 status=ok
// SIG undefined FUN_1494ff31a(void)

void FUN_1494ff31a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x48);
  FUN_1448eac94(param_1 + 0x20);
  return;
}



// FUNCTION 1494ff358 FUN_1494ff358 body=204 status=ok
// SIG undefined FUN_1494ff358(void)

void FUN_1494ff358(longlong param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_14490b2fc(param_1 + 0x150);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    uVar2 = 0;
    do {
      if ((((*(longlong *)(lVar1 + 0x10 + uVar2) == *(longlong *)(param_2 + 4)) &&
           (*(int *)(lVar1 + uVar2) == *param_2)) && (*(int *)(lVar1 + 4 + uVar2) == param_2[1])) &&
         ((*(int *)(lVar1 + 8 + uVar2) == param_2[2] &&
          (*(int *)(lVar1 + 0xc + uVar2) == param_2[3])))) {
        if ((int)(uVar2 >> 3) * -0x49249249 != -1) {
          FUN_14951eb68(param_1 + 0x10);
          FUN_14951ebd0(param_1 + 0x10);
        }
        break;
      }
      uVar2 = uVar2 + 0x38;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0x38 - uVar2 != 0);
  }
  FUN_144a6a7be(param_1 + 0x150);
  FUN_14950a7c4(param_1 + 0x110,param_2);
  FUN_14950a8a4(param_1 + 0x38);
  return;
}



// FUNCTION 1494ff424 FUN_1494ff424 body=478 status=ok
// SIG undefined FUN_1494ff424(void)

longlong * FUN_1494ff424(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *param_3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar4 + lVar8);
      if ((((lVar7 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
          (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30)) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(lVar4 + lVar8);
      }
      if (((lVar3 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
         (*(int *)(lVar3 + 0x38) < *(int *)(lVar5 + 0x38))) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
            lVar5 + 0x30) {
          lVar6 = lVar3;
        }
      }
      if (lVar7 == lVar6) {
        iVar2 = (int)(lVar8 >> 3) * -0x33333333;
        if (iVar2 != -1) {
          FUN_14950a3a8(param_2,(longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x28));
          return param_2;
        }
        break;
      }
      lVar8 = lVar8 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar8);
  }
  lVar3 = FUN_1459888c4();
  if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  lVar4 = FUN_14950a466(param_1 + 0x38);
  if ((lVar4 != 0) && (lVar3 = lVar4, (DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
  }
  if (lVar3 != 0 && (~DAT_14c950c29 & 1) == 0) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_2[1] = lVar3;
  if ((~bVar1 & 1) == 0 && lVar3 != 0) {
    FUN_1456cec3c(lVar3);
    bVar1 = DAT_14c950c29;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  lVar3 = *param_3;
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *param_3;
    }
  }
  *param_2 = lVar3;
  return param_2;
}



// FUNCTION 1494ff602 FUN_1494ff602 body=175 status=ok
// SIG undefined FUN_1494ff602(void)

undefined8 FUN_1494ff602(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1494ff6b2 FUN_1494ff6b2 body=175 status=ok
// SIG undefined FUN_1494ff6b2(void)

undefined8 FUN_1494ff6b2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1494ff762 FUN_1494ff762 body=175 status=ok
// SIG undefined FUN_1494ff762(void)

undefined8 FUN_1494ff762(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1494ff812 FUN_1494ff812 body=94 status=ok
// SIG undefined FUN_1494ff812(void)

longlong FUN_1494ff812(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14490b2fc(param_1 + 0x150);
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar1 = (longlong)*(int *)(param_1 + 0x18) * 0x38;
    do {
      if (((*(longlong *)(lVar2 + 0x10) == param_2) && (*(char *)(lVar2 + 0x18) == '\x01')) &&
         (*(char *)(lVar2 + 0x19) != '\x01')) goto LAB_1494ff85d;
      lVar2 = lVar2 + 0x38;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  lVar2 = 0;
LAB_1494ff85d:
  FUN_144a6a7be(param_1 + 0x150);
  return lVar2;
}



// FUNCTION 1494ff870 FUN_1494ff870 body=241 status=ok
// SIG undefined FUN_1494ff870(void)

void FUN_1494ff870(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_14490b2fc(param_1 + 0x150);
  iVar2 = *(int *)(param_1 + 0x18);
  uVar11 = iVar2 + 1;
  *(uint *)(param_1 + 0x18) = uVar11;
  if (*(uint *)(param_1 + 0x1c) < uVar11) {
    FUN_14951ee3a(param_1 + 0x10);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar12 = (longlong)iVar2 * 0x38;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xe);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x12);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x16);
  puVar1 = (undefined4 *)(lVar3 + 10 + lVar12);
  *puVar1 = *(undefined4 *)((longlong)param_2 + 10);
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + lVar12);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined8 *)(lVar3 + 0x20 + lVar12) = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar12) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar12) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(lVar3 + 0x30 + lVar12) = 0;
  *(undefined8 *)(lVar3 + 0x30 + lVar12) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 0xc) = 0;
  FUN_144a6a7be(param_1 + 0x150);
  FUN_14950a7c4(param_1 + 0xd0,&local_48);
  FUN_14950a8a4(param_1 + 0x38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_1494ff962(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ff962 FUN_1494ff962 body=95 status=ok
// SIG undefined FUN_1494ff962(void)

void FUN_1494ff962(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1494ff9c2 FUN_1494ff9c2 body=125 status=ok
// SIG undefined FUN_1494ff9c2(void)

void FUN_1494ff9c2(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_149519724(param_1,&local_48,&local_28,param_4);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494ffa40 FUN_1494ffa40 body=771 status=ok
// SIG undefined FUN_1494ffa40(void)

void FUN_1494ffa40(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if ((((lVar4 == 0) || (lVar2 = FUN_1411f0380(), lVar2 == 0)) ||
      (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar4 = *(longlong *)(param_1 + 0x10), lVar4 == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e444) && (FUN_144b3d300(&DAT_14cc1e444), DAT_14cc1e444 == -1)) {
      FUN_1446ddc76(&DAT_14cc1e43c,"LiveLinkSubject_NoRoleForSubject",1);
      _Init_thread_footer(&DAT_14cc1e444);
    }
    FUN_1400021e4(param_1 + 0x138,local_40);
  }
  else {
    lVar2 = FUN_1411f0380();
    if (((lVar2 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    lVar2 = *param_2;
    if ((((lVar2 == 0) || (lVar3 = FUN_1411f0380(), lVar3 == 0)) ||
        (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = *param_2;
    }
    if (lVar4 == lVar2) {
      iVar1 = *(int *)(param_1 + 0xbc);
      FUN_14951ef43(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if ((iVar1 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
        FUN_14951ef6a(param_1 + 0xb0);
      }
      while (lVar4 = **(longlong **)(param_1 + 200), lVar4 != 0) {
        lVar2 = *(longlong *)(param_1 + 200);
        *(longlong *)(param_1 + 200) = lVar4;
        *(undefined4 *)(lVar4 + 8) = 0;
        if (lVar2 != 0) {
          FUN_1400020a8();
        }
      }
      if ((longlong *)(param_1 + 0x58) != param_3) {
        (**(code **)(*(longlong *)(param_1 + 0x58) + 0x48))();
        *(longlong *)(param_1 + 0x60) = param_3[1];
        *(longlong *)(param_1 + 0x68) = param_3[2];
        *(char *)(param_1 + 0x78) = (char)param_3[4];
        *(undefined1 *)(param_3 + 4) = 0;
        (**(code **)(*param_3 + 0x48))(param_3);
      }
      *(undefined1 *)(param_1 + 0x1ea) = *(undefined1 *)(param_1 + 0xa8);
      goto LAB_1494ffad7;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e450) && (FUN_144b3d300(&DAT_14cc1e450), DAT_14cc1e450 == -1)) {
      FUN_1446ddc76(&DAT_14cc1e448,"LiveLinkSubject_DifferentRole",1);
      _Init_thread_footer(&DAT_14cc1e450);
    }
    lVar4 = *param_2;
    if ((((lVar4 == 0) || (lVar2 = FUN_1411f0380(), lVar2 == 0)) ||
        (*(int *)(lVar4 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar4 = 0;
    }
    else {
      lVar4 = *param_2;
    }
    local_50[0] = *(longlong *)(lVar4 + 0x18);
    FUN_1400021e4(local_50,local_40);
    FUN_1400021e4(param_1 + 0x138,local_50);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
LAB_1494ffad7:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


