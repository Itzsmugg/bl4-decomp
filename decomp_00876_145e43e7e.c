// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e43e7e FUN_145e43e7e body=226 status=ok
// SIG undefined FUN_145e43e7e(void)

longlong * FUN_145e43e7e(longlong *param_1)

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
  pcVar13 = FUN_1462f8f60;
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



// FUNCTION 145e43f62 FUN_145e43f62 body=138 status=ok
// SIG undefined FUN_145e43f62(void)

code * FUN_145e43f62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSAO_SvPositionScaleBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e43fec;
}



// FUNCTION 145e43fec FUN_145e43fec body=138 status=ok
// SIG undefined FUN_145e43fec(void)

code * FUN_145e43fec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSAO_DownsampledAOInverseSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x178000002b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f8fe8;
}



// FUNCTION 145e44076 FUN_145e44076 body=144 status=ok
// SIG undefined FUN_145e44076(void)

code * FUN_145e44076(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a890ae();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMobileSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f918e;
}



// FUNCTION 145e44106 FUN_145e44106 body=91 status=ok
// SIG undefined FUN_145e44106(void)

undefined8 * FUN_145e44106(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14bcb3cc0;
  param_1[7] = &PTR_LAB_14bcb3fb0;
  param_1[8] = &PTR_LAB_14bcb3fd0;
  lVar1 = param_1[9];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e44161 FUN_145e44161 body=30 status=ok
// SIG undefined FUN_145e44161(void)

void FUN_145e44161(longlong param_1)

{
  FUN_145e44180(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 145e44180 FUN_145e44180 body=246 status=ok
// SIG undefined FUN_145e44180(void)

void FUN_145e44180(longlong *param_1)

{
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145e44276(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145e442ac(param_1 + 8);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e44276 FUN_145e44276 body=53 status=ok
// SIG undefined FUN_145e44276(void)

void FUN_145e44276(longlong *param_1)

{
  FUN_145e44434();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e442ac FUN_145e442ac body=53 status=ok
// SIG undefined FUN_145e442ac(void)

void FUN_145e442ac(longlong *param_1)

{
  FUN_145e442e2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e442e2 FUN_145e442e2 body=336 status=ok
// SIG undefined FUN_145e442e2(void)

void FUN_145e442e2(longlong *param_1)

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
      FUN_1493df46c((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e44434 FUN_145e44434 body=368 status=ok
// SIG undefined FUN_145e44434(void)

void FUN_145e44434(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
      plVar2 = (longlong *)(*local_70 + (longlong)iStack_54 * 400);
      FUN_1493dfcd8(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140a07bd8(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145e445a6 FUN_145e445a6 body=132 status=ok
// SIG undefined FUN_145e445a6(void)

void FUN_145e445a6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145e4462c FUN_145e4462c body=205 status=ok
// SIG undefined FUN_145e4462c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4462c(void)

{
  if ((DAT_14c9cb94f & 2) == 0) {
    DAT_14c9cb94f = DAT_14c9cb94f | 2;
    _DAT_14c9cb8f0 = L"FBuildHeightfieldComposeTilesIndirectArgBufferCS";
    _DAT_14c9cb908 = FUN_146826540;
    _DAT_14c9cb910 = FUN_146825d77;
    _DAT_14c9cb918 = FUN_146825fd6;
    _DAT_14c9cb920 = FUN_1407e02ea;
    _DAT_14c9cb928 = FUN_146826273;
    _DAT_14c9cb900 = FUN_14715a746;
    _DAT_14c9cb940 = 0xffffffff000000e0;
    _DAT_14c9cb948 = 8;
    DAT_14c9cb94c = 0;
    _DAT_14c9cb930 = &LAB_14715a770;
    FUN_145e446fa();
    FUN_1407e00cc(&DAT_14c9cb8e8);
    return;
  }
  return;
}



// FUNCTION 145e446fa FUN_145e446fa body=123 status=ok
// SIG undefined FUN_145e446fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e446fa(void)

{
  _DAT_14c9cf400 = L"BASE";
  DAT_14c9cf42a = 4;
  _DAT_14c9cf408 = FUN_140b35ae4();
  _DAT_14c9cf410 = DAT_14c9cb8f8;
  _DAT_14c9cf418 = &LAB_14682652b;
  DAT_14c9cb8f8 = &DAT_14c9cf400;
  DAT_14c9cb94d = DAT_14c9cb94d + '\x01';
  _DAT_14c9cf420 = 0x100000000;
  if (*(char *)(_DAT_14c9cf408 + 100) != '\0') {
    DAT_14c9cb94e = DAT_14c9cb94e + '\x01';
  }
  return;
}



// FUNCTION 145e44776 FUN_145e44776 body=226 status=ok
// SIG undefined FUN_145e44776(void)

longlong * FUN_145e44776(longlong *param_1)

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
  pcVar13 = FUN_1462c3d68;
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



// FUNCTION 145e4485e FUN_145e4485e body=132 status=ok
// SIG undefined FUN_145e4485e(void)

undefined1 * FUN_145e4485e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWBuildHeightfieldComposeTilesIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4485a;
}



// FUNCTION 145e448e2 FUN_145e448e2 body=138 status=ok
// SIG undefined FUN_145e448e2(void)

code * FUN_145e448e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageComposeHeightfieldIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4485e;
}



// FUNCTION 145e4496c FUN_145e4496c body=205 status=ok
// SIG undefined FUN_145e4496c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4496c(void)

{
  if ((DAT_14c9cc9a7 & 2) == 0) {
    DAT_14c9cc9a7 = DAT_14c9cc9a7 | 2;
    _DAT_14c9cc948 = L"FPageFreeListReturnIndirectArgBufferCS";
    _DAT_14c9cc960 = FUN_146826540;
    _DAT_14c9cc968 = FUN_146825d77;
    _DAT_14c9cc970 = FUN_146825fd6;
    _DAT_14c9cc978 = FUN_1407e02ea;
    _DAT_14c9cc980 = FUN_146826273;
    _DAT_14c9cc958 = FUN_14715b082;
    _DAT_14c9cc998 = 0xffffffff000000e0;
    _DAT_14c9cc9a0 = 8;
    DAT_14c9cc9a4 = 0;
    _DAT_14c9cc988 = &LAB_14715b0ac;
    FUN_145e44a3a();
    FUN_1407e00cc(&DAT_14c9cc940);
    return;
  }
  return;
}



// FUNCTION 145e44a3a FUN_145e44a3a body=123 status=ok
// SIG undefined FUN_145e44a3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e44a3a(void)

{
  _DAT_14c9cf640 = L"BASE";
  DAT_14c9cf66a = 4;
  _DAT_14c9cf648 = FUN_140b35ae4();
  _DAT_14c9cf650 = DAT_14c9cc950;
  _DAT_14c9cf658 = &LAB_14682652b;
  DAT_14c9cc950 = &DAT_14c9cf640;
  DAT_14c9cc9a5 = DAT_14c9cc9a5 + '\x01';
  _DAT_14c9cf660 = 0x100000000;
  if (*(char *)(_DAT_14c9cf648 + 100) != '\0') {
    DAT_14c9cc9a6 = DAT_14c9cc9a6 + '\x01';
  }
  return;
}



// FUNCTION 145e44ab6 FUN_145e44ab6 body=226 status=ok
// SIG undefined FUN_145e44ab6(void)

longlong * FUN_145e44ab6(longlong *param_1)

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
  pcVar13 = FUN_1462c4d92;
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



// FUNCTION 145e44b9e FUN_145e44b9e body=132 status=ok
// SIG undefined FUN_145e44b9e(void)

undefined1 * FUN_145e44b9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWFreeListReturnIndirectArgBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x76a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e44b9a;
}



// FUNCTION 145e44c22 FUN_145e44c22 body=138 status=ok
// SIG undefined FUN_145e44c22(void)

code * FUN_145e44c22(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWPageFreeListAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<int";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000076b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e44b9e;
}



// FUNCTION 145e44cac FUN_145e44cac body=205 status=ok
// SIG undefined FUN_145e44cac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e44cac(void)

{
  if ((DAT_14c9f31ef & 2) == 0) {
    DAT_14c9f31ef = DAT_14c9f31ef | 2;
    _DAT_14c9f3190 = L"FLumenRadiosityIntegrateCS";
    _DAT_14c9f31a8 = FUN_146826540;
    _DAT_14c9f31b0 = FUN_146825d77;
    _DAT_14c9f31b8 = FUN_146825fd6;
    _DAT_14c9f31c0 = FUN_1407e02ea;
    _DAT_14c9f31c8 = FUN_146826273;
    _DAT_14c9f31a0 = FUN_1471ed772;
    _DAT_14c9f31e0 = 0xffffffff000000e0;
    _DAT_14c9f31e8 = 8;
    DAT_14c9f31ec = 0;
    _DAT_14c9f31d0 = &LAB_1471ed79c;
    FUN_145e44d7a();
    FUN_1407e00cc(&DAT_14c9f3188);
    return;
  }
  return;
}



// FUNCTION 145e44d7a FUN_145e44d7a body=123 status=ok
// SIG undefined FUN_145e44d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e44d7a(void)

{
  _DAT_14c9f7af0 = L"BASE";
  DAT_14c9f7b1a = 4;
  _DAT_14c9f7af8 = FUN_140b35ae4();
  _DAT_14c9f7b00 = DAT_14c9f3198;
  _DAT_14c9f7b08 = &LAB_14682652b;
  DAT_14c9f3198 = &DAT_14c9f7af0;
  DAT_14c9f31ed = DAT_14c9f31ed + '\x01';
  _DAT_14c9f7b10 = 0x100000000;
  if (*(char *)(_DAT_14c9f7af8 + 100) != '\0') {
    DAT_14c9f31ee = DAT_14c9f31ee + '\x01';
  }
  return;
}



// FUNCTION 145e44df6 FUN_145e44df6 body=226 status=ok
// SIG undefined FUN_145e44df6(void)

longlong * FUN_145e44df6(longlong *param_1)

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
  pcVar13 = FUN_1462dcb7c;
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



// FUNCTION 145e44ede FUN_145e44ede body=132 status=ok
// SIG undefined FUN_145e44ede(void)

undefined1 * FUN_145e44ede(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e44eda;
}



// FUNCTION 145e44f62 FUN_145e44f62 body=138 status=ok
// SIG undefined FUN_145e44f62(void)

code * FUN_145e44f62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RadiosityProbeSHGreenAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000223;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dcc0a;
}



// FUNCTION 145e44fec FUN_145e44fec body=205 status=ok
// SIG undefined FUN_145e44fec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e44fec(void)

{
  if ((DAT_14c9f8def & 2) == 0) {
    DAT_14c9f8def = DAT_14c9f8def | 2;
    _DAT_14c9f8d90 = L"FComputeLightTileOffsetsPerLightCS";
    _DAT_14c9f8da8 = FUN_146826540;
    _DAT_14c9f8db0 = FUN_146825d77;
    _DAT_14c9f8db8 = FUN_146825fd6;
    _DAT_14c9f8dc0 = FUN_1407e02ea;
    _DAT_14c9f8dc8 = FUN_146826273;
    _DAT_14c9f8da0 = FUN_147204c1e;
    _DAT_14c9f8de0 = 0xffffffff000000e0;
    _DAT_14c9f8de8 = 8;
    DAT_14c9f8dec = 0;
    _DAT_14c9f8dd0 = &LAB_147204c48;
    FUN_145e450ba();
    FUN_1407e00cc(&DAT_14c9f8d88);
    return;
  }
  return;
}



// FUNCTION 145e450ba FUN_145e450ba body=123 status=ok
// SIG undefined FUN_145e450ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e450ba(void)

{
  _DAT_14c9ffbe8 = L"BASE";
  DAT_14c9ffc12 = 4;
  _DAT_14c9ffbf0 = FUN_140b35ae4();
  _DAT_14c9ffbf8 = DAT_14c9f8d98;
  _DAT_14c9ffc00 = &LAB_14682652b;
  DAT_14c9f8d98 = &DAT_14c9ffbe8;
  DAT_14c9f8ded = DAT_14c9f8ded + '\x01';
  _DAT_14c9ffc08 = 0x100000000;
  if (*(char *)(_DAT_14c9ffbf0 + 100) != '\0') {
    DAT_14c9f8dee = DAT_14c9f8dee + '\x01';
  }
  return;
}



// FUNCTION 145e45136 FUN_145e45136 body=226 status=ok
// SIG undefined FUN_145e45136(void)

longlong * FUN_145e45136(longlong *param_1)

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
  pcVar13 = FUN_1462e1f3c;
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



// FUNCTION 145e4521e FUN_145e4521e body=132 status=ok
// SIG undefined FUN_145e4521e(void)

undefined1 * FUN_145e4521e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWLightTileOffsetsPerLight";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4521a;
}



// FUNCTION 145e452a2 FUN_145e452a2 body=138 status=ok
// SIG undefined FUN_145e452a2(void)

code * FUN_145e452a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightTileAllocatorPerLight";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4521e;
}



// FUNCTION 145e4532c FUN_145e4532c body=205 status=ok
// SIG undefined FUN_145e4532c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4532c(void)

{
  if ((DAT_14c9fc5ef & 2) == 0) {
    DAT_14c9fc5ef = DAT_14c9fc5ef | 2;
    _DAT_14c9fc590 = L"FScreenProbeFixupBordersCS";
    _DAT_14c9fc5a8 = FUN_146826540;
    _DAT_14c9fc5b0 = FUN_146825d77;
    _DAT_14c9fc5b8 = FUN_146825fd6;
    _DAT_14c9fc5c0 = FUN_1407e02ea;
    _DAT_14c9fc5c8 = FUN_146826273;
    _DAT_14c9fc5a0 = FUN_147208900;
    _DAT_14c9fc5e0 = 0xffffffff000000e0;
    _DAT_14c9fc5e8 = 8;
    DAT_14c9fc5ec = 0;
    _DAT_14c9fc5d0 = &LAB_14720892a;
    FUN_145e453fa();
    FUN_1407e00cc(&DAT_14c9fc588);
    return;
  }
  return;
}



// FUNCTION 145e453fa FUN_145e453fa body=123 status=ok
// SIG undefined FUN_145e453fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e453fa(void)

{
  _DAT_14ca00528 = L"BASE";
  DAT_14ca00552 = 4;
  _DAT_14ca00530 = FUN_140b35ae4();
  _DAT_14ca00538 = DAT_14c9fc598;
  _DAT_14ca00540 = &LAB_14682652b;
  DAT_14c9fc598 = &DAT_14ca00528;
  DAT_14c9fc5ed = DAT_14c9fc5ed + '\x01';
  _DAT_14ca00548 = 0x100000000;
  if (*(char *)(_DAT_14ca00530 + 100) != '\0') {
    DAT_14c9fc5ee = DAT_14c9fc5ee + '\x01';
  }
  return;
}



// FUNCTION 145e45476 FUN_145e45476 body=226 status=ok
// SIG undefined FUN_145e45476(void)

longlong * FUN_145e45476(longlong *param_1)

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
  pcVar13 = FUN_1462e58fa;
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



// FUNCTION 145e4555e FUN_145e4555e body=132 status=ok
// SIG undefined FUN_145e4555e(void)

undefined1 * FUN_145e4555e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x175;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4555a;
}



// FUNCTION 145e455e2 FUN_145e455e2 body=138 status=ok
// SIG undefined FUN_145e455e2(void)

code * FUN_145e455e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000176;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4555e;
}



// FUNCTION 145e4566c FUN_145e4566c body=205 status=ok
// SIG undefined FUN_145e4566c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4566c(void)

{
  if ((DAT_14ca01687 & 2) == 0) {
    DAT_14ca01687 = DAT_14ca01687 | 2;
    _DAT_14ca01628 = L"FSetupCompactedTracesIndirectArgsCS";
    _DAT_14ca01640 = FUN_146826540;
    _DAT_14ca01648 = FUN_146825d77;
    _DAT_14ca01650 = FUN_146825fd6;
    _DAT_14ca01658 = FUN_1407e02ea;
    _DAT_14ca01660 = FUN_146826273;
    _DAT_14ca01638 = FUN_1472210ba;
    _DAT_14ca01678 = 0xffffffff000000e0;
    _DAT_14ca01680 = 8;
    DAT_14ca01684 = 0;
    _DAT_14ca01668 = &LAB_1472210e4;
    FUN_145e4573a();
    FUN_1407e00cc(&DAT_14ca01620);
    return;
  }
  return;
}



// FUNCTION 145e4573a FUN_145e4573a body=123 status=ok
// SIG undefined FUN_145e4573a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4573a(void)

{
  _DAT_14ca078c8 = L"BASE";
  DAT_14ca078f2 = 4;
  _DAT_14ca078d0 = FUN_140b35ae4();
  _DAT_14ca078d8 = DAT_14ca01630;
  _DAT_14ca078e0 = &LAB_14682652b;
  DAT_14ca01630 = &DAT_14ca078c8;
  DAT_14ca01685 = DAT_14ca01685 + '\x01';
  _DAT_14ca078e8 = 0x100000000;
  if (*(char *)(_DAT_14ca078d0 + 100) != '\0') {
    DAT_14ca01686 = DAT_14ca01686 + '\x01';
  }
  return;
}



// FUNCTION 145e457b6 FUN_145e457b6 body=226 status=ok
// SIG undefined FUN_145e457b6(void)

longlong * FUN_145e457b6(longlong *param_1)

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
  pcVar13 = FUN_1462e8480;
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



// FUNCTION 145e4589e FUN_145e4589e body=132 status=ok
// SIG undefined FUN_145e4589e(void)

undefined1 * FUN_145e4589e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeCompactTracingIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x150;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4589a;
}



// FUNCTION 145e45922 FUN_145e45922 body=138 status=ok
// SIG undefined FUN_145e45922(void)

code * FUN_145e45922(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000151;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4589e;
}



// FUNCTION 145e459ac FUN_145e459ac body=205 status=ok
// SIG undefined FUN_145e459ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e459ac(void)

{
  if ((DAT_14ca14ac7 & 2) == 0) {
    DAT_14ca14ac7 = DAT_14ca14ac7 | 2;
    _DAT_14ca14a68 = L"FInstanceHierarchySanitizeInstanceArgs_CS";
    _DAT_14ca14a80 = FUN_146826540;
    _DAT_14ca14a88 = FUN_146825d77;
    _DAT_14ca14a90 = FUN_146825fd6;
    _DAT_14ca14a98 = FUN_1407e02ea;
    _DAT_14ca14aa0 = FUN_146826273;
    _DAT_14ca14a78 = FUN_147251eac;
    _DAT_14ca14ab8 = 0xffffffff000000e0;
    _DAT_14ca14ac0 = 8;
    DAT_14ca14ac4 = 0;
    _DAT_14ca14aa8 = &LAB_147251ed8;
    FUN_145e45a7a();
    FUN_1407e00cc(&DAT_14ca14a60);
    return;
  }
  return;
}



// FUNCTION 145e45a7a FUN_145e45a7a body=123 status=ok
// SIG undefined FUN_145e45a7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e45a7a(void)

{
  _DAT_14ca19070 = L"BASE";
  DAT_14ca1909a = 4;
  _DAT_14ca19078 = FUN_140b35ae4();
  _DAT_14ca19080 = DAT_14ca14a70;
  _DAT_14ca19088 = &LAB_14682652b;
  DAT_14ca14a70 = &DAT_14ca19070;
  DAT_14ca14ac5 = DAT_14ca14ac5 + '\x01';
  _DAT_14ca19090 = 0x100000000;
  if (*(char *)(_DAT_14ca19078 + 100) != '\0') {
    DAT_14ca14ac6 = DAT_14ca14ac6 + '\x01';
  }
  return;
}



// FUNCTION 145e45af6 FUN_145e45af6 body=226 status=ok
// SIG undefined FUN_145e45af6(void)

longlong * FUN_145e45af6(longlong *param_1)

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
  pcVar13 = FUN_1462f0b90;
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



// FUNCTION 145e45bde FUN_145e45bde body=132 status=ok
// SIG undefined FUN_145e45bde(void)

undefined1 * FUN_145e45bde(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InOutInstanceWorkArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x301;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e45bda;
}



// FUNCTION 145e45c62 FUN_145e45c62 body=138 status=ok
// SIG undefined FUN_145e45c62(void)

code * FUN_145e45c62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxInstanceWorkGroups";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000303;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147257666;
}



// FUNCTION 145e45cec FUN_145e45cec body=205 status=ok
// SIG undefined FUN_145e45cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e45cec(void)

{
  if ((DAT_14ca5c60f & 2) == 0) {
    DAT_14ca5c60f = DAT_14ca5c60f | 2;
    _DAT_14ca5c5b0 = L"FCopyDepthPS";
    _DAT_14ca5c5c8 = FUN_146826540;
    _DAT_14ca5c5d0 = FUN_146825d77;
    _DAT_14ca5c5d8 = FUN_146825fd6;
    _DAT_14ca5c5e0 = FUN_1407e02ea;
    _DAT_14ca5c5e8 = FUN_146826273;
    _DAT_14ca5c5c0 = FUN_14731594e;
    _DAT_14ca5c600 = 0xffffffff000000e0;
    _DAT_14ca5c608 = 8;
    DAT_14ca5c60c = 0;
    _DAT_14ca5c5f0 = &LAB_147315978;
    FUN_145e45dba();
    FUN_1407e00cc(&DAT_14ca5c5a8);
    return;
  }
  return;
}



// FUNCTION 145e45dba FUN_145e45dba body=123 status=ok
// SIG undefined FUN_145e45dba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e45dba(void)

{
  _DAT_14ca5f7a0 = L"BASE";
  DAT_14ca5f7ca = 4;
  _DAT_14ca5f7a8 = FUN_140b35ae4();
  _DAT_14ca5f7b0 = DAT_14ca5c5b8;
  _DAT_14ca5f7b8 = &LAB_14682652b;
  DAT_14ca5c5b8 = &DAT_14ca5f7a0;
  DAT_14ca5c60d = DAT_14ca5c60d + '\x01';
  _DAT_14ca5f7c0 = 0x100000000;
  if (*(char *)(_DAT_14ca5f7a8 + 100) != '\0') {
    DAT_14ca5c60e = DAT_14ca5c60e + '\x01';
  }
  return;
}



// FUNCTION 145e45e36 FUN_145e45e36 body=226 status=ok
// SIG undefined FUN_145e45e36(void)

longlong * FUN_145e45e36(longlong *param_1)

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
  pcVar13 = FUN_14630b1a0;
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



// FUNCTION 145e45f1e FUN_145e45f1e body=132 status=ok
// SIG undefined FUN_145e45f1e(void)

undefined1 * FUN_145e45f1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e45f1a;
}



// FUNCTION 145e45fa2 FUN_145e45fa2 body=138 status=ok
// SIG undefined FUN_145e45fa2(void)

code * FUN_145e45fa2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTextureMS";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DMS";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e45f1e;
}



// FUNCTION 145e4602c FUN_145e4602c body=205 status=ok
// SIG undefined FUN_145e4602c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4602c(void)

{
  if ((DAT_14ca60437 & 2) == 0) {
    DAT_14ca60437 = DAT_14ca60437 | 2;
    _DAT_14ca603d8 = L"FClearUAVBuildIndirectDispatchBufferCS";
    _DAT_14ca603f0 = FUN_146826540;
    _DAT_14ca603f8 = FUN_146825d77;
    _DAT_14ca60400 = FUN_146825fd6;
    _DAT_14ca60408 = FUN_1407e02ea;
    _DAT_14ca60410 = FUN_146826273;
    _DAT_14ca603e8 = FUN_1473212ea;
    _DAT_14ca60428 = 0xffffffff000000e0;
    _DAT_14ca60430 = 8;
    DAT_14ca60434 = 0;
    _DAT_14ca60418 = &LAB_147321314;
    FUN_145e460fa();
    FUN_1407e00cc(&DAT_14ca603d0);
    return;
  }
  return;
}



// FUNCTION 145e460fa FUN_145e460fa body=123 status=ok
// SIG undefined FUN_145e460fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e460fa(void)

{
  _DAT_14ca63418 = L"BASE";
  DAT_14ca63442 = 4;
  _DAT_14ca63420 = FUN_140b35ae4();
  _DAT_14ca63428 = DAT_14ca603e0;
  _DAT_14ca63430 = &LAB_14682652b;
  DAT_14ca603e0 = &DAT_14ca63418;
  DAT_14ca60435 = DAT_14ca60435 + '\x01';
  _DAT_14ca63438 = 0x100000000;
  if (*(char *)(_DAT_14ca63420 + 100) != '\0') {
    DAT_14ca60436 = DAT_14ca60436 + '\x01';
  }
  return;
}



// FUNCTION 145e46176 FUN_145e46176 body=226 status=ok
// SIG undefined FUN_145e46176(void)

longlong * FUN_145e46176(longlong *param_1)

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
  pcVar13 = FUN_14630eb20;
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



// FUNCTION 145e4625e FUN_145e4625e body=132 status=ok
// SIG undefined FUN_145e4625e(void)

undefined1 * FUN_145e4625e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4625a;
}



// FUNCTION 145e462e2 FUN_145e462e2 body=138 status=ok
// SIG undefined FUN_145e462e2(void)

code * FUN_145e462e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Offset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4625e;
}



// FUNCTION 145e4636c FUN_145e4636c body=205 status=ok
// SIG undefined FUN_145e4636c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4636c(void)

{
  if ((DAT_14ca671bf & 2) == 0) {
    DAT_14ca671bf = DAT_14ca671bf | 2;
    _DAT_14ca67160 = L"FVirtualShadowMapProjectionCompositePS";
    _DAT_14ca67178 = FUN_146826540;
    _DAT_14ca67180 = FUN_146825d77;
    _DAT_14ca67188 = FUN_146825fd6;
    _DAT_14ca67190 = FUN_1407e02ea;
    _DAT_14ca67198 = FUN_146826273;
    _DAT_14ca67170 = FUN_14732d31a;
    _DAT_14ca671b0 = 0xffffffff000000e0;
    _DAT_14ca671b8 = 8;
    DAT_14ca671bc = 0;
    _DAT_14ca671a0 = &LAB_14732d344;
    FUN_145e4643a();
    FUN_1407e00cc(&DAT_14ca67158);
    return;
  }
  return;
}



// FUNCTION 145e4643a FUN_145e4643a body=123 status=ok
// SIG undefined FUN_145e4643a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4643a(void)

{
  _DAT_14ca69140 = L"BASE";
  DAT_14ca6916a = 4;
  _DAT_14ca69148 = FUN_140b35ae4();
  _DAT_14ca69150 = DAT_14ca67168;
  _DAT_14ca69158 = &LAB_14682652b;
  DAT_14ca67168 = &DAT_14ca69140;
  DAT_14ca671bd = DAT_14ca671bd + '\x01';
  _DAT_14ca69160 = 0x100000000;
  if (*(char *)(_DAT_14ca69148 + 100) != '\0') {
    DAT_14ca671be = DAT_14ca671be + '\x01';
  }
  return;
}



// FUNCTION 145e464b6 FUN_145e464b6 body=226 status=ok
// SIG undefined FUN_145e464b6(void)

longlong * FUN_145e464b6(longlong *param_1)

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
  pcVar13 = FUN_14631394c;
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



// FUNCTION 145e4659e FUN_145e4659e body=132 status=ok
// SIG undefined FUN_145e4659e(void)

undefined1 * FUN_145e4659e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputShadowFactor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x222;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4659a;
}



// FUNCTION 145e46622 FUN_145e46622 body=138 status=ok
// SIG undefined FUN_145e46622(void)

code * FUN_145e46622(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bModulateRGB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000223;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4659e;
}



// FUNCTION 145e466ac FUN_145e466ac body=205 status=ok
// SIG undefined FUN_145e466ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e466ac(void)

{
  if ((DAT_14caffa17 & 2) == 0) {
    DAT_14caffa17 = DAT_14caffa17 | 2;
    _DAT_14caff9b8 = L"FUpdateClusterLeafFlags_CS";
    _DAT_14caff9d0 = FUN_146826540;
    _DAT_14caff9d8 = FUN_146825d77;
    _DAT_14caff9e0 = FUN_146825fd6;
    _DAT_14caff9e8 = FUN_1407e02ea;
    _DAT_14caff9f0 = FUN_146826273;
    _DAT_14caff9c8 = FUN_147ccc83a;
    _DAT_14caffa08 = 0xffffffff000000e0;
    _DAT_14caffa10 = 8;
    DAT_14caffa14 = 0;
    _DAT_14caff9f8 = &LAB_147ccc864;
    FUN_145e4677a();
    FUN_1407e00cc(&DAT_14caff9b0);
    return;
  }
  return;
}



// FUNCTION 145e4677a FUN_145e4677a body=123 status=ok
// SIG undefined FUN_145e4677a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4677a(void)

{
  _DAT_14cb00298 = L"BASE";
  DAT_14cb002c2 = 4;
  _DAT_14cb002a0 = FUN_140b35ae4();
  _DAT_14cb002a8 = DAT_14caff9c0;
  _DAT_14cb002b0 = &LAB_14682652b;
  DAT_14caff9c0 = &DAT_14cb00298;
  DAT_14caffa15 = DAT_14caffa15 + '\x01';
  _DAT_14cb002b8 = 0x100000000;
  if (*(char *)(_DAT_14cb002a0 + 100) != '\0') {
    DAT_14caffa16 = DAT_14caffa16 + '\x01';
  }
  return;
}



// FUNCTION 145e467f6 FUN_145e467f6 body=226 status=ok
// SIG undefined FUN_145e467f6(void)

longlong * FUN_145e467f6(longlong *param_1)

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
  pcVar13 = FUN_1463fca9e;
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



// FUNCTION 145e468de FUN_145e468de body=132 status=ok
// SIG undefined FUN_145e468de(void)

undefined1 * FUN_145e468de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumClusterUpdates";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e468da;
}



// FUNCTION 145e46962 FUN_145e46962 body=138 status=ok
// SIG undefined FUN_145e46962(void)

code * FUN_145e46962(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedClusterUpdates";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e468de;
}



// FUNCTION 145e469ec FUN_145e469ec body=26 status=ok
// SIG undefined FUN_145e469ec(void)

void FUN_145e469ec(undefined8 param_1)

{
  FUN_145e46a06();
  FUN_145e46a08(param_1);
  return;
}



// FUNCTION 145e46a06 FUN_145e46a06 body=1 status=ok
// SIG undefined FUN_145e46a06(void)

void FUN_145e46a06(void)

{
  return;
}



// FUNCTION 145e46a08 FUN_145e46a08 body=408 status=ok
// SIG undefined FUN_145e46a08(void)

void FUN_145e46a08(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_51;
  undefined1 local_50 [8];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x500000000;
  iVar1 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x170);
    lVar6 = 0;
    do {
      local_51 = FUN_145e46c12(*(undefined8 *)(lVar7 + lVar6));
      FUN_145e46ba2(local_50,&local_51);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
    lVar7 = (longlong)(int)local_40;
    puVar4 = local_50;
    if (local_48 != (undefined1 *)0x0) {
      puVar4 = local_48;
    }
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        lVar2 = DAT_14cb0d2b0;
        if (puVar4[lVar6] == '\x05') {
          if (DAT_14cb0d2b0 != 0) {
            plVar3 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
            if (plVar3 == (longlong *)0x0) {
              FUN_145876474(DAT_14cb0d2b0);
              plVar3 = *(longlong **)(lVar2 + 0x2c8);
              if (plVar3 == (longlong *)0x0) goto switchD_145e46aee_caseD_5;
            }
            (**(code **)(*plVar3 + 0x2a0))(plVar3,0);
          }
          goto switchD_145e46aee_caseD_5;
        }
        switch(puVar4[lVar6]) {
        case 2:
          puVar5 = DAT_14c872ce8;
          iVar1 = DAT_14c872cf0;
          break;
        case 3:
          puVar5 = DAT_14c872af8;
          iVar1 = DAT_14c872b00;
          break;
        case 4:
          puVar5 = DAT_14c872ae8;
          iVar1 = DAT_14c872af0;
          break;
        default:
          goto switchD_145e46aee_caseD_5;
        case 6:
          FUN_145e46d3e(param_1);
          goto switchD_145e46aee_caseD_5;
        }
        if (iVar1 == 0) {
          puVar5 = &DAT_149dfb77a;
        }
        local_68 = 1;
        FUN_140d6793a(param_1,0x4000,puVar5,DAT_14c872ce0);
switchD_145e46aee_caseD_5:
        lVar6 = lVar6 + 1;
      } while (lVar7 != lVar6);
    }
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e46ba2 FUN_145e46ba2 body=111 status=ok
// SIG undefined FUN_145e46ba2(void)

void FUN_145e46ba2(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (*(char *)(lVar3 + lVar4) == *param_2) {
        if ((int)lVar4 != -1) {
          return;
        }
        break;
      }
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_148b05ee4(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(char *)(param_1 + lVar5) = *param_2;
  return;
}



// FUNCTION 145e46c12 FUN_145e46c12 body=300 status=ok
// SIG undefined FUN_145e46c12(void)

longlong FUN_145e46c12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((DAT_14cb9a800 != 0) && ((longlong)*(int *)(param_1 + 0xb8) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar1) == DAT_14cb9a800) {
        return CONCAT71((int7)((ulonglong)DAT_14cb9a800 >> 8),2);
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0xb8) * 8 != lVar1);
  }
  if ((DAT_14cb9a808 != 0) && ((longlong)*(int *)(param_1 + 0xb8) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar1) == DAT_14cb9a808) {
        return CONCAT71((int7)((ulonglong)DAT_14cb9a808 >> 8),3);
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0xb8) * 8 != lVar1);
  }
  if ((DAT_14cb9a810 != 0) && ((longlong)*(int *)(param_1 + 0xb8) != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar1) == DAT_14cb9a810) {
        return CONCAT71((int7)((ulonglong)DAT_14cb9a810 >> 8),4);
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)*(int *)(param_1 + 0xb8) * 8 != lVar1);
  }
  lVar1 = DAT_14cb9a810;
  if ((DAT_14cb9a818 != 0) && ((longlong)*(int *)(param_1 + 0xb8) != 0)) {
    lVar2 = 0;
    do {
      lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),5);
      if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar2) == DAT_14cb9a818) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0xb8) * 8 != lVar2);
  }
  if ((DAT_14cb9a828 != 0) && ((longlong)*(int *)(param_1 + 0xb8) != 0)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar2) == DAT_14cb9a828) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),6);
      }
      lVar2 = lVar2 + 8;
      lVar1 = 0;
    } while ((longlong)*(int *)(param_1 + 0xb8) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 145e46d3e FUN_145e46d3e body=186 status=ok
// SIG undefined FUN_145e46d3e(void)

void FUN_145e46d3e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  else {
    plVar3 = (longlong *)0x0;
  }
  lVar1 = (**(code **)(*plVar3 + 0x180))(plVar3);
  if (lVar1 != 0) {
    lVar2 = FUN_141221176(lVar1);
    lVar1 = FUN_14128aaf8(lVar1);
    if ((lVar2 != 0) && (lVar1 != 0)) {
      FUN_1409845a0(lVar2,local_2c,plVar3);
      if (-1 < local_2c[0]) {
        local_48 = 0;
        uStack_40 = 0;
        FUN_140ceec8e(lVar1,local_50,local_2c);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e46dfa FUN_145e46dfa body=40 status=ok
// SIG undefined FUN_145e46dfa(void)

undefined8 FUN_145e46dfa(undefined8 param_1,int param_2)

{
  FUN_145e46e22();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e46e22 FUN_145e46e22 body=157 status=ok
// SIG undefined FUN_145e46e22(void)

void FUN_145e46e22(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5e5ba0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x10))();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145e46ec0 FUN_145e46ec0 body=289 status=ok
// SIG undefined FUN_145e46ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e46ec0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf42c8) {
    FUN_144b3d300(&DAT_14caf42c8);
    if (DAT_14caf42c8 == -1) {
      FUN_145e4712c();
      FUN_145e46fe2();
      FUN_140db5666(&DAT_14caf4220,0,&DAT_14caf41b8,L"FParticleTileVS",
                    L"/Engine/Private/ParticleSimulationShader.usf",L"VertexMain",0,1,FUN_147c0f984,
                    FUN_147c0f924,&LAB_147c0f920,&LAB_147c0f91c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14caf5378);
      _DAT_14caf4220 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d084c);
      _Init_thread_footer(&DAT_14caf42c8);
    }
  }
  return &DAT_14caf4220;
}



// FUNCTION 145e46fe2 FUN_145e46fe2 body=205 status=ok
// SIG undefined FUN_145e46fe2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e46fe2(void)

{
  if ((DAT_14caf421f & 2) == 0) {
    DAT_14caf421f = DAT_14caf421f | 2;
    _DAT_14caf41c0 = L"FParticleTileVS";
    _DAT_14caf41d8 = FUN_146826540;
    _DAT_14caf41e0 = FUN_146825d77;
    _DAT_14caf41e8 = FUN_146825fd6;
    _DAT_14caf41f0 = FUN_1407e02ea;
    _DAT_14caf41f8 = FUN_146826273;
    _DAT_14caf41d0 = FUN_147c0f8ee;
    _DAT_14caf4210 = 0xffffffff000000e0;
    _DAT_14caf4218 = 8;
    DAT_14caf421c = 0;
    _DAT_14caf4200 = &LAB_147c0f918;
    FUN_145e470b0();
    FUN_1407e00cc(&DAT_14caf41b8);
    return;
  }
  return;
}



// FUNCTION 145e470b0 FUN_145e470b0 body=123 status=ok
// SIG undefined FUN_145e470b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e470b0(void)

{
  _DAT_14caf5678 = L"BASE";
  DAT_14caf56a2 = 4;
  _DAT_14caf5680 = FUN_140b35ae4();
  _DAT_14caf5688 = DAT_14caf41c8;
  _DAT_14caf5690 = &LAB_14682652b;
  DAT_14caf41c8 = &DAT_14caf5678;
  DAT_14caf421d = DAT_14caf421d + '\x01';
  _DAT_14caf5698 = 0x100000000;
  if (*(char *)(_DAT_14caf5680 + 100) != '\0') {
    DAT_14caf421e = DAT_14caf421e + '\x01';
  }
  return;
}



// FUNCTION 145e4712c FUN_145e4712c body=261 status=ok
// SIG undefined FUN_145e4712c(void)

void FUN_145e4712c(void)

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
              0x110) < DAT_14caf53f8) {
    FUN_144b3d300(&DAT_14caf53f8);
    if (DAT_14caf53f8 == -1) {
      FUN_145e47232(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x486;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf5378,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435df52c);
      _Init_thread_footer(&DAT_14caf53f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e47232 FUN_145e47232 body=226 status=ok
// SIG undefined FUN_145e47232(void)

longlong * FUN_145e47232(longlong *param_1)

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
  pcVar13 = FUN_1463f00b2;
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



// FUNCTION 145e4731a FUN_145e4731a body=132 status=ok
// SIG undefined FUN_145e4731a(void)

undefined1 * FUN_145e4731a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TexCoordScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x487;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e47316;
}



// FUNCTION 145e4739e FUN_145e4739e body=138 status=ok
// SIG undefined FUN_145e4739e(void)

code * FUN_145e4739e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TilePageScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000488;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4731a;
}



// FUNCTION 145e47430 FUN_145e47430 body=354 status=ok
// SIG undefined FUN_145e47430(void)

undefined8 * FUN_145e47430(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_141573388();
  *param_1 = &PTR_FUN_14ab39b00;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 **)((longlong)param_1 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x34) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x3c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x44) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x4c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x54) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x5c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 100) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  param_1[0xf] = 0x3fd99999a0000000;
  param_1[0x10] = 0x3fd99999a0000000;
  param_1[0x11] = 0x3fd99999a0000000;
  param_1[0x12] = 0x3951b7173dcccccd;
  *(undefined4 *)(param_1 + 0x13) = 0x3951b717;
  param_1[0x14] = 0x3fc99999a0000000;
  param_1[0x15] = 0x3fc99999a0000000;
  param_1[0x16] = 0x3fc99999a0000000;
  param_1[0x17] = 0x3fc99999a0000000;
  param_1[0x18] = 0x3fc99999a0000000;
  param_1[0x19] = 0x3fc99999a0000000;
  param_1[0x1a] = 0x3ff0000000000000;
  param_1[0x1b] = 0x3ff0000000000000;
  param_1[0x1c] = 0x3ff0000000000000;
  param_1[0x1d] = 0x3ff0000000000000;
  param_1[0x1e] = 0x3ff0000000000000;
  param_1[0x1f] = 0x3ff0000000000000;
  param_1[0x20] = 0x3ff0000000000000;
  param_1[0x21] = 0x3ff0000000000000;
  param_1[0x22] = 0x3ff0000000000000;
  param_1[0x23] = 0x42c8000042f00000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  param_1[0x27] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x25] = DAT_14c8464e0;
  param_1[0x26] = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 **)((longlong)param_1 + 0x144) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x14c) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined1 **)((longlong)param_1 + 0x15c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x164) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x16c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x174) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x17c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x184) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x18c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x194) = &DAT_3f8000003f800000;
  return param_1;
}



// FUNCTION 145e4759e FUN_145e4759e body=333 status=ok
// SIG undefined FUN_145e4759e(void)

undefined8 * FUN_145e4759e(undefined8 *param_1)

{
  FUN_140f2777c();
  *param_1 = &PTR_FUN_14ac07950;
  param_1[0x72] = &PTR_FUN_14ac08230;
  param_1[0xe9] = &PTR_FUN_14ac08290;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0xbf800000;
  *(byte *)((longlong)param_1 + 0x784) = *(byte *)((longlong)param_1 + 0x784) | 7;
  *(undefined1 *)(param_1 + 0xf1) = 3;
  *(byte *)(param_1 + 0xf2) = *(byte *)(param_1 + 0xf2) & 0xe0;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xf3) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x79c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f000000;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1fe50) {
    FUN_144b3d300(&DAT_14cb1fe50);
    if (DAT_14cb1fe50 == -1) {
      FUN_1446f470e(&DAT_14cb1fe48,L"NoCollision",1);
      _Init_thread_footer(&DAT_14cb1fe50);
    }
  }
  (**(code **)(*(longlong *)param_1[0x87] + 0x728))((longlong *)param_1[0x87],DAT_14cb1fe48,1);
  FUN_145e476ec(param_1 + 0xf2,&DAT_14cacb108);
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 4;
  if (param_1[0x86] != 0) {
    *(undefined1 *)(param_1[0x86] + 0x5a8) = 0;
  }
  return param_1;
}



// FUNCTION 145e476ec FUN_145e476ec body=50 status=ok
// SIG undefined FUN_145e476ec(void)

undefined1 * FUN_145e476ec(undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_144a787a6(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 145e4771e FUN_145e4771e body=282 status=ok
// SIG undefined FUN_145e4771e(void)

undefined8 * FUN_145e4771e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x120);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b8009c0;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x110);
  FUN_145e4783c(plVar1);
  plVar4[0x19] = 0x1e00000019;
  plVar4[2] = (longlong)&PTR_FUN_14b7fd950;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1c] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x1e] = 0;
  plVar4[0x1f] = 0;
  plVar4[0x20] = 0;
  plVar4[0x21] = 0;
  plVar4[0x22] = 0;
  plVar4[0x23] = 0;
  local_30 = plVar1;
  local_28 = plVar4;
  FUN_145e478d2(&local_30,plVar1);
  plVar3 = local_28;
  *param_1 = plVar1;
  param_1[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4783c FUN_145e4783c body=149 status=ok
// SIG undefined FUN_145e4783c(void)

void FUN_145e4783c(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14ab64e60;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x461c400040e00000;
  param_1[7] = 0x3dcccccd466a6000;
  param_1[8] = 0x3f80000041200000;
  param_1[9] = 0x144610000;
  param_1[10] = 0x466a6000453b8000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00d1e03;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}



// FUNCTION 145e478d2 FUN_145e478d2 body=157 status=ok
// SIG undefined FUN_145e478d2(void)

void FUN_145e478d2(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_145e4790c;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_145e4790c;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145e4790c:
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
                    /* WARNING: Could not recover jumptable at 0x000145e4796b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145e47978 FUN_145e47978 body=189 status=ok
// SIG undefined FUN_145e47978(void)

undefined8 * FUN_145e47978(undefined8 *param_1)

{
  FUN_1410832cc();
  *param_1 = &PTR_FUN_14bc3a7e0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_14020fad6(param_1 + 0xc,L"ProjectionMode");
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  FUN_14020fad6(param_1 + 0xe,L"Width");
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_14020fad6(param_1 + 0x10,L"NearClipPlane");
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_14020fad6(param_1 + 0x12,L"FarClipPlane");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_14020fad6(param_1 + 0x14,L"AspectRatio");
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_14020fad6(param_1 + 0x16,L"FieldOfView");
  return param_1;
}



// FUNCTION 145e47a36 FUN_145e47a36 body=205 status=ok
// SIG undefined FUN_145e47a36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e47a36(void)

{
  if ((DAT_14c9c5e0f & 2) == 0) {
    DAT_14c9c5e0f = DAT_14c9c5e0f | 2;
    _DAT_14c9c5db0 = L"FFilterHistoryPS";
    _DAT_14c9c5dc8 = FUN_146826540;
    _DAT_14c9c5dd0 = FUN_146825d77;
    _DAT_14c9c5dd8 = FUN_146825fd6;
    _DAT_14c9c5de0 = FUN_1407e02ea;
    _DAT_14c9c5de8 = FUN_146826273;
    _DAT_14c9c5dc0 = FUN_14714e9b0;
    _DAT_14c9c5e00 = 0xffffffff000000e0;
    _DAT_14c9c5e08 = 8;
    DAT_14c9c5e0c = 0;
    _DAT_14c9c5df0 = &LAB_14714e9da;
    FUN_145e47b04();
    FUN_1407e00cc(&DAT_14c9c5da8);
    return;
  }
  return;
}



// FUNCTION 145e47b04 FUN_145e47b04 body=123 status=ok
// SIG undefined FUN_145e47b04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e47b04(void)

{
  _DAT_14c9c9420 = L"BASE";
  DAT_14c9c944a = 4;
  _DAT_14c9c9428 = FUN_140b35ae4();
  _DAT_14c9c9430 = DAT_14c9c5db8;
  _DAT_14c9c9438 = &LAB_14682652b;
  DAT_14c9c5db8 = &DAT_14c9c9420;
  DAT_14c9c5e0d = DAT_14c9c5e0d + '\x01';
  _DAT_14c9c9440 = 0x100000000;
  if (*(char *)(_DAT_14c9c9428 + 100) != '\0') {
    DAT_14c9c5e0e = DAT_14c9c5e0e + '\x01';
  }
  return;
}



// FUNCTION 145e47b80 FUN_145e47b80 body=226 status=ok
// SIG undefined FUN_145e47b80(void)

longlong * FUN_145e47b80(longlong *param_1)

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
  pcVar13 = FUN_1462be9ca;
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



// FUNCTION 145e47c68 FUN_145e47c68 body=136 status=ok
// SIG undefined FUN_145e47c68(void)

code * FUN_145e47c68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BentNormalAOSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715184a;
}



// FUNCTION 145e47cf0 FUN_145e47cf0 body=138 status=ok
// SIG undefined FUN_145e47cf0(void)

undefined1 * FUN_145e47cf0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e47c64;
}



// FUNCTION 145e47d7a FUN_145e47d7a body=205 status=ok
// SIG undefined FUN_145e47d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e47d7a(void)

{
  if ((DAT_14c9cc87f & 2) == 0) {
    DAT_14c9cc87f = DAT_14c9cc87f | 2;
    _DAT_14c9cc820 = L"FAllocatePagesCS";
    _DAT_14c9cc838 = FUN_146826540;
    _DAT_14c9cc840 = FUN_146825d77;
    _DAT_14c9cc848 = FUN_146825fd6;
    _DAT_14c9cc850 = FUN_1407e02ea;
    _DAT_14c9cc858 = FUN_146826273;
    _DAT_14c9cc830 = FUN_14715afc0;
    _DAT_14c9cc870 = 0xffffffff000000e0;
    _DAT_14c9cc878 = 8;
    DAT_14c9cc87c = 0;
    _DAT_14c9cc860 = &LAB_14715afea;
    FUN_145e47e48();
    FUN_1407e00cc(&DAT_14c9cc818);
    return;
  }
  return;
}



// FUNCTION 145e47e48 FUN_145e47e48 body=123 status=ok
// SIG undefined FUN_145e47e48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e47e48(void)

{
  _DAT_14c9cf610 = L"BASE";
  DAT_14c9cf63a = 4;
  _DAT_14c9cf618 = FUN_140b35ae4();
  _DAT_14c9cf620 = DAT_14c9cc828;
  _DAT_14c9cf628 = &LAB_14682652b;
  DAT_14c9cc828 = &DAT_14c9cf610;
  DAT_14c9cc87d = DAT_14c9cc87d + '\x01';
  _DAT_14c9cf630 = 0x100000000;
  if (*(char *)(_DAT_14c9cf618 + 100) != '\0') {
    DAT_14c9cc87e = DAT_14c9cc87e + '\x01';
  }
  return;
}



// FUNCTION 145e47ec8 FUN_145e47ec8 body=136 status=ok
// SIG undefined FUN_145e47ec8(void)

code * FUN_145e47ec8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000724;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c4bea;
}



// FUNCTION 145e47f50 FUN_145e47f50 body=138 status=ok
// SIG undefined FUN_145e47f50(void)

code * FUN_145e47f50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWGbxGIMesh_PageTableCombinedTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22000000727;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471646a6;
}



// FUNCTION 145e47fda FUN_145e47fda body=292 status=ok
// SIG undefined FUN_145e47fda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e47fda(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9940) {
    FUN_144b3d300(&DAT_14c9d9940);
    if (DAT_14c9d9940 == -1) {
      FUN_145e48248();
      FUN_145e480fe();
      FUN_140db5666(&DAT_14c9d9898,0,&DAT_14c9d9830,L"FVisiblityRasterHWPS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterHW.usf",L"PSMain",3,1,
                    FUN_14718579a,FUN_14718573a,&LAB_1462ca4ae,&LAB_147185736,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9db250);
      _DAT_14c9d9898 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661d5);
      _Init_thread_footer(&DAT_14c9d9940);
    }
  }
  return &DAT_14c9d9898;
}



// FUNCTION 145e480fe FUN_145e480fe body=205 status=ok
// SIG undefined FUN_145e480fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e480fe(void)

{
  if ((DAT_14c9d9897 & 2) == 0) {
    DAT_14c9d9897 = DAT_14c9d9897 | 2;
    _DAT_14c9d9838 = L"FVisiblityRasterHWPS";
    _DAT_14c9d9850 = FUN_146826540;
    _DAT_14c9d9858 = FUN_146825d77;
    _DAT_14c9d9860 = FUN_146825fd6;
    _DAT_14c9d9868 = FUN_1407e02ea;
    _DAT_14c9d9870 = FUN_146826273;
    _DAT_14c9d9848 = FUN_147185708;
    _DAT_14c9d9888 = 0xffffffff000000e0;
    _DAT_14c9d9890 = 8;
    DAT_14c9d9894 = 0;
    _DAT_14c9d9878 = &LAB_147185732;
    FUN_145e481cc();
    FUN_1407e00cc(&DAT_14c9d9830);
    return;
  }
  return;
}



// FUNCTION 145e481cc FUN_145e481cc body=123 status=ok
// SIG undefined FUN_145e481cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e481cc(void)

{
  _DAT_14c9dc368 = L"BASE";
  DAT_14c9dc392 = 4;
  _DAT_14c9dc370 = FUN_140b35ae4();
  _DAT_14c9dc378 = DAT_14c9d9840;
  _DAT_14c9dc380 = &LAB_14682652b;
  DAT_14c9d9840 = &DAT_14c9dc368;
  DAT_14c9d9895 = DAT_14c9d9895 + '\x01';
  _DAT_14c9dc388 = 0x100000000;
  if (*(char *)(_DAT_14c9dc370 + 100) != '\0') {
    DAT_14c9d9896 = DAT_14c9d9896 + '\x01';
  }
  return;
}



// FUNCTION 145e48248 FUN_145e48248 body=261 status=ok
// SIG undefined FUN_145e48248(void)

void FUN_145e48248(void)

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
              0x110) < DAT_14c9db2d0) {
    FUN_144b3d300(&DAT_14c9db2d0);
    if (DAT_14c9db2d0 == -1) {
      FUN_145e4834e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0xdba;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db250,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71db1);
      _Init_thread_footer(&DAT_14c9db2d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4834e FUN_145e4834e body=226 status=ok
// SIG undefined FUN_145e4834e(void)

longlong * FUN_145e4834e(longlong *param_1)

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
  pcVar13 = FUN_1462cda90;
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



// FUNCTION 145e48436 FUN_145e48436 body=130 status=ok
// SIG undefined FUN_145e48436(void)

undefined1 * FUN_145e48436(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutHairCountTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xdbb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e48432;
}



// FUNCTION 145e484b8 FUN_145e484b8 body=138 status=ok
// SIG undefined FUN_145e484b8(void)

code * FUN_145e484b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPrimMatTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000dbd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718f5e8;
}



// FUNCTION 145e48542 FUN_145e48542 body=292 status=ok
// SIG undefined FUN_145e48542(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e48542(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd478) {
    FUN_144b3d300(&DAT_14c9dd478);
    if (DAT_14c9dd478 == -1) {
      FUN_145e487b0();
      FUN_145e48666();
      FUN_140db5666(&DAT_14c9dd3d0,0,&DAT_14c9dd368,L"FVirtualVoxelIndirectArgMipCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"MainCS",5,1,
                    FUN_147198e9e,FUN_147198e3e,&LAB_1462ce374,&LAB_147198e3a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e04b0);
      _DAT_14c9dd3d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c86258);
      _Init_thread_footer(&DAT_14c9dd478);
    }
  }
  return &DAT_14c9dd3d0;
}



// FUNCTION 145e48666 FUN_145e48666 body=205 status=ok
// SIG undefined FUN_145e48666(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e48666(void)

{
  if ((DAT_14c9dd3cf & 2) == 0) {
    DAT_14c9dd3cf = DAT_14c9dd3cf | 2;
    _DAT_14c9dd370 = L"FVirtualVoxelIndirectArgMipCS";
    _DAT_14c9dd388 = FUN_146826540;
    _DAT_14c9dd390 = FUN_146825d77;
    _DAT_14c9dd398 = FUN_146825fd6;
    _DAT_14c9dd3a0 = FUN_1407e02ea;
    _DAT_14c9dd3a8 = FUN_146826273;
    _DAT_14c9dd380 = FUN_147198e0c;
    _DAT_14c9dd3c0 = 0xffffffff000000e0;
    _DAT_14c9dd3c8 = 8;
    DAT_14c9dd3cc = 0;
    _DAT_14c9dd3b0 = &LAB_147198e36;
    FUN_145e48734();
    FUN_1407e00cc(&DAT_14c9dd368);
    return;
  }
  return;
}



// FUNCTION 145e48734 FUN_145e48734 body=123 status=ok
// SIG undefined FUN_145e48734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e48734(void)

{
  _DAT_14c9e1660 = L"BASE";
  DAT_14c9e168a = 4;
  _DAT_14c9e1668 = FUN_140b35ae4();
  _DAT_14c9e1670 = DAT_14c9dd378;
  _DAT_14c9e1678 = &LAB_14682652b;
  DAT_14c9dd378 = &DAT_14c9e1660;
  DAT_14c9dd3cd = DAT_14c9dd3cd + '\x01';
  _DAT_14c9e1680 = 0x100000000;
  if (*(char *)(_DAT_14c9e1668 + 100) != '\0') {
    DAT_14c9dd3ce = DAT_14c9dd3ce + '\x01';
  }
  return;
}



// FUNCTION 145e487b0 FUN_145e487b0 body=261 status=ok
// SIG undefined FUN_145e487b0(void)

void FUN_145e487b0(void)

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
              0x110) < DAT_14c9e0530) {
    FUN_144b3d300(&DAT_14c9e0530);
    if (DAT_14c9e0530 == -1) {
      FUN_145e488b6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x49f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e04b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e71f);
      _Init_thread_footer(&DAT_14c9e0530);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e488b6 FUN_145e488b6 body=226 status=ok
// SIG undefined FUN_145e488b6(void)

longlong * FUN_145e488b6(longlong *param_1)

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
  pcVar13 = FUN_1462cf0fc;
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



// FUNCTION 145e4899e FUN_145e4899e body=130 status=ok
// SIG undefined FUN_145e4899e(void)

undefined1 * FUN_145e4899e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4899a;
}



// FUNCTION 145e48a20 FUN_145e48a20 body=138 status=ok
// SIG undefined FUN_145e48a20(void)

code * FUN_145e48a20(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000004a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a26a8;
}



// FUNCTION 145e48aaa FUN_145e48aaa body=292 status=ok
// SIG undefined FUN_145e48aaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e48aaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef3f8) {
    FUN_144b3d300(&DAT_14c9ef3f8);
    if (DAT_14c9ef3f8 == -1) {
      FUN_145e48d18();
      FUN_145e48bce();
      FUN_140db5666(&DAT_14c9ef350,0,&DAT_14c9ef2e8,L"FScatterScreenProbeBRDFToRadianceProbesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",
                    L"ScatterScreenProbeBRDFToRadianceProbesCS",5,1,FUN_1471dfc0e,FUN_1471dfbae,
                    &LAB_1462d7372,&LAB_1471dfbaa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f1000)
      ;
      _DAT_14c9ef350 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d260c1);
      _Init_thread_footer(&DAT_14c9ef3f8);
    }
  }
  return &DAT_14c9ef350;
}



// FUNCTION 145e48bce FUN_145e48bce body=205 status=ok
// SIG undefined FUN_145e48bce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e48bce(void)

{
  if ((DAT_14c9ef34f & 2) == 0) {
    DAT_14c9ef34f = DAT_14c9ef34f | 2;
    _DAT_14c9ef2f0 = L"FScatterScreenProbeBRDFToRadianceProbesCS";
    _DAT_14c9ef308 = FUN_146826540;
    _DAT_14c9ef310 = FUN_146825d77;
    _DAT_14c9ef318 = FUN_146825fd6;
    _DAT_14c9ef320 = FUN_1407e02ea;
    _DAT_14c9ef328 = FUN_146826273;
    _DAT_14c9ef300 = FUN_1471dfb7c;
    _DAT_14c9ef340 = 0xffffffff000000e0;
    _DAT_14c9ef348 = 8;
    DAT_14c9ef34c = 0;
    _DAT_14c9ef330 = &LAB_1471dfba6;
    FUN_145e48c9c();
    FUN_1407e00cc(&DAT_14c9ef2e8);
    return;
  }
  return;
}



// FUNCTION 145e48c9c FUN_145e48c9c body=123 status=ok
// SIG undefined FUN_145e48c9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e48c9c(void)

{
  _DAT_14c9f1d60 = L"BASE";
  DAT_14c9f1d8a = 4;
  _DAT_14c9f1d68 = FUN_140b35ae4();
  _DAT_14c9f1d70 = DAT_14c9ef2f8;
  _DAT_14c9f1d78 = &LAB_14682652b;
  DAT_14c9ef2f8 = &DAT_14c9f1d60;
  DAT_14c9ef34d = DAT_14c9ef34d + '\x01';
  _DAT_14c9f1d80 = 0x100000000;
  if (*(char *)(_DAT_14c9f1d68 + 100) != '\0') {
    DAT_14c9ef34e = DAT_14c9ef34e + '\x01';
  }
  return;
}



// FUNCTION 145e48d18 FUN_145e48d18 body=261 status=ok
// SIG undefined FUN_145e48d18(void)

void FUN_145e48d18(void)

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
              0x110) < DAT_14c9f1080) {
    FUN_144b3d300(&DAT_14c9f1080);
    if (DAT_14c9f1080 == -1) {
      FUN_145e48e1e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2e0;
      local_58 = 0x2aa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1000,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26373);
      _Init_thread_footer(&DAT_14c9f1080);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e48e1e FUN_145e48e1e body=226 status=ok
// SIG undefined FUN_145e48e1e(void)

longlong * FUN_145e48e1e(longlong *param_1)

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
  pcVar13 = FUN_1462d9a76;
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



// FUNCTION 145e48f06 FUN_145e48f06 body=130 status=ok
// SIG undefined FUN_145e48f06(void)

undefined1 * FUN_145e48f06(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRadianceProbeSH_PDF";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e48f02;
}



// FUNCTION 145e48f88 FUN_145e48f88 body=138 status=ok
// SIG undefined FUN_145e48f88(void)

code * FUN_145e48f88(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BRDFProbabilityDensityFunctionSH";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e48f06;
}



// FUNCTION 145e49012 FUN_145e49012 body=205 status=ok
// SIG undefined FUN_145e49012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e49012(void)

{
  if ((DAT_14c9ef59f & 2) == 0) {
    DAT_14c9ef59f = DAT_14c9ef59f | 2;
    _DAT_14c9ef540 = L"FSetupTraceFromProbesCS";
    _DAT_14c9ef558 = FUN_146826540;
    _DAT_14c9ef560 = FUN_146825d77;
    _DAT_14c9ef568 = FUN_146825fd6;
    _DAT_14c9ef570 = FUN_1407e02ea;
    _DAT_14c9ef578 = FUN_146826273;
    _DAT_14c9ef550 = FUN_1471dfd08;
    _DAT_14c9ef590 = 0xffffffff000000e0;
    _DAT_14c9ef598 = 8;
    DAT_14c9ef59c = 0;
    _DAT_14c9ef580 = &LAB_1471dfd32;
    FUN_145e490e0();
    FUN_1407e00cc(&DAT_14c9ef538);
    return;
  }
  return;
}



// FUNCTION 145e490e0 FUN_145e490e0 body=123 status=ok
// SIG undefined FUN_145e490e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e490e0(void)

{
  _DAT_14c9f1dc0 = L"BASE";
  DAT_14c9f1dea = 4;
  _DAT_14c9f1dc8 = FUN_140b35ae4();
  _DAT_14c9f1dd0 = DAT_14c9ef548;
  _DAT_14c9f1dd8 = &LAB_14682652b;
  DAT_14c9ef548 = &DAT_14c9f1dc0;
  DAT_14c9ef59d = DAT_14c9ef59d + '\x01';
  _DAT_14c9f1de0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1dc8 + 100) != '\0') {
    DAT_14c9ef59e = DAT_14c9ef59e + '\x01';
  }
  return;
}



// FUNCTION 145e4915c FUN_145e4915c body=226 status=ok
// SIG undefined FUN_145e4915c(void)

longlong * FUN_145e4915c(longlong *param_1)

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
  pcVar13 = FUN_1462da07c;
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



// FUNCTION 145e49244 FUN_145e49244 body=136 status=ok
// SIG undefined FUN_145e49244(void)

code * FUN_145e49244(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWSortProbeTraceTilesIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000305;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e59aa;
}



// FUNCTION 145e492cc FUN_145e492cc body=138 status=ok
// SIG undefined FUN_145e492cc(void)

code * FUN_145e492cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWRadianceCacheHardwareRayTracingIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000306;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e49244;
}



// FUNCTION 145e49356 FUN_145e49356 body=205 status=ok
// SIG undefined FUN_145e49356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e49356(void)

{
  if ((DAT_14c9f494f & 2) == 0) {
    DAT_14c9f494f = DAT_14c9f494f | 2;
    _DAT_14c9f48f0 = L"FSetupCompactionIndirectArgsCS";
    _DAT_14c9f4908 = FUN_146826540;
    _DAT_14c9f4910 = FUN_146825d77;
    _DAT_14c9f4918 = FUN_146825fd6;
    _DAT_14c9f4920 = FUN_1407e02ea;
    _DAT_14c9f4928 = FUN_146826273;
    _DAT_14c9f4900 = FUN_1471efaca;
    _DAT_14c9f4940 = 0xffffffff000000e0;
    _DAT_14c9f4948 = 8;
    DAT_14c9f494c = 0;
    _DAT_14c9f4930 = &LAB_1471efaf4;
    FUN_145e49424();
    FUN_1407e00cc(&DAT_14c9f48e8);
    return;
  }
  return;
}



// FUNCTION 145e49424 FUN_145e49424 body=123 status=ok
// SIG undefined FUN_145e49424(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e49424(void)

{
  _DAT_14c9f7e78 = L"BASE";
  DAT_14c9f7ea2 = 4;
  _DAT_14c9f7e80 = FUN_140b35ae4();
  _DAT_14c9f7e88 = DAT_14c9f48f8;
  _DAT_14c9f7e90 = &LAB_14682652b;
  DAT_14c9f48f8 = &DAT_14c9f7e78;
  DAT_14c9f494d = DAT_14c9f494d + '\x01';
  _DAT_14c9f7e98 = 0x100000000;
  if (*(char *)(_DAT_14c9f7e80 + 100) != '\0') {
    DAT_14c9f494e = DAT_14c9f494e + '\x01';
  }
  return;
}



// FUNCTION 145e494a0 FUN_145e494a0 body=226 status=ok
// SIG undefined FUN_145e494a0(void)

longlong * FUN_145e494a0(longlong *param_1)

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
  pcVar13 = FUN_1462df0dc;
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



// FUNCTION 145e49588 FUN_145e49588 body=136 status=ok
// SIG undefined FUN_145e49588(void)

undefined1 * FUN_145e49588(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 299;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e49584;
}



// FUNCTION 145e49610 FUN_145e49610 body=138 status=ok
// SIG undefined FUN_145e49610(void)

code * FUN_145e49610(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000012e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f959e;
}



// FUNCTION 145e4969a FUN_145e4969a body=292 status=ok
// SIG undefined FUN_145e4969a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4969a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd130) {
    FUN_144b3d300(&DAT_14c9fd130);
    if (DAT_14c9fd130 == -1) {
      FUN_145e49908();
      FUN_145e497be();
      FUN_140db5666(&DAT_14c9fd088,0,&DAT_14c9fd020,L"FMarkRadianceProbesUsedByHairStrandsCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"MarkRadianceProbesUsedByHairStrandsCS",5,1,FUN_14720911c,FUN_1472090bc,
                    &LAB_1462e17de,&LAB_1472090b8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff658)
      ;
      _DAT_14c9fd088 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd26);
      _Init_thread_footer(&DAT_14c9fd130);
    }
  }
  return &DAT_14c9fd088;
}



// FUNCTION 145e497be FUN_145e497be body=205 status=ok
// SIG undefined FUN_145e497be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e497be(void)

{
  if ((DAT_14c9fd087 & 2) == 0) {
    DAT_14c9fd087 = DAT_14c9fd087 | 2;
    _DAT_14c9fd028 = L"FMarkRadianceProbesUsedByHairStrandsCS";
    _DAT_14c9fd040 = FUN_146826540;
    _DAT_14c9fd048 = FUN_146825d77;
    _DAT_14c9fd050 = FUN_146825fd6;
    _DAT_14c9fd058 = FUN_1407e02ea;
    _DAT_14c9fd060 = FUN_146826273;
    _DAT_14c9fd038 = FUN_14720908a;
    _DAT_14c9fd078 = 0xffffffff000000e0;
    _DAT_14c9fd080 = 8;
    DAT_14c9fd084 = 0;
    _DAT_14c9fd068 = &LAB_1472090b4;
    FUN_145e4988c();
    FUN_1407e00cc(&DAT_14c9fd020);
    return;
  }
  return;
}



// FUNCTION 145e4988c FUN_145e4988c body=123 status=ok
// SIG undefined FUN_145e4988c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4988c(void)

{
  _DAT_14ca00648 = L"BASE";
  DAT_14ca00672 = 4;
  _DAT_14ca00650 = FUN_140b35ae4();
  _DAT_14ca00658 = DAT_14c9fd030;
  _DAT_14ca00660 = &LAB_14682652b;
  DAT_14c9fd030 = &DAT_14ca00648;
  DAT_14c9fd085 = DAT_14c9fd085 + '\x01';
  _DAT_14ca00668 = 0x100000000;
  if (*(char *)(_DAT_14ca00650 + 100) != '\0') {
    DAT_14c9fd086 = DAT_14c9fd086 + '\x01';
  }
  return;
}



// FUNCTION 145e49908 FUN_145e49908 body=261 status=ok
// SIG undefined FUN_145e49908(void)

void FUN_145e49908(void)

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
              0x110) < DAT_14c9ff6d8) {
    FUN_144b3d300(&DAT_14c9ff6d8);
    if (DAT_14c9ff6d8 == -1) {
      FUN_145e49a0e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x2f1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff658,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6c5);
      _Init_thread_footer(&DAT_14c9ff6d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e49a0e FUN_145e49a0e body=226 status=ok
// SIG undefined FUN_145e49a0e(void)

longlong * FUN_145e49a0e(longlong *param_1)

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
  pcVar13 = FUN_1462e6146;
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



// FUNCTION 145e49af6 FUN_145e49af6 body=132 status=ok
// SIG undefined FUN_145e49af6(void)

undefined1 * FUN_145e49af6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairStrandsResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e49af2;
}



// FUNCTION 145e49b7a FUN_145e49b7a body=136 status=ok
// SIG undefined FUN_145e49b7a(void)

code * FUN_145e49b7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairStrandsMip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147217734;
}



// FUNCTION 145e49c02 FUN_145e49c02 body=205 status=ok
// SIG undefined FUN_145e49c02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e49c02(void)

{
  if ((DAT_14ca0155f & 2) == 0) {
    DAT_14ca0155f = DAT_14ca0155f | 2;
    _DAT_14ca01500 = L"FScreenProbeCompactTracesCS";
    _DAT_14ca01518 = FUN_146826540;
    _DAT_14ca01520 = FUN_146825d77;
    _DAT_14ca01528 = FUN_146825fd6;
    _DAT_14ca01530 = FUN_1407e02ea;
    _DAT_14ca01538 = FUN_146826273;
    _DAT_14ca01510 = FUN_147220ff4;
    _DAT_14ca01550 = 0xffffffff000000e0;
    _DAT_14ca01558 = 8;
    DAT_14ca0155c = 0;
    _DAT_14ca01540 = &LAB_14722101e;
    FUN_145e49cd0();
    FUN_1407e00cc(&DAT_14ca014f8);
    return;
  }
  return;
}



// FUNCTION 145e49cd0 FUN_145e49cd0 body=123 status=ok
// SIG undefined FUN_145e49cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e49cd0(void)

{
  _DAT_14ca07898 = L"BASE";
  DAT_14ca078c2 = 4;
  _DAT_14ca078a0 = FUN_140b35ae4();
  _DAT_14ca078a8 = DAT_14ca01508;
  _DAT_14ca078b0 = &LAB_14682652b;
  DAT_14ca01508 = &DAT_14ca07898;
  DAT_14ca0155d = DAT_14ca0155d + '\x01';
  _DAT_14ca078b8 = 0x100000000;
  if (*(char *)(_DAT_14ca078a0 + 100) != '\0') {
    DAT_14ca0155e = DAT_14ca0155e + '\x01';
  }
  return;
}



// FUNCTION 145e49d4c FUN_145e49d4c body=226 status=ok
// SIG undefined FUN_145e49d4c(void)

longlong * FUN_145e49d4c(longlong *param_1)

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
  pcVar13 = FUN_1462e836e;
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



// FUNCTION 145e49e34 FUN_145e49e34 body=136 status=ok
// SIG undefined FUN_145e49e34(void)

code * FUN_145e49e34(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15400000121;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147229e70;
}



// FUNCTION 145e49ebc FUN_145e49ebc body=138 status=ok
// SIG undefined FUN_145e49ebc(void)

code * FUN_145e49ebc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CompactionMaxTraceDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15800000122;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e49e34;
}



// FUNCTION 145e49f46 FUN_145e49f46 body=205 status=ok
// SIG undefined FUN_145e49f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e49f46(void)

{
  if ((DAT_14ca19f8f & 2) == 0) {
    DAT_14ca19f8f = DAT_14ca19f8f | 2;
    _DAT_14ca19f30 = L"FShadingBinReserveCS";
    _DAT_14ca19f48 = FUN_146826540;
    _DAT_14ca19f50 = FUN_146825d77;
    _DAT_14ca19f58 = FUN_146825fd6;
    _DAT_14ca19f60 = FUN_1407e02ea;
    _DAT_14ca19f68 = FUN_146826273;
    _DAT_14ca19f40 = FUN_1472630ba;
    _DAT_14ca19f80 = 0xffffffff000000e0;
    _DAT_14ca19f88 = 8;
    DAT_14ca19f8c = 0;
    _DAT_14ca19f70 = &LAB_1472630e4;
    FUN_145e4a014();
    FUN_1407e00cc(&DAT_14ca19f28);
    return;
  }
  return;
}



// FUNCTION 145e4a014 FUN_145e4a014 body=123 status=ok
// SIG undefined FUN_145e4a014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4a014(void)

{
  _DAT_14ca1be20 = L"BASE";
  DAT_14ca1be4a = 4;
  _DAT_14ca1be28 = FUN_140b35ae4();
  _DAT_14ca1be30 = DAT_14ca19f38;
  _DAT_14ca1be38 = &LAB_14682652b;
  DAT_14ca19f38 = &DAT_14ca1be20;
  DAT_14ca19f8d = DAT_14ca19f8d + '\x01';
  _DAT_14ca1be40 = 0x100000000;
  if (*(char *)(_DAT_14ca1be28 + 100) != '\0') {
    DAT_14ca19f8e = DAT_14ca19f8e + '\x01';
  }
  return;
}



// FUNCTION 145e4a090 FUN_145e4a090 body=226 status=ok
// SIG undefined FUN_145e4a090(void)

longlong * FUN_145e4a090(longlong *param_1)

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
  pcVar13 = FUN_1462f38b4;
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



// FUNCTION 145e4a178 FUN_145e4a178 body=136 status=ok
// SIG undefined FUN_145e4a178(void)

code * FUN_145e4a178(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutShadingBinStats";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FNaniteShadingBinStats>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000182;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147266a98;
}



// FUNCTION 145e4a200 FUN_145e4a200 body=138 status=ok
// SIG undefined FUN_145e4a200(void)

code * FUN_145e4a200(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutShadingBinAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000184;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147266a0e;
}



// FUNCTION 145e4a28a FUN_145e4a28a body=292 status=ok
// SIG undefined FUN_145e4a28a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4a28a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1dd48) {
    FUN_144b3d300(&DAT_14ca1dd48);
    if (DAT_14ca1dd48 == -1) {
      FUN_145e4a4f8();
      FUN_145e4a3ae();
      FUN_140db5666(&DAT_14ca1dca0,0,&DAT_14ca1dc38,L"FPathTracingSwizzleScanlinesCS",
                    L"/Engine/Private/PathTracing/PathTracingSwizzleScanlines.usf",
                    L"PathTracingSwizzleScanlinesCS",5,1,FUN_14727233a,FUN_1472722da,&LAB_1462f519e,
                    &LAB_1472722d6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca21de8);
      _DAT_14ca1dca0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e70ad7);
      _Init_thread_footer(&DAT_14ca1dd48);
    }
  }
  return &DAT_14ca1dca0;
}



// FUNCTION 145e4a3ae FUN_145e4a3ae body=205 status=ok
// SIG undefined FUN_145e4a3ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4a3ae(void)

{
  if ((DAT_14ca1dc9f & 2) == 0) {
    DAT_14ca1dc9f = DAT_14ca1dc9f | 2;
    _DAT_14ca1dc40 = L"FPathTracingSwizzleScanlinesCS";
    _DAT_14ca1dc58 = FUN_146826540;
    _DAT_14ca1dc60 = FUN_146825d77;
    _DAT_14ca1dc68 = FUN_146825fd6;
    _DAT_14ca1dc70 = FUN_1407e02ea;
    _DAT_14ca1dc78 = FUN_146826273;
    _DAT_14ca1dc50 = FUN_1472722a6;
    _DAT_14ca1dc90 = 0xffffffff000000e0;
    _DAT_14ca1dc98 = 8;
    DAT_14ca1dc9c = 0;
    _DAT_14ca1dc80 = &LAB_1472722d2;
    FUN_145e4a47c();
    FUN_1407e00cc(&DAT_14ca1dc38);
    return;
  }
  return;
}



// FUNCTION 145e4a47c FUN_145e4a47c body=123 status=ok
// SIG undefined FUN_145e4a47c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4a47c(void)

{
  _DAT_14ca248d0 = L"BASE";
  DAT_14ca248fa = 4;
  _DAT_14ca248d8 = FUN_140b35ae4();
  _DAT_14ca248e0 = DAT_14ca1dc48;
  _DAT_14ca248e8 = &LAB_14682652b;
  DAT_14ca1dc48 = &DAT_14ca248d0;
  DAT_14ca1dc9d = DAT_14ca1dc9d + '\x01';
  _DAT_14ca248f0 = 0x100000000;
  if (*(char *)(_DAT_14ca248d8 + 100) != '\0') {
    DAT_14ca1dc9e = DAT_14ca1dc9e + '\x01';
  }
  return;
}



// FUNCTION 145e4a4f8 FUN_145e4a4f8 body=261 status=ok
// SIG undefined FUN_145e4a4f8(void)

void FUN_145e4a4f8(void)

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
              0x110) < DAT_14ca21e68) {
    FUN_144b3d300(&DAT_14ca21e68);
    if (DAT_14ca21e68 == -1) {
      FUN_145e4a5fe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x53e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21de8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95cb5);
      _Init_thread_footer(&DAT_14ca21e68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4a5fe FUN_145e4a5fe body=226 status=ok
// SIG undefined FUN_145e4a5fe(void)

longlong * FUN_145e4a5fe(longlong *param_1)

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
  pcVar13 = FUN_1462f6764;
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



// FUNCTION 145e4a6e6 FUN_145e4a6e6 body=130 status=ok
// SIG undefined FUN_145e4a6e6(void)

undefined1 * FUN_145e4a6e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchDim";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x53f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4a6e2;
}



// FUNCTION 145e4a768 FUN_145e4a768 body=138 status=ok
// SIG undefined FUN_145e4a768(void)

code * FUN_145e4a768(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScanlineStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000541;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727d1d4;
}



// FUNCTION 145e4a7f2 FUN_145e4a7f2 body=292 status=ok
// SIG undefined FUN_145e4a7f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4a7f2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca419b8) {
    FUN_144b3d300(&DAT_14ca419b8);
    if (DAT_14ca419b8 == -1) {
      FUN_145e4aa60();
      FUN_145e4a916();
      FUN_140db5666(&DAT_14ca41910,0,&DAT_14ca418a8,L"FRectAtlasCopyTexturePS",
                    L"/Engine/Private/RectLightAtlas.usf",L"MainPS",3,1,FUN_1472c504a,FUN_1472c4fea,
                    &LAB_1472c4fe6,&LAB_1472c4fe2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43bb0)
      ;
      _DAT_14ca41910 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f80513);
      _Init_thread_footer(&DAT_14ca419b8);
    }
  }
  return &DAT_14ca41910;
}



// FUNCTION 145e4a916 FUN_145e4a916 body=205 status=ok
// SIG undefined FUN_145e4a916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4a916(void)

{
  if ((DAT_14ca4190f & 2) == 0) {
    DAT_14ca4190f = DAT_14ca4190f | 2;
    _DAT_14ca418b0 = L"FRectAtlasCopyTexturePS";
    _DAT_14ca418c8 = FUN_146826540;
    _DAT_14ca418d0 = FUN_146825d77;
    _DAT_14ca418d8 = FUN_146825fd6;
    _DAT_14ca418e0 = FUN_1407e02ea;
    _DAT_14ca418e8 = FUN_146826273;
    _DAT_14ca418c0 = FUN_1472c4fb4;
    _DAT_14ca41900 = 0xffffffff000000e0;
    _DAT_14ca41908 = 8;
    DAT_14ca4190c = 0;
    _DAT_14ca418f0 = &LAB_1472c4fde;
    FUN_145e4a9e4();
    FUN_1407e00cc(&DAT_14ca418a8);
    return;
  }
  return;
}



// FUNCTION 145e4a9e4 FUN_145e4a9e4 body=123 status=ok
// SIG undefined FUN_145e4a9e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4a9e4(void)

{
  _DAT_14ca44790 = L"BASE";
  DAT_14ca447ba = 4;
  _DAT_14ca44798 = FUN_140b35ae4();
  _DAT_14ca447a0 = DAT_14ca418b8;
  _DAT_14ca447a8 = &LAB_14682652b;
  DAT_14ca418b8 = &DAT_14ca44790;
  DAT_14ca4190d = DAT_14ca4190d + '\x01';
  _DAT_14ca447b0 = 0x100000000;
  if (*(char *)(_DAT_14ca44798 + 100) != '\0') {
    DAT_14ca4190e = DAT_14ca4190e + '\x01';
  }
  return;
}



// FUNCTION 145e4aa60 FUN_145e4aa60 body=261 status=ok
// SIG undefined FUN_145e4aa60(void)

void FUN_145e4aa60(void)

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
              0x110) < DAT_14ca43c30) {
    FUN_144b3d300(&DAT_14ca43c30);
    if (DAT_14ca43c30 == -1) {
      FUN_145e4ab66(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x249;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43bb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafd8b);
      _Init_thread_footer(&DAT_14ca43c30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4ab66 FUN_145e4ab66 body=226 status=ok
// SIG undefined FUN_145e4ab66(void)

longlong * FUN_145e4ab66(longlong *param_1)

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
  pcVar13 = FUN_146303e36;
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



// FUNCTION 145e4ac4e FUN_145e4ac4e body=130 status=ok
// SIG undefined FUN_145e4ac4e(void)

undefined1 * FUN_145e4ac4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4ac4a;
}



// FUNCTION 145e4acd0 FUN_145e4acd0 body=138 status=ok
// SIG undefined FUN_145e4acd0(void)

code * FUN_145e4acd0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000024c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472cc7a8;
}



// FUNCTION 145e4ad5a FUN_145e4ad5a body=205 status=ok
// SIG undefined FUN_145e4ad5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4ad5a(void)

{
  if ((DAT_14ca42e97 & 2) == 0) {
    DAT_14ca42e97 = DAT_14ca42e97 | 2;
    _DAT_14ca42e38 = L"FApplyLowerHemisphereColorPS";
    _DAT_14ca42e50 = FUN_146826540;
    _DAT_14ca42e58 = FUN_146825d77;
    _DAT_14ca42e60 = FUN_146825fd6;
    _DAT_14ca42e68 = FUN_1407e02ea;
    _DAT_14ca42e70 = FUN_146826273;
    _DAT_14ca42e48 = FUN_1472c73be;
    _DAT_14ca42e88 = 0xffffffff000000e0;
    _DAT_14ca42e90 = 8;
    DAT_14ca42e94 = 0;
    _DAT_14ca42e78 = &LAB_1472c73e8;
    FUN_145e4ae28();
    FUN_1407e00cc(&DAT_14ca42e30);
    return;
  }
  return;
}



// FUNCTION 145e4ae28 FUN_145e4ae28 body=123 status=ok
// SIG undefined FUN_145e4ae28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4ae28(void)

{
  _DAT_14ca44af0 = L"BASE";
  DAT_14ca44b1a = 4;
  _DAT_14ca44af8 = FUN_140b35ae4();
  _DAT_14ca44b00 = DAT_14ca42e40;
  _DAT_14ca44b08 = &LAB_14682652b;
  DAT_14ca42e40 = &DAT_14ca44af0;
  DAT_14ca42e95 = DAT_14ca42e95 + '\x01';
  _DAT_14ca44b10 = 0x100000000;
  if (*(char *)(_DAT_14ca44af8 + 100) != '\0') {
    DAT_14ca42e96 = DAT_14ca42e96 + '\x01';
  }
  return;
}



// FUNCTION 145e4aea4 FUN_145e4aea4 body=226 status=ok
// SIG undefined FUN_145e4aea4(void)

longlong * FUN_145e4aea4(longlong *param_1)

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
  pcVar13 = FUN_146304998;
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



// FUNCTION 145e4af8c FUN_145e4af8c body=136 status=ok
// SIG undefined FUN_145e4af8c(void)

undefined1 * FUN_145e4af8c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e4af88;
}



// FUNCTION 145e4b014 FUN_145e4b014 body=138 status=ok
// SIG undefined FUN_145e4b014(void)

code * FUN_145e4b014(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ce604;
}



// FUNCTION 145e4b09e FUN_145e4b09e body=205 status=ok
// SIG undefined FUN_145e4b09e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4b09e(void)

{
  if ((DAT_14ca614c7 & 2) == 0) {
    DAT_14ca614c7 = DAT_14ca614c7 | 2;
    _DAT_14ca61468 = L"FSimpleLightTranslucentLightingInjectPS";
    _DAT_14ca61480 = FUN_146826540;
    _DAT_14ca61488 = FUN_146825d77;
    _DAT_14ca61490 = FUN_146825fd6;
    _DAT_14ca61498 = FUN_1407e02ea;
    _DAT_14ca614a0 = FUN_146826273;
    _DAT_14ca61478 = FUN_147322f08;
    _DAT_14ca614b8 = 0xffffffff000000e0;
    _DAT_14ca614c0 = 8;
    DAT_14ca614c4 = 0;
    _DAT_14ca614a8 = &LAB_147322f32;
    FUN_145e4b16c();
    FUN_1407e00cc(&DAT_14ca61460);
    return;
  }
  return;
}



// FUNCTION 145e4b16c FUN_145e4b16c body=123 status=ok
// SIG undefined FUN_145e4b16c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4b16c(void)

{
  _DAT_14ca63900 = L"BASE";
  DAT_14ca6392a = 4;
  _DAT_14ca63908 = FUN_140b35ae4();
  _DAT_14ca63910 = DAT_14ca61470;
  _DAT_14ca63918 = &LAB_14682652b;
  DAT_14ca61470 = &DAT_14ca63900;
  DAT_14ca614c5 = DAT_14ca614c5 + '\x01';
  _DAT_14ca63920 = 0x100000000;
  if (*(char *)(_DAT_14ca63908 + 100) != '\0') {
    DAT_14ca614c6 = DAT_14ca614c6 + '\x01';
  }
  return;
}



// FUNCTION 145e4b1e8 FUN_145e4b1e8 body=226 status=ok
// SIG undefined FUN_145e4b1e8(void)

longlong * FUN_145e4b1e8(longlong *param_1)

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
  pcVar13 = FUN_14630f3ca;
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



// FUNCTION 145e4b2d0 FUN_145e4b2d0 body=136 status=ok
// SIG undefined FUN_145e4b2d0(void)

undefined1 * FUN_145e4b2d0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x615;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e4b2cc;
}



// FUNCTION 145e4b358 FUN_145e4b358 body=138 status=ok
// SIG undefined FUN_145e4b358(void)

code * FUN_145e4b358(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000618;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732642a;
}



// FUNCTION 145e4b3e2 FUN_145e4b3e2 body=205 status=ok
// SIG undefined FUN_145e4b3e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4b3e2(void)

{
  if ((DAT_14ca64b9f & 2) == 0) {
    DAT_14ca64b9f = DAT_14ca64b9f | 2;
    _DAT_14ca64b40 = L"FMarkCoarsePagesCS";
    _DAT_14ca64b58 = FUN_146826540;
    _DAT_14ca64b60 = FUN_146825d77;
    _DAT_14ca64b68 = FUN_146825fd6;
    _DAT_14ca64b70 = FUN_1407e02ea;
    _DAT_14ca64b78 = FUN_146826273;
    _DAT_14ca64b50 = FUN_14732b080;
    _DAT_14ca64b90 = 0xffffffff000000e0;
    _DAT_14ca64b98 = 8;
    DAT_14ca64b9c = 0;
    _DAT_14ca64b80 = &LAB_14732b0aa;
    FUN_145e4b4b0();
    FUN_1407e00cc(&DAT_14ca64b38);
    return;
  }
  return;
}



// FUNCTION 145e4b4b0 FUN_145e4b4b0 body=123 status=ok
// SIG undefined FUN_145e4b4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4b4b0(void)

{
  _DAT_14ca68ba0 = L"BASE";
  DAT_14ca68bca = 4;
  _DAT_14ca68ba8 = FUN_140b35ae4();
  _DAT_14ca68bb0 = DAT_14ca64b48;
  _DAT_14ca68bb8 = &LAB_14682652b;
  DAT_14ca64b48 = &DAT_14ca68ba0;
  DAT_14ca64b9d = DAT_14ca64b9d + '\x01';
  _DAT_14ca68bc0 = 0x100000000;
  if (*(char *)(_DAT_14ca68ba8 + 100) != '\0') {
    DAT_14ca64b9e = DAT_14ca64b9e + '\x01';
  }
  return;
}



// FUNCTION 145e4b52c FUN_145e4b52c body=226 status=ok
// SIG undefined FUN_145e4b52c(void)

longlong * FUN_145e4b52c(longlong *param_1)

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
  pcVar13 = FUN_146311408;
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



// FUNCTION 145e4b614 FUN_145e4b614 body=136 status=ok
// SIG undefined FUN_145e4b614(void)

code * FUN_145e4b614(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPageRequestFlags";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146311490;
}



// FUNCTION 145e4b69c FUN_145e4b69c body=138 status=ok
// SIG undefined FUN_145e4b69c(void)

code * FUN_145e4b69c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bIncludeNonNaniteGeometry";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000003d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732f1d6;
}



// FUNCTION 145e4b726 FUN_145e4b726 body=205 status=ok
// SIG undefined FUN_145e4b726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4b726(void)

{
  if ((DAT_14ca6689f & 2) == 0) {
    DAT_14ca6689f = DAT_14ca6689f | 2;
    _DAT_14ca66840 = L"FVirtualSmBBuildHZBPerPageTopCS";
    _DAT_14ca66858 = FUN_146826540;
    _DAT_14ca66860 = FUN_146825d77;
    _DAT_14ca66868 = FUN_146825fd6;
    _DAT_14ca66870 = FUN_1407e02ea;
    _DAT_14ca66878 = FUN_146826273;
    _DAT_14ca66850 = FUN_14732cc78;
    _DAT_14ca66890 = 0xffffffff000000e0;
    _DAT_14ca66898 = 8;
    DAT_14ca6689c = 0;
    _DAT_14ca66880 = &LAB_14732cca2;
    FUN_145e4b7f4();
    FUN_1407e00cc(&DAT_14ca66838);
    return;
  }
  return;
}



// FUNCTION 145e4b7f4 FUN_145e4b7f4 body=123 status=ok
// SIG undefined FUN_145e4b7f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4b7f4(void)

{
  _DAT_14ca69050 = L"BASE";
  DAT_14ca6907a = 4;
  _DAT_14ca69058 = FUN_140b35ae4();
  _DAT_14ca69060 = DAT_14ca66848;
  _DAT_14ca69068 = &LAB_14682652b;
  DAT_14ca66848 = &DAT_14ca69050;
  DAT_14ca6689d = DAT_14ca6689d + '\x01';
  _DAT_14ca69070 = 0x100000000;
  if (*(char *)(_DAT_14ca69058 + 100) != '\0') {
    DAT_14ca6689e = DAT_14ca6689e + '\x01';
  }
  return;
}



// FUNCTION 145e4b870 FUN_145e4b870 body=226 status=ok
// SIG undefined FUN_145e4b870(void)

longlong * FUN_145e4b870(longlong *param_1)

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
  pcVar13 = FUN_146312f6e;
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



// FUNCTION 145e4b958 FUN_145e4b958 body=136 status=ok
// SIG undefined FUN_145e4b958(void)

code * FUN_145e4b958(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalPagesForHZB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000eb1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146312ff6;
}



// FUNCTION 145e4b9e0 FUN_145e4b9e0 body=138 status=ok
// SIG undefined FUN_145e4b9e0(void)

code * FUN_145e4b9e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvHzbInputSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000eb4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473318fe;
}



// FUNCTION 145e4ba6a FUN_145e4ba6a body=205 status=ok
// SIG undefined FUN_145e4ba6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4ba6a(void)

{
  if ((DAT_14ca6b7bf & 2) == 0) {
    DAT_14ca6b7bf = DAT_14ca6b7bf | 2;
    _DAT_14ca6b760 = L"FVolumetricFogFinalIntegrationCS";
    _DAT_14ca6b778 = FUN_146826540;
    _DAT_14ca6b780 = FUN_146825d77;
    _DAT_14ca6b788 = FUN_146825fd6;
    _DAT_14ca6b790 = FUN_1407e02ea;
    _DAT_14ca6b798 = FUN_146826273;
    _DAT_14ca6b770 = FUN_147334f2e;
    _DAT_14ca6b7b0 = 0xffffffff000000e0;
    _DAT_14ca6b7b8 = 8;
    DAT_14ca6b7bc = 0;
    _DAT_14ca6b7a0 = &LAB_147334f58;
    FUN_145e4bb38();
    FUN_1407e00cc(&DAT_14ca6b758);
    return;
  }
  return;
}



// FUNCTION 145e4bb38 FUN_145e4bb38 body=123 status=ok
// SIG undefined FUN_145e4bb38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4bb38(void)

{
  _DAT_14ca6d610 = L"BASE";
  DAT_14ca6d63a = 4;
  _DAT_14ca6d618 = FUN_140b35ae4();
  _DAT_14ca6d620 = DAT_14ca6b768;
  _DAT_14ca6d628 = &LAB_14682652b;
  DAT_14ca6b768 = &DAT_14ca6d610;
  DAT_14ca6b7bd = DAT_14ca6b7bd + '\x01';
  _DAT_14ca6d630 = 0x100000000;
  if (*(char *)(_DAT_14ca6d618 + 100) != '\0') {
    DAT_14ca6b7be = DAT_14ca6b7be + '\x01';
  }
  return;
}



// FUNCTION 145e4bbb4 FUN_145e4bbb4 body=226 status=ok
// SIG undefined FUN_145e4bbb4(void)

longlong * FUN_145e4bbb4(longlong *param_1)

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
  pcVar13 = FUN_146315bf2;
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



// FUNCTION 145e4bc9c FUN_145e4bc9c body=136 status=ok
// SIG undefined FUN_145e4bc9c(void)

undefined1 * FUN_145e4bc9c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x47b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e4bc98;
}



// FUNCTION 145e4bd24 FUN_145e4bd24 body=138 status=ok
// SIG undefined FUN_145e4bd24(void)

code * FUN_145e4bd24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWIntegratedLightScattering";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000047d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14733ab5a;
}



// FUNCTION 145e4bdae FUN_145e4bdae body=292 status=ok
// SIG undefined FUN_145e4bdae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4bdae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2df70) {
    FUN_144b3d300(&DAT_14cb2df70);
    if (DAT_14cb2df70 == -1) {
      FUN_145e4c01c();
      FUN_145e4bed2();
      FUN_140db5666(&DAT_14cb2dec8,0,&DAT_14cb2de60,L"FNiagaraSimpleElementVolumeAttribute",
                    L"/Plugin/FX/Niagara/Private/NiagaraBatchedElements.usf",L"MainPS",3,1,
                    FUN_14804c7cc,FUN_14804c76c,&LAB_14804c768,&LAB_14804c764,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb33458);
      _DAT_14cb2dec8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8e06);
      _Init_thread_footer(&DAT_14cb2df70);
    }
  }
  return &DAT_14cb2dec8;
}



// FUNCTION 145e4bed2 FUN_145e4bed2 body=205 status=ok
// SIG undefined FUN_145e4bed2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4bed2(void)

{
  if ((DAT_14cb2dec7 & 2) == 0) {
    DAT_14cb2dec7 = DAT_14cb2dec7 | 2;
    _DAT_14cb2de68 = L"FNiagaraSimpleElementVolumeAttribute";
    _DAT_14cb2de80 = FUN_146826540;
    _DAT_14cb2de88 = FUN_146825d77;
    _DAT_14cb2de90 = FUN_146825fd6;
    _DAT_14cb2de98 = FUN_1407e02ea;
    _DAT_14cb2dea0 = FUN_146826273;
    _DAT_14cb2de78 = FUN_14804c736;
    _DAT_14cb2deb8 = 0xffffffff000000e0;
    _DAT_14cb2dec0 = 8;
    DAT_14cb2dec4 = 0;
    _DAT_14cb2dea8 = &LAB_14804c760;
    FUN_145e4bfa0();
    FUN_1407e00cc(&DAT_14cb2de60);
    return;
  }
  return;
}



// FUNCTION 145e4bfa0 FUN_145e4bfa0 body=123 status=ok
// SIG undefined FUN_145e4bfa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4bfa0(void)

{
  _DAT_14cb35390 = L"BASE";
  DAT_14cb353ba = 4;
  _DAT_14cb35398 = FUN_140b35ae4();
  _DAT_14cb353a0 = DAT_14cb2de70;
  _DAT_14cb353a8 = &LAB_14682652b;
  DAT_14cb2de70 = &DAT_14cb35390;
  DAT_14cb2dec5 = DAT_14cb2dec5 + '\x01';
  _DAT_14cb353b0 = 0x100000000;
  if (*(char *)(_DAT_14cb35398 + 100) != '\0') {
    DAT_14cb2dec6 = DAT_14cb2dec6 + '\x01';
  }
  return;
}



// FUNCTION 145e4c01c FUN_145e4c01c body=261 status=ok
// SIG undefined FUN_145e4c01c(void)

void FUN_145e4c01c(void)

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
              0x110) < DAT_14cb334d8) {
    FUN_144b3d300(&DAT_14cb334d8);
    if (DAT_14cb334d8 == -1) {
      FUN_145e4c122(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 99;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33458,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb694);
      _Init_thread_footer(&DAT_14cb334d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4c122 FUN_145e4c122 body=226 status=ok
// SIG undefined FUN_145e4c122(void)

longlong * FUN_145e4c122(longlong *param_1)

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
  pcVar13 = FUN_14646122c;
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



// FUNCTION 145e4c20a FUN_145e4c20a body=132 status=ok
// SIG undefined FUN_145e4c20a(void)

undefined1 * FUN_145e4c20a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InNumAttributes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4c206;
}



// FUNCTION 145e4c28e FUN_145e4c28e body=136 status=ok
// SIG undefined FUN_145e4c28e(void)

code * FUN_145e4c28e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InTileUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804f532;
}



// FUNCTION 145e4c316 FUN_145e4c316 body=292 status=ok
// SIG undefined FUN_145e4c316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4c316(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb47f40) {
    FUN_144b3d300(&DAT_14cb47f40);
    if (DAT_14cb47f40 == -1) {
      FUN_145e4c584();
      FUN_145e4c43a();
      FUN_140db5666(&DAT_14cb47e98,0,&DAT_14cb47e30,L"FWaterQuadTreeInitializeIndirectArgsCS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainCS",5,2,FUN_1483fca6a,
                    FUN_1483fca0a,&LAB_1483fca06,&LAB_1483fca02,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48c98);
      _DAT_14cb47e98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bce9);
      _Init_thread_footer(&DAT_14cb47f40);
    }
  }
  return &DAT_14cb47e98;
}



// FUNCTION 145e4c43a FUN_145e4c43a body=205 status=ok
// SIG undefined FUN_145e4c43a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4c43a(void)

{
  if ((DAT_14cb47e97 & 2) == 0) {
    DAT_14cb47e97 = DAT_14cb47e97 | 2;
    _DAT_14cb47e38 = L"FWaterQuadTreeInitializeIndirectArgsCS";
    _DAT_14cb47e50 = FUN_146826540;
    _DAT_14cb47e58 = FUN_146825d77;
    _DAT_14cb47e60 = FUN_146825fd6;
    _DAT_14cb47e68 = FUN_1407e02ea;
    _DAT_14cb47e70 = FUN_146826273;
    _DAT_14cb47e48 = FUN_1483fc9d4;
    _DAT_14cb47e88 = 0xffffffff000000e0;
    _DAT_14cb47e90 = 8;
    DAT_14cb47e94 = 0;
    _DAT_14cb47e78 = &LAB_1483fc9fe;
    FUN_145e4c508();
    FUN_1407e00cc(&DAT_14cb47e30);
    return;
  }
  return;
}



// FUNCTION 145e4c508 FUN_145e4c508 body=123 status=ok
// SIG undefined FUN_145e4c508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4c508(void)

{
  _DAT_14cb49288 = L"BASE";
  DAT_14cb492b2 = 4;
  _DAT_14cb49290 = FUN_140b35ae4();
  _DAT_14cb49298 = DAT_14cb47e40;
  _DAT_14cb492a0 = &LAB_14682652b;
  DAT_14cb47e40 = &DAT_14cb49288;
  DAT_14cb47e95 = DAT_14cb47e95 + '\x01';
  _DAT_14cb492a8 = 0x100000000;
  if (*(char *)(_DAT_14cb49290 + 100) != '\0') {
    DAT_14cb47e96 = DAT_14cb47e96 + '\x01';
  }
  return;
}



// FUNCTION 145e4c584 FUN_145e4c584 body=261 status=ok
// SIG undefined FUN_145e4c584(void)

void FUN_145e4c584(void)

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
              0x110) < DAT_14cb48d18) {
    FUN_144b3d300(&DAT_14cb48d18);
    if (DAT_14cb48d18 == -1) {
      FUN_145e4c68a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x9d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48c98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d1e9);
      _Init_thread_footer(&DAT_14cb48d18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4c68a FUN_145e4c68a body=226 status=ok
// SIG undefined FUN_145e4c68a(void)

longlong * FUN_145e4c68a(longlong *param_1)

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
  pcVar13 = FUN_146488910;
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



// FUNCTION 145e4c772 FUN_145e4c772 body=130 status=ok
// SIG undefined FUN_145e4c772(void)

undefined1 * FUN_145e4c772(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4c76e;
}



// FUNCTION 145e4c7f4 FUN_145e4c7f4 body=138 status=ok
// SIG undefined FUN_145e4c7f4(void)

code * FUN_145e4c7f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumViews";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1483ffc4c;
}



// FUNCTION 145e4c87e FUN_145e4c87e body=205 status=ok
// SIG undefined FUN_145e4c87e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4c87e(void)

{
  if ((DAT_14cb505a7 & 2) == 0) {
    DAT_14cb505a7 = DAT_14cb505a7 | 2;
    _DAT_14cb50548 = L"FApplySourcesCS";
    _DAT_14cb50560 = FUN_146826540;
    _DAT_14cb50568 = FUN_146825d77;
    _DAT_14cb50570 = FUN_146825fd6;
    _DAT_14cb50578 = FUN_1407e02ea;
    _DAT_14cb50580 = FUN_146826273;
    _DAT_14cb50558 = FUN_1485ec564;
    _DAT_14cb50598 = 0xffffffff000000e0;
    _DAT_14cb505a0 = 8;
    DAT_14cb505a4 = 0;
    _DAT_14cb50588 = &LAB_1485ec58e;
    FUN_145e4c94c();
    FUN_1407e00cc(&DAT_14cb50540);
    return;
  }
  return;
}



// FUNCTION 145e4c94c FUN_145e4c94c body=123 status=ok
// SIG undefined FUN_145e4c94c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4c94c(void)

{
  _DAT_14cb50f08 = L"BASE";
  DAT_14cb50f32 = 4;
  _DAT_14cb50f10 = FUN_140b35ae4();
  _DAT_14cb50f18 = DAT_14cb50550;
  _DAT_14cb50f20 = &LAB_14682652b;
  DAT_14cb50550 = &DAT_14cb50f08;
  DAT_14cb505a5 = DAT_14cb505a5 + '\x01';
  _DAT_14cb50f28 = 0x100000000;
  if (*(char *)(_DAT_14cb50f10 + 100) != '\0') {
    DAT_14cb505a6 = DAT_14cb505a6 + '\x01';
  }
  return;
}



// FUNCTION 145e4c9c8 FUN_145e4c9c8 body=226 status=ok
// SIG undefined FUN_145e4c9c8(void)

longlong * FUN_145e4c9c8(longlong *param_1)

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
  pcVar13 = FUN_1464a47e8;
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



// FUNCTION 145e4cab0 FUN_145e4cab0 body=136 status=ok
// SIG undefined FUN_145e4cab0(void)

code * FUN_145e4cab0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a4870;
}



// FUNCTION 145e4cb38 FUN_145e4cb38 body=138 status=ok
// SIG undefined FUN_145e4cb38(void)

code * FUN_145e4cb38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVelocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4cab0;
}



// FUNCTION 145e4cbc2 FUN_145e4cbc2 body=205 status=ok
// SIG undefined FUN_145e4cbc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4cbc2(void)

{
  if ((DAT_14cb515a7 & 2) == 0) {
    DAT_14cb515a7 = DAT_14cb515a7 | 2;
    _DAT_14cb51548 = L"FCreateBiasCurrentColorCS";
    _DAT_14cb51560 = FUN_146826540;
    _DAT_14cb51568 = FUN_146825d77;
    _DAT_14cb51570 = FUN_146825fd6;
    _DAT_14cb51578 = FUN_1407e02ea;
    _DAT_14cb51580 = FUN_146826273;
    _DAT_14cb51558 = FUN_1485f1848;
    _DAT_14cb51598 = 0xffffffff000000e0;
    _DAT_14cb515a0 = 8;
    DAT_14cb515a4 = 0;
    _DAT_14cb51588 = &LAB_1485f1872;
    FUN_145e4cc90();
    FUN_1407e00cc(&DAT_14cb51540);
    return;
  }
  return;
}



// FUNCTION 145e4cc90 FUN_145e4cc90 body=123 status=ok
// SIG undefined FUN_145e4cc90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4cc90(void)

{
  _DAT_14cb51a70 = L"BASE";
  DAT_14cb51a9a = 4;
  _DAT_14cb51a78 = FUN_140b35ae4();
  _DAT_14cb51a80 = DAT_14cb51550;
  _DAT_14cb51a88 = &LAB_14682652b;
  DAT_14cb51550 = &DAT_14cb51a70;
  DAT_14cb515a5 = DAT_14cb515a5 + '\x01';
  _DAT_14cb51a90 = 0x100000000;
  if (*(char *)(_DAT_14cb51a78 + 100) != '\0') {
    DAT_14cb515a6 = DAT_14cb515a6 + '\x01';
  }
  return;
}



// FUNCTION 145e4cd0c FUN_145e4cd0c body=226 status=ok
// SIG undefined FUN_145e4cd0c(void)

longlong * FUN_145e4cd0c(longlong *param_1)

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
  pcVar13 = FUN_1464a6c5c;
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



// FUNCTION 145e4cdf4 FUN_145e4cdf4 body=130 status=ok
// SIG undefined FUN_145e4cdf4(void)

undefined1 * FUN_145e4cdf4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x35;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4cdf0;
}



// FUNCTION 145e4ce76 FUN_145e4ce76 body=144 status=ok
// SIG undefined FUN_145e4ce76(void)

code * FUN_145e4ce76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"DepthStencil";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e4cdf4;
}



// FUNCTION 145e4cf06 FUN_145e4cf06 body=292 status=ok
// SIG undefined FUN_145e4cf06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4cf06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf9518) {
    FUN_144b3d300(&DAT_14cbf9518);
    if (DAT_14cbf9518 == -1) {
      FUN_145e4d174();
      FUN_145e4d02a();
      FUN_140db5666(&DAT_14cbf9470,0,&DAT_14cbf9408,L"FHairDebugPrintHairSkinCacheCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_14908d040,
                    FUN_14908cfe0,FUN_14667baa0,&LAB_14908cfdc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbf9f50);
      _DAT_14cbf9470 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14442bf0e);
      _Init_thread_footer(&DAT_14cbf9518);
    }
  }
  return &DAT_14cbf9470;
}



// FUNCTION 145e4d02a FUN_145e4d02a body=205 status=ok
// SIG undefined FUN_145e4d02a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4d02a(void)

{
  if ((DAT_14cbf946f & 2) == 0) {
    DAT_14cbf946f = DAT_14cbf946f | 2;
    _DAT_14cbf9410 = L"FHairDebugPrintHairSkinCacheCS";
    _DAT_14cbf9428 = FUN_146826540;
    _DAT_14cbf9430 = FUN_146825d77;
    _DAT_14cbf9438 = FUN_146825fd6;
    _DAT_14cbf9440 = FUN_1407e02ea;
    _DAT_14cbf9448 = FUN_146826273;
    _DAT_14cbf9420 = FUN_14908cfae;
    _DAT_14cbf9460 = 0xffffffff000000e0;
    _DAT_14cbf9468 = 8;
    DAT_14cbf946c = 0;
    _DAT_14cbf9450 = &LAB_14908cfd8;
    FUN_145e4d0f8();
    FUN_1407e00cc(&DAT_14cbf9408);
    return;
  }
  return;
}



// FUNCTION 145e4d0f8 FUN_145e4d0f8 body=123 status=ok
// SIG undefined FUN_145e4d0f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4d0f8(void)

{
  _DAT_14cbfa458 = L"BASE";
  DAT_14cbfa482 = 4;
  _DAT_14cbfa460 = FUN_140b35ae4();
  _DAT_14cbfa468 = DAT_14cbf9418;
  _DAT_14cbfa470 = &LAB_14682652b;
  DAT_14cbf9418 = &DAT_14cbfa458;
  DAT_14cbf946d = DAT_14cbf946d + '\x01';
  _DAT_14cbfa478 = 0x100000000;
  if (*(char *)(_DAT_14cbfa460 + 100) != '\0') {
    DAT_14cbf946e = DAT_14cbf946e + '\x01';
  }
  return;
}



// FUNCTION 145e4d174 FUN_145e4d174 body=261 status=ok
// SIG undefined FUN_145e4d174(void)

void FUN_145e4d174(void)

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
              0x110) < DAT_14cbf9fd0) {
    FUN_144b3d300(&DAT_14cbf9fd0);
    if (DAT_14cbf9fd0 == -1) {
      FUN_145e4d27a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x196;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf9f50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144436c18);
      _Init_thread_footer(&DAT_14cbf9fd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4d27a FUN_145e4d27a body=226 status=ok
// SIG undefined FUN_145e4d27a(void)

longlong * FUN_145e4d27a(longlong *param_1)

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
  pcVar13 = FUN_14667be56;
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



// FUNCTION 145e4d362 FUN_145e4d362 body=132 status=ok
// SIG undefined FUN_145e4d362(void)

undefined1 * FUN_145e4d362(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairSkinCacheEnable";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x197;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4d35e;
}



// FUNCTION 145e4d3e6 FUN_145e4d3e6 body=136 status=ok
// SIG undefined FUN_145e4d3e6(void)

code * FUN_145e4d3e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000199;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14909309e;
}



// FUNCTION 145e4d46e FUN_145e4d46e body=292 status=ok
// SIG undefined FUN_145e4d46e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4d46e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29458) {
    FUN_144b3d300(&DAT_14cc29458);
    if (DAT_14cc29458 == -1) {
      FUN_145e4d6dc();
      FUN_145e4d592();
      FUN_140db5666(&DAT_14cc293b0,0,&DAT_14cc29348,L"FFXFSR3DeDitherCS",
                    L"/Plugin/FSR3/Private/PostProcessFFX_FSR3DeDither.usf",L"MainCS",5,1,
                    FUN_14981ae44,FUN_14981ade4,&LAB_14981adcc,&LAB_14981adc8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a608);
      _DAT_14cc293b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14464fbec);
      _Init_thread_footer(&DAT_14cc29458);
    }
  }
  return &DAT_14cc293b0;
}



// FUNCTION 145e4d592 FUN_145e4d592 body=205 status=ok
// SIG undefined FUN_145e4d592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4d592(void)

{
  if ((DAT_14cc293af & 2) == 0) {
    DAT_14cc293af = DAT_14cc293af | 2;
    _DAT_14cc29350 = L"FFXFSR3DeDitherCS";
    _DAT_14cc29368 = FUN_146826540;
    _DAT_14cc29370 = FUN_146825d77;
    _DAT_14cc29378 = FUN_146825fd6;
    _DAT_14cc29380 = FUN_1407e02ea;
    _DAT_14cc29388 = FUN_146826273;
    _DAT_14cc29360 = FUN_14981ad9a;
    _DAT_14cc293a0 = 0xffffffff000000e0;
    _DAT_14cc293a8 = 8;
    DAT_14cc293ac = 0;
    _DAT_14cc29390 = &LAB_14981adc4;
    FUN_145e4d660();
    FUN_1407e00cc(&DAT_14cc29348);
    return;
  }
  return;
}



// FUNCTION 145e4d660 FUN_145e4d660 body=123 status=ok
// SIG undefined FUN_145e4d660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4d660(void)

{
  _DAT_14cc2a8a8 = L"BASE";
  DAT_14cc2a8d2 = 4;
  _DAT_14cc2a8b0 = FUN_140b35ae4();
  _DAT_14cc2a8b8 = DAT_14cc29358;
  _DAT_14cc2a8c0 = &LAB_14682652b;
  DAT_14cc29358 = &DAT_14cc2a8a8;
  DAT_14cc293ad = DAT_14cc293ad + '\x01';
  _DAT_14cc2a8c8 = 0x100000000;
  if (*(char *)(_DAT_14cc2a8b0 + 100) != '\0') {
    DAT_14cc293ae = DAT_14cc293ae + '\x01';
  }
  return;
}



// FUNCTION 145e4d6dc FUN_145e4d6dc body=261 status=ok
// SIG undefined FUN_145e4d6dc(void)

void FUN_145e4d6dc(void)

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
              0x110) < DAT_14cc2a688) {
    FUN_144b3d300(&DAT_14cc2a688);
    if (DAT_14cc2a688 == -1) {
      FUN_145e4d7e2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xc6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a608,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144656135);
      _Init_thread_footer(&DAT_14cc2a688);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4d7e2 FUN_145e4d7e2 body=226 status=ok
// SIG undefined FUN_145e4d7e2(void)

longlong * FUN_145e4d7e2(longlong *param_1)

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
  pcVar13 = FUN_14676253a;
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



// FUNCTION 145e4d8ca FUN_145e4d8ca body=130 status=ok
// SIG undefined FUN_145e4d8ca(void)

undefined1 * FUN_145e4d8ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GBufferB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 199;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e4d8c6;
}



// FUNCTION 145e4d94c FUN_145e4d94c body=138 status=ok
// SIG undefined FUN_145e4d94c(void)

code * FUN_145e4d94c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4d8ca;
}



// FUNCTION 145e4d9d6 FUN_145e4d9d6 body=24 status=ok
// SIG undefined FUN_145e4d9d6(void)

void FUN_145e4d9d6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145e4d9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145e4d9ee FUN_145e4d9ee body=38 status=ok
// SIG undefined FUN_145e4d9ee(void)

undefined8 FUN_145e4d9ee(undefined8 param_1,int param_2)

{
  FUN_1415758f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e4da14 FUN_145e4da14 body=285 status=ok
// SIG undefined FUN_145e4da14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4da14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03bd8) {
    FUN_144b3d300(&DAT_14ca03bd8);
    if (DAT_14ca03bd8 == -1) {
      FUN_145e4dc7c();
      FUN_145e4db32();
      FUN_140db5666(&DAT_14ca03b30,0,&DAT_14ca03ac8,L"FLumenVisualizeCreateTilesCS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"FLumenVisualizeCreateTilesCS",5,1,FUN_147225f4c,FUN_147225eec,&LAB_1462e7442,
                    &LAB_147225ee8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06b38);
      _DAT_14ca03b30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8d9c);
      _Init_thread_footer(&DAT_14ca03bd8);
    }
  }
  return &DAT_14ca03b30;
}



// FUNCTION 145e4db32 FUN_145e4db32 body=205 status=ok
// SIG undefined FUN_145e4db32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4db32(void)

{
  if ((DAT_14ca03b2f & 2) == 0) {
    DAT_14ca03b2f = DAT_14ca03b2f | 2;
    _DAT_14ca03ad0 = L"FLumenVisualizeCreateTilesCS";
    _DAT_14ca03ae8 = FUN_146826540;
    _DAT_14ca03af0 = FUN_146825d77;
    _DAT_14ca03af8 = FUN_146825fd6;
    _DAT_14ca03b00 = FUN_1407e02ea;
    _DAT_14ca03b08 = FUN_146826273;
    _DAT_14ca03ae0 = FUN_147225eba;
    _DAT_14ca03b20 = 0xffffffff000000e0;
    _DAT_14ca03b28 = 8;
    DAT_14ca03b2c = 0;
    _DAT_14ca03b10 = &LAB_147225ee4;
    FUN_145e4dc00();
    FUN_1407e00cc(&DAT_14ca03ac8);
    return;
  }
  return;
}



// FUNCTION 145e4dc00 FUN_145e4dc00 body=123 status=ok
// SIG undefined FUN_145e4dc00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4dc00(void)

{
  _DAT_14ca07f68 = L"BASE";
  DAT_14ca07f92 = 4;
  _DAT_14ca07f70 = FUN_140b35ae4();
  _DAT_14ca07f78 = DAT_14ca03ad8;
  _DAT_14ca07f80 = &LAB_14682652b;
  DAT_14ca03ad8 = &DAT_14ca07f68;
  DAT_14ca03b2d = DAT_14ca03b2d + '\x01';
  _DAT_14ca07f88 = 0x100000000;
  if (*(char *)(_DAT_14ca07f70 + 100) != '\0') {
    DAT_14ca03b2e = DAT_14ca03b2e + '\x01';
  }
  return;
}



// FUNCTION 145e4dc7c FUN_145e4dc7c body=261 status=ok
// SIG undefined FUN_145e4dc7c(void)

void FUN_145e4dc7c(void)

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
              0x110) < DAT_14ca06bb8) {
    FUN_144b3d300(&DAT_14ca06bb8);
    if (DAT_14ca06bb8 == -1) {
      FUN_145e4dd82(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0xa7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06b38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3abb);
      _Init_thread_footer(&DAT_14ca06bb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4dd82 FUN_145e4dd82 body=226 status=ok
// SIG undefined FUN_145e4dd82(void)

longlong * FUN_145e4dd82(longlong *param_1)

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
  pcVar13 = FUN_1462ea5ca;
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



// FUNCTION 145e4de6a FUN_145e4de6a body=138 status=ok
// SIG undefined FUN_145e4de6a(void)

undefined1 * FUN_145e4de6a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e4de66;
}



// FUNCTION 145e4def4 FUN_145e4def4 body=138 status=ok
// SIG undefined FUN_145e4def4(void)

code * FUN_145e4def4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWTileAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ea652;
}



// FUNCTION 145e4df7e FUN_145e4df7e body=285 status=ok
// SIG undefined FUN_145e4df7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4df7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d640) {
    FUN_144b3d300(&DAT_14ca5d640);
    if (DAT_14ca5d640 == -1) {
      FUN_145e4e1e6();
      FUN_145e4e09c();
      FUN_140db5666(&DAT_14ca5d598,0,&DAT_14ca5d530,L"RenderSkyAtmosphereEditorHudPS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderSkyAtmosphereEditorHudPS",3,1,
                    FUN_1473161da,FUN_14731617a,&LAB_147316176,&LAB_147316172,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5f050);
      _DAT_14ca5d598 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143091521);
      _Init_thread_footer(&DAT_14ca5d640);
    }
  }
  return &DAT_14ca5d598;
}



// FUNCTION 145e4e09c FUN_145e4e09c body=205 status=ok
// SIG undefined FUN_145e4e09c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4e09c(void)

{
  if ((DAT_14ca5d597 & 2) == 0) {
    DAT_14ca5d597 = DAT_14ca5d597 | 2;
    _DAT_14ca5d538 = L"RenderSkyAtmosphereEditorHudPS";
    _DAT_14ca5d550 = FUN_146826540;
    _DAT_14ca5d558 = FUN_146825d77;
    _DAT_14ca5d560 = FUN_146825fd6;
    _DAT_14ca5d568 = FUN_1407e02ea;
    _DAT_14ca5d570 = FUN_146826273;
    _DAT_14ca5d548 = FUN_147316144;
    _DAT_14ca5d588 = 0xffffffff000000e0;
    _DAT_14ca5d590 = 8;
    DAT_14ca5d594 = 0;
    _DAT_14ca5d578 = &LAB_14731616e;
    FUN_145e4e16a();
    FUN_1407e00cc(&DAT_14ca5d530);
    return;
  }
  return;
}



// FUNCTION 145e4e16a FUN_145e4e16a body=123 status=ok
// SIG undefined FUN_145e4e16a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4e16a(void)

{
  _DAT_14ca5faf0 = L"BASE";
  DAT_14ca5fb1a = 4;
  _DAT_14ca5faf8 = FUN_140b35ae4();
  _DAT_14ca5fb00 = DAT_14ca5d540;
  _DAT_14ca5fb08 = &LAB_14682652b;
  DAT_14ca5d540 = &DAT_14ca5faf0;
  DAT_14ca5d595 = DAT_14ca5d595 + '\x01';
  _DAT_14ca5fb10 = 0x100000000;
  if (*(char *)(_DAT_14ca5faf8 + 100) != '\0') {
    DAT_14ca5d596 = DAT_14ca5d596 + '\x01';
  }
  return;
}



// FUNCTION 145e4e1e6 FUN_145e4e1e6 body=261 status=ok
// SIG undefined FUN_145e4e1e6(void)

void FUN_145e4e1e6(void)

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
              0x110) < DAT_14ca5f0d0) {
    FUN_144b3d300(&DAT_14ca5f0d0);
    if (DAT_14ca5f0d0 == -1) {
      FUN_145e4e2ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x418;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f050,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e857);
      _Init_thread_footer(&DAT_14ca5f0d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4e2ec FUN_145e4e2ec body=226 status=ok
// SIG undefined FUN_145e4e2ec(void)

longlong * FUN_145e4e2ec(longlong *param_1)

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
  pcVar13 = FUN_14630c898;
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



// FUNCTION 145e4e3d4 FUN_145e4e3d4 body=138 status=ok
// SIG undefined FUN_145e4e3d4(void)

undefined1 * FUN_145e4e3d4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x419;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e4e3d0;
}



// FUNCTION 145e4e45e FUN_145e4e45e body=138 status=ok
// SIG undefined FUN_145e4e45e(void)

code * FUN_145e4e45e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MiniFontTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000041a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4e3d4;
}



// FUNCTION 145e4e4f2 FUN_145e4e4f2 body=59 status=ok
// SIG undefined FUN_145e4e4f2(void)

void FUN_145e4e4f2(undefined8 param_1)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_145e4e52e(&local_9,param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4e52e FUN_145e4e52e body=79 status=ok
// SIG undefined FUN_145e4e52e(void)

void FUN_145e4e52e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    uVar1 = FUN_140427846();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0xd) == '\0') {
          *(undefined1 *)(lVar3 + 0x14) = 1;
        }
        return;
      }
    }
  }
  return;
}



// FUNCTION 145e4e57e FUN_145e4e57e body=103 status=ok
// SIG undefined FUN_145e4e57e(void)

ulonglong FUN_145e4e57e(longlong param_1)

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
LAB_145e4e5c8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145e4e5c8;
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



// FUNCTION 145e4e5e6 FUN_145e4e5e6 body=192 status=ok
// SIG undefined FUN_145e4e5e6(void)

void FUN_145e4e5e6(longlong param_1,longlong param_2,undefined4 param_3)

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
    if (param_2 != 0) goto LAB_145e4e660;
LAB_145e4e684:
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    if (plVar3[2] != param_2) goto LAB_145e4e660;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    if (plVar3 == (longlong *)0x0) goto LAB_145e4e684;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x220))(local_38,param_1 + 0x180);
    }
  }
  plVar3 = plStack_30;
  *(undefined4 *)(param_1 + 0x168) = param_3;
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
LAB_145e4e660:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e4e6a8 FUN_145e4e6a8 body=205 status=ok
// SIG undefined FUN_145e4e6a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4e6a8(void)

{
  if ((DAT_14c9c2f6f & 2) == 0) {
    DAT_14c9c2f6f = DAT_14c9c2f6f | 2;
    _DAT_14c9c2f10 = L"FCopyStencilToStencilTexturePS";
    _DAT_14c9c2f28 = FUN_146826540;
    _DAT_14c9c2f30 = FUN_146825d77;
    _DAT_14c9c2f38 = FUN_146825fd6;
    _DAT_14c9c2f40 = FUN_1407e02ea;
    _DAT_14c9c2f48 = FUN_146826273;
    _DAT_14c9c2f20 = FUN_147146490;
    _DAT_14c9c2f60 = 0xffffffff000000e0;
    _DAT_14c9c2f68 = 8;
    DAT_14c9c2f6c = 0;
    _DAT_14c9c2f50 = &LAB_1471464ba;
    FUN_145e4e776();
    FUN_1407e00cc(&DAT_14c9c2f08);
    return;
  }
  return;
}



// FUNCTION 145e4e776 FUN_145e4e776 body=123 status=ok
// SIG undefined FUN_145e4e776(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4e776(void)

{
  _DAT_14c9c44d8 = L"BASE";
  DAT_14c9c4502 = 4;
  _DAT_14c9c44e0 = FUN_140b35ae4();
  _DAT_14c9c44e8 = DAT_14c9c2f18;
  _DAT_14c9c44f0 = &LAB_14682652b;
  DAT_14c9c2f18 = &DAT_14c9c44d8;
  DAT_14c9c2f6d = DAT_14c9c2f6d + '\x01';
  _DAT_14c9c44f8 = 0x100000000;
  if (*(char *)(_DAT_14c9c44e0 + 100) != '\0') {
    DAT_14c9c2f6e = DAT_14c9c2f6e + '\x01';
  }
  return;
}



// FUNCTION 145e4e7f2 FUN_145e4e7f2 body=226 status=ok
// SIG undefined FUN_145e4e7f2(void)

longlong * FUN_145e4e7f2(longlong *param_1)

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
  pcVar13 = FUN_1462bca9e;
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



// FUNCTION 145e4e8da FUN_145e4e8da body=138 status=ok
// SIG undefined FUN_145e4e8da(void)

code * FUN_145e4e8da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000f12;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bcb26;
}



// FUNCTION 145e4e964 FUN_145e4e964 body=138 status=ok
// SIG undefined FUN_145e4e964(void)

code * FUN_145e4e964(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneForegroundStencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000f14;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147149cca;
}



// FUNCTION 145e4e9ee FUN_145e4e9ee body=292 status=ok
// SIG undefined FUN_145e4e9ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e4e9ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c46f8) {
    FUN_144b3d300(&DAT_14c9c46f8);
    if (DAT_14c9c46f8 == -1) {
      FUN_145e4ec5c();
      FUN_145e4eb12();
      FUN_140db5666(&DAT_14c9c4650,0,&DAT_14c9c45e8,L"FViewDepthCopyCS",
                    L"/Engine/Private/CopyDepthTextureCS.usf",L"CopyDepthCS",5,1,FUN_14714d36a,
                    FUN_14714d30a,&LAB_14714d2f2,&LAB_14714d2ee,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9c7cc8);
      _DAT_14c9c4650 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bcb288);
      _Init_thread_footer(&DAT_14c9c46f8);
    }
  }
  return &DAT_14c9c4650;
}



// FUNCTION 145e4eb12 FUN_145e4eb12 body=205 status=ok
// SIG undefined FUN_145e4eb12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e4eb12(void)

{
  if ((DAT_14c9c464f & 2) == 0) {
    DAT_14c9c464f = DAT_14c9c464f | 2;
    _DAT_14c9c45f0 = L"FViewDepthCopyCS";
    _DAT_14c9c4608 = FUN_146826540;
    _DAT_14c9c4610 = FUN_146825d77;
    _DAT_14c9c4618 = FUN_146825fd6;
    _DAT_14c9c4620 = FUN_1407e02ea;
    _DAT_14c9c4628 = FUN_146826273;
    _DAT_14c9c4600 = FUN_14714d2c0;
    _DAT_14c9c4640 = 0xffffffff000000e0;
    _DAT_14c9c4648 = 8;
    DAT_14c9c464c = 0;
    _DAT_14c9c4630 = &LAB_14714d2ea;
    FUN_145e4ebe0();
    FUN_1407e00cc(&DAT_14c9c45e8);
    return;
  }
  return;
}


