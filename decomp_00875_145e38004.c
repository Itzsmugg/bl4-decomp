// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e38004 FUN_145e38004 body=226 status=ok
// SIG undefined FUN_145e38004(void)

longlong * FUN_145e38004(longlong *param_1)

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
  pcVar13 = FUN_1462b74a8;
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



// FUNCTION 145e380ec FUN_145e380ec body=144 status=ok
// SIG undefined FUN_145e380ec(void)

code * FUN_145e380ec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a888ee();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ReflectionCapture";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FReflectionCaptureShaderData";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000057b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b76e0;
}



// FUNCTION 145e3817c FUN_145e3817c body=146 status=ok
// SIG undefined FUN_145e3817c(void)

code * FUN_145e3817c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144886e74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BasePass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FOpaqueBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000057c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9ac930;
  return FUN_145e380ec;
}



// FUNCTION 145e3820e FUN_145e3820e body=278 status=ok
// SIG undefined FUN_145e3820e(void)

undefined * FUN_145e3820e(void)

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
              0x110) < DAT_14ca8d688) {
    FUN_144b3d300(&DAT_14ca8d688);
    if (DAT_14ca8d688 == -1) {
      FUN_145e38326(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"BMPConvertUB";
      local_78 = L"FBMPConvertUB";
      local_50 = 0x20;
      local_58 = 0xad;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8d608,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7141);
      _Init_thread_footer(&DAT_14ca8d688);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8d608;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e38326 FUN_145e38326 body=226 status=ok
// SIG undefined FUN_145e38326(void)

longlong * FUN_145e38326(longlong *param_1)

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
  pcVar13 = FUN_14631c9b4;
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



// FUNCTION 145e3840e FUN_145e3840e body=132 status=ok
// SIG undefined FUN_145e3840e(void)

undefined1 * FUN_145e3840e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e3840a;
}



// FUNCTION 145e38492 FUN_145e38492 body=138 status=ok
// SIG undefined FUN_145e38492(void)

code * FUN_145e38492(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14742344a;
}



// FUNCTION 145e3851c FUN_145e3851c body=278 status=ok
// SIG undefined FUN_145e3851c(void)

undefined * FUN_145e3851c(void)

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
              0x110) < DAT_14ca8f3b0) {
    FUN_144b3d300(&DAT_14ca8f3b0);
    if (DAT_14ca8f3b0 == -1) {
      FUN_145e38634(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YUY2ConvertUB";
      local_78 = L"FYUY2ConvertUB";
      local_50 = 0x70;
      local_58 = 0x310;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8f330,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7e3e);
      _Init_thread_footer(&DAT_14ca8f3b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8f330;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e38634 FUN_145e38634 body=226 status=ok
// SIG undefined FUN_145e38634(void)

longlong * FUN_145e38634(longlong *param_1)

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
  pcVar13 = FUN_14631d6fc;
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



// FUNCTION 145e3871c FUN_145e3871c body=132 status=ok
// SIG undefined FUN_145e3871c(void)

undefined1 * FUN_145e3871c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x311;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e38718;
}



// FUNCTION 145e387a0 FUN_145e387a0 body=138 status=ok
// SIG undefined FUN_145e387a0(void)

code * FUN_145e387a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000316;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425492;
}



// FUNCTION 145e3882a FUN_145e3882a body=278 status=ok
// SIG undefined FUN_145e3882a(void)

undefined * FUN_145e3882a(void)

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
              0x110) < DAT_14ca8f730) {
    FUN_144b3d300(&DAT_14ca8f730);
    if (DAT_14ca8f730 == -1) {
      FUN_145e38942(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RGB8toY8ConvertUB";
      local_78 = L"FRGB8toY8ConvertUB";
      local_50 = 0x30;
      local_58 = 0x353;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8f6b0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7f62);
      _Init_thread_footer(&DAT_14ca8f730);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8f6b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e38942 FUN_145e38942 body=226 status=ok
// SIG undefined FUN_145e38942(void)

longlong * FUN_145e38942(longlong *param_1)

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
  pcVar13 = FUN_14631d91c;
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



// FUNCTION 145e38a2a FUN_145e38a2a body=132 status=ok
// SIG undefined FUN_145e38a2a(void)

undefined1 * FUN_145e38a2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x354;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e38a26;
}



// FUNCTION 145e38aae FUN_145e38aae body=138 status=ok
// SIG undefined FUN_145e38aae(void)

code * FUN_145e38aae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LinearToSrgb";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000355;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e38a2a;
}



// FUNCTION 145e38b38 FUN_145e38b38 body=278 status=ok
// SIG undefined FUN_145e38b38(void)

undefined * FUN_145e38b38(void)

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
              0x110) < DAT_14ca8f8f0) {
    FUN_144b3d300(&DAT_14ca8f8f0);
    if (DAT_14ca8f8f0 == -1) {
      FUN_145e38c50(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ReadTextureExternalUB";
      local_78 = L"FReadTextureExternalUB";
      local_50 = 0x30;
      local_58 = 0x370;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8f870,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7f7a);
      _Init_thread_footer(&DAT_14ca8f8f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8f870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e38c50 FUN_145e38c50 body=226 status=ok
// SIG undefined FUN_145e38c50(void)

longlong * FUN_145e38c50(longlong *param_1)

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
  pcVar13 = FUN_14631d9a4;
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



// FUNCTION 145e38d38 FUN_145e38d38 body=132 status=ok
// SIG undefined FUN_145e38d38(void)

undefined1 * FUN_145e38d38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerP";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x371;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e38d34;
}



// FUNCTION 145e38dbc FUN_145e38dbc body=138 status=ok
// SIG undefined FUN_145e38dbc(void)

code * FUN_145e38dbc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaleRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000372;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e38d38;
}



// FUNCTION 145e38e46 FUN_145e38e46 body=278 status=ok
// SIG undefined FUN_145e38e46(void)

undefined * FUN_145e38e46(void)

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
              0x110) < DAT_14cade560) {
    FUN_144b3d300(&DAT_14cade560);
    if (DAT_14cade560 == -1) {
      FUN_145e38f5e(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"GCBoneLooseParameters";
      local_78 = L"FGCBoneLooseParameters";
      local_50 = 0x20;
      local_58 = 0x18;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cade4e0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14350f612);
      _Init_thread_footer(&DAT_14cade560);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cade4e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e38f5e FUN_145e38f5e body=226 status=ok
// SIG undefined FUN_145e38f5e(void)

longlong * FUN_145e38f5e(longlong *param_1)

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
  pcVar13 = FUN_1463d0e1e;
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



// FUNCTION 145e39046 FUN_145e39046 body=132 status=ok
// SIG undefined FUN_145e39046(void)

undefined1 * FUN_145e39046(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_BoneTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e39042;
}



// FUNCTION 145e390ca FUN_145e390ca body=138 status=ok
// SIG undefined FUN_145e390ca(void)

code * FUN_145e390ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_BonePrevTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e39046;
}



// FUNCTION 145e39154 FUN_145e39154 body=278 status=ok
// SIG undefined FUN_145e39154(void)

undefined * FUN_145e39154(void)

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
              0x110) < DAT_14caf3f08) {
    FUN_144b3d300(&DAT_14caf3f08);
    if (DAT_14caf3f08 == -1) {
      FUN_145e3926c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"EmitterDynamicUniforms";
      local_78 = L"FGPUSpriteEmitterDynamicUniformParameters";
      local_50 = 0x60;
      local_58 = 0x2fb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf3e88,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435d06e1);
      _Init_thread_footer(&DAT_14caf3f08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf3e88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3926c FUN_145e3926c body=226 status=ok
// SIG undefined FUN_145e3926c(void)

longlong * FUN_145e3926c(longlong *param_1)

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
  pcVar13 = FUN_1463efe0a;
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



// FUNCTION 145e39354 FUN_145e39354 body=132 status=ok
// SIG undefined FUN_145e39354(void)

undefined1 * FUN_145e39354(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LWCTile";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e39350;
}



// FUNCTION 145e393d8 FUN_145e393d8 body=138 status=ok
// SIG undefined FUN_145e393d8(void)

code * FUN_145e393d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AxisLockUp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000300;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c2268e;
}



// FUNCTION 145e39462 FUN_145e39462 body=278 status=ok
// SIG undefined FUN_145e39462(void)

undefined * FUN_145e39462(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined *local_70;
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
              0x110) < DAT_14cb0e660) {
    FUN_144b3d300(&DAT_14cb0e660);
    if (DAT_14cb0e660 == -1) {
      FUN_145e3957a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = &DAT_14aaf0de8;
      local_78 = L"FCompositeAnimatedVectorFieldUniformParameters";
      local_50 = 0x40;
      local_58 = 0x3ad;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb0e5e0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1437799a3);
      _Init_thread_footer(&DAT_14cb0e660);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb0e5e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3957a FUN_145e3957a body=226 status=ok
// SIG undefined FUN_145e3957a(void)

longlong * FUN_145e3957a(longlong *param_1)

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
  pcVar13 = FUN_14640c306;
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



// FUNCTION 145e39662 FUN_145e39662 body=132 status=ok
// SIG undefined FUN_145e39662(void)

undefined1 * FUN_145e39662(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameA";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e3965e;
}



// FUNCTION 145e396e6 FUN_145e396e6 body=138 status=ok
// SIG undefined FUN_145e396e6(void)

code * FUN_145e396e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameLerp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000003b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14640c38e;
}



// FUNCTION 145e39770 FUN_145e39770 body=278 status=ok
// SIG undefined FUN_145e39770(void)

undefined * FUN_145e39770(void)

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
              0x110) < DAT_14cb49ae8) {
    FUN_144b3d300(&DAT_14cb49ae8);
    if (DAT_14cb49ae8 == -1) {
      FUN_145e39888(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"WaterRaytracingVF";
      local_78 = L"FWaterVertexFactoryRaytracingParameters";
      local_50 = 0x30;
      local_58 = 0x20;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb49a68,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b4a645);
      _Init_thread_footer(&DAT_14cb49ae8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb49a68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e39888 FUN_145e39888 body=226 status=ok
// SIG undefined FUN_145e39888(void)

longlong * FUN_145e39888(longlong *param_1)

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
  pcVar13 = FUN_146489e42;
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



// FUNCTION 145e39970 FUN_145e39970 body=132 status=ok
// SIG undefined FUN_145e39970(void)

undefined1 * FUN_145e39970(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e3996c;
}



// FUNCTION 145e399f4 FUN_145e399f4 body=138 status=ok
// SIG undefined FUN_145e399f4(void)

code * FUN_145e399f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceData0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e39970;
}



// FUNCTION 145e39a7e FUN_145e39a7e body=190 status=ok
// SIG undefined FUN_145e39a7e(void)

bool FUN_145e39a7e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_58,0);
    lVar3 = local_58;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e39b3e FUN_145e39b3e body=416 status=ok
// SIG undefined FUN_145e39b3e(void)

void FUN_145e39b3e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar6 = FUN_1403ae288(param_2);
  if ((cVar6 == '\0') || (lVar3 = *(longlong *)(param_1 + 0x180), lVar3 == 0)) {
    if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((longlong)*(int *)(lVar3 + 0x128) != 0) {
    plVar9 = *(longlong **)(lVar3 + 0x120);
    plVar8 = plVar9 + (longlong)*(int *)(lVar3 + 0x128) * 2;
    do {
      plVar4 = (longlong *)plVar9[1];
      if (plVar4 == (longlong *)0x0) {
        plStack_80 = (longlong *)0x0;
LAB_145e39cc2:
        local_88 = 0;
        bVar11 = true;
        plVar10 = (longlong *)0x0;
      }
      else {
        local_88 = *plVar9;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) {
            plStack_80 = (longlong *)0x0;
            goto LAB_145e39cc2;
          }
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar11 = iVar7 == iVar5;
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar11);
        plStack_80 = plVar4;
        if (plVar4 == (longlong *)0x0) goto LAB_145e39cc2;
        bVar11 = false;
        plVar10 = plVar4;
      }
      if (local_88 != 0) {
        FUN_145e39d02(param_1,param_2,&local_88,param_4);
      }
      if (!bVar11) {
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  FUN_1402811b8(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_a8);
}



// FUNCTION 145e39d02 FUN_145e39d02 body=233 status=ok
// SIG undefined FUN_145e39d02(void)

void FUN_145e39d02(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x180) == 0) {
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar1 = *param_3;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x168));
  *(int *)(lVar1 + 0x160) = *(int *)(lVar1 + 0x160) + 1;
  local_50 = param_1;
  local_48 = param_4;
  cVar2 = FUN_140280fd6(param_2,param_1 + 0x58);
  if (cVar2 == '\0') {
    cVar2 = FUN_140280fd6(param_2,param_1 + 0x90);
    lVar3 = 0x40;
    if (cVar2 == '\0') {
      cVar2 = FUN_140280fd6(param_2,param_1 + 200);
      lVar3 = 0x70;
      if (cVar2 == '\0') goto LAB_145e39d95;
    }
  }
  else {
    lVar3 = 0x10;
  }
  FUN_14156fb76(&local_50,param_2,lVar1 + lVar3);
LAB_145e39d95:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 145e39e04 FUN_145e39e04 body=226 status=ok
// SIG undefined FUN_145e39e04(void)

longlong * FUN_145e39e04(longlong *param_1)

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
  pcVar13 = FUN_1463105fe;
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



// FUNCTION 145e39ee8 FUN_145e39ee8 body=138 status=ok
// SIG undefined FUN_145e39ee8(void)

code * FUN_145e39ee8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransmittanceLutTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f00000055d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e39ffc;
}



// FUNCTION 145e39f72 FUN_145e39f72 body=138 status=ok
// SIG undefined FUN_145e39f72(void)

undefined1 * FUN_145e39f72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14156fc52();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar3) = &DAT_14a1fbb1e;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FTranslucentLightingInjectPS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x55b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca62a98;
  return &LAB_147329630;
}



// FUNCTION 145e39ffc FUN_145e39ffc body=144 status=ok
// SIG undefined FUN_145e39ffc(void)

code * FUN_145e39ffc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3ee36();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CloudShadowAO";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVolumetricCloudShadowAOParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3d00000055c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e39f72;
}



// FUNCTION 145e3a08c FUN_145e3a08c body=226 status=ok
// SIG undefined FUN_145e3a08c(void)

longlong * FUN_145e3a08c(longlong *param_1)

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
  pcVar13 = FUN_14630edca;
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



// FUNCTION 145e3a170 FUN_145e3a170 body=138 status=ok
// SIG undefined FUN_145e3a170(void)

code * FUN_145e3a170(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeCascadeIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000002bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630ee52;
}



// FUNCTION 145e3a1fa FUN_145e3a1fa body=144 status=ok
// SIG undefined FUN_145e3a1fa(void)

code * FUN_145e3a1fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a8b0f8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AVSM";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAdaptiveVolumetricShadowMapUniformBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x350000002ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630eeda;
}



// FUNCTION 145e3a28a FUN_145e3a28a body=144 status=ok
// SIG undefined FUN_145e3a28a(void)

code * FUN_145e3a28a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1449dab10();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DeferredLight";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDeferredLightUniformStruct";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630f08a;
}



// FUNCTION 145e3a31a FUN_145e3a31a body=26 status=ok
// SIG undefined FUN_145e3a31a(void)

undefined8 FUN_145e3a31a(longlong param_1,undefined8 param_2)

{
  FUN_145e3a334(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145e3a334 FUN_145e3a334 body=422 status=ok
// SIG undefined FUN_145e3a334(void)

longlong * FUN_145e3a334(undefined8 param_1,longlong *param_2)

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
  if ((DAT_14cb71f70 != (longlong *)0x0 && DAT_14cb71f78 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb71f70 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb71f70;
    if (DAT_14cb71f78 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145e3a405;
  }
  lVar3 = FUN_14001cc68(0x2c0,0x10);
  FUN_14156fd56(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3ecf30;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145e3a405;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145e3a405;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145e3a480:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145e3a3fb;
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
      if (plVar5 != (longlong *)0x0) goto LAB_145e3a480;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145e3a3fb:
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
LAB_145e3a405:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145e3a4dc FUN_145e3a4dc body=126 status=ok
// SIG undefined FUN_145e3a4dc(void)

void FUN_145e3a4dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a240af0;
  puVar1 = (undefined8 *)param_1[9];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[9] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[9];
  }
  while ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
    param_1[7] = *(undefined8 *)param_1[7];
    FUN_1400020a8();
  }
  FUN_145e3a55a(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  FUN_144a4509c(param_1);
  return;
}



// FUNCTION 145e3a55a FUN_145e3a55a body=69 status=ok
// SIG undefined FUN_145e3a55a(void)

void FUN_145e3a55a(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(*plVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e3a5aa FUN_145e3a5aa body=183 status=ok
// SIG undefined FUN_145e3a5aa(void)

undefined8 * FUN_145e3a5aa(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  *(undefined1 *)((longlong)param_1 + 0x32) = 4;
  *param_1 = &PTR_FUN_14a470890;
  lVar1 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0x68);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = FUN_145990528();
    if (local_18 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_18);
    }
    local_20 = param_1[2];
    if ((local_20 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3a662 FUN_145e3a662 body=232 status=ok
// SIG undefined FUN_145e3a662(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3a662(void)

{
  if (DAT_14cab28f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab28e0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab28c8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab28b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2890 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2880 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2858 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2848 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab2828 != 0) {
    FUN_1400020a8();
  }
  DAT_14cab2820 = 0;
  if (DAT_14cab2818 != 0) {
    FUN_1400020a8();
  }
  FUN_145e3a74a();
  _DAT_14cab27d0 = 0;
  if (DAT_14cab27c8 != 0) {
    FUN_1400020a8();
  }
  FUN_145928e06(&DAT_14cab2788);
  return;
}



// FUNCTION 145e3a74a FUN_145e3a74a body=54 status=ok
// SIG undefined FUN_145e3a74a(void)

void FUN_145e3a74a(void)

{
  FUN_145e3a780();
  if (DAT_14cab27f8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cab27d8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3a780 FUN_145e3a780 body=104 status=ok
// SIG undefined FUN_145e3a780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3a780(void)

{
  DAT_14cab27e0 = 0;
  if (DAT_14cab27e4 != 0) {
    FUN_1447a08a2(&DAT_14cab27d8,0);
  }
  _DAT_14cab2808 = 0xffffffff;
  DAT_14cab2800 = 0;
  if (DAT_14cab2804 < 0x81) {
    return;
  }
  DAT_14cab2804 = 0x80;
  FUN_1446efbd8(&DAT_14cab27e8,0);
  return;
}



// FUNCTION 145e3a7f4 FUN_145e3a7f4 body=214 status=ok
// SIG undefined FUN_145e3a7f4(void)

undefined8 * FUN_145e3a7f4(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6aae30;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caebb00) {
    FUN_144b3d300(&DAT_14caebb00);
    if (DAT_14caebb00 == -1) {
      FUN_141570270();
      atexit((_func_5014 *)&LAB_14356ef2d);
      _Init_thread_footer(&DAT_14caebb00);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 145e3a8d6 FUN_145e3a8d6 body=183 status=ok
// SIG undefined FUN_145e3a8d6(void)

undefined8 * FUN_145e3a8d6(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_14a8d9180;
  *(undefined2 *)(param_1 + 6) = 0x101;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_1446ddc76(&local_20,"InputDeviceLightColor",1);
  param_1[0x12] = local_20;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3a99a FUN_145e3a99a body=184 status=ok
// SIG undefined FUN_145e3a99a(void)

undefined8 * FUN_145e3a99a(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14ab15000;
  param_1[5] = &PTR_LAB_14ab155f0;
  param_1[6] = &PTR_LAB_14ab15630;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  FUN_140b967fa(param_1,1);
  *param_1 = &PTR_FUN_14ab15bf0;
  param_1[5] = &PTR_FUN_14ab161e0;
  param_1[6] = &PTR_LAB_14ab16220;
  param_1[0x57] = 0;
  FUN_140f23ff6(param_1 + 0x58);
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fa) = 0;
  *(undefined8 *)((longlong)param_1 + 0x402) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  return param_1;
}



// FUNCTION 145e3aa52 FUN_145e3aa52 body=26 status=ok
// SIG undefined FUN_145e3aa52(void)

void FUN_145e3aa52(undefined8 param_1)

{
  FUN_145e3aa6c();
  FUN_140872622(param_1);
  return;
}



// FUNCTION 145e3aa6c FUN_145e3aa6c body=169 status=ok
// SIG undefined FUN_145e3aa6c(void)

void FUN_145e3aa6c(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1447210f0();
  if (lVar2 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      uVar3 = FUN_14118da1c();
      DAT_14c8442b8 = FUN_14054d46e(uVar3,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar1 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') {
        return;
      }
      bVar1 = DAT_14c8442b8 & 1;
    }
    if (bVar1 == 0) {
      FUN_1447210f0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145e3ab20 FUN_145e3ab20 body=184 status=ok
// SIG undefined FUN_145e3ab20(void)

undefined8 * FUN_145e3ab20(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aecdc00;
  param_1[5] = &PTR_FUN_14aecdea0;
  param_1[6] = 0;
  FUN_144a5dc74(param_1 + 7);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3ff00000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0x3ff0000000000000;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x3ff00000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return param_1;
}



// FUNCTION 145e3abe0 FUN_145e3abe0 body=204 status=ok
// SIG undefined FUN_145e3abe0(void)

void FUN_145e3abe0(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)(param_1[7] + 0x178) == '\x03') {
    FUN_140f6f7b0(param_1,6);
    return;
  }
  if ((int)param_1[10] != *(int *)((longlong)param_1 + 0x7c)) {
    uVar2 = (uint)((ulonglong)DAT_14cbd42f0 >> 0x10);
    uVar4 = (uint)DAT_14cbd42f0 & 0xffff;
    plVar3 = param_1 + 0x10;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x11];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[0x12] - 1U &
                    (int)((ulonglong)DAT_14cbd42f0 >> 0x20) + ((uint)DAT_14cbd42f0 << 0x10 | uVar4)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = param_1[9] + (longlong)iVar5 * 0x38;
        if (*(longlong *)(param_1[9] + (longlong)iVar5 * 0x38) == DAT_14cbd42f0) {
          if (lVar1 == -8 || lVar1 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000145e3aca9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x88))(param_1,&DAT_14cbd42f0);
          return;
        }
        iVar5 = *(int *)(lVar1 + 0x30);
      } while (iVar5 != -1);
    }
  }
  return;
}



// FUNCTION 145e3acac FUN_145e3acac body=9 status=ok
// SIG undefined FUN_145e3acac(void)

void FUN_145e3acac(longlong param_1)

{
  FUN_145e3acb6(param_1 + 0x10);
  return;
}



// FUNCTION 145e3acb6 FUN_145e3acb6 body=203 status=ok
// SIG undefined FUN_145e3acb6(void)

void FUN_145e3acb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ba3a040;
  FUN_145e3ad82();
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0xc);
  if (param_1[8] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3ad82 FUN_145e3ad82 body=125 status=ok
// SIG undefined FUN_145e3ad82(void)

void FUN_145e3ad82(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_1448a8284(param_1 + 0xb0);
  FUN_1448a8284(param_1 + 200);
  FUN_1448a8284(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_144893a1c(param_1 + 0x40,0);
  }
  FUN_145e3ae00(param_1 + 0x60,0);
  return;
}



// FUNCTION 145e3ae00 FUN_145e3ae00 body=107 status=ok
// SIG undefined FUN_145e3ae00(void)

void FUN_145e3ae00(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145e3ae4f:
      FUN_140149ffa(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1457adf2c(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145e3ae4f;
  FUN_145e3ae6c(param_1);
  FUN_140149ffa(param_1,param_2);
  return;
}



// FUNCTION 145e3ae6c FUN_145e3ae6c body=335 status=ok
// SIG undefined FUN_145e3ae6c(void)

void FUN_145e3ae6c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e3afbc FUN_145e3afbc body=33 status=ok
// SIG undefined FUN_145e3afbc(void)

void FUN_145e3afbc(longlong param_1)

{
  FUN_145e3afde(param_1 + 0x28,param_1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145e3afde FUN_145e3afde body=162 status=ok
// SIG undefined FUN_145e3afde(void)

void FUN_145e3afde(longlong *param_1,undefined8 param_2)

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
        goto LAB_145e3b06b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145e3b06b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145e3b086 FUN_145e3b086 body=54 status=ok
// SIG undefined FUN_145e3b086(void)

void FUN_145e3b086(void)

{
  int iVar1;
  
  if (DAT_14cc1e995 == '\0') {
    FUN_145e3b0bc();
    FUN_145e3b10c(10,&PTR_FUN_14bd3fc18);
    iVar1 = FUN_145e3b4eb();
    DAT_14cc1e995 = iVar1 == 0;
  }
  return;
}



// FUNCTION 145e3b0bc FUN_145e3b0bc body=80 status=ok
// SIG undefined FUN_145e3b0bc(void)

void FUN_145e3b0bc(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  
  uVar1 = FUN_14001cc68(0x10,0);
  uVar2 = FUN_144a8faa4(uVar1);
  FUN_1400020a8(uVar1);
  ppuVar3 = &PTR_FUN_14bd3fbd8;
  if (0xf < uVar2) {
    ppuVar3 = &PTR_LAB_14bd3fb98;
  }
  FUN_145e3b10c(4,ppuVar3);
  return;
}



// FUNCTION 145e3b10c FUN_145e3b10c body=990 status=ok
// SIG undefined FUN_145e3b10c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_145e3b10c(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined8 **local_28;
  ulonglong local_20;
  undefined8 uVar9;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_14c765e4c != 0) {
    local_38 = "3bfa9cc97da10598521b342961df8f5f68c7388fa117345eeb516eaa837bb4d6";
    FUN_14955599e(0x15,"%s at line %d of [%.10s]","misuse",0x26ec4);
    uVar9 = 0x15;
    puVar1 = local_res10;
    puVar6 = local_res18;
    goto switchD_145e3b163_caseD_e;
  }
  local_28 = &local_res10;
  uVar9 = 0;
  uVar8 = 0;
  local_res18._0_4_ = SUB84(param_3,0);
  local_res10._0_1_ = SUB81(param_2,0);
  uVar5 = local_res10._0_1_;
  local_res10._0_4_ = SUB84(param_2,0);
  puVar1 = param_2;
  puVar6 = param_3;
  switch(param_1) {
  case 1:
    _DAT_14c765cfc = 0;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    break;
  case 2:
    _DAT_14c765cfc = 1;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    break;
  case 3:
    _DAT_14c765cfc = 0x101;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    break;
  case 4:
    local_28 = &local_res18;
    DAT_14c765d18._0_4_ = *(undefined4 *)param_2;
    DAT_14c765d18._4_4_ = *(undefined4 *)((longlong)param_2 + 4);
    DAT_14c765d20._0_4_ = *(undefined4 *)(param_2 + 1);
    DAT_14c765d20._4_4_ = *(undefined4 *)((longlong)param_2 + 0xc);
    DAT_14c765d28 = param_2[2];
    DAT_14c765d30 = param_2[3];
    DAT_14c765d38 = param_2[4];
    DAT_14c765d40 = param_2[5];
    DAT_14c765d48 = param_2[6];
    DAT_14c765d50 = param_2[7];
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    break;
  case 5:
    if (CONCAT44(DAT_14c765d18._4_4_,(undefined4)DAT_14c765d18) == 0) {
      FUN_145e3b10c(4,&PTR_LAB_14bd49b68);
    }
    uVar9 = DAT_14c765d50;
    puVar1 = *local_28;
    puVar1[6] = DAT_14c765d48;
    puVar1[7] = uVar9;
    uVar9 = DAT_14c765d40;
    puVar1[4] = DAT_14c765d38;
    puVar1[5] = uVar9;
    uVar9 = DAT_14c765d30;
    puVar1[2] = DAT_14c765d28;
    puVar1[3] = uVar9;
    uVar4 = DAT_14c765d20._4_4_;
    uVar3 = (undefined4)DAT_14c765d20;
    uVar2 = DAT_14c765d18._4_4_;
    *(undefined4 *)puVar1 = (undefined4)DAT_14c765d18;
    *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
    *(undefined4 *)(puVar1 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
    uVar9 = uVar8;
    puVar1 = local_res10;
    puVar6 = local_res18;
    local_28 = local_28 + 1;
    break;
  default:
    uVar9 = 1;
    puVar1 = param_2;
    puVar6 = param_3;
    break;
  case 7:
    DAT_14c765e38 = local_res18._0_4_;
    local_res20._0_4_ = SUB84(param_4,0);
    DAT_14c765e3c = local_res20._0_4_;
    uVar9 = uVar8;
    DAT_14c765e30 = param_2;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = (undefined8 **)&stack0x00000028;
    break;
  case 9:
    DAT_14c765cf8 = local_res10._0_4_;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
    break;
  case 10:
    puVar11 = &DAT_14c765d58;
    puVar10 = param_2;
    goto LAB_145e3b1bb;
  case 0xb:
    puVar10 = &DAT_14c765d58;
    puVar11 = param_2;
LAB_145e3b1bb:
    local_28 = &local_res18;
    lVar7 = 9;
LAB_145e3b1df:
    for (; uVar9 = uVar8, puVar1 = local_res10, puVar6 = local_res18, lVar7 != 0; lVar7 = lVar7 + -1
        ) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    break;
  case 0xd:
    _DAT_14c765d0c = local_res10._0_4_;
    _DAT_14c765d10 = local_res18._0_4_;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res20;
    break;
  case 0xe:
    break;
  case 0x10:
    uVar9 = uVar8;
    DAT_14c765e70 = param_2;
    DAT_14c765e78 = param_3;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res20;
    break;
  case 0x11:
    DAT_14c765cfe = uVar5;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
    break;
  case 0x12:
    local_28 = &local_res18;
    puVar11 = &DAT_14c765da0;
    goto LAB_145e3b1da;
  case 0x13:
    if (DAT_14c765db0 == 0) {
      FUN_145e3b10c(0x12,&DAT_14bd49ba8);
    }
    puVar11 = *local_28;
    param_2 = &DAT_14c765da0;
    local_28 = local_28 + 1;
LAB_145e3b1da:
    lVar7 = 0xd;
    puVar10 = param_2;
    goto LAB_145e3b1df;
  case 0x14:
    DAT_14c765cff = uVar5;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
    break;
  case 0x16:
    local_28 = &local_res20;
    _DAT_14c765e28 = (undefined8 *)0x7fff0000;
    if (param_3 < (undefined8 *)0x7fff0000) {
      _DAT_14c765e28 = param_3;
    }
    uVar9 = 0;
    DAT_14c765e20 = (undefined8 *)0x0;
    if (0 < (longlong)param_2) {
      DAT_14c765e20 = param_2;
    }
    puVar1 = param_2;
    puVar6 = param_3;
    if ((longlong)_DAT_14c765e28 < (longlong)param_2) {
      DAT_14c765e20 = _DAT_14c765e28;
      puVar1 = param_2;
      puVar6 = param_3;
    }
    break;
  case 0x18:
    *(undefined4 *)param_2 = 0x108;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
    break;
  case 0x19:
    DAT_14c765e48 = local_res10._0_4_;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
    break;
  case 0x1a:
    DAT_14c765d14 = local_res10._0_4_;
    uVar9 = uVar8;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
    break;
  case 0x1b:
    DAT_14c765d00 = uVar5;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
    break;
  case 0x1d:
    _DAT_14c765e80 = param_2;
    puVar1 = param_2;
    puVar6 = param_3;
    local_28 = &local_res18;
  }
switchD_145e3b163_caseD_e:
  local_res18 = puVar6;
  local_res10 = puVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3b4eb FUN_145e3b4eb body=964 status=ok
// SIG undefined FUN_145e3b4eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_145e3b4eb(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_14c765e4c != 0) {
    return 0;
  }
  if (DAT_14c765d68 == (code *)0x0) {
    DAT_14c765d58 = FUN_1495cd690;
    DAT_14c765d60 = &LAB_1495cd693;
    DAT_14c765d70 = (code *)&DAT_1495cd69c;
    DAT_14c765d78 = (code *)&DAT_1495cd69d;
    DAT_14c765d80 = &LAB_1495cd69e;
    DAT_14c765d88 = (code *)&DAT_1495cd6a1;
    _DAT_14c765d90 = 0;
    uRam000000014c765d98 = 0;
    DAT_14c765d68 = FUN_1495cd696;
  }
  iVar4 = (*DAT_14c765d58)();
  if (iVar4 != 0) {
    return iVar4;
  }
  bVar3 = true;
  if ((DAT_14c765cfc == '\0') || (lVar5 = (*DAT_14c765d68)(2), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    (*DAT_14c765d78)(lVar5);
    bVar3 = false;
  }
  DAT_14c765e54 = 1;
  if (DAT_14c765e58 == 0) {
    if (DAT_14c765d18 == 0) {
      FUN_145e3b10c(4);
    }
    DAT_14cc1eba8 = 0;
    _DAT_14cc1ebb0 = 0;
    DAT_14cc1eb98 = 0;
    DAT_14cc1eba0 = 0;
    if (DAT_14c765cfc == '\0') {
      DAT_14cc1eb98 = 0;
    }
    else {
      DAT_14cc1eb98 = (*DAT_14c765d68)(3);
    }
    if (((DAT_14c765e30 == 0) || (DAT_14c765e38 < 0x200)) || (DAT_14c765e3c < 1)) {
      DAT_14c765e30 = 0;
      DAT_14c765e38 = 0;
    }
    iVar4 = (*DAT_14c765d40)(DAT_14c765d50);
    if (iVar4 == 0) goto LAB_145e3b5ee;
    DAT_14cc1eba8 = 0;
    _DAT_14cc1ebb0 = 0;
    DAT_14cc1eb98 = 0;
    DAT_14cc1eba0 = 0;
LAB_145e3b8a1:
    bVar2 = false;
  }
  else {
LAB_145e3b5ee:
    DAT_14c765e58 = 1;
    if (DAT_14c765e68 == 0) {
      if (DAT_14c765cfc == '\0') {
        DAT_14c765e68 = 0;
      }
      else {
        DAT_14c765e68 = (*DAT_14c765d68)(1);
        if (DAT_14c765e68 == 0 && DAT_14c765cfc != '\0') {
          iVar4 = 7;
          goto LAB_145e3b8a1;
        }
      }
    }
    DAT_14c765e60 = DAT_14c765e60 + 1;
    iVar4 = 0;
    bVar2 = true;
  }
  if (!bVar3) {
    (*DAT_14c765d88)(lVar5);
  }
  if (!bVar2) {
    return iVar4;
  }
  if (DAT_14c765e68 != 0) {
    (*DAT_14c765d78)();
  }
  if (DAT_14c765e50 != 0 || DAT_14c765e4c != 0) {
    iVar4 = 0;
    goto LAB_145e3b76b;
  }
  DAT_14c765e50 = 1;
  memset(&DAT_14cc1ecc8,0,0xb8);
  FUN_14157048c(&DAT_14c766f80,3);
  FUN_14157048c(&DAT_14c767060,0xf);
  FUN_14157048c(&DAT_14c7674a0,8);
  FUN_14157048c(&DAT_14c765ea0,0x3c);
  if (DAT_14c765e5c == 0) {
    if (DAT_14c765db0 == (code *)0x0) {
      FUN_145e3b10c(0x12,&DAT_14bd49ba8);
    }
    iVar4 = (*DAT_14c765db0)(DAT_14c765da8);
    if (iVar4 == 0) goto LAB_145e3b720;
  }
  else {
LAB_145e3b720:
    DAT_14c765e5c = 1;
    iVar4 = FUN_145e3b8af();
    if (iVar4 == 0) {
      FUN_145e3b8ee();
      FUN_145e3b9d8(DAT_14c765e30,DAT_14c765e38,DAT_14c765e3c);
      DAT_14c765e4c = 1;
      iVar4 = 0;
    }
  }
  DAT_14c765e50 = 0;
LAB_145e3b76b:
  if (DAT_14c765e68 != 0) {
    (*DAT_14c765d88)();
  }
  if (!bVar3) {
    (*DAT_14c765d78)(lVar5);
  }
  iVar1 = DAT_14c765e60 + -1;
  bVar2 = DAT_14c765e60 < 2;
  DAT_14c765e60 = iVar1;
  if (bVar2) {
    if (DAT_14c765e68 != 0) {
      (*DAT_14c765d70)();
    }
    DAT_14c765e68 = 0;
  }
  if (!bVar3) {
    (*DAT_14c765d88)(lVar5);
  }
  return iVar4;
}



// FUNCTION 145e3b8af FUN_145e3b8af body=47 status=ok
// SIG undefined FUN_145e3b8af(void)

undefined8 FUN_145e3b8af(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145e3bd67(10);
  if (lVar1 != 0) {
    FUN_145e3b961(lVar1);
    uVar2 = FUN_145e3b8de();
    return uVar2;
  }
  return 7;
}



// FUNCTION 145e3b8de FUN_145e3b8de body=16 status=ok
// SIG undefined FUN_145e3b8de(void)

undefined8 FUN_145e3b8de(void)

{
  FUN_145e3bb52();
  return 0;
}



// FUNCTION 145e3b8ee FUN_145e3b8ee body=115 status=ok
// SIG undefined FUN_145e3b8ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3b8ee(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_14cc1eb90;
  if ((DAT_14c765cfc != '\0') && (lVar1 = (*DAT_14c765d68)(2), lVar2 = DAT_14cc1eb90, lVar1 != 0)) {
    (*DAT_14c765d78)(lVar1);
    lVar2 = DAT_14cc1eb90;
    (*DAT_14c765d88)(lVar1);
  }
  _DAT_14c7676e4 = 0x38;
  if (0x38 < *(uint *)(lVar2 + 4)) {
    _DAT_14c7676e4 = *(uint *)(lVar2 + 4);
  }
  _DAT_14c767700 = lVar2;
  FUN_145e3bc8c(&DAT_14c7676e0,0);
  return;
}



// FUNCTION 145e3b961 FUN_145e3b961 body=119 status=ok
// SIG undefined FUN_145e3b961(void)

void FUN_145e3b961(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_14c765cf8 == 0) {
    puVar2 = &DAT_14c765d20;
  }
  else {
    if (DAT_14cc1eb98 != 0) {
      (*DAT_14c765d78)();
    }
    iVar1 = (*DAT_14c765d30)(param_1);
    DAT_14cc1eb40 = DAT_14cc1eb40 - iVar1;
    DAT_14cc1eb58 = DAT_14cc1eb58 + -1;
    (*DAT_14c765d20)(param_1);
    if (DAT_14cc1eb98 == 0) {
      return;
    }
    puVar2 = &DAT_14c765d88;
    param_1 = DAT_14cc1eb98;
  }
                    /* WARNING: Could not recover jumptable at 0x000145e3b9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_1);
  return;
}



// FUNCTION 145e3b9d8 FUN_145e3b9d8 body=182 status=ok
// SIG undefined FUN_145e3b9d8(void)

void FUN_145e3b9d8(longlong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (DAT_14cc1edd0 != 0) {
    if (param_1 == (longlong *)0x0) {
      param_3 = 0;
    }
    DAT_14cc1eddc = param_2 & 0xfffffff8;
    if (param_3 == 0) {
      DAT_14cc1eddc = 0;
    }
    if (param_3 < 0x5b) {
      DAT_14cc1ede4 = param_3 / 10 + 1;
      if (param_3 == 0) {
        DAT_14cc1ede0 = param_3;
        DAT_14cc1ede8 = param_1;
        DAT_14cc1edf0 = param_1;
        DAT_14cc1ee00 = (longlong *)0x0;
        DAT_14cc1ee08 = param_3;
        DAT_14cc1ee0c = 0;
        return;
      }
    }
    else {
      DAT_14cc1ede4 = 10;
    }
    DAT_14cc1ee0c = 0;
    lVar1 = (longlong)(int)DAT_14cc1eddc;
    plVar2 = (longlong *)0;
    DAT_14cc1ede0 = param_3;
    DAT_14cc1ede8 = param_1;
    DAT_14cc1ee08 = param_3;
    do {
      DAT_14cc1ee00 = param_1;
      *DAT_14cc1ee00 = (longlong)plVar2;
      DAT_14cc1edf0 = (longlong *)((longlong)DAT_14cc1ee00 + lVar1);
      param_3 = param_3 + -1;
      param_1 = DAT_14cc1edf0;
      plVar2 = DAT_14cc1ee00;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145e3ba8e FUN_145e3ba8e body=196 status=ok
// SIG undefined FUN_145e3ba8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145e3ba8e(void)

{
  bool bVar1;
  
  memset(&DAT_14cc1ed80,0,0x90);
  bVar1 = DAT_14c765cfc != '\0' || DAT_14c765e30 == 0;
  DAT_14cc1edd4 = (uint)bVar1;
  if (DAT_14c765cfc != '\0') {
    _DAT_14cc1ed80 = (*DAT_14c765d68)(6);
    if (DAT_14c765cfc == '\0') {
      DAT_14cc1edf8 = 0;
    }
    else {
      DAT_14cc1edf8 = (*DAT_14c765d68)(7);
    }
    bVar1 = DAT_14cc1edd4 != 0;
  }
  DAT_14cc1edd8 = 0;
  if (DAT_14c765e30 == 0) {
    DAT_14cc1edd8 = DAT_14c765e3c;
  }
  if (DAT_14c765e3c == 0) {
    DAT_14cc1edd8 = DAT_14c765e3c;
  }
  if (!bVar1) {
    DAT_14cc1edd8 = 0;
  }
  DAT_14cc1ed90 = 10;
  DAT_14cc1edd0 = 1;
  return 0;
}



// FUNCTION 145e3bb52 FUN_145e3bb52 body=314 status=ok
// SIG undefined FUN_145e3bb52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3bb52(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1eb20) {
    FUN_144b3d300(&DAT_14cc1eb20);
    if (DAT_14cc1eb20 == -1) {
      _DAT_14cc1ea78 = 0x2800000003;
      _DAT_14cc1ea80 = FUN_1457a17a0();
      _DAT_14cc1ea88 = 0;
      _DAT_14cc1ea90 = "unreal-fs";
      _DAT_14cc1ea98 = 0;
      _DAT_14cc1eaa0 = FUN_149552870;
      _DAT_14cc1eaa8 = FUN_149552bb0;
      _DAT_14cc1eab0 = FUN_149552d0e;
      _DAT_14cc1eab8 = FUN_149552e3a;
      _DAT_14cc1eac0 = 0;
      uRam000000014cc1eac8 = 0;
      _DAT_14cc1ead0 = 0;
      uRam000000014cc1ead8 = 0;
      _DAT_14cc1eae0 = FUN_149552fce;
      _DAT_14cc1eae8 = FUN_14955305a;
      _DAT_14cc1eaf0 = FUN_14955309a;
      _DAT_14cc1eaf8 = FUN_149553136;
      _DAT_14cc1eb00 = FUN_1495531fc;
      _DAT_14cc1eb08 = 0;
      uRam000000014cc1eb10 = 0;
      _DAT_14cc1eb18 = 0;
      _Init_thread_footer(&DAT_14cc1eb20);
    }
  }
  FUN_145e3bc8c(&DAT_14cc1ea78,1);
  return;
}



// FUNCTION 145e3bc8c FUN_145e3bc8c body=219 status=ok
// SIG undefined FUN_145e3bc8c(void)

undefined8 FUN_145e3bc8c(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  bVar1 = true;
  if ((DAT_14c765cfc == '\0') || (lVar2 = (*DAT_14c765d68)(2), lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    (*DAT_14c765d78)(lVar2);
    bVar1 = false;
  }
  lVar3 = DAT_14cc1eb90;
  if (param_1 != 0) {
    if (DAT_14cc1eb90 == param_1) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      DAT_14cc1eb90 = lVar3;
    }
    else {
      lVar4 = DAT_14cc1eb90;
      if (DAT_14cc1eb90 == 0) {
        plVar5 = &DAT_14cc1eb90;
        lVar4 = 0;
        goto LAB_145e3bd29;
      }
      do {
        lVar6 = lVar4;
        lVar4 = *(longlong *)(lVar6 + 0x10);
      } while (lVar4 != 0 && lVar4 != param_1);
      if (lVar4 == param_1) {
        *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      }
    }
  }
  plVar5 = &DAT_14cc1eb90;
  lVar4 = lVar3;
  if ((param_2 == 0) && (lVar3 != 0)) {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    plVar5 = (longlong *)(lVar3 + 0x10);
  }
LAB_145e3bd29:
  *(longlong *)(param_1 + 0x10) = lVar4;
  *plVar5 = param_1;
  if (!bVar1) {
    (*DAT_14c765d88)(lVar2);
  }
  return 0;
}



// FUNCTION 145e3bd67 FUN_145e3bd67 body=358 status=ok
// SIG undefined FUN_145e3bd67(void)

longlong FUN_145e3bd67(ulonglong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 - 0x7fffff00 < 0xffffffff80000101) {
    return 0;
  }
  if (DAT_14c765cf8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145e3be53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar4 = (*DAT_14c765d18)(param_1 & 0xffffffff);
    return lVar4;
  }
  if (DAT_14cc1eb98 != 0) {
    (*DAT_14c765d78)();
  }
  iVar3 = (*DAT_14c765d38)(param_1 & 0xffffffff);
  if ((longlong)DAT_14cc1eb78 < (longlong)param_1) {
    DAT_14cc1eb78 = param_1;
  }
  if (DAT_14cc1eba0 < 1) {
LAB_145e3bdcc:
    lVar4 = (*DAT_14c765d18)(iVar3);
    if (lVar4 != 0) {
      iVar3 = (*DAT_14c765d30)(lVar4);
      DAT_14cc1eb40 = iVar3 + DAT_14cc1eb40;
      if (DAT_14cc1eb60 < DAT_14cc1eb40) {
        DAT_14cc1eb60 = DAT_14cc1eb40;
      }
      lVar1 = DAT_14cc1eb58 + 1;
      bVar2 = DAT_14cc1eb88 <= DAT_14cc1eb58;
      DAT_14cc1eb58 = lVar1;
      if (bVar2) {
        DAT_14cc1eb88 = lVar1;
      }
      goto LAB_145e3be2b;
    }
  }
  else {
    if (DAT_14cc1eb40 < DAT_14cc1eba0 - iVar3) {
      DAT_14cc1ebb0 = 0;
      goto LAB_145e3bdcc;
    }
    DAT_14cc1ebb0 = 1;
    if ((DAT_14cc1eb98 != 0) && ((*DAT_14c765d88)(), DAT_14cc1eb98 != 0)) {
      (*DAT_14c765d78)();
    }
    if ((DAT_14cc1eba8 == 0) || (DAT_14cc1eb40 < DAT_14cc1eba8 - iVar3)) goto LAB_145e3bdcc;
  }
  lVar4 = 0;
LAB_145e3be2b:
  if (DAT_14cc1eb98 != 0) {
    (*DAT_14c765d88)();
  }
  return lVar4;
}



// FUNCTION 145e3bece FUN_145e3bece body=53 status=ok
// SIG undefined FUN_145e3bece(void)

void FUN_145e3bece(longlong *param_1)

{
  FUN_145e3bf04();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3bf04 FUN_145e3bf04 body=337 status=ok
// SIG undefined FUN_145e3bf04(void)

void FUN_145e3bf04(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
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
      lVar4 = *(longlong *)(*local_68 + 0x30 + (longlong)iStack_4c * 0x40);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 145e3c056 FUN_145e3c056 body=53 status=ok
// SIG undefined FUN_145e3c056(void)

void FUN_145e3c056(longlong *param_1)

{
  FUN_145e3c08c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3c08c FUN_145e3c08c body=337 status=ok
// SIG undefined FUN_145e3c08c(void)

void FUN_145e3c08c(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
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
      lVar4 = *(longlong *)(*local_68 + 0x38 + (longlong)iStack_4c * 0x48);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
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



// FUNCTION 145e3c1de FUN_145e3c1de body=52 status=ok
// SIG undefined FUN_145e3c1de(void)

void FUN_145e3c1de(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x4b8,0x10);
  FUN_145e3c212(uVar1);
  FUN_140de79e2(param_1,uVar1);
  return;
}



// FUNCTION 145e3c212 FUN_145e3c212 body=205 status=ok
// SIG undefined FUN_145e3c212(void)

undefined8 * FUN_145e3c212(undefined8 *param_1)

{
  FUN_145854fc0();
  *param_1 = &PTR_FUN_14b904ca0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  FUN_140056680(param_1 + 0x77,&DAT_149dfb77a);
  FUN_145e3c2e0(param_1 + 0x79);
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  return param_1;
}



// FUNCTION 145e3c2e0 FUN_145e3c2e0 body=134 status=ok
// SIG undefined FUN_145e3c2e0(void)

longlong * FUN_145e3c2e0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *param_1 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 1) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[2] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 3) = (int)plVar2[1];
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[4] = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 5) = (int)plVar2[1];
  FUN_140056680(param_1 + 6,&DAT_149dfb77a);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  return param_1;
}



// FUNCTION 145e3c36c FUN_145e3c36c body=821 status=ok
// SIG undefined FUN_145e3c36c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3c36c(void)

{
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  longlong **local_2c0;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  longlong local_2a0;
  undefined1 local_298 [4];
  undefined1 local_294 [4];
  longlong *local_290 [2];
  longlong *local_280 [2];
  undefined1 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong *local_258 [2];
  undefined1 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  wchar_t *local_230;
  undefined4 local_228;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160 [2];
  longlong *local_150 [2];
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128 [2];
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  wchar_t *local_100;
  undefined4 local_f8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (DAT_14cb915b8 == '\0') {
    DAT_14cb915b8 = '\x01';
    FUN_144a5dc74(local_128);
    local_118 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_100 = L"Gamepad_Swizzled_RxLy";
    local_f8 = 0x15;
    FUN_1446e940c(local_164,&local_100);
    local_100 = L"EnhancedInput";
    local_f8 = 0xd;
    FUN_1446e940c(local_168,&local_100);
    FUN_140208bae(local_160,local_168,local_164,L"Gamepad RX/LY Thumbsticks 2D-Axis");
    FUN_14023423e(local_150,local_160);
    local_140 = 1;
    local_138 = 0;
    uStack_130 = 0;
    local_180 = _DAT_14cb915a0;
    uStack_17c = uRam000000014cb915a4;
    uStack_178 = _DAT_14cb915a8;
    uStack_174 = uRam000000014cb915ac;
    local_170 = DAT_14cb915b0;
    if (DAT_14cb915b0 != 0) {
      LOCK();
      *(int *)(DAT_14cb915b0 + 8) = *(int *)(DAT_14cb915b0 + 8) + 1;
      UNLOCK();
    }
    local_2c8 = 0;
    local_2c0 = local_128;
    FUN_1413a41ee(&local_100,&local_180,local_150,0x801);
    FUN_144a5dc74(local_258);
    local_248 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_230 = L"Gamepad_Swizzled_LxRy";
    local_228 = 0x15;
    FUN_1446e940c(local_294,&local_230);
    local_230 = L"EnhancedInput";
    local_228 = 0xd;
    FUN_1446e940c(local_298,&local_230);
    FUN_140208bae(local_290,local_298,local_294,L"Gamepad LX/RY Thumbsticks 2D-Axis");
    FUN_14023423e(local_280,local_290);
    local_270 = 1;
    local_268 = 0;
    uStack_260 = 0;
    local_2b0 = _DAT_14cb91588;
    uStack_2ac = uRam000000014cb9158c;
    uStack_2a8 = _DAT_14cb91590;
    uStack_2a4 = uRam000000014cb91594;
    local_2a0 = DAT_14cb91598;
    if (DAT_14cb91598 != 0) {
      LOCK();
      *(int *)(DAT_14cb91598 + 8) = *(int *)(DAT_14cb91598 + 8) + 1;
      UNLOCK();
    }
    local_2c8 = 0;
    local_2c0 = local_258;
    FUN_1413a41ee(&local_230,&local_2b0,local_280,0x801);
    FUN_145e3c6a2(&local_230,&local_100);
    FUN_140cac0f2(&local_230);
    FUN_1449db362(&local_268);
    if (local_280[0] != (longlong *)0x0) {
      (**(code **)(*local_280[0] + 0x10))();
    }
    if (local_290[0] != (longlong *)0x0) {
      (**(code **)(*local_290[0] + 0x10))();
    }
    FUN_1449db362(&local_240);
    if (local_258[0] != (longlong *)0x0) {
      (**(code **)(*local_258[0] + 0x10))();
    }
    FUN_140cac0f2(&local_100);
    FUN_1449db362(&local_138);
    if (local_150[0] != (longlong *)0x0) {
      (**(code **)(*local_150[0] + 0x10))();
    }
    if (local_160[0] != (longlong *)0x0) {
      (**(code **)(*local_160[0] + 0x10))();
    }
    FUN_1449db362(&local_110);
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3c6a2 FUN_145e3c6a2 body=991 status=ok
// SIG undefined FUN_145e3c6a2(void)

/* WARNING: Removing unreachable block (ram,0x000145e3c996) */
/* WARNING: Removing unreachable block (ram,0x000145e3c9a1) */
/* WARNING: Removing unreachable block (ram,0x000145e3c9b4) */
/* WARNING: Removing unreachable block (ram,0x000145e3c9c2) */
/* WARNING: Removing unreachable block (ram,0x000145e3c9cd) */
/* WARNING: Removing unreachable block (ram,0x000145e3c9e0) */
/* WARNING: Removing unreachable block (ram,0x000145e3c9ee) */
/* WARNING: Removing unreachable block (ram,0x000145e3c9f8) */
/* WARNING: Removing unreachable block (ram,0x000145e3ca0a) */
/* WARNING: Removing unreachable block (ram,0x000145e3ca18) */
/* WARNING: Removing unreachable block (ram,0x000145e3ca22) */
/* WARNING: Removing unreachable block (ram,0x000145e3ca34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3c6a2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_70 = (undefined4)DAT_14c965758;
  uStack_6c = DAT_14c965758._4_4_;
  uStack_68 = _DAT_14c965760;
  uStack_64 = uRam000000014c965764;
  local_60 = DAT_14c965768;
  if (DAT_14c965768 != 0) {
    LOCK();
    *(int *)(DAT_14c965768 + 8) = *(int *)(DAT_14c965768 + 8) + 1;
    UNLOCK();
  }
  FUN_1402df5c4(&local_58,&local_70);
  local_98 = (undefined4)DAT_14c9657a0;
  uStack_94 = DAT_14c9657a0._4_4_;
  uStack_90 = _DAT_14c9657a8;
  uStack_8c = uRam000000014c9657ac;
  local_88 = DAT_14c9657b0;
  if (DAT_14c9657b0 != 0) {
    LOCK();
    *(int *)(DAT_14c9657b0 + 8) = *(int *)(DAT_14c9657b0 + 8) + 1;
    UNLOCK();
  }
  FUN_1402df5c4(&local_80,&local_98);
  if (((((*(char *)((longlong)param_1 + 0x42) == '\x03') &&
        (*(char *)((longlong)param_2 + 0x42) == '\x03')) && (local_58 != 0)) &&
      ((local_80 != 0 && (cVar3 = FUN_144a8fce0(&DAT_14c965758), cVar3 != '\0')))) &&
     ((cVar3 = FUN_144a8fce0(&DAT_14c9657a0), cVar3 != '\0' &&
      ((cVar3 = FUN_145e3cae8(&DAT_14c965758), cVar3 == '\0' &&
       (cVar3 = FUN_145e3cae8(&DAT_14c9657a0), cVar3 == '\0')))))) {
    FUN_1413a47ae(param_1);
    FUN_1413a47ae(param_2);
    local_c8 = *param_1;
    local_c0 = param_1[1];
    lStack_b8 = param_1[2];
    if (lStack_b8 == 0) {
      lStack_b8 = 0;
    }
    else {
      LOCK();
      *(int *)(lStack_b8 + 8) = *(int *)(lStack_b8 + 8) + 1;
      UNLOCK();
    }
    local_b0 = *param_2;
    uStack_a8 = param_2[1];
    local_a0 = param_2[2];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_f8 = *param_2;
    uStack_f0 = param_2[1];
    local_e8 = param_2[2];
    if (local_e8 != 0) {
      LOCK();
      *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
      UNLOCK();
    }
    uStack_e0 = *param_1;
    local_d8 = param_1[1];
    lStack_d0 = param_1[2];
    if (lStack_d0 != 0) {
      LOCK();
      *(int *)(lStack_d0 + 8) = *(int *)(lStack_d0 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c965758;
    local_40 = &local_c8;
    FUN_145e3cb80(local_34,&local_48);
    local_48 = &DAT_14c9657a0;
    local_40 = &local_f8;
    FUN_145e3cb80(local_34,&local_48);
    FUN_145e3ca82(&local_f8);
    FUN_145e3ca82(&local_c8);
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3ca82 FUN_145e3ca82 body=101 status=ok
// SIG undefined FUN_145e3ca82(void)

void FUN_145e3ca82(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000145e3cae3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e3cae8 FUN_145e3cae8 body=152 status=ok
// SIG undefined FUN_145e3cae8(void)

undefined8 FUN_145e3cae8(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  bool bVar7;
  
  if (DAT_14cb915c8 != DAT_14cb915f4) {
    lVar1 = *param_1;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    puVar5 = &DAT_14cb915f8;
    if (DAT_14cb91600 != (undefined *)0x0) {
      puVar5 = DAT_14cb91600;
    }
    iVar6 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14cb91608 - 1U &
                              (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(longlong *)(DAT_14cb915c0 + (longlong)iVar6 * 0x50) == lVar1;
        uVar3 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar3;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x50 + DAT_14cb915c0 + 0x48);
      } while (iVar6 != -1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145e3cb80 FUN_145e3cb80 body=304 status=ok
// SIG undefined FUN_145e3cb80(void)

undefined4 * FUN_145e3cb80(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145e3cdc0(local_40);
  FUN_145e3ccb2(local_38,*param_2,param_2[1]);
  *(undefined4 *)(local_38 + 9) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar9 = ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145e3cd16(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14cb915c8 - DAT_14cb915f4;
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= DAT_14cb91608)) {
      uVar9 = DAT_14cb91608 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x4c) = uVar9;
      puVar8 = &DAT_14cb915f8;
      if (DAT_14cb91600 != (undefined *)0x0) {
        puVar8 = DAT_14cb91600;
      }
      *(undefined4 *)(local_38 + 9) = *(undefined4 *)(puVar8 + (longlong)(int)uVar9 * 4);
      *(undefined4 *)(puVar8 + ((longlong)DAT_14cb91608 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14cb91608 = iVar7;
      FUN_145e3ced6();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3ccb2 FUN_145e3ccb2 body=100 status=ok
// SIG undefined FUN_145e3ccb2(void)

void FUN_145e3ccb2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  lVar1 = param_3[2];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = param_3[3];
  param_1[7] = param_3[4];
  lVar1 = param_3[5];
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 145e3cd16 FUN_145e3cd16 body=170 status=ok
// SIG undefined FUN_145e3cd16(void)

undefined8 FUN_145e3cd16(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  
  if (1 < (uint)(DAT_14cb915c8 - DAT_14cb915f4)) {
    puVar1 = &DAT_14cb915f8;
    if (DAT_14cb91600 != (undefined *)0x0) {
      puVar1 = DAT_14cb91600;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)(DAT_14cb91608 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(DAT_14cb915c0 + (longlong)iVar2 * 0x50);
        if (*(longlong *)(DAT_14cb915c0 + (longlong)iVar2 * 0x50) == *param_2) {
          FUN_145d4abd6(_Dst);
          memmove(_Dst,param_2,0x48);
          FUN_1489f24de(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar2 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145e3cdc0 FUN_145e3cdc0 body=278 status=ok
// SIG undefined FUN_145e3cdc0(void)

int * FUN_145e3cdc0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb915f0;
  iVar3 = DAT_14cb915c8;
  if (DAT_14cb915f4 == 0) {
    iVar2 = DAT_14cb915c8 + 1;
    bVar7 = DAT_14cb915cc == DAT_14cb915c8;
    DAT_14cb915c8 = iVar2;
    if (bVar7) {
      FUN_1406fba42(&DAT_14cb915c0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb915d0,1);
    puVar4 = DAT_14cb915e0;
    if (DAT_14cb915e0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb915d0;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb915f0;
    DAT_14cb915f0 = *(int *)(DAT_14cb915c0 + 4 + lVar6 * 0x50);
    DAT_14cb915f4 = DAT_14cb915f4 + -1;
    if (DAT_14cb915f4 != 0) {
      *(undefined4 *)(DAT_14cb915c0 + (longlong)DAT_14cb915f0 * 0x50) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb915d0;
  if (DAT_14cb915e0 != (undefined *)0x0) {
    puVar4 = DAT_14cb915e0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x50 + DAT_14cb915c0;
  return param_1;
}



// FUNCTION 145e3ced6 FUN_145e3ced6 body=527 status=ok
// SIG undefined FUN_145e3ced6(void)

void FUN_145e3ced6(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb91600 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb91600,0,0,4);
  }
  uVar3 = DAT_14cb91608;
  uVar2 = local_50;
  if (DAT_14cb91608 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb915f8,0,DAT_14cb91608,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14cb91600;
        if (DAT_14cb91600 == (undefined *)0x0) {
          puVar5 = &DAT_14cb915f8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cb91608 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb915d0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb915e8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb915c0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x50;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb91608 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x4c + lVar6) = iVar8;
        puVar5 = DAT_14cb91600;
        if (DAT_14cb91600 == (undefined *)0x0) {
          puVar5 = &DAT_14cb915f8;
        }
        *(undefined4 *)(lVar1 + 0x48 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14cb91608 - 1U & uVar9) * 4);
        puVar5 = DAT_14cb91600;
        if (DAT_14cb91600 == (undefined *)0x0) {
          puVar5 = &DAT_14cb915f8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14cb91608 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e3d0f2 FUN_145e3d0f2 body=353 status=ok
// SIG undefined FUN_145e3d0f2(void)

undefined8 * FUN_145e3d0f2(undefined8 *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14ad01060;
  param_1[0xc] = 0x10000000000;
  param_1[0x11] = 0x10000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa1) = 0;
  lVar1 = FUN_14009d2a0();
  puVar2 = (undefined2 *)FUN_145e3d254();
  *(undefined1 *)((longlong)param_1 + 0x32) = 2;
  local_34 = *puVar2;
  *(undefined2 *)(param_1 + 6) = local_34;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_50 = FUN_145920956();
    if (local_50 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(local_50);
    }
    local_58 = param_1[2];
    if ((local_58 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_14689c22e();
    }
    FUN_140909372(&local_58,&local_50);
    local_34 = *puVar2;
  }
  local_40 = (ulonglong *)&local_32;
  local_48 = &local_34;
  FUN_1447c44f6(param_1 + 8,&local_48);
  local_34 = *(undefined2 *)(lVar1 + 0x11a);
  local_32 = *(undefined2 *)(lVar1 + 0x11c);
  local_40 = &local_30;
  local_48 = &local_34;
  FUN_1403b5126(param_1 + 8,&local_48,2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3d254 FUN_145e3d254 body=184 status=ok
// SIG undefined FUN_145e3d254(void)

longlong FUN_145e3d254(void)

{
  longlong lVar1;
  bool bVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb28c90) && (FUN_144b3d300(&DAT_14cb28c90), DAT_14cb28c90 == -1)) {
    DAT_14cb28c88 = 0;
    atexit((_func_5014 *)&LAB_1438d6da7);
    _Init_thread_footer(&DAT_14cb28c90);
  }
  if (DAT_14cb28c88 == 0) {
    lVar1 = FUN_14001cc68(8,0x10);
    FUN_145e3d30c(lVar1);
    if ((DAT_14cb28c88 != lVar1) && (bVar2 = DAT_14cb28c88 != 0, DAT_14cb28c88 = lVar1, bVar2)) {
      FUN_1400020a8();
    }
  }
  return DAT_14cb28c88;
}



// FUNCTION 145e3d30c FUN_145e3d30c body=258 status=ok
// SIG undefined FUN_145e3d30c(void)

undefined8 * FUN_145e3d30c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0xffffffffffffffff;
  uVar1 = FUN_145d77b9e();
  local_48 = 0;
  local_40 = 0;
  FUN_141570584(uVar1,&local_32,&local_48);
  *(undefined2 *)param_1 = local_32;
  local_48 = 0;
  local_40 = 0;
  FUN_1415706d4(uVar1,&local_32,&local_48);
  *(undefined2 *)((longlong)param_1 + 2) = local_32;
  local_48 = 0;
  local_40 = 0;
  FUN_1400ad0e0(uVar1,&local_32,L"Property Scale Reverse Binding Lookup",&local_48);
  *(undefined2 *)((longlong)param_1 + 4) = local_32;
  FUN_145e3d410(uVar1,*(undefined2 *)param_1);
  FUN_145e3d49c(uVar1,*(undefined2 *)((longlong)param_1 + 2));
  FUN_1400abbfa(uVar1,&local_48,L"Is Property Scaled",0);
  *(undefined2 *)((longlong)param_1 + 6) = (undefined2)local_48;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3d410 FUN_145e3d410 body=139 status=ok
// SIG undefined FUN_145e3d410(void)

void FUN_145e3d410(undefined8 param_1,undefined2 param_2)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_2,param_2);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14ad04930;
  FUN_1400abcac(param_1,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3d49c FUN_145e3d49c body=139 status=ok
// SIG undefined FUN_145e3d49c(void)

void FUN_145e3d49c(undefined8 param_1,undefined2 param_2)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_2,param_2);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14ad049b0;
  FUN_1400abcac(param_1,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3d528 FUN_145e3d528 body=92 status=ok
// SIG undefined FUN_145e3d528(void)

void FUN_145e3d528(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c8730b8);
  FUN_145e3d5ba(DAT_14c8730a8,DAT_14c8730b0);
  if (DAT_14c8730a8 != 0) {
    FUN_1400020a8();
  }
  DAT_14c8730a0 = 0;
  if (DAT_14c873098 != 0) {
    FUN_1400020a8();
  }
  FUN_145e3d584();
  return;
}



// FUNCTION 145e3d584 FUN_145e3d584 body=54 status=ok
// SIG undefined FUN_145e3d584(void)

void FUN_145e3d584(void)

{
  FUN_145e3d5fa();
  if (DAT_14c873078 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c873058 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3d5ba FUN_145e3d5ba body=63 status=ok
// SIG undefined FUN_145e3d5ba(void)

void FUN_145e3d5ba(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e3d5fa FUN_145e3d5fa body=377 status=ok
// SIG undefined FUN_145e3d5fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3d5fa(void)

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
  local_28 = &DAT_14c873068;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c873080 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c873058;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14c873060 = 0;
  if (DAT_14c873064 != 0) {
    FUN_1446f4a44(&DAT_14c873058,0);
  }
  _DAT_14c873088 = 0xffffffff;
  DAT_14c873080 = 0;
  if (0x80 < DAT_14c873084) {
    DAT_14c873084 = 0x80;
    FUN_1446efbd8(&DAT_14c873068,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e3d774 FUN_145e3d774 body=40 status=ok
// SIG undefined FUN_145e3d774(void)

undefined8 FUN_145e3d774(undefined8 param_1,int param_2)

{
  FUN_145e3d79c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e3d79c FUN_145e3d79c body=108 status=ok
// SIG undefined FUN_145e3d79c(void)

void FUN_145e3d79c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_145e3d808(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e3d808 FUN_145e3d808 body=55 status=ok
// SIG undefined FUN_145e3d808(void)

void FUN_145e3d808(longlong *param_1)

{
  FUN_145e3d840(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3d840 FUN_145e3d840 body=383 status=ok
// SIG undefined FUN_145e3d840(void)

void FUN_145e3d840(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e3d9c0 FUN_145e3d9c0 body=40 status=ok
// SIG undefined FUN_145e3d9c0(void)

undefined8 FUN_145e3d9c0(undefined8 param_1,int param_2)

{
  FUN_145e3d9e8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e3d9e8 FUN_145e3d9e8 body=393 status=ok
// SIG undefined FUN_145e3d9e8(void)

void FUN_145e3d9e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bdbf620;
  param_1[5] = &PTR_FUN_14bdbf9c0;
  param_1[0x13] = &PTR_FUN_14bdbf9e0;
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
  FUN_144716727(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_145e3db71(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145e3dbbe(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_145850673(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_1411412a8(param_1);
  return;
}



// FUNCTION 145e3db71 FUN_145e3db71 body=77 status=ok
// SIG undefined FUN_145e3db71(void)

void FUN_145e3db71(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e3dbbe FUN_145e3dbbe body=77 status=ok
// SIG undefined FUN_145e3dbbe(void)

void FUN_145e3dbbe(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e3dc0c FUN_145e3dc0c body=278 status=ok
// SIG undefined FUN_145e3dc0c(void)

undefined * FUN_145e3dc0c(void)

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
              0x110) < DAT_14ca8ecb0) {
    FUN_144b3d300(&DAT_14ca8ecb0);
    if (DAT_14ca8ecb0 == -1) {
      FUN_145e3dd24(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YUVv216ConvertUB";
      local_78 = L"FYUVv216ConvertUB";
      local_50 = 0xb0;
      local_58 = 0x27c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8ec30,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7a0e);
      _Init_thread_footer(&DAT_14ca8ecb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8ec30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3dd24 FUN_145e3dd24 body=226 status=ok
// SIG undefined FUN_145e3dd24(void)

longlong * FUN_145e3dd24(longlong *param_1)

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
  pcVar13 = FUN_14631d344;
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



// FUNCTION 145e3de0c FUN_145e3de0c body=136 status=ok
// SIG undefined FUN_145e3de0c(void)

code * FUN_145e3de0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UseBilinearSampler";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9400000284;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424da0;
}



// FUNCTION 145e3de94 FUN_145e3de94 body=138 status=ok
// SIG undefined FUN_145e3de94(void)

code * FUN_145e3de94(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8400000280;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424f3e;
}



// FUNCTION 145e3df1e FUN_145e3df1e body=967 status=ok
// SIG undefined FUN_145e3df1e(void)

void FUN_145e3df1e(undefined8 param_1,undefined8 param_2,char param_3,longlong *param_4)

{
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  lVar7 = DAT_14cbe42e8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 == '\0') {
    iVar2 = *(int *)((longlong)param_4 + 0x4c);
    FUN_145e3e385(param_4[8],(int)param_4[9]);
    *(undefined4 *)(param_4 + 9) = 0;
    if ((iVar2 < 0) && (*(int *)((longlong)param_4 + 0x4c) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  else if (DAT_14cbe42e8 != 0) {
    FUN_1446dcdd4(&local_78);
    lVar7 = thunk_FUN_144837462(lVar7,&local_78);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (lVar7 != 0) {
      FUN_1400021e4(param_2,&local_78);
      lVar11 = local_78;
      iVar2 = (int)uStack_70;
      uVar6 = (int)uStack_70 - 1;
      if ((int)uStack_70 == 0) {
        uVar6 = 0;
      }
      if (0 < (int)uVar6) {
        uVar10 = 0;
        do {
          uVar1 = *(ushort *)(local_78 + uVar10 * 2);
          *(ushort *)(local_78 + uVar10 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          uVar10 = uVar10 + 1;
        } while (uVar6 != uVar10);
      }
      uVar5 = uStack_70._4_4_;
      local_78 = 0;
      uStack_70 = 0;
      if (*param_4 == 0) {
        *param_4 = lVar11;
        *(int *)(param_4 + 1) = iVar2;
        *(undefined4 *)((longlong)param_4 + 0xc) = uVar5;
      }
      else {
        FUN_1400020a8();
        *param_4 = lVar11;
        *(int *)(param_4 + 1) = iVar2;
        *(undefined4 *)((longlong)param_4 + 0xc) = uVar5;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_14000bbd8(&local_78,lVar7 + 0x18,0);
      FUN_1410d1eba(local_88,&local_78);
      FUN_140008f88(param_4 + 2,local_88);
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      FUN_14000bbd8(&local_78,lVar7 + 0x28,0);
      FUN_1410d1eba(local_88,&local_78);
      FUN_140008f88(param_4 + 4,local_88);
      if (local_88[0] != (longlong *)0x0) {
        (**(code **)(*local_88[0] + 0x10))();
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(lVar7 + 0x78);
      plVar4 = (longlong *)param_4[6];
      if (plVar4 != plVar3) {
        param_4[6] = (longlong)plVar3;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      *(undefined4 *)(param_4 + 7) = *(undefined4 *)(lVar7 + 0x80);
      iVar2 = *(int *)((longlong)param_4 + 0x4c);
      FUN_145e3e385(param_4[8],(int)param_4[9]);
      *(undefined4 *)(param_4 + 9) = 0;
      if ((iVar2 < 0) && (*(int *)((longlong)param_4 + 0x4c) != 0)) {
        FUN_148eb68be(param_4 + 8);
      }
      if ((longlong)*(int *)(lVar7 + 0xa0) != 0) {
        lVar11 = *(longlong *)(lVar7 + 0x98);
        lVar12 = (longlong)*(int *)(lVar7 + 0xa0) * 0x20 + lVar11;
        do {
          lVar8 = FUN_145e3e304(param_4 + 8);
          FUN_14000bbd8(&local_78,lVar11,0);
          FUN_1410d1eba(local_88,&local_78);
          FUN_140008f88(lVar8 + 0x10,local_88);
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          FUN_144a787a6(lVar8,lVar11 + 0x10);
          lVar11 = lVar11 + 0x20;
        } while (lVar11 != lVar12);
      }
      if ((*(char *)(lVar7 + 0xac) != '\0') && (lVar7 = FUN_141563480(lVar7 + 0xb0), lVar7 != 0)) {
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        FUN_1446ddda2(&local_78,&DAT_14b9b09b2,0);
        FUN_1402b5374(&local_78,1,*(undefined8 *)(lVar7 + 0x38));
        uVar9 = FUN_14001cc68(0x48,0x10);
        local_98 = DAT_14cbdd93c;
        local_90 = DAT_14cbdd944;
        FUN_148e949f4(uVar9,&local_98,&local_78);
        FUN_140391314(param_1,uVar9);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e3e2fe thunk_FUN_144837462 body=5 status=ok
// SIG undefined thunk_FUN_144837462(void)

undefined8 thunk_FUN_144837462(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) == 0) ||
       ((int)param_1[0x3a] <= *(int *)((longlong)param_1 + 0x1fc))) {
LAB_144837614:
      lVar7 = FUN_144837648(param_1,param_2,1);
      if (lVar7 == 0) {
        return 0;
      }
      FUN_14012a344(param_1,lVar7,0);
      puVar8 = (undefined8 *)(lVar7 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar4 == '\0') goto LAB_144837614;
  }
  puVar6 = (uint *)&DAT_14c948618;
  if (((*param_2 != 0) && (0 < param_2[1])) && (*param_2 != DAT_14c948000)) {
    puVar6 = (uint *)(param_2 + 2);
    if (0 < param_2[9]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
    if (1 < (uint)param_2[1]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
  }
  uVar2 = *puVar6;
  uVar3 = puVar6[2];
  uVar5 = uVar2;
  if (uVar3 != 0) {
    uVar5 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
    uVar12 = uVar9 >> 0xd ^ (uVar3 - uVar5) - uVar9;
    uVar5 = uVar12 >> 0xc ^ (uVar5 - uVar9) - uVar12;
    uVar14 = uVar5 << 0x10 ^ (uVar9 - uVar12) - uVar5;
    uVar9 = uVar14 >> 5 ^ (uVar12 - uVar5) - uVar14;
    uVar12 = uVar9 >> 3 ^ (uVar5 - uVar14) - uVar9;
    uVar5 = uVar12 << 10 ^ (uVar14 - uVar9) - uVar12;
    uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar12 + uVar5);
  }
  if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
    plVar10 = param_1 + 0x40;
    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x41];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar7 = param_1[0x39];
      while ((lVar13 = (longlong)iVar11 * 0x20, *(uint *)(lVar7 + lVar13) != uVar2 ||
             (lVar1 = lVar7 + lVar13, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar11 = *(int *)(lVar7 + 0x18 + lVar13);
        if (iVar11 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar8 = (undefined8 *)(lVar1 + 0x10);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar8;
    }
  }
  return 0;
}



// FUNCTION 145e3e304 FUN_145e3e304 body=61 status=ok
// SIG undefined FUN_145e3e304(void)

longlong FUN_145e3e304(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145e3e3c6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  thunk_FUN_145e3e346(lVar2);
  return lVar2;
}



// FUNCTION 145e3e341 thunk_FUN_145e3e346 body=5 status=ok
// SIG undefined thunk_FUN_145e3e346(void)

longlong thunk_FUN_145e3e346(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 145e3e346 FUN_145e3e346 body=63 status=ok
// SIG undefined FUN_145e3e346(void)

longlong FUN_145e3e346(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  *(longlong **)(param_1 + 0x10) = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x18) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 145e3e385 FUN_145e3e385 body=64 status=ok
// SIG undefined FUN_145e3e385(void)

void FUN_145e3e385(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145e3e3c6 FUN_145e3e3c6 body=132 status=ok
// SIG undefined FUN_145e3e3c6(void)

void FUN_145e3e3c6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145e3e44a FUN_145e3e44a body=53 status=ok
// SIG undefined FUN_145e3e44a(void)

void FUN_145e3e44a(longlong *param_1)

{
  FUN_145e3e480();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e3e480 FUN_145e3e480 body=338 status=ok
// SIG undefined FUN_145e3e480(void)

void FUN_145e3e480(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c;
      FUN_144760e21(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145e3e5d4 FUN_145e3e5d4 body=144 status=ok
// SIG undefined FUN_145e3e5d4(void)

bool FUN_145e3e5d4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3e666 FUN_145e3e666 body=51 status=ok
// SIG undefined FUN_145e3e666(void)

void FUN_145e3e666(undefined8 param_1)

{
  FUN_140457ffc(&DAT_14c872b90,param_1);
  FUN_140457ffc(&DAT_14c872c10,param_1);
  FUN_1411d16aa(param_1);
  return;
}



// FUNCTION 145e3e6a4 FUN_145e3e6a4 body=185 status=ok
// SIG undefined FUN_145e3e6a4(void)

undefined8 * FUN_145e3e6a4(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14aa13ea0;
  param_1[5] = &PTR_FUN_14aa14320;
  param_1[6] = &PTR_LAB_14aa14360;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_140b967fa(param_1,1);
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  return param_1;
}



// FUNCTION 145e3e75e FUN_145e3e75e body=40 status=ok
// SIG undefined FUN_145e3e75e(void)

undefined8 FUN_145e3e75e(undefined8 param_1,int param_2)

{
  FUN_145e3e786();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e3e786 FUN_145e3e786 body=156 status=ok
// SIG undefined FUN_145e3e786(void)

void FUN_145e3e786(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aaa28e0;
  param_1[0x1f] = &DAT_14a176f00;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1f] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x20);
  param_1[0xe] = &DAT_14a176f00;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0xf);
  *param_1 = &PTR_FUN_14aa9f670;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e3e82e FUN_145e3e82e body=185 status=ok
// SIG undefined FUN_145e3e82e(void)

undefined8 * FUN_145e3e82e(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac0f8d0;
  param_1[0x3f] = 0x4120000041200000;
  *(undefined4 *)(param_1 + 0x40) = 0x41200000;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x41) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0x42) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar3;
  param_1[0x43] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(uint *)((longlong)param_1 + 0x224) = (*(uint *)((longlong)param_1 + 0x224) & 0xfffffff8) + 1;
  *(undefined1 *)(param_1 + 0x1f) = 2;
  lVar4 = FUN_145869c20();
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x3d] = lVar4;
  *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
  if (*(char *)((longlong)param_1 + 0x4a) != '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x4a) = 3;
  }
  *(undefined1 *)((longlong)param_1 + 0xf9) = 4;
  return param_1;
}



// FUNCTION 145e3e8e8 FUN_145e3e8e8 body=40 status=ok
// SIG undefined FUN_145e3e8e8(void)

undefined8 FUN_145e3e8e8(undefined8 param_1,int param_2)

{
  FUN_145e3e910();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e3e910 FUN_145e3e910 body=156 status=ok
// SIG undefined FUN_145e3e910(void)

void FUN_145e3e910(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aeae8f0;
  param_1[0x26] = &PTR_FUN_14aeaec60;
  if (param_1[0x38] != 0) {
    plVar1 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar1 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0x28] != 0) {
    plVar1 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14582b6ee(param_1);
  return;
}



// FUNCTION 145e3e9b6 FUN_145e3e9b6 body=187 status=ok
// SIG undefined FUN_145e3e9b6(void)

void FUN_145e3e9b6(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145e3ea59;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145e3ea59:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145e3ea7c FUN_145e3ea7c body=186 status=ok
// SIG undefined FUN_145e3ea7c(void)

void FUN_145e3ea7c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b4e7910;
  param_1[4] = &PTR_FUN_14b4e7938;
  if (param_1[0xb] != 0) {
    FUN_14658150c(param_1,&local_28);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))(local_28,param_1 + 0xb);
      param_1[0xb] = 0;
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
  }
  FUN_1449db362(param_1 + 9);
  FUN_1457f3dec(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3eb42 FUN_145e3eb42 body=185 status=ok
// SIG undefined FUN_145e3eb42(void)

undefined8 * FUN_145e3eb42(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14b5707c0;
  param_1[5] = &PTR_FUN_14b570ac0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  FUN_140ca8f8e(param_1 + 0x30);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FUN_140ca8f8e(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  FUN_140ca8f8e(param_1 + 0x6a);
  *(undefined2 *)(param_1 + 0x80) = 1;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  uVar1 = FUN_141319416();
  FUN_140f13d9e(param_1 + 0x6a,uVar1);
  return param_1;
}



// FUNCTION 145e3ec06 FUN_145e3ec06 body=185 status=ok
// SIG undefined FUN_145e3ec06(void)

undefined8 * FUN_145e3ec06(undefined8 *param_1)

{
  FUN_145a2d2c6();
  *param_1 = &PTR_FUN_14b594750;
  param_1[5] = &PTR_FUN_14b594c60;
  param_1[0x2d] = &PTR_FUN_14b594ca0;
  param_1[0x86] = &PTR_FUN_14b594cd0;
  param_1[0x8e] = &PTR_FUN_14b594cf0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x594) = 0xffffffff;
  FUN_145a35a2a(param_1 + 0xb3);
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  return param_1;
}



// FUNCTION 145e3ecc0 FUN_145e3ecc0 body=233 status=ok
// SIG undefined FUN_145e3ecc0(void)

undefined8 * FUN_145e3ecc0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cbcccf8,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cbccd00;
      lVar6 = (longlong)(int)DAT_14cbccd00;
      DAT_14cbccd00 = DAT_14cbccd00 + 1;
      if (DAT_14cbccd04 < DAT_14cbccd00) {
        FUN_1447a71f6(&DAT_14cbcccf8,uVar3);
      }
      lVar2 = DAT_14cbcccf8;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cbcccf8 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3edb6 FUN_145e3edb6 body=25 status=ok
// SIG undefined FUN_145e3edb6(void)

void FUN_145e3edb6(void)

{
  FUN_145e3edd0();
  FUN_1416d9798(&DAT_14cbd92d0);
  return;
}



// FUNCTION 145e3edd0 FUN_145e3edd0 body=144 status=ok
// SIG undefined FUN_145e3edd0(void)

void FUN_145e3edd0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_20,L"GbxUIEventDispatcher",1);
  local_30 = 0;
  local_38 = 0;
  lVar1 = FUN_145e3ee61(param_1,local_20,0,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0xd0) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3ee61 FUN_145e3ee61 body=221 status=ok
// SIG undefined FUN_145e3ee61(void)

undefined8
FUN_145e3ee61(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145862e44();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3ef4a FUN_145e3ef4a body=184 status=ok
// SIG undefined FUN_145e3ef4a(void)

undefined8 * FUN_145e3ef4a(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14be75700;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_1446f470e(&local_20,L"RootComponent",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x39] = lVar2;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 6;
  *(undefined1 *)(param_1 + 7) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3f004 FUN_145e3f004 body=121 status=ok
// SIG undefined FUN_145e3f004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e3f004(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14118b488(&DAT_14cada2a0);
  _DAT_14cada2a0 = &PTR_FUN_14a8e67f0;
  FUN_1446f470e(&local_18,L"engine",1);
  uVar1 = FUN_145e3f07e(local_18);
  FUN_145e3f1ac(uVar1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3f07e FUN_145e3f07e body=111 status=ok
// SIG undefined FUN_145e3f07e(void)

void FUN_145e3f07e(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = (uint)((ulonglong)param_1 >> 0x10);
  uVar2 = (uint)param_1 & 0xffff;
  local_10 = param_1;
  FUN_145e3f0ee(&DAT_14c868060,
                ((uint)param_1 << 0x10 | uVar2) + (int)((ulonglong)param_1 >> 0x20) +
                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar2 >> 4));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3f0ee FUN_145e3f0ee body=189 status=ok
// SIG undefined FUN_145e3f0ee(void)

longlong * FUN_145e3f0ee(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_145e3f13e;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145e3f364(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_145e3f13e:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 145e3f1ac FUN_145e3f1ac body=204 status=ok
// SIG undefined FUN_145e3f1ac(void)

undefined8 FUN_145e3f1ac(undefined8 param_1,undefined8 param_2)

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
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14a8e68a0;
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
  *local_30 = &PTR_FUN_14a8e6830;
  FUN_145e3f27a(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3f27a FUN_145e3f27a body=216 status=ok
// SIG undefined FUN_145e3f27a(void)

undefined8 * FUN_145e3f27a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145e3f364 FUN_145e3f364 body=269 status=ok
// SIG undefined FUN_145e3f364(void)

undefined4 * FUN_145e3f364(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_145e3f5ac(param_1,local_48);
  FUN_145e3f472(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_145e3f4f6(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
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
      FUN_145e3f694(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3f472 FUN_145e3f472 body=131 status=ok
// SIG undefined FUN_145e3f472(void)

undefined8 * FUN_145e3f472(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 2;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 2;
  FUN_14019d794(param_2 + 1,&local_38);
  FUN_144760e21(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3f4f6 FUN_145e3f4f6 body=181 status=ok
// SIG undefined FUN_145e3f4f6(void)

undefined8 FUN_145e3f4f6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          FUN_144760e21(plVar8[1],(int)plVar8[2]);
          if (plVar8[1] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_1468147b2(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145e3f5ac FUN_145e3f5ac body=231 status=ok
// SIG undefined FUN_145e3f5ac(void)

int * FUN_145e3f5ac(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145e3f694 FUN_145e3f694 body=482 status=ok
// SIG undefined FUN_145e3f694(void)

void FUN_145e3f694(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x28);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 145e3f878 FUN_145e3f878 body=278 status=ok
// SIG undefined FUN_145e3f878(void)

undefined * FUN_145e3f878(void)

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
              0x110) < DAT_14ca3a058) {
    FUN_144b3d300(&DAT_14ca3a058);
    if (DAT_14ca3a058 == -1) {
      FUN_145e3f990(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RayTracingDecalParameters";
      local_78 = L"FDecalParametersRayTracing";
      local_50 = 0xe0;
      local_58 = 0x40;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca39fd8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f66b7d);
      _Init_thread_footer(&DAT_14ca3a058);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca39fd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3f990 FUN_145e3f990 body=226 status=ok
// SIG undefined FUN_145e3f990(void)

longlong * FUN_145e3f990(longlong *param_1)

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
  pcVar13 = FUN_146301fb6;
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



// FUNCTION 145e3fa78 FUN_145e3fa78 body=138 status=ok
// SIG undefined FUN_145e3fa78(void)

code * FUN_145e3fa78(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DecalColorParam";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3fb02;
}



// FUNCTION 145e3fb02 FUN_145e3fb02 body=138 status=ok
// SIG undefined FUN_145e3fb02(void)

code * FUN_145e3fb02(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DecalParams";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bcfda;
}



// FUNCTION 145e3fb8c FUN_145e3fb8c body=278 status=ok
// SIG undefined FUN_145e3fb8c(void)

undefined * FUN_145e3fb8c(void)

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
              0x110) < DAT_14ca8d4c8) {
    FUN_144b3d300(&DAT_14ca8d4c8);
    if (DAT_14ca8d4c8 == -1) {
      FUN_145e3fca4(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"AYUVConvertUB";
      local_78 = L"FAYUVConvertUB";
      local_50 = 0x60;
      local_58 = 0x90;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8d448,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7129);
      _Init_thread_footer(&DAT_14ca8d4c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8d448;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3fca4 FUN_145e3fca4 body=226 status=ok
// SIG undefined FUN_145e3fca4(void)

longlong * FUN_145e3fca4(longlong *param_1)

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
  pcVar13 = FUN_14631c92c;
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



// FUNCTION 145e3fd8c FUN_145e3fd8c body=138 status=ok
// SIG undefined FUN_145e3fd8c(void)

code * FUN_145e3fd8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrgbToLinear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474233c6;
}



// FUNCTION 145e3fe16 FUN_145e3fe16 body=138 status=ok
// SIG undefined FUN_145e3fe16(void)

code * FUN_145e3fe16(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3fd8c;
}



// FUNCTION 145e3fea0 FUN_145e3fea0 body=278 status=ok
// SIG undefined FUN_145e3fea0(void)

undefined * FUN_145e3fea0(void)

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
              0x110) < DAT_14ca8dd88) {
    FUN_144b3d300(&DAT_14ca8dd88);
    if (DAT_14ca8dd88 == -1) {
      FUN_145e3ffb8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"P010ConvertUB";
      local_78 = L"FP010ConvertUB";
      local_50 = 0xb0;
      local_58 = 0x151;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8dd08,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f747e);
      _Init_thread_footer(&DAT_14ca8dd88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8dd08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e3ffb8 FUN_145e3ffb8 body=226 status=ok
// SIG undefined FUN_145e3ffb8(void)

longlong * FUN_145e3ffb8(longlong *param_1)

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
  pcVar13 = FUN_14631cce4;
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



// FUNCTION 145e400a0 FUN_145e400a0 body=138 status=ok
// SIG undefined FUN_145e400a0(void)

code * FUN_145e400a0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000154;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423dfe;
}



// FUNCTION 145e4012a FUN_145e4012a body=138 status=ok
// SIG undefined FUN_145e4012a(void)

code * FUN_145e4012a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000159;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147423c60;
}



// FUNCTION 145e401b4 FUN_145e401b4 body=278 status=ok
// SIG undefined FUN_145e401b4(void)

undefined * FUN_145e401b4(void)

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
              0x110) < DAT_14ca8eaf0) {
    FUN_144b3d300(&DAT_14ca8eaf0);
    if (DAT_14ca8eaf0 == -1) {
      FUN_145e402cc(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YUVConvertUB";
      local_78 = L"FYUVConvertUB";
      local_50 = 0x80;
      local_58 = 0x255;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8ea70,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7902);
      _Init_thread_footer(&DAT_14ca8eaf0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8ea70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e402cc FUN_145e402cc body=226 status=ok
// SIG undefined FUN_145e402cc(void)

longlong * FUN_145e402cc(longlong *param_1)

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
  pcVar13 = FUN_14631d234;
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



// FUNCTION 145e403b4 FUN_145e403b4 body=138 status=ok
// SIG undefined FUN_145e403b4(void)

code * FUN_145e403b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"YSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000025c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1474249e0;
}



// FUNCTION 145e4043e FUN_145e4043e body=138 status=ok
// SIG undefined FUN_145e4043e(void)

code * FUN_145e4043e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000258;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147424af4;
}



// FUNCTION 145e404c8 FUN_145e404c8 body=278 status=ok
// SIG undefined FUN_145e404c8(void)

undefined * FUN_145e404c8(void)

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
              0x110) < DAT_14ca8f030) {
    FUN_144b3d300(&DAT_14ca8f030);
    if (DAT_14ca8f030 == -1) {
      FUN_145e405e0(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YUVY416ConvertUB";
      local_78 = L"FYUVY416ConvertUB";
      local_50 = 0xa0;
      local_58 = 0x2ce;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8efb0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7c26);
      _Init_thread_footer(&DAT_14ca8f030);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8efb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e405e0 FUN_145e405e0 body=226 status=ok
// SIG undefined FUN_145e405e0(void)

longlong * FUN_145e405e0(longlong *param_1)

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
  pcVar13 = FUN_14631d4dc;
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



// FUNCTION 145e406c8 FUN_145e406c8 body=138 status=ok
// SIG undefined FUN_145e406c8(void)

code * FUN_145e406c8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000002d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425386;
}



// FUNCTION 145e40752 FUN_145e40752 body=138 status=ok
// SIG undefined FUN_145e40752(void)

code * FUN_145e40752(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x94000002d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425272;
}



// FUNCTION 145e407dc FUN_145e407dc body=278 status=ok
// SIG undefined FUN_145e407dc(void)

undefined * FUN_145e407dc(void)

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
              0x110) < DAT_14ca8f570) {
    FUN_144b3d300(&DAT_14ca8f570);
    if (DAT_14ca8f570 == -1) {
      FUN_145e408f4(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"YVYUConvertUB";
      local_78 = L"FYVYUConvertUB";
      local_50 = 0x60;
      local_58 = 0x332;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca8f4f0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f7f4a);
      _Init_thread_footer(&DAT_14ca8f570);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca8f4f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e408f4 FUN_145e408f4 body=226 status=ok
// SIG undefined FUN_145e408f4(void)

longlong * FUN_145e408f4(longlong *param_1)

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
  pcVar13 = FUN_14631d80c;
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



// FUNCTION 145e409dc FUN_145e409dc body=138 status=ok
// SIG undefined FUN_145e409dc(void)

code * FUN_145e409dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Width";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000335;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631d894;
}



// FUNCTION 145e40a66 FUN_145e40a66 body=138 status=ok
// SIG undefined FUN_145e40a66(void)

code * FUN_145e40a66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SamplerB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000337;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147425630;
}



// FUNCTION 145e40af0 FUN_145e40af0 body=278 status=ok
// SIG undefined FUN_145e40af0(void)

undefined * FUN_145e40af0(void)

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
              0x110) < DAT_14cade2a0) {
    FUN_144b3d300(&DAT_14cade2a0);
    if (DAT_14cade2a0 == -1) {
      FUN_145e40c08(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"GeomCacheMVF";
      local_78 = L"FGeometryCacheManualVertexFetchUniformBufferParameters";
      local_50 = 0x30;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cade220,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14350e8bf);
      _Init_thread_footer(&DAT_14cade2a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cade220;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e40c08 FUN_145e40c08 body=226 status=ok
// SIG undefined FUN_145e40c08(void)

longlong * FUN_145e40c08(longlong *param_1)

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
  pcVar13 = FUN_1463d0bfe;
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



// FUNCTION 145e40cf0 FUN_145e40cf0 body=138 status=ok
// SIG undefined FUN_145e40cf0(void)

code * FUN_145e40cf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TangentZ";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<half4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ade0e6;
}



// FUNCTION 145e40d7a FUN_145e40d7a body=138 status=ok
// SIG undefined FUN_145e40d7a(void)

code * FUN_145e40d7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Color";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e40cf0;
}



// FUNCTION 145e40e04 FUN_145e40e04 body=278 status=ok
// SIG undefined FUN_145e40e04(void)

undefined * FUN_145e40e04(void)

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
              0x110) < DAT_14caf1838) {
    FUN_144b3d300(&DAT_14caf1838);
    if (DAT_14caf1838 == -1) {
      FUN_145e40f1c(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"MeshParticleVF";
      local_78 = L"FMeshParticleUniformParameters";
      local_50 = 0x40;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf17b8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14358472b);
      _Init_thread_footer(&DAT_14caf1838);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf17b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e40f1c FUN_145e40f1c body=226 status=ok
// SIG undefined FUN_145e40f1c(void)

longlong * FUN_145e40f1c(longlong *param_1)

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
  pcVar13 = FUN_1463ec210;
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



// FUNCTION 145e41004 FUN_145e41004 body=138 status=ok
// SIG undefined FUN_145e41004(void)

code * FUN_145e41004(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TexCoordWeightA";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147bcddae;
}



// FUNCTION 145e4108e FUN_145e4108e body=138 status=ok
// SIG undefined FUN_145e4108e(void)

code * FUN_145e4108e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeltaSeconds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463ec298;
}



// FUNCTION 145e41118 FUN_145e41118 body=278 status=ok
// SIG undefined FUN_145e41118(void)

undefined * FUN_145e41118(void)

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
              0x110) < DAT_14caf3448) {
    FUN_144b3d300(&DAT_14caf3448);
    if (DAT_14caf3448 == -1) {
      FUN_145e41230(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"BeamTrailVF";
      local_78 = L"FParticleBeamTrailUniformParameters";
      local_50 = 0x50;
      local_58 = 0x14;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf33c8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435bd777);
      _Init_thread_footer(&DAT_14caf3448);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf33c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e41230 FUN_145e41230 body=226 status=ok
// SIG undefined FUN_145e41230(void)

longlong * FUN_145e41230(longlong *param_1)

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
  pcVar13 = FUN_1463ef024;
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



// FUNCTION 145e41318 FUN_145e41318 body=138 status=ok
// SIG undefined FUN_145e41318(void)

code * FUN_145e41318(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CameraUp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463ef0ac;
}



// FUNCTION 145e413a2 FUN_145e413a2 body=138 status=ok
// SIG undefined FUN_145e413a2(void)

code * FUN_145e413a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseLocalSpace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c0a8c4;
}



// FUNCTION 145e4142c FUN_145e4142c body=278 status=ok
// SIG undefined FUN_145e4142c(void)

undefined * FUN_145e4142c(void)

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
              0x110) < DAT_14caf5bf0) {
    FUN_144b3d300(&DAT_14caf5bf0);
    if (DAT_14caf5bf0 == -1) {
      FUN_145e41544(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ParticleKeyGen";
      local_78 = L"FParticleKeyGenParameters";
      local_50 = 0x30;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf5b70,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435eabc2);
      _Init_thread_footer(&DAT_14caf5bf0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf5b70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e41544 FUN_145e41544 body=226 status=ok
// SIG undefined FUN_145e41544(void)

longlong * FUN_145e41544(longlong *param_1)

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
  pcVar13 = FUN_1463f132a;
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



// FUNCTION 145e4162c FUN_145e4162c body=138 status=ok
// SIG undefined FUN_145e4162c(void)

code * FUN_145e4162c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EmitterKey";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e416b6;
}



// FUNCTION 145e416b6 FUN_145e416b6 body=138 status=ok
// SIG undefined FUN_145e416b6(void)

code * FUN_145e416b6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c41448;
}



// FUNCTION 145e41740 FUN_145e41740 body=205 status=ok
// SIG undefined FUN_145e41740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e41740(void)

{
  if ((DAT_14c9eea0f & 2) == 0) {
    DAT_14c9eea0f = DAT_14c9eea0f | 2;
    _DAT_14c9ee9b0 = L"FClearRadianceCacheUpdateResourcesCS";
    _DAT_14c9ee9c8 = FUN_146826540;
    _DAT_14c9ee9d0 = FUN_146825d77;
    _DAT_14c9ee9d8 = FUN_146825fd6;
    _DAT_14c9ee9e0 = FUN_1407e02ea;
    _DAT_14c9ee9e8 = FUN_146826273;
    _DAT_14c9ee9c0 = FUN_1471df54c;
    _DAT_14c9eea00 = 0xffffffff000000e0;
    _DAT_14c9eea08 = 8;
    DAT_14c9eea0c = 0;
    _DAT_14c9ee9f0 = &LAB_1471df576;
    FUN_145e4180e();
    FUN_1407e00cc(&DAT_14c9ee9a8);
    return;
  }
  return;
}



// FUNCTION 145e4180e FUN_145e4180e body=123 status=ok
// SIG undefined FUN_145e4180e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4180e(void)

{
  _DAT_14c9f1be0 = L"BASE";
  DAT_14c9f1c0a = 4;
  _DAT_14c9f1be8 = FUN_140b35ae4();
  _DAT_14c9f1bf0 = DAT_14c9ee9b8;
  _DAT_14c9f1bf8 = &LAB_14682652b;
  DAT_14c9ee9b8 = &DAT_14c9f1be0;
  DAT_14c9eea0d = DAT_14c9eea0d + '\x01';
  _DAT_14c9f1c00 = 0x100000000;
  if (*(char *)(_DAT_14c9f1be8 + 100) != '\0') {
    DAT_14c9eea0e = DAT_14c9eea0e + '\x01';
  }
  return;
}



// FUNCTION 145e4188a FUN_145e4188a body=226 status=ok
// SIG undefined FUN_145e4188a(void)

longlong * FUN_145e4188a(longlong *param_1)

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
  pcVar13 = FUN_1462d91ca;
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



// FUNCTION 145e41972 FUN_145e41972 body=130 status=ok
// SIG undefined FUN_145e41972(void)

undefined1 * FUN_145e41972(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbeTraceAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x172;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4196e;
}



// FUNCTION 145e419f4 FUN_145e419f4 body=138 status=ok
// SIG undefined FUN_145e419f4(void)

code * FUN_145e419f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPriorityHistogram";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000173;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e41972;
}



// FUNCTION 145e41a7e FUN_145e41a7e body=205 status=ok
// SIG undefined FUN_145e41a7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e41a7e(void)

{
  if ((DAT_14c9f4cc7 & 2) == 0) {
    DAT_14c9f4cc7 = DAT_14c9f4cc7 | 2;
    _DAT_14c9f4c68 = L"FSetupReflectionCompactedTracesIndirectArgsCS";
    _DAT_14c9f4c80 = FUN_146826540;
    _DAT_14c9f4c88 = FUN_146825d77;
    _DAT_14c9f4c90 = FUN_146825fd6;
    _DAT_14c9f4c98 = FUN_1407e02ea;
    _DAT_14c9f4ca0 = FUN_146826273;
    _DAT_14c9f4c78 = FUN_1471efd18;
    _DAT_14c9f4cb8 = 0xffffffff000000e0;
    _DAT_14c9f4cc0 = 8;
    DAT_14c9f4cc4 = 0;
    _DAT_14c9f4ca8 = &LAB_1471efd42;
    FUN_145e41b4c();
    FUN_1407e00cc(&DAT_14c9f4c60);
    return;
  }
  return;
}



// FUNCTION 145e41b4c FUN_145e41b4c body=123 status=ok
// SIG undefined FUN_145e41b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e41b4c(void)

{
  _DAT_14c9f7f08 = L"BASE";
  DAT_14c9f7f32 = 4;
  _DAT_14c9f7f10 = FUN_140b35ae4();
  _DAT_14c9f7f18 = DAT_14c9f4c70;
  _DAT_14c9f7f20 = &LAB_14682652b;
  DAT_14c9f4c70 = &DAT_14c9f7f08;
  DAT_14c9f4cc5 = DAT_14c9f4cc5 + '\x01';
  _DAT_14c9f7f28 = 0x100000000;
  if (*(char *)(_DAT_14c9f7f10 + 100) != '\0') {
    DAT_14c9f4cc6 = DAT_14c9f4cc6 + '\x01';
  }
  return;
}



// FUNCTION 145e41bc8 FUN_145e41bc8 body=226 status=ok
// SIG undefined FUN_145e41bc8(void)

longlong * FUN_145e41bc8(longlong *param_1)

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
  pcVar13 = FUN_1462df540;
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



// FUNCTION 145e41cb0 FUN_145e41cb0 body=130 status=ok
// SIG undefined FUN_145e41cb0(void)

undefined1 * FUN_145e41cb0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWReflectionCompactTracingIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e41cac;
}



// FUNCTION 145e41d32 FUN_145e41d32 body=138 status=ok
// SIG undefined FUN_145e41d32(void)

code * FUN_145e41d32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWReflectionCompactRayTraceDispatchIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e41cb0;
}



// FUNCTION 145e41dbc FUN_145e41dbc body=205 status=ok
// SIG undefined FUN_145e41dbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e41dbc(void)

{
  if ((DAT_14c9f894f & 2) == 0) {
    DAT_14c9f894f = DAT_14c9f894f | 2;
    _DAT_14c9f88f0 = L"FSpliceCardPagesIntoTilesCS";
    _DAT_14c9f8908 = FUN_146826540;
    _DAT_14c9f8910 = FUN_146825d77;
    _DAT_14c9f8918 = FUN_146825fd6;
    _DAT_14c9f8920 = FUN_1407e02ea;
    _DAT_14c9f8928 = FUN_146826273;
    _DAT_14c9f8900 = FUN_147204906;
    _DAT_14c9f8940 = 0xffffffff000000e0;
    _DAT_14c9f8948 = 8;
    DAT_14c9f894c = 0;
    _DAT_14c9f8930 = &LAB_147204930;
    FUN_145e41e8a();
    FUN_1407e00cc(&DAT_14c9f88e8);
    return;
  }
  return;
}



// FUNCTION 145e41e8a FUN_145e41e8a body=123 status=ok
// SIG undefined FUN_145e41e8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e41e8a(void)

{
  _DAT_14c9ffb28 = L"BASE";
  DAT_14c9ffb52 = 4;
  _DAT_14c9ffb30 = FUN_140b35ae4();
  _DAT_14c9ffb38 = DAT_14c9f88f8;
  _DAT_14c9ffb40 = &LAB_14682652b;
  DAT_14c9f88f8 = &DAT_14c9ffb28;
  DAT_14c9f894d = DAT_14c9f894d + '\x01';
  _DAT_14c9ffb48 = 0x100000000;
  if (*(char *)(_DAT_14c9ffb30 + 100) != '\0') {
    DAT_14c9f894e = DAT_14c9f894e + '\x01';
  }
  return;
}



// FUNCTION 145e41f06 FUN_145e41f06 body=226 status=ok
// SIG undefined FUN_145e41f06(void)

longlong * FUN_145e41f06(longlong *param_1)

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
  pcVar13 = FUN_1462e1938;
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



// FUNCTION 145e41fee FUN_145e41fee body=132 status=ok
// SIG undefined FUN_145e41fee(void)

undefined1 * FUN_145e41fee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgBuffer";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x105;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e41fea;
}



// FUNCTION 145e42072 FUN_145e42072 body=136 status=ok
// SIG undefined FUN_145e42072(void)

code * FUN_145e42072(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000010a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147209a14;
}



// FUNCTION 145e420fa FUN_145e420fa body=205 status=ok
// SIG undefined FUN_145e420fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e420fa(void)

{
  if ((DAT_14c9fb647 & 2) == 0) {
    DAT_14c9fb647 = DAT_14c9fb647 | 2;
    _DAT_14c9fb5e8 = L"FSetCardPageIndexIndirectArgsCS";
    _DAT_14c9fb600 = FUN_146826540;
    _DAT_14c9fb608 = FUN_146825d77;
    _DAT_14c9fb610 = FUN_146825fd6;
    _DAT_14c9fb618 = FUN_1407e02ea;
    _DAT_14c9fb620 = FUN_146826273;
    _DAT_14c9fb5f8 = FUN_147207f10;
    _DAT_14c9fb638 = 0xffffffff000000e0;
    _DAT_14c9fb640 = 8;
    DAT_14c9fb644 = 0;
    _DAT_14c9fb628 = &LAB_147207f3a;
    FUN_145e421c8();
    FUN_1407e00cc(&DAT_14c9fb5e0);
    return;
  }
  return;
}



// FUNCTION 145e421c8 FUN_145e421c8 body=123 status=ok
// SIG undefined FUN_145e421c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e421c8(void)

{
  _DAT_14ca00238 = L"BASE";
  DAT_14ca00262 = 4;
  _DAT_14ca00240 = FUN_140b35ae4();
  _DAT_14ca00248 = DAT_14c9fb5f0;
  _DAT_14ca00250 = &LAB_14682652b;
  DAT_14c9fb5f0 = &DAT_14ca00238;
  DAT_14c9fb645 = DAT_14c9fb645 + '\x01';
  _DAT_14ca00258 = 0x100000000;
  if (*(char *)(_DAT_14ca00240 + 100) != '\0') {
    DAT_14c9fb646 = DAT_14c9fb646 + '\x01';
  }
  return;
}



// FUNCTION 145e42244 FUN_145e42244 body=226 status=ok
// SIG undefined FUN_145e42244(void)

longlong * FUN_145e42244(longlong *param_1)

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
  pcVar13 = FUN_1462e4d8c;
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



// FUNCTION 145e4232c FUN_145e4232c body=132 status=ok
// SIG undefined FUN_145e4232c(void)

undefined1 * FUN_145e4232c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDirectLightingDrawCardPageIndicesIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e42328;
}



// FUNCTION 145e423b0 FUN_145e423b0 body=136 status=ok
// SIG undefined FUN_145e423b0(void)

code * FUN_145e423b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectLightingDrawCardPageIndicesIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147215b0e;
}



// FUNCTION 145e42438 FUN_145e42438 body=205 status=ok
// SIG undefined FUN_145e42438(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e42438(void)

{
  if ((DAT_14ca15407 & 2) == 0) {
    DAT_14ca15407 = DAT_14ca15407 | 2;
    _DAT_14ca153a8 = L"FInitArgs_CS";
    _DAT_14ca153c0 = FUN_146826540;
    _DAT_14ca153c8 = FUN_146825d77;
    _DAT_14ca153d0 = FUN_146825fd6;
    _DAT_14ca153d8 = FUN_1407e02ea;
    _DAT_14ca153e0 = FUN_146826273;
    _DAT_14ca153b8 = FUN_1472529d8;
    _DAT_14ca153f8 = 0xffffffff000000e0;
    _DAT_14ca15400 = 8;
    DAT_14ca15404 = 0;
    _DAT_14ca153e8 = &LAB_147252a04;
    FUN_145e42506();
    FUN_1407e00cc(&DAT_14ca153a0);
    return;
  }
  return;
}



// FUNCTION 145e42506 FUN_145e42506 body=123 status=ok
// SIG undefined FUN_145e42506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e42506(void)

{
  _DAT_14ca191f0 = L"BASE";
  DAT_14ca1921a = 4;
  _DAT_14ca191f8 = FUN_140b35ae4();
  _DAT_14ca19200 = DAT_14ca153b0;
  _DAT_14ca19208 = &LAB_14682652b;
  DAT_14ca153b0 = &DAT_14ca191f0;
  DAT_14ca15405 = DAT_14ca15405 + '\x01';
  _DAT_14ca19210 = 0x100000000;
  if (*(char *)(_DAT_14ca191f8 + 100) != '\0') {
    DAT_14ca15406 = DAT_14ca15406 + '\x01';
  }
  return;
}



// FUNCTION 145e42582 FUN_145e42582 body=226 status=ok
// SIG undefined FUN_145e42582(void)

longlong * FUN_145e42582(longlong *param_1)

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
  pcVar13 = FUN_1462f1818;
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



// FUNCTION 145e4266a FUN_145e4266a body=132 status=ok
// SIG undefined FUN_145e4266a(void)

undefined1 * FUN_145e4266a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x475;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e42666;
}



// FUNCTION 145e426ee FUN_145e426ee body=136 status=ok
// SIG undefined FUN_145e426ee(void)

code * FUN_145e426ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutQueueState";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FQueueState >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000477;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4266a;
}



// FUNCTION 145e42776 FUN_145e42776 body=205 status=ok
// SIG undefined FUN_145e42776(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e42776(void)

{
  if ((DAT_14ca5c4e7 & 2) == 0) {
    DAT_14ca5c4e7 = DAT_14ca5c4e7 | 2;
    _DAT_14ca5c488 = L"FWaterRefractionCopyPS";
    _DAT_14ca5c4a0 = FUN_146826540;
    _DAT_14ca5c4a8 = FUN_146825d77;
    _DAT_14ca5c4b0 = FUN_146825fd6;
    _DAT_14ca5c4b8 = FUN_1407e02ea;
    _DAT_14ca5c4c0 = FUN_146826273;
    _DAT_14ca5c498 = FUN_147315870;
    _DAT_14ca5c4d8 = 0xffffffff000000e0;
    _DAT_14ca5c4e0 = 8;
    DAT_14ca5c4e4 = 0;
    _DAT_14ca5c4c8 = &LAB_14731589a;
    FUN_145e42844();
    FUN_1407e00cc(&DAT_14ca5c480);
    return;
  }
  return;
}



// FUNCTION 145e42844 FUN_145e42844 body=123 status=ok
// SIG undefined FUN_145e42844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e42844(void)

{
  _DAT_14ca5f770 = L"BASE";
  DAT_14ca5f79a = 4;
  _DAT_14ca5f778 = FUN_140b35ae4();
  _DAT_14ca5f780 = DAT_14ca5c490;
  _DAT_14ca5f788 = &LAB_14682652b;
  DAT_14ca5c490 = &DAT_14ca5f770;
  DAT_14ca5c4e5 = DAT_14ca5c4e5 + '\x01';
  _DAT_14ca5f790 = 0x100000000;
  if (*(char *)(_DAT_14ca5f778 + 100) != '\0') {
    DAT_14ca5c4e6 = DAT_14ca5c4e6 + '\x01';
  }
  return;
}



// FUNCTION 145e428c0 FUN_145e428c0 body=226 status=ok
// SIG undefined FUN_145e428c0(void)

longlong * FUN_145e428c0(longlong *param_1)

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
  pcVar13 = FUN_14630b118;
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



// FUNCTION 145e429a8 FUN_145e429a8 body=132 status=ok
// SIG undefined FUN_145e429a8(void)

undefined1 * FUN_145e429a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorCopyDownsampleTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e429a4;
}



// FUNCTION 145e42a2c FUN_145e42a2c body=136 status=ok
// SIG undefined FUN_145e42a2c(void)

code * FUN_145e42a2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorCopyDownsampleSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e429a8;
}



// FUNCTION 145e42ab4 FUN_145e42ab4 body=462 status=ok
// SIG undefined FUN_145e42ab4(void)

byte FUN_145e42ab4(longlong param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  
  lVar5 = FUN_1447b4020();
  if (lVar5 == 0) {
    bVar12 = false;
  }
  else {
    plVar6 = (longlong *)FUN_1447b4020(param_1);
    lVar5 = (**(code **)(*plVar6 + 0x68))(plVar6);
    bVar12 = lVar5 != 0;
  }
  cVar4 = FUN_1402bfec4(param_1,0);
  if ((((cVar4 == '\0') && ((*(byte *)(param_1 + 0xc0) & 1) != 0)) &&
      (bVar1 = *(byte *)(param_1 + 0xc5), (int)(uint)bVar1 < (int)param_2)) &&
     ((bVar2 = *(byte *)(param_1 + 0xc3), bVar1 < bVar2 && (*(byte *)(param_1 + 0xc6) == bVar1)))) {
    uVar11 = (uint)bVar2;
    if (param_2 < bVar2) {
      uVar11 = param_2;
    }
    *(char *)(param_1 + 0xc6) = (char)uVar11;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
    if (bVar12) {
      iVar3 = *(int *)(param_1 + 0x110);
      if ((longlong)iVar3 == 0) {
        lVar10 = 0;
      }
      else {
        lVar5 = *(longlong *)(param_1 + 0x108);
        lVar9 = 0;
        do {
          plVar6 = *(longlong **)(lVar5 + lVar9);
          if (plVar6 != (longlong *)0x0) {
            lVar10 = FUN_14066dd60();
            if (((*(int *)(lVar10 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                 lVar10 + 0x30)) &&
               (lVar10 = (**(code **)(*plVar6 + 0x2b8))(plVar6,param_1), lVar10 != 0)) break;
          }
          lVar9 = lVar9 + 8;
          lVar10 = 0;
        } while ((longlong)iVar3 * 8 != lVar9);
      }
      uVar7 = FUN_14001cc68(0x170,0x10);
      FUN_1412948cc(uVar7,param_1,param_3);
      uVar8 = FUN_14001cc68(0x128,0x10);
      FUN_145e42c82(uVar8,param_1);
      lVar9 = FUN_14001cc68(0x470,0x10);
      FUN_141294966(lVar9,param_1,uVar8,lVar10,uVar7);
      lVar5 = *(longlong *)(param_1 + 0x38);
      if (lVar5 != lVar9) {
        *(longlong *)(param_1 + 0x38) = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 100) = *(int *)(lVar9 + 100) + 1;
          UNLOCK();
        }
        if (lVar5 != 0) {
          FUN_14128f1bc();
        }
      }
      return *(byte *)(*(longlong *)(param_1 + 0x38) + 0x5c) ^ 1;
    }
  }
  return 0;
}



// FUNCTION 145e42c82 FUN_145e42c82 body=127 status=ok
// SIG undefined FUN_145e42c82(void)

undefined8 * FUN_145e42c82(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_14aac3580;
  param_1[1] = *(undefined8 *)(param_2 + 0xc0);
  *(uint *)(param_1 + 2) = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc5);
  iVar1 = (uint)*(byte *)(param_2 + 0xc3) - (uint)*(byte *)(param_2 + 0xc6);
  *(int *)((longlong)param_1 + 0x14) = iVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14aac6100;
  param_1[5] = &PTR_FUN_14aa6ec40;
  *(int *)(param_1 + 0x24) = iVar1;
  memset(param_1 + 6,0,0xf0);
  return param_1;
}



// FUNCTION 145e42d02 FUN_145e42d02 body=262 status=ok
// SIG undefined FUN_145e42d02(void)

void FUN_145e42d02(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    lVar3 = (longlong)
            *(int *)((longlong)plVar2 +
                    ((longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (lVar3 != -1) {
      lVar4 = *param_1;
      lVar3 = lVar3 * 0x10;
      local_40 = *(undefined8 *)(lVar4 + lVar3);
      local_48 = param_2;
      cVar1 = FUN_145b03d4c();
      if (cVar1 == '\0') {
        lVar4 = lVar4 + lVar3;
        do {
          if ((longlong)*(int *)(lVar4 + 8) == -1) goto LAB_145e42dfb;
          lVar3 = (longlong)*(int *)(lVar4 + 8) * 0x10;
          lVar4 = *param_1 + lVar3;
          local_40 = *(undefined8 *)(*param_1 + lVar3);
          local_48 = param_2;
          cVar1 = FUN_145b03d4c(&local_40,&local_48);
        } while (cVar1 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
LAB_145e42dfb:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e42e20 FUN_145e42e20 body=89 status=ok
// SIG undefined FUN_145e42e20(void)

void FUN_145e42e20(longlong *param_1,int param_2)

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
  FUN_145e42e7a();
  return;
}



// FUNCTION 145e42e7a FUN_145e42e7a body=116 status=ok
// SIG undefined FUN_145e42e7a(void)

void FUN_145e42e7a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 145e42eee FUN_145e42eee body=285 status=ok
// SIG undefined FUN_145e42eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e42eee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f39e8) {
    FUN_144b3d300(&DAT_14c9f39e8);
    if (DAT_14c9f39e8 == -1) {
      FUN_145e43156();
      FUN_145e4300c();
      FUN_140db5666(&DAT_14c9f3940,0,&DAT_14c9f38d8,
                    L"FLumenReflectionHardwareRayTracingIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenReflectionHardwareRayTracing.usf",
                    L"FLumenReflectionHardwareRayTracingIndirectArgsCS",5,1,FUN_1471ee1c2,
                    FUN_1471ee162,&LAB_1462db43e,&LAB_1471ee15e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9f6838);
      _DAT_14c9f3940 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3bc7c);
      _Init_thread_footer(&DAT_14c9f39e8);
    }
  }
  return &DAT_14c9f3940;
}



// FUNCTION 145e4300c FUN_145e4300c body=205 status=ok
// SIG undefined FUN_145e4300c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4300c(void)

{
  if ((DAT_14c9f393f & 2) == 0) {
    DAT_14c9f393f = DAT_14c9f393f | 2;
    _DAT_14c9f38e0 = L"FLumenReflectionHardwareRayTracingIndirectArgsCS";
    _DAT_14c9f38f8 = FUN_146826540;
    _DAT_14c9f3900 = FUN_146825d77;
    _DAT_14c9f3908 = FUN_146825fd6;
    _DAT_14c9f3910 = FUN_1407e02ea;
    _DAT_14c9f3918 = FUN_146826273;
    _DAT_14c9f38f0 = FUN_1471ee130;
    _DAT_14c9f3930 = 0xffffffff000000e0;
    _DAT_14c9f3938 = 8;
    DAT_14c9f393c = 0;
    _DAT_14c9f3920 = &LAB_1471ee15a;
    FUN_145e430da();
    FUN_1407e00cc(&DAT_14c9f38d8);
    return;
  }
  return;
}



// FUNCTION 145e430da FUN_145e430da body=123 status=ok
// SIG undefined FUN_145e430da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e430da(void)

{
  _DAT_14c9f7c98 = L"BASE";
  DAT_14c9f7cc2 = 4;
  _DAT_14c9f7ca0 = FUN_140b35ae4();
  _DAT_14c9f7ca8 = DAT_14c9f38e8;
  _DAT_14c9f7cb0 = &LAB_14682652b;
  DAT_14c9f38e8 = &DAT_14c9f7c98;
  DAT_14c9f393d = DAT_14c9f393d + '\x01';
  _DAT_14c9f7cb8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7ca0 + 100) != '\0') {
    DAT_14c9f393e = DAT_14c9f393e + '\x01';
  }
  return;
}



// FUNCTION 145e43156 FUN_145e43156 body=261 status=ok
// SIG undefined FUN_145e43156(void)

void FUN_145e43156(void)

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
              0x110) < DAT_14c9f68b8) {
    FUN_144b3d300(&DAT_14c9f68b8);
    if (DAT_14c9f68b8 == -1) {
      FUN_145e4325c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xf9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6838,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58753);
      _Init_thread_footer(&DAT_14c9f68b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4325c FUN_145e4325c body=226 status=ok
// SIG undefined FUN_145e4325c(void)

longlong * FUN_145e4325c(longlong *param_1)

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
  pcVar13 = FUN_1462dd9a4;
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



// FUNCTION 145e43344 FUN_145e43344 body=132 status=ok
// SIG undefined FUN_145e43344(void)

undefined1 * FUN_145e43344(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xfa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e43340;
}



// FUNCTION 145e433c8 FUN_145e433c8 body=138 status=ok
// SIG undefined FUN_145e433c8(void)

code * FUN_145e433c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWHardwareRayTracingIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e43344;
}



// FUNCTION 145e43452 FUN_145e43452 body=161 status=ok
// SIG undefined FUN_145e43452(void)

void FUN_145e43452(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
  FUN_145db65da(&local_48);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  plVar4 = *(longlong **)(param_1 + 0xf0);
  *(ulonglong *)(param_1 + 0xe8) = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(param_1 + 0xf0) = CONCAT44(uStack_3c,uStack_40);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = SUB84(plVar4,0);
  uStack_30._4_4_ = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  local_38 = uVar3;
  uStack_30 = plVar4;
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000145e434e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e434fe FUN_145e434fe body=380 status=ok
// SIG undefined FUN_145e434fe(void)

void FUN_145e434fe(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_LAB_14a598b90;
  cVar5 = FUN_145e436a4();
  if (cVar5 != '\0') {
    FUN_1446f470e(&local_30,L"MediaModule",1);
    plVar7 = (longlong *)FUN_1447c1074(local_30);
    if (plVar7 != (longlong *)0x0) {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0xa8))(plVar7);
      plStack_40 = (longlong *)param_1[2];
      if (plStack_40 == (longlong *)0x0) {
LAB_145e435c4:
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        bVar8 = true;
      }
      else {
        iVar6 = (int)plStack_40[1];
        do {
          if (iVar6 == 0) goto LAB_145e435c4;
          LOCK();
          iVar4 = (int)plStack_40[1];
          bVar8 = iVar6 == iVar4;
          if (bVar8) {
            *(int *)(plStack_40 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar8);
        local_48 = param_1[1];
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
        bVar8 = false;
      }
      plVar3 = plStack_40;
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_48);
      plVar7 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_40 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (!bVar8) {
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  FUN_145e4367b(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)param_1[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e4367b FUN_145e4367b body=40 status=ok
// SIG undefined FUN_145e4367b(void)

void FUN_145e4367b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1478176a0(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 145e436a4 FUN_145e436a4 body=195 status=ok
// SIG undefined FUN_145e436a4(void)

ulonglong FUN_145e436a4(longlong param_1)

{
  void *_Dst;
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *unaff_RBX;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar4 = *(int *)(param_1 + 0x20);
  if (0 < iVar4) {
    unaff_RBX = (longlong *)(param_1 + 0x18);
    lVar6 = 0x10;
    uVar5 = 0;
    do {
      if (*(longlong **)(*unaff_RBX + lVar6) != (longlong *)0x0) {
        cVar1 = (**(code **)(**(longlong **)(*unaff_RBX + lVar6) + 0x18))();
        if (cVar1 == '\0') break;
        iVar4 = *(int *)(param_1 + 0x20);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x20;
    } while ((longlong)uVar5 < (longlong)iVar4);
    iVar4 = (int)uVar5;
    if (iVar4 != 0) {
      _Dst = *(void **)(param_1 + 0x18);
      FUN_145e4367b(_Dst,uVar5 & 0xffffffff);
      iVar2 = *(int *)(param_1 + 0x20) - iVar4;
      iVar3 = iVar4;
      if (iVar2 != 0) {
        memmove(_Dst,(void *)((uVar5 & 0xffffffff) * 0x20 + (longlong)_Dst),(longlong)iVar2 << 5);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      *(int *)(param_1 + 0x20) = iVar3 - iVar4;
      FUN_147819e12(unaff_RBX);
    }
  }
  iVar4 = *(int *)(param_1 + 0x20);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar4 != 0) & 0xffffffff;
}



// FUNCTION 145e43768 FUN_145e43768 body=131 status=ok
// SIG undefined FUN_145e43768(void)

void FUN_145e43768(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_1412f7df2(param_1 + 0x70);
  if (((*(byte *)(param_1 + 0x30) & 2) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x428), plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_1403c7982();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1403c7982();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_145e437ec(uVar1,param_1 + 0x4d0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e437ec FUN_145e437ec body=155 status=ok
// SIG undefined FUN_145e437ec(void)

void FUN_145e437ec(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x28);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x28);
      if (*(char *)(lVar2 + 0x178) == '\x03') {
        cVar1 = FUN_14486eb0e(param_1,param_2);
        if (cVar1 != '\0') {
          if (((int)(uint)*(byte *)((longlong)param_2 + 0x1c) < *(int *)(param_1 + 0x20)) &&
             (*(longlong *)
               (*(longlong *)(param_1 + 0x18) +
               (ulonglong)*(byte *)((longlong)param_2 + 0x1c) * 0x10) != 0)) {
            FUN_141571a18();
            FUN_145e43888(*(undefined8 *)
                           (*(longlong *)(param_1 + 0x18) +
                           (ulonglong)*(byte *)((longlong)param_2 + 0x1c) * 0x10));
          }
          *param_2 = 0;
          param_2[1] = 0;
          *(undefined1 *)((longlong)param_2 + 0x1c) = 0xff;
          *(undefined4 *)(param_2 + 3) = 0;
          param_2[2] = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 145e43888 FUN_145e43888 body=8 status=ok
// SIG undefined FUN_145e43888(void)

void FUN_145e43888(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 145e43890 FUN_145e43890 body=292 status=ok
// SIG undefined FUN_145e43890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e43890(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca26020) {
    FUN_144b3d300(&DAT_14ca26020);
    if (DAT_14ca26020 == -1) {
      FUN_145e43afe();
      FUN_145e439b4();
      FUN_140db5666(&DAT_14ca25f78,0,&DAT_14ca25f10,L"FMobileAmbientOcclusionPS",
                    L"/Engine/Private/PostProcessAmbientOcclusionMobile.usf",L"MainPS",3,10,
                    FUN_14728a69e,FUN_14728a63e,&LAB_14728a602,&LAB_14728a5fe,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca284d0);
      _DAT_14ca25f78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb3627);
      _Init_thread_footer(&DAT_14ca26020);
    }
  }
  return &DAT_14ca25f78;
}



// FUNCTION 145e439b4 FUN_145e439b4 body=205 status=ok
// SIG undefined FUN_145e439b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e439b4(void)

{
  if ((DAT_14ca25f77 & 2) == 0) {
    DAT_14ca25f77 = DAT_14ca25f77 | 2;
    _DAT_14ca25f18 = L"FMobileAmbientOcclusionPS";
    _DAT_14ca25f30 = FUN_146826540;
    _DAT_14ca25f38 = FUN_146825d77;
    _DAT_14ca25f40 = FUN_146825fd6;
    _DAT_14ca25f48 = FUN_1407e02ea;
    _DAT_14ca25f50 = FUN_146826273;
    _DAT_14ca25f28 = FUN_14728a5ce;
    _DAT_14ca25f68 = 0xffffffff000000e0;
    _DAT_14ca25f70 = 8;
    DAT_14ca25f74 = 0;
    _DAT_14ca25f58 = &LAB_14728a5fa;
    FUN_145e43a82();
    FUN_1407e00cc(&DAT_14ca25f10);
    return;
  }
  return;
}



// FUNCTION 145e43a82 FUN_145e43a82 body=123 status=ok
// SIG undefined FUN_145e43a82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e43a82(void)

{
  _DAT_14ca2bf40 = L"BASE";
  DAT_14ca2bf6a = 4;
  _DAT_14ca2bf48 = FUN_140b35ae4();
  _DAT_14ca2bf50 = DAT_14ca25f20;
  _DAT_14ca2bf58 = &LAB_14682652b;
  DAT_14ca25f20 = &DAT_14ca2bf40;
  DAT_14ca25f75 = DAT_14ca25f75 + '\x01';
  _DAT_14ca2bf60 = 0x100000000;
  if (*(char *)(_DAT_14ca2bf48 + 100) != '\0') {
    DAT_14ca25f76 = DAT_14ca25f76 + '\x01';
  }
  return;
}



// FUNCTION 145e43afe FUN_145e43afe body=261 status=ok
// SIG undefined FUN_145e43afe(void)

void FUN_145e43afe(void)

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
              0x110) < DAT_14ca28550) {
    FUN_144b3d300(&DAT_14ca28550);
    if (DAT_14ca28550 == -1) {
      FUN_145e43c04(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2a0;
      local_58 = 0x2d6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca284d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6bfc);
      _Init_thread_footer(&DAT_14ca28550);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e43c04 FUN_145e43c04 body=226 status=ok
// SIG undefined FUN_145e43c04(void)

longlong * FUN_145e43c04(longlong *param_1)

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
  pcVar13 = FUN_1462f8ed8;
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



// FUNCTION 145e43cec FUN_145e43cec body=140 status=ok
// SIG undefined FUN_145e43cec(void)

undefined1 * FUN_145e43cec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e43d78();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FMobileAmbientOcclusionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28558;
  return &LAB_145e43ce8;
}



// FUNCTION 145e43d78 FUN_145e43d78 body=261 status=ok
// SIG undefined FUN_145e43d78(void)

void FUN_145e43d78(void)

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
              0x110) < DAT_14ca285d8) {
    FUN_144b3d300(&DAT_14ca285d8);
    if (DAT_14ca285d8 == -1) {
      FUN_145e43e7e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMobileAmbientOcclusionParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x2b0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28558,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6c08);
      _Init_thread_footer(&DAT_14ca285d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


