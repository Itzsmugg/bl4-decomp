// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d3a13e FUN_145d3a13e body=74 status=ok
// SIG undefined FUN_145d3a13e(void)

void FUN_145d3a13e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5b71d0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3a188(param_1 + 0x20);
  FUN_145d3a216(param_1 + 1);
  return;
}



// FUNCTION 145d3a188 FUN_145d3a188 body=53 status=ok
// SIG undefined FUN_145d3a188(void)

void FUN_145d3a188(longlong *param_1)

{
  FUN_145d3a1be();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3a1be FUN_145d3a1be body=88 status=ok
// SIG undefined FUN_145d3a1be(void)

void FUN_145d3a1be(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d3a216 FUN_145d3a216 body=221 status=ok
// SIG undefined FUN_145d3a216(void)

void FUN_145d3a216(longlong *param_1)

{
  FUN_1447a1747(param_1[0x1c],(int)param_1[0x1d]);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[0x1a],(int)param_1[0x1b]);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3a2f4(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3a32a(param_1 + 6);
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3a2f4 FUN_145d3a2f4 body=53 status=ok
// SIG undefined FUN_145d3a2f4(void)

void FUN_145d3a2f4(longlong *param_1)

{
  FUN_145d3a360();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3a32a FUN_145d3a32a body=53 status=ok
// SIG undefined FUN_145d3a32a(void)

void FUN_145d3a32a(longlong *param_1)

{
  FUN_145d3a49a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3a360 FUN_145d3a360 body=313 status=ok
// SIG undefined FUN_145d3a360(void)

void FUN_145d3a360(longlong *param_1)

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
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x28 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3a49a FUN_145d3a49a body=313 status=ok
// SIG undefined FUN_145d3a49a(void)

void FUN_145d3a49a(longlong *param_1)

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
      FUN_1449db362(*local_68 + (longlong)iStack_4c * 0x28 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3a5d4 FUN_145d3a5d4 body=226 status=ok
// SIG undefined FUN_145d3a5d4(void)

longlong * FUN_145d3a5d4(longlong *param_1)

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
  pcVar13 = FUN_1463117c8;
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



// FUNCTION 145d3a6bc FUN_145d3a6bc body=138 status=ok
// SIG undefined FUN_145d3a6bc(void)

code * FUN_145d3a6bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClearValue";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000004d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3a746;
}



// FUNCTION 145d3a746 FUN_145d3a746 body=146 status=ok
// SIG undefined FUN_145d3a746(void)

code * FUN_145d3a746(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3a7d8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMapPerPageShader";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVirtualShadowMapPerPageShader::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca67a08;
  return FUN_146311850;
}



// FUNCTION 145d3a7d8 FUN_145d3a7d8 body=261 status=ok
// SIG undefined FUN_145d3a7d8(void)

void FUN_145d3a7d8(void)

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
              0x110) < DAT_14ca67a88) {
    FUN_144b3d300(&DAT_14ca67a88);
    if (DAT_14ca67a88 == -1) {
      FUN_145d3a8de(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x433;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67a08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e5487);
      _Init_thread_footer(&DAT_14ca67a88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3a8de FUN_145d3a8de body=226 status=ok
// SIG undefined FUN_145d3a8de(void)

longlong * FUN_145d3a8de(longlong *param_1)

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
  pcVar13 = FUN_1463118dc;
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



// FUNCTION 145d3a9c2 FUN_145d3a9c2 body=130 status=ok
// SIG undefined FUN_145d3a9c2(void)

undefined1 * FUN_145d3a9c2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMapIds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x434;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14732f852;
}



// FUNCTION 145d3aa44 FUN_145d3aa44 body=138 status=ok
// SIG undefined FUN_145d3aa44(void)

code * FUN_145d3aa44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumVirtualShadowMapIds";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000436;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732f7c8;
}



// FUNCTION 145d3aace FUN_145d3aace body=138 status=ok
// SIG undefined FUN_145d3aace(void)

code * FUN_145d3aace(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PerPageDispatchDimX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000437;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3aa44;
}



// FUNCTION 145d3ab58 FUN_145d3ab58 body=317 status=ok
// SIG undefined FUN_145d3ab58(void)

void FUN_145d3ab58(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [43];
  undefined1 local_1d;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_1d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d3ac96(local_18,local_1c,local_1d);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3ac96 FUN_145d3ac96 body=99 status=ok
// SIG undefined FUN_145d3ac96(void)

void FUN_145d3ac96(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((param_1 != 0) && (plVar3 = *(longlong **)(param_1 + 0x6f10), plVar3 != (longlong *)0x0)) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong *)(param_1 + 0x6f08) != 0) {
      FUN_1458e9c68();
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
                    /* WARNING: Could not recover jumptable at 0x000145d3acf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d3acfa FUN_145d3acfa body=144 status=ok
// SIG undefined FUN_145d3acfa(void)

code * FUN_145d3acfa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3ad8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"FroxelBuilder";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"Froxel::FBuilderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145dc5166;
}



// FUNCTION 145d3ad8a FUN_145d3ad8a body=268 status=ok
// SIG undefined FUN_145d3ad8a(void)

undefined * FUN_145d3ad8a(void)

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
              0x110) < DAT_14ca4ca50) {
    FUN_144b3d300(&DAT_14ca4ca50);
    if (DAT_14ca4ca50 == -1) {
      FUN_145d3ae98(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FBuilderParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x25;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4c9d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143021d27);
      _Init_thread_footer(&DAT_14ca4ca50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca4c9d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3ae98 FUN_145d3ae98 body=226 status=ok
// SIG undefined FUN_145d3ae98(void)

longlong * FUN_145d3ae98(longlong *param_1)

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
  pcVar13 = FUN_1463068fc;
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



// FUNCTION 145d3af80 FUN_145d3af80 body=138 status=ok
// SIG undefined FUN_145d3af80(void)

undefined1 * FUN_145d3af80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3b00a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"FroxelParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSharedParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x26;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d3af7c;
}



// FUNCTION 145d3b00a FUN_145d3b00a body=268 status=ok
// SIG undefined FUN_145d3b00a(void)

undefined * FUN_145d3b00a(void)

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
              0x110) < DAT_14ca4cb08) {
    FUN_144b3d300(&DAT_14ca4cb08);
    if (DAT_14ca4cb08 == -1) {
      FUN_145d3b1a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FSharedParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x13;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4ca88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143021d33);
      _Init_thread_footer(&DAT_14ca4cb08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca4ca88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3b118 FUN_145d3b118 body=138 status=ok
// SIG undefined FUN_145d3b118(void)

code * FUN_145d3b118(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutFroxels";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer< FPackedFroxel >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3af80;
}



// FUNCTION 145d3b1a2 FUN_145d3b1a2 body=226 status=ok
// SIG undefined FUN_145d3b1a2(void)

longlong * FUN_145d3b1a2(longlong *param_1)

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
  pcVar13 = FUN_146306984;
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



// FUNCTION 145d3b286 FUN_145d3b286 body=132 status=ok
// SIG undefined FUN_145d3b286(void)

undefined1 * FUN_145d3b286(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelToViewScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472e4690;
}



// FUNCTION 145d3b30a FUN_145d3b30a body=136 status=ok
// SIG undefined FUN_145d3b30a(void)

code * FUN_145d3b30a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x440000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472e4240;
}



// FUNCTION 145d3b392 FUN_145d3b392 body=138 status=ok
// SIG undefined FUN_145d3b392(void)

code * FUN_145d3b392(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FroxelToClipScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3b286;
}



// FUNCTION 145d3b41c FUN_145d3b41c body=206 status=ok
// SIG undefined FUN_145d3b41c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d3b41c(void)

{
  if ((DAT_14cb2ecf7 & 2) == 0) {
    DAT_14cb2ecf7 = DAT_14cb2ecf7 | 2;
    _DAT_14cb2ec98 = L"FNiagaraRibbonSortPhase1CS";
    _DAT_14cb2ecb0 = FUN_146826540;
    _DAT_14cb2ecb8 = FUN_146825d77;
    _DAT_14cb2ecc0 = FUN_146825fd6;
    _DAT_14cb2ecc8 = FUN_1407e02ea;
    _DAT_14cb2ecd0 = FUN_146826273;
    _DAT_14cb2eca8 = FUN_14804d442;
    _DAT_14cb2ece8 = 0xffffffff000000e0;
    _DAT_14cb2ecf0 = 8;
    DAT_14cb2ecf4 = 0;
    _DAT_14cb2ecd8 = &LAB_14804d46c;
    FUN_145d3b4ea();
    FUN_1407e00cc(&DAT_14cb2ec90);
  }
  return &DAT_14cb2ec90;
}



// FUNCTION 145d3b4ea FUN_145d3b4ea body=123 status=ok
// SIG undefined FUN_145d3b4ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d3b4ea(void)

{
  _DAT_14cb355d0 = L"BASE";
  DAT_14cb355fa = 4;
  _DAT_14cb355d8 = FUN_140b35ae4();
  _DAT_14cb355e0 = DAT_14cb2eca0;
  _DAT_14cb355e8 = &LAB_14682652b;
  DAT_14cb2eca0 = &DAT_14cb355d0;
  DAT_14cb2ecf5 = DAT_14cb2ecf5 + '\x01';
  _DAT_14cb355f0 = 0x100000000;
  if (*(char *)(_DAT_14cb355d8 + 100) != '\0') {
    DAT_14cb2ecf6 = DAT_14cb2ecf6 + '\x01';
  }
  return;
}



// FUNCTION 145d3b566 FUN_145d3b566 body=226 status=ok
// SIG undefined FUN_145d3b566(void)

longlong * FUN_145d3b566(longlong *param_1)

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
  pcVar13 = FUN_146461b48;
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



// FUNCTION 145d3b64a FUN_145d3b64a body=136 status=ok
// SIG undefined FUN_145d3b64a(void)

undefined1 * FUN_145d3b64a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3b6d2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FRibbonComputeUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x56;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1480504d4;
}



// FUNCTION 145d3b6d2 FUN_145d3b6d2 body=265 status=ok
// SIG undefined FUN_145d3b6d2(void)

undefined * FUN_145d3b6d2(void)

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
              0x110) < DAT_14cb33bc0) {
    FUN_144b3d300(&DAT_14cb33bc0);
    if (DAT_14cb33bc0 == -1) {
      FUN_14153dd08(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRibbonComputeUniformParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0xd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33b40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb730);
      _Init_thread_footer(&DAT_14cb33bc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33b40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3b7dc FUN_145d3b7dc body=138 status=ok
// SIG undefined FUN_145d3b7dc(void)

code * FUN_145d3b7dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MergeSortSourceBlockSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805044a;
}



// FUNCTION 145d3b866 FUN_145d3b866 body=138 status=ok
// SIG undefined FUN_145d3b866(void)

code * FUN_145d3b866(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SortedIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3b64a;
}



// FUNCTION 145d3b8f0 FUN_145d3b8f0 body=138 status=ok
// SIG undefined FUN_145d3b8f0(void)

code * FUN_145d3b8f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148050b50;
}



// FUNCTION 145d3b97a FUN_145d3b97a body=138 status=ok
// SIG undefined FUN_145d3b97a(void)

code * FUN_145d3b97a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialParamValidMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148050928;
}



// FUNCTION 145d3ba04 FUN_145d3ba04 body=138 status=ok
// SIG undefined FUN_145d3ba04(void)

code * FUN_145d3ba04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"U1OverrideDataOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146461c58;
}



// FUNCTION 145d3ba8e FUN_145d3ba8e body=1215 status=ok
// SIG undefined FUN_145d3ba8e(void)

void FUN_145d3ba8e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x108);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x68);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x80);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x88);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x98);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xb0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xb8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 200);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 200) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xd0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xd8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xe0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xe8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xf8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x100);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xc0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0xa0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xa8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  plVar4 = *(longlong **)(param_1 + 0x118);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = 0;
    (**(code **)(*plVar4 + 0x38))();
  }
  FUN_145d3bf4d(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    FUN_145d3bfb8(param_1 + 0x128);
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x140);
  FUN_145d3bf7d(*(undefined8 *)(param_1 + 0x138),uVar5);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_145d3bfe8(param_1 + 0x138);
  }
  if (*(int *)(param_1 + 0x150) != 0) {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),0xff);
    memset(*(void **)(param_1 + 0x158),(int)uVar5,(ulonglong)(uint)(*(int *)(param_1 + 0x148) << 2))
    ;
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    memset(*(void **)(param_1 + 0x178),(int)CONCAT71((int7)(uVar5 >> 8),0xff),
           (ulonglong)(uint)(*(int *)(param_1 + 0x168) << 2));
  }
  FUN_14153ddec(&DAT_14ca9a3e8);
  *(undefined4 *)(param_1 + 0x120) = 5;
  return;
}



// FUNCTION 145d3bf4d FUN_145d3bf4d body=48 status=ok
// SIG undefined FUN_145d3bf4d(void)

void FUN_145d3bf4d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x38))();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d3bf7d FUN_145d3bf7d body=58 status=ok
// SIG undefined FUN_145d3bf7d(void)

void FUN_145d3bf7d(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x20);
    do {
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145d3bfb8 FUN_145d3bfb8 body=48 status=ok
// SIG undefined FUN_145d3bfb8(void)

void FUN_145d3bfb8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 145d3bfe8 FUN_145d3bfe8 body=48 status=ok
// SIG undefined FUN_145d3bfe8(void)

void FUN_145d3bfe8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 145d3c018 FUN_145d3c018 body=132 status=ok
// SIG undefined FUN_145d3c018(void)

void FUN_145d3c018(longlong param_1,int param_2)

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



// FUNCTION 145d3c09e FUN_145d3c09e body=151 status=ok
// SIG undefined FUN_145d3c09e(void)

void FUN_145d3c09e(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  lVar2 = thunk_FUN_1424da030(0x290);
  if (lVar2 != 0) {
    FUN_14153e030(lVar2,&local_1c);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x1b8);
  *(longlong *)(param_1 + 0x1b8) = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    lVar2 = *(longlong *)(param_1 + 0x1b8);
  }
  if (lVar2 != 0) {
    uVar3 = FUN_14153dfa0();
    FUN_14153dfe0(lVar2,uVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3c136 FUN_145d3c136 body=207 status=ok
// SIG undefined FUN_145d3c136(void)

undefined8 FUN_145d3c136(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149eae5b0;
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
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149eae540;
  local_28[3] = FUN_14282b840;
  FUN_145d3c206(param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3c206 FUN_145d3c206 body=233 status=ok
// SIG undefined FUN_145d3c206(void)

undefined8 * FUN_145d3c206(undefined8 *param_1,longlong *param_2)

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
      FUN_14474d06a(&DAT_14c868718,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c868720;
      lVar6 = (longlong)(int)DAT_14c868720;
      DAT_14c868720 = DAT_14c868720 + 1;
      if (DAT_14c868724 < DAT_14c868720) {
        FUN_1447a71f6(&DAT_14c868718,uVar3);
      }
      lVar2 = DAT_14c868718;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c868718 + lVar6) = 0;
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



// FUNCTION 145d3c300 FUN_145d3c300 body=144 status=ok
// SIG undefined FUN_145d3c300(void)

code * FUN_145d3c300(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3c390();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCompactedReflectionTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e0000001d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f7140;
  return FUN_1462df660;
}



// FUNCTION 145d3c390 FUN_145d3c390 body=261 status=ok
// SIG undefined FUN_145d3c390(void)

void FUN_145d3c390(void)

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
              0x110) < DAT_14c9f71c0) {
    FUN_144b3d300(&DAT_14c9f71c0);
    if (DAT_14c9f71c0 == -1) {
      FUN_145d3c496(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FCompactedReflectionTraceParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f7140,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d59621);
      _Init_thread_footer(&DAT_14c9f71c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3c496 FUN_145d3c496 body=226 status=ok
// SIG undefined FUN_145d3c496(void)

longlong * FUN_145d3c496(longlong *param_1)

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
  pcVar13 = FUN_1462df6f0;
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



// FUNCTION 145d3c57e FUN_145d3c57e body=138 status=ok
// SIG undefined FUN_145d3c57e(void)

code * FUN_145d3c57e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3c608;
}



// FUNCTION 145d3c608 FUN_145d3c608 body=138 status=ok
// SIG undefined FUN_145d3c608(void)

code * FUN_145d3c608(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f996c;
}



// FUNCTION 145d3c692 FUN_145d3c692 body=144 status=ok
// SIG undefined FUN_145d3c692(void)

code * FUN_145d3c692(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3c722();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TraceSetupParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenTranslucencyLightingVolumeTraceSetupParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x42000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca063c8;
  return FUN_145c4c768;
}



// FUNCTION 145d3c722 FUN_145d3c722 body=261 status=ok
// SIG undefined FUN_145d3c722(void)

void FUN_145d3c722(void)

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
              0x110) < DAT_14ca06448) {
    FUN_144b3d300(&DAT_14ca06448);
    if (DAT_14ca06448 == -1) {
      FUN_145d3c828(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenTranslucencyLightingVolumeTraceSetupParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x49;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca063c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd343b);
      _Init_thread_footer(&DAT_14ca06448);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3c828 FUN_145d3c828 body=226 status=ok
// SIG undefined FUN_145d3c828(void)

longlong * FUN_145d3c828(longlong *param_1)

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
  pcVar13 = FUN_1462e97b6;
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



// FUNCTION 145d3c910 FUN_145d3c910 body=138 status=ok
// SIG undefined FUN_145d3c910(void)

code * FUN_145d3c910(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722b3b0;
}



// FUNCTION 145d3c99a FUN_145d3c99a body=138 status=ok
// SIG undefined FUN_145d3c99a(void)

code * FUN_145d3c99a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelTraceStartDistanceScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3c910;
}



// FUNCTION 145d3ca24 FUN_145d3ca24 body=144 status=ok
// SIG undefined FUN_145d3ca24(void)

code * FUN_145d3ca24(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3cab4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeCommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVisualizeRadianceCacheCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca06f78;
  return FUN_145edc34c;
}



// FUNCTION 145d3cab4 FUN_145d3cab4 body=261 status=ok
// SIG undefined FUN_145d3cab4(void)

void FUN_145d3cab4(void)

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
              0x110) < DAT_14ca06ff8) {
    FUN_144b3d300(&DAT_14ca06ff8);
    if (DAT_14ca06ff8 == -1) {
      FUN_145d3cbba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVisualizeRadianceCacheCommonParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x36;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06f78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd40f3);
      _Init_thread_footer(&DAT_14ca06ff8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3cbba FUN_145d3cbba body=226 status=ok
// SIG undefined FUN_145d3cbba(void)

longlong * FUN_145d3cbba(longlong *param_1)

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
  pcVar13 = FUN_1462eae74;
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



// FUNCTION 145d3cca2 FUN_145d3cca2 body=138 status=ok
// SIG undefined FUN_145d3cca2(void)

undefined1 * FUN_145d3cca2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141364c62();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheInterpolationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x37;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d3cc9e;
}



// FUNCTION 145d3cd2c FUN_145d3cd2c body=138 status=ok
// SIG undefined FUN_145d3cd2c(void)

code * FUN_145d3cd2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClipmapCornerTWSAndCellSizeForVisualization";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3cca2;
}



// FUNCTION 145d3cdb6 FUN_145d3cdb6 body=40 status=ok
// SIG undefined FUN_145d3cdb6(void)

undefined8 FUN_145d3cdb6(undefined8 param_1,int param_2)

{
  FUN_145d3cdde();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3cdde FUN_145d3cdde body=112 status=ok
// SIG undefined FUN_145d3cdde(void)

void FUN_145d3cdde(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14abeddf0;
  param_1[5] = &PTR_FUN_14abee120;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14abe9730;
  param_1[5] = &PTR_LAB_14abe9a20;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d3ce4e FUN_145d3ce4e body=40 status=ok
// SIG undefined FUN_145d3ce4e(void)

undefined8 FUN_145d3ce4e(undefined8 param_1,int param_2)

{
  FUN_145d3ce76();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3ce76 FUN_145d3ce76 body=112 status=ok
// SIG undefined FUN_145d3ce76(void)

void FUN_145d3ce76(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aca7180;
  param_1[5] = &PTR_FUN_14aca7600;
  param_1[6] = &PTR_LAB_14aca7640;
  param_1[0x22] = &PTR_FUN_14aca7690;
  plVar3 = (longlong *)param_1[0x24];
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
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145d3cee6 FUN_145d3cee6 body=40 status=ok
// SIG undefined FUN_145d3cee6(void)

undefined8 FUN_145d3cee6(undefined8 param_1,int param_2)

{
  FUN_145d3cf0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3cf0e FUN_145d3cf0e body=112 status=ok
// SIG undefined FUN_145d3cf0e(void)

void FUN_145d3cf0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ad0b4f0;
  param_1[5] = &PTR_FUN_14ad0b790;
  param_1[6] = &PTR_FUN_14ad0b7b0;
  param_1[7] = &PTR_FUN_14ad0b7c0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d3cf7e FUN_145d3cf7e body=40 status=ok
// SIG undefined FUN_145d3cf7e(void)

undefined8 FUN_145d3cf7e(undefined8 param_1,int param_2)

{
  FUN_145d3cfa6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3cfa6 FUN_145d3cfa6 body=112 status=ok
// SIG undefined FUN_145d3cfa6(void)

void FUN_145d3cfa6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aefa530;
  param_1[5] = &PTR_FUN_14aefa7e0;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[7];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d3d016 FUN_145d3d016 body=87 status=ok
// SIG undefined FUN_145d3d016(void)

undefined8 * FUN_145d3d016(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b056150;
  param_1[5] = &PTR_LAB_14b056730;
  param_1[6] = &PTR_LAB_14b056770;
  FUN_145d3d06e(param_1 + 0x55);
  FUN_14006e79a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3d06e FUN_145d3d06e body=65 status=ok
// SIG undefined FUN_145d3d06e(void)

void FUN_145d3d06e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1449db362(param_1 + 0x40);
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3d0b0 FUN_145d3d0b0 body=40 status=ok
// SIG undefined FUN_145d3d0b0(void)

undefined8 FUN_145d3d0b0(undefined8 param_1,int param_2)

{
  FUN_145d3d0d8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3d0d8 FUN_145d3d0d8 body=112 status=ok
// SIG undefined FUN_145d3d0d8(void)

void FUN_145d3d0d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b529500;
  FUN_144a65a1e(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d3d148 FUN_145d3d148 body=38 status=ok
// SIG undefined FUN_145d3d148(void)

undefined8 FUN_145d3d148(undefined8 param_1,int param_2)

{
  FUN_145d3d16e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3d16e FUN_145d3d16e body=76 status=ok
// SIG undefined FUN_145d3d16e(void)

void FUN_145d3d16e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b692720;
  plVar3 = (longlong *)param_1[0x5e];
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
  FUN_141420c64(param_1);
  return;
}



// FUNCTION 145d3d1ba FUN_145d3d1ba body=38 status=ok
// SIG undefined FUN_145d3d1ba(void)

undefined8 FUN_145d3d1ba(undefined8 param_1,int param_2)

{
  FUN_145d3d1e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3d1e0 FUN_145d3d1e0 body=76 status=ok
// SIG undefined FUN_145d3d1e0(void)

void FUN_145d3d1e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b692c20;
  plVar3 = (longlong *)param_1[0x5e];
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
  FUN_141420c64(param_1);
  return;
}



// FUNCTION 145d3d23a FUN_145d3d23a body=40 status=ok
// SIG undefined FUN_145d3d23a(void)

undefined8 FUN_145d3d23a(undefined8 param_1,int param_2)

{
  FUN_14153e0e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3d262 FUN_145d3d262 body=39 status=ok
// SIG undefined FUN_145d3d262(void)

void FUN_145d3d262(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_145d3d28a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 145d3d28a FUN_145d3d28a body=84 status=ok
// SIG undefined FUN_145d3d28a(void)

undefined8 FUN_145d3d28a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140ade8e4();
  if (lVar1 != 0) {
    lVar2 = FUN_140ade7fe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      uVar3 = FUN_145d3d2de(lVar1,*(undefined4 *)(param_1 + 0xe0));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 145d3d2de FUN_145d3d2de body=29 status=ok
// SIG undefined FUN_145d3d2de(void)

undefined4 FUN_145d3d2de(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_140ade790();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 4);
  }
  return uVar2;
}



// FUNCTION 145d3d304 FUN_145d3d304 body=296 status=ok
// SIG undefined FUN_145d3d304(void)

undefined8 * FUN_145d3d304(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_140fa737e();
  *param_1 = &PTR_FUN_14b8370f0;
  param_1[6] = &PTR_FUN_14b8373b0;
  param_1[7] = &PTR_LAB_14b837440;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xee) = 0;
  *(undefined2 *)((longlong)param_1 + 0x101) = 0x101;
  param_1[0x21] = 0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x112) = 1;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x155) = 0;
  param_1[0x2c] = DAT_14c966e80;
  param_1[0x2d] = DAT_14c966e88;
  lVar2 = DAT_14c966e90;
  param_1[0x2e] = DAT_14c966e90;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x33) = 5;
  return param_1;
}



// FUNCTION 145d3d438 FUN_145d3d438 body=292 status=ok
// SIG undefined FUN_145d3d438(void)

undefined8 * FUN_145d3d438(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b85bae0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cbe5d28;
  local_58 = DAT_14cbe5d20;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 10,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a97f4(&local_48,&DAT_14cbe5d38);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5d60;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3d568 FUN_145d3d568 body=292 status=ok
// SIG undefined FUN_145d3d568(void)

undefined8 * FUN_145d3d568(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ecae36();
  *param_1 = &PTR_FUN_14b85bdc0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  local_50 = DAT_14cbe5d70;
  local_58 = DAT_14cbe5d68;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 10,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a97f4(&local_48,&DAT_14cbe5d80);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5da8;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3d68e FUN_145d3d68e body=165 status=ok
// SIG undefined FUN_145d3d68e(void)

void FUN_145d3d68e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_141356c7a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a7b4ca();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = &LAB_148e5641a;
      local_30 = 0;
      FUN_145d3d734(lVar1 + 0xed0,&local_28,param_1 + -0x30);
      *(undefined8 *)(param_1 + 0x18) = local_28;
      FUN_145d3d834(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3d734 FUN_145d3d734 body=254 status=ok
// SIG undefined FUN_145d3d734(void)

undefined8
FUN_145d3d734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  *local_48 = &PTR_LAB_149e020b0;
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
  *local_48 = &PTR_FUN_14b9b7710;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3d834 FUN_145d3d834 body=338 status=ok
// SIG undefined FUN_145d3d834(void)

void FUN_145d3d834(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_141356c7a();
  if (lVar5 != 0) {
    lVar6 = FUN_144a7b4ca();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_1449027d0(param_1 + -0x30,&local_40);
      piVar3 = *(int **)(local_40 + 0x80);
      AcquireSRWLockExclusive((PSRWLOCK)(piVar3 + 10));
      piVar3[8] = piVar3[8] + 1;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar7 = (int *)((longlong)local_38 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      if (*piVar3 != *(int *)(lVar5 + 0xe20)) {
        FUN_148e5fb30(piVar3 + 2,*(undefined4 *)(lVar5 + 0xe18));
        piVar3[6] = piVar3[6] + 1;
        if (0 < *(int *)(lVar5 + 0xe18)) {
          lVar6 = 0x18;
          lVar8 = 0;
          do {
            lVar4 = *(longlong *)(lVar5 + 0xe10);
            piVar3[6] = piVar3[6] + 1;
            iVar2 = *(int *)(lVar4 + lVar6);
            if (*(int *)(*(longlong *)(piVar3 + 2) + lVar6) != iVar2) {
              piVar7 = (int *)(*(longlong *)(piVar3 + 2) + lVar6);
              *piVar7 = iVar2;
              *(undefined8 *)(piVar7 + -6) = *(undefined8 *)(lVar4 + lVar6 + -0x18);
              FUN_144a787a6();
            }
            lVar8 = lVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (lVar8 < *(int *)(lVar5 + 0xe18));
        }
        *piVar3 = *(int *)(lVar5 + 0xe20);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(piVar3 + 10));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3d988 FUN_145d3d988 body=138 status=ok
// SIG undefined FUN_145d3d988(void)

undefined1 * FUN_145d3d988(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d3da12();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Pass";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairFollicleMaskParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cbfd1e8;
  return &LAB_145f94e24;
}



// FUNCTION 145d3da12 FUN_145d3da12 body=261 status=ok
// SIG undefined FUN_145d3da12(void)

void FUN_145d3da12(void)

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
              0x110) < DAT_14cbfd268) {
    FUN_144b3d300(&DAT_14cbfd268);
    if (DAT_14cbfd268 == -1) {
      FUN_145d3db18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FHairFollicleMaskParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x2cb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd1e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444499d5);
      _Init_thread_footer(&DAT_14cbfd268);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3db18 FUN_145d3db18 body=226 status=ok
// SIG undefined FUN_145d3db18(void)

longlong * FUN_145d3db18(longlong *param_1)

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
  pcVar13 = FUN_14667e030;
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



// FUNCTION 145d3dc00 FUN_145d3dc00 body=138 status=ok
// SIG undefined FUN_145d3dc00(void)

code * FUN_145d3dc00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RootUVsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490abf8a;
}



// FUNCTION 145d3dc8a FUN_145d3dc8a body=144 status=ok
// SIG undefined FUN_145d3dc8a(void)

code * FUN_145d3dc8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40000002d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d3dc00;
}



// FUNCTION 145d3dd1a FUN_145d3dd1a body=40 status=ok
// SIG undefined FUN_145d3dd1a(void)

undefined8 FUN_145d3dd1a(undefined8 param_1,int param_2)

{
  FUN_145d3dd42();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3dd42 FUN_145d3dd42 body=112 status=ok
// SIG undefined FUN_145d3dd42(void)

void FUN_145d3dd42(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14babc6e0;
  param_1[5] = &PTR_FUN_14babd0e0;
  param_1[6] = &PTR_LAB_14babd120;
  param_1[0x55] = &PTR_FUN_14babd170;
  param_1[0x56] = &PTR_FUN_14babd1f0;
  param_1[0x57] = &PTR_FUN_14babd200;
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 145d3ddba FUN_145d3ddba body=259 status=ok
// SIG undefined FUN_145d3ddba(void)

undefined8 * FUN_145d3ddba(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_14007ca06();
  FUN_145d3debe(param_1,uVar2);
  *param_1 = &PTR_FUN_14bd320f0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x10000ea60;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if ((*(uint *)(param_1 + 1) & 0x30) == 0) {
    plVar3 = (longlong *)FUN_1448c2e86();
    uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3);
    FUN_14950f21e(uVar2,local_20,param_1,&LAB_14950f314);
    uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
    FUN_14950f21e(uVar2,local_20,param_1,&LAB_14950f330);
    iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3,DAT_14cc0b540);
    if (0 < iVar1) {
      lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,DAT_14cc0b540,0);
      param_1[7] = lVar4 + -8;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3debe FUN_145d3debe body=36 status=ok
// SIG undefined FUN_145d3debe(void)

undefined8 * FUN_145d3debe(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a4568e0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 145d3deee FUN_145d3deee body=140 status=ok
// SIG undefined FUN_145d3deee(void)

undefined8 * FUN_145d3deee(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(&local_28,L"Sprite",1);
  FUN_140486538(param_2,local_28);
  FUN_14048646a(param_2 + 0x20,local_28,0,0);
  FUN_1405ba846(param_1,param_2);
  *param_1 = &PTR_FUN_14be8e750;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3df7c FUN_145d3df7c body=45 status=ok
// SIG undefined FUN_145d3df7c(void)

longlong FUN_145d3df7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145d3dfaa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3dfaa FUN_145d3dfaa body=107 status=ok
// SIG undefined FUN_145d3dfaa(void)

void FUN_145d3dfaa(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14befa9c0;
  param_1[1] = &PTR_FUN_14befa9f0;
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[3];
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
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 145d3e016 FUN_145d3e016 body=40 status=ok
// SIG undefined FUN_145d3e016(void)

undefined8 FUN_145d3e016(undefined8 param_1,int param_2)

{
  FUN_145d3e03e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3e03e FUN_145d3e03e body=162 status=ok
// SIG undefined FUN_145d3e03e(void)

void FUN_145d3e03e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3c39c0;
  FUN_145d3e1a6(param_1 + 0x3f);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3e0e0(param_1 + 0x35);
  FUN_145d3e116(param_1 + 0x2e);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d3e0e0 FUN_145d3e0e0 body=53 status=ok
// SIG undefined FUN_145d3e0e0(void)

void FUN_145d3e0e0(longlong *param_1)

{
  FUN_145d3e5e2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3e116 FUN_145d3e116 body=53 status=ok
// SIG undefined FUN_145d3e116(void)

void FUN_145d3e116(longlong *param_1)

{
  FUN_145d3e14c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3e14c FUN_145d3e14c body=90 status=ok
// SIG undefined FUN_145d3e14c(void)

void FUN_145d3e14c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d3e1a6 FUN_145d3e1a6 body=131 status=ok
// SIG undefined FUN_145d3e1a6(void)

void FUN_145d3e1a6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_145d3e22a(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145d3e260(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145d3e296(param_1);
  return;
}



// FUNCTION 145d3e22a FUN_145d3e22a body=53 status=ok
// SIG undefined FUN_145d3e22a(void)

void FUN_145d3e22a(longlong *param_1)

{
  FUN_145d3e2cc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3e260 FUN_145d3e260 body=53 status=ok
// SIG undefined FUN_145d3e260(void)

void FUN_145d3e260(longlong *param_1)

{
  FUN_145d3e326();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3e296 FUN_145d3e296 body=53 status=ok
// SIG undefined FUN_145d3e296(void)

void FUN_145d3e296(longlong *param_1)

{
  FUN_145d3e484();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3e2cc FUN_145d3e2cc body=90 status=ok
// SIG undefined FUN_145d3e2cc(void)

void FUN_145d3e2cc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d3e326 FUN_145d3e326 body=348 status=ok
// SIG undefined FUN_145d3e326(void)

void FUN_145d3e326(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d3e484 FUN_145d3e484 body=348 status=ok
// SIG undefined FUN_145d3e484(void)

void FUN_145d3e484(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d3e5e2 FUN_145d3e5e2 body=348 status=ok
// SIG undefined FUN_145d3e5e2(void)

void FUN_145d3e5e2(longlong *param_1)

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
      if (*(longlong *)(*local_68 + 0x28 + (longlong)iStack_4c * 0x48) != 0) {
        FUN_1400020a8();
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d3e740 FUN_145d3e740 body=26 status=ok
// SIG undefined FUN_145d3e740(void)

void FUN_145d3e740(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_14153e274(param_1);
  return;
}



// FUNCTION 145d3e75a FUN_145d3e75a body=67 status=ok
// SIG undefined FUN_145d3e75a(void)

void FUN_145d3e75a(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145d3e8c6(param_1);
    FUN_14597c8fa(param_1,0);
    return;
  }
  FUN_14597c8fa(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1457ccc72(param_1);
  return;
}



// FUNCTION 145d3e79e FUN_145d3e79e body=109 status=ok
// SIG undefined FUN_145d3e79e(void)

longlong FUN_145d3e79e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)(param_1 + 0x24) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  FUN_1406fa324(param_1 + 0x30,param_2 + 0x30);
  FUN_1406fa324(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x54);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_145d3e80c(param_1 + 0x60,param_2 + 0x60);
  FUN_1406fa324(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 145d3e80c FUN_145d3e80c body=88 status=ok
// SIG undefined FUN_145d3e80c(void)

undefined8 * FUN_145d3e80c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145d3e864(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 145d3e864 FUN_145d3e864 body=98 status=ok
// SIG undefined FUN_145d3e864(void)

void FUN_145d3e864(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145d3e8c6 FUN_145d3e8c6 body=331 status=ok
// SIG undefined FUN_145d3e8c6(void)

void FUN_145d3e8c6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6f4 + (longlong)iVar4 * 0x6f8) * 4) =
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



// FUNCTION 145d3ea12 FUN_145d3ea12 body=144 status=ok
// SIG undefined FUN_145d3ea12(void)

code * FUN_145d3ea12(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3eaa2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TranslucencyLightingVolume";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FTranslucencyLightingVolumeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xbc00000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147137756;
}



// FUNCTION 145d3eaa2 FUN_145d3eaa2 body=268 status=ok
// SIG undefined FUN_145d3eaa2(void)

undefined * FUN_145d3eaa2(void)

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
              0x110) < DAT_14c9c0490) {
    FUN_144b3d300(&DAT_14c9c0490);
    if (DAT_14c9c0490 == -1) {
      FUN_145d3ebb0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FTranslucencyLightingVolumeParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0410,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8dfbb);
      _Init_thread_footer(&DAT_14c9c0490);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3ebb0 FUN_145d3ebb0 body=226 status=ok
// SIG undefined FUN_145d3ebb0(void)

longlong * FUN_145d3ebb0(longlong *param_1)

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
  pcVar13 = FUN_1462b6ed0;
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



// FUNCTION 145d3ec98 FUN_145d3ec98 body=132 status=ok
// SIG undefined FUN_145d3ec98(void)

undefined1 * FUN_145d3ec98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyLightingVolumeAmbientInner";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d3ec94;
}



// FUNCTION 145d3ed1c FUN_145d3ed1c body=138 status=ok
// SIG undefined FUN_145d3ed1c(void)

code * FUN_145d3ed1c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyLightingVolumeDirectionalInner";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471377e0;
}



// FUNCTION 145d3eda6 FUN_145d3eda6 body=144 status=ok
// SIG undefined FUN_145d3eda6(void)

code * FUN_145d3eda6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000390;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d61f2;
}



// FUNCTION 145d3ee36 FUN_145d3ee36 body=268 status=ok
// SIG undefined FUN_145d3ee36(void)

undefined * FUN_145d3ee36(void)

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
              0x110) < DAT_14c9ebc28) {
    FUN_144b3d300(&DAT_14c9ebc28);
    if (DAT_14c9ebc28 == -1) {
      FUN_145d3ef44(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVolumetricCloudShadowAOParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xb4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ebba8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf48b9);
      _Init_thread_footer(&DAT_14c9ebc28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ebba8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3ef44 FUN_145d3ef44 body=226 status=ok
// SIG undefined FUN_145d3ef44(void)

longlong * FUN_145d3ef44(longlong *param_1)

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
  pcVar13 = FUN_1462d6282;
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



// FUNCTION 145d3f02c FUN_145d3f02c body=132 status=ok
// SIG undefined FUN_145d3f02c(void)

undefined1 * FUN_145d3f02c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowMap0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d3f028;
}



// FUNCTION 145d3f0b0 FUN_145d3f0b0 body=138 status=ok
// SIG undefined FUN_145d3f0b0(void)

code * FUN_145d3f0b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowMap1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3f02c;
}



// FUNCTION 145d3f13a FUN_145d3f13a body=138 status=ok
// SIG undefined FUN_145d3f13a(void)

undefined1 * FUN_145d3f13a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3f1c4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureInput";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x25;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14728cf24;
}



// FUNCTION 145d3f1c4 FUN_145d3f1c4 body=268 status=ok
// SIG undefined FUN_145d3f1c4(void)

undefined * FUN_145d3f1c4(void)

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
              0x110) < DAT_14ca2c5d0) {
    FUN_144b3d300(&DAT_14ca2c5d0);
    if (DAT_14ca2c5d0 == -1) {
      FUN_145d3f2d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenPassTextureInput";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x166;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2c550,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6b9c);
      _Init_thread_footer(&DAT_14ca2c5d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca2c550;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3f2d2 FUN_145d3f2d2 body=226 status=ok
// SIG undefined FUN_145d3f2d2(void)

longlong * FUN_145d3f2d2(longlong *param_1)

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
  pcVar13 = FUN_1462f88fe;
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



// FUNCTION 145d3f3ba FUN_145d3f3ba body=138 status=ok
// SIG undefined FUN_145d3f3ba(void)

code * FUN_145d3f3ba(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000168;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3f444;
}



// FUNCTION 145d3f444 FUN_145d3f444 body=138 status=ok
// SIG undefined FUN_145d3f444(void)

undefined1 * FUN_145d3f444(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Viewport";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x167;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d3f3b6;
}



// FUNCTION 145d3f4ce FUN_145d3f4ce body=144 status=ok
// SIG undefined FUN_145d3f4ce(void)

code * FUN_145d3f4ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d3f55e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ModuleParam30";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FShapeLocationModule_ShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1500000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e343c6;
}



// FUNCTION 145d3f55e FUN_145d3f55e body=268 status=ok
// SIG undefined FUN_145d3f55e(void)

undefined * FUN_145d3f55e(void)

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
              0x110) < DAT_14cb34ed8) {
    FUN_144b3d300(&DAT_14cb34ed8);
    if (DAT_14cb34ed8 == -1) {
      FUN_145d3f66c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShapeLocationModule_ShaderParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x86;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb34e58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb93c);
      _Init_thread_footer(&DAT_14cb34ed8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb34e58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3f66c FUN_145d3f66c body=226 status=ok
// SIG undefined FUN_145d3f66c(void)

longlong * FUN_145d3f66c(longlong *param_1)

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
  pcVar13 = FUN_1464630ac;
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



// FUNCTION 145d3f754 FUN_145d3f754 body=132 status=ok
// SIG undefined FUN_145d3f754(void)

undefined1 * FUN_145d3f754(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShapeLocation_Mode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x87;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d3f750;
}



// FUNCTION 145d3f7d8 FUN_145d3f7d8 body=138 status=ok
// SIG undefined FUN_145d3f7d8(void)

code * FUN_145d3f7d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShapeLocation_Parameters0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d3f754;
}



// FUNCTION 145d3f862 FUN_145d3f862 body=40 status=ok
// SIG undefined FUN_145d3f862(void)

undefined8 FUN_145d3f862(undefined8 param_1,int param_2)

{
  FUN_145d3f88a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d3f88a FUN_145d3f88a body=197 status=ok
// SIG undefined FUN_145d3f88a(void)

void FUN_145d3f88a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5370e0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3f950(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3f986(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3f9bc(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145d3f9f2(param_1 + 6);
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d3f950 FUN_145d3f950 body=53 status=ok
// SIG undefined FUN_145d3f950(void)

void FUN_145d3f950(longlong *param_1)

{
  FUN_145d3fadc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3f986 FUN_145d3f986 body=53 status=ok
// SIG undefined FUN_145d3f986(void)

void FUN_145d3f986(longlong *param_1)

{
  FUN_145d3fc4e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3f9bc FUN_145d3f9bc body=53 status=ok
// SIG undefined FUN_145d3f9bc(void)

void FUN_145d3f9bc(longlong *param_1)

{
  FUN_145d3fa28();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3f9f2 FUN_145d3f9f2 body=53 status=ok
// SIG undefined FUN_145d3f9f2(void)

void FUN_145d3f9f2(longlong *param_1)

{
  FUN_145d3fa82();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d3fa28 FUN_145d3fa28 body=90 status=ok
// SIG undefined FUN_145d3fa28(void)

void FUN_145d3fa28(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d3fa82 FUN_145d3fa82 body=90 status=ok
// SIG undefined FUN_145d3fa82(void)

void FUN_145d3fa82(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145d3fadc FUN_145d3fadc body=369 status=ok
// SIG undefined FUN_145d3fadc(void)

void FUN_145d3fadc(longlong *param_1)

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
      FUN_148af5870(*(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x18 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 0x10 + lVar3 * 0x28) != 0) {
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d3fc4e FUN_145d3fc4e body=370 status=ok
// SIG undefined FUN_145d3fc4e(void)

void FUN_145d3fc4e(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_148af5870(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d3fdc2 FUN_145d3fdc2 body=261 status=ok
// SIG undefined FUN_145d3fdc2(void)

undefined8 *
FUN_145d3fdc2(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar3 = *param_5;
  puVar4 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar2 = DAT_14c762760 + 1;
  *(int *)(puVar4 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar2;
  puVar4[2] = 0;
  FUN_14485c47a(puVar4 + 2,param_2);
  *(undefined1 *)(puVar4 + 3) = param_3;
  *puVar4 = &PTR_FUN_14b47b110;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *(undefined1 *)(puVar4 + 6) = 0;
  uVar5 = FUN_14063f168(puVar4 + 4);
  local_50 = uVar3;
  local_48 = uVar1;
  FUN_145d3fec8(uVar5,param_4);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar4;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d3fec8 FUN_145d3fec8 body=423 status=ok
// SIG undefined FUN_145d3fec8(void)

void FUN_145d3fec8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_145d3ff9e:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9cc120;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d3ff9e;
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
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b9cc120;
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
                    /* WARNING: Could not recover jumptable at 0x000145d40057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145d40070 FUN_145d40070 body=104 status=ok
// SIG undefined FUN_145d40070(void)

undefined8 FUN_145d40070(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145d400bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 145d400d8 FUN_145d400d8 body=224 status=ok
// SIG undefined FUN_145d400d8(void)

longlong FUN_145d400d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x278);
  if (plVar3 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return 0;
      }
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
    if (*(longlong *)(param_1 + 0x270) == 0) {
      lVar7 = 0;
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x518);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      lVar7 = *(longlong *)(param_1 + 0x328);
      if (((*(byte *)(lVar7 + 0x33b) & 2) == 0) && (*(char *)(lVar7 + 0x360) != '\x01')) {
        if (*(char *)(lVar7 + 0x3b) == '\x01') {
          lVar7 = *(longlong *)(param_1 + 0x280) + 0xb20;
        }
        else {
          lVar7 = *(longlong *)(param_1 + 0x280) + 0xa70;
        }
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x280) + 0xbd0;
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
  return lVar7;
}



// FUNCTION 145d401b8 FUN_145d401b8 body=237 status=ok
// SIG undefined FUN_145d401b8(void)

longlong FUN_145d401b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x278);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) {
      return 0;
    }
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
  lVar7 = *(longlong *)(param_1 + 0x270);
  if (lVar7 == 0) {
    lVar7 = 0;
    goto LAB_145d40236;
  }
  plVar4 = *(longlong **)(lVar7 + 0x518);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((*(byte *)(lVar7 + 0x369) & 8) == 0) {
    lVar7 = 0x230;
LAB_145d4024c:
    lVar7 = lVar7 + *(longlong *)(param_1 + 0x280);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x308);
    if (((*(byte *)(lVar7 + 0x33b) & 2) != 0) || (*(char *)(lVar7 + 0x360) == '\x01')) {
      lVar7 = 0x180;
      goto LAB_145d4024c;
    }
    if (*(char *)(lVar7 + 0x3b) == '\x01') {
      lVar7 = *(longlong *)(param_1 + 0x280) + 0xd0;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x280) + 0x20;
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
LAB_145d40236:
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
  return lVar7;
}



// FUNCTION 145d402a6 FUN_145d402a6 body=350 status=ok
// SIG undefined FUN_145d402a6(void)

longlong FUN_145d402a6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0x278);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  iVar7 = (int)plVar2[1];
  do {
    if (iVar7 == 0) {
      return 0;
    }
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar9 = iVar7 == iVar5;
    if (bVar9) {
      *(int *)(plVar2 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar9);
  lVar8 = *(longlong *)(param_1 + 0x270);
  if (lVar8 == 0) {
    lVar8 = 0;
    goto LAB_145d40338;
  }
  plVar3 = *(longlong **)(lVar8 + 0x510);
  plVar4 = *(longlong **)(lVar8 + 0x518);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((plVar3 == (longlong *)0x0) || (cVar6 = (**(code **)(*plVar3 + 0x70))(), cVar6 == '\0')) {
    if ((*(byte *)(lVar8 + 0x369) & 0x10) == 0) goto LAB_145d40374;
    lVar8 = *(longlong *)(param_1 + 0x318);
    if (((*(byte *)(lVar8 + 0x33b) & 2) != 0) || (*(char *)(lVar8 + 0x360) == '\x01')) {
      lVar8 = 0x4f0;
      goto LAB_145d40350;
    }
    if (*(char *)(lVar8 + 0x3b) == '\x01') {
      lVar8 = *(longlong *)(param_1 + 0x280) + 0x440;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x280) + 0x390;
    }
  }
  else {
    if ((*(byte *)(lVar8 + 0x369) & 0x10) == 0) {
LAB_145d40374:
      lVar8 = 0x5a0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x318);
      if (((*(byte *)(lVar8 + 0x33b) & 2) == 0) && (*(char *)(lVar8 + 0x360) != '\x01')) {
        if (*(char *)(lVar8 + 0x3b) == '\x01') {
          lVar8 = *(longlong *)(param_1 + 0x280) + 0x7b0;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x280) + 0x700;
        }
        goto LAB_145d40333;
      }
      lVar8 = 0x860;
    }
LAB_145d40350:
    lVar8 = lVar8 + *(longlong *)(param_1 + 0x280);
  }
LAB_145d40333:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
LAB_145d40338:
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
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  return lVar8;
}



// FUNCTION 145d40404 FUN_145d40404 body=226 status=ok
// SIG undefined FUN_145d40404(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d40404(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  _DAT_14ca6fc08 = 0xffffffff;
  _DAT_14ca6fc0c = 0x105;
  DAT_14ca6fc0e = 0;
  DAT_14ca6fc00 = &PTR_FUN_14a3355d0;
  lVar2 = 0;
  do {
    *(undefined8 *)((longlong)&DAT_14ca6fc10 + lVar2) = 0;
    *(undefined4 *)((longlong)&DAT_14ca6fc18 + lVar2) = 0;
    *(undefined8 *)(&DAT_14ca6fc1c + lVar2) = 0;
    *(undefined8 *)(&DAT_14ca6fc24 + lVar2) = 0;
    *(undefined8 *)(&DAT_14ca6fc2c + lVar2) = 0;
    *(undefined8 *)(&DAT_14ca6fc34 + lVar2) = 0;
    *(undefined8 *)(&DAT_14ca6fc3c + lVar2) = 0;
    *(undefined8 *)(lVar2 + 0x14ca6fc44) = 0;
    *(undefined8 *)(&DAT_14ca6fc4c + lVar2) = 0;
    *(undefined8 *)(lVar2 + 0x14ca6fc54) = 0;
    *(undefined8 *)((longlong)&DAT_14ca6fc5c + lVar2) = 0x100000000;
    *(undefined8 *)((longlong)&DAT_14ca6fc68 + lVar2) = 0;
    lVar2 = lVar2 + 0x60;
  } while (lVar2 != 0x300);
  _DAT_14ca6ff18 = 0;
  DAT_14ca6ff20 = 0;
  DAT_14ca6ff28 = 0;
  _DAT_14ca6ff30 = 0;
  DAT_14ca6ff38 = 0;
  _DAT_14ca6ff40 = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)puVar1 + 9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11) = 0;
  FUN_145d404e6(puVar1 + 1);
  DAT_14ca6ff10 = puVar1;
  return;
}



// FUNCTION 145d404e6 FUN_145d404e6 body=79 status=ok
// SIG undefined FUN_145d404e6(void)

void FUN_145d404e6(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_1404e2186(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 8 + *param_1);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  return;
}



// FUNCTION 145d40536 FUN_145d40536 body=213 status=ok
// SIG undefined FUN_145d40536(void)

void FUN_145d40536(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = (**(code **)(*param_1 + 0xf80))(param_1,local_28);
  if (cVar1 == '\0') {
    FUN_1468998ea(L"ServerRefreshPlayerEntitlementFacts_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xf88))(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d40610 FUN_145d40610 body=88 status=ok
// SIG undefined FUN_145d40610(void)

void FUN_145d40610(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_140ed30b4(lVar2,param_1);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x68))(plVar3,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145d40659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1060))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145d40668 FUN_145d40668 body=68 status=ok
// SIG undefined FUN_145d40668(void)

void FUN_145d40668(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x100);
  memset(_Dst,0,0x100);
  FUN_145d406ac(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145d406ac FUN_145d406ac body=236 status=ok
// SIG undefined FUN_145d406ac(void)

undefined8 * FUN_145d406ac(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a2570;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0x17] = local_38;
  *(undefined4 *)(param_1 + 0x18) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xc4) = local_2c;
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_140056680(&local_38,&DAT_149dfb77a);
  param_1[0x1a] = local_38;
  *(undefined4 *)(param_1 + 0x1b) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xdc) = local_2c;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d407a2 FUN_145d407a2 body=564 status=ok
// SIG undefined FUN_145d407a2(void)

undefined8 * FUN_145d407a2(undefined8 *param_1)

{
  FUN_140fe702e();
  *param_1 = &PTR_FUN_14b660850;
  param_1[0x72] = &PTR_FUN_14b660ec0;
  param_1[0x73] = &PTR_FUN_14b660ee0;
  param_1[0x74] = &PTR_FUN_14b660f10;
  param_1[0x75] = &PTR_FUN_14b660f20;
  param_1[0x76] = &PTR_FUN_14b660f90;
  param_1[0x77] = &PTR_FUN_14b660fc0;
  param_1[0x78] = &PTR_FUN_14b660ff0;
  param_1[0x7f] = &PTR_FUN_14b6610a0;
  param_1[0x80] = &PTR_FUN_14b661110;
  param_1[0x81] = &PTR_FUN_14b661180;
  param_1[0x82] = &PTR_FUN_14b6611b0;
  param_1[0x83] = &PTR_FUN_14b6611f0;
  param_1[0x84] = &PTR_FUN_14b661290;
  param_1[0x85] = &PTR_FUN_14b6612b0;
  param_1[0x89] = &PTR_FUN_14b6612d0;
  param_1[0x8a] = &PTR_FUN_14b661390;
  param_1[0x8b] = &PTR_FUN_14b661410;
  param_1[0x8c] = &PTR_FUN_14b661460;
  param_1[0x8d] = &PTR_FUN_14b6614a0;
  param_1[0x8e] = &PTR_FUN_14b6614c0;
  param_1[0x8f] = &PTR_FUN_14b6614e0;
  param_1[0x90] = &PTR_FUN_14b661500;
  param_1[0x91] = &PTR_FUN_14b661520;
  param_1[0x92] = &PTR_FUN_14b661540;
  param_1[0x93] = &PTR_FUN_14b661560;
  param_1[0x94] = &PTR_FUN_14b661580;
  param_1[0x95] = &PTR_FUN_14b6615a0;
  param_1[0x96] = &PTR_FUN_14b6615c0;
  param_1[0x34b] = &PTR_FUN_14b6615e0;
  param_1[0x352] = &PTR_FUN_14b6615f0;
  param_1[0x353] = &PTR_FUN_14b661630;
  param_1[0x354] = &PTR_FUN_14b661670;
  param_1[0x355] = &PTR_FUN_14b6616c0;
  param_1[0x356] = &PTR_FUN_14b6616f0;
  param_1[0x359] = &PTR_FUN_14b661730;
  param_1[0x35a] = &PTR_FUN_14b661740;
  param_1[0x35b] = &PTR_FUN_14b661770;
  param_1[0x35c] = &PTR_FUN_14b661810;
  return param_1;
}



// FUNCTION 145d409d6 FUN_145d409d6 body=378 status=ok
// SIG undefined FUN_145d409d6(void)

undefined4 * FUN_145d409d6(undefined4 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d40c44(local_40);
  puVar1 = (uint *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar5 = puVar1[3];
  *local_38 = *puVar1;
  local_38[1] = uVar8;
  local_38[2] = uVar9;
  local_38[3] = uVar5;
  *(undefined8 *)(local_38 + 4) = *puVar2;
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  uVar3 = *(undefined8 *)(local_38 + 2);
  uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar9 = (uint)uVar3 & 0xffff;
  uVar8 = FUN_144a78877(local_38[1] ^ *local_38,
                        ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar9 >> 4));
  cVar7 = FUN_145d40b52(uVar8,local_38,&local_44);
  uVar6 = local_44;
  if (cVar7 == '\0') {
    uVar9 = DAT_14cb7d6b8 - DAT_14cb7d6e4;
    if (uVar9 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= DAT_14cb7d6f8)) {
      uVar8 = DAT_14cb7d6f8 - 1U & uVar8;
      local_38[7] = uVar8;
      puVar10 = DAT_14cb7d6f0;
      if (DAT_14cb7d6f0 == (undefined *)0x0) {
        puVar10 = &DAT_14cb7d6e8;
      }
      local_38[6] = *(uint *)(puVar10 + ((longlong)DAT_14cb7d6f8 - 1U & (longlong)(int)uVar8) * 4);
      puVar10 = DAT_14cb7d6f0;
      if (DAT_14cb7d6f0 == (undefined *)0x0) {
        puVar10 = &DAT_14cb7d6e8;
      }
      *(undefined4 *)(puVar10 + ((longlong)DAT_14cb7d6f8 - 1U & (longlong)(int)uVar8) * 4) =
           local_44;
    }
    else {
      DAT_14cb7d6f8 = iVar12;
      FUN_145d40d5e(&DAT_14cb7d6b0);
    }
  }
  *param_1 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d40b52 FUN_145d40b52 body=102 status=ok
// SIG undefined FUN_145d40b52(void)

undefined8 FUN_145d40b52(undefined8 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  
  if ((DAT_14cb7d6b8 - DAT_14cb7d6e4 != 1) &&
     (iVar7 = FUN_145d40bb8(), lVar6 = DAT_14cb7d6b0, iVar7 != -1)) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined8 *)(DAT_14cb7d6b0 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_2 + 4);
    puVar1 = (undefined4 *)(lVar6 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1488644f6(&DAT_14cb7d6b0,*param_3);
    *param_3 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 145d40bb8 FUN_145d40bb8 body=140 status=ok
// SIG undefined FUN_145d40bb8(void)

int FUN_145d40bb8(uint param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined *puVar4;
  longlong lVar5;
  
  if (DAT_14cb7d6b8 != DAT_14cb7d6e4) {
    puVar4 = &DAT_14cb7d6e8;
    if (DAT_14cb7d6f0 != (undefined *)0x0) {
      puVar4 = DAT_14cb7d6f0;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)(DAT_14cb7d6f8 - 1U & param_1) * 4);
    lVar2 = DAT_14cb7d6b0;
    while (DAT_14cb7d6b0 = lVar2, iVar1 != -1) {
      lVar5 = (longlong)iVar1 * 0x20;
      cVar3 = FUN_14472ecf8(lVar2 + lVar5,param_2);
      if ((cVar3 != '\0') && (*(longlong *)(lVar2 + 8 + lVar5) == *(longlong *)(param_2 + 8))) {
        return iVar1;
      }
      lVar2 = DAT_14cb7d6b0;
      iVar1 = *(int *)(DAT_14cb7d6b0 + 0x18 + lVar5);
    }
  }
  return -1;
}



// FUNCTION 145d40c44 FUN_145d40c44 body=282 status=ok
// SIG undefined FUN_145d40c44(void)

int * FUN_145d40c44(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb7d6e0;
  iVar3 = DAT_14cb7d6b8;
  if (DAT_14cb7d6e4 == 0) {
    iVar2 = DAT_14cb7d6b8 + 1;
    bVar7 = DAT_14cb7d6bc == DAT_14cb7d6b8;
    DAT_14cb7d6b8 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cb7d6b0,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb7d6c0,1);
    puVar4 = DAT_14cb7d6d0;
    if (DAT_14cb7d6d0 == (undefined *)0x0) {
      puVar4 = &DAT_14cb7d6c0;
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
    lVar6 = (longlong)DAT_14cb7d6e0;
    DAT_14cb7d6e0 = *(int *)(DAT_14cb7d6b0 + 4 + lVar6 * 0x20);
    DAT_14cb7d6e4 = DAT_14cb7d6e4 + -1;
    if (DAT_14cb7d6e4 != 0) {
      *(undefined4 *)(DAT_14cb7d6b0 + (longlong)DAT_14cb7d6e0 * 0x20) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb7d6c0;
  if (DAT_14cb7d6d0 != (undefined *)0x0) {
    puVar4 = DAT_14cb7d6d0;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cb7d6b0;
  return param_1;
}



// FUNCTION 145d40d5e FUN_145d40d5e body=507 status=ok
// SIG undefined FUN_145d40d5e(void)

void FUN_145d40d5e(longlong *param_1)

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
        lVar10 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + 8 + lVar10);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(*(uint *)(lVar3 + 4 + lVar10) ^ *(uint *)(lVar3 + lVar10),
                              ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar10) =
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



// FUNCTION 145d40f62 FUN_145d40f62 body=571 status=ok
// SIG undefined FUN_145d40f62(void)

undefined8 * FUN_145d40f62(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140e3eac6();
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  *param_1 = &PTR_FUN_14ad72cd0;
  param_1[6] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x44,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
  param_1[6] = &PTR_FUN_14ad6ad70;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[9] = 0x447a0000447a0000;
  local_60 = (undefined8 *)&DAT_3f8000003f800000;
  local_58._0_4_ = 0x3f800000;
  param_1[10] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 100,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  param_1[10] = &PTR_FUN_14ad6b060;
  param_1[0xd] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0xe) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0x74) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_14c846338;
  FUN_1459ac994(param_1 + 10,&local_60);
  local_60 = (undefined8 *)0x4000000040000000;
  local_58 = (ulonglong *)CONCAT44(local_58._4_4_,0x40000000);
  param_1[0x10] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0x94,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  param_1[0x10] = &PTR_FUN_14ad6b060;
  param_1[0x13] = DAT_14c846330;
  *(undefined4 *)(param_1 + 0x14) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0xa4) = DAT_14c846330;
  *(undefined4 *)((longlong)param_1 + 0xac) = DAT_14c846338;
  FUN_1459ac994(param_1 + 0x10,&local_60);
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_50 = 0x3f80000000000000;
  param_1[0x17] = &PTR_FUN_14ad6aa90;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  uVar1 = FUN_144830b78((longlong)param_1 + 0xcc,&DAT_14cb42160);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar1;
  param_1[0x17] = &PTR_FUN_14ad6b340;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3f80000000000000;
  local_60 = &local_50;
  local_58 = &local_48;
  FUN_145d4119e(param_1 + 0x17,&local_60);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4119e FUN_145d4119e body=73 status=ok
// SIG undefined FUN_145d4119e(void)

void FUN_145d4119e(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined4 *)(param_1 + 8) = 5;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_145d411e8(param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d411e8 FUN_145d411e8 body=109 status=ok
// SIG undefined FUN_145d411e8(void)

undefined8 * FUN_145d411e8(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 2;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447c510a(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 145d41256 FUN_145d41256 body=140 status=ok
// SIG undefined FUN_145d41256(void)

undefined1 * FUN_145d41256(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d412e2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FInjectShadowedLocalLightCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6ccf0;
  return &LAB_1473398fa;
}



// FUNCTION 145d412e2 FUN_145d412e2 body=261 status=ok
// SIG undefined FUN_145d412e2(void)

void FUN_145d412e2(void)

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
              0x110) < DAT_14ca6cd70) {
    FUN_144b3d300(&DAT_14ca6cd70);
    if (DAT_14ca6cd70 == -1) {
      FUN_145d413e8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FInjectShadowedLocalLightCommonParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x132;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6ccf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e75b);
      _Init_thread_footer(&DAT_14ca6cd70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d413e8 FUN_145d413e8 body=226 status=ok
// SIG undefined FUN_145d413e8(void)

longlong * FUN_145d413e8(longlong *param_1)

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
  pcVar13 = FUN_146315062;
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



// FUNCTION 145d414d0 FUN_145d414d0 body=138 status=ok
// SIG undefined FUN_145d414d0(void)

code * FUN_145d414d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InverseSquaredLightDistanceBiasScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e400000139;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473398fe;
}



// FUNCTION 145d4155a FUN_145d4155a body=146 status=ok
// SIG undefined FUN_145d4155a(void)

code * FUN_145d4155a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d16ad2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VolumetricFogParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVolumetricFogIntegrationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000137;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca6cb58;
  return FUN_1463150ea;
}



// FUNCTION 145d415ec FUN_145d415ec body=167 status=ok
// SIG undefined FUN_145d415ec(void)

void FUN_145d415ec(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145d41694(&local_28,local_20);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d41694 FUN_145d41694 body=61 status=ok
// SIG undefined FUN_145d41694(void)

undefined8 * FUN_145d41694(undefined8 *param_1,longlong param_2)

{
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else if (*(char *)(param_2 + 0x70) == '\x03') {
    *param_1 = *(undefined8 *)(param_2 + 0x74);
  }
  else {
    FUN_14883d81c(param_2 + 0x70,param_1);
  }
  return param_1;
}



// FUNCTION 145d416d2 FUN_145d416d2 body=74 status=ok
// SIG undefined FUN_145d416d2(void)

void FUN_145d416d2(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145d417f2(param_1,iVar1);
  }
  FUN_145d4171c((longlong)iVar1 * 0x40 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145d4171c FUN_145d4171c body=214 status=ok
// SIG undefined FUN_145d4171c(void)

longlong * FUN_145d4171c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  plVar2 = (longlong *)param_2[2];
  param_1[2] = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = (int)param_2[7];
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145d417f2 FUN_145d417f2 body=132 status=ok
// SIG undefined FUN_145d417f2(void)

void FUN_145d417f2(longlong param_1,int param_2)

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



// FUNCTION 145d41876 FUN_145d41876 body=32 status=ok
// SIG undefined FUN_145d41876(void)

void FUN_145d41876(longlong param_1)

{
  FUN_145d41896();
  FUN_145d4189c(*(longlong *)(param_1 + 0x38) + 0x268);
  return;
}



// FUNCTION 145d41896 FUN_145d41896 body=5 status=ok
// SIG undefined FUN_145d41896(void)

void FUN_145d41896(longlong param_1)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
  return;
}



// FUNCTION 145d4189c FUN_145d4189c body=296 status=ok
// SIG undefined FUN_145d4189c(void)

void FUN_145d4189c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_1459d489c();
  lVar5 = plVar2[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar5 = plVar2[0x22];
  }
  plVar2 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x1c0) + 0x430);
  lVar3 = (**(code **)(*plVar2 + 0x180))(plVar2);
  if (lVar3 == 0) {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),0x1f);
  }
  else {
    uVar1 = FUN_14490d72a(lVar3);
    if (uVar1 < 4) {
      uVar4 = (ulonglong)(0x4060201 >> ((byte)(uVar1 << 3) & 0x1f));
    }
    else {
      uVar4 = 0;
    }
  }
  FUN_145d419c4(uVar4 & 0xffffffff,plVar2,lVar5 + 0x28,param_1,param_1 + 0x80);
  FUN_145d41cb2(uVar4 & 0xffffffff,plVar2,lVar5 + 200,param_1 + 0x40,param_1 + 0x120);
  FUN_145d419c4(uVar4 & 0xffffffff,plVar2,lVar5 + 0x78,param_1 + 0x20,param_1 + 0xd0);
  FUN_145d41cb2(uVar4 & 0xffffffff,plVar2,lVar5 + 0x118,param_1 + 0x60,param_1 + 0x170);
  return;
}



// FUNCTION 145d419c4 FUN_145d419c4 body=749 status=ok
// SIG undefined FUN_145d419c4(void)

void FUN_145d419c4(byte param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_3[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_3;
  if ((iStack_54 != iVar6) || (local_60 != plVar1)) {
    do {
      lVar9 = *local_90;
      lVar7 = (longlong)iStack_74;
      local_68 = *(ulonglong *)(lVar9 + lVar7 * 0x20);
      if ((DAT_14c950c29 == 1) && (local_68 != 0)) {
        FUN_1456cec3c();
      }
      FUN_14784f31e(&local_60,lVar9 + lVar7 * 0x20 + 8);
      if (local_58 != 0) {
        uVar3 = FUN_14688f974(&DAT_14cabda20,local_68);
        FUN_14688fb8a(param_4,uVar3);
        uVar2 = local_68;
        if ((local_68 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_68);
        }
        uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        local_a8 = FUN_147852964(param_5,uVar4 >> 0x10 ^ uVar4,&local_68);
        local_a0 = (longlong)(int)local_58;
        if (local_a0 != 0) {
          local_b0 = local_60;
          local_a0 = local_a0 << 3;
          lVar9 = 0;
          do {
            lVar7 = *(longlong *)((longlong)local_b0 + lVar9);
            if ((((lVar7 == 0) || (lVar5 = FUN_1458854ca(), lVar5 == 0)) ||
                (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)((longlong)local_b0 + lVar9);
            }
            lVar7 = plVar8[0x22];
            if (lVar7 == 0) {
              (**(code **)(*plVar8 + 1000))(plVar8);
              lVar7 = plVar8[0x22];
            }
            if ((*(byte *)(lVar7 + 0x51) & param_1) != 0) {
              local_98 = *(longlong *)((longlong)local_b0 + lVar9);
              if ((DAT_14c950c29 == 1) && (local_98 != 0)) {
                FUN_1456cec3c();
              }
              FUN_147848cd8(local_a8,&local_98,param_2);
            }
            lVar9 = lVar9 + 8;
          } while (local_a0 != lVar9);
        }
        FUN_147848b1a(local_a8,param_2);
      }
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar6) || (local_80 != plVar1)) || (local_90 != param_3));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d41cb2 FUN_145d41cb2 body=749 status=ok
// SIG undefined FUN_145d41cb2(void)

void FUN_145d41cb2(byte param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar6 = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  plVar1 = param_3 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_68);
    iVar6 = (int)param_3[5];
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_3;
  if ((iStack_54 != iVar6) || (local_60 != plVar1)) {
    do {
      lVar9 = *local_90;
      lVar7 = (longlong)iStack_74;
      local_68 = *(ulonglong *)(lVar9 + lVar7 * 0x20);
      if ((DAT_14c950c29 == 1) && (local_68 != 0)) {
        FUN_1456cec3c();
      }
      FUN_14784f31e(&local_60,lVar9 + lVar7 * 0x20 + 8);
      if (local_58 != 0) {
        uVar3 = FUN_14688f974(&DAT_14cabd580,local_68);
        FUN_14688fb8a(param_4,uVar3);
        uVar2 = local_68;
        if ((local_68 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(local_68);
        }
        uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        local_a8 = FUN_147852964(param_5,uVar4 >> 0x10 ^ uVar4,&local_68);
        local_a0 = (longlong)(int)local_58;
        if (local_a0 != 0) {
          local_b0 = local_60;
          local_a0 = local_a0 << 3;
          lVar9 = 0;
          do {
            lVar7 = *(longlong *)((longlong)local_b0 + lVar9);
            if ((((lVar7 == 0) || (lVar5 = FUN_1458854ca(), lVar5 == 0)) ||
                (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              plVar8 = (longlong *)0x0;
            }
            else {
              plVar8 = *(longlong **)((longlong)local_b0 + lVar9);
            }
            lVar7 = plVar8[0x22];
            if (lVar7 == 0) {
              (**(code **)(*plVar8 + 1000))(plVar8);
              lVar7 = plVar8[0x22];
            }
            if ((*(byte *)(lVar7 + 0x51) & param_1) != 0) {
              local_98 = *(longlong *)((longlong)local_b0 + lVar9);
              if ((DAT_14c950c29 == 1) && (local_98 != 0)) {
                FUN_1456cec3c();
              }
              FUN_147848cd8(local_a8,&local_98,param_2);
            }
            lVar9 = lVar9 + 8;
          } while (local_a0 != lVar9);
        }
        FUN_147848b1a(local_a8,param_2);
      }
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar6) || (local_80 != plVar1)) || (local_90 != param_3));
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d41fa0 FUN_145d41fa0 body=146 status=ok
// SIG undefined FUN_145d41fa0(void)

void FUN_145d41fa0(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d42034();
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
    local_40 = FUN_1411d2412;
    local_38 = 0;
    FUN_145d425e0(local_30,param_1);
    FUN_141286bf6(uVar1,&local_40,local_30);
    FUN_1449db362(local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d42034 FUN_145d42034 body=336 status=ok
// SIG undefined FUN_145d42034(void)

void FUN_145d42034(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  code *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0x138))(param_2);
    local_60 = FUN_1457f4120;
    local_58 = 0;
    FUN_145d42186(local_50,param_1);
    FUN_1448b6402(uVar1,&local_60,local_50);
    FUN_1449db362(local_50);
    uVar1 = (**(code **)(*param_2 + 0x108))(param_2);
    local_60 = FUN_1457f4120;
    local_58 = 0;
    FUN_145d42186(local_50,param_1,&local_60);
    FUN_1448b6402(uVar1,&local_60,local_50);
    FUN_1449db362(local_50);
    uVar1 = (**(code **)(*param_2 + 0x100))(param_2);
    local_60 = (code *)&LAB_140f8fb5a;
    local_58 = 0;
    FUN_145d42434(local_50,param_1,&local_60);
    FUN_145d42332(uVar1,&local_60,local_50);
    FUN_1449db362(local_50);
    uVar1 = (**(code **)(*param_2 + 0xb0))(param_2);
  }
  FUN_1410ae9e2(param_1,uVar1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d42186 FUN_145d42186 body=428 status=ok
// SIG undefined FUN_145d42186(void)

longlong * FUN_145d42186(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145d42266:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b41d170;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d42266;
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
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b41d170;
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



// FUNCTION 145d42332 FUN_145d42332 body=216 status=ok
// SIG undefined FUN_145d42332(void)

undefined8 * FUN_145d42332(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145d42434 FUN_145d42434 body=428 status=ok
// SIG undefined FUN_145d42434(void)

longlong * FUN_145d42434(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145d42514:
    *puVar5 = &PTR_LAB_14b41d250;
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
    *puVar5 = &PTR_FUN_14b41d1e0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d42514;
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
    *puVar5 = &PTR_LAB_14b41d250;
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
    *puVar5 = &PTR_FUN_14b41d1e0;
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



// FUNCTION 145d425e0 FUN_145d425e0 body=428 status=ok
// SIG undefined FUN_145d425e0(void)

longlong * FUN_145d425e0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_145d426c0:
    *puVar5 = &PTR_LAB_14b405fd0;
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
    *puVar5 = &PTR_FUN_14b97dbf0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145d426c0;
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
    *puVar5 = &PTR_LAB_14b405fd0;
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
    *puVar5 = &PTR_FUN_14b97dbf0;
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



// FUNCTION 145d4278c FUN_145d4278c body=142 status=ok
// SIG undefined FUN_145d4278c(void)

code * FUN_145d4278c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d4281a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"GPUSceneWriterParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FGPUSceneWriterParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000008cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1456da9fc;
}



// FUNCTION 145d4281a FUN_145d4281a body=268 status=ok
// SIG undefined FUN_145d4281a(void)

undefined * FUN_145d4281a(void)

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
              0x110) < DAT_14c9d39c8) {
    FUN_144b3d300(&DAT_14c9d39c8);
    if (DAT_14c9d39c8 == -1) {
      FUN_145d42928(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FGPUSceneWriterParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3948,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46dad);
      _Init_thread_footer(&DAT_14c9d39c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9d3948;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d42928 FUN_145d42928 body=226 status=ok
// SIG undefined FUN_145d42928(void)

longlong * FUN_145d42928(longlong *param_1)

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
  pcVar13 = FUN_1462c6420;
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



// FUNCTION 145d42a10 FUN_145d42a10 body=138 status=ok
// SIG undefined FUN_145d42a10(void)

code * FUN_145d42a10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneFrameNumber";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716e750;
}



// FUNCTION 145d42a9a FUN_145d42a9a body=138 status=ok
// SIG undefined FUN_145d42a9a(void)

code * FUN_145d42a9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GPUSceneInstancePayloadDataRW";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716e7da;
}



// FUNCTION 145d42b24 FUN_145d42b24 body=34 status=ok
// SIG undefined FUN_145d42b24(void)

void FUN_145d42b24(undefined8 param_1,undefined8 param_2)

{
  FUN_145d42b46();
  FUN_145d43686(param_1,param_2);
  return;
}



// FUNCTION 145d42b46 FUN_145d42b46 body=386 status=ok
// SIG undefined FUN_145d42b46(void)

void FUN_145d42b46(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  FUN_14153e88e();
  FUN_145d43360(param_1,param_2);
  FUN_145d42f52(param_1,param_2);
  FUN_145d43154(param_1,param_2);
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97408);
  uVar2 = FUN_1410c4486(uVar1,0);
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97410);
  uVar2 = FUN_1410c4486(uVar1,0);
  *(undefined1 *)(param_1 + 0x22) = uVar2;
  FUN_145d42d12(param_1,param_2);
  FUN_145d42d80(param_1,param_2);
  FUN_145d42df2(param_1,param_2);
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97430);
  uVar3 = FUN_140b963dc(uVar1,0x3f800000);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97438);
  uVar2 = FUN_1410c4486(uVar1,1);
  *(undefined1 *)(param_1 + 0x80) = uVar2;
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97440);
  uVar2 = FUN_1410c4486(uVar1,0);
  *(undefined1 *)(param_1 + 0x81) = uVar2;
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97448);
  uVar2 = FUN_1410c4486(uVar1,0);
  *(undefined1 *)(param_1 + 0x82) = uVar2;
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97450);
  uVar2 = FUN_1410c4486(uVar1,0);
  *(undefined1 *)(param_1 + 0x83) = uVar2;
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97458);
  uVar2 = FUN_1410c4486(uVar1,1);
  *(undefined1 *)(param_1 + 0x84) = uVar2;
  FUN_145d42e64(param_1,param_2);
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97400);
  uVar2 = FUN_1410c4486(uVar1,1);
  *(undefined1 *)(param_1 + 0x78) = uVar2;
  FUN_145d42cc8(param_1,param_2);
  return;
}



// FUNCTION 145d42cc8 FUN_145d42cc8 body=74 status=ok
// SIG undefined FUN_145d42cc8(void)

void FUN_145d42cc8(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_144a7cdc2(param_2,&DAT_14cb97468);
  cVar1 = FUN_144a8ab0e(uVar3);
  uVar2 = 2;
  if (cVar1 != '\0') {
    uVar2 = FUN_1410451c0(uVar3,0);
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  return;
}



// FUNCTION 145d42d12 FUN_145d42d12 body=105 status=ok
// SIG undefined FUN_145d42d12(void)

void FUN_145d42d12(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  cVar2 = FUN_144729dda(param_1 + 8);
  if (cVar2 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 8);
    if (lVar5 != 0) {
      lVar5 = FUN_1459b10c6(lVar5);
      if (lVar5 != 0) {
        uVar4 = FUN_145d42d7c(lVar5);
        goto LAB_145d42d53;
      }
    }
  }
  uVar4 = 0;
LAB_145d42d53:
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97418);
  uVar3 = FUN_1410c4486(uVar1,uVar4);
  *(undefined1 *)(param_1 + 0x23) = uVar3;
  return;
}



// FUNCTION 145d42d7c FUN_145d42d7c body=4 status=ok
// SIG undefined FUN_145d42d7c(void)

undefined1 FUN_145d42d7c(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x44);
}



// FUNCTION 145d42d80 FUN_145d42d80 body=112 status=ok
// SIG undefined FUN_145d42d80(void)

void FUN_145d42d80(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x18))(param_1,&local_22);
  if (local_21 == '\x01') {
    uVar2 = FUN_144a7cdc2(param_2,&DAT_14cb97420);
    uVar1 = FUN_1410c4486(uVar2,local_22);
    *(undefined1 *)((longlong)param_1 + 0x24) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x25) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d42df2 FUN_145d42df2 body=112 status=ok
// SIG undefined FUN_145d42df2(void)

void FUN_145d42df2(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x18))(param_1,&local_22);
  if (local_21 == '\x01') {
    uVar2 = FUN_144a7cdc2(param_2,&DAT_14cb97428);
    uVar1 = FUN_1410c4486(uVar2,local_22);
    *(undefined1 *)((longlong)param_1 + 0x26) = uVar1;
    *(undefined1 *)((longlong)param_1 + 0x27) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d42e64 FUN_145d42e64 body=237 status=ok
// SIG undefined FUN_145d42e64(void)

void FUN_145d42e64(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_178 [32];
  longlong local_158 [2];
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = FUN_144a7cdc2(param_2,&DAT_14cb97460);
  plVar2 = (longlong *)FUN_1407cbaec(uVar1);
  if ((longlong)(int)plVar2[2] != 0) {
    lVar3 = *plVar2;
    lVar4 = (longlong)(int)plVar2[2] << 4;
    do {
      uVar1 = FUN_144a7cdd6(lVar3,0);
      FUN_144a81018(local_148,uVar1);
      FUN_140056680(local_158,local_40);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_14482b35e(param_1 + 0x88,local_148,local_158,0);
      if (local_158[0] != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d42f52 FUN_145d42f52 body=513 status=ok
// SIG undefined FUN_145d42f52(void)

void FUN_145d42f52(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_c8 [40];
  uint local_a0 [6];
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbVar1 = (byte *)*param_2;
  if (pbVar1 == (byte *)0x0) {
    uVar2 = 0;
    goto LAB_145d430d6;
  }
  uVar2 = 0;
  if ((~*pbVar1 & 3) != 0) goto LAB_145d430d6;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  FUN_140cb327c(&local_78,*(longlong *)(pbVar1 + 8) + 0x18);
  FUN_1446dcdd4(local_a0,&DAT_14cb973f0);
  if ((int)uStack_70 != local_44) {
    puVar3 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar3 = local_40;
    }
    for (iVar5 = *(int *)(puVar3 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4); iVar5 != -1;
        iVar5 = *(int *)((longlong)iVar5 * 0x40 + local_78 + 0x38)) {
      if (*(uint *)(local_78 + (longlong)iVar5 * 0x40) == local_a0[0]) {
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        FUN_1446dcdd4(local_a0,&DAT_14cb973f0);
        if ((int)uStack_70 != local_44) {
          puVar3 = local_40;
          if (local_38 != (undefined1 *)0x0) {
            puVar3 = local_38;
          }
          iVar5 = *(int *)(puVar3 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4);
          if (iVar5 != -1) goto LAB_145d43083;
        }
        lVar4 = 0;
        goto LAB_145d43098;
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 0;
  goto LAB_145d430af;
  while( true ) {
    iVar5 = *(int *)(lVar4 + 0x38);
    lVar4 = 0;
    if (iVar5 == -1) break;
LAB_145d43083:
    lVar4 = local_78 + (longlong)iVar5 * 0x40;
    if (*(uint *)(local_78 + (longlong)iVar5 * 0x40) == local_a0[0]) break;
  }
LAB_145d43098:
  uVar2 = FUN_1410c4486(lVar4 + 0x28,0);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_145d430af:
  local_30 = 0;
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_78);
LAB_145d430d6:
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d43154 FUN_145d43154 body=523 status=ok
// SIG undefined FUN_145d43154(void)

void FUN_145d43154(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1f8 [36];
  undefined1 local_1d4 [4];
  longlong local_1d0;
  longlong *local_1c8;
  longlong local_1c0 [2];
  longlong local_1b0;
  longlong *local_1a8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar3 = FUN_144a7cdc2(param_2,&DAT_14cb973f8);
  plVar4 = (longlong *)FUN_1407cbaec(uVar3);
  if ((longlong)(int)plVar4[2] != 0) {
    lVar5 = *plVar4;
    lVar6 = (longlong)(int)plVar4[2] << 4;
    do {
      uVar3 = FUN_144a7cdd6(lVar5,0);
      FUN_144a81018(&local_1b0,uVar3);
      FUN_140056680(local_1c0,local_a8);
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      FUN_140cb2ecc(&local_1b0);
      if (local_1b0 != 0) {
        local_1d0 = local_1b0;
        local_1c8 = local_1a8;
        if (local_1a8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1a8 + 1) = (int)local_1a8[1] + 1;
          UNLOCK();
        }
        FUN_140b6d1a4(&local_98,local_1d4,&local_1d0,0);
        plVar4 = local_1c8;
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1c8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1c8)(local_1c8);
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
      plVar4 = local_1a8;
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (local_1c0[0] != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  FUN_14586fca4(param_1 + 0x28,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(&local_98);
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d43360 FUN_145d43360 body=805 status=ok
// SIG undefined FUN_145d43360(void)

void FUN_145d43360(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 auStack_e8 [32];
  uint local_c8 [6];
  longlong local_b0;
  uint local_a0 [6];
  longlong local_88;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_44;
  undefined1 local_40 [8];
  undefined1 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar7 = 0x100000000;
  pbVar1 = (byte *)*param_2;
  if (pbVar1 == (byte *)0x0) {
    puVar8 = &DAT_100000002;
    goto LAB_145d43613;
  }
  if ((~*pbVar1 & 3) != 0) {
    puVar8 = &DAT_100000002;
    goto LAB_145d43613;
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = (undefined1 *)0x0;
  local_30 = 0;
  FUN_140cb327c(&local_78,*(longlong *)(pbVar1 + 8) + 0x18);
  FUN_1446dcdd4(local_a0,&DAT_14cb973e0);
  if ((int)uStack_70 != local_44) {
    puVar8 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar8 = local_40;
    }
    for (iVar5 = *(int *)(puVar8 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4); iVar5 != -1;
        iVar5 = *(int *)((longlong)iVar5 * 0x40 + local_78 + 0x38)) {
      if (*(uint *)(local_78 + (longlong)iVar5 * 0x40) == local_a0[0]) {
        FUN_1446dcdd4(local_c8,&DAT_14cb973e8);
        if ((int)uStack_70 == local_44) goto LAB_145d434a6;
        puVar8 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar8 = local_40;
        }
        iVar5 = *(int *)(puVar8 + (ulonglong)(local_30 - 1U & local_c8[0]) * 4);
        if (iVar5 == -1) goto LAB_145d434a6;
        goto LAB_145d4348f;
      }
    }
  }
  goto LAB_145d434b4;
  while (iVar5 = *(int *)(lVar4 + 0x38), iVar5 != -1) {
LAB_145d43531:
    lVar4 = local_78 + (longlong)iVar5 * 0x40;
    if (*(uint *)(local_78 + (longlong)iVar5 * 0x40) == local_a0[0]) goto LAB_145d4354c;
  }
LAB_145d4354a:
  lVar4 = 0;
LAB_145d4354c:
  uVar2 = FUN_140e1edd4(lVar4 + 0x28,0);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1446dcdd4(local_a0,&DAT_14cb973e8);
  if ((int)uStack_70 != local_44) {
    puVar8 = local_40;
    if (local_38 != (undefined1 *)0x0) {
      puVar8 = local_38;
    }
    iVar5 = *(int *)(puVar8 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4);
    while (iVar5 != -1) {
      lVar4 = local_78 + (longlong)iVar5 * 0x40;
      if (*(uint *)(local_78 + (longlong)iVar5 * 0x40) == local_a0[0]) goto LAB_145d435cc;
      iVar5 = *(int *)(lVar4 + 0x38);
    }
  }
  lVar4 = 0;
LAB_145d435cc:
  uVar3 = FUN_140e1edd4(lVar4 + 0x28,0);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  uVar7 = (ulonglong)uVar3 << 0x20;
  uVar6 = (ulonglong)uVar2;
  goto LAB_145d435e9;
  while (iVar5 = *(int *)((longlong)iVar5 * 0x40 + local_78 + 0x38), iVar5 != -1) {
LAB_145d4348f:
    if (*(uint *)(local_78 + (longlong)iVar5 * 0x40) == local_c8[0]) {
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1446dcdd4(local_a0,&DAT_14cb973e0);
      if ((int)uStack_70 == local_44) goto LAB_145d4354a;
      puVar8 = local_38;
      if (local_38 == (undefined1 *)0x0) {
        puVar8 = local_40;
      }
      iVar5 = *(int *)(puVar8 + (ulonglong)(local_30 - 1U & local_a0[0]) * 4);
      if (iVar5 == -1) goto LAB_145d4354a;
      goto LAB_145d43531;
    }
  }
LAB_145d434a6:
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
LAB_145d434b4:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  uVar6 = 2;
LAB_145d435e9:
  local_30 = 0;
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_78);
  puVar8 = (undefined1 *)(uVar7 | uVar6);
LAB_145d43613:
  *(undefined1 **)(param_1 + 0x18) = puVar8;
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d43686 FUN_145d43686 body=1513 status=ok
// SIG undefined FUN_145d43686(void)

void FUN_145d43686(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  longlong local_198;
  longlong *local_190;
  undefined1 local_188 [8];
  longlong local_180 [2];
  longlong local_170;
  longlong *local_168;
  undefined1 local_15c [4];
  longlong *local_158;
  longlong *local_150;
  longlong local_140;
  uint local_130 [6];
  longlong local_118;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_1a0 = param_1;
  uVar4 = FUN_144a06846(param_2,&DAT_14cbce358);
  plVar5 = (longlong *)FUN_1407cbaec(uVar4);
  if ((longlong)(int)plVar5[2] == 0) {
LAB_145d43af7:
    lVar9 = local_1a0;
    FUN_145d43ca8(local_1a0 + 0xe0,&local_b8);
    uVar4 = FUN_144a06846(param_2,&DAT_14cbce3d0);
    uVar3 = FUN_1410c4486(uVar4,0);
    *(undefined1 *)(lVar9 + 0x130) = uVar3;
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_145d43c70(&local_b8);
    if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar9 = *plVar5;
  lVar10 = (longlong)(int)plVar5[2] * 0x10 + lVar9;
LAB_145d4374b:
  uVar4 = FUN_1412446d2(lVar9);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = (undefined1 *)0x0;
  local_c0 = 0;
  FUN_140cb327c(&local_108,uVar4);
  FUN_1447325ac(&DAT_14cbce380,&local_170,1);
  FUN_1446dcdd4(local_130,&local_170);
  if ((int)uStack_100 != local_d4) {
    puVar6 = local_c8;
    if (local_c8 == (undefined1 *)0x0) {
      puVar6 = local_d0;
    }
    for (iVar8 = *(int *)(puVar6 + (ulonglong)(local_c0 - 1U & local_130[0]) * 4); iVar8 != -1;
        iVar8 = *(int *)((longlong)iVar8 * 0x40 + local_108 + 0x38)) {
      if (*(uint *)(local_108 + (longlong)iVar8 * 0x40) == local_130[0]) {
        FUN_1447325ac(&DAT_14cbce3a8,local_180,1);
        FUN_1446dcdd4(&local_158,local_180);
        if ((int)uStack_100 == local_d4) goto LAB_145d43bdb;
        puVar6 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar6 = local_d0;
        }
        iVar8 = *(int *)(puVar6 + (ulonglong)(local_c0 - 1U & (uint)local_158) * 4);
        if (iVar8 == -1) goto LAB_145d43bdb;
        goto LAB_145d4388f;
      }
    }
  }
  goto LAB_145d43be8;
  while (iVar8 = *(int *)((longlong)iVar8 * 0x40 + local_108 + 0x38), iVar8 != -1) {
LAB_145d4388f:
    if (*(uint *)(local_108 + (longlong)iVar8 * 0x40) == (uint)local_158) {
      if (local_140 != 0) {
        FUN_1400020a8();
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      FUN_1447325ac(&DAT_14cbce380,local_180,1);
      FUN_1446dcdd4(local_130,local_180);
      if ((int)uStack_100 == local_d4) goto LAB_145d43bb4;
      puVar6 = local_c8;
      if (local_c8 == (undefined1 *)0x0) {
        puVar6 = local_d0;
      }
      iVar8 = *(int *)(puVar6 + (ulonglong)(local_c0 - 1U & local_130[0]) * 4);
      if (iVar8 == -1) goto LAB_145d43bb4;
      goto LAB_145d4392c;
    }
  }
LAB_145d43bdb:
  if (local_140 != 0) {
    FUN_1400020a8();
  }
LAB_145d43be8:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  goto LAB_145d43abe;
  while (iVar8 = *(int *)(lVar7 + 0x38), iVar8 != -1) {
LAB_145d4392c:
    lVar7 = local_108 + (longlong)iVar8 * 0x40;
    if (*(uint *)(local_108 + (longlong)iVar8 * 0x40) == local_130[0]) goto LAB_145d4394a;
  }
LAB_145d43bb4:
  lVar7 = 0;
LAB_145d4394a:
  uVar4 = FUN_144a7cdd6(lVar7 + 0x28,0);
  FUN_1400b22c2(&local_158,uVar4);
  FUN_140cb2ecc(&local_170,&local_158);
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if (local_170 != 0) {
    FUN_1447325ac(&DAT_14cbce3a8,local_188,1);
    FUN_1446dcdd4(local_130,local_188);
    if ((int)uStack_100 == local_d4) {
LAB_145d43bbb:
      lVar7 = 0;
    }
    else {
      puVar6 = local_c8;
      if (local_c8 == (undefined1 *)0x0) {
        puVar6 = local_d0;
      }
      iVar8 = *(int *)(puVar6 + (ulonglong)(local_c0 - 1U & local_130[0]) * 4);
      if (iVar8 == -1) goto LAB_145d43bbb;
      do {
        lVar7 = local_108 + (longlong)iVar8 * 0x40;
        if (*(uint *)(local_108 + (longlong)iVar8 * 0x40) == local_130[0]) break;
        iVar8 = *(int *)(lVar7 + 0x38);
        lVar7 = 0;
      } while (iVar8 != -1);
    }
    uVar4 = FUN_144a7cdd6(lVar7 + 0x28,0);
    FUN_1400b22c2(local_180,uVar4);
    local_198 = local_170;
    local_190 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_168 + 1) = (int)local_168[1] + 1;
      UNLOCK();
    }
    local_158 = &local_198;
    local_150 = local_180;
    FUN_145d43e6e(&local_b8,local_15c,&local_158);
    plVar5 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_180[0] != 0) {
      FUN_1400020a8();
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
  }
  plVar5 = local_168;
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_168 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_145d43abe:
  local_c0 = 0;
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140cb2c32(&local_108);
  lVar9 = lVar9 + 0x10;
  if (lVar9 == lVar10) goto LAB_145d43af7;
  goto LAB_145d4374b;
}



// FUNCTION 145d43c70 FUN_145d43c70 body=55 status=ok
// SIG undefined FUN_145d43c70(void)

void FUN_145d43c70(longlong *param_1)

{
  FUN_14153ea6e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d43ca8 FUN_145d43ca8 body=120 status=ok
// SIG undefined FUN_145d43ca8(void)

longlong FUN_145d43ca8(longlong param_1,longlong param_2)

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
    FUN_145d43d20(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 145d43d20 FUN_145d43d20 body=218 status=ok
// SIG undefined FUN_145d43d20(void)

undefined8 * FUN_145d43d20(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14153ea6e(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_145d43dfa(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 145d43dfa FUN_145d43dfa body=115 status=ok
// SIG undefined FUN_145d43dfa(void)

undefined8 * FUN_145d43dfa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145d43e6e FUN_145d43e6e body=423 status=ok
// SIG undefined FUN_145d43e6e(void)

undefined4 * FUN_145d43e6e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145777f42(param_1,local_40);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *local_38 = *puVar2;
  lVar11 = puVar2[1];
  local_38[1] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = *puVar3;
  *puVar3 = 0;
  *(undefined4 *)(local_38 + 3) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)((longlong)local_38 + 0x1c) = *(undefined4 *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_44 = local_40[0];
  plVar4 = (longlong *)*local_38;
  plVar5 = (longlong *)local_38[1];
  if (plVar5 == (longlong *)0x0) {
    uVar7 = (**(code **)(*plVar4 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    uVar7 = (**(code **)(*plVar4 + 0x40))();
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_58 = 0;
  cVar6 = FUN_145778036(param_1,uVar7,local_38,&local_44);
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar9) {
      uVar8 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x24) = uVar7;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_140b749d6(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d44016 FUN_145d44016 body=205 status=ok
// SIG undefined FUN_145d44016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d44016(void)

{
  if ((DAT_14ca2756f & 2) == 0) {
    DAT_14ca2756f = DAT_14ca2756f | 2;
    _DAT_14ca27510 = L"FEyeAdaptationCS";
    _DAT_14ca27528 = FUN_146826540;
    _DAT_14ca27530 = FUN_146825d77;
    _DAT_14ca27538 = FUN_146825fd6;
    _DAT_14ca27540 = FUN_1407e02ea;
    _DAT_14ca27548 = FUN_146826273;
    _DAT_14ca27520 = FUN_14728bb34;
    _DAT_14ca27560 = 0xffffffff000000e0;
    _DAT_14ca27568 = 8;
    DAT_14ca2756c = 0;
    _DAT_14ca27550 = &LAB_14728bb60;
    FUN_145d440e4();
    FUN_1407e00cc(&DAT_14ca27508);
    return;
  }
  return;
}



// FUNCTION 145d440e4 FUN_145d440e4 body=123 status=ok
// SIG undefined FUN_145d440e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d440e4(void)

{
  _DAT_14ca2c1b0 = L"BASE";
  DAT_14ca2c1da = 4;
  _DAT_14ca2c1b8 = FUN_140b35ae4();
  _DAT_14ca2c1c0 = DAT_14ca27518;
  _DAT_14ca2c1c8 = &LAB_14682652b;
  DAT_14ca27518 = &DAT_14ca2c1b0;
  DAT_14ca2756d = DAT_14ca2756d + '\x01';
  _DAT_14ca2c1d0 = 0x100000000;
  if (*(char *)(_DAT_14ca2c1b8 + 100) != '\0') {
    DAT_14ca2756e = DAT_14ca2756e + '\x01';
  }
  return;
}



// FUNCTION 145d44160 FUN_145d44160 body=226 status=ok
// SIG undefined FUN_145d44160(void)

longlong * FUN_145d44160(longlong *param_1)

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
  pcVar13 = FUN_1462fa954;
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



// FUNCTION 145d44248 FUN_145d44248 body=138 status=ok
// SIG undefined FUN_145d44248(void)

undefined1 * FUN_145d44248(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x326;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d44244;
}



// FUNCTION 145d442d2 FUN_145d442d2 body=144 status=ok
// SIG undefined FUN_145d442d2(void)

code * FUN_145d442d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d44362();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LocalExposure";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalExposureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x9000000327;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145d44248;
}



// FUNCTION 145d44362 FUN_145d44362 body=265 status=ok
// SIG undefined FUN_145d44362(void)

undefined * FUN_145d44362(void)

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
              0x110) < DAT_14ca2c548) {
    FUN_144b3d300(&DAT_14ca2c548);
    if (DAT_14ca2c548 == -1) {
      FUN_145d4446c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLocalExposureParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2c4c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edb732);
      _Init_thread_footer(&DAT_14ca2c548);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca2c4c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d4446c FUN_145d4446c body=226 status=ok
// SIG undefined FUN_145d4446c(void)

longlong * FUN_145d4446c(longlong *param_1)

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
  pcVar13 = FUN_1462f94c8;
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



// FUNCTION 145d44550 FUN_145d44550 body=136 status=ok
// SIG undefined FUN_145d44550(void)

code * FUN_145d44550(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BlurredLuminanceBlend";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d44662;
}



// FUNCTION 145d445d8 FUN_145d445d8 body=138 status=ok
// SIG undefined FUN_145d445d8(void)

code * FUN_145d445d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MiddleGreyExposureCompensation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145d44550;
}



// FUNCTION 145d44662 FUN_145d44662 body=138 status=ok
// SIG undefined FUN_145d44662(void)

code * FUN_145d44662(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DetailStrength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14728f56a;
}



// FUNCTION 145d446ec FUN_145d446ec body=289 status=ok
// SIG undefined FUN_145d446ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d446ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca41e20) {
    FUN_144b3d300(&DAT_14ca41e20);
    if (DAT_14ca41e20 == -1) {
      FUN_14153eeb6();
      FUN_145d4480e();
      FUN_140db5666(&DAT_14ca41d78,0,&DAT_14ca41d10,L"FCubeDownsamplePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"DownsamplePS",3,1,
                    FUN_1472c618c,FUN_1472c612c,&LAB_1472c6128,&LAB_1472c6124,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43cc0);
      _DAT_14ca41d78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84ef3);
      _Init_thread_footer(&DAT_14ca41e20);
    }
  }
  return &DAT_14ca41d78;
}



// FUNCTION 145d4480e FUN_145d4480e body=205 status=ok
// SIG undefined FUN_145d4480e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d4480e(void)

{
  if ((DAT_14ca41d77 & 2) == 0) {
    DAT_14ca41d77 = DAT_14ca41d77 | 2;
    _DAT_14ca41d18 = L"FCubeDownsamplePS";
    _DAT_14ca41d30 = FUN_146826540;
    _DAT_14ca41d38 = FUN_146825d77;
    _DAT_14ca41d40 = FUN_146825fd6;
    _DAT_14ca41d48 = FUN_1407e02ea;
    _DAT_14ca41d50 = FUN_146826273;
    _DAT_14ca41d28 = FUN_1472c60f6;
    _DAT_14ca41d68 = 0xffffffff000000e0;
    _DAT_14ca41d70 = 8;
    DAT_14ca41d74 = 0;
    _DAT_14ca41d58 = &LAB_1472c6120;
    FUN_145d448dc();
    FUN_1407e00cc(&DAT_14ca41d10);
    return;
  }
  return;
}



// FUNCTION 145d448dc FUN_145d448dc body=123 status=ok
// SIG undefined FUN_145d448dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d448dc(void)

{
  _DAT_14ca447f8 = L"BASE";
  DAT_14ca44822 = 4;
  _DAT_14ca44800 = FUN_140b35ae4();
  _DAT_14ca44808 = DAT_14ca41d20;
  _DAT_14ca44810 = &LAB_14682652b;
  DAT_14ca41d20 = &DAT_14ca447f8;
  DAT_14ca41d75 = DAT_14ca41d75 + '\x01';
  _DAT_14ca44818 = 0x100000000;
  if (*(char *)(_DAT_14ca44800 + 100) != '\0') {
    DAT_14ca41d76 = DAT_14ca41d76 + '\x01';
  }
  return;
}



// FUNCTION 145d44958 FUN_145d44958 body=226 status=ok
// SIG undefined FUN_145d44958(void)

longlong * FUN_145d44958(longlong *param_1)

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
  pcVar13 = FUN_146304200;
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



// FUNCTION 145d44a40 FUN_145d44a40 body=132 status=ok
// SIG undefined FUN_145d44a40(void)

undefined1 * FUN_145d44a40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x74;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145d44a3c;
}



// FUNCTION 145d44ac4 FUN_145d44ac4 body=138 status=ok
// SIG undefined FUN_145d44ac4(void)

code * FUN_145d44ac4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CubeFace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146304288;
}



// FUNCTION 145d44b4e FUN_145d44b4e body=290 status=ok
// SIG undefined FUN_145d44b4e(void)

void FUN_145d44b4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_140495e96();
  if (lVar3 != 0) {
    lVar4 = FUN_14030d4a0();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      FUN_140457ffc(lVar3 + 0x418,param_1 + -0x30);
    }
  }
  FUN_1449027d0(param_1 + -0x30,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x260);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x90));
  *(int *)(lVar3 + 0x88) = *(int *)(lVar3 + 0x88) + 1;
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
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  FUN_145d44c72(lVar3 + 0x30);
  if (*(char *)(lVar3 + 0x20) == '\0') {
    iVar5 = 1;
    if (*(int *)(lVar3 + 0x24) == 0) goto LAB_145d44c07;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x24) + 1;
LAB_145d44c07:
    *(undefined1 *)(lVar3 + 0x20) = 0;
    *(int *)(lVar3 + 0x24) = iVar5;
  }
  if (*(char *)(lVar3 + 0x28) == '\0') {
    iVar5 = 1;
    if (*(int *)(lVar3 + 0x2c) != 0) goto LAB_145d44c27;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x2c) + 1;
  }
  *(undefined1 *)(lVar3 + 0x28) = 0;
  *(int *)(lVar3 + 0x2c) = iVar5;
LAB_145d44c27:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x90));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d44c72 FUN_145d44c72 body=70 status=ok
// SIG undefined FUN_145d44c72(void)

void FUN_145d44c72(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_145d44cb8();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14494313c(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145d44cb8 FUN_145d44cb8 body=326 status=ok
// SIG undefined FUN_145d44cb8(void)

void FUN_145d44cb8(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 145d44e00 FUN_145d44e00 body=158 status=ok
// SIG undefined FUN_145d44e00(void)

bool FUN_145d44e00(longlong param_1,undefined8 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 145d44ea0 FUN_145d44ea0 body=184 status=ok
// SIG undefined FUN_145d44ea0(void)

void FUN_145d44ea0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_30);
  lVar3 = *(longlong *)(local_30 + 0x50);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  *(int *)(lVar3 + 0x1f8) = *(int *)(lVar3 + 0x1f8) + 1;
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
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  FUN_140f9ed8d(*(undefined8 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x38));
  *(undefined4 *)(lVar3 + 0x38) = 0;
  if (*(int *)(lVar3 + 0x3c) != 0) {
    FUN_140f9edf6(lVar3 + 0x30,0);
  }
  *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x200));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d44f5a FUN_145d44f5a body=279 status=ok
// SIG undefined FUN_145d44f5a(void)

undefined4 * FUN_145d44f5a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141109398(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 4) = 0xffffffff00000000;
  local_58 = 0;
  cVar1 = FUN_141109300(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xc) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1456e9d1a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d45072 FUN_145d45072 body=73 status=ok
// SIG undefined FUN_145d45072(void)

void FUN_145d45072(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145d450bc(param_1,iVar1);
  }
  FUN_145d45150((longlong)iVar1 * 0x120 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145d450bc FUN_145d450bc body=147 status=ok
// SIG undefined FUN_145d450bc(void)

void FUN_145d450bc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x120,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d45150 FUN_145d45150 body=774 status=ok
// SIG undefined FUN_145d45150(void)

undefined8 * FUN_145d45150(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 3) = param_2[6];
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_144a787a6(param_1 + 4,param_2 + 8);
  *(undefined4 *)(param_1 + 6) = param_2[0xc];
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[7] = *(undefined8 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 8) = param_2[0x10];
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_2[0x13];
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x54) = param_2[0x15];
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0x5c) = param_2[0x17];
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_144a787a6(param_1 + 0xc,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xe) = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_144a787a6(param_1 + 0xf,param_2 + 0x1e);
  *(undefined4 *)(param_1 + 0x11) = param_2[0x22];
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x12) = param_2[0x24];
  *(undefined4 *)((longlong)param_1 + 0x94) = param_2[0x25];
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x13) = param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_2[0x27];
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2[0x28];
  *(undefined4 *)((longlong)param_1 + 0xa4) = param_2[0x29];
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x15) = param_2[0x2a];
  *(undefined4 *)((longlong)param_1 + 0xac) = param_2[0x2b];
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0xb4) = param_2[0x2d];
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x2e);
  *(undefined4 *)((longlong)param_1 + 0xbc) = param_2[0x2f];
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0xc4) = param_2[0x31];
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0xcc) = param_2[0x33];
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_2 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0xd4) = param_2[0x35];
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x36);
  *(undefined4 *)((longlong)param_1 + 0xdc) = param_2[0x37];
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0xe4) = param_2[0x39];
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x3a);
  *(undefined4 *)((longlong)param_1 + 0xec) = param_2[0x3b];
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0xf4) = param_2[0x3d];
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  FUN_144a787a6(param_1 + 0x1f,param_2 + 0x3e);
  *(undefined4 *)(param_1 + 0x21) = param_2[0x42];
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x22] = *(undefined8 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x23) = param_2[0x46];
  return param_1;
}



// FUNCTION 145d45456 FUN_145d45456 body=135 status=ok
// SIG undefined FUN_145d45456(void)

undefined8 * FUN_145d45456(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined1 *local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = &local_19;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = param_1;
  local_19 = param_2;
  FUN_14153f3dc(&local_30,&DAT_14c872b08,2);
  FUN_14153f3dc(&local_30,&DAT_14c872af8,3);
  FUN_14153f3dc(&local_30,&DAT_14c872ce8,4);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d454de FUN_145d454de body=136 status=ok
// SIG undefined FUN_145d454de(void)

bool FUN_145d454de(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d45568 FUN_145d45568 body=21 status=ok
// SIG undefined FUN_145d45568(void)

undefined8 FUN_145d45568(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 145d4557e FUN_145d4557e body=132 status=ok
// SIG undefined FUN_145d4557e(void)

void FUN_145d4557e(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 != 0) {
    FUN_14480f766(&DAT_14c867390);
  }
  *param_1 = 0;
  lVar3 = param_1[4];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[3];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN_14585aa56(plVar2,&DAT_14c9a3d18);
      FUN_1458fdb60(plVar2);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar4);
  }
  FUN_1447f69b6(&DAT_14c9a4080);
  return;
}



// FUNCTION 145d45602 FUN_145d45602 body=40 status=ok
// SIG undefined FUN_145d45602(void)

undefined8 FUN_145d45602(undefined8 param_1,int param_2)

{
  FUN_145d4562a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d4562a FUN_145d4562a body=113 status=ok
// SIG undefined FUN_145d4562a(void)

void FUN_145d4562a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4d3b30;
  plVar3 = (longlong *)param_1[0xb];
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
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d4569c FUN_145d4569c body=40 status=ok
// SIG undefined FUN_145d4569c(void)

undefined8 FUN_145d4569c(undefined8 param_1,int param_2)

{
  FUN_145d456c4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d456c4 FUN_145d456c4 body=223 status=ok
// SIG undefined FUN_145d456c4(void)

void FUN_145d456c4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a564b90;
  plVar3 = (longlong *)param_1[0x15];
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
  FUN_145d457a3(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14580f7ba(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14580f78f(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d457a3 FUN_145d457a3 body=43 status=ok
// SIG undefined FUN_145d457a3(void)

void FUN_145d457a3(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145d457ce FUN_145d457ce body=66 status=ok
// SIG undefined FUN_145d457ce(void)

void FUN_145d457ce(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_145d45812(param_1 + 8,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d45812 FUN_145d45812 body=107 status=ok
// SIG undefined FUN_145d45812(void)

void FUN_145d45812(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3) == *param_2) {
        if ((int)(~uVar3 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar3 = uVar3 + 8;
    } while (lVar4 * 8 - uVar3 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145d4587e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_2;
  return;
}



// FUNCTION 145d4587e FUN_145d4587e body=132 status=ok
// SIG undefined FUN_145d4587e(void)

void FUN_145d4587e(longlong param_1,int param_2)

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


