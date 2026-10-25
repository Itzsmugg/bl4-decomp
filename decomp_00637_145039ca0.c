// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145039ca0 FUN_145039ca0 body=8 status=ok
// SIG undefined FUN_145039ca0(void)

char * FUN_145039ca0(void)

{
  return "CleanUp";
}



// FUNCTION 145039cb0 FUN_145039cb0 body=115 status=ok
// SIG undefined FUN_145039cb0(void)

undefined8 * FUN_145039cb0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145039d30 FUN_145039d30 body=319 status=ok
// SIG undefined FUN_145039d30(void)

void FUN_145039d30(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 145039e70 FUN_145039e70 body=319 status=ok
// SIG undefined FUN_145039e70(void)

void FUN_145039e70(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar3) {
    uVar6 = uVar3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 8,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar7 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar8 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar8;
        *plVar8 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar8 = plVar8 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar3 = uVar6 * 8 + 8;
  uVar7 = uVar6;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar7 = uVar6 + 1;
    if (uVar3 <= local_res8) {
      uVar7 = uVar7 + (local_res8 + uVar6 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 8);
  }
  *param_1 = plVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 145039fb0 FUN_145039fb0 body=258 status=ok
// SIG undefined FUN_145039fb0(void)

void FUN_145039fb0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 4;
  puVar1 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 14503a0c0 FUN_14503a0c0 body=268 status=ok
// SIG undefined FUN_14503a0c0(void)

void FUN_14503a0c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 4,&local_res8);
  puVar5 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 4);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14503a1cc FUN_14503a1cc body=9 status=ok
// SIG undefined FUN_14503a1cc(void)

void FUN_14503a1cc(longlong param_1)

{
  FUN_145038450(param_1 + -0x20);
  return;
}



// FUNCTION 14503a1d8 FUN_14503a1d8 body=9 status=ok
// SIG undefined FUN_14503a1d8(void)

void FUN_14503a1d8(longlong param_1)

{
  FUN_145038190(param_1 + -0x20);
  return;
}



// FUNCTION 14503a1e4 FUN_14503a1e4 body=9 status=ok
// SIG undefined FUN_14503a1e4(void)

void FUN_14503a1e4(longlong param_1)

{
  FUN_145038f80(param_1 + -0x20);
  return;
}



// FUNCTION 14503a1f0 FUN_14503a1f0 body=9 status=ok
// SIG undefined FUN_14503a1f0(void)

void FUN_14503a1f0(longlong param_1)

{
  FUN_145038a80(param_1 + -0x20);
  return;
}



// FUNCTION 14503a1fc FUN_14503a1fc body=9 status=ok
// SIG undefined FUN_14503a1fc(void)

void FUN_14503a1fc(longlong param_1)

{
  FUN_145039640(param_1 + -0x20);
  return;
}



// FUNCTION 14503a208 FUN_14503a208 body=9 status=ok
// SIG undefined FUN_14503a208(void)

void FUN_14503a208(longlong param_1)

{
  FUN_1450394f0(param_1 + -0x20);
  return;
}



// FUNCTION 14503a214 FUN_14503a214 body=9 status=ok
// SIG undefined FUN_14503a214(void)

void FUN_14503a214(longlong param_1)

{
  FUN_145039b00(param_1 + -0x20);
  return;
}



// FUNCTION 14503a220 FUN_14503a220 body=9 status=ok
// SIG undefined FUN_14503a220(void)

void FUN_14503a220(longlong param_1)

{
  FUN_1450399b0(param_1 + -0x20);
  return;
}



// FUNCTION 14503a22c FUN_14503a22c body=9 status=ok
// SIG undefined FUN_14503a22c(void)

void FUN_14503a22c(longlong param_1)

{
  FUN_145039cb0(param_1 + -0x20);
  return;
}



// FUNCTION 14503a240 FUN_14503a240 body=1875 status=ok
// SIG undefined FUN_14503a240(void)

void FUN_14503a240(longlong param_1,undefined8 *param_2,undefined4 param_3,longlong param_4)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uStack_334;
  int local_320;
  int local_314;
  int local_308;
  int local_2fc;
  undefined1 local_2f0 [8];
  longlong *local_2e8;
  uint local_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  uint uStack_2d4;
  int local_2d0;
  int iStack_2cc;
  int iStack_2c8;
  int iStack_2c4;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  int local_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  longlong local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  longlong lStack_208;
  longlong local_200;
  undefined8 *local_1f8;
  int local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  
  local_1f8 = &local_1e8;
  local_2e8 = (longlong *)(param_4 + 0x18);
  uStack_1e0 = param_2[2];
  iVar28 = 1;
  lVar4 = param_2[5];
  local_1d8 = param_2[3];
  lVar11 = (longlong)(int)((ulonglong)*param_2 >> 0x20);
  lVar12 = (longlong)(int)*param_2;
  lVar13 = (longlong)(int)((ulonglong)param_2[1] >> 0x20);
  local_1e8 = CONCAT44(uStack_334,param_3);
  lVar14 = (longlong)(int)param_2[1];
  local_1ec = 0x80000010;
  do {
    plVar7 = local_2e8;
    uVar10 = *(uint *)((longlong)local_2e8 + 0xc);
    local_1f0 = iVar28 + -1;
    local_270 = local_1f8[(longlong)local_1f0 * 3 + 2];
    piVar2 = (int *)(local_1f8 + (longlong)local_1f0 * 3);
    iVar28 = *piVar2;
    iStack_224 = piVar2[1];
    iStack_220 = (int)*(longlong *)(piVar2 + 2);
    iStack_21c = piVar2[3];
    lVar6 = *(longlong *)(piVar2 + 2);
    local_288 = *param_2;
    uStack_280 = param_2[1];
    local_268 = param_2[4];
    uStack_260 = param_2[5];
    if (0 < (int)uVar10) {
      lVar20 = *local_2e8;
      uVar9 = iVar28 * -0x61c8864f;
      uVar9 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
              iVar28 * -0x4f000000) & uVar10;
      lVar17 = (ulonglong)uVar9 * 0x10;
      iVar31 = *(int *)(lVar20 + lVar17);
      while (iVar31 != -1) {
        if (*(int *)(lVar17 + lVar20) == iVar28) goto LAB_14503a3ca;
        uVar9 = uVar9 + 1 & uVar10;
        lVar17 = (ulonglong)uVar9 * 0x10;
        iVar31 = *(int *)(lVar17 + lVar20);
      }
    }
    uVar9 = uVar10 + 1;
LAB_14503a3ca:
    local_278 = lVar6;
    local_228 = iVar28;
    local_218 = local_270;
    if (*(int *)(param_4 + 0x24) < (int)uVar9) {
      uVar15 = FUN_14503a9a0(param_4,iVar28,&local_288);
      if (*(int *)((longlong)plVar7 + 0xc) < (int)plVar7[1] * 2) {
        FUN_14503aad0(plVar7,local_2f0,&PTR_vftable_14c6e47a0,
                      *(int *)((longlong)plVar7 + 0xc) * 2 + 2);
      }
      iVar29 = 1;
      lVar20 = *plVar7;
      uVar10 = iVar28 * -0x61c8864f;
      uVar10 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
               iVar28 * -0x4f000000) & *(uint *)((longlong)plVar7 + 0xc);
      lVar17 = (ulonglong)uVar10 * 0x10;
      iVar31 = *(int *)(lVar20 + lVar17);
      while (iVar31 != -1) {
        if (*(int *)(lVar17 + lVar20) == iVar28) {
          iVar29 = 0;
          break;
        }
        uVar10 = uVar10 + 1 & *(uint *)((longlong)plVar7 + 0xc);
        lVar17 = (ulonglong)uVar10 * 0x10;
        iVar31 = *(int *)(lVar17 + lVar20);
      }
      *(int *)(plVar7 + 1) = (int)plVar7[1] + iVar29;
      piVar2 = (int *)(lVar20 + (longlong)(int)uVar10 * 0x10);
      if (piVar2 != (int *)0x0) {
        *piVar2 = iVar28;
      }
      puVar18 = (undefined8 *)(*plVar7 + 8 + (longlong)(int)uVar10 * 0x10);
      if (puVar18 != (undefined8 *)0x0) {
        *puVar18 = uVar15;
      }
    }
    else {
      lVar20 = *(longlong *)(*local_2e8 + 8 + (longlong)(int)uVar9 * 0x10);
      if (*(longlong *)(lVar20 + 0x18) == lVar6) {
        *(longlong *)(lVar20 + 0x18) = local_270;
      }
      else {
        uVar15 = FUN_14503a9a0(param_4,iVar28,&local_288);
        *(undefined8 *)(*plVar7 + 8 + (longlong)(int)uVar9 * 0x10) = uVar15;
      }
    }
    lVar8 = local_218;
    lVar21 = *(longlong *)(param_1 + 0x28);
    lVar27 = *(longlong *)(param_1 + 0x38);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar28 * 4) * 0x60;
    puVar18 = (undefined8 *)(lVar16 + 0x20 + lVar21);
    local_268 = *puVar18;
    uStack_260 = puVar18[1];
    puVar18 = (undefined8 *)(lVar16 + 0x30 + lVar21);
    local_258 = *puVar18;
    uStack_250 = puVar18[1];
    puVar18 = (undefined8 *)(lVar16 + 0x40 + lVar21);
    local_248 = *puVar18;
    uStack_240 = puVar18[1];
    puVar18 = (undefined8 *)(lVar16 + 0x50 + lVar21);
    local_238 = *puVar18;
    uStack_230 = puVar18[1];
    lVar20 = *(longlong *)(lVar27 + (ulonglong)(*(uint *)(lVar16 + lVar21) & 0x3fffffff) * 0xc);
    local_320 = (int)lVar20;
    lVar17 = (longlong)(int)((uint *)(lVar16 + lVar21))[3] * 0x60;
    puVar1 = (uint *)(lVar17 + lVar21);
    local_2e0 = *puVar1;
    uStack_2dc = puVar1[1];
    uStack_2d8 = puVar1[2];
    uStack_2d4 = puVar1[3];
    piVar2 = (int *)(lVar17 + 0x10 + lVar21);
    iStack_2cc = piVar2[1];
    iStack_2c8 = piVar2[2];
    iStack_2c4 = piVar2[3];
    puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar21);
    local_2c0 = *puVar3;
    uStack_2bc = puVar3[1];
    uStack_2b8 = puVar3[2];
    uStack_2b4 = puVar3[3];
    puVar3 = (undefined4 *)(lVar17 + 0x30 + lVar21);
    local_2b0 = *puVar3;
    uStack_2ac = puVar3[1];
    uStack_2a8 = puVar3[2];
    uStack_2a4 = puVar3[3];
    puVar3 = (undefined4 *)(lVar17 + 0x40 + lVar21);
    local_2a0 = *puVar3;
    uStack_29c = puVar3[1];
    uStack_298 = puVar3[2];
    uStack_294 = puVar3[3];
    puVar3 = (undefined4 *)(lVar17 + 0x50 + lVar21);
    uVar32 = *puVar3;
    uVar33 = puVar3[1];
    uVar34 = puVar3[2];
    uVar35 = puVar3[3];
    lVar17 = *(longlong *)(lVar27 + (ulonglong)(local_2e0 & 0x3fffffff) * 0xc);
    local_314 = (int)lVar17;
    lVar24 = (longlong)local_314;
    lVar25 = lVar17;
    lVar22 = (int)((ulonglong)lVar17 >> 0x20) * lVar11 + lVar24 * lVar12;
    lVar26 = local_320 * lVar12 + (int)((ulonglong)lVar20 >> 0x20) * lVar11;
    lVar30 = (longlong)local_320;
    iVar31 = *(int *)(lVar16 + 0x10 + lVar21);
    local_2d0 = *piVar2;
    bVar5 = true;
    while ((lVar16 = lVar22, lVar19 = lVar25, bVar23 = lVar16 < lVar26, lVar26 <= lVar16 || (bVar5))
          ) {
      local_288 = CONCAT44(uStack_2dc,local_2e0);
      uStack_280 = CONCAT44(uStack_2d4,uStack_2d8);
      local_268 = CONCAT44(uStack_2bc,local_2c0);
      uStack_260 = CONCAT44(uStack_2b4,uStack_2b8);
      local_258 = CONCAT44(uStack_2ac,local_2b0);
      uStack_250 = CONCAT44(uStack_2a4,uStack_2a8);
      local_248 = CONCAT44(uStack_29c,local_2a0);
      uStack_240 = CONCAT44(uStack_294,uStack_298);
      local_238 = CONCAT44(uVar33,uVar32);
      uStack_230 = CONCAT44(uVar35,uVar34);
      lVar20 = (longlong)(int)uStack_2d4 * 0x60;
      puVar1 = (uint *)(lVar20 + lVar21);
      local_2e0 = *puVar1;
      uStack_2dc = puVar1[1];
      uStack_2d8 = puVar1[2];
      uStack_2d4 = puVar1[3];
      piVar2 = (int *)(lVar20 + 0x10 + lVar21);
      iStack_2cc = piVar2[1];
      iStack_2c8 = piVar2[2];
      iStack_2c4 = piVar2[3];
      puVar3 = (undefined4 *)(lVar20 + 0x20 + lVar21);
      local_2c0 = *puVar3;
      uStack_2bc = puVar3[1];
      uStack_2b8 = puVar3[2];
      uStack_2b4 = puVar3[3];
      puVar3 = (undefined4 *)(lVar20 + 0x30 + lVar21);
      local_2b0 = *puVar3;
      uStack_2ac = puVar3[1];
      uStack_2a8 = puVar3[2];
      uStack_2a4 = puVar3[3];
      puVar3 = (undefined4 *)(lVar20 + 0x40 + lVar21);
      local_2a0 = *puVar3;
      uStack_29c = puVar3[1];
      uStack_298 = puVar3[2];
      uStack_294 = puVar3[3];
      puVar3 = (undefined4 *)(lVar20 + 0x50 + lVar21);
      uVar32 = *puVar3;
      uVar33 = puVar3[1];
      uVar34 = puVar3[2];
      uVar35 = puVar3[3];
      lVar25 = *(longlong *)(lVar27 + (ulonglong)(local_2e0 & 0x3fffffff) * 0xc);
      local_308 = (int)lVar25;
      lVar24 = (longlong)local_308;
      lVar22 = (int)((ulonglong)lVar25 >> 0x20) * lVar11 + lVar24 * lVar12;
      lVar26 = lVar16;
      lVar30 = lVar19;
      iVar31 = local_2d0;
      local_2d0 = *piVar2;
      bVar5 = bVar23;
      lVar20 = lVar19;
    }
    lVar25 = *(longlong *)(param_1 + 0x28);
    lVar21 = (int)lVar24 * lVar14 + (int)((ulonglong)lVar19 >> 0x20) * lVar13;
    iVar29 = local_1f0;
    bVar5 = (int)lVar30 * lVar14 + (int)((ulonglong)lVar20 >> 0x20) * lVar13 <= lVar4;
    do {
      lVar22 = lVar16;
      bVar23 = lVar21 <= lVar4;
      lVar21 = lVar22;
      if (lVar22 < lVar6) {
        lVar21 = lVar6;
      }
      if (lVar8 < lVar26) {
        lVar26 = lVar8;
      }
      iVar28 = iVar29;
      if ((-1 < iVar31) && (((bVar5 || (bVar23)) && (lVar21 < lVar26)))) {
        iVar28 = iVar29 + 1;
        local_210 = *(undefined4 *)((longlong)iVar31 * 0x60 + 4 + lVar25);
        lStack_208 = lVar21;
        local_200 = lVar26;
        if ((int)(local_1ec & 0x7fffffff) < iVar28) {
          FUN_14503cd10(&local_1f8,&PTR_vftable_14c6e47c0,(longlong)iVar28,lVar25,lVar20,lVar17);
          lVar25 = *(longlong *)(param_1 + 0x28);
          lVar27 = *(longlong *)(param_1 + 0x38);
          iVar29 = local_1f0;
        }
        puVar18 = local_1f8 + (longlong)iVar29 * 3;
        local_1f0 = iVar28;
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = CONCAT44(uStack_20c,local_210);
          puVar18[1] = lStack_208;
          puVar18[2] = local_200;
          lVar25 = *(longlong *)(param_1 + 0x28);
          lVar27 = *(longlong *)(param_1 + 0x38);
        }
      }
      iVar31 = local_2d0;
      local_288 = CONCAT44(uStack_2dc,local_2e0);
      uStack_280 = CONCAT44(uStack_2d4,uStack_2d8);
      local_268 = CONCAT44(uStack_2bc,local_2c0);
      uStack_260 = CONCAT44(uStack_2b4,uStack_2b8);
      local_258 = CONCAT44(uStack_2ac,local_2b0);
      uStack_250 = CONCAT44(uStack_2a4,uStack_2a8);
      local_248 = CONCAT44(uStack_29c,local_2a0);
      uStack_240 = CONCAT44(uStack_294,uStack_298);
      local_238 = CONCAT44(uVar33,uVar32);
      uStack_230 = CONCAT44(uVar35,uVar34);
      lVar17 = (longlong)(int)uStack_2d4 * 0x60;
      puVar1 = (uint *)(lVar17 + lVar25);
      local_2e0 = *puVar1;
      uStack_2dc = puVar1[1];
      uStack_2d8 = puVar1[2];
      uStack_2d4 = puVar1[3];
      piVar2 = (int *)(lVar17 + 0x10 + lVar25);
      local_2d0 = *piVar2;
      iStack_2cc = piVar2[1];
      iStack_2c8 = piVar2[2];
      iStack_2c4 = piVar2[3];
      puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar25);
      local_2c0 = *puVar3;
      uStack_2bc = puVar3[1];
      uStack_2b8 = puVar3[2];
      uStack_2b4 = puVar3[3];
      puVar3 = (undefined4 *)(lVar17 + 0x30 + lVar25);
      local_2b0 = *puVar3;
      uStack_2ac = puVar3[1];
      uStack_2a8 = puVar3[2];
      uStack_2a4 = puVar3[3];
      puVar3 = (undefined4 *)(lVar17 + 0x40 + lVar25);
      local_2a0 = *puVar3;
      uStack_29c = puVar3[1];
      uStack_298 = puVar3[2];
      uStack_294 = puVar3[3];
      puVar3 = (undefined4 *)(lVar17 + 0x50 + lVar25);
      uVar32 = *puVar3;
      uVar33 = puVar3[1];
      uVar34 = puVar3[2];
      uVar35 = puVar3[3];
      lVar17 = *(longlong *)(lVar27 + (ulonglong)(local_2e0 & 0x3fffffff) * 0xc);
      local_2fc = (int)lVar17;
      lVar21 = (longlong)(int)((ulonglong)lVar17 >> 0x20);
      lVar16 = lVar12 * local_2fc + lVar11 * lVar21;
      lVar21 = local_2fc * lVar14 + lVar13 * lVar21;
      lVar26 = lVar22;
      iVar29 = iVar28;
      bVar5 = bVar23;
    } while (lVar16 < lVar22);
    if (iVar28 == 0) {
      local_1f0 = 0;
      if ((-1 < (int)local_1ec) && (local_1f8 != (undefined8 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_1f8,(ulonglong)(local_1ec & 0x7fffffff) * 0x18);
      }
      return;
    }
  } while( true );
}



// FUNCTION 14503a9a0 FUN_14503a9a0 body=158 status=ok
// SIG undefined FUN_14503a9a0(void)

undefined8 * FUN_14503a9a0(longlong *param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  if ((int)param_1[2] == 0x80) {
    FUN_14503aa40();
  }
  puVar4 = (undefined8 *)((longlong)(int)param_1[2] * 0x40 + param_1[1]);
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  *puVar4 = *param_3;
  puVar4[1] = param_3[1];
  puVar4[2] = param_3[2];
  puVar4[3] = param_3[3];
  puVar4[4] = param_3[4];
  puVar4[5] = param_3[5];
  plVar1 = (longlong *)(*(longlong *)(*param_1 + 0x48) + (longlong)param_2 * 8);
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x48) + (longlong)param_2 * 8);
  do {
    puVar4[7] = lVar2;
    LOCK();
    lVar3 = *plVar1;
    bVar5 = lVar2 == lVar3;
    if (bVar5) {
      *plVar1 = (longlong)puVar4;
      lVar3 = lVar2;
    }
    UNLOCK();
    lVar2 = lVar3;
  } while (!bVar5);
  return puVar4;
}



// FUNCTION 14503aa40 FUN_14503aa40 body=139 status=ok
// SIG undefined FUN_14503aa40(void)

void FUN_14503aa40(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_res8;
  
  lVar2 = *param_1;
  local_res8 = 0x2008;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"NodeBlock");
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_14503c760(lVar3);
  }
  lVar4 = *(longlong *)(lVar2 + 0x18);
  do {
    *(longlong *)(lVar3 + 0x2000) = lVar4;
    plVar1 = (longlong *)(lVar2 + 0x18);
    LOCK();
    lVar5 = *plVar1;
    bVar6 = lVar4 == lVar5;
    if (bVar6) {
      *plVar1 = lVar3;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar6);
  param_1[1] = lVar3;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14503aad0 FUN_14503aad0 body=393 status=ok
// SIG undefined FUN_14503aad0(void)

undefined4 * FUN_14503aad0(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  lVar3 = param_1[1];
  piVar2 = (int *)*param_1;
  iVar7 = 8;
  if (8 < param_4) {
    iVar7 = param_4;
  }
  lVar9 = (longlong)iVar7;
  iVar6 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar5 = (**(code **)(*param_3 + 8))(param_3,lVar9 << 4);
  if (lVar5 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    *param_1 = lVar5;
    if (0 < iVar7) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar5 + *param_1) = 0xffffffff;
        lVar9 = lVar9 + -1;
        lVar5 = lVar5 + 0x10;
      } while (lVar9 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    iVar8 = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar7 + -1;
    lVar5 = (longlong)iVar6;
    piVar10 = piVar2;
    if (0 < iVar6) {
      do {
        if (*piVar10 != -1) {
          if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
            FUN_14503aad0(param_1,local_res8,param_3,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
          }
          iVar7 = *piVar10;
          iVar11 = 1;
          lVar9 = *param_1;
          uVar4 = iVar7 * -0x61c8864f;
          uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                  iVar7 * -0x4f000000) & *(uint *)((longlong)param_1 + 0xc);
          iVar1 = *(int *)(lVar9 + (ulonglong)uVar4 * 0x10);
          while (iVar1 != -1) {
            if (iVar1 == iVar7) {
              iVar11 = 0;
              break;
            }
            uVar4 = uVar4 + 1 & *(uint *)((longlong)param_1 + 0xc);
            iVar1 = *(int *)(lVar9 + (ulonglong)uVar4 * 0x10);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar11;
          FUN_144b3d470((longlong)(int)uVar4 * 0x10 + lVar9,piVar2 + (longlong)iVar8 * 4,0x10);
        }
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + -1;
        piVar10 = piVar10 + 4;
      } while (lVar5 != 0);
    }
    if (-1 < (int)lVar3) {
      (**(code **)(*param_3 + 0x18))(param_3,piVar2,(longlong)iVar6 << 4);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14503ac60 FUN_14503ac60 body=137 status=ok
// SIG undefined FUN_14503ac60(void)

void FUN_14503ac60(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)((longlong)param_1 + 0xc) + 1, lVar4 = (longlong)iVar2, 0 < iVar2)) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar3 + *param_1) != -1) {
        *(undefined4 *)(lVar3 + *param_1) = 0xffffffff;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((*param_1 != 0) && ((uVar1 & 0x80000000) == 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (longlong)(*(int *)((longlong)param_1 + 0xc) + 1) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 14503acf0 FUN_14503acf0 body=2140 status=ok
// SIG undefined FUN_14503acf0(void)

void FUN_14503acf0(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined4 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  byte bVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  byte bVar23;
  int *piVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  int iVar32;
  bool bVar33;
  int iVar34;
  undefined8 local_3e8;
  undefined8 local_3e0;
  ulonglong local_3b8;
  int local_37c;
  int iStack_378;
  int local_374;
  int iStack_370;
  int local_368;
  int local_35c;
  undefined1 local_350 [8];
  longlong *local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  uint local_318;
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  undefined4 *local_258;
  int local_250;
  uint local_24c;
  undefined4 local_248;
  undefined8 local_244;
  undefined8 local_23c;
  undefined8 local_234;
  
  local_23c = param_2[1];
  local_258 = &local_248;
  local_234 = param_2[2];
  local_244 = *param_2;
  local_250 = 1;
  local_348 = param_5 + 3;
  local_24c = 0x80000010;
  local_248 = param_4;
LAB_14503ad80:
  uVar10 = *(uint *)((longlong)param_5 + 0x24);
  local_250 = local_250 + -1;
  piVar24 = local_258 + (longlong)local_250 * 8;
  uVar4 = *(ulonglong *)(piVar24 + 3);
  uVar5 = *(undefined8 *)(piVar24 + 1);
  iVar30 = *piVar24;
  lVar25 = (longlong)iVar30;
  uVar6 = *(ulonglong *)(piVar24 + 5);
  if (0 < (int)uVar10) {
    lVar19 = param_5[3];
    uVar9 = iVar30 * -0x61c8864f;
    uVar9 = (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar30 * -0x4f000000)
            & uVar10;
    lVar13 = (ulonglong)uVar9 * 0x10;
    iVar34 = *(int *)(lVar19 + lVar13);
    while (iVar34 != -1) {
      if (*(int *)(lVar19 + lVar13) == iVar30) goto LAB_14503adfa;
      uVar9 = uVar9 + 1 & uVar10;
      lVar13 = (ulonglong)uVar9 * 0x10;
      iVar34 = *(int *)(lVar19 + lVar13);
    }
  }
  uVar9 = uVar10 + 1;
LAB_14503adfa:
  local_374 = (int)uVar6;
  iStack_370 = (int)(uVar6 >> 0x20);
  local_340 = uVar5;
  if (*(int *)((longlong)param_5 + 0x24) < (int)uVar9) {
    if ((int)param_5[2] == 0x80) {
      FUN_14503b550(param_5);
    }
    puVar1 = (undefined8 *)(param_5[1] + (longlong)(int)param_5[2] * 0x28);
    *(int *)(param_5 + 2) = (int)param_5[2] + 1;
    *puVar1 = uVar5;
    puVar1[1] = uVar4;
    puVar1[2] = uVar6;
    plVar18 = (longlong *)(*(longlong *)(*param_5 + 0x48) + lVar25 * 8);
    lVar19 = *(longlong *)(*(longlong *)(*param_5 + 0x48) + lVar25 * 8);
    do {
      puVar1[4] = lVar19;
      LOCK();
      lVar13 = *plVar18;
      bVar33 = lVar19 == lVar13;
      if (bVar33) {
        *plVar18 = (longlong)puVar1;
        lVar13 = lVar19;
      }
      UNLOCK();
      lVar19 = lVar13;
    } while (!bVar33);
    plVar18 = param_5 + 3;
    if (*(int *)((longlong)param_5 + 0x24) < (int)param_5[4] * 2) {
      FUN_14503b5e0(param_5 + 3,local_350,&PTR_vftable_14c6e47a0,
                    *(int *)((longlong)param_5 + 0x24) * 2 + 2);
      plVar18 = local_348;
    }
    iVar29 = 1;
    lVar19 = *plVar18;
    uVar10 = iVar30 * -0x61c8864f;
    uVar10 = (uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
             iVar30 * -0x4f000000) & *(uint *)((longlong)plVar18 + 0xc);
    lVar13 = (ulonglong)uVar10 * 0x10;
    iVar34 = *(int *)(lVar19 + lVar13);
    while (iVar34 != -1) {
      if (*(int *)(lVar19 + lVar13) == iVar30) {
        iVar29 = 0;
        break;
      }
      uVar10 = uVar10 + 1 & *(uint *)((longlong)plVar18 + 0xc);
      lVar13 = (ulonglong)uVar10 * 0x10;
      iVar34 = *(int *)(lVar19 + lVar13);
    }
    *(int *)(plVar18 + 1) = (int)plVar18[1] + iVar29;
    piVar24 = (int *)(lVar19 + (longlong)(int)uVar10 * 0x10);
    if (piVar24 != (int *)0x0) {
      *piVar24 = iVar30;
    }
    plVar18 = (longlong *)(*plVar18 + 8 + (longlong)(int)uVar10 * 0x10);
    if (plVar18 != (longlong *)0x0) {
      *plVar18 = (longlong)puVar1;
    }
  }
  else {
    lVar19 = *(longlong *)(param_5[3] + 8 + (longlong)(int)uVar9 * 0x10);
    if ((longlong)iStack_370 * (longlong)*(int *)(lVar19 + 8) -
        (longlong)local_374 * (longlong)*(int *)(lVar19 + 0xc) == 0) {
      *(ulonglong *)(lVar19 + 8) = uVar4;
    }
    else {
      if ((int)param_5[2] == 0x80) {
        FUN_14503b550(param_5);
      }
      puVar1 = (undefined8 *)(param_5[1] + (longlong)(int)param_5[2] * 0x28);
      *(int *)(param_5 + 2) = (int)param_5[2] + 1;
      *puVar1 = uVar5;
      puVar1[1] = uVar4;
      puVar1[2] = uVar6;
      plVar18 = (longlong *)(*(longlong *)(*param_5 + 0x48) + lVar25 * 8);
      lVar19 = *(longlong *)(*(longlong *)(*param_5 + 0x48) + lVar25 * 8);
      do {
        puVar1[4] = lVar19;
        LOCK();
        lVar13 = *plVar18;
        bVar33 = lVar19 == lVar13;
        if (bVar33) {
          *plVar18 = (longlong)puVar1;
          lVar13 = lVar19;
        }
        UNLOCK();
        lVar19 = lVar13;
      } while (!bVar33);
      *(undefined8 **)(param_5[3] + 8 + (longlong)(int)uVar9 * 0x10) = puVar1;
    }
  }
  lVar19 = *(longlong *)(param_1 + 0x28);
  lVar13 = *(longlong *)(param_1 + 0x38);
  puVar2 = (uint *)((longlong)*(int *)(*(longlong *)(param_1 + 0x18) + lVar25 * 4) * 0x60 + lVar19);
  uVar12 = (ulonglong)(*puVar2 & 0x3fffffff);
  local_338 = *(undefined8 *)(lVar13 + uVar12 * 0xc);
  local_330 = *(undefined4 *)(lVar13 + 8 + uVar12 * 0xc);
  iVar32 = (int)*param_2;
  local_3e8._0_4_ = (int)local_338 - iVar32;
  iVar17 = (int)((ulonglong)*param_2 >> 0x20);
  iVar29 = (int)((ulonglong)local_338 >> 0x20) - iVar17;
  local_3e8 = CONCAT44(iVar29,(uint)local_3e8);
  lVar25 = (longlong)(int)puVar2[2] * 0x60;
  puVar2 = (uint *)(lVar25 + lVar19);
  local_318 = *puVar2;
  uStack_314 = puVar2[1];
  uStack_310 = puVar2[2];
  uStack_30c = puVar2[3];
  iVar34 = *(int *)(lVar25 + 0x10 + lVar19);
  local_32c = *(undefined8 *)(lVar13 + (ulonglong)(local_318 & 0x3fffffff) * 0xc);
  local_324 = *(undefined4 *)(lVar13 + 8 + (ulonglong)(local_318 & 0x3fffffff) * 0xc);
  iVar30 = (int)((ulonglong)local_32c >> 0x20) - iVar17;
  local_368 = (int)local_32c - iVar32;
  local_3e0 = CONCAT44(iVar30,local_368);
  uVar12 = local_3e8;
  bVar23 = 1;
  while( true ) {
    uVar14 = local_3e0;
    local_3b8 = (ulonglong)(uint)local_3e8;
    iVar11 = (int)(uVar14 >> 0x20);
    lVar27 = (longlong)(int)(uint)local_3e8;
    lVar25 = (longlong)(int)(uVar12 >> 0x20) * (longlong)local_368 - iVar11 * lVar27;
    bVar16 = 0;
    if (lVar25 != 0) {
      bVar16 = (byte)((ulonglong)lVar25 >> 0x3f) ^ 1;
    }
    if ((bVar16 != 0) && (bVar23 == 0)) break;
    lVar25 = (longlong)(int)uStack_310;
    local_3e8._0_4_ = (uint)uVar14;
    puVar2 = (uint *)(lVar25 * 0x60 + lVar19);
    local_318 = *puVar2;
    uStack_314 = puVar2[1];
    uStack_310 = puVar2[2];
    uStack_30c = puVar2[3];
    iVar34 = *(int *)(lVar25 * 0x60 + 0x10 + lVar19);
    uVar5 = *(undefined8 *)(lVar13 + (ulonglong)(local_318 & 0x3fffffff) * 0xc);
    local_368 = (int)uVar5;
    local_368 = local_368 - iVar32;
    iVar30 = (int)((ulonglong)uVar5 >> 0x20) - iVar17;
    local_3e0 = CONCAT44(iVar30,local_368);
    uVar12 = uVar14;
    bVar23 = bVar16;
    iVar29 = iVar11;
  }
  do {
    uVar26 = uVar14;
    iVar11 = (int)(uVar26 >> 0x20);
    if (-1 < iVar34) {
      iStack_378 = (int)(uVar4 >> 0x20);
      lVar13 = (longlong)local_368;
      local_37c = (int)uVar4;
      lVar19 = (longlong)iVar11;
      lVar25 = local_37c * lVar19 - iStack_378 * lVar13;
      bVar23 = 0;
      if (lVar25 != 0) {
        bVar23 = (byte)((ulonglong)lVar25 >> 0x3f) ^ 1;
      }
      if (bVar23 == 0) {
        iVar22 = (int)(uVar12 >> 0x20);
        lVar28 = (longlong)iVar22;
        lVar25 = lVar27 * iStack_370 - lVar28 * local_374;
        bVar23 = 0;
        if (lVar25 != 0) {
          bVar23 = (byte)((ulonglong)lVar25 >> 0x3f) ^ 1;
        }
        if (bVar23 == 0) {
          lVar31 = (longlong)(iVar22 - iVar11);
          lVar25 = (longlong)((int)local_3b8 - local_368);
          if (lVar25 * lVar13 + lVar19 * lVar31 < 0) {
            lVar19 = lVar27 * lVar31 - lVar25 * lVar28;
            bVar23 = 0;
            if (lVar19 != 0) {
              bVar23 = (byte)((ulonglong)lVar19 >> 0x3f) ^ 1;
            }
            if (bVar23 == 0) {
              uVar14 = lVar27 * lVar27 + lVar28 * lVar28;
              goto LAB_14503b26d;
            }
            uVar14 = lVar25 * lVar25 + lVar31 * lVar31;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar14;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = param_3;
            uVar20 = SUB168(auVar7 * auVar8,8);
            lVar25 = iVar29 * lVar13 - iVar30 * lVar27;
            uVar21 = SUB168(SEXT816(lVar25) * SEXT816(lVar25),8);
            if ((-1 < (longlong)uVar21) &&
               (uVar20 < uVar21 ||
                uVar14 * param_3 < (ulonglong)(lVar25 * lVar25) &&
                (uVar20 <= uVar21 && uVar20 >= uVar21))) goto LAB_14503b41a;
          }
          else {
            uVar14 = lVar13 * lVar13 + lVar19 * lVar19;
LAB_14503b26d:
            if (param_3 < uVar14) goto LAB_14503b41a;
          }
          uVar14 = uVar6;
          if (lVar13 * iStack_370 - (longlong)iVar30 * (longlong)local_374 < 0) {
            uVar14 = uVar26;
          }
          uVar20 = uVar4;
          if ((longlong)iVar29 * (longlong)local_37c - lVar27 * iStack_378 < 0) {
            uVar20 = uVar12;
          }
          lVar25 = (longlong)(int)(uVar20 >> 0x20);
          lVar19 = (longlong)(int)(uVar14 >> 0x20);
          if (lVar19 * (int)uVar20 - (int)uVar14 * lVar25 == 0) {
            lVar25 = (longlong)(int)uVar20 * (longlong)(int)uVar14 + lVar25 * lVar19;
            bVar23 = 0;
            if (lVar25 != 0) {
              bVar23 = (byte)((ulonglong)lVar25 >> 0x3f) ^ 1;
            }
            if (bVar23 != 0) goto LAB_14503b41a;
          }
          uVar3 = *(undefined4 *)((longlong)iVar34 * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
          iVar30 = local_250 + 1;
          if ((int)(local_24c & 0x7fffffff) < iVar30) {
            FUN_14503ce40(&local_258,&PTR_vftable_14c6e47c0,(longlong)iVar30);
          }
          puVar15 = local_258 + (longlong)local_250 * 8;
          local_250 = iVar30;
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = uVar3;
            *(undefined8 *)(puVar15 + 1) = local_340;
            *(ulonglong *)(puVar15 + 3) = uVar20;
            *(ulonglong *)(puVar15 + 5) = uVar14;
          }
        }
      }
    }
LAB_14503b41a:
    lVar25 = (longlong)(int)uStack_310;
    lVar27 = (longlong)(int)uVar26;
    puVar2 = (uint *)(lVar25 * 0x60 + *(longlong *)(param_1 + 0x28));
    local_318 = *puVar2;
    uStack_314 = puVar2[1];
    uStack_310 = puVar2[2];
    uStack_30c = puVar2[3];
    iVar34 = *(int *)(lVar25 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28));
    uVar5 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)(local_318 & 0x3fffffff) * 0xc);
    local_35c = (int)uVar5;
    local_368 = local_35c - iVar32;
    iVar30 = (int)((ulonglong)uVar5 >> 0x20) - iVar17;
    lVar25 = (longlong)iVar11 * (longlong)local_368 - iVar30 * lVar27;
    bVar23 = 0;
    if (lVar25 != 0) {
      bVar23 = (byte)((ulonglong)lVar25 >> 0x3f) ^ 1;
    }
    if (bVar23 == 0) break;
    local_3b8 = uVar26 & 0xffffffff;
    uVar14 = CONCAT44(iVar30,local_368);
    uVar12 = uVar26;
    iVar29 = iVar11;
  } while( true );
  if (local_250 == 0) {
    local_250 = 0;
    if ((-1 < (int)local_24c) && (local_258 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_258,(ulonglong)(local_24c & 0x7fffffff) << 5);
    }
    return;
  }
  goto LAB_14503ad80;
}



// FUNCTION 14503b550 FUN_14503b550 body=139 status=ok
// SIG undefined FUN_14503b550(void)

void FUN_14503b550(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 local_res8;
  
  lVar2 = *param_1;
  local_res8 = 0x1408;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"NodeBlock");
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_14503c870(lVar3);
  }
  lVar4 = *(longlong *)(lVar2 + 0x18);
  do {
    *(longlong *)(lVar3 + 0x1400) = lVar4;
    plVar1 = (longlong *)(lVar2 + 0x18);
    LOCK();
    lVar5 = *plVar1;
    bVar6 = lVar4 == lVar5;
    if (bVar6) {
      *plVar1 = lVar3;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar6);
  param_1[1] = lVar3;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14503b5e0 FUN_14503b5e0 body=393 status=ok
// SIG undefined FUN_14503b5e0(void)

undefined4 * FUN_14503b5e0(longlong *param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  undefined1 local_res8 [8];
  
  lVar3 = param_1[1];
  piVar2 = (int *)*param_1;
  iVar7 = 8;
  if (8 < param_4) {
    iVar7 = param_4;
  }
  lVar9 = (longlong)iVar7;
  iVar6 = *(int *)((longlong)param_1 + 0xc) + 1;
  lVar5 = (**(code **)(*param_3 + 8))(param_3,lVar9 << 4);
  if (lVar5 == 0) {
    *param_2 = 0x80040200;
  }
  else {
    *param_1 = lVar5;
    if (0 < iVar7) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar5 + *param_1) = 0xffffffff;
        lVar9 = lVar9 + -1;
        lVar5 = lVar5 + 0x10;
      } while (lVar9 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    iVar8 = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar7 + -1;
    lVar5 = (longlong)iVar6;
    piVar10 = piVar2;
    if (0 < iVar6) {
      do {
        if (*piVar10 != -1) {
          if (*(int *)((longlong)param_1 + 0xc) < (int)param_1[1] * 2) {
            FUN_14503b5e0(param_1,local_res8,param_3,*(int *)((longlong)param_1 + 0xc) * 2 + 2);
          }
          iVar7 = *piVar10;
          iVar11 = 1;
          lVar9 = *param_1;
          uVar4 = iVar7 * -0x61c8864f;
          uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                  iVar7 * -0x4f000000) & *(uint *)((longlong)param_1 + 0xc);
          iVar1 = *(int *)(lVar9 + (ulonglong)uVar4 * 0x10);
          while (iVar1 != -1) {
            if (iVar1 == iVar7) {
              iVar11 = 0;
              break;
            }
            uVar4 = uVar4 + 1 & *(uint *)((longlong)param_1 + 0xc);
            iVar1 = *(int *)(lVar9 + (ulonglong)uVar4 * 0x10);
          }
          *(int *)(param_1 + 1) = (int)param_1[1] + iVar11;
          FUN_144b3d470((longlong)(int)uVar4 * 0x10 + lVar9,piVar2 + (longlong)iVar8 * 4,0x10);
        }
        iVar8 = iVar8 + 1;
        lVar5 = lVar5 + -1;
        piVar10 = piVar10 + 4;
      } while (lVar5 != 0);
    }
    if (-1 < (int)lVar3) {
      (**(code **)(*param_3 + 0x18))(param_3,piVar2,(longlong)iVar6 << 4);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 14503b770 FUN_14503b770 body=137 status=ok
// SIG undefined FUN_14503b770(void)

void FUN_14503b770(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)((longlong)param_1 + 0xc) != 0) &&
     (iVar2 = *(int *)((longlong)param_1 + 0xc) + 1, lVar4 = (longlong)iVar2, 0 < iVar2)) {
    lVar3 = 0;
    do {
      if (*(int *)(lVar3 + *param_1) != -1) {
        *(undefined4 *)(lVar3 + *param_1) = 0xffffffff;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 & 0x80000000;
  if ((*param_1 != 0) && ((uVar1 & 0x80000000) == 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (longlong)(*(int *)((longlong)param_1 + 0xc) + 1) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return;
}



// FUNCTION 14503b800 FUN_14503b800 body=900 status=ok
// SIG undefined FUN_14503b800(void)

void FUN_14503b800(longlong param_1,int param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int local_res8;
  int iStackX_c;
  int local_138;
  int iStack_134;
  undefined8 local_130;
  int local_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar11 = *(longlong *)(param_1 + 0x28);
  lVar8 = (longlong)param_2 * 0x60;
  local_98 = *(undefined8 *)(lVar8 + lVar11);
  uStack_90 = ((undefined8 *)(lVar8 + lVar11))[1];
  piVar1 = (int *)(lVar8 + 0x10 + lVar11);
  local_88 = *piVar1;
  iStack_84 = piVar1[1];
  iStack_80 = piVar1[2];
  iStack_7c = piVar1[3];
  puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar11);
  local_78 = *puVar2;
  uStack_70 = puVar2[1];
  puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar11);
  local_68 = *puVar2;
  uStack_60 = puVar2[1];
  puVar3 = (undefined4 *)(lVar8 + 0x40 + lVar11);
  local_58 = *puVar3;
  uStack_54 = puVar3[1];
  uStack_50 = puVar3[2];
  uStack_4c = puVar3[3];
  puVar3 = (undefined4 *)(lVar8 + 0x50 + lVar11);
  local_48 = *puVar3;
  uStack_44 = puVar3[1];
  uStack_40 = puVar3[2];
  uStack_3c = puVar3[3];
  if (local_88 < 0) {
    FUN_144cb6680(local_58,&local_98,&local_res8,&local_120);
    iVar5 = local_res8;
    iVar9 = local_120 - local_res8;
    lVar11 = (longlong)iStackX_c;
    iStack_114 = iStack_11c - iStackX_c;
    if (iVar9 != 0 || iStack_114 != 0) {
      local_138 = -iStack_114;
      iVar10 = -iStack_114;
      iStack_134 = iVar9;
      local_118 = iVar9;
      FUN_14503bb90(param_3,&local_138,CONCAT44(iVar9,local_138));
      iVar7 = -local_138;
      local_130 = CONCAT44(iVar7,iStack_134);
      local_e8 = (longlong)iVar5 * (longlong)iStack_134 + lVar11 * iVar7;
      local_e0 = (longlong)local_120 * (longlong)iStack_134 + (longlong)iStack_11c * (longlong)iVar7
      ;
      local_f8 = local_130;
      local_f0 = CONCAT44(iVar9,iVar10);
      lStack_d0 = (longlong)(local_138 + iVar5) * (longlong)iVar10 +
                  (longlong)(iStack_134 + iStackX_c) * (longlong)iVar9;
      local_d8 = (longlong)iVar5 * (longlong)iVar10 + lVar11 * iVar9;
      local_138 = iVar10;
      iStack_134 = iVar9;
      FUN_14503a240(param_1,&local_f8,local_98._4_4_,param_4);
      cVar6 = FUN_144cd9570(param_1,&local_98);
      if (cVar6 != '\0') {
        lVar11 = *(longlong *)(param_1 + 0x28);
        lVar8 = (longlong)(int)uStack_90 * 0x60;
        puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar11);
        local_110 = *puVar2;
        uStack_108 = puVar2[1];
        puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar11);
        local_c8 = *puVar2;
        uStack_c0 = puVar2[1];
        puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar11);
        local_d8 = *puVar2;
        lStack_d0 = puVar2[1];
        puVar3 = (undefined4 *)(lVar8 + 0x50 + lVar11);
        local_a8 = *puVar3;
        uStack_a4 = puVar3[1];
        uStack_a0 = puVar3[2];
        uStack_9c = puVar3[3];
        puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar11);
        local_b8 = *puVar2;
        uStack_b0 = puVar2[1];
        local_130 = *(undefined8 *)
                     (*(longlong *)(param_1 + 0x38) +
                     (ulonglong)((uint)*(ulonglong *)(lVar8 + lVar11) & 0x3fffffff) * 0xc);
        local_138 = (int)local_130 - local_res8;
        local_e8 = CONCAT44(iStack_114,local_118);
        iStack_134 = (int)((ulonglong)local_130 >> 0x20) - iStackX_c;
        uVar4 = CONCAT44(iStack_134,local_138);
        local_f0 = uVar4;
        FUN_14503acf0(param_1,&local_f8,*(undefined8 *)(param_3 + 8),
                      *(ulonglong *)(lVar8 + lVar11) >> 0x20,param_5);
        local_e8 = uVar4;
        while (-1 < (int)local_110) {
          lVar11 = *(longlong *)(param_1 + 0x28);
          lVar8 = (longlong)*(int *)((longlong)(int)local_110 * 0x60 + 8 + lVar11) * 0x60;
          puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar11);
          local_110 = *puVar2;
          uStack_108 = puVar2[1];
          puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar11);
          local_c8 = *puVar2;
          uStack_c0 = puVar2[1];
          puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar11);
          local_d8 = *puVar2;
          lStack_d0 = puVar2[1];
          puVar3 = (undefined4 *)(lVar8 + 0x50 + lVar11);
          local_a8 = *puVar3;
          uStack_a4 = puVar3[1];
          uStack_a0 = puVar3[2];
          uStack_9c = puVar3[3];
          puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar11);
          local_b8 = *puVar2;
          uStack_b0 = puVar2[1];
          local_130 = *(undefined8 *)
                       (*(longlong *)(param_1 + 0x38) +
                       (ulonglong)((uint)*(ulonglong *)(lVar8 + lVar11) & 0x3fffffff) * 0xc);
          local_138 = (int)local_130 - local_res8;
          iStack_134 = (int)((ulonglong)local_130 >> 0x20) - iStackX_c;
          uVar4 = CONCAT44(iStack_134,local_138);
          local_f0 = uVar4;
          FUN_14503acf0(param_1,&local_f8,*(undefined8 *)(param_3 + 8),
                        *(ulonglong *)(lVar8 + lVar11) >> 0x20,param_5);
          local_e8 = uVar4;
        }
      }
    }
  }
  return;
}



// FUNCTION 14503bb90 FUN_14503bb90 body=354 status=ok
// SIG undefined FUN_14503bb90(void)

int * FUN_14503bb90(int *param_1,int *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar3 = (int)(param_3 >> 0x20);
  if (((longlong)param_3 < 0) || ((iVar3 == 0 && ((int)param_3 < 0)))) {
    uVar6 = 6;
    param_3 = CONCAT44(-iVar3,-(int)param_3);
  }
  bVar4 = 0;
  if ((int)param_3 != 0) {
    bVar4 = (byte)(param_3 >> 0x1f) & 1 ^ 1;
  }
  if (bVar4 == 0) {
    uVar6 = uVar6 + 3;
    param_3 = CONCAT44(-(int)param_3,(int)(param_3 >> 0x20));
  }
  iVar3 = param_1[5];
  iVar1 = param_1[4];
  iVar2 = *param_1;
  lVar5 = (longlong)(int)(param_3 >> 0x20);
  if ((iVar1 - iVar3) * lVar5 <= (longlong)(iVar3 - iVar2) * (longlong)(int)param_3) {
    if ((longlong)(iVar1 - iVar3) * (longlong)(int)param_3 < (iVar3 - iVar2) * lVar5) {
      uVar6 = uVar6 + 1;
    }
    else {
      uVar6 = uVar6 + 2;
    }
  }
  if (uVar6 == (uVar6 / 3) * 3) {
    *param_2 = iVar2;
    param_2[1] = iVar1;
  }
  else if (uVar6 % 3 == 1) {
    *param_2 = iVar3;
    param_2[1] = iVar3;
  }
  else if (uVar6 % 3 == 2) {
    *param_2 = iVar1;
    param_2[1] = iVar2;
  }
  if (2 < uVar6 % 6) {
    *(ulonglong *)param_2 = CONCAT44(*param_2,-param_2[1]);
  }
  if (5 < uVar6) {
    *(ulonglong *)param_2 = CONCAT44(-param_2[1],-*param_2);
  }
  return param_2;
}



// FUNCTION 14503bd00 FUN_14503bd00 body=129 status=ok
// SIG undefined FUN_14503bd00(void)

undefined8 * FUN_14503bd00(undefined8 *param_1,ulonglong param_2)

{
  FUN_14006c6ec(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x910);
  }
  return param_1;
}



// FUNCTION 14503bd90 FUN_14503bd90 body=1161 status=ok
// SIG undefined FUN_14503bd90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 *
FUN_14503bd90(undefined2 *param_1,longlong param_2,longlong *param_3,uint param_4,undefined4 param_5
             ,longlong param_6,longlong param_7,short param_8)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  undefined8 *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  float fVar13;
  undefined1 extraout_var [12];
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined8 local_res8;
  longlong *local_res18;
  short local_res20 [4];
  undefined4 uStack_64;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar8 = (ulonglong)param_4;
  local_res8 = 0x910;
  local_res18 = param_3;
  _Dst = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)();
  }
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    memset(_Dst,0,0x910);
    _Dst[1] = 0xffffffff;
    _Dst[2] = 1;
    *_Dst = hkaiNavMeshGeneration::Erosion::GatherBoundaryAssociationsContext::vftable;
    _Dst[0xe] = _Dst + 0x10;
    _Dst[0x98] = _Dst + 0x9a;
    _Dst[3] = 0;
    _Dst[4] = 0;
    *(undefined4 *)(_Dst + 0xf) = 0;
    *(undefined4 *)((longlong)_Dst + 0x7c) = 0x80000011;
    *(undefined4 *)(_Dst + 0x99) = 0;
    *(undefined4 *)((longlong)_Dst + 0x4cc) = 0x80000011;
  }
  lVar4 = param_6;
  if (param_6 != 0) {
    FUN_144b3d910(param_6);
  }
  lVar3 = _Dst[3];
  _Dst[3] = lVar4;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  lVar4 = param_7;
  if (param_7 != 0) {
    FUN_144b3d910(param_7);
  }
  lVar3 = _Dst[4];
  _Dst[4] = lVar4;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  puVar10 = (undefined8 *)*param_3;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar10);
  }
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3d910(_Dst);
  }
  param_6 = 0x50;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,&param_6,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res20,0,0x40);
    if (_Dst != (undefined8 *)0x0) {
      FUN_144b3f230(_Dst);
    }
    if (puVar10 != (undefined8 *)0x0) goto LAB_14503bf95;
  }
  else {
    puVar7[1] = 0xffffffff;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::addGatherErosionShapesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkFpMath::FpUint<23>,int,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>*___ptr64,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar7[2] = 1;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::addGatherErosionShapesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkFpMath::FpUint<23>,int,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>*___ptr64,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    *(undefined4 *)(puVar7 + 7) = param_5;
    puVar7[9] = "PreGatherErosionShapes";
    puVar7[6] = puVar10;
    puVar7[8] = _Dst;
    FUN_144be3b70(param_2,local_res20,puVar7,0x40);
    puVar10 = puVar7;
LAB_14503bf95:
    FUN_144b3f230(puVar10);
  }
  sVar6 = param_8;
  sVar5 = local_res20[0];
  if ((param_8 != -1) && (local_res20[0] != -1)) {
    iVar12 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar12) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar12);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar4 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar12;
    *(short *)(lVar4 + (longlong)iVar2 * 4) = sVar6;
    *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = sVar5;
    param_3 = local_res18;
  }
  if (param_4 != 0) {
    auVar14 = sqrtps(in_XMM1,_DAT_149931ef0);
    auVar14._0_4_ = ceilf((2.0 - auVar14._0_4_) * (float)uVar8);
    auVar14._4_12_ = extraout_var;
    uVar11 = (ulonglong)auVar14._0_4_;
    auVar14 = sqrtps(auVar14,_DAT_149931ef0);
    local_58 = (undefined4)uVar11;
    fVar13 = ceilf((auVar14._0_4_ - 1.0) * (float)uVar8);
    uVar9 = (ulonglong)fVar13;
    uStack_54 = (undefined4)uVar9;
    uStack_60 = (uVar9 & 0xffffffff) * (uVar9 & 0xffffffff) * 2;
    uVar8 = (uVar11 & 0xffffffff) * (uVar11 & 0xffffffff) + uVar8 * uVar8;
    if (uStack_60 <= uVar8) {
      uStack_60 = uVar8;
    }
  }
  puVar10 = (undefined8 *)*param_3;
  if (puVar10 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar10);
  }
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3d910(_Dst);
  }
  local_res18 = (longlong *)0x70;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,param_1,0,0x40);
    if (_Dst != (undefined8 *)0x0) {
      FUN_144b3f230(_Dst);
    }
    if (puVar10 == (undefined8 *)0x0) goto LAB_14503c183;
  }
  else {
    puVar7[2] = 1;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::addGatherErosionShapesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkFpMath::FpUint<23>,int,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>*___ptr64,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
              ::vftable;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::addGatherErosionShapesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkFpMath::FpUint<23>,int,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>*___ptr64,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
                ::vftable;
    puVar7[6] = puVar10;
    puVar7[1] = 0xffffffff;
    puVar7[7] = CONCAT44(uStack_64,param_4);
    puVar7[8] = uStack_60;
    puVar7[9] = CONCAT44(uStack_54,local_58);
    puVar7[10] = _Dst;
    *(undefined4 *)(puVar7 + 0xb) = param_5;
    puVar7[0xc] = "GatherErosionShapes";
    *(undefined4 *)((longlong)puVar7 + 0x5c) = 1;
    FUN_144be3b70(param_2,param_1,puVar7,0x40);
    puVar10 = puVar7;
  }
  FUN_144b3f230(puVar10);
LAB_14503c183:
  uVar1 = *param_1;
  iVar12 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar12) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar12);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar4 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar12;
  *(short *)(lVar4 + (longlong)iVar2 * 4) = local_res20[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar2 * 4) = uVar1;
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3f230(_Dst);
  }
  if (*param_3 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 14503c220 FUN_14503c220 body=476 status=ok
// SIG undefined FUN_14503c220(void)

void FUN_14503c220(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  char *local_28;
  char *local_20;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar3 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar4;
  }
  lVar3 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar3 != 0) {
    local_28 = "TtPreGatherErosionShapes";
    local_20 = "";
    FUN_144b3f370(lVar3,&local_28);
  }
  iVar1 = *(int *)(*param_1 + 0x20);
  lVar4 = *(longlong *)(param_1[2] + 0x18);
  if ((int)(*(uint *)(lVar4 + 0x54) & 0x7fffffff) < iVar1) {
    FUN_14503caf0(lVar4 + 0x48,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(lVar4 + 0x50);
  if (iVar2 < iVar1) {
    *(int *)(lVar4 + 0x50) = iVar1;
    uVar6 = (ulonglong)(uint)(iVar1 - iVar2);
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar2 * 8);
    if (0 < iVar1 - iVar2) {
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
        }
        uVar6 = uVar6 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(lVar4 + 0x50) = iVar1;
  }
  iVar1 = *(int *)(*param_1 + 0x20);
  lVar4 = *(longlong *)(param_1[2] + 0x20);
  if ((int)(*(uint *)(lVar4 + 0x54) & 0x7fffffff) < iVar1) {
    FUN_14503cc00(lVar4 + 0x48,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = *(int *)(lVar4 + 0x50);
  if (iVar2 < iVar1) {
    *(int *)(lVar4 + 0x50) = iVar1;
    uVar6 = (ulonglong)(uint)(iVar1 - iVar2);
    puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar2 * 8);
    if (0 < iVar1 - iVar2) {
      do {
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0;
        }
        uVar6 = uVar6 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(lVar4 + 0x50) = iVar1;
  }
  FUN_144bf95c0(param_1[2] + 0x30,(int)param_1[1],*(undefined4 *)(*param_1 + 0x30),1);
  if (lVar3 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar3,&local_28);
  }
  return;
}



// FUNCTION 14503c400 FUN_14503c400 body=854 status=ok
// SIG undefined FUN_14503c400(void)

void FUN_14503c400(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  char *local_c8;
  char *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  ulonglong local_98;
  undefined4 local_90;
  longlong local_88;
  uint local_80;
  int local_7c;
  longlong local_78;
  ulonglong local_70;
  undefined4 local_68;
  longlong local_60;
  uint local_58;
  int local_54;
  undefined8 local_50 [2];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_c8 = "TtGatherErosionShapes";
    local_c0 = "";
    FUN_144b3f370(lVar1,&local_c8);
  }
  lVar2 = *(longlong *)(param_1[4] + 0x18);
  if (lVar2 != 0) {
    FUN_144b3d910(lVar2);
  }
  local_res20 = 0x2008;
  lVar3 = (*DAT_14c787670)(0,&local_res20,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"NodeBlock");
  }
  uVar8 = 0;
  local_70 = uVar8;
  if (lVar3 != 0) {
    local_70 = FUN_14503c760(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar2 + 0x18);
  do {
    *(ulonglong *)(local_70 + 0x2000) = uVar4;
    LOCK();
    uVar5 = *(ulonglong *)(lVar2 + 0x18);
    bVar9 = uVar4 == uVar5;
    if (bVar9) {
      *(ulonglong *)(lVar2 + 0x18) = local_70;
      uVar5 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar5;
  } while (!bVar9);
  iVar6 = 8;
  iVar7 = 8;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = -1;
  do {
    iVar7 = iVar7 * 2;
  } while (iVar7 < 0x80);
  local_78 = lVar2;
  FUN_14503aad0(&local_60,local_res8,&PTR_vftable_14c6e47a0);
  lVar2 = *(longlong *)(param_1[4] + 0x20);
  if (lVar2 != 0) {
    FUN_144b3d910(lVar2);
  }
  local_50[0] = 0x1408;
  lVar3 = (*DAT_14c787670)(0,local_50,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"NodeBlock");
  }
  local_98 = uVar8;
  if (lVar3 != 0) {
    local_98 = FUN_14503c870(lVar3);
  }
  uVar4 = *(ulonglong *)(lVar2 + 0x18);
  do {
    *(ulonglong *)(local_98 + 0x1400) = uVar4;
    LOCK();
    uVar5 = *(ulonglong *)(lVar2 + 0x18);
    bVar9 = uVar4 == uVar5;
    if (bVar9) {
      *(ulonglong *)(lVar2 + 0x18) = local_98;
      uVar5 = uVar4;
    }
    UNLOCK();
    uVar4 = uVar5;
  } while (!bVar9);
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = -1;
  do {
    iVar6 = iVar6 * 2;
  } while (iVar6 < 0x80);
  local_a0 = lVar2;
  FUN_14503b5e0(&local_88,local_res18,&PTR_vftable_14c6e47a0,iVar6);
  local_b8 = param_1[4] + 0x30;
  uVar4 = uVar8;
  local_a4 = param_2;
  if (local_b8 != 0) {
    local_b0 = 0;
    local_a8 = 0;
  }
  do {
    if (local_b0._4_4_ <= (uint)uVar4) {
      if ((local_b8 == 0) || (FUN_144bf9800(local_b8,local_res10,&local_b8), local_res10[0] < 0)) {
        FUN_14503b770(&local_88);
        if (local_a0 != 0) {
          FUN_144b3f230();
        }
        FUN_14503ac60(&local_60);
        if (local_78 != 0) {
          FUN_144b3f230();
        }
        if (lVar1 != 0) {
          local_c8 = "Et";
          local_c0 = "";
          FUN_144b3f260(lVar1,&local_c8);
        }
        return;
      }
      uVar4 = local_b0 & 0xffffffff;
    }
    FUN_14503b800(*param_1,uVar4,param_1 + 1,&local_78,&local_a0);
    if ((local_54 != 0) && (lVar2 = (longlong)(local_54 + 1), uVar5 = uVar8, 0 < local_54 + 1)) {
      do {
        if (*(int *)(local_60 + uVar5) != -1) {
          *(undefined4 *)(local_60 + uVar5) = 0xffffffff;
        }
        lVar2 = lVar2 + -1;
        uVar5 = uVar5 + 0x10;
      } while (lVar2 != 0);
    }
    local_58 = local_58 & 0x80000000;
    if ((local_7c != 0) && (lVar2 = (longlong)(local_7c + 1), uVar5 = uVar8, 0 < local_7c + 1)) {
      do {
        if (*(int *)(local_88 + uVar5) != -1) {
          *(undefined4 *)(local_88 + uVar5) = 0xffffffff;
        }
        lVar2 = lVar2 + -1;
        uVar5 = uVar5 + 0x10;
      } while (lVar2 != 0);
    }
    local_80 = local_80 & 0x80000000;
    uVar4 = (ulonglong)((int)uVar4 + 1);
  } while( true );
}



// FUNCTION 14503c760 FUN_14503c760 body=263 status=ok
// SIG undefined FUN_14503c760(void)

longlong FUN_14503c760(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x80;
  puVar1 = (undefined8 *)(param_1 + 0x78);
  do {
    puVar1[-8] = 0;
    *puVar1 = 0;
    puVar1[8] = 0;
    puVar1[0x10] = 0;
    puVar1[0x18] = 0;
    puVar1[0x20] = 0;
    puVar1[0x28] = 0;
    puVar1[0x30] = 0;
    puVar1[0x38] = 0;
    puVar1[0x40] = 0;
    puVar1[0x48] = 0;
    puVar1[0x50] = 0;
    puVar1[0x58] = 0;
    puVar1[0x60] = 0;
    puVar1[0x68] = 0;
    puVar1[0x70] = 0;
    puVar1[0x78] = 0;
    puVar1[0x80] = 0;
    puVar1[0x88] = 0;
    puVar1[0x90] = 0;
    puVar1[0x98] = 0;
    puVar1[0xa0] = 0;
    puVar1[0xa8] = 0;
    puVar1[0xb0] = 0;
    puVar1[0xb8] = 0;
    puVar1[0xc0] = 0;
    puVar1[200] = 0;
    puVar1[0xd0] = 0;
    puVar1[0xd8] = 0;
    puVar1[0xe0] = 0;
    puVar1[0xe8] = 0;
    puVar1[0xf0] = 0;
    puVar1 = puVar1 + 0x100;
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x2000) = 0;
  return param_1;
}



// FUNCTION 14503c870 FUN_14503c870 body=257 status=ok
// SIG undefined FUN_14503c870(void)

longlong FUN_14503c870(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x80;
  puVar1 = (undefined8 *)(param_1 + 0x48);
  do {
    puVar1[-5] = 0;
    *puVar1 = 0;
    puVar1[5] = 0;
    puVar1[10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x14] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x23] = 0;
    puVar1[0x28] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x32] = 0;
    puVar1[0x37] = 0;
    puVar1[0x3c] = 0;
    puVar1[0x41] = 0;
    puVar1[0x46] = 0;
    puVar1[0x4b] = 0;
    puVar1[0x50] = 0;
    puVar1[0x55] = 0;
    puVar1[0x5a] = 0;
    puVar1[0x5f] = 0;
    puVar1[100] = 0;
    puVar1[0x69] = 0;
    puVar1[0x6e] = 0;
    puVar1[0x73] = 0;
    puVar1[0x78] = 0;
    puVar1[0x7d] = 0;
    puVar1[0x82] = 0;
    puVar1[0x87] = 0;
    puVar1[0x8c] = 0;
    puVar1[0x91] = 0;
    puVar1[0x96] = 0;
    puVar1 = puVar1 + 0xa0;
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x1400) = 0;
  return param_1;
}



// FUNCTION 14503c980 FUN_14503c980 body=9 status=ok
// SIG undefined FUN_14503c980(void)

void FUN_14503c980(longlong param_1)

{
  FUN_14503c220(param_1 + 0x10);
  return;
}



// FUNCTION 14503c990 FUN_14503c990 body=5 status=ok
// SIG undefined FUN_14503c990(void)

undefined8 FUN_14503c990(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14503c9a0 FUN_14503c9a0 body=129 status=ok
// SIG undefined FUN_14503c9a0(void)

undefined8 * FUN_14503c9a0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14503ca30 FUN_14503ca30 body=15 status=ok
// SIG undefined FUN_14503ca30(void)

undefined4 * FUN_14503ca30(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[1] = *(undefined4 *)(param_1 + 0x3c);
  return param_2;
}



// FUNCTION 14503ca40 FUN_14503ca40 body=12 status=ok
// SIG undefined FUN_14503ca40(void)

void FUN_14503ca40(longlong param_1,longlong param_2)

{
  FUN_14503c400(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 14503ca50 FUN_14503ca50 body=5 status=ok
// SIG undefined FUN_14503ca50(void)

undefined8 FUN_14503ca50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 14503ca60 FUN_14503ca60 body=129 status=ok
// SIG undefined FUN_14503ca60(void)

undefined8 * FUN_14503ca60(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[10] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14503caf0 FUN_14503caf0 body=270 status=ok
// SIG undefined FUN_14503caf0(void)

void FUN_14503caf0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14503cc00 FUN_14503cc00 body=270 status=ok
// SIG undefined FUN_14503cc00(void)

void FUN_14503cc00(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14503cd10 FUN_14503cd10 body=291 status=ok
// SIG undefined FUN_14503cd10(void)

ulonglong FUN_14503cd10(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x18);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 14503ce40 FUN_14503ce40 body=312 status=ok
// SIG undefined FUN_14503ce40(void)

void FUN_14503ce40(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar8 * 2;
  uVar4 = param_3;
  if (param_3 < uVar7) {
    uVar4 = uVar7;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x20,&local_res8);
  puVar6 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar2 = (undefined8 *)(lVar1 + 0x14);
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    puVar3 = (undefined8 *)(puVar6 + 5);
    do {
      if ((undefined4 *)((longlong)puVar2 + -0x14) != (undefined4 *)0x0) {
        *(undefined4 *)((longlong)puVar2 + -0x14) = *puVar6;
        puVar2[-2] = puVar3[-2];
        puVar2[-1] = puVar3[-1];
        *puVar2 = *puVar3;
      }
      puVar2 = puVar2 + 4;
      puVar6 = puVar6 + 8;
      puVar3 = puVar3 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar4 * 0x20 + 0x20;
  uVar5 = uVar4;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar5 = uVar4 + 1;
    if (uVar7 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 << 5);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 14503cf78 FUN_14503cf78 body=9 status=ok
// SIG undefined FUN_14503cf78(void)

void FUN_14503cf78(longlong param_1)

{
  FUN_14503c9a0(param_1 + -0x20);
  return;
}



// FUNCTION 14503cf84 FUN_14503cf84 body=9 status=ok
// SIG undefined FUN_14503cf84(void)

void FUN_14503cf84(longlong param_1)

{
  FUN_14503ca60(param_1 + -0x20);
  return;
}



// FUNCTION 14503cf90 FUN_14503cf90 body=106 status=ok
// SIG undefined FUN_14503cf90(void)

void FUN_14503cf90(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < *(int *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x14) * 2);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14503d000 FUN_14503d000 body=162 status=ok
// SIG undefined FUN_14503d000(void)

void FUN_14503d000(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined8 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x60);
    uVar5 = *(uint *)(param_1 + 1);
    uVar6 = (ulonglong)uVar5;
    puVar4 = (undefined8 *)*param_1;
    puVar3 = puVar2;
    if (0 < (int)uVar5) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
          uVar1 = puVar4[3];
          puVar3[2] = puVar4[2];
          puVar3[3] = uVar1;
          uVar1 = puVar4[5];
          puVar3[4] = puVar4[4];
          puVar3[5] = uVar1;
          uVar1 = puVar4[7];
          puVar3[6] = puVar4[6];
          puVar3[7] = uVar1;
          uVar1 = puVar4[9];
          puVar3[8] = puVar4[8];
          puVar3[9] = uVar1;
          uVar1 = puVar4[0xb];
          puVar3[10] = puVar4[10];
          puVar3[0xb] = uVar1;
        }
        puVar3 = puVar3 + 0xc;
        puVar4 = puVar4 + 0xc;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
  }
  return;
}



// FUNCTION 14503d0b0 FUN_14503d0b0 body=148 status=ok
// SIG undefined FUN_14503d0b0(void)

void FUN_14503d0b0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) * 0x60);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x60);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14503d150 FUN_14503d150 body=274 status=ok
// SIG undefined FUN_14503d150(void)

longlong * FUN_14503d150(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x60);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_14503d000(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  plVar1 = param_2 + 2;
  plVar2 = param_1 + 2;
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 3) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) * 0x60);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
    FUN_14503d000(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *plVar1 = 0;
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 14503d270 FUN_14503d270 body=168 status=ok
// SIG undefined FUN_14503d270(void)

undefined8 * FUN_14503d270(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::Erosion::FaceClipping::Context::vftable;
  param_1[3] = 0;
  param_1[0xe] = param_1 + 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x122] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0x80000000;
  FUN_144bdde80(param_1 + 0x126);
  return param_1;
}



// FUNCTION 14503d320 FUN_14503d320 body=167 status=ok
// SIG undefined FUN_14503d320(void)

undefined8 * FUN_14503d320(undefined8 *param_1,uint param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x126));
  FUN_14503d0b0(param_1 + 0x122);
  FUN_14006c6ec(param_1 + 6);
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x960);
  }
  return param_1;
}



// FUNCTION 14503d3d0 FUN_14503d3d0 body=150 status=ok
// SIG undefined FUN_14503d3d0(void)

void FUN_14503d3d0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  if ((int)(*(uint *)(param_1 + 0x54) & 0x7fffffff) < param_2) {
    FUN_14503f490((longlong *)(param_1 + 0x48),&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x50) = param_2;
    uVar3 = (ulonglong)(uint)(param_2 - iVar1);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar1 * 8);
    if (0 < param_2 - iVar1) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0;
        }
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 != 0);
      return;
    }
  }
  else if (param_2 < iVar1) {
    *(int *)(param_1 + 0x50) = param_2;
  }
  return;
}



// FUNCTION 14503d470 FUN_14503d470 body=1195 status=ok
// SIG undefined FUN_14503d470(void)

undefined2 *
FUN_14503d470(undefined2 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong param_5,longlong param_6,undefined8 param_7,longlong *param_8,longlong param_9
             ,undefined4 param_10,undefined2 param_11)

{
  undefined2 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined2 local_res8 [4];
  longlong local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  
  local_68 = 0x960;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _Dst = (void *)(*DAT_14c787670)(0,&local_68,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  lVar10 = 0;
  lVar6 = lVar10;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x960);
    lVar6 = FUN_14503d270(_Dst);
  }
  lVar9 = param_5;
  if (param_5 != 0) {
    FUN_144b3d910(param_5);
  }
  lVar13 = *(longlong *)(lVar6 + 0x18);
  *(longlong *)(lVar6 + 0x18) = lVar9;
  if (lVar13 != 0) {
    FUN_144b3f230();
  }
  lVar9 = param_6;
  if (param_6 != 0) {
    FUN_144b3d910(param_6);
  }
  lVar13 = *(longlong *)(lVar6 + 0x20);
  *(longlong *)(lVar6 + 0x20) = lVar9;
  if (lVar13 != 0) {
    FUN_144b3f230();
  }
  lVar9 = param_9;
  if (param_9 != 0) {
    FUN_144b3d910(param_9);
  }
  lVar13 = *(longlong *)(lVar6 + 0x28);
  *(longlong *)(lVar6 + 0x28) = lVar9;
  if (lVar13 != 0) {
    FUN_144b3f230();
  }
  uVar7 = FUN_14533d430(&local_68,param_7);
  FUN_14503d150(lVar6 + 0x910,uVar7);
  local_50 = 0;
  if ((-1 < (int)local_4c) && (local_58 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) * 0x60);
  }
  uVar5 = uStack_60._4_4_;
  local_58 = 0;
  local_4c = 0x80000000;
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  if ((-1 < (int)uVar5) && (local_68 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(uVar5 & 0x7fffffff) * 0x60);
  }
  lVar9 = *param_3;
  if (lVar9 != 0) {
    FUN_144b3d910(lVar9);
  }
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  param_5 = 0x50;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,&param_5,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"ReferencedFunctorTask");
  }
  if (puVar8 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res8,0,0x40);
    lVar10 = lVar6;
  }
  else {
    puVar8[1] = 0xffffffff;
    puVar8[6] = lVar9;
    *puVar8 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::ErosionPolygon_const&___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar8[2] = 1;
    puVar8[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::ErosionPolygon_const&___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    *(undefined4 *)(puVar8 + 8) = param_10;
    puVar8[9] = "Erosion/PreClipFaces";
    puVar8[7] = lVar6;
    FUN_144be3b70(param_2,local_res8,puVar8,0x40);
    FUN_144b3f230(puVar8);
    lVar9 = lVar10;
  }
  if (lVar10 != 0) {
    FUN_144b3f230(lVar10);
  }
  if (lVar9 != 0) {
    FUN_144b3f230(lVar9);
  }
  uVar1 = local_res8[0];
  plVar12 = (longlong *)(param_2 + 0x328);
  iVar11 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
    FUN_141807bca(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar10 = *plVar12;
  *(int *)(param_2 + 0x330) = iVar11;
  *(undefined2 *)(lVar10 + 2 + (longlong)iVar2 * 4) = uVar1;
  *(undefined2 *)(lVar10 + (longlong)iVar2 * 4) = param_11;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    FUN_144b3d910(lVar10);
  }
  plVar4 = param_8;
  lVar9 = *param_8;
  if (lVar9 != 0) {
    FUN_144b3d910(lVar9);
  }
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  plVar3 = local_res20;
  local_res20 = (longlong *)0x70;
  local_68 = *plVar3;
  uStack_60 = plVar3[1];
  param_5 = plVar3[2];
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res20,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar8 == (undefined8 *)0x0) {
    FUN_144be3b70(local_res10,param_1,0,0x40);
    lVar13 = lVar6;
  }
  else {
    puVar8[6] = lVar10;
    puVar8[1] = 0xffffffff;
    puVar8[7] = lVar9;
    *puVar8 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::ErosionPolygon_const&___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
              ::vftable;
    lVar10 = 0;
    puVar8[2] = 1;
    puVar8[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::ErosionPolygon_const&___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::SegmentErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::AtomicSetArray<hkaiNavMeshGeneration::Erosion::CornerErosion>_const*___ptr64,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
                ::vftable;
    lVar9 = 0;
    puVar8[8] = lVar6;
    puVar8[9] = local_68;
    puVar8[10] = uStack_60;
    puVar8[0xb] = param_5;
    *(undefined4 *)(puVar8 + 0xc) = param_10;
    puVar8[0xd] = "Erosion/ClipFaces";
    *(undefined4 *)((longlong)puVar8 + 100) = 1;
    FUN_144be3b70(local_res10,param_1,puVar8,0x40);
    FUN_144b3f230(puVar8);
    lVar13 = 0;
  }
  if (lVar13 != 0) {
    FUN_144b3f230(lVar13);
  }
  if (lVar9 != 0) {
    FUN_144b3f230(lVar9);
  }
  if (lVar10 != 0) {
    FUN_144b3f230(lVar10);
  }
  iVar11 = *(int *)(param_2 + 0x330) + 1;
  uVar1 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
    FUN_141807bca(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar10 = *plVar12;
  *(int *)(param_2 + 0x330) = iVar11;
  *(undefined2 *)(lVar10 + (longlong)iVar2 * 4) = local_res8[0];
  *(undefined2 *)(lVar10 + 2 + (longlong)iVar2 * 4) = uVar1;
  if (lVar6 != 0) {
    FUN_144b3f230(lVar6);
  }
  if (*local_res18 != 0) {
    FUN_144b3f230();
  }
  if (*plVar4 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 14503d920 FUN_14503d920 body=292 status=ok
// SIG undefined FUN_14503d920(void)

undefined8 * FUN_14503d920(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *param_1 = 0;
  param_1[6] = param_1 + 8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[0x20c] = param_1 + 0x20e;
  param_1[2] = 0;
  param_1[0x212] = param_1 + 0x214;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000040;
  param_1[0x208] = 0xffffffffffffffff;
  param_1[0x209] = 0;
  *(undefined4 *)(param_1 + 0x20a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1054) = 0x80000000;
  param_1[0x21c] = param_1 + 0x21e;
  *(undefined4 *)(param_1 + 0x20b) = 0;
  *(undefined4 *)(param_1 + 0x20d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x106c) = 0x80000010;
  *(undefined4 *)(param_1 + 0x213) = 0;
  *(undefined4 *)((longlong)param_1 + 0x109c) = 0x80000010;
  *(undefined4 *)(param_1 + 0x21d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10ec) = 0x80000040;
  FUN_144caf790(param_1 + 0x20b,4);
  *(undefined4 *)(param_1 + 0x23e) = 0;
  param_1[0x23f] = param_1 + 0x241;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1204) = 0x80000010;
  FUN_144caf240(param_1 + 0x23e,4);
  param_1[0x245] = 0;
  *(undefined4 *)(param_1 + 0x246) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1234) = 0x80000000;
  param_1[0x248] = 0;
  *(undefined4 *)(param_1 + 0x249) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124c) = 0x80000000;
  param_1[0x24a] = param_1;
  return param_1;
}



// FUNCTION 14503da50 FUN_14503da50 body=146 status=ok
// SIG undefined FUN_14503da50(void)

void FUN_14503da50(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 5);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x28);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14503daf0 FUN_14503daf0 body=107 status=ok
// SIG undefined FUN_14503daf0(void)

void FUN_14503daf0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 6);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14503db60 FUN_14503db60 body=103 status=ok
// SIG undefined FUN_14503db60(void)

void FUN_14503db60(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1030) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1034)) && (*(longlong *)(param_1 + 0x1028) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1028),
               (ulonglong)(*(uint *)(param_1 + 0x1034) & 0x7fffffff) * 0x70);
  }
  *(undefined8 *)(param_1 + 0x1028) = 0;
  *(undefined4 *)(param_1 + 0x1034) = 0x80000000;
  FUN_14503daf0(param_1 + 8);
  return;
}



// FUNCTION 14503dbd0 FUN_14503dbd0 body=116 status=ok
// SIG undefined FUN_14503dbd0(void)

void FUN_14503dbd0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1dc)) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1d0),
               (ulonglong)(*(uint *)(param_1 + 0x1dc) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0x80000000;
  FUN_14503cf90(param_1 + 0x198);
  FUN_147e52b68(param_1);
  return;
}



// FUNCTION 14503dc50 FUN_14503dc50 body=107 status=ok
// SIG undefined FUN_14503dc50(void)

void FUN_14503dc50(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 3);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14503dcc0 FUN_14503dcc0 body=1789 status=ok
// SIG undefined FUN_14503dcc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14503dcc0(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined8 *local_res8;
  uint local_res10;
  int local_res18 [2];
  int local_res20;
  undefined8 *local_1428;
  int local_1420;
  uint local_141c;
  longlong local_1418;
  int local_1410;
  uint local_140c;
  longlong local_1408;
  int local_1400;
  undefined8 *local_13f8;
  longlong local_13f0;
  undefined8 local_13e8;
  undefined4 local_13e0;
  undefined4 local_13dc;
  char *local_13d8;
  char *pcStack_13d0;
  undefined *local_13c8;
  undefined *puStack_13c0;
  undefined8 local_13b8 [2];
  undefined4 local_13a8;
  undefined4 uStack_13a4;
  undefined4 uStack_13a0;
  undefined4 uStack_139c;
  undefined **local_1398;
  undefined8 local_1390;
  undefined8 local_1388;
  undefined8 local_1380;
  undefined4 local_1378;
  undefined4 local_1374;
  undefined8 local_1370;
  int local_1368;
  undefined4 local_1364;
  undefined8 local_1360;
  undefined4 local_1358;
  undefined4 local_1354;
  undefined8 local_1350;
  undefined4 local_1348;
  undefined4 local_1344;
  undefined8 local_1340;
  undefined4 local_1338;
  undefined4 local_1334;
  undefined4 local_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined4 local_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined1 local_12b8 [32];
  undefined1 local_1298 [4152];
  undefined1 local_260 [480];
  undefined1 local_80 [56];
  undefined8 uStack_48;
  
  uStack_48 = 0x14503dce3;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res8 = param_1;
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar2 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar5;
  }
  local_13c8 = *(undefined **)(lVar5 + 0x3e0);
  local_13d8 = "TtErosion/ClipFaces";
  pcStack_13d0 = "";
  if (local_13c8 != (undefined *)0x0) {
    local_13a8 = 0x49c21da8;
    uStack_13a4 = 1;
    uStack_13a0 = 0x49c21dbb;
    uStack_139c = 1;
    FUN_144b3f370(local_13c8,&local_13a8);
  }
  uVar8 = 0;
  local_1388 = 1;
  local_1380 = 0;
  local_1378 = 0;
  local_1374 = 0x80000000;
  local_1390 = 0xffffffff;
  local_1398 = &PTR_LAB_14aba30f0;
  local_1370 = 0;
  local_1368 = 0;
  local_1364 = 0x80000000;
  local_1360 = 0;
  local_1358 = 0;
  local_1354 = 0x80000000;
  local_1350 = 0;
  local_1348 = 0;
  local_1344 = 0x80000000;
  local_1340 = 0;
  local_1338 = 0;
  local_1334 = 0x80000000;
  local_1330 = 0;
  local_1328 = 0;
  uStack_1320 = 0;
  local_12e8 = 0;
  local_1318 = 0;
  uStack_1310 = 0;
  local_12e0 = 0;
  local_1308 = 0;
  uStack_1300 = 0;
  local_1428 = (undefined8 *)0x0;
  local_12f8 = 0;
  uStack_12f0 = 0;
  local_1420 = 0;
  local_12d8 = 0;
  uStack_12d0 = 0;
  local_141c = 0x80000000;
  local_12c8 = 0;
  uStack_12c0 = 0;
  local_1418 = 0;
  local_1410 = 0;
  local_140c = 0x80000000;
  local_1408 = FUN_144b3d480();
  local_1400 = 0;
  lVar2 = *(longlong *)(param_1[2] + 0x28);
  if (lVar2 != 0) {
    FUN_144b3d910(lVar2);
  }
  local_13b8[0] = 0x808;
  lVar5 = (*DAT_14c787670)(0,local_13b8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"NodeBlock");
  }
  uVar6 = uVar8;
  if (lVar5 != 0) {
    uVar6 = FUN_14503eed0(lVar5);
  }
  uVar9 = *(ulonglong *)(lVar2 + 0x18);
  do {
    *(ulonglong *)(uVar6 + 0x800) = uVar9;
    LOCK();
    uVar7 = *(ulonglong *)(lVar2 + 0x18);
    bVar17 = uVar9 == uVar7;
    if (bVar17) {
      *(ulonglong *)(lVar2 + 0x18) = uVar6;
      uVar7 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar7;
  } while (!bVar17);
  lVar5 = param_1[2];
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
  FUN_144cb3710(&local_1398,param_1[1]);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
  FUN_14503d920(local_12b8);
  local_13f0 = local_res8[2] + 0x30;
  puVar13 = local_res8;
  uVar9 = uVar8;
  local_13dc = param_2;
  if (local_13f0 != 0) {
    local_13e8 = 0;
    local_13e0 = 0;
  }
  do {
    local_res10 = (uint)uVar9;
    if (local_13e8._4_4_ <= local_res10) {
      if ((local_13f0 == 0) ||
         (FUN_144bf9800(local_13f0,local_res18,&local_13f0), local_res18[0] < 0)) {
        puVar14 = local_1428;
        lVar5 = puVar13[2];
        lVar10 = puVar13[1];
        puVar13 = local_1428 + local_1420;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
        local_res10 = *(int *)(lVar10 + 0x30);
        FUN_144cb4260(lVar10,&local_1398);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
        for (; puVar14 != puVar13; puVar14 = puVar14 + 1) {
          uVar3 = *puVar14;
          iVar12 = (int)((ulonglong)uVar3 >> 0x20) + local_res10;
          iVar16 = (int)uVar8;
          if (iVar16 == 0x80) {
            local_res8 = (undefined8 *)0x808;
            lVar5 = (*DAT_14c787670)(0,&local_res8,0);
            if (DAT_14c787680 != (code *)0x0) {
              (*DAT_14c787680)(lVar5,"NodeBlock");
            }
            uVar6 = 0;
            if (lVar5 != 0) {
              uVar6 = FUN_14503eed0(lVar5);
            }
            uVar8 = *(ulonglong *)(lVar2 + 0x18);
            do {
              *(ulonglong *)(uVar6 + 0x800) = uVar8;
              LOCK();
              uVar9 = *(ulonglong *)(lVar2 + 0x18);
              bVar17 = uVar8 == uVar9;
              if (bVar17) {
                *(ulonglong *)(lVar2 + 0x18) = uVar6;
                uVar9 = uVar8;
              }
              UNLOCK();
              uVar8 = uVar9;
            } while (!bVar17);
            iVar16 = 0;
          }
          piVar11 = (int *)((longlong)iVar16 * 0x10 + uVar6);
          lVar5 = (longlong)(int)uVar3;
          uVar8 = (ulonglong)(iVar16 + 1);
          *piVar11 = iVar12;
          plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          do {
            *(longlong *)(piVar11 + 2) = lVar5;
            LOCK();
            lVar10 = *plVar1;
            bVar17 = lVar5 == lVar10;
            if (bVar17) {
              *plVar1 = (longlong)piVar11;
              lVar10 = lVar5;
            }
            UNLOCK();
            lVar5 = lVar10;
          } while (!bVar17);
        }
        FUN_14503dc50(local_80);
        FUN_14503dbd0(local_260);
        FUN_14503db60(local_1298);
        FUN_14503da50(local_12b8);
        if (lVar2 != 0) {
          FUN_144b3f230(lVar2);
        }
        if ((local_1408 != 0) && (*(int *)(local_1408 + 4) != -2)) {
          (*DAT_14c787678)(DAT_14c6e47a8,local_1408,0);
          FUN_144b3ec00(&local_1408);
        }
        local_1410 = 0;
        if ((-1 < (int)local_140c) && (local_1418 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_1418,(ulonglong)(local_140c & 0x7fffffff) * 0x88);
        }
        local_1418 = 0;
        local_140c = 0x80000000;
        local_1420 = 0;
        if ((-1 < (int)local_141c) && (local_1428 != (undefined8 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_1428,(ulonglong)(local_141c & 0x7fffffff) << 3);
        }
        local_1428 = (undefined8 *)0x0;
        local_141c = 0x80000000;
        FUN_147e4ccc0(&local_1398);
        puVar4 = local_13c8;
        if (local_13c8 != (undefined *)0x0) {
          local_13c8 = &DAT_149981764;
          puStack_13c0 = &DAT_149981766;
          local_13a8 = 0x49981764;
          uStack_13a4 = 1;
          uStack_13a0 = 0x49981766;
          uStack_139c = 1;
          FUN_144b3f260(puVar4,&local_13a8);
        }
        return;
      }
      uVar9 = local_13e8 & 0xffffffff;
      local_res10 = (uint)local_13e8;
    }
    uVar15 = (uint)uVar9;
    FUN_1453378d0(*puVar13,uVar9,
                  *(undefined8 *)
                   ((longlong)(int)uVar15 * 8 +
                   *(longlong *)(*(longlong *)(puVar13[2] + 0x18) + 0x48)),
                  *(undefined8 *)
                   ((longlong)(int)uVar15 * 8 +
                   *(longlong *)(*(longlong *)(puVar13[2] + 0x20) + 0x48)),puVar13 + 3,
                  puVar13[2] + 0x910,&local_1418,&local_1398,&local_1428,local_12b8);
    puVar14 = local_1428;
    if (99 < local_1368) {
      lVar5 = puVar13[1];
      local_13f8 = local_1428 + local_1420;
      lVar10 = local_res8[2];
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x930));
      local_res20 = *(int *)(lVar5 + 0x30);
      FUN_144cb4260(lVar5,&local_1398);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x930));
      puVar13 = local_13f8;
      if (puVar14 != local_13f8) {
        do {
          uVar3 = *puVar14;
          iVar16 = (int)((ulonglong)uVar3 >> 0x20) + local_res20;
          iVar12 = (int)uVar8;
          if (iVar12 == 0x80) {
            local_13d8 = (char *)0x808;
            lVar5 = (*DAT_14c787670)(0,&local_13d8,0);
            if (DAT_14c787680 != (code *)0x0) {
              (*DAT_14c787680)(lVar5,"NodeBlock");
            }
            if (lVar5 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_14503eed0(lVar5);
            }
            uVar8 = *(ulonglong *)(lVar2 + 0x18);
            do {
              *(ulonglong *)(uVar6 + 0x800) = uVar8;
              LOCK();
              uVar9 = *(ulonglong *)(lVar2 + 0x18);
              bVar17 = uVar8 == uVar9;
              if (bVar17) {
                *(ulonglong *)(lVar2 + 0x18) = uVar6;
                uVar9 = uVar8;
              }
              UNLOCK();
              uVar8 = uVar9;
            } while (!bVar17);
            iVar12 = 0;
            puVar13 = local_13f8;
          }
          piVar11 = (int *)((longlong)iVar12 * 0x10 + uVar6);
          lVar5 = (longlong)(int)uVar3;
          uVar8 = (ulonglong)(iVar12 + 1);
          *piVar11 = iVar16;
          plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          do {
            *(longlong *)(piVar11 + 2) = lVar5;
            LOCK();
            lVar10 = *plVar1;
            bVar17 = lVar5 == lVar10;
            if (bVar17) {
              *plVar1 = (longlong)piVar11;
              lVar10 = lVar5;
            }
            UNLOCK();
            lVar5 = lVar10;
          } while (!bVar17);
          puVar14 = puVar14 + 1;
          uVar15 = local_res10;
        } while (puVar14 != puVar13);
      }
      FUN_144cb3750(&local_1398);
      local_1420 = 0;
      puVar13 = local_res8;
      if ((((local_1410 != 0) && (local_1410 = 0, local_1408 != 0)) &&
          (*(int *)(local_1408 + 4) != -2)) && (iVar12 = 0, 0 < local_1400 + 1)) {
        lVar5 = 0;
        do {
          *(undefined4 *)(local_1408 + 4 + lVar5) = 0xffffffff;
          lVar5 = lVar5 + 8;
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_1400 + 1);
      }
    }
    uVar9 = (ulonglong)(uVar15 + 1);
  } while( true );
}



// FUNCTION 14503e3c0 FUN_14503e3c0 body=1068 status=ok
// SIG undefined FUN_14503e3c0(void)

undefined2 *
FUN_14503e3c0(undefined2 *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5,longlong param_6,undefined4 param_7,undefined2 param_8)

{
  undefined2 uVar1;
  int iVar2;
  void *_Dst;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined2 local_res8 [4];
  longlong local_res10;
  longlong *local_res18;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  longlong local_50;
  undefined4 local_48;
  uint local_44;
  
  local_68 = 0x960;
  local_res10 = param_2;
  local_res18 = param_3;
  _Dst = (void *)(*DAT_14c787670)(0,&local_68,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  lVar7 = 0;
  lVar3 = lVar7;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x960);
    lVar3 = FUN_14503d270(_Dst);
  }
  lVar6 = param_6;
  if (param_6 != 0) {
    FUN_144b3d910(param_6);
  }
  lVar10 = *(longlong *)(lVar3 + 0x28);
  *(longlong *)(lVar3 + 0x28) = lVar6;
  if (lVar10 != 0) {
    FUN_144b3f230();
  }
  uVar4 = FUN_14533d430(&local_60,param_4);
  FUN_14503d150(lVar3 + 0x910,uVar4);
  local_48 = 0;
  if ((-1 < (int)local_44) && (local_50 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_50,(ulonglong)(local_44 & 0x7fffffff) * 0x60);
  }
  local_50 = 0;
  local_44 = 0x80000000;
  local_58 = 0;
  if ((-1 < (int)local_54) && (local_60 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_60,(ulonglong)(local_54 & 0x7fffffff) * 0x60);
  }
  lVar6 = *param_3;
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  if (lVar3 != 0) {
    FUN_144b3d910(lVar3);
  }
  param_6 = 0x50;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&param_6,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"ReferencedFunctorTask");
  }
  if (puVar5 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res8,0,0x40);
    lVar7 = lVar3;
  }
  else {
    puVar5[1] = 0xffffffff;
    puVar5[6] = lVar6;
    *puVar5 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks_boundsOnly(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar5[2] = 1;
    puVar5[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks_boundsOnly(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    *(undefined4 *)(puVar5 + 8) = param_7;
    puVar5[9] = "Erosion/PreClipFaces";
    puVar5[7] = lVar3;
    FUN_144be3b70(param_2,local_res8,puVar5,0x40);
    FUN_144b3f230(puVar5);
    lVar6 = lVar7;
  }
  if (lVar7 != 0) {
    FUN_144b3f230(lVar7);
  }
  if (lVar6 != 0) {
    FUN_144b3f230(lVar6);
  }
  uVar1 = local_res8[0];
  plVar9 = (longlong *)(param_2 + 0x328);
  iVar8 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar9,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar7 = *plVar9;
  *(int *)(param_2 + 0x330) = iVar8;
  *(undefined2 *)(lVar7 + 2 + (longlong)iVar2 * 4) = uVar1;
  *(undefined2 *)(lVar7 + (longlong)iVar2 * 4) = param_8;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    FUN_144b3d910(lVar7);
  }
  lVar6 = *param_5;
  if (lVar6 != 0) {
    FUN_144b3d910(lVar6);
  }
  if (lVar3 != 0) {
    FUN_144b3d910(lVar3);
  }
  param_6 = 0x60;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&param_6,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar5 == (undefined8 *)0x0) {
    FUN_144be3b70(local_res10,param_1,0,0x40);
    lVar10 = lVar3;
  }
  else {
    puVar5[6] = lVar7;
    puVar5[1] = 0xffffffff;
    puVar5[7] = lVar6;
    *puVar5 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks_boundsOnly(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
              ::vftable;
    lVar7 = 0;
    puVar5[2] = 1;
    puVar5[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::FaceClipping::addClipFacesTasks_boundsOnly(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh_const_>,hkaiNavMeshGeneration::Erosion::InternalGenerationBounds_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Mesh>,hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>*___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
                ::vftable;
    lVar6 = 0;
    *(undefined4 *)(puVar5 + 9) = param_7;
    puVar5[10] = "Erosion/ClipFaces";
    puVar5[8] = lVar3;
    *(undefined4 *)((longlong)puVar5 + 0x4c) = 1;
    FUN_144be3b70(local_res10,param_1,puVar5,0x40);
    FUN_144b3f230(puVar5);
    lVar10 = 0;
  }
  if (lVar10 != 0) {
    FUN_144b3f230(lVar10);
  }
  if (lVar6 != 0) {
    FUN_144b3f230(lVar6);
  }
  if (lVar7 != 0) {
    FUN_144b3f230(lVar7);
  }
  iVar8 = *(int *)(param_2 + 0x330) + 1;
  uVar1 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar9,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar7 = *plVar9;
  *(int *)(param_2 + 0x330) = iVar8;
  *(undefined2 *)(lVar7 + (longlong)iVar2 * 4) = local_res8[0];
  *(undefined2 *)(lVar7 + 2 + (longlong)iVar2 * 4) = uVar1;
  if (lVar3 != 0) {
    FUN_144b3f230(lVar3);
  }
  if (*local_res18 != 0) {
    FUN_144b3f230();
  }
  if (*param_5 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 14503e7f0 FUN_14503e7f0 body=1757 status=ok
// SIG undefined FUN_14503e7f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14503e7f0(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  uint local_res10;
  int local_res18 [2];
  int local_res20;
  undefined8 *local_1428;
  int local_1420;
  uint local_141c;
  longlong local_1418;
  int local_1410;
  uint local_140c;
  longlong local_1408;
  int local_1400;
  undefined8 *local_13f8;
  longlong local_13f0;
  undefined8 local_13e8;
  undefined4 local_13e0;
  undefined4 local_13dc;
  char *local_13d8;
  char *pcStack_13d0;
  undefined *local_13c8;
  undefined *puStack_13c0;
  undefined8 local_13b8;
  undefined8 local_13b0;
  undefined4 local_13a8;
  undefined4 uStack_13a4;
  undefined4 uStack_13a0;
  undefined4 uStack_139c;
  undefined **local_1398;
  undefined8 local_1390;
  undefined8 local_1388;
  undefined8 local_1380;
  undefined4 local_1378;
  undefined4 local_1374;
  undefined8 local_1370;
  int local_1368;
  undefined4 local_1364;
  undefined8 local_1360;
  undefined4 local_1358;
  undefined4 local_1354;
  undefined8 local_1350;
  undefined4 local_1348;
  undefined4 local_1344;
  undefined8 local_1340;
  undefined4 local_1338;
  undefined4 local_1334;
  undefined4 local_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined4 local_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined1 local_12b8 [32];
  undefined1 local_1298 [4152];
  undefined1 local_260 [480];
  undefined1 local_80 [56];
  undefined8 uStack_48;
  
  uStack_48 = 0x14503e813;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar2 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar5;
  }
  local_13c8 = *(undefined **)(lVar5 + 0x3e0);
  local_13d8 = "TtErosion/ClipFaces";
  pcStack_13d0 = "";
  if (local_13c8 != (undefined *)0x0) {
    local_13a8 = 0x49c21da8;
    uStack_13a4 = 1;
    uStack_13a0 = 0x49c21dbb;
    uStack_139c = 1;
    FUN_144b3f370(local_13c8,&local_13a8);
  }
  uVar8 = 0;
  local_1388 = 1;
  local_1380 = 0;
  local_1378 = 0;
  local_1374 = 0x80000000;
  local_1390 = 0xffffffff;
  local_1398 = &PTR_LAB_14aba30f0;
  local_1370 = 0;
  local_1368 = 0;
  local_1364 = 0x80000000;
  local_1360 = 0;
  local_1358 = 0;
  local_1354 = 0x80000000;
  local_1350 = 0;
  local_1348 = 0;
  local_1344 = 0x80000000;
  local_1340 = 0;
  local_1338 = 0;
  local_1334 = 0x80000000;
  local_1330 = 0;
  local_1328 = 0;
  uStack_1320 = 0;
  local_12e8 = 0;
  local_1318 = 0;
  uStack_1310 = 0;
  local_12e0 = 0;
  local_1308 = 0;
  uStack_1300 = 0;
  local_1428 = (undefined8 *)0x0;
  local_12f8 = 0;
  uStack_12f0 = 0;
  local_1420 = 0;
  local_12d8 = 0;
  uStack_12d0 = 0;
  local_141c = 0x80000000;
  local_12c8 = 0;
  uStack_12c0 = 0;
  local_1418 = 0;
  local_1410 = 0;
  local_140c = 0x80000000;
  local_1408 = FUN_144b3d480();
  local_1400 = 0;
  lVar2 = *(longlong *)(param_1[2] + 0x28);
  if (lVar2 != 0) {
    FUN_144b3d910(lVar2);
  }
  local_13b8 = 0x808;
  lVar5 = (*DAT_14c787670)(0,&local_13b8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"NodeBlock");
  }
  uVar6 = uVar8;
  if (lVar5 != 0) {
    uVar6 = FUN_14503eed0(lVar5);
  }
  uVar9 = *(ulonglong *)(lVar2 + 0x18);
  do {
    *(ulonglong *)(uVar6 + 0x800) = uVar9;
    LOCK();
    uVar7 = *(ulonglong *)(lVar2 + 0x18);
    bVar17 = uVar9 == uVar7;
    if (bVar17) {
      *(ulonglong *)(lVar2 + 0x18) = uVar6;
      uVar7 = uVar9;
    }
    UNLOCK();
    uVar9 = uVar7;
  } while (!bVar17);
  lVar5 = param_1[2];
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
  FUN_144cb3710(&local_1398,param_1[1]);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
  FUN_14503d920(local_12b8);
  local_13f0 = param_1[2] + 0x30;
  uVar9 = uVar8;
  local_13dc = param_2;
  if (local_13f0 != 0) {
    local_13e8 = 0;
    local_13e0 = 0;
  }
  do {
    local_res10 = (uint)uVar9;
    if (local_13e8._4_4_ <= local_res10) {
      if ((local_13f0 == 0) ||
         (FUN_144bf9800(local_13f0,local_res18,&local_13f0), local_res18[0] < 0)) {
        puVar13 = local_1428;
        lVar5 = param_1[2];
        lVar10 = param_1[1];
        puVar14 = local_1428 + local_1420;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
        iVar12 = *(int *)(lVar10 + 0x30);
        FUN_144cb4260(lVar10,&local_1398);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x930));
        for (; puVar13 != puVar14; puVar13 = puVar13 + 1) {
          uVar3 = *puVar13;
          iVar16 = (int)uVar8;
          if (iVar16 == 0x80) {
            local_13d8 = (char *)0x808;
            lVar5 = (*DAT_14c787670)(0,&local_13d8,0);
            if (DAT_14c787680 != (code *)0x0) {
              (*DAT_14c787680)(lVar5,"NodeBlock");
            }
            if (lVar5 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_14503eed0(lVar5);
            }
            uVar8 = *(ulonglong *)(lVar2 + 0x18);
            do {
              *(ulonglong *)(uVar6 + 0x800) = uVar8;
              LOCK();
              uVar9 = *(ulonglong *)(lVar2 + 0x18);
              bVar17 = uVar8 == uVar9;
              if (bVar17) {
                *(ulonglong *)(lVar2 + 0x18) = uVar6;
                uVar9 = uVar8;
              }
              UNLOCK();
              uVar8 = uVar9;
            } while (!bVar17);
            iVar16 = 0;
          }
          piVar11 = (int *)((longlong)iVar16 * 0x10 + uVar6);
          lVar5 = (longlong)(int)uVar3;
          uVar8 = (ulonglong)(iVar16 + 1);
          *piVar11 = (int)((ulonglong)uVar3 >> 0x20) + iVar12;
          plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          do {
            *(longlong *)(piVar11 + 2) = lVar5;
            LOCK();
            lVar10 = *plVar1;
            bVar17 = lVar5 == lVar10;
            if (bVar17) {
              *plVar1 = (longlong)piVar11;
              lVar10 = lVar5;
            }
            UNLOCK();
            lVar5 = lVar10;
          } while (!bVar17);
        }
        FUN_14503dc50(local_80);
        FUN_14503dbd0(local_260);
        FUN_14503db60(local_1298);
        FUN_14503da50(local_12b8);
        if (lVar2 != 0) {
          FUN_144b3f230(lVar2);
        }
        if ((local_1408 != 0) && (*(int *)(local_1408 + 4) != -2)) {
          (*DAT_14c787678)(DAT_14c6e47a8,local_1408,0);
          FUN_144b3ec00(&local_1408);
        }
        local_1410 = 0;
        if ((-1 < (int)local_140c) && (local_1418 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_1418,(ulonglong)(local_140c & 0x7fffffff) * 0x88);
        }
        local_1418 = 0;
        local_140c = 0x80000000;
        local_1420 = 0;
        if ((-1 < (int)local_141c) && (local_1428 != (undefined8 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_1428,(ulonglong)(local_141c & 0x7fffffff) << 3);
        }
        local_1428 = (undefined8 *)0x0;
        local_141c = 0x80000000;
        FUN_147e4ccc0(&local_1398);
        puVar4 = local_13c8;
        if (local_13c8 != (undefined *)0x0) {
          local_13c8 = &DAT_149981764;
          puStack_13c0 = &DAT_149981766;
          local_13a8 = 0x49981764;
          uStack_13a4 = 1;
          uStack_13a0 = 0x49981766;
          uStack_139c = 1;
          FUN_144b3f260(puVar4,&local_13a8);
        }
        return;
      }
      uVar9 = local_13e8 & 0xffffffff;
      local_res10 = (uint)local_13e8;
    }
    uVar15 = (uint)uVar9;
    FUN_145337fd0(*param_1,uVar9,param_1[2] + 0x910,&local_1418,&local_1398,&local_1428,local_12b8);
    puVar14 = local_1428;
    if (99 < local_1368) {
      lVar5 = param_1[1];
      local_13f8 = local_1428 + local_1420;
      lVar10 = param_1[2];
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x930));
      local_res20 = *(int *)(lVar5 + 0x30);
      FUN_144cb4260(lVar5,&local_1398);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar10 + 0x930));
      puVar13 = local_13f8;
      if (puVar14 != local_13f8) {
        do {
          uVar3 = *puVar14;
          iVar16 = (int)((ulonglong)uVar3 >> 0x20) + local_res20;
          iVar12 = (int)uVar8;
          if (iVar12 == 0x80) {
            local_13b0 = 0x808;
            lVar5 = (*DAT_14c787670)(0,&local_13b0,0);
            if (DAT_14c787680 != (code *)0x0) {
              (*DAT_14c787680)(lVar5,"NodeBlock");
            }
            if (lVar5 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_14503eed0(lVar5);
            }
            uVar8 = *(ulonglong *)(lVar2 + 0x18);
            do {
              *(ulonglong *)(uVar6 + 0x800) = uVar8;
              LOCK();
              uVar9 = *(ulonglong *)(lVar2 + 0x18);
              bVar17 = uVar8 == uVar9;
              if (bVar17) {
                *(ulonglong *)(lVar2 + 0x18) = uVar6;
                uVar9 = uVar8;
              }
              UNLOCK();
              uVar8 = uVar9;
            } while (!bVar17);
            iVar12 = 0;
            puVar13 = local_13f8;
          }
          piVar11 = (int *)((longlong)iVar12 * 0x10 + uVar6);
          lVar5 = (longlong)(int)uVar3;
          uVar8 = (ulonglong)(iVar12 + 1);
          *piVar11 = iVar16;
          plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + lVar5 * 8);
          do {
            *(longlong *)(piVar11 + 2) = lVar5;
            LOCK();
            lVar10 = *plVar1;
            bVar17 = lVar5 == lVar10;
            if (bVar17) {
              *plVar1 = (longlong)piVar11;
              lVar10 = lVar5;
            }
            UNLOCK();
            lVar5 = lVar10;
          } while (!bVar17);
          puVar14 = puVar14 + 1;
          uVar15 = local_res10;
        } while (puVar14 != puVar13);
      }
      FUN_144cb3750(&local_1398);
      local_1420 = 0;
      if ((((local_1410 != 0) && (local_1410 = 0, local_1408 != 0)) &&
          (*(int *)(local_1408 + 4) != -2)) && (iVar12 = 0, 0 < local_1400 + 1)) {
        lVar5 = 0;
        do {
          *(undefined4 *)(local_1408 + 4 + lVar5) = 0xffffffff;
          lVar5 = lVar5 + 8;
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_1400 + 1);
      }
    }
    uVar9 = (ulonglong)(uVar15 + 1);
  } while( true );
}



// FUNCTION 14503eed0 FUN_14503eed0 body=245 status=ok
// SIG undefined FUN_14503eed0(void)

longlong FUN_14503eed0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x80;
  puVar1 = (undefined8 *)(param_1 + 0x18);
  do {
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[6] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[0xc] = 0;
    puVar1[0xe] = 0;
    puVar1[0x10] = 0;
    puVar1[0x12] = 0;
    puVar1[0x14] = 0;
    puVar1[0x16] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x20] = 0;
    puVar1[0x22] = 0;
    puVar1[0x24] = 0;
    puVar1[0x26] = 0;
    puVar1[0x28] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x30] = 0;
    puVar1[0x32] = 0;
    puVar1[0x34] = 0;
    puVar1[0x36] = 0;
    puVar1[0x38] = 0;
    puVar1[0x3a] = 0;
    puVar1[0x3c] = 0;
    puVar1 = puVar1 + 0x40;
    lVar2 = lVar2 + -0x20;
  } while (lVar2 != 0);
  *(undefined8 *)(param_1 + 0x800) = 0;
  return param_1;
}



// FUNCTION 14503efd0 FUN_14503efd0 body=256 status=ok
// SIG undefined FUN_14503efd0(void)

void FUN_14503efd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtErosion/PreClipFaces";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144bf95c0(*(longlong *)(param_1 + 0x18) + 0x30,*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20),1);
  FUN_14503d3d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x30));
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14503f0d0 FUN_14503f0d0 body=5 status=ok
// SIG undefined FUN_14503f0d0(void)

undefined8 FUN_14503f0d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14503f0e0 FUN_14503f0e0 body=129 status=ok
// SIG undefined FUN_14503f0e0(void)

undefined8 * FUN_14503f0e0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14503f170 FUN_14503f170 body=15 status=ok
// SIG undefined FUN_14503f170(void)

undefined4 * FUN_14503f170(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  return param_2;
}



// FUNCTION 14503f180 FUN_14503f180 body=12 status=ok
// SIG undefined FUN_14503f180(void)

void FUN_14503f180(longlong param_1,longlong param_2)

{
  FUN_14503dcc0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 14503f190 FUN_14503f190 body=5 status=ok
// SIG undefined FUN_14503f190(void)

undefined8 FUN_14503f190(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



// FUNCTION 14503f1a0 FUN_14503f1a0 body=143 status=ok
// SIG undefined FUN_14503f1a0(void)

undefined8 * FUN_14503f1a0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 14503f230 FUN_14503f230 body=256 status=ok
// SIG undefined FUN_14503f230(void)

void FUN_14503f230(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtErosion/PreClipFaces";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144bf95c0(*(longlong *)(param_1 + 0x18) + 0x30,*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x20),1);
  FUN_14503d3d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x30));
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14503f330 FUN_14503f330 body=5 status=ok
// SIG undefined FUN_14503f330(void)

undefined8 FUN_14503f330(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14503f340 FUN_14503f340 body=129 status=ok
// SIG undefined FUN_14503f340(void)

undefined8 * FUN_14503f340(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14503f3d0 FUN_14503f3d0 body=15 status=ok
// SIG undefined FUN_14503f3d0(void)

undefined4 * FUN_14503f3d0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  param_2[1] = *(undefined4 *)(param_1 + 0x2c);
  return param_2;
}



// FUNCTION 14503f3e0 FUN_14503f3e0 body=12 status=ok
// SIG undefined FUN_14503f3e0(void)

void FUN_14503f3e0(longlong param_1,longlong param_2)

{
  FUN_14503e7f0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 14503f3f0 FUN_14503f3f0 body=5 status=ok
// SIG undefined FUN_14503f3f0(void)

undefined8 FUN_14503f3f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 14503f400 FUN_14503f400 body=143 status=ok
// SIG undefined FUN_14503f400(void)

undefined8 * FUN_14503f400(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14503f490 FUN_14503f490 body=270 status=ok
// SIG undefined FUN_14503f490(void)

void FUN_14503f490(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14503f5a0 FUN_14503f5a0 body=9 status=ok
// SIG undefined FUN_14503f5a0(void)

void FUN_14503f5a0(longlong param_1)

{
  FUN_14503f0e0(param_1 + -0x20);
  return;
}



// FUNCTION 14503f5ac FUN_14503f5ac body=9 status=ok
// SIG undefined FUN_14503f5ac(void)

void FUN_14503f5ac(longlong param_1)

{
  FUN_14503f1a0(param_1 + -0x20);
  return;
}



// FUNCTION 14503f5b8 FUN_14503f5b8 body=9 status=ok
// SIG undefined FUN_14503f5b8(void)

void FUN_14503f5b8(longlong param_1)

{
  FUN_14503f340(param_1 + -0x20);
  return;
}



// FUNCTION 14503f5c4 FUN_14503f5c4 body=9 status=ok
// SIG undefined FUN_14503f5c4(void)

void FUN_14503f5c4(longlong param_1)

{
  FUN_14503f400(param_1 + -0x20);
  return;
}



// FUNCTION 14503f5d0 FUN_14503f5d0 body=894 status=ok
// SIG undefined FUN_14503f5d0(void)

undefined2 *
FUN_14503f5d0(undefined2 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6,short param_7)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  undefined8 *_Dst;
  undefined8 *puVar5;
  int iVar6;
  short local_res8 [4];
  undefined8 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58 [3];
  
  local_58[0] = 0x900;
  local_res18 = param_3;
  local_res20 = param_4;
  _Dst = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    memset(_Dst,0,0x900);
    _Dst[1] = 0xffffffff;
    _Dst[2] = 1;
    *_Dst = hkaiNavMeshGeneration::Erosion::ReconnectEdges::Context::vftable;
    *(undefined4 *)(_Dst + 0xd) = 0;
    _Dst[0xc] = _Dst + 0xe;
    _Dst[0x96] = _Dst + 0x98;
    *(undefined4 *)((longlong)_Dst + 0x6c) = 0x80000011;
    *(undefined4 *)(_Dst + 0x97) = 0;
    *(undefined4 *)((longlong)_Dst + 0x4bc) = 0x80000011;
    FUN_144b3d910(_Dst);
  }
  local_res10 = (undefined8 *)0x60;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"ReferencedFunctorTask");
  }
  if (puVar5 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res8,0,0x40);
    local_res10 = _Dst;
    if (_Dst != (undefined8 *)0x0) {
      FUN_144b3f230(_Dst);
    }
  }
  else {
    puVar5[1] = 0xffffffff;
    *puVar5 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::ReconnectEdges::addReconnectEdgesTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>_>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar5[2] = 1;
    puVar5[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::ReconnectEdges::addReconnectEdgesTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>_>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    *(undefined4 *)(puVar5 + 7) = param_6;
    puVar5[10] = "Erosion/PreReconnectEdges";
    puVar5[6] = _Dst;
    puVar5[8] = param_3;
    puVar5[9] = param_4;
    FUN_144be3b70(param_2,local_res8,puVar5,0x40);
    FUN_144b3f230(puVar5);
    local_res10 = _Dst;
  }
  sVar4 = local_res8[0];
  if ((param_7 != -1) && (local_res8[0] != -1)) {
    iVar6 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar6) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar3 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar6;
    *(short *)(lVar3 + (longlong)iVar2 * 4) = param_7;
    *(short *)(lVar3 + 2 + (longlong)iVar2 * 4) = sVar4;
    param_4 = local_res20;
    param_3 = local_res18;
  }
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3d910(_Dst);
  }
  lVar3 = *param_5;
  if (lVar3 != 0) {
    FUN_144b3d910(lVar3);
  }
  local_res20 = 0x60;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res20,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar5 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,param_1,0,0x40);
    if (lVar3 != 0) {
      FUN_144b3f230(lVar3);
    }
    if (_Dst != (undefined8 *)0x0) {
      FUN_144b3f230(_Dst);
    }
  }
  else {
    puVar5[2] = 1;
    puVar5[1] = 0xffffffff;
    puVar5[6] = _Dst;
    *puVar5 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::ReconnectEdges::addReconnectEdgesTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>_>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
              ::vftable;
    puVar5[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Erosion::ReconnectEdges::addReconnectEdgesTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkRefPtr<hkaiNavMeshGeneration::Erosion::AtomicSetArray<int>_>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
                ::vftable;
    *(undefined4 *)(puVar5 + 10) = param_6;
    puVar5[0xb] = "Erosion/ReconnectEdges";
    puVar5[7] = param_3;
    puVar5[8] = param_4;
    puVar5[9] = lVar3;
    *(undefined4 *)((longlong)puVar5 + 0x54) = 1;
    FUN_144be3b70(param_2,param_1,puVar5,0x40);
    FUN_144b3f230(puVar5);
    _Dst = local_res10;
  }
  uVar1 = *param_1;
  iVar6 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar6) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar3 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar6;
  *(short *)(lVar3 + (longlong)iVar2 * 4) = local_res8[0];
  *(undefined2 *)(lVar3 + 2 + (longlong)iVar2 * 4) = uVar1;
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3f230(_Dst);
  }
  if (*param_5 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 14503f950 FUN_14503f950 body=101 status=ok
// SIG undefined FUN_14503f950(void)

undefined8 * FUN_14503f950(undefined8 *param_1,ulonglong param_2)

{
  FUN_14006c6ec(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x900);
  }
  return param_1;
}



// FUNCTION 14503f9c0 FUN_14503f9c0 body=680 status=ok
// SIG undefined FUN_14503f9c0(void)

void FUN_14503f9c0(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  int local_res8 [2];
  uint local_res10;
  int local_res18;
  int local_res20;
  char *local_1f8;
  char *local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [96];
  undefined1 local_108 [96];
  undefined1 local_a8 [104];
  
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar8 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar8 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar8 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar8 + 0xf0) = lVar7;
  }
  local_1d0 = *(longlong *)(lVar7 + 0x3e0);
  if (local_1d0 != 0) {
    local_1f8 = "TtErosion/ReconnectEdges";
    local_1f0 = "";
    FUN_144b3f370(local_1d0);
  }
  local_1e8 = *param_1 + 0x20;
  local_res10 = 0;
  local_1d4 = param_2;
  if (local_1e8 != 0) {
    local_1e0 = 0;
    local_1d8 = 0;
  }
  do {
    if (local_1e0._4_4_ <= local_res10) {
      if ((local_1e8 == 0) || (FUN_144bf9800(local_1e8,local_res8,&local_1e8), local_res8[0] < 0)) {
        if (local_1d0 != 0) {
          local_1f8 = "Et";
          local_1f0 = "";
          FUN_144b3f260(local_1d0,&local_1f8);
        }
        return;
      }
      local_res10 = (uint)local_1e0;
    }
    lVar8 = *(longlong *)(param_1[1] + 0x28);
    lVar7 = (longlong)(int)local_res10 * 0x60;
    local_1c8 = *(undefined8 *)(lVar8 + lVar7);
    uStack_1c0 = ((undefined8 *)(lVar8 + lVar7))[1];
    local_res20 = *(int *)(lVar8 + 0x10 + lVar7);
    puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar7);
    local_1a8 = *puVar1;
    uStack_1a0 = puVar1[1];
    puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar7);
    local_198 = *puVar1;
    uStack_190 = puVar1[1];
    puVar2 = (undefined4 *)(lVar8 + 0x40 + lVar7);
    local_188 = *puVar2;
    uStack_184 = puVar2[1];
    uStack_180 = puVar2[2];
    uStack_17c = puVar2[3];
    puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar7);
    local_178 = *puVar1;
    uStack_170 = puVar1[1];
    if ((int)local_res10 <= local_res20) {
      for (piVar4 = *(int **)(*(longlong *)(param_1[3] + 0x48) + (longlong)(int)local_res10 * 8);
          piVar4 != (int *)0x0; piVar4 = *(int **)(piVar4 + 2)) {
        local_res18 = *piVar4;
        lVar8 = (longlong)local_res18;
        piVar9 = *(int **)(*(longlong *)(param_1[3] + 0x48) + (longlong)local_res20 * 8);
        if (piVar9 != (int *)0x0) {
          do {
            lVar7 = param_1[2];
            iVar3 = *piVar9;
            FUN_144cb6900(lVar7,*(longlong *)(lVar7 + 0x28) + lVar8 * 0x60,local_168,local_a8);
            lVar10 = (longlong)iVar3 * 0x60;
            FUN_144cb6900(lVar7,*(longlong *)(lVar7 + 0x28) + lVar10,local_108,&local_1c8);
            cVar6 = FUN_144cc4380(local_168,&local_1c8);
            if ((cVar6 != '\0') && (cVar6 = FUN_144cc4380(local_a8,local_108), cVar6 != '\0')) {
              lVar7 = *(longlong *)(param_1[2] + 0x28);
              *(int *)(lVar7 + 0x10 + lVar8 * 0x60) = iVar3;
              *(int *)(lVar7 + 0x10 + lVar10) = local_res18;
              goto LAB_14503fbe3;
            }
            piVar9 = *(int **)(piVar9 + 2);
          } while (piVar9 != (int *)0x0);
        }
        cVar6 = FUN_144f634e0(&DAT_149c21f98,"An edge was not properly reconnected during erosion.")
        ;
        if (cVar6 != '\0') {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14503fbe3:
      }
    }
    local_res10 = local_res10 + 1;
  } while( true );
}



// FUNCTION 14503fc70 FUN_14503fc70 body=236 status=ok
// SIG undefined FUN_14503fc70(void)

void FUN_14503fc70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtErosion/PreReconnectEdges";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144bf95c0(*(longlong *)(param_1 + 0x10) + 0x20,*(undefined4 *)(param_1 + 0x18),
                *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x30),1);
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14503fd60 FUN_14503fd60 body=5 status=ok
// SIG undefined FUN_14503fd60(void)

undefined8 FUN_14503fd60(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 14503fd70 FUN_14503fd70 body=115 status=ok
// SIG undefined FUN_14503fd70(void)

undefined8 * FUN_14503fd70(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14503fdf0 FUN_14503fdf0 body=15 status=ok
// SIG undefined FUN_14503fdf0(void)

undefined4 * FUN_14503fdf0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  return param_2;
}



// FUNCTION 14503fe00 FUN_14503fe00 body=12 status=ok
// SIG undefined FUN_14503fe00(void)

void FUN_14503fe00(longlong param_1,longlong param_2)

{
  FUN_14503f9c0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 14503fe10 FUN_14503fe10 body=5 status=ok
// SIG undefined FUN_14503fe10(void)

undefined8 FUN_14503fe10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 14503fe20 FUN_14503fe20 body=129 status=ok
// SIG undefined FUN_14503fe20(void)

undefined8 * FUN_14503fe20(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FUN_144b3f230();
  }
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14503fea4 FUN_14503fea4 body=9 status=ok
// SIG undefined FUN_14503fea4(void)

void FUN_14503fea4(longlong param_1)

{
  FUN_14503fd70(param_1 + -0x20);
  return;
}



// FUNCTION 14503feb0 FUN_14503feb0 body=9 status=ok
// SIG undefined FUN_14503feb0(void)

void FUN_14503feb0(longlong param_1)

{
  FUN_14503fe20(param_1 + -0x20);
  return;
}



// FUNCTION 14503fec0 FUN_14503fec0 body=2182 status=ok
// SIG undefined FUN_14503fec0(void)

void FUN_14503fec0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined4 *puVar18;
  bool bVar19;
  int iVar20;
  ulonglong uVar21;
  uint *puVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  bool bVar26;
  longlong lVar27;
  byte bVar28;
  uint uVar29;
  undefined4 *puVar30;
  int iVar31;
  int iVar32;
  int local_res8;
  int local_res18;
  uint local_res20;
  int local_158;
  int local_150;
  int iStack_14c;
  int local_138;
  int local_128;
  undefined8 local_108;
  undefined4 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_dc;
  undefined8 local_d0;
  undefined8 local_c4;
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 *local_90 [3];
  longlong local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  lVar27 = *(longlong *)(param_1 + 0x28);
  local_98 = (longlong)param_2 * 4;
  lVar25 = *(longlong *)(param_1 + 0x38);
  uVar3 = *(uint *)(local_98 + *(longlong *)(param_1 + 0x18));
  uVar21 = (ulonglong)uVar3;
  uVar29 = *(uint *)((longlong)(int)uVar3 * 0x60 + 0xc + lVar27);
  uVar10 = (ulonglong)(*(uint *)((longlong)(int)uVar3 * 0x60 + lVar27) & 0x3fffffff);
  uVar1 = *(undefined8 *)(lVar25 + uVar10 * 0xc);
  iVar20 = *(int *)(lVar25 + 8 + uVar10 * 0xc);
  local_res18 = 1;
  if (uVar29 != uVar3) {
    iStack_14c = (int)((ulonglong)uVar1 >> 0x20);
    local_150 = (int)uVar1;
    do {
      local_res18 = local_res18 + 1;
      puVar22 = (uint *)((longlong)(int)uVar29 * 0x60 + lVar27);
      local_108 = *(undefined8 *)(lVar25 + (ulonglong)(*puVar22 & 0x3fffffff) * 0xc);
      puVar13 = (undefined8 *)(lVar25 + (ulonglong)(*puVar22 & 0x3fffffff) * 0xc);
      iVar15 = (int)((ulonglong)local_108 >> 0x20);
      if ((((int)local_108 == local_150) && (iVar15 == iStack_14c)) &&
         (*(int *)(puVar13 + 1) == iVar20)) {
        uVar10 = (ulonglong)(*(uint *)((longlong)(int)puVar22[3] * 0x60 + lVar27) & 0x3fffffff);
        uVar1 = *(undefined8 *)(lVar25 + uVar10 * 0xc);
        local_138 = (int)uVar1;
        uVar24 = (ulonglong)
                 (*(uint *)((longlong)*(int *)((longlong)(int)uVar21 * 0x60 + 0xc + lVar27) * 0x60 +
                           lVar27) & 0x3fffffff);
        uVar2 = *(undefined8 *)(lVar25 + uVar24 * 0xc);
        local_128 = (int)uVar2;
        if (local_138 - local_128 == 0) {
          iVar15 = (int)((ulonglong)uVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
          if (iVar15 == 0) {
            bVar19 = *(int *)(lVar25 + 8 + uVar10 * 0xc) < *(int *)(lVar25 + 8 + uVar24 * 0xc);
          }
          else {
            bVar19 = (bool)((byte)(iVar15 >> 0x1f) >> 7);
          }
        }
        else {
          bVar19 = (bool)((byte)(local_138 - local_128 >> 0x1f) >> 7);
        }
      }
      else {
        iVar16 = (int)local_108 - local_150;
        if (iVar16 == 0) {
          iVar15 = iVar15 - iStack_14c;
          if (iVar15 == 0) {
            bVar19 = *(int *)(puVar13 + 1) < iVar20;
          }
          else {
            bVar19 = (bool)((byte)(iVar15 >> 0x1f) >> 7);
          }
        }
        else {
          bVar19 = (bool)((byte)(iVar16 >> 0x1f) >> 7);
        }
        lVar25 = *(longlong *)(param_1 + 0x38);
      }
      if (bVar19 != false) {
        uVar21 = (ulonglong)uVar29;
        iVar20 = *(int *)(puVar13 + 1);
        iStack_14c = (int)((ulonglong)*puVar13 >> 0x20);
        local_150 = (int)*puVar13;
      }
      uVar29 = puVar22[3];
    } while (uVar29 != uVar3);
    if (3 < local_res18) {
      do {
        local_158 = 0;
        uVar10 = uVar21 & 0xffffffff;
        local_res20 = (uint)uVar21;
LAB_145040120:
        lVar27 = *(longlong *)(param_1 + 0x28);
        lVar25 = *(longlong *)(param_1 + 0x38);
        iVar15 = (int)uVar10;
        lVar17 = (longlong)iVar15 * 0x60;
        uVar3 = *(uint *)(lVar17 + 0xc + lVar27);
        uVar29 = *(uint *)(lVar17 + 8 + lVar27);
        local_d0 = *(undefined8 *)
                    (lVar25 + (ulonglong)(*(uint *)(lVar17 + lVar27) & 0x3fffffff) * 0xc);
        uVar23 = *(uint *)((longlong)(int)uVar3 * 0x60 + 0xc + lVar27);
        uVar24 = (ulonglong)(int)uVar23;
        local_e8 = *(undefined8 *)
                    (lVar25 + (ulonglong)
                              (*(uint *)((longlong)(int)uVar3 * 0x60 + lVar27) & 0x3fffffff) * 0xc);
        iVar20 = (int)((ulonglong)local_e8 >> 0x20);
        local_dc = *(undefined8 *)
                    (lVar25 + (ulonglong)
                              (*(uint *)((longlong)(int)uVar29 * 0x60 + lVar27) & 0x3fffffff) * 0xc)
        ;
        iVar32 = (int)((ulonglong)local_dc >> 0x20);
        uVar21 = *(ulonglong *)
                  (lVar25 + (ulonglong)(*(uint *)(uVar24 * 0x60 + lVar27) & 0x3fffffff) * 0xc);
        iVar16 = (int)((ulonglong)local_d0 >> 0x20);
        local_b0 = (longlong)((int)local_e8 - (int)local_dc);
        local_c4 = *(undefined8 *)
                    (lVar25 + (ulonglong)
                              (*(uint *)((longlong)
                                         *(int *)((longlong)(int)uVar29 * 0x60 + 8 + lVar27) * 0x60
                                        + lVar27) & 0x3fffffff) * 0xc);
        local_f0 = (longlong)((int)local_d0 - (int)local_dc);
        local_a8 = (longlong)(iVar20 - iVar32);
        lVar27 = (iVar20 - iVar32) * local_f0 - (iVar16 - iVar32) * local_b0;
        local_res8 = (int)((ulonglong)local_c4 >> 0x20);
        if ((longlong)(iVar20 - local_res8) * (longlong)((int)local_dc - (int)local_c4) -
            (longlong)((int)local_e8 - (int)local_c4) * (longlong)(iVar32 - local_res8) == 0) {
          if ((int)local_dc - (int)local_e8 == 0) {
            bVar19 = iVar32 < iVar20;
          }
          else {
            bVar19 = (bool)((byte)((int)local_dc - (int)local_e8 >> 0x1f) >> 7);
          }
          if ((int)local_c4 - (int)local_dc == 0) {
            bVar26 = local_res8 < iVar32;
          }
          else {
            bVar26 = (bool)((byte)((int)local_c4 - (int)local_dc >> 0x1f) >> 7);
          }
          bVar6 = false;
          if (bVar26 == bVar19) goto LAB_14504031b;
        }
        else {
LAB_14504031b:
          bVar6 = true;
        }
        local_f8._0_4_ = (int)(uVar21 >> 0x20);
        local_138 = (int)uVar21;
        if (((int)local_f8 - iVar32) * local_b0 - (local_138 - (int)local_dc) * local_a8 == 0) {
          if ((int)local_dc - (int)local_e8 == 0) {
            bVar19 = iVar32 < iVar20;
          }
          else {
            bVar19 = (bool)((byte)((int)local_dc - (int)local_e8 >> 0x1f) >> 7);
          }
          if ((int)local_e8 - local_138 == 0) {
            bVar26 = iVar20 < (int)local_f8;
          }
          else {
            bVar26 = (bool)((byte)((int)local_e8 - local_138 >> 0x1f) >> 7);
          }
          if (bVar19 == bVar26) goto LAB_1450403b2;
          bVar19 = false;
        }
        else {
LAB_1450403b2:
          bVar19 = true;
        }
        local_f8 = uVar21 >> 0x20;
        if ((((int)((uint)(lVar27 >> 0x3f) | (uint)(lVar27 != 0)) < 1) || (!bVar6)) || (!bVar19)) {
LAB_14504070a:
          uVar10 = (ulonglong)uVar3;
          local_158 = local_158 + 1;
          local_res20 = uVar3;
          if ((local_res18 <= local_158) &&
             (cVar8 = FUN_144f634e0(&DAT_149c221b0,"cannot find an ear"), cVar8 != '\0')) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto LAB_145040120;
        }
        if (uVar23 != uVar29) {
          do {
            uVar23 = (uint)uVar24;
            if (((uVar23 != (uint)uVar10) && (uVar23 != uVar3)) && (uVar23 != uVar29)) {
              uVar1 = *(undefined8 *)
                       (*(longlong *)(param_1 + 0x38) +
                       (ulonglong)
                       (*(uint *)((longlong)(int)uVar23 * 0x60 + *(longlong *)(param_1 + 0x28)) &
                       0x3fffffff) * 0xc);
              local_128 = (int)uVar1;
              iVar15 = (int)((ulonglong)uVar1 >> 0x20);
              lVar27 = (longlong)(local_128 - (int)local_d0) * (longlong)(iVar20 - iVar16) -
                       (longlong)((int)local_e8 - (int)local_d0) * (longlong)(iVar15 - iVar16);
              bVar28 = 0;
              if (lVar27 != 0) {
                bVar28 = (byte)((ulonglong)lVar27 >> 0x3f) ^ 1;
              }
              if (bVar28 == 0) {
                lVar27 = (longlong)(local_128 - (int)local_e8) * (longlong)(iVar32 - iVar20) -
                         (longlong)(iVar15 - iVar20) * (longlong)((int)local_dc - (int)local_e8);
                bVar28 = 0;
                if (lVar27 != 0) {
                  bVar28 = (byte)((ulonglong)lVar27 >> 0x3f) ^ 1;
                }
                if (bVar28 == 0) {
                  lVar27 = (longlong)(local_128 - (int)local_dc) * (longlong)(iVar16 - iVar32) -
                           (iVar15 - iVar32) * local_f0;
                  bVar28 = 0;
                  if (lVar27 != 0) {
                    bVar28 = (byte)((ulonglong)lVar27 >> 0x3f) ^ 1;
                  }
                  if (bVar28 == 0) goto LAB_14504070a;
                }
              }
              uVar10 = (ulonglong)local_res20;
            }
            iVar15 = (int)uVar10;
            uVar23 = *(uint *)((longlong)(int)uVar23 * 0x60 + 0xc + *(longlong *)(param_1 + 0x28));
            uVar24 = (ulonglong)uVar23;
            if (uVar23 == uVar29) break;
          } while( true );
        }
        FUN_144cb3be0(param_1,local_90,2);
        puVar14 = local_90[0];
        iVar9 = *(int *)(param_1 + 0x30) + -2;
        uVar4 = *(undefined4 *)(param_1 + 0x20);
        piVar11 = (int *)FUN_144cb3900(param_1);
        puVar7 = local_90[0];
        lVar27 = *(longlong *)(param_1 + 0x28);
        iVar31 = *(int *)(param_1 + 0x30) + -1;
        lVar25 = (longlong)iVar15 * 0x60 + lVar27;
        iVar20 = *(int *)(lVar25 + 8);
        iVar16 = *(int *)(lVar25 + 0xc);
        uVar21 = (ulonglong)iVar16;
        puVar30 = (undefined4 *)((longlong)iVar20 * 0x60 + lVar27);
        puVar18 = (undefined4 *)(uVar21 * 0x60 + lVar27);
        iVar32 = puVar30[2];
        *puVar14 = *puVar18;
        puVar14[1] = uVar4;
        puVar14[2] = iVar15;
        puVar14[3] = iVar20;
        puVar14[4] = iVar31;
        *(int *)(lVar25 + 0xc) = iVar9;
        *(undefined4 *)(lVar25 + 4) = uVar4;
        puVar30[2] = iVar9;
        puVar30[1] = uVar4;
        *piVar11 = iVar15;
        plVar12 = (longlong *)FUN_144cb4860(param_1,local_58,param_2);
        local_a8 = *plVar12;
        lVar25 = plVar12[1];
        uStack_70._0_4_ = (undefined4)lVar25;
        uStack_70._4_4_ = (undefined4)((ulonglong)lVar25 >> 0x20);
        uStack_a0 = (undefined4)uStack_70;
        uStack_9c = uStack_70._4_4_;
        local_78 = local_a8;
        uStack_70 = lVar25;
        FUN_144cb48b0(param_1,uVar4,&local_a8);
        puVar13 = (undefined8 *)FUN_144cb4cd0(param_1,local_68,param_2);
        local_108 = *puVar13;
        local_100 = *(undefined4 *)(puVar13 + 1);
        FUN_144cb4c80(param_1,uVar4,&local_108);
        cVar8 = FUN_144cb4d20(param_1);
        if (cVar8 != '\0') {
          puVar14 = (undefined4 *)FUN_144cb4e20(param_1,local_b8,param_2);
          FUN_144cb4df0(param_1,uVar4,*puVar14);
        }
        puVar7[0x18] = *puVar30;
        puVar7[0x1a] = iVar32;
        puVar7[0x1c] = iVar9;
        puVar7[0x19] = param_2;
        puVar7[0x1b] = iVar16;
        puVar18[2] = iVar31;
        *(int *)((longlong)iVar32 * 0x60 + lVar27 + 0xc) = iVar31;
        *(int *)(local_98 + *(longlong *)(param_1 + 0x18)) = iVar16;
        local_res18 = local_res18 + -1;
        if (local_res18 < 4) {
          return;
        }
      } while( true );
    }
  }
  return;
}



// FUNCTION 145040750 FUN_145040750 body=277 status=ok
// SIG undefined FUN_145040750(void)

void FUN_145040750(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int local_38;
  int local_2c;
  int local_20;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar9 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x28);
      lVar5 = *(longlong *)(param_1 + 0x38);
      puVar1 = (uint *)(lVar9 + lVar10);
      uVar2 = *(undefined8 *)(lVar5 + (ulonglong)(*puVar1 & 0x3fffffff) * 0xc);
      uVar3 = *(undefined8 *)
               (lVar5 + (ulonglong)
                        (*(uint *)((longlong)(int)puVar1[3] * 0x60 + lVar10) & 0x3fffffff) * 0xc);
      uVar4 = *(undefined8 *)
               (lVar5 + (ulonglong)
                        (*(uint *)((longlong)(int)puVar1[2] * 0x60 + lVar10) & 0x3fffffff) * 0xc);
      iVar7 = (int)((ulonglong)uVar2 >> 0x20);
      local_2c = (int)uVar3;
      local_38 = (int)uVar2;
      local_20 = (int)uVar4;
      lVar10 = (longlong)(iVar7 - (int)((ulonglong)uVar4 >> 0x20)) * (longlong)(local_2c - local_38)
               - (longlong)((int)((ulonglong)uVar3 >> 0x20) - iVar7) *
                 (longlong)(local_38 - local_20);
      bVar6 = 0;
      if (lVar10 != 0) {
        bVar6 = (byte)((ulonglong)lVar10 >> 0x3f) ^ 1;
      }
      if (bVar6 != 0) {
        FUN_14503fec0(param_1,puVar1[1]);
      }
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 0x60;
    } while (iVar8 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 145040870 FUN_145040870 body=64 status=ok
// SIG undefined FUN_145040870(void)

void FUN_145040870(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_14503fec0(param_1,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}



// FUNCTION 1450408b0 FUN_1450408b0 body=1684 status=ok
// SIG undefined FUN_1450408b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1450408b0(undefined4 *param_1,float *param_2,uint *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint local_res10;
  longlong local_278;
  longlong lStack_270;
  longlong local_268;
  longlong lStack_260;
  undefined1 local_258 [544];
  
  if (0.0 <= param_2[0x28]) {
    fVar16 = param_2[0x28] * param_2[0x25];
    if ((0.0 <= fVar16) && (fVar16 < 16777216.0)) {
      fVar22 = ((fVar16 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
      uVar17 = -(uint)(fVar16 == -0.0 || 8388608.0 < ABS(fVar16));
      local_res10 = (uint)(float)((uint)fVar16 & uVar17 |
                                 ~uVar17 & (uint)(fVar22 - (float)(-(uint)(fVar16 < fVar22) &
                                                                  _DAT_14c6daca0)));
    }
    *param_3 = local_res10;
    if ((param_2[0x28] <= 0.0) || (4 < local_res10)) {
      fVar16 = param_2[0x2c];
      if ((int)(param_3[5] & 0x7fffffff) < (int)fVar16) {
        FUN_14502b9c0(param_3 + 2,&PTR_vftable_14c6e47a0,(longlong)(int)fVar16);
      }
      if (((int)param_3[4] < (int)fVar16) || ((int)fVar16 < (int)param_3[4])) {
        param_3[4] = (uint)fVar16;
      }
      fVar16 = param_2[0x2c];
      lVar10 = *(longlong *)(param_3 + 2);
      pfVar11 = *(float **)(param_2 + 0x2a);
      if (0 < (int)fVar16) {
        lVar9 = 0;
        do {
          fVar22 = *pfVar11;
          fVar2 = pfVar11[1];
          fVar3 = pfVar11[2];
          fVar20 = fVar22 * *param_2 + param_2[0xc] + fVar2 * param_2[4] + fVar3 * param_2[8];
          fVar21 = fVar22 * param_2[1] + param_2[0xd] + fVar2 * param_2[5] + fVar3 * param_2[9];
          fVar22 = fVar22 * param_2[2] + param_2[0xe] + fVar2 * param_2[6] + fVar3 * param_2[10];
          fVar20 = (float)(-(uint)(fVar20 < 0.0) & 0x80000000 ^ _DAT_14c6dad90) + fVar20;
          fVar21 = (float)(-(uint)(fVar21 < 0.0) & 0x80000000 ^ uRam000000014c6dad94) + fVar21;
          fVar22 = (float)(-(uint)(fVar22 < 0.0) & 0x80000000 ^ uRam000000014c6dad98) + fVar22;
          uVar23 = (int)fVar20 ^ -(uint)(2.1474836e+09 <= fVar20);
          uVar24 = (int)fVar21 ^ -(uint)(2.1474836e+09 <= fVar21);
          uVar25 = (int)fVar22 ^ -(uint)(2.1474836e+09 <= fVar22);
          uVar17 = (int)uVar25 >> 0x1f;
          uVar18 = ((int)uVar23 >> 0x1f ^ uVar23) - ((int)uVar23 >> 0x1f);
          uVar19 = ((int)uVar24 >> 0x1f ^ uVar24) - ((int)uVar24 >> 0x1f);
          uVar17 = (uVar17 ^ uVar25) - uVar17;
          uVar25 = -(uint)((int)uVar19 < (int)uVar18);
          uVar19 = uVar25 & uVar18 | ~uVar25 & uVar19;
          uVar18 = -(uint)((int)uVar17 < (int)uVar19);
          if (0x7fffff < (int)(uVar18 & uVar19 | ~uVar18 & uVar17)) {
            FUN_144bde670(&local_278,local_258,0x200);
            FUN_144be6160(&local_278,
                          "Vertices in the positive bounds must be contained in the generation domain."
                         );
            FUN_144bfc0d0(0x7a9fe8a9,local_258,
                          "NavMesh\\Generation\\Erosion\\hkaiNavMeshGenerationErosionInternalSettings.cpp"
                          ,0x44);
            FUN_144bde6e0(&local_278);
            *param_1 = 0x80040200;
            return param_1;
          }
          pfVar11 = pfVar11 + 4;
          *(ulonglong *)(lVar10 + lVar9 * 8) = CONCAT44(uVar24,uVar23);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)fVar16);
      }
      if (param_2[0x2c] != 0.0) {
        local_278 = *(longlong *)(param_3 + 2);
        lStack_270 = local_278 + (longlong)(int)param_3[4] * 8;
        cVar5 = FUN_145040f90(&local_278);
        if (cVar5 == '\0') {
LAB_145040f37:
          *param_1 = 0x80040200;
          return param_1;
        }
      }
      fVar16 = param_2[0x30];
      lVar10 = (longlong)(int)fVar16;
      if ((int)(param_3[9] & 0x7fffffff) < (int)fVar16) {
        FUN_145041110(param_3 + 6,&PTR_vftable_14c6e47a0,lVar10);
      }
      uVar17 = param_3[8];
      if ((int)uVar17 < (int)fVar16) {
        lVar9 = *(longlong *)(param_3 + 6);
        param_3[8] = (uint)fVar16;
        for (puVar7 = (undefined8 *)((longlong)(int)uVar17 * 0x10 + *(longlong *)(param_3 + 6));
            puVar7 != (undefined8 *)(lVar10 * 0x10 + lVar9); puVar7 = puVar7 + 2) {
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 1) = 0;
          }
        }
      }
      else if ((int)fVar16 < (int)uVar17) {
        lVar9 = *(longlong *)(param_3 + 6);
        param_3[8] = (uint)fVar16;
        plVar4 = (longlong *)((longlong)(int)uVar17 * 0x10 + *(longlong *)(param_3 + 6));
        while (plVar4 != (longlong *)(lVar10 * 0x10 + lVar9)) {
          plVar12 = plVar4 + -2;
          *(undefined4 *)(plVar4 + -1) = 0;
          if ((-1 < (int)*(uint *)((longlong)plVar4 + -4)) && (*plVar12 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*plVar12,
                       (ulonglong)(*(uint *)((longlong)plVar4 + -4) & 0x7fffffff) << 3);
          }
          *plVar12 = 0;
          *(undefined4 *)((longlong)plVar4 + -4) = 0x80000000;
          plVar4 = plVar12;
        }
      }
      fVar16 = param_2[0x30];
      if (0 < (int)fVar16) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          lVar15 = *(longlong *)(param_3 + 6) + lVar10;
          iVar1 = *(int *)(*(longlong *)(param_2 + 0x2e) + 8 + lVar10);
          if ((int)(*(uint *)(lVar15 + 0xc) & 0x7fffffff) < iVar1) {
            FUN_14502b9c0(lVar15,&PTR_vftable_14c6e47a0,(longlong)iVar1);
          }
          if ((*(int *)(lVar15 + 8) < iVar1) || (iVar1 < *(int *)(lVar15 + 8))) {
            *(int *)(lVar15 + 8) = iVar1;
          }
          lVar8 = 0;
          lVar15 = *(longlong *)(lVar10 + *(longlong *)(param_3 + 6));
          lVar13 = (longlong)*(int *)(lVar10 + 8 + *(longlong *)(param_2 + 0x2e));
          pfVar11 = *(float **)(lVar10 + *(longlong *)(param_2 + 0x2e));
          if (0 < lVar13) {
            do {
              fVar22 = *pfVar11;
              fVar2 = pfVar11[1];
              fVar3 = pfVar11[2];
              fVar20 = fVar22 * *param_2 + param_2[0xc] + fVar2 * param_2[4] + fVar3 * param_2[8];
              fVar21 = fVar22 * param_2[1] + param_2[0xd] + fVar2 * param_2[5] + fVar3 * param_2[9];
              fVar22 = fVar22 * param_2[2] + param_2[0xe] + fVar2 * param_2[6] + fVar3 * param_2[10]
              ;
              fVar20 = (float)(-(uint)(fVar20 < 0.0) & 0x80000000 ^ _DAT_14c6dad90) + fVar20;
              fVar21 = (float)(-(uint)(fVar21 < 0.0) & 0x80000000 ^ uRam000000014c6dad94) + fVar21;
              fVar22 = (float)(-(uint)(fVar22 < 0.0) & 0x80000000 ^ uRam000000014c6dad98) + fVar22;
              uVar23 = (int)fVar20 ^ -(uint)(2.1474836e+09 <= fVar20);
              uVar24 = (int)fVar21 ^ -(uint)(2.1474836e+09 <= fVar21);
              uVar25 = (int)fVar22 ^ -(uint)(2.1474836e+09 <= fVar22);
              uVar17 = (int)uVar25 >> 0x1f;
              uVar18 = (uVar23 ^ (int)uVar23 >> 0x1f) - ((int)uVar23 >> 0x1f);
              uVar19 = (uVar24 ^ (int)uVar24 >> 0x1f) - ((int)uVar24 >> 0x1f);
              uVar17 = (uVar25 ^ uVar17) - uVar17;
              uVar25 = -(uint)((int)uVar19 < (int)uVar18);
              uVar19 = ~uVar25 & uVar19 | uVar25 & uVar18;
              uVar18 = -(uint)((int)uVar17 < (int)uVar19);
              if (0x7fffff < (int)(uVar18 & uVar19 | ~uVar18 & uVar17)) {
                FUN_144bde670(&local_278,local_258,0x200);
                FUN_144be6160(&local_278,
                              "Vertices in the negative bounds must be contained in the generation domain."
                             );
                FUN_144bfc0d0(0x4c738d0d,local_258,
                              "NavMesh\\Generation\\Erosion\\hkaiNavMeshGenerationErosionInternalSettings.cpp"
                              ,0x5a);
                FUN_144bde6e0(&local_278);
                goto LAB_145040f37;
              }
              pfVar11 = pfVar11 + 4;
              *(ulonglong *)(lVar15 + lVar8 * 8) = CONCAT44(uVar24,uVar23);
              lVar8 = lVar8 + 1;
            } while (lVar8 < lVar13);
          }
          local_278 = *(longlong *)(lVar10 + *(longlong *)(param_3 + 6));
          lStack_270 = local_278 + (longlong)*(int *)(lVar10 + 8 + *(longlong *)(param_3 + 6)) * 8;
          local_268 = local_278;
          lStack_260 = lStack_270;
          cVar5 = FUN_145040f90();
          if (cVar5 == '\0') goto LAB_145040f37;
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar9 < (int)fVar16);
      }
      *param_1 = 0;
      return param_1;
    }
    FUN_144bde670(&local_278,local_258,0x200);
    FUN_144be6160(&local_278,
                  "If erosion is enabled, the minimum character radius must be at least five times the quantum."
                 );
    uVar14 = 0x3a;
    uVar6 = 0xc6a5712;
  }
  else {
    FUN_144bde670(&local_278,local_258,0x200);
    FUN_144be6160(&local_278,"The minimum character radius must be nonnegative.");
    uVar14 = 0x32;
    uVar6 = 0x7cc531b;
  }
  FUN_144bfc0d0(uVar6,local_258,
                "NavMesh\\Generation\\Erosion\\hkaiNavMeshGenerationErosionInternalSettings.cpp",
                uVar14);
  FUN_144bde6e0(&local_278);
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 145040f50 FUN_145040f50 body=61 status=ok
// SIG undefined FUN_145040f50(void)

longlong FUN_145040f50(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_1450408b0(local_res8,param_2,param_1);
  return param_1;
}



// FUNCTION 145040f90 FUN_145040f90 body=369 status=ok
// SIG undefined FUN_145040f90(void)

undefined8 FUN_145040f90(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [512];
  
  if ((int)(param_1[1] - *param_1 >> 3) < 3) {
    FUN_144bde670(&local_218,local_208,0x200);
    FUN_144be6160(&local_218,"Each generation bound must have at least three vertices.");
    uVar3 = 0x15;
    uVar2 = 0x443c2f61;
  }
  else {
    local_218 = (undefined4)*param_1;
    uStack_214 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_210 = (undefined4)param_1[1];
    uStack_20c = *(undefined4 *)((longlong)param_1 + 0xc);
    cVar1 = FUN_144d11410(&local_218);
    if (cVar1 == '\0') {
      FUN_144bde670(&local_218,local_208,0x200);
      FUN_144be6160(&local_218,"A generation bound must not contain zero-length edges.");
      uVar3 = 0x1b;
      uVar2 = 0x430a6476;
    }
    else {
      local_218 = (undefined4)*param_1;
      uStack_214 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_210 = (undefined4)param_1[1];
      uStack_20c = *(undefined4 *)((longlong)param_1 + 0xc);
      cVar1 = FUN_144d11470(&local_218);
      if (cVar1 == '\0') {
        FUN_144bde670(&local_218,local_208,0x200);
        FUN_144be6160(&local_218,"A generation bound must not be self-intersecting.");
        uVar3 = 0x21;
        uVar2 = 0x7a178a75;
      }
      else {
        local_218 = (undefined4)*param_1;
        uStack_214 = *(undefined4 *)((longlong)param_1 + 4);
        uStack_210 = (undefined4)param_1[1];
        uStack_20c = *(undefined4 *)((longlong)param_1 + 0xc);
        cVar1 = FUN_144d11620(&local_218);
        if (cVar1 != '\0') {
          return 1;
        }
        FUN_144bde670(&local_218,local_208,0x200);
        FUN_144be6160(&local_218,"A generation bound must wind CCW around the up vector.");
        uVar3 = 0x27;
        uVar2 = 0x62e92a53;
      }
    }
  }
  FUN_144bfc0d0(uVar2,local_208,
                "NavMesh\\Generation\\Erosion\\hkaiNavMeshGenerationErosionInternalSettings.cpp",
                uVar3);
  FUN_144bde6e0(&local_218);
  return 0;
}



// FUNCTION 145041110 FUN_145041110 body=459 status=ok
// SIG undefined FUN_145041110(void)

void FUN_145041110(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar7 = param_3;
  if (param_3 <= uVar10 && uVar10 - param_3 != 0) {
    uVar7 = uVar10;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar8 = uVar7 << 4;
  local_res20 = lVar8;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,lVar8,&local_res8);
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  local_res18 = puVar4;
  if (0 < (int)uVar2) {
    puVar9 = (undefined4 *)(lVar3 + 0xc);
    uVar6 = (ulonglong)uVar2;
    do {
      puVar1 = (undefined8 *)(puVar9 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        FUN_144cdb050(puVar4,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar4;
        puVar9[-1] = *(undefined4 *)(puVar4 + 1);
        *puVar9 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar9 = puVar9 + 4;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = (uint *)((longlong)local_res18 + 0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) << 3);
      }
      *puVar5 = 0x80000000;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5 = puVar5 + 4;
      uVar10 = uVar10 - 1;
      lVar8 = local_res20;
      param_2 = local_res10;
    } while (uVar10 != 0);
  }
  if (lVar8 + 0x10U <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar7 = uVar7 + 1;
    if (lVar8 + 0x10U <= local_res8) {
      uVar7 = uVar7 + (local_res8 - lVar8 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 4);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 1450412e0 FUN_1450412e0 body=35 status=ok
// SIG undefined FUN_1450412e0(void)

longlong FUN_1450412e0(ushort *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_1;
  if ((*param_1 < param_1[3]) && (uVar2 = (ulonglong)param_1[1], param_1[1] < param_1[4])) {
    uVar1 = param_1[2];
    uVar2 = (ulonglong)uVar1;
    if (uVar1 < param_1[5]) {
      return (ulonglong)(byte)(uVar1 >> 8) << 8;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 145041310 FUN_145041310 body=27 status=ok
// SIG undefined FUN_145041310(void)

undefined1 FUN_145041310(longlong param_1)

{
  if (((*(short *)(param_1 + 0x20) != 0) && (*(short *)(param_1 + 0x22) != 0)) &&
     (*(short *)(param_1 + 0x24) != 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 145041330 FUN_145041330 body=895 status=ok
// SIG undefined FUN_145041330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145041330(longlong param_1,longlong param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar13;
  uint uVar14;
  undefined1 auVar11 [16];
  uint uVar15;
  undefined1 auVar12 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  float fVar26;
  undefined8 local_res8;
  ulonglong local_res18;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  
  _local_78 = *(undefined1 (*) [16])(param_1 + 0x20);
  _local_68 = *(undefined1 (*) [16])(param_1 + 0x30);
  cVar3 = FUN_144b3e610(local_78);
  if (cVar3 == '\0') {
    uVar5 = 0;
    local_88 = 0;
    uStack_80 = 0xffffffff00000000;
    uVar6 = uVar5;
    uVar8 = uVar5;
    if (0 < *(int *)(param_1 + 0xe0)) {
      do {
        local_res8 = (ulonglong)*(uint *)(uVar6 + 4 + *(longlong *)(param_1 + 0xd8));
        local_res18 = (ulonglong)*(uint *)(uVar6 + *(longlong *)(param_1 + 0xd8));
        FUN_144f5fe30(&local_88,&PTR_vftable_14c6e47a0,&local_res18,&local_res8);
        uVar7 = (int)uVar8 + 1;
        uVar6 = uVar6 + 0xc;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 < *(int *)(param_1 + 0xe0));
    }
    uVar6 = uVar5;
    if (0 < *(int *)(param_2 + 0x30)) {
      do {
        auVar20 = *(undefined1 (*) [16])(uVar6 + *(longlong *)(param_2 + 0x28));
        local_res8 = (ulonglong)*(uint *)(param_1 + 0xcc);
        local_res18 = auVar20._8_8_ >> 0x20;
        puVar4 = (uint *)FUN_144f5fe90(&local_88,&local_res18,&local_res8);
        if ((~*puVar4 & 1) == 0) {
          lVar2 = *(longlong *)(param_2 + 0x18);
          auVar11 = minps(_local_78,*(undefined1 (*) [16])(lVar2 + (longlong)auVar20._0_4_ * 0x10));
          auVar9 = maxps(_local_68,*(undefined1 (*) [16])(lVar2 + (longlong)auVar20._0_4_ * 0x10));
          auVar11 = minps(auVar11,*(undefined1 (*) [16])(lVar2 + (longlong)auVar20._4_4_ * 0x10));
          auVar9 = maxps(auVar9,*(undefined1 (*) [16])(lVar2 + (longlong)auVar20._4_4_ * 0x10));
          _local_78 = minps(auVar11,*(undefined1 (*) [16])(lVar2 + (longlong)auVar20._8_4_ * 0x10));
          _local_68 = maxps(auVar9,*(undefined1 (*) [16])(lVar2 + (longlong)auVar20._8_4_ * 0x10));
        }
        uVar7 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar7;
        uVar6 = uVar6 + 0x10;
      } while ((int)uVar7 < *(int *)(param_2 + 0x30));
    }
    FUN_144f5ff60(&local_88,&PTR_vftable_14c6e47a0);
    FUN_144f5fe20(&local_88);
    fVar16 = *(float *)(param_1 + 0x88);
    fVar17 = *(float *)(param_1 + 0x6c);
    auVar11._0_4_ = (float)local_78._0_4_ - fVar16;
    auVar11._4_4_ = (float)local_78._4_4_ - fVar16;
    auVar11._8_4_ = fStack_70 - fVar16;
    auVar11._12_4_ = fStack_6c - fVar16;
    auVar23._0_4_ = fVar16 + (float)local_68._0_4_;
    auVar23._4_4_ = fVar16 + (float)local_68._4_4_;
    auVar23._8_4_ = fVar16 + fStack_60;
    auVar23._12_4_ = fVar16 + fStack_5c;
    auVar20._4_4_ = fVar17;
    auVar20._0_4_ = fVar17;
    auVar20._8_4_ = fVar17;
    auVar20._12_4_ = fVar17;
    auVar20 = divps(auVar11,auVar20);
    auVar9._4_4_ = fVar17;
    auVar9._0_4_ = fVar17;
    auVar9._8_4_ = fVar17;
    auVar9._12_4_ = fVar17;
    auVar9 = divps(auVar23,auVar9);
    fVar16 = auVar20._0_4_;
    fVar18 = auVar20._4_4_;
    fVar19 = auVar20._8_4_;
    fVar21 = auVar20._12_4_;
    fVar22 = auVar9._0_4_;
    fVar24 = auVar9._4_4_;
    fVar25 = auVar9._8_4_;
    fVar26 = auVar9._12_4_;
    if (*(char *)(param_1 + 0x8c) == '\0') {
      uVar7 = (int)fVar16 ^ -(uint)(2.1474836e+09 <= fVar16);
      uVar13 = (int)fVar18 ^ -(uint)(2.1474836e+09 <= fVar18);
      uVar14 = (int)fVar19 ^ -(uint)(2.1474836e+09 <= fVar19);
      uVar15 = (int)fVar21 ^ -(uint)(2.1474836e+09 <= fVar21);
      local_78._0_4_ =
           (float)(int)(uVar7 + 1 & -(uint)(0.0 < fVar16) | ~-(uint)(0.0 < fVar16) & uVar7) * fVar17
      ;
      local_78._4_4_ =
           (float)(int)(uVar13 + 1 & -(uint)(0.0 < fVar18) | ~-(uint)(0.0 < fVar18) & uVar13) *
           fVar17;
      fStack_70 = (float)(int)(uVar14 + 1 & -(uint)(0.0 < fVar19) | ~-(uint)(0.0 < fVar19) & uVar14)
                  * fVar17;
      fStack_6c = (float)(int)(uVar15 + 1 & -(uint)(0.0 < fVar21) | ~-(uint)(0.0 < fVar21) & uVar15)
                  * fVar17;
      uVar7 = (int)fVar22 ^ -(uint)(2.1474836e+09 <= fVar22);
      uVar13 = (int)fVar24 ^ -(uint)(2.1474836e+09 <= fVar24);
      uVar14 = (int)fVar25 ^ -(uint)(2.1474836e+09 <= fVar25);
      uVar15 = (int)fVar26 ^ -(uint)(2.1474836e+09 <= fVar26);
      local_68._0_4_ =
           (float)(int)(uVar7 - 1 & -(uint)(fVar22 < 0.0) | ~-(uint)(fVar22 < 0.0) & uVar7) * fVar17
      ;
      local_68._4_4_ =
           (float)(int)(uVar13 - 1 & -(uint)(fVar24 < 0.0) | ~-(uint)(fVar24 < 0.0) & uVar13) *
           fVar17;
      fStack_60 = (float)(int)(uVar14 - 1 & -(uint)(fVar25 < 0.0) | ~-(uint)(fVar25 < 0.0) & uVar14)
                  * fVar17;
      fStack_5c = (float)(int)(uVar15 - 1 & -(uint)(fVar26 < 0.0) | ~-(uint)(fVar26 < 0.0) & uVar15)
                  * fVar17;
    }
    else {
      uVar7 = (int)fVar16 ^ -(uint)(2.1474836e+09 <= fVar16);
      uVar13 = (int)fVar18 ^ -(uint)(2.1474836e+09 <= fVar18);
      uVar14 = (int)fVar19 ^ -(uint)(2.1474836e+09 <= fVar19);
      uVar15 = (int)fVar21 ^ -(uint)(2.1474836e+09 <= fVar21);
      local_78._0_4_ =
           (float)(int)(uVar7 - 1 & -(uint)(fVar16 < 0.0) | ~-(uint)(fVar16 < 0.0) & uVar7) * fVar17
      ;
      local_78._4_4_ =
           (float)(int)(uVar13 - 1 & -(uint)(fVar18 < 0.0) | ~-(uint)(fVar18 < 0.0) & uVar13) *
           fVar17;
      fStack_70 = (float)(int)(uVar14 - 1 & -(uint)(fVar19 < 0.0) | ~-(uint)(fVar19 < 0.0) & uVar14)
                  * fVar17;
      fStack_6c = (float)(int)(uVar15 - 1 & -(uint)(fVar21 < 0.0) | ~-(uint)(fVar21 < 0.0) & uVar15)
                  * fVar17;
      uVar7 = (int)fVar22 ^ -(uint)(2.1474836e+09 <= fVar22);
      uVar13 = (int)fVar24 ^ -(uint)(2.1474836e+09 <= fVar24);
      uVar14 = (int)fVar25 ^ -(uint)(2.1474836e+09 <= fVar25);
      uVar15 = (int)fVar26 ^ -(uint)(2.1474836e+09 <= fVar26);
      local_68._0_4_ =
           (float)(int)(uVar7 + 1 & -(uint)(0.0 < fVar22) | ~-(uint)(0.0 < fVar22) & uVar7) * fVar17
      ;
      local_68._4_4_ =
           (float)(int)(uVar13 + 1 & -(uint)(0.0 < fVar24) | ~-(uint)(0.0 < fVar24) & uVar13) *
           fVar17;
      fStack_60 = (float)(int)(uVar14 + 1 & -(uint)(0.0 < fVar25) | ~-(uint)(0.0 < fVar25) & uVar14)
                  * fVar17;
      fStack_5c = (float)(int)(uVar15 + 1 & -(uint)(0.0 < fVar26) | ~-(uint)(0.0 < fVar26) & uVar15)
                  * fVar17;
    }
  }
  else {
  }
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    local_88._0_4_ = _DAT_14c6dad90;
    local_88._4_4_ = fRam000000014c6dad94;
    uStack_80._0_4_ = fRam000000014c6dad98;
    uStack_80._4_4_ = fRam000000014c6dad9c;
  }
  else {
    local_88._0_4_ = 0.0;
    local_88._4_4_ = 0.0;
    uStack_80._0_4_ = 0.0;
    uStack_80._4_4_ = 0.0;
  }
  auVar12._4_4_ = uVar1;
  auVar12._0_4_ = uVar1;
  auVar12._8_4_ = uVar1;
  auVar12._12_4_ = uVar1;
  auVar20 = divps(_DAT_14c6daca0,auVar12);
  fVar16 = ((float)local_68._0_4_ - (float)local_78._0_4_) * _DAT_14c6dad90 * _DAT_14c6dacb0;
  fVar17 = ((float)local_68._4_4_ - (float)local_78._4_4_) * fRam000000014c6dad94 *
           fRam000000014c6dacb4;
  fVar18 = (fStack_60 - fStack_70) * fRam000000014c6dad98 * fRam000000014c6dacb8;
  fVar19 = (fStack_5c - fStack_6c) * fRam000000014c6dad9c * fRam000000014c6dacbc;
  *param_3 = (float)local_78._0_4_;
  param_3[1] = (float)local_78._4_4_;
  param_3[2] = fStack_70;
  param_3[3] = fStack_6c;
  param_3[4] = (float)local_68._0_4_;
  param_3[5] = (float)local_68._4_4_;
  param_3[6] = fStack_60;
  param_3[7] = fStack_5c;
  local_88._0_4_ = fVar16 * auVar20._0_4_ + (float)local_88;
  local_88._4_4_ = fVar17 * auVar20._4_4_ + local_88._4_4_;
  uStack_80._0_4_ = fVar18 * auVar20._8_4_ + (float)uStack_80;
  uStack_80._4_4_ = fVar19 * auVar20._12_4_ + uStack_80._4_4_;
  auVar10._0_4_ = (int)(float)local_88 ^ -(uint)(2.1474836e+09 <= (float)local_88);
  auVar10._4_4_ = (int)local_88._4_4_ ^ -(uint)(2.1474836e+09 <= local_88._4_4_);
  auVar10._8_4_ = (int)(float)uStack_80 ^ -(uint)(2.1474836e+09 <= (float)uStack_80);
  auVar10._12_4_ = (int)uStack_80._4_4_ ^ -(uint)(2.1474836e+09 <= uStack_80._4_4_);
  auVar20 = packssdw(auVar10,auVar10);
  local_res8._0_2_ = auVar20._0_2_;
  *(undefined2 *)(param_3 + 8) = (undefined2)local_res8;
  local_res8._2_2_ = auVar20._2_2_;
  *(undefined2 *)((longlong)param_3 + 0x22) = local_res8._2_2_;
  local_res8._4_2_ = auVar20._4_2_;
  *(undefined2 *)(param_3 + 9) = local_res8._4_2_;
  return;
}



// FUNCTION 1450416b0 FUN_1450416b0 body=622 status=ok
// SIG undefined FUN_1450416b0(void)

void FUN_1450416b0(ushort *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  short *psVar16;
  longlong lVar17;
  int local_res20;
  int local_64;
  longlong local_58;
  
  uVar14 = *param_1;
  uVar1 = *(ushort *)(param_2 + 0x20);
  uVar2 = *(ushort *)(param_2 + 0x22);
  uVar3 = *(ushort *)(param_2 + 0x24);
  if (((uVar14 == 0) || (uVar15 = param_1[1], uVar15 == 0)) || (uVar9 = param_1[2], uVar9 == 0)) {
    uVar14 = 1;
    uVar9 = 1;
    uVar15 = 1;
  }
  else {
    uVar14 = (ushort)((int)((uVar1 - 1) + (uint)uVar14) / (int)(uint)uVar14);
    uVar15 = (ushort)((int)((uVar2 - 1) + (uint)uVar15) / (int)(uint)uVar15);
    uVar9 = (ushort)((int)((uVar3 - 1) + (uint)uVar9) / (int)(uint)uVar9);
  }
  iVar12 = (uint)uVar9 * (uint)uVar15 * (uint)uVar14;
  uVar13 = (uint)uVar9;
  sVar6 = (short)((int)((uVar3 - 1) + (uint)uVar9) / (int)uVar13);
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar12) {
    FUN_145044550(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar12);
  }
  if (((int)param_3[1] < iVar12) || (iVar12 < (int)param_3[1])) {
    *(int *)(param_3 + 1) = iVar12;
  }
  local_64 = 0;
  if (uVar14 != 0) {
    local_58 = 0;
    do {
      local_res20 = 0;
      if (uVar15 != 0) {
        do {
          sVar7 = (short)((int)((uVar1 - 1) + (uint)uVar14) / (int)(uint)uVar14);
          iVar12 = 0;
          if (uVar13 != 0) {
            uVar4 = ((short)local_64 + 1) * sVar7;
            sVar8 = (short)((int)((uVar2 - 1) + (uint)uVar15) / (int)(uint)uVar15);
            uVar5 = ((short)local_res20 + 1) * sVar8;
            lVar17 = local_58 * 0xc;
            local_58 = local_58 + (ulonglong)uVar9;
            do {
              psVar16 = (short *)(*param_3 + lVar17);
              uVar10 = uVar1;
              if (uVar4 <= uVar1) {
                uVar10 = uVar4;
              }
              psVar16[3] = uVar10;
              uVar10 = uVar2;
              if (uVar5 <= uVar2) {
                uVar10 = uVar5;
              }
              *psVar16 = (short)local_64 * sVar7;
              psVar16[4] = uVar10;
              psVar16[1] = (short)local_res20 * sVar8;
              psVar16[2] = (short)iVar12 * sVar6;
              uVar10 = ((short)iVar12 + 1) * sVar6;
              uVar11 = uVar3;
              if (uVar10 <= uVar3) {
                uVar11 = uVar10;
              }
              lVar17 = lVar17 + 0xc;
              iVar12 = iVar12 + 1;
              psVar16[5] = uVar11;
            } while (iVar12 < (int)uVar13);
          }
          local_res20 = local_res20 + 1;
        } while (local_res20 < (int)(uint)uVar15);
      }
      local_64 = local_64 + 1;
    } while (local_64 < (int)(uint)uVar14);
  }
  return;
}



// FUNCTION 145041920 FUN_145041920 body=1608 status=ok
// SIG undefined FUN_145041920(void)

void FUN_145041920(longlong param_1,undefined8 param_2,ushort *param_3,float *param_4,
                  undefined8 param_5,undefined ***param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int local_res18 [2];
  char *local_4c8;
  code *pcStack_4c0;
  int *local_4b8;
  int local_4a8;
  int local_4a4;
  int local_4a0;
  undefined **local_498;
  undefined8 local_490;
  code *pcStack_488;
  int *local_480;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  undefined1 local_458 [144];
  longlong local_3c8;
  undefined4 local_3c0;
  uint local_3bc;
  longlong local_3b8;
  undefined4 local_3b0;
  uint local_3ac;
  undefined8 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  undefined1 local_2a8 [8];
  int local_2a0;
  int local_290;
  undefined1 local_1e8 [80];
  undefined1 local_198 [368];
  
  local_498 = hkaiNavVolumeGenerationUtils::ProgressCallback::vftable;
  pppuVar6 = &local_498;
  if (param_6 != (undefined ***)0x0) {
    pppuVar6 = param_6;
  }
  if (param_3[3] <= *param_3) {
    return;
  }
  if (param_3[4] <= param_3[1]) {
    return;
  }
  if (param_3[2] < param_3[5]) {
    local_4c8 = "Ttvoxelize";
    pcStack_4c0 = (code *)0x149c2250a;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    cVar3 = *(char *)(lVar1 + 0x114);
    if (cVar3 == '\0') {
      __dyn_tls_on_demand_init();
      cVar3 = *(char *)(lVar1 + 0x114);
    }
    lVar4 = *(longlong *)(lVar1 + 0xf0);
    if (lVar4 == 0) {
      if (cVar3 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = FUN_144b3f4a0();
      *(longlong *)(lVar1 + 0xf0) = lVar4;
    }
    if (*(longlong *)(lVar4 + 0x3e0) != 0) {
      FUN_144b3f370(*(longlong *)(lVar4 + 0x3e0),&local_4c8);
    }
    local_4a8 = (uint)param_3[3] - (uint)*param_3;
    local_4a4 = (uint)param_3[4] - (uint)param_3[1];
    local_4a0 = (uint)param_3[5] - (uint)param_3[2];
    local_468 = *param_4;
    fStack_464 = param_4[1];
    fStack_460 = param_4[2];
    fStack_45c = param_4[3];
    auVar9._0_4_ = (float)*param_3 + 0.0;
    auVar9._4_4_ = (float)param_3[1] + 0.0;
    auVar9._8_4_ = (float)param_3[2] + 0.0;
    auVar9._12_4_ = 0;
    auVar7._0_4_ = (float)param_3[3] + 0.0;
    auVar7._4_4_ = (float)param_3[4] + 0.0;
    auVar7._8_4_ = (float)param_3[5] + 0.0;
    auVar7._12_4_ = 0;
    auVar8._4_4_ = 0;
    auVar8._0_4_ = (float)*(ushort *)(param_4 + 8) + 0.0;
    auVar8._8_4_ = (float)*(ushort *)(param_4 + 9) + 0.0;
    auVar8._12_4_ = 0x3f800000;
    auVar9 = divps(auVar9,auVar8);
    auVar2._4_4_ = 0;
    auVar2._0_4_ = (float)*(ushort *)(param_4 + 8) + 0.0;
    auVar2._8_4_ = (float)*(ushort *)(param_4 + 9) + 0.0;
    auVar2._12_4_ = 0x3f800000;
    auVar8 = divps(auVar7,auVar2);
    local_478 = auVar9._0_4_ * (param_4[4] - local_468) + local_468;
    fStack_474 = auVar9._4_4_ * (param_4[5] - fStack_464) + fStack_464;
    fStack_470 = auVar9._8_4_ * (param_4[6] - fStack_460) + fStack_460;
    fStack_46c = auVar9._12_4_ * (param_4[7] - fStack_45c) + fStack_45c;
    local_468 = auVar8._0_4_ * (param_4[4] - local_468) + local_468;
    fStack_464 = auVar8._4_4_ * (param_4[5] - fStack_464) + fStack_464;
    fStack_460 = auVar8._8_4_ * (param_4[6] - fStack_460) + fStack_460;
    fStack_45c = auVar8._12_4_ * (param_4[7] - fStack_45c) + fStack_45c;
    FUN_14533dc90(local_2a8);
    FUN_145341ac0(local_458);
    local_3c8 = 0;
    local_3c0 = 0;
    local_3bc = 0x80000000;
    local_3b8 = 0;
    local_3b0 = 0;
    local_3ac = 0x80000000;
    local_388 = 0;
    local_380 = 0;
    local_37c = 0x80000000;
    local_318 = 0;
    local_310 = 0;
    local_30c = 0x80000000;
    FUN_1453431d0(local_458,param_1,param_2,&local_478,&local_4a8);
    FUN_145343940(local_458);
    FUN_145343f60(local_458,local_2a8);
    if ((3 < DAT_14c79b908) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        param_6._0_4_ = local_2a0 - local_290;
        uVar5 = FUN_144bdc640(local_1e8);
        local_4c8 = (char *)0x1;
        pcStack_4c0 = FUN_144f50970;
        local_4b8 = (int *)&param_6;
        local_490 = 1;
        pcStack_488 = FUN_144f50970;
        local_480 = local_4b8;
        lVar4 = FUN_144bdc480(uVar5,"Voxelize - {} cells",&local_490,0);
        *(char **)(lVar4 + 0x38) = "NavVolume\\hkaiNavVolumeGenerationUtils.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0x151;
        FUN_144bdc690(local_1e8);
      }
      else {
        local_res18[0] = local_2a0 - local_290;
        uVar5 = FUN_144bdc810(local_198,&DAT_14c79b8b8,4);
        local_4c8 = (char *)0x1;
        pcStack_4c0 = FUN_144f50970;
        local_4b8 = local_res18;
        local_490 = 1;
        pcStack_488 = FUN_144f50970;
        local_480 = local_4b8;
        lVar4 = FUN_144bdc480(uVar5,"Voxelize - {} cells",&local_490,0);
        *(char **)(lVar4 + 0x38) = "NavVolume\\hkaiNavVolumeGenerationUtils.cpp";
        *(undefined8 *)(lVar4 + 0x40) = 0x151;
        FUN_144bdc8a0(local_198);
      }
    }
    (*(code *)(*pppuVar6)[2])(pppuVar6,local_458);
    cVar3 = *(char *)(lVar1 + 0x114);
    if (cVar3 == '\0') {
      __dyn_tls_on_demand_init();
      cVar3 = *(char *)(lVar1 + 0x114);
    }
    lVar4 = *(longlong *)(lVar1 + 0xf0);
    if (lVar4 == 0) {
      if (cVar3 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = FUN_144b3f4a0();
      *(longlong *)(lVar1 + 0xf0) = lVar4;
    }
    if (*(longlong *)(lVar4 + 0x3e0) != 0) {
      local_4c8 = "Et";
      pcStack_4c0 = (code *)&DAT_149981766;
      FUN_144b3f260(*(longlong *)(lVar4 + 0x3e0),&local_4c8);
    }
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar1 + 0xf0);
    if (lVar4 == 0) {
      if (*(char *)(lVar1 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar4 = FUN_144b3f4a0();
      *(longlong *)(lVar1 + 0xf0) = lVar4;
    }
    lVar1 = *(longlong *)(lVar4 + 0x3e0);
    local_4c8 = "Ttmerge";
    pcStack_4c0 = (code *)0x149c2255f;
    if (lVar1 == 0) {
      FUN_145041f70(param_1 + 0x90,local_2a8,pppuVar6);
    }
    else {
      local_4c8 = "Ttmerge";
      pcStack_4c0 = (code *)0x149c2255f;
      FUN_144b3f370(lVar1,&local_4c8);
      FUN_145041f70(param_1 + 0x90,local_2a8,pppuVar6);
      local_4c8 = "Et";
      pcStack_4c0 = (code *)&DAT_149981766;
      FUN_144b3f260(lVar1,&local_4c8);
    }
    FUN_145042170(local_2a8,&local_478,param_5);
    thunk_FUN_144c4d4f0(param_5,1);
    FUN_145043fd0(&local_318);
    FUN_145043fd0(&local_388);
    local_3b0 = 0;
    if ((-1 < (int)local_3ac) && (local_3b8 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_3b8,(ulonglong)(local_3ac & 0x7fffffff) << 5);
    }
    local_3b8 = 0;
    local_3ac = 0x80000000;
    local_3c0 = 0;
    if ((-1 < (int)local_3bc) && (local_3c8 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_3c8,(ulonglong)(local_3bc & 0x7fffffff) * 0x24);
    }
    local_3c8 = 0;
    local_3bc = 0x80000000;
    FUN_145341b00(local_458);
    FUN_14533dd70(local_2a8);
    return;
  }
  return;
}



// FUNCTION 145041f70 FUN_145041f70 body=508 status=ok
// SIG undefined FUN_145041f70(void)

void FUN_145041f70(undefined4 *param_1,longlong param_2,undefined ***param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined ***pppuVar9;
  int iVar10;
  int local_res8;
  undefined **local_res10;
  char *local_58;
  char *local_50;
  undefined *local_48;
  undefined *local_40;
  
  local_res10 = hkaiNavVolumeGenerationUtils::ProgressCallback::vftable;
  pppuVar9 = &local_res10;
  if (param_3 != (undefined ***)0x0) {
    pppuVar9 = param_3;
  }
  *(undefined4 *)(param_2 + 0x8c) = *param_1;
  *(undefined4 *)(param_2 + 0x90) = param_1[1];
  *(undefined1 *)(param_2 + 0x94) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)(param_2 + 0x80) = param_1[6];
  uVar1 = param_1[5];
  *(undefined4 *)(param_2 + 0x84) = uVar1;
  *(undefined4 *)(param_2 + 0x88) = uVar1;
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_145340210(param_2);
  }
  if (param_1[3] != 0) {
    iVar8 = 0;
    iVar10 = 0;
    local_res8 = 0x7fffffff;
    if (0 < (int)param_1[4]) {
      do {
        pvVar3 = ThreadLocalStoragePointer;
        uVar7 = (ulonglong)_tls_index;
        cVar4 = (*(code *)(*pppuVar9)[3])(pppuVar9,iVar8,param_2);
        if (cVar4 == '\0') {
          return;
        }
        lVar2 = *(longlong *)((longlong)pvVar3 + uVar7 * 8);
        if (*(char *)(lVar2 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar6 = *(longlong *)(lVar2 + 0xf0);
        if (lVar6 == 0) {
          if (*(char *)(lVar2 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar6 = FUN_144b3f4a0();
          *(longlong *)(lVar2 + 0xf0) = lVar6;
        }
        lVar2 = *(longlong *)(lVar6 + 0x3e0);
        if (lVar2 == 0) {
          FUN_14533ee70(param_2);
          FUN_14533dc60(param_2 + 0x78);
        }
        else {
          local_58 = "TtAnnealer Update";
          local_50 = "";
          FUN_144b3f370(lVar2,&local_58);
          FUN_14533ee70(param_2);
          FUN_14533dc60(param_2 + 0x78);
          local_48 = &DAT_149981764;
          local_40 = &DAT_149981766;
          FUN_144b3f260(lVar2,&local_48);
        }
        iVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x18);
        if (iVar5 < local_res8) {
          iVar10 = 0;
          local_res8 = iVar5;
        }
        else {
          iVar10 = iVar10 + 1;
          if ((int)param_1[3] <= iVar10) break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_1[4]);
    }
    (*(code *)(*pppuVar9)[4])(pppuVar9,param_2);
  }
  return;
}



// FUNCTION 145042170 FUN_145042170 body=890 status=ok
// SIG undefined FUN_145042170(void)

void FUN_145042170(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong local_res20;
  undefined1 uStack_8d;
  undefined2 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68 [2];
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_50;
  
  FUN_144c4d370(param_3,param_2,0);
  FUN_144c4d430(param_3,(int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c),
                (int)param_1[0x14],1);
  plVar13 = (longlong *)(param_3 + 0x18);
  *(undefined4 *)(param_3 + 0x20) = 0;
  local_60 = plVar13;
  if ((-1 < (int)*(uint *)(param_3 + 0x24)) && (*plVar13 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*plVar13,
               (ulonglong)(*(uint *)(param_3 + 0x24) & 0x7fffffff) * 0x18);
  }
  plVar1 = (longlong *)(param_3 + 0x28);
  *plVar13 = 0;
  *(undefined4 *)(param_3 + 0x24) = 0x80000000;
  *(undefined4 *)(param_3 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_3 + 0x34)) && (*plVar1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*plVar1,
               (ulonglong)(*(uint *)(param_3 + 0x34) & 0x7fffffff) << 3);
  }
  iVar16 = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_3 + 0x34) = 0x80000000;
  iVar10 = 0;
  iVar11 = (int)param_1[1];
  local_80 = 0;
  local_78 = 0;
  local_74 = 0xffffffff;
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      puVar9 = *(undefined2 **)(lVar14 + *param_1);
      if (-1 < *(int *)(puVar9 + 0xe)) {
        iVar11 = *(int *)(param_3 + 0x20) + 1;
        uVar4 = puVar9[0x18];
        uVar8 = *(undefined4 *)(puVar9 + 0xc);
        uVar5 = puVar9[4];
        local_58 = CONCAT22(puVar9[2],*puVar9);
        local_50 = CONCAT22(puVar9[8],puVar9[6]);
        local_res20 = CONCAT62(local_res20._2_6_,puVar9[10]);
        uStack_8d = (undefined1)((uint)uVar8 >> 0x18);
        uVar12 = puVar9[10];
        if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar11) {
          FUN_144feb520(plVar13,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          uVar12 = (undefined2)local_res20;
        }
        puVar2 = (undefined4 *)(*plVar13 + (longlong)*(int *)(param_3 + 0x20) * 0x18);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = local_58;
          puVar2[2] = local_50;
          *(undefined2 *)(puVar2 + 3) = uVar12;
          *(undefined2 *)(puVar2 + 1) = uVar5;
          *(undefined2 *)((longlong)puVar2 + 6) = uVar4;
          puVar2[4] = 0xffffffff;
          puVar2[5] = uVar8;
        }
        local_res20 = (longlong)iVar16;
        *(int *)(param_3 + 0x20) = iVar11;
        local_88 = puVar9;
        FUN_144f5fe30(&local_80,&PTR_vftable_14c6e47a0,&local_88,&local_res20);
        iVar16 = iVar16 + 1;
      }
      iVar11 = (int)param_1[1];
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + 8;
    } while (iVar10 < iVar11);
  }
  iVar10 = 0;
  if (0 < iVar11) {
    puVar9 = (undefined2 *)0x0;
    local_88 = (undefined2 *)0x0;
    lVar14 = 0;
    do {
      lVar6 = *(longlong *)(lVar14 + *param_1);
      if (-1 < *(int *)(lVar6 + 0x1c)) {
        iVar11 = 0;
        *(undefined4 *)((longlong)puVar9 + *plVar13 + 0x10) = *(undefined4 *)(param_3 + 0x30);
        if (0 < *(int *)(lVar6 + 0x30)) {
          lVar15 = 0;
          do {
            local_70 = *(undefined8 *)(lVar15 + *(longlong *)(lVar6 + 0x28));
            piVar7 = (int *)FUN_144f61e90(&local_80,&local_res20,&local_70,local_68);
            uVar8 = 0xffffffff;
            if (-1 < *piVar7) {
              uVar8 = local_68[0];
            }
            iVar16 = *(int *)(param_3 + 0x30) + 1;
            if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < iVar16) {
              FUN_144feb430(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar16);
            }
            puVar3 = (undefined8 *)(*plVar1 + (longlong)*(int *)(param_3 + 0x30) * 8);
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = CONCAT44(uVar8,CONCAT13(uStack_8d,0xffff));
            }
            iVar11 = iVar11 + 1;
            *(int *)(param_3 + 0x30) = iVar16;
            lVar15 = lVar15 + 8;
            puVar9 = local_88;
            plVar13 = local_60;
          } while (iVar11 < *(int *)(lVar6 + 0x30));
        }
        puVar9 = puVar9 + 0xc;
        local_88 = puVar9;
      }
      iVar10 = iVar10 + 1;
      lVar14 = lVar14 + 8;
    } while (iVar10 < (int)param_1[1]);
  }
  FUN_144f5ff60(&local_80,&PTR_vftable_14c6e47a0);
  FUN_144f5fe20(&local_80);
  return;
}



// FUNCTION 1450424f0 FUN_1450424f0 body=2160 status=ok
// SIG undefined FUN_1450424f0(void)

void FUN_1450424f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  longlong lVar14;
  int *piVar15;
  short *psVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  int local_328;
  uint local_324;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  longlong local_2f8;
  int *local_2f0;
  longlong local_2e8;
  uint local_2e0;
  uint local_2dc;
  longlong local_2d8;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  longlong *local_2c0;
  int iStack_2b8;
  uint uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined1 uStack_2a4;
  undefined3 uStack_2a3;
  longlong local_2a0;
  ulonglong local_298;
  longlong local_290;
  char *local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  longlong local_260;
  longlong local_258;
  undefined1 local_248 [520];
  
  uVar24 = 0;
  uVar30 = 0;
  lVar21 = (longlong)(int)param_2[1];
  local_2c8 = 0;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_288 = (char *)(lVar14 + 0x114);
  local_324 = 0;
  if (*local_288 == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar19 = (longlong *)(lVar14 + 0xf0);
  lVar14 = *plVar19;
  local_280 = plVar19;
  if (lVar14 == 0) {
    if (*local_288 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *plVar19 = lVar14;
  }
  lVar22 = lVar21 * 4;
  uVar20 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  if (*(longlong *)(uVar20 + 8) != 0) {
    uVar20 = uVar24;
  }
  local_2f8 = lVar22;
  local_2a0 = lVar21;
  local_298 = uVar20;
  local_290 = lVar22;
  if (uVar20 == 0) {
    piVar15 = (int *)(*DAT_14c787670)(1,&local_2f8,0x40);
  }
  else {
    local_320 = lVar22 + 0x3fU & 0xffffffffffffffc0;
    if (local_320 <= *(ulonglong *)(uVar20 + 0x28)) {
      piVar15 = *(int **)(uVar20 + 0x38);
      local_2f0 = piVar15;
      if ((longlong)piVar15 + local_320 <= *(ulonglong *)(uVar20 + 0x40)) {
        *(ulonglong *)(uVar20 + 0x38) = (longlong)piVar15 + local_320;
        goto LAB_145042613;
      }
    }
    piVar15 = (int *)FUN_144b454a0(uVar20,&local_320);
  }
LAB_145042613:
  uVar17 = uVar24;
  piVar23 = piVar15;
  uVar27 = uVar24;
  uVar29 = uVar24;
  uVar31 = uVar24;
  local_2f0 = piVar15;
  if (0 < (int)param_2[1]) {
    do {
      lVar14 = *param_2;
      *piVar23 = (int)uVar31;
      uVar25 = (int)uVar27 + 1;
      uVar30 = (int)uVar31 + *(int *)(uVar17 + 0x20 + lVar14);
      local_324 = (int)uVar29 + *(int *)(uVar17 + 0x30 + lVar14);
      uVar17 = uVar17 + 0xe0;
      piVar23 = piVar23 + 1;
      uVar27 = (ulonglong)uVar25;
      uVar29 = (ulonglong)local_324;
      uVar31 = (ulonglong)uVar30;
    } while ((int)uVar25 < (int)param_2[1]);
    local_2c8 = uVar30;
    if (0x3fffff < (int)uVar30) {
      FUN_144bde670(&local_318,local_248,0x200);
      FUN_144be6160(&local_318,
                    "Nav volume generation produced more than HKAI_MAX_INDEX cells and cannot continue. An empty nav volume will be returned. Decrease the generation bounds or increase the cell width in hkaiNavVolumeGenerationSettings."
                   );
      FUN_144bfc0d0(0x6a26645c,local_248,"NavVolume\\hkaiNavVolumeGenerationUtils.cpp",0x2f8);
      FUN_144bde6e0(&local_318);
      *(undefined4 *)(param_5 + 0x20) = 0;
      *(undefined4 *)(param_5 + 0x30) = 0;
      goto LAB_145042d00;
    }
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 0x80000000;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 0x80000000;
  local_318 = (char *)0x0;
  uStack_310 = (char *)0x8000000000000000;
  FUN_1450433c0(param_3,&local_318);
  local_320 = 0;
  uVar20 = uVar24;
  if (0 < (int)uStack_310) {
    do {
      uVar17 = local_320;
      lVar32 = 0;
      lVar14 = *param_3;
      local_2c0 = (longlong *)0x0;
      iStack_2b8 = 0;
      uStack_2b4 = 0x80000000;
      lVar22 = (longlong)*(int *)((longlong)local_318 + 4 + local_320 * 8);
      lVar21 = (longlong)*(int *)((longlong)local_318 + local_320 * 8);
      local_278 = *(undefined8 *)(lVar14 + lVar22 * 0xc);
      local_26c = *(undefined8 *)(lVar14 + lVar21 * 0xc);
      local_260 = lVar22 * 0xe0 + *param_2;
      local_258 = lVar21 * 0xe0 + *param_2;
      local_270 = *(undefined4 *)(lVar14 + lVar22 * 0xc + 8);
      local_264 = *(undefined4 *)(lVar14 + lVar21 * 0xc + 8);
      FUN_1450437f0(&local_278,&local_2c0);
      plVar19 = local_2c0;
      iVar28 = local_2f0[lVar22];
      iVar26 = local_2f0[lVar21];
      local_2f8 = CONCAT44(local_2f8._4_4_,iVar28);
      if (0 < iStack_2b8) {
        do {
          iVar8 = *(int *)((longlong)plVar19 + lVar32 * 8 + 4);
          uVar25 = (uint)uVar20 + 1;
          lVar14 = plVar19[lVar32];
          uVar30 = (uint)uVar20;
          if ((int)(local_2cc & 0x7fffffff) < (int)uVar25) {
            FUN_1401f86b2(&local_2d8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar25);
            uVar30 = local_2d0;
          }
          piVar15 = (int *)(local_2d8 + (longlong)(int)uVar30 * 4);
          if (piVar15 != (int *)0x0) {
            *piVar15 = iVar8 + iVar28;
          }
          uVar20 = (ulonglong)uVar25;
          uVar18 = (uint)uVar24 + 1;
          uVar30 = (uint)uVar24;
          local_2d0 = uVar25;
          if ((int)(local_2dc & 0x7fffffff) < (int)uVar18) {
            FUN_1401f86b2(&local_2e8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar18);
            uVar30 = local_2e0;
          }
          piVar15 = (int *)(local_2e8 + (longlong)(int)uVar30 * 4);
          if (piVar15 != (int *)0x0) {
            *piVar15 = (int)lVar14 + iVar26;
          }
          lVar32 = lVar32 + 1;
          uVar24 = (ulonglong)uVar18;
          uVar17 = local_320;
          iVar28 = (int)local_2f8;
          local_2e0 = uVar18;
        } while (lVar32 < iStack_2b8);
      }
      iStack_2b8 = 0;
      if ((-1 < (int)uStack_2b4) && (plVar19 != (longlong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,plVar19,(ulonglong)(uStack_2b4 & 0x7fffffff) << 3);
      }
      local_320 = uVar17 + 1;
      local_2c0 = (longlong *)0x0;
      uStack_2b4 = 0x80000000;
      uVar30 = local_2c8;
    } while ((longlong)local_320 < (longlong)(int)uStack_310);
  }
  if ((-1 < (longlong)uStack_310) && (local_318 != (char *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_318,(ulonglong)(uStack_310._4_4_ & 0x7fffffff) << 3);
  }
  FUN_144c4d370(param_5,param_4,0);
  FUN_144c4d430(param_5,*(undefined2 *)(param_4 + 0x20),*(undefined2 *)(param_4 + 0x22),
                *(undefined2 *)(param_4 + 0x24),1);
  *(undefined4 *)(param_5 + 0x20) = 0;
  if ((int)(*(uint *)(param_5 + 0x24) & 0x7fffffff) < (int)uVar30) {
    FUN_144c4d500((longlong *)(param_5 + 0x18),&PTR_vftable_14c6e47a0);
  }
  plVar19 = (longlong *)(param_5 + 0x28);
  *(undefined4 *)(param_5 + 0x30) = 0;
  local_2c0 = plVar19;
  if ((int)(*(uint *)(param_5 + 0x34) & 0x7fffffff) < (int)local_324) {
    FUN_144c4a7e0(plVar19,&PTR_vftable_14c6e47a0);
  }
  local_324 = 0;
  local_328 = 0;
  if (0 < local_2a0) {
    local_2f8 = 0;
    local_320 = 0;
    do {
      uVar24 = local_320;
      iVar28 = 0;
      psVar16 = (short *)(*param_3 + local_320);
      lVar14 = *param_2 + local_2f8;
      if (0 < *(int *)(lVar14 + 0x20)) {
        do {
          iVar26 = *(int *)(param_5 + 0x20);
          lVar32 = (longlong)iVar28;
          lVar22 = *(longlong *)(lVar14 + 0x18);
          uVar9 = *(undefined4 *)(lVar22 + 8 + lVar32 * 0x18);
          lVar21 = lVar22 + lVar32 * 0x18;
          uVar10 = *(undefined4 *)(lVar22 + lVar32 * 0x18);
          sVar3 = *(short *)(lVar21 + 4);
          sVar4 = psVar16[2];
          sVar5 = *(short *)(lVar21 + 0xc);
          sVar6 = psVar16[2];
          uVar7 = *(undefined2 *)(lVar21 + 6);
          uVar11 = *(undefined4 *)(lVar21 + 0x14);
          local_318._2_2_ = (short)((uint)uVar10 >> 0x10);
          uStack_310._2_2_ = (short)((uint)uVar9 >> 0x10);
          local_318 = (char *)CONCAT62(CONCAT42(local_318._4_4_,local_318._2_2_ + psVar16[1]),
                                       (short)uVar10 + *psVar16);
          uStack_310 = (char *)CONCAT62(CONCAT42(uStack_310._4_4_,uStack_310._2_2_ + psVar16[1]),
                                        (short)uVar9 + *psVar16);
          iVar8 = *(int *)(lVar21 + 0x10);
          puVar1 = (undefined4 *)(*(longlong *)(param_5 + 0x18) + (longlong)iVar26 * 0x18);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = (undefined4)local_318;
            puVar1[2] = (int)uStack_310;
            *(short *)(puVar1 + 3) = sVar5 + sVar6;
            *(short *)(puVar1 + 1) = sVar3 + sVar4;
            *(undefined2 *)((longlong)puVar1 + 6) = uVar7;
            puVar1[4] = iVar8 + local_328;
            puVar1[5] = uVar11;
          }
          iVar28 = iVar28 + 1;
          *(int *)(param_5 + 0x20) = iVar26 + 1;
          plVar19 = local_2c0;
        } while (iVar28 < *(int *)(lVar14 + 0x20));
      }
      iVar28 = *(int *)(lVar14 + 0x30);
      iVar26 = 0;
      if (0 < iVar28) {
        lVar21 = 0;
        do {
          lVar22 = plVar19[1];
          uVar12 = *(undefined8 *)(lVar21 + *(longlong *)(lVar14 + 0x28));
          puVar2 = (undefined8 *)(*plVar19 + (longlong)(int)lVar22 * 8);
          local_320 = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + local_324,(int)uVar12);
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = local_320;
          }
          *(int *)(plVar19 + 1) = (int)lVar22 + 1;
          iVar26 = iVar26 + 1;
          iVar28 = *(int *)(lVar14 + 0x30);
          lVar21 = lVar21 + 8;
        } while (iVar26 < iVar28);
      }
      local_324 = local_324 + *(int *)(lVar14 + 0x20);
      local_328 = local_328 + iVar28;
      local_320 = uVar24 + 0xc;
      local_2f8 = local_2f8 + 0xe0;
      local_2a0 = local_2a0 + -1;
    } while (local_2a0 != 0);
    local_2a0 = 0;
  }
  FUN_14533dc90(local_248);
  FUN_145044150(param_5,local_248,&local_2d8,&local_2e8);
  pcVar13 = local_288;
  if (*local_288 == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar19 = local_280;
  lVar14 = *local_280;
  if (lVar14 == 0) {
    if (*pcVar13 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *plVar19 = lVar14;
  }
  lVar14 = *(longlong *)(lVar14 + 0x3e0);
  local_318 = "TtchunkMerge";
  uStack_310 = "";
  if (lVar14 != 0) {
    local_318 = "TtchunkMerge";
    uStack_310 = "";
    FUN_144b3f370(lVar14,&local_318);
  }
  local_2c0 = *(longlong **)(param_1 + 0x90);
  iStack_2b8 = *(undefined4 *)(param_1 + 0x98);
  local_2b0 = *(undefined4 *)(param_1 + 0xa0);
  uStack_2ac = *(undefined4 *)(param_1 + 0xa4);
  uStack_2a8 = *(undefined4 *)(param_1 + 0xa8);
  uStack_2b4 = 0;
  _uStack_2a4 = CONCAT31((int3)((uint)*(undefined4 *)(param_1 + 0xac) >> 8),1);
  FUN_145041f70(&local_2c0,local_248,0);
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_14533f0a0(local_248,local_2b0);
  }
  if (lVar14 != 0) {
    local_318 = "Et";
    uStack_310 = "";
    FUN_144b3f260(lVar14,&local_318);
  }
  FUN_145042170(local_248,param_4,param_5);
  FUN_14533dd70(local_248);
  if ((-1 < (int)local_2dc) && (local_2e8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2e8,(ulonglong)(local_2dc & 0x7fffffff) << 2);
  }
  uVar20 = local_298;
  piVar15 = local_2f0;
  lVar22 = local_290;
  if ((-1 < (int)local_2cc) && (local_2d8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2d8,(ulonglong)(local_2cc & 0x7fffffff) << 2);
    uVar20 = local_298;
    piVar15 = local_2f0;
    lVar22 = local_290;
  }
LAB_145042d00:
  if (uVar20 == 0) {
    (*DAT_14c787678)(1,piVar15,lVar22);
  }
  else {
    uVar24 = lVar22 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar20 + 0x28) < uVar24) ||
       ((longlong)piVar15 + uVar24 != *(longlong *)(uVar20 + 0x38))) {
      FUN_144be8550(uVar20,piVar15);
    }
    else {
      *(int **)(uVar20 + 0x38) = piVar15;
      if (*(int **)(uVar20 + 0x48) == piVar15) {
        FUN_144be8430(uVar20);
      }
    }
  }
  return;
}



// FUNCTION 145042d60 FUN_145042d60 body=1381 status=ok
// SIG undefined FUN_145042d60(void)

void FUN_145042d60(longlong param_1,longlong *param_2,float param_3,float param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  int local_res8 [2];
  uint local_res10;
  uint local_res18;
  longlong local_2f8;
  uint local_2f0;
  uint local_2ec;
  longlong local_2e8;
  uint local_2e0;
  uint local_2dc;
  longlong local_2d8;
  int local_2d0;
  uint local_2cc;
  longlong local_2c8;
  uint local_2c0;
  uint local_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  longlong local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined1 local_278 [16];
  undefined1 local_268 [560];
  
  iVar12 = *(int *)(param_1 + 0x20);
  local_2d8 = 0;
  local_2d0 = 0;
  local_2cc = 0x80000000;
  if (((0 < iVar12) &&
      (FUN_141807aa8(&local_2d8,&PTR_vftable_14c6e47c0,(longlong)iVar12), local_2d0 < iVar12)) ||
     (iVar12 < local_2d0)) {
    local_2d0 = iVar12;
  }
  uVar2 = FUN_144fea960(param_1,&local_2d8);
  uVar13 = (ulonglong)(int)uVar2;
  iVar12 = 0;
  local_2e8 = 0;
  local_res18 = 0;
  local_2e0 = 0;
  local_2dc = 0x80000000;
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 0x80000000;
  local_298 = 0;
  local_res10 = uVar2;
  if (((0 < (int)uVar2) &&
      (FUN_145044680(&local_2e8,&PTR_vftable_14c6e47c0,uVar13), (int)local_2e0 < (int)uVar2)) ||
     (local_res18 = local_2e0, (int)uVar2 < (int)local_2e0)) {
    local_res18 = uVar2;
  }
  FUN_144c3fad0(&local_2a8,0,uVar2,(int)param_2[1] < 1);
  lVar1 = local_2a8;
  iVar5 = 0;
  lVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      *(undefined4 *)(local_2e8 + lVar3 * 8) = 0;
      *(int *)(local_2e8 + 4 + lVar3 * 8) = iVar5;
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (longlong)uVar13);
  }
  lVar3 = local_2e8;
  if (0 < *(int *)(param_1 + 0x20)) {
    local_2c8 = 0;
    do {
      lVar9 = local_2c8;
      pfVar4 = (float *)FUN_144fea2d0(local_278,param_1,iVar12);
      uVar2 = *(uint *)(lVar9 + local_2d8);
      iVar5 = (int)uVar2 >> 5;
      *(float *)(lVar3 + (longlong)(int)uVar2 * 8) =
           *pfVar4 + *(float *)(lVar3 + (longlong)(int)uVar2 * 8);
      if (((*(uint *)(lVar1 + (longlong)iVar5 * 4) >> ((byte)uVar2 & 0x1f) & 1) == 0) &&
         (iVar7 = 0, lVar3 = local_2e8, 0 < (int)param_2[1])) {
        lVar9 = 0;
        do {
          pfVar4 = (float *)(lVar9 + *param_2);
          local_2b8 = *pfVar4;
          fStack_2b4 = pfVar4[1];
          fStack_2b0 = pfVar4[2];
          fStack_2ac = pfVar4[3];
          local_res8[0] = iVar12;
          local_288 = local_2b8;
          fStack_284 = fStack_2b4;
          fStack_280 = fStack_2b0;
          fStack_27c = fStack_2ac;
          FUN_144fea1e0(param_1,&local_288,local_res8,&local_2b8);
          lVar3 = local_2e8;
          if ((fStack_280 - fStack_2b0) * (fStack_280 - fStack_2b0) +
              (fStack_284 - fStack_2b4) * (fStack_284 - fStack_2b4) +
              (local_288 - local_2b8) * (local_288 - local_2b8) < param_3 * param_3) {
            *(uint *)(lVar1 + (longlong)iVar5 * 4) =
                 *(uint *)(lVar1 + (longlong)iVar5 * 4) | 1 << (uVar2 & 0x1f);
            break;
          }
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 0x10;
        } while (iVar7 < (int)param_2[1]);
      }
      iVar12 = iVar12 + 1;
      local_2c8 = local_2c8 + 4;
    } while (iVar12 < *(int *)(param_1 + 0x20));
    uVar13 = (ulonglong)local_res10;
  }
  uVar2 = (uint)uVar13;
  if (1 < (int)local_res18) {
    FUN_145044790(lVar3,0,local_res18 - 1,(undefined1)local_res18);
  }
  local_2bc = 0x80000000;
  local_2c8 = 0;
  local_2c0 = 0;
  if ((int)uVar2 < 1) {
    bVar14 = false;
    iVar12 = 0;
LAB_145043051:
    uVar8 = local_2c0;
    if (bVar14 == (int)(uVar2 + iVar12) < 0) goto LAB_145043056;
  }
  else {
    FUN_141807aa8(&local_2c8,&PTR_vftable_14c6e47c0,(longlong)(int)uVar2);
    bVar14 = SBORROW4(uVar2,local_2c0);
    iVar12 = -local_2c0;
    if ((int)uVar2 <= (int)local_2c0) goto LAB_145043051;
  }
  uVar8 = uVar2;
LAB_145043056:
  lVar3 = local_2c8;
  lVar1 = local_2e8;
  iVar12 = 0;
  if (0 < (int)uVar8) {
    piVar10 = (int *)(local_2e8 + 4);
    uVar11 = (ulonglong)uVar8;
    do {
      if ((float)piVar10[-1] <= param_4) {
LAB_1450430a0:
        uVar13 = (ulonglong)((int)uVar13 - 1);
        *(undefined4 *)(local_2c8 + (longlong)*piVar10 * 4) = 0xffffffff;
      }
      else {
        iVar5 = *piVar10;
        if ((*(uint *)(local_2a8 + (longlong)(iVar5 >> 5) * 4) >> ((byte)iVar5 & 0x1f) & 1) == 0)
        goto LAB_1450430a0;
        *(int *)(local_2c8 + (longlong)iVar5 * 4) = iVar12;
        iVar12 = iVar12 + 1;
      }
      uVar2 = (uint)uVar13;
      piVar10 = piVar10 + 2;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (uVar2 == 0) {
    FUN_144bde670(&local_2b8,local_268,0x200);
    FUN_144be6160(&local_2b8,
                  "All regions are either below the volume threshold or too far from a seed point. Keeping the largest region."
                 );
    FUN_144bfc0d0(0x3033f052,local_268,"NavVolume\\hkaiNavVolumeGenerationUtils.cpp",0x3c3);
    FUN_144bde6e0(&local_2b8);
    *(int *)(lVar3 + (longlong)*(int *)(lVar1 + 4) * 4) = iVar12;
  }
  iVar12 = *(int *)(param_1 + 0x20);
  uVar6 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 0x80000000;
  uVar13 = uVar6;
  uVar11 = uVar6;
  if (0 < iVar12) {
    do {
      if (*(int *)(lVar3 + (longlong)*(int *)(uVar11 + local_2d8) * 4) == -1) {
        uVar8 = (uint)uVar6 + 1;
        uVar2 = (uint)uVar6;
        if ((int)(local_2ec & 0x7fffffff) < (int)uVar8) {
          FUN_1450448a0(&local_2f8,&PTR_vftable_14c6e47c0,(longlong)(int)uVar8);
          iVar12 = *(int *)(param_1 + 0x20);
          uVar2 = local_2f0;
        }
        piVar10 = (int *)(local_2f8 + (longlong)(int)uVar2 * 4);
        if (piVar10 != (int *)0x0) {
          *piVar10 = (int)uVar13;
          iVar12 = *(int *)(param_1 + 0x20);
        }
        uVar6 = (ulonglong)uVar8;
        local_2f0 = uVar8;
      }
      uVar2 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar2;
      uVar11 = uVar11 + 4;
    } while ((int)uVar2 < iVar12);
  }
  FUN_144fea390(param_1,&local_2f8);
  local_2f0 = 0;
  if ((-1 < (int)local_2ec) && (local_2f8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_2f8,(ulonglong)(local_2ec & 0x7fffffff) << 2);
  }
  local_2f8 = 0;
  local_2ec = 0x80000000;
  if ((-1 < (int)local_2bc) && (lVar3 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar3,(ulonglong)(local_2bc & 0x7fffffff) << 2);
  }
  FUN_144bf90d0(&local_2a8);
  if ((-1 < (int)local_2dc) && (lVar1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar1,(ulonglong)(local_2dc & 0x7fffffff) << 3);
  }
  local_2d0 = 0;
  if ((-1 < (int)local_2cc) && (local_2d8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_2d8,(ulonglong)(local_2cc & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 1450432d0 FUN_1450432d0 body=226 status=ok
// SIG undefined FUN_1450432d0(void)

void FUN_1450432d0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 local_res8 [8];
  undefined1 local_298 [8];
  undefined8 local_290;
  undefined1 local_288 [272];
  undefined1 local_178;
  undefined1 local_168 [64];
  undefined1 local_128 [288];
  
  FUN_144be5ff0(local_298,*(ulonglong *)(param_1 + 0x118) & 0xfffffffffffffffe,0);
  pcVar1 = (char *)FUN_144be6120(local_298,local_res8);
  if (*pcVar1 != '\0') {
    FUN_144caec40(local_288);
    FUN_144d0f5e0(local_288,param_1);
    local_178 = 0;
    FUN_145345140(local_168,param_2,local_288);
    FUN_145336030(local_res8,local_168,&DAT_14c6e5b60,local_290,0);
    FUN_144caedd0(local_128);
    FUN_144b3e940(local_168);
    FUN_144caedd0(local_288);
  }
  FUN_144be6100(local_298);
  return;
}



// FUNCTION 1450433c0 FUN_1450433c0 body=1072 status=ok
// SIG undefined FUN_1450433c0(void)

void FUN_1450433c0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  uint *puVar23;
  longlong lVar24;
  longlong lVar25;
  uint local_res20;
  
  iVar6 = (int)param_1[1];
  lVar25 = (longlong)iVar6;
  local_res20 = iVar6 + 4;
  if ((int)local_res20 < 1) {
    lVar15 = 0;
    local_res20 = 0x80000000;
  }
  else {
    lVar15 = (**(code **)(PTR_vftable_14c6e47c0 + 8))
                       (&PTR_vftable_14c6e47c0,(longlong)(int)local_res20 << 5);
  }
  uVar21 = 0;
  if (0 < iVar6) {
    lVar22 = 0;
    puVar23 = (uint *)(lVar15 + 4);
    lVar24 = lVar25;
    do {
      lVar8 = *param_1;
      puVar23[2] = uVar21;
      puVar16 = (ushort *)(lVar8 + lVar22);
      uVar21 = uVar21 + 1;
      lVar22 = lVar22 + 0xc;
      puVar23[-1] = (uint)*puVar16;
      *puVar23 = (uint)puVar16[1];
      puVar23[1] = (uint)puVar16[2];
      puVar23[3] = (uint)puVar16[3];
      puVar23[4] = (uint)puVar16[4];
      puVar23[5] = (uint)puVar16[5];
      lVar24 = lVar24 + -1;
      puVar23 = puVar23 + 8;
    } while (lVar24 != 0);
  }
  *(undefined4 *)(lVar25 * 0x20 + lVar15) = 0xffffffff;
  *(undefined4 *)((lVar25 + 1) * 0x20 + lVar15) = 0xffffffff;
  *(undefined4 *)((lVar25 + 2) * 0x20 + lVar15) = 0xffffffff;
  *(undefined4 *)((lVar25 + 3) * 0x20 + lVar15) = 0xffffffff;
  FUN_144fc0200(lVar15,iVar6);
  iVar17 = 1;
  iVar19 = 0;
  iVar20 = 0;
  if (0 < iVar6 + -1) {
    do {
      lVar25 = (longlong)iVar19 * 0x20 + lVar15;
      puVar23 = (uint *)((longlong)iVar17 * 0x20 + lVar15);
      if (*puVar23 <= *(uint *)(lVar25 + 0x10)) {
        do {
          iVar20 = iVar19;
          if (-1 < (int)(puVar23[6] - *(int *)(lVar25 + 8) | *(int *)(lVar25 + 0x18) - puVar23[2] |
                         puVar23[5] - *(int *)(lVar25 + 4) | *(int *)(lVar25 + 0x14) - puVar23[1]))
          goto LAB_145043567;
          iVar17 = iVar17 + 1;
          puVar23 = (uint *)((longlong)iVar17 * 0x20 + lVar15);
        } while (*puVar23 <= *(uint *)(lVar25 + 0x10));
      }
      iVar20 = iVar19 + 1;
      iVar17 = iVar19 + 2;
      iVar19 = iVar20;
    } while (iVar20 < iVar6 + -1);
  }
LAB_145043567:
  if (iVar20 < iVar6 + -1) {
    do {
      do {
        lVar24 = *param_1;
        iVar19 = *(int *)((longlong)iVar20 * 0x20 + 0xc + lVar15);
        uVar2 = *(ushort *)(lVar24 + (longlong)iVar19 * 0xc);
        lVar25 = lVar24 + (longlong)iVar19 * 0xc;
        iVar7 = *(int *)((longlong)iVar17 * 0x20 + 0xc + lVar15);
        lVar22 = (longlong)iVar7;
        uVar3 = *(ushort *)(lVar24 + 6 + lVar22 * 0xc);
        if ((uVar3 <= uVar2) ||
           (bVar14 = true, *(ushort *)(lVar25 + 6) <= *(ushort *)(lVar24 + lVar22 * 0xc))) {
          bVar14 = false;
        }
        uVar4 = *(ushort *)(lVar24 + 8 + lVar22 * 0xc);
        if ((*(ushort *)(lVar25 + 2) < uVar4) &&
           (*(ushort *)(lVar24 + 2 + lVar22 * 0xc) < *(ushort *)(lVar25 + 8))) {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        uVar5 = *(ushort *)(lVar24 + 10 + lVar22 * 0xc);
        if ((*(ushort *)(lVar25 + 4) < uVar5) &&
           (*(ushort *)(lVar24 + 4 + lVar22 * 0xc) < *(ushort *)(lVar25 + 10))) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if ((uVar3 == uVar2) || (*(short *)(lVar24 + lVar22 * 0xc) == *(short *)(lVar25 + 6))) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
        if ((uVar4 == *(ushort *)(lVar25 + 2)) ||
           (*(short *)(lVar24 + 2 + lVar22 * 0xc) == *(short *)(lVar25 + 8))) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
        }
        if ((uVar5 == *(ushort *)(lVar25 + 4)) ||
           (*(short *)(lVar24 + 4 + lVar22 * 0xc) == *(short *)(lVar25 + 10))) {
          bVar10 = true;
        }
        else {
          bVar10 = false;
        }
        if (((bVar14) && (((bVar9 && (bVar10)) || ((bVar11 && (bVar12)))))) ||
           (((bVar13 && (bVar9)) && (bVar12)))) {
          iVar18 = (int)param_2[1] + 1;
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar18) {
            FUN_144c36610(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar18);
          }
          puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = CONCAT44(iVar19,iVar7);
          }
          *(int *)(param_2 + 1) = iVar18;
        }
        iVar17 = iVar17 + 1;
        iVar19 = iVar20;
      } while (iVar6 + -1 <= iVar20);
      do {
        lVar25 = (longlong)iVar19 * 0x20 + lVar15;
        puVar23 = (uint *)((longlong)iVar17 * 0x20 + lVar15);
        if (*puVar23 <= *(uint *)(lVar25 + 0x10)) {
          do {
            iVar20 = iVar19;
            if (-1 < (int)(*(int *)(lVar25 + 0x18) - puVar23[2] | puVar23[6] - *(int *)(lVar25 + 8)
                           | *(int *)(lVar25 + 0x14) - puVar23[1] |
                          puVar23[5] - *(int *)(lVar25 + 4))) goto LAB_14504377f;
            iVar17 = iVar17 + 1;
            puVar23 = (uint *)((longlong)iVar17 * 0x20 + lVar15);
          } while (*puVar23 <= *(uint *)(lVar25 + 0x10));
        }
        iVar20 = iVar19 + 1;
        iVar17 = iVar19 + 2;
        iVar19 = iVar20;
      } while (iVar20 < iVar6 + -1);
LAB_14504377f:
    } while (iVar20 < iVar6 + -1);
  }
  if ((-1 < (int)local_res20) && (lVar15 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar15,(ulonglong)(local_res20 & 0x7fffffff) << 5);
    return;
  }
  return;
}



// FUNCTION 1450437f0 FUN_1450437f0 body=1598 status=ok
// SIG undefined FUN_1450437f0(void)

void FUN_1450437f0(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  char cVar12;
  int *piVar13;
  int iVar14;
  uint *puVar15;
  short sVar16;
  short sVar17;
  uint *puVar18;
  longlong lVar19;
  uint *puVar20;
  uint uVar21;
  longlong *plVar22;
  char *pcVar23;
  int iVar24;
  char **ppcVar25;
  undefined4 uVar26;
  char *local_128;
  undefined8 uStack_120;
  char *local_118;
  undefined8 uStack_110;
  int local_108;
  longlong *local_f8;
  char *pcStack_f0;
  int local_e8;
  int local_e4;
  longlong *local_d8;
  char *pcStack_d0;
  uint local_c8 [2];
  uint *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  int local_a0;
  int local_9c [9];
  longlong local_78;
  longlong local_70;
  longlong local_68;
  char *local_60;
  longlong local_58;
  
  iVar24 = 0;
  local_68 = param_1 + 0xc;
  lVar19 = 0;
  local_78 = *(longlong *)(param_1 + 0x18);
  local_70 = *(longlong *)(param_1 + 0x20);
  psVar7 = (short *)(param_1 + 0x12);
  do {
    sVar17 = psVar7[-6];
    sVar16 = psVar7[-3];
    if (sVar17 == sVar16) break;
    sVar17 = psVar7[-9];
    sVar16 = *psVar7;
    if (sVar17 == sVar16) break;
    iVar24 = iVar24 + 1;
    lVar19 = lVar19 + 1;
    psVar7 = psVar7 + 1;
  } while (lVar19 < 3);
  if (iVar24 == 3) {
    return;
  }
  sVar16 = sVar16 - *(short *)(local_68 + (longlong)iVar24 * 2);
  sVar17 = sVar17 - *(short *)(param_1 + (longlong)iVar24 * 2);
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar23 = (char *)(lVar19 + 0x114);
  cVar12 = *pcVar23;
  local_108 = iVar24;
  local_60 = pcVar23;
  if (cVar12 == '\0') {
    __dyn_tls_on_demand_init();
    cVar12 = *pcVar23;
  }
  plVar22 = (longlong *)(lVar19 + 0xf0);
  lVar19 = *plVar22;
  local_f8 = plVar22;
  if (lVar19 == 0) {
    if (cVar12 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = FUN_144b3f4a0();
    *plVar22 = lVar19;
  }
  local_58 = *(longlong *)(lVar19 + 0x3e0);
  if (local_58 != 0) {
    local_128 = "St_collectBoundaryCells";
    uStack_120 = "";
    local_118 = "Lt_findAdjacentCellPairs";
    uStack_110 = "";
    FUN_144be9870(local_58,&local_118,&local_128);
  }
  local_118 = (char *)0x0;
  local_128 = (char *)0x0;
  uStack_110 = (char *)0x8000000000000000;
  uStack_120 = (char *)0x8000000000000000;
  FUN_145043e30(param_1,local_78,iVar24,sVar17,&local_118);
  ppcVar25 = &local_128;
  FUN_145043e30(param_1 + 0xc,local_70,iVar24,sVar16,ppcVar25);
  local_d8 = (longlong *)0x4;
  local_e8 = (int)uStack_110;
  local_e4 = (int)uStack_120;
  pcVar23 = local_118;
  iVar6 = (int)uStack_110;
  iVar24 = (int)uStack_120;
  do {
    iVar5 = iVar6 + 1;
    if ((int)(uStack_110._4_4_ & 0x7fffffff) < iVar5) {
      FUN_144c2e510(&local_118,&PTR_vftable_14c6e47c0,(longlong)iVar5);
      pcVar23 = local_118;
      iVar6 = (int)uStack_110;
    }
    iVar14 = iVar24 + 1;
    uStack_110 = (char *)CONCAT44(uStack_110._4_4_,iVar5);
    pcVar1 = pcVar23 + (longlong)iVar6 * 0x20;
    pcVar1[0] = -1;
    pcVar1[1] = -1;
    pcVar1[2] = -1;
    pcVar1[3] = -1;
    if ((int)(uStack_120._4_4_ & 0x7fffffff) < iVar14) {
      FUN_144c2e510(&local_128,&PTR_vftable_14c6e47c0,(longlong)iVar14);
      iVar24 = (int)uStack_120;
    }
    pcVar1 = local_60;
    plVar22 = local_f8;
    uVar26 = (undefined4)((ulonglong)ppcVar25 >> 0x20);
    pcVar8 = local_128 + (longlong)iVar24 * 0x20;
    local_d8 = (longlong *)((longlong)local_d8 + -1);
    uStack_120 = (char *)CONCAT44(uStack_120._4_4_,iVar14);
    pcVar8[0] = -1;
    pcVar8[1] = -1;
    pcVar8[2] = -1;
    pcVar8[3] = -1;
    iVar6 = iVar5;
    iVar24 = iVar14;
  } while (local_d8 != (longlong *)0x0);
  local_d8 = (longlong *)0x1499944f8;
  pcStack_d0 = "";
  cVar12 = *local_60;
  if (cVar12 == '\0') {
    __dyn_tls_on_demand_init();
    cVar12 = *pcVar1;
  }
  lVar19 = *plVar22;
  if (lVar19 == 0) {
    if (cVar12 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = FUN_144b3f4a0();
    *plVar22 = lVar19;
  }
  if (*(longlong *)(lVar19 + 0x3e0) != 0) {
    local_f8 = local_d8;
    pcStack_f0 = pcStack_d0;
    FUN_144be99f0(*(longlong *)(lVar19 + 0x3e0),&local_f8);
  }
  iVar24 = local_e8;
  pcVar8 = local_118;
  FUN_144fc0200(local_118,local_e8);
  iVar6 = local_e4;
  pcVar23 = local_128;
  FUN_144fc0200(local_128,local_e4);
  local_f8 = (longlong *)0x149994500;
  pcStack_f0 = "";
  if (*pcVar1 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar19 = *plVar22;
  if (lVar19 == 0) {
    if (*pcVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = FUN_144b3f4a0();
    *plVar22 = lVar19;
  }
  if (*(longlong *)(lVar19 + 0x3e0) != 0) {
    FUN_144be99f0(*(longlong *)(lVar19 + 0x3e0),&local_f8);
  }
  FUN_144fc0100(local_c8,pcVar8,iVar24,pcVar23,CONCAT44(uVar26,iVar6));
  puVar15 = local_a8;
  puVar18 = local_b0;
  iVar24 = local_a0;
  uVar4 = local_c8[0];
  puVar9 = local_c0;
LAB_145043ba0:
  do {
    local_c0 = puVar9;
    local_c8[0] = uVar4;
    iVar6 = local_108;
    if ((iVar24 < 1) || (local_9c[0] < 1)) {
LAB_145043d6d:
      if ((-1 < (longlong)uStack_120) && (local_128 != (char *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_128,(ulonglong)(uStack_120._4_4_ & 0x7fffffff) << 5)
        ;
      }
      if ((-1 < (longlong)uStack_110) && (local_118 != (char *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_118,(ulonglong)(uStack_110._4_4_ & 0x7fffffff) << 5)
        ;
      }
      if (local_58 == 0) {
        return;
      }
      local_128 = "lt";
      uStack_120 = &DAT_14999058e;
      FUN_144be9b20(local_58,&local_128);
      return;
    }
    puVar9 = puVar18;
    puVar11 = local_b8;
    if (local_c8[0] != 0) {
      puVar9 = local_b8;
      puVar11 = puVar15;
    }
    uVar4 = puVar9[3];
    uVar21 = puVar11[3];
    lVar19 = *(longlong *)(local_78 + 0x18) + (longlong)(int)uVar4 * 0x18;
    lVar2 = *(longlong *)(local_70 + 0x18) + (longlong)(int)uVar21 * 0x18;
    if (((sVar16 == 0) &&
        (iVar5 = FUN_1450440a0(lVar19,lVar2,param_1,local_68,local_108), iVar5 != 0)) ||
       ((sVar17 == 0 && (iVar6 = FUN_1450440a0(lVar2,lVar19,local_68,param_1,iVar6), iVar6 != 0))))
    {
      iVar6 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar6) {
        FUN_144c36610(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar6);
        puVar15 = local_a8;
        puVar18 = local_b0;
        iVar24 = local_a0;
      }
      puVar3 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = CONCAT44(uVar4,uVar21);
        puVar15 = local_a8;
        puVar18 = local_b0;
        iVar24 = local_a0;
      }
      *(int *)(param_2 + 1) = iVar6;
    }
    puVar10 = local_b8 + 8;
    puVar11 = puVar10;
    puVar20 = local_c0;
    uVar21 = local_c8[0];
    do {
      if (*puVar11 < puVar20[4]) {
        do {
          uVar4 = uVar21;
          puVar9 = puVar20;
          local_b8 = puVar11;
          if (-1 < (int)(puVar20[6] - puVar11[2] | puVar20[5] - puVar11[1] | puVar11[6] - puVar20[2]
                        | puVar11[5] - puVar20[1])) goto LAB_145043ba0;
          puVar11 = puVar11 + 8;
        } while (*puVar11 < puVar20[4]);
      }
      if (uVar21 == 0) {
        local_b0 = puVar18 + 8;
        piVar13 = &local_a0;
      }
      else {
        local_a8 = puVar15 + 8;
        piVar13 = local_9c;
        iVar24 = local_9c[0];
      }
      *piVar13 = iVar24 + -1;
      uVar21 = (uint)(*local_a8 < *local_b0);
      puVar11 = local_a8;
      puVar20 = local_b0;
      if (*local_a8 < *local_b0) {
        puVar11 = local_b0;
        puVar20 = local_a8;
      }
      local_b8 = puVar10;
      if (local_a0 < 1) goto LAB_145043d6d;
      puVar15 = local_a8;
      puVar18 = local_b0;
      iVar24 = local_a0;
      uVar4 = local_c8[0];
      puVar9 = local_c0;
    } while (0 < local_9c[0]);
  } while( true );
}



// FUNCTION 145043e30 FUN_145043e30 body=410 status=ok
// SIG undefined FUN_145043e30(void)

void FUN_145043e30(ushort *param_1,longlong param_2,uint param_3,ushort param_4,longlong *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar3 = *(int *)(param_2 + 0x20);
  uVar8 = 0;
  uVar11 = (ulonglong)(int)param_3;
  uVar12 = uVar11;
  if (0 < iVar3) {
    do {
      puVar1 = (ushort *)(*(longlong *)(param_2 + 0x18) + uVar8 * 0x18);
      if (param_4 == 0) {
        uVar2 = puVar1[uVar11];
      }
      else {
        uVar2 = puVar1[uVar11 + 4];
      }
      if (uVar2 == param_4) {
        iVar9 = (int)param_5[1] + 1;
        if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar9) {
          FUN_144c2e510(param_5,&PTR_vftable_14c6e47c0,(longlong)iVar9);
          uVar12 = (ulonglong)param_3;
        }
        lVar4 = 4;
        lVar5 = 0x14;
        lVar6 = param_5[1];
        *(int *)(param_5 + 1) = iVar9;
        lVar10 = (longlong)(int)lVar6 * 0x20 + *param_5;
        *(int *)(lVar10 + 0xc) = (int)uVar8;
        iVar9 = (int)uVar12;
        lVar6 = 0;
        if (iVar9 == 0) {
          lVar6 = lVar4;
        }
        *(uint *)(lVar6 + lVar10) = (uint)*param_1 + (uint)*puVar1;
        if (iVar9 == 0) {
          lVar4 = 8;
        }
        *(uint *)(lVar4 + lVar10) = (uint)puVar1[1] + (uint)param_1[1];
        *(uint *)((ulonglong)(-(uint)(iVar9 != 0) & 8) + lVar10) =
             (uint)puVar1[2] + (uint)param_1[2];
        lVar6 = 0x10;
        if (iVar9 == 0) {
          lVar6 = lVar5;
        }
        *(uint *)(lVar6 + lVar10) = (uint)puVar1[4] + (uint)*param_1;
        if (iVar9 == 0) {
          lVar5 = 0x18;
        }
        *(uint *)(lVar5 + lVar10) = (uint)puVar1[5] + (uint)param_1[1];
        lVar6 = 0x18;
        if (iVar9 == 0) {
          lVar6 = 0x10;
        }
        *(uint *)(lVar6 + lVar10) = (uint)puVar1[6] + (uint)param_1[2];
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar3);
  }
  return;
}



// FUNCTION 145043fd0 FUN_145043fd0 body=194 status=ok
// SIG undefined FUN_145043fd0(void)

void FUN_145043fd0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1 + (longlong)(int)param_1[1] * 2;
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -2;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) * 0xc);
    }
    *plVar3 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar3;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1450440a0 FUN_1450440a0 body=163 status=ok
// SIG undefined FUN_1450440a0(void)

undefined8
FUN_1450440a0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short *psVar8;
  
  psVar8 = (short *)(param_2 + 8);
  iVar3 = 0;
  do {
    if (iVar3 != param_5) {
      sVar1 = *(short *)((param_3 - param_2) + -8 + (longlong)psVar8);
      sVar2 = *(short *)((param_4 - param_2) + -8 + (longlong)psVar8);
      uVar7 = sVar1 + *(short *)((param_1 - param_2) + -8 + (longlong)psVar8);
      uVar4 = sVar2 + psVar8[-4];
      uVar6 = sVar1 + *(short *)((param_1 - param_2) + (longlong)psVar8);
      uVar5 = sVar2 + *psVar8;
      if (uVar6 < uVar5) {
        uVar5 = uVar6;
      }
      if (uVar4 < uVar7) {
        uVar4 = uVar7;
      }
      if (uVar5 <= uVar4) {
        return 0;
      }
    }
    iVar3 = iVar3 + 1;
    psVar8 = psVar8 + 1;
    if (2 < iVar3) {
      return 1;
    }
  } while( true );
}



// FUNCTION 145044150 FUN_145044150 body=1016 status=ok
// SIG undefined FUN_145044150(void)

void FUN_145044150(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  ushort *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined8 local_res10;
  longlong *local_res18;
  longlong *local_res20;
  uint *local_58;
  uint local_50;
  uint local_4c;
  uint *puVar19;
  
  uVar5 = *(undefined4 *)(param_1 + 200);
  uVar6 = *(undefined4 *)(param_1 + 0xc4);
  puVar15 = (uint *)0x0;
  *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((longlong)param_2 + 0x9c) = uVar6;
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  local_58 = (uint *)0x0;
  local_50 = 0;
  local_4c = 0x80000000;
  puVar10 = puVar15;
  local_res18 = param_3;
  local_res20 = param_4;
  if (0 < *(int *)(param_1 + 0x20)) {
    uVar14 = 0;
    puVar12 = puVar15;
    puVar19 = puVar15;
    do {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)puVar19 * 0x18);
      if ((int)param_2[3] == 0) {
        local_res10 = 0x38;
        puVar10 = (uint *)(*DAT_14c787670)(0,&local_res10,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar10,&DAT_149c224f8);
        }
        puVar11 = puVar15;
        if (puVar10 != (uint *)0x0) {
          uVar18 = *(uint *)(param_2 + 0xe);
          puVar10[10] = 0;
          puVar10[0xb] = 0;
          puVar10[0xc] = 0;
          puVar10[0xd] = 0x80000000;
          puVar10[0] = 0;
          puVar10[1] = 0;
          puVar10[3] = 0xffffffff;
          puVar10[4] = 0xffffffff;
          puVar10[2] = 0;
          puVar10[5] = 0xffffffff;
          puVar10[7] = uVar18;
          puVar10[6] = 0;
          puVar11 = puVar10;
        }
        puVar11[8] = *(uint *)(param_2 + 1);
        iVar17 = (int)param_2[1] + 1;
        if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar17) {
          FUN_145044990(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar17);
        }
        puVar3 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 8);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = puVar11;
        }
        *(int *)(param_2 + 1) = iVar17;
        puVar10 = local_58;
      }
      else {
        puVar11 = *(uint **)(param_2[2] + -8 + (longlong)(int)param_2[3] * 8);
        puVar11[7] = *(uint *)(param_2 + 0xe);
        *(int *)(param_2 + 3) = (int)param_2[3] + -1;
      }
      uVar13 = (uint)puVar12 + 1;
      *puVar11 = (uint)*puVar1;
      puVar11[1] = (uint)puVar1[1];
      puVar11[2] = (uint)puVar1[2];
      puVar11[3] = (uint)puVar1[4];
      puVar11[4] = (uint)puVar1[5];
      puVar11[5] = (uint)puVar1[6];
      puVar11[6] = *(uint *)(puVar1 + 10);
      uVar18 = (uint)puVar12;
      if ((int)(uVar14 & 0x7fffffff) < (int)uVar13) {
        FUN_145044990(&local_58,&PTR_vftable_14c6e47a0,(longlong)(int)uVar13);
        puVar10 = local_58;
        uVar14 = local_4c;
        uVar18 = local_50;
      }
      if (puVar10 + (longlong)(int)uVar18 * 2 != (uint *)0x0) {
        *(uint **)(puVar10 + (longlong)(int)uVar18 * 2) = puVar11;
      }
      uVar18 = (int)puVar19 + 1;
      puVar19 = (uint *)(ulonglong)uVar18;
      puVar12 = (uint *)(ulonglong)uVar13;
      local_50 = uVar13;
    } while ((int)uVar18 < *(int *)(param_1 + 0x20));
    puVar12 = puVar15;
    puVar19 = puVar10;
    if (0 < *(int *)(param_1 + 0x20)) {
      do {
        lVar7 = *(longlong *)puVar19;
        iVar17 = (int)puVar12;
        lVar2 = *(longlong *)(param_1 + 0x18) + (longlong)iVar17 * 0x18;
        puVar12 = puVar15;
        if (0 < *(short *)(*(longlong *)(param_1 + 0x18) + 6 + (longlong)iVar17 * 0x18)) {
          do {
            iVar16 = *(int *)(lVar7 + 0x30) + 1;
            uVar8 = *(undefined8 *)
                     (puVar10 +
                     (ulonglong)
                     (*(uint *)(*(longlong *)(param_1 + 0x28) + 4 +
                               (longlong)(*(int *)(lVar2 + 0x10) + (int)puVar12) * 8) & 0x3fffff) *
                     2);
            if ((int)(*(uint *)(lVar7 + 0x34) & 0x7fffffff) < iVar16) {
              FUN_145044990(lVar7 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar16);
              puVar10 = local_58;
            }
            puVar3 = (undefined8 *)
                     (*(longlong *)(lVar7 + 0x28) + (longlong)*(int *)(lVar7 + 0x30) * 8);
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = uVar8;
            }
            *(int *)(lVar7 + 0x30) = iVar16;
            uVar14 = (int)puVar12 + 1;
            puVar12 = (uint *)(ulonglong)uVar14;
          } while ((int)uVar14 < (int)*(short *)(lVar2 + 6));
        }
        puVar12 = (uint *)(ulonglong)(iVar17 + 1U);
        puVar19 = puVar19 + 2;
      } while ((int)(iVar17 + 1U) < *(int *)(param_1 + 0x20));
    }
  }
  plVar9 = local_res18;
  puVar12 = puVar15;
  if (0 < (int)local_res18[1]) {
    do {
      lVar2 = *(longlong *)(puVar10 + (longlong)*(int *)((longlong)puVar15 + *plVar9) * 2);
      iVar17 = *(int *)(lVar2 + 0x30) + 1;
      lVar7 = *(longlong *)(puVar10 + (longlong)*(int *)((longlong)puVar15 + *local_res20) * 2);
      if ((int)(*(uint *)(lVar2 + 0x34) & 0x7fffffff) < iVar17) {
        FUN_145044990(lVar2 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar17);
      }
      plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x30) * 8);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = lVar7;
      }
      *(int *)(lVar2 + 0x30) = iVar17;
      iVar17 = *(int *)(lVar7 + 0x30) + 1;
      if ((int)(*(uint *)(lVar7 + 0x34) & 0x7fffffff) < iVar17) {
        FUN_145044990(lVar7 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar17);
      }
      plVar4 = (longlong *)(*(longlong *)(lVar7 + 0x28) + (longlong)*(int *)(lVar7 + 0x30) * 8);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = lVar2;
      }
      uVar14 = (int)puVar12 + 1;
      puVar15 = puVar15 + 1;
      *(int *)(lVar7 + 0x30) = iVar17;
      puVar10 = local_58;
      puVar12 = (uint *)(ulonglong)uVar14;
    } while ((int)uVar14 < (int)plVar9[1]);
  }
  if ((-1 < (int)local_4c) && (local_58 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) << 3);
    return;
  }
  return;
}



// FUNCTION 145044550 FUN_145044550 body=289 status=ok
// SIG undefined FUN_145044550(void)

ulonglong FUN_145044550(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar8 * 2;
  uVar5 = param_3;
  if (param_3 < uVar7) {
    uVar5 = uVar7;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0xc,&local_res8);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar5 * 0xc + 0xc;
  uVar6 = uVar5;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar6 = uVar5 + 1;
    if (uVar7 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar6 = uVar6 + uVar5 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0xc);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar7;
}



// FUNCTION 145044680 FUN_145044680 body=269 status=ok
// SIG undefined FUN_145044680(void)

void FUN_145044680(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 145044790 FUN_145044790 body=257 status=ok
// SIG undefined FUN_145044790(void)

void FUN_145044790(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float local_40;
  
  lVar5 = (longlong)param_2;
  do {
    local_40 = (float)*(undefined8 *)(param_1 + ((longlong)(param_2 + param_3) >> 1) * 8);
    lVar7 = (longlong)param_3;
    iVar8 = param_2;
    iVar6 = param_3;
    do {
      fVar3 = *(float *)(param_1 + lVar5 * 8);
      while (local_40 < fVar3) {
        lVar2 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        iVar8 = iVar8 + 1;
        fVar3 = *(float *)(param_1 + 8 + lVar2);
      }
      pfVar1 = (float *)(param_1 + lVar7 * 8);
      if (*pfVar1 <= local_40 && local_40 != *pfVar1) {
        do {
          lVar7 = lVar7 + -1;
          iVar6 = iVar6 + -1;
          pfVar1 = (float *)(param_1 + lVar7 * 8);
        } while (*pfVar1 <= local_40 && local_40 != *pfVar1);
      }
      if (lVar7 < lVar5) break;
      if (lVar7 != lVar5) {
        uVar4 = *(undefined8 *)(param_1 + lVar7 * 8);
        *(undefined8 *)(param_1 + lVar7 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
        *(undefined8 *)(param_1 + lVar5 * 8) = uVar4;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
      iVar8 = iVar8 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 <= lVar7);
    if (param_2 < iVar6) {
      FUN_145044790(param_1,local_40,iVar6,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return;
    }
  } while( true );
}



// FUNCTION 1450448a0 FUN_1450448a0 body=235 status=ok
// SIG undefined FUN_1450448a0(void)

void FUN_1450448a0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 145044990 FUN_145044990 body=235 status=ok
// SIG undefined FUN_145044990(void)

void FUN_145044990(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 145044a80 thunk_FUN_145044a90 body=5 status=ok
// SIG undefined thunk_FUN_145044a90(void)

void thunk_FUN_145044a90(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uStackX_10;
  longlong lStackX_18;
  longlong lStackX_20;
  longlong lStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  uStack_70 = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar6 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar6 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar6 + 0xf0) = lVar2;
  }
  lVar6 = lVar8 * 8;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  lVar5 = 0;
  if (*(longlong *)(lVar2 + 8) == 0) {
    lVar5 = lVar2;
  }
  lStackX_18 = lVar6;
  lStackX_20 = lVar5;
  lStack_68 = lVar5;
  lStack_58 = lVar6;
  if (lVar5 == 0) {
    lStack_78 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar2 >> 8),1),&lStackX_18,0x40);
  }
  else {
    uStackX_10 = lVar6 + 0x3fU & 0xffffffffffffffc0;
    if (uStackX_10 <= *(ulonglong *)(lVar5 + 0x28)) {
      lStack_78 = *(longlong *)(lVar5 + 0x38);
      if (uStackX_10 + lStack_78 <= *(ulonglong *)(lVar5 + 0x40)) {
        *(ulonglong *)(lVar5 + 0x38) = uStackX_10 + lStack_78;
        goto LAB_145044b8a;
      }
    }
    lStack_78 = FUN_144b454a0(lVar5,&uStackX_10);
  }
LAB_145044b8a:
  uStack_6c = uVar1 | 0x80000000;
  uStackX_10 = CONCAT44(uStackX_10._4_4_,uVar1) | 0x80000000;
  lStack_60 = lStack_78;
  if ((int)(uVar1 & 0x7fffffff) < (int)uVar1) {
    FUN_144be4670(&lStack_78,&PTR_vftable_14c6e47a0,lVar8);
    lStackX_20 = lStack_68;
    uStackX_10 = CONCAT44(uStackX_10._4_4_,uStack_6c);
    lVar5 = lStack_68;
    lVar6 = lStack_58;
  }
  lVar4 = lStack_60;
  uVar3 = uStack_6c;
  lVar2 = lStack_78;
  (**(code **)(*param_2 + 0x10))(param_2,lStack_78,uVar1,8);
  uVar7 = 0;
  if (0 < (int)uVar1) {
    uVar9 = uVar7;
    do {
      lVar5 = uVar7 * 0x70 + *param_1;
      lVar6 = lVar5 + 0x20;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(lVar2 + uVar9 * 8),lVar6,0x40);
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < lVar8);
    lVar5 = lStackX_20;
    lVar4 = lStack_60;
    lVar6 = lStack_58;
    uVar3 = (uint)uStackX_10;
  }
  (**(code **)(*param_2 + 0x38))(param_2,lVar2,uVar1,0,8);
  (**(code **)(*param_2 + 0x48))(param_2,lVar2,uVar1);
  (**(code **)(*param_2 + 0x18))(param_2,lVar2,uVar1,8);
  if (lVar5 == 0) {
    (*DAT_14c787678)(1,lVar4,lVar6);
  }
  else {
    uVar7 = lVar6 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar5 + 0x28) < uVar7) || (lVar4 + uVar7 != *(longlong *)(lVar5 + 0x38))) {
      FUN_144be8550(lVar5,lVar4);
    }
    else {
      *(longlong *)(lVar5 + 0x38) = lVar4;
      if (*(longlong *)(lVar5 + 0x48) == lVar4) {
        FUN_144be8430(lVar5);
      }
    }
  }
  if ((-1 < (int)uVar3) && (lVar2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar2,(ulonglong)(uVar3 & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 145044a90 FUN_145044a90 body=668 status=ok
// SIG undefined FUN_145044a90(void)

void FUN_145044a90(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar8 = (longlong)(int)uVar1;
  local_70 = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar6 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar6 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar6 + 0xf0) = lVar2;
  }
  lVar6 = lVar8 * 8;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  lVar5 = 0;
  if (*(longlong *)(lVar2 + 8) == 0) {
    lVar5 = lVar2;
  }
  local_res18 = lVar6;
  local_res20 = lVar5;
  local_68 = lVar5;
  local_58 = lVar6;
  if (lVar5 == 0) {
    local_78 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar2 >> 8),1),&local_res18,0x40);
  }
  else {
    local_res10 = lVar6 + 0x3fU & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(lVar5 + 0x28)) {
      local_78 = *(longlong *)(lVar5 + 0x38);
      if (local_res10 + local_78 <= *(ulonglong *)(lVar5 + 0x40)) {
        *(ulonglong *)(lVar5 + 0x38) = local_res10 + local_78;
        goto LAB_145044b8a;
      }
    }
    local_78 = FUN_144b454a0(lVar5,&local_res10);
  }
LAB_145044b8a:
  local_6c = uVar1 | 0x80000000;
  local_res10 = CONCAT44(local_res10._4_4_,uVar1) | 0x80000000;
  local_60 = local_78;
  if ((int)(uVar1 & 0x7fffffff) < (int)uVar1) {
    FUN_144be4670(&local_78,&PTR_vftable_14c6e47a0,lVar8);
    local_res20 = local_68;
    local_res10 = CONCAT44(local_res10._4_4_,local_6c);
    lVar5 = local_68;
    lVar6 = local_58;
  }
  lVar4 = local_60;
  uVar3 = local_6c;
  lVar2 = local_78;
  (**(code **)(*param_2 + 0x10))(param_2,local_78,uVar1,8);
  uVar7 = 0;
  if (0 < (int)uVar1) {
    uVar9 = uVar7;
    do {
      lVar5 = uVar7 * 0x70 + *param_1;
      lVar6 = lVar5 + 0x20;
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      (**(code **)(*param_2 + 0x20))(param_2,*(undefined8 *)(lVar2 + uVar9 * 8),lVar6,0x40);
      uVar7 = (ulonglong)((int)uVar7 + 1);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < lVar8);
    lVar5 = local_res20;
    lVar4 = local_60;
    lVar6 = local_58;
    uVar3 = (uint)local_res10;
  }
  (**(code **)(*param_2 + 0x38))(param_2,lVar2,uVar1,0,8);
  (**(code **)(*param_2 + 0x48))(param_2,lVar2,uVar1);
  (**(code **)(*param_2 + 0x18))(param_2,lVar2,uVar1,8);
  if (lVar5 == 0) {
    (*DAT_14c787678)(1,lVar4,lVar6);
  }
  else {
    uVar7 = lVar6 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar5 + 0x28) < uVar7) || (lVar4 + uVar7 != *(longlong *)(lVar5 + 0x38))) {
      FUN_144be8550(lVar5,lVar4);
    }
    else {
      *(longlong *)(lVar5 + 0x38) = lVar4;
      if (*(longlong *)(lVar5 + 0x48) == lVar4) {
        FUN_144be8430(lVar5);
      }
    }
  }
  if ((-1 < (int)uVar3) && (lVar2 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar2,(ulonglong)(uVar3 & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 145044d30 FUN_145044d30 body=80 status=ok
// SIG undefined FUN_145044d30(void)

undefined8 *
FUN_145044d30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavVolumeGenerationTask::vftable;
  param_1[4] = hkaiNavVolumeGenerationTask::vftable;
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  param_1[6] = 0;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = param_4;
  return param_1;
}



// FUNCTION 145044d80 FUN_145044d80 body=62 status=ok
// SIG undefined FUN_145044d80(void)

void FUN_145044d80(longlong param_1)

{
  FUN_145041920(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40),0);
  FUN_1453451d0(param_1 + -0x20);
  return;
}



// FUNCTION 145044dc0 FUN_145044dc0 body=25 status=ok
// SIG undefined FUN_145044dc0(void)

void FUN_145044dc0(undefined8 param_1)

{
  undefined1 local_res10 [24];
  
  FUN_145045120(local_res10,param_1,0);
  return;
}



// FUNCTION 145044de0 FUN_145044de0 body=317 status=ok
// SIG undefined FUN_145044de0(void)

void FUN_145044de0(float param_1,undefined8 param_2)

{
  if (param_1 == 3.1415927) {
    FUN_144be06b0(param_2,"HK_REAL_PI",0xffffffff);
    return;
  }
  if (param_1 == -3.1415927) {
    FUN_144be06b0(param_2,"-HK_REAL_PI",0xffffffff);
    return;
  }
  if (param_1 == 1.1920929e-07) {
    FUN_144be06b0(param_2,"HK_REAL_EPSILON",0xffffffff);
    return;
  }
  if (param_1 == -1.1920929e-07) {
    FUN_144be06b0(param_2,"-HK_REAL_EPSILON",0xffffffff);
    return;
  }
  if (param_1 == 1.1754944e-38) {
    FUN_144be06b0(param_2,"HK_REAL_MIN",0xffffffff);
    return;
  }
  if (param_1 == -1.1754944e-38) {
    FUN_144be06b0(param_2,"-HK_REAL_MIN",0xffffffff);
    return;
  }
  if (param_1 == 3.40282e+38) {
    FUN_144be06b0(param_2,"HK_REAL_MAX",0xffffffff);
    return;
  }
  if (param_1 != -3.40282e+38) {
    if (param_1 == 1.8446726e+19) {
      FUN_144be06b0(param_2,"HK_REAL_HIGH",0xffffffff);
      return;
    }
    if (param_1 != -1.8446726e+19) {
      FUN_144bdff50(param_2,&DAT_14998237c,(double)param_1);
      return;
    }
    FUN_144be06b0(param_2,"-HK_REAL_HIGH",0xffffffff);
    return;
  }
  FUN_144be06b0(param_2,"-HK_REAL_MAX",0xffffffff);
  return;
}



// FUNCTION 145044f20 FUN_145044f20 body=188 status=ok
// SIG undefined FUN_145044f20(void)

void FUN_145044f20(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_168 [20];
  undefined8 local_c8 [24];
  
  FUN_144bdf360(local_c8);
  FUN_144bdf360(local_168);
  FUN_145044de0(param_1,local_c8);
  FUN_145044de0(param_2,local_168);
  FUN_144be04a0(param_3,&DAT_149c06568,local_c8[0],&DAT_14997153c,local_168[0],&DAT_149c06564,0);
  FUN_144bdf2f0(local_168);
  FUN_144bdf2f0(local_c8);
  return;
}



// FUNCTION 145044fe0 FUN_145044fe0 body=308 status=ok
// SIG undefined FUN_145044fe0(void)

void FUN_145044fe0(int param_1,int param_2,undefined8 param_3)

{
  undefined8 local_148 [20];
  undefined8 local_a8 [20];
  
  FUN_144bdf360(local_a8);
  FUN_144bdf360(local_148);
  if (param_1 == -0x7fffffff) {
    FUN_144be06b0(local_a8,"minInt",0xffffffff);
  }
  else if (param_1 == 0x7fffffff) {
    FUN_144be06b0(local_a8,"-minInt",0xffffffff);
  }
  else {
    FUN_144bdff50(local_a8,&DAT_1499c1968,param_1);
  }
  if (param_2 == -0x7fffffff) {
    FUN_144be06b0(local_148,"minInt",0xffffffff);
  }
  else if (param_2 == 0x7fffffff) {
    FUN_144be06b0(local_148,"-minInt",0xffffffff);
  }
  else {
    FUN_144bdff50(local_148,&DAT_1499c1968,param_2);
  }
  FUN_144be04a0(param_3,&DAT_149c06568,local_a8[0],&DAT_14997153c,local_148[0],&DAT_149c06564,0);
  FUN_144bdf2f0(local_148);
  FUN_144bdf2f0(local_a8);
  return;
}



// FUNCTION 145045120 FUN_145045120 body=548 status=ok
// SIG undefined FUN_145045120(void)

void FUN_145045120(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  uint *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_78;
  longlong lStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  longlong local_28;
  
  puVar4 = (uint *)FUN_144bef800(param_2[1],local_res8);
  switch(*puVar4 & 0x1f) {
  case 0:
  case 1:
  case 3:
  case 6:
    break;
  case 2:
  case 4:
  case 5:
    FUN_145045370(param_1,param_2,param_3);
    break;
  case 7:
    FUN_144bf0830(&local_58,param_2[1],0);
    while ((puVar2 = local_58 + 1, local_58 + 1 < local_50 ||
           (cVar3 = FUN_144bf0850(&local_58), puVar2 = local_58, cVar3 != '\0'))) {
      local_58 = puVar2;
      pbVar5 = (byte *)FUN_144bf04d0(local_58,local_res8);
      if ((*pbVar5 & 0x30) != 0) {
        uVar7 = *local_58;
        local_res10 = uVar7;
        uVar6 = FUN_144bf0530(&local_res10);
        uVar7 = FUN_144bebf80(param_2,&local_78,uVar7);
        FUN_145045120(param_1,uVar7,uVar6);
        if ((local_68 & 1) != 0) {
          FUN_144be6b30(local_68 & 0xfffffffffffffffe);
        }
      }
    }
    break;
  case 8:
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_60 = 0;
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
               &local_78);
    lVar1 = lStack_70;
    if ((local_60 & 1) != 0) {
      FUN_144be6b30(local_60 & 0xfffffffffffffffe);
    }
    if (lVar1 != 0) {
      puVar8 = (undefined4 *)FUN_144bef800(lVar1,&local_res10);
      lVar9 = 0;
      if (((byte)*puVar8 & 0x1f) == 7) {
        lVar9 = lVar1;
      }
      if (lVar9 != 0) {
        (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
                  ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_58,*param_2,param_2[1]);
        while (local_28 != -1) {
          FUN_145045120(param_1,local_40,0);
          (**(code **)(*(longlong *)(local_48 & 0xfffffffffffffffe) + 0x38))
                    ((longlong *)(local_48 & 0xfffffffffffffffe),&local_58);
        }
        if ((local_30 & 1) != 0) {
          FUN_144be6b30(local_30 & 0xfffffffffffffffe);
        }
        if ((local_48 & 1) != 0) {
          FUN_144be6b30(local_48 & 0xfffffffffffffffe);
        }
      }
    }
    break;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
  }
  return;
}



// FUNCTION 145045370 FUN_145045370 body=707 status=ok
// SIG undefined FUN_145045370(void)

void FUN_145045370(undefined8 param_1,ulonglong *param_2)

{
  float *pfVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 local_res10 [16];
  double local_res20;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong uStack_f8;
  undefined1 local_f0 [16];
  ulonglong local_e0;
  undefined1 local_d8 [176];
  
  puVar3 = (undefined8 *)FUN_144bef430(param_2[1],local_f0,&DAT_14c6dff50);
  pfVar1 = (float *)*puVar3;
  if ((local_e0 & 1) != 0) {
    FUN_144be6b30(local_e0 & 0xfffffffffffffffe);
  }
  uVar10 = param_2[1];
  if (pfVar1 == (float *)0x0) {
    puVar3 = (undefined8 *)FUN_144bef430(uVar10,local_f0,&DAT_14c6e0040);
    piVar2 = (int *)*puVar3;
    if ((local_e0 & 1) != 0) {
      FUN_144be6b30(local_e0 & 0xfffffffffffffffe);
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    uVar6 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    uVar7 = local_100;
    uVar8 = uStack_f8;
    uVar10 = uVar6;
    if ((param_2[1] != 0) &&
       (puVar4 = (undefined4 *)FUN_144bef800(param_2[1],local_res10), uVar7 = local_100,
       uVar8 = uStack_f8, ((byte)*puVar4 & 0x1f) == 4)) {
      uVar10 = *param_2;
      uVar7 = param_2[1];
      if ((param_2[2] & 1) != 0) {
        FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
      }
      uVar6 = param_2[2];
      uVar8 = uVar6;
    }
    local_108 = 0;
    local_100 = local_100 & 0xffffffffffffff00;
    (**(code **)(*(longlong *)(uVar6 & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(uVar6 & 0xfffffffffffffffe),local_res10,uVar10,uVar7,&local_108);
    iVar5 = (int)local_108;
    if ((char)local_100 != '\0') {
      iVar5 = -(int)local_108;
    }
    if ((iVar5 < *piVar2) || (piVar2[1] < iVar5)) {
      FUN_144bdf360(local_d8);
      FUN_145044fe0(*piVar2,piVar2[1],local_d8);
      FUN_144bdf2f0(local_d8);
    }
    if ((iVar5 < piVar2[2]) || (piVar2[3] < iVar5)) {
      FUN_144bdf360(local_d8);
      FUN_145044fe0(piVar2[2],piVar2[3],local_d8);
      FUN_144bdf2f0(local_d8);
    }
  }
  else {
    uVar9 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    uVar6 = local_100;
    uVar8 = uStack_f8;
    uVar7 = uVar9;
    if ((uVar10 != 0) &&
       (puVar4 = (undefined4 *)FUN_144bef800(uVar10,local_res10), uVar6 = local_100,
       uVar8 = uStack_f8, ((byte)*puVar4 & 0x1f) == 5)) {
      uVar7 = *param_2;
      uVar6 = param_2[1];
      if ((param_2[2] & 1) != 0) {
        FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
      }
      uVar9 = param_2[2];
      uVar8 = uVar9;
    }
    local_res20 = 0.0;
    (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(uVar9 & 0xfffffffffffffffe),local_res10,uVar7,uVar6,&local_res20);
    fVar11 = (float)local_res20;
    if ((fVar11 < *pfVar1) || (pfVar1[1] <= fVar11 && fVar11 != pfVar1[1])) {
      FUN_144bdf360(local_d8);
      FUN_145044f20(*pfVar1,pfVar1[1],local_d8);
      FUN_144bdf2f0(local_d8);
    }
    if ((fVar11 < pfVar1[2]) || (pfVar1[3] <= fVar11 && fVar11 != pfVar1[3])) {
      FUN_144bdf360(local_d8);
      FUN_145044f20(pfVar1[2],pfVar1[3],local_d8);
      FUN_144bdf2f0(local_d8);
    }
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 145045640 FUN_145045640 body=231 status=ok
// SIG undefined FUN_145045640(void)

undefined4 *
FUN_145045640(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong local_res18;
  
  plVar2 = param_5;
  if (*param_5 == *param_3) {
    *param_2 = 0;
    return param_2;
  }
  FUN_144beff00(param_4,&local_res18);
  lVar1 = plVar2[1];
  puVar4 = (uint *)FUN_144bef800(local_res18,&param_5);
  lVar5 = 0;
  if ((*puVar4 & 0x1f) == 0) {
    lVar5 = local_res18;
  }
  if ((((lVar5 == 0) && (lVar1 != 0)) && (cVar3 = FUN_144b45dd0(lVar1,local_res18), cVar3 == '\0'))
     && (*plVar2 != 0)) {
    *param_2 = 0x80040200;
    return param_2;
  }
  puVar6 = (undefined8 *)FUN_144befe50(param_4,0x100);
  if ((puVar6 != (undefined8 *)0x0) && ((code *)*puVar6 != (code *)0x0)) {
    (*(code *)*puVar6)(param_3,param_4,1);
  }
  *param_3 = *plVar2;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145045730 FUN_145045730 body=165 status=ok
// SIG undefined FUN_145045730(void)

undefined4 *
FUN_145045730(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  uVar1 = *param_3;
  FUN_144beff00(param_4,&local_res10);
  puVar4 = (undefined8 *)FUN_144beec10(local_18,uVar1,local_res10);
  lVar2 = puVar4[1];
  uVar1 = *puVar4;
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144befdb0(lVar2);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
  }
  *param_5 = uVar1;
  param_5[1] = lVar2;
  uVar3 = param_5[2];
  param_5[2] = uVar5;
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1450457e0 FUN_1450457e0 body=137 status=ok
// SIG undefined FUN_1450457e0(void)

longlong FUN_1450457e0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  uint *puVar3;
  undefined1 local_res10 [8];
  longlong local_18 [2];
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    return 0;
  }
  FUN_144beff00(param_3,local_18);
  if (local_18[0] != 0) {
    cVar2 = FUN_144b45dd0(local_18[0],param_4);
    if (cVar2 != '\0') {
      puVar3 = (uint *)FUN_144b45d50(local_18[0],local_res10);
      if ((*puVar3 >> 3 & 1) == 0) {
        return lVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 145045870 FUN_145045870 body=4 status=ok
// SIG undefined FUN_145045870(void)

undefined8 FUN_145045870(undefined8 param_1,undefined8 *param_2)

{
  return *param_2;
}



// FUNCTION 145045880 FUN_145045880 body=87 status=ok
// SIG undefined FUN_145045880(void)

undefined8 FUN_145045880(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1450458e0 FUN_1450458e0 body=88 status=ok
// SIG undefined FUN_1450458e0(void)

undefined8 * FUN_1450458e0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiEdgeGeometry::vftable;
  param_1[5] = param_1 + 9;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000001;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 145045940 FUN_145045940 body=85 status=ok
// SIG undefined FUN_145045940(void)

undefined1 * FUN_145045940(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 4) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 8) = 0x3903126f;
  *(undefined4 *)(param_1 + 0xc) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x10) = 0x14;
  *(undefined4 *)(param_1 + 0x14) = 0x3d4ccccd;
  *(undefined2 *)(param_1 + 0x18) = 0x101;
  *(undefined4 *)(param_1 + 0x1c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x20) = 0x42480000;
  *(undefined4 *)(param_1 + 0x24) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  return param_1;
}



// FUNCTION 1450459a0 FUN_1450459a0 body=252 status=ok
// SIG undefined FUN_1450459a0(void)

undefined4 * FUN_1450459a0(undefined4 *param_1)

{
  *param_1 = 0x3fc00000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[1] = 0x3e19999a;
  param_1[2] = 0x3ecccccd;
  param_1[3] = 0x3f19999a;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f99999a;
  param_1[6] = 0x3f400000;
  param_1[7] = 0x3fc00000;
  param_1[8] = 0x40000000;
  param_1[9] = 40000;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0x42c80000;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0x3c23d70a;
  param_1[0xe] = 0x3f7d70a4;
  param_1[0xf] = 0x3dcccccd;
  param_1[0x10] = 0x3dcccccd;
  param_1[0x11] = 0x3f800000;
  param_1[0x12] = 0x3f800000;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0x3ccccccd;
  param_1[0x18] = 0x3903126f;
  param_1[0x19] = 0x447a0000;
  param_1[0x1a] = 0x14;
  param_1[0x1b] = 0x3d4ccccd;
  *(undefined2 *)(param_1 + 0x1c) = 0x101;
  param_1[0x1d] = 0x42480000;
  param_1[0x1e] = 0x42480000;
  param_1[0x1f] = 0x3a83126f;
  param_1[0x23] = 0x80000000;
  return param_1;
}



// FUNCTION 145045aa0 FUN_145045aa0 body=40 status=ok
// SIG undefined FUN_145045aa0(void)

undefined8 FUN_145045aa0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_c8 [192];
  
  FUN_145045ad0(param_2,param_1,local_c8);
  return param_2;
}



// FUNCTION 145045ad0 FUN_145045ad0 body=926 status=ok
// SIG undefined FUN_145045ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145045ad0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  undefined1 local_res10 [8];
  undefined1 local_248 [16];
  undefined1 local_238 [528];
  
  uVar4 = param_2[1];
  *param_3 = *param_2;
  param_3[1] = uVar4;
  uVar4 = param_2[3];
  param_3[2] = param_2[2];
  param_3[3] = uVar4;
  uVar4 = param_2[5];
  param_3[4] = param_2[4];
  param_3[5] = uVar4;
  uVar4 = param_2[7];
  param_3[6] = param_2[6];
  param_3[7] = uVar4;
  uVar4 = param_2[9];
  param_3[8] = param_2[8];
  param_3[9] = uVar4;
  uVar4 = param_2[0xb];
  param_3[10] = param_2[10];
  param_3[0xb] = uVar4;
  uVar4 = param_2[0xd];
  param_3[0xc] = param_2[0xc];
  param_3[0xd] = uVar4;
  uVar4 = param_2[0xf];
  param_3[0xe] = param_2[0xe];
  param_3[0xf] = uVar4;
  uVar4 = param_2[0x11];
  param_3[0x10] = param_2[0x10];
  param_3[0x11] = uVar4;
  *(undefined4 *)(param_3 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_3 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  piVar2 = (int *)FUN_145045e70(local_res10,param_2,param_2 + 0x15,param_3 + 0x15);
  if ((*piVar2 < 0) ||
     (piVar2 = (int *)FUN_145045e70(local_res10,param_2,param_2 + 0x14,param_3 + 0x14), *piVar2 < 0)
     ) {
    *param_1 = 0x80040200;
  }
  else {
    iVar1 = -0x7ffbfe00;
    fVar6 = *(float *)(param_2 + 0x14);
    if (*(float *)(param_2 + 0x15) <= *(float *)(param_2 + 0x14)) {
      fVar6 = *(float *)(param_2 + 0x15);
    }
    fVar9 = *(float *)((longlong)param_2 + 0xa4);
    if (*(float *)((longlong)param_2 + 0xac) <= *(float *)((longlong)param_2 + 0xa4)) {
      fVar9 = *(float *)((longlong)param_2 + 0xac);
    }
    fVar6 = fVar6 * *(float *)((longlong)param_2 + 0x94);
    if ((fVar6 < 0.0) || (16777216.0 <= fVar6)) {
      iVar3 = -0x7ffbfe00;
    }
    else {
      fVar7 = ((fVar6 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
      uVar8 = -(uint)(fVar6 == -0.0 || 8388608.0 < ABS(fVar6));
      *(int *)(param_3 + 0x15) =
           (int)(float)(uVar8 & (uint)fVar6 |
                       ~uVar8 & (uint)(fVar7 - (float)(-(uint)(fVar6 < fVar7) & _DAT_14c6daca0)));
      iVar3 = 0;
    }
    if (iVar3 < 0) {
      FUN_144bde670(local_248,local_238,0x200);
      FUN_144be6160(local_248,
                    "The maximum boundary lowering distance must be nonnegative, and less than half the generation domain size."
                   );
      uVar5 = 0x47;
      uVar4 = 0x5e54346c;
    }
    else {
      fVar9 = fVar9 * *(float *)((longlong)param_2 + 0x94);
      if ((fVar9 < 0.0) || (16777216.0 <= fVar9)) {
        iVar3 = -0x7ffbfe00;
      }
      else {
        fVar6 = ((fVar9 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
        uVar8 = -(uint)(fVar9 == -0.0 || 8388608.0 < ABS(fVar9));
        *(int *)((longlong)param_3 + 0xac) =
             (int)(float)(uVar8 & (uint)fVar9 |
                         ~uVar8 & (uint)(fVar6 - (float)(-(uint)(fVar9 < fVar6) & _DAT_14c6daca0)));
        iVar3 = 0;
      }
      if (iVar3 < 0) {
        FUN_144bde670(local_248,local_238,0x200);
        FUN_144be6160(local_248,
                      "The maximum boundary raising distance must be nonnegative, and less than half the generation domain size."
                     );
        uVar5 = 0x4d;
        uVar4 = 0x71b0c2c3;
      }
      else {
        fVar6 = *(float *)(param_2 + 0x16) * *(float *)((longlong)param_2 + 0x94);
        if ((0.0 <= fVar6) && (fVar6 < 16777216.0)) {
          fVar9 = ((fVar6 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
          uVar8 = -(uint)(fVar6 == -0.0 || 8388608.0 < ABS(fVar6));
          *(int *)(param_3 + 0x16) =
               (int)(float)(uVar8 & (uint)fVar6 |
                           ~uVar8 & (uint)(fVar9 - (float)(-(uint)(fVar6 < fVar9) & _DAT_14c6daca0))
                           );
          iVar1 = 0;
        }
        if (-1 < iVar1) {
          *(undefined1 *)((longlong)param_3 + 0xb4) = *(undefined1 *)((longlong)param_2 + 0xb4);
          *param_1 = 0;
          return param_1;
        }
        FUN_144bde670(local_248,local_238,0x200);
        FUN_144be6160(local_248,
                      "The boundary contraction limit must be nonnegative, and less than half the generation domain size."
                     );
        uVar5 = 0x53;
        uVar4 = 0x1eb6b58e;
      }
    }
    FUN_144bfc0d0(uVar4,local_238,
                  "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationSettings.cpp"
                  ,uVar5);
    FUN_144bde6e0(local_248);
    *param_1 = 0x80040200;
  }
  return param_1;
}



// FUNCTION 145045e70 FUN_145045e70 body=471 status=ok
// SIG undefined FUN_145045e70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145045e70(undefined4 *param_1,longlong param_2,float *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 local_228 [16];
  undefined1 local_218 [528];
  
  fVar3 = *param_3 * *(float *)(param_2 + 0x94);
  iVar1 = -0x7ffbfe00;
  if ((fVar3 < 0.0) || (16777216.0 <= fVar3)) {
    iVar2 = -0x7ffbfe00;
  }
  else {
    fVar4 = ((fVar3 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
    uVar5 = -(uint)(fVar3 == -0.0 || 8388608.0 < ABS(fVar3));
    *param_4 = (int)(float)(uVar5 & (uint)fVar3 |
                           ~uVar5 & (uint)(fVar4 - (float)(-(uint)(fVar3 < fVar4) & _DAT_14c6daca0))
                           );
    iVar2 = 0;
  }
  if (iVar2 < 0) {
    FUN_144bde670(local_228,local_218,0x200);
    FUN_144be6160(local_228,
                  "The maximum lowering distance must be nonnegative, and less than half the generation domain size."
                 );
    FUN_144bfc0d0(0xa811cf8,local_218,
                  "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationSettings.cpp"
                  ,0x26);
    FUN_144bde6e0(local_228);
    *param_1 = 0x80040200;
  }
  else {
    fVar3 = param_3[1] * *(float *)(param_2 + 0x94);
    if ((0.0 <= fVar3) && (fVar3 < 16777216.0)) {
      fVar4 = ((fVar3 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
      uVar5 = -(uint)(fVar3 == -0.0 || 8388608.0 < ABS(fVar3));
      param_4[1] = (int)(float)(uVar5 & (uint)fVar3 |
                               ~uVar5 & (uint)(fVar4 - (float)(-(uint)(fVar3 < fVar4) &
                                                              _DAT_14c6daca0)));
      iVar1 = 0;
    }
    if (iVar1 < 0) {
      FUN_144bde670(local_228,local_218,0x200);
      FUN_144be6160(local_228,
                    "The maximum raising distance must be nonnegative, and less than half the generation domain size."
                   );
      FUN_144bfc0d0(0x355e68aa,local_218,
                    "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationSettings.cpp"
                    ,0x2c);
      FUN_144bde6e0(local_228);
      *param_1 = 0x80040200;
    }
    else {
      *param_1 = 0;
    }
  }
  return param_1;
}



// FUNCTION 145046050 FUN_145046050 body=239 status=ok
// SIG undefined FUN_145046050(void)

undefined4 * FUN_145046050(longlong param_1,undefined4 *param_2)

{
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  if (*(float *)(param_1 + 0xa0) <= 0.0 && *(float *)(param_1 + 0xa0) != 0.0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,"Minimum region area must be nonnegative.");
    FUN_144bfc0d0(0x5abc9b81,local_208,
                  "NavMesh\\Generation\\Pruning\\hkaiNavMeshGenerationPruningSettings.cpp",0x14);
    FUN_144bde6e0(local_218);
    *param_2 = 0x80040200;
    return param_2;
  }
  if (*(float *)(param_1 + 0xa4) <= 0.0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,"Minimum distance to seed points must be positive.");
    FUN_144bfc0d0(0x73bb4f4d,local_208,
                  "NavMesh\\Generation\\Pruning\\hkaiNavMeshGenerationPruningSettings.cpp",0x1a);
    FUN_144bde6e0(local_218);
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145046140 FUN_145046140 body=331 status=ok
// SIG undefined FUN_145046140(void)

undefined4 * FUN_145046140(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  fVar5 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa0);
  iVar1 = -0x7ffbfe00;
  if ((fVar5 < 0.0) || (16777216.0 <= fVar5)) {
    iVar2 = -0x7ffbfe00;
  }
  else {
    iVar2 = 0;
  }
  if (iVar2 < 0) {
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,
                  "The maximum step height must be nonnegative and less than half the generation domain size."
                 );
    uVar4 = 0x15;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0xa4);
    if ((0.0 <= fVar5) && (fVar5 < 16777216.0)) {
      iVar1 = 0;
    }
    if (-1 < iVar1) {
      if (*(float *)(param_1 + 0xa4) <= *(float *)(param_1 + 0xa8) * 2.0) {
        *param_2 = 0;
        return param_2;
      }
      FUN_144bde670(local_218,local_208,0x200);
      FUN_144be6160(local_218,
                    "The maximum gap width must be no greater than twice the minimum character radius."
                   );
      uVar4 = 0x21;
      uVar3 = 0x24771deb;
      goto LAB_1450461b7;
    }
    FUN_144bde670(local_218,local_208,0x200);
    FUN_144be6160(local_218,
                  "The maximum gap width must be nonnegative and less than half the generation domain size."
                 );
    uVar4 = 0x1b;
  }
  uVar3 = 0x95560d5;
LAB_1450461b7:
  FUN_144bfc0d0(uVar3,local_208,
                "NavMesh\\Generation\\EdgeConnection\\hkaiNavMeshGenerationEdgeConnectionSettings.cpp"
                ,uVar4);
  FUN_144bde6e0(local_218);
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145046290 FUN_145046290 body=563 status=ok
// SIG undefined FUN_145046290(void)

longlong * FUN_145046290(longlong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int local_80;
  int local_7c;
  undefined4 local_78;
  ulonglong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [24];
  
  local_90 = param_3[4];
  uVar16 = (ulonglong)local_90;
  local_70 = *param_2;
  uStack_68 = param_2[1];
  local_78 = *param_3;
  uVar1 = param_2[2];
  local_50 = (undefined4)param_2[4];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_48 = (undefined4)param_2[5];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_80 = param_3[3];
  uVar12 = (ulonglong)local_80;
  local_7c = param_3[6];
  uVar17 = (ulonglong)local_7c;
  local_8c = param_3[7];
  uVar15 = (ulonglong)local_8c;
  local_88 = param_3[1];
  local_60 = param_2[2];
  uStack_58 = param_2[3];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar16;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1;
  lVar13 = param_2[3] * uVar16 + SUB168(auVar3 * auVar7,8);
  if (local_90 < 0) {
    lVar13 = lVar13 - uVar1;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar15;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_2;
  uVar2 = *param_2;
  lVar14 = param_2[1] * uVar15 + SUB168(auVar4 * auVar8,8);
  if (local_8c < 0) {
    lVar14 = lVar14 - *param_2;
  }
  *param_1 = uVar2 * uVar15 - uVar1 * uVar16;
  param_1[1] = (lVar14 - lVar13) - (ulonglong)(uVar2 * uVar15 < uVar1 * uVar16);
  uVar1 = *param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  lVar13 = param_2[1] * uVar17 + SUB168(auVar5 * auVar9,8);
  if (local_7c < 0) {
    lVar13 = lVar13 - uVar1;
  }
  uVar15 = param_2[2];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar12;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar15;
  lVar14 = param_2[3] * uVar12 + SUB168(auVar6 * auVar10,8);
  if (local_80 < 0) {
    lVar14 = lVar14 - uVar15;
  }
  param_1[2] = uVar15 * uVar12 - uVar1 * uVar17;
  param_1[3] = (lVar14 - lVar13) - (ulonglong)(uVar15 * uVar12 < uVar1 * uVar17);
  plVar11 = (longlong *)FUN_145046c80(local_40,&local_80,&local_90,&local_70);
  lVar13 = plVar11[1];
  lVar14 = plVar11[2];
  param_1[4] = *plVar11;
  param_1[5] = lVar13;
  param_1[6] = lVar14;
  return param_1;
}



// FUNCTION 1450464d0 FUN_1450464d0 body=365 status=ok
// SIG undefined FUN_1450464d0(void)

undefined8 *
FUN_1450464d0(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 *param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  *param_1 = param_2;
  uVar5 = *(undefined8 *)(param_3 + 2);
  param_1[1] = *(undefined8 *)param_3;
  param_1[2] = uVar5;
  uVar5 = *(undefined8 *)(param_3 + 6);
  uVar6 = *param_4;
  uVar7 = param_4[1];
  param_1[3] = *(undefined8 *)(param_3 + 4);
  param_1[4] = uVar5;
  *(int *)(param_1 + 5) = param_3[8];
  iVar1 = param_3[6];
  iVar2 = param_3[4];
  iVar3 = param_3[7];
  iVar4 = param_3[3];
  lVar9 = (longlong)param_3[5] * (longlong)iVar1 - (longlong)param_3[8] * (longlong)iVar4;
  param_1[6] = (longlong)param_3[8] * (longlong)iVar2 - (longlong)param_3[5] * (longlong)iVar3;
  param_1[7] = lVar9;
  lVar14 = (longlong)iVar3 * (longlong)iVar4 - (longlong)iVar2 * (longlong)iVar1;
  param_1[8] = lVar14;
  iVar1 = param_3[2];
  iVar2 = *param_3;
  uVar8 = iVar1 * lVar14;
  iVar3 = param_3[1];
  uVar10 = iVar3 * lVar9;
  uVar11 = (longlong)iVar2 * param_1[6];
  uVar12 = uVar11 + uVar10;
  lVar13 = uVar12 + uVar8;
  param_1[9] = -lVar13;
  param_1[10] = -(ulonglong)(lVar13 != 0) -
                (SUB168(SEXT816((longlong)iVar2) * SEXT816((longlong)param_1[6]),8) +
                 SUB168(SEXT816((longlong)iVar3) * SEXT816(lVar9),8) +
                 (ulonglong)CARRY8(uVar11,uVar10) +
                 SUB168(SEXT816((longlong)iVar1) * SEXT816(lVar14),8) +
                (ulonglong)CARRY8(uVar12,uVar8));
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar7;
  uVar5 = *param_5;
  uVar6 = param_5[1];
  param_1[0xf] = param_6;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  uVar5 = param_7[1];
  param_1[0x10] = *param_7;
  param_1[0x11] = uVar5;
  uVar5 = param_8[1];
  param_1[0x12] = *param_8;
  param_1[0x13] = uVar5;
  uVar5 = param_9[1];
  param_1[0x14] = *param_9;
  param_1[0x15] = uVar5;
  param_1[0x1a] = param_1 + 0x1c;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80000010;
  return param_1;
}



// FUNCTION 145046640 FUN_145046640 body=3 status=ok
// SIG undefined FUN_145046640(void)

void FUN_145046640(void)

{
  return;
}



// FUNCTION 145046650 FUN_145046650 body=180 status=ok
// SIG undefined FUN_145046650(void)

void FUN_145046650(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x50);
  uVar2 = *(undefined4 *)(lVar3 + 0x50);
  iVar4 = iVar1 + param_2;
  if ((int)(*(uint *)(lVar3 + 0x54) & 0x7fffffff) < iVar4) {
    FUN_144d20a90((longlong *)(lVar3 + 0x48),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  *(int *)(lVar3 + 0x50) = iVar4;
  lVar3 = (longlong)iVar1 * 0x60 + *(longlong *)(lVar3 + 0x48);
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar2;
  *(int *)(param_1 + 0x17) = param_2;
  param_1[0x18] = lVar3;
  param_1[0x19] = (longlong)param_2 * 0x60 + lVar3;
  return;
}



// FUNCTION 145046710 FUN_145046710 body=77 status=ok
// SIG undefined FUN_145046710(void)

void FUN_145046710(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar7 = (longlong)param_2 * 0x60;
  *(undefined8 *)(lVar7 + lVar2) = *param_3;
  ((undefined8 *)(lVar7 + lVar2))[1] = uVar3;
  uVar3 = param_3[4];
  uVar6 = param_3[5];
  puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar2);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar6;
  uVar3 = param_3[8];
  uVar6 = param_3[9];
  puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar2);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  uVar4 = param_3[10];
  uVar5 = param_3[0xb];
  puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar2);
  *puVar1 = uVar3;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar2);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  return;
}



// FUNCTION 145046760 FUN_145046760 body=153 status=ok
// SIG undefined FUN_145046760(void)

void FUN_145046760(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  if ((int)(*(uint *)((longlong)param_1 + 0xdc) & 0x7fffffff) < param_2) {
    FUN_141807aa8(param_1 + 0x1a,&PTR_vftable_14c6e47c0,(longlong)param_2);
  }
  iVar1 = (int)param_1[0x1b];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x1b) = param_2;
    if (0 < param_2 - iVar1) {
      uVar2 = (ulonglong)(uint)(param_2 - iVar1);
      puVar3 = (undefined4 *)(param_1[0x1a] + (longlong)iVar1 * 4);
      do {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0xffffffff;
        }
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != 0);
    }
  }
  else if (param_2 < iVar1) {
    *(int *)(param_1 + 0x1b) = param_2;
  }
  FUN_144cb3b30(*param_1,*(undefined4 *)(*param_1 + 0x30));
  return;
}



// FUNCTION 145046800 FUN_145046800 body=252 status=ok
// SIG undefined FUN_145046800(void)

void FUN_145046800(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  uVar2 = *(undefined4 *)(*param_1 + 0x20);
  FUN_144cb3900();
  iVar3 = FUN_144cb4970(*param_1);
  local_48 = param_1[0x12] + (longlong)(iVar3 * param_2) * 4;
  local_40 = param_1[0x12] + ((longlong)iVar3 + (longlong)(iVar3 * param_2)) * 4;
  FUN_144cb48b0(*param_1,uVar2,&local_48);
  lVar1 = (longlong)param_2 * 0xc;
  local_48 = *(longlong *)(param_1[0x14] + lVar1);
  local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(param_1[0x14] + 8 + lVar1));
  FUN_144cb4c80(*param_1,uVar2,&local_48);
  local_38 = param_1[6];
  lStack_30 = param_1[7];
  local_28 = (undefined4)param_1[8];
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_20 = (undefined4)param_1[9];
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_18 = param_1[10];
  FUN_144cb4a30(*param_1,uVar2,&local_38);
  FUN_144cb4b80(*param_1,uVar2,
                *(undefined4 *)
                 (param_1[0x10] + (longlong)*(int *)(*(longlong *)param_1[0xf] + 8 + lVar1) * 4));
  param_1[0x24] = -1;
  return;
}



// FUNCTION 145046900 FUN_145046900 body=794 status=ok
// SIG undefined FUN_145046900(void)

void FUN_145046900(longlong *param_1,int param_2,int param_3,int param_4,int param_5,uint param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong lStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  uVar1 = *(undefined4 *)(*param_1 + 0x30);
  puVar4 = (uint *)FUN_144cb3c80();
  uVar8 = param_6;
  *(undefined4 *)(param_1[0x1a] + (longlong)param_2 * 4) = uVar1;
  if ((int)param_1[0x24] < 0) {
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(undefined4 *)(*(longlong *)(*param_1 + 0x18) + -4 + (longlong)*(int *)(*param_1 + 0x20) * 4) =
         uVar1;
  }
  else {
    puVar4[2] = *(uint *)((longlong)param_1 + 0x124);
    *(undefined4 *)
     ((longlong)*(int *)((longlong)param_1 + 0x124) * 0x60 + 0xc + *(longlong *)(*param_1 + 0x28)) =
         uVar1;
  }
  bVar7 = ~(byte)(param_6 >> 0x1f) & 1;
  puVar4[1] = *(int *)(*param_1 + 0x20) - 1;
  *puVar4 = *(int *)((longlong)param_1 + 0xb4) + param_3 | (int)param_1[0x16] << 0x1e;
  FUN_144cb50f0(*param_1,uVar1,bVar7);
  if ((bVar7 == 0) && (-1 < param_5)) {
    uVar2 = *(uint *)(param_1[0x1a] + (longlong)param_5 * 4);
    if (0 < (int)uVar2) {
      *(undefined4 *)((longlong)(int)uVar2 * 0x60 + 0x10 + *(longlong *)(*param_1 + 0x28)) = uVar1;
      puVar4[4] = uVar2;
    }
  }
  else {
    puVar4[4] = 0xffffffff;
  }
  uVar8 = uVar8 & 0x3fffffff;
  if (uVar8 == 0x3fffffff) {
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    *(undefined4 *)((longlong)param_1 + 0x124) = uVar1;
  }
  else {
    local_50 = param_1[1];
    lStack_48 = param_1[2];
    local_30 = (undefined4)param_1[5];
    local_40 = (undefined4)param_1[3];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_38 = (undefined4)param_1[4];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x24);
    FUN_145046290(&local_98,(ulonglong)uVar8 * 0x40 + param_1[0xd],&local_50);
    lVar5 = FUN_147e513e3(&local_88,&param_6);
    iVar3 = param_6 * 0x800000;
    lVar6 = FUN_147e513e3(&local_98,&param_6);
    fStack_60 = (float)(param_6 * 0x800000 + (int)(float)lVar6) * 5.421011e-20;
    fStack_5c = (float)((int)(float)lVar5 + iVar3) * 5.421011e-20;
    lVar5 = FUN_147e510dd(&local_78,&param_6);
    *(undefined8 *)(puVar4 + 6) = local_98;
    *(undefined8 *)(puVar4 + 8) = uStack_90;
    *(undefined8 *)(puVar4 + 10) = local_88;
    *(undefined8 *)(puVar4 + 0xc) = uStack_80;
    *(undefined8 *)(puVar4 + 0xe) = local_78;
    *(undefined8 *)(puVar4 + 0x10) = uStack_70;
    puVar4[0x12] = local_68;
    puVar4[0x13] = uStack_64;
    puVar4[0x14] = (uint)fStack_60;
    puVar4[0x15] = (uint)fStack_5c;
    *(ulonglong *)(puVar4 + 0x16) =
         CONCAT44(uStack_54,(float)((int)(float)lVar5 + param_6 * 0x800000) * 5.421011e-20);
    FUN_144cd8eb0((longlong)param_3 * 0x60 + param_1[0x18],(longlong)param_4 * 0x60 + param_1[0x18])
    ;
    lVar5 = param_1[0xb];
    lVar6 = (param_1[0xc] - lVar5) / 6 + (param_1[0xc] - lVar5 >> 0x3f);
    iVar3 = (int)(lVar6 >> 1) - (int)(lVar6 >> 0x3f);
    if ((int)uVar8 < iVar3) {
      lVar6 = (longlong)(int)((longlong)(ulonglong)(uVar8 + 1) % (longlong)iVar3);
      local_b8 = *(undefined8 *)(lVar5 + lVar6 * 0xc);
      local_b0 = *(undefined4 *)(lVar5 + 8 + lVar6 * 0xc);
      local_a8 = *(undefined8 *)(lVar5 + (ulonglong)uVar8 * 0xc);
      local_a0 = *(undefined4 *)(lVar5 + 8 + (ulonglong)uVar8 * 0xc);
      FUN_144cb4ef0(*param_1,uVar1,&local_a8,&local_b8);
    }
    *(undefined4 *)((longlong)param_1 + 0x124) = uVar1;
  }
  return;
}



// FUNCTION 145046c20 FUN_145046c20 body=65 status=ok
// SIG undefined FUN_145046c20(void)

void FUN_145046c20(longlong *param_1)

{
  *(int *)((longlong)*(int *)(*param_1 + 0x30) * 0x60 + -0x54 + *(longlong *)(*param_1 + 0x28)) =
       (int)param_1[0x24];
  *(int *)((longlong)(int)param_1[0x24] * 0x60 + 8 + *(longlong *)(*param_1 + 0x28)) =
       *(int *)(*param_1 + 0x30) + -1;
  return;
}



// FUNCTION 145046c70 FUN_145046c70 body=3 status=ok
// SIG undefined FUN_145046c70(void)

void FUN_145046c70(void)

{
  return;
}



// FUNCTION 145046c80 FUN_145046c80 body=894 status=ok
// SIG undefined FUN_145046c80(void)

longlong * FUN_145046c80(longlong *param_1,undefined4 *param_2,int *param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  bool bVar50;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  
  uVar39 = *param_4;
  uVar42 = (ulonglong)param_3[1];
  uVar41 = param_4[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar42;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar39;
  uVar36 = SUB168(auVar1 * auVar17,8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar42;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar41;
  uVar47 = uVar41 * uVar42 + uVar36;
  lVar33 = (ulonglong)CARRY8(uVar41 * uVar42,uVar36) + SUB168(auVar2 * auVar18,8);
  if ((longlong)uVar41 < 0) {
    lVar33 = lVar33 - uVar42;
  }
  if (param_3[1] < 0) {
    bVar50 = uVar47 < uVar39;
    uVar47 = uVar47 - uVar39;
    local_50 = (lVar33 - uVar41) - (ulonglong)bVar50;
  }
  uVar45 = (ulonglong)*param_3;
  uVar36 = param_4[3];
  uVar48 = param_4[2];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar45;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar48;
  uVar37 = SUB168(auVar3 * auVar19,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar45;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar36;
  uVar43 = uVar36 * uVar45 + uVar37;
  lVar33 = (ulonglong)CARRY8(uVar36 * uVar45,uVar37) + SUB168(auVar4 * auVar20,8);
  if ((longlong)uVar36 < 0) {
    lVar33 = lVar33 - uVar45;
  }
  if (*param_3 < 0) {
    bVar50 = uVar43 < uVar48;
    uVar43 = uVar43 - uVar48;
    local_50 = (lVar33 - uVar36) - (ulonglong)bVar50;
  }
  uVar37 = uVar48 * uVar45 - uVar39 * uVar42;
  uVar47 = (uVar43 - uVar47) - (ulonglong)(uVar48 * uVar45 < uVar39 * uVar42);
  uVar48 = (ulonglong)(int)param_2[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar48;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar37;
  uVar36 = SUB168(auVar5 * auVar21,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar48;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar47;
  uVar43 = uVar47 * uVar48 + uVar36;
  lVar33 = (ulonglong)CARRY8(uVar47 * uVar48,uVar36) + SUB168(auVar6 * auVar22,8);
  if ((longlong)uVar47 < 0) {
    lVar33 = lVar33 - uVar48;
  }
  if ((int)param_2[2] < 0) {
    bVar50 = uVar43 < uVar37;
    uVar43 = uVar43 - uVar37;
    lVar33 = (lVar33 - uVar47) - (ulonglong)bVar50;
  }
  uVar36 = param_4[5];
  uVar47 = param_4[4];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar45;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar47;
  uVar38 = SUB168(auVar7 * auVar23,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar45;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar36;
  uVar46 = uVar36 * uVar45 + uVar38;
  lVar34 = (ulonglong)CARRY8(uVar36 * uVar45,uVar38) + SUB168(auVar8 * auVar24,8);
  if ((longlong)uVar36 < 0) {
    lVar34 = lVar34 - uVar45;
  }
  if (*param_3 < 0) {
    bVar50 = uVar46 < uVar47;
    uVar46 = uVar46 - uVar47;
    local_50 = (lVar34 - uVar36) - (ulonglong)bVar50;
  }
  uVar40 = (ulonglong)param_3[2];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar40;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar39;
  uVar38 = SUB168(auVar9 * auVar25,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar40;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar41;
  uVar44 = uVar41 * uVar40 + uVar38;
  lVar34 = (ulonglong)CARRY8(uVar41 * uVar40,uVar38) + SUB168(auVar10 * auVar26,8);
  if ((longlong)uVar41 < 0) {
    lVar34 = lVar34 - uVar40;
  }
  if (param_3[2] < 0) {
    bVar50 = uVar44 < *param_4;
    uVar44 = uVar44 - *param_4;
    local_50 = (lVar34 - uVar41) - (ulonglong)bVar50;
  }
  uVar49 = uVar39 * uVar40 - uVar47 * uVar45;
  uVar45 = (uVar44 - uVar46) - (ulonglong)(uVar39 * uVar40 < uVar47 * uVar45);
  uVar38 = (ulonglong)(int)param_2[1];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar38;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar49;
  uVar39 = SUB168(auVar11 * auVar27,8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar38;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar45;
  uVar41 = uVar38 * uVar45 + uVar39;
  lVar34 = (ulonglong)CARRY8(uVar38 * uVar45,uVar39) + SUB168(auVar12 * auVar28,8);
  if ((longlong)uVar45 < 0) {
    lVar34 = lVar34 - uVar38;
  }
  if ((int)param_2[1] < 0) {
    bVar50 = uVar41 < uVar49;
    uVar41 = uVar41 - uVar49;
    lVar34 = (lVar34 - uVar45) - (ulonglong)bVar50;
  }
  uVar39 = param_4[3];
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = param_4[2];
  uVar45 = SUB168(auVar13 * auVar29,8);
  uVar44 = param_4[2] * uVar40;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar40;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar39;
  uVar46 = uVar39 * uVar40 + uVar45;
  lVar35 = (ulonglong)CARRY8(uVar39 * uVar40,uVar45) + SUB168(auVar14 * auVar30,8);
  if ((longlong)uVar39 < 0) {
    lVar35 = lVar35 - uVar40;
  }
  if (param_3[2] < 0) {
    bVar50 = uVar46 < param_4[2];
    uVar46 = uVar46 - param_4[2];
    local_50 = (lVar35 - uVar39) - (ulonglong)bVar50;
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar42;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar47;
  uVar39 = SUB168(auVar15 * auVar31,8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar42;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar36;
  uVar45 = uVar36 * uVar42 + uVar39;
  lVar35 = (ulonglong)CARRY8(uVar36 * uVar42,uVar39) + SUB168(auVar16 * auVar32,8);
  if ((longlong)uVar36 < 0) {
    lVar35 = lVar35 - uVar42;
  }
  if (param_3[1] < 0) {
    bVar50 = uVar45 < param_4[4];
    uVar45 = uVar45 - param_4[4];
    local_50 = (lVar35 - uVar36) - (ulonglong)bVar50;
  }
  local_70 = uVar47 * uVar42 - uVar44;
  local_68 = (uVar45 - uVar46) - (ulonglong)(uVar47 * uVar42 < uVar44);
  FUN_147e5d195(&local_70,*param_2,&local_60,1);
  uVar36 = local_60 + uVar38 * uVar49;
  uVar39 = (ulonglong)CARRY8(local_60,uVar38 * uVar49);
  uVar47 = local_58 + uVar41 + uVar39;
  *param_1 = uVar36 + uVar37 * uVar48;
  uVar36 = (ulonglong)CARRY8(uVar36,uVar37 * uVar48);
  uVar42 = uVar47 + uVar43;
  param_1[1] = uVar42 + uVar36;
  param_1[2] = local_50 + lVar34 +
               (ulonglong)(CARRY8(local_58,uVar41) || CARRY8(local_58 + uVar41,uVar39)) + lVar33 +
               (ulonglong)(CARRY8(uVar47,uVar43) || CARRY8(uVar42,uVar36));
  return param_1;
}



// FUNCTION 145047000 FUN_145047000 body=757 status=ok
// SIG undefined FUN_145047000(void)

undefined8 * FUN_145047000(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  param_1[2] = 1;
  lVar10 = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::VertexSetApproximation::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  iVar3 = (int)param_2[1];
  if (0 < iVar3) {
    FUN_1418055da(param_1 + 3,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  if ((*(int *)(param_1 + 4) < iVar3) || (iVar3 < *(int *)(param_1 + 4))) {
    *(int *)(param_1 + 4) = iVar3;
  }
  lVar8 = *param_2;
  lVar4 = param_1[3];
  lVar11 = (longlong)(int)(((longlong)(int)param_2[1] * 0xc) / 0xc);
  if (3 < lVar11) {
    lVar5 = (lVar11 - 4U >> 2) + 1;
    lVar10 = lVar5 * 4;
    piVar6 = (int *)(lVar8 + 0x10);
    pauVar7 = (undefined1 (*) [16])(lVar4 + 0x20);
    do {
      auVar12._0_4_ = (float)piVar6[-4];
      auVar12._4_4_ = (float)piVar6[-3];
      auVar12._8_4_ = (float)piVar6[-2];
      auVar12._12_4_ = 0;
      pauVar7[-2] = auVar12;
      auVar13._0_4_ = (float)piVar6[-1];
      auVar13._4_4_ = (float)*piVar6;
      auVar13._8_4_ = (float)piVar6[1];
      auVar13._12_4_ = 0;
      pauVar7[-1] = auVar13;
      auVar14._0_4_ = (float)piVar6[2];
      auVar14._4_4_ = (float)piVar6[3];
      auVar14._8_4_ = (float)piVar6[4];
      auVar14._12_4_ = 0;
      *pauVar7 = auVar14;
      auVar15._0_4_ = (float)piVar6[5];
      auVar15._4_4_ = (float)piVar6[6];
      auVar15._8_4_ = (float)piVar6[7];
      auVar15._12_4_ = 0;
      pauVar7[1] = auVar15;
      lVar5 = lVar5 + -1;
      piVar6 = piVar6 + 0xc;
      pauVar7 = pauVar7 + 4;
    } while (lVar5 != 0);
  }
  if (lVar10 < lVar11) {
    lVar11 = lVar11 - lVar10;
    piVar6 = (int *)(lVar8 + (lVar10 * 3 + 1) * 4);
    pauVar7 = (undefined1 (*) [16])(lVar10 * 0x10 + lVar4);
    do {
      iVar3 = *piVar6;
      piVar1 = piVar6 + -1;
      piVar2 = piVar6 + 1;
      piVar6 = piVar6 + 3;
      auVar16._0_4_ = (float)*piVar1;
      auVar16._4_4_ = (float)iVar3;
      auVar16._8_4_ = (float)*piVar2;
      auVar16._12_4_ = 0;
      *pauVar7 = auVar16;
      lVar11 = lVar11 + -1;
      pauVar7 = pauVar7 + 1;
    } while (lVar11 != 0);
  }
  iVar3 = (int)param_2[3];
  if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < iVar3) {
    FUN_1418055da(param_1 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  if ((*(int *)(param_1 + 6) < iVar3) || (iVar3 < *(int *)(param_1 + 6))) {
    *(int *)(param_1 + 6) = iVar3;
  }
  lVar10 = param_1[5];
  uVar9 = ((longlong)(int)param_2[3] * 0x60) / 0x60;
  if (0 < (int)uVar9) {
    lVar8 = param_2[2] + 0x30;
    uVar9 = uVar9 & 0xffffffff;
    do {
      FUN_144cc17d0(lVar8 + -0x30,lVar8 + -0x18,lVar8,lVar8 + 0x18,lVar10);
      lVar8 = lVar8 + 0x60;
      lVar10 = lVar10 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  iVar3 = (int)param_2[5];
  if ((int)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) < iVar3) {
    FUN_1418055da(param_1 + 7,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  if ((*(int *)(param_1 + 8) < iVar3) || (iVar3 < *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 8) = iVar3;
  }
  lVar10 = param_1[7];
  if (0 < (int)*(uint *)(param_2 + 5)) {
    lVar8 = param_2[4] + 0x40;
    uVar9 = (ulonglong)*(uint *)(param_2 + 5);
    do {
      FUN_147e5918b(lVar8 + -0x40,lVar8 + -0x20,lVar8,lVar8 + 0x20,lVar10);
      lVar8 = lVar8 + 0x80;
      lVar10 = lVar10 + 0x10;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return param_1;
}



// FUNCTION 145047300 FUN_145047300 body=1076 status=ok
// SIG undefined FUN_145047300(void)

undefined2 *
FUN_145047300(undefined2 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,short param_6)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  short sVar5;
  void *_Dst;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  short local_res8 [4];
  undefined2 local_res10 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58 [3];
  
  local_58[0] = 0x1ac0;
  local_res18 = param_3;
  local_res20 = param_4;
  _Dst = (void *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  puVar8 = (undefined8 *)0x0;
  puVar6 = puVar8;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x1ac0);
    puVar6 = (undefined8 *)FUN_145047810(_Dst);
  }
  local_58[0] = 0x48;
  lVar7 = (*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar7,"VertexSetApproximation");
  }
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)FUN_145047000(lVar7,param_3);
  }
  puVar4 = (undefined8 *)puVar6[3];
  if ((puVar8 != puVar4) && (puVar6[3] = puVar8, puVar4 != (undefined8 *)0x0)) {
    FUN_144b3f230();
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar6);
  }
  local_58[0] = 0x50;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"ReferencedFunctorTask");
  }
  if (puVar8 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res8,0,0x40);
    puVar8 = puVar6;
    if (puVar6 != (undefined8 *)0x0) goto LAB_145047496;
  }
  else {
    puVar8[1] = 0xffffffff;
    *puVar8 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_static_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSetApproximation::addBuildTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::VertexSet_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSetApproximation_const_>&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar8[2] = 1;
    puVar8[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_static_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSetApproximation::addBuildTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::VertexSet_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSetApproximation_const_>&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    puVar8[9] = "VertexSetApproximation/PreConvertVertices";
    *(undefined4 *)(puVar8 + 6) = param_5;
    puVar8[7] = param_3;
    puVar8[8] = puVar6;
    FUN_144be3b70(param_2,local_res8,puVar8,0x40);
LAB_145047496:
    FUN_144b3f230(puVar8);
  }
  sVar5 = local_res8[0];
  if ((param_6 != -1) && (local_res8[0] != -1)) {
    iVar9 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    iVar3 = *(int *)(param_2 + 0x330);
    lVar7 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar9;
    *(short *)(lVar7 + (longlong)iVar3 * 4) = param_6;
    *(short *)(lVar7 + 2 + (longlong)iVar3 * 4) = sVar5;
    param_3 = local_res18;
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar6);
  }
  local_res18 = 0x50;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar8 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res10,0,0x40);
    puVar8 = puVar6;
    if (puVar6 != (undefined8 *)0x0) goto LAB_1450475c0;
  }
  else {
    puVar8[1] = 0xffffffff;
    *puVar8 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`public:_static_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSetApproximation::addBuildTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::VertexSet_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSetApproximation_const_>&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
              ::vftable;
    puVar8[2] = 1;
    puVar8[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`public:_static_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSetApproximation::addBuildTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::VertexSet_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSetApproximation_const_>&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
                ::vftable;
    puVar8[9] = "VertexSetApproximation/ConvertVertices";
    puVar8[6] = param_3;
    puVar8[7] = puVar6;
    *(undefined4 *)(puVar8 + 8) = param_5;
    *(undefined4 *)((longlong)puVar8 + 0x44) = 1;
    FUN_144be3b70(param_2,local_res10,puVar8,0x40);
LAB_1450475c0:
    FUN_144b3f230(puVar8);
  }
  uVar2 = local_res10[0];
  plVar1 = (longlong *)(param_2 + 0x328);
  iVar9 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar7 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar9;
  *(short *)(lVar7 + (longlong)iVar3 * 4) = local_res8[0];
  *(undefined2 *)(lVar7 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar6);
  }
  local_res18 = 0x50;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"ReferencedFunctorTask");
  }
  if (puVar8 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,param_1,0,0x40);
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x0) goto LAB_1450476cf;
  }
  else {
    puVar8[2] = 1;
    puVar8[1] = 0xffffffff;
    puVar8[7] = puVar6;
    *puVar8 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_static_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSetApproximation::addBuildTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::VertexSet_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSetApproximation_const_>&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_3>_>
              ::vftable;
    puVar8[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_static_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSetApproximation::addBuildTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::VertexSet_const&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSetApproximation_const_>&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_3>_>
                ::vftable;
    puVar8[6] = local_res20;
    puVar8[8] = "VertexSetApproximation/FinishBuild";
    FUN_144be3b70(param_2,param_1,puVar8,0x40);
  }
  FUN_144b3f230(puVar8);
LAB_1450476cf:
  iVar9 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar7 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar9;
  *(undefined2 *)(lVar7 + (longlong)iVar3 * 4) = local_res10[0];
  *(undefined2 *)(lVar7 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar6);
  }
  return param_1;
}



// FUNCTION 145047740 FUN_145047740 body=199 status=ok
// SIG undefined FUN_145047740(void)

undefined8 * FUN_145047740(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 3;
  plVar2 = param_1 + 9;
  do {
    plVar1 = plVar2 + -2;
    lVar3 = lVar3 + -1;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) << 4);
    }
    *plVar1 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar1;
  } while (lVar3 != 0);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x48);
    }
  }
  return param_1;
}



// FUNCTION 145047810 FUN_145047810 body=205 status=ok
// SIG undefined FUN_145047810(void)

undefined8 * FUN_145047810(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::_anon_EA2484C0::Context::vftable;
  param_1[0xc] = param_1 + 0xe;
  param_1[0x96] = param_1 + 0x98;
  param_1[0x128] = param_1 + 0x12a;
  param_1[0x1b2] = param_1 + 0x1b4;
  param_1[0x244] = param_1 + 0x246;
  param_1[0x2ce] = param_1 + 0x2d0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000011;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x80000011;
  *(undefined4 *)(param_1 + 0x129) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94c) = 0x80000011;
  *(undefined4 *)(param_1 + 0x1b3) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd9c) = 0x80000011;
  *(undefined4 *)(param_1 + 0x245) = 0;
  *(undefined4 *)((longlong)param_1 + 0x122c) = 0x80000011;
  *(undefined4 *)(param_1 + 0x2cf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x167c) = 0x80000011;
  return param_1;
}



// FUNCTION 1450478e0 FUN_1450478e0 body=139 status=ok
// SIG undefined FUN_1450478e0(void)

undefined8 * FUN_1450478e0(undefined8 *param_1,ulonglong param_2)

{
  FUN_14006c6ec(param_1 + 0x23c);
  FUN_14006c6ec(param_1 + 0x120);
  FUN_14006c6ec(param_1 + 4);
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x1ac0);
  }
  return param_1;
}



// FUNCTION 145047970 FUN_145047970 body=294 status=ok
// SIG undefined FUN_145047970(void)

void FUN_145047970(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 2) + 8);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x18);
  if ((int)(*(uint *)(lVar2 + 0x24) & 0x7fffffff) < iVar1) {
    FUN_1418055da(lVar2 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(lVar2 + 0x20) < iVar1) || (iVar1 < *(int *)(lVar2 + 0x20))) {
    *(int *)(lVar2 + 0x20) = iVar1;
  }
  FUN_144bf95c0(*(longlong *)(param_1 + 4) + 0x20,*param_1,
                *(undefined4 *)(*(longlong *)(param_1 + 2) + 8),1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 2) + 0x18);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x18);
  if ((int)(*(uint *)(lVar2 + 0x34) & 0x7fffffff) < iVar1) {
    FUN_1418055da(lVar2 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(lVar2 + 0x30) < iVar1) || (iVar1 < *(int *)(lVar2 + 0x30))) {
    *(int *)(lVar2 + 0x30) = iVar1;
  }
  FUN_144bf95c0(*(longlong *)(param_1 + 4) + 0x900,*param_1,
                *(undefined4 *)(*(longlong *)(param_1 + 2) + 0x18),1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 2) + 0x28);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x18);
  if ((int)(*(uint *)(lVar2 + 0x44) & 0x7fffffff) < iVar1) {
    FUN_1418055da(lVar2 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(lVar2 + 0x40) < iVar1) || (iVar1 < *(int *)(lVar2 + 0x40))) {
    *(int *)(lVar2 + 0x40) = iVar1;
  }
  FUN_144bf95c0(*(longlong *)(param_1 + 4) + 0x11e0,*param_1,
                *(undefined4 *)(*(longlong *)(param_1 + 2) + 0x28),1);
  return;
}



// FUNCTION 145047aa0 FUN_145047aa0 body=443 status=ok
// SIG undefined FUN_145047aa0(void)

void FUN_145047aa0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  int local_res10 [2];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar5 = 0;
  lVar1 = *(longlong *)*param_1;
  local_48 = param_1[1] + 0x20;
  lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x18) + 0x18);
  uVar4 = uVar5;
  local_34 = param_2;
  if (local_48 != 0) {
    local_40 = 0;
    local_38 = 0;
  }
  do {
    if (local_40._4_4_ <= uVar4) {
      if ((local_48 == 0) || (FUN_144bf9800(local_48,local_res10,&local_48), local_res10[0] < 0)) {
        lVar1 = *(longlong *)(*param_1 + 0x10);
        local_48 = param_1[1] + 0x900;
        lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x18) + 0x28);
        uVar4 = uVar5;
        local_34 = param_2;
        if (local_48 != 0) {
          local_40 = 0;
          local_38 = 0;
        }
        do {
          if (local_40._4_4_ <= uVar4) {
            if ((local_48 == 0) ||
               (FUN_144bf9800(local_48,local_res10,&local_48), local_res10[0] < 0)) {
              lVar1 = *(longlong *)(*param_1 + 0x20);
              local_48 = param_1[1] + 0x11e0;
              lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x18) + 0x38);
              local_34 = param_2;
              if (local_48 != 0) {
                local_40 = 0;
                local_38 = 0;
              }
              do {
                if (local_40._4_4_ <= uVar5) {
                  if ((local_48 == 0) ||
                     (FUN_144bf9800(local_48,local_res10,&local_48), local_res10[0] < 0)) {
                    return;
                  }
                  uVar5 = (uint)local_40;
                }
                lVar3 = (longlong)(int)uVar5 * 0x80 + lVar1;
                FUN_147e5918b(lVar3,lVar3 + 0x20,lVar3 + 0x40,lVar3 + 0x60,
                              (longlong)(int)uVar5 * 0x10 + lVar2);
                uVar5 = uVar5 + 1;
              } while( true );
            }
            uVar4 = (uint)local_40;
          }
          lVar3 = (longlong)(int)uVar4 * 0x60 + lVar1;
          FUN_144cc17d0(lVar3,lVar3 + 0x18,lVar3 + 0x30,lVar3 + 0x48,
                        (longlong)(int)uVar4 * 0x10 + lVar2);
          uVar4 = uVar4 + 1;
        } while( true );
      }
      uVar4 = (uint)local_40;
    }
    lVar3 = (longlong)(int)uVar4;
    auVar6._0_4_ = (float)*(int *)(lVar1 + lVar3 * 0xc);
    auVar6._4_4_ = (float)*(int *)(lVar1 + 4 + lVar3 * 0xc);
    auVar6._8_4_ = (float)*(int *)(lVar1 + 8 + lVar3 * 0xc);
    auVar6._12_4_ = 0;
    *(undefined1 (*) [16])(lVar2 + lVar3 * 0x10) = auVar6;
    uVar4 = uVar4 + 1;
  } while( true );
}



// FUNCTION 145047c60 FUN_145047c60 body=9 status=ok
// SIG undefined FUN_145047c60(void)

void FUN_145047c60(longlong param_1)

{
  FUN_145047970(param_1 + 0x10);
  return;
}



// FUNCTION 145047c70 FUN_145047c70 body=5 status=ok
// SIG undefined FUN_145047c70(void)

undefined8 FUN_145047c70(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 145047c80 FUN_145047c80 body=115 status=ok
// SIG undefined FUN_145047c80(void)

undefined8 * FUN_145047c80(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145047d00 FUN_145047d00 body=15 status=ok
// SIG undefined FUN_145047d00(void)

undefined4 * FUN_145047d00(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  return param_2;
}



// FUNCTION 145047d10 FUN_145047d10 body=12 status=ok
// SIG undefined FUN_145047d10(void)

void FUN_145047d10(longlong param_1,longlong param_2)

{
  FUN_145047aa0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 145047d20 FUN_145047d20 body=5 status=ok
// SIG undefined FUN_145047d20(void)

undefined8 FUN_145047d20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 145047d30 FUN_145047d30 body=115 status=ok
// SIG undefined FUN_145047d30(void)

undefined8 * FUN_145047d30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145047db0 FUN_145047db0 body=68 status=ok
// SIG undefined FUN_145047db0(void)

void FUN_145047db0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  if (*plVar1 != lVar3) {
    if (lVar3 != 0) {
      FUN_144b3d910();
    }
    lVar3 = *plVar1;
    *plVar1 = *(longlong *)(lVar2 + 0x18);
    if (lVar3 != 0) {
      FUN_144b3f230();
    }
  }
  return;
}



// FUNCTION 145047e00 FUN_145047e00 body=5 status=ok
// SIG undefined FUN_145047e00(void)

undefined8 FUN_145047e00(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 145047e10 FUN_145047e10 body=115 status=ok
// SIG undefined FUN_145047e10(void)

undefined8 * FUN_145047e10(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 145047e84 FUN_145047e84 body=9 status=ok
// SIG undefined FUN_145047e84(void)

void FUN_145047e84(longlong param_1)

{
  FUN_145047c80(param_1 + -0x20);
  return;
}



// FUNCTION 145047e90 FUN_145047e90 body=9 status=ok
// SIG undefined FUN_145047e90(void)

void FUN_145047e90(longlong param_1)

{
  FUN_145047d30(param_1 + -0x20);
  return;
}



// FUNCTION 145047e9c FUN_145047e9c body=9 status=ok
// SIG undefined FUN_145047e9c(void)

void FUN_145047e9c(longlong param_1)

{
  FUN_145047e10(param_1 + -0x20);
  return;
}



// FUNCTION 145047eb0 FUN_145047eb0 body=332 status=ok
// SIG undefined FUN_145047eb0(void)

ulonglong FUN_145047eb0(int *param_1,int *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong local_38;
  
  iVar5 = *param_2 - *param_1;
  iVar9 = param_2[1] - param_1[1];
  iVar1 = -iVar5;
  iVar7 = *param_3 - *param_1;
  iVar4 = param_3[1] - param_1[1];
  lVar10 = (longlong)iVar9;
  lVar8 = (longlong)iVar4;
  lVar3 = (longlong)iVar1 * (longlong)iVar4 + iVar7 * lVar10;
  lVar6 = (longlong)iVar7;
  uVar2 = iVar5 * lVar6 + lVar8 * lVar10;
  if ((longlong)uVar2 < 0) {
    local_38 = lVar8 * lVar8 + lVar6 * lVar6;
  }
  else {
    if (uVar2 <= (ulonglong)((longlong)iVar5 * (longlong)iVar5 + (longlong)iVar9 * (longlong)iVar9))
    {
      uVar2 = lVar3 * lVar3;
      lVar6 = (longlong)iVar1 * (longlong)iVar1 + lVar10 * lVar10;
      *param_4 = lVar3 * lVar3;
      param_4[1] = SUB168(SEXT816(lVar3) * SEXT816(lVar3),8);
      goto LAB_145047fbc;
    }
    iVar1 = param_3[1] - param_2[1];
    iVar4 = *param_3 - *param_2;
    uVar2 = (ulonglong)iVar4;
    local_38 = (longlong)iVar1 * (longlong)iVar1 + (longlong)iVar4 * uVar2;
  }
  lVar6 = 1;
  *param_4 = local_38;
  param_4[1] = 0;
  param_4[2] = 0;
LAB_145047fbc:
  param_4[2] = lVar6;
  if (lVar3 < 0) {
    lVar3 = *param_4;
    *param_4 = -*param_4;
    param_4[1] = -(ulonglong)(lVar3 != 0) - param_4[1];
  }
  return uVar2;
}



// FUNCTION 145048000 FUN_145048000 body=405 status=ok
// SIG undefined FUN_145048000(void)

longlong FUN_145048000(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong local_res10;
  int local_48 [4];
  longlong local_38;
  longlong lStack_30;
  
  iVar1 = param_2[2];
  iVar2 = param_2[1];
  iVar3 = *param_2;
  iVar8 = param_3[1] - iVar2;
  iVar6 = *param_4 - iVar3;
  iVar13 = param_4[1] - iVar2;
  iVar12 = *param_3 - iVar3;
  lVar5 = (longlong)-iVar8 * (longlong)iVar6 + (longlong)iVar12 * (longlong)iVar13;
  if (lVar5 == 0) {
    lVar5 = (ulonglong)(uint7)(int7)(int3)((uint)iVar13 >> 8) << 8;
  }
  else {
    lVar9 = (longlong)(param_1[1] - iVar2) * (longlong)(param_4[2] - iVar1) -
            (longlong)-iVar1 * (longlong)iVar13;
    lVar14 = (longlong)-iVar1 * (longlong)iVar6 -
             (longlong)(*param_1 - iVar3) * (longlong)(param_4[2] - iVar1);
    lVar4 = (longlong)(*param_1 - iVar3) * (longlong)iVar13 -
            (longlong)(param_1[1] - iVar2) * (longlong)iVar6;
    uVar10 = lVar4 * (param_3[2] - iVar1);
    uVar11 = iVar8 * lVar14;
    uVar15 = iVar12 * lVar9;
    uVar16 = uVar15 + uVar11;
    local_38 = uVar16 + uVar10;
    lStack_30 = SUB168(SEXT816(lVar9) * SEXT816((longlong)iVar12),8) +
                SUB168(SEXT816(lVar14) * SEXT816((longlong)iVar8),8) +
                (ulonglong)CARRY8(uVar15,uVar11) +
                SUB168(SEXT816(lVar4) * SEXT816((longlong)(param_3[2] - iVar1)),8) +
                (ulonglong)CARRY8(uVar16,uVar10);
    uVar7 = (uint)(lVar5 >> 0x3f) | 1;
    local_res10 = -lVar5;
    if (-lVar5 < 0) {
      local_res10 = lVar5;
    }
    FUN_1450493f0(&local_38,&local_res10,-uVar7,local_48);
    if ((int)uVar7 < 0) {
      local_48[0] = -local_48[0];
    }
    *param_5 = local_48[0];
    lVar5 = CONCAT71((uint7)(uint3)((uint)local_48[0] >> 8),1);
  }
  return lVar5;
}



// FUNCTION 1450481a0 FUN_1450481a0 body=807 status=ok
// SIG undefined FUN_1450481a0(void)

undefined8 * FUN_1450481a0(undefined8 *param_1,int *param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint local_res18 [2];
  int local_res20 [2];
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_248 [520];
  
  puVar17 = (uint *)((longlong)*(int *)(*(longlong *)(param_3 + 0x18) + (longlong)param_4 * 4) *
                     0x60 + *(longlong *)(param_3 + 0x28));
  uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0x38) + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
  local_270 = *(undefined4 *)
               (*(longlong *)(param_3 + 0x38) + 8 + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
  uVar7 = puVar17[3];
  local_res20[0] = param_4;
  local_278 = uVar1;
  if (uVar7 != puVar17[2]) {
    local_278._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
    iVar5 = local_278._4_4_;
    local_278._0_4_ = (int)uVar1;
    iVar8 = (int)local_278;
    do {
      lVar15 = *(longlong *)(param_3 + 0x38);
      iVar2 = param_2[1];
      iVar3 = *param_2;
      puVar16 = (uint *)((longlong)(int)uVar7 * 0x60 + *(longlong *)(param_3 + 0x28));
      local_258 = *(undefined8 *)(lVar15 + (ulonglong)(*puVar16 & 0x3fffffff) * 0xc);
      local_250 = *(undefined4 *)(lVar15 + 8 + (ulonglong)(*puVar16 & 0x3fffffff) * 0xc);
      uVar10 = (ulonglong)
               (*(uint *)((longlong)(int)puVar16[3] * 0x60 + *(longlong *)(param_3 + 0x28)) &
               0x3fffffff);
      local_268 = *(undefined8 *)(lVar15 + uVar10 * 0xc);
      local_260 = *(undefined4 *)(lVar15 + 8 + uVar10 * 0xc);
      iVar18 = (int)((ulonglong)local_258 >> 0x20);
      lVar15 = (longlong)(iVar3 - iVar8) * (longlong)(iVar18 - iVar5) -
               (longlong)(iVar2 - iVar5) * (longlong)((int)local_258 - iVar8);
      bVar13 = 0;
      if (lVar15 != 0) {
        bVar13 = (byte)((ulonglong)lVar15 >> 0x3f) ^ 1;
      }
      if (bVar13 == 0) {
        iVar14 = (int)((ulonglong)local_268 >> 0x20);
        lVar15 = (longlong)(iVar3 - (int)local_258) * (longlong)(iVar14 - iVar18) -
                 (longlong)((int)local_268 - (int)local_258) * (longlong)(iVar2 - iVar18);
        bVar13 = 0;
        if (lVar15 != 0) {
          bVar13 = (byte)((ulonglong)lVar15 >> 0x3f) ^ 1;
        }
        if (bVar13 == 0) {
          lVar15 = (longlong)(iVar5 - iVar14) * (longlong)(iVar3 - (int)local_268) -
                   (longlong)(iVar2 - iVar14) * (longlong)(iVar8 - (int)local_268);
          bVar13 = 0;
          if (lVar15 != 0) {
            bVar13 = (byte)((ulonglong)lVar15 >> 0x3f) ^ 1;
          }
          if ((bVar13 == 0) &&
             (cVar6 = FUN_145048000(param_2,&local_278,&local_258,&local_268,local_res18),
             cVar6 != '\0')) {
            cVar6 = FUN_144cb4d20(param_3);
            uVar7 = local_res18[0];
            if (cVar6 != '\0') {
              piVar12 = (int *)FUN_144cb4e20(param_3,local_res20,local_res20[0]);
              uVar9 = local_res18[0] - *piVar12;
              if (1 < (longlong)((int)uVar9 >> 0x17) + 1U) {
                uVar9 = (int)uVar9 >> 0x1f ^ 0x7fffff;
              }
              uVar7 = *piVar12 + local_res18[0];
              local_res18[0] = uVar9;
              if (1 < (longlong)((int)uVar7 >> 0x17) + 1U) {
                uVar7 = (int)uVar7 >> 0x1f ^ 0x7fffff;
              }
            }
            *param_1 = CONCAT44(uVar7,local_res18[0]);
            return param_1;
          }
        }
      }
      uVar7 = puVar16[3];
    } while (uVar7 != puVar17[2]);
  }
  FUN_144bde670(&local_278,local_248,0x200);
  FUN_144be6160(&local_278,"point in not inside the XY projection of the face.");
  iVar8 = FUN_144bfc110(0xefdda32,local_248,
                        "NavMesh\\Generation\\Simplification\\hkaiNavMeshGenerationSimplificationMath.cpp"
                        ,0xc3);
  if (iVar8 == 0) {
    FUN_144bde6e0(&local_278);
    return param_1;
  }
  pcVar4 = (code *)swi(3);
  puVar11 = (undefined8 *)(*pcVar4)();
  return puVar11;
}



// FUNCTION 1450484d0 FUN_1450484d0 body=232 status=ok
// SIG undefined FUN_1450484d0(void)

byte FUN_1450484d0(int *param_1,int *param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_38 [16];
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_40 = *param_4;
  local_48 = *param_1 - local_40;
  local_44 = *param_2 - local_40;
  local_40 = *param_3 - local_40;
  local_50 = param_4[1];
  local_58 = param_1[1] - local_50;
  local_54 = param_2[1] - local_50;
  local_50 = param_3[1] - local_50;
  local_28 = (longlong)local_58 * (longlong)local_58 + (longlong)local_48 * (longlong)local_48;
  local_20 = (longlong)local_54 * (longlong)local_54 + (longlong)local_44 * (longlong)local_44;
  local_18 = (longlong)local_50 * (longlong)local_50 + (longlong)local_40 * (longlong)local_40;
  plVar1 = (longlong *)FUN_1450490b0(local_38,&local_48,&local_58,&local_28);
  return (*plVar1 != 0 || plVar1[1] != 0) & ((byte)((ulonglong)plVar1[1] >> 0x3f) ^ 1);
}



// FUNCTION 1450485c0 FUN_1450485c0 body=307 status=ok
// SIG undefined FUN_1450485c0(void)

undefined8 FUN_1450485c0(int *param_1,int *param_2,int *param_3,int *param_4,longlong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)param_1[2];
  iVar5 = *param_4 - *param_3;
  iVar6 = param_4[1] - param_3[1];
  uVar3 = (longlong)(param_2[1] - param_1[1]) * (longlong)iVar5 -
          (longlong)(*param_2 - *param_1) * (longlong)iVar6;
  if (uVar3 != 0) {
    uVar8 = (longlong)(*param_1 - *param_3) * (longlong)iVar6 -
            (longlong)(param_1[1] - param_3[1]) * (longlong)iVar5;
    uVar4 = -uVar3;
    if ((longlong)-uVar3 < 0) {
      uVar4 = uVar3;
    }
    if ((longlong)uVar3 < 0) {
      uVar8 = -uVar8;
    }
    if ((-1 < (longlong)uVar8) && (uVar8 <= uVar4)) {
      lVar7 = (longlong)(param_2[2] - param_1[2]);
      uVar3 = lVar7 * uVar8;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4;
      *param_5 = uVar4 * uVar9 + uVar3;
      param_5[1] = (SUB168(auVar1 * auVar2,8) - ((longlong)uVar9 >> 0x3f & uVar4)) +
                   SUB168(SEXT816((longlong)uVar8) * SEXT816(lVar7),8) +
                   (ulonglong)CARRY8(uVar4 * uVar9,uVar3);
      param_5[2] = uVar4;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145048700 FUN_145048700 body=658 status=ok
// SIG undefined FUN_145048700(void)

undefined8 FUN_145048700(int *param_1,int *param_2,int *param_3,int *param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int local_98;
  int iStack_94;
  
  iVar20 = *param_2 - *param_1;
  iVar21 = param_2[1] - param_1[1];
  iVar14 = *param_4 - *param_3;
  iVar1 = param_2[2];
  iVar2 = param_1[2];
  iVar22 = param_4[1] - param_3[1];
  uVar9 = (longlong)iVar14 * (longlong)iVar21 - (longlong)iVar22 * (longlong)iVar20;
  if (uVar9 != 0) {
    iVar12 = param_1[1] - param_3[1];
    iVar15 = *param_1 - *param_3;
    uVar13 = (longlong)iVar22 * (longlong)iVar15 - (longlong)iVar14 * (longlong)iVar12;
    uVar10 = -uVar9;
    if ((longlong)-uVar9 < 0) {
      uVar10 = uVar9;
    }
    if ((longlong)uVar9 < 0) {
      uVar13 = -uVar13;
    }
    if ((-1 < (longlong)uVar13) && (uVar13 <= uVar10)) {
      uVar19 = (longlong)iVar21 * (longlong)iVar15 - (longlong)iVar20 * (longlong)iVar12;
      if ((longlong)uVar9 < 0) {
        uVar19 = -uVar19;
      }
      if ((-1 < (longlong)uVar19) && (uVar19 <= uVar10)) {
        uVar9 = (longlong)(iVar1 - iVar2) * uVar13;
        uVar19 = (longlong)iVar21 * uVar13;
        uVar11 = (longlong)iVar20 * uVar13;
        uVar16 = (ulonglong)param_1[2];
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar16;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar10;
        iStack_94 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
        uVar17 = (ulonglong)iStack_94;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar17;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar10;
        local_98 = (int)*(undefined8 *)param_1;
        uVar18 = (ulonglong)local_98;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar18;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar10;
        *param_5 = uVar10 * uVar18 + uVar11;
        param_5[1] = (SUB168(auVar5 * auVar8,8) - ((longlong)uVar18 >> 0x3f & uVar10)) +
                     SUB168(SEXT816((longlong)uVar13) * SEXT816((longlong)iVar20),8) +
                     (ulonglong)CARRY8(uVar10 * uVar18,uVar11);
        param_5[2] = uVar10 * uVar17 + uVar19;
        param_5[3] = (SUB168(auVar4 * auVar7,8) - ((longlong)uVar17 >> 0x3f & uVar10)) +
                     SUB168(SEXT816((longlong)uVar13) * SEXT816((longlong)iVar21),8) +
                     (ulonglong)CARRY8(uVar10 * uVar17,uVar19);
        param_5[4] = uVar10 * uVar16 + uVar9;
        param_5[5] = (SUB168(auVar3 * auVar6,8) - ((longlong)uVar16 >> 0x3f & uVar10)) +
                     SUB168(SEXT816((longlong)uVar13) * SEXT816((longlong)(iVar1 - iVar2)),8) +
                     (ulonglong)CARRY8(uVar10 * uVar16,uVar9);
        param_5[6] = uVar10;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1450489a0 FUN_1450489a0 body=1149 status=ok
// SIG undefined FUN_1450489a0(void)

undefined8
FUN_1450489a0(int *param_1,int *param_2,int *param_3,int *param_4,longlong *param_5,
             ulonglong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  int local_c8;
  int iStack_c4;
  
  iVar1 = *param_1;
  iVar2 = param_2[1];
  iVar3 = *param_2;
  iVar4 = param_2[2];
  iVar5 = param_1[1];
  iVar6 = param_3[1];
  uVar26 = iVar2 - iVar5;
  iVar7 = *param_3;
  uVar32 = iVar3 - iVar1;
  iVar31 = iVar4 - param_1[2];
  iVar8 = *param_4;
  iVar9 = param_4[1];
  uVar20 = iVar9 - iVar6;
  uVar18 = iVar8 - iVar7;
  uVar17 = (longlong)(int)uVar18 * (longlong)(int)uVar26 -
           (longlong)(int)uVar20 * (longlong)(int)uVar32;
  if (uVar17 == 0) {
    if ((longlong)(iVar6 - iVar5) * (longlong)(int)uVar32 -
        (longlong)(iVar7 - iVar1) * (longlong)(int)uVar26 == 0) {
      if (uVar32 == 0) {
        uVar24 = -uVar26;
        if ((int)-uVar26 < 0) {
          uVar24 = uVar26;
        }
        uVar16 = iVar9 - iVar5;
        if ((int)uVar26 < 0) {
          uVar16 = iVar5 - iVar9;
        }
      }
      else {
        uVar24 = -uVar32;
        if ((int)-uVar32 < 0) {
          uVar24 = uVar32;
        }
        uVar16 = iVar8 - iVar1;
        if ((int)uVar32 < 0) {
          uVar16 = iVar1 - iVar8;
        }
      }
      if ((-1 < (int)uVar16) && (uVar16 <= uVar24)) {
        lVar33 = (longlong)(int)uVar16;
        uVar17 = (ulonglong)uVar24;
        lVar25 = (longlong)(int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * uVar17 +
                 (int)uVar26 * lVar33;
        lVar27 = (longlong)param_1[2] * uVar17 + iVar31 * lVar33;
        lVar33 = (int)uVar32 * lVar33 + (longlong)(int)*(undefined8 *)param_1 * uVar17;
        param_5[6] = uVar17;
        *param_5 = lVar33;
        param_5[1] = lVar33 >> 0x3f;
        param_5[2] = lVar25;
        param_5[3] = lVar25 >> 0x3f;
        param_5[4] = lVar27;
        param_5[5] = lVar27 >> 0x3f;
        *param_6 = 1;
        param_6[1] = 1;
        return 1;
      }
      if (uVar18 == 0) {
        uVar26 = -uVar20;
        if ((int)-uVar20 < 0) {
          uVar26 = uVar20;
        }
        uVar32 = iVar2 - iVar6;
        if ((int)uVar20 < 0) {
          uVar32 = iVar6 - iVar2;
        }
      }
      else {
        uVar26 = -uVar18;
        if ((int)-uVar18 < 0) {
          uVar26 = uVar18;
        }
        uVar32 = iVar3 - iVar7;
        if ((int)uVar18 < 0) {
          uVar32 = iVar7 - iVar3;
        }
      }
      if ((-1 < (int)uVar32) && (uVar32 <= uVar26)) {
        *param_5 = (longlong)iVar3;
        param_5[1] = (longlong)iVar3 >> 0x3f;
        param_5[2] = (longlong)iVar2;
        param_5[3] = (longlong)iVar2 >> 0x3f;
        param_5[4] = (longlong)iVar4;
        param_5[5] = (longlong)iVar4 >> 0x3f;
        param_5[6] = 1;
        *param_6 = (longlong)(int)uVar32;
        param_6[1] = (ulonglong)uVar26;
        return 1;
      }
    }
  }
  else {
    uVar34 = (longlong)(iVar1 - iVar7) * (longlong)(int)uVar20 -
             (longlong)(iVar5 - iVar6) * (longlong)(int)uVar18;
    uVar19 = -uVar17;
    if ((longlong)-uVar17 < 0) {
      uVar19 = uVar17;
    }
    if ((longlong)uVar17 < 0) {
      uVar34 = -uVar34;
    }
    if ((-1 < (longlong)uVar34) && (uVar34 <= uVar19)) {
      uVar21 = (longlong)(iVar1 - iVar7) * (longlong)(int)uVar26 -
               (longlong)(iVar5 - iVar6) * (longlong)(int)uVar32;
      if ((longlong)uVar17 < 0) {
        uVar21 = -uVar21;
      }
      if ((-1 < (longlong)uVar21) && (uVar21 <= uVar19)) {
        uVar17 = (longlong)iVar31 * uVar34;
        uVar22 = (longlong)(int)uVar26 * uVar34;
        uVar23 = (longlong)(int)uVar32 * uVar34;
        uVar28 = (ulonglong)param_1[2];
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar28;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar19;
        iStack_c4 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
        uVar29 = (ulonglong)iStack_c4;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar29;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar19;
        local_c8 = (int)*(undefined8 *)param_1;
        uVar30 = (ulonglong)local_c8;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar30;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar19;
        *param_5 = uVar30 * uVar19 + uVar23;
        param_5[1] = (SUB168(auVar12 * auVar15,8) - ((longlong)uVar30 >> 0x3f & uVar19)) +
                     SUB168(SEXT816((longlong)uVar34) * SEXT816((longlong)(int)uVar32),8) +
                     (ulonglong)CARRY8(uVar30 * uVar19,uVar23);
        param_5[2] = uVar29 * uVar19 + uVar22;
        param_5[3] = (SUB168(auVar11 * auVar14,8) - ((longlong)uVar29 >> 0x3f & uVar19)) +
                     SUB168(SEXT816((longlong)uVar34) * SEXT816((longlong)(int)uVar26),8) +
                     (ulonglong)CARRY8(uVar29 * uVar19,uVar22);
        param_5[4] = uVar28 * uVar19 + uVar17;
        param_5[5] = (SUB168(auVar10 * auVar13,8) - ((longlong)uVar28 >> 0x3f & uVar19)) +
                     SUB168(SEXT816((longlong)uVar34) * SEXT816((longlong)iVar31),8) +
                     (ulonglong)CARRY8(uVar28 * uVar19,uVar17);
        param_5[6] = uVar19;
        *param_6 = uVar21;
        param_6[1] = uVar19;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 145048e20 FUN_145048e20 body=225 status=ok
// SIG undefined FUN_145048e20(void)

void FUN_145048e20(int *param_1,longlong *param_2,ulonglong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_48;
  longlong lStack_40;
  
  lVar1 = param_2[2];
  uVar3 = param_1[2] * lVar1;
  uVar8 = (longlong)param_1[1] * param_2[1];
  uVar4 = (longlong)*param_1 * *param_2;
  uVar5 = uVar4 + uVar8;
  uVar6 = uVar5 + uVar3;
  lVar7 = uVar6 + *param_3;
  local_48 = -lVar7;
  lStack_40 = -(ulonglong)(lVar7 != 0) -
              (SUB168(SEXT816((longlong)*param_1) * SEXT816(*param_2),8) +
               SUB168(SEXT816((longlong)param_1[1]) * SEXT816(param_2[1]),8) +
               (ulonglong)CARRY8(uVar4,uVar8) +
               SUB168(SEXT816((longlong)param_1[2]) * SEXT816(lVar1),8) +
               (ulonglong)CARRY8(uVar5,uVar3) + param_3[1] + (ulonglong)CARRY8(uVar6,*param_3));
  lVar2 = -lVar1;
  if (-lVar1 < 0) {
    lVar2 = lVar1;
  }
  if (lVar1 < 0) {
    lStack_40 = -(ulonglong)(local_48 != 0) - lStack_40;
    local_48 = lVar7;
  }
  *param_4 = local_48;
  param_4[1] = lStack_40;
  param_4[2] = lVar2;
  return;
}



// FUNCTION 145048f10 FUN_145048f10 body=403 status=ok
// SIG undefined FUN_145048f10(void)

void FUN_145048f10(undefined8 param_1,longlong param_2,ulonglong *param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong uStack_40;
  
  uVar11 = *(ulonglong *)(param_2 + 0x10);
  puVar9 = (ulonglong *)FUN_145049280(&local_58,param_2,param_1);
  uStack_40 = puVar9[3];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uStack_40;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_3;
  uVar17 = *param_3 * uStack_40;
  uVar16 = param_3[1] * uStack_40 + SUB168(auVar1 * auVar3,8);
  lVar15 = *puVar9 + uVar17;
  uVar17 = (ulonglong)CARRY8(*puVar9,uVar17);
  uVar14 = puVar9[1] + uVar16;
  lVar13 = uVar14 + uVar17;
  uVar5 = -lVar13;
  lStack_50 = uVar5 - (lVar15 != 0);
  local_68 = -(ulonglong)(lVar13 != 0 || uVar5 < (lVar15 != 0)) -
             (puVar9[2] + ((longlong)uVar16 >> 0x3f) +
             (ulonglong)(CARRY8(puVar9[1],uVar16) || CARRY8(uVar14,uVar17)));
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar11;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uStack_40;
  local_48 = local_68;
  uVar17 = SUB168(auVar2 * auVar4,8) - ((longlong)uVar11 >> 0x3f & uStack_40);
  uVar14 = (longlong)uVar17 >> 0x3f;
  uVar11 = uStack_40 * uVar11 ^ uVar14;
  lVar13 = uVar11 - uVar14;
  local_78 = lVar13;
  lVar12 = ((uVar14 ^ uVar17) - uVar14) - (ulonglong)(uVar11 < uVar14);
  lStack_70 = lVar12;
  if ((longlong)uVar17 < 0) {
    local_78 = lVar15;
    uVar11 = (ulonglong)(-lVar15 != 0);
    plVar10 = &local_78;
    lStack_70 = -lStack_50 - uVar11;
    local_68 = -(ulonglong)(lStack_50 != 0 || (ulonglong)-lStack_50 < uVar11) - local_68;
  }
  else {
    local_58 = -lVar15;
    plVar10 = &local_58;
  }
  lVar15 = plVar10[1];
  uVar7 = *(undefined4 *)((longlong)plVar10 + 0xc);
  lVar8 = plVar10[2];
  uVar6 = *(undefined4 *)((longlong)plVar10 + 0x14);
  *param_4 = *plVar10;
  *(int *)(param_4 + 1) = (int)lVar15;
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar7;
  *(int *)(param_4 + 2) = (int)lVar8;
  *(undefined4 *)((longlong)param_4 + 0x14) = uVar6;
  param_4[3] = lVar13;
  param_4[4] = lVar12;
  return;
}



// FUNCTION 1450490b0 FUN_1450490b0 body=450 status=ok
// SIG undefined FUN_1450490b0(void)

void FUN_1450490b0(longlong *param_1,int *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  
  iVar1 = param_3[2];
  uVar27 = (ulonglong)iVar1;
  lVar12 = (longlong)*param_2;
  lVar28 = param_4[1];
  uVar18 = lVar12 * lVar28;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar27;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar18;
  lVar29 = uVar27 * SUB168(SEXT816(lVar28) * SEXT816(lVar12),8) + SUB168(auVar4 * auVar8,8);
  if (iVar1 < 0) {
    lVar29 = lVar29 - uVar18;
  }
  lVar13 = (longlong)*param_3;
  lVar3 = param_4[2];
  lVar20 = *param_4;
  lVar21 = (longlong)param_3[1];
  lVar30 = (longlong)param_2[1];
  uVar19 = lVar21 * lVar20;
  uVar15 = lVar13 * lVar30 * lVar3;
  iVar2 = param_2[2];
  uVar14 = (ulonglong)iVar2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar14;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar19;
  lVar17 = SUB168(SEXT816(lVar21) * SEXT816(lVar20),8) * uVar14 + SUB168(auVar5 * auVar9,8);
  if (iVar2 < 0) {
    lVar17 = lVar17 - uVar19;
  }
  uVar31 = lVar30 * lVar20;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar27;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar31;
  lVar20 = uVar27 * SUB168(SEXT816(lVar30) * SEXT816(lVar20),8) + SUB168(auVar6 * auVar10,8);
  if (iVar1 < 0) {
    lVar20 = lVar20 - uVar31;
  }
  uVar16 = lVar13 * lVar28;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar14;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar16;
  lVar28 = uVar14 * SUB168(SEXT816(lVar28) * SEXT816(lVar13),8) + SUB168(auVar7 * auVar11,8);
  if (iVar2 < 0) {
    lVar28 = lVar28 - uVar16;
  }
  uVar22 = lVar21 * lVar12 * lVar3;
  uVar23 = uVar22 + uVar14 * uVar16;
  uVar24 = uVar23 + uVar31 * uVar27;
  uVar25 = uVar24 - uVar19 * uVar14;
  uVar26 = uVar25 - uVar15;
  *param_1 = uVar26 - uVar18 * uVar27;
  param_1[1] = ((((((SUB168(SEXT816(lVar3) * SEXT816(lVar21 * lVar12),8) + lVar28 +
                     (ulonglong)CARRY8(uVar22,uVar14 * uVar16) + lVar20 +
                    (ulonglong)CARRY8(uVar23,uVar31 * uVar27)) - lVar17) -
                  (ulonglong)(uVar24 < uVar19 * uVar14)) -
                 SUB168(SEXT816(lVar3) * SEXT816(lVar13 * lVar30),8)) - (ulonglong)(uVar25 < uVar15)
                ) - lVar29) - (ulonglong)(uVar26 < uVar18 * uVar27);
  return;
}



// FUNCTION 145049280 FUN_145049280 body=359 status=ok
// SIG undefined FUN_145049280(void)

longlong * FUN_145049280(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
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
  undefined1 auVar16 [16];
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  
  uVar1 = param_2[2];
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  uVar18 = SUB168(auVar5 * auVar11,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar1;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar3;
  uVar21 = uVar3 * uVar1 + uVar18;
  lVar22 = (ulonglong)CARRY8(uVar3 * uVar1,uVar18) + SUB168(auVar6 * auVar12,8);
  if ((longlong)uVar3 < 0) {
    lVar22 = lVar22 - uVar1;
  }
  if ((longlong)uVar1 < 0) {
    bVar27 = uVar21 < uVar2;
    uVar21 = uVar21 - uVar2;
    lVar22 = (lVar22 - uVar3) - (ulonglong)bVar27;
  }
  uVar3 = param_2[1];
  uVar18 = param_3[3];
  uVar4 = param_3[2];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar3;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar4;
  uVar19 = SUB168(auVar7 * auVar13,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar3;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar18;
  uVar26 = uVar18 * uVar3 + uVar19;
  lVar23 = (ulonglong)CARRY8(uVar18 * uVar3,uVar19) + SUB168(auVar8 * auVar14,8);
  if ((longlong)uVar18 < 0) {
    lVar23 = lVar23 - uVar3;
  }
  if ((longlong)uVar3 < 0) {
    bVar27 = uVar26 < uVar4;
    uVar26 = uVar26 - uVar4;
    lVar23 = (lVar23 - uVar18) - (ulonglong)bVar27;
  }
  uVar18 = *param_2;
  uVar19 = param_3[1];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar18;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_3;
  uVar20 = SUB168(auVar9 * auVar15,8);
  uVar25 = *param_3;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar18;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar19;
  uVar24 = uVar19 * uVar18 + uVar20;
  lVar17 = (ulonglong)CARRY8(uVar19 * uVar18,uVar20) + SUB168(auVar10 * auVar16,8);
  if ((longlong)uVar19 < 0) {
    lVar17 = lVar17 - uVar18;
  }
  if ((longlong)uVar18 < 0) {
    bVar27 = uVar24 < *param_3;
    uVar24 = uVar24 - *param_3;
    lVar17 = (lVar17 - uVar19) - (ulonglong)bVar27;
  }
  uVar19 = uVar25 * uVar18 + uVar4 * uVar3;
  param_1[3] = param_3[6];
  uVar3 = (ulonglong)CARRY8(uVar25 * uVar18,uVar4 * uVar3);
  uVar25 = uVar24 + uVar26 + uVar3;
  uVar18 = (ulonglong)CARRY8(uVar19,uVar2 * uVar1);
  uVar4 = uVar25 + uVar21;
  *param_1 = uVar19 + uVar2 * uVar1;
  param_1[1] = uVar4 + uVar18;
  param_1[2] = lVar17 + lVar23 + (ulonglong)(CARRY8(uVar24,uVar26) || CARRY8(uVar24 + uVar26,uVar3))
               + lVar22 + (ulonglong)(CARRY8(uVar25,uVar21) || CARRY8(uVar4,uVar18));
  return param_1;
}



// FUNCTION 1450493f0 FUN_1450493f0 body=310 status=ok
// SIG undefined FUN_1450493f0(void)

void FUN_1450493f0(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  uVar6 = param_1[1];
  uVar8 = (longlong)uVar6 >> 0x3f;
  local_18[0] = (*param_1 ^ uVar8) - uVar8;
  iVar7 = 1;
  uVar5 = *param_2;
  lVar3 = 0;
  local_18[1] = ((uVar6 ^ uVar8) - uVar8) - (ulonglong)((*param_1 ^ uVar8) < uVar8);
  do {
    if (*(longlong *)((longlong)local_18 + lVar3 + 8) != 0) break;
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0;
    iVar7 = iVar7 + -1;
    lVar3 = lVar3 + -8;
  } while (-8 < lVar3);
  uVar8 = local_18[iVar7] % uVar5;
  *(ulonglong *)(&local_28 + (longlong)iVar7 * 2) = local_18[iVar7] / uVar5;
  lVar3 = (longlong)(iVar7 + -1);
  if (-1 < iVar7 + -1) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar2._8_8_ = uVar8;
      auVar2._0_8_ = local_18[lVar3];
      uVar8 = SUB168(auVar2 % auVar1,0);
      *(longlong *)(&local_28 + lVar3 * 2) = SUB168(auVar2 / auVar1,0);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  uVar4 = CONCAT44(uStack_1c,uStack_20);
  uVar5 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar6 < 0) {
    uVar5 = -CONCAT44(uStack_24,local_28);
    uVar4 = -(ulonglong)(CONCAT44(uStack_24,local_28) != 0) - CONCAT44(uStack_1c,uStack_20);
    uVar8 = -uVar8;
  }
  if (((uint)((longlong)uVar8 >> 0x3f) | (uint)(uVar8 != 0)) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar9 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar4 = uVar4 + ((longlong)uVar6 >> 0x3f) + (ulonglong)bVar9;
  }
  *param_4 = uVar5;
  param_4[1] = uVar4;
  return;
}



// FUNCTION 145049530 FUN_145049530 body=1461 status=ok
// SIG undefined FUN_145049530(void)

void FUN_145049530(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  char cVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  byte bVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 local_res8;
  longlong local_res20;
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  longlong local_b0;
  int local_a8;
  uint local_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  iVar17 = *(int *)(param_2 + 0x30);
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar17) {
    FUN_14504b430(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar17);
  }
  iVar11 = (int)param_1[1];
  if (iVar11 < iVar17) {
    lVar2 = *param_1;
    *(int *)(param_1 + 1) = iVar17;
    for (puVar9 = (undefined8 *)(lVar2 + (longlong)iVar11 * 8);
        puVar9 != (undefined8 *)(lVar2 + (longlong)iVar17 * 8); puVar9 = puVar9 + 1) {
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0xffffffffffffffff;
      }
    }
  }
  else if (iVar17 < iVar11) {
    *(int *)(param_1 + 1) = iVar17;
  }
  uVar19 = 0;
  uVar23 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  iVar17 = *(int *)(param_2 + 0x30);
  iVar11 = 0;
  if (0 < iVar17) {
    local_b0 = 0;
    local_d8 = 0;
    do {
      lVar26 = local_b0;
      lVar2 = *(longlong *)(param_2 + 0x28);
      iVar17 = *(int *)(lVar2 + 0x10 + local_d8);
      cVar7 = -(char)(iVar17 >> 0x1f);
      if (cVar7 == '\0') {
        puVar8 = (undefined4 *)
                 FUN_144cb4810(param_2,local_68,*(undefined4 *)((longlong)iVar17 * 0x60 + 4 + lVar2)
                              );
        local_88 = *puVar8;
        uStack_84 = puVar8[1];
        uStack_80 = puVar8[2];
        uStack_7c = puVar8[3];
        puVar9 = (undefined8 *)FUN_144cb4810(param_2,local_58,*(undefined4 *)(lVar2 + 4 + local_d8))
        ;
        piVar12 = (int *)*puVar9;
        iVar17 = (int)(puVar9[1] - (longlong)piVar12 >> 2);
        if (0 < iVar17) {
          lVar21 = CONCAT44(uStack_84,local_88) - (longlong)piVar12;
          uVar14 = uVar19;
          do {
            if (*piVar12 != *(int *)(lVar21 + (longlong)piVar12)) {
              bVar6 = true;
              goto LAB_145049691;
            }
            uVar14 = uVar14 + 1;
            piVar12 = piVar12 + 1;
          } while ((longlong)uVar14 < (longlong)iVar17);
        }
        *(undefined8 *)(lVar26 + *param_1) = 0xffffffffffffffff;
        local_b0 = lVar26;
      }
      else {
        bVar6 = false;
LAB_145049691:
        *(int *)(lVar26 + *param_1) = (int)param_1[3];
        iVar17 = (int)param_1[3] + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar17) {
          FUN_14504b540(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar17);
        }
        lVar26 = param_1[3];
        *(int *)(param_1 + 3) = iVar17;
        lVar26 = (longlong)(int)lVar26 * 0x38 + param_1[2];
        *(char *)(lVar26 + 8) = cVar7;
        uVar14 = (ulonglong)(*(uint *)(local_d8 + lVar2) & 0x3fffffff);
        local_c0 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + uVar14 * 0xc);
        local_b8 = *(undefined4 *)(*(longlong *)(param_2 + 0x38) + 8 + uVar14 * 0xc);
        local_98 = (int)local_c0;
        uStack_94 = (undefined4)((ulonglong)local_c0 >> 0x20);
        *(undefined8 *)(lVar26 + 0xc) = local_c0;
        uVar18 = uVar23;
        if (bVar6) {
          FUN_144cb4cd0(param_2,&local_d0,*(undefined4 *)(local_d8 + 4 + lVar2));
          if ((char)local_d0 == '\0') {
            pcVar10 = (char *)FUN_144cb4cd0(param_2,local_78,
                                            *(undefined4 *)
                                             ((longlong)*(int *)(local_d8 + 0x10 + lVar2) * 0x60 +
                                              *(longlong *)(param_2 + 0x28) + 4));
            uVar15 = uVar23;
            if (*pcVar10 != '\0') {
              *(undefined8 *)(lVar26 + 0x18) = 0xffff800000000001;
              *(undefined8 *)(lVar26 + 0x20) = 0x7fffffffffff;
              goto LAB_1450498a2;
            }
          }
          else {
            uVar15 = local_d0._4_4_;
            uVar18 = local_c8;
          }
        }
        else {
          uVar15 = *(uint *)(param_3 + 0xb0);
          FUN_144cb4cd0(param_2,&local_a8,*(undefined4 *)(local_d8 + 4 + lVar2));
          if (((char)local_a8 != '\0') && ((int)local_a4 < (int)uVar15)) {
            uVar15 = local_a4;
          }
          cVar7 = FUN_144cb52c0(param_2,iVar11);
          if (cVar7 != '\0') {
            uVar15 = 0;
            uVar18 = 0;
          }
        }
        cVar7 = FUN_144cb5360(param_2);
        if (cVar7 != '\0') {
          FUN_144cb5490(param_2,&local_res20,iVar11);
          uVar16 = uVar15 - (int)local_res20;
          if (1 < (longlong)((int)uVar16 >> 0x17) + 1U) {
            uVar16 = (int)uVar16 >> 0x1f ^ 0x7fffff;
          }
          uVar15 = uVar23;
          if (-1 < (int)uVar16) {
            uVar15 = uVar16;
          }
          uVar18 = uVar18 - (int)local_res20;
          if (1 < (longlong)((int)uVar18 >> 0x17) + 1U) {
            uVar18 = (int)uVar18 >> 0x1f ^ 0x7fffff;
          }
          if ((int)uVar18 < 0) {
            uVar18 = uVar23;
          }
        }
        uVar14 = (longlong)(int)uVar15 * (longlong)(int)uVar15;
        if (1 < ((longlong)uVar14 >> 0x2f) + 1U) {
          uVar14 = (longlong)uVar14 >> 0x3f ^ 0x7fffffffffff;
        }
        *(ulonglong *)(lVar26 + 0x18) = -uVar14;
        uVar14 = (longlong)(int)uVar18 * (longlong)(int)uVar18;
        if (1 < ((longlong)uVar14 >> 0x2f) + 1U) {
          uVar14 = (longlong)uVar14 >> 0x3f ^ 0x7fffffffffff;
        }
        *(ulonglong *)(lVar26 + 0x20) = uVar14;
      }
LAB_1450498a2:
      local_b0 = local_b0 + 8;
      iVar11 = iVar11 + 1;
      iVar17 = *(int *)(param_2 + 0x30);
      local_d8 = local_d8 + 0x60;
    } while (iVar11 < iVar17);
  }
  uVar14 = uVar19;
  uVar24 = uVar19;
  uVar25 = uVar19;
  if (0 < iVar17) {
    do {
      lVar2 = *param_1;
      if (-1 < *(int *)(lVar2 + uVar14)) {
        lVar26 = *(longlong *)(param_2 + 0x28);
        iVar17 = *(int *)(lVar26 + 8 + uVar25);
        lVar21 = (longlong)iVar17;
        iVar11 = *(int *)(lVar2 + lVar21 * 8);
        while (iVar11 < 0) {
          iVar17 = *(int *)((longlong)*(int *)(lVar21 * 0x60 + 0x10 + lVar26) * 0x60 + 8 + lVar26);
          lVar21 = (longlong)iVar17;
          iVar11 = *(int *)(lVar2 + lVar21 * 8);
        }
        uVar23 = *(uint *)(uVar14 + lVar2);
        iVar11 = *(int *)(lVar2 + (longlong)iVar17 * 8);
        *(uint *)(lVar2 + 4 + (longlong)iVar17 * 8) = uVar23;
        lVar22 = (ulonglong)uVar23 * 0x38;
        *(int *)(lVar22 + param_1[2]) = iVar11;
        lVar21 = (longlong)iVar11 * 0x38;
        *(uint *)(param_1[2] + 4 + lVar21) = uVar23;
        puVar8 = (undefined4 *)(param_1[2] + 0x18 + lVar22);
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        puVar1 = (undefined4 *)(param_1[2] + 0x28 + lVar22);
        *puVar1 = *puVar8;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        lVar2 = param_1[2];
        lVar26 = *(longlong *)(lVar2 + 0x18 + lVar21);
        if (*(longlong *)(lVar2 + 0x28 + lVar22) < lVar26) {
          *(longlong *)(lVar2 + 0x28 + lVar22) = lVar26;
        }
        lVar26 = *(longlong *)(lVar2 + lVar21 + 0x20);
        if (lVar26 < *(longlong *)(lVar2 + 0x30 + lVar22)) {
          *(longlong *)(lVar2 + 0x30 + lVar22) = lVar26;
        }
      }
      uVar23 = (int)uVar24 + 1;
      uVar14 = uVar14 + 8;
      uVar24 = (ulonglong)uVar23;
      uVar25 = uVar25 + 0x60;
    } while ((int)uVar23 < *(int *)(param_2 + 0x30));
    uVar14 = uVar19;
    uVar24 = uVar19;
    if (0 < *(int *)(param_2 + 0x30)) {
      do {
        iVar17 = *(int *)(uVar19 + *param_1);
        if (-1 < iVar17) {
          FUN_144cb6610(param_2,(longlong)(int)uVar24 * 0x60 + *(longlong *)(param_2 + 0x28),
                        &local_c0);
          bVar6 = false;
          lVar2 = *(longlong *)(param_2 + 0x28);
          iVar11 = *(int *)(lVar2 + 8 + uVar14);
          local_res20 = (longlong)(int)(local_a4 - local_c0._4_4_);
          local_res8 = 0;
          iVar20 = iVar11;
LAB_145049a11:
          local_d0 = *(undefined8 *)
                      (*(longlong *)(param_2 + 0x38) +
                      (ulonglong)(*(uint *)((longlong)iVar20 * 0x60 + lVar2) & 0x3fffffff) * 0xc);
          bVar13 = (byte)((ulonglong)
                          (((int)local_d0 - (int)local_c0) * local_res20 -
                          (longlong)((int)((ulonglong)local_d0 >> 0x20) - local_c0._4_4_) *
                          (longlong)(local_a8 - (int)local_c0)) >> 0x3f) ^ 1;
          if (!bVar6) {
            if (bVar13 != 0) {
              bVar6 = true;
            }
LAB_145049ac4:
            iVar20 = *(int *)((longlong)iVar20 * 0x60 + 0x10 + lVar2);
            if ((iVar20 < 0) ||
               (iVar20 = *(int *)((longlong)iVar20 * 0x60 + 8 + lVar2), iVar20 == iVar11))
            goto LAB_145049a6f;
            goto LAB_145049a11;
          }
          if (bVar13 != 0) goto LAB_145049ac4;
          local_res8 = 1;
LAB_145049a6f:
          *(undefined1 *)((longlong)iVar17 * 0x38 + 9 + param_1[2]) = local_res8;
        }
        uVar23 = (int)uVar24 + 1;
        uVar19 = uVar19 + 8;
        uVar14 = uVar14 + 0x60;
        uVar24 = (ulonglong)uVar23;
      } while ((int)uVar23 < *(int *)(param_2 + 0x30));
    }
  }
  return;
}



// FUNCTION 145049af0 FUN_145049af0 body=138 status=ok
// SIG undefined FUN_145049af0(void)

void FUN_145049af0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_14504b430(param_1,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar2 = (int)param_1[1];
  if (iVar2 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    puVar1 = (undefined8 *)(*param_1 + (longlong)param_2 * 8);
    puVar3 = (undefined8 *)(*param_1 + (longlong)iVar2 * 8);
    if (puVar3 != puVar1) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0xffffffffffffffff;
        }
        puVar3 = puVar3 + 1;
      } while (puVar3 != puVar1);
      return;
    }
  }
  else if (param_2 < iVar2) {
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 145049b80 FUN_145049b80 body=142 status=ok
// SIG undefined FUN_145049b80(void)

void FUN_145049b80(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) * 0x38);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  return;
}



// FUNCTION 145049c10 FUN_145049c10 body=2455 status=ok
// SIG undefined FUN_145049c10(void)

undefined8 FUN_145049c10(longlong *param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 local_res20;
  longlong local_1e8 [2];
  ulonglong local_1d8;
  longlong lStack_1d0;
  ulonglong local_1c8;
  ulonglong local_1b8;
  longlong lStack_1b0;
  undefined8 local_1a8 [2];
  ulonglong local_198;
  ulonglong uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  ulonglong local_170;
  undefined4 local_168;
  int local_164;
  undefined1 local_160;
  undefined1 local_15f;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong local_138;
  ulonglong local_130;
  longlong lStack_128;
  undefined8 local_120;
  ulonglong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined4 local_100;
  int iStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong local_e0;
  ulonglong uStack_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong uStack_b8;
  undefined1 local_b0 [16];
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_res20 = param_4;
  puVar14 = (ulonglong *)FUN_14504acd0(param_1,param_2);
  uVar25 = *puVar14;
  local_178 = uVar25;
  local_170 = uVar25;
  puVar14 = (ulonglong *)FUN_14504acd0(param_1,param_3);
  uVar2 = *puVar14;
  uVar12 = local_178._4_4_;
  local_188 = *(undefined8 *)
               ((longlong)*(int *)(*param_1 + 4 + (longlong)param_2 * 8) * 0x38 + 0xc + param_1[6]);
  local_180 = *(undefined8 *)
               ((longlong)*(int *)(*param_1 + (longlong)param_3 * 8) * 0x38 + 0xc + param_1[6]);
  local_c8 = uVar2;
  while( true ) {
    iVar18 = (int)uVar25;
    local_1e8[0] = CONCAT44(local_1e8[0]._4_4_,iVar18);
    lVar15 = FUN_144d30bb0(param_1 + 8,local_1e8);
    if ((lVar15 == 0) || (*(int *)(lVar15 + 4) < 0)) {
      lVar15 = (longlong)iVar18 * 0x38 + param_1[6];
    }
    else {
      lVar15 = param_1[8] + 8 + (longlong)*(int *)(lVar15 + 4) * 0x40;
    }
    if (*(uint *)(lVar15 + 4) == uVar12) break;
    uVar25 = (ulonglong)*(uint *)(lVar15 + 4);
  }
  plVar16 = param_1 + 8;
  local_170 = uVar25;
  local_1e8[0]._0_4_ = iVar18;
  lVar15 = FUN_144d30bb0(plVar16,local_1e8);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 4) < 0)) {
    puVar19 = (undefined4 *)((longlong)iVar18 * 0x38 + param_1[6]);
  }
  else {
    puVar19 = (undefined4 *)(param_1[8] + 8 + (longlong)*(int *)(lVar15 + 4) * 0x40);
  }
  local_100 = *puVar19;
  iStack_fc = puVar19[1];
  uStack_f8 = puVar19[2];
  iVar18 = puVar19[3];
  iVar24 = (int)uVar2;
  iVar11 = puVar19[4];
  uStack_ec = puVar19[5];
  uStack_e8 = puVar19[6];
  uStack_e4 = puVar19[7];
  local_e0 = *(ulonglong *)(puVar19 + 8);
  uStack_d8 = *(ulonglong *)(puVar19 + 10);
  local_d0 = *(ulonglong *)(puVar19 + 0xc);
  iStack_f4 = iVar18;
  local_f0 = iVar11;
  local_1e8[0]._0_4_ = iVar24;
  lVar15 = FUN_144d30bb0(plVar16,local_1e8);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 4) < 0)) {
    pauVar20 = (undefined1 (*) [16])((longlong)iVar24 * 0x38 + param_1[6]);
  }
  else {
    pauVar20 = (undefined1 (*) [16])(param_1[8] + 8 + (longlong)*(int *)(lVar15 + 4) * 0x40);
  }
  uStack_150 = *(ulonglong *)(pauVar20[1] + 8);
  auVar1 = *pauVar20;
  iVar10 = auVar1._4_4_;
  uStack_148 = *(ulonglong *)pauVar20[2];
  uStack_140 = *(ulonglong *)(pauVar20[2] + 8);
  uStack_158 = (undefined4)*(undefined8 *)pauVar20[1];
  uStack_154 = (undefined4)((ulonglong)*(undefined8 *)pauVar20[1] >> 0x20);
  local_138 = *(ulonglong *)pauVar20[3];
  local_1e8[0] = CONCAT44(local_1e8[0]._4_4_,iVar10);
  lVar15 = FUN_144d30bb0(plVar16,local_1e8);
  if ((lVar15 == 0) || (*(int *)(lVar15 + 4) < 0)) {
    pauVar20 = (undefined1 (*) [16])((longlong)iVar10 * 0x38 + param_1[6]);
  }
  else {
    pauVar20 = (undefined1 (*) [16])(param_1[8] + 8 + (longlong)*(int *)(lVar15 + 4) * 0x40);
  }
  local_b0 = *pauVar20;
  local_a0 = *(int *)pauVar20[1];
  uStack_9c = *(undefined4 *)(pauVar20[1] + 4);
  uStack_98 = *(undefined4 *)(pauVar20[1] + 8);
  uStack_94 = *(undefined4 *)(pauVar20[1] + 0xc);
  local_90 = *(undefined8 *)pauVar20[2];
  uStack_88 = *(undefined8 *)(pauVar20[2] + 8);
  local_80 = *(undefined8 *)pauVar20[3];
  if (((iVar18 != (int)param_4) || (iVar11 != local_res20._4_4_)) &&
     ((local_b0._12_4_ != (int)param_4 || (local_a0 != local_res20._4_4_)))) {
    local_198 = CONCAT44(uStack_e4,uStack_e8);
    uStack_190 = local_e0;
    local_c0 = uStack_150;
    uStack_b8 = uStack_148;
    FUN_145047eb0(&local_res20,&stack0x00000028,&local_188,&local_1d8);
    uVar22 = uStack_190;
    uVar25 = local_198;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uStack_190;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_1c8;
    if (((((-1 < (longlong)
                 (((SUB168(auVar28 * auVar6,8) - ((longlong)uStack_190 >> 0x3f & local_1c8)) -
                  lStack_1d0) - (ulonglong)(local_1c8 * uStack_190 < local_1d8))) &&
          (auVar3._8_8_ = 0, auVar3._0_8_ = local_198, auVar7._8_8_ = 0, auVar7._0_8_ = local_1c8,
          local_1b8 = local_1d8 - local_1c8 * local_198,
          -1 < (longlong)
               ((lStack_1d0 -
                (SUB168(auVar3 * auVar7,8) - ((longlong)local_198 >> 0x3f & local_1c8))) -
               (ulonglong)(local_1d8 < local_1c8 * local_198)))) &&
         (FUN_145047eb0(&stack0x00000030,&local_res20,&local_180,&local_1d8), uVar13 = uStack_148,
         uVar17 = uStack_150, auVar4._8_8_ = 0, auVar4._0_8_ = uStack_148, auVar8._8_8_ = 0,
         auVar8._0_8_ = local_1c8,
         -1 < (longlong)
              (((SUB168(auVar4 * auVar8,8) - ((longlong)uStack_148 >> 0x3f & local_1c8)) -
               lStack_1d0) - (ulonglong)(uStack_148 * local_1c8 < local_1d8)))) &&
        (auVar5._8_8_ = 0, auVar5._0_8_ = uStack_150, auVar9._8_8_ = 0, auVar9._0_8_ = local_1c8,
        local_1b8 = local_1d8 - uStack_150 * local_1c8,
        -1 < (longlong)
             ((lStack_1d0 - (SUB168(auVar5 * auVar9,8) - ((longlong)uStack_150 >> 0x3f & local_1c8))
              ) - (ulonglong)(local_1d8 < uStack_150 * local_1c8)))) &&
       ((iStack_f4 != (int)local_188 || (local_f0 != local_188._4_4_)))) {
      if (((int)local_180 != local_b0._12_4_) || (local_180._4_4_ != local_a0)) {
        FUN_145047eb0(&iStack_f4,&local_188,&local_res20,&local_130);
        FUN_145047eb0(&local_180,local_b0 + 0xc,&local_res20,&local_118);
        local_1b8 = local_130;
        lStack_1b0 = lStack_128;
        local_1a8[0] = local_120;
        if (((lStack_128 != 0 || local_130 != 0) & ((byte)((ulonglong)lStack_128 >> 0x3f) ^ 1)) == 0
           ) {
          FUN_14504b0d0(&local_1b8,local_1a8,0xffffffff,&local_1d8);
          uVar22 = local_1d8 - 1;
          lStack_1b0 = lStack_1d0 - (ulonglong)(local_1d8 == 0);
          if (lStack_1b0 != lStack_1b0 >> 0x3f || 1 < ((longlong)uVar22 >> 0x2f) + 1U) {
            uVar22 = (ulonglong)(-1 < lStack_1b0) - 1 ^ 0x7fffffffffff;
          }
          if ((longlong)uVar22 < (longlong)uVar25) {
            return 0;
          }
          local_1e8[0] = -uVar22;
          local_1b8 = -uVar25;
          plVar16 = (longlong *)FUN_14504aff0(&local_1d8,&local_1b8,local_1e8);
          uVar25 = -*plVar16;
          local_198 = uVar25;
        }
        else {
          FUN_14504b0d0(&local_1b8,local_1a8,0xffffffff,&local_1d8);
          uVar21 = local_1d8 + 1;
          lStack_1d0 = lStack_1d0 + (ulonglong)(0xfffffffffffffffe < local_1d8);
          if (lStack_1d0 != lStack_1d0 >> 0x3f || 1 < ((longlong)uVar21 >> 0x2f) + 1U) {
            uVar21 = (ulonglong)(-1 < lStack_1d0) - 1 ^ 0x7fffffffffff;
          }
          if ((longlong)uVar22 < (longlong)uVar21) {
            return 0;
          }
          local_1d8 = uVar21 * uVar22;
          lStack_1d0 = SUB168(SEXT816((longlong)uVar21) * SEXT816((longlong)uVar22),8);
          lVar15 = FUN_147e513e3(&local_1d8,local_1e8);
          iVar18 = (int)local_1e8[0] * 0x800000 + (int)(float)lVar15;
          auVar29._4_4_ = iVar18;
          auVar29._0_4_ = iVar18;
          auVar29._8_4_ = iVar18;
          auVar29._12_4_ = iVar18;
          auVar28 = sqrtps(ZEXT416((uint)(float)lVar15),auVar29);
          fVar27 = ceilf(auVar28._0_4_ * 1.0000001);
          uVar22 = uVar21 + (longlong)fVar27 * -2 + uVar22;
          if (1 < ((longlong)uVar22 >> 0x2f) + 1U) {
            uVar22 = (longlong)uVar22 >> 0x3f ^ 0x7fffffffffff;
          }
          uStack_190 = 0;
          if (-1 < (longlong)uVar22) {
            uStack_190 = uVar22;
          }
        }
        local_1b8 = local_118;
        lStack_1b0 = lStack_110;
        local_1a8[0] = local_108;
        if (((lStack_110 != 0 || local_118 != 0) & ((byte)((ulonglong)lStack_110 >> 0x3f) ^ 1)) == 0
           ) {
          FUN_14504b0d0(&local_1b8,local_1a8,0xffffffff,&local_1d8);
          local_1b8 = local_1d8 - 1;
          lStack_1b0 = lStack_1d0 - (ulonglong)(local_1d8 == 0);
          uVar22 = local_1b8;
          if (lStack_1b0 != lStack_1b0 >> 0x3f || 1 < ((longlong)local_1b8 >> 0x2f) + 1U) {
            uVar22 = (ulonglong)(-1 < lStack_1b0) - 1 ^ 0x7fffffffffff;
          }
          if ((longlong)uVar17 <= (longlong)uVar22) {
            lVar23 = -uVar22;
            lVar26 = -uVar17;
            local_1d8 = lVar23 * lVar26;
            lStack_1d0 = SUB168(SEXT816(lVar23) * SEXT816(lVar26),8);
            lVar15 = FUN_147e513e3(&local_1d8,local_1e8);
            iVar18 = (int)local_1e8[0] * 0x800000 + (int)(float)lVar15;
            auVar31._4_4_ = iVar18;
            auVar31._0_4_ = iVar18;
            auVar31._8_4_ = iVar18;
            auVar31._12_4_ = iVar18;
            auVar28 = sqrtps(ZEXT416((uint)(float)lVar15),auVar31);
            fVar27 = ceilf(auVar28._0_4_ * 1.0000001);
            uVar22 = lVar23 + (longlong)fVar27 * -2 + lVar26;
            if (1 < ((longlong)uVar22 >> 0x2f) + 1U) {
              uVar22 = (longlong)uVar22 >> 0x3f ^ 0x7fffffffffff;
            }
            uVar17 = 0;
            if (-1 < (longlong)uVar22) {
              uVar17 = uVar22;
            }
            uVar22 = -uVar17;
            uVar17 = uStack_b8;
            goto LAB_14504a465;
          }
        }
        else {
          FUN_14504b0d0(&local_1b8,local_1a8,0xffffffff,&local_1d8);
          uVar21 = local_1d8 + 1;
          lStack_1d0 = lStack_1d0 + (ulonglong)(0xfffffffffffffffe < local_1d8);
          if (lStack_1d0 != lStack_1d0 >> 0x3f || 1 < ((longlong)uVar21 >> 0x2f) + 1U) {
            uVar21 = (ulonglong)(-1 < lStack_1d0) - 1 ^ 0x7fffffffffff;
          }
          if ((longlong)uVar21 <= (longlong)uVar13) {
            local_1d8 = uVar13 * uVar21;
            lStack_1d0 = SUB168(SEXT816((longlong)uVar21) * SEXT816((longlong)uVar13),8);
            lVar15 = FUN_147e513e3(&local_1d8,local_1e8);
            iVar18 = (int)local_1e8[0] * 0x800000 + (int)(float)lVar15;
            auVar30._4_4_ = iVar18;
            auVar30._0_4_ = iVar18;
            auVar30._8_4_ = iVar18;
            auVar30._12_4_ = iVar18;
            auVar28 = sqrtps(ZEXT416((uint)(float)lVar15),auVar30);
            fVar27 = ceilf(auVar28._0_4_ * 1.0000001);
            uVar21 = uVar13 + (longlong)fVar27 * -2 + uVar21;
            if (1 < ((longlong)uVar21 >> 0x2f) + 1U) {
              uVar21 = (longlong)uVar21 >> 0x3f ^ 0x7fffffffffff;
            }
            uVar22 = local_c0;
            uVar17 = 0;
            if (-1 < (longlong)uVar21) {
              uVar17 = uVar21;
            }
LAB_14504a465:
            uVar13 = local_170;
            if ((longlong)uVar25 < (longlong)uVar22) {
              local_198 = uVar22;
            }
            local_15c = (undefined4)local_res20;
            uStack_158 = (undefined4)((ulonglong)local_res20 >> 0x20);
            if ((longlong)uVar17 < (longlong)uStack_190) {
              uStack_190 = uVar17;
            }
            local_15f = 0;
            local_168 = (undefined4)local_170;
            uStack_140 = local_198;
            if ((longlong)local_198 < CONCAT44(uStack_e4,uStack_e8)) {
              uStack_140 = CONCAT44(uStack_e4,uStack_e8);
            }
            local_138 = uStack_190;
            if ((longlong)local_e0 < (longlong)uStack_190) {
              local_138 = local_e0;
            }
            local_160 = auVar1[8];
            local_b0._0_4_ = iVar24;
            local_178 = CONCAT44(iVar24,(undefined4)local_178);
            if ((longlong)uStack_d8 < (longlong)local_198) {
              uStack_d8 = local_198;
            }
            if ((longlong)uStack_190 < (longlong)local_d0) {
              local_d0 = uStack_190;
            }
            local_164 = iVar10;
            uStack_150 = local_198;
            uStack_148 = uStack_190;
            iStack_fc = iVar24;
            FUN_14504ae80(param_1 + 6,uVar2 & 0xffffffff,&local_168);
            FUN_14504ae80(param_1 + 6,uVar13 & 0xffffffff,&local_100);
            FUN_14504ae80(param_1 + 6,iVar10,local_b0);
            FUN_14504ad40(param_1,param_2,&local_178);
            FUN_14504ad40(param_1,param_3,&local_c8);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14504a5b0 FUN_14504a5b0 body=348 status=ok
// SIG undefined FUN_14504a5b0(void)

undefined8 FUN_14504a5b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  ulonglong local_res20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar3 = (undefined8 *)FUN_14504acd0();
  local_res8 = *puVar3;
  puVar4 = (ulonglong *)FUN_14504acd0(param_1,param_3);
  uVar2 = *puVar4;
  local_res20 = uVar2;
  puVar5 = (undefined4 *)FUN_144d2ce80(param_1 + 0x30,local_res8._4_4_);
  uVar1 = *puVar5;
  puVar3 = (undefined8 *)FUN_144d2ce80(param_1 + 0x30,uVar1);
  local_98 = *puVar3;
  uStack_90 = puVar3[1];
  local_68 = puVar3[6];
  local_88 = puVar3[2];
  uStack_80 = puVar3[3];
  local_78 = puVar3[4];
  uStack_70 = puVar3[5];
  lVar6 = FUN_144d2ce80(param_1 + 0x30,uVar2 & 0xffffffff);
  local_40 = *(undefined8 *)(lVar6 + 0x20);
  uStack_38 = *(undefined8 *)(lVar6 + 0x28);
  uStack_5c = *(undefined4 *)(lVar6 + 4);
  uStack_58 = *(undefined4 *)(lVar6 + 8);
  uStack_54 = *(undefined4 *)(lVar6 + 0xc);
  local_50 = *(undefined1 (*) [16])(lVar6 + 0x10);
  local_30 = *(undefined8 *)(lVar6 + 0x30);
  if ((*(int *)((longlong)puVar3 + 0xc) == (int)((ulonglong)*(undefined8 *)(lVar6 + 8) >> 0x20)) &&
     (*(int *)(puVar3 + 2) == local_50._0_4_)) {
    uVar7 = 0;
  }
  else {
    local_res8 = CONCAT44((int)uVar2,(undefined4)local_res8);
    local_98 = CONCAT44((int)uVar2,(undefined4)local_98);
    local_60 = uVar1;
    FUN_14504ae80(param_1 + 0x30,uVar1,&local_98);
    FUN_14504ae80(param_1 + 0x30,uVar2 & 0xffffffff,&local_60);
    FUN_14504ad40(param_1,param_2,&local_res8);
    FUN_14504ad40(param_1,param_3,&local_res20);
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 14504a710 FUN_14504a710 body=981 status=ok
// SIG undefined FUN_14504a710(void)

void FUN_14504a710(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,int *param_6,int *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong *plVar19;
  undefined4 local_res20 [2];
  
  piVar10 = param_7;
  piVar8 = param_6;
  local_res20[0] = param_4;
  puVar11 = (undefined8 *)FUN_14504acd0();
  uVar5 = *puVar11;
  puVar12 = (ulonglong *)FUN_14504acd0(param_1,param_3);
  uVar16 = *puVar12;
  param_6 = (int *)uVar16;
  puVar11 = (undefined8 *)FUN_14504acd0(param_1,param_4);
  piVar7 = (int *)CONCAT44(param_5._4_4_,(int)param_5);
  iVar18 = *piVar8;
  uVar6 = *puVar11;
  param_5._0_4_ = *piVar7;
  if ((iVar18 != (int)param_5) || (piVar8[1] != piVar7[1])) {
    uVar9 = param_6._4_4_;
    if ((iVar18 == *piVar10) && (piVar8[1] == piVar10[1])) {
      uVar16 = (ulonglong)param_6._4_4_;
    }
    else {
      iVar2 = piVar10[1];
      iVar3 = piVar7[1];
      iVar18 = iVar18 - (int)param_5;
      lVar17 = (longlong)(*piVar10 - (int)param_5);
      iVar4 = piVar8[1];
      uVar14 = (uint)uVar16;
      param_4 = local_res20[0];
      while (uVar14 != uVar9) {
        iVar15 = (int)uVar16;
        param_6._4_4_ = (uint)((ulonglong)param_6 >> 0x20);
        local_res20[0] = param_4;
        param_6._0_4_ = iVar15;
        lVar13 = FUN_144d30bb0(param_1 + 0x40,&param_6);
        if ((lVar13 == 0) || (*(int *)(lVar13 + 4) < 0)) {
          lVar13 = (longlong)iVar15 * 0x38 + *(longlong *)(param_1 + 0x30);
        }
        else {
          lVar13 = *(longlong *)(param_1 + 0x40) + 8 + (longlong)*(int *)(lVar13 + 4) * 0x40;
        }
        param_4 = local_res20[0];
        if ((longlong)(iVar4 - iVar3) * (longlong)(iVar2 - iVar3) + iVar18 * lVar17 <=
            (longlong)(*(int *)(lVar13 + 0x10) - iVar3) * (longlong)(iVar2 - iVar3) +
            (*(int *)(lVar13 + 0xc) - (int)param_5) * lVar17) break;
        param_6 = (int *)CONCAT44(param_6._4_4_,iVar15);
        lVar13 = FUN_144d30bb0(param_1 + 0x40,&param_6);
        if ((lVar13 == 0) || (*(int *)(lVar13 + 4) < 0)) {
          lVar13 = (longlong)iVar15 * 0x38 + *(longlong *)(param_1 + 0x30);
        }
        else {
          lVar13 = *(longlong *)(param_1 + 0x40) + 8 + (longlong)*(int *)(lVar13 + 4) * 0x40;
        }
        uVar14 = *(uint *)(lVar13 + 4);
        uVar16 = (ulonglong)uVar14;
        param_4 = local_res20[0];
      }
    }
  }
  param_6 = (int *)0xffffffffffffffff;
  local_res20[0] = param_3;
  FUN_14504b210(param_1 + 0x10,&param_5,local_res20);
  if ((int)param_5 == *(int *)(param_1 + 0x18)) {
    iVar18 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar18) {
      FUN_14504b680(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    puVar1 = (undefined4 *)
             (*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *(int **)(puVar1 + 1) = param_6;
      *puVar1 = param_3;
    }
    *(int *)(param_1 + 0x18) = iVar18;
  }
  else {
    *(int **)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)(int)param_5 * 0xc) = param_6;
  }
  param_6 = (int *)CONCAT44((int)uVar16,(int)uVar5);
  local_res20[0] = param_2;
  FUN_14504b210(param_1 + 0x10,&param_5,local_res20);
  if ((int)param_5 == *(int *)(param_1 + 0x18)) {
    iVar18 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar18) {
      FUN_14504b680(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    puVar1 = (undefined4 *)
             (*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *(int **)(puVar1 + 1) = param_6;
      *puVar1 = param_2;
    }
    *(int *)(param_1 + 0x18) = iVar18;
  }
  else {
    *(int **)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)(int)param_5 * 0xc) = param_6;
  }
  plVar19 = (longlong *)(param_1 + 0x10);
  param_6 = (int *)CONCAT44((int)((ulonglong)uVar6 >> 0x20),(int)uVar16);
  local_res20[0] = param_4;
  FUN_14504b210(plVar19,&param_5,local_res20);
  if ((int)param_5 == *(int *)(param_1 + 0x18)) {
    iVar18 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar18) {
      FUN_14504b680(plVar19,&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    puVar1 = (undefined4 *)(*plVar19 + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *(int **)(puVar1 + 1) = param_6;
      *puVar1 = param_4;
    }
    *(int *)(param_1 + 0x18) = iVar18;
  }
  else {
    *(int **)(*plVar19 + 4 + (longlong)(int)param_5 * 0xc) = param_6;
  }
  return;
}



// FUNCTION 14504aaf0 FUN_14504aaf0 body=204 status=ok
// SIG undefined FUN_14504aaf0(void)

void FUN_14504aaf0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  int local_58;
  undefined4 uStack_54;
  
  puVar9 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = (undefined8 *)((longlong)puVar9 + (longlong)*(int *)(param_1 + 0x18) * 0xc);
  for (; puVar9 != puVar1; puVar9 = (undefined8 *)((longlong)puVar9 + 0xc)) {
    local_58 = (int)*puVar9;
    uStack_54 = (undefined4)((ulonglong)*puVar9 >> 0x20);
    *(ulonglong *)(*param_2 + (longlong)local_58 * 8) =
         CONCAT44(*(undefined4 *)(puVar9 + 1),uStack_54);
  }
  piVar11 = *(int **)(param_1 + 0x40);
  piVar12 = piVar11 + (longlong)*(int *)(param_1 + 0x48) * 0x10;
  for (; piVar11 != piVar12; piVar11 = piVar11 + 0x10) {
    uVar5 = *(undefined8 *)(piVar11 + 4);
    uVar6 = *(undefined8 *)(piVar11 + 6);
    uVar7 = *(undefined8 *)(piVar11 + 8);
    uVar8 = *(undefined8 *)(piVar11 + 10);
    uVar3 = *(undefined8 *)(piVar11 + 0xc);
    uVar4 = *(undefined8 *)(piVar11 + 0xe);
    lVar2 = param_2[2];
    lVar10 = (longlong)*piVar11 * 0x38;
    *(undefined8 *)(lVar10 + lVar2) = *(undefined8 *)(piVar11 + 2);
    ((undefined8 *)(lVar10 + lVar2))[1] = uVar5;
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar2);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar2);
    *puVar1 = uVar8;
    puVar1[1] = uVar3;
    *(undefined8 *)(lVar10 + 0x30 + lVar2) = uVar4;
  }
  return;
}



// FUNCTION 14504abc0 FUN_14504abc0 body=261 status=ok
// SIG undefined FUN_14504abc0(void)

void FUN_14504abc0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + 0x40);
  puVar2 = (undefined8 *)(param_1 + 0x40);
  if (puVar1 != puVar2) {
    FUN_14504af60(puVar2,&PTR_vftable_14c6e47a0);
    FUN_14504af60(puVar1,&PTR_vftable_14c6e47a0);
    uVar4 = *puVar2;
    *puVar2 = *puVar1;
    *puVar1 = uVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_2 + 0x4c) = uVar3;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = uVar4;
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x58) = uVar3;
  puVar2 = (undefined8 *)(param_2 + 0x10);
  if (puVar2 != puVar1) {
    FUN_14504adf0(puVar1,&PTR_vftable_14c6e47a0);
    FUN_14504adf0(puVar2,&PTR_vftable_14c6e47a0);
    uVar4 = *puVar1;
    *puVar1 = *puVar2;
    *puVar2 = uVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = uVar3;
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x28) = uVar3;
  return;
}



// FUNCTION 14504acd0 FUN_14504acd0 body=107 status=ok
// SIG undefined FUN_14504acd0(void)

longlong FUN_14504acd0(longlong *param_1,int param_2)

{
  longlong lVar1;
  int local_res10 [2];
  
  local_res10[0] = param_2;
  lVar1 = FUN_144d30b40(param_1 + 2,local_res10);
  if ((lVar1 != 0) && (-1 < *(int *)(lVar1 + 4))) {
    return param_1[2] + (longlong)*(int *)(lVar1 + 4) * 0xc + 4;
  }
  return *param_1 + (longlong)param_2 * 8;
}



// FUNCTION 14504ad40 FUN_14504ad40 body=162 status=ok
// SIG undefined FUN_14504ad40(void)

void FUN_14504ad40(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  FUN_14504b210(plVar1,local_res8,local_res10);
  if (local_res8[0] == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar3) {
      FUN_14504b680(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar2 = (undefined4 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x18) * 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = param_2;
      *(undefined8 *)(puVar2 + 1) = *param_3;
    }
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  *(undefined8 *)(*plVar1 + 4 + (longlong)local_res8[0] * 0xc) = *param_3;
  return;
}



// FUNCTION 14504adf0 FUN_14504adf0 body=130 status=ok
// SIG undefined FUN_14504adf0(void)

void FUN_14504adf0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar1 = (undefined8 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0xc);
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar4;
    puVar3 = (undefined8 *)*param_1;
    puVar2 = puVar1;
    if (0 < (int)uVar4) {
      do {
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
        }
        puVar2 = (undefined8 *)((longlong)puVar2 + 0xc);
        puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 14504ae80 FUN_14504ae80 body=210 status=ok
// SIG undefined FUN_14504ae80(void)

void FUN_14504ae80(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  int local_res8 [2];
  undefined4 local_res10 [2];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  local_res10[0] = param_2;
  FUN_14504b320(plVar1,local_res8,local_res10);
  if (local_res8[0] == *(int *)(param_1 + 0x18)) {
    iVar7 = *(int *)(param_1 + 0x18) + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar7) {
      FUN_14504b7b0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar5 = (undefined4 *)((longlong)*(int *)(param_1 + 0x18) * 0x40 + *plVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = param_2;
      uVar4 = param_3[1];
      *(undefined8 *)(puVar5 + 2) = *param_3;
      *(undefined8 *)(puVar5 + 4) = uVar4;
      uVar4 = param_3[3];
      *(undefined8 *)(puVar5 + 6) = param_3[2];
      *(undefined8 *)(puVar5 + 8) = uVar4;
      uVar4 = param_3[5];
      *(undefined8 *)(puVar5 + 10) = param_3[4];
      *(undefined8 *)(puVar5 + 0xc) = uVar4;
      *(undefined8 *)(puVar5 + 0xe) = param_3[6];
    }
    *(int *)(param_1 + 0x18) = iVar7;
    return;
  }
  uVar4 = param_3[1];
  lVar3 = *plVar1;
  lVar6 = (longlong)local_res8[0] * 0x40;
  puVar2 = (undefined8 *)(lVar6 + 8 + lVar3);
  *puVar2 = *param_3;
  puVar2[1] = uVar4;
  uVar4 = param_3[3];
  puVar2 = (undefined8 *)(lVar6 + 0x18 + lVar3);
  *puVar2 = param_3[2];
  puVar2[1] = uVar4;
  uVar4 = param_3[5];
  puVar2 = (undefined8 *)(lVar6 + 0x28 + lVar3);
  *puVar2 = param_3[4];
  puVar2[1] = uVar4;
  *(undefined8 *)(lVar6 + 0x38 + lVar3) = param_3[6];
  return;
}



// FUNCTION 14504af60 FUN_14504af60 body=137 status=ok
// SIG undefined FUN_14504af60(void)

void FUN_14504af60(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 6)
    ;
    uVar5 = *(uint *)(param_1 + 1);
    uVar6 = (ulonglong)uVar5;
    puVar4 = (undefined8 *)*param_1;
    puVar3 = puVar2;
    if (0 < (int)uVar5) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
          uVar1 = puVar4[3];
          puVar3[2] = puVar4[2];
          puVar3[3] = uVar1;
          uVar1 = puVar4[5];
          puVar3[4] = puVar4[4];
          puVar3[5] = uVar1;
          uVar1 = puVar4[7];
          puVar3[6] = puVar4[6];
          puVar3[7] = uVar1;
        }
        puVar3 = puVar3 + 8;
        puVar4 = puVar4 + 8;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = puVar2;
  }
  return;
}



// FUNCTION 14504aff0 FUN_14504aff0 body=217 status=ok
// SIG undefined FUN_14504aff0(void)

ulonglong * FUN_14504aff0(ulonglong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  int local_res8 [2];
  longlong local_18;
  undefined8 uStack_10;
  
  local_18 = *param_2 * *param_3;
  uStack_10 = SUB168(SEXT816(*param_3) * SEXT816(*param_2),8);
  lVar1 = FUN_147e513e3(&local_18,local_res8);
  iVar2 = local_res8[0] * 0x800000 + (int)(float)lVar1;
  auVar5._4_4_ = iVar2;
  auVar5._0_4_ = iVar2;
  auVar5._8_4_ = iVar2;
  auVar5._12_4_ = iVar2;
  auVar5 = sqrtps(ZEXT416((uint)(float)lVar1),auVar5);
  fVar4 = ceilf(auVar5._0_4_ * 1.0000001);
  uVar3 = *param_2 + (longlong)fVar4 * -2 + *param_3;
  if (1 < ((longlong)uVar3 >> 0x2f) + 1U) {
    uVar3 = (longlong)uVar3 >> 0x3f ^ 0x7fffffffffff;
  }
  *param_1 = uVar3;
  if ((longlong)uVar3 < 0) {
    *param_1 = 0;
  }
  return param_1;
}



// FUNCTION 14504b0d0 FUN_14504b0d0 body=310 status=ok
// SIG undefined FUN_14504b0d0(void)

void FUN_14504b0d0(ulonglong *param_1,ulonglong *param_2,uint param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18 [2];
  
  uVar6 = param_1[1];
  uVar8 = (longlong)uVar6 >> 0x3f;
  local_18[0] = (*param_1 ^ uVar8) - uVar8;
  iVar7 = 1;
  uVar5 = *param_2;
  lVar3 = 0;
  local_18[1] = ((uVar6 ^ uVar8) - uVar8) - (ulonglong)((*param_1 ^ uVar8) < uVar8);
  do {
    if (*(longlong *)((longlong)local_18 + lVar3 + 8) != 0) break;
    *(undefined8 *)((longlong)&uStack_20 + lVar3) = 0;
    iVar7 = iVar7 + -1;
    lVar3 = lVar3 + -8;
  } while (-8 < lVar3);
  uVar8 = local_18[iVar7] % uVar5;
  *(ulonglong *)(&local_28 + (longlong)iVar7 * 2) = local_18[iVar7] / uVar5;
  lVar3 = (longlong)(iVar7 + -1);
  if (-1 < iVar7 + -1) {
    do {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      auVar2._8_8_ = uVar8;
      auVar2._0_8_ = local_18[lVar3];
      uVar8 = SUB168(auVar2 % auVar1,0);
      *(longlong *)(&local_28 + lVar3 * 2) = SUB168(auVar2 / auVar1,0);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  uVar4 = CONCAT44(uStack_1c,uStack_20);
  uVar5 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar6 < 0) {
    uVar5 = -CONCAT44(uStack_24,local_28);
    uVar4 = -(ulonglong)(CONCAT44(uStack_24,local_28) != 0) - CONCAT44(uStack_1c,uStack_20);
    uVar8 = -uVar8;
  }
  if (((uint)((longlong)uVar8 >> 0x3f) | (uint)(uVar8 != 0)) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar9 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar4 = uVar4 + ((longlong)uVar6 >> 0x3f) + (ulonglong)bVar9;
  }
  *param_4 = uVar5;
  param_4[1] = uVar4;
  return;
}



// FUNCTION 14504b210 FUN_14504b210 body=257 status=ok
// SIG undefined FUN_14504b210(void)

uint * FUN_14504b210(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14504b2e9:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0xc) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_14504b2e9;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 14504b320 FUN_14504b320 body=260 status=ok
// SIG undefined FUN_14504b320(void)

uint * FUN_14504b320(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14504b3fc:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)((longlong)(int)puVar6[1] * 0x40 + *param_1) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_14504b3fc;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 14504b430 FUN_14504b430 body=269 status=ok
// SIG undefined FUN_14504b430(void)

void FUN_14504b430(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14504b540 FUN_14504b540 body=311 status=ok
// SIG undefined FUN_14504b540(void)

ulonglong FUN_14504b540(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  
  uVar13 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar13 * 2;
  uVar10 = param_3;
  if (param_3 < uVar12) {
    uVar10 = uVar12;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x38,&local_res8);
  uVar12 = (ulonglong)*(uint *)(param_1 + 1);
  puVar8 = (undefined8 *)*param_1;
  puVar7 = puVar6;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        *puVar7 = *puVar8;
        puVar7[1] = uVar5;
        uVar5 = puVar8[3];
        puVar7[2] = puVar8[2];
        puVar7[3] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x24);
        uVar3 = *(undefined4 *)(puVar8 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x2c);
        *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(puVar8 + 4);
        *(undefined4 *)((longlong)puVar7 + 0x24) = uVar2;
        *(undefined4 *)(puVar7 + 5) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar4;
        puVar7[6] = puVar8[6];
      }
      puVar7 = puVar7 + 7;
      puVar8 = puVar8 + 7;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar10 * 0x38 + 0x38;
  uVar11 = uVar10;
  if (uVar12 <= local_res8) {
    local_res8 = local_res8 - 0x38;
    uVar11 = uVar10 + 1;
    if (uVar12 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0x38;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar10;
      lVar9 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
      uVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
      uVar11 = uVar11 + ((uVar10 - lVar9 >> 1) + lVar9 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar12 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar13 * 0x38);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar12;
}



// FUNCTION 14504b680 FUN_14504b680 body=289 status=ok
// SIG undefined FUN_14504b680(void)

ulonglong FUN_14504b680(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar8 * 2;
  uVar5 = param_3;
  if (param_3 < uVar7) {
    uVar5 = uVar7;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0xc,&local_res8);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar5 * 0xc + 0xc;
  uVar6 = uVar5;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar6 = uVar5 + 1;
    if (uVar7 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar6 = uVar6 + uVar5 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0xc);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar7;
}



// FUNCTION 14504b7b0 FUN_14504b7b0 body=290 status=ok
// SIG undefined FUN_14504b7b0(void)

void FUN_14504b7b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x40,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *puVar6 = *puVar7;
        puVar6[1] = uVar4;
        uVar4 = puVar7[3];
        puVar6[2] = puVar7[2];
        puVar6[3] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar7 + 4);
        *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
        *(undefined4 *)(puVar6 + 5) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x2c) = uVar3;
        uVar4 = puVar7[7];
        puVar6[6] = puVar7[6];
        puVar6[7] = uVar4;
      }
      puVar6 = puVar6 + 8;
      puVar7 = puVar7 + 8;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x40 + 0x40;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x40;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x40 >> 6);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 6);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 14504b8e0 FUN_14504b8e0 body=113 status=ok
// SIG undefined FUN_14504b8e0(void)

void FUN_14504b8e0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4)
    ;
    uVar5 = *(uint *)(param_1 + 1);
    uVar6 = (ulonglong)uVar5;
    puVar4 = (undefined8 *)*param_1;
    puVar3 = puVar2;
    if (0 < (int)uVar5) {
      do {
        if (puVar3 != (undefined8 *)0x0) {
          uVar1 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar1;
        }
        puVar3 = puVar3 + 2;
        puVar4 = puVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    *param_1 = puVar2;
  }
  return;
}



// FUNCTION 14504b960 FUN_14504b960 body=113 status=ok
// SIG undefined FUN_14504b960(void)

void FUN_14504b960(undefined4 *param_1)

{
  *param_1 = 3;
  param_1[4] = 0;
  if ((-1 < (int)param_1[5]) && (*(longlong *)(param_1 + 2) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 2),
               (ulonglong)(param_1[5] & 0x7fffffff) << 4);
    *(undefined8 *)(param_1 + 2) = 0;
    param_1[5] = 0x80000000;
    return;
  }
  param_1[5] = 0x80000000;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 14504b9e0 FUN_14504b9e0 body=152 status=ok
// SIG undefined FUN_14504b9e0(void)

void FUN_14504b9e0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = param_2 + 1;
  plVar2 = param_1 + 1;
  *param_1 = *param_2;
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 2) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 4);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
    FUN_14504b8e0(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *plVar1 = 0;
    param_2[2] = 0;
  }
  return;
}



// FUNCTION 14504ba80 FUN_14504ba80 body=107 status=ok
// SIG undefined FUN_14504ba80(void)

void FUN_14504ba80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 4);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14504baf0 FUN_14504baf0 body=380 status=ok
// SIG undefined FUN_14504baf0(void)

void FUN_14504baf0(longlong *param_1,int param_2,int param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  int *piVar18;
  longlong lVar19;
  
  lVar13 = (longlong)param_2;
  lVar14 = (longlong)param_3;
  if (-1 < param_2) {
    *(undefined8 *)(lVar13 * 0x20 + *param_1) = param_4;
  }
  if (-1 < param_3) {
    *(undefined8 *)(lVar14 * 0x20 + *param_1) = *param_5;
  }
  if (param_3 < param_2) {
    FUN_14504b9e0(*param_1 + 8 + lVar13 * 0x20);
    if (param_3 < 0) {
      return;
    }
    lVar13 = *param_1 + 8 + lVar14 * 0x20;
  }
  else {
    FUN_14504b9e0(*param_1 + 8 + lVar14 * 0x20);
    lVar14 = *param_1 + lVar14 * 0x20;
    iVar10 = *(int *)(lVar14 + 0x18) + -1;
    *(undefined8 *)(lVar14 + 8) = param_4;
    lVar15 = (longlong)iVar10;
    if (0 < iVar10) {
      lVar17 = 0;
      lVar12 = lVar15 << 4;
      lVar19 = lVar17;
      do {
        lVar4 = *(longlong *)(lVar14 + 0x10);
        lVar17 = lVar17 + 1;
        lVar15 = lVar15 + -1;
        puVar1 = (undefined4 *)(lVar12 + lVar4);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        uVar8 = *(undefined8 *)(lVar19 + lVar4);
        uVar9 = ((undefined8 *)(lVar19 + lVar4))[1];
        puVar2 = (undefined4 *)(lVar19 + lVar4);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        puVar3 = (undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x10 + lVar12 + -0x10);
        *puVar3 = uVar8;
        puVar3[1] = uVar9;
        lVar12 = lVar12 + -0x10;
        lVar19 = lVar19 + 0x10;
      } while (lVar17 < lVar15);
    }
    piVar16 = *(int **)(lVar14 + 0x10);
    piVar18 = piVar16 + (longlong)*(int *)(lVar14 + 0x18) * 4;
    if (piVar16 != piVar18) {
      piVar11 = piVar16 + 2;
      do {
        if (*piVar16 == 0) {
          iVar10 = piVar11[-1];
          piVar11[-1] = *piVar11;
LAB_14504bc28:
          *piVar11 = iVar10;
        }
        else if (*piVar16 == 1) {
          iVar10 = piVar11[-1];
          piVar11[-1] = *piVar11;
          *(bool *)(piVar11 + 1) = (char)piVar11[1] == '\0';
          goto LAB_14504bc28;
        }
        piVar16 = piVar16 + 4;
        piVar11 = piVar11 + 4;
      } while (piVar16 != piVar18);
    }
    if (param_2 < 0) {
      return;
    }
    lVar13 = lVar13 * 0x20 + *param_1 + 8;
  }
  FUN_14504b960(lVar13);
  return;
}



// FUNCTION 14504bc70 FUN_14504bc70 body=399 status=ok
// SIG undefined FUN_14504bc70(void)

undefined8
FUN_14504bc70(longlong *param_1,undefined8 param_2,undefined4 *param_3,int param_4,longlong param_5,
             undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  longlong local_20;
  undefined4 local_18;
  uint local_14;
  
  iVar1 = *(int *)((longlong)param_4 * 0x60 + 0x10 + *(longlong *)(param_5 + 0x28));
  uVar2 = param_7;
  if (param_4 <= iVar1) {
    uVar2 = param_6;
    param_6 = param_7;
    param_4 = iVar1;
  }
  puVar3 = (undefined8 *)((longlong)param_4 * 0x20 + *param_1);
  lVar4 = (longlong)param_4 * 0x60 + *(longlong *)(param_5 + 0x28);
  if (*(int *)(puVar3 + 1) == 3) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    local_28 = 3;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0x80000000;
    FUN_14504c890(param_2,&local_38,puVar3,param_6,uVar2,2,0,&local_28);
    if (((local_28 == 3) ||
        (uVar2 = *(undefined8 *)((longlong)*(int *)(lVar4 + 0xc) * 0x20 + *param_1),
        local_28 != (int)uVar2)) || (local_24 != (int)((ulonglong)uVar2 >> 0x20))) {
      if ((-1 < (int)local_14) && (local_20 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_20,(ulonglong)(local_14 & 0x7fffffff) << 4);
      }
      return 0;
    }
    FUN_14504baf0(param_1,param_4,*(undefined4 *)(lVar4 + 0x10),*puVar3,&local_28);
    if ((-1 < (int)local_14) && (local_20 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_20,(ulonglong)(local_14 & 0x7fffffff) << 4);
    }
  }
  return 1;
}



// FUNCTION 14504be00 FUN_14504be00 body=1853 status=ok
// SIG undefined FUN_14504be00(void)

void FUN_14504be00(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  bool bVar25;
  uint local_res18;
  uint local_res20;
  int *local_118;
  int local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  int *local_100;
  undefined8 local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined1 local_60 [32];
  
  local_100 = (int *)(param_2 + 0x30);
  iVar24 = *local_100;
  lVar23 = (longlong)iVar24;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar24) {
    FUN_14504df40(param_1,&PTR_vftable_14c6e47a0,lVar23);
  }
  local_100 = (int *)(param_2 + 0x30);
  iVar22 = (int)param_1[1];
  uVar12 = 0x80000000;
  local_res18 = 0x80000000;
  if (iVar22 < iVar24) {
    puVar8 = (undefined4 *)((longlong)iVar22 * 0x20 + *param_1);
    puVar15 = (undefined4 *)(lVar23 * 0x20 + *param_1);
    *(int *)(param_1 + 1) = iVar24;
    if (puVar8 != puVar15) {
      puVar8 = puVar8 + 7;
      do {
        if (puVar8 + -7 != (undefined4 *)0x0) {
          puVar8[-7] = 3;
          puVar8[-5] = 3;
          *(undefined8 *)(puVar8 + -3) = 0;
          puVar8[-1] = 0;
          *puVar8 = 0x80000000;
        }
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 8;
      } while (puVar1 != puVar15);
    }
  }
  else if (iVar24 < iVar22) {
    lVar16 = *param_1;
    *(int *)(param_1 + 1) = iVar24;
    for (lVar11 = (longlong)iVar22 * 0x20 + *param_1; lVar11 != lVar23 * 0x20 + lVar16;
        lVar11 = lVar11 + -0x20) {
      FUN_14504ba80(lVar11 + -0x18);
    }
  }
  piVar9 = (int *)0x0;
  local_100 = (int *)(param_2 + 0x30);
  local_118 = (int *)0x0;
  local_10c = 0x80000000;
  local_108 = 0;
  if (0 < *local_100) {
    local_e8 = 0;
    local_e0 = 0;
    piVar14 = piVar9;
    do {
      local_res20 = (uint)piVar14;
      uVar21 = local_res20;
      if (*(int *)(local_e0 + *param_1) == 3) {
        local_110 = 0;
        iVar24 = 0;
        if ((uVar12 & 0x7fffffff) == 0) {
          FUN_1401f86b2(&local_118,&PTR_vftable_14c6e47c0,1);
          local_res18 = local_10c;
          piVar9 = local_118;
          iVar24 = local_110;
        }
        if ((uint *)(piVar9 + iVar24) != (uint *)0x0) {
          piVar9[iVar24] = local_res20;
        }
        lVar23 = *(longlong *)(param_2 + 0x28) + local_e8;
        iVar24 = 1;
        local_110 = 1;
        local_d8 = lVar23;
        FUN_144cb6610(param_2,lVar23,local_60);
        local_f8 = local_d0;
        uVar3 = local_f8;
        local_104 = *(uint *)((longlong)*(int *)(lVar23 + 8) * 0x60 + 0x10 +
                             *(longlong *)(param_2 + 0x28));
        if (local_res20 != local_104) {
          local_f8._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
          local_f8._0_4_ = (int)local_d0;
          piVar9 = piVar14;
          piVar18 = local_118;
          iVar22 = local_c8;
          iVar19 = local_f8._4_4_;
          iVar20 = (int)local_f8;
          iVar17 = iVar24;
          local_f8 = uVar3;
          do {
            lVar23 = *(longlong *)(param_2 + 0x28);
            iVar10 = *(int *)((longlong)(int)piVar9 * 0x60 + 0x10 + lVar23);
            if (iVar10 < 0) {
              puVar13 = (uint *)((longlong)*(int *)(local_d8 + 8) * 0x60 + 0x10 + lVar23);
              uVar12 = *puVar13;
              iVar24 = iVar17;
              uVar5 = (uint)piVar14;
              uVar4 = local_res20;
              iVar17 = local_110;
              uVar21 = local_108;
              goto joined_r0x00014504c259;
            }
            iVar24 = iVar17 + 1;
            lVar16 = (longlong)iVar10 * 0x60 + lVar23;
            iVar10 = *(int *)(lVar16 + 0xc);
            puVar13 = (uint *)((longlong)*(int *)((longlong)iVar10 * 0x60 + 0xc + lVar23) * 0x60 +
                              lVar23);
            if ((int)(local_res18 & 0x7fffffff) < iVar24) {
              FUN_1401f86b2(&local_118,&PTR_vftable_14c6e47c0,(longlong)iVar24);
              iVar10 = *(int *)(lVar16 + 0xc);
              local_res18 = local_10c;
              piVar18 = local_118;
              iVar17 = local_110;
            }
            if (piVar18 + iVar17 != (int *)0x0) {
              piVar18[iVar17] = iVar10;
            }
            uVar6 = (ulonglong)(*puVar13 & 0x3fffffff);
            lVar23 = *(longlong *)(param_2 + 0x38);
            local_80 = *(undefined8 *)(lVar23 + uVar6 * 0xc);
            puVar2 = (undefined8 *)(lVar23 + uVar6 * 0xc);
            iVar17 = *(int *)(puVar2 + 1);
            iVar10 = (int)((ulonglong)local_80 >> 0x20);
            if ((((int)local_80 == iVar20) && (iVar10 == iVar19)) && (iVar17 == iVar22)) {
              lVar11 = *(longlong *)(param_2 + 0x28);
              uVar6 = (ulonglong)
                      (*(uint *)((longlong)
                                 *(int *)((longlong)
                                          *(int *)((longlong)(int)local_res20 * 0x60 + 0xc + lVar11)
                                          * 0x60 + 0xc + lVar11) * 0x60 + lVar11) & 0x3fffffff);
              local_c0 = *(undefined8 *)(lVar23 + uVar6 * 0xc);
              iVar10 = *(int *)(lVar23 + 8 + uVar6 * 0xc);
              uVar6 = (ulonglong)(*(uint *)((longlong)(int)puVar13[3] * 0x60 + lVar11) & 0x3fffffff)
              ;
              local_b0 = *(undefined8 *)(lVar23 + uVar6 * 0xc);
              iVar17 = *(int *)(lVar23 + 8 + uVar6 * 0xc);
              if ((int)local_b0 - (int)local_c0 == 0) {
                iVar7 = (int)((ulonglong)local_b0 >> 0x20) - (int)((ulonglong)local_c0 >> 0x20);
                if (iVar7 == 0) {
                  bVar25 = SBORROW4(iVar17,iVar10);
                  iVar17 = iVar17 - iVar10;
LAB_14504c1ff:
                  bVar25 = bVar25 != iVar17 < 0;
                }
                else {
                  bVar25 = (bool)((byte)(iVar7 >> 0x1f) >> 7);
                }
              }
              else {
                bVar25 = (bool)((byte)((int)local_b0 - (int)local_c0 >> 0x1f) >> 7);
              }
            }
            else {
              iVar7 = (int)local_80 - iVar20;
              if (iVar7 == 0) {
                iVar10 = iVar10 - iVar19;
                if (iVar10 == 0) {
                  bVar25 = SBORROW4(iVar17,iVar22);
                  iVar17 = iVar17 - iVar22;
                  goto LAB_14504c1ff;
                }
                bVar25 = (bool)((byte)(iVar10 >> 0x1f) >> 7);
              }
              else {
                bVar25 = (bool)((byte)(iVar7 >> 0x1f) >> 7);
              }
            }
            if (bVar25 != false) {
              uVar3 = *puVar2;
              local_res20 = *(uint *)(lVar16 + 0xc);
              iVar22 = *(int *)(puVar2 + 1);
              local_f8._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
              local_f8._0_4_ = (int)uVar3;
              iVar19 = local_f8._4_4_;
              iVar20 = (int)local_f8;
              local_f8 = uVar3;
            }
            piVar14 = (int *)(ulonglong)local_res20;
            piVar9 = (int *)(ulonglong)*(uint *)(lVar16 + 0xc);
            iVar17 = iVar24;
            uVar21 = local_108;
            local_110 = iVar24;
          } while (*(uint *)(lVar16 + 0xc) != local_104);
        }
LAB_14504c45f:
        for (piVar14 = local_118; piVar9 = local_118, uVar12 = local_res18,
            piVar14 != local_118 + iVar24; piVar14 = piVar14 + 1) {
          iVar22 = *piVar14;
          *(undefined4 *)((longlong)iVar22 * 0x20 + *param_1) = 0;
          *(uint *)((longlong)iVar22 * 0x20 + 4 + *param_1) = local_res20;
        }
      }
      local_108 = uVar21 + 1;
      piVar14 = (int *)(ulonglong)local_108;
      local_e0 = local_e0 + 0x20;
      local_e8 = local_e8 + 0x60;
    } while ((int)local_108 < *local_100);
  }
  if ((-1 < (int)uVar12) && (piVar9 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,piVar9,(ulonglong)(uVar12 & 0x7fffffff) << 2);
  }
  return;
joined_r0x00014504c259:
  local_res20 = uVar5;
  local_110 = iVar17;
  if ((int)uVar12 < 0) goto LAB_14504c45f;
  iVar10 = iVar24 + 1;
  local_110 = iVar24;
  local_108 = uVar21;
  if ((int)(local_res18 & 0x7fffffff) < iVar10) {
    local_110 = iVar17;
    FUN_1401f86b2(&local_118,&PTR_vftable_14c6e47c0,(longlong)iVar10);
    local_res18 = local_10c;
  }
  if ((uint *)(local_118 + local_110) != (uint *)0x0) {
    local_118[local_110] = *puVar13;
  }
  local_104 = *puVar13;
  lVar23 = *(longlong *)(param_2 + 0x28);
  lVar16 = *(longlong *)(param_2 + 0x38);
  lVar11 = (longlong)*(int *)((longlong)(int)local_104 * 0x60 + 0xc + lVar23) * 0x60;
  uVar6 = (ulonglong)(*(uint *)(lVar11 + lVar23) & 0x3fffffff);
  local_70 = *(undefined8 *)(lVar16 + uVar6 * 0xc);
  puVar2 = (undefined8 *)(lVar16 + uVar6 * 0xc);
  iVar24 = *(int *)(puVar2 + 1);
  iVar17 = (int)((ulonglong)local_70 >> 0x20);
  if ((((int)local_70 == iVar20) && (iVar17 == iVar19)) && (iVar24 == iVar22)) {
    uVar6 = (ulonglong)
            (*(uint *)((longlong)
                       *(int *)((longlong)*(int *)((longlong)(int)uVar4 * 0x60 + 0xc + lVar23) *
                                0x60 + 0xc + lVar23) * 0x60 + lVar23) & 0x3fffffff);
    local_a0 = *(undefined8 *)(lVar16 + uVar6 * 0xc);
    iVar17 = *(int *)(lVar16 + 8 + uVar6 * 0xc);
    uVar6 = (ulonglong)
            (*(uint *)((longlong)*(int *)(lVar11 + 0xc + lVar23) * 0x60 + lVar23) & 0x3fffffff);
    local_90 = *(undefined8 *)(lVar16 + uVar6 * 0xc);
    iVar24 = *(int *)(lVar16 + 8 + uVar6 * 0xc);
    if ((int)local_90 - (int)local_a0 == 0) {
      iVar7 = (int)((ulonglong)local_90 >> 0x20) - (int)((ulonglong)local_a0 >> 0x20);
      if (iVar7 == 0) {
        bVar25 = SBORROW4(iVar24,iVar17);
        iVar24 = iVar24 - iVar17;
LAB_14504c40c:
        bVar25 = bVar25 != iVar24 < 0;
      }
      else {
        bVar25 = (bool)((byte)(iVar7 >> 0x1f) >> 7);
      }
    }
    else {
      bVar25 = (bool)((byte)((int)local_90 - (int)local_a0 >> 0x1f) >> 7);
    }
  }
  else {
    iVar7 = (int)local_70 - iVar20;
    if (iVar7 == 0) {
      iVar17 = iVar17 - iVar19;
      if (iVar17 == 0) {
        bVar25 = SBORROW4(iVar24,iVar22);
        iVar24 = iVar24 - iVar22;
        goto LAB_14504c40c;
      }
      bVar25 = (bool)((byte)(iVar17 >> 0x1f) >> 7);
    }
    else {
      bVar25 = (bool)((byte)(iVar7 >> 0x1f) >> 7);
    }
  }
  local_res20 = uVar4;
  if (bVar25 != false) {
    uVar3 = *puVar2;
    iVar22 = *(int *)(puVar2 + 1);
    local_f8._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    local_f8._0_4_ = (int)uVar3;
    iVar19 = local_f8._4_4_;
    iVar20 = (int)local_f8;
    local_res20 = local_104;
    local_f8 = uVar3;
  }
  puVar13 = (uint *)((longlong)*(int *)((longlong)(int)local_104 * 0x60 + 8 + lVar23) * 0x60 + 0x10
                    + *(longlong *)(param_2 + 0x28));
  uVar12 = *puVar13;
  iVar24 = iVar10;
  uVar5 = local_res20;
  uVar4 = local_res20;
  iVar17 = iVar10;
  uVar21 = local_108;
  goto joined_r0x00014504c259;
}



// FUNCTION 14504c540 FUN_14504c540 body=514 status=ok
// SIG undefined FUN_14504c540(void)

void FUN_14504c540(longlong *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  iVar2 = (int)param_1[1];
  uVar20 = (ulonglong)iVar2;
  iVar17 = iVar2 + param_3;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar17) {
    FUN_14504df40(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar17);
  }
  lVar21 = uVar20 * 0x20;
  puVar10 = (undefined4 *)(*param_1 + lVar21);
  if (puVar10 != puVar10 + (longlong)param_3 * 8) {
    puVar11 = puVar10 + 7;
    do {
      if (puVar11 + -7 != (undefined4 *)0x0) {
        puVar11[-7] = 3;
        puVar11[-5] = 3;
        *(undefined8 *)(puVar11 + -3) = 0;
        puVar11[-1] = 0;
        *puVar11 = 0x80000000;
      }
      puVar9 = puVar11 + 1;
      puVar11 = puVar11 + 8;
    } while (puVar9 != puVar10 + (longlong)param_3 * 8);
  }
  *(int *)(param_1 + 1) = iVar17;
  if (iVar2 < *(int *)(param_2 + 0x30)) {
    lVar16 = uVar20 * 0x60;
    do {
      lVar13 = *(longlong *)(param_2 + 0x28);
      lVar3 = *param_1;
      lVar8 = (longlong)*(int *)(lVar13 + 0x10 + lVar16) * 0x60 + lVar13;
      lVar15 = (longlong)*(int *)(lVar8 + 0xc);
      iVar2 = *(int *)(lVar15 * 0x20 + lVar3);
      while (iVar2 == 3) {
        lVar8 = (longlong)*(int *)(lVar15 * 0x60 + 0x10 + lVar13) * 0x60 + lVar13;
        lVar15 = (longlong)*(int *)(lVar8 + 0xc);
        iVar2 = *(int *)(lVar15 * 0x20 + lVar3);
      }
      plVar18 = (longlong *)(lVar3 + 0x10 + lVar21);
      puVar12 = (undefined8 *)((longlong)*(int *)(lVar8 + 0xc) * 0x20 + lVar3);
      *(undefined8 *)(lVar21 + lVar3) = *puVar12;
      *(undefined8 *)(lVar21 + 8 + lVar3) = puVar12[1];
      if (puVar12 + 2 != plVar18) {
        iVar2 = *(int *)(puVar12 + 3);
        puVar10 = (undefined4 *)puVar12[2];
        if ((int)(*(uint *)((longlong)plVar18 + 0xc) & 0x7fffffff) < iVar2) {
          FUN_14504e200(plVar18,&PTR_vftable_14c6e47a0,(longlong)iVar2);
        }
        puVar11 = (undefined4 *)*plVar18;
        iVar17 = iVar2;
        if ((int)plVar18[1] < iVar2) {
          iVar17 = (int)plVar18[1];
        }
        if ((puVar11 != puVar10) && (lVar13 = (longlong)iVar17, 0 < iVar17)) {
          puVar9 = puVar11;
          do {
            puVar1 = (undefined4 *)(((longlong)puVar10 - (longlong)puVar11) + (longlong)puVar9);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            *puVar9 = *puVar1;
            puVar9[1] = uVar4;
            puVar9[2] = uVar5;
            puVar9[3] = uVar6;
            lVar13 = lVar13 + -1;
            puVar9 = puVar9 + 4;
          } while (lVar13 != 0);
        }
        puVar10 = puVar10 + (longlong)iVar17 * 4;
        if (0 < iVar2 - iVar17) {
          uVar14 = (ulonglong)(uint)(iVar2 - iVar17);
          puVar11 = (undefined4 *)(*plVar18 + (longlong)iVar17 * 0x10);
          do {
            if (puVar11 != (undefined4 *)0x0) {
              uVar4 = *puVar10;
              uVar5 = puVar10[1];
              uVar6 = puVar10[2];
              uVar7 = puVar10[3];
              puVar10 = puVar10 + 4;
              *puVar11 = uVar4;
              puVar11[1] = uVar5;
              puVar11[2] = uVar6;
              puVar11[3] = uVar7;
            }
            uVar14 = uVar14 - 1;
            puVar11 = puVar11 + 4;
          } while (uVar14 != 0);
        }
        *(int *)(plVar18 + 1) = iVar2;
      }
      uVar19 = (int)uVar20 + 1;
      uVar20 = (ulonglong)uVar19;
      lVar16 = lVar16 + 0x60;
      lVar21 = lVar21 + 0x20;
    } while ((int)uVar19 < *(int *)(param_2 + 0x30));
  }
  return;
}



// FUNCTION 14504c750 FUN_14504c750 body=145 status=ok
// SIG undefined FUN_14504c750(void)

undefined8 FUN_14504c750(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  
  uVar1 = param_1[2];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  uVar2 = param_2[2];
  lVar7 = param_2[1] * uVar1 + SUB168(auVar3 * auVar5,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_1;
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),
                  (longlong)
                  (((param_1[1] * uVar2 + SUB168(auVar4 * auVar6,8)) - lVar7) -
                  (ulonglong)(*param_1 * uVar2 < *param_2 * uVar1)) < 0);
}



// FUNCTION 14504c7f0 FUN_14504c7f0 body=155 status=ok
// SIG undefined FUN_14504c7f0(void)

longlong FUN_14504c7f0(longlong *param_1,int *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  uint7 uVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)*param_2;
  uVar1 = param_1[6];
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar1;
  uVar8 = (longlong)uVar10 >> 0x3f & uVar1;
  uVar9 = (uint7)(uVar8 >> 8);
  if (*param_1 == uVar1 * uVar10 && param_1[1] == SUB168(auVar2 * auVar5,8) - uVar8) {
    uVar10 = (ulonglong)param_2[1];
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar1;
    uVar8 = (longlong)uVar10 >> 0x3f & uVar1;
    uVar9 = (uint7)(uVar8 >> 8);
    if (param_1[2] == uVar1 * uVar10 && param_1[3] == SUB168(auVar3 * auVar6,8) - uVar8) {
      uVar10 = (ulonglong)param_2[2];
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar10;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar1;
      uVar8 = (longlong)uVar10 >> 0x3f & uVar1;
      uVar9 = (uint7)(uVar8 >> 8);
      if (param_1[4] == uVar1 * uVar10 && param_1[5] == SUB168(auVar4 * auVar7,8) - uVar8) {
        return CONCAT71(uVar9,1);
      }
    }
  }
  return (ulonglong)uVar9 << 8;
}



// FUNCTION 14504c890 FUN_14504c890 body=3238 status=ok
// SIG undefined FUN_14504c890(void)

void FUN_14504c890(longlong param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  char cVar38;
  int iVar39;
  longlong *plVar40;
  undefined4 *puVar41;
  undefined8 *puVar42;
  int *piVar43;
  longlong *plVar44;
  undefined4 *puVar45;
  bool bVar46;
  longlong lVar47;
  int iVar48;
  int iVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  int *piVar53;
  undefined8 local_res20;
  undefined4 uVar54;
  int local_714;
  int local_710;
  int iStack_70c;
  undefined8 local_708;
  undefined4 local_700;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  undefined8 local_6e8;
  int local_6e0;
  ulonglong local_6d8;
  ulonglong uStack_6d0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  ulonglong local_6b8 [4];
  longlong local_698 [2];
  int local_688;
  undefined4 uStack_684;
  longlong local_678 [2];
  undefined8 local_668 [2];
  ulonglong local_658;
  ulonglong uStack_650;
  undefined1 local_648 [32];
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  ulonglong local_608;
  ulonglong uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  ulonglong local_5e8;
  ulonglong uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  ulonglong local_5b8;
  ulonglong uStack_5b0;
  longlong local_5a8;
  longlong lStack_5a0;
  longlong local_598;
  longlong lStack_590;
  longlong local_588;
  longlong lStack_580;
  ulonglong local_578;
  longlong local_570;
  longlong lStack_568;
  longlong local_560;
  longlong lStack_558;
  longlong local_550;
  longlong lStack_548;
  ulonglong local_540;
  longlong local_538;
  longlong lStack_530;
  longlong local_528;
  longlong lStack_520;
  longlong local_518;
  longlong lStack_510;
  ulonglong local_508;
  longlong local_4f8;
  longlong lStack_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  ulonglong local_4c8;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [512];
  undefined1 local_298 [600];
  
  lVar47 = param_8;
  uVar32 = param_7;
  plVar44 = local_678;
  iVar49 = (int)param_5 - (int)param_4;
  piVar53 = (int *)0x0;
  iVar48 = (int)((ulonglong)param_5 >> 0x20) - (int)((ulonglong)param_4 >> 0x20);
  *(undefined4 *)(param_8 + 0x10) = 0;
  local_6b8[0] = 0xffffffffffffffff;
  local_6b8[2] = 1;
  if ((param_3[2] != 3) && (param_3[6] != 0)) {
    piVar53 = *(int **)(param_3 + 4);
  }
  iVar39 = *param_3;
  uVar2 = CONCAT44(iVar48,iVar49);
  local_714 = -1;
  local_res20 = param_4;
  local_710 = iVar49;
  iStack_70c = iVar48;
  if (iVar39 == 0) {
    iVar39 = param_3[1];
    local_628 = *param_2;
    uStack_620 = param_2[1];
    local_6b8[0] = 0;
    local_6b8[1] = 1;
    local_714 = *(int *)((longlong)iVar39 * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
    puVar42 = (undefined8 *)
              FUN_14504d540(local_668,param_1,&local_628,&local_714,iVar39,iVar39,uVar2,local_6b8,
                            param_6,1,param_7);
    local_6b8[0] = 0;
    uVar1 = *puVar42;
    uVar54 = *(undefined4 *)(puVar42 + 1);
    local_6e8 = uVar1;
    if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
      iVar39 = *(int *)(lVar47 + 0x10) + 1;
      if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < iVar39) {
        FUN_14504e0f0((longlong *)(lVar47 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar39);
      }
      iVar3 = *(int *)(lVar47 + 0x10);
      *(int *)(lVar47 + 0x10) = iVar39;
      puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar47 + 8));
      *(undefined8 *)(puVar41 + 1) = uVar1;
      puVar41[3] = uVar54;
      *puVar41 = 1;
    }
    piVar53 = (int *)0x0;
    if (local_714 < 0) {
LAB_14504d4e3:
      *(undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8) = 3;
      ((undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8))[1] = 0xffffffff;
      return;
    }
  }
  else if (iVar39 == 1) {
    local_714 = *(int *)((longlong)param_3[1] * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
  }
  else {
    if (iVar39 != 2) {
      FUN_144bde670(&local_688,local_498,0x200);
      FUN_144be6160(&local_688,"unknown enumerant");
      iVar48 = FUN_144bfc110(0x380a4c90,local_498,
                             "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                             ,0x233);
      if (iVar48 == 0) {
        FUN_144bde6e0(&local_688);
        return;
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_714 = param_3[1];
  }
LAB_14504cae4:
  if (piVar53 == (int *)0x0) {
    iVar39 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_714 * 4);
  }
  else if ((*piVar53 == 0) || (*piVar53 == 1)) {
    iVar39 = piVar53[1];
  }
  else {
    FUN_144bde670(local_648,local_298,0x200);
    FUN_144be6160(local_648,"unknown enumerant");
    iVar39 = FUN_144bfc110(0xe80d96d,local_298,
                           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                           ,0x24c);
    if (iVar39 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_144bde6e0(local_648);
    iVar39 = -1;
  }
  uStack_6d0 = 1;
  uVar51 = (ulonglong)iVar48;
  local_710 = iVar39;
  local_6d8 = uVar51;
  do {
    local_698[0] = (longlong)iVar39 * 0x60 + *(longlong *)(param_1 + 0x28);
    FUN_144cb6610(param_1,local_698[0],&local_708,&local_6c8);
    uVar54 = local_700;
    uVar1 = local_708;
    lVar47 = (longlong)(local_6c8._4_4_ - local_708._4_4_) * (longlong)iVar49 -
             (longlong)((int)local_6c8 - (int)local_708) * uVar51;
    if (-1 < (int)((uint)(lVar47 >> 0x3f) | (uint)(lVar47 != 0))) {
      if ((longlong)
          ((longlong)((int)local_6c8 - (int)local_708) * (longlong)iVar49 +
          (longlong)(local_6c8._4_4_ - local_708._4_4_) * uVar51) < 0) {
        local_708 = local_6c8;
        local_6c8 = uVar1;
        local_700 = local_6c0;
        local_6c0 = uVar54;
      }
      plVar40 = &local_570;
      cVar38 = FUN_1450489a0(&local_708,&local_6c8,&local_res20,&param_5,plVar40,&local_658);
      uVar37 = local_540;
      lVar36 = lStack_548;
      lVar35 = local_550;
      lVar34 = lStack_558;
      lVar30 = local_560;
      lVar31 = lStack_568;
      lVar47 = local_570;
      uVar29 = uStack_650;
      uVar33 = local_658;
      uVar54 = (undefined4)((ulonglong)plVar40 >> 0x20);
      if (((cVar38 != '\0') &&
          (auVar5._8_8_ = 0, auVar5._0_8_ = local_658, auVar17._8_8_ = 0,
          auVar17._0_8_ = local_6b8[2], auVar6._8_8_ = 0, auVar6._0_8_ = local_6b8[0],
          auVar18._8_8_ = 0, auVar18._0_8_ = uStack_650, uVar51 = local_6d8,
          (longlong)
          (((SUB168(auVar6 * auVar18,8) - ((longlong)local_6b8[0] >> 0x3f & uStack_650)) -
           (SUB168(auVar5 * auVar17,8) - ((longlong)local_658 >> 0x3f & local_6b8[2]))) -
          (ulonglong)(uStack_650 * local_6b8[0] < local_658 * local_6b8[2])) < 0)) &&
         (auVar19._8_8_ = 0, auVar19._0_8_ = uStack_650, auVar7._8_8_ = 0, auVar7._0_8_ = local_658,
         (longlong)
         (((SUB168(auVar7 * ZEXT816(1),8) - (ulonglong)((uint)((longlong)local_658 >> 0x3f) & 1)) -
          SUB168(ZEXT816(0x3ffffffffffff) * auVar19,8)) -
         (ulonglong)(local_658 < uStack_650 * 0x3ffffffffffff)) < 0)) break;
    }
    piVar53 = (int *)0x0;
    iVar39 = *(int *)(local_698[0] + 0xc);
    if (iVar39 == local_710) goto LAB_14504cd01;
  } while( true );
  uVar51 = local_658;
  local_578 = local_540;
  local_6d8 = local_658;
  uStack_6d0 = uStack_650;
  local_5a8 = local_570;
  lStack_5a0 = lStack_568;
  local_598 = local_560;
  lStack_590 = lStack_558;
  local_588 = local_550;
  lStack_580 = lStack_548;
  if (iVar39 < 0) {
LAB_14504cd01:
    *(undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8) = 2;
    ((undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8))[1] = local_714;
    return;
  }
  uVar52 = (longlong)iVar39 * 0x60 + *(longlong *)(param_1 + 0x28);
  local_6b8[0] = uVar52;
  FUN_144cb6610(param_1,uVar52,&local_6f8,&local_6e8);
  if (((longlong)local_6d8 < 0) || (local_6d8 != uStack_6d0)) {
    bVar46 = false;
  }
  else {
    bVar46 = true;
  }
  if (bVar46) {
    uVar51 = (ulonglong)local_6f8;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar51;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_578;
    if (((lVar47 == local_578 * uVar51 &&
          lVar31 == SUB168(auVar14 * auVar26,8) - ((longlong)uVar51 >> 0x3f & local_578)) &&
        (uVar51 = (ulonglong)local_6f4, auVar15._8_8_ = 0, auVar15._0_8_ = uVar51, auVar27._8_8_ = 0
        , auVar27._0_8_ = local_578,
        lVar30 == local_578 * uVar51 &&
        lVar34 == SUB168(auVar15 * auVar27,8) - ((longlong)uVar51 >> 0x3f & local_578))) &&
       (uVar51 = (ulonglong)local_6f0, auVar16._8_8_ = 0, auVar16._0_8_ = uVar51, auVar28._8_8_ = 0,
       auVar28._0_8_ = local_578,
       lVar35 == local_578 * uVar51 &&
       lVar36 == SUB168(auVar16 * auVar28,8) - ((longlong)uVar51 >> 0x3f & local_578))) {
      puVar42 = &local_5d8;
      local_5d8 = *param_2;
      uStack_5d0 = param_2[1];
    }
    else {
      cVar38 = FUN_14504c7f0(&local_5a8,&local_6e8);
      if (cVar38 == '\0') {
        local_5b8 = uVar33;
        uStack_5b0 = uVar29;
        local_4f8 = lVar47;
        lStack_4f0 = lVar31;
        local_4e8 = lVar30;
        lStack_4e0 = lVar34;
        local_4d8 = lVar35;
        lStack_4d0 = lVar36;
        local_4c8 = uVar37;
        FUN_14504dc40(param_1,uVar52,&local_4f8,&local_5b8,local_res20,param_5,uVar32);
        puVar41 = (undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8);
        *puVar41 = 1;
        if (*(int *)(uVar52 + 0x10) < 0) {
          puVar41[1] = iVar39;
          return;
        }
        if (local_6f8 - (int)local_6e8 == 0) {
          bVar46 = local_6f4 < local_6e8._4_4_;
        }
        else {
          bVar46 = (bool)((byte)(local_6f8 - (int)local_6e8 >> 0x1f) >> 7);
        }
        iVar48 = *(int *)(uVar52 + 0x10);
        if (bVar46 != false) {
          iVar48 = iVar39;
        }
        puVar41[1] = iVar48;
        if (iVar48 == iVar39) {
          return;
        }
        iVar48 = puVar41[4] + 1;
        if ((int)(puVar41[5] & 0x7fffffff) < iVar48) {
          FUN_14504e0f0(puVar41 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar48);
        }
        iVar49 = puVar41[4];
        puVar41[4] = iVar48;
        puVar45 = (undefined4 *)((longlong)iVar49 * 0x10 + *(longlong *)(puVar41 + 2));
        *puVar45 = 0;
        *(ulonglong *)(puVar45 + 1) = CONCAT44(puVar41[1],iVar39);
        return;
      }
      puVar42 = &local_5c8;
      iVar39 = *(int *)(uVar52 + 0xc);
      plVar44 = local_698;
      local_5c8 = *param_2;
      uStack_5c0 = param_2[1];
    }
    puVar42 = (undefined8 *)
              FUN_14504d9a0(plVar44,param_1,puVar42,iVar39,CONCAT44(uVar54,param_6),uVar32);
    uVar2 = *puVar42;
    uVar54 = *(undefined4 *)(puVar42 + 1);
    local_708 = uVar2;
    if ((int)uVar2 != (int)((ulonglong)uVar2 >> 0x20)) {
      lVar47 = CONCAT44(param_8._4_4_,(undefined4)param_8);
      iVar48 = *(int *)(lVar47 + 0x10) + 1;
      if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < iVar48) {
        FUN_14504e0f0(lVar47 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar48);
      }
      puVar41 = (undefined4 *)((longlong)*(int *)(lVar47 + 0x10) * 0x10 + *(longlong *)(lVar47 + 8))
      ;
      *(int *)(lVar47 + 0x10) = iVar48;
      *puVar41 = 1;
      *(undefined8 *)(puVar41 + 1) = uVar2;
      puVar41[3] = uVar54;
    }
    *(undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8) = 0;
    ((undefined4 *)CONCAT44(param_8._4_4_,(undefined4)param_8))[1] = local_708._4_4_;
    return;
  }
  uVar50 = (ulonglong)local_6f8;
  local_6d8 = lVar35;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar50;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_578;
  local_698[0] = lVar31;
  local_6b8[2] = lVar47;
  if (((lVar47 == uVar50 * local_578 &&
        lVar31 == SUB168(auVar8 * auVar20,8) - ((longlong)uVar50 >> 0x3f & local_578)) &&
      (uVar50 = (ulonglong)local_6f4, auVar9._8_8_ = 0, auVar9._0_8_ = uVar50, auVar21._8_8_ = 0,
      auVar21._0_8_ = local_578,
      lVar30 == uVar50 * local_578 &&
      lVar34 == SUB168(auVar9 * auVar21,8) - ((longlong)uVar50 >> 0x3f & local_578))) &&
     (uVar50 = (ulonglong)local_6f0, auVar10._8_8_ = 0, auVar10._0_8_ = uVar50, auVar22._8_8_ = 0,
     auVar22._0_8_ = local_578,
     lVar35 == uVar50 * local_578 &&
     lVar36 == SUB168(auVar10 * auVar22,8) - ((longlong)uVar50 >> 0x3f & local_578))) {
    local_618 = *param_2;
    uStack_610 = param_2[1];
    local_6b8[2] = uVar33;
    local_6b8[3] = uVar29;
    plVar40 = (longlong *)
              FUN_14504d540(local_4b8,param_1,&local_618,&local_714,CONCAT44(uVar54,iVar39),iVar39,
                            uVar2,local_6b8 + 2,param_6,0,uVar32);
    lVar47 = *plVar40;
    lVar31 = plVar40[1];
    local_678[0] = lVar47;
    if ((int)lVar47 != (int)((ulonglong)lVar47 >> 0x20)) {
      lVar30 = CONCAT44(param_8._4_4_,(undefined4)param_8);
      iVar39 = *(int *)(lVar30 + 0x10) + 1;
      if ((int)(*(uint *)(lVar30 + 0x14) & 0x7fffffff) < iVar39) {
        FUN_14504e0f0(lVar30 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar39);
      }
      iVar3 = *(int *)(lVar30 + 0x10);
      *(int *)(lVar30 + 0x10) = iVar39;
      puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar30 + 8));
      *(longlong *)(puVar41 + 1) = lVar47;
      puVar41[3] = (int)lVar31;
      *puVar41 = 1;
    }
    piVar53 = (int *)0x0;
  }
  else {
    uVar50 = (ulonglong)(int)local_6e8;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar50;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_578;
    if (lVar47 == uVar50 * local_578 &&
        lVar31 == SUB168(auVar11 * auVar23,8) - ((longlong)uVar50 >> 0x3f & local_578)) {
      uVar50 = (ulonglong)local_6e8._4_4_;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar50;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = local_578;
      if ((lVar30 == uVar50 * local_578 &&
           lVar34 == SUB168(auVar12 * auVar24,8) - ((longlong)uVar50 >> 0x3f & local_578)) &&
         (uVar50 = (ulonglong)local_6e0, auVar13._8_8_ = 0, auVar13._0_8_ = uVar50,
         auVar25._8_8_ = 0, auVar25._0_8_ = local_578,
         lVar35 == local_578 * uVar50 &&
         lVar36 == SUB168(auVar13 * auVar25,8) - ((longlong)uVar50 >> 0x3f & local_578))) {
        piVar53 = (int *)0x0;
        local_5f8 = *param_2;
        uStack_5f0 = param_2[1];
        local_608 = uVar33;
        uStack_600 = uVar29;
        puVar42 = (undefined8 *)
                  FUN_14504d540(local_4a8,param_1,&local_5f8,&local_714,
                                CONCAT44(uVar54,*(undefined4 *)(uVar52 + 0xc)),
                                *(undefined4 *)(uVar52 + 0xc),uVar2,&local_608,param_6,0,uVar32);
        uVar1 = *puVar42;
        local_710 = *(int *)(puVar42 + 1);
        local_668[0] = uVar1;
        if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
          lVar47 = CONCAT44(param_8._4_4_,(undefined4)param_8);
          iVar39 = *(int *)(lVar47 + 0x10) + 1;
          if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < iVar39) {
            FUN_14504e0f0(lVar47 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar39);
          }
          iVar3 = *(int *)(lVar47 + 0x10);
          *(int *)(lVar47 + 0x10) = iVar39;
          puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar47 + 8));
          *(undefined8 *)(puVar41 + 1) = uVar1;
          puVar41[3] = local_710;
          *puVar41 = 1;
        }
        goto LAB_14504d1d3;
      }
    }
    if ((piVar53 != (int *)0x0) && (*piVar53 != 0)) {
      piVar53 = (int *)0x0;
    }
    local_5e8 = uVar33;
    uStack_5e0 = uVar29;
    local_538 = lVar47;
    lStack_530 = lVar31;
    local_528 = lVar30;
    lStack_520 = lVar34;
    local_518 = lVar35;
    lStack_510 = lVar36;
    local_508 = uVar37;
    FUN_14504dc40(param_1,uVar52,&local_538,&local_5e8,local_res20,param_5,uVar32);
    if (*(int *)(uVar52 + 0x10) < 0) {
      local_714 = -1;
    }
    else {
      lVar47 = CONCAT44(param_8._4_4_,(undefined4)param_8);
      local_714 = *(int *)((longlong)*(int *)(uVar52 + 0x10) * 0x60 + 4 +
                          *(longlong *)(param_1 + 0x28));
      local_710 = *(int *)(lVar47 + 0x10) + 1;
      if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) < local_710) {
        FUN_14504e0f0(lVar47 + 8,&PTR_vftable_14c6e47a0,(longlong)local_710);
      }
      iVar3 = *(int *)(lVar47 + 0x10);
      *(int *)(lVar47 + 0x10) = local_710;
      puVar41 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar47 + 8));
      *puVar41 = 0;
      uStack_684 = *(undefined4 *)(local_6b8[0] + 0x10);
      *(ulonglong *)(puVar41 + 1) = CONCAT44(uStack_684,iVar39);
      local_688 = iVar39;
    }
  }
LAB_14504d1d3:
  if (-1 < local_714) {
    piVar43 = piVar53 + 4;
    if (piVar53 == (int *)0x0) {
      piVar43 = piVar53;
    }
    piVar53 = (int *)0x0;
    local_6b8[0] = uVar51;
    local_6b8[2] = uVar29;
    if (piVar43 != (int *)((longlong)param_3[6] * 0x10 + *(longlong *)(param_3 + 4))) {
      piVar53 = piVar43;
    }
    goto LAB_14504cae4;
  }
  goto LAB_14504d4e3;
}



// FUNCTION 14504d540 FUN_14504d540 body=1117 status=ok
// SIG undefined FUN_14504d540(void)

undefined4 *
FUN_14504d540(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 param_5,uint param_6,undefined8 param_7,undefined8 param_8,int param_9,
             char param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 uVar16;
  uint *puVar17;
  longlong lVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  int local_78;
  int local_68;
  int iStack_64;
  int local_58;
  
  lVar6 = *(longlong *)(param_2 + 0x28);
  lVar18 = *(longlong *)(param_2 + 0x38);
  lVar11 = (longlong)(int)param_6;
  lVar22 = (longlong)(int)param_7;
  lVar23 = (longlong)param_7._4_4_;
  puVar17 = (uint *)(lVar11 * 0x60 + lVar6);
  lVar14 = (longlong)(int)puVar17[2];
  uVar1 = *(undefined8 *)(lVar18 + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
  uVar2 = *(undefined8 *)
           (lVar18 + (ulonglong)(*(uint *)((longlong)(int)puVar17[3] * 0x60 + lVar6) & 0x3fffffff) *
                     0xc);
  puVar9 = (uint *)(lVar14 * 0x60 + lVar6);
  uVar3 = *(undefined8 *)(lVar18 + (ulonglong)(*puVar9 & 0x3fffffff) * 0xc);
  local_78 = (int)uVar2;
  iStack_64 = (int)((ulonglong)uVar1 >> 0x20);
  local_68 = (int)uVar1;
  iVar7 = local_68;
  lVar18 = ((int)((ulonglong)uVar2 >> 0x20) - iStack_64) * lVar22 - (local_78 - local_68) * lVar23;
  bVar15 = 0;
  if (lVar18 != 0) {
    bVar15 = (byte)((ulonglong)lVar18 >> 0x3f) ^ 1;
  }
  uVar21 = 0xffffffff;
  if (bVar15 == 0) {
    local_58 = (int)uVar3;
    uVar21 = 0xffffffff;
    if (-1 < ((int)((ulonglong)uVar3 >> 0x20) - iStack_64) * lVar22 - (local_58 - local_68) * lVar23
       ) {
      uVar21 = param_6;
    }
  }
  uVar10 = uVar21;
  if ((param_9 == 0) || (((param_9 == 2 && ((int)uVar21 < 0)) || (param_10 != '\0')))) {
    if (param_6 != puVar9[4]) {
      do {
        iVar4 = *(int *)((longlong)(int)lVar11 * 0x60 + 0x10 + lVar6);
        if (iVar4 < 0) goto LAB_14504d7e7;
        lVar18 = (longlong)iVar4 * 0x60;
        uVar5 = *(uint *)(lVar18 + 0xc + lVar6);
        lVar11 = (longlong)(int)uVar5;
        uVar1 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar18 + lVar6) & 0x3fffffff) * 0xc);
        uVar2 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)
                 (*(uint *)((longlong)*(int *)(lVar11 * 0x60 + 0xc + lVar6) * 0x60 + lVar6) &
                 0x3fffffff) * 0xc);
        local_58 = (int)uVar2;
        lVar18 = ((int)((ulonglong)uVar2 >> 0x20) - iStack_64) * lVar22 -
                 (local_58 - iVar7) * lVar23;
        bVar15 = 0;
        if (lVar18 != 0) {
          bVar15 = (byte)((ulonglong)lVar18 >> 0x3f) ^ 1;
        }
        if ((bVar15 == 0) &&
           (local_68 = (int)uVar1,
           -1 < ((int)((ulonglong)uVar1 >> 0x20) - iStack_64) * lVar22 - (local_68 - iVar7) * lVar23
           )) {
          uVar21 = uVar5;
          if (param_10 == '\0') break;
          if ((int)uVar10 < 0) {
            uVar10 = uVar5;
          }
        }
      } while (uVar5 != puVar9[4]);
    }
    uVar20 = 1;
    uVar19 = uVar20;
  }
  else {
LAB_14504d7e7:
    if ((param_9 != 1) && ((param_9 != 2 || (-1 < (int)uVar21)))) {
      uVar19 = 1;
      uVar20 = 1;
      if (param_10 == '\0') goto LAB_14504d79f;
    }
    uVar19 = 1;
    uVar20 = 1;
    if (puVar17[2] != puVar17[4]) {
      uVar20 = 1;
      do {
        lVar18 = (longlong)(int)lVar14 * 0x60;
        uVar5 = *(uint *)(lVar18 + 0x10 + lVar6);
        uVar1 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar18 + lVar6) & 0x3fffffff) * 0xc);
        if ((int)uVar5 < 0) break;
        uVar12 = *(uint *)((longlong)(int)uVar5 * 0x60 + 8 + lVar6);
        lVar14 = (longlong)(int)uVar12;
        uVar2 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar14 * 0x60 + lVar6) & 0x3fffffff) * 0xc);
        local_58 = (int)uVar2;
        if (-1 < ((int)((ulonglong)uVar2 >> 0x20) - iStack_64) * lVar22 -
                 (local_58 - iVar7) * lVar23) {
          local_68 = (int)uVar1;
          lVar18 = ((int)((ulonglong)uVar1 >> 0x20) - iStack_64) * lVar22 -
                   (local_68 - iVar7) * lVar23;
          bVar15 = 0;
          if (lVar18 != 0) {
            bVar15 = (byte)((ulonglong)lVar18 >> 0x3f) ^ 1;
          }
          if (bVar15 == 0) {
            uVar20 = 0;
            uVar10 = uVar5;
            if (param_10 == '\0') break;
            if ((int)uVar21 < 0) {
              uVar19 = 0;
              uVar21 = uVar5;
            }
          }
        }
      } while (uVar12 != puVar17[4]);
    }
  }
LAB_14504d79f:
  uVar16 = 0;
  uVar13 = 0xffffffff;
  uVar12 = 0xffffffff;
  uVar5 = uVar21;
  uVar8 = uVar19;
  if ((param_9 != 0) && (uVar5 = uVar10, uVar8 = uVar20, param_9 != 1)) {
    if (param_9 != 2) goto LAB_14504d972;
    if (-1 < (int)uVar21) {
      uVar5 = uVar21;
      uVar8 = uVar19;
    }
  }
  uVar16 = uVar8;
  uVar12 = uVar5;
  if (-1 < (int)uVar12) {
    uVar13 = *(undefined4 *)((longlong)(int)uVar12 * 0x60 + 4 + lVar6);
  }
LAB_14504d972:
  param_1[1] = uVar12;
  *param_4 = uVar13;
  *param_1 = param_5;
  *(undefined1 *)(param_1 + 2) = uVar16;
  return param_1;
}



// FUNCTION 14504d9a0 FUN_14504d9a0 body=660 status=ok
// SIG undefined FUN_14504d9a0(void)

void FUN_14504d9a0(int *param_1,longlong param_2,longlong *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  uint *puVar12;
  undefined1 uVar13;
  int local_88;
  int local_84;
  int local_78;
  int local_74;
  undefined1 local_68 [8];
  int local_60;
  undefined1 local_58 [24];
  
  puVar12 = (uint *)((longlong)param_4 * 0x60 + *(longlong *)(param_2 + 0x28));
  FUN_144cb6610(param_2,puVar12,local_68,&local_88);
  uVar5 = *(undefined8 *)(*param_3 + (ulonglong)(*puVar12 & 0x3fffffff) * 8);
  iVar6 = (int)((ulonglong)uVar5 >> 0x20);
  local_60 = (int)uVar5;
  if (local_60 != iVar6) {
    local_60 = iVar6;
  }
  iVar10 = local_88;
  iVar7 = local_84;
  iVar6 = param_4;
  if ((param_5 & 0xfffffffd) == 0) {
    iVar1 = *(int *)((longlong)(int)puVar12[2] * 0x60 + 0x10 + *(longlong *)(param_2 + 0x28));
    iVar2 = param_4;
    while (uVar13 = 1, iVar2 != iVar1) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x10 + lVar9);
      if (iVar2 < 0) goto LAB_14504db28;
      lVar8 = (longlong)iVar2 * 0x60 + lVar9;
      FUN_144cb6610(param_2,(longlong)*(int *)(lVar8 + 0xc) * 0x60 + lVar9,local_58,&local_78);
      if (iVar10 - local_78 == 0) {
        bVar11 = iVar7 < local_74;
      }
      else {
        bVar11 = (bool)((byte)(iVar10 - local_78 >> 0x1f) >> 7);
      }
      if (bVar11 == false) {
        iVar6 = *(int *)(lVar8 + 0xc);
        iVar10 = local_78;
        iVar7 = local_74;
      }
      iVar2 = *(int *)(lVar8 + 0xc);
    }
  }
  else {
LAB_14504db28:
    if ((param_5 == 1) || (uVar13 = 1, param_5 == 2)) {
      uVar13 = 1;
      uVar4 = puVar12[4];
      uVar3 = puVar12[2];
      while (uVar3 != uVar4) {
        lVar9 = (longlong)(int)uVar3 * 0x60 + *(longlong *)(param_2 + 0x28);
        if (*(int *)(lVar9 + 0x10) < 0) break;
        FUN_144cb6610(param_2,(longlong)*(int *)(lVar9 + 0x10) * 0x60 +
                              *(longlong *)(param_2 + 0x28),local_58,&local_78);
        if (local_78 - iVar10 == 0) {
          bVar11 = local_74 < iVar7;
        }
        else {
          bVar11 = (bool)((byte)(local_78 - iVar10 >> 0x1f) >> 7);
        }
        if (bVar11 != false) {
          iVar6 = *(int *)(lVar9 + 0x10);
          uVar13 = 0;
          iVar10 = local_78;
          iVar7 = local_74;
        }
        uVar3 = *(uint *)((longlong)*(int *)(lVar9 + 0x10) * 0x60 + 8 +
                         *(longlong *)(param_2 + 0x28));
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = iVar6;
  *(undefined1 *)(param_1 + 2) = uVar13;
  return;
}



// FUNCTION 14504dc40 FUN_14504dc40 body=754 status=ok
// SIG undefined FUN_14504dc40(void)

longlong FUN_14504dc40(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint local_res10 [2];
  ulonglong local_res20;
  undefined1 local_1a8 [32];
  int local_188;
  int local_184;
  int local_180;
  int local_178;
  int local_174;
  int local_170;
  int local_168;
  int local_164;
  int local_160;
  int local_158;
  int local_154;
  int local_150;
  longlong local_148;
  longlong lStack_140;
  ulonglong local_138;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined1 local_108 [32];
  ulonglong local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  undefined8 local_a0;
  
  local_res20 = param_4;
  if (*(int *)(param_2 + 0x10) < 0) {
    lStack_e0 = FUN_144cb4d20();
    if ((char)lStack_e0 != '\0') {
      lStack_e0 = FUN_144cb4e20(param_1,&local_res20,*(undefined4 *)(param_2 + 4));
    }
  }
  else {
    lVar10 = (longlong)*(int *)(param_2 + 0x10) * 0x60 + *(longlong *)(param_1 + 0x28);
    FUN_144cb6610(param_1,param_2,&local_188,&local_158);
    FUN_144cb6610(param_1,lVar10,&local_168,&local_178);
    if ((((local_168 == local_158) && (local_164 == local_154)) && (local_160 == local_150)) &&
       (((local_178 == local_188 && (local_174 == local_184)) && (local_170 == local_180)))) {
      lStack_e0 = FUN_144cb4d20(param_1);
      if ((char)lStack_e0 != '\0') {
        FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(param_2 + 4));
        lStack_e0 = FUN_144cb4e20(param_1,&local_res20,*(undefined4 *)(lVar10 + 4));
      }
    }
    else {
      FUN_1450489a0(&local_168,&local_178,&stack0x00000028,&stack0x00000030,local_108,local_1a8);
      cVar7 = FUN_144cb4d20(param_1);
      if (cVar7 != '\0') {
        FUN_144cb4e20(param_1,&local_res20,*(undefined4 *)(param_2 + 4));
        uVar8 = *(ulonglong *)(param_3 + 0x30);
        uVar9 = local_res20 & 0xffffffff;
        local_a0 = *(undefined8 *)(param_3 + 0x30);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar8;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar9;
        local_128 = *(ulonglong *)(param_3 + 0x20) - uVar9 * uVar8;
        lStack_120 = (*(longlong *)(param_3 + 0x28) - SUB168(auVar1 * auVar4,8)) -
                     (ulonglong)(*(ulonglong *)(param_3 + 0x20) < uVar9 * uVar8);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar8;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar9;
        FUN_144cb4e20(SUB168(auVar2 * auVar5,8),local_res10,*(undefined4 *)(lVar10 + 4));
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_d8;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = CONCAT44(0,local_res10[0]);
        uVar8 = CONCAT44(0,local_res10[0]) * local_d8;
        local_148 = local_e8 - uVar8;
        lStack_140 = (lStack_e0 - SUB168(auVar3 * auVar6,8)) - (ulonglong)(local_e8 < uVar8);
        local_138 = local_d8;
        local_118 = local_a0;
        lStack_e0 = FUN_14504c750(&local_128,&local_148,local_e8 + uVar8);
      }
    }
  }
  return lStack_e0;
}



// FUNCTION 14504df40 FUN_14504df40 body=431 status=ok
// SIG undefined FUN_14504df40(void)

void FUN_14504df40(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  ulonglong local_res20;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = param_3;
  if (param_3 < uVar8 * 2) {
    uVar5 = uVar8 * 2;
  }
  local_res10 = param_2;
  local_res20 = uVar8;
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x20,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar9 = (ulonglong)uVar1;
  local_res18 = puVar4;
  if (0 < (int)uVar1) {
    puVar7 = (undefined4 *)((longlong)puVar4 + 0x1c);
    uVar8 = (ulonglong)uVar1;
    puVar3 = (undefined4 *)(lVar2 + 0x1c);
    do {
      if ((undefined8 *)(puVar3 + -7) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar3 + -7) = *puVar4;
        *(undefined8 *)(puVar3 + -5) = *(undefined8 *)(puVar7 + -5);
        *(undefined8 *)(puVar3 + -3) = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        FUN_14504b8e0(puVar7 + -3);
        *(undefined8 *)(puVar3 + -3) = *(undefined8 *)(puVar7 + -3);
        puVar3[-1] = puVar7[-1];
        *puVar3 = *puVar7;
        *(undefined8 *)(puVar7 + -3) = 0;
        *(undefined8 *)(puVar7 + -1) = 0;
      }
      puVar3 = puVar3 + 8;
      puVar4 = puVar4 + 4;
      puVar7 = puVar7 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar4 = local_res18 + 1;
    do {
      FUN_14504ba80(puVar4);
      puVar4 = puVar4 + 4;
      uVar9 = uVar9 - 1;
      uVar8 = local_res20;
      param_2 = local_res10;
    } while (uVar9 != 0);
  }
  uVar9 = uVar5 * 0x20 + 0x20;
  uVar6 = uVar5;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar6 = uVar5 + 1;
    if (uVar9 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar5 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 << 5);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 14504e0f0 FUN_14504e0f0 body=266 status=ok
// SIG undefined FUN_14504e0f0(void)

void FUN_14504e0f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 14504e200 FUN_14504e200 body=179 status=ok
// SIG undefined FUN_14504e200(void)

void FUN_14504e200(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 14504e2c0 FUN_14504e2c0 body=522 status=ok
// SIG undefined FUN_14504e2c0(void)

void FUN_14504e2c0(int *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  int local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  int local_40;
  int *local_38;
  uint local_30;
  uint local_2c;
  
  iVar6 = *(int *)(param_2 + 0x30);
  if ((int)(param_1[5] & 0x7fffffffU) < iVar6) {
    FUN_141807aa8(param_1 + 2,&PTR_vftable_14c6e47a0);
  }
  if ((param_1[4] < iVar6) || (iVar6 < param_1[4])) {
    param_1[4] = iVar6;
  }
  piVar12 = (int *)0x0;
  uVar4 = 0;
  iVar6 = 0;
  local_38 = (int *)0x0;
  uVar10 = 0x80000000;
  local_30 = 0;
  local_2c = 0x80000000;
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar11 = 0;
    do {
      if (*(int *)(*(longlong *)(param_2 + 0x28) + lVar11 + 0x10) < 0) {
LAB_14504e3ac:
        uVar1 = uVar4 + 1;
        uVar5 = uVar4;
        if ((int)(uVar10 & 0x7fffffff) < (int)uVar1) {
          FUN_1401f86b2(&local_38,&PTR_vftable_14c6e47c0);
          piVar12 = local_38;
          uVar5 = local_30;
          uVar10 = local_2c;
        }
        uVar4 = uVar1;
        local_30 = uVar1;
        if (piVar12 + (int)uVar5 != (int *)0x0) {
          piVar12[(int)uVar5] = iVar6;
        }
      }
      else {
        FUN_144cb6610(param_2);
        if (local_48 - local_58 == 0) {
          if (local_44 - local_54 == 0) {
            bVar3 = local_40 < local_50;
          }
          else {
            bVar3 = (bool)((byte)(local_44 - local_54 >> 0x1f) >> 7);
          }
        }
        else {
          bVar3 = (bool)((byte)(local_48 - local_58 >> 0x1f) >> 7);
        }
        if (bVar3 != false) goto LAB_14504e3ac;
      }
      iVar6 = iVar6 + 1;
      lVar11 = lVar11 + 0x60;
    } while (iVar6 < *(int *)(param_2 + 0x30));
  }
  if (1 < (int)uVar4) {
    FUN_14504e9c0(piVar12,0);
  }
  iVar7 = 0;
  iVar6 = 0;
  if (0 < (int)uVar4) {
    uVar8 = (ulonglong)uVar4;
    piVar9 = piVar12;
    do {
      iVar2 = *piVar9;
      lVar11 = *(longlong *)(param_2 + 0x28);
      *(int *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 4) = iVar7;
      iVar2 = *(int *)((longlong)iVar2 * 0x60 + lVar11 + 0x10);
      if (-1 < iVar2) {
        *(int *)(*(longlong *)(param_1 + 2) + (longlong)iVar2 * 4) = iVar7;
      }
      iVar2 = iVar6 + 1;
      if (param_3 <= iVar2) {
        iVar7 = iVar7 + 1;
      }
      piVar9 = piVar9 + 1;
      iVar6 = 0;
      if (iVar2 < param_3) {
        iVar6 = iVar2;
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *param_1 = iVar7 + 1;
  if ((-1 < (int)uVar10) && (piVar12 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,piVar12,(ulonglong)(uVar10 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 14504e4d0 FUN_14504e4d0 body=724 status=ok
// SIG undefined FUN_14504e4d0(void)

void FUN_14504e4d0(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  uint uVar9;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint local_res18;
  undefined8 *local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68;
  int *piStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int *piVar10;
  
  uVar15 = 0;
  uVar11 = (ulonglong)param_3;
  local_78 = (undefined8 *)0x0;
  uVar12 = *(uint *)(param_2 + 0x30);
  local_70 = 0;
  local_6c = 0x80000000;
  uVar13 = uVar15;
  if ((int)uVar12 < 1) {
LAB_14504e546:
    local_res18 = local_70;
    if ((int)uVar13 <= (int)uVar12) goto LAB_14504e55c;
  }
  else {
    FUN_14504ef60(&local_78,&PTR_vftable_14c6e47a0,(longlong)(int)uVar12);
    uVar13 = (ulonglong)local_70;
    if ((int)uVar12 <= (int)local_70) goto LAB_14504e546;
  }
  uVar13 = (ulonglong)uVar12;
  local_res18 = uVar12;
LAB_14504e55c:
  puVar7 = local_78;
  uVar14 = uVar15;
  uVar16 = uVar15;
  if (0 < *(int *)(param_2 + 0x30)) {
    do {
      if (((int)uVar15 < *(int *)(uVar16 + 0x10 + *(longlong *)(param_2 + 0x28))) ||
         (*(int *)(uVar16 + 4 + *(longlong *)(param_2 + 0x28)) < 0)) {
        *(undefined4 *)puVar7 = 0xfffffffe;
      }
      else {
        uVar1 = *(undefined4 *)(uVar14 + *(longlong *)(param_1 + 8));
        *(undefined4 *)puVar7 = uVar1;
        *(undefined4 *)((longlong)puVar7 + 4) = uVar1;
      }
      uVar12 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar12;
      puVar7 = puVar7 + 1;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 + 0x60;
    } while ((int)uVar12 < *(int *)(param_2 + 0x30));
  }
  if (0 < (int)param_3) {
    do {
      puVar7 = local_78;
      piVar10 = (int *)0x0;
      uVar12 = (uint)uVar13;
      if ((int)uVar12 < 1) {
        uVar12 = 0;
        piVar6 = piVar10;
        uVar5 = 0x80000000;
      }
      else {
        piVar6 = (int *)(**(code **)(PTR_vftable_14c6e47a0 + 8))
                                  (&PTR_vftable_14c6e47a0,(longlong)(int)uVar12 << 3);
        piVar8 = piVar6;
        uVar15 = uVar13;
        do {
          if (piVar8 != (int *)0x0) {
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            *(undefined8 *)piVar8 = uVar3;
          }
          uVar15 = uVar15 - 1;
          piVar8 = piVar8 + 2;
          uVar5 = uVar12;
        } while (uVar15 != 0);
      }
      puVar7 = local_78;
      piVar8 = piVar6;
      if (0 < *(int *)(param_2 + 0x30)) {
        do {
          if (*piVar8 != -2) {
            piStack_60 = piVar6 + (longlong)(int)uVar12 * 2;
            local_68._0_4_ = SUB84(piVar6,0);
            local_68._4_4_ = (undefined4)((ulonglong)piVar6 >> 0x20);
            local_58 = (undefined4)local_68;
            uStack_54 = local_68._4_4_;
            local_68 = piVar6;
            uStack_50 = piStack_60;
            FUN_14504e7b0(param_2,piVar10,puVar7 + (int)piVar10,&local_58);
          }
          uVar9 = (int)piVar10 + 1;
          piVar10 = (int *)(ulonglong)uVar9;
          piVar8 = piVar8 + 2;
        } while ((int)uVar9 < *(int *)(param_2 + 0x30));
        uVar13 = (ulonglong)local_res18;
      }
      if ((-1 < (int)uVar5) && (piVar6 != (int *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,piVar6,(ulonglong)(uVar5 & 0x7fffffff) << 3);
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = 0;
  uVar13 = uVar11;
  uVar15 = uVar11;
  puVar7 = local_78;
  if (0 < *(int *)(param_2 + 0x30)) {
    do {
      lVar4 = *(longlong *)(param_2 + 0x28);
      if ((*(int *)(lVar4 + 0x10 + uVar13) <= (int)uVar11) && (-1 < *(int *)(lVar4 + 4 + uVar13))) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 8) + uVar15);
        if (((int)*puVar7 < iVar2 + -1) || (iVar2 + 1 < (int)((ulonglong)*puVar7 >> 0x20))) {
          *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar15) = 0xffffffff;
          iVar2 = *(int *)(lVar4 + 0x10 + uVar13);
          if (-1 < iVar2) {
            *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 4) = 0xffffffff;
          }
        }
      }
      uVar12 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar12;
      uVar13 = uVar13 + 0x60;
      uVar15 = uVar15 + 4;
      puVar7 = puVar7 + 1;
    } while ((int)uVar12 < *(int *)(param_2 + 0x30));
  }
  if ((-1 < (int)local_6c) && (local_78 != (undefined8 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_78,(ulonglong)(local_6c & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 14504e7b0 FUN_14504e7b0 body=520 status=ok
// SIG undefined FUN_14504e7b0(void)

void FUN_14504e7b0(longlong param_1,int param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  lVar1 = *param_4;
  lVar6 = (longlong)param_2 * 0x60 + lVar5;
  iVar4 = *(int *)(lVar6 + 8);
  do {
    iVar3 = *(int *)((longlong)iVar4 * 0x60 + 0x10 + lVar5);
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    uVar2 = *(undefined8 *)(lVar1 + (longlong)iVar3 * 8);
    iVar3 = (int)uVar2;
    if (-1 < iVar3) {
      iVar7 = (int)((ulonglong)uVar2 >> 0x20);
      if (*param_3 < 0) {
        *param_3 = iVar3;
      }
      else {
        if (iVar3 < *param_3) {
          *param_3 = iVar3;
        }
        if (iVar7 <= param_3[1]) goto LAB_14504e827;
      }
      param_3[1] = iVar7;
    }
LAB_14504e827:
    iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x10 + lVar5);
    if (iVar4 < 0) {
      lVar5 = (longlong)*(int *)(lVar6 + 0x10);
      goto LAB_14504e88f;
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
    iVar4 = *(int *)((longlong)iVar4 * 0x60 + 8 + lVar5);
  } while (iVar4 != *(int *)(lVar6 + 0x10));
  goto LAB_14504e846;
LAB_14504e88f:
  if (-1 < (int)lVar5) {
    iVar4 = *(int *)(lVar5 * 0x60 + 0xc + *(longlong *)(param_1 + 0x28));
    lVar5 = (longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x28);
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) < iVar4) {
      iVar3 = iVar4;
    }
    uVar2 = *(undefined8 *)(lVar1 + (longlong)iVar3 * 8);
    iVar4 = (int)uVar2;
    if (iVar4 < 0) {
LAB_14504e8fb:
      lVar5 = (longlong)*(int *)(lVar5 + 0x10);
    }
    else {
      iVar3 = (int)((ulonglong)uVar2 >> 0x20);
      if (-1 < *param_3) {
        if (iVar4 < *param_3) {
          *param_3 = iVar4;
        }
        if (param_3[1] < iVar3) {
          param_3[1] = iVar3;
        }
        goto LAB_14504e8fb;
      }
      *param_3 = iVar4;
      param_3[1] = iVar3;
      lVar5 = (longlong)*(int *)(lVar5 + 0x10);
    }
    goto LAB_14504e88f;
  }
LAB_14504e846:
  iVar4 = *(int *)(lVar6 + 0xc);
  do {
    lVar5 = (longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x28);
    iVar3 = *(int *)(lVar5 + 0x10);
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    uVar2 = *(undefined8 *)(lVar1 + (longlong)iVar3 * 8);
    iVar4 = (int)uVar2;
    if (-1 < iVar4) {
      iVar3 = (int)((ulonglong)uVar2 >> 0x20);
      if (*param_3 < 0) {
        *param_3 = iVar4;
      }
      else {
        if (iVar4 < *param_3) {
          *param_3 = iVar4;
        }
        if (iVar3 <= param_3[1]) goto LAB_14504e916;
      }
      param_3[1] = iVar3;
    }
LAB_14504e916:
    iVar4 = *(int *)(lVar5 + 0x10);
    if (iVar4 < 0) {
      lVar5 = (longlong)*(int *)(lVar6 + 0x10);
      break;
    }
    iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0xc + *(longlong *)(param_1 + 0x28));
    if (iVar4 == *(int *)(lVar6 + 0x10)) {
      return;
    }
  } while( true );
LAB_14504e946:
  if ((int)lVar5 < 0) {
    return;
  }
  iVar4 = *(int *)(lVar5 * 0x60 + 8 + *(longlong *)(param_1 + 0x28));
  lVar5 = (longlong)iVar4 * 0x60 + *(longlong *)(param_1 + 0x28);
  iVar3 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) < iVar4) {
    iVar3 = iVar4;
  }
  uVar2 = *(undefined8 *)(lVar1 + (longlong)iVar3 * 8);
  iVar4 = (int)uVar2;
  if (iVar4 < 0) {
LAB_14504e9b2:
    lVar5 = (longlong)*(int *)(lVar5 + 0x10);
    goto LAB_14504e946;
  }
  iVar3 = (int)((ulonglong)uVar2 >> 0x20);
  if (-1 < *param_3) {
    if (iVar4 < *param_3) {
      *param_3 = iVar4;
    }
    if (param_3[1] < iVar3) {
      param_3[1] = iVar3;
    }
    goto LAB_14504e9b2;
  }
  *param_3 = iVar4;
  param_3[1] = iVar3;
  lVar5 = (longlong)*(int *)(lVar5 + 0x10);
  goto LAB_14504e946;
}



// FUNCTION 14504e9c0 FUN_14504e9c0 body=1430 status=ok
// SIG undefined FUN_14504e9c0(void)

void FUN_14504e9c0(longlong param_1,uint param_2,int param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  bool bVar19;
  uint local_res10;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_90;
  int local_80;
  int local_70;
  ulonglong local_50;
  
  uVar7 = (ulonglong)(int)param_2;
  uVar18 = uVar7;
  local_res10 = param_2;
LAB_14504e9f4:
  local_50 = (ulonglong)param_3;
  local_a8 = (uint)uVar7;
  lVar12 = (longlong)*(int *)(param_1 + ((longlong)(int)(local_a8 + param_3) >> 1) * 4);
  local_a4 = param_3;
LAB_14504ea30:
  lVar5 = *(longlong *)(param_4 + 0x28);
  lVar6 = *(longlong *)(param_4 + 0x38);
  puVar1 = (undefined8 *)(lVar6 + (ulonglong)(*(uint *)(lVar5 + lVar12 * 0x60) & 0x3fffffff) * 0xc);
  do {
    iVar10 = *(int *)(puVar1 + 1);
    lVar13 = (longlong)*(int *)(param_1 + uVar18 * 4) * 0x60;
    uVar7 = (ulonglong)(*(uint *)(lVar13 + lVar5) & 0x3fffffff);
    uVar15 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
    puVar2 = (undefined8 *)(lVar6 + uVar7 * 0xc);
    iVar3 = *(int *)(puVar2 + 1);
    uVar17 = *puVar1;
    if ((((int)uVar15 == (int)uVar17) &&
        ((int)((ulonglong)uVar15 >> 0x20) == (int)((ulonglong)uVar17 >> 0x20))) && (iVar3 == iVar10)
       ) {
      uVar15 = *puVar2;
      uVar7 = (ulonglong)(*(uint *)(lVar12 * 0x60 + lVar5) & 0x3fffffff);
      uVar17 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
      iVar10 = *(int *)(lVar6 + 8 + uVar7 * 0xc);
      if ((((int)uVar15 != (int)uVar17) ||
          ((int)((ulonglong)uVar15 >> 0x20) != (int)((ulonglong)uVar17 >> 0x20))) ||
         (iVar3 != iVar10)) goto LAB_14504ebc6;
      uVar7 = (ulonglong)
              (*(uint *)((longlong)*(int *)(lVar13 + 0xc + lVar5) * 0x60 + lVar5) & 0x3fffffff);
      uVar15 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
      iVar3 = *(int *)(lVar6 + 8 + uVar7 * 0xc);
      local_90 = (int)uVar15;
      uVar7 = (ulonglong)
              (*(uint *)((longlong)*(int *)(lVar12 * 0x60 + 0xc + lVar5) * 0x60 + lVar5) &
              0x3fffffff);
      uVar17 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
      iVar10 = *(int *)(lVar6 + 8 + uVar7 * 0xc);
      local_a0 = (int)uVar17;
      if (local_90 - local_a0 == 0) {
        iVar14 = (int)((ulonglong)uVar15 >> 0x20) - (int)((ulonglong)uVar17 >> 0x20);
        if (iVar14 != 0) {
          bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
          goto LAB_14504ec0c;
        }
        bVar19 = SBORROW4(iVar3,iVar10);
        iVar3 = iVar3 - iVar10;
LAB_14504ec09:
        bVar19 = bVar19 != iVar3 < 0;
      }
      else {
        bVar19 = (bool)((byte)(local_90 - local_a0 >> 0x1f) >> 7);
      }
    }
    else {
LAB_14504ebc6:
      iVar14 = (int)uVar15 - (int)uVar17;
      if (iVar14 == 0) {
        iVar14 = (int)((ulonglong)uVar15 >> 0x20) - (int)((ulonglong)uVar17 >> 0x20);
        if (iVar14 == 0) {
          bVar19 = SBORROW4(iVar3,iVar10);
          iVar3 = iVar3 - iVar10;
          goto LAB_14504ec09;
        }
        bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
      }
      else {
        bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
      }
    }
LAB_14504ec0c:
    if (bVar19 == false) break;
    local_a8 = local_a8 + 1;
    uVar18 = uVar18 + 1;
  } while( true );
  lVar5 = *(longlong *)(param_4 + 0x28);
  lVar6 = *(longlong *)(param_4 + 0x38);
  puVar1 = (undefined8 *)(lVar6 + (ulonglong)(*(uint *)(lVar12 * 0x60 + lVar5) & 0x3fffffff) * 0xc);
  while( true ) {
    uVar15 = *puVar1;
    iVar10 = *(int *)(puVar1 + 1);
    lVar13 = (longlong)*(int *)(param_1 + local_50 * 4) * 0x60;
    uVar7 = (ulonglong)(*(uint *)(lVar13 + lVar5) & 0x3fffffff);
    uVar17 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
    puVar2 = (undefined8 *)(lVar6 + uVar7 * 0xc);
    iVar3 = *(int *)(puVar2 + 1);
    iVar16 = (int)uVar17;
    iVar11 = (int)uVar15;
    iVar14 = (int)((ulonglong)uVar15 >> 0x20);
    iVar9 = (int)((ulonglong)uVar17 >> 0x20);
    if (((iVar11 == iVar16) && (iVar14 == iVar9)) && (iVar10 == iVar3)) {
      uVar7 = (ulonglong)(*(uint *)(lVar12 * 0x60 + lVar5) & 0x3fffffff);
      uVar15 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
      iVar10 = *(int *)(lVar6 + 8 + uVar7 * 0xc);
      uVar17 = *puVar2;
      iVar16 = (int)uVar17;
      iVar11 = (int)uVar15;
      iVar14 = (int)((ulonglong)uVar15 >> 0x20);
      iVar9 = (int)((ulonglong)uVar17 >> 0x20);
      if (((iVar11 == iVar16) && (iVar14 == iVar9)) && (iVar10 == iVar3)) {
        uVar7 = (ulonglong)
                (*(uint *)((longlong)*(int *)(lVar12 * 0x60 + 0xc + lVar5) * 0x60 + lVar5) &
                0x3fffffff);
        uVar15 = *(undefined8 *)(lVar6 + uVar7 * 0xc);
        local_70 = (int)uVar15;
        uVar8 = (ulonglong)
                (*(uint *)((longlong)*(int *)(lVar13 + 0xc + lVar5) * 0x60 + lVar5) & 0x3fffffff);
        uVar17 = *(undefined8 *)(lVar6 + uVar8 * 0xc);
        local_80 = (int)uVar17;
        if (local_70 - local_80 == 0) {
          iVar10 = (int)((ulonglong)uVar15 >> 0x20) - (int)((ulonglong)uVar17 >> 0x20);
          if (iVar10 == 0) {
            bVar19 = *(int *)(lVar6 + 8 + uVar7 * 0xc) < *(int *)(lVar6 + 8 + uVar8 * 0xc);
          }
          else {
            bVar19 = (bool)((byte)(iVar10 >> 0x1f) >> 7);
          }
        }
        else {
          bVar19 = (bool)((byte)(local_70 - local_80 >> 0x1f) >> 7);
        }
      }
      else {
        iVar11 = iVar11 - iVar16;
        if (iVar11 == 0) {
          iVar14 = iVar14 - iVar9;
          if (iVar14 == 0) {
            bVar19 = iVar10 < iVar3;
          }
          else {
            bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
          }
        }
        else {
          bVar19 = (bool)((byte)(iVar11 >> 0x1f) >> 7);
        }
      }
    }
    else {
      iVar11 = iVar11 - iVar16;
      if (iVar11 == 0) {
        iVar14 = iVar14 - iVar9;
        if (iVar14 == 0) {
          bVar19 = iVar10 < iVar3;
        }
        else {
          bVar19 = (bool)((byte)(iVar14 >> 0x1f) >> 7);
        }
      }
      else {
        bVar19 = (bool)((byte)(iVar11 >> 0x1f) >> 7);
      }
    }
    if (bVar19 == false) break;
    local_a4 = local_a4 + -1;
    local_50 = local_50 - 1;
  }
  if ((longlong)local_50 < (longlong)uVar18) goto LAB_14504ef04;
  if (local_50 != uVar18) {
    uVar4 = *(undefined4 *)(param_1 + local_50 * 4);
    *(undefined4 *)(param_1 + local_50 * 4) = *(undefined4 *)(param_1 + uVar18 * 4);
    *(undefined4 *)(param_1 + uVar18 * 4) = uVar4;
  }
  local_50 = local_50 - 1;
  local_a4 = local_a4 + -1;
  local_a8 = local_a8 + 1;
  uVar18 = uVar18 + 1;
  if ((longlong)local_50 < (longlong)uVar18) goto LAB_14504ef04;
  goto LAB_14504ea30;
LAB_14504ef04:
  if ((int)local_res10 < local_a4) {
    FUN_14504e9c0(param_1,local_res10,local_a4,param_4);
  }
  if (param_3 <= (int)local_a8) {
    return;
  }
  uVar7 = (ulonglong)local_a8;
  local_res10 = local_a8;
  goto LAB_14504e9f4;
}



// FUNCTION 14504ef60 FUN_14504ef60 body=269 status=ok
// SIG undefined FUN_14504ef60(void)

void FUN_14504ef60(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14504f070 FUN_14504f070 body=100 status=ok
// SIG undefined FUN_14504f070(void)

void FUN_14504f070(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3 * 0x10 + *param_1;
  if (*(int *)(lVar1 + 8) == -1) {
    *param_2 = *(undefined4 *)(lVar1 + 0xc);
  }
  else {
    *(undefined4 *)(*param_1 + 0xc + (longlong)*(int *)(lVar1 + 8) * 0x10) =
         *(undefined4 *)(lVar1 + 0xc);
  }
  if (*(int *)(lVar1 + 0xc) != -1) {
    *(undefined4 *)(*param_1 + 8 + (longlong)*(int *)(lVar1 + 0xc) * 0x10) =
         *(undefined4 *)(lVar1 + 8);
    *(int *)(lVar1 + 0xc) = (int)param_1[2];
    *(int *)(param_1 + 2) = param_3;
    return;
  }
  param_2[1] = *(undefined4 *)(lVar1 + 8);
  *(int *)(lVar1 + 0xc) = (int)param_1[2];
  *(int *)(param_1 + 2) = param_3;
  return;
}



// FUNCTION 14504f0e0 FUN_14504f0e0 body=71 status=ok
// SIG undefined FUN_14504f0e0(void)

void FUN_14504f0e0(longlong param_1)

{
  int iVar1;
  
  FUN_145345290(param_1 + 0x10,1);
  iVar1 = FUN_145345910(param_1 + 0x10);
  while (-1 < iVar1) {
    FUN_14504f130(param_1,iVar1);
    iVar1 = FUN_145345910(param_1 + 0x10);
  }
  return;
}



// FUNCTION 14504f130 FUN_14504f130 body=2383 status=ok
// SIG undefined FUN_14504f130(void)

ulonglong FUN_14504f130(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int local_res8;
  undefined4 uStackX_c;
  uint local_res10;
  uint local_res18;
  uint local_res20;
  undefined8 in_stack_fffffffffffffe40;
  undefined4 uVar18;
  undefined8 local_198;
  int local_190;
  undefined8 local_188;
  int local_180;
  longlong local_178;
  undefined4 local_170;
  uint local_16c;
  undefined8 local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 *local_150;
  uint local_148;
  uint local_144;
  undefined8 local_140;
  int local_138;
  undefined8 local_130;
  uint local_128;
  longlong local_118;
  longlong lStack_110;
  undefined8 *local_108;
  int *piStack_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  uint local_dc;
  undefined8 *local_d8;
  int *piStack_d0;
  undefined8 *local_c8;
  int *piStack_c0;
  int *local_b8;
  undefined8 *local_a8;
  int *piStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  int *local_88;
  int local_78;
  undefined4 uStack_74;
  uint *local_70;
  uint *local_68;
  uint *local_60 [4];
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe40 >> 0x20);
  lVar13 = param_1[1];
  puVar17 = (uint *)((longlong)(int)param_2 * 0x60 + *(longlong *)(lVar13 + 0x28));
  local_148 = puVar17[4];
  puVar15 = (uint *)((longlong)(int)local_148 * 0x60 + *(longlong *)(lVar13 + 0x28));
  local_res10 = param_2;
  plVar9 = (longlong *)FUN_144cb4860(lVar13,&local_118,puVar15[1]);
  lVar13 = *plVar9;
  puVar10 = (undefined8 *)FUN_144cb4860(param_1[1],local_60,puVar17[1]);
  iVar12 = 0;
  puVar16 = (uint *)*puVar10;
  iVar14 = (int)(puVar10[1] - (longlong)puVar16 >> 2);
  if (0 < iVar14) {
    lVar13 = lVar13 - (longlong)puVar16;
    do {
      uVar1 = *(uint *)(lVar13 + (longlong)puVar16);
      uVar11 = (ulonglong)uVar1;
      if (*puVar16 != uVar1) goto LAB_14504fa69;
      iVar12 = iVar12 + 1;
      puVar16 = puVar16 + 1;
    } while (iVar12 < iVar14);
  }
  local_res20 = puVar17[3];
  local_res18 = puVar17[2];
  uVar1 = puVar15[3];
  uVar2 = puVar15[2];
  lVar13 = param_1[1];
  lVar3 = *(longlong *)(lVar13 + 0x28);
  local_68 = (uint *)((longlong)(int)local_res20 * 0x60 + lVar3);
  local_70 = (uint *)((longlong)(int)local_res18 * 0x60 + lVar3);
  local_60[0] = (uint *)((longlong)(int)uVar1 * 0x60 + lVar3);
  puVar16 = (uint *)((longlong)(int)uVar2 * 0x60 + lVar3);
  local_198 = *(undefined8 *)
               (*(longlong *)(lVar13 + 0x38) + (ulonglong)(*local_70 & 0x3fffffff) * 0xc);
  local_190 = *(int *)(*(longlong *)(lVar13 + 0x38) + 8 + (ulonglong)(*local_70 & 0x3fffffff) * 0xc)
  ;
  local_188 = *(undefined8 *)
               (*(longlong *)(lVar13 + 0x38) + (ulonglong)(*puVar16 & 0x3fffffff) * 0xc);
  local_180 = *(int *)(*(longlong *)(lVar13 + 0x38) + 8 + (ulonglong)(*puVar16 & 0x3fffffff) * 0xc);
  local_130 = *(undefined8 *)
               (*(longlong *)(lVar13 + 0x38) + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc);
  local_128 = *(uint *)(*(longlong *)(lVar13 + 0x38) + 8 + (ulonglong)(*puVar17 & 0x3fffffff) * 0xc)
  ;
  uVar11 = (ulonglong)local_128;
  local_140 = *(undefined8 *)
               (*(longlong *)(lVar13 + 0x38) + (ulonglong)(*local_68 & 0x3fffffff) * 0xc);
  local_138 = *(int *)(*(longlong *)(lVar13 + 0x38) + 8 + (ulonglong)(*local_68 & 0x3fffffff) * 0xc)
  ;
  if (((local_128 ==
        *(uint *)(*(longlong *)(lVar13 + 0x38) + 8 + (ulonglong)(*local_60[0] & 0x3fffffff) * 0xc))
      && (uVar11 = (ulonglong)(*puVar15 & 0x3fffffff) * 3,
         local_138 ==
         *(int *)(*(longlong *)(lVar13 + 0x38) + 8 + (ulonglong)(*puVar15 & 0x3fffffff) * 0xc))) &&
     (local_144 = uVar2, local_dc = uVar1,
     uVar11 = FUN_1450484d0(&local_198,&local_130,&local_140,&local_188), (char)uVar11 != '\0')) {
    local_f8 = 3;
    local_f0 = 0;
    local_e8 = 0;
    local_e4 = 0x80000000;
    local_98 = (undefined8 *)0x0;
    uStack_90._0_4_ = 0;
    puVar10 = *(undefined8 **)((longlong)(int)puVar17[2] * 0x20 + *(longlong *)param_1[9]);
    local_e0 = local_180 - local_190;
    local_d8 = &local_198;
    piStack_d0 = &local_e0;
    piStack_100 = &local_res8;
    local_res8 = CONCAT31(local_res8._1_3_,1);
    local_118 = *(longlong *)param_1[0xb];
    piStack_a0 = (int *)CONCAT44(piStack_a0._4_4_,3);
    uStack_90._4_4_ = 0x80000000;
    lStack_110 = local_118 + (longlong)(int)((longlong *)param_1[0xb])[1] * 8;
    local_78 = (int)local_188;
    uStack_74 = local_188._4_4_;
    local_108 = param_1;
    local_c8 = param_1;
    piStack_c0 = piStack_100;
    local_a8 = puVar10;
    FUN_14504fce0(*param_1,&local_118,&local_a8,local_198,local_188,CONCAT44(uVar18,2),&local_d8,
                  &local_f8);
    if ((((char)local_res8 == '\0') ||
        (uVar4 = *(undefined8 *)((longlong)(int)uVar2 * 0x20 + *(longlong *)param_1[9]),
        local_f8 != (int)uVar4)) || (local_f4 != (int)((ulonglong)uVar4 >> 0x20))) {
      FUN_14504ba80(&piStack_a0);
    }
    else {
      FUN_14504ba80(&piStack_a0);
      local_118 = *(longlong *)param_1[0xb];
      lStack_110 = local_118 + (longlong)(int)((longlong *)param_1[0xb])[1] * 8;
      local_res8 = (int)local_198;
      uStackX_c = local_198._4_4_;
      cVar8 = FUN_14504bc70(param_1[9],*param_1,&local_118,local_res20,param_1[1],local_140,
                            local_198);
      if (cVar8 != '\0') {
        local_118 = *(longlong *)param_1[0xb];
        lStack_110 = local_118 + (longlong)(int)((longlong *)param_1[0xb])[1] * 8;
        local_res8 = (int)local_130;
        uStackX_c = local_130._4_4_;
        cVar8 = FUN_14504bc70(param_1[9],*param_1,&local_118,local_res18,param_1[1],local_198,
                              local_130);
        if (cVar8 != '\0') {
          local_118 = *(longlong *)param_1[0xb];
          lStack_110 = local_118 + (longlong)(int)((longlong *)param_1[0xb])[1] * 8;
          local_res8 = (int)local_188;
          uStackX_c = local_188._4_4_;
          cVar8 = FUN_14504bc70(param_1[9],*param_1,&local_118,uVar1,param_1[1],local_130,local_188)
          ;
          if (cVar8 != '\0') {
            local_118 = *(longlong *)param_1[0xb];
            lStack_110 = local_118 + (longlong)(int)((longlong *)param_1[0xb])[1] * 8;
            local_res8 = (int)local_140;
            uStackX_c = local_140._4_4_;
            cVar8 = FUN_14504bc70(param_1[9],*param_1,&local_118,uVar2,param_1[1],local_188,
                                  local_140);
            if (cVar8 != '\0') {
              local_168 = *param_1;
              local_178 = 0;
              local_160 = param_1 + 0xc;
              local_170 = 0;
              local_150 = param_1 + 0xf;
              lStack_110 = (longlong)local_e8 * 0x10 + local_f0;
              local_118 = local_f0;
              local_res8 = CONCAT31(local_res8._1_3_,1);
              local_16c = 0x80000000;
              local_158 = 0xffffffffffffffff;
              FUN_145346030(&local_178,&local_118);
              FUN_1453463f0(&local_178,param_1[9],param_1[1],uVar2);
              FUN_1453463f0(&local_178,param_1[9],param_1[1],local_res20);
              FUN_1453464a0(&local_178);
              piStack_d0 = (int *)&local_198;
              local_c8 = &local_188;
              piStack_c0 = (int *)&local_140;
              local_b8 = &local_res8;
              local_d8 = param_1;
              local_a8 = param_1;
              piStack_a0 = piStack_d0;
              local_98 = local_c8;
              local_88 = local_b8;
              uStack_90 = piStack_c0;
              cVar8 = FUN_145050a60(&local_178,&local_a8);
              if ((cVar8 != '\0') && ((char)local_res8 != '\0')) {
                local_170 = 0;
                if ((-1 < (int)local_16c) && (local_178 != 0)) {
                  (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                            (&PTR_vftable_14c6e47c0,local_178,
                             (ulonglong)(local_16c & 0x7fffffff) << 4);
                }
                local_168 = *param_1;
                local_160 = param_1 + 0xc;
                local_150 = param_1 + 0xf;
                lStack_110 = (longlong)local_e8 * 0x10 + local_f0;
                local_118 = local_f0;
                local_res8 = CONCAT31(local_res8._1_3_,1);
                local_178 = 0;
                local_170 = 0;
                local_16c = 0x80000000;
                local_158 = 0xffffffffffffffff;
                FUN_145346230(&local_178,&local_118);
                FUN_1453463f0(&local_178,param_1[9],param_1[1],local_res18);
                FUN_1453463f0(&local_178,param_1[9],param_1[1],uVar1);
                FUN_1453464a0(&local_178);
                piStack_d0 = (int *)&local_198;
                local_c8 = &local_130;
                piStack_c0 = (int *)&local_188;
                local_b8 = &local_res8;
                local_d8 = param_1;
                local_a8 = param_1;
                piStack_a0 = piStack_d0;
                local_98 = local_c8;
                local_88 = local_b8;
                uStack_90 = piStack_c0;
                cVar8 = FUN_145051290(&local_178,&local_a8);
                if ((cVar8 != '\0') && ((char)local_res8 != '\0')) {
                  local_170 = 0;
                  if ((-1 < (int)local_16c) && (local_178 != 0)) {
                    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                              (&PTR_vftable_14c6e47c0,local_178,
                               (ulonglong)(local_16c & 0x7fffffff) << 4);
                  }
                  lVar13 = *(longlong *)(param_1[1] + 0x18);
                  uVar1 = puVar17[1];
                  uVar2 = puVar15[1];
                  FUN_14504baf0(param_1[9],local_res10,local_148,puVar10,&local_f8);
                  puVar7 = local_60[0];
                  puVar6 = local_70;
                  uVar5 = local_dc;
                  param_1 = param_1 + 2;
                  *puVar17 = *local_70;
                  puVar17[3] = local_144;
                  puVar17[2] = local_res20;
                  local_68[3] = local_res10;
                  local_68[2] = local_144;
                  puVar16[2] = local_res10;
                  puVar16[3] = local_res20;
                  local_68[1] = puVar17[1];
                  puVar16[1] = puVar17[1];
                  *(uint *)(lVar13 + (longlong)(int)uVar1 * 4) = local_res10;
                  *puVar15 = *puVar16;
                  puVar15[3] = local_res18;
                  puVar15[2] = local_dc;
                  local_70[3] = local_dc;
                  local_70[2] = local_148;
                  local_60[0][3] = local_148;
                  local_60[0][2] = local_res18;
                  local_70[1] = puVar15[1];
                  local_60[0][1] = puVar15[1];
                  *(uint *)(lVar13 + (longlong)(int)uVar2 * 4) = local_148;
                  if (-1 < (int)local_68[4]) {
                    FUN_145345880(param_1);
                  }
                  if (-1 < (int)puVar6[4]) {
                    FUN_145345880(param_1,local_res18);
                  }
                  if (-1 < (int)puVar7[4]) {
                    FUN_145345880(param_1,uVar5);
                  }
                  if (-1 < (int)puVar16[4]) {
                    FUN_145345880(param_1,local_144);
                  }
                  FUN_14504ba80(&local_f8);
                  return 1;
                }
              }
              local_170 = 0;
              if ((-1 < (int)local_16c) && (local_178 != 0)) {
                (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                          (&PTR_vftable_14c6e47c0,local_178,(ulonglong)(local_16c & 0x7fffffff) << 4
                          );
                FUN_14504ba80(&local_f8);
                return 0;
              }
            }
          }
        }
      }
    }
    FUN_14504ba80(&local_f8);
    uVar11 = 0;
  }
  else {
LAB_14504fa69:
    uVar11 = uVar11 & 0xffffffffffffff00;
  }
  return uVar11;
}



// FUNCTION 14504fa80 FUN_14504fa80 body=601 status=ok
// SIG undefined FUN_14504fa80(void)

void FUN_14504fa80(longlong *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
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
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  uVar16 = param_3[1];
  uVar20 = *param_3 * (longlong)*(int *)param_1[1];
  uVar21 = (ulonglong)*(int *)(*param_1 + 8);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar21;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar16;
  uVar18 = CONCAT44(0,*(uint *)(param_1[2] + 0x54));
  uVar22 = uVar16 * uVar21 + uVar20;
  uVar1 = *(ulonglong *)(param_2 + 0x30);
  uVar17 = uVar18 * uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar18;
  uVar18 = *(ulonglong *)(param_2 + 0x20) + uVar17;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar22;
  lVar19 = uVar1 * ((SUB168(auVar2 * auVar9,8) - ((longlong)uVar21 >> 0x3f & uVar16)) +
                    SUB168(SEXT816(*param_3) * SEXT816((longlong)*(int *)param_1[1]),8) +
                   (ulonglong)CARRY8(uVar16 * uVar21,uVar20));
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar16;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar18;
  if ((-1 < (longlong)
            (((uVar16 * (*(longlong *)(param_2 + 0x28) + SUB168(auVar3 * auVar10,8) +
                        (ulonglong)CARRY8(*(ulonglong *)(param_2 + 0x20),uVar17)) +
              SUB168(auVar5 * auVar12,8)) - (SUB168(auVar4 * auVar11,8) + lVar19)) -
            (ulonglong)(uVar16 * uVar18 < uVar1 * uVar22))) &&
     (uVar18 = CONCAT44(0,*(uint *)(param_1[2] + 0x50)), uVar17 = uVar18 * uVar1, auVar6._8_8_ = 0,
     auVar6._0_8_ = uVar1, auVar13._8_8_ = 0, auVar13._0_8_ = uVar18,
     uVar18 = *(ulonglong *)(param_2 + 0x20) - uVar17, auVar7._8_8_ = 0, auVar7._0_8_ = uVar16,
     auVar14._8_8_ = 0, auVar14._0_8_ = uVar18, auVar8._8_8_ = 0, auVar8._0_8_ = uVar1,
     auVar15._8_8_ = 0, auVar15._0_8_ = uVar22,
     -1 < (longlong)
          (((lVar19 + SUB168(auVar8 * auVar15,8)) -
           (uVar16 * ((*(longlong *)(param_2 + 0x28) - SUB168(auVar6 * auVar13,8)) -
                     (ulonglong)(*(ulonglong *)(param_2 + 0x20) < uVar17)) +
           SUB168(auVar7 * auVar14,8))) - (ulonglong)(uVar1 * uVar22 < uVar16 * uVar18)))) {
    return;
  }
  *(undefined1 *)param_1[3] = 0;
  return;
}



// FUNCTION 14504fce0 FUN_14504fce0 body=3447 status=ok
// SIG undefined FUN_14504fce0(void)

void FUN_14504fce0(longlong param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined4 *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *pcVar4;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  char cVar37;
  int iVar38;
  undefined8 *puVar39;
  undefined4 *puVar40;
  undefined8 *puVar41;
  int *piVar42;
  int *piVar43;
  undefined4 *puVar44;
  bool bVar45;
  longlong lVar46;
  int iVar47;
  int iVar48;
  ulonglong uVar49;
  int iVar50;
  longlong lVar51;
  int *piVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  undefined8 local_res20;
  ulonglong *puVar55;
  undefined4 uVar56;
  ulonglong *puVar57;
  int local_804;
  undefined8 local_800;
  undefined4 local_7f8;
  int local_7f0;
  int iStack_7ec;
  int local_7e8;
  int local_7e4;
  int local_7e0;
  undefined8 local_7d8;
  int local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  ulonglong local_7b8 [3];
  ulonglong uStack_7a0;
  ulonglong local_798 [2];
  int local_788;
  undefined4 uStack_784;
  ulonglong local_778;
  ulonglong uStack_770;
  undefined8 local_768 [2];
  undefined8 local_758 [2];
  undefined1 local_748 [32];
  ulonglong local_728;
  ulonglong uStack_720;
  ulonglong local_718;
  longlong lStack_710;
  longlong local_708;
  longlong lStack_700;
  longlong local_6f8;
  longlong lStack_6f0;
  ulonglong local_6e8;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  ulonglong local_6c8;
  ulonglong uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  ulonglong local_6a8;
  ulonglong uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  ulonglong local_688;
  ulonglong uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined4 local_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  ulonglong local_578;
  longlong lStack_570;
  longlong local_568;
  longlong lStack_560;
  longlong local_558;
  longlong lStack_550;
  ulonglong local_548;
  ulonglong local_538;
  longlong lStack_530;
  longlong local_528;
  longlong lStack_520;
  longlong local_518;
  longlong lStack_510;
  ulonglong local_508;
  ulonglong local_4f8;
  longlong lStack_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  longlong local_4d8;
  longlong lStack_4d0;
  ulonglong local_4c8;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [512];
  undefined1 local_298 [600];
  undefined4 uVar58;
  
  puVar40 = param_8;
  piVar43 = (int *)local_768;
  piVar52 = (int *)0x0;
  iVar48 = (int)param_5 - (int)param_4;
  iVar47 = (int)((ulonglong)param_5 >> 0x20) - (int)((ulonglong)param_4 >> 0x20);
  param_8[4] = 0;
  local_7b8[0] = 0xffffffffffffffff;
  local_798[0] = 1;
  if ((param_3[2] != 3) && (param_3[6] != 0)) {
    piVar52 = *(int **)(param_3 + 4);
  }
  iVar38 = *param_3;
  uVar2 = CONCAT44(iVar47,iVar48);
  local_804 = -1;
  local_res20 = param_4;
  local_7f0 = iVar48;
  iStack_7ec = iVar47;
  if (iVar38 != 0) {
    if (iVar38 == 1) {
      local_804 = *(int *)((longlong)param_3[1] * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
    }
    else {
      if (iVar38 != 2) {
        FUN_144bde670(local_798,local_498,0x200);
        FUN_144be6160(local_798,"unknown enumerant");
        iVar47 = FUN_144bfc110(0x380a4c90,local_498,
                               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                               ,0x233);
        if (iVar47 == 0) {
          FUN_144bde6e0(local_798);
          return;
        }
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_804 = param_3[1];
    }
LAB_14504ff4c:
    if (piVar52 == (int *)0x0) {
      iVar38 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)local_804 * 4);
    }
    else if ((*piVar52 == 0) || (*piVar52 == 1)) {
      iVar38 = piVar52[1];
    }
    else {
      FUN_144bde670(local_748,local_298,0x200);
      FUN_144be6160(local_748,"unknown enumerant");
      iVar38 = FUN_144bfc110(0xe80d96d,local_298,
                             "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Ai/Internal/NavMesh/Generation/Simplification/hkaiNavMeshGenerationSimplificationRayCast.inl"
                             ,0x24c);
      if (iVar38 != 0) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_144bde6e0(local_748);
      iVar38 = -1;
    }
    uVar53 = (ulonglong)iVar47;
    uStack_7a0 = 1;
    local_7f0 = iVar38;
    local_7b8[2] = uVar53;
    do {
      lVar51 = (longlong)iVar38 * 0x60 + *(longlong *)(param_1 + 0x28);
      FUN_144cb6610(param_1,lVar51,&local_800,&local_7c8);
      uVar56 = local_7f8;
      uVar1 = local_800;
      lVar46 = (longlong)(local_7c8._4_4_ - local_800._4_4_) * (longlong)iVar48 -
               (longlong)((int)local_7c8 - (int)local_800) * uVar53;
      if (-1 < (int)((uint)(lVar46 >> 0x3f) | (uint)(lVar46 != 0))) {
        if ((longlong)
            ((longlong)((int)local_7c8 - (int)local_800) * (longlong)iVar48 +
            (longlong)(local_7c8._4_4_ - local_800._4_4_) * uVar53) < 0) {
          local_800 = local_7c8;
          local_7c8 = uVar1;
          local_7f8 = local_7c0;
          local_7c0 = uVar56;
        }
        puVar57 = &local_778;
        puVar55 = &local_578;
        cVar37 = FUN_1450489a0(&local_800,&local_7c8,&local_res20,&param_5,puVar55,puVar57);
        uVar36 = local_548;
        lVar35 = lStack_550;
        lVar34 = local_558;
        lVar33 = lStack_560;
        lVar32 = local_568;
        lVar46 = lStack_570;
        uVar31 = local_578;
        uVar29 = uStack_770;
        uVar30 = local_778;
        uVar56 = (undefined4)((ulonglong)puVar55 >> 0x20);
        uVar58 = (undefined4)((ulonglong)puVar57 >> 0x20);
        if (((cVar37 != '\0') &&
            (auVar5._8_8_ = 0, auVar5._0_8_ = local_778, auVar17._8_8_ = 0,
            auVar17._0_8_ = local_798[0], auVar6._8_8_ = 0, auVar6._0_8_ = local_7b8[0],
            auVar18._8_8_ = 0, auVar18._0_8_ = uStack_770, uVar53 = local_7b8[2],
            (longlong)
            (((SUB168(auVar6 * auVar18,8) - ((longlong)local_7b8[0] >> 0x3f & uStack_770)) -
             (SUB168(auVar5 * auVar17,8) - ((longlong)local_778 >> 0x3f & local_798[0]))) -
            (ulonglong)(uStack_770 * local_7b8[0] < local_778 * local_798[0])) < 0)) &&
           (auVar19._8_8_ = 0, auVar19._0_8_ = uStack_770, auVar7._8_8_ = 0,
           auVar7._0_8_ = local_778,
           (longlong)
           (((SUB168(auVar7 * ZEXT816(1),8) - (ulonglong)((uint)((longlong)local_778 >> 0x3f) & 1))
            - SUB168(ZEXT816(0x3ffffffffffff) * auVar19,8)) -
           (ulonglong)(local_778 < uStack_770 * 0x3ffffffffffff)) < 0)) goto LAB_145050184;
      }
      iVar38 = *(int *)(lVar51 + 0xc);
      piVar52 = (int *)0x0;
      if (iVar38 == local_7f0) goto LAB_14505016b;
    } while( true );
  }
  iVar38 = param_3[1];
  local_7b8[0] = 0;
  local_7b8[1] = 1;
  local_804 = *(int *)((longlong)iVar38 * 0x60 + 4 + *(longlong *)(param_1 + 0x28));
  local_598 = *param_7;
  uStack_590 = param_7[1];
  local_588 = *(undefined4 *)(param_7 + 2);
  uStack_584 = *(undefined4 *)((longlong)param_7 + 0x14);
  uStack_580 = *(undefined4 *)(param_7 + 3);
  uStack_57c = *(undefined4 *)((longlong)param_7 + 0x1c);
  local_6d8 = *param_2;
  uStack_6d0 = param_2[1];
  puVar39 = (undefined8 *)
            FUN_145051ac0(local_758,param_1,&local_6d8,&local_804,iVar38,iVar38,uVar2,local_7b8,
                          param_6,1,&local_598);
  local_7b8[0] = 0;
  uVar1 = *puVar39;
  uVar56 = *(undefined4 *)(puVar39 + 1);
  local_7d8 = uVar1;
  if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
    iVar38 = puVar40[4] + 1;
    if ((int)(puVar40[5] & 0x7fffffff) < iVar38) {
      FUN_14504e0f0(puVar40 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar38);
    }
    iVar50 = puVar40[4];
    puVar40[4] = iVar38;
    puVar44 = (undefined4 *)((longlong)iVar50 * 0x10 + *(longlong *)(puVar40 + 2));
    *(undefined8 *)(puVar44 + 1) = uVar1;
    puVar44[3] = uVar56;
    *puVar44 = 1;
  }
  piVar52 = (int *)0x0;
  if (-1 < local_804) goto LAB_14504ff4c;
  goto LAB_145050a08;
LAB_145050184:
  uVar53 = local_778;
  local_6e8 = local_548;
  local_7b8[2] = local_778;
  uStack_7a0 = uStack_770;
  local_718 = local_578;
  lStack_710 = lStack_570;
  local_708 = local_568;
  lStack_700 = lStack_560;
  local_6f8 = local_558;
  lStack_6f0 = lStack_550;
  if (iVar38 < 0) {
LAB_14505016b:
    *(undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_) = 2;
    ((undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_))[1] = local_804;
    return;
  }
  uVar54 = (longlong)iVar38 * 0x60 + *(longlong *)(param_1 + 0x28);
  local_7b8[0] = uVar54;
  FUN_144cb6610(param_1,uVar54,&local_7e8,&local_7d8);
  if (((longlong)local_7b8[2] < 0) || (local_7b8[2] != uStack_7a0)) {
    bVar45 = false;
  }
  else {
    bVar45 = true;
  }
  if (bVar45) {
    uVar53 = (ulonglong)local_7e8;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar53;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_6e8;
    if (((uVar31 == local_6e8 * uVar53 &&
          lVar46 == SUB168(auVar14 * auVar26,8) - ((longlong)uVar53 >> 0x3f & local_6e8)) &&
        (uVar53 = (ulonglong)local_7e4, auVar15._8_8_ = 0, auVar15._0_8_ = uVar53, auVar27._8_8_ = 0
        , auVar27._0_8_ = local_6e8,
        lVar32 == local_6e8 * uVar53 &&
        lVar33 == SUB168(auVar15 * auVar27,8) - ((longlong)uVar53 >> 0x3f & local_6e8))) &&
       (uVar53 = (ulonglong)local_7e0, auVar16._8_8_ = 0, auVar16._0_8_ = uVar53, auVar28._8_8_ = 0,
       auVar28._0_8_ = local_6e8,
       lVar34 == local_6e8 * uVar53 &&
       lVar35 == SUB168(auVar16 * auVar28,8) - ((longlong)uVar53 >> 0x3f & local_6e8))) {
      bVar45 = true;
    }
    else {
      bVar45 = false;
    }
    if (bVar45) {
      puVar39 = &local_678;
      local_5f8 = *param_7;
      uStack_5f0 = param_7[1];
      local_5e8 = *(undefined4 *)(param_7 + 2);
      uStack_5e4 = *(undefined4 *)((longlong)param_7 + 0x14);
      uStack_5e0 = *(undefined4 *)(param_7 + 3);
      uStack_5dc = *(undefined4 *)((longlong)param_7 + 0x1c);
      local_678 = *param_2;
      uStack_670 = param_2[1];
      puVar41 = &local_5f8;
    }
    else {
      cVar37 = FUN_14504c7f0(&local_718,&local_7d8);
      local_5d8 = *param_7;
      uStack_5d0 = param_7[1];
      local_5c8 = *(undefined4 *)(param_7 + 2);
      uStack_5c4 = *(undefined4 *)((longlong)param_7 + 0x14);
      uStack_5c0 = *(undefined4 *)(param_7 + 3);
      uStack_5bc = *(undefined4 *)((longlong)param_7 + 0x1c);
      if (cVar37 == '\0') {
        local_728 = uVar30;
        uStack_720 = uVar29;
        local_4f8 = uVar31;
        lStack_4f0 = lVar46;
        local_4e8 = lVar32;
        lStack_4e0 = lVar33;
        local_4d8 = lVar34;
        lStack_4d0 = lVar35;
        local_4c8 = uVar36;
        local_5b8 = local_5d8;
        uStack_5b0 = uStack_5d0;
        local_5a8 = local_5c8;
        uStack_5a4 = uStack_5c4;
        uStack_5a0 = uStack_5c0;
        uStack_59c = uStack_5bc;
        FUN_145052390(param_1,uVar54,&local_4f8,&local_728,local_res20,param_5,&local_5b8);
        puVar40 = (undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_);
        *puVar40 = 1;
        if (*(int *)(uVar54 + 0x10) < 0) {
          puVar40[1] = iVar38;
          return;
        }
        if (local_7e8 - (int)local_7d8 == 0) {
          bVar45 = local_7e4 < local_7d8._4_4_;
        }
        else {
          bVar45 = (bool)((byte)(local_7e8 - (int)local_7d8 >> 0x1f) >> 7);
        }
        iVar47 = *(int *)(uVar54 + 0x10);
        if (bVar45 != false) {
          iVar47 = iVar38;
        }
        puVar40[1] = iVar47;
        if (iVar47 == iVar38) {
          return;
        }
        iVar47 = puVar40[4] + 1;
        if ((int)(puVar40[5] & 0x7fffffff) < iVar47) {
          FUN_14504e0f0(puVar40 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar47);
        }
        iVar48 = puVar40[4];
        puVar40[4] = iVar47;
        puVar44 = (undefined4 *)((longlong)iVar48 * 0x10 + *(longlong *)(puVar40 + 2));
        *puVar44 = 0;
        *(ulonglong *)(puVar44 + 1) = CONCAT44(puVar40[1],iVar38);
        return;
      }
      puVar39 = &local_668;
      iVar38 = *(int *)(uVar54 + 0xc);
      piVar43 = &local_788;
      local_668 = *param_2;
      uStack_660 = param_2[1];
      puVar41 = &local_5d8;
    }
    puVar39 = (undefined8 *)
              FUN_145052020(piVar43,param_1,puVar39,iVar38,CONCAT44(uVar56,param_6),puVar41);
    uVar2 = *puVar39;
    uVar56 = *(undefined4 *)(puVar39 + 1);
    local_800 = uVar2;
    if ((int)uVar2 != (int)((ulonglong)uVar2 >> 0x20)) {
      lVar46 = CONCAT44(param_8._4_4_,param_8._0_4_);
      iVar47 = *(int *)(lVar46 + 0x10) + 1;
      if ((int)(*(uint *)(lVar46 + 0x14) & 0x7fffffff) < iVar47) {
        FUN_14504e0f0(lVar46 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar47);
      }
      puVar40 = (undefined4 *)((longlong)*(int *)(lVar46 + 0x10) * 0x10 + *(longlong *)(lVar46 + 8))
      ;
      *(int *)(lVar46 + 0x10) = iVar47;
      *puVar40 = 1;
      *(undefined8 *)(puVar40 + 1) = uVar2;
      puVar40[3] = uVar56;
    }
    *(undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_) = 0;
    ((undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_))[1] = local_800._4_4_;
    return;
  }
  uVar49 = (ulonglong)local_7e8;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar49;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = local_6e8;
  local_7b8[2] = lVar46;
  local_798[0] = uVar31;
  if (((uVar31 == uVar49 * local_6e8 &&
        lVar46 == SUB168(auVar8 * auVar20,8) - ((longlong)uVar49 >> 0x3f & local_6e8)) &&
      (uVar49 = (ulonglong)local_7e4, auVar9._8_8_ = 0, auVar9._0_8_ = uVar49, auVar21._8_8_ = 0,
      auVar21._0_8_ = local_6e8,
      lVar32 == uVar49 * local_6e8 &&
      lVar33 == SUB168(auVar9 * auVar21,8) - ((longlong)uVar49 >> 0x3f & local_6e8))) &&
     (uVar49 = (ulonglong)local_7e0, auVar10._8_8_ = 0, auVar10._0_8_ = uVar49, auVar22._8_8_ = 0,
     auVar22._0_8_ = local_6e8,
     lVar34 == uVar49 * local_6e8 &&
     lVar35 == SUB168(auVar10 * auVar22,8) - ((longlong)uVar49 >> 0x3f & local_6e8))) {
    local_6c8 = uVar30;
    uStack_6c0 = uVar29;
    local_658 = *param_7;
    uStack_650 = param_7[1];
    local_648 = *(undefined4 *)(param_7 + 2);
    uStack_644 = *(undefined4 *)((longlong)param_7 + 0x14);
    uStack_640 = *(undefined4 *)(param_7 + 3);
    uStack_63c = *(undefined4 *)((longlong)param_7 + 0x1c);
    local_6b8 = *param_2;
    uStack_6b0 = param_2[1];
    puVar39 = (undefined8 *)
              FUN_145051ac0(local_4b8,param_1,&local_6b8,&local_804,CONCAT44(uVar56,iVar38),
                            CONCAT44(uVar58,iVar38),uVar2,&local_6c8,param_6,0,&local_658);
    uVar1 = *puVar39;
    uVar56 = *(undefined4 *)(puVar39 + 1);
    local_768[0] = uVar1;
    if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
      lVar46 = CONCAT44(param_8._4_4_,param_8._0_4_);
      iVar38 = *(int *)(lVar46 + 0x10) + 1;
      if ((int)(*(uint *)(lVar46 + 0x14) & 0x7fffffff) < iVar38) {
        FUN_14504e0f0(lVar46 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar38);
      }
      iVar50 = *(int *)(lVar46 + 0x10);
      *(int *)(lVar46 + 0x10) = iVar38;
      puVar40 = (undefined4 *)((longlong)iVar50 * 0x10 + *(longlong *)(lVar46 + 8));
      *(undefined8 *)(puVar40 + 1) = uVar1;
      puVar40[3] = uVar56;
      *puVar40 = 1;
    }
    piVar52 = (int *)0x0;
  }
  else {
    uVar49 = (ulonglong)(int)local_7d8;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar49;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = local_6e8;
    if (uVar31 == uVar49 * local_6e8 &&
        lVar46 == SUB168(auVar11 * auVar23,8) - ((longlong)uVar49 >> 0x3f & local_6e8)) {
      uVar49 = (ulonglong)local_7d8._4_4_;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar49;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = local_6e8;
      if ((lVar32 == uVar49 * local_6e8 &&
           lVar33 == SUB168(auVar12 * auVar24,8) - ((longlong)uVar49 >> 0x3f & local_6e8)) &&
         (uVar49 = (ulonglong)local_7d0, auVar13._8_8_ = 0, auVar13._0_8_ = uVar49,
         auVar25._8_8_ = 0, auVar25._0_8_ = local_6e8,
         lVar34 == local_6e8 * uVar49 &&
         lVar35 == SUB168(auVar13 * auVar25,8) - ((longlong)uVar49 >> 0x3f & local_6e8))) {
        piVar52 = (int *)0x0;
        local_638 = *param_7;
        uStack_630 = param_7[1];
        local_628 = *(undefined4 *)(param_7 + 2);
        uStack_624 = *(undefined4 *)((longlong)param_7 + 0x14);
        uStack_620 = *(undefined4 *)(param_7 + 3);
        uStack_61c = *(undefined4 *)((longlong)param_7 + 0x1c);
        local_698 = *param_2;
        uStack_690 = param_2[1];
        local_6a8 = uVar30;
        uStack_6a0 = uVar29;
        puVar39 = (undefined8 *)
                  FUN_145051ac0(local_4a8,param_1,&local_698,&local_804,
                                CONCAT44(uVar56,*(undefined4 *)(uVar54 + 0xc)),
                                CONCAT44(uVar58,*(undefined4 *)(uVar54 + 0xc)),uVar2,&local_6a8,
                                param_6,0,&local_638);
        uVar1 = *puVar39;
        uVar56 = *(undefined4 *)(puVar39 + 1);
        local_758[0] = uVar1;
        if ((int)uVar1 != (int)((ulonglong)uVar1 >> 0x20)) {
          lVar46 = CONCAT44(param_8._4_4_,param_8._0_4_);
          iVar38 = *(int *)(lVar46 + 0x10) + 1;
          if ((int)(*(uint *)(lVar46 + 0x14) & 0x7fffffff) < iVar38) {
            FUN_14504e0f0(lVar46 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar38);
          }
          iVar50 = *(int *)(lVar46 + 0x10);
          *(int *)(lVar46 + 0x10) = iVar38;
          puVar40 = (undefined4 *)((longlong)iVar50 * 0x10 + *(longlong *)(lVar46 + 8));
          *(undefined8 *)(puVar40 + 1) = uVar1;
          puVar40[3] = uVar56;
          *puVar40 = 1;
        }
        goto LAB_1450506a1;
      }
    }
    if ((piVar52 != (int *)0x0) && (*piVar52 != 0)) {
      piVar52 = (int *)0x0;
    }
    local_688 = uVar30;
    uStack_680 = uVar29;
    local_538 = uVar31;
    lStack_530 = lVar46;
    local_618 = *param_7;
    uStack_610 = param_7[1];
    local_608 = *(undefined4 *)(param_7 + 2);
    uStack_604 = *(undefined4 *)((longlong)param_7 + 0x14);
    uStack_600 = *(undefined4 *)(param_7 + 3);
    uStack_5fc = *(undefined4 *)((longlong)param_7 + 0x1c);
    local_528 = lVar32;
    lStack_520 = lVar33;
    local_518 = lVar34;
    lStack_510 = lVar35;
    local_508 = uVar36;
    FUN_145052390(param_1,uVar54,&local_538,&local_688,local_res20,param_5,&local_618);
    if (*(int *)(uVar54 + 0x10) < 0) {
      local_804 = -1;
    }
    else {
      lVar46 = CONCAT44(param_8._4_4_,param_8._0_4_);
      iVar50 = *(int *)(lVar46 + 0x10) + 1;
      local_804 = *(int *)((longlong)*(int *)(uVar54 + 0x10) * 0x60 + 4 +
                          *(longlong *)(param_1 + 0x28));
      if ((int)(*(uint *)(lVar46 + 0x14) & 0x7fffffff) < iVar50) {
        FUN_14504e0f0(lVar46 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar50);
      }
      iVar3 = *(int *)(lVar46 + 0x10);
      *(int *)(lVar46 + 0x10) = iVar50;
      puVar40 = (undefined4 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar46 + 8));
      *puVar40 = 0;
      uStack_784 = *(undefined4 *)(local_7b8[0] + 0x10);
      *(ulonglong *)(puVar40 + 1) = CONCAT44(uStack_784,iVar38);
      local_788 = iVar38;
    }
  }
LAB_1450506a1:
  if (-1 < local_804) {
    piVar42 = piVar52 + 4;
    if (piVar52 == (int *)0x0) {
      piVar42 = piVar52;
    }
    piVar52 = (int *)0x0;
    local_7b8[0] = uVar53;
    local_798[0] = uVar29;
    if (piVar42 != (int *)((longlong)param_3[6] * 0x10 + *(longlong *)(param_3 + 4))) {
      piVar52 = piVar42;
    }
    goto LAB_14504ff4c;
  }
  puVar40 = (undefined4 *)CONCAT44(param_8._4_4_,param_8._0_4_);
LAB_145050a08:
  *puVar40 = 3;
  puVar40[1] = 0xffffffff;
  return;
}



// FUNCTION 145050a60 FUN_145050a60 body=2088 status=ok
// SIG undefined FUN_145050a60(void)

undefined8 FUN_145050a60(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  longlong *plVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  ulonglong local_res8;
  longlong *local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  longlong *local_res20;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  plVar17 = (longlong *)param_1[5];
  iVar16 = *(int *)(param_1[2] + 0x30);
  local_res10 = param_2;
  if ((int)(*(uint *)((longlong)plVar17 + 0xc) & 0x7fffffff) < iVar16) {
    FUN_145052b40(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar16);
  }
  iVar19 = (int)plVar17[1];
  if (iVar19 < iVar16) {
    *(int *)(plVar17 + 1) = iVar16;
    if (0 < iVar16 - iVar19) {
      uVar9 = (ulonglong)(uint)(iVar16 - iVar19);
      puVar12 = (undefined4 *)(*plVar17 + (longlong)iVar19 * 4);
      do {
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = 0xffffffff;
        }
        uVar9 = uVar9 - 1;
        puVar12 = puVar12 + 1;
      } while (uVar9 != 0);
    }
  }
  else if (iVar16 < iVar19) {
    *(int *)(plVar17 + 1) = iVar16;
  }
  plVar17 = (longlong *)*param_1;
  plVar8 = plVar17 + (longlong)*(int *)(param_1 + 1) * 2;
  do {
    if (plVar17 == plVar8) {
      iVar16 = *(int *)(param_1 + 4);
      if (iVar16 != -1) {
        lVar10 = *param_2;
        lVar23 = param_2[3];
        lVar26 = param_2[2];
        lVar21 = param_2[1];
        do {
          plVar17 = (longlong *)param_1[3];
          puVar13 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar17);
          uVar3 = *puVar13;
          if (*(int *)(puVar13 + 1) == -1) {
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)puVar13 + 0xc);
          }
          else {
            *(undefined4 *)(*plVar17 + 0xc + (longlong)*(int *)(puVar13 + 1) * 0x10) =
                 *(undefined4 *)((longlong)puVar13 + 0xc);
          }
          if (*(int *)((longlong)puVar13 + 0xc) == -1) {
            *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(puVar13 + 1);
          }
          else {
            *(undefined4 *)(*plVar17 + 8 + (longlong)*(int *)((longlong)puVar13 + 0xc) * 0x10) =
                 *(undefined4 *)(puVar13 + 1);
          }
          *(int *)((longlong)puVar13 + 0xc) = (int)plVar17[2];
          *(int *)(plVar17 + 2) = iVar16;
          lVar14 = (longlong)(int)uVar3;
          *(undefined4 *)(*(longlong *)param_1[5] + lVar14 * 4) = 0xffffffff;
          lVar4 = *(longlong *)(param_1[2] + 0x28);
          puVar18 = (uint *)(lVar14 * 0x60 + lVar4);
          cVar5 = (char)((ulonglong)uVar3 >> 0x20);
          puVar15 = puVar18;
          if (cVar5 != '\0') {
            puVar15 = (uint *)((longlong)(int)puVar18[3] * 0x60 + lVar4);
          }
          local_res20 = *(longlong **)
                         (*(longlong *)(param_1[2] + 0x38) +
                         (ulonglong)(*puVar15 & 0x3fffffff) * 0xc);
          local_58._0_4_ = (uint)local_res20;
          local_res18 = (uint)local_58;
          uStackX_1c = (undefined4)((ulonglong)local_res20 >> 0x20);
          uVar3 = *(undefined8 *)
                   (**(longlong **)(lVar10 + 0x58) + (ulonglong)(*puVar15 & 0x3fffffff) * 8);
          local_58 = local_res20;
          cVar7 = FUN_145048000(&local_res20,lVar21,lVar26,lVar23,&local_res8);
          if ((cVar7 != '\0') &&
             ((*(int *)(lVar10 + 0x54) + (int)uVar3 < (int)local_res8 ||
              ((int)local_res8 < (int)((ulonglong)uVar3 >> 0x20) - *(int *)(lVar10 + 0x50))))) {
            *(undefined1 *)local_res10[4] = 0;
          }
          if (cVar5 == '\0') {
            cVar5 = FUN_1453468f0(param_1,puVar18);
            if ((cVar5 == '\0') && (-1 < (int)puVar18[4])) {
              FUN_1453466e0(param_1,(longlong)(int)puVar18[4] * 0x60 +
                                    *(longlong *)(param_1[2] + 0x28));
            }
          }
          else {
            cVar5 = FUN_1453466e0();
            if ((cVar5 == '\0') && (-1 < (int)puVar18[4])) {
              FUN_1453468f0(param_1,(longlong)(int)puVar18[4] * 0x60 +
                                    *(longlong *)(param_1[2] + 0x28));
            }
          }
          iVar16 = *(int *)(param_1 + 4);
        } while (iVar16 != -1);
      }
      return 1;
    }
    local_res20 = plVar17;
    if ((int)*plVar17 == 0) {
      iVar16 = (int)plVar17[1];
      iVar19 = *(int *)((longlong)plVar17 + 4);
      iVar25 = iVar16;
      if (iVar16 <= iVar19) {
        iVar25 = iVar19;
      }
      lVar10 = (longlong)iVar25 * 4;
      if (*(int *)(*(longlong *)param_1[5] + lVar10) == -1) {
        plVar17 = (longlong *)param_1[3];
        iVar22 = *(int *)((longlong)param_1 + 0x24);
        uVar11 = (uint)uStack_7c >> 8;
        uStack_7c = CONCAT31((int3)uVar11,iVar16 <= iVar19);
        iVar16 = (int)plVar17[2];
        if (iVar16 == -1) {
          iVar16 = (int)plVar17[1];
          iVar19 = iVar16 + 1;
          if ((int)(*(uint *)((longlong)plVar17 + 0xc) & 0x7fffffff) < iVar19) {
            FUN_145052c40(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar19);
          }
          *(int *)(plVar17 + 1) = iVar19;
        }
        else {
          *(undefined4 *)(plVar17 + 2) = *(undefined4 *)(*plVar17 + 0xc + (longlong)iVar16 * 0x10);
        }
        lVar23 = (longlong)iVar16;
        *(ulonglong *)(*plVar17 + lVar23 * 0x10) = CONCAT44(uStack_7c,iVar25);
        if (iVar22 == -1) {
          iVar19 = *(int *)(param_1 + 4);
          *(int *)(param_1 + 4) = iVar16;
          *(undefined4 *)(*plVar17 + 8 + lVar23 * 0x10) = 0xffffffff;
        }
        else {
          lVar26 = (longlong)iVar22 * 0x10 + *plVar17;
          iVar19 = *(int *)(lVar26 + 0xc);
          *(int *)(lVar26 + 0xc) = iVar16;
          *(int *)(*plVar17 + 8 + lVar23 * 0x10) = iVar22;
        }
        if (iVar19 == -1) {
          *(int *)((longlong)param_1 + 0x24) = iVar16;
          *(undefined4 *)(*plVar17 + 0xc + lVar23 * 0x10) = 0xffffffff;
        }
        else {
          *(int *)(*plVar17 + 0xc + lVar23 * 0x10) = iVar19;
          *(int *)(*plVar17 + 8 + (longlong)iVar19 * 0x10) = iVar16;
        }
        *(int *)(*(longlong *)param_1[5] + lVar10) = iVar16;
        plVar17 = local_res20;
      }
      else {
        FUN_14504f070(param_1[3],param_1 + 4);
        *(undefined4 *)(*(longlong *)param_1[5] + lVar10) = 0xffffffff;
      }
    }
    else if ((int)*plVar17 == 1) {
      iVar16 = *(int *)((longlong)plVar17 + 4);
      lVar21 = (longlong)iVar16;
      lVar10 = *(longlong *)(param_1[2] + 0x28);
      lVar26 = lVar21 * 0x60;
      FUN_144cb6610(param_1[2],(longlong)*(int *)(lVar26 + 8 + lVar10) * 0x60 + lVar10,&local_68,
                    &local_58);
      lVar23 = *local_res10;
      iVar25 = local_68._4_4_ - local_58._4_4_;
      iVar19 = (int)local_68 - (uint)local_58;
      local_res8 = (ulonglong)local_58;
      uVar3 = *(undefined8 *)
               (**(longlong **)(lVar23 + 0x58) +
               (ulonglong)(*(uint *)(lVar26 + lVar10) & 0x3fffffff) * 8);
      cVar5 = FUN_145048000(&local_res8,local_res10[1],local_res10[2],local_res10[3],&local_res18);
      if ((cVar5 != '\0') &&
         ((*(int *)(lVar23 + 0x54) + (int)uVar3 < (int)local_res18 ||
          ((int)local_res18 < (int)((ulonglong)uVar3 >> 0x20) - *(int *)(lVar23 + 0x50))))) {
        *(undefined1 *)local_res10[4] = 0;
      }
      local_res8 = local_res8 & 0xffffffffffffff00;
      plVar17 = local_res20;
      if (iVar16 != (int)local_res20[1]) {
        do {
          piVar24 = (int *)(param_1 + 4);
          lVar26 = *(longlong *)(param_1[2] + 0x28) + lVar26;
          iVar16 = *(int *)(lVar26 + 0x10);
          if (iVar16 < 0) {
            iVar16 = *piVar24;
            while (iVar16 != -1) {
              lVar23 = (longlong)iVar16;
              *(undefined4 *)
               (*(longlong *)param_1[5] +
               (longlong)*(int *)(*(longlong *)param_1[3] + lVar23 * 0x10) * 4) = 0xffffffff;
              plVar17 = (longlong *)param_1[3];
              lVar10 = *plVar17;
              iVar19 = *(int *)(lVar10 + 8 + lVar23 * 0x10);
              iVar25 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
              if (iVar19 == -1) {
                *piVar24 = iVar25;
              }
              else {
                *(int *)(lVar10 + 0xc + (longlong)iVar19 * 0x10) = iVar25;
              }
              iVar19 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
              uVar2 = *(undefined4 *)(lVar10 + 8 + lVar23 * 0x10);
              if (iVar19 == -1) {
                *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
              }
              else {
                *(undefined4 *)(*plVar17 + 8 + (longlong)iVar19 * 0x10) = uVar2;
              }
              *(int *)(lVar10 + 0xc + lVar23 * 0x10) = (int)plVar17[2];
              *(int *)(plVar17 + 2) = iVar16;
              iVar16 = *piVar24;
            }
            return 0;
          }
          iVar20 = (int)lVar21;
          piVar24 = (int *)(param_1 + 4);
          iVar22 = iVar16;
          if (iVar16 <= iVar20) {
            iVar22 = iVar20;
          }
          lVar10 = (longlong)iVar22 * 4;
          if (*(int *)(lVar10 + *(longlong *)param_1[5]) == -1) {
            plVar17 = (longlong *)param_1[3];
            iVar1 = *(int *)((longlong)param_1 + 0x24);
            uStack_84 = CONCAT31(uStack_84._1_3_,iVar16 <= iVar20);
            iVar16 = (int)plVar17[2];
            if (iVar16 == -1) {
              iVar16 = (int)plVar17[1];
              if ((int)(*(uint *)((longlong)plVar17 + 0xc) & 0x7fffffff) < iVar16 + 1) {
                FUN_145052c40(plVar17,&PTR_vftable_14c6e47a0,(longlong)(iVar16 + 1));
              }
              *(int *)(plVar17 + 1) = iVar16 + 1;
            }
            else {
              *(undefined4 *)(plVar17 + 2) =
                   *(undefined4 *)(*plVar17 + 0xc + (longlong)iVar16 * 0x10);
            }
            lVar23 = (longlong)iVar16;
            *(ulonglong *)(*plVar17 + lVar23 * 0x10) = CONCAT44(uStack_84,iVar22);
            if (iVar1 == -1) {
              iVar22 = *piVar24;
              *piVar24 = iVar16;
              *(undefined4 *)(*plVar17 + 8 + lVar23 * 0x10) = 0xffffffff;
            }
            else {
              lVar21 = (longlong)iVar1 * 0x10 + *plVar17;
              iVar22 = *(int *)(lVar21 + 0xc);
              *(int *)(lVar21 + 0xc) = iVar16;
              *(int *)(*plVar17 + 8 + lVar23 * 0x10) = iVar1;
            }
            if (iVar22 == -1) {
              *(int *)((longlong)param_1 + 0x24) = iVar16;
              *(undefined4 *)(*plVar17 + 0xc + lVar23 * 0x10) = 0xffffffff;
            }
            else {
              *(int *)(*plVar17 + 0xc + lVar23 * 0x10) = iVar22;
              *(int *)(*plVar17 + 8 + (longlong)iVar22 * 0x10) = iVar16;
            }
            *(int *)(lVar10 + *(longlong *)param_1[5]) = iVar16;
            plVar17 = local_res20;
          }
          else {
            FUN_14504f070(param_1[3],piVar24);
            *(undefined4 *)(lVar10 + *(longlong *)param_1[5]) = 0xffffffff;
          }
          lVar10 = *(longlong *)(param_1[2] + 0x28);
          iVar16 = *(int *)((longlong)*(int *)(lVar26 + 0x10) * 0x60 + 0xc + lVar10);
          lVar21 = (longlong)iVar16;
          lVar26 = lVar21 * 0x60;
          uVar9 = (ulonglong)
                  (*(uint *)((longlong)*(int *)(lVar10 + 0xc + lVar26) * 0x60 + lVar10) & 0x3fffffff
                  );
          lVar10 = *(longlong *)(param_1[2] + 0x38);
          local_68 = *(undefined8 *)(lVar10 + uVar9 * 0xc);
          local_60 = *(undefined4 *)(lVar10 + 8 + uVar9 * 0xc);
          iVar22 = (int)((ulonglong)local_68 >> 0x20) - local_58._4_4_;
          lVar10 = (longlong)(int)((int)local_68 - (uint)local_58) * (longlong)iVar25 -
                   (longlong)iVar22 * (longlong)iVar19;
          uVar11 = (uint)(lVar10 >> 0x3f) | (uint)(lVar10 != 0);
          if (((int)uVar11 < 0) ||
             ((uVar11 == 0 &&
              ((longlong)iVar22 * (longlong)iVar25 +
               (longlong)(int)((int)local_68 - (uint)local_58) * (longlong)iVar19 < 0)))) {
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
            if ((char)local_res8 != '\0') {
              iVar16 = *piVar24;
              if (iVar16 == -1) {
                return 0;
              }
              do {
                lVar23 = (longlong)iVar16;
                *(undefined4 *)
                 (*(longlong *)param_1[5] +
                 (longlong)*(int *)(*(longlong *)param_1[3] + lVar23 * 0x10) * 4) = 0xffffffff;
                plVar17 = (longlong *)param_1[3];
                lVar10 = *plVar17;
                iVar19 = *(int *)(lVar10 + 8 + lVar23 * 0x10);
                iVar25 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
                if (iVar19 == -1) {
                  *piVar24 = iVar25;
                }
                else {
                  *(int *)(lVar10 + 0xc + (longlong)iVar19 * 0x10) = iVar25;
                }
                iVar19 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
                uVar2 = *(undefined4 *)(lVar10 + 8 + lVar23 * 0x10);
                if (iVar19 == -1) {
                  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
                }
                else {
                  *(undefined4 *)(*plVar17 + 8 + (longlong)iVar19 * 0x10) = uVar2;
                }
                *(int *)(lVar10 + 0xc + lVar23 * 0x10) = (int)plVar17[2];
                *(int *)(plVar17 + 2) = iVar16;
                iVar16 = *piVar24;
              } while (iVar16 != -1);
              return 0;
            }
          }
          local_res8 = CONCAT71(local_res8._1_7_,uVar6);
        } while (iVar16 != (int)plVar17[1]);
      }
    }
    plVar17 = plVar17 + 2;
    param_2 = local_res10;
  } while( true );
}



// FUNCTION 145051290 FUN_145051290 body=2088 status=ok
// SIG undefined FUN_145051290(void)

undefined8 FUN_145051290(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  longlong *plVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  ulonglong local_res8;
  longlong *local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  longlong *local_res20;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  plVar17 = (longlong *)param_1[5];
  iVar16 = *(int *)(param_1[2] + 0x30);
  local_res10 = param_2;
  if ((int)(*(uint *)((longlong)plVar17 + 0xc) & 0x7fffffff) < iVar16) {
    FUN_145052b40(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar16);
  }
  iVar19 = (int)plVar17[1];
  if (iVar19 < iVar16) {
    *(int *)(plVar17 + 1) = iVar16;
    if (0 < iVar16 - iVar19) {
      uVar9 = (ulonglong)(uint)(iVar16 - iVar19);
      puVar12 = (undefined4 *)(*plVar17 + (longlong)iVar19 * 4);
      do {
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = 0xffffffff;
        }
        uVar9 = uVar9 - 1;
        puVar12 = puVar12 + 1;
      } while (uVar9 != 0);
    }
  }
  else if (iVar16 < iVar19) {
    *(int *)(plVar17 + 1) = iVar16;
  }
  plVar17 = (longlong *)*param_1;
  plVar8 = plVar17 + (longlong)*(int *)(param_1 + 1) * 2;
  do {
    if (plVar17 == plVar8) {
      iVar16 = *(int *)(param_1 + 4);
      if (iVar16 != -1) {
        lVar10 = *param_2;
        lVar23 = param_2[3];
        lVar26 = param_2[2];
        lVar21 = param_2[1];
        do {
          plVar17 = (longlong *)param_1[3];
          puVar13 = (undefined8 *)((longlong)iVar16 * 0x10 + *plVar17);
          uVar3 = *puVar13;
          if (*(int *)(puVar13 + 1) == -1) {
            *(undefined4 *)(param_1 + 4) = *(undefined4 *)((longlong)puVar13 + 0xc);
          }
          else {
            *(undefined4 *)(*plVar17 + 0xc + (longlong)*(int *)(puVar13 + 1) * 0x10) =
                 *(undefined4 *)((longlong)puVar13 + 0xc);
          }
          if (*(int *)((longlong)puVar13 + 0xc) == -1) {
            *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(puVar13 + 1);
          }
          else {
            *(undefined4 *)(*plVar17 + 8 + (longlong)*(int *)((longlong)puVar13 + 0xc) * 0x10) =
                 *(undefined4 *)(puVar13 + 1);
          }
          *(int *)((longlong)puVar13 + 0xc) = (int)plVar17[2];
          *(int *)(plVar17 + 2) = iVar16;
          lVar14 = (longlong)(int)uVar3;
          *(undefined4 *)(*(longlong *)param_1[5] + lVar14 * 4) = 0xffffffff;
          lVar4 = *(longlong *)(param_1[2] + 0x28);
          puVar18 = (uint *)(lVar14 * 0x60 + lVar4);
          cVar5 = (char)((ulonglong)uVar3 >> 0x20);
          puVar15 = puVar18;
          if (cVar5 != '\0') {
            puVar15 = (uint *)((longlong)(int)puVar18[3] * 0x60 + lVar4);
          }
          local_res20 = *(longlong **)
                         (*(longlong *)(param_1[2] + 0x38) +
                         (ulonglong)(*puVar15 & 0x3fffffff) * 0xc);
          local_58._0_4_ = (uint)local_res20;
          local_res18 = (uint)local_58;
          uStackX_1c = (undefined4)((ulonglong)local_res20 >> 0x20);
          uVar3 = *(undefined8 *)
                   (**(longlong **)(lVar10 + 0x58) + (ulonglong)(*puVar15 & 0x3fffffff) * 8);
          local_58 = local_res20;
          cVar7 = FUN_145048000(&local_res20,lVar21,lVar26,lVar23,&local_res8);
          if ((cVar7 != '\0') &&
             ((*(int *)(lVar10 + 0x54) + (int)uVar3 < (int)local_res8 ||
              ((int)local_res8 < (int)((ulonglong)uVar3 >> 0x20) - *(int *)(lVar10 + 0x50))))) {
            *(undefined1 *)local_res10[4] = 0;
          }
          if (cVar5 == '\0') {
            cVar5 = FUN_1453468f0(param_1,puVar18);
            if ((cVar5 == '\0') && (-1 < (int)puVar18[4])) {
              FUN_1453466e0(param_1,(longlong)(int)puVar18[4] * 0x60 +
                                    *(longlong *)(param_1[2] + 0x28));
            }
          }
          else {
            cVar5 = FUN_1453466e0();
            if ((cVar5 == '\0') && (-1 < (int)puVar18[4])) {
              FUN_1453468f0(param_1,(longlong)(int)puVar18[4] * 0x60 +
                                    *(longlong *)(param_1[2] + 0x28));
            }
          }
          iVar16 = *(int *)(param_1 + 4);
        } while (iVar16 != -1);
      }
      return 1;
    }
    local_res20 = plVar17;
    if ((int)*plVar17 == 0) {
      iVar16 = (int)plVar17[1];
      iVar19 = *(int *)((longlong)plVar17 + 4);
      iVar25 = iVar16;
      if (iVar16 <= iVar19) {
        iVar25 = iVar19;
      }
      lVar10 = (longlong)iVar25 * 4;
      if (*(int *)(*(longlong *)param_1[5] + lVar10) == -1) {
        plVar17 = (longlong *)param_1[3];
        iVar22 = *(int *)((longlong)param_1 + 0x24);
        uVar11 = (uint)uStack_7c >> 8;
        uStack_7c = CONCAT31((int3)uVar11,iVar16 <= iVar19);
        iVar16 = (int)plVar17[2];
        if (iVar16 == -1) {
          iVar16 = (int)plVar17[1];
          iVar19 = iVar16 + 1;
          if ((int)(*(uint *)((longlong)plVar17 + 0xc) & 0x7fffffff) < iVar19) {
            FUN_145052c40(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar19);
          }
          *(int *)(plVar17 + 1) = iVar19;
        }
        else {
          *(undefined4 *)(plVar17 + 2) = *(undefined4 *)(*plVar17 + 0xc + (longlong)iVar16 * 0x10);
        }
        lVar23 = (longlong)iVar16;
        *(ulonglong *)(*plVar17 + lVar23 * 0x10) = CONCAT44(uStack_7c,iVar25);
        if (iVar22 == -1) {
          iVar19 = *(int *)(param_1 + 4);
          *(int *)(param_1 + 4) = iVar16;
          *(undefined4 *)(*plVar17 + 8 + lVar23 * 0x10) = 0xffffffff;
        }
        else {
          lVar26 = (longlong)iVar22 * 0x10 + *plVar17;
          iVar19 = *(int *)(lVar26 + 0xc);
          *(int *)(lVar26 + 0xc) = iVar16;
          *(int *)(*plVar17 + 8 + lVar23 * 0x10) = iVar22;
        }
        if (iVar19 == -1) {
          *(int *)((longlong)param_1 + 0x24) = iVar16;
          *(undefined4 *)(*plVar17 + 0xc + lVar23 * 0x10) = 0xffffffff;
        }
        else {
          *(int *)(*plVar17 + 0xc + lVar23 * 0x10) = iVar19;
          *(int *)(*plVar17 + 8 + (longlong)iVar19 * 0x10) = iVar16;
        }
        *(int *)(*(longlong *)param_1[5] + lVar10) = iVar16;
        plVar17 = local_res20;
      }
      else {
        FUN_14504f070(param_1[3],param_1 + 4);
        *(undefined4 *)(*(longlong *)param_1[5] + lVar10) = 0xffffffff;
      }
    }
    else if ((int)*plVar17 == 1) {
      iVar16 = *(int *)((longlong)plVar17 + 4);
      lVar21 = (longlong)iVar16;
      lVar10 = *(longlong *)(param_1[2] + 0x28);
      lVar26 = lVar21 * 0x60;
      FUN_144cb6610(param_1[2],(longlong)*(int *)(lVar26 + 8 + lVar10) * 0x60 + lVar10,&local_68,
                    &local_58);
      lVar23 = *local_res10;
      iVar25 = local_68._4_4_ - local_58._4_4_;
      iVar19 = (int)local_68 - (uint)local_58;
      local_res8 = (ulonglong)local_58;
      uVar3 = *(undefined8 *)
               (**(longlong **)(lVar23 + 0x58) +
               (ulonglong)(*(uint *)(lVar26 + lVar10) & 0x3fffffff) * 8);
      cVar5 = FUN_145048000(&local_res8,local_res10[1],local_res10[2],local_res10[3],&local_res18);
      if ((cVar5 != '\0') &&
         ((*(int *)(lVar23 + 0x54) + (int)uVar3 < (int)local_res18 ||
          ((int)local_res18 < (int)((ulonglong)uVar3 >> 0x20) - *(int *)(lVar23 + 0x50))))) {
        *(undefined1 *)local_res10[4] = 0;
      }
      local_res8 = local_res8 & 0xffffffffffffff00;
      plVar17 = local_res20;
      if (iVar16 != (int)local_res20[1]) {
        do {
          piVar24 = (int *)(param_1 + 4);
          lVar26 = *(longlong *)(param_1[2] + 0x28) + lVar26;
          iVar16 = *(int *)(lVar26 + 0x10);
          if (iVar16 < 0) {
            iVar16 = *piVar24;
            while (iVar16 != -1) {
              lVar23 = (longlong)iVar16;
              *(undefined4 *)
               (*(longlong *)param_1[5] +
               (longlong)*(int *)(*(longlong *)param_1[3] + lVar23 * 0x10) * 4) = 0xffffffff;
              plVar17 = (longlong *)param_1[3];
              lVar10 = *plVar17;
              iVar19 = *(int *)(lVar10 + 8 + lVar23 * 0x10);
              iVar25 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
              if (iVar19 == -1) {
                *piVar24 = iVar25;
              }
              else {
                *(int *)(lVar10 + 0xc + (longlong)iVar19 * 0x10) = iVar25;
              }
              iVar19 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
              uVar2 = *(undefined4 *)(lVar10 + 8 + lVar23 * 0x10);
              if (iVar19 == -1) {
                *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
              }
              else {
                *(undefined4 *)(*plVar17 + 8 + (longlong)iVar19 * 0x10) = uVar2;
              }
              *(int *)(lVar10 + 0xc + lVar23 * 0x10) = (int)plVar17[2];
              *(int *)(plVar17 + 2) = iVar16;
              iVar16 = *piVar24;
            }
            return 0;
          }
          iVar20 = (int)lVar21;
          piVar24 = (int *)(param_1 + 4);
          iVar22 = iVar16;
          if (iVar16 <= iVar20) {
            iVar22 = iVar20;
          }
          lVar10 = (longlong)iVar22 * 4;
          if (*(int *)(lVar10 + *(longlong *)param_1[5]) == -1) {
            plVar17 = (longlong *)param_1[3];
            iVar1 = *(int *)((longlong)param_1 + 0x24);
            uStack_84 = CONCAT31(uStack_84._1_3_,iVar16 <= iVar20);
            iVar16 = (int)plVar17[2];
            if (iVar16 == -1) {
              iVar16 = (int)plVar17[1];
              if ((int)(*(uint *)((longlong)plVar17 + 0xc) & 0x7fffffff) < iVar16 + 1) {
                FUN_145052c40(plVar17,&PTR_vftable_14c6e47a0,(longlong)(iVar16 + 1));
              }
              *(int *)(plVar17 + 1) = iVar16 + 1;
            }
            else {
              *(undefined4 *)(plVar17 + 2) =
                   *(undefined4 *)(*plVar17 + 0xc + (longlong)iVar16 * 0x10);
            }
            lVar23 = (longlong)iVar16;
            *(ulonglong *)(*plVar17 + lVar23 * 0x10) = CONCAT44(uStack_84,iVar22);
            if (iVar1 == -1) {
              iVar22 = *piVar24;
              *piVar24 = iVar16;
              *(undefined4 *)(*plVar17 + 8 + lVar23 * 0x10) = 0xffffffff;
            }
            else {
              lVar21 = (longlong)iVar1 * 0x10 + *plVar17;
              iVar22 = *(int *)(lVar21 + 0xc);
              *(int *)(lVar21 + 0xc) = iVar16;
              *(int *)(*plVar17 + 8 + lVar23 * 0x10) = iVar1;
            }
            if (iVar22 == -1) {
              *(int *)((longlong)param_1 + 0x24) = iVar16;
              *(undefined4 *)(*plVar17 + 0xc + lVar23 * 0x10) = 0xffffffff;
            }
            else {
              *(int *)(*plVar17 + 0xc + lVar23 * 0x10) = iVar22;
              *(int *)(*plVar17 + 8 + (longlong)iVar22 * 0x10) = iVar16;
            }
            *(int *)(lVar10 + *(longlong *)param_1[5]) = iVar16;
            plVar17 = local_res20;
          }
          else {
            FUN_14504f070(param_1[3],piVar24);
            *(undefined4 *)(lVar10 + *(longlong *)param_1[5]) = 0xffffffff;
          }
          lVar10 = *(longlong *)(param_1[2] + 0x28);
          iVar16 = *(int *)((longlong)*(int *)(lVar26 + 0x10) * 0x60 + 0xc + lVar10);
          lVar21 = (longlong)iVar16;
          lVar26 = lVar21 * 0x60;
          uVar9 = (ulonglong)
                  (*(uint *)((longlong)*(int *)(lVar10 + 0xc + lVar26) * 0x60 + lVar10) & 0x3fffffff
                  );
          lVar10 = *(longlong *)(param_1[2] + 0x38);
          local_68 = *(undefined8 *)(lVar10 + uVar9 * 0xc);
          local_60 = *(undefined4 *)(lVar10 + 8 + uVar9 * 0xc);
          iVar22 = (int)((ulonglong)local_68 >> 0x20) - local_58._4_4_;
          lVar10 = (longlong)(int)((int)local_68 - (uint)local_58) * (longlong)iVar25 -
                   (longlong)iVar22 * (longlong)iVar19;
          uVar11 = (uint)(lVar10 >> 0x3f) | (uint)(lVar10 != 0);
          if (((int)uVar11 < 0) ||
             ((uVar11 == 0 &&
              ((longlong)iVar22 * (longlong)iVar25 +
               (longlong)(int)((int)local_68 - (uint)local_58) * (longlong)iVar19 < 0)))) {
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
            if ((char)local_res8 != '\0') {
              iVar16 = *piVar24;
              if (iVar16 == -1) {
                return 0;
              }
              do {
                lVar23 = (longlong)iVar16;
                *(undefined4 *)
                 (*(longlong *)param_1[5] +
                 (longlong)*(int *)(*(longlong *)param_1[3] + lVar23 * 0x10) * 4) = 0xffffffff;
                plVar17 = (longlong *)param_1[3];
                lVar10 = *plVar17;
                iVar19 = *(int *)(lVar10 + 8 + lVar23 * 0x10);
                iVar25 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
                if (iVar19 == -1) {
                  *piVar24 = iVar25;
                }
                else {
                  *(int *)(lVar10 + 0xc + (longlong)iVar19 * 0x10) = iVar25;
                }
                iVar19 = *(int *)(lVar10 + 0xc + lVar23 * 0x10);
                uVar2 = *(undefined4 *)(lVar10 + 8 + lVar23 * 0x10);
                if (iVar19 == -1) {
                  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
                }
                else {
                  *(undefined4 *)(*plVar17 + 8 + (longlong)iVar19 * 0x10) = uVar2;
                }
                *(int *)(lVar10 + 0xc + lVar23 * 0x10) = (int)plVar17[2];
                *(int *)(plVar17 + 2) = iVar16;
                iVar16 = *piVar24;
              } while (iVar16 != -1);
              return 0;
            }
          }
          local_res8 = CONCAT71(local_res8._1_7_,uVar6);
        } while (iVar16 != (int)plVar17[1]);
      }
    }
    plVar17 = plVar17 + 2;
    param_2 = local_res10;
  } while( true );
}



// FUNCTION 145051ac0 FUN_145051ac0 body=1367 status=ok
// SIG undefined FUN_145051ac0(void)

undefined4 *
FUN_145051ac0(undefined4 *param_1,longlong param_2,longlong *param_3,undefined4 *param_4,
             undefined4 param_5,uint param_6,undefined8 param_7,undefined8 *param_8,int param_9,
             char param_10,undefined8 param_11)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int local_f8;
  int iStack_f4;
  int local_e8;
  int iStack_e4;
  int iStack_b4;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  
  lVar12 = (longlong)(int)param_6;
  puVar5 = (uint *)(lVar12 * 0x60 + *(longlong *)(param_2 + 0x28));
  uVar3 = *(undefined8 *)(*param_3 + (ulonglong)(*puVar5 & 0x3fffffff) * 8);
  uVar17 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + (ulonglong)(*puVar5 & 0x3fffffff) * 0xc);
  local_f8 = (int)uVar17;
  iVar4 = local_f8;
  lVar10 = (longlong)local_f8;
  local_98 = *param_8;
  uStack_90 = param_8[1];
  iStack_f4 = (int)((ulonglong)uVar17 >> 0x20);
  lVar13 = (longlong)iStack_f4;
  local_68 = (int)uVar3;
  iStack_b4 = local_68 >> 0x1f;
  iStack_64 = iStack_b4;
  iStack_60 = iStack_b4;
  iStack_5c = iStack_b4;
  local_58 = 1;
  uVar17 = uVar3;
  local_88 = lVar10;
  lStack_80 = lVar10 >> 0x3f;
  local_78 = lVar13;
  lStack_70 = lVar13 >> 0x3f;
  FUN_14504fa80(param_11,&local_88,&local_98);
  iStack_e4 = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar17 != iStack_e4) {
    local_98 = *param_8;
    uStack_90 = param_8[1];
    iStack_b4 = iStack_e4 >> 0x1f;
    local_68 = iStack_e4;
    iStack_64 = iStack_b4;
    iStack_60 = iStack_b4;
    iStack_5c = iStack_b4;
    local_58 = 1;
    local_88 = lVar10;
    lStack_80 = lVar10 >> 0x3f;
    local_78 = lVar13;
    lStack_70 = lVar13 >> 0x3f;
    FUN_14504fa80(param_11,&local_88,&local_98);
  }
  lVar18 = (longlong)(int)param_7;
  lVar19 = (longlong)param_7._4_4_;
  lVar10 = *(longlong *)(param_2 + 0x28);
  lVar20 = (longlong)(int)puVar5[2];
  uVar17 = *(undefined8 *)
            (*(longlong *)(param_2 + 0x38) +
            (ulonglong)(*(uint *)((longlong)(int)puVar5[3] * 0x60 + lVar10) & 0x3fffffff) * 0xc);
  puVar6 = (uint *)(lVar20 * 0x60 + lVar10);
  uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + (ulonglong)(*puVar6 & 0x3fffffff) * 0xc);
  local_f8 = (int)uVar17;
  lVar13 = ((int)((ulonglong)uVar17 >> 0x20) - iStack_f4) * lVar18 - (local_f8 - iVar4) * lVar19;
  bVar7 = 0;
  if (lVar13 != 0) {
    bVar7 = (byte)((ulonglong)lVar13 >> 0x3f) ^ 1;
  }
  uVar15 = 0xffffffff;
  if (bVar7 == 0) {
    local_e8 = (int)uVar3;
    uVar15 = 0xffffffff;
    if (-1 < ((int)((ulonglong)uVar3 >> 0x20) - iStack_f4) * lVar18 - (local_e8 - iVar4) * lVar19) {
      uVar15 = param_6;
    }
  }
  uVar14 = uVar15;
  if ((param_9 == 0) || (((param_9 == 2 && ((int)uVar15 < 0)) || (param_10 != '\0')))) {
    if (param_6 != puVar6[4]) {
      do {
        iVar1 = *(int *)((longlong)(int)lVar12 * 0x60 + 0x10 + lVar10);
        if (iVar1 < 0) goto LAB_145051e7e;
        lVar13 = (longlong)iVar1 * 0x60;
        uVar2 = *(uint *)(lVar13 + 0xc + lVar10);
        lVar12 = (longlong)(int)uVar2;
        uVar17 = *(undefined8 *)
                  (*(longlong *)(param_2 + 0x38) +
                  (ulonglong)(*(uint *)(lVar13 + lVar10) & 0x3fffffff) * 0xc);
        uVar3 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)
                 (*(uint *)((longlong)*(int *)(lVar12 * 0x60 + 0xc + lVar10) * 0x60 + lVar10) &
                 0x3fffffff) * 0xc);
        local_f8 = (int)uVar3;
        lVar13 = ((int)((ulonglong)uVar3 >> 0x20) - iStack_f4) * lVar18 -
                 (local_f8 - iVar4) * lVar19;
        bVar7 = 0;
        if (lVar13 != 0) {
          bVar7 = (byte)((ulonglong)lVar13 >> 0x3f) ^ 1;
        }
        if ((bVar7 == 0) &&
           (local_e8 = (int)uVar17,
           -1 < ((int)((ulonglong)uVar17 >> 0x20) - iStack_f4) * lVar18 -
                (local_e8 - iVar4) * lVar19)) {
          uVar15 = uVar2;
          if (param_10 == '\0') break;
          if ((int)uVar14 < 0) {
            uVar14 = uVar2;
          }
        }
      } while (uVar2 != puVar6[4]);
    }
    param_6._0_1_ = 1;
    uVar11 = 1;
  }
  else {
LAB_145051e7e:
    if ((param_9 != 1) && ((param_9 != 2 || (-1 < (int)uVar15)))) {
      uVar11 = 1;
      param_6._0_1_ = 1;
      if (param_10 == '\0') goto LAB_145051e36;
    }
    uVar11 = 1;
    param_6._0_1_ = 1;
    if (puVar5[2] != puVar5[4]) {
      uVar11 = 1;
      param_6._0_1_ = 1;
      do {
        lVar12 = (longlong)(int)lVar20 * 0x60;
        uVar2 = *(uint *)(lVar12 + 0x10 + lVar10);
        uVar17 = *(undefined8 *)
                  (*(longlong *)(param_2 + 0x38) +
                  (ulonglong)(*(uint *)(lVar12 + lVar10) & 0x3fffffff) * 0xc);
        if ((int)uVar2 < 0) break;
        uVar8 = *(uint *)((longlong)(int)uVar2 * 0x60 + 8 + lVar10);
        lVar20 = (longlong)(int)uVar8;
        uVar3 = *(undefined8 *)
                 (*(longlong *)(param_2 + 0x38) +
                 (ulonglong)(*(uint *)(lVar20 * 0x60 + lVar10) & 0x3fffffff) * 0xc);
        local_f8 = (int)uVar3;
        if (-1 < ((int)((ulonglong)uVar3 >> 0x20) - iStack_f4) * lVar18 -
                 (local_f8 - iVar4) * lVar19) {
          local_e8 = (int)uVar17;
          lVar12 = ((int)((ulonglong)uVar17 >> 0x20) - iStack_f4) * lVar18 -
                   (local_e8 - iVar4) * lVar19;
          bVar7 = 0;
          if (lVar12 != 0) {
            bVar7 = (byte)((ulonglong)lVar12 >> 0x3f) ^ 1;
          }
          if (bVar7 == 0) {
            param_6._0_1_ = 0;
            uVar14 = uVar2;
            if (param_10 == '\0') break;
            if ((int)uVar15 < 0) {
              uVar11 = 0;
              uVar15 = uVar2;
            }
          }
        }
      } while (uVar8 != puVar5[4]);
    }
  }
LAB_145051e36:
  uVar9 = 0xffffffff;
  uVar8 = 0xffffffff;
  uVar16 = uVar11;
  uVar2 = uVar15;
  if ((param_9 != 0) && (uVar16 = (undefined1)param_6, uVar2 = uVar14, param_9 != 1)) {
    uVar16 = 0;
    if (param_9 != 2) goto LAB_145051fea;
    uVar16 = (undefined1)param_6;
    if (-1 < (int)uVar15) {
      uVar16 = uVar11;
      uVar2 = uVar15;
    }
  }
  uVar8 = uVar2;
  if (-1 < (int)uVar8) {
    uVar9 = *(undefined4 *)((longlong)(int)uVar8 * 0x60 + 4 + lVar10);
  }
LAB_145051fea:
  param_1[1] = uVar8;
  *param_4 = uVar9;
  *param_1 = param_5;
  *(undefined1 *)(param_1 + 2) = uVar16;
  return param_1;
}



// FUNCTION 145052020 FUN_145052020 body=871 status=ok
// SIG undefined FUN_145052020(void)

void FUN_145052020(int *param_1,longlong param_2,longlong *param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 uVar14;
  int iStackX_14;
  int local_108;
  int local_104;
  int local_100;
  int local_f8;
  int local_f4;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  uint *local_a0;
  int local_98;
  int local_94;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  
  puVar7 = (uint *)((longlong)param_4 * 0x60 + *(longlong *)(param_2 + 0x28));
  local_a0 = puVar7;
  FUN_144cb6610(param_2,puVar7,&local_108,&local_98);
  local_a8 = 1;
  local_e8 = 1;
  local_e0 = 1;
  uVar5 = *(undefined8 *)(*param_3 + (ulonglong)(*puVar7 & 0x3fffffff) * 8);
  local_d8 = (longlong)local_108;
  lStack_d0 = local_d8 >> 0x3f;
  local_c8 = (longlong)local_104;
  lStack_c0 = local_c8 >> 0x3f;
  local_100 = (int)uVar5;
  lStack_b0 = (longlong)local_100 >> 0x3f;
  local_b8._4_4_ = local_100 >> 0x1f;
  iStack_64 = local_b8._4_4_;
  iStack_60 = local_b8._4_4_;
  iStack_5c = local_b8._4_4_;
  local_58 = 1;
  uVar12 = uVar5;
  local_b8 = (longlong)local_100;
  local_88 = local_d8;
  lStack_80 = lStack_d0;
  local_78 = local_c8;
  lStack_70 = lStack_c0;
  local_68 = local_100;
  FUN_14504fa80(param_6,&local_88,&local_e8);
  iStackX_14 = (int)((ulonglong)uVar5 >> 0x20);
  if ((int)uVar12 != iStackX_14) {
    local_d8 = (longlong)local_108;
    lStack_d0 = local_d8 >> 0x3f;
    local_c8 = (longlong)local_104;
    lStack_c0 = local_c8 >> 0x3f;
    lStack_b0 = (longlong)iStackX_14 >> 0x3f;
    local_b8._4_4_ = iStackX_14 >> 0x1f;
    local_a8 = 1;
    local_58 = 1;
    local_100 = iStackX_14;
    local_e8 = 1;
    local_e0 = 1;
    local_68 = iStackX_14;
    iStack_64 = local_b8._4_4_;
    iStack_60 = local_b8._4_4_;
    iStack_5c = local_b8._4_4_;
    local_b8 = (longlong)iStackX_14;
    local_88 = local_d8;
    lStack_80 = lStack_d0;
    local_78 = local_c8;
    lStack_70 = lStack_c0;
    FUN_14504fa80(param_6,&local_88,&local_e8);
  }
  uVar14 = 1;
  iVar10 = local_98;
  iVar6 = local_94;
  iVar13 = param_4;
  if ((param_5 & 0xfffffffd) == 0) {
    iVar1 = *(int *)((longlong)(int)puVar7[2] * 0x60 + 0x10 + *(longlong *)(param_2 + 0x28));
    iVar2 = param_4;
    puVar7 = local_a0;
    while (iVar2 != iVar1) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x10 + lVar9);
      local_a0 = puVar7;
      if (iVar2 < 0) goto LAB_145052299;
      lVar8 = (longlong)iVar2 * 0x60 + lVar9;
      FUN_144cb6610(param_2,(longlong)*(int *)(lVar8 + 0xc) * 0x60 + lVar9,&local_e8,&local_f8);
      if (iVar10 - local_f8 == 0) {
        bVar11 = iVar6 < local_f4;
      }
      else {
        bVar11 = (bool)((byte)(iVar10 - local_f8 >> 0x1f) >> 7);
      }
      if (bVar11 == false) {
        iVar13 = *(int *)(lVar8 + 0xc);
        iVar10 = local_f8;
        iVar6 = local_f4;
      }
      puVar7 = local_a0;
      iVar2 = *(int *)(lVar8 + 0xc);
    }
  }
  else {
LAB_145052299:
    if ((param_5 == 1) || (uVar14 = 1, param_5 == 2)) {
      uVar14 = 1;
      uVar4 = puVar7[4];
      uVar3 = puVar7[2];
      while (uVar3 != uVar4) {
        lVar9 = (longlong)(int)uVar3 * 0x60 + *(longlong *)(param_2 + 0x28);
        if (*(int *)(lVar9 + 0x10) < 0) break;
        FUN_144cb6610(param_2,(longlong)*(int *)(lVar9 + 0x10) * 0x60 +
                              *(longlong *)(param_2 + 0x28),&local_e8,&local_f8);
        if (local_f8 - iVar10 == 0) {
          bVar11 = local_f4 < iVar6;
        }
        else {
          bVar11 = (bool)((byte)(local_f8 - iVar10 >> 0x1f) >> 7);
        }
        if (bVar11 != false) {
          iVar13 = *(int *)(lVar9 + 0x10);
          uVar14 = 0;
          iVar10 = local_f8;
          iVar6 = local_f4;
        }
        uVar3 = *(uint *)((longlong)*(int *)(lVar9 + 0x10) * 0x60 + 8 +
                         *(longlong *)(param_2 + 0x28));
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = iVar13;
  *(undefined1 *)(param_1 + 2) = uVar14;
  return;
}



// FUNCTION 145052390 FUN_145052390 body=1967 status=ok
// SIG undefined FUN_145052390(void)

void FUN_145052390(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  char cVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint local_res10 [4];
  uint local_res20 [2];
  undefined8 local_248;
  undefined8 uStack_240;
  ulonglong local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  longlong lStack_210;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [16];
  ulonglong local_1a8;
  int local_198;
  int local_194;
  int local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  longlong lStack_160;
  ulonglong local_158;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  undefined8 local_e0 [4];
  longlong local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  longlong lStack_80;
  ulonglong local_78;
  
  if (*(int *)(param_2 + 0x10) < 0) {
    cVar26 = FUN_144cb4d20();
    if (cVar26 != '\0') {
      FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(param_2 + 4));
      uVar30 = param_3[6];
      cVar26 = '\x01';
      uVar34 = CONCAT44(0,local_res10[0]);
      uVar37 = *(undefined4 *)param_3;
      uVar38 = *(undefined4 *)((longlong)param_3 + 4);
      uVar39 = *(undefined4 *)(param_3 + 1);
      uVar40 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar41 = *(undefined4 *)(param_3 + 2);
      uVar42 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar43 = *(undefined4 *)(param_3 + 3);
      uVar44 = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_1a8 = param_3[6];
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar30;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar34;
      uVar33 = uVar34 * uVar30;
      local_168 = param_3[4] - uVar33;
      lStack_160 = (param_3[5] - SUB168(auVar11 * auVar23,8)) -
                   (ulonglong)((ulonglong)param_3[4] < uVar33);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar30;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar34;
      lVar35 = param_3[5] + SUB168(auVar12 * auVar24,8) + (ulonglong)CARRY8(param_3[4],uVar33);
      uStack_240._0_4_ = (undefined4)lVar35;
      uStack_240._4_4_ = (undefined4)((ulonglong)lVar35 >> 0x20);
      auVar36._8_4_ = (undefined4)uStack_240;
      auVar36._0_8_ = param_3[4] + uVar33;
      auVar36._12_4_ = uStack_240._4_4_;
      uVar30 = local_1a8;
      local_188 = uVar37;
      uStack_184 = uVar38;
      uStack_180 = uVar39;
      uStack_17c = uVar40;
      local_178 = uVar41;
      uStack_174 = uVar42;
      uStack_170 = uVar43;
      uStack_16c = uVar44;
      goto LAB_145052a9f;
    }
  }
  else {
    lVar35 = (longlong)*(int *)(param_2 + 0x10) * 0x60 + *(longlong *)(param_1 + 0x28);
    FUN_144cb6610(param_1,param_2,&local_228,&local_198);
    FUN_144cb6610(param_1,lVar35,&local_1f0,&local_200);
    if ((((local_1f0 != local_198) || (local_1ec != local_194)) || (local_1e8 != local_190)) ||
       (((local_200 != (int)local_228 || (local_1fc != local_228._4_4_)) ||
        (local_1f8 != (int)uStack_220)))) {
      FUN_1450489a0(&local_1f0,&local_200,&param_5,&param_6,&local_188,&local_218);
      cVar26 = FUN_144cb4d20(param_1);
      if (cVar26 == '\0') {
        auVar36._8_8_ = lStack_160;
        auVar36._0_8_ = local_168;
        uVar30 = param_3[6];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar30;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = local_168;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_158;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = param_3[4];
        local_218 = local_158 * param_3[4];
        lStack_210 = param_3[5] * local_158 + SUB168(auVar10 * auVar22,8);
        if ((longlong)
            ((lStack_210 - (uVar30 * lStack_160 + SUB168(auVar9 * auVar21,8))) -
            (ulonglong)(local_218 < uVar30 * local_168)) < 0) {
          cVar26 = '\x01';
          local_168 = param_3[4];
          lStack_160 = param_3[5];
          uVar37 = local_188;
          uVar38 = uStack_184;
          uVar39 = uStack_180;
          uVar40 = uStack_17c;
          uVar41 = local_178;
          uVar42 = uStack_174;
          uVar43 = uStack_170;
          uVar44 = uStack_16c;
          local_1a8 = param_3[6];
          uVar30 = local_158;
          local_188 = *(undefined4 *)param_3;
          uStack_184 = *(undefined4 *)((longlong)param_3 + 4);
          uStack_180 = *(undefined4 *)(param_3 + 1);
          uStack_17c = *(undefined4 *)((longlong)param_3 + 0xc);
          local_178 = *(undefined4 *)(param_3 + 2);
          uStack_174 = *(undefined4 *)((longlong)param_3 + 0x14);
          uStack_170 = *(undefined4 *)(param_3 + 3);
          uStack_16c = *(undefined4 *)((longlong)param_3 + 0x1c);
          local_228 = CONCAT44(local_228._4_4_,(int)local_228);
          uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220);
        }
        else {
          cVar26 = '\x01';
          auVar36 = *(undefined1 (*) [16])(param_3 + 4);
          uVar37 = *(undefined4 *)param_3;
          uVar38 = *(undefined4 *)((longlong)param_3 + 4);
          uVar39 = *(undefined4 *)(param_3 + 1);
          uVar40 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar41 = *(undefined4 *)(param_3 + 2);
          uVar42 = *(undefined4 *)((longlong)param_3 + 0x14);
          uVar43 = *(undefined4 *)(param_3 + 3);
          uVar44 = *(undefined4 *)((longlong)param_3 + 0x1c);
          local_1a8 = local_158;
          uVar30 = param_3[6];
        }
      }
      else {
        FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(param_2 + 4));
        uVar30 = param_3[6];
        local_118 = *param_3;
        uStack_110 = param_3[1];
        uVar34 = CONCAT44(0,local_res10[0]);
        local_108 = param_3[2];
        uStack_100 = param_3[3];
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar30;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar34;
        uVar33 = uVar34 * uVar30;
        local_e8 = param_3[6];
        local_98 = param_3[2];
        uStack_90 = param_3[3];
        lVar29 = param_3[4] - uVar33;
        lVar32 = (param_3[5] - SUB168(auVar3 * auVar15,8)) -
                 (ulonglong)((ulonglong)param_3[4] < uVar33);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar30;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar34;
        local_78 = param_3[6];
        uVar30 = param_3[4] + uVar33;
        lVar31 = param_3[5] + SUB168(auVar4 * auVar16,8) + (ulonglong)CARRY8(param_3[4],uVar33);
        local_f8 = lVar29;
        lStack_f0 = lVar32;
        local_a8 = local_118;
        uStack_a0 = uStack_110;
        local_88 = uVar30;
        lStack_80 = lVar31;
        local_248 = uVar30;
        uStack_240 = lVar31;
        FUN_144cb4e20(param_1,local_res20,*(undefined4 *)(lVar35 + 4));
        uVar33 = CONCAT44(0,local_res20[0]);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_158;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar33;
        uVar34 = uVar33 * local_158;
        local_b0 = local_158;
        local_1a8 = local_158;
        local_c0 = local_168 - uVar34;
        lStack_b8 = (lStack_160 - SUB168(auVar5 * auVar17,8)) - (ulonglong)(local_168 < uVar34);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_158;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar33;
        uVar33 = local_168 + uVar34;
        lVar35 = lStack_160 + SUB168(auVar6 * auVar18,8) + (ulonglong)CARRY8(local_168,uVar34);
        local_238 = local_158;
        local_140 = local_e8;
        local_128 = local_e8;
        local_1b8._8_8_ = lVar35;
        local_1b8._0_8_ = uVar33;
        local_138 = lVar29;
        lStack_130 = lVar32;
        local_248 = local_c0;
        uStack_240 = lStack_b8;
        cVar26 = FUN_14504c750(&local_138,&local_248);
        puVar28 = &local_118;
        if (cVar26 == '\0') {
          puVar28 = local_e0;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = local_1a8;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar30;
        local_168 = puVar28[4];
        lStack_160 = puVar28[5];
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_78;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = uVar33;
        local_218 = local_78 * uVar33;
        lStack_210 = local_78 * lVar35 + SUB168(auVar8 * auVar20,8);
        puVar27 = &local_a8;
        if (-1 < (longlong)
                 ((lStack_210 - (local_1a8 * lVar31 + SUB168(auVar7 * auVar19,8))) -
                 (ulonglong)(local_218 < local_1a8 * uVar30))) {
          puVar27 = (undefined8 *)&local_1d8;
        }
        cVar26 = '\x01';
        auVar36 = *(undefined1 (*) [16])(puVar27 + 4);
        uVar37 = *(undefined4 *)puVar27;
        uVar38 = *(undefined4 *)((longlong)puVar27 + 4);
        uVar39 = *(undefined4 *)(puVar27 + 1);
        uVar40 = *(undefined4 *)((longlong)puVar27 + 0xc);
        uVar41 = *(undefined4 *)(puVar27 + 2);
        uVar42 = *(undefined4 *)((longlong)puVar27 + 0x14);
        uVar43 = *(undefined4 *)(puVar27 + 3);
        uVar44 = *(undefined4 *)((longlong)puVar27 + 0x1c);
        local_1a8 = puVar28[6];
        uVar30 = puVar27[6];
        local_188 = *(undefined4 *)puVar28;
        uStack_184 = *(undefined4 *)((longlong)puVar28 + 4);
        uStack_180 = *(undefined4 *)(puVar28 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar28 + 0xc);
        local_178 = *(undefined4 *)(puVar28 + 2);
        uStack_174 = *(undefined4 *)((longlong)puVar28 + 0x14);
        uStack_170 = *(undefined4 *)(puVar28 + 3);
        uStack_16c = *(undefined4 *)((longlong)puVar28 + 0x1c);
        local_228 = CONCAT44(local_228._4_4_,(int)local_228);
        uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220);
      }
      goto LAB_145052a9f;
    }
    cVar26 = FUN_144cb4d20(param_1);
    if (cVar26 != '\0') {
      FUN_144cb4e20(param_1,local_res20,*(undefined4 *)(param_2 + 4));
      FUN_144cb4e20(param_1,local_res10,*(undefined4 *)(lVar35 + 4));
      uVar30 = param_3[6];
      cVar26 = '\x01';
      if (local_res10[0] < local_res20[0]) {
        local_res10[0] = local_res20[0];
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar30;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = CONCAT44(0,local_res10[0]);
      uVar33 = local_res10[0] * uVar30;
      local_168 = param_3[4] - uVar33;
      lStack_160 = (param_3[5] - SUB168(auVar1 * auVar13,8)) -
                   (ulonglong)((ulonglong)param_3[4] < uVar33);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar30;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = CONCAT44(0,local_res10[0]);
      local_228 = param_3[4] + uVar33;
      lVar35 = param_3[5] + SUB168(auVar2 * auVar14,8) + (ulonglong)CARRY8(param_3[4],uVar33);
      uStack_220._0_4_ = (int)lVar35;
      uStack_220._4_4_ = (undefined4)((ulonglong)lVar35 >> 0x20);
      auVar36._8_4_ = (int)uStack_220;
      auVar36._0_8_ = local_228;
      auVar36._12_4_ = uStack_220._4_4_;
      uVar37 = *(undefined4 *)param_3;
      uVar38 = *(undefined4 *)((longlong)param_3 + 4);
      uVar39 = *(undefined4 *)(param_3 + 1);
      uVar40 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar41 = *(undefined4 *)(param_3 + 2);
      uVar42 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar43 = *(undefined4 *)(param_3 + 3);
      uVar44 = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_1a8 = param_3[6];
      uVar30 = param_3[6];
      local_188 = *(undefined4 *)param_3;
      uStack_184 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_180 = *(undefined4 *)(param_3 + 1);
      uStack_17c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_178 = *(undefined4 *)(param_3 + 2);
      uStack_174 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_170 = *(undefined4 *)(param_3 + 3);
      uStack_16c = *(undefined4 *)((longlong)param_3 + 0x1c);
      uStack_220 = lVar35;
      goto LAB_145052a9f;
    }
  }
  auVar36 = *(undefined1 (*) [16])(param_3 + 4);
  local_168 = auVar36._0_8_;
  lStack_160 = auVar36._8_8_;
  cVar26 = '\0';
  uVar37 = *(undefined4 *)param_3;
  uVar38 = *(undefined4 *)((longlong)param_3 + 4);
  uVar39 = *(undefined4 *)(param_3 + 1);
  uVar40 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar41 = *(undefined4 *)(param_3 + 2);
  uVar42 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar43 = *(undefined4 *)(param_3 + 3);
  uVar44 = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_1a8 = param_3[6];
  uVar30 = param_3[6];
  local_188 = *(undefined4 *)param_3;
  uStack_184 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_180 = *(undefined4 *)(param_3 + 1);
  uStack_17c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_178 = *(undefined4 *)(param_3 + 2);
  uStack_174 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_170 = *(undefined4 *)(param_3 + 3);
  uStack_16c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_228 = CONCAT44(local_228._4_4_,(int)local_228);
  uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220);
LAB_145052a9f:
  uVar25 = param_7;
  _local_1d8 = CONCAT44(uStack_184,local_188);
  _uStack_1d0 = CONCAT44(uStack_17c,uStack_180);
  local_248._0_4_ = (undefined4)*param_4;
  local_248._4_4_ = (undefined4)((ulonglong)*param_4 >> 0x20);
  uStack_240._0_4_ = (undefined4)param_4[1];
  uStack_240._4_4_ = (undefined4)((ulonglong)param_4[1] >> 0x20);
  _local_1c8 = CONCAT44(uStack_174,local_178);
  _uStack_1c0 = CONCAT44(uStack_16c,uStack_170);
  local_1b8._8_4_ = (int)lStack_160;
  local_1b8._0_8_ = local_168;
  local_1b8._12_4_ = (int)((ulonglong)lStack_160 >> 0x20);
  FUN_14504fa80(param_7,&local_1d8,&local_248);
  if (cVar26 != '\0') {
    _local_1d8 = CONCAT44(uVar38,uVar37);
    _uStack_1d0 = CONCAT44(uVar40,uVar39);
    local_248._0_4_ = (undefined4)*param_4;
    local_248._4_4_ = (undefined4)((ulonglong)*param_4 >> 0x20);
    uStack_240._0_4_ = (undefined4)param_4[1];
    uStack_240._4_4_ = (undefined4)((ulonglong)param_4[1] >> 0x20);
    _local_1c8 = CONCAT44(uVar42,uVar41);
    _uStack_1c0 = CONCAT44(uVar44,uVar43);
    local_1b8 = auVar36;
    local_1a8 = uVar30;
    FUN_14504fa80(uVar25,&local_1d8,&local_248);
  }
  return;
}



// FUNCTION 145052b40 FUN_145052b40 body=247 status=ok
// SIG undefined FUN_145052b40(void)

void FUN_145052b40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 4,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 145052c40 FUN_145052c40 body=266 status=ok
// SIG undefined FUN_145052c40(void)

void FUN_145052c40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 145052d50 FUN_145052d50 body=491 status=ok
// SIG undefined FUN_145052d50(void)

void FUN_145052d50(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_58 = *param_2;
  uStack_50 = param_2[1];
  FUN_145053e40(&local_58,1,param_1);
  local_58 = *param_2;
  uStack_50 = param_2[1];
  FUN_145053e40(&local_58,0,param_1 + 5);
  uVar5 = 0xffffffffffffffff;
  piVar1 = (int *)*param_2;
  lVar4 = 0x1fff;
  lVar11 = -0x2000;
  uVar13 = 1;
  if (piVar1 != (int *)param_2[1]) {
    lVar2 = param_1[2];
    do {
      lVar3 = (longlong)piVar1[2];
      lVar12 = (longlong)piVar1[1];
      uVar6 = (longlong)*piVar1 * *param_1;
      uVar7 = uVar6 + lVar12 * param_1[1];
      uVar8 = uVar7 + lVar3 * lVar2;
      lVar2 = SUB168(SEXT816(*param_1) * SEXT816((longlong)*piVar1),8) +
              SUB168(SEXT816(param_1[1]) * SEXT816(lVar12),8) +
              (ulonglong)CARRY8(uVar6,lVar12 * param_1[1]) +
              SUB168(SEXT816(lVar2) * SEXT816(lVar3),8) + (ulonglong)CARRY8(uVar7,lVar3 * lVar2);
      if ((longlong)((lVar11 - lVar2) - (ulonglong)(uVar13 < uVar8)) < 0) {
        lVar11 = lVar2;
        uVar13 = uVar8;
      }
      uVar10 = param_1[7] * lVar3;
      uVar7 = param_1[5] * (longlong)*piVar1;
      uVar6 = param_1[6] * lVar12;
      uVar8 = uVar7 + uVar6;
      uVar9 = uVar8 + uVar10;
      lVar2 = SUB168(SEXT816(param_1[5]) * SEXT816((longlong)*piVar1),8) +
              SUB168(SEXT816(param_1[6]) * SEXT816(lVar12),8) + (ulonglong)CARRY8(uVar7,uVar6) +
              SUB168(SEXT816(param_1[7]) * SEXT816(lVar3),8) + (ulonglong)CARRY8(uVar8,uVar10);
      if ((longlong)((lVar2 - lVar4) - (ulonglong)(uVar9 < uVar5)) < 0) {
        lVar4 = lVar2;
        uVar5 = uVar9;
      }
      lVar2 = param_1[2];
      piVar1 = piVar1 + 3;
    } while (piVar1 != (int *)param_2[1]);
  }
  param_1[3] = -uVar13;
  param_1[4] = -(ulonglong)(uVar13 != 0) - lVar11;
  param_1[8] = -uVar5;
  param_1[9] = -(ulonglong)(uVar5 != 0) - lVar4;
  return;
}



// FUNCTION 145052f40 FUN_145052f40 body=370 status=ok
// SIG undefined FUN_145052f40(void)

uint * FUN_145052f40(longlong *param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_48;
  longlong lStack_40;
  longlong local_38 [2];
  ulonglong local_28;
  ulonglong local_20;
  undefined8 local_18;
  
  local_88 = param_1[3];
  lStack_80 = param_1[4];
  local_48 = *param_1;
  lStack_40 = param_1[1];
  local_38[0] = param_1[2];
  FUN_145048e20(param_3,&local_48,&local_88,&local_68);
  local_88 = param_1[8];
  lStack_80 = param_1[9];
  local_48 = param_1[5];
  lStack_40 = param_1[6];
  local_38[0] = param_1[7];
  FUN_145048e20(param_3,&local_48,&local_88,&local_28);
  uVar2 = (longlong)local_60 >> 0x3f;
  local_88 = (local_68 ^ uVar2) - uVar2;
  local_78 = local_58;
  lStack_80 = ((local_60 ^ uVar2) - uVar2) - (ulonglong)((local_68 ^ uVar2) < uVar2);
  local_38[0] = local_58;
  local_48 = local_88;
  lStack_40 = lStack_80;
  FUN_1450493f0(&local_48,local_38,0xffffffff,&local_88);
  uVar3 = (int)local_88 + 1;
  uVar2 = (longlong)local_20 >> 0x3f;
  local_88 = (local_28 ^ uVar2) - uVar2;
  local_78 = local_18;
  lStack_80 = ((local_20 ^ uVar2) - uVar2) - (ulonglong)((local_28 ^ uVar2) < uVar2);
  local_38[0] = local_18;
  local_48 = local_88;
  lStack_40 = lStack_80;
  FUN_1450493f0(&local_48,local_38,0xffffffff,&local_88);
  uVar1 = (int)local_88 + 1;
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1450530c0 FUN_1450530c0 body=456 status=ok
// SIG undefined FUN_1450530c0(void)

uint * FUN_1450530c0(int *param_1,uint *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined8 local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_d8 = *(longlong *)(param_1 + 6);
  lStack_d0 = *(longlong *)(param_1 + 8);
  local_a8 = *param_1;
  iStack_a4 = param_1[1];
  iStack_a0 = param_1[2];
  iStack_9c = param_1[3];
  local_98 = *(undefined8 *)(param_1 + 4);
  FUN_145048f10(param_3,&local_a8,&local_d8,&local_58);
  local_d8 = *(longlong *)(param_1 + 0x10);
  lStack_d0 = *(longlong *)(param_1 + 0x12);
  local_a8 = param_1[10];
  iStack_a4 = param_1[0xb];
  iStack_a0 = param_1[0xc];
  iStack_9c = param_1[0xd];
  local_98 = *(undefined8 *)(param_1 + 0xe);
  FUN_145048f10(param_3,&local_a8,&local_d8,&local_30);
  uVar5 = (longlong)local_48 >> 0x3f;
  local_d8 = (local_58 ^ uVar5) - uVar5;
  uStack_b8 = uStack_38;
  uStack_b4 = uStack_34;
  uVar1 = (ulonglong)((local_58 ^ uVar5) < uVar5);
  uVar2 = (local_50 ^ uVar5) - uVar5;
  lStack_d0 = uVar2 - uVar1;
  local_68 = uStack_38;
  uStack_64 = uStack_34;
  local_c8 = ((local_48 ^ uVar5) - uVar5) - (ulonglong)((local_50 ^ uVar5) < uVar5 || uVar2 < uVar1)
  ;
  uStack_c0 = local_40;
  uStack_bc = uStack_3c;
  uStack_70 = local_40;
  uStack_6c = uStack_3c;
  local_88 = local_d8;
  lStack_80 = lStack_d0;
  local_78 = local_c8;
  FUN_145055ae0(&local_88,&uStack_70,0xffffffff,&local_a8);
  uVar4 = local_a8 + 1;
  uVar5 = (longlong)local_20 >> 0x3f;
  local_d8 = (local_30 ^ uVar5) - uVar5;
  uVar1 = (ulonglong)((local_30 ^ uVar5) < uVar5);
  uVar2 = (local_28 ^ uVar5) - uVar5;
  lStack_d0 = uVar2 - uVar1;
  local_c8 = ((local_20 ^ uVar5) - uVar5) - (ulonglong)((local_28 ^ uVar5) < uVar5 || uVar2 < uVar1)
  ;
  uStack_c0 = local_18;
  uStack_bc = uStack_14;
  uStack_b8 = uStack_10;
  uStack_b4 = uStack_c;
  local_68 = uStack_10;
  uStack_64 = uStack_c;
  uStack_70 = local_18;
  uStack_6c = uStack_14;
  local_88 = local_d8;
  lStack_80 = lStack_d0;
  local_78 = local_c8;
  FUN_145055ae0(&local_88,&uStack_70,0xffffffff,&local_a8);
  uVar3 = local_a8 + 1U;
  if (local_a8 + 1U < uVar4) {
    uVar3 = uVar4;
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 145053290 FUN_145053290 body=161 status=ok
// SIG undefined FUN_145053290(void)

undefined8 FUN_145053290(ulonglong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = param_1[2];
  uVar4 = param_1[1];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 & 0xffffffff;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1[3];
  uVar5 = SUB168(auVar1 * auVar2,0);
  uVar6 = param_1[4] * (param_2 & 0xffffffff) + SUB168(auVar1 * auVar2,8);
  if (-1 < (longlong)uVar3) {
    uVar5 = (ulonglong)(uVar6 < uVar4 && uVar3 == 0);
    if (uVar3 != 0) {
      uVar5 = 1;
    }
    if (param_1[3] * (param_2 & 0xffffffff) < *param_1 &&
        ((uVar6 <= uVar4 && uVar6 >= uVar4) && uVar3 == 0) || (char)uVar5 != '\0') {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 145053340 FUN_145053340 body=71 status=ok
// SIG undefined FUN_145053340(void)

void FUN_145053340(longlong param_1)

{
  int iVar1;
  
  FUN_145345290(param_1 + 0x10,1);
  iVar1 = FUN_145345910(param_1 + 0x10);
  while (-1 < iVar1) {
    FUN_145053830(param_1,iVar1);
    iVar1 = FUN_145345910(param_1 + 0x10);
  }
  return;
}



// FUNCTION 145053390 FUN_145053390 body=838 status=ok
// SIG undefined FUN_145053390(void)

undefined8 * FUN_145053390(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 *puVar12;
  undefined8 local_res8;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined8 *puStack_120;
  undefined8 *local_118;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 *local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98 [12];
  
  puVar12 = (undefined8 *)0x0;
  uVar10 = 0x80000000;
  local_138 = (undefined8 *)0x0;
  uVar7 = *(uint *)(*(longlong *)(param_1[1] + 0x18) + (longlong)param_3 * 4);
  puVar1 = (uint *)(*(longlong *)(param_1[1] + 0x18) + (longlong)param_3 * 4);
  uStack_130._0_4_ = 0;
  uStack_130._4_4_ = 0x80000000;
  do {
    iVar9 = (int)uStack_130 + 1;
    puVar11 = (uint *)((longlong)(int)uVar7 * 0x60 + *(longlong *)(param_1[1] + 0x28));
    uVar8 = (ulonglong)(*puVar11 & 0x3fffffff);
    lVar5 = *(longlong *)(param_1[1] + 0x38);
    uVar4 = *(undefined4 *)(lVar5 + 8 + uVar8 * 0xc);
    uVar3 = *(undefined8 *)(lVar5 + uVar8 * 0xc);
    if ((int)(uVar10 & 0x7fffffff) < iVar9) {
      FUN_147e4dcf0(&local_138,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      puVar12 = local_138;
      uVar10 = uStack_130._4_4_;
    }
    puVar2 = (undefined8 *)((longlong)puVar12 + (longlong)(int)uStack_130 * 0xc);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = uVar3;
      *(undefined4 *)(puVar2 + 1) = uVar4;
    }
    uVar7 = puVar11[3];
    uStack_130._0_4_ = iVar9;
  } while (uVar7 != *puVar1);
  uStack_130 = (undefined8 *)((longlong)puVar12 + (longlong)iVar9 * 0xc);
  local_138 = puVar12;
  local_d8 = puVar12;
  puStack_d0 = uStack_130;
  FUN_145052d50(local_98,&local_d8);
  if ((-1 < (int)uVar10) && (puVar12 != (undefined8 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar12,(ulonglong)(uVar10 & 0x7fffffff) * 0xc);
  }
  *(undefined4 *)param_2 = 0;
  local_f8 = *param_1;
  local_f0 = param_1 + 0xc;
  uVar7 = *puVar1;
  local_e0 = param_1 + 0xf;
  local_108 = 0;
  local_100 = 0;
  local_fc = 0x80000000;
  local_e8 = 0xffffffffffffffff;
  do {
    FUN_144cb6610(param_1[1],*(longlong *)(param_1[1] + 0x28) + (longlong)(int)uVar7 * 0x60,
                  &local_138,&local_b8);
    local_128 = *(undefined8 **)param_1[0xb];
    puStack_120 = local_128 + *(int *)((undefined8 *)param_1[0xb] + 1);
    local_res8 = CONCAT44(local_b4,local_b8);
    local_a8 = local_128;
    puStack_a0 = puStack_120;
    cVar6 = FUN_14504bc70(param_1[9],*param_1,&local_128,uVar7,param_1[1],local_138,local_res8);
    if (cVar6 == '\0') {
      *(undefined4 *)param_2 = 0x3fffff;
      goto LAB_14505367d;
    }
    local_128 = local_98;
    puStack_120 = param_2;
    local_d8 = local_128;
    puStack_d0 = param_2;
    FUN_1450550a0(param_1[9],*param_1,param_1[1],uVar7,&local_128);
    FUN_1453463f0(&local_108,param_1[9],param_1[1],uVar7);
    uVar7 = *(uint *)(*(longlong *)(param_1[1] + 0x28) + 0xc + (longlong)(int)uVar7 * 0x60);
  } while (uVar7 != *puVar1);
  FUN_1453464a0(&local_108);
  puStack_120 = local_98;
  local_128 = param_1;
  local_118 = param_2;
  local_d8 = param_1;
  puStack_d0 = puStack_120;
  local_c8 = param_2;
  FUN_145055280(&local_108,&local_d8);
LAB_14505367d:
  local_100 = 0;
  if ((-1 < (int)local_fc) && (local_108 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_108,(ulonglong)(local_fc & 0x7fffffff) << 4);
  }
  return param_2;
}



// FUNCTION 1450536e0 FUN_1450536e0 body=333 status=ok
// SIG undefined FUN_1450536e0(void)

undefined8 FUN_1450536e0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_38;
  int local_2c;
  int local_20;
  
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
  uVar1 = *(undefined8 *)
           (lVar3 + (ulonglong)(*(uint *)((longlong)param_2 * 0x60 + lVar6) & 0x3fffffff) * 0xc);
  uVar2 = *(undefined8 *)
           (lVar3 + (ulonglong)(*(uint *)((longlong)param_3 * 0x60 + lVar6) & 0x3fffffff) * 0xc);
  local_2c = (int)uVar2;
  local_38 = (int)uVar1;
  iVar5 = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)
           (lVar3 + (ulonglong)
                    (*(uint *)((longlong)*(int *)((longlong)param_3 * 0x60 + 0xc + lVar6) * 0x60 +
                              lVar6) & 0x3fffffff) * 0xc);
  iVar8 = (int)((ulonglong)uVar1 >> 0x20);
  iVar4 = iVar5 - iVar8;
  local_20 = (int)uVar2;
  iVar10 = (int)((ulonglong)uVar2 >> 0x20);
  lVar6 = (longlong)(iVar10 - iVar8) * (longlong)(local_2c - local_38) -
          (longlong)(local_20 - local_38) * (longlong)iVar4;
  uVar9 = (uint)(lVar6 >> 0x3f) | (uint)(lVar6 != 0);
  if (0 < (int)uVar9) {
    return 1;
  }
  if (uVar9 == 0) {
    lVar6 = (longlong)(local_20 - local_2c) * (longlong)(local_2c - local_38) +
            (longlong)(iVar10 - iVar5) * (longlong)iVar4;
    bVar7 = 0;
    if (lVar6 != 0) {
      bVar7 = (byte)((ulonglong)lVar6 >> 0x3f) ^ 1;
    }
    if (bVar7 != 0) {
      return 1;
    }
  }
  return 0;
}


