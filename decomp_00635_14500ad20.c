// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14500ad20 FUN_14500ad20 body=247 status=ok
// SIG undefined FUN_14500ad20(void)

void FUN_14500ad20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
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
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14500ae20 FUN_14500ae20 body=290 status=ok
// SIG undefined FUN_14500ae20(void)

void FUN_14500ae20(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar6) {
    uVar4 = uVar6;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0x10;
  lVar1 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar2 = (undefined4 *)(lVar1 + 4);
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar2 + -1 != (undefined4 *)0x0) {
        puVar2[-1] = *puVar3;
        *puVar2 = puVar3[1];
        *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar3 + 2);
        *(undefined2 *)((longlong)puVar2 + 6) = *(undefined2 *)((longlong)puVar3 + 10);
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar3 + 3);
      }
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar4 * 0x10 + 0x10;
  uVar5 = uVar4;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar5 = uVar4 + 1;
    if (uVar6 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = lVar1;
  return;
}



// FUNCTION 14500af50 FUN_14500af50 body=296 status=ok
// SIG undefined FUN_14500af50(void)

ulonglong FUN_14500af50(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
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
  puVar2 = (undefined1 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_res8);
  puVar6 = (undefined1 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    puVar3 = puVar2;
    do {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar6 + 4);
        *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar6 + 8);
      }
      puVar3 = puVar3 + 0xc;
      puVar6 = puVar6 + 0xc;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar7 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0xc);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar7;
}



// FUNCTION 14500b080 FUN_14500b080 body=301 status=ok
// SIG undefined FUN_14500b080(void)

void FUN_14500b080(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar4 = param_3;
  if (param_3 < uVar6) {
    uVar4 = uVar6;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x10,&local_res8);
  puVar3 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar2 = (undefined4 *)(lVar1 + 4);
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar2 + -1 != (undefined4 *)0x0) {
        puVar2[-1] = *puVar3;
        *puVar2 = puVar3[1];
        *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(puVar3 + 2);
        *(undefined2 *)((longlong)puVar2 + 6) = *(undefined2 *)((longlong)puVar3 + 10);
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar3 + 3);
      }
      puVar2 = puVar2 + 4;
      puVar3 = puVar3 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar4 * 0x10 + 0x10;
  uVar5 = uVar4;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar5 = uVar4 + 1;
    if (uVar6 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 << 4);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 14500b1b0 FUN_14500b1b0 body=286 status=ok
// SIG undefined FUN_14500b1b0(void)

ulonglong FUN_14500b1b0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar7) {
    uVar4 = uVar7;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0xc;
  puVar2 = (undefined1 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar6 = (undefined1 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar7 = (ulonglong)*(uint *)(param_1 + 1);
    puVar3 = puVar2;
    do {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = *puVar6;
        *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar6 + 4);
        *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar6 + 8);
      }
      puVar3 = puVar3 + 0xc;
      puVar6 = puVar6 + 0xc;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar7 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar7;
}



// FUNCTION 14500b2d0 FUN_14500b2d0 body=247 status=ok
// SIG undefined FUN_14500b2d0(void)

void FUN_14500b2d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
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
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 14500b3d0 FUN_14500b3d0 body=463 status=ok
// SIG undefined FUN_14500b3d0(void)

ulonglong FUN_14500b3d0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  longlong *local_res10;
  undefined4 *local_res18;
  ulonglong local_res20;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = param_3;
  if (param_3 < uVar8 * 2) {
    uVar9 = uVar8 * 2;
  }
  local_res10 = param_2;
  local_res20 = uVar8;
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x28,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar5 = (undefined4 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  local_res18 = puVar5;
  if (0 < (int)uVar1) {
    puVar7 = puVar5 + 7;
    uVar8 = (ulonglong)uVar1;
    puVar4 = (undefined4 *)(lVar3 + 0x1c);
    do {
      if (puVar4 + -7 != (undefined4 *)0x0) {
        puVar4[-7] = *puVar5;
        puVar4[-5] = puVar7[-5];
        *(undefined1 *)(puVar4 + -4) = *(undefined1 *)(puVar7 + -4);
        *(undefined1 *)((longlong)puVar4 + -0xf) = *(undefined1 *)((longlong)puVar7 + -0xf);
        *(undefined8 *)(puVar4 + -3) = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        FUN_14382139c(puVar7 + -3);
        *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar7 + -3);
        puVar4[-1] = puVar7[-1];
        *puVar4 = *puVar7;
        *(undefined8 *)(puVar7 + -3) = 0;
        *(undefined8 *)(puVar7 + -1) = 0;
        puVar4[1] = puVar7[1];
      }
      puVar4 = puVar4 + 10;
      puVar5 = puVar5 + 10;
      puVar7 = puVar7 + 10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar5 = local_res18 + 4;
    do {
      FUN_144bf90d0(puVar5);
      puVar5 = puVar5 + 10;
      uVar6 = uVar6 - 1;
      uVar8 = local_res20;
      param_2 = local_res10;
    } while (uVar6 != 0);
  }
  uVar6 = uVar9 * 0x28 + 0x28;
  uVar10 = uVar9;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar10 = uVar9 + 1;
    if (uVar6 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x28;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      uVar6 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar2,0);
      uVar10 = uVar10 + uVar9 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar6 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0x28);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar6;
}



// FUNCTION 14500b5a0 FUN_14500b5a0 body=516 status=ok
// SIG undefined FUN_14500b5a0(void)

ulonglong FUN_14500b5a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res18;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar7 * 2;
  uVar10 = param_3;
  if (param_3 < uVar8) {
    uVar10 = uVar8;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0x18);
  piVar5 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = piVar5 + 5;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar3 + 0x14);
    uVar8 = (ulonglong)uVar1;
    piVar9 = piVar4;
    do {
      if (piVar6 + -5 != (int *)0x0) {
        piVar6[-5] = *piVar5;
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        FUN_144c998e0(piVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar9 + -3);
        piVar6[-1] = piVar9[-1];
        *piVar6 = *piVar9;
        piVar9[-3] = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        piVar9[0] = 0;
      }
      piVar6 = piVar6 + 6;
      piVar5 = piVar5 + 6;
      piVar9 = piVar9 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)uVar1;
    do {
      piVar4[-1] = 0;
      if ((-1 < *piVar4) && (*(longlong *)(piVar4 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar4 = -0x80000000;
      piVar4[-3] = 0;
      piVar4[-2] = 0;
      piVar4 = piVar4 + 6;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar10 * 0x18 + 0x18;
  uVar11 = uVar10;
  if (uVar8 <= local_res18) {
    uVar11 = uVar10 + 1;
    if (uVar8 <= local_res18 - 0x18) {
      uVar10 = (local_res18 - 0x18) + uVar10 * -0x18;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar11 = uVar11 + uVar10 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 0x18);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar11;
  return uVar8;
}



// FUNCTION 14500b7b0 FUN_14500b7b0 body=21 status=ok
// SIG undefined FUN_14500b7b0(void)

undefined4 * FUN_14500b7b0(undefined4 *param_1)

{
  *param_1 = 0x3a83126f;
  param_1[1] = 0x40a00000;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}



// FUNCTION 14500b7d0 FUN_14500b7d0 body=107 status=ok
// SIG undefined FUN_14500b7d0(void)

void FUN_14500b7d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x10),
               (ulonglong)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) << 2);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14500b840 FUN_14500b840 body=305 status=ok
// SIG undefined FUN_14500b840(void)

undefined8 * FUN_14500b840(undefined8 *param_1,longlong param_2,int *param_3)

{
  undefined8 uVar1;
  int local_res8 [2];
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[3] = param_2;
  *param_1 = hkaiNavMeshInstanceCutter::vftable;
  *(int *)(param_1 + 4) = *param_3;
  FUN_145005280(param_1 + 5);
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[0x19] = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[0x1d] = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  local_res8[0] = *param_3;
  FUN_145005330(param_1 + 5,local_res8,
                *(undefined8 *)
                 (*(longlong *)
                   (*(longlong *)((longlong)local_res8[0] * 0x120 + *(longlong *)(param_2 + 0x38)) +
                   0x20) + 0x68));
  return param_1;
}



// FUNCTION 14500b980 FUN_14500b980 body=301 status=ok
// SIG undefined FUN_14500b980(void)

void FUN_14500b980(undefined8 *param_1)

{
  *param_1 = hkaiNavMeshInstanceCutter::vftable;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1f],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x104) & 0x7fffffff) << 5);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80000000;
  FUN_144c90d90(param_1 + 0x1b);
  FUN_144c90d90(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x15],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xb4) & 0x7fffffff) << 2);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x13],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xa4) & 0x7fffffff) << 2);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  FUN_1450052f0(param_1 + 5);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 14500bab0 FUN_14500bab0 body=5 status=ok
// SIG undefined FUN_14500bab0(void)

void FUN_14500bab0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 14500bac0 FUN_14500bac0 body=444 status=ok
// SIG undefined FUN_14500bac0(void)

void FUN_14500bac0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_38 = *(longlong *)(param_1 + 0xa8);
  lVar2 = *(longlong *)
           ((longlong)*(int *)(param_1 + 0x20) * 0x120 +
           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  lStack_30 = local_38 + (longlong)*(int *)(param_1 + 0xb0) * 4;
  local_48 = *(longlong *)(param_1 + 0x98);
  lStack_40 = local_48 + (longlong)*(int *)(param_1 + 0xa0) * 4;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_145005770(param_1 + 0x28,&local_18,&local_28,&local_48,&local_38,param_4);
  pcVar4 = (char *)*param_4;
  pcVar1 = pcVar4 + (longlong)*(int *)(param_4 + 1) * 0xc;
  for (; pcVar4 != pcVar1; pcVar4 = pcVar4 + 0xc) {
    if (*pcVar4 != '\x03') {
      lVar3 = *(longlong *)(lVar2 + 0x20);
      if ((*(int *)(lVar3 + 0x108) != 0) &&
         ((*(byte *)((longlong)*(int *)(pcVar4 + 4) + *(longlong *)(lVar3 + 0x100)) & 4) != 0)) {
        FUN_144fbaf90(param_1 + 0xd8,&local_18);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xa4)) && (*(longlong *)(param_1 + 0x98) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x98),
               (ulonglong)(*(uint *)(param_1 + 0xa4) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xa8),
               (ulonglong)(*(uint *)(param_1 + 0xb4) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  return;
}



// FUNCTION 14500bc80 FUN_14500bc80 body=2202 status=ok
// SIG undefined FUN_14500bc80(void)

void FUN_14500bc80(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  void *pvVar13;
  int *piVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  undefined8 *local_res18;
  ulonglong in_stack_fffffffffffffed8;
  char local_118 [8];
  char *local_110;
  char *local_108 [2];
  char *local_f8;
  char *pcStack_f0;
  int local_e8;
  int local_e4 [3];
  char *local_d8;
  char *pcStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  int local_b8 [4];
  undefined8 local_a8;
  char *pcStack_a0;
  int *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_68 [48];
  
  pcVar15 = *(char **)((longlong)*(int *)(param_1 + 0x20) * 0x120 +
                      *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  local_res18 = param_3;
  local_110 = pcVar15;
  if (pcVar15[0x30] == '\x01') {
    local_90 = *(longlong *)(pcVar15 + 0x20);
  }
  else {
    local_90 = FUN_147e4bb26(pcVar15 + 0x20);
  }
  FUN_144be90e0(0x2f968a11);
  pcVar16 = (char *)(ulonglong)_tls_index;
  local_e8 = *(int *)(DAT_14c7fcf28 + 0x18);
  if (0 < local_e8) {
    FUN_144d3efe0(&local_f8,*(undefined4 *)(DAT_14c7fcf28 + 0x20),
                  *(undefined4 *)(*(longlong *)(pcVar15 + 0x20) + 0x180),0);
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)pcVar16 * 8);
    if (*(char *)(lVar8 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = *(longlong *)(lVar8 + 0xf0);
    if (lVar5 == 0) {
      if (*(char *)(lVar8 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = FUN_144b3f4a0();
      *(longlong *)(lVar8 + 0xf0) = lVar5;
    }
    local_108[0] = (char *)0x0;
    if (*(longlong *)(lVar5 + 0x3e0) != 0) {
      local_c8 = &DAT_149c1e0c8;
      puStack_c0 = &DAT_149c1e0cb;
      FUN_144be9f50(*(longlong *)(lVar5 + 0x3e0),&local_c8,4,local_108);
      if (local_108[0] != (char *)0x0) {
        *(undefined4 *)local_108[0] = local_f8._0_4_;
      }
    }
  }
  pcVar19 = (char *)*param_3;
  local_108[0] = pcVar19 + (longlong)*(int *)(param_3 + 1) * 0xc;
  if (pcVar19 != local_108[0]) {
    local_d8 = "TtupdateOneFace";
    pcStack_d0 = "";
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)pcVar16 * 8);
    pcVar15 = pcVar19 + 4;
    do {
      pvVar13 = ThreadLocalStoragePointer;
      if (*(char *)(lVar8 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = *(longlong *)(lVar8 + 0xf0);
      if (lVar5 == 0) {
        lVar9 = *(longlong *)((longlong)pvVar13 + (longlong)pcVar16 * 8);
        if (*(char *)(lVar9 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = FUN_144b3f4a0();
        *(longlong *)(lVar9 + 0xf0) = lVar5;
        pvVar13 = ThreadLocalStoragePointer;
      }
      lVar5 = *(longlong *)(lVar5 + 0x3e0);
      if (lVar5 != 0) {
        local_f8 = "TtupdateOneFace";
        pcStack_f0 = "";
        FUN_144b3f370(lVar5,&local_f8);
      }
      local_f8 = (char *)CONCAT44(local_f8._4_4_,*(undefined4 *)pcVar15);
      FUN_14500ddc0(param_1,local_110,&local_f8);
      FUN_144be90e0(0x6610a465);
      cVar2 = pcVar15[-4];
      if (cVar2 == '\0') {
        FUN_14500de60(param_1,local_110,(longlong)*(int *)(pcVar15 + 4) * 0x58 + *param_2);
      }
      else if (cVar2 == '\x01') {
        local_f8 = (char *)CONCAT44(local_f8._4_4_,*(undefined4 *)pcVar15);
        FUN_14500f4c0(param_1,local_110,&local_f8);
      }
      else if (cVar2 == '\x02') {
        local_f8 = (char *)CONCAT44(local_f8._4_4_,*(undefined4 *)pcVar15);
        in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffffff00000000;
        FUN_14500ec10(param_1,&local_98,local_110,&local_f8,in_stack_fffffffffffffed8);
      }
      FUN_144fbaf90(param_1 + 0xb8,local_68,pcVar15);
      FUN_144be90e0(0xf07550c9);
      if (0 < local_e8) {
        local_f8 = (char *)CONCAT44(local_f8._4_4_,*(undefined4 *)pcVar15);
        FUN_144c52c90(local_110,&local_f8,&local_a8);
        lVar9 = *(longlong *)((longlong)pvVar13 + (longlong)pcVar16 * 8);
        if (*(char *)(lVar9 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar6 = *(longlong *)(lVar9 + 0xf0);
        if (lVar6 == 0) {
          if (*(char *)(lVar9 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar6 = FUN_144b3f4a0();
          *(longlong *)(lVar8 + 0xf0) = lVar6;
        }
        local_f8 = (char *)0x0;
        if (*(longlong *)(lVar6 + 0x3e0) != 0) {
          local_d8 = "B\b\x10";
          pcStack_d0 = "";
          local_88 = 0x49c1e0c4;
          uStack_84 = 1;
          uStack_80 = 0x49c1e0c7;
          uStack_7c = 1;
          FUN_144be9f50(*(longlong *)(lVar6 + 0x3e0),&local_88,0x10,&local_f8);
          if (local_f8 != (char *)0x0) {
            *(undefined4 *)local_f8 = (undefined4)local_a8;
            *(undefined4 *)(local_f8 + 4) = local_a8._4_4_;
            *(undefined4 *)(local_f8 + 8) = pcStack_a0._0_4_;
            local_f8[0xc] = '\0';
            local_f8[0xd] = '\0';
            local_f8[0xe] = -0x80;
            local_f8[0xf] = '?';
          }
        }
      }
      if (lVar5 != 0) {
        local_c8 = &DAT_149981764;
        puStack_c0 = &DAT_149981766;
        local_88 = 0x49981764;
        uStack_84 = 1;
        uStack_80 = 0x49981766;
        uStack_7c = 1;
        FUN_144b3f260(lVar5,&local_88);
      }
      pcVar19 = pcVar15 + 8;
      pcVar15 = pcVar15 + 0xc;
    } while (pcVar19 != local_108[0]);
    pcVar16 = (char *)(ulonglong)_tls_index;
    pcVar15 = local_110;
    param_3 = local_res18;
  }
  piVar14 = (int *)param_3[2];
  local_98 = piVar14 + (longlong)*(int *)(param_3 + 3) * 4;
  if (piVar14 != local_98) {
    local_d8 = "TtupdateOneEdge";
    pcStack_d0 = "";
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)pcVar16 * 8);
    local_108[0] = pcVar16;
    do {
      pcVar16 = local_108[0];
      if (*(char *)(lVar8 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar5 = *(longlong *)(lVar8 + 0xf0);
      if (lVar5 == 0) {
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)pcVar16 * 8);
        if (*(char *)(lVar9 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar5 = FUN_144b3f4a0();
        *(longlong *)(lVar9 + 0xf0) = lVar5;
        pcVar16 = local_108[0];
      }
      lVar5 = *(longlong *)(lVar5 + 0x3e0);
      if (lVar5 != 0) {
        local_a8 = "TtupdateOneEdge";
        pcStack_a0 = "";
        FUN_144b3f370(lVar5,&local_a8);
      }
      cVar2 = (char)piVar14[3];
      if (cVar2 == '\0') {
        FUN_14500f700(param_1,pcVar15,piVar14);
      }
      else if (cVar2 == '\x01') {
        FUN_14500f880(param_1);
      }
      else if (cVar2 == '\x02') {
        FUN_14500fb90(param_1,pcVar15,piVar14,param_4);
      }
      else {
        FUN_14500ff40();
      }
      FUN_144be90e0(0xcd5cf5d7);
      if (0 < local_e8) {
        lVar9 = *(longlong *)(pcVar15 + 0x20);
        iVar17 = *piVar14;
        lVar6 = (longlong)iVar17;
        if (iVar17 < *(int *)(lVar9 + 0x20)) {
          if (*(int *)(lVar9 + 0x98) != 0) {
            iVar17 = *(int *)(*(longlong *)(lVar9 + 0x90) + lVar6 * 4);
          }
          if (iVar17 == -1) {
            piVar7 = (int *)(*(longlong *)(lVar9 + 0x18) + lVar6 * 0xc);
          }
          else {
            piVar7 = (int *)(*(longlong *)(lVar9 + 0xb0) + (longlong)iVar17 * 0xc);
          }
        }
        else {
          piVar7 = (int *)(*(longlong *)(lVar9 + 0xd0) +
                          (longlong)(iVar17 - *(int *)(lVar9 + 0x20)) * 0xc);
        }
        if (0 < *(short *)((longlong)piVar7 + 10)) {
          piVar7 = piVar7 + 1;
        }
        local_f8 = (char *)CONCAT44(local_f8._4_4_,(uint)*(ushort *)(piVar14 + 2) + *piVar7);
        FUN_144c52d20(pcVar15,&local_f8,&local_78);
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)pcVar16 * 8);
        if (*(char *)(lVar9 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar6 = *(longlong *)(lVar9 + 0xf0);
        if (lVar6 == 0) {
          if (*(char *)(lVar9 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar6 = FUN_144b3f4a0();
          *(longlong *)(lVar8 + 0xf0) = lVar6;
        }
        local_110 = (char *)0x0;
        if (*(longlong *)(lVar6 + 0x3e0) != 0) {
          local_d8 = "B\b\x10";
          pcStack_d0 = "";
          local_a8 = "B\b\x10";
          pcStack_a0 = "";
          FUN_144be9f50(*(longlong *)(lVar6 + 0x3e0),&local_a8,0x10,&local_110);
          if (local_110 != (char *)0x0) {
            *(undefined4 *)local_110 = local_78;
            *(undefined4 *)(local_110 + 4) = uStack_74;
            *(undefined4 *)(local_110 + 8) = uStack_70;
            local_110[0xc] = '\0';
            local_110[0xd] = '\0';
            local_110[0xe] = -0x80;
            local_110[0xf] = '?';
          }
        }
      }
      if (lVar5 != 0) {
        local_c8 = &DAT_149981764;
        puStack_c0 = &DAT_149981766;
        local_a8 = "Et";
        pcStack_a0 = "";
        FUN_144b3f260(lVar5,&local_a8);
      }
      piVar14 = piVar14 + 4;
      param_3 = local_res18;
    } while (piVar14 != local_98);
  }
  pcVar19 = (char *)*param_3;
  pcVar16 = pcVar19 + (longlong)*(int *)(param_3 + 1) * 0xc;
  local_110 = pcVar16;
  if (pcVar19 != pcVar16) {
    do {
      if (*pcVar19 == '\0') {
        local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,*(undefined4 *)(pcVar19 + 4));
        local_108[0] = pcVar19;
        FUN_144c42800(*(undefined8 *)(pcVar15 + 0x20),local_118,&local_res18,local_e4,local_b8);
        if ((local_118[0] != '\0') &&
           (iVar12 = local_b8[0] + -1, iVar17 = local_e4[0], local_e4[0] <= iVar12)) {
          do {
            lVar8 = *(longlong *)(pcVar15 + 0x20);
            if (iVar12 < *(int *)(lVar8 + 0x20)) {
              iVar18 = iVar12;
              if (*(int *)(lVar8 + 0x98) != 0) {
                iVar18 = *(int *)(*(longlong *)(lVar8 + 0x90) + (longlong)iVar12 * 4);
              }
              if (iVar18 == -1) {
                lVar5 = (longlong)iVar12 * 3;
                lVar8 = *(longlong *)(lVar8 + 0x18);
              }
              else {
                lVar5 = (longlong)iVar18 * 3;
                lVar8 = *(longlong *)(lVar8 + 0xb0);
              }
            }
            else {
              lVar5 = (longlong)(iVar12 - *(int *)(lVar8 + 0x20)) * 3;
              lVar8 = *(longlong *)(lVar8 + 0xd0);
            }
            if (*(short *)(lVar8 + 8 + lVar5 * 4) == 2) {
              iVar17 = *(int *)(lVar8 + lVar5 * 4);
              iVar18 = *(int *)(local_90 + 0x30);
              lVar5 = *(longlong *)(local_90 + 0xe0);
              lVar9 = (longlong)(iVar17 - iVar18);
              lVar6 = (longlong)((iVar17 + 1) - iVar18);
              uVar4 = *(uint *)(lVar5 + 8 + lVar9 * 0x14);
              lVar8 = lVar5 + lVar6 * 0x14;
              if (uVar4 == 0xffffffff) {
LAB_14500c478:
                uVar4 = *(uint *)(lVar8 + 8);
                if (uVar4 != 0xffffffff) {
LAB_14500c480:
                  lVar10 = (longlong)(int)((uVar4 & 0x3fffff) - iVar18);
                  pbVar1 = (byte *)(lVar5 + 0x10 + lVar10 * 0x14);
                  *pbVar1 = *pbVar1 & 0xbf;
                  *(undefined8 *)(lVar5 + 8 + lVar10 * 0x14) = 0xffffffffffffffff;
                }
              }
              else {
                uVar3 = *(uint *)(lVar8 + 8);
                if (uVar3 == 0xffffffff) {
                  if (uVar4 == 0xffffffff) goto LAB_14500c478;
                  goto LAB_14500c480;
                }
                lVar10 = (longlong)(int)((uVar4 & 0x3fffff) - iVar18);
                lVar11 = (longlong)(int)((uVar3 & 0x3fffff) - iVar18);
                *(uint *)(lVar5 + 8 + lVar10 * 0x14) = uVar3;
                *(undefined4 *)(lVar5 + 0xc + lVar10 * 0x14) =
                     *(undefined4 *)(lVar5 + 0xc + lVar6 * 0x14);
                *(undefined4 *)(lVar5 + 8 + lVar11 * 0x14) =
                     *(undefined4 *)(lVar5 + 8 + lVar9 * 0x14);
                *(undefined4 *)(lVar5 + 0xc + lVar11 * 0x14) =
                     *(undefined4 *)(lVar5 + 0xc + lVar9 * 0x14);
              }
              local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,iVar12);
              FUN_144c42300(local_90,&local_res18,*(undefined8 *)(param_1 + 0x18));
              pbVar1 = (byte *)(lVar5 + 0x10 + lVar9 * 0x14);
              *pbVar1 = *pbVar1 & 0xbf;
              *(undefined8 *)(lVar5 + 8 + lVar9 * 0x14) = 0xffffffffffffffff;
              pbVar1 = (byte *)(lVar5 + 0x10 + lVar6 * 0x14);
              *pbVar1 = *pbVar1 & 0xbf;
              *(undefined4 *)(lVar5 + 0xc + lVar6 * 0x14) = 0xffffffff;
              *(undefined4 *)(lVar8 + 8) = 0xffffffff;
              iVar17 = local_e4[0];
            }
            iVar12 = iVar12 + -1;
            pcVar16 = local_110;
            pcVar19 = local_108[0];
          } while (iVar17 <= iVar12);
        }
      }
      pcVar19 = pcVar19 + 0xc;
    } while (pcVar19 != pcVar16);
  }
  return;
}



// FUNCTION 14500c520 FUN_14500c520 body=2405 status=ok
// SIG undefined FUN_14500c520(void)

void FUN_14500c520(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  longlong **pplVar20;
  uint uVar21;
  int **ppiVar22;
  longlong *plVar23;
  int iVar24;
  longlong ***ppplVar25;
  longlong lVar26;
  longlong **pplVar27;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  int ****in_stack_fffffffffffffe10;
  undefined4 uVar28;
  int local_1d8;
  char local_1d4;
  char local_1d3;
  char local_1d2;
  undefined1 local_1d1;
  undefined1 local_1d0;
  undefined1 local_1cf [7];
  longlong **local_1c8;
  longlong **pplStack_1c0;
  longlong **local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  longlong **local_1a8;
  int local_1a0 [5];
  undefined4 local_18c;
  longlong local_188;
  longlong local_180 [3];
  int local_168 [2];
  longlong local_160;
  int local_158 [2];
  int **local_150;
  longlong local_148;
  int ***local_138;
  undefined8 uStack_130;
  undefined2 local_128 [2];
  undefined4 local_124;
  longlong local_120;
  longlong **local_118;
  longlong **pplStack_110;
  longlong **local_108;
  longlong **pplStack_100;
  longlong **local_f8;
  longlong **pplStack_f0;
  longlong local_e8 [4];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88 [2];
  undefined4 local_78 [4];
  undefined1 local_68 [40];
  
  local_180[0] = *(longlong *)
                  ((longlong)*(int *)(param_1 + 0x20) * 0x120 +
                  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  local_180[1] = *(longlong *)
                  ((longlong)*(int *)(param_2 + 0x20) * 0x120 +
                  *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x38));
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_e8[0] = param_1;
  local_e8[1] = param_2;
  if (*(char *)(local_180[0] + 0x30) == '\x01') {
    lVar26 = *(longlong *)(local_180[0] + 0x20);
  }
  else {
    lVar26 = FUN_147e4bb26();
  }
  local_e8[2] = lVar26;
  if (*(char *)(local_180[1] + 0x30) == '\x01') {
    lVar7 = *(longlong *)(local_180[1] + 0x20);
  }
  else {
    lVar7 = FUN_147e4bb26(local_180[1] + 0x20);
  }
  local_120 = param_2 + 0xb8;
  local_180[2] = param_1 + 0xb8;
  lVar6 = *(longlong *)(param_3 + 0x20);
  local_e8[3] = lVar7;
  if (lVar6 != 0) {
    plVar14 = *(longlong **)(lVar6 + 0x20);
    iVar17 = *(int *)(lVar6 + 0x28);
    if (plVar14 != plVar14 + (longlong)iVar17 * 2) {
      local_148 = param_1 + 0xd8;
      ppiVar22 = (int **)(param_2 + 0xd8);
      plVar19 = plVar14 + 1;
      local_150 = ppiVar22;
      do {
        lVar6 = FUN_144c5c100(local_148,plVar19 + -1);
        if (lVar6 == 0) {
          iVar15 = -1;
        }
        else {
          iVar15 = *(int *)(lVar6 + 4);
        }
        lVar6 = FUN_144c5c100(ppiVar22,plVar19);
        if (lVar6 == 0) {
          bVar5 = 0xff;
        }
        else {
          bVar5 = (byte)((uint)*(undefined4 *)(lVar6 + 4) >> 0x18);
        }
        bVar5 = bVar5 >> 7 ^ 1;
        if (iVar15 < 0) {
          if (bVar5 != 0) {
            puVar13 = local_c8;
            lVar6 = local_180[2];
            plVar23 = plVar19 + -1;
LAB_14500c6a9:
            FUN_144fbaf90(lVar6,puVar13,plVar23);
            goto LAB_14500c6b0;
          }
        }
        else {
          if (bVar5 == 0) {
            puVar13 = local_b8;
            lVar6 = local_120;
            plVar23 = plVar19;
            goto LAB_14500c6a9;
          }
LAB_14500c6b0:
          lVar6 = local_180[0];
          local_1ac = 0x80000000;
          local_1b8 = (longlong **)0x0;
          local_1b0 = 0;
          local_1a8 = (longlong **)0x0;
          local_1a0[0] = 0;
          local_1d8 = (int)plVar19[-1];
          local_1a0[1] = 0x80000000;
          FUN_144c42800(*(undefined8 *)(local_180[0] + 0x20),&local_1d4,&local_1d8,local_168,
                        local_1a0 + 2);
          if ((local_1d4 != '\0') && (iVar15 = local_168[0], local_168[0] != local_1a0[2])) {
            do {
              local_1d8 = iVar15;
              FUN_144c3f140(lVar6,&local_1d8);
              iVar15 = iVar15 + 1;
            } while (iVar15 != local_1a0[2]);
          }
          lVar6 = local_180[1];
          local_1d8 = (int)*plVar19;
          FUN_144c42800(*(undefined8 *)(local_180[1] + 0x20),&local_1d3,&local_1d8,&local_160,
                        local_1a0 + 3);
          uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
          if ((local_1d3 != '\0') && (iVar15 = (int)local_160, (int)local_160 != local_1a0[3])) {
            do {
              local_1d8 = iVar15;
              FUN_144c3f140(lVar6,&local_1d8);
              uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
              iVar15 = iVar15 + 1;
            } while (iVar15 != local_1a0[3]);
          }
          iVar15 = (int)plVar19[-1];
          if (iVar15 < *(int *)(lVar26 + 0x20)) {
            iVar24 = iVar15;
            if (*(int *)(lVar26 + 0x98) != 0) {
              iVar24 = *(int *)(*(longlong *)(lVar26 + 0x90) + (longlong)iVar15 * 4);
            }
            if (iVar24 == -1) {
              lVar6 = *(longlong *)(lVar26 + 0x18);
              lVar8 = (longlong)iVar15 * 3;
            }
            else {
              lVar8 = (longlong)iVar24 * 3;
              lVar6 = *(longlong *)(lVar26 + 0xb0);
            }
          }
          else {
            lVar8 = (longlong)(iVar15 - *(int *)(lVar26 + 0x20)) * 3;
            lVar6 = *(longlong *)(lVar26 + 0xd0);
          }
          piVar1 = (int *)(lVar6 + lVar8 * 4);
          uVar21 = *(int *)((longlong)plVar19 + -4) - *piVar1;
          if ((uint)(int)(short)piVar1[2] <= uVar21) {
            uVar21 = (int)(short)piVar1[2] + (*(int *)((longlong)plVar19 + -4) - piVar1[1]);
          }
          iVar24 = (int)*plVar19;
          lVar6 = (longlong)iVar24;
          if (iVar24 < *(int *)(lVar7 + 0x20)) {
            if (*(int *)(lVar7 + 0x98) != 0) {
              iVar24 = *(int *)(*(longlong *)(lVar7 + 0x90) + lVar6 * 4);
            }
            if (iVar24 == -1) {
              lVar8 = *(longlong *)(lVar7 + 0x18);
              lVar6 = lVar6 * 3;
            }
            else {
              lVar6 = (longlong)iVar24 * 3;
              lVar8 = *(longlong *)(lVar7 + 0xb0);
            }
          }
          else {
            lVar6 = (longlong)(iVar24 - *(int *)(lVar7 + 0x20)) * 3;
            lVar8 = *(longlong *)(lVar7 + 0xd0);
          }
          piVar1 = (int *)(lVar8 + lVar6 * 4);
          uVar16 = *(int *)((longlong)plVar19 + 4) - *piVar1;
          if ((uint)(int)(short)piVar1[2] <= uVar16) {
            uVar16 = (int)(short)piVar1[2] + (*(int *)((longlong)plVar19 + 4) - piVar1[1]);
          }
          local_1c8._0_4_ = iVar15;
          local_1d8._0_2_ = (short)uVar21;
          FUN_145010350(param_1,&local_1d1,local_180[0],&local_1c8,&local_1d8);
          local_1c8._0_4_ = (int)*plVar19;
          local_1d8._0_2_ = (short)uVar16;
          FUN_145010350(local_res10,&local_1d0,local_180[1],&local_1c8,&local_1d8);
          local_1c8._0_4_ = (int)plVar19[-1];
          local_1d8._0_2_ = (short)uVar21;
          FUN_145011060(param_1,local_180[0],&local_1c8,&local_1d8,&local_1b8,CONCAT44(uVar28,1));
          local_1c8 = (longlong **)CONCAT44(local_1c8._4_4_,(int)*plVar19);
          local_1d8 = CONCAT22(local_1d8._2_2_,(short)uVar16);
          FUN_145011060(local_res10,local_180[1],&local_1c8,&local_1d8,&local_1a8,1);
          local_118 = local_1a8;
          pplStack_1c0 = local_1a8 + local_1a0[0];
          local_108 = local_1b8;
          local_1c8 = local_1a8;
          pplStack_100 = local_1b8 + local_1b0;
          local_188 = *plVar19;
          local_138 = (int ***)plVar19[-1];
          in_stack_fffffffffffffe10 = (int ****)&local_f8;
          local_f8 = local_1b8;
          pplStack_110 = pplStack_1c0;
          pplStack_f0 = pplStack_100;
          FUN_145010700(*(undefined8 *)(param_1 + 0x18),local_180[0],local_180[1],&local_138,
                        &local_188,in_stack_fffffffffffffe10,&local_1c8,local_res20);
          FUN_144be90e0(0x40a15479);
          lVar6 = 2;
          puVar18 = &local_18c;
          do {
            lVar6 = lVar6 + -1;
            puVar18[-5] = 0;
            if ((-1 < (int)puVar18[-4]) && (*(longlong *)(puVar18 + -7) != 0)) {
              (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                        (&PTR_vftable_14c6e47c0,*(longlong *)(puVar18 + -7),
                         (ulonglong)(puVar18[-4] & 0x7fffffff) << 3);
            }
            *(undefined8 *)(puVar18 + -7) = 0;
            puVar18[-4] = 0x80000000;
            puVar18 = puVar18 + -4;
            ppiVar22 = local_150;
          } while (lVar6 != 0);
        }
        plVar23 = plVar19 + 1;
        param_2 = local_res10;
        plVar19 = plVar19 + 2;
        param_3 = local_res18;
      } while (plVar23 != plVar14 + (longlong)iVar17 * 2);
    }
  }
  pplVar20 = *(longlong ***)(param_3 + 0x28);
  local_150 = (int **)((longlong)pplVar20 + (longlong)*(int *)(param_3 + 0x30) * 0xc);
  if (pplVar20 != (longlong **)local_150) {
    param_2 = param_2 + 0xd8;
    local_160 = param_1 + 0xd8;
    local_148 = param_2;
    do {
      lVar26 = local_180[2];
      local_1c8 = pplVar20;
      lVar7 = FUN_144c5c100(local_160,pplVar20);
      if (lVar7 == 0) {
        iVar17 = -1;
      }
      else {
        iVar17 = *(int *)(lVar7 + 4);
      }
      pplVar27 = (longlong **)((longlong)pplVar20 + 4);
      lVar7 = FUN_144c5c100(param_2,pplVar27);
      if (lVar7 == 0) {
        bVar5 = 0xff;
      }
      else {
        bVar5 = (byte)((uint)*(undefined4 *)(lVar7 + 4) >> 0x18);
      }
      bVar5 = bVar5 >> 7 ^ 1;
      if (iVar17 < 0) {
        if (bVar5 != 0) {
          puVar13 = local_a8;
          pplVar27 = pplVar20;
LAB_14500cafd:
          FUN_144fbaf90(lVar26,puVar13,pplVar27);
          goto LAB_14500cb10;
        }
      }
      else {
        if (bVar5 == 0) {
          puVar13 = local_98;
          lVar26 = local_120;
          goto LAB_14500cafd;
        }
LAB_14500cb10:
        lVar26 = 0;
        local_1ac = 0x80000000;
        ppplVar25 = &local_1b8;
        local_1b8 = (longlong **)0x0;
        local_1b0 = 0;
        puVar18 = local_78;
        local_1a8 = (longlong **)0x0;
        pplVar27 = pplVar20 + 1;
        local_1a0[0] = 0;
        local_138 = (int ***)ppplVar25;
        local_1a0[1] = 0x80000000;
        local_188 = 2;
        do {
          lVar7 = *(longlong *)((longlong)local_180 + lVar26);
          local_res10 = CONCAT44(local_res10._4_4_,*(int *)pplVar20);
          local_138 = (int ***)ppplVar25;
          FUN_144c42800(*(undefined8 *)(lVar7 + 0x20),&local_1d2,&local_res10,local_158,
                        local_1a0 + 4);
          uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
          if ((local_1d2 != '\0') && (iVar17 = local_158[0], local_158[0] != local_1a0[4])) {
            do {
              local_res10 = CONCAT44(local_res10._4_4_,iVar17);
              FUN_144c3f140(lVar7,&local_res10);
              uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffe10 >> 0x20);
              iVar17 = iVar17 + 1;
            } while (iVar17 != local_1a0[4]);
          }
          uVar2 = *(undefined8 *)((longlong)local_e8 + lVar26);
          local_res10._0_2_ = *(short *)pplVar27;
          local_res18._0_4_ = *(int *)pplVar20;
          FUN_145010350(uVar2,local_1cf,lVar7,&local_res18,&local_res10);
          local_res10 = CONCAT62(local_res10._2_6_,*(short *)pplVar27);
          in_stack_fffffffffffffe10 = (int ****)CONCAT44(uVar28,1);
          local_res18 = CONCAT44(local_res18._4_4_,*(int *)pplVar20);
          FUN_145011060(uVar2,lVar7,&local_res18,&local_res10,ppplVar25,in_stack_fffffffffffffe10);
          lVar8 = (longlong)*(int *)pplVar20;
          local_res10 = CONCAT44(local_res10._4_4_,*(int *)pplVar20);
          local_res18 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x18);
          lVar6 = *(longlong *)((longlong)local_e8 + lVar26 + 0x10);
          if ((*(int *)(lVar6 + 0x108) == 0) ||
             ((*(byte *)(lVar8 + *(longlong *)(lVar6 + 0x100)) & 8) == 0)) {
            plVar14 = (longlong *)0x0;
          }
          else {
            lVar9 = FUN_144c441c0((longlong *)(lVar6 + 0x1c0),&local_res10);
            if (lVar9 == 0) {
              iVar17 = -1;
            }
            else {
              iVar17 = *(int *)(lVar9 + 4);
            }
            plVar14 = (longlong *)(*(longlong *)(lVar6 + 0x1c0) + 8 + (longlong)iVar17 * 0x38);
          }
          lVar6 = *plVar14;
          lVar9 = *(longlong *)(lVar7 + 0x20);
          uVar10 = (ulonglong)
                   (ushort)((*(short *)pplVar27 - *(short *)(local_res18 + 8 + lVar8 * 0xc)) -
                           *(short *)(local_res18 + 10 + lVar8 * 0xc));
          iVar17 = *(int *)(lVar6 + uVar10 * 0x14);
          if (iVar17 < *(int *)(lVar9 + 0x40)) {
            puVar11 = (undefined8 *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar9 + 0x38));
          }
          else {
            puVar11 = (undefined8 *)
                      ((longlong)(iVar17 - *(int *)(lVar9 + 0x40)) * 0x10 +
                      *(longlong *)(lVar9 + 0xf0));
          }
          uVar2 = puVar11[1];
          *(undefined8 *)(puVar18 + -4) = *puVar11;
          *(undefined8 *)(puVar18 + -2) = uVar2;
          lVar7 = *(longlong *)(lVar7 + 0x20);
          iVar17 = *(int *)(lVar6 + 4 + uVar10 * 0x14);
          if (iVar17 < *(int *)(lVar7 + 0x40)) {
            puVar12 = (undefined4 *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar7 + 0x38));
          }
          else {
            puVar12 = (undefined4 *)
                      ((longlong)(iVar17 - *(int *)(lVar7 + 0x40)) * 0x10 +
                      *(longlong *)(lVar7 + 0xf0));
          }
          pplVar27 = (longlong **)((longlong)pplVar27 + 2);
          uVar28 = puVar12[1];
          uVar3 = puVar12[2];
          uVar4 = puVar12[3];
          ppplVar25 = (longlong ***)(local_138 + 2);
          *puVar18 = *puVar12;
          puVar18[1] = uVar28;
          puVar18[2] = uVar3;
          puVar18[3] = uVar4;
          pplVar20 = (longlong **)((longlong)pplVar20 + 4);
          puVar18 = puVar18 + 8;
          local_138 = (int ***)ppplVar25;
          lVar26 = lVar26 + 8;
          local_188 = local_188 + -1;
        } while (local_188 != 0);
        local_124 = *(undefined4 *)(local_res20 + 0x18);
        local_108 = local_1a8;
        local_128[0] = 0;
        pplStack_100 = local_1a8 + local_1a0[0];
        local_118 = local_1b8;
        local_f8 = local_1a8;
        pplStack_110 = local_1b8 + local_1b0;
        in_stack_fffffffffffffe10 = &local_138;
        local_138 = (int ***)local_1b8;
        pplStack_f0 = pplStack_100;
        uStack_130 = (int ***)pplStack_110;
        FUN_1453312e0(*(undefined8 *)(param_1 + 0x18),local_180[0],local_180[1],local_88,local_68,
                      in_stack_fffffffffffffe10,&local_f8,local_128);
        lVar26 = 2;
        puVar18 = &local_18c;
        do {
          lVar26 = lVar26 + -1;
          puVar18[-5] = 0;
          if ((-1 < (int)puVar18[-4]) && (*(longlong *)(puVar18 + -7) != 0)) {
            (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,*(longlong *)(puVar18 + -7),
                       (ulonglong)(puVar18[-4] & 0x7fffffff) << 3);
          }
          *(undefined8 *)(puVar18 + -7) = 0;
          puVar18[-4] = 0x80000000;
          puVar18 = puVar18 + -4;
          param_2 = local_148;
          pplVar20 = local_1c8;
        } while (lVar26 != 0);
      }
      pplVar20 = (longlong **)((longlong)pplVar20 + 0xc);
    } while (pplVar20 != (longlong **)local_150);
  }
  return;
}



// FUNCTION 14500ce90 FUN_14500ce90 body=1556 status=ok
// SIG undefined FUN_14500ce90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14500ce90(longlong param_1,int *param_2,undefined8 *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int *piVar18;
  int *piVar19;
  byte bVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  int iVar25;
  longlong lVar26;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  float fVar33;
  float fVar34;
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  longlong local_res8;
  int *local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  undefined8 in_stack_fffffffffffffed8;
  char local_118 [4];
  int local_114;
  int local_110;
  int local_10c;
  int local_108 [2];
  longlong local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [168];
  
  uVar43 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  lVar26 = *(longlong *)
            ((longlong)*(int *)(param_1 + 0x20) * 0x120 +
            *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_100 = lVar26;
  if (*(char *)(lVar26 + 0x30) == '\x01') {
    lVar22 = *(longlong *)(lVar26 + 0x20);
  }
  else {
    lVar22 = FUN_147e4bb26(lVar26 + 0x20);
  }
  fVar7 = *(float *)(lVar26 + 0xc0);
  fVar8 = *(float *)(lVar26 + 0xc4);
  fVar9 = *(float *)(lVar26 + 200);
  iVar21 = *param_2;
  if ((*(int *)(lVar22 + 0x108) == 0) ||
     ((*(byte *)((longlong)iVar21 + *(longlong *)(lVar22 + 0x100)) & 1) == 0)) {
    local_res8._0_4_ = iVar21;
    FUN_14500f120(param_1,local_108,lVar26,&local_res8,CONCAT44(uVar43,1));
    local_res8 = CONCAT44(local_res8._4_4_,
                          ((int)*(short *)(*(longlong *)(lVar22 + 0xd0) + 10 +
                                          (longlong)local_108[0] * 0xc) - *(int *)(lVar22 + 0x30)) +
                          *(int *)(*(longlong *)(lVar22 + 0xd0) + 4 + (longlong)local_108[0] * 0xc)
                          + -1);
    FUN_144c51bd0(param_3,lVar22,&local_res8);
  }
  else {
    local_114 = iVar21;
    iVar21 = FUN_145006530(param_1 + 0x28,&local_114);
    if (iVar21 == 0) {
      iVar21 = *(int *)(*(longlong *)(lVar22 + 0x168) + (longlong)*param_2 * 4);
      if (iVar21 == -2) {
        iVar21 = -1;
      }
      else {
        iVar21 = iVar21 - *(int *)(lVar22 + 0x20);
      }
      local_res8 = CONCAT44(local_res8._4_4_,iVar21);
      FUN_145011340(param_1,local_108,lVar26,&local_res8,param_3);
    }
    else {
      lVar6 = *(longlong *)(lVar26 + 0x20);
      iVar21 = *(int *)(lVar6 + 0x40);
      iVar25 = *(int *)*param_3;
      if (iVar25 < iVar21) {
        pfVar24 = (float *)((longlong)iVar25 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar24 = (float *)((longlong)(iVar25 - iVar21) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      iVar25 = ((int *)*param_3)[1];
      fVar10 = *pfVar24;
      fVar11 = pfVar24[1];
      fVar12 = pfVar24[2];
      fVar13 = pfVar24[3];
      if (iVar25 < iVar21) {
        pfVar24 = (float *)((longlong)iVar25 * 0x10 + *(longlong *)(lVar6 + 0x38));
      }
      else {
        pfVar24 = (float *)((longlong)(iVar25 - iVar21) * 0x10 + *(longlong *)(lVar6 + 0xf0));
      }
      fVar50 = *pfVar24;
      fVar51 = pfVar24[1];
      fVar52 = pfVar24[2];
      fVar14 = pfVar24[3];
      local_114 = *param_2;
      fVar36 = fVar10 - fVar50;
      fVar38 = fVar11 - fVar51;
      fVar39 = fVar12 - fVar52;
      auVar47._4_4_ = local_res20;
      auVar47._0_4_ = local_res20;
      auVar47._8_4_ = local_res20;
      auVar47._12_4_ = local_res20;
      fVar36 = fVar36 * fVar36;
      fVar38 = fVar38 * fVar38;
      fVar39 = fVar39 * fVar39;
      auVar32._0_4_ = fVar38 + fVar36 + fVar39;
      auVar32._4_4_ = fVar38 + fVar36 + fVar39;
      auVar32._8_4_ = fVar38 + fVar36 + fVar39;
      auVar32._12_4_ = fVar38 + fVar36 + fVar39;
      auVar32 = sqrtps(auVar32,auVar32);
      auVar32 = divps(auVar47,auVar32);
      FUN_144c42800(lVar22,local_118,&local_114,&local_110,&local_10c);
      if (local_118[0] != '\0') {
        piVar1 = (int *)(lVar22 + 0x20);
        iVar25 = local_110 - *piVar1;
        iVar21 = local_10c - *piVar1;
        if (iVar25 != iVar21) {
          fVar50 = fVar50 - fVar10;
          fVar51 = fVar51 - fVar11;
          fVar52 = fVar52 - fVar12;
          fVar36 = _DAT_14c6daca0;
          uVar43 = uRam000000014c6daca4;
          uVar44 = uRam000000014c6daca8;
          uVar45 = uRam000000014c6dacac;
          fVar38 = fRam000000014c6dad9c;
          do {
            auVar47 = ZEXT816(0);
            auVar49._4_4_ = uVar43;
            auVar49._0_4_ = fVar36;
            auVar49._8_4_ = uVar44;
            auVar49._12_4_ = uVar45;
            piVar2 = (int *)(*(longlong *)(lVar22 + 0xe0) +
                            (longlong)
                            (*(int *)(*(longlong *)(lVar22 + 0xd0) + (longlong)iVar25 * 0xc) -
                            *(int *)(lVar22 + 0x30)) * 0x14);
            lVar6 = *(longlong *)(lVar26 + 0x20);
            iVar4 = *(int *)(lVar6 + 0x40);
            piVar3 = piVar2 + (longlong)
                              *(short *)(*(longlong *)(lVar22 + 0xd0) + 8 + (longlong)iVar25 * 0xc)
                              * 5;
            iVar5 = piVar3[-5];
            if (iVar5 < iVar4) {
              pfVar24 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar6 + 0x38));
            }
            else {
              pfVar24 = (float *)((longlong)(iVar5 - iVar4) * 0x10 + *(longlong *)(lVar6 + 0xf0));
            }
            piVar19 = piVar3 + -5;
            fVar39 = *pfVar24;
            fVar29 = pfVar24[1];
            fVar30 = pfVar24[2];
            while( true ) {
              piVar18 = piVar2;
              fVar46 = auVar47._0_4_;
              fVar48 = auVar49._0_4_;
              if (piVar18 == piVar3) break;
              iVar5 = *piVar18;
              if (iVar5 < iVar4) {
                pfVar24 = (float *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar6 + 0x38));
              }
              else {
                pfVar24 = (float *)((longlong)(iVar5 - iVar4) * 0x10 + *(longlong *)(lVar6 + 0xf0));
              }
              fVar15 = *pfVar24;
              fVar16 = pfVar24[1];
              fVar17 = pfVar24[2];
              fVar40 = (fVar16 - fVar29) * fVar7 - fVar8 * (fVar15 - fVar39);
              fVar41 = (fVar17 - fVar30) * fVar8 - fVar9 * (fVar16 - fVar29);
              fVar42 = (fVar15 - fVar39) * fVar9 - fVar7 * (fVar17 - fVar30);
              fVar35 = (0.0 - ((fVar16 + fVar29) * fVar42 + (fVar15 + fVar39) * fVar41 +
                              (fVar17 + fVar30) * fVar40)) * fVar38;
              fVar31 = fVar41 * fVar50;
              fVar33 = fVar42 * fVar51;
              fVar34 = fVar40 * fVar52;
              fVar37 = fVar33 + fVar31 + fVar34;
              fVar39 = fVar42 * fVar11 + fVar41 * fVar10;
              fVar29 = fVar41 * fVar10 + fVar42 * fVar11;
              fVar30 = fVar35 + fVar40 * fVar12;
              fVar35 = fVar40 * fVar12 + fVar35;
              fVar40 = fVar30 + fVar39;
              if (fVar37 == 0.0) {
                if (fVar40 == 0.0) {
                  if (((*(byte *)(piVar19 + 4) & 4) == 0) && (piVar19[3] <= *piVar1 + iVar25))
                  goto LAB_14500d34d;
                }
                else if (fVar40 < 0.0) goto LAB_14500d34d;
              }
              else {
                auVar27._0_4_ = 0.0 - fVar40;
                auVar27._4_4_ = 0.0 - (fVar35 + fVar29);
                auVar27._8_4_ = 0.0 - (fVar39 + fVar30);
                auVar27._12_4_ = 0.0 - (fVar29 + fVar35);
                auVar28._4_4_ = fVar33 + fVar31 + fVar34;
                auVar28._0_4_ = fVar37;
                auVar28._8_4_ = fVar33 + fVar31 + fVar34;
                auVar28._12_4_ = fVar33 + fVar31 + fVar34;
                auVar28 = divps(auVar27,auVar28);
                if (0.0 <= fVar37) {
                  if (fVar48 <= auVar28._0_4_) goto LAB_14500d34d;
                  auVar47 = maxps(auVar47,auVar28);
                }
                else {
                  if (auVar28._0_4_ <= fVar46) goto LAB_14500d34d;
                  auVar49 = minps(auVar49,auVar28);
                }
              }
              piVar2 = piVar18 + 5;
              piVar19 = piVar18;
              fVar39 = fVar15;
              fVar29 = fVar16;
              fVar30 = fVar17;
            }
            if (auVar32._0_4_ <= fVar48 - fVar46) {
              local_10c = iVar25;
              FUN_145011340(param_1,local_108,lVar26,&local_10c,local_res18);
              lVar6 = *(longlong *)(lVar22 + 0xe0);
              lVar23 = (longlong)(local_108[0] - *(int *)(lVar22 + 0x30));
              if (fVar46 != 0.0) {
                *(int *)(lVar6 + lVar23 * 0x14) = *(int *)(lVar22 + 0xf8) + *(int *)(lVar22 + 0x40);
                local_f8 = fVar50 * fVar46 + fVar10;
                fStack_f4 = fVar51 * auVar47._4_4_ + fVar11;
                fStack_f0 = fVar52 * auVar47._8_4_ + fVar12;
                fStack_ec = (fVar14 - fVar13) * auVar47._12_4_ + fVar13;
                FUN_144c3e830(local_100,&local_f8,1);
              }
              lVar26 = local_100;
              param_1 = local_res8;
              fVar36 = _DAT_14c6daca0;
              uVar43 = uRam000000014c6daca4;
              uVar44 = uRam000000014c6daca8;
              uVar45 = uRam000000014c6dacac;
              fVar38 = fRam000000014c6dad9c;
              if (fVar48 != _DAT_14c6daca0) {
                *(int *)(lVar6 + 4 + lVar23 * 0x14) =
                     *(int *)(lVar22 + 0xf8) + *(int *)(lVar22 + 0x40);
                local_f8 = fVar50 * fVar48 + fVar10;
                fStack_f4 = fVar51 * auVar49._4_4_ + fVar11;
                fStack_f0 = fVar52 * auVar49._8_4_ + fVar12;
                fStack_ec = (fVar14 - fVar13) * auVar49._12_4_ + fVar13;
                FUN_144c3e830(local_100,&local_f8,1);
                param_1 = local_res8;
                fVar36 = _DAT_14c6daca0;
                uVar43 = uRam000000014c6daca4;
                uVar44 = uRam000000014c6daca8;
                uVar45 = uRam000000014c6dacac;
                fVar38 = fRam000000014c6dad9c;
              }
            }
LAB_14500d34d:
            iVar25 = iVar25 + 1;
            param_2 = local_res10;
          } while (iVar25 != iVar21);
        }
      }
    }
  }
  if (*(int *)(lVar22 + 0x108) == 0) {
    bVar20 = 0;
  }
  else {
    bVar20 = *(byte *)((longlong)*param_2 + *(longlong *)(lVar22 + 0x100));
  }
  *(byte *)((longlong)*param_2 + *(longlong *)(lVar22 + 0x100)) = bVar20 | 8;
  FUN_144fbaf90(param_1 + 0xb8,local_e8,param_2);
  return;
}



// FUNCTION 14500d4b0 FUN_14500d4b0 body=765 status=ok
// SIG undefined FUN_14500d4b0(void)

void FUN_14500d4b0(longlong param_1,int *param_2,int *param_3,undefined8 *param_4,
                  undefined8 *param_5,int param_6)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  undefined2 local_res10 [2];
  undefined4 local_res14;
  undefined8 in_stack_ffffffffffffff20;
  uint uVar13;
  ulonglong uVar12;
  longlong local_c8;
  int local_c0;
  uint local_bc;
  longlong local_b8;
  int local_b0;
  uint local_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  puVar11 = param_5;
  uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  local_res8[0] = *param_2;
  iVar2 = *param_3;
  lVar4 = *(longlong *)
           ((longlong)*(int *)(param_1 + 0x20) * 0x120 +
           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0x18);
  psVar1 = (short *)(param_5 + 3);
  param_5._0_4_ = iVar2;
  FUN_145005fb0(param_1 + 0x28,local_res8,
                (*(short *)(param_4 + 3) - *(short *)(lVar5 + 8 + (longlong)local_res8[0] * 0xc)) -
                *(short *)(lVar5 + 10 + (longlong)local_res8[0] * 0xc),&param_5,
                (*psVar1 - *(short *)(lVar5 + 8 + (longlong)iVar2 * 0xc)) -
                *(short *)(lVar5 + 10 + (longlong)iVar2 * 0xc));
  uVar6 = param_6;
  param_5._0_4_ = *param_2;
  FUN_14500ce90(param_1,&param_5,param_4,param_6);
  param_6 = *param_3;
  FUN_14500ce90(param_1,&param_6,puVar11,uVar6);
  param_5._0_4_ = *param_2;
  uVar12 = (ulonglong)uVar13 << 0x20;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80000000;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x80000000;
  param_6._0_2_ = *(undefined2 *)(param_4 + 3);
  FUN_145011060(param_1,lVar4,&param_5,&param_6,&local_b8,uVar12);
  param_6 = CONCAT22(param_6._2_2_,*(undefined2 *)(puVar11 + 3));
  param_5._0_4_ = *param_3;
  FUN_145011060(param_1,lVar4,&param_5,&param_6,&local_c8,uVar12 & 0xffffffff00000000);
  lVar8 = local_b8;
  lVar7 = local_c8;
  lVar5 = *(longlong *)(lVar4 + 0x20);
  iVar2 = *(int *)*param_4;
  iVar3 = *(int *)(lVar5 + 0x40);
  if (iVar2 < iVar3) {
    puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar9 = (undefined8 *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_68 = *puVar9;
  uStack_60 = puVar9[1];
  iVar2 = ((int *)*param_4)[1];
  if (iVar2 < iVar3) {
    puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar9 = (undefined8 *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_58 = *puVar9;
  uStack_50 = puVar9[1];
  lVar5 = *(longlong *)(lVar4 + 0x20);
  iVar2 = *(int *)*puVar11;
  iVar3 = *(int *)(lVar5 + 0x40);
  if (iVar2 < iVar3) {
    puVar10 = (undefined4 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar10 = (undefined4 *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_88 = *puVar10;
  uStack_84 = puVar10[1];
  uStack_80 = puVar10[2];
  uStack_7c = puVar10[3];
  iVar2 = ((int *)*puVar11)[1];
  if (iVar2 < iVar3) {
    puVar11 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar11 = (undefined8 *)((longlong)(iVar2 - iVar3) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_78 = *puVar11;
  uStack_70 = puVar11[1];
  lStack_90 = local_c8 + (longlong)local_c0 * 8;
  local_res14 = uVar6;
  local_98 = local_c8;
  lStack_a0 = local_b8 + (longlong)local_b0 * 8;
  local_res10[0] = 0;
  local_a8 = local_b8;
  FUN_1453312e0(*(undefined8 *)(param_1 + 0x18),lVar4,lVar4,&local_68,&local_88,&local_a8,&local_98,
                local_res10);
  if ((-1 < (int)local_bc) && (lVar7 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar7,(ulonglong)(local_bc & 0x7fffffff) << 3);
  }
  if ((-1 < (int)local_ac) && (lVar8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar8,(ulonglong)(local_ac & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 14500d7b0 FUN_14500d7b0 body=1011 status=ok
// SIG undefined FUN_14500d7b0(void)

void FUN_14500d7b0(longlong param_1,int *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6,int param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int local_res8 [2];
  int *local_res10;
  undefined8 *local_res18;
  undefined2 local_res20 [2];
  undefined4 local_res24;
  undefined8 in_stack_ffffffffffffff00;
  uint uVar15;
  ulonglong uVar14;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  int local_d0;
  uint local_cc;
  longlong local_c8;
  int local_c0;
  uint local_bc;
  longlong local_b8;
  longlong local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar15 = (uint)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
  local_b8 = *(longlong *)
              ((longlong)*(int *)(param_1 + 0x20) * 0x120 +
              *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  plVar1 = (longlong *)(local_b8 + 0x20);
  lVar5 = *(longlong *)
           ((longlong)*(int *)(param_4 + 0x20) * 0x120 +
           *(longlong *)(*(longlong *)(param_4 + 0x18) + 0x38));
  local_res10 = param_2;
  local_res18 = param_3;
  local_e8 = lVar5;
  if (*(char *)(local_b8 + 0x30) == '\x01') {
    lVar11 = *plVar1;
  }
  else {
    lVar11 = FUN_147e4bb26(plVar1);
  }
  plVar2 = (longlong *)(lVar5 + 0x20);
  if (*(char *)(lVar5 + 0x30) == '\x01') {
    local_a8 = *plVar2;
  }
  else {
    local_a8 = FUN_147e4bb26(plVar2);
  }
  local_res8[0] = *param_2;
  iVar3 = *(int *)CONCAT44(param_5._4_4_,(int)param_5);
  lVar5 = *(longlong *)(*plVar2 + 0x18);
  FUN_145006300(param_1 + 0x28,local_res8,
                (*(short *)(local_res18 + 3) -
                *(short *)(*(longlong *)(*plVar1 + 0x18) + 8 + (longlong)local_res8[0] * 0xc)) -
                *(short *)(*(longlong *)(*plVar1 + 0x18) + 10 + (longlong)local_res8[0] * 0xc));
  piVar6 = (int *)CONCAT44(param_5._4_4_,(int)param_5);
  param_5._0_4_ = *piVar6;
  FUN_145006300(param_4 + 0x28,&param_5,
                (*(short *)(param_6 + 3) - *(short *)(lVar5 + 8 + (longlong)iVar3 * 0xc)) -
                *(short *)(lVar5 + 10 + (longlong)iVar3 * 0xc));
  uVar7 = param_7;
  puVar12 = local_res18;
  param_5._0_4_ = *local_res10;
  FUN_14500ce90(param_1,&param_5,local_res18,param_7);
  param_7 = *piVar6;
  FUN_14500ce90(param_4,&param_7,param_6,uVar7);
  if (*(int *)(*plVar1 + 0x108) == 0) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)((longlong)*local_res10 + *(longlong *)(*plVar1 + 0x100));
  }
  *(byte *)((longlong)*local_res10 + *(longlong *)(lVar11 + 0x100)) = bVar10 | 4;
  if (*(int *)(*plVar2 + 0x108) == 0) {
    bVar10 = 0;
  }
  else {
    bVar10 = *(byte *)((longlong)*piVar6 + *(longlong *)(*plVar2 + 0x100));
  }
  local_bc = 0x80000000;
  local_cc = 0x80000000;
  uVar14 = (ulonglong)uVar15 << 0x20;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  *(byte *)((longlong)*piVar6 + *(longlong *)(local_a8 + 0x100)) = bVar10 | 4;
  local_d0 = 0;
  param_7._0_2_ = *(undefined2 *)(puVar12 + 3);
  local_res18._0_4_ = *local_res10;
  FUN_145011060(param_1,local_b8,&local_res18,&param_7,&local_c8,uVar14);
  lVar11 = local_e8;
  param_7 = CONCAT22(param_7._2_2_,*(undefined2 *)(param_6 + 3));
  local_res18 = (undefined8 *)CONCAT44(local_res18._4_4_,*piVar6);
  FUN_145011060(param_4,local_e8,&local_res18,&param_7,&local_d8,uVar14 & 0xffffffff00000000);
  lVar9 = local_c8;
  lVar8 = local_d8;
  piVar6 = (int *)*puVar12;
  lVar5 = *plVar1;
  iVar3 = *piVar6;
  iVar4 = *(int *)(lVar5 + 0x40);
  if (iVar3 < iVar4) {
    puVar12 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar12 = (undefined8 *)((longlong)(iVar3 - iVar4) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_78 = *puVar12;
  uStack_70 = puVar12[1];
  iVar3 = piVar6[1];
  if (iVar3 < iVar4) {
    puVar12 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar12 = (undefined8 *)((longlong)(iVar3 - iVar4) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_68 = *puVar12;
  uStack_60 = puVar12[1];
  lVar5 = *plVar2;
  iVar3 = *(int *)(lVar5 + 0x40);
  iVar4 = *(int *)*param_6;
  if (iVar4 < iVar3) {
    puVar13 = (undefined4 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar13 = (undefined4 *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_98 = *puVar13;
  uStack_94 = puVar13[1];
  uStack_90 = puVar13[2];
  uStack_8c = puVar13[3];
  iVar4 = ((int *)*param_6)[1];
  if (iVar4 < iVar3) {
    puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    puVar12 = (undefined8 *)((longlong)(iVar4 - iVar3) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  local_88 = *puVar12;
  uStack_80 = puVar12[1];
  lStack_a0 = local_d8 + (longlong)local_d0 * 8;
  local_a8 = local_d8;
  local_res24 = uVar7;
  lStack_e0 = local_c8 + (longlong)local_c0 * 8;
  local_res20[0] = 0;
  local_e8 = local_c8;
  FUN_1453312e0(*(undefined8 *)(param_1 + 0x18),local_b8,lVar11,&local_78,&local_98,&local_e8,
                &local_a8,local_res20);
  if ((-1 < (int)local_cc) && (lVar8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar8,(ulonglong)(local_cc & 0x7fffffff) << 3);
  }
  if ((-1 < (int)local_bc) && (lVar9 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar9,(ulonglong)(local_bc & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 14500dbb0 FUN_14500dbb0 body=482 status=ok
// SIG undefined FUN_14500dbb0(void)

void FUN_14500dbb0(longlong param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int local_res8 [2];
  longlong local_68;
  longlong lStack_60;
  undefined1 local_58 [16];
  char local_48;
  char local_47;
  longlong local_40;
  int local_38;
  uint local_34;
  
  lVar2 = *(longlong *)
           ((longlong)*(int *)(param_1 + 0x20) * 0x120 +
           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  plVar1 = (longlong *)(lVar2 + 0x20);
  if (*(char *)(lVar2 + 0x30) == '\x01') {
    lVar4 = *plVar1;
  }
  else {
    lVar4 = FUN_147e4bb26(plVar1);
  }
  local_68 = *param_3;
  local_40 = 0;
  lStack_60 = local_68 + (longlong)(int)param_3[1] * 2;
  local_38 = 0;
  local_res8[0] = *param_2;
  local_34 = 0x80000000;
  FUN_1450063f0(param_1 + 0x28,local_res8,&local_68,&local_48);
  local_res8[0] = *param_2;
  if (local_47 == '\0') {
    FUN_145011480(param_1,lVar2,local_res8,param_3);
  }
  else {
    FUN_14500ddc0();
    lVar6 = (longlong)local_38 * 0x10 + local_40;
    for (lVar5 = local_40; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
      if (*(char *)(lVar5 + 0xc) == '\0') {
        FUN_14500f700(param_1,lVar2,lVar5);
      }
      else {
        FUN_14500f880();
      }
    }
  }
  if (local_48 != '\0') {
    if (*(int *)(*plVar1 + 0x108) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = *(byte *)((longlong)*param_2 + *(longlong *)(*plVar1 + 0x100));
    }
    *(byte *)((longlong)*param_2 + *(longlong *)(lVar4 + 0x100)) = bVar3 & 0xf7;
  }
  FUN_144fbaf90(param_1 + 0xb8,local_58,param_2);
  local_38 = 0;
  if ((-1 < (int)local_34) && (local_40 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_40,(ulonglong)(local_34 & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 14500dda0 FUN_14500dda0 body=29 status=ok
// SIG undefined FUN_14500dda0(void)

void FUN_14500dda0(longlong param_1)

{
  FUN_144c3f1d0(*(undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x20) * 0x120 +
                 *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38)));
  return;
}



// FUNCTION 14500ddc0 FUN_14500ddc0 body=158 status=ok
// SIG undefined FUN_14500ddc0(void)

void FUN_14500ddc0(longlong param_1,longlong param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [4];
  
  local_res18[0] = *param_3;
  lVar2 = *(longlong *)(param_2 + 0x20);
  FUN_144c42800(lVar2,local_res10,local_res18,local_res20,local_38);
  if ((char)local_res10[0] != '\0') {
    iVar1 = *(int *)(lVar2 + 0x20);
    for (iVar3 = local_res20[0] - iVar1; iVar3 != local_38[0] - iVar1; iVar3 = iVar3 + 1) {
      local_res10[0] = iVar3;
      FUN_1453351e0(*(undefined8 *)(param_1 + 0x18),param_2,local_res10);
    }
  }
  local_res10[0] = *param_3;
  FUN_144c3e940(param_2,local_res10);
  return;
}



// FUNCTION 14500de60 FUN_14500de60 body=3498 status=ok
// SIG undefined FUN_14500de60(void)

void FUN_14500de60(undefined8 param_1,longlong param_2,uint *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort *puVar5;
  char cVar6;
  ushort uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  int *piVar17;
  ulonglong uVar18;
  int *piVar19;
  byte bVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint *puVar26;
  int *piVar27;
  uint *local_res18;
  uint local_res20 [2];
  int local_1a8;
  uint local_1a4;
  int local_19c;
  uint local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  uint local_184;
  int local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  int *local_170;
  ulonglong local_168;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  undefined4 local_148;
  uint local_144;
  longlong local_140;
  undefined4 *local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  uint local_108;
  uint local_104;
  int local_100;
  int local_fc;
  int local_f8;
  ushort *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_c8;
  longlong lStack_c0;
  ushort *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  int local_98 [4];
  int local_88 [4];
  int local_78 [16];
  
  local_104 = *param_3;
  lVar24 = *(longlong *)(param_2 + 0x20);
  uVar9 = local_104 & 0x3fffff;
  local_130 = (ulonglong)uVar9;
  if ((int)uVar9 < *(int *)(lVar24 + 0x20)) {
    uVar21 = uVar9;
    if (*(int *)(lVar24 + 0x98) != 0) {
      uVar21 = *(uint *)(*(longlong *)(lVar24 + 0x90) + local_130 * 4);
    }
    if (uVar21 == 0xffffffff) {
      lVar13 = *(longlong *)(lVar24 + 0x18);
      lVar22 = local_130 * 3;
    }
    else {
      lVar22 = (longlong)(int)uVar21 * 3;
      lVar13 = *(longlong *)(lVar24 + 0xb0);
    }
  }
  else {
    lVar22 = (longlong)(int)(uVar9 - *(int *)(lVar24 + 0x20)) * 3;
    lVar13 = *(longlong *)(lVar24 + 0xd0);
  }
  local_168 = (ulonglong)uVar9;
  piVar19 = (int *)(lVar13 + lVar22 * 4);
  local_res18 = param_3;
  local_res20[0] = uVar9;
  local_170 = piVar19;
  if ((*(int *)(lVar24 + 0x108) == 0) ||
     ((*(byte *)((ulonglong)uVar9 + *(longlong *)(lVar24 + 0x100)) & 8) == 0)) {
    local_d8 = (longlong *)0x0;
  }
  else {
    lVar13 = FUN_144c441c0(lVar24 + 0x1c0,local_res20);
    if (lVar13 == 0) {
      iVar23 = -1;
    }
    else {
      iVar23 = *(int *)(lVar13 + 4);
    }
    uVar9 = (uint)local_130;
    local_d8 = (longlong *)(*(longlong *)(lVar24 + 0x1c0) + 8 + (longlong)iVar23 * 0x38);
  }
  uVar21 = param_3[4];
  local_150 = 0;
  local_148 = 0;
  local_144 = 0x80000000;
  if (uVar21 == 0) {
    local_res18 = (uint *)CONCAT44(local_res18._4_4_,uVar9);
    FUN_144c3ea90(param_2,&local_res18);
    lVar24 = 0;
    goto LAB_14500ebad;
  }
  if (0 < (int)param_3[0xc]) {
    FUN_144c585a0(&local_150,&PTR_vftable_14c6e47c0,(longlong)(int)param_3[0xc]);
  }
  lVar22 = 0;
  iVar23 = 0;
  lVar24 = lVar22;
  lVar13 = (longlong)(int)uVar21;
  if (0 < (int)uVar21) {
    do {
      uVar15 = (ulonglong)*(ushort *)(*(longlong *)(param_3 + 2) + lVar22);
      if (*(ushort *)(*(longlong *)(param_3 + 2) + lVar22) != 0) {
        lVar4 = lVar24 * 4;
        lVar24 = lVar24 + uVar15;
        piVar27 = (int *)(local_150 + lVar4);
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *piVar27 = iVar23;
          piVar27 = piVar27 + 1;
        }
      }
      iVar23 = iVar23 + 1;
      lVar22 = lVar22 + 6;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  lVar24 = *(longlong *)(param_2 + 0x20);
  if (*(int *)(lVar24 + 0x108) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = *(byte *)(local_168 + *(longlong *)(lVar24 + 0x100));
  }
  bVar20 = bVar8 ^ 2;
  local_fc = *(int *)(lVar24 + 0xe8) + *(int *)(lVar24 + 0x30);
  iVar23 = piVar19[2];
  local_f8 = *(int *)(lVar24 + 0xd8) + *(int *)(lVar24 + 0x20);
  local_18c = *(int *)(lVar24 + 0xf8) + *(int *)(lVar24 + 0x40);
  local_188 = *(int *)(lVar24 + 0x60);
  local_100 = *(int *)(lVar24 + 0x50);
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,bVar8) ^ 2;
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar6 = *(char *)(lVar24 + 0x114);
  if (cVar6 == '\0') {
    __dyn_tls_on_demand_init();
    cVar6 = *(char *)(lVar24 + 0x114);
  }
  lVar13 = *(longlong *)(lVar24 + 0xf0);
  if (lVar13 == 0) {
    if (cVar6 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = FUN_144b3f4a0();
    *(longlong *)(lVar24 + 0xf0) = lVar13;
  }
  local_b0 = *(longlong *)(*(longlong *)(lVar13 + 0x3d0) + 0x10);
  if (*(longlong *)(local_b0 + 8) != 0) {
    local_b0 = 0;
  }
  local_118 = (longlong)((short)iVar23 + 1) * 0x10;
  local_e8 = local_118;
  if (local_b0 == 0) {
    local_160 = (*DAT_14c787670)(1,&local_118,0x40);
  }
  else {
    local_110 = local_118 + 0x3fU & 0xffffffffffffffc0;
    if (local_110 <= *(ulonglong *)(local_b0 + 0x28)) {
      local_160 = *(longlong *)(local_b0 + 0x38);
      if (local_110 + local_160 <= *(ulonglong *)(local_b0 + 0x40)) {
        *(ulonglong *)(local_b0 + 0x38) = local_110 + local_160;
        goto LAB_14500e15a;
      }
    }
    local_160 = FUN_144b454a0(local_b0,&local_110);
  }
LAB_14500e15a:
  puVar26 = local_res18;
  FUN_144c3e830(param_2,*(undefined8 *)(local_res18 + 0x12));
  local_178 = puVar26[0xc];
  local_108 = puVar26[0x10];
  local_198 = local_178 + local_108;
  lVar13 = (longlong)(int)local_198;
  if ((int)local_198 < 1) {
    puVar14 = (undefined4 *)0x0;
    local_174 = 0x80000000;
    local_198 = 0;
  }
  else {
    puVar14 = (undefined4 *)
              (**(code **)(PTR_vftable_14c6e47c0 + 8))(&PTR_vftable_14c6e47c0,lVar13 << 6);
    local_174 = local_198;
  }
  if (puVar14 != puVar14 + lVar13 * 0x10) {
    puVar16 = puVar14 + 8;
    do {
      if (puVar16 != (undefined4 *)&DAT_00000020) {
        *(undefined8 *)(puVar16 + -6) = 0xffffffffffffffff;
        puVar16[-4] = 4;
        *(undefined4 **)(puVar16 + -2) = puVar16 + 2;
        *puVar16 = 0;
        puVar16[1] = 0x80000004;
        *(undefined2 *)(puVar16 + 6) = 0xffff;
      }
      puVar1 = puVar16 + 8;
      puVar16 = puVar16 + 0x10;
    } while (puVar1 != puVar14 + lVar13 * 0x10);
  }
  local_19c = 0;
  local_138 = puVar14;
  if (*(char *)(lVar24 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar24 + 0xf0);
  if (lVar13 == 0) {
    if (*(char *)(lVar24 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = FUN_144b3f4a0();
    *(longlong *)(lVar24 + 0xf0) = lVar13;
  }
  lVar24 = *(longlong *)(*(longlong *)(lVar13 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar24 + 8) != 0) {
    lVar24 = 0;
  }
  local_128 = (longlong)(int)uVar21 * 0x30;
  local_118 = lVar24;
  local_110 = local_128;
  if (lVar24 == 0) {
    local_140 = (*DAT_14c787670)(1,&local_128,0x40);
  }
  else {
    local_120 = local_128 + 0x3f & 0xffffffffffffffc0;
    if (local_120 <= *(ulonglong *)(lVar24 + 0x28)) {
      local_140 = *(longlong *)(lVar24 + 0x38);
      if (local_140 + local_120 <= *(ulonglong *)(lVar24 + 0x40)) {
        *(ulonglong *)(lVar24 + 0x38) = local_140 + local_120;
        goto LAB_14500e2de;
      }
    }
    local_140 = FUN_144b454a0(lVar24,&local_120);
  }
LAB_14500e2de:
  uVar15 = 0;
  local_194 = 0;
  local_f0 = *(ushort **)(local_res18 + 2);
  iVar23 = *(int *)(*(longlong *)(param_2 + 0x20) + 0xe8) +
           *(int *)(*(longlong *)(param_2 + 0x20) + 0x30);
  local_1a4 = local_178;
  local_1a8 = 0;
  local_17c = 0;
  local_b8 = local_f0 + (longlong)(int)local_res18[4] * 3;
  local_180 = iVar23;
  if (local_f0 != local_b8) {
    local_e0 = 0;
    uVar18 = uVar15;
    local_120 = (longlong)(int)local_178;
    do {
      uVar9 = (uint)*local_f0 + (int)uVar15;
      local_184 = (uint)local_f0[1] + (int)uVar18;
      lVar24 = (longlong)local_19c;
      local_19c = local_19c + 1;
      piVar27 = (int *)(lVar24 * 0x30 + local_140);
      piVar19 = (int *)((longlong)local_19c * 0x30 + local_140);
      if (piVar27 != piVar19) {
        piVar17 = piVar27 + 6;
        do {
          if (piVar17 != (int *)&DAT_00000018) {
            *piVar17 = 0;
            *(int **)(piVar17 + -2) = piVar17 + 2;
            piVar17[1] = -0x7ffffffc;
          }
          piVar2 = piVar17 + 6;
          piVar17 = piVar17 + 0xc;
        } while (piVar2 != piVar19);
      }
      iVar10 = (int)local_130;
      piVar27[0] = -1;
      piVar27[1] = -1;
      piVar27[2] = 0;
      lVar24 = *(longlong *)(param_2 + 0x20);
      iVar12 = *(int *)(lVar24 + 0x50);
      if (iVar10 < *(int *)(lVar24 + 0x20)) {
        iVar11 = iVar10;
        if (*(int *)(lVar24 + 0x98) != 0) {
          iVar11 = *(int *)(*(longlong *)(lVar24 + 0x90) + local_168 * 4);
        }
        if (iVar11 != -1) {
          lVar13 = *(longlong *)(lVar24 + 0x120);
          goto LAB_14500e438;
        }
        lVar24 = *(longlong *)(lVar24 + 0x48) + (longlong)(iVar10 * iVar12) * 4;
        lVar13 = (longlong)iVar12 * 4 + lVar24;
      }
      else {
        lVar13 = *(longlong *)(lVar24 + 0x140);
        iVar11 = iVar10 - *(int *)(lVar24 + 0x20);
LAB_14500e438:
        lVar24 = lVar13 + (longlong)(iVar11 * iVar12) * 4;
        lVar13 = lVar13 + ((longlong)(iVar11 * iVar12) + (longlong)iVar12) * 4;
      }
      piVar19 = piVar27 + 4;
      if (local_98 != piVar19) {
        iVar12 = (int)(lVar13 - lVar24 >> 2);
        if ((int)(piVar27[7] & 0x7fffffffU) < iVar12) {
          FUN_141807e20(piVar19,&PTR_vftable_14c6e47a0,(longlong)iVar12);
        }
        FUN_144b3d470(*(undefined8 *)piVar19,lVar24,(longlong)iVar12 * 4);
        piVar27[6] = iVar12;
      }
      *(byte *)(piVar27 + 3) = bVar20;
      *(ushort *)(piVar27 + 2) = *local_f0;
      *piVar27 = local_194 + iVar23;
      if (local_f0[1] == 0) {
        iVar12 = -1;
      }
      else {
        iVar12 = local_1a4 + iVar23;
      }
      piVar19 = piVar27 + 4;
      piVar27[1] = iVar12;
      *(ushort *)((longlong)piVar27 + 10) = local_f0[1];
      lVar24 = *(longlong *)(local_res18 + 6) + (longlong)(int)((uint)local_f0[2] * local_100) * 4;
      if (local_88 != piVar19) {
        iVar12 = (int)((*(longlong *)(local_res18 + 6) +
                       ((longlong)(int)((uint)local_f0[2] * local_100) + (longlong)local_100) * 4) -
                       lVar24 >> 2);
        if ((int)(piVar27[7] & 0x7fffffffU) < iVar12) {
          FUN_141807e20(piVar19,&PTR_vftable_14c6e47a0,(longlong)iVar12);
        }
        FUN_144b3d470(*(undefined8 *)piVar19,lVar24,(longlong)iVar12 * 4);
        piVar27[6] = iVar12;
      }
      iVar12 = local_188;
      uVar15 = (ulonglong)local_1a8;
      uVar25 = (ulonglong)(int)uVar9;
      puVar26 = local_res18;
      local_128 = uVar15;
      if ((longlong)uVar15 < (longlong)uVar25) {
        lVar24 = local_e0 * 0x10;
        local_194 = local_194 + (int)(uVar25 - uVar15);
        local_e0 = local_e0 + (uVar25 - uVar15);
        piVar19 = local_138 + lVar24;
        local_158 = uVar15;
        do {
          local_1a8 = local_1a8 + 1;
          puVar5 = (ushort *)(*(longlong *)(puVar26 + 10) + local_128 * 8);
          uVar18 = local_128 + 1;
          if (local_1a8 == (int)uVar25) {
            uVar18 = uVar15;
          }
          uVar7 = *puVar5;
          piVar19[1] = (uint)*(ushort *)(*(longlong *)(puVar26 + 10) + uVar18 * 8) + local_18c;
          *piVar19 = (uint)uVar7 + local_18c;
          piVar19[2] = -1;
          piVar19[3] = -1;
          piVar19[4] = 0;
          bVar8 = (byte)puVar5[1] & 3;
          if (bVar8 == 2) {
            iVar23 = *(int *)(local_150 + (longlong)*(int *)(puVar5 + 2) * 4);
            piVar19[2] = local_fc + *(int *)(puVar5 + 2) | local_104 & 0xffc00000;
            piVar19[3] = local_f8 + iVar23 | local_104 & 0xffc00000;
            *(undefined1 *)(piVar19 + 4) = 2;
            iVar23 = piVar19[8];
            if (iVar23 < iVar12) {
              piVar19[8] = iVar12;
              if (0 < iVar12 - iVar23) {
                uVar18 = (ulonglong)(uint)(iVar12 - iVar23);
                puVar14 = (undefined4 *)(*(longlong *)(piVar19 + 6) + (longlong)iVar23 * 4);
                do {
                  if (puVar14 != (undefined4 *)0x0) {
                    *puVar14 = 0;
                  }
                  uVar18 = uVar18 - 1;
                  puVar14 = puVar14 + 1;
                } while (uVar18 != 0);
              }
            }
            else {
LAB_14500e6b9:
              if (iVar12 < iVar23) {
                piVar19[8] = iVar12;
              }
            }
          }
          else if (bVar8 == 1) {
            *(undefined1 *)(piVar19 + 4) = 1;
            iVar23 = piVar19[8];
            if (iVar12 <= iVar23) goto LAB_14500e6b9;
            piVar19[8] = iVar12;
            if (0 < iVar12 - iVar23) {
              uVar18 = (ulonglong)(uint)(iVar12 - iVar23);
              puVar14 = (undefined4 *)(*(longlong *)(piVar19 + 6) + (longlong)iVar23 * 4);
              do {
                if (puVar14 != (undefined4 *)0x0) {
                  *puVar14 = 0;
                }
                uVar18 = uVar18 - 1;
                puVar14 = puVar14 + 1;
              } while (uVar18 != 0);
            }
          }
          else {
            local_190 = *(int *)(puVar5 + 2);
            lVar24 = *(longlong *)(param_2 + 0x20);
            iVar23 = *local_170 + local_190;
            if (iVar23 < *(int *)(lVar24 + 0x30)) {
              iVar10 = iVar23;
              if (*(int *)(lVar24 + 0x78) != 0) {
                iVar10 = *(int *)(*(longlong *)(lVar24 + 0x70) + (longlong)iVar23 * 4);
              }
              if (iVar10 == -1) {
                lVar13 = (longlong)iVar23 * 5;
                lVar24 = *(longlong *)(lVar24 + 0x28);
              }
              else {
                lVar13 = (longlong)iVar10 * 5;
                lVar24 = *(longlong *)(lVar24 + 0xc0);
              }
            }
            else {
              lVar13 = (longlong)(iVar23 - *(int *)(lVar24 + 0x30)) * 5;
              lVar24 = *(longlong *)(lVar24 + 0xe0);
            }
            *(byte *)(piVar19 + 4) = *(byte *)(lVar24 + lVar13 * 4 + 0x10) & 0x40 | 4;
            lVar24 = *(longlong *)(param_2 + 0x20);
            iVar10 = *(int *)(lVar24 + 0x60);
            if (iVar23 < *(int *)(lVar24 + 0x30)) {
              iVar11 = iVar23;
              if (*(int *)(lVar24 + 0x78) != 0) {
                iVar11 = *(int *)(*(longlong *)(lVar24 + 0x70) + (longlong)iVar23 * 4);
              }
              if (iVar11 != -1) {
                lVar13 = *(longlong *)(lVar24 + 0x130);
                goto LAB_14500e7be;
              }
              lVar24 = *(longlong *)(lVar24 + 0x58) + (longlong)(iVar10 * iVar23) * 4;
              lVar13 = (longlong)iVar10 * 4 + lVar24;
            }
            else {
              lVar13 = *(longlong *)(lVar24 + 0x150);
              iVar11 = iVar23 - *(int *)(lVar24 + 0x30);
LAB_14500e7be:
              lVar24 = lVar13 + (longlong)(iVar11 * iVar10) * 4;
              lVar13 = lVar13 + ((longlong)(iVar11 * iVar10) + (longlong)iVar10) * 4;
            }
            piVar27 = piVar19 + 6;
            if (local_78 != piVar27) {
              iVar23 = (int)(lVar13 - lVar24 >> 2);
              if ((int)(piVar19[9] & 0x7fffffffU) < iVar23) {
                FUN_141807e20(piVar27,&PTR_vftable_14c6e47a0,(longlong)iVar23);
              }
              FUN_144b3d470(*(undefined8 *)piVar27,lVar24,(longlong)iVar23 * 4);
              piVar19[8] = iVar23;
            }
            uVar25 = (ulonglong)uVar9;
            *(short *)(piVar19 + 0xe) = (short)local_190;
            uVar15 = local_158;
            puVar26 = local_res18;
          }
          local_128 = local_128 + 1;
          piVar19 = piVar19 + 0x10;
        } while ((longlong)local_128 < (longlong)(int)uVar25);
        bVar20 = (byte)local_res20[0];
        iVar23 = local_180;
      }
      lVar24 = (longlong)(int)local_17c;
      uVar15 = (ulonglong)(int)local_184;
      uVar21 = local_184;
      local_158 = lVar24;
      if (lVar24 < (longlong)uVar15) {
        local_1a4 = local_1a4 + (int)(uVar15 - lVar24);
        lVar13 = local_120 * 0x10;
        local_120 = local_120 + (uVar15 - lVar24);
        piVar19 = local_138 + lVar13;
        piVar27 = local_170;
        do {
          lVar13 = *(longlong *)(puVar26 + 0xe);
          local_158 = lVar13 + lVar24 * 8;
          uVar7 = *(ushort *)(lVar13 + 2 + lVar24 * 8);
          *piVar19 = (uint)*(ushort *)(lVar13 + lVar24 * 8) + local_18c;
          piVar19[1] = (uint)uVar7 + local_18c;
          piVar19[2] = -1;
          piVar19[3] = -1;
          piVar19[4] = 4;
          uVar7 = *(ushort *)(local_158 + 6);
          local_c8 = 0;
          lStack_c0 = 0;
          if (uVar7 < *(ushort *)((longlong)piVar27 + 10)) {
            local_190 = piVar27[1] + (uint)uVar7;
            lVar13 = FUN_144c450c0(*(undefined8 *)(param_2 + 0x20),&local_190,&local_c8);
          }
          else {
            iVar23 = (uint)uVar7 - (int)(short)*(ushort *)((longlong)piVar27 + 10);
            lVar13 = *local_d8 + (longlong)iVar23 * 0x14;
            lVar22 = (longlong)(iVar23 * local_188);
            lStack_c0 = local_d8[2] + (local_188 + lVar22) * 4;
            local_c8 = local_d8[2] + lVar22 * 4;
            local_a8 = local_c8;
            lStack_a0 = lStack_c0;
          }
          lVar22 = local_c8;
          plVar3 = (longlong *)(piVar19 + 6);
          *(byte *)(piVar19 + 4) =
               (*(byte *)(piVar19 + 4) ^ *(byte *)(lVar13 + 0x10)) & 0x60 ^ *(byte *)(piVar19 + 4) |
               0x14;
          *(undefined2 *)((longlong)piVar19 + 0x12) = *(undefined2 *)(lVar13 + 0x12);
          if (&local_c8 != plVar3) {
            iVar23 = (int)(lStack_c0 - local_c8 >> 2);
            if ((int)(piVar19[9] & 0x7fffffffU) < iVar23) {
              FUN_141807e20(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar23);
            }
            FUN_144b3d470(*plVar3,lVar22,(longlong)iVar23 * 4);
            piVar19[8] = iVar23;
            uVar15 = (ulonglong)local_184;
            piVar27 = local_170;
          }
          lVar24 = lVar24 + 1;
          *(short *)(piVar19 + 0xe) = *(short *)(local_158 + 6) + (short)piVar27[2];
          uVar21 = (uint)uVar15;
          piVar19 = piVar19 + 0x10;
          puVar26 = local_res18;
        } while (lVar24 < (int)uVar21);
        uVar25 = (ulonglong)uVar9;
        bVar20 = (byte)local_res20[0];
        iVar23 = local_180;
      }
      uVar15 = uVar25 & 0xffffffff;
      local_f0 = local_f0 + 3;
      uVar18 = (ulonglong)uVar21;
      local_1a8 = (int)uVar25;
      puVar14 = local_138;
      lVar24 = local_118;
      local_17c = uVar21;
    } while (local_f0 != local_b8);
  }
  lVar22 = local_140;
  FUN_144c3eb50(param_2,puVar14,local_108 + local_178);
  local_res18 = (uint *)CONCAT44(local_res18._4_4_,(int)local_130);
  FUN_144c3e870(param_2,&local_res18,lVar22,local_19c);
  lVar13 = (longlong)local_19c * 0x30 + lVar22;
  while (lVar13 != lVar22) {
    lVar13 = lVar13 + -0x30;
    FUN_14500b7d0(lVar13);
  }
  if (lVar24 == 0) {
    (*DAT_14c787678)(1,lVar22);
  }
  else {
    uVar15 = local_110 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar24 + 0x28) < uVar15) ||
       (uVar15 + lVar22 != *(longlong *)(lVar24 + 0x38))) {
      FUN_144be8550(lVar24,lVar22);
    }
    else {
      *(longlong *)(lVar24 + 0x38) = lVar22;
      if (*(longlong *)(lVar24 + 0x48) == lVar22) {
        FUN_144be8430(lVar24);
      }
    }
  }
  puVar16 = puVar14 + (longlong)(int)local_198 * 0x10;
  while (puVar16 != puVar14) {
    puVar16 = puVar16 + -0x10;
    FUN_144fc62d0(puVar16);
  }
  if ((-1 < (int)local_174) && (puVar14 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,puVar14,(ulonglong)(local_174 & 0x7fffffff) << 6);
  }
  if (local_b0 == 0) {
    (*DAT_14c787678)(1);
    lVar24 = local_150;
  }
  else {
    uVar15 = local_e8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_b0 + 0x28) < uVar15) ||
       (uVar15 + local_160 != *(longlong *)(local_b0 + 0x38))) {
      FUN_144be8550();
      lVar24 = local_150;
    }
    else {
      *(longlong *)(local_b0 + 0x38) = local_160;
      lVar24 = local_150;
      if (*(longlong *)(local_b0 + 0x48) == local_160) {
        FUN_144be8430();
        lVar24 = local_150;
      }
    }
  }
LAB_14500ebad:
  if ((-1 < (int)local_144) && (lVar24 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar24,(ulonglong)(local_144 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 14500ec10 FUN_14500ec10 body=1290 status=ok
// SIG undefined FUN_14500ec10(void)

undefined4 *
FUN_14500ec10(undefined8 param_1,undefined4 *param_2,longlong param_3,int *param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int local_70 [2];
  int local_68;
  int local_64;
  short local_60;
  short local_5e;
  byte local_5c;
  undefined1 *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [16];
  
  local_70[0] = *param_4;
  plVar1 = (longlong *)(param_3 + 0x20);
  lVar6 = *plVar1;
  if (local_70[0] < *(int *)(lVar6 + 0x20)) {
    iVar12 = local_70[0];
    if (*(int *)(lVar6 + 0x98) != 0) {
      iVar12 = *(int *)(*(longlong *)(lVar6 + 0x90) + (longlong)local_70[0] * 4);
    }
    if (iVar12 == -1) {
      lVar7 = *(longlong *)(lVar6 + 0x18);
      lVar16 = (longlong)local_70[0] * 3;
    }
    else {
      lVar16 = (longlong)iVar12 * 3;
      lVar7 = *(longlong *)(lVar6 + 0xb0);
    }
  }
  else {
    lVar16 = (longlong)(local_70[0] - *(int *)(lVar6 + 0x20)) * 3;
    lVar7 = *(longlong *)(lVar6 + 0xd0);
  }
  sVar4 = *(short *)(lVar7 + 10 + lVar16 * 4);
  iVar18 = (int)sVar4;
  piVar2 = (int *)(lVar7 + lVar16 * 4);
  sVar5 = *(short *)(lVar7 + 8 + lVar16 * 4);
  iVar10 = (int)sVar5;
  iVar19 = 0;
  local_58 = local_48;
  *param_2 = *(undefined4 *)(lVar6 + 0xd8);
  local_50 = 0;
  local_4c = 0x80000004;
  FUN_144c41d50(lVar6,local_70,&local_68);
  local_5c = local_5c ^ 2;
  iVar12 = *(int *)(*plVar1 + 0xe8);
  lVar6 = FUN_144c3ec00(param_3,iVar18 + iVar10 + param_5);
  local_68 = *(int *)(*plVar1 + 0x30) + iVar12;
  local_60 = sVar5;
  if (0 < sVar5) {
    do {
      iVar14 = *piVar2 + iVar19;
      if (*(char *)(param_3 + 0x30) == '\x01') {
        lVar7 = *plVar1;
      }
      else {
        lVar7 = FUN_147e4bb26(plVar1);
      }
      lVar16 = (longlong)iVar14;
      if (iVar14 < *(int *)(lVar7 + 0x30)) {
        iVar15 = iVar14;
        if (*(int *)(lVar7 + 0x78) != 0) {
          iVar15 = *(int *)(*(longlong *)(lVar7 + 0x70) + lVar16 * 4);
        }
        if (iVar15 == -1) {
          lVar9 = *(longlong *)(lVar7 + 0x28);
          lVar8 = lVar16;
        }
        else {
          lVar8 = (longlong)iVar15;
          lVar9 = *(longlong *)(lVar7 + 0xc0);
        }
        puVar17 = (undefined4 *)(lVar9 + lVar8 * 0x14);
      }
      else {
        puVar17 = (undefined4 *)
                  (*(longlong *)(lVar7 + 0xe0) + (longlong)(iVar14 - *(int *)(lVar7 + 0x30)) * 0x14)
        ;
      }
      puVar3 = (undefined4 *)(*(longlong *)(lVar7 + 0xe0) + (longlong)iVar12 * 0x14);
      *puVar3 = *puVar17;
      puVar3[1] = puVar17[1];
      puVar3[2] = puVar17[2];
      puVar3[3] = puVar17[3];
      *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar17 + 4);
      *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar17 + 0x11);
      *(undefined2 *)((longlong)puVar3 + 0x12) = *(undefined2 *)((longlong)puVar17 + 0x12);
      *(short *)(*(longlong *)(lVar7 + 0x110) + (longlong)iVar12 * 2) = (short)iVar19;
      iVar15 = *(int *)(lVar7 + 0x60);
      lVar9 = *(longlong *)(lVar7 + 0x58);
      if (iVar14 < *(int *)(lVar7 + 0x30)) {
        iVar11 = iVar14;
        if (*(int *)(lVar7 + 0x78) != 0) {
          iVar11 = *(int *)(*(longlong *)(lVar7 + 0x70) + lVar16 * 4);
        }
        if (iVar11 == -1) {
          lVar16 = (longlong)(iVar15 * iVar14);
        }
        else {
          lVar9 = *(longlong *)(lVar7 + 0x130);
          lVar16 = (longlong)(iVar11 * iVar15);
        }
      }
      else {
        lVar9 = *(longlong *)(lVar7 + 0x150);
        lVar16 = (longlong)((iVar14 - *(int *)(lVar7 + 0x30)) * iVar15);
      }
      lVar8 = *(longlong *)(lVar7 + 0x150) + (longlong)(iVar15 * iVar12) * 4;
      FUN_144b3d470(lVar8,lVar9 + lVar16 * 4,
                    (longlong)
                    (int)((*(longlong *)(lVar7 + 0x150) +
                          ((longlong)(iVar15 * iVar12) + (longlong)iVar15) * 4) - lVar8 >> 2) << 2);
      iVar12 = iVar12 + 1;
      *(undefined8 *)(lVar6 + 8) = 0xffffffffffffffff;
      iVar19 = iVar19 + 1;
      *(byte *)(lVar6 + 0x10) = *(byte *)(lVar6 + 0x10) & 0xbf | 4;
      lVar6 = lVar6 + 0x14;
    } while (iVar19 < iVar10);
  }
  if (iVar18 + param_5 == 0) {
    local_64 = -1;
    local_5e = 0;
  }
  else {
    local_5e = sVar4 + (short)param_5;
    local_64 = local_68 + iVar10;
    iVar10 = 0;
    if (0 < iVar18) {
      pbVar13 = (byte *)(lVar6 + 0x10);
      do {
        iVar19 = piVar2[1] + iVar10;
        if (*(char *)(param_3 + 0x30) == '\x01') {
          lVar6 = *plVar1;
        }
        else {
          lVar6 = FUN_147e4bb26(plVar1);
        }
        if (iVar19 < *(int *)(lVar6 + 0x30)) {
          iVar14 = iVar19;
          if (*(int *)(lVar6 + 0x78) != 0) {
            iVar14 = *(int *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar19 * 4);
          }
          if (iVar14 == -1) {
            lVar16 = (longlong)iVar19 * 5;
            lVar7 = *(longlong *)(lVar6 + 0x28);
          }
          else {
            lVar16 = (longlong)iVar14 * 5;
            lVar7 = *(longlong *)(lVar6 + 0xc0);
          }
        }
        else {
          lVar16 = (longlong)(iVar19 - *(int *)(lVar6 + 0x30)) * 5;
          lVar7 = *(longlong *)(lVar6 + 0xe0);
        }
        puVar17 = (undefined4 *)(lVar7 + lVar16 * 4);
        puVar3 = (undefined4 *)(*(longlong *)(lVar6 + 0xe0) + (longlong)iVar12 * 0x14);
        *puVar3 = *puVar17;
        puVar3[1] = puVar17[1];
        puVar3[2] = puVar17[2];
        puVar3[3] = puVar17[3];
        *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(puVar17 + 4);
        *(undefined1 *)((longlong)puVar3 + 0x11) = *(undefined1 *)((longlong)puVar17 + 0x11);
        *(undefined2 *)((longlong)puVar3 + 0x12) = *(undefined2 *)((longlong)puVar17 + 0x12);
        *(short *)(*(longlong *)(lVar6 + 0x110) + (longlong)iVar12 * 2) = sVar5 + (short)iVar10;
        iVar14 = *(int *)(lVar6 + 0x60);
        if (iVar19 < *(int *)(lVar6 + 0x30)) {
          iVar15 = iVar19;
          if (*(int *)(lVar6 + 0x78) != 0) {
            iVar15 = *(int *)(*(longlong *)(lVar6 + 0x70) + (longlong)iVar19 * 4);
          }
          if (iVar15 != -1) {
            lVar7 = *(longlong *)(lVar6 + 0x130);
            goto LAB_14500f02b;
          }
          lVar7 = *(longlong *)(lVar6 + 0x58) + (longlong)(iVar14 * iVar19) * 4;
        }
        else {
          lVar7 = *(longlong *)(lVar6 + 0x150);
          iVar15 = iVar19 - *(int *)(lVar6 + 0x30);
LAB_14500f02b:
          lVar7 = lVar7 + (longlong)(iVar15 * iVar14) * 4;
        }
        lVar16 = *(longlong *)(lVar6 + 0x150) + (longlong)(iVar14 * iVar12) * 4;
        FUN_144b3d470(lVar16,lVar7,
                      (longlong)
                      (int)((*(longlong *)(lVar6 + 0x150) +
                            ((longlong)(iVar14 * iVar12) + (longlong)iVar14) * 4) - lVar16 >> 2) <<
                      2);
        *pbVar13 = *pbVar13 & 0xbf;
        iVar12 = iVar12 + 1;
        *pbVar13 = *pbVar13 | 4;
        iVar10 = iVar10 + 1;
        pbVar13[-8] = 0xff;
        pbVar13[-7] = 0xff;
        pbVar13[-6] = 0xff;
        pbVar13[-5] = 0xff;
        pbVar13[-4] = 0xff;
        pbVar13[-3] = 0xff;
        pbVar13[-2] = 0xff;
        pbVar13[-1] = 0xff;
        pbVar13 = pbVar13 + 0x14;
      } while (iVar10 < iVar18);
    }
  }
  param_5 = *param_4;
  FUN_144c3e870(param_3,&param_5,&local_68,1);
  local_50 = 0;
  if ((-1 < (int)local_4c) && (local_58 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) << 2);
  }
  return param_2;
}



// FUNCTION 14500f120 FUN_14500f120 body=923 status=ok
// SIG undefined FUN_14500f120(void)

int * FUN_14500f120(undefined8 param_1,int *param_2,longlong param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  FUN_14500ec10();
  iVar12 = 0;
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_3 + 0x20) + 0x18) + (longlong)*param_4 * 0xc);
  piVar2 = (int *)(*(longlong *)(*(longlong *)(param_3 + 0x20) + 0xd0) + (longlong)*param_2 * 0xc);
  if (0 < (short)piVar1[2]) {
    do {
      iVar10 = *piVar2 + iVar12;
      iVar11 = *piVar1 + iVar12;
      iVar3 = *param_2;
      if (*(char *)(param_3 + 0x30) == '\x01') {
        lVar7 = *(longlong *)(param_3 + 0x20);
      }
      else {
        lVar7 = FUN_147e4bb26(param_3 + 0x20);
      }
      lVar4 = *(longlong *)(param_3 + 0x20);
      if (iVar11 < *(int *)(lVar4 + 0x30)) {
        lVar5 = (longlong)iVar11;
        if (*(int *)(lVar4 + 0x78) != 0) {
          iVar11 = *(int *)(*(longlong *)(lVar4 + 0x70) + lVar5 * 4);
        }
        if (iVar11 == -1) {
          lVar6 = *(longlong *)(lVar4 + 0x28);
        }
        else {
          lVar5 = (longlong)iVar11;
          lVar6 = *(longlong *)(lVar4 + 0xc0);
        }
        lVar6 = lVar6 + lVar5 * 0x14;
      }
      else {
        lVar6 = *(longlong *)(lVar4 + 0xe0) + (longlong)(iVar11 - *(int *)(lVar4 + 0x30)) * 0x14;
      }
      if (*(int *)(lVar6 + 8) != -1) {
        iVar11 = *(int *)(lVar4 + 0x20);
        lVar5 = (longlong)(iVar10 - *(int *)(lVar7 + 0x30));
        lVar4 = *(longlong *)(lVar7 + 0xe0);
        *(int *)(lVar4 + 8 + lVar5 * 0x14) = *(int *)(lVar6 + 8);
        *(undefined4 *)(lVar4 + lVar5 * 0x14 + 0xc) = *(undefined4 *)(lVar6 + 0xc);
        uVar8 = *(uint *)(lVar6 + 8) & 0x3fffff;
        if ((int)uVar8 < *(int *)(lVar7 + 0x30)) {
          uVar9 = uVar8;
          if (*(int *)(lVar7 + 0x78) != 0) {
            uVar9 = *(uint *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)uVar8 * 4);
          }
          if (uVar9 != 0xffffffff) {
            lVar7 = *(longlong *)(lVar7 + 0xc0);
            goto LAB_14500f2f4;
          }
          lVar7 = FUN_145011680(*(undefined8 *)(lVar7 + 0x28),(longlong *)(lVar7 + 0xc0),
                                *(undefined8 *)(lVar7 + 0x58),lVar7 + 0x130,
                                (longlong *)(lVar7 + 0x70),lVar7 + 0x80,uVar8,
                                *(undefined4 *)(lVar7 + 0x60));
        }
        else {
          uVar9 = uVar8 - *(int *)(lVar7 + 0x30);
          lVar7 = *(longlong *)(lVar7 + 0xe0);
LAB_14500f2f4:
          lVar7 = lVar7 + (longlong)(int)uVar9 * 0x14;
        }
        *(int *)(lVar7 + 0xc) = iVar11 + iVar3;
        *(int *)(lVar7 + 8) = iVar10;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < (short)piVar1[2]);
  }
  iVar12 = 0;
  if (0 < *(short *)((longlong)piVar1 + 10)) {
    do {
      iVar10 = piVar2[1] + iVar12;
      iVar11 = piVar1[1] + iVar12;
      iVar3 = *param_2;
      if (*(char *)(param_3 + 0x30) == '\x01') {
        lVar7 = *(longlong *)(param_3 + 0x20);
      }
      else {
        lVar7 = FUN_147e4bb26(param_3 + 0x20);
      }
      lVar4 = *(longlong *)(param_3 + 0x20);
      if (iVar11 < *(int *)(lVar4 + 0x30)) {
        lVar5 = (longlong)iVar11;
        if (*(int *)(lVar4 + 0x78) != 0) {
          iVar11 = *(int *)(*(longlong *)(lVar4 + 0x70) + lVar5 * 4);
        }
        if (iVar11 == -1) {
          lVar6 = *(longlong *)(lVar4 + 0x28);
        }
        else {
          lVar5 = (longlong)iVar11;
          lVar6 = *(longlong *)(lVar4 + 0xc0);
        }
        lVar6 = lVar6 + lVar5 * 0x14;
      }
      else {
        lVar6 = *(longlong *)(lVar4 + 0xe0) + (longlong)(iVar11 - *(int *)(lVar4 + 0x30)) * 0x14;
      }
      if (*(int *)(lVar6 + 8) != -1) {
        iVar11 = *(int *)(lVar4 + 0x20);
        lVar5 = (longlong)(iVar10 - *(int *)(lVar7 + 0x30));
        lVar4 = *(longlong *)(lVar7 + 0xe0);
        *(int *)(lVar4 + 8 + lVar5 * 0x14) = *(int *)(lVar6 + 8);
        *(undefined4 *)(lVar4 + lVar5 * 0x14 + 0xc) = *(undefined4 *)(lVar6 + 0xc);
        uVar8 = *(uint *)(lVar6 + 8) & 0x3fffff;
        if ((int)uVar8 < *(int *)(lVar7 + 0x30)) {
          uVar9 = uVar8;
          if (*(int *)(lVar7 + 0x78) != 0) {
            uVar9 = *(uint *)(*(longlong *)(lVar7 + 0x70) + (ulonglong)uVar8 * 4);
          }
          if (uVar9 != 0xffffffff) {
            lVar7 = *(longlong *)(lVar7 + 0xc0);
            goto LAB_14500f473;
          }
          lVar7 = FUN_145011680(*(undefined8 *)(lVar7 + 0x28),(longlong *)(lVar7 + 0xc0),
                                *(undefined8 *)(lVar7 + 0x58),lVar7 + 0x130,
                                (longlong *)(lVar7 + 0x70),lVar7 + 0x80,uVar8,
                                *(undefined4 *)(lVar7 + 0x60));
        }
        else {
          uVar9 = uVar8 - *(int *)(lVar7 + 0x30);
          lVar7 = *(longlong *)(lVar7 + 0xe0);
LAB_14500f473:
          lVar7 = lVar7 + (longlong)(int)uVar9 * 0x14;
        }
        *(int *)(lVar7 + 0xc) = iVar11 + iVar3;
        *(int *)(lVar7 + 8) = iVar10;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(short *)((longlong)piVar1 + 10));
  }
  return param_2;
}



// FUNCTION 14500f4c0 FUN_14500f4c0 body=571 status=ok
// SIG undefined FUN_14500f4c0(void)

void FUN_14500f4c0(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong lVar16;
  longlong *plVar17;
  int local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  longlong *plVar15;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    local_res20 = *(longlong *)(param_2 + 0x20);
  }
  else {
    local_res20 = FUN_147e4bb26(param_2 + 0x20);
  }
  lVar6 = *(longlong *)(param_2 + 0x20);
  plVar12 = (longlong *)0x0;
  local_res10[0] = *param_3;
  uVar13 = 0;
  plVar17 = plVar12;
  if ((*(int *)(lVar6 + 0x108) != 0) &&
     ((*(byte *)((longlong)local_res10[0] + *(longlong *)(lVar6 + 0x100)) & 8) != 0)) {
    lVar9 = FUN_144c441c0((longlong *)(lVar6 + 0x1c0),local_res10);
    if (lVar9 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = *(int *)(lVar9 + 4);
    }
    plVar17 = (longlong *)(*(longlong *)(lVar6 + 0x1c0) + 8 + (longlong)iVar8 * 0x38);
  }
  lVar9 = *plVar17;
  lVar6 = lVar9 + (longlong)(int)plVar17[1] * 0x14;
  plVar15 = plVar12;
  for (; lVar9 != lVar6; lVar9 = lVar9 + 0x14) {
    uVar13 = (uint)plVar15 + 1;
    if ((~(*(byte *)(lVar9 + 0x10) >> 3) & 1) == 0) {
      uVar13 = (uint)plVar15;
    }
    plVar15 = (longlong *)(ulonglong)uVar13;
  }
  local_res10[0] = *param_3;
  FUN_14500ec10(param_1,local_res18,param_2,local_res10,uVar13);
  lVar6 = *(longlong *)(param_2 + 0x20);
  iVar8 = *(int *)(lVar6 + 0x60);
  iVar11 = (((int)*(short *)(*(longlong *)(lVar6 + 0xd0) + 10 + (longlong)local_res18[0] * 0xc) -
            *(int *)(lVar6 + 0x30)) - uVar13) +
           *(int *)(*(longlong *)(lVar6 + 0xd0) + (longlong)local_res18[0] * 0xc + 4);
  sVar3 = *(short *)(*(longlong *)(lVar6 + 0x18) + 10 + (longlong)*param_3 * 0xc);
  sVar4 = *(short *)(*(longlong *)(lVar6 + 0x18) + 8 + (longlong)*param_3 * 0xc);
  plVar15 = plVar12;
  if (0 < (int)plVar17[1]) {
    do {
      iVar14 = (int)plVar15;
      puVar1 = (undefined4 *)(*plVar17 + (longlong)iVar14 * 0x14);
      if ((~(*(byte *)(*plVar17 + 0x10 + (longlong)iVar14 * 0x14) >> 3) & 1) != 0) {
        lVar9 = plVar17[2];
        lVar16 = (longlong)iVar11;
        lVar7 = *(longlong *)(local_res20 + 0x150);
        puVar2 = (undefined4 *)(*(longlong *)(local_res20 + 0xe0) + lVar16 * 0x14);
        iVar5 = *(int *)(local_res20 + 0x60);
        lVar10 = (longlong)(iVar5 * iVar11);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        lVar6 = lVar7 + lVar10 * 4;
        puVar2[2] = puVar1[2];
        puVar2[3] = puVar1[3];
        *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar1 + 4);
        *(undefined1 *)((longlong)puVar2 + 0x11) = *(undefined1 *)((longlong)puVar1 + 0x11);
        *(undefined2 *)((longlong)puVar2 + 0x12) = *(undefined2 *)((longlong)puVar1 + 0x12);
        FUN_144b3d470(lVar6,lVar9 + (longlong)(int)plVar12 * 4,
                      (longlong)(int)(((lVar10 + iVar5) * 4 - lVar6) + lVar7 >> 2) << 2);
        iVar11 = iVar11 + 1;
        *(short *)(*(longlong *)(local_res20 + 0x110) + lVar16 * 2) = sVar3 + sVar4 + (short)plVar15
        ;
      }
      plVar12 = (longlong *)(ulonglong)(uint)((int)plVar12 + iVar8);
      plVar15 = (longlong *)(ulonglong)(iVar14 + 1U);
    } while ((int)(iVar14 + 1U) < (int)plVar17[1]);
  }
  return;
}



// FUNCTION 14500f700 FUN_14500f700 body=377 status=ok
// SIG undefined FUN_14500f700(void)

void FUN_14500f700(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int local_res10 [2];
  
  plVar1 = (longlong *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar4 = *plVar1;
  }
  else {
    lVar4 = FUN_147e4bb26(plVar1);
  }
  iVar6 = *param_3;
  lVar7 = (longlong)iVar6;
  if (iVar6 != -1) {
    lVar5 = *plVar1;
    if (iVar6 < *(int *)(lVar5 + 0x20)) {
      if ((*(int *)(lVar5 + 0x98) == 0) ||
         (iVar6 = *(int *)(*(longlong *)(lVar5 + 0x90) + lVar7 * 4), iVar6 != -1)) {
        lVar7 = (longlong)iVar6 * 3;
        lVar5 = *(longlong *)(lVar5 + 0xb0);
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x18);
        lVar7 = lVar7 * 3;
      }
    }
    else {
      lVar7 = (longlong)(iVar6 - *(int *)(lVar5 + 0x20)) * 3;
      lVar5 = *(longlong *)(lVar5 + 0xd0);
    }
    piVar2 = (int *)(lVar5 + lVar7 * 4);
    uVar3 = *(ushort *)(param_3 + 2);
    if ((short)uVar3 < (short)piVar2[2]) {
      local_res10[0] = (uint)uVar3 + *piVar2;
    }
    else {
      local_res10[0] = (uint)(ushort)(uVar3 - (short)piVar2[2]) + piVar2[1];
    }
    if ((*(int *)(lVar4 + 0x78) != 0) &&
       (-1 < *(int *)(*(longlong *)(lVar4 + 0x70) + (longlong)local_res10[0] * 4))) {
      FUN_144c41bb0(lVar4,local_res10);
    }
  }
  iVar6 = param_3[1];
  lVar7 = (longlong)iVar6;
  if (iVar6 != -1) {
    lVar5 = *plVar1;
    if (iVar6 < *(int *)(lVar5 + 0x20)) {
      if ((*(int *)(lVar5 + 0x98) == 0) ||
         (iVar6 = *(int *)(*(longlong *)(lVar5 + 0x90) + lVar7 * 4), iVar6 != -1)) {
        lVar7 = (longlong)iVar6 * 3;
        lVar5 = *(longlong *)(lVar5 + 0xb0);
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x18);
        lVar7 = lVar7 * 3;
      }
    }
    else {
      lVar7 = (longlong)(iVar6 - *(int *)(lVar5 + 0x20)) * 3;
      lVar5 = *(longlong *)(lVar5 + 0xd0);
    }
    piVar2 = (int *)(lVar5 + lVar7 * 4);
    uVar3 = *(ushort *)((longlong)param_3 + 10);
    if ((short)uVar3 < (short)piVar2[2]) {
      local_res10[0] = (uint)uVar3 + *piVar2;
    }
    else {
      local_res10[0] = (uint)(ushort)(uVar3 - (short)piVar2[2]) + piVar2[1];
    }
    if ((*(int *)(lVar4 + 0x78) != 0) &&
       (-1 < *(int *)(*(longlong *)(lVar4 + 0x70) + (longlong)local_res10[0] * 4))) {
      FUN_144c41bb0(lVar4,local_res10);
    }
  }
  return;
}



// FUNCTION 14500f880 FUN_14500f880 body=779 status=ok
// SIG undefined FUN_14500f880(void)

void FUN_14500f880(longlong param_1,longlong param_2,int *param_3)

{
  int *piVar1;
  short sVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined4 local_68 [2];
  int local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [16];
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar5 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar5 = FUN_147e4bb26(param_2 + 0x20);
  }
  lVar7 = *(longlong *)(param_2 + 0x20);
  local_60 = *param_3;
  lVar14 = (longlong)local_60;
  if ((*(int *)(lVar7 + 0x108) == 0) ||
     ((*(byte *)(lVar14 + *(longlong *)(lVar7 + 0x100)) & 1) == 0)) {
    local_60 = param_3[1];
    uVar10 = *(ushort *)((longlong)param_3 + 10);
    iVar11 = *(int *)(lVar7 + 0x20);
    if (local_60 < iVar11) {
      iVar12 = local_60;
      if (*(int *)(lVar7 + 0x98) != 0) {
        iVar12 = *(int *)(*(longlong *)(lVar7 + 0x90) + (longlong)local_60 * 4);
      }
      if (iVar12 == -1) {
        lVar8 = *(longlong *)(lVar7 + 0x18);
        lVar9 = (longlong)local_60 * 3;
      }
      else {
        lVar9 = (longlong)iVar12 * 3;
        lVar8 = *(longlong *)(lVar7 + 0xb0);
      }
    }
    else {
      lVar9 = (longlong)(local_60 - iVar11) * 3;
      lVar8 = *(longlong *)(lVar7 + 0xd0);
    }
    piVar1 = (int *)(lVar8 + lVar9 * 4);
    sVar2 = *(short *)(lVar8 + 8 + lVar9 * 4);
    if ((short)uVar10 < sVar2) {
      local_5c = (uint)uVar10 + *piVar1;
      uVar4 = (uint)*(ushort *)(param_3 + 2);
    }
    else {
      local_5c = (uint)(ushort)(uVar10 - sVar2) + piVar1[1];
      uVar4 = (uint)*(ushort *)(param_3 + 2);
    }
  }
  else {
    uVar10 = *(ushort *)(param_3 + 2);
    iVar11 = *(int *)(lVar7 + 0x20);
    if (local_60 < iVar11) {
      iVar12 = local_60;
      if (*(int *)(lVar7 + 0x98) != 0) {
        iVar12 = *(int *)(*(longlong *)(lVar7 + 0x90) + lVar14 * 4);
      }
      if (iVar12 == -1) {
        lVar8 = *(longlong *)(lVar7 + 0x18);
        lVar14 = lVar14 * 3;
      }
      else {
        lVar14 = (longlong)iVar12 * 3;
        lVar8 = *(longlong *)(lVar7 + 0xb0);
      }
    }
    else {
      lVar14 = (longlong)(local_60 - iVar11) * 3;
      lVar8 = *(longlong *)(lVar7 + 0xd0);
    }
    piVar1 = (int *)(lVar8 + lVar14 * 4);
    sVar2 = *(short *)(lVar8 + 8 + lVar14 * 4);
    if ((short)uVar10 < sVar2) {
      local_5c = (uint)uVar10 + *piVar1;
    }
    else {
      local_5c = (uint)(ushort)(uVar10 - sVar2) + piVar1[1];
    }
    lVar14 = (longlong)param_3[1];
    uVar4 = (uint)*(ushort *)((longlong)param_3 + 10);
  }
  iVar12 = local_60;
  iVar13 = (int)lVar14;
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
    if (*(int *)(lVar7 + 0x98) != 0) {
      iVar11 = *(int *)(*(longlong *)(lVar7 + 0x90) + lVar14 * 4);
    }
    if (iVar11 == -1) {
      lVar7 = *(longlong *)(lVar7 + 0x18);
      lVar14 = lVar14 * 3;
    }
    else {
      lVar14 = (longlong)iVar11 * 3;
      lVar7 = *(longlong *)(lVar7 + 0xb0);
    }
  }
  else {
    lVar14 = (longlong)(iVar13 - iVar11) * 3;
    lVar7 = *(longlong *)(lVar7 + 0xd0);
  }
  piVar1 = (int *)(lVar7 + lVar14 * 4);
  sVar2 = *(short *)(lVar7 + 8 + lVar14 * 4);
  if ((short)uVar4 < sVar2) {
    iVar11 = uVar4 + *piVar1;
  }
  else {
    iVar11 = (uint)(ushort)((short)uVar4 - sVar2) + piVar1[1];
  }
  local_4c = 0x80000000;
  local_58 = (undefined4 *)0x0;
  local_50 = 0;
  local_res18[0] = CONCAT22(local_res18[0]._2_2_,uVar10);
  local_res20[0] = local_60;
  pcVar6 = (char *)FUN_145010350(param_1,local_res10,param_2,local_res20,local_res18);
  if (*pcVar6 != '\0') {
    FUN_144fbaf90(param_1 + 0xb8,local_48,&local_60);
  }
  local_res10[0] = CONCAT22(local_res10[0]._2_2_,uVar10);
  local_res18[0] = iVar12;
  FUN_145011060(param_1,param_2,local_res18,local_res10,&local_58,0);
  local_res10[0] = iVar11;
  lVar7 = FUN_144c41b60(lVar5,local_res10);
  puVar3 = local_58;
  *(undefined4 *)(lVar7 + 0xc) = *local_58;
  *(undefined4 *)(lVar7 + 8) = local_58[1];
  lVar7 = (longlong)(local_58[1] - *(int *)(lVar5 + 0x30));
  lVar5 = *(longlong *)(lVar5 + 0xe0);
  *(int *)(lVar5 + 0xc + lVar7 * 0x14) = iVar13;
  *(int *)(lVar5 + 8 + lVar7 * 0x14) = iVar11;
  local_68[0] = *local_58;
  FUN_144c3f140(param_2,local_68);
  local_res10[0] = iVar13;
  FUN_144c3f140(param_2,local_res10);
  if (-1 < (int)local_4c) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,puVar3,(ulonglong)(local_4c & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 14500fb90 FUN_14500fb90 body=937 status=ok
// SIG undefined FUN_14500fb90(void)

void FUN_14500fb90(longlong param_1,longlong param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ushort **ppuVar9;
  ushort *puVar10;
  longlong lVar11;
  longlong lVar12;
  ushort **ppuVar13;
  int local_res10 [2];
  int *local_res18;
  ulonglong in_stack_ffffffffffffff00;
  ushort local_e8 [4];
  int *local_e0;
  ushort *local_d8;
  ushort *puStack_d0;
  undefined4 local_c8;
  ushort *local_c0;
  int local_b8 [2];
  longlong local_b0;
  int local_a8 [2];
  ushort **local_a0;
  undefined8 local_98;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [40];
  
  local_res18 = param_3;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar12 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar12 = FUN_147e4bb26();
  }
  local_c0 = (ushort *)0x0;
  local_b8[0] = 0;
  ppuVar9 = &local_c0;
  local_b0 = 0;
  ppuVar13 = &local_c0;
  local_a8[0] = 0;
  puVar10 = (ushort *)(param_3 + 2);
  local_78 = 2;
  local_88 = 2;
  local_b8[1] = 0x80000000;
  local_a8[1] = 0x80000000;
  local_e0 = param_3;
  local_d8 = puVar10;
  do {
    local_e8[0] = *puVar10;
    local_a0 = ppuVar9;
    local_98 = puVar10;
    local_e0._0_4_ = *param_3;
    FUN_145010350(param_1,local_res10,param_2,&local_e0,local_e8);
    local_e8[0] = *puVar10;
    lVar11 = 0;
    in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffff00000000;
    local_e0 = (int *)CONCAT44(local_e0._4_4_,*param_3);
    FUN_145011060(param_1,param_2,&local_e0,local_e8,ppuVar9,in_stack_ffffffffffffff00);
    iVar6 = *(int *)(ppuVar13 + 1);
    if (0 < (longlong)iVar6) {
      puVar10 = *ppuVar13;
      do {
        iVar5 = *(int *)(puVar10 + lVar11 * 4 + 2);
        if (iVar5 < *(int *)(lVar12 + 0x30)) {
          if (*(int *)(lVar12 + 0x78) != 0) {
            iVar5 = *(int *)(*(longlong *)(lVar12 + 0x70) + (longlong)iVar5 * 4);
          }
          if (iVar5 != -1) {
            lVar7 = *(longlong *)(lVar12 + 0xc0);
            goto LAB_14500fce3;
          }
          lVar7 = 0;
        }
        else {
          iVar5 = iVar5 - *(int *)(lVar12 + 0x30);
          lVar7 = *(longlong *)(lVar12 + 0xe0);
LAB_14500fce3:
          lVar7 = lVar7 + (longlong)iVar5 * 0x14;
        }
        *(undefined8 *)(lVar7 + 8) = 0xffffffffffffffff;
        local_c8 = *(undefined4 *)(puVar10 + lVar11 * 4);
        FUN_144c3f140(param_2);
        lVar11 = lVar11 + 1;
        ppuVar9 = local_a0;
      } while (lVar11 < iVar6);
    }
    piVar4 = local_res18;
    ppuVar9 = ppuVar9 + 2;
    puVar10 = local_98 + 1;
    param_3 = param_3 + 1;
    ppuVar13 = ppuVar13 + 2;
    local_88 = local_88 + -1;
    if (local_88 == 0) {
      lVar12 = *(longlong *)(param_2 + 0x20);
      iVar6 = *local_res18;
      lVar11 = (longlong)iVar6;
      iVar5 = *(int *)(lVar12 + 0x20);
      uVar2 = *local_d8;
      if (iVar6 < iVar5) {
        if (*(int *)(lVar12 + 0x98) != 0) {
          iVar6 = *(int *)(*(longlong *)(lVar12 + 0x90) + lVar11 * 4);
        }
        if (iVar6 == -1) {
          lVar7 = *(longlong *)(lVar12 + 0x18);
          lVar11 = lVar11 * 3;
        }
        else {
          lVar11 = (longlong)iVar6 * 3;
          lVar7 = *(longlong *)(lVar12 + 0xb0);
        }
      }
      else {
        lVar11 = (longlong)(iVar6 - iVar5) * 3;
        lVar7 = *(longlong *)(lVar12 + 0xd0);
      }
      piVar1 = (int *)(lVar7 + lVar11 * 4);
      sVar3 = *(short *)(lVar7 + 8 + lVar11 * 4);
      if ((short)uVar2 < sVar3) {
        local_res10[0] = (uint)uVar2 + *piVar1;
      }
      else {
        local_res10[0] = (uint)(ushort)(uVar2 - sVar3) + piVar1[1];
      }
      iVar6 = local_res18[1];
      lVar11 = (longlong)iVar6;
      uVar2 = *(ushort *)((longlong)local_res18 + 10);
      if (iVar6 < iVar5) {
        if (*(int *)(lVar12 + 0x98) != 0) {
          iVar6 = *(int *)(*(longlong *)(lVar12 + 0x90) + lVar11 * 4);
        }
        if (iVar6 == -1) {
          lVar12 = *(longlong *)(lVar12 + 0x18);
          lVar11 = lVar11 * 3;
        }
        else {
          lVar11 = (longlong)iVar6 * 3;
          lVar12 = *(longlong *)(lVar12 + 0xb0);
        }
      }
      else {
        lVar11 = (longlong)(iVar6 - iVar5) * 3;
        lVar12 = *(longlong *)(lVar12 + 0xd0);
      }
      piVar1 = (int *)(lVar12 + lVar11 * 4);
      sVar3 = *(short *)(lVar12 + 8 + lVar11 * 4);
      if ((short)uVar2 < sVar3) {
        iVar6 = (uint)uVar2 + *piVar1;
      }
      else {
        iVar6 = (uint)(ushort)(uVar2 - sVar3) + piVar1[1];
      }
      local_res18 = (int *)CONCAT44(local_res18._4_4_,iVar6);
      lStack_80 = local_b0 + (longlong)local_a8[0] * 8;
      local_88 = local_b0;
      puStack_d0 = local_c0 + (longlong)local_b8[0] * 4;
      local_d8 = local_c0;
      local_a0 = ppuVar9;
      local_98 = puVar10;
      FUN_145010510(param_1,param_2,local_res10,&local_res18,&local_d8,&local_88,param_4);
      FUN_144fbaf90(param_1 + 0xb8,local_70,piVar4);
      FUN_144fbaf90(param_1 + 0xb8,local_60,piVar4 + 1);
      puVar8 = (undefined4 *)((longlong)&local_98 + 4);
      lVar12 = local_78;
      do {
        lVar12 = lVar12 + -1;
        puVar8[-5] = 0;
        if ((-1 < (int)puVar8[-4]) && (*(longlong *)(puVar8 + -7) != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,*(longlong *)(puVar8 + -7),
                     (ulonglong)(puVar8[-4] & 0x7fffffff) << 3);
        }
        *(undefined8 *)(puVar8 + -7) = 0;
        puVar8[-4] = 0x80000000;
        puVar8 = puVar8 + -4;
      } while (lVar12 != 0);
      return;
    }
  } while( true );
}



// FUNCTION 14500ff40 FUN_14500ff40 body=1024 status=ok
// SIG undefined FUN_14500ff40(void)

void FUN_14500ff40(longlong param_1,longlong param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  int *local_res10;
  int *local_res18;
  undefined1 local_res20 [8];
  ulonglong in_stack_fffffffffffffeb0;
  int local_138 [4];
  longlong local_128;
  longlong lStack_120;
  undefined4 local_118;
  undefined2 local_110 [2];
  undefined4 local_10c;
  longlong local_108;
  int local_100;
  undefined4 local_fc;
  longlong *local_f8;
  int local_f0 [2];
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  undefined8 local_98 [2];
  undefined4 local_88 [4];
  undefined1 local_78 [56];
  
  local_res18 = param_3;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar17 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar17 = FUN_147e4bb26();
  }
  local_108 = 0;
  piVar15 = param_3 + 2;
  local_c8 = 2;
  plVar12 = &local_108;
  local_128 = 2;
  plVar16 = &local_108;
  puVar13 = local_88;
  local_100 = 0;
  local_fc = 0x80000000;
  local_f8 = (longlong *)0x0;
  local_f0[0] = 0;
  local_f0[1] = 0x80000000;
  local_res10 = param_3;
  do {
    local_138[0] = *param_3;
    local_e8 = plVar16;
    local_e0 = piVar15;
    local_d8 = plVar12;
    local_res10._0_2_ = (short)*piVar15;
    FUN_145010350(param_1,local_res20,param_2,local_138,&local_res10);
    local_res10 = (int *)CONCAT62(local_res10._2_6_,(short)*piVar15);
    lVar14 = 0;
    local_138[0] = *param_3;
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffff00000000;
    FUN_145011060(param_1,param_2,local_138,&local_res10,plVar16,in_stack_fffffffffffffeb0);
    lVar5 = plVar12[1];
    if (0 < (longlong)(int)lVar5) {
      lVar7 = *plVar12;
      do {
        iVar6 = *(int *)(lVar7 + 4 + lVar14 * 8);
        if (iVar6 < *(int *)(lVar17 + 0x30)) {
          if (*(int *)(lVar17 + 0x78) != 0) {
            iVar6 = *(int *)(*(longlong *)(lVar17 + 0x70) + (longlong)iVar6 * 4);
          }
          if (iVar6 != -1) {
            lVar8 = *(longlong *)(lVar17 + 0xc0);
            goto LAB_1450100c3;
          }
          lVar8 = 0;
        }
        else {
          iVar6 = iVar6 - *(int *)(lVar17 + 0x30);
          lVar8 = *(longlong *)(lVar17 + 0xe0);
LAB_1450100c3:
          lVar8 = lVar8 + (longlong)iVar6 * 0x14;
        }
        *(undefined8 *)(lVar8 + 8) = 0xffffffffffffffff;
        local_118 = *(undefined4 *)(lVar7 + lVar14 * 8);
        FUN_144c3f140(param_2);
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)lVar5);
    }
    lVar7 = (longlong)*param_3;
    lVar5 = *(longlong *)(param_2 + 0x20);
    local_res10 = (int *)CONCAT44(local_res10._4_4_,*param_3);
    lVar14 = *(longlong *)(lVar5 + 0x18);
    if ((*(int *)(lVar5 + 0x108) == 0) ||
       ((*(byte *)(lVar7 + *(longlong *)(lVar5 + 0x100)) & 8) == 0)) {
      plVar12 = (longlong *)0x0;
    }
    else {
      lVar8 = FUN_144c441c0((longlong *)(lVar5 + 0x1c0),&local_res10);
      if (lVar8 == 0) {
        iVar6 = -1;
      }
      else {
        iVar6 = *(int *)(lVar8 + 4);
      }
      plVar12 = (longlong *)(*(longlong *)(lVar5 + 0x1c0) + 8 + (longlong)iVar6 * 0x38);
    }
    lVar5 = *plVar12;
    lVar8 = *(longlong *)(param_2 + 0x20);
    uVar9 = (ulonglong)
            (ushort)(((short)*local_e0 - *(short *)(lVar14 + 8 + lVar7 * 0xc)) -
                    *(short *)(lVar14 + 10 + lVar7 * 0xc));
    iVar6 = *(int *)(lVar5 + uVar9 * 0x14);
    if (iVar6 < *(int *)(lVar8 + 0x40)) {
      puVar10 = (undefined8 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x38));
    }
    else {
      puVar10 = (undefined8 *)
                ((longlong)(iVar6 - *(int *)(lVar8 + 0x40)) * 0x10 + *(longlong *)(lVar8 + 0xf0));
    }
    uVar4 = puVar10[1];
    *(undefined8 *)(puVar13 + -4) = *puVar10;
    *(undefined8 *)(puVar13 + -2) = uVar4;
    iVar6 = *(int *)(lVar5 + 4 + uVar9 * 0x14);
    if (iVar6 < *(int *)(lVar8 + 0x40)) {
      puVar11 = (undefined4 *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar8 + 0x38));
    }
    else {
      puVar11 = (undefined4 *)
                ((longlong)(iVar6 - *(int *)(lVar8 + 0x40)) * 0x10 + *(longlong *)(lVar8 + 0xf0));
    }
    piVar15 = (int *)((longlong)local_e0 + 2);
    plVar16 = local_e8 + 2;
    uVar1 = puVar11[1];
    uVar2 = puVar11[2];
    uVar3 = puVar11[3];
    plVar12 = local_d8 + 2;
    *puVar13 = *puVar11;
    puVar13[1] = uVar1;
    puVar13[2] = uVar2;
    puVar13[3] = uVar3;
    param_3 = param_3 + 1;
    puVar13 = puVar13 + 8;
    local_128 = local_128 + -1;
    if (local_128 == 0) {
      plStack_d0 = local_f8 + local_f0[0];
      local_110[0] = 0;
      local_d8 = local_f8;
      lStack_120 = local_108 + (longlong)local_100 * 8;
      local_128 = local_108;
      local_10c = param_4;
      local_e8 = plVar16;
      local_e0 = piVar15;
      FUN_1453312e0(*(undefined8 *)(param_1 + 0x18),param_2,param_2,local_98,local_78,&local_128,
                    &local_d8,local_110);
      piVar15 = local_res18;
      FUN_144fbaf90(param_1 + 0xb8,local_c0,local_res18);
      FUN_144fbaf90(param_1 + 0xb8,local_b0,piVar15 + 1);
      puVar13 = (undefined4 *)((longlong)&local_e0 + 4);
      lVar17 = local_c8;
      do {
        lVar17 = lVar17 + -1;
        puVar13[-5] = 0;
        if ((-1 < (int)puVar13[-4]) && (*(longlong *)(puVar13 + -7) != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,*(longlong *)(puVar13 + -7),
                     (ulonglong)(puVar13[-4] & 0x7fffffff) << 3);
        }
        *(undefined8 *)(puVar13 + -7) = 0;
        puVar13[-4] = 0x80000000;
        puVar13 = puVar13 + -4;
      } while (lVar17 != 0);
      return;
    }
  } while( true );
}



// FUNCTION 145010350 FUN_145010350 body=433 status=ok
// SIG undefined FUN_145010350(void)

char * FUN_145010350(longlong param_1,char *param_2,longlong param_3,int *param_4,short *param_5)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  char local_res18 [8];
  int local_res20 [2];
  undefined4 local_48;
  int local_44 [3];
  
  lVar2 = *(longlong *)(param_3 + 0x20);
  local_res20[0] = *param_4;
  lVar4 = (longlong)local_res20[0];
  if (*(int *)(lVar2 + 0x108) == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = *(byte *)(lVar4 + *(longlong *)(lVar2 + 0x100));
  }
  if (local_res20[0] < *(int *)(lVar2 + 0x20)) {
    iVar8 = local_res20[0];
    if (*(int *)(lVar2 + 0x98) != 0) {
      iVar8 = *(int *)(*(longlong *)(lVar2 + 0x90) + lVar4 * 4);
    }
    if (iVar8 == -1) {
      lVar5 = *(longlong *)(lVar2 + 0x18);
      lVar4 = lVar4 * 3;
    }
    else {
      lVar4 = (longlong)iVar8 * 3;
      lVar5 = *(longlong *)(lVar2 + 0xb0);
    }
  }
  else {
    lVar4 = (longlong)(local_res20[0] - *(int *)(lVar2 + 0x20)) * 3;
    lVar5 = *(longlong *)(lVar2 + 0xd0);
  }
  lVar5 = lVar5 + lVar4 * 4;
  if (((bVar9 & 1) == 0) ||
     (FUN_144c42800(lVar2,local_res18,local_res20,&local_48,local_44), local_res18[0] == '\0')) {
    *param_2 = '\0';
  }
  else {
    iVar7 = local_44[0] - *(int *)(lVar2 + 0x20);
    cVar6 = '\0';
    for (iVar8 = local_48 - *(int *)(lVar2 + 0x20); iVar8 != iVar7; iVar8 = iVar8 + 1) {
      uVar3 = (uint)local_48 >> 0x10;
      local_48 = CONCAT22((short)uVar3,*param_5);
      local_44[0] = iVar8;
      if (*param_5 < *(short *)(lVar5 + 8)) {
        FUN_1453304b0(local_res18);
        cVar1 = local_res18[0];
        if (cVar6 != '\0') goto LAB_1450104ca;
LAB_1450104c4:
        if (cVar1 != cVar6) goto LAB_1450104ca;
        cVar6 = '\0';
      }
      else {
        FUN_145330aa0(local_res20,*(undefined8 *)(param_1 + 0x18),param_3,lVar5,&local_48,local_44);
        if (cVar6 == '\0') {
          cVar1 = (char)local_res20[0];
          goto LAB_1450104c4;
        }
LAB_1450104ca:
        cVar6 = '\x01';
      }
    }
    *param_2 = cVar6;
  }
  return param_2;
}



// FUNCTION 145010510 FUN_145010510 body=486 status=ok
// SIG undefined FUN_145010510(void)

void FUN_145010510(longlong param_1,longlong param_2,int *param_3,int *param_4,undefined4 *param_5,
                  undefined4 *param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined2 local_res8 [2];
  undefined4 local_resc;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  iVar4 = *param_3;
  lVar5 = (longlong)iVar4;
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (iVar4 < *(int *)(lVar3 + 0x30)) {
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar4 = *(int *)(*(longlong *)(lVar3 + 0x70) + lVar5 * 4);
    }
    if (iVar4 == -1) {
      lVar7 = *(longlong *)(lVar3 + 0x28);
      lVar5 = lVar5 * 5;
    }
    else {
      lVar5 = (longlong)iVar4 * 5;
      lVar7 = *(longlong *)(lVar3 + 0xc0);
    }
  }
  else {
    lVar5 = (longlong)(iVar4 - *(int *)(lVar3 + 0x30)) * 5;
    lVar7 = *(longlong *)(lVar3 + 0xe0);
  }
  piVar1 = (int *)(lVar7 + lVar5 * 4);
  iVar4 = *(int *)(lVar3 + 0x40);
  iVar2 = *piVar1;
  if (iVar2 < iVar4) {
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    puVar6 = (undefined8 *)((longlong)(iVar2 - iVar4) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  local_28 = *puVar6;
  uStack_20 = puVar6[1];
  iVar2 = piVar1[1];
  if (iVar2 < iVar4) {
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    puVar6 = (undefined8 *)((longlong)(iVar2 - iVar4) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  local_18 = *puVar6;
  uStack_10 = puVar6[1];
  iVar4 = *param_4;
  lVar5 = (longlong)iVar4;
  if (iVar4 < *(int *)(lVar3 + 0x30)) {
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar4 = *(int *)(*(longlong *)(lVar3 + 0x70) + lVar5 * 4);
    }
    if (iVar4 == -1) {
      lVar7 = *(longlong *)(lVar3 + 0x28);
      lVar5 = lVar5 * 5;
    }
    else {
      lVar5 = (longlong)iVar4 * 5;
      lVar7 = *(longlong *)(lVar3 + 0xc0);
    }
  }
  else {
    lVar5 = (longlong)(iVar4 - *(int *)(lVar3 + 0x30)) * 5;
    lVar7 = *(longlong *)(lVar3 + 0xe0);
  }
  piVar1 = (int *)(lVar7 + lVar5 * 4);
  iVar4 = *(int *)(lVar3 + 0x40);
  iVar2 = *piVar1;
  if (iVar2 < iVar4) {
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    puVar6 = (undefined8 *)((longlong)(iVar2 - iVar4) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  local_48 = *puVar6;
  uStack_40 = puVar6[1];
  iVar2 = piVar1[1];
  if (iVar2 < iVar4) {
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    puVar6 = (undefined8 *)((longlong)(iVar2 - iVar4) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  local_38 = *puVar6;
  uStack_30 = puVar6[1];
  local_68 = *param_6;
  uStack_64 = param_6[1];
  uStack_60 = param_6[2];
  uStack_5c = param_6[3];
  local_resc = param_7;
  local_res8[0] = 0;
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  FUN_1453312e0(*(undefined8 *)(param_1 + 0x18),param_2,param_2,&local_28,&local_48,&local_58,
                &local_68,local_res8);
  return;
}



// FUNCTION 145010700 FUN_145010700 body=723 status=ok
// SIG undefined FUN_145010700(void)

void FUN_145010700(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6,longlong *param_7,longlong param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  undefined4 local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  plVar4 = param_7;
  plVar3 = param_6;
  if ((*param_6 != param_6[1]) && (*param_7 != param_7[1])) {
    if (*(char *)(param_2 + 0x30) == '\x01') {
      lVar5 = *(longlong *)(param_2 + 0x20);
    }
    else {
      lVar5 = FUN_147e4bb26(param_2 + 0x20);
    }
    if (*(char *)(param_3 + 0x30) == '\x01') {
      lVar6 = *(longlong *)(param_3 + 0x20);
    }
    else {
      lVar6 = FUN_147e4bb26(param_3 + 0x20);
    }
    iStack_94 = param_4[1];
    lVar9 = (longlong)iStack_94;
    if (iStack_94 < *(int *)(lVar5 + 0x30)) {
      iVar10 = iStack_94;
      if (*(int *)(lVar5 + 0x78) != 0) {
        iVar10 = *(int *)(*(longlong *)(lVar5 + 0x70) + lVar9 * 4);
      }
      if (iVar10 == -1) {
        lVar5 = *(longlong *)(lVar5 + 0x28);
      }
      else {
        lVar9 = (longlong)iVar10;
        lVar5 = *(longlong *)(lVar5 + 0xc0);
      }
      piVar11 = (int *)(lVar5 + lVar9 * 0x14);
    }
    else {
      piVar11 = (int *)(*(longlong *)(lVar5 + 0xe0) +
                       (longlong)(iStack_94 - *(int *)(lVar5 + 0x30)) * 0x14);
    }
    param_6._4_4_ = param_5[1];
    if (param_6._4_4_ < *(int *)(lVar6 + 0x30)) {
      iVar10 = param_6._4_4_;
      if (*(int *)(lVar6 + 0x78) != 0) {
        iVar10 = *(int *)(*(longlong *)(lVar6 + 0x70) + (longlong)param_6._4_4_ * 4);
      }
      if (iVar10 == -1) {
        lVar5 = *(longlong *)(lVar6 + 0x28);
        lVar9 = (longlong)param_6._4_4_ * 5;
      }
      else {
        lVar9 = (longlong)iVar10 * 5;
        lVar5 = *(longlong *)(lVar6 + 0xc0);
      }
    }
    else {
      lVar9 = (longlong)(param_6._4_4_ - *(int *)(lVar6 + 0x30)) * 5;
      lVar5 = *(longlong *)(lVar6 + 0xe0);
    }
    piVar1 = (int *)(lVar5 + lVar9 * 4);
    if ((*(byte *)(piVar11 + 4) & 0x10) == 0) {
      local_88 = (undefined4)*plVar4;
      uStack_84 = *(undefined4 *)((longlong)plVar4 + 4);
      uStack_80 = (undefined4)plVar4[1];
      uStack_7c = *(undefined4 *)((longlong)plVar4 + 0xc);
      local_78 = *plVar3;
      lStack_70 = plVar3[1];
      local_98 = *param_4;
      param_6._0_2_ = (undefined2)*param_5;
      param_6._2_2_ = (undefined2)((uint)*param_5 >> 0x10);
      FUN_1450109e0(param_1,param_2,param_3,&local_98,&param_6,&local_78,&local_88,param_8);
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x20);
      iVar10 = *piVar11;
      iVar2 = *(int *)(lVar5 + 0x40);
      if (iVar10 < iVar2) {
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar5 + 0x38));
      }
      else {
        puVar7 = (undefined8 *)((longlong)(iVar10 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
      }
      local_58 = *puVar7;
      uStack_50 = puVar7[1];
      iVar10 = piVar11[1];
      if (iVar10 < iVar2) {
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar5 + 0x38));
      }
      else {
        puVar7 = (undefined8 *)((longlong)(iVar10 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
      }
      local_48 = *puVar7;
      uStack_40 = puVar7[1];
      lVar5 = *(longlong *)(param_3 + 0x20);
      iVar10 = *piVar1;
      iVar2 = *(int *)(lVar5 + 0x40);
      if (iVar10 < iVar2) {
        plVar8 = (longlong *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar5 + 0x38));
      }
      else {
        plVar8 = (longlong *)((longlong)(iVar10 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
      }
      local_78 = *plVar8;
      lStack_70 = plVar8[1];
      iVar10 = piVar1[1];
      if (iVar10 < iVar2) {
        puVar7 = (undefined8 *)((longlong)iVar10 * 0x10 + *(longlong *)(lVar5 + 0x38));
      }
      else {
        puVar7 = (undefined8 *)((longlong)(iVar10 - iVar2) * 0x10 + *(longlong *)(lVar5 + 0xf0));
      }
      local_68 = *puVar7;
      uStack_60 = puVar7[1];
      param_6._4_4_ = *(undefined4 *)(param_8 + 0x18);
      local_88 = (undefined4)*plVar3;
      uStack_84 = *(undefined4 *)((longlong)plVar3 + 4);
      uStack_80 = (undefined4)plVar3[1];
      uStack_7c = *(undefined4 *)((longlong)plVar3 + 0xc);
      local_98 = (undefined4)*plVar4;
      iStack_94 = *(undefined4 *)((longlong)plVar4 + 4);
      uStack_90 = (undefined4)plVar4[1];
      uStack_8c = *(undefined4 *)((longlong)plVar4 + 0xc);
      param_6._0_2_ = 0;
      FUN_1453312e0(param_1,param_2,param_3,&local_58,&local_78,&local_88,&local_98,&param_6);
    }
  }
  return;
}



// FUNCTION 1450109e0 FUN_1450109e0 body=1663 status=ok
// SIG undefined FUN_1450109e0(void)

void FUN_1450109e0(undefined8 param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined4 *param_5,float *param_6,float *param_7,longlong param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong local_res10;
  longlong local_res18;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar21;
  undefined8 in_stack_fffffffffffffeb0;
  undefined4 uVar22;
  undefined2 local_138 [2];
  undefined4 local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  float local_c8;
  float local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float local_94;
  float local_88 [4];
  undefined1 local_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  
  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffea8 >> 0x20);
  uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffeb0 >> 0x20);
  plVar1 = (longlong *)(param_2 + 0x20);
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar13 = *plVar1;
  }
  else {
    lVar13 = FUN_147e4bb26(plVar1);
  }
  plVar3 = (longlong *)(param_3 + 0x20);
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar16 = *plVar3;
  }
  else {
    lVar16 = FUN_147e4bb26(plVar3);
  }
  local_108 = *(undefined4 *)(param_2 + 0xc0);
  uStack_104 = *(undefined4 *)(param_2 + 0xc4);
  uStack_100 = *(undefined4 *)(param_2 + 200);
  uStack_fc = *(undefined4 *)(param_2 + 0xcc);
  puVar9 = *(uint **)param_6;
  if (((int)(*(longlong *)(param_6 + 2) - (longlong)puVar9 >> 3) == 1) &&
     (puVar10 = *(uint **)param_7, (int)(*(longlong *)(param_7 + 2) - (longlong)puVar10 >> 3) == 1))
  {
    local_124 = *puVar9;
    uVar6 = puVar9[1];
    uVar7 = puVar10[1];
    local_128 = *puVar10;
    fVar5 = *(float *)(param_8 + 4);
    local_130 = uVar7;
    local_12c = uVar6;
    FUN_1453302d0(&local_118,local_res10,local_res18,&local_108,&local_12c,&local_130);
    param_3 = local_res18;
    param_2 = local_res10;
    if (local_118 < fVar5) {
      iVar12 = *(int *)(lVar13 + 0x17c);
      iVar8 = *(int *)(lVar16 + 0x17c);
      FUN_144c43540(lVar13,lVar16);
      lVar18 = *(longlong *)(lVar13 + 0xe0);
      lVar14 = (longlong)(int)(uVar6 - *(int *)(lVar13 + 0x30));
      uVar19 = iVar8 << 0x16;
      uVar20 = iVar12 << 0x16;
      lVar15 = (longlong)(int)(uVar7 - *(int *)(lVar16 + 0x30));
      lVar11 = *(longlong *)(lVar16 + 0xe0);
      pbVar4 = (byte *)(lVar18 + 0x10 + lVar14 * 0x14);
      *pbVar4 = *pbVar4 | 0x40;
      *(uint *)(lVar18 + 8 + lVar14 * 0x14) = uVar7 | uVar19;
      *(uint *)(lVar18 + 0xc + lVar14 * 0x14) = local_128 | uVar19;
      pbVar4 = (byte *)(lVar11 + 0x10 + lVar15 * 0x14);
      *pbVar4 = *pbVar4 | 0x40;
      *(uint *)(lVar11 + 0xc + lVar15 * 0x14) = local_124 | uVar20;
      *(uint *)(lVar11 + 8 + lVar15 * 0x14) = uVar6 | uVar20;
      FUN_144c435a0(lVar13,lVar16);
      return;
    }
  }
  local_res18 = CONCAT44(local_res18._4_4_,param_4[1]);
  fVar5 = *(float *)(param_8 + 4);
  local_res10 = CONCAT44(local_res10._4_4_,param_5[1]);
  FUN_1453302d0(local_88,param_2,param_3,&local_108,&local_res18,&local_res10);
  if (fVar5 <= local_88[0]) {
    iVar12 = FUN_144fc63c0(*(undefined8 *)(param_8 + 8),&local_108,param_2,param_3,param_4[1],
                           param_5[1],CONCAT44(uVar21,*param_4),CONCAT44(uVar22,*param_5),local_78);
    if (iVar12 == -1) {
      lVar13 = *plVar1;
      iVar12 = param_4[1];
      lVar16 = (longlong)iVar12;
      if (iVar12 < *(int *)(lVar13 + 0x30)) {
        if (*(int *)(lVar13 + 0x78) != 0) {
          iVar12 = *(int *)(*(longlong *)(lVar13 + 0x70) + lVar16 * 4);
        }
        if (iVar12 == -1) {
          lVar18 = *(longlong *)(lVar13 + 0x28);
          lVar16 = lVar16 * 5;
        }
        else {
          lVar16 = (longlong)iVar12 * 5;
          lVar18 = *(longlong *)(lVar13 + 0xc0);
        }
      }
      else {
        lVar16 = (longlong)(iVar12 - *(int *)(lVar13 + 0x30)) * 5;
        lVar18 = *(longlong *)(lVar13 + 0xe0);
      }
      piVar2 = (int *)(lVar18 + lVar16 * 4);
      iVar12 = *(int *)(lVar13 + 0x40);
      iVar8 = *piVar2;
      if (iVar8 < iVar12) {
        puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
      }
      else {
        puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
      }
      local_e8 = *puVar17;
      uStack_e0 = puVar17[1];
      iVar8 = piVar2[1];
      if (iVar8 < iVar12) {
        puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
      }
      else {
        puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
      }
      local_d8 = *puVar17;
      uStack_d0 = puVar17[1];
      lVar13 = *plVar3;
      iVar12 = param_5[1];
      lVar16 = (longlong)iVar12;
      local_c8 = 1.0 / (local_54 - local_58);
      local_c4 = -local_58 * local_c8;
      if (iVar12 < *(int *)(lVar13 + 0x30)) {
        if (*(int *)(lVar13 + 0x78) != 0) {
          iVar12 = *(int *)(*(longlong *)(lVar13 + 0x70) + lVar16 * 4);
        }
        if (iVar12 == -1) {
          lVar18 = *(longlong *)(lVar13 + 0x28);
          lVar16 = lVar16 * 5;
        }
        else {
          lVar16 = (longlong)iVar12 * 5;
          lVar18 = *(longlong *)(lVar13 + 0xc0);
        }
      }
      else {
        lVar16 = (longlong)(iVar12 - *(int *)(lVar13 + 0x30)) * 5;
        lVar18 = *(longlong *)(lVar13 + 0xe0);
      }
      piVar2 = (int *)(lVar18 + lVar16 * 4);
      iVar12 = *(int *)(lVar13 + 0x40);
      iVar8 = *piVar2;
      if (iVar8 < iVar12) {
        puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
      }
      else {
        puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
      }
      local_b8 = *puVar17;
      uStack_b0 = puVar17[1];
      iVar8 = piVar2[1];
      if (iVar8 < iVar12) {
        puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
      }
      else {
        puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
      }
      local_a8 = *puVar17;
      uStack_a0 = puVar17[1];
      local_138[0] = 0x100;
      local_98 = 1.0 / (local_4c - local_50);
      local_134 = *(undefined4 *)(param_8 + 0x18);
      local_94 = -local_50 * local_98;
      local_f8 = *param_7;
      fStack_f4 = param_7[1];
      fStack_f0 = param_7[2];
      fStack_ec = param_7[3];
      local_118 = *param_6;
      fStack_114 = param_6[1];
      fStack_110 = param_6[2];
      fStack_10c = param_6[3];
      FUN_145331340(param_1,param_2,param_3,&local_e8,&local_b8,&local_118,&local_f8,local_138);
    }
  }
  else {
    lVar13 = *plVar1;
    iVar12 = param_4[1];
    lVar16 = (longlong)iVar12;
    if (iVar12 < *(int *)(lVar13 + 0x30)) {
      if (*(int *)(lVar13 + 0x78) != 0) {
        iVar12 = *(int *)(*(longlong *)(lVar13 + 0x70) + lVar16 * 4);
      }
      if (iVar12 == -1) {
        lVar18 = *(longlong *)(lVar13 + 0x28);
        lVar16 = lVar16 * 5;
      }
      else {
        lVar16 = (longlong)iVar12 * 5;
        lVar18 = *(longlong *)(lVar13 + 0xc0);
      }
    }
    else {
      lVar16 = (longlong)(iVar12 - *(int *)(lVar13 + 0x30)) * 5;
      lVar18 = *(longlong *)(lVar13 + 0xe0);
    }
    piVar2 = (int *)(lVar18 + lVar16 * 4);
    iVar12 = *(int *)(lVar13 + 0x40);
    iVar8 = *piVar2;
    if (iVar8 < iVar12) {
      puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
    }
    else {
      puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
    }
    local_b8 = *puVar17;
    uStack_b0 = puVar17[1];
    iVar8 = piVar2[1];
    if (iVar8 < iVar12) {
      puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
    }
    else {
      puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
    }
    local_a8 = *puVar17;
    uStack_a0 = puVar17[1];
    lVar13 = *plVar3;
    iVar12 = param_5[1];
    lVar16 = (longlong)iVar12;
    if (iVar12 < *(int *)(lVar13 + 0x30)) {
      if (*(int *)(lVar13 + 0x78) != 0) {
        iVar12 = *(int *)(*(longlong *)(lVar13 + 0x70) + lVar16 * 4);
      }
      if (iVar12 == -1) {
        lVar18 = *(longlong *)(lVar13 + 0x28);
        lVar16 = lVar16 * 5;
      }
      else {
        lVar16 = (longlong)iVar12 * 5;
        lVar18 = *(longlong *)(lVar13 + 0xc0);
      }
    }
    else {
      lVar16 = (longlong)(iVar12 - *(int *)(lVar13 + 0x30)) * 5;
      lVar18 = *(longlong *)(lVar13 + 0xe0);
    }
    piVar2 = (int *)(lVar18 + lVar16 * 4);
    iVar12 = *(int *)(lVar13 + 0x40);
    iVar8 = *piVar2;
    if (iVar8 < iVar12) {
      puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
    }
    else {
      puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
    }
    local_e8 = *puVar17;
    uStack_e0 = puVar17[1];
    iVar8 = piVar2[1];
    if (iVar8 < iVar12) {
      puVar17 = (undefined8 *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar13 + 0x38));
    }
    else {
      puVar17 = (undefined8 *)((longlong)(iVar8 - iVar12) * 0x10 + *(longlong *)(lVar13 + 0xf0));
    }
    local_d8 = *puVar17;
    uStack_d0 = puVar17[1];
    local_134 = *(undefined4 *)(param_8 + 0x18);
    local_118 = *param_7;
    fStack_114 = param_7[1];
    fStack_110 = param_7[2];
    fStack_10c = param_7[3];
    local_138[0] = 0;
    local_f8 = *param_6;
    fStack_f4 = param_6[1];
    fStack_f0 = param_6[2];
    fStack_ec = param_6[3];
    FUN_1453312e0(param_1,param_2,param_3,&local_b8,&local_e8,&local_f8,&local_118,local_138);
  }
  return;
}



// FUNCTION 145011060 FUN_145011060 body=723 status=ok
// SIG undefined FUN_145011060(void)

void FUN_145011060(undefined8 param_1,longlong param_2,int *param_3,ushort *param_4,
                  longlong *param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ushort uVar12;
  int iVar13;
  int local_res18 [4];
  int local_58;
  int local_54;
  int local_50 [2];
  int *local_48;
  
  lVar5 = *(longlong *)(param_2 + 0x20);
  iVar4 = *param_3;
  lVar11 = (longlong)iVar4;
  if (iVar4 < *(int *)(lVar5 + 0x20)) {
    iVar13 = iVar4;
    if (*(int *)(lVar5 + 0x98) != 0) {
      iVar13 = *(int *)(*(longlong *)(lVar5 + 0x90) + lVar11 * 4);
    }
    if (iVar13 == -1) {
      lVar6 = *(longlong *)(lVar5 + 0x18);
      lVar7 = lVar11 * 3;
    }
    else {
      lVar7 = (longlong)iVar13 * 3;
      lVar6 = *(longlong *)(lVar5 + 0xb0);
    }
  }
  else {
    lVar7 = (longlong)(iVar4 - *(int *)(lVar5 + 0x20)) * 3;
    lVar6 = *(longlong *)(lVar5 + 0xd0);
  }
  piVar2 = (int *)(lVar6 + lVar7 * 4);
  local_48 = piVar2;
  if ((*(int *)(lVar5 + 0x108) == 0) ||
     ((*(byte *)(lVar11 + *(longlong *)(lVar5 + 0x100)) & 1) == 0)) {
    uVar12 = *param_4;
    if ((short)uVar12 < (short)piVar2[2]) {
      iVar13 = (uint)uVar12 + *piVar2;
    }
    else {
      iVar13 = (uint)(ushort)(uVar12 - (short)piVar2[2]) + piVar2[1];
    }
    iVar9 = (int)param_5[1] + 1;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar9) {
      FUN_145011850(param_5,&PTR_vftable_14c6e47c0,(longlong)iVar9);
    }
    piVar2 = (int *)(*param_5 + (longlong)(int)param_5[1] * 8);
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar4;
      piVar2[1] = iVar13;
    }
    *(int *)(param_5 + 1) = iVar9;
  }
  else {
    local_58 = iVar4;
    FUN_144c42800(lVar5,local_res18,&local_58,&local_54,local_50);
    if ((char)local_res18[0] != '\0') {
      iVar4 = *(int *)(lVar5 + 0x20);
      iVar13 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x20);
      local_res18[0] = iVar13;
      for (iVar9 = local_54 - *(int *)(lVar5 + 0x20); iVar9 != local_50[0] - iVar4;
          iVar9 = iVar9 + 1) {
        lVar11 = (longlong)iVar9;
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xd0);
        if ((short)*param_4 < (short)piVar2[2]) {
          iVar8 = *(int *)(lVar5 + lVar11 * 0xc);
          sVar3 = *(short *)(lVar5 + 8 + lVar11 * 0xc);
        }
        else {
          iVar8 = *(int *)(lVar5 + 4 + lVar11 * 0xc);
          sVar3 = *(short *)(lVar5 + 10 + lVar11 * 0xc);
        }
        iVar10 = sVar3 + iVar8;
        iVar1 = iVar9 + iVar13;
        for (; iVar8 < iVar10; iVar8 = iVar8 + 1) {
          lVar5 = *(longlong *)(param_2 + 0x20);
          iVar13 = *(int *)(lVar5 + 0x30);
          if (iVar8 < iVar13) {
            iVar13 = iVar8;
            if (*(int *)(lVar5 + 0x78) != 0) {
              iVar13 = *(int *)(*(longlong *)(lVar5 + 0x70) + (longlong)iVar8 * 4);
            }
            if (iVar13 == -1) {
              lVar11 = *(longlong *)(lVar5 + 0x28);
              iVar13 = iVar8;
            }
            else {
              lVar11 = *(longlong *)(lVar5 + 0xc0);
            }
            lVar11 = lVar11 + (longlong)iVar13 * 0x14;
            uVar12 = 0xffff;
          }
          else {
            lVar11 = *(longlong *)(lVar5 + 0xe0) + (longlong)(iVar8 - iVar13) * 0x14;
            uVar12 = *(ushort *)(*(longlong *)(lVar5 + 0x110) + (longlong)(iVar8 - iVar13) * 2);
          }
          if ((uVar12 == *param_4) && ((param_6 != 1 || (*(int *)(lVar11 + 8) == -1)))) {
            iVar13 = (int)param_5[1] + 1;
            if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar13) {
              FUN_145011850(param_5,&PTR_vftable_14c6e47c0,(longlong)iVar13);
            }
            piVar2 = (int *)(*param_5 + (longlong)(int)param_5[1] * 8);
            if (piVar2 != (int *)0x0) {
              *piVar2 = iVar1;
              piVar2[1] = iVar8;
            }
            *(int *)(param_5 + 1) = iVar13;
          }
          iVar13 = local_res18[0];
        }
        piVar2 = local_48;
      }
    }
  }
  return;
}



// FUNCTION 145011340 FUN_145011340 body=308 status=ok
// SIG undefined FUN_145011340(void)

int * FUN_145011340(longlong param_1,int *param_2,longlong param_3,int *param_4,undefined8 param_5)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int local_res18 [2];
  int *local_res20;
  int local_58;
  int local_54;
  
  local_res20 = param_4;
  if (*(char *)(param_3 + 0x30) == '\x01') {
    lVar6 = *(longlong *)(param_3 + 0x20);
  }
  else {
    lVar6 = FUN_147e4bb26(param_3 + 0x20);
  }
  lVar5 = *(longlong *)(param_3 + 0x20);
  local_54 = *(int *)(lVar5 + 0x20);
  iVar3 = *(int *)(lVar5 + 0x30);
  sVar2 = *(short *)(*(longlong *)(lVar6 + 0xd0) + 10 + (longlong)*param_4 * 0xc);
  iVar7 = (int)sVar2;
  lVar1 = *(longlong *)(lVar6 + 0xd0) + (longlong)*param_4 * 0xc;
  iVar4 = *(int *)(lVar5 + 0xe8);
  FUN_144c3ec00(param_3,iVar7 + 1);
  if (sVar2 != 0) {
    local_res18[0] = *(int *)(lVar1 + 4) - iVar3;
    local_58 = iVar4;
    FUN_145335310(*(undefined8 *)(param_1 + 0x18),param_3,&local_58,local_res18,iVar7);
  }
  local_res18[0] = iVar4 + iVar7;
  FUN_144c51bd0(param_5,lVar6,local_res18);
  *(short *)(lVar1 + 10) = *(short *)(lVar1 + 10) + 1;
  *(int *)(lVar1 + 4) = iVar4 + iVar3;
  *(int *)(lVar6 + 0x164) = *(int *)(lVar6 + 0x164) + iVar7;
  local_res20 = (int *)CONCAT44(local_res20._4_4_,local_54 + *local_res20);
  FUN_144c3f140(param_3,&local_res20);
  *param_2 = iVar4 + iVar7 + iVar3;
  return param_2;
}



// FUNCTION 145011480 FUN_145011480 body=497 status=ok
// SIG undefined FUN_145011480(void)

void FUN_145011480(undefined8 param_1,longlong param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  int iVar9;
  ushort uVar10;
  int local_res18 [4];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  if (*(char *)(param_2 + 0x30) == '\x01') {
    lVar5 = *(longlong *)(param_2 + 0x20);
  }
  else {
    lVar5 = FUN_147e4bb26(param_2 + 0x20);
  }
  local_48 = *param_3;
  lVar3 = *(longlong *)(param_2 + 0x20);
  local_3c = *(int *)(lVar3 + 0x20);
  iVar2 = *(int *)(lVar3 + 0x30);
  uVar10 = *(short *)(*(longlong *)(lVar3 + 0x18) + 10 + (longlong)local_48 * 0xc) +
           *(short *)(*(longlong *)(lVar3 + 0x18) + 8 + (longlong)local_48 * 0xc);
  FUN_144c42800(lVar3,local_res18,&local_48,&local_44,&local_40);
  if ((char)local_res18[0] != '\0') {
    iVar6 = local_44 - *(int *)(lVar3 + 0x20);
    iVar7 = local_40 - *(int *)(lVar3 + 0x20);
    local_40 = iVar7;
    if (iVar6 != iVar7) {
      do {
        lVar3 = *(longlong *)(lVar5 + 0xd0) + (longlong)iVar6 * 0xc;
        local_res18[0] = local_3c + iVar6;
        FUN_144c3f140(param_2,local_res18);
        iVar9 = 0;
        if (0 < *(short *)(lVar3 + 10)) {
          do {
            iVar4 = *(int *)(lVar3 + 4) + iVar9;
            lVar1 = *(longlong *)(lVar5 + 0xe0) + (longlong)(iVar4 - *(int *)(lVar5 + 0x30)) * 0x14;
            iVar7 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x30);
            if (iVar4 < iVar7) {
              uVar8 = 0xffff;
            }
            else {
              uVar8 = *(ushort *)
                       (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x110) +
                       (longlong)(iVar4 - iVar7) * 2);
            }
            if ((((~(*(byte *)(lVar1 + 0x10) >> 3) & 1) != 0) && (uVar10 <= uVar8)) &&
               (iVar7 = (int)(short)uVar8 - (uint)uVar10,
               (*(uint *)(*(longlong *)(param_4 + 0x10) + ((longlong)iVar7 >> 5) * 4) >>
                ((byte)iVar7 & 0x1f) & 1) != 0)) {
              *(undefined8 *)(lVar1 + 8) = 0xffffffffffffffff;
              *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xbf | 8;
              *(int *)(lVar5 + 0x164) = *(int *)(lVar5 + 0x164) + 1;
              *(undefined2 *)(*(longlong *)(lVar5 + 0x110) + (longlong)(iVar4 - iVar2) * 2) = 0xffff
              ;
            }
            iVar9 = iVar9 + 1;
            iVar7 = local_40;
          } while (iVar9 < *(short *)(lVar3 + 10));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar7);
    }
  }
  return;
}



// FUNCTION 145011680 FUN_145011680 body=457 status=ok
// SIG undefined FUN_145011680(void)

undefined4 *
FUN_145011680(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,int param_7,uint param_8)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar8 = (longlong)param_7;
  iVar9 = *(int *)(*param_5 + lVar8 * 4);
  if (iVar9 != -1) {
    return (undefined4 *)(*param_2 + (longlong)iVar9 * 0x14);
  }
  lVar4 = param_2[1];
  iVar9 = (int)lVar4 + 1;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_144c44450(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  lVar5 = param_2[1];
  *(int *)(param_2 + 1) = iVar9;
  puVar1 = (undefined4 *)(*param_2 + (longlong)(int)lVar5 * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 2) = 0xffffffffffffffff;
    puVar1[4] = 4;
  }
  uVar10 = (ulonglong)param_8;
  puVar7 = (undefined4 *)(param_1 + lVar8 * 0x14);
  *puVar1 = *puVar7;
  puVar1[1] = puVar7[1];
  puVar1[2] = puVar7[2];
  puVar1[3] = puVar7[3];
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar7 + 4);
  *(undefined1 *)((longlong)puVar1 + 0x11) = *(undefined1 *)((longlong)puVar7 + 0x11);
  *(undefined2 *)((longlong)puVar1 + 0x12) = *(undefined2 *)((longlong)puVar7 + 0x12);
  puVar7 = (undefined4 *)(param_3 + (longlong)(int)(param_7 * param_8) * 4);
  iVar9 = (int)param_4[1];
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < (int)(iVar9 + param_8)) {
    FUN_141807aa8(param_4,&PTR_vftable_14c6e47a0,(longlong)(int)(iVar9 + param_8));
  }
  puVar6 = (undefined4 *)(*param_4 + (longlong)iVar9 * 4);
  if (0 < (int)param_8) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar3 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar3;
      }
      uVar10 = uVar10 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar10 != 0);
  }
  *(uint *)(param_4 + 1) = iVar9 + param_8;
  *(int *)(*param_5 + lVar8 * 4) = (int)lVar4;
  iVar9 = (int)param_6[1] + 1;
  if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < iVar9) {
    FUN_1401f86b2(param_6,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  piVar2 = (int *)(*param_6 + (longlong)(int)param_6[1] * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_7;
  }
  *(int *)(param_6 + 1) = iVar9;
  return puVar1;
}



// FUNCTION 145011850 FUN_145011850 body=235 status=ok
// SIG undefined FUN_145011850(void)

void FUN_145011850(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 145011940 FUN_145011940 body=88 status=ok
// SIG undefined FUN_145011940(void)

undefined8 * FUN_145011940(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  FUN_144fcd2c0(param_1 + 4);
  FUN_144fcd2c0(param_1 + 8);
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  return param_1;
}



// FUNCTION 1450119a0 FUN_1450119a0 body=225 status=ok
// SIG undefined FUN_1450119a0(void)

void FUN_1450119a0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  FUN_144fcd490(param_1 + 8);
  FUN_144fcd490(param_1 + 4);
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) * 0x50);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x50);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 145011a90 FUN_145011a90 body=71 status=ok
// SIG undefined FUN_145011a90(void)

undefined8 * FUN_145011a90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkaiPathRequestInfoOwner::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,8);
  }
  return param_1;
}



// FUNCTION 145011ae0 FUN_145011ae0 body=592 status=ok
// SIG undefined FUN_145011ae0(void)

void FUN_145011ae0(undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *param_1 = hkaiNavigator::vftable;
  if (param_1[9] != 0) {
    lVar3 = param_1[0x1f];
    if (lVar3 != 0) {
      param_1[0x1f] = 0;
      uVar6 = FUN_145015840(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x48) + 0x110,lVar3,
                            FUN_1450155f0);
      *(undefined8 *)(lVar3 + 8) = uVar6;
      uVar6 = FUN_1450158e0(*(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x48) + 0x118,lVar3,
                            FUN_145015660);
      *(undefined8 *)(lVar3 + 0x10) = uVar6;
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
    local_10 = *(undefined4 *)(param_1 + 0x90);
    local_14 = 0x2b;
    local_18 = 0x5000010;
    FUN_144c2c1d0(param_1[9] + 0x28,param_1[9],&local_18);
    FUN_145310860(param_1[9],param_1);
  }
  FUN_144bfd1a0(param_1 + 0x99);
  FUN_144bfd1a0(param_1 + 0x98);
  FUN_144bfd1a0(param_1 + 0x97);
  FUN_144bfd1a0(param_1 + 0x96);
  FUN_144bfd1a0(param_1 + 0x95);
  FUN_144bfd1a0(param_1 + 0x94);
  FUN_144bfd1a0(param_1 + 0x93);
  puVar4 = (uint *)param_1[0x91];
  if (puVar4 + (longlong)*(int *)(param_1 + 0x92) * 0x20 != puVar4) {
    puVar7 = puVar4 + (longlong)*(int *)(param_1 + 0x92) * 0x20 + 0x1f;
    do {
      puVar1 = puVar7 + -0x20;
      puVar7[-0x21] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar7 + -0x23) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar7 + -0x23),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 2);
      }
      puVar2 = puVar7 + -0x3f;
      puVar7[-0x23] = 0;
      puVar7[-0x22] = 0;
      *puVar1 = 0x80000000;
      puVar7 = puVar1;
    } while (puVar2 != puVar4);
  }
  *(undefined4 *)(param_1 + 0x92) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x494)) && (param_1[0x91] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x91],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x494) & 0x7fffffff) << 7);
  }
  param_1[0x91] = 0;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0x80000000;
  if (param_1[0x8e] != 0) {
    FUN_144b3f230();
  }
  FUN_145013e30(param_1 + 0x68);
  FUN_145013e30(param_1 + 0x44);
  FUN_145013e30(param_1 + 0x20);
  plVar5 = (longlong *)param_1[0x1f];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5,1);
  }
  plVar5 = (longlong *)param_1[0x1e];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5,1);
  }
  if (param_1[9] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145011d30 FUN_145011d30 body=952 status=ok
// SIG undefined FUN_145011d30(void)

ulonglong FUN_145011d30(longlong param_1)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  
  if ((*(int *)(param_1 + 0x20) != 1) || (*(int *)(param_1 + 0x138) == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x130);
  lVar9 = (longlong)*(int *)(param_1 + 0x138) * 0x30;
  lVar7 = (longlong)*(int *)(param_1 + 0x378) * 0x30;
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  uVar6 = -(lVar9 >> 0x3f);
  if (lVar9 / 0x30 == (lVar7 >> 3) - (lVar7 >> 0x3f)) {
    if (uVar2 != lVar9 + uVar2) {
      puVar8 = (uint *)(*(longlong *)(param_1 + 0x370) + 0x20);
      lVar7 = uVar2 - *(longlong *)(param_1 + 0x370);
      do {
        pfVar1 = (float *)(lVar7 + -0x20 + (longlong)puVar8);
        auVar3._4_4_ = -(uint)(pfVar1[1] == (float)puVar8[-7]);
        auVar3._0_4_ = -(uint)(*pfVar1 == (float)puVar8[-8]);
        auVar3._8_4_ = -(uint)(pfVar1[2] == (float)puVar8[-6]);
        auVar3._12_4_ = -(uint)(pfVar1[3] == (float)puVar8[-5]);
        uVar5 = movmskps((int)uVar6,auVar3);
        uVar6 = 0;
        if ((char)(uVar5 & 7) != '\a') {
LAB_1450120ca:
          uVar6 = uVar6 & 0xffffffffffffff00;
          goto LAB_145011e3c;
        }
        pfVar1 = (float *)(lVar7 + -0x10 + (longlong)puVar8);
        auVar4._4_4_ = -(uint)(pfVar1[1] == (float)puVar8[-3]);
        auVar4._0_4_ = -(uint)(*pfVar1 == (float)puVar8[-4]);
        auVar4._8_4_ = -(uint)(pfVar1[2] == (float)puVar8[-2]);
        auVar4._12_4_ = -(uint)(pfVar1[3] == (float)puVar8[-1]);
        uVar5 = movmskps(uVar5 & 7,auVar4);
        uVar6 = (ulonglong)uVar5;
        if (((uVar5 != 0xf) ||
            (uVar6 = (ulonglong)*puVar8, *(uint *)((longlong)puVar8 + lVar7) != *puVar8)) ||
           (uVar6 = (ulonglong)puVar8[1], *(uint *)(lVar7 + 4 + (longlong)puVar8) != puVar8[1]))
        goto LAB_1450120ca;
        puVar8 = puVar8 + 0xc;
        uVar6 = lVar7 + -0x20 + (longlong)puVar8;
      } while (uVar6 != lVar9 + uVar2);
    }
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
LAB_145011e3c:
    if (((((char)uVar6 != '\0') &&
         ((*(char *)(param_1 + 0x18c) == '\0' ||
          ((*(float *)(param_1 + 400) == *(float *)(param_1 + 0x3d0) &&
           (*(float *)(param_1 + 0x194) == *(float *)(param_1 + 0x3d4))))))) &&
        ((*(char *)(param_1 + 0x198) == '\0' ||
         ((*(float *)(param_1 + 0x19c) == *(float *)(param_1 + 0x3dc) &&
          (*(float *)(param_1 + 0x1a0) == *(float *)(param_1 + 0x3e0))))))) &&
       ((((((uVar6 = (ulonglong)*(uint *)(param_1 + 0x3e4),
            *(uint *)(param_1 + 0x1a4) == *(uint *)(param_1 + 0x3e4) &&
            (((uVar6 = 0,
              (*(char *)(param_1 + 0x1a8) != '\0') == (*(char *)(param_1 + 1000) != '\0') &&
              (*(float *)(param_1 + 0x1b0) == *(float *)(param_1 + 0x3f0))) &&
             (uVar6 = *(ulonglong *)(param_1 + 0x3f8), *(ulonglong *)(param_1 + 0x1b8) == uVar6))))
           && (((uVar6 = *(ulonglong *)(param_1 + 0x400), *(ulonglong *)(param_1 + 0x1c0) == uVar6
                && (uVar6 = *(ulonglong *)(param_1 + 0x408),
                   *(ulonglong *)(param_1 + 0x1c8) == uVar6)) &&
               (uVar6 = *(ulonglong *)(param_1 + 0x410), *(ulonglong *)(param_1 + 0x1d0) == uVar6)))
           ) && ((uVar6 = (ulonglong)*(uint *)(param_1 + 0x418),
                 *(uint *)(param_1 + 0x1d8) == *(uint *)(param_1 + 0x418) &&
                 (uVar6 = (ulonglong)*(uint *)(param_1 + 0x41c),
                 *(uint *)(param_1 + 0x1dc) == *(uint *)(param_1 + 0x41c))))) &&
         (((uVar6 = (ulonglong)*(uint *)(param_1 + 0x420),
           *(uint *)(param_1 + 0x1e0) == *(uint *)(param_1 + 0x420) &&
           ((((uVar6 = (ulonglong)*(uint *)(param_1 + 0x424),
              *(uint *)(param_1 + 0x1e4) == *(uint *)(param_1 + 0x424) &&
              (uVar6 = (ulonglong)*(uint *)(param_1 + 0x42c),
              *(uint *)(param_1 + 0x1ec) == *(uint *)(param_1 + 0x42c))) &&
             (*(float *)(param_1 + 0x1f0) == *(float *)(param_1 + 0x430))) &&
            ((*(float *)(param_1 + 500) == *(float *)(param_1 + 0x434) &&
             (*(float *)(param_1 + 0x1f8) == *(float *)(param_1 + 0x438))))))) &&
          ((*(float *)(param_1 + 0x1fc) == *(float *)(param_1 + 0x43c) &&
           ((*(float *)(param_1 + 0x200) == *(float *)(param_1 + 0x440) &&
            (*(float *)(param_1 + 0x204) == *(float *)(param_1 + 0x444))))))))) &&
        ((*(float *)(param_1 + 0x208) == *(float *)(param_1 + 0x448) &&
         (*(float *)(param_1 + 0x20c) == *(float *)(param_1 + 0x44c))))))) {
      uVar5 = *(uint *)(param_1 + 0x450);
      uVar6 = (ulonglong)uVar5;
      if (((*(uint *)(param_1 + 0x210) == uVar5) && (*(longlong *)(param_1 + 0x470) != 0)) &&
         (*(char *)(param_1 + 0x58) == '\0')) {
        return (ulonglong)(uint3)(uVar5 >> 8) << 8;
      }
    }
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 1450120f0 FUN_1450120f0 body=3209 status=ok
// SIG undefined FUN_1450120f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1450120f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  float *pfVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  uint local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  uint local_1028;
  undefined8 local_1018;
  undefined8 uStack_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined4 local_fe8;
  undefined4 uStack_fe4;
  undefined4 uStack_fe0;
  float fStack_fdc;
  undefined4 local_fd8;
  float local_fd4;
  float local_fc8;
  float fStack_fc4;
  float fStack_fc0;
  float fStack_fbc;
  float local_fb8;
  float fStack_fb4;
  float fStack_fb0;
  float fStack_fac;
  float local_fa8;
  float fStack_fa4;
  undefined8 uStack_fa0;
  float local_f98;
  float fStack_f94;
  float fStack_f90;
  float fStack_f8c;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined1 local_f68 [512];
  undefined1 local_d68 [3392];
  
  if (*(longlong *)(param_1 + 0x470) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
    if (*(int *)(param_1 + 0x20) == 1) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x100);
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x108);
      if (*(int *)(param_1 + 0x138) != 0) {
        *(undefined4 *)(param_1 + 0x50) = 2;
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x50) = 1;
    return;
  }
  if ((*(int *)(param_1 + 0x20) == 1) && (*(char *)(param_1 + 0x58) == '\0')) {
    if ((*(int *)(param_1 + 0x54) == 8) &&
       (iVar7 = FUN_144c59150(*(longlong *)(param_1 + 0x470),local_res10,&local_1038), iVar7 != 0))
    {
      lVar1 = *(longlong *)
               ((longlong)local_res10[0] * 0x120 +
               *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x140) + 0x38));
      fVar23 = *(float *)(lVar1 + 0x84);
      fVar27 = *(float *)(lVar1 + 0x88);
      fVar30 = *(float *)(lVar1 + 0x8c);
      fVar37 = *(float *)(lVar1 + 100);
      fVar22 = *(float *)(lVar1 + 0x68);
      fVar26 = *(float *)(lVar1 + 0x6c);
      fVar28 = *(float *)(lVar1 + 0x74);
      fVar29 = *(float *)(lVar1 + 0x78);
      fVar31 = *(float *)(lVar1 + 0x7c);
      fVar32 = *(float *)(lVar1 + 0x94);
      fVar33 = *(float *)(lVar1 + 0x98);
      fVar35 = *(float *)(lVar1 + 0x9c);
      *(float *)(param_1 + 0x70) =
           (float)uStack_1030 * *(float *)(lVar1 + 0x80) +
           local_1038._4_4_ * *(float *)(lVar1 + 0x70) +
           (float)local_1038 * *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x90);
      *(float *)(param_1 + 0x74) =
           (float)uStack_1030 * fVar23 + local_1038._4_4_ * fVar28 + (float)local_1038 * fVar37 +
           fVar32;
      *(float *)(param_1 + 0x78) =
           (float)uStack_1030 * fVar27 + local_1038._4_4_ * fVar29 + (float)local_1038 * fVar22 +
           fVar33;
      *(float *)(param_1 + 0x7c) =
           (float)uStack_1030 * fVar30 + local_1038._4_4_ * fVar31 + (float)local_1038 * fVar26 +
           fVar35;
    }
    local_1018 = *(undefined8 *)(param_1 + 0x100);
    uStack_1010 = *(undefined8 *)(param_1 + 0x108);
    iVar7 = FUN_144c58c10(*(undefined8 *)(param_1 + 0x470),param_1 + 0x478,&local_1018,
                          param_1 + 0x110,*(undefined4 *)(param_1 + 0x1f8),
                          *(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x204),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x140),&local_1048,
                          local_res8,local_res18);
    if (iVar7 == 0) {
      if ((*(char *)(param_1 + 0x58) == '\0') && (-1 < local_res18[0])) {
        FUN_145014a90(param_1);
        *(undefined4 *)(param_1 + 0x20) = 2;
        *(undefined4 *)(param_1 + 0x50) = 4;
      }
    }
    else {
      local_fe8 = *(undefined4 *)(param_1 + 0x120);
      local_1008 = *(undefined8 *)(param_1 + 0x100);
      uStack_1000 = *(undefined8 *)(param_1 + 0x108);
      local_ff8 = *(undefined8 *)(param_1 + 0x110);
      uStack_ff0 = *(undefined8 *)(param_1 + 0x118);
      uStack_fe4 = *(undefined4 *)(param_1 + 0x124);
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x140);
      puVar10 = (undefined8 *)FUN_1450139b0(local_f68,param_1 + 0x170);
      local_res10[0] = 0x3a83126f;
      local_fc8 = *(float *)(puVar10 + 0x10);
      fStack_fc4 = *(float *)((longlong)puVar10 + 0x84);
      local_fa8 = *(float *)(puVar10 + 3);
      fStack_fbc = *(float *)(puVar10 + 8) * 0.5;
      uStack_fa0 = puVar10[10];
      uStack_f80 = puVar10[9];
      local_f98 = *(float *)(puVar10 + 0xd);
      fStack_f94 = *(float *)((longlong)puVar10 + 0x6c);
      fStack_f90 = *(float *)(puVar10 + 0xe);
      local_f88 = puVar10[0xc];
      local_fb8 = 0.001;
      fStack_fb4 = 0.001;
      fStack_fb0 = 0.001;
      fStack_fac = 0.001;
      fStack_fc0 = (float)((uint)fStack_fc0 & 0xffffff00);
      FUN_144fc0650(&local_1038,uVar2,&local_1008,&local_fc8);
      if (puVar10[0xc] != 0) {
        FUN_144b3f230();
      }
      if (puVar10[0xb] != 0) {
        FUN_144b3f230();
      }
      if (puVar10[10] != 0) {
        FUN_144b3f230();
      }
      *puVar10 = &PTR_FUN_14ab67d10;
      if (local_1028 == 0xffffffff) {
        local_1048 = local_1018;
        uStack_1040 = uStack_1010;
        local_res8[0] = 0xffffffff;
        FUN_1450147a0(param_1,1);
      }
      else {
        local_1048 = local_1038;
        uStack_1040 = uStack_1030;
        local_res8[0] = local_1028;
        FUN_1450147a0(param_1,2);
      }
    }
    *(undefined8 *)(param_1 + 0x60) = local_1048;
    *(undefined8 *)(param_1 + 0x68) = uStack_1040;
    *(uint *)(param_1 + 0x5c) = local_res8[0];
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    return;
  }
  iVar7 = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    uVar18 = *(uint *)(param_1 + 0x5c) >> 0x16;
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x140) + 0x38) +
             (ulonglong)uVar18 * 0x120);
    fVar23 = *(float *)(lVar1 + 0xc0);
    fVar27 = *(float *)(lVar1 + 0xc4);
    fVar30 = *(float *)(lVar1 + 200);
    fVar37 = *(float *)(lVar1 + 0xcc);
    if (*(int *)(param_1 + 0x54) == 8) {
      fVar33 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x60);
      fVar35 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 100);
      fVar36 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x68);
      fVar22 = fVar33 * fVar23;
      fVar26 = fVar35 * fVar27;
      fVar28 = fVar36 * fVar30;
      fVar29 = fVar26 + fVar22 + fVar28;
      fVar31 = fVar26 + fVar22 + fVar28;
      fVar32 = fVar26 + fVar22 + fVar28;
      fVar28 = fVar26 + fVar22 + fVar28;
      fVar33 = fVar33 - fVar23 * fVar29;
      fVar35 = fVar35 - fVar27 * fVar31;
      fVar36 = fVar36 - fVar30 * fVar32;
      if (0.0 <= fVar29) {
        local_1038 = CONCAT44(fVar31,fVar29);
        uStack_1030 = CONCAT44(fVar28,fVar32);
      }
      else {
        local_1038 = CONCAT44(0.0 - fVar31,0.0 - fVar29);
        uStack_1030 = CONCAT44(0.0 - fVar28,0.0 - fVar32);
      }
      if (((float)local_1038 < *(float *)(param_1 + 0x1fc)) &&
         (fVar35 * fVar35 + fVar33 * fVar33 + fVar36 * fVar36 <
          *(float *)(param_1 + 0x200) * *(float *)(param_1 + 0x200))) {
        *(undefined4 *)(param_1 + 0xa0) = 0x7f7fffee;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined8 *)(param_1 + 0x88) = 0;
        if (*(char *)(param_1 + 0x46c) == '\0') {
          iVar16 = *(int *)(param_1 + 0x490) + 1;
          if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar16) {
            FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar16);
          }
          iVar8 = *(int *)(param_1 + 0x490);
          *(int *)(param_1 + 0x490) = iVar16;
          puVar11 = (undefined4 *)((longlong)iVar8 * 0x80 + *(longlong *)(param_1 + 0x488));
          if (puVar11 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar11 + 0x1c) = 0;
            puVar11[0x1e] = 0;
            puVar11[0x1f] = 0x80000000;
          }
          *puVar11 = 6;
          *(undefined1 *)(param_1 + 0x46c) = 1;
        }
      }
    }
  }
  else {
    fVar23 = (float)local_1038;
    fVar27 = local_1038._4_4_;
    fVar30 = (float)uStack_1030;
    fVar37 = uStack_1030._4_4_;
    uVar18 = local_res8[0];
  }
  if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x46c) == '\0')) {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x140) + 0x38) +
             (longlong)(int)uVar18 * 0x120);
    local_fc8 = *(float *)(lVar1 + 0x60);
    fStack_fc4 = *(float *)(lVar1 + 100);
    fStack_fc0 = *(float *)(lVar1 + 0x68);
    fStack_fbc = *(float *)(lVar1 + 0x6c);
    local_fb8 = *(float *)(lVar1 + 0x70);
    fStack_fb4 = *(float *)(lVar1 + 0x74);
    fStack_fb0 = *(float *)(lVar1 + 0x78);
    fStack_fac = *(float *)(lVar1 + 0x7c);
    local_fa8 = *(float *)(lVar1 + 0x80);
    fStack_fa4 = *(float *)(lVar1 + 0x84);
    uStack_fa0 = *(undefined8 *)(lVar1 + 0x88);
    local_f98 = *(float *)(lVar1 + 0x90);
    fStack_f94 = *(float *)(lVar1 + 0x94);
    fStack_f90 = *(float *)(lVar1 + 0x98);
    fStack_f8c = *(float *)(lVar1 + 0x9c);
    fVar22 = *(float *)(param_1 + 0x60) - local_f98;
    fVar26 = *(float *)(param_1 + 100) - fStack_f94;
    fVar28 = *(float *)(param_1 + 0x68) - fStack_f90;
    local_f88 = *(undefined8 *)(lVar1 + 0xa0);
    uStack_f80 = *(undefined8 *)(lVar1 + 0xa8);
    local_f78 = *(undefined8 *)(lVar1 + 0xb0);
    uStack_f70 = *(undefined8 *)(lVar1 + 0xb8);
    fVar29 = (*(float *)(param_1 + 0x6c) - fStack_f8c) * *(float *)(lVar1 + 0x8c);
    local_1048 = CONCAT44(fVar26 * fStack_fb4 + fVar22 * local_fb8 + fVar28 * fStack_fb0,
                          fStack_fc4 * fVar26 + local_fc8 * fVar22 + fStack_fc0 * fVar28);
    uStack_1040 = CONCAT44(fVar29 + fVar26 * fStack_fa4 + fVar29,
                           fVar26 * fStack_fa4 + fVar22 * local_fa8 +
                           fVar28 * *(float *)(lVar1 + 0x88));
    FUN_145014820(param_1,local_d68);
    if (*(char *)(param_1 + 0x58) == '\0') {
      local_res8[0] = uVar18;
      iVar16 = FUN_144b3fc50(*(undefined8 *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x47c),
                             &local_1048,local_res8,
                             *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x140),&local_1008);
      while ((iVar16 != 2 && (1 < iVar16 - 3U))) {
        if (((iVar16 != 0) || (*(char *)(param_1 + 0x464) == '\0')) ||
           (((local_fd4 != 0.0 && (local_fd4 != 1.0)) || (fStack_fdc != 0.0)))) {
LAB_1450128a5:
          *(bool *)(param_1 + 0x5a) = iVar16 == 1;
          goto LAB_1450127fe;
        }
        pfVar12 = (float *)FUN_144b3f860(*(undefined8 *)(param_1 + 0x470),local_fd8);
        auVar25._4_4_ = -(uint)(pfVar12[5] == pfVar12[1]);
        auVar25._0_4_ = -(uint)(pfVar12[4] == *pfVar12);
        auVar25._8_4_ = -(uint)(pfVar12[6] == pfVar12[2]);
        auVar25._12_4_ = -(uint)(pfVar12[7] == pfVar12[3]);
        iVar8 = movmskps((int)pfVar12,auVar25);
        if ((iVar8 == 0xf) || (3 < iVar7)) goto LAB_1450128a5;
        uVar9 = *(undefined4 *)(param_1 + 0x468);
        iVar7 = iVar7 + 1;
        local_1038 = CONCAT44(uVar9,uVar9);
        uStack_1030 = CONCAT44(uVar9,uVar9);
        iVar16 = FUN_144b3fbe0(*(undefined8 *)(param_1 + 0x470),local_fd8,local_fd4 == 0.0,
                               param_1 + 0x478,
                               *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x140),local_d68,
                               &local_1038);
        if (iVar16 != 0) {
          *(undefined1 *)(param_1 + 0x5a) = 0;
          goto LAB_1450127fe;
        }
        local_res8[0] = uVar18;
        iVar16 = FUN_144b3fc50(*(undefined8 *)(param_1 + 0x470),*(undefined4 *)(param_1 + 0x47c),
                               &local_1048,local_res8,
                               *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x140),&local_1008);
      }
      FUN_144bde670(&local_1018,local_f68,0x200);
      FUN_144be6160(&local_1018,
                    "Unexpected calcForwardVector output; going to stale path. (This is unexpected and weird.)"
                   );
      iVar7 = FUN_144bfc110(0x23ae872e,local_f68,"Navigator\\hkaiNavigator.cpp",0x37a);
      if (iVar7 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_144bde6e0(&local_1018);
      FUN_1450147a0(param_1,0);
LAB_1450127fe:
      if (*(char *)(param_1 + 0x58) == '\0') {
        fVar29 = local_ff8._4_4_ * local_fb8 + (float)local_ff8 * local_fc8 +
                 (float)uStack_ff0 * local_fa8;
        fVar31 = local_ff8._4_4_ * fStack_fb4 + (float)local_ff8 * fStack_fc4 +
                 (float)uStack_ff0 * fStack_fa4;
        fVar32 = local_ff8._4_4_ * fStack_fb0 + (float)local_ff8 * fStack_fc0 +
                 (float)uStack_ff0 * (float)uStack_fa0;
        fVar22 = fVar23 * fVar29;
        fVar26 = fVar27 * fVar31;
        fVar28 = fVar30 * fVar32;
        auVar34._0_4_ = fVar29 - (fVar26 + fVar22 + fVar28) * fVar23;
        auVar34._4_4_ = fVar31 - (fVar26 + fVar22 + fVar28) * fVar27;
        auVar34._8_4_ = fVar32 - (fVar26 + fVar22 + fVar28) * fVar30;
        auVar34._12_4_ =
             (local_ff8._4_4_ * fStack_fac + (float)local_ff8 * fStack_fbc +
             (float)uStack_ff0 * uStack_fa0._4_4_) - (fVar26 + fVar22 + fVar28) * fVar37;
        fVar23 = auVar34._0_4_ * auVar34._0_4_;
        fVar27 = auVar34._4_4_ * auVar34._4_4_;
        auVar24._8_4_ = auVar34._8_4_ * auVar34._8_4_;
        auVar24._4_4_ = auVar24._8_4_;
        auVar24._0_4_ = auVar24._8_4_;
        auVar24._12_4_ = auVar24._8_4_;
        fVar30 = fVar27 + fVar23 + auVar24._8_4_;
        auVar4._4_4_ = fVar27 + fVar23 + auVar24._8_4_;
        auVar4._0_4_ = fVar30;
        auVar4._8_4_ = fVar27 + fVar23 + auVar24._8_4_;
        auVar4._12_4_ = fVar27 + fVar23 + auVar24._8_4_;
        auVar25 = sqrtps(auVar24,auVar4);
        *(int *)(param_1 + 0xa0) = auVar25._0_4_;
        if (fVar30 == 0.0) {
          auVar25 = ZEXT816(0);
        }
        else {
          auVar25 = divps(auVar34,auVar25);
        }
        *(undefined1 (*) [16])(param_1 + 0x80) = auVar25;
        local_1038 = 0;
        uStack_1030 = 0;
        uVar9 = FUN_144fd27b0(&local_fc8,&local_1048,&local_1038,param_1 + 0x90);
        auVar19._4_4_ = -(uint)(ABS(local_f78._4_4_) <= fRam000000014c6daea4);
        auVar19._0_4_ = -(uint)(ABS((float)local_f78) <= _DAT_14c6daea0);
        auVar19._8_4_ = -(uint)(ABS((float)uStack_f70) <= fRam000000014c6daea8);
        auVar19._12_4_ = -(uint)(ABS(uStack_f70._4_4_) <= fRam000000014c6daeac);
        uVar9 = movmskps(uVar9,auVar19);
        if (((byte)uVar9 & 7) == 7) {
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x80);
          *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x88);
          *(undefined1 *)(param_1 + 0x40) = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x30) = local_ff8;
          *(undefined8 *)(param_1 + 0x38) = uStack_ff0;
        }
        *(undefined8 *)(param_1 + 0xb0) = local_1008;
        *(undefined8 *)(param_1 + 0xb8) = uStack_1000;
        *(undefined8 *)(param_1 + 0xc0) = local_ff8;
        *(undefined8 *)(param_1 + 200) = uStack_ff0;
        *(float *)(param_1 + 0xe4) = local_fd4;
        *(ulonglong *)(param_1 + 0xd0) = CONCAT44(uStack_fe4,local_fe8);
        *(ulonglong *)(param_1 + 0xd8) = CONCAT44(fStack_fdc,uStack_fe0);
        *(undefined4 *)(param_1 + 0xe0) = local_fd8;
        *(undefined1 *)(param_1 + 0x41) = 1;
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
    }
    FUN_144b3fa90(local_d68);
  }
  if (*(char *)(param_1 + 0x46c) != '\0') {
    *(undefined4 *)(param_1 + 0x50) = 3;
    return;
  }
  if ((*(char *)(param_1 + 0x58) == '\0') ||
     (cVar6 = FUN_1450148d0(param_1,param_1 + 0x60,*(undefined4 *)(param_1 + 0x5c),param_1 + 0x80,
                            param_1 + 0x90), cVar6 != '\0')) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    return;
  }
  if ((*(int *)(param_1 + 0x20) == 1) && (*(int *)(param_1 + 0x138) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x130);
    lVar17 = (longlong)*(int *)(param_1 + 0x138) * 0x30;
    lVar13 = (longlong)*(int *)(param_1 + 0x378) * 0x30;
    lVar15 = lVar13 / 6 + (lVar13 >> 0x3f);
    lVar13 = -(lVar17 >> 0x3f);
    if (lVar17 / 0x30 == (lVar15 >> 3) - (lVar15 >> 0x3f)) {
      if (lVar1 != lVar17 + lVar1) {
        piVar14 = (int *)(*(longlong *)(param_1 + 0x370) + 0x20);
        lVar15 = lVar1 - *(longlong *)(param_1 + 0x370);
        do {
          pfVar12 = (float *)(lVar15 + -0x20 + (longlong)piVar14);
          auVar20._4_4_ = -(uint)(pfVar12[1] == (float)piVar14[-7]);
          auVar20._0_4_ = -(uint)(*pfVar12 == (float)piVar14[-8]);
          auVar20._8_4_ = -(uint)(pfVar12[2] == (float)piVar14[-6]);
          auVar20._12_4_ = -(uint)(pfVar12[3] == (float)piVar14[-5]);
          uVar18 = movmskps((int)lVar13,auVar20);
          if ((char)(uVar18 & 7) != '\a') {
LAB_145012d1b:
            bVar5 = false;
            goto LAB_145012acc;
          }
          pfVar12 = (float *)(lVar15 + -0x10 + (longlong)piVar14);
          auVar21._4_4_ = -(uint)(pfVar12[1] == (float)piVar14[-3]);
          auVar21._0_4_ = -(uint)(*pfVar12 == (float)piVar14[-4]);
          auVar21._8_4_ = -(uint)(pfVar12[2] == (float)piVar14[-2]);
          auVar21._12_4_ = -(uint)(pfVar12[3] == (float)piVar14[-1]);
          iVar7 = movmskps(uVar18 & 7,auVar21);
          if (((iVar7 != 0xf) || (*(int *)(lVar15 + (longlong)piVar14) != *piVar14)) ||
             (*(int *)(lVar15 + 4 + (longlong)piVar14) != piVar14[1])) goto LAB_145012d1b;
          piVar14 = piVar14 + 0xc;
          lVar13 = lVar15 + -0x20 + (longlong)piVar14;
        } while (lVar13 != lVar17 + lVar1);
      }
      bVar5 = true;
LAB_145012acc:
      if (((((bVar5) &&
            ((*(char *)(param_1 + 0x18c) == '\0' ||
             ((*(float *)(param_1 + 400) == *(float *)(param_1 + 0x3d0) &&
              (*(float *)(param_1 + 0x194) == *(float *)(param_1 + 0x3d4))))))) &&
           ((*(char *)(param_1 + 0x198) == '\0' ||
            ((*(float *)(param_1 + 0x19c) == *(float *)(param_1 + 0x3dc) &&
             (*(float *)(param_1 + 0x1a0) == *(float *)(param_1 + 0x3e0))))))) &&
          (((*(int *)(param_1 + 0x1a4) == *(int *)(param_1 + 0x3e4) &&
            ((((((*(char *)(param_1 + 0x1a8) != '\0') == (*(char *)(param_1 + 1000) != '\0') &&
                (*(float *)(param_1 + 0x1b0) == *(float *)(param_1 + 0x3f0))) &&
               (*(longlong *)(param_1 + 0x1b8) == *(longlong *)(param_1 + 0x3f8))) &&
              ((*(longlong *)(param_1 + 0x1c0) == *(longlong *)(param_1 + 0x400) &&
               (*(longlong *)(param_1 + 0x1c8) == *(longlong *)(param_1 + 0x408))))) &&
             (*(longlong *)(param_1 + 0x1d0) == *(longlong *)(param_1 + 0x410))))) &&
           (((*(int *)(param_1 + 0x1d8) == *(int *)(param_1 + 0x418) &&
             (*(int *)(param_1 + 0x1dc) == *(int *)(param_1 + 0x41c))) &&
            (*(int *)(param_1 + 0x1e0) == *(int *)(param_1 + 0x420))))))) &&
         (((((*(int *)(param_1 + 0x1e4) == *(int *)(param_1 + 0x424) &&
             (*(int *)(param_1 + 0x1ec) == *(int *)(param_1 + 0x42c))) &&
            (*(float *)(param_1 + 0x1f0) == *(float *)(param_1 + 0x430))) &&
           ((*(float *)(param_1 + 500) == *(float *)(param_1 + 0x434) &&
            (*(float *)(param_1 + 0x1f8) == *(float *)(param_1 + 0x438))))) &&
          (((((*(float *)(param_1 + 0x1fc) == *(float *)(param_1 + 0x43c) &&
              ((*(float *)(param_1 + 0x200) == *(float *)(param_1 + 0x440) &&
               (*(float *)(param_1 + 0x204) == *(float *)(param_1 + 0x444))))) &&
             (*(float *)(param_1 + 0x208) == *(float *)(param_1 + 0x448))) &&
            (((*(float *)(param_1 + 0x20c) == *(float *)(param_1 + 0x44c) &&
              (*(int *)(param_1 + 0x210) == *(int *)(param_1 + 0x450))) &&
             (*(longlong *)(param_1 + 0x470) != 0)))) && (*(char *)(param_1 + 0x58) == '\0'))))))
      goto LAB_145012d22;
    }
    *(undefined4 *)(param_1 + 0x50) = 2;
  }
  else {
LAB_145012d22:
    *(undefined4 *)(param_1 + 0x50) = 1;
  }
  return;
}



// FUNCTION 145012d80 FUN_145012d80 body=235 status=ok
// SIG undefined FUN_145012d80(void)

void FUN_145012d80(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x488);
  lVar6 = (longlong)*(int *)(param_1 + 0x490) * 0x80 + lVar4;
  for (; lVar4 != lVar6; lVar4 = lVar4 + 0x80) {
    FUN_145335df0(lVar4,param_1,param_2,param_1 + 0x498);
  }
  puVar3 = *(uint **)(param_1 + 0x488);
  if (puVar3 + (longlong)*(int *)(param_1 + 0x490) * 0x20 != puVar3) {
    puVar5 = puVar3 + (longlong)*(int *)(param_1 + 0x490) * 0x20 + 0x1f;
    do {
      puVar1 = puVar5 + -0x20;
      puVar5[-0x21] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar5 + -0x23) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -0x23),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 2);
      }
      puVar2 = puVar5 + -0x3f;
      puVar5[-0x23] = 0;
      puVar5[-0x22] = 0;
      *puVar1 = 0x80000000;
      puVar5 = puVar1;
    } while (puVar2 != puVar3);
  }
  *(undefined4 *)(param_1 + 0x490) = 0;
  return;
}



// FUNCTION 145012e70 FUN_145012e70 body=786 status=ok
// SIG undefined FUN_145012e70(void)

void FUN_145012e70(longlong param_1,longlong **param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 local_res10;
  undefined4 local_res18;
  longlong local_res20;
  longlong *local_78;
  undefined4 local_70;
  uint local_6c;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  
  plVar10 = param_2[1];
  plVar19 = *param_2;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_70 = 0;
  local_res18 = param_3;
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar2 + 0xf0);
  if (lVar9 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar9;
  }
  uVar12 = (uint)((longlong)plVar10 - (longlong)plVar19 >> 2);
  lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x3d0) + 0x10);
  lVar2 = (longlong)(int)uVar12 * 4;
  lVar14 = 0;
  if (*(longlong *)(lVar9 + 8) == 0) {
    lVar14 = lVar9;
  }
  local_res20 = lVar2;
  local_68 = lVar14;
  local_58 = lVar2;
  if (lVar14 == 0) {
    plVar10 = (longlong *)
              (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar9 >> 8),1),&local_res20,0x40);
  }
  else {
    local_res10 = lVar2 + 0x3fU & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(lVar14 + 0x28)) {
      plVar10 = *(longlong **)(lVar14 + 0x38);
      if ((longlong)plVar10 + local_res10 <= *(ulonglong *)(lVar14 + 0x40)) {
        *(ulonglong *)(lVar14 + 0x38) = (longlong)plVar10 + local_res10;
        goto LAB_145012f73;
      }
    }
    plVar10 = (longlong *)FUN_144b454a0(lVar14,&local_res10);
  }
LAB_145012f73:
  local_6c = uVar12 | 0x80000000;
  local_res10 = CONCAT44(local_res10._4_4_,uVar12) | 0x80000000;
  plVar19 = plVar10;
  uVar15 = 0;
  local_78 = plVar10;
  local_60 = plVar10;
  if (param_2 != &local_78) {
    if ((int)(uVar12 & 0x7fffffff) < (int)uVar12) {
      FUN_141807e20(&local_78,&PTR_vftable_14c6e47a0,(longlong)(int)uVar12);
      local_res10 = CONCAT44(local_res10._4_4_,local_6c);
      lVar14 = local_68;
    }
    plVar10 = local_60;
    plVar19 = local_78;
    FUN_144b3d470(local_78,*param_2,lVar2);
    uVar15 = uVar12;
  }
  if (1 < (int)uVar15) {
    FUN_145015a30(plVar19,0,uVar15 - 1,0);
  }
  uVar7 = local_res18;
  plVar1 = (longlong *)((longlong)plVar19 + (longlong)(int)uVar15 * 4);
  if (plVar19 != plVar1) {
    plVar18 = plVar19;
    do {
      iVar13 = *(int *)(param_1 + 0x138);
      lVar2 = *plVar18;
      iVar8 = iVar13 + -1;
      *(int *)(param_1 + 0x138) = iVar8;
      if (iVar8 != (int)lVar2) {
        puVar16 = (undefined4 *)(*(longlong *)(param_1 + 0x130) + -0x30 + (longlong)iVar13 * 0x30);
        puVar11 = (undefined4 *)((longlong)(int)lVar2 * 0x30 + *(longlong *)(param_1 + 0x130));
        if ((puVar11 != puVar16) && (puVar11 != (undefined4 *)0x0)) {
          uVar3 = puVar16[1];
          uVar4 = puVar16[2];
          uVar5 = puVar16[3];
          *puVar11 = *puVar16;
          puVar11[1] = uVar3;
          puVar11[2] = uVar4;
          puVar11[3] = uVar5;
          uVar6 = *(undefined8 *)(puVar16 + 6);
          *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(puVar16 + 4);
          *(undefined8 *)(puVar11 + 6) = uVar6;
          puVar11[8] = puVar16[8];
          puVar11[9] = puVar16[9];
        }
      }
      iVar13 = *(int *)(param_1 + 0x490) + 1;
      if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar13) {
        FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar13);
      }
      iVar8 = *(int *)(param_1 + 0x490);
      *(int *)(param_1 + 0x490) = iVar13;
      puVar11 = (undefined4 *)((longlong)iVar8 * 0x80 + *(longlong *)(param_1 + 0x488));
      if (puVar11 != (undefined4 *)0x0) {
        puVar11[0x1f] = 0x80000000;
        *(undefined8 *)(puVar11 + 0x1c) = 0;
        puVar11[0x1e] = 0;
      }
      plVar18 = (longlong *)((longlong)plVar18 + 4);
      *puVar11 = 3;
      puVar11[4] = uVar7;
      plVar10 = local_60;
    } while (plVar18 != plVar1);
  }
  if (lVar14 == 0) {
    (*DAT_14c787678)(1,plVar10);
  }
  else {
    uVar17 = local_58 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar14 + 0x28) < uVar17) ||
       ((longlong)plVar10 + uVar17 != *(longlong *)(lVar14 + 0x38))) {
      FUN_144be8550(lVar14,plVar10);
    }
    else {
      *(longlong **)(lVar14 + 0x38) = plVar10;
      if (*(longlong **)(lVar14 + 0x48) == plVar10) {
        FUN_144be8430(lVar14);
      }
    }
  }
  if ((-1 < (int)(uint)local_res10) && (plVar19 != (longlong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,plVar19,(ulonglong)((uint)local_res10 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 145013190 FUN_145013190 body=39 status=ok
// SIG undefined FUN_145013190(void)

void FUN_145013190(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1450156d0();
  }
  FUN_1450120f0(param_1);
  return;
}



// FUNCTION 1450131c0 FUN_1450131c0 body=442 status=ok
// SIG undefined FUN_1450131c0(void)

void FUN_1450131c0(longlong param_1,undefined8 param_2,char *param_3,longlong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  char *local_28;
  char *local_20;
  
  local_res8 = 0x1b0;
  lVar6 = 0xf8;
  if (*param_3 == '\0') {
    lVar6 = 0xf0;
  }
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"ProcessingRunDelegate");
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_145014e70(lVar3,param_1,param_3 + 8);
  }
  plVar1 = *(longlong **)(lVar6 + param_1);
  *(undefined8 *)(lVar6 + param_1) = uVar4;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  lVar6 = *(longlong *)(lVar6 + param_1);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar3 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar5;
  }
  lVar3 = *(longlong *)(lVar5 + 0x3e0);
  if (lVar3 != 0) {
    local_28 = "TtProcessingRunDelegate::onProcessingRunStarting()";
    local_20 = "";
    FUN_144b3f370(lVar3,&local_28);
  }
  if (*(char *)(lVar6 + 0x1a0) != '\0') {
    cVar2 = FUN_145011d30(*(undefined8 *)(lVar6 + 0x18));
    if (cVar2 != '\0') {
      uVar4 = (**(code **)*param_4)(param_4);
      FUN_145013ae0(lVar6 + 0x20,&local_res8,uVar4);
      lVar5 = local_res8;
      lVar6 = (**(code **)(*param_4 + 0x10))
                        (param_4,lVar6,local_res8,*(undefined1 *)(lVar6 + 0x1a2),
                         *(undefined4 *)(lVar6 + 0x1a4));
      *(undefined1 *)(lVar6 + 0x35) = 0;
      if (lVar5 != 0) {
        FUN_144b3f230(lVar5);
      }
    }
  }
  if (lVar3 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar3,&local_28);
  }
  return;
}



// FUNCTION 145013380 FUN_145013380 body=147 status=ok
// SIG undefined FUN_145013380(void)

void FUN_145013380(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    lVar3 = FUN_144faf560(*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x48),lVar1);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x36) == '\0')) {
      FUN_144fab200(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x48) + 0x230),lVar1
                    ,*(undefined1 *)(lVar1 + 0x1a2));
    }
    plVar2 = *(longlong **)(param_1 + 0xf8);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
    FUN_145012d80(param_1,*(longlong *)(param_1 + 0x48) + 0x440);
  }
  return;
}



// FUNCTION 145013420 FUN_145013420 body=102 status=ok
// SIG undefined FUN_145013420(void)

void FUN_145013420(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0xf8;
  if (*param_3 == '\0') {
    lVar2 = 0xf0;
  }
  if (*(longlong *)(lVar2 + param_1) != 0) {
    FUN_1450156d0();
    plVar1 = *(longlong **)(lVar2 + param_1);
    *(undefined8 *)(lVar2 + param_1) = 0;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,1);
    }
    FUN_145012d80(param_1,*(longlong *)(param_1 + 0x48) + 0x440);
  }
  return;
}



// FUNCTION 145013490 FUN_145013490 body=577 status=ok
// SIG undefined FUN_145013490(void)

void FUN_145013490(longlong param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong local_28;
  undefined8 uStack_20;
  
  iVar6 = *(int *)(param_1 + 0x138);
  lVar8 = 0;
  iVar7 = 0;
  uVar9 = 0x80000000;
  iVar5 = 0;
  local_28 = 0;
  uStack_20._0_4_ = 0;
  uStack_20._4_4_ = 0x80000000;
  if (0 < iVar6) {
    lVar3 = 0;
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0x130) + 0x20 + lVar3) == *param_3) {
        iVar4 = iVar7 + 1;
        if ((int)(uVar9 & 0x7fffffff) < iVar4) {
          FUN_1401f86b2(&local_28,&PTR_vftable_14c6e47a0,(longlong)iVar4);
          iVar6 = *(int *)(param_1 + 0x138);
          lVar8 = local_28;
          uVar9 = uStack_20._4_4_;
          iVar7 = (int)uStack_20;
        }
        piVar1 = (int *)(lVar8 + (longlong)iVar7 * 4);
        iVar7 = iVar4;
        uStack_20._0_4_ = iVar4;
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar5;
          iVar6 = *(int *)(param_1 + 0x138);
        }
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 0x30;
    } while (iVar5 < iVar6);
  }
  uStack_20 = lVar8 + (longlong)iVar7 * 4;
  local_28 = lVar8;
  FUN_145012e70(param_1,&local_28,0);
  if ((*(longlong *)(param_1 + 0x470) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
    local_28 = 0;
    uStack_20 = -0x8000000000000000;
    FUN_144c59c40(*(longlong *)(param_1 + 0x470),&local_28,0);
    iVar6 = (int)((longlong)(int)uStack_20 * 4 >> 2) + -1;
    if (-1 < iVar6) {
      lVar3 = (longlong)iVar6;
      do {
        if (*(uint *)(local_28 + lVar3 * 4) >> 0x16 == *param_3) {
          if (-1 < iVar6) {
            iVar6 = iVar6 + 1;
            if (*(int *)(param_1 + 0x47c) < iVar6) {
              FUN_1450147a0(param_1,0);
            }
            else {
              FUN_144c59d20(*(undefined8 *)(param_1 + 0x470),iVar6);
              *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) - iVar6;
              *(int *)(param_1 + 0x47c) = *(int *)(param_1 + 0x47c) - iVar6;
              *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) - iVar6;
            }
          }
          break;
        }
        iVar6 = iVar6 + -1;
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    lVar3 = uStack_20;
    uVar2 = uStack_20._4_4_;
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    if ((-1 < lVar3) && (local_28 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_28,(ulonglong)(uVar2 & 0x7fffffff) << 2);
    }
  }
  FUN_145012d80(param_1,*(longlong *)(param_1 + 0x48) + 0x440);
  if ((-1 < (int)uVar9) && (lVar8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar8,(ulonglong)(uVar9 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 1450136e0 FUN_1450136e0 body=348 status=ok
// SIG undefined FUN_1450136e0(void)

void FUN_1450136e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint local_res8 [2];
  longlong local_28;
  int local_20;
  uint local_1c;
  
  lVar4 = *(longlong *)(param_1 + 0xf8);
  if (((lVar4 == 0) && (lVar4 = *(longlong *)(param_1 + 0xf0), lVar4 == 0)) ||
     (*(char *)(lVar4 + 0x1a8) == '\0')) {
    if ((*(longlong *)(param_1 + 0x470) != 0) && (*(char *)(param_1 + 0x58) == '\0')) {
      local_28 = 0;
      local_20 = 0;
      local_1c = 0x80000000;
      FUN_144c59c40(*(longlong *)(param_1 + 0x470),&local_28,0);
      lVar2 = local_28;
      lVar4 = *param_3;
      iVar6 = (int)((longlong)local_20 * 4 >> 2) + -1;
      lVar7 = (longlong)iVar6;
      if (-1 < iVar6) {
        do {
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar2 + lVar7 * 4);
            local_res8[0] = uVar1 & 0x3fffff;
            lVar5 = FUN_144c5c100((ulonglong)(uVar1 >> 0x16) * 0x20 + *(longlong *)(lVar4 + 0x18),
                                  local_res8);
            if (lVar5 == 0) {
              iVar3 = -1;
            }
            else {
              iVar3 = *(int *)(lVar5 + 4);
            }
            if (-1 < iVar3) goto LAB_1450137d2;
          }
          iVar6 = iVar6 + -1;
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      iVar6 = -1;
LAB_1450137d2:
      FUN_145014740(param_1,iVar6 + 1);
      local_20 = 0;
      if ((-1 < (int)local_1c) && (local_28 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_28,(ulonglong)(local_1c & 0x7fffffff) << 2);
      }
    }
    FUN_145012d80(param_1,*(longlong *)(param_1 + 0x48) + 0x440);
  }
  return;
}



// FUNCTION 145013840 FUN_145013840 body=42 status=ok
// SIG undefined FUN_145013840(void)

void FUN_145013840(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (*param_3 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0xf0);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xf8);
  }
  if (lVar1 != 0) {
    FUN_1450150f0(lVar1,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 145013870 FUN_145013870 body=305 status=ok
// SIG undefined FUN_145013870(void)

void FUN_145013870(longlong param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  
  pfVar5 = *(float **)(param_1 + 0x130);
  pfVar4 = pfVar5 + (longlong)*(int *)(param_1 + 0x138) * 0xc;
  for (; pfVar5 != pfVar4; pfVar5 = pfVar5 + 0xc) {
    if (pfVar5[8] == -NAN) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      *pfVar5 = *pfVar5 + *param_3;
      pfVar5[1] = pfVar5[1] + fVar1;
      pfVar5[2] = pfVar5[2] + fVar2;
      pfVar5[3] = pfVar5[3] + fVar3;
    }
  }
  if (*(int *)(param_1 + 0x120) == -1) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) + *param_3;
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + fVar1;
    *(float *)(param_1 + 0x108) = *(float *)(param_1 + 0x108) + fVar2;
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0x10c) + fVar3;
  }
  pfVar5 = *(float **)(param_1 + 0x250);
  pfVar4 = pfVar5 + (longlong)*(int *)(param_1 + 600) * 0xc;
  for (; pfVar5 != pfVar4; pfVar5 = pfVar5 + 0xc) {
    if (pfVar5[8] == -NAN) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      *pfVar5 = *param_3 + *pfVar5;
      pfVar5[1] = fVar1 + pfVar5[1];
      pfVar5[2] = fVar2 + pfVar5[2];
      pfVar5[3] = fVar3 + pfVar5[3];
    }
  }
  if (*(int *)(param_1 + 0x240) == -1) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x220) + *param_3;
    *(float *)(param_1 + 0x224) = *(float *)(param_1 + 0x224) + fVar1;
    *(float *)(param_1 + 0x228) = *(float *)(param_1 + 0x228) + fVar2;
    *(float *)(param_1 + 0x22c) = *(float *)(param_1 + 0x22c) + fVar3;
  }
  pfVar5 = *(float **)(param_1 + 0x370);
  pfVar4 = pfVar5 + (longlong)*(int *)(param_1 + 0x378) * 0xc;
  for (; pfVar5 != pfVar4; pfVar5 = pfVar5 + 0xc) {
    if (pfVar5[8] == -NAN) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      *pfVar5 = *param_3 + *pfVar5;
      pfVar5[1] = fVar1 + pfVar5[1];
      pfVar5[2] = fVar2 + pfVar5[2];
      pfVar5[3] = fVar3 + pfVar5[3];
    }
  }
  if (*(int *)(param_1 + 0x360) == -1) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *(float *)(param_1 + 0x340) = *(float *)(param_1 + 0x340) + *param_3;
    *(float *)(param_1 + 0x344) = *(float *)(param_1 + 0x344) + fVar1;
    *(float *)(param_1 + 0x348) = *(float *)(param_1 + 0x348) + fVar2;
    *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x34c) + fVar3;
  }
  if ((*(int *)(param_1 + 0x50) == 0) || (*(int *)(param_1 + 0x50) == 3)) {
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + *param_3;
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + fVar1;
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) + fVar2;
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + fVar3;
    fVar1 = param_3[1];
    fVar2 = param_3[2];
    fVar3 = param_3[3];
    *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) + *param_3;
    *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x74) + fVar1;
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x78) + fVar2;
    *(float *)(param_1 + 0x7c) = *(float *)(param_1 + 0x7c) + fVar3;
  }
  return;
}



// FUNCTION 1450139b0 FUN_1450139b0 body=296 status=ok
// SIG undefined FUN_1450139b0(void)

undefined8 * FUN_1450139b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavigator::NavigatorSettings::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  lVar1 = *(longlong *)(param_2 + 0x50);
  param_1[10] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  lVar1 = *(longlong *)(param_2 + 0x58);
  param_1[0xb] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  lVar1 = *(longlong *)(param_2 + 0x60);
  param_1[0xc] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  return param_1;
}



// FUNCTION 145013ae0 FUN_145013ae0 body=844 status=ok
// SIG undefined FUN_145013ae0(void)

ulonglong * FUN_145013ae0(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined1 uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined8 local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined1 local_78 [16];
  undefined1 local_68 [64];
  
  local_res8 = 0x120;
  lVar6 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar6,"FindPathInput");
  }
  uVar16 = 0;
  uVar7 = uVar16;
  if (lVar6 != 0) {
    uVar7 = FUN_144b40b30(lVar6);
  }
  *param_2 = uVar7;
  local_98 = *(undefined4 *)(param_1 + 0x10);
  uStack_94 = *(undefined4 *)(param_1 + 0x14);
  uStack_90 = *(undefined4 *)(param_1 + 0x18);
  uStack_8c = *(undefined4 *)(param_1 + 0x1c);
  puVar8 = (undefined8 *)FUN_144c2ee20(local_68,param_1,&local_98);
  uVar9 = puVar8[1];
  *(undefined8 *)(uVar7 + 0x20) = *puVar8;
  *(undefined8 *)(uVar7 + 0x28) = uVar9;
  *(undefined4 *)(uVar7 + 0x30) = *(undefined4 *)(puVar8 + 2);
  uVar3 = *(undefined4 *)((longlong)puVar8 + 0x24);
  uVar4 = *(undefined4 *)(puVar8 + 5);
  uVar5 = *(undefined4 *)((longlong)puVar8 + 0x2c);
  *(undefined4 *)(uVar7 + 0x40) = *(undefined4 *)(puVar8 + 4);
  *(undefined4 *)(uVar7 + 0x44) = uVar3;
  *(undefined4 *)(uVar7 + 0x48) = uVar4;
  *(undefined4 *)(uVar7 + 0x4c) = uVar5;
  *(undefined1 *)(uVar7 + 0x50) = *(undefined1 *)(puVar8 + 6);
  iVar13 = *(int *)(param_1 + 0x38);
  uVar7 = *param_2;
  if ((int)(*(uint *)(uVar7 + 0x6c) & 0x7fffffff) < iVar13) {
    FUN_145015d40(uVar7 + 0x60,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  iVar2 = *(int *)(uVar7 + 0x68);
  if (iVar2 < iVar13) {
    lVar6 = *(longlong *)(uVar7 + 0x60);
    *(int *)(uVar7 + 0x68) = iVar13;
    for (lVar14 = (longlong)iVar2 * 0x40 + *(longlong *)(uVar7 + 0x60);
        lVar14 != (longlong)iVar13 * 0x40 + lVar6; lVar14 = lVar14 + 0x40) {
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x20) = 0;
        *(undefined8 *)(lVar14 + 0x28) = 0x5f7ffff000000000;
      }
    }
  }
  else if (iVar13 < iVar2) {
    *(int *)(uVar7 + 0x68) = iVar13;
  }
  uVar7 = uVar16;
  uVar17 = uVar16;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      puVar1 = (undefined4 *)(uVar17 + 0x10 + *(longlong *)(param_1 + 0x30));
      local_98 = *puVar1;
      uStack_94 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      lVar6 = *(longlong *)(*param_2 + 0x60);
      uVar9 = FUN_144fc05f0((longlong)(int)uVar16 * 0x30 + *(longlong *)(param_1 + 0x30),local_78,
                            param_3);
      puVar10 = (undefined8 *)FUN_144c2ee20(local_68,uVar9,&local_98);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      uVar9 = puVar10[1];
      *(undefined8 *)(uVar7 + lVar6) = *puVar10;
      ((undefined8 *)(uVar7 + lVar6))[1] = uVar9;
      *(undefined4 *)(uVar7 + 0x10 + lVar6) = *(undefined4 *)(puVar10 + 2);
      uVar9 = puVar10[5];
      puVar8 = (undefined8 *)(uVar7 + 0x20 + lVar6);
      *puVar8 = puVar10[4];
      puVar8[1] = uVar9;
      *(undefined1 *)(uVar7 + 0x30 + lVar6) = *(undefined1 *)(puVar10 + 6);
      uVar7 = uVar7 + 0x40;
      uVar17 = uVar17 + 0x30;
    } while ((int)uVar15 < *(int *)(param_1 + 0x38));
  }
  *(undefined8 *)(*param_2 + 0x70) = *(undefined8 *)(param_1 + 0xf0);
  iVar13 = 10000;
  if (0 < *(int *)(param_1 + 0xa4)) {
    iVar13 = *(int *)(param_1 + 0xa4);
  }
  *(int *)(*param_2 + 0x78) = iVar13;
  uVar7 = *param_2;
  uVar3 = *(undefined4 *)(param_1 + 0xb4);
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  uVar5 = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(uVar7 + 0x80) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(uVar7 + 0x84) = uVar3;
  *(undefined4 *)(uVar7 + 0x88) = uVar4;
  *(undefined4 *)(uVar7 + 0x8c) = uVar5;
  *(undefined4 *)(*param_2 + 0x90) = *(undefined4 *)(param_1 + 0x88);
  *(undefined8 *)(*param_2 + 0x98) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(*param_2 + 0xa0) = *(undefined8 *)(param_1 + 0xc0);
  uVar7 = *param_2;
  *(undefined4 *)(uVar7 + 0xa8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(uVar7 + 0xac) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(uVar7 + 0xb0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined8 *)(*param_2 + 0xb8) = *(undefined8 *)(param_1 + 0xd0);
  if ((*(char *)(param_1 + 0xa8) == '\0') || (*(longlong *)(param_1 + 0xd0) != 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  *(undefined1 *)(*param_2 + 0xc0) = uVar12;
  *(undefined1 *)(*param_2 + 0xc2) = 0;
  *(undefined1 *)(*param_2 + 0xc3) = *(undefined1 *)(param_1 + 0xec);
  *(undefined4 *)(*param_2 + 200) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined1 *)(*param_2 + 0xce) = 1;
  *(undefined4 *)(*param_2 + 0xd0) = *(undefined4 *)(param_1 + 0xe8);
  FUN_144fc05f0(param_1,&local_88,param_3);
  pfVar11 = (float *)FUN_144fc05f0(*(undefined8 *)(param_1 + 0x30),local_78,param_3);
  fVar18 = (local_88 - *pfVar11) * (local_88 - *pfVar11);
  fVar19 = (fStack_84 - pfVar11[1]) * (fStack_84 - pfVar11[1]);
  fVar20 = (fStack_80 - pfVar11[2]) * (fStack_80 - pfVar11[2]);
  auVar21._4_4_ = fVar19 + fVar18 + fVar20;
  auVar21._0_4_ = fVar19 + fVar18 + fVar20;
  auVar21._8_4_ = fVar19 + fVar18 + fVar20;
  auVar21._12_4_ = fVar19 + fVar18 + fVar20;
  auVar21 = sqrtps(in_XMM3,auVar21);
  if (*(char *)(param_1 + 0x8c) != '\0') {
    *(float *)(*param_2 + 0xe0) =
         *(float *)(param_1 + 0x94) * auVar21._0_4_ + *(float *)(param_1 + 0x90);
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(float *)(*param_2 + 0xd8) =
         *(float *)(param_1 + 0xa0) * auVar21._0_4_ + *(float *)(param_1 + 0x9c);
  }
  return param_2;
}



// FUNCTION 145013e30 FUN_145013e30 body=149 status=ok
// SIG undefined FUN_145013e30(void)

void FUN_145013e30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_144b3f230();
  }
  *(undefined ***)(param_1 + 0x70) = &PTR_FUN_14ab67d10;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x3c)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x30),
               (ulonglong)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) * 0x30);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  return;
}



// FUNCTION 145013ed0 FUN_145013ed0 body=521 status=ok
// SIG undefined FUN_145013ed0(void)

undefined4 * FUN_145013ed0(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  FUN_144c98a30(param_1 + 0xc,param_2 + 0xc);
  param_1[0x22] = param_2[0x22];
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x27) = *(undefined8 *)(param_2 + 0x27);
  param_1[0x29] = param_2[0x29];
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  uVar2 = param_2[0x2d];
  uVar3 = param_2[0x2e];
  uVar4 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar3;
  param_1[0x2f] = uVar4;
  if (*(longlong *)(param_1 + 0x30) != *(longlong *)(param_2 + 0x30)) {
    if (*(longlong *)(param_2 + 0x30) != 0) {
      FUN_144b3d910();
    }
    lVar1 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0x32) != *(longlong *)(param_2 + 0x32)) {
    if (*(longlong *)(param_2 + 0x32) != 0) {
      FUN_144b3d910();
    }
    lVar1 = *(longlong *)(param_1 + 0x32);
    *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0x34) != *(longlong *)(param_2 + 0x34)) {
    if (*(longlong *)(param_2 + 0x34) != 0) {
      FUN_144b3d910();
    }
    lVar1 = *(longlong *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
  param_1[0x3e] = param_2[0x3e];
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x44] = param_2[0x44];
  return param_1;
}



// FUNCTION 1450140e0 FUN_1450140e0 body=1593 status=ok
// SIG undefined FUN_1450140e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1450140e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 local_res20;
  undefined1 local_11a0 [16];
  undefined1 local_1190 [24];
  undefined1 local_1178 [512];
  undefined1 local_f78 [512];
  undefined1 local_d78 [3392];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_4 + 0x7c)) {
  case 0:
    FUN_144bde670(local_11a0,local_1178,0x200);
    FUN_144be6160(local_11a0,
                  "Output status shouldn\'t be SEARCH_IN_PROGRESS if path request is marked as processed."
                 );
    iVar11 = FUN_144bfc110(0x7b6114fd,local_1178,"Navigator\\hkaiNavigator.cpp",0x490);
    if (iVar11 != 0) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FUN_144bde6e0(local_11a0);
    FUN_145013ed0(param_1 + 0x340,param_2);
    break;
  case 1:
    iVar11 = *(int *)(param_1 + 0x490) + 1;
    uVar17 = *(undefined4 *)(param_4 + 0x30);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar1 = *(undefined4 *)(param_4 + 0x78);
    puVar16 = (undefined8 *)
              ((longlong)*(int *)(param_4 + 0x74) * 0x20 + *(longlong *)(param_4 + 0x40));
    local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(param_4 + 0x70));
    uVar14 = *puVar16;
    uVar8 = puVar16[1];
    uVar15 = *(undefined4 *)(puVar16 + 2);
    uVar19 = *(undefined4 *)(param_4 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar11) {
      FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar11);
      uVar19 = (undefined4)local_res20;
    }
    iVar18 = *(int *)(param_1 + 0x490);
    *(int *)(param_1 + 0x490) = iVar11;
    puVar12 = (undefined4 *)((longlong)iVar18 * 0x80 + *(longlong *)(param_1 + 0x488));
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar12 + 0x1c) = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0x80000000;
    }
    *puVar12 = 0;
    puVar12[0xf] = uVar19;
    uVar19 = 8;
    puVar12[0xe] = uVar1;
    *(undefined8 *)(puVar12 + 4) = uVar5;
    *(undefined8 *)(puVar12 + 6) = uVar6;
    *(undefined8 *)(puVar12 + 8) = uVar14;
    *(undefined8 *)(puVar12 + 10) = uVar8;
    puVar12[0xc] = uVar17;
    puVar12[0xd] = uVar15;
    FUN_145013ed0(param_1 + 0x340,param_2);
    bVar10 = false;
    goto LAB_145014561;
  case 2:
    iVar11 = *(int *)(param_4 + 0x30);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar1 = *(undefined4 *)(param_4 + 0x78);
    uVar17 = 0;
    if (iVar11 != -1) {
      uVar17 = 2;
    }
    local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)(param_4 + 0x70));
    iVar18 = *(int *)(param_1 + 0x490) + 1;
    uVar15 = *(undefined4 *)(param_4 + 0x70);
    if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar18) {
      FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar18);
      uVar15 = (undefined4)local_res20;
    }
    iVar3 = *(int *)(param_1 + 0x490);
    *(int *)(param_1 + 0x490) = iVar18;
    puVar12 = (undefined4 *)((longlong)iVar3 * 0x80 + *(longlong *)(param_1 + 0x488));
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar12 + 0x1c) = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0x80000000;
    }
    *puVar12 = 1;
    puVar12[0xe] = uVar1;
    puVar12[0xc] = iVar11;
    puVar12[0xd] = 0xffffffff;
    puVar12[0xf] = uVar15;
    puVar12[0x10] = uVar17;
    *(undefined8 *)(puVar12 + 4) = uVar5;
    *(undefined8 *)(puVar12 + 6) = uVar6;
    *(undefined8 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 10) = 0;
    if (((*(byte *)(param_1 + 0x4d0) & 4) == 0) || (*(int *)(param_4 + 0x58) == 0)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    FUN_145013ed0(param_1 + 0x340,param_2);
    bVar10 = false;
    uVar19 = 4;
    if (!bVar9) {
      return;
    }
LAB_145014561:
    puVar16 = (undefined8 *)0x0;
    FUN_145013ed0(param_1 + 0x220,param_2);
    local_res20 = 0x48;
    puVar13 = (undefined8 *)(*DAT_14c787670)(0,&local_res20,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar13,"hkaiEdgePath");
    }
    if (puVar13 != (undefined8 *)0x0) {
      puVar13[4] = 0;
      puVar13[6] = 0;
      puVar13[1] = 0xffffffff;
      *puVar13 = &PTR_LAB_14aba55c0;
      puVar13[2] = 1;
      puVar13[3] = 0;
      *(undefined4 *)(puVar13 + 4) = 0;
      *(undefined4 *)((longlong)puVar13 + 0x24) = 0x80000000;
      puVar13[5] = 0;
      *(undefined4 *)(puVar13 + 6) = 0;
      *(undefined4 *)((longlong)puVar13 + 0x34) = 0x80000000;
      puVar13[7] = 0;
      puVar13[8] = 0;
      puVar16 = puVar13;
    }
    lVar4 = *(longlong *)(param_1 + 0x470);
    *(undefined8 **)(param_1 + 0x470) = puVar16;
    if (lVar4 != 0) {
      FUN_144b3f230();
    }
    fVar2 = *(float *)(param_1 + 0x1b0);
    uVar5 = *(undefined8 *)(param_1 + 0x470);
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x140);
    uVar14 = FUN_145014820(param_1,local_d78);
    FUN_144b40d70(uVar5,param_3,param_4,*(float *)(param_1 + 0x1b0) * 0.5,
                  fVar2 * 0.5 * *(float *)(param_1 + 0x208),
                  fVar2 * 0.5 * *(float *)(param_1 + 0x20c),uVar6,uVar14);
    FUN_144b3fa90(local_d78);
    FUN_144b40970(*(undefined8 *)(param_1 + 0x470),param_1 + 0x478);
    *(undefined4 *)(param_1 + 0x54) = uVar19;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x46c) = 0;
LAB_1450146e4:
    if (bVar10) {
      *(int *)(param_1 + 0x210) = *(int *)(param_1 + 0x210) + 1;
    }
    break;
  case 3:
    if (((*(int *)(param_1 + 0x1a4) < 1) || (*(char *)(param_4 + 0x7d) != '\x01')) ||
       (*(int *)(param_1 + 0x1a4) <= *(int *)(param_4 + 0x70))) {
      uVar17 = *(undefined4 *)(param_4 + 0x70);
      uVar19 = 2;
      uVar15 = *(undefined4 *)(param_4 + 0x30);
      uVar5 = *(undefined8 *)(param_4 + 0x20);
      uVar6 = *(undefined8 *)(param_4 + 0x28);
      uVar1 = *(undefined4 *)(param_4 + 0x78);
      if (*(char *)(param_4 + 0x7d) == '\x01') {
        local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
      }
      else if (*(char *)(param_4 + 0x7d) == '\x02') {
        local_res20 = CONCAT44(local_res20._4_4_,1);
      }
      else {
        local_res20 = CONCAT44(local_res20._4_4_,2);
      }
      iVar11 = *(int *)(param_1 + 0x490) + 1;
      if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar11) {
        FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      iVar18 = *(int *)(param_1 + 0x490);
      *(int *)(param_1 + 0x490) = iVar11;
      puVar12 = (undefined4 *)((longlong)iVar18 * 0x80 + *(longlong *)(param_1 + 0x488));
      if (puVar12 != (undefined4 *)0x0) {
        *(undefined8 *)(puVar12 + 0x1c) = 0;
        puVar12[0x1e] = 0;
        puVar12[0x1f] = 0x80000000;
      }
      bVar10 = false;
      *puVar12 = 2;
      puVar12[0xe] = uVar1;
      puVar12[0xc] = uVar15;
      puVar12[0xd] = 0xffffffff;
      puVar12[0xf] = uVar17;
      puVar12[0x10] = (undefined4)local_res20;
      *(undefined8 *)(puVar12 + 4) = uVar5;
      *(undefined8 *)(puVar12 + 6) = uVar6;
      *(undefined8 *)(puVar12 + 8) = 0;
      *(undefined8 *)(puVar12 + 10) = 0;
    }
    else {
      bVar10 = true;
      uVar19 = 1;
    }
    if (((*(byte *)(param_1 + 0x4d0) & (byte)uVar19) == (byte)uVar19) &&
       (*(int *)(param_4 + 0x58) != 0)) {
      FUN_145013ed0(param_1 + 0x340,param_2);
      goto LAB_145014561;
    }
    FUN_145013ed0(param_1 + 0x340,param_2);
    goto LAB_1450146e4;
  case 4:
    FUN_144bde670(local_1190,local_f78,0x200);
    FUN_144be6160(local_1190,"We don\'t expect result truncation in hkaiNavigator.");
    iVar11 = FUN_144bfc110(0xc457203,local_f78,"Navigator\\hkaiNavigator.cpp",0x494);
    if (iVar11 != 0) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FUN_144bde6e0(local_1190);
    FUN_145013ed0(param_1 + 0x340,param_2);
    break;
  case 5:
    iVar11 = *(int *)(param_4 + 0x30);
    uVar5 = *(undefined8 *)(param_4 + 0x20);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    iVar18 = *(int *)(param_1 + 0x490) + 1;
    if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar18) {
      FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar3 = *(int *)(param_1 + 0x490);
    *(int *)(param_1 + 0x490) = iVar18;
    puVar12 = (undefined4 *)((longlong)iVar3 * 0x80 + *(longlong *)(param_1 + 0x488));
    if (puVar12 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar12 + 0x1c) = 0;
      puVar12[0x1e] = 0;
      puVar12[0x1f] = 0x80000000;
    }
    *puVar12 = 1;
    puVar12[0xc] = iVar11;
    puVar12[0xd] = 0xffffffff;
    *(undefined8 *)(puVar12 + 0xe) = 0;
    puVar12[0x10] = (uint)(iVar11 != -1);
    *(undefined8 *)(puVar12 + 4) = uVar5;
    *(undefined8 *)(puVar12 + 6) = uVar6;
    *(undefined8 *)(puVar12 + 8) = 0;
    *(undefined8 *)(puVar12 + 10) = 0;
    FUN_145013ed0(param_1 + 0x340,param_2);
  }
  return;
}



// FUNCTION 145014740 FUN_145014740 body=81 status=ok
// SIG undefined FUN_145014740(void)

void FUN_145014740(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x47c)) {
    FUN_144c59d20(*(undefined8 *)(param_1 + 0x470));
    *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) - param_2;
    *(int *)(param_1 + 0x47c) = *(int *)(param_1 + 0x47c) - param_2;
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) - param_2;
    return;
  }
  FUN_1450147a0(param_1,0);
  return;
}



// FUNCTION 1450147a0 FUN_1450147a0 body=126 status=ok
// SIG undefined FUN_1450147a0(void)

void FUN_1450147a0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    *(undefined1 *)(param_1 + 0x58) = 1;
    iVar3 = *(int *)(param_1 + 0x490) + 1;
    if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar3) {
      FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    iVar1 = *(int *)(param_1 + 0x490);
    *(int *)(param_1 + 0x490) = iVar3;
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0x488));
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[0x1f] = 0x80000000;
      *(undefined8 *)(puVar2 + 0x1c) = 0;
      puVar2[0x1e] = 0;
    }
    *puVar2 = 4;
    puVar2[4] = param_2;
  }
  return;
}



// FUNCTION 145014820 FUN_145014820 body=164 status=ok
// SIG undefined FUN_145014820(void)

undefined8 FUN_145014820(longlong param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_3c = *(float *)(param_1 + 0x1b0) * 0.5;
  local_10 = 0x3a83126f;
  local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x140);
  local_40 = *(undefined4 *)(param_1 + 0x188);
  local_20 = *(undefined8 *)(param_1 + 0x1c0);
  local_18 = *(undefined8 *)(param_1 + 0x1b8);
  local_38 = *(undefined8 *)(param_1 + 0x1d8);
  local_30 = *(undefined4 *)(param_1 + 0x1e0);
  local_28 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_144b3fb20(param_2,&local_48);
  return param_2;
}



// FUNCTION 1450148d0 FUN_1450148d0 body=436 status=ok
// SIG undefined FUN_1450148d0(void)

bool FUN_1450148d0(longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [16],
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar14 [16];
  uint local_res8 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (*(char *)(param_1 + 0x41) == '\0') {
    return false;
  }
  if (param_3 != 0xffffffff) {
    local_res8[0] = param_3 >> 0x16;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x140);
    lVar2 = *(longlong *)((ulonglong)local_res8[0] * 0x120 + *(longlong *)(lVar1 + 0x38));
    if (lVar2 != 0) {
      fVar8 = *(float *)(lVar2 + 0xc0);
      fVar9 = *(float *)(lVar2 + 0xc4);
      fVar10 = *(float *)(lVar2 + 200);
      fVar12 = *(float *)(lVar2 + 0xcc);
      pfVar4 = (float *)FUN_144ca4f90(lVar1,local_res8);
      fVar13 = *(float *)(param_1 + 0x30);
      fVar16 = *(float *)(param_1 + 0x34);
      fVar18 = *(float *)(param_1 + 0x38);
      fVar11 = *(float *)(param_1 + 0x3c);
      if (*(char *)(param_1 + 0x40) != '\0') {
        fVar15 = fVar13 * pfVar4[1];
        fVar17 = fVar13 * pfVar4[2];
        fVar19 = fVar13 * pfVar4[3];
        fVar6 = fVar16 * pfVar4[6];
        fVar7 = fVar16 * pfVar4[7];
        fVar11 = fVar18 * pfVar4[0xb];
        fVar13 = fVar13 * *pfVar4 + fVar16 * pfVar4[4] + fVar18 * pfVar4[8];
        fVar16 = fVar15 + fVar16 * pfVar4[5] + fVar18 * pfVar4[9];
        fVar18 = fVar17 + fVar6 + fVar18 * pfVar4[10];
        fVar11 = fVar19 + fVar7 + fVar11;
      }
      fVar6 = fVar13 * fVar8;
      fVar7 = fVar16 * fVar9;
      fVar15 = fVar18 * fVar10;
      auVar14._0_4_ = fVar13 - (fVar7 + fVar6 + fVar15) * fVar8;
      auVar14._4_4_ = fVar16 - (fVar7 + fVar6 + fVar15) * fVar9;
      auVar14._8_4_ = fVar18 - (fVar7 + fVar6 + fVar15) * fVar10;
      auVar14._12_4_ = fVar11 - (fVar7 + fVar6 + fVar15) * fVar12;
      fVar8 = auVar14._0_4_ * auVar14._0_4_;
      fVar9 = auVar14._4_4_ * auVar14._4_4_;
      fVar10 = auVar14._8_4_ * auVar14._8_4_;
      auVar5._4_4_ = fVar8;
      auVar5._0_4_ = fVar8;
      auVar5._8_4_ = fVar8;
      auVar5._12_4_ = fVar8;
      fVar12 = fVar9 + fVar8 + fVar10;
      if (fVar12 == 0.0) {
        *(undefined8 *)*param_4 = 0;
        *(undefined8 *)(*param_4 + 8) = 0;
      }
      else {
        auVar3._4_4_ = fVar9 + fVar8 + fVar10;
        auVar3._0_4_ = fVar12;
        auVar3._8_4_ = fVar9 + fVar8 + fVar10;
        auVar3._12_4_ = fVar9 + fVar8 + fVar10;
        auVar5 = sqrtps(auVar5,auVar3);
        auVar5 = divps(auVar14,auVar5);
        *param_4 = auVar5;
      }
      fVar8 = *param_2 - pfVar4[0xc];
      fVar9 = param_2[1] - pfVar4[0xd];
      fVar10 = param_2[2] - pfVar4[0xe];
      local_38 = 0;
      uStack_30 = 0;
      fStack_1c = (param_2[3] - pfVar4[0xf]) * pfVar4[0xb];
      local_28 = fVar9 * pfVar4[1] + fVar8 * *pfVar4 + fVar10 * pfVar4[2];
      fStack_24 = fVar9 * pfVar4[5] + fVar8 * pfVar4[4] + fVar10 * pfVar4[6];
      fStack_20 = fVar9 * pfVar4[9] + fVar8 * pfVar4[8] + fVar10 * pfVar4[10];
      fStack_1c = fStack_1c + fVar9 * pfVar4[9] + fStack_1c;
      FUN_144fd27b0(pfVar4,&local_28,&local_38,param_5);
      return true;
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  return *(char *)(param_1 + 0x40) == '\0';
}



// FUNCTION 145014a90 FUN_145014a90 body=981 status=ok
// SIG undefined FUN_145014a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145014a90(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float *pfVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  undefined4 *puVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint local_res10 [2];
  undefined1 local_e8 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong local_80;
  longlong lStack_78;
  
  pfVar18 = (float *)FUN_144b3f860(*(undefined8 *)(param_1 + 0x470));
  lVar21 = *(longlong *)
            ((ulonglong)((uint)pfVar18[0x1c] >> 0x16) * 0x120 +
            *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x140) + 0x38));
  FUN_144b3fa50(&local_d8,lVar21 + 0x60,param_1 + 0x100);
  fVar33 = *pfVar18 - pfVar18[4];
  fVar34 = pfVar18[1] - pfVar18[5];
  fVar35 = pfVar18[2] - pfVar18[6];
  fVar39 = *pfVar18 - local_d8;
  fVar40 = pfVar18[1] - fStack_d4;
  fVar41 = pfVar18[2] - fStack_d0;
  fVar27 = fVar33 * fVar39;
  fVar28 = fVar34 * fVar40;
  fVar29 = fVar35 * fVar41;
  fVar30 = fVar33 * fVar33;
  fVar31 = fVar34 * fVar34;
  fVar32 = fVar35 * fVar35;
  auVar36._0_4_ = fVar28 + fVar27 + fVar29;
  auVar36._4_4_ = fVar28 + fVar27 + fVar29;
  auVar36._8_4_ = fVar28 + fVar27 + fVar29;
  auVar36._12_4_ = fVar28 + fVar27 + fVar29;
  auVar37._4_4_ = fVar31 + fVar30 + fVar32;
  auVar37._0_4_ = fVar31 + fVar30 + fVar32;
  auVar37._8_4_ = fVar31 + fVar30 + fVar32;
  auVar37._12_4_ = fVar31 + fVar30 + fVar32;
  auVar37 = divps(auVar36,auVar37);
  auVar37 = minps(auVar37,_DAT_1499314a0);
  auVar37 = maxps(auVar37,ZEXT816(0));
  fVar38 = auVar37._12_4_;
  fVar39 = fVar39 - fVar33 * auVar37._0_4_;
  fVar40 = fVar40 - fVar34 * auVar37._4_4_;
  fVar41 = fVar41 - fVar35 * auVar37._8_4_;
  fVar27 = fVar39 * fVar39;
  fVar28 = fVar40 * fVar40;
  fVar29 = fVar41 * fVar41;
  auVar26._4_4_ = fVar27;
  auVar26._0_4_ = fVar27;
  auVar26._8_4_ = fVar27;
  auVar26._12_4_ = fVar27;
  auVar42._0_4_ = local_d8 - (local_d8 + fVar39);
  auVar42._4_4_ = fStack_d4 - (fStack_d4 + fVar40);
  auVar42._8_4_ = fStack_d0 - (fStack_d0 + fVar41);
  auVar42._12_4_ = fStack_cc - fVar38;
  auVar43._4_4_ = fVar28 + fVar27 + fVar29;
  auVar43._0_4_ = fVar28 + fVar27 + fVar29;
  auVar43._8_4_ = fVar28 + fVar27 + fVar29;
  auVar43._12_4_ = fVar28 + fVar27 + fVar29;
  auVar37 = sqrtps(auVar26,auVar43);
  auVar43 = divps(auVar42,auVar37);
  plVar19 = (longlong *)FUN_144b3fc20(*(undefined8 *)(param_1 + 0x470),local_e8,param_2);
  lVar3 = *plVar19;
  lVar4 = plVar19[1];
  fVar27 = *pfVar18;
  fVar28 = pfVar18[1];
  fVar29 = pfVar18[2];
  fVar30 = pfVar18[3];
  fVar31 = pfVar18[4];
  fVar32 = pfVar18[5];
  fVar33 = pfVar18[6];
  fVar34 = pfVar18[7];
  local_80 = lVar3;
  lStack_78 = lVar4;
  lVar20 = FUN_144b3f860(*(undefined8 *)(param_1 + 0x470),param_2 + 1);
  uVar23 = *(uint *)(lVar20 + 0x70) >> 0x16;
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x140);
  lVar5 = *(longlong *)((ulonglong)uVar23 * 0x120 + *(longlong *)(lVar20 + 0x38));
  FUN_144b3f870(pfVar18 + 0x1c,local_res10,lVar20,0);
  lVar21 = *(longlong *)(lVar21 + 0x20);
  uVar17 = local_res10[0] & 0x3fffff;
  if ((int)uVar17 < *(int *)(lVar21 + 0x30)) {
    uVar22 = (ulonglong)uVar17;
    if (*(int *)(lVar21 + 0x78) != 0) {
      uVar17 = *(uint *)(*(longlong *)(lVar21 + 0x70) + uVar22 * 4);
    }
    if (uVar17 == 0xffffffff) {
      lVar21 = *(longlong *)(lVar21 + 0x28);
      lVar20 = uVar22 * 5;
    }
    else {
      lVar20 = (longlong)(int)uVar17 * 5;
      lVar21 = *(longlong *)(lVar21 + 0xc0);
    }
  }
  else {
    lVar20 = (longlong)(int)(uVar17 - *(int *)(lVar21 + 0x30)) * 5;
    lVar21 = *(longlong *)(lVar21 + 0xe0);
  }
  lVar5 = *(longlong *)(lVar5 + 0x20);
  uVar17 = *(uint *)(lVar21 + lVar20 * 4 + 8) & 0x3fffff;
  if ((int)uVar17 < *(int *)(lVar5 + 0x30)) {
    uVar22 = (ulonglong)uVar17;
    if (*(int *)(lVar5 + 0x78) != 0) {
      uVar17 = *(uint *)(*(longlong *)(lVar5 + 0x70) + uVar22 * 4);
    }
    if (uVar17 == 0xffffffff) {
      lVar21 = *(longlong *)(lVar5 + 0x28);
      lVar20 = uVar22 * 5;
    }
    else {
      lVar20 = (longlong)(int)uVar17 * 5;
      lVar21 = *(longlong *)(lVar5 + 0xc0);
    }
  }
  else {
    lVar20 = (longlong)(int)(uVar17 - *(int *)(lVar5 + 0x30)) * 5;
    lVar21 = *(longlong *)(lVar5 + 0xe0);
  }
  piVar1 = (int *)(lVar21 + lVar20 * 4);
  iVar24 = *(int *)(lVar5 + 0x40);
  iVar2 = *piVar1;
  if (iVar2 < iVar24) {
    pfVar18 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    pfVar18 = (float *)((longlong)(iVar2 - iVar24) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  fVar35 = *pfVar18;
  fVar6 = pfVar18[1];
  fVar7 = pfVar18[2];
  fVar8 = pfVar18[3];
  iVar2 = piVar1[1];
  if (iVar2 < iVar24) {
    pfVar18 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar5 + 0x38));
  }
  else {
    pfVar18 = (float *)((longlong)(iVar2 - iVar24) * 0x10 + *(longlong *)(lVar5 + 0xf0));
  }
  fVar9 = *pfVar18;
  fVar10 = pfVar18[1];
  fVar11 = pfVar18[2];
  fVar12 = pfVar18[3];
  iVar24 = *(int *)(param_1 + 0x490) + 1;
  fVar13 = *pfVar18;
  fVar14 = pfVar18[1];
  fVar15 = pfVar18[2];
  fVar16 = pfVar18[3];
  if ((int)(*(uint *)(param_1 + 0x494) & 0x7fffffff) < iVar24) {
    FUN_145015e70((longlong *)(param_1 + 0x488),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  puVar25 = (undefined4 *)
            ((longlong)*(int *)(param_1 + 0x490) * 0x80 + *(longlong *)(param_1 + 0x488));
  *(int *)(param_1 + 0x490) = iVar24;
  plVar19 = (longlong *)(puVar25 + 0x1c);
  if (puVar25 != (undefined4 *)0x0) {
    puVar25[0x1f] = 0x80000000;
    *plVar19 = 0;
    puVar25[0x1e] = 0;
  }
  *puVar25 = 5;
  puVar25[4] = (float)(~-(uint)(auVar37._0_4_ == 0.0) & auVar43._0_4_) * 0.0 + local_d8 + fVar39;
  puVar25[5] = (float)(~-(uint)(auVar37._4_4_ == 0.0) & auVar43._4_4_) * 0.0 + fStack_d4 + fVar40;
  puVar25[6] = (float)(~-(uint)(auVar37._8_4_ == 0.0) & auVar43._8_4_) * 0.0 + fStack_d0 + fVar41;
  puVar25[7] = fVar38;
  puVar25[8] = fVar38 * (fVar9 - fVar35) + fVar35;
  puVar25[9] = fVar38 * (fVar10 - fVar6) + fVar6;
  puVar25[10] = fVar38 * (fVar11 - fVar7) + fVar7;
  puVar25[0xb] = fVar38 * (fVar12 - fVar8) + fVar8;
  puVar25[0xc] = fVar27 - fVar31;
  puVar25[0xd] = fVar28 - fVar32;
  puVar25[0xe] = fVar29 - fVar33;
  puVar25[0xf] = fVar30 - fVar34;
  puVar25[0x10] = fVar35 - fVar13;
  puVar25[0x11] = fVar6 - fVar14;
  puVar25[0x12] = fVar7 - fVar15;
  puVar25[0x13] = fVar8 - fVar16;
  puVar25[0x14] = local_res10[0];
  puVar25[0x15] = uVar23;
  *(longlong *)(puVar25 + 0x16) = local_80;
  *(longlong *)(puVar25 + 0x18) = lStack_78;
  if (&local_80 != plVar19) {
    iVar24 = (int)(lVar4 - lVar3 >> 2);
    if ((int)(puVar25[0x1f] & 0x7fffffff) < iVar24) {
      FUN_141807e20(plVar19,&PTR_vftable_14c6e47a0,(longlong)iVar24);
    }
    FUN_144b3d470(*plVar19,lVar3,(longlong)iVar24 * 4);
    puVar25[0x1e] = iVar24;
  }
  *(longlong *)(puVar25 + 0x16) = *plVar19;
  *(longlong *)(puVar25 + 0x18) = *plVar19 + (longlong)(int)puVar25[0x1e] * 4;
  return;
}



// FUNCTION 145014e70 FUN_145014e70 body=631 status=ok
// SIG undefined FUN_145014e70(void)

undefined8 * FUN_145014e70(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *local_38;
  char *local_30;
  
  param_1[3] = param_2;
  *param_1 = hkaiNavigator::ProcessingRunDelegate::vftable;
  memset(param_1 + 4,0,0x130);
  uVar10 = (ulonglong)_tls_index;
  plVar1 = param_1 + 0x2a;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *plVar1 = (longlong)(param_1 + 0x2c);
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000010;
  *(bool *)(param_1 + 0x34) = *(char *)(param_3 + 0x48) != '\0';
  *(bool *)((longlong)param_1 + 0x1a1) = *(char *)(param_3 + 0x58) != '\0';
  *(undefined1 *)((longlong)param_1 + 0x1a2) = *(undefined1 *)(param_2 + 0x484);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x460);
  pvVar6 = ThreadLocalStoragePointer;
  *(undefined1 *)(param_1 + 0x35) = 0;
  lVar2 = *(longlong *)((longlong)pvVar6 + uVar10 * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar9 = *(longlong *)(lVar2 + 0xf0);
  if (lVar9 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar9 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar9;
  }
  lVar2 = *(longlong *)(lVar9 + 0x3e0);
  if (lVar2 != 0) {
    local_38 = "TtProcessingRunDelegate()";
    local_30 = "";
    FUN_144b3f370(lVar2,&local_38);
  }
  if (*(int *)(param_2 + 0x20) == 1) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      FUN_145013e30(param_1 + 4);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    uVar3 = *(undefined4 *)(param_2 + 0x104);
    uVar4 = *(undefined4 *)(param_2 + 0x108);
    uVar5 = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 5) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
    uVar3 = *(undefined4 *)(param_2 + 0x114);
    uVar4 = *(undefined4 *)(param_2 + 0x118);
    uVar5 = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
    *(undefined4 *)(param_1 + 7) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uVar5;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x124);
    param_1[10] = param_1 + 0xc;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000001;
    FUN_144c98a30(param_1 + 10,param_2 + 0x130);
    FUN_1450139b0(param_1 + 0x12,param_2 + 0x170);
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x210);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(longlong *)(param_2 + 0x470) != 0) {
    iVar7 = FUN_144b3fa10();
    iVar7 = iVar7 - *(int *)(param_2 + 0x47c);
  }
  if ((int)(*(uint *)((longlong)param_1 + 0x15c) & 0x7fffffff) < iVar7) {
    FUN_144c5c170(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  iVar8 = *(int *)(param_1 + 0x2b);
  if ((iVar8 < iVar7) || (iVar7 < iVar8)) {
    *(int *)(param_1 + 0x2b) = iVar7;
    iVar8 = iVar7;
  }
  local_38 = (char *)*plVar1;
  local_30 = local_38 + (longlong)iVar8 * 4;
  if (*(longlong *)(param_2 + 0x470) != 0) {
    FUN_144c59cd0(*(longlong *)(param_2 + 0x470),&local_38,*(undefined4 *)(param_2 + 0x47c));
  }
  if (lVar2 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar2,&local_38);
  }
  return param_1;
}



// FUNCTION 1450150f0 FUN_1450150f0 body=1278 status=ok
// SIG undefined FUN_1450150f0(void)

void FUN_1450150f0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  undefined8 local_res20;
  undefined8 local_58;
  int local_50;
  uint local_4c;
  longlong local_48;
  
  local_res10 = param_2;
  if ((*(char *)(param_1 + 0x1a0) == '\0') || (*(char *)(param_1 + 0x140) == '\0'))
  goto LAB_145015441;
  bVar6 = false;
  if ((*(longlong *)(param_2 + 8) == 0) || (iVar12 = 0, *(int *)(param_1 + 0x58) < 1)) {
LAB_1450152ff:
    if (param_3 == (longlong *)0x0) {
LAB_145015270:
      lVar15 = FUN_144faf560(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48),param_1);
    }
    else {
      lVar15 = (**(code **)(*param_3 + 8))(param_3,param_1);
    }
  }
  else {
    uStackX_c = 0xffffffff;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 8) + 0x18);
    lVar15 = 0;
    do {
      local_res8 = *(uint *)(lVar15 + 0x20 + *(longlong *)(param_1 + 0x50));
      lVar9 = FUN_145015980(plVar1,&local_res8);
      if (((lVar9 != 0) && (-1 < *(int *)(lVar9 + 4))) &&
         ((*(byte *)(*plVar1 + 8 + (longlong)*(int *)(lVar9 + 4) * 0xc) & 2) != 0)) {
        iVar8 = *(int *)(param_1 + 0x58);
        iVar7 = iVar8 + -1;
        *(int *)(param_1 + 0x58) = iVar7;
        if (iVar7 != iVar12) {
          puVar16 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + -0x30 + (longlong)iVar8 * 0x30);
          puVar2 = (undefined4 *)(lVar15 + *(longlong *)(param_1 + 0x50));
          if ((puVar2 != puVar16) && (puVar2 != (undefined4 *)0x0)) {
            uVar3 = puVar16[1];
            uVar4 = puVar16[2];
            uVar5 = puVar16[3];
            *puVar2 = *puVar16;
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
            uVar11 = *(undefined8 *)(puVar16 + 6);
            *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar16 + 4);
            *(undefined8 *)(puVar2 + 6) = uVar11;
            puVar2[8] = puVar16[8];
            puVar2[9] = puVar16[9];
          }
        }
        bVar6 = true;
      }
      iVar12 = iVar12 + 1;
      lVar15 = lVar15 + 0x30;
    } while (iVar12 < *(int *)(param_1 + 0x58));
    if (!bVar6) goto LAB_1450152ff;
    if (param_3 == (longlong *)0x0) {
      lVar15 = FUN_144faf560(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48),param_1);
    }
    else {
      lVar15 = (**(code **)(*param_3 + 8))(param_3);
    }
    if ((lVar15 == 0) || (*(char *)(lVar15 + 0x36) != '\0')) goto LAB_1450152ff;
    if (param_3 == (longlong *)0x0) {
      FUN_144fab200(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48) + 0x230),
                    param_1,*(undefined1 *)(param_1 + 0x1a2));
      goto LAB_145015270;
    }
    (**(code **)(*param_3 + 0x20))(param_3);
    lVar15 = (**(code **)(*param_3 + 8))(param_3,param_1);
  }
  if ((lVar15 == 0) || (*(char *)(lVar15 + 0x36) != '\0')) {
    uVar14 = 0xffffffff;
    lVar15 = *(longlong *)(param_1 + 0x150);
    iVar12 = *(int *)(param_1 + 0x158) + -1;
    local_48 = *(longlong *)(local_res10 + 0x10);
    lVar9 = *(longlong *)(local_res10 + 8);
    lVar17 = (longlong)iVar12;
    local_res20 = lVar15;
    if (-1 < iVar12) {
      do {
        if (local_48 != 0) {
          uVar13 = *(uint *)(lVar15 + lVar17 * 4);
          local_res8 = uVar13 & 0x3fffff;
          lVar15 = FUN_144c5c100((ulonglong)(uVar13 >> 0x16) * 0x20 + *(longlong *)(local_48 + 0x18)
                                 ,&local_res8);
          if (lVar15 == 0) {
            iVar8 = -1;
          }
          else {
            iVar8 = *(int *)(lVar15 + 4);
          }
          lVar15 = local_res20;
          if (iVar8 < 0) goto LAB_14501532a;
LAB_14501538d:
          if ((-1 < iVar12) && (*(int *)(param_1 + 0x58) != 0)) {
            if (param_3 == (longlong *)0x0) {
              FUN_145013ae0(param_1 + 0x20,&local_res8,
                            *(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48) + 0x140));
              lVar15 = CONCAT44(uStackX_c,local_res8);
              lVar9 = FUN_144faf530(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48),param_1,
                                    lVar15,*(undefined1 *)(param_1 + 0x1a2),
                                    *(undefined4 *)(param_1 + 0x1a4));
            }
            else {
              uVar11 = (**(code **)*param_3)(param_3);
              FUN_145013ae0(param_1 + 0x20,&local_res8,uVar11);
              lVar15 = CONCAT44(uStackX_c,local_res8);
              lVar9 = (**(code **)(*param_3 + 0x18))
                                (param_3,param_1,lVar15,*(undefined1 *)(param_1 + 0x1a2),
                                 *(undefined4 *)(param_1 + 0x1a4));
            }
            *(undefined1 *)(lVar9 + 0x35) = 0;
            if (lVar15 != 0) {
              FUN_144b3f230(lVar15);
            }
          }
          break;
        }
LAB_14501532a:
        uVar13 = *(uint *)(lVar17 * 4 + lVar15) >> 0x16;
        if ((uVar13 != uVar14) && (uVar14 = uVar13, lVar9 != 0)) {
          local_58 = CONCAT44(0xffffffff,uVar13);
          lVar10 = FUN_145015980(lVar9 + 0x18,&local_58);
          lVar15 = local_res20;
          if ((lVar10 != 0) &&
             ((-1 < *(int *)(lVar10 + 4) &&
              ((*(byte *)(*(longlong *)(lVar9 + 0x18) + 8 + (longlong)*(int *)(lVar10 + 4) * 0xc) &
               2) != 0)))) goto LAB_14501538d;
        }
        iVar12 = iVar12 + -1;
        lVar17 = lVar17 + -1;
      } while (-1 < lVar17);
    }
  }
LAB_145015441:
  lVar15 = local_res10;
  if (*(char *)(param_1 + 0x1a1) != '\0') {
    lVar9 = *(longlong *)(param_1 + 0x18);
    if ((*(longlong *)(lVar9 + 0x470) != 0) && (*(char *)(lVar9 + 0x58) == '\0')) {
      local_58 = 0;
      local_50 = 0;
      local_4c = 0x80000000;
      FUN_144c59c40(*(undefined8 *)(lVar9 + 0x470),&local_58,0);
      lVar9 = local_58;
      uVar14 = 0xffffffff;
      local_48 = *(longlong *)(lVar15 + 0x10);
      lVar15 = *(longlong *)(lVar15 + 8);
      iVar12 = (int)((longlong)local_50 * 4 >> 2) + -1;
      lVar17 = (longlong)iVar12;
      if (-1 < iVar12) {
        do {
          if (local_48 != 0) {
            uVar13 = *(uint *)(lVar9 + lVar17 * 4);
            local_res8 = uVar13 & 0x3fffff;
            lVar10 = FUN_144c5c100((ulonglong)(uVar13 >> 0x16) * 0x20 +
                                   *(longlong *)(local_48 + 0x18),&local_res8);
            if (lVar10 == 0) {
              iVar8 = -1;
            }
            else {
              iVar8 = *(int *)(lVar10 + 4);
            }
            if (iVar8 < 0) goto LAB_145015519;
LAB_145015577:
            if (-1 < iVar12) {
              FUN_145014740(*(undefined8 *)(param_1 + 0x18),iVar12 + 1);
            }
            break;
          }
LAB_145015519:
          uVar13 = *(uint *)(lVar17 * 4 + lVar9) >> 0x16;
          if ((uVar13 != uVar14) && (uVar14 = uVar13, lVar15 != 0)) {
            local_res20 = CONCAT44(0xffffffff,uVar13);
            lVar10 = FUN_145015980(lVar15 + 0x18,&local_res20);
            if ((lVar10 != 0) &&
               ((-1 < *(int *)(lVar10 + 4) &&
                ((*(byte *)(*(longlong *)(lVar15 + 0x18) + 8 + (longlong)*(int *)(lVar10 + 4) * 0xc)
                 & 2) != 0)))) goto LAB_145015577;
          }
          iVar12 = iVar12 + -1;
          lVar17 = lVar17 + -1;
        } while (-1 < lVar17);
      }
      local_50 = 0;
      if ((-1 < (int)local_4c) && (local_58 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_58,(ulonglong)(local_4c & 0x7fffffff) << 2);
      }
    }
    FUN_145012d80(*(longlong *)(param_1 + 0x18),
                  *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48) + 0x440);
  }
  return;
}



// FUNCTION 1450155f0 FUN_1450155f0 body=101 status=ok
// SIG undefined FUN_1450155f0(void)

void FUN_1450155f0(longlong *param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  
  if (*param_3 != '\0') {
    lVar1 = FUN_144faf560(param_2,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x36) = 1;
    }
    (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],param_2 + 0x110);
    (**(code **)(*(longlong *)param_1[2] + 0x28))((longlong *)param_1[2],param_2 + 0x118);
    (**(code **)(*param_1 + 8))(param_1,1);
  }
  return;
}



// FUNCTION 145015660 FUN_145015660 body=101 status=ok
// SIG undefined FUN_145015660(void)

void FUN_145015660(longlong *param_1,longlong param_2,char *param_3)

{
  longlong lVar1;
  
  if (*param_3 != '\0') {
    lVar1 = FUN_144faf560(param_2,param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x36) = 1;
    }
    (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],param_2 + 0x110);
    (**(code **)(*(longlong *)param_1[2] + 0x28))((longlong *)param_1[2],param_2 + 0x118);
    (**(code **)(*param_1 + 8))(param_1,1);
  }
  return;
}



// FUNCTION 1450156d0 FUN_1450156d0 body=144 status=ok
// SIG undefined FUN_1450156d0(void)

void FUN_1450156d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_144faf560(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48),param_1);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x20) == 0) {
      FUN_144fab200(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48) + 0x230),
                    param_1,*(undefined1 *)(param_1 + 0x1a2));
      iVar2 = *(int *)(param_1 + 0x1a4) + 1;
    }
    else {
      FUN_1450140e0(*(undefined8 *)(param_1 + 0x18),param_1 + 0x20,*(undefined8 *)(lVar1 + 0x18));
      *(undefined1 *)(lVar1 + 0x36) = 1;
      iVar2 = 0;
      *(undefined1 *)(param_1 + 0x1a8) = 1;
    }
    *(int *)(param_1 + 0x1a4) = iVar2;
    *(int *)(*(longlong *)(param_1 + 0x18) + 0x460) = iVar2;
  }
  return;
}



// FUNCTION 145015760 FUN_145015760 body=3 status=ok
// SIG undefined FUN_145015760(void)

undefined1 FUN_145015760(void)

{
  return 1;
}



// FUNCTION 145015770 FUN_145015770 body=3 status=ok
// SIG undefined FUN_145015770(void)

undefined1 FUN_145015770(void)

{
  return 1;
}



// FUNCTION 145015780 FUN_145015780 body=192 status=ok
// SIG undefined FUN_145015780(void)

undefined8 * FUN_145015780(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x15c)) && (param_1[0x2a] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x2a],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x15c) & 0x7fffffff) << 2);
  }
  param_1[0x2a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x80000000;
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_145013e30();
  }
  *param_1 = hkaiPathRequestInfoOwner::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 145015840 FUN_145015840 body=160 status=ok
// SIG undefined FUN_145015840(void)

undefined8 * FUN_145015840(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = 0x20;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res20,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"MemberSlot");
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_LAB_14ab67c70;
    uVar1 = *param_1;
    puVar2[2] = param_2;
    puVar2[1] = uVar1 & 0xfffffffffffffffc;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar2;
    *puVar2 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunAbortedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigator::ProcessingRunDelegate,void_(__cdecl_hkaiNavigator::ProcessingRunDelegate::*)(hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunAbortedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 1450158e0 FUN_1450158e0 body=160 status=ok
// SIG undefined FUN_1450158e0(void)

undefined8 * FUN_1450158e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 local_res20;
  
  local_res20 = 0x20;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res20,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"MemberSlot");
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = &PTR_LAB_14ab67c70;
    uVar1 = *param_1;
    puVar2[2] = param_2;
    puVar2[1] = uVar1 & 0xfffffffffffffffc;
    *param_1 = *param_1 & 3;
    *param_1 = *param_1 | (ulonglong)puVar2;
    *puVar2 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunCommittedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigator::ProcessingRunDelegate,void_(__cdecl_hkaiNavigator::ProcessingRunDelegate::*)(hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunCommittedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 145015980 FUN_145015980 body=162 status=ok
// SIG undefined FUN_145015980(void)

uint * FUN_145015980(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = param_2[1];
  iVar2 = *param_2;
  uVar7 = iVar1 * -0x61c8864f;
  uVar6 = iVar2 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar7 = uVar8 + uVar7 * 0x40 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar3 = param_1[2];
  uVar4 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  uVar6 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar3 + uVar4 * 8);
    if (((*puVar5 == uVar7) && (*(int *)(*param_1 + (ulonglong)uVar6 * 0xc) == iVar2)) &&
       (*(int *)(*param_1 + 4 + (ulonglong)uVar6 * 0xc) == iVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 145015a30 FUN_145015a30 body=206 status=ok
// SIG undefined FUN_145015a30(void)

void FUN_145015a30(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar6 = (ulonglong)param_2;
  uVar7 = uVar6;
  do {
    uVar9 = uVar7 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)((int)uVar7 + param_3) >> 1) * 4);
    uVar5 = (longlong)param_3;
    iVar4 = param_3;
    do {
      uVar8 = (uint)uVar9;
      iVar2 = *(int *)(param_1 + uVar6 * 4);
      while (iVar1 < iVar2) {
        uVar6 = uVar6 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        iVar2 = *(int *)(param_1 + uVar6 * 4);
      }
      iVar2 = *(int *)(param_1 + uVar5 * 4);
      while (iVar2 < iVar1) {
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        iVar2 = *(int *)(param_1 + uVar5 * 4);
      }
      if ((longlong)uVar5 < (longlong)uVar6) break;
      if (uVar5 != uVar6) {
        uVar3 = *(undefined4 *)(param_1 + uVar5 * 4);
        *(undefined4 *)(param_1 + uVar5 * 4) = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)uVar5);
    if ((int)uVar7 < iVar4) {
      FUN_145015a30(param_1,uVar7 & 0xffffffff,iVar4,param_4);
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 145015b00 FUN_145015b00 body=11 status=ok
// SIG undefined FUN_145015b00(void)

void FUN_145015b00(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145015b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145015b10 FUN_145015b10 body=24 status=ok
// SIG undefined FUN_145015b10(void)

undefined8 FUN_145015b10(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145015b30 FUN_145015b30 body=3 status=ok
// SIG undefined FUN_145015b30(void)

undefined8 FUN_145015b30(void)

{
  return 0;
}



// FUNCTION 145015b40 FUN_145015b40 body=19 status=ok
// SIG undefined FUN_145015b40(void)

void FUN_145015b40(longlong param_1,undefined8 param_2)

{
  FUN_145015840(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145015b60 FUN_145015b60 body=33 status=ok
// SIG undefined FUN_145015b60(void)

void FUN_145015b60(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_145015d10(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145015b90 FUN_145015b90 body=15 status=ok
// SIG undefined FUN_145015b90(void)

void FUN_145015b90(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 145015ba0 FUN_145015ba0 body=71 status=ok
// SIG undefined FUN_145015ba0(void)

undefined8 * FUN_145015ba0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunAbortedInfo_const&___ptr64>
             ::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145015bf0 FUN_145015bf0 body=11 status=ok
// SIG undefined FUN_145015bf0(void)

void FUN_145015bf0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000145015bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 145015c00 FUN_145015c00 body=24 status=ok
// SIG undefined FUN_145015c00(void)

undefined8 FUN_145015c00(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145015c20 FUN_145015c20 body=3 status=ok
// SIG undefined FUN_145015c20(void)

undefined8 FUN_145015c20(void)

{
  return 0;
}



// FUNCTION 145015c30 FUN_145015c30 body=19 status=ok
// SIG undefined FUN_145015c30(void)

void FUN_145015c30(longlong param_1,undefined8 param_2)

{
  FUN_1450158e0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145015c50 FUN_145015c50 body=33 status=ok
// SIG undefined FUN_145015c50(void)

void FUN_145015c50(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_145015ce0(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 145015c80 FUN_145015c80 body=15 status=ok
// SIG undefined FUN_145015c80(void)

void FUN_145015c80(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 145015c90 FUN_145015c90 body=71 status=ok
// SIG undefined FUN_145015c90(void)

undefined8 * FUN_145015c90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunCommittedInfo_const&___ptr64>
             ::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145015ce0 FUN_145015ce0 body=40 status=ok
// SIG undefined FUN_145015ce0(void)

undefined8 FUN_145015ce0(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 145015d10 FUN_145015d10 body=40 status=ok
// SIG undefined FUN_145015d10(void)

undefined8 FUN_145015d10(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 145015d40 FUN_145015d40 body=295 status=ok
// SIG undefined FUN_145015d40(void)

void FUN_145015d40(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
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
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x40,&local_res8);
  puVar7 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = (undefined4 *)(lVar5 + 0x20);
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if ((undefined8 *)(puVar6 + -8) != (undefined8 *)0x0) {
        uVar4 = puVar7[1];
        *(undefined8 *)(puVar6 + -8) = *puVar7;
        *(undefined8 *)(puVar6 + -6) = uVar4;
        puVar6[-4] = *(undefined4 *)(puVar7 + 2);
        uVar1 = *(undefined4 *)((longlong)puVar7 + 0x24);
        uVar2 = *(undefined4 *)(puVar7 + 5);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x2c);
        *puVar6 = *(undefined4 *)(puVar7 + 4);
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(puVar7 + 6);
      }
      puVar6 = puVar6 + 0x10;
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
  *param_1 = lVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 145015e70 FUN_145015e70 body=553 status=ok
// SIG undefined FUN_145015e70(void)

void FUN_145015e70(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  ulonglong local_res18;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar12) {
    uVar8 = uVar12;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x80);
  piVar14 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar7 = piVar14 + 0x1f;
  if (0 < (int)uVar1) {
    piVar10 = (int *)(lVar6 + 0x7c);
    uVar12 = (ulonglong)uVar1;
    piVar13 = piVar7;
    do {
      if (piVar10 + -0x1f != (int *)0x0) {
        piVar10[-0x1f] = *piVar14;
        uVar5 = *(undefined8 *)(piVar13 + -0x19);
        *(undefined8 *)(piVar10 + -0x1b) = *(undefined8 *)(piVar13 + -0x1b);
        *(undefined8 *)(piVar10 + -0x19) = uVar5;
        uVar5 = *(undefined8 *)(piVar13 + -0x15);
        *(undefined8 *)(piVar10 + -0x17) = *(undefined8 *)(piVar13 + -0x17);
        *(undefined8 *)(piVar10 + -0x15) = uVar5;
        uVar5 = *(undefined8 *)(piVar13 + -0x11);
        *(undefined8 *)(piVar10 + -0x13) = *(undefined8 *)(piVar13 + -0x13);
        *(undefined8 *)(piVar10 + -0x11) = uVar5;
        uVar5 = *(undefined8 *)(piVar13 + -0xd);
        *(undefined8 *)(piVar10 + -0xf) = *(undefined8 *)(piVar13 + -0xf);
        *(undefined8 *)(piVar10 + -0xd) = uVar5;
        iVar2 = piVar13[-10];
        iVar3 = piVar13[-9];
        iVar4 = piVar13[-8];
        piVar10[-0xb] = piVar13[-0xb];
        piVar10[-10] = iVar2;
        piVar10[-9] = iVar3;
        piVar10[-8] = iVar4;
        iVar2 = piVar13[-6];
        iVar3 = piVar13[-5];
        iVar4 = piVar13[-4];
        piVar10[-7] = piVar13[-7];
        piVar10[-6] = iVar2;
        piVar10[-5] = iVar3;
        piVar10[-4] = iVar4;
        piVar10[-3] = 0;
        piVar10[-2] = 0;
        piVar10[-1] = 0;
        *piVar10 = -0x80000000;
        FUN_143821c08(piVar13 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar10 + -3) = *(undefined8 *)(piVar13 + -3);
        piVar10[-1] = piVar13[-1];
        *piVar10 = *piVar13;
        piVar13[-3] = 0;
        piVar13[-2] = 0;
        piVar13[-1] = 0;
        piVar13[0] = 0;
      }
      piVar10 = piVar10 + 0x20;
      piVar14 = piVar14 + 0x20;
      piVar13 = piVar13 + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar12 = (ulonglong)uVar1;
    do {
      piVar7[-1] = 0;
      if ((-1 < *piVar7) && (*(longlong *)(piVar7 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar7 = -0x80000000;
      piVar7[-3] = 0;
      piVar7[-2] = 0;
      piVar7 = piVar7 + 0x20;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar8 * 0x80 + 0x80;
  uVar9 = uVar8;
  if (uVar12 <= local_res18) {
    uVar9 = uVar8 + 1;
    if (uVar12 <= local_res18 - 0x80) {
      uVar9 = uVar9 + ((local_res18 - 0x80) + uVar8 * -0x80 >> 7);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 << 7);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 1450160a0 FUN_1450160a0 body=291 status=ok
// SIG undefined FUN_1450160a0(void)

undefined8 *
FUN_1450160a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             longlong *param_5,longlong *param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulonglong uVar10;
  
  param_1[2] = 1;
  param_1[3] = param_3;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiVolumeNavigatorStalenessChecker::vftable;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(param_1 + 4) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  puVar8 = (undefined4 *)*param_5;
  lVar1 = param_5[1];
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar10 = lVar1 - (longlong)puVar8 >> 4;
  iVar9 = (int)uVar10;
  if (0 < iVar9) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,(longlong)iVar9 << 4);
    param_1[6] = uVar6;
    *(int *)(param_1 + 7) = iVar9;
    *(int *)((longlong)param_1 + 0x3c) = iVar9;
    uVar10 = uVar10 & 0xffffffff;
    puVar7 = (undefined4 *)param_1[6];
    do {
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        puVar8 = puVar8 + 4;
        *puVar7 = uVar2;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
      }
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 4;
    } while (uVar10 != 0);
  }
  lVar1 = *param_6;
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_144c6ed60(param_2);
  if (*param_6 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 1450161d0 FUN_1450161d0 body=192 status=ok
// SIG undefined FUN_1450161d0(void)

void FUN_1450161d0(undefined8 *param_1)

{
  *param_1 = hkaiVolumeNavigatorStalenessChecker::vftable;
  if (param_1[0xc] != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 2);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 4);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145016290 FUN_145016290 body=220 status=ok
// SIG undefined FUN_145016290(void)

void FUN_145016290(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint local_res8 [2];
  
  if ((*(char *)(param_1 + 0x5c) != '\x04') && (param_2 != 0)) {
    uVar1 = 0xffffffff;
    uVar4 = (ulonglong)*(int *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x50)) {
      lVar5 = uVar4 * 4;
      do {
        uVar3 = *(uint *)(lVar5 + *(longlong *)(param_1 + 0x48)) >> 0x16;
        if (uVar3 != uVar1) {
          local_res8[1] = 0xffffffff;
          local_res8[0] = uVar3;
          lVar2 = FUN_145015980(param_2 + 0x18,local_res8);
          uVar1 = uVar3;
          if (((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) &&
             ((*(byte *)(*(longlong *)(param_2 + 0x18) + 8 + (longlong)*(int *)(lVar2 + 4) * 0xc) &
              0x20) != 0)) {
            FUN_145016800(param_1,param_3);
            return;
          }
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        lVar5 = lVar5 + 4;
      } while ((int)uVar3 < *(int *)(param_1 + 0x50));
    }
  }
  return;
}



// FUNCTION 145016370 FUN_145016370 body=95 status=ok
// SIG undefined FUN_145016370(void)

void FUN_145016370(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  
  cVar4 = *(char *)(param_1 + 0x5c);
  do {
    while (cVar4 == '\0') {
      LOCK();
      cVar4 = *(char *)(param_1 + 0x5c);
      bVar5 = cVar4 == '\0';
      if (bVar5) {
        *(char *)(param_1 + 0x5c) = '\x02';
        cVar4 = '\0';
      }
      UNLOCK();
      if (bVar5) {
        return;
      }
    }
    if (cVar4 != '\x01') {
      return;
    }
    LOCK();
    cVar1 = *(char *)(param_1 + 0x5c);
    cVar3 = cVar1;
    if (cVar1 == '\x01') {
      *(char *)(param_1 + 0x5c) = '\x03';
      cVar3 = cVar4;
    }
    cVar4 = cVar3;
    UNLOCK();
  } while (cVar1 != '\x01');
  FUN_144fa9ed0(*(undefined8 *)(param_1 + 0x60),1);
  lVar2 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_144b3f230();
  return;
}



// FUNCTION 1450163d0 FUN_1450163d0 body=66 status=ok
// SIG undefined FUN_1450163d0(void)

void FUN_1450163d0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  LOCK();
  cVar1 = *(char *)(param_1 + 0x5c);
  *(char *)(param_1 + 0x5c) = '\x04';
  UNLOCK();
  if (cVar1 == '\x01') {
    FUN_144fa9ed0(*(undefined8 *)(param_1 + 0x60),1);
    lVar2 = *(longlong *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (lVar2 != 0) {
      FUN_144b3f230();
      return;
    }
  }
  return;
}



// FUNCTION 145016420 FUN_145016420 body=735 status=ok
// SIG undefined FUN_145016420(void)

void FUN_145016420(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined1 *local_68;
  int local_60;
  uint local_5c;
  undefined1 local_58 [16];
  longlong local_48;
  
  lVar5 = FUN_145310840();
  puVar13 = *(undefined8 **)(lVar5 + 0x20);
  local_68 = local_58;
  local_60 = 0;
  local_5c = 0x80000001;
  puVar11 = puVar13 + *(int *)(lVar5 + 0x28);
  iVar7 = (int)((longlong)puVar11 - (longlong)puVar13 >> 3);
  local_80 = puVar11;
  if (1 < iVar7) {
    FUN_144fbfec0(&local_68,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  if ((local_60 < iVar7) || (iVar7 < local_60)) {
    local_60 = iVar7;
  }
  local_48 = 0;
  if (puVar13 != puVar11) {
    do {
      uVar2 = *puVar13;
      local_88 = uVar2;
      lVar5 = FUN_145016b00(param_2,&local_88);
      uVar3 = local_88;
      if ((lVar5 == 0) || (*(int *)(lVar5 + 4) < 0)) {
        lVar5 = FUN_144fbe4d0(uVar2);
        if (lVar5 != 0) {
          FUN_144b3d910(lVar5);
          if ((*(char *)(lVar5 + 0x5c) != '\x04') && (param_3 != 0)) {
            uVar10 = (ulonglong)*(int *)(lVar5 + 0x58);
            uVar4 = 0xffffffff;
            puVar11 = local_80;
            if (*(int *)(lVar5 + 0x58) < *(int *)(lVar5 + 0x50)) {
              lVar14 = uVar10 * 4;
              do {
                uVar8 = *(uint *)(lVar14 + *(longlong *)(lVar5 + 0x48)) >> 0x16;
                if (uVar8 != uVar4) {
                  local_78 = (undefined1 *)CONCAT44(0xffffffff,uVar8);
                  lVar6 = FUN_145015980(param_3 + 0x18,&local_78);
                  uVar4 = uVar8;
                  if (((lVar6 != 0) && (-1 < *(int *)(lVar6 + 4))) &&
                     ((*(byte *)(*(longlong *)(param_3 + 0x18) + 8 +
                                (longlong)*(int *)(lVar6 + 4) * 0xc) & 0x20) != 0)) {
                    FUN_145016800(lVar5,&local_68);
                    puVar11 = local_80;
                    break;
                  }
                }
                uVar8 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar8;
                lVar14 = lVar14 + 4;
                puVar11 = local_80;
              } while ((int)uVar8 < *(int *)(lVar5 + 0x50));
            }
          }
          if ((*(char *)(lVar5 + 0x5c) - 1U & 0xfd) == 0) {
            FUN_144fbe600(local_88,*(undefined8 *)(lVar5 + 0x60));
          }
LAB_145016620:
          FUN_144b3f230(lVar5);
        }
      }
      else {
        lVar5 = *(longlong *)(*param_2 + 8 + (longlong)*(int *)(lVar5 + 4) * 0x10);
        cVar1 = *(char *)(lVar5 + 0x5c);
        if ((cVar1 == '\x01') || (cVar1 == '\x03')) {
          FUN_144fbe600(local_88,*(undefined8 *)(lVar5 + 0x60));
        }
        else if ((cVar1 == '\x04') && (lVar5 = FUN_144fbe4d0(local_88), lVar5 != 0)) {
          FUN_144b3d910(lVar5);
          FUN_145016700(uVar3,lVar5,param_3,&local_68);
          goto LAB_145016620;
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != puVar11);
  }
  puStack_70 = local_68 + local_48 * 0x10;
  local_78 = local_68;
  FUN_144faaf70(param_4,&local_78);
  puVar12 = local_68 + local_48 * 0x10;
  for (puVar9 = local_68; puVar9 != puVar12; puVar9 = puVar9 + 0x10) {
    if (*(longlong *)(puVar9 + 8) != 0) {
      FUN_144b3f230();
    }
  }
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 145016700 FUN_145016700 body=252 status=ok
// SIG undefined FUN_145016700(void)

void FUN_145016700(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint local_res10 [2];
  
  if ((*(char *)(param_2 + 0x5c) != '\x04') && (param_3 != 0)) {
    uVar1 = 0xffffffff;
    uVar4 = (ulonglong)*(int *)(param_2 + 0x58);
    if (*(int *)(param_2 + 0x58) < *(int *)(param_2 + 0x50)) {
      lVar5 = uVar4 * 4;
      do {
        uVar3 = *(uint *)(lVar5 + *(longlong *)(param_2 + 0x48)) >> 0x16;
        if (uVar3 != uVar1) {
          local_res10[1] = 0xffffffff;
          local_res10[0] = uVar3;
          lVar2 = FUN_145015980(param_3 + 0x18,local_res10);
          uVar1 = uVar3;
          if (((lVar2 != 0) && (-1 < *(int *)(lVar2 + 4))) &&
             ((*(byte *)(*(longlong *)(param_3 + 0x18) + 8 + (longlong)*(int *)(lVar2 + 4) * 0xc) &
              0x20) != 0)) {
            FUN_145016800(param_2,param_4);
            break;
          }
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        lVar5 = lVar5 + 4;
      } while ((int)uVar3 < *(int *)(param_2 + 0x50));
    }
  }
  if ((*(char *)(param_2 + 0x5c) - 1U & 0xfd) == 0) {
    FUN_144fbe600(param_1,*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



// FUNCTION 145016800 FUN_145016800 body=763 status=ok
// SIG undefined FUN_145016800(void)

void FUN_145016800(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  char cVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  undefined1 local_248 [16];
  undefined1 local_238 [512];
  
  cVar12 = *(char *)(param_1 + 0x5c);
  local_res10 = param_2;
  if (cVar12 == '\0') {
    local_res8 = 0x50;
    uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x188);
    puVar9 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar9,"PathRequestInput");
    }
    puVar11 = (undefined8 *)0x0;
    puVar13 = puVar11;
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[7] = 0;
      puVar9[9] = 0;
      puVar9[1] = 0xffffffff;
      *puVar9 = hkaiVolumeNavigator::PathRequestInput::vftable;
      puVar9[2] = 1;
      puVar9[6] = 0;
      *(undefined4 *)(puVar9 + 7) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = 0x80000000;
      puVar9[8] = 0;
      puVar13 = puVar9;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    puVar9 = puVar13 + 6;
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar5;
    *(undefined4 *)(puVar13 + 5) = uVar6;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar7;
    if ((undefined8 *)(param_1 + 0x30) != puVar9) {
      iVar8 = *(int *)(param_1 + 0x38);
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      if ((int)(*(uint *)((longlong)puVar13 + 0x3c) & 0x7fffffff) < iVar8) {
        FUN_144c9dda0(puVar9,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      FUN_144b3d470(*puVar9,uVar3,(longlong)iVar8 << 4);
      *(int *)(puVar13 + 7) = iVar8;
      param_2 = local_res10;
    }
    if (puVar13[8] != *(longlong *)(param_1 + 0x40)) {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_144b3d910();
      }
      lVar10 = puVar13[8];
      puVar13[8] = *(undefined8 *)(param_1 + 0x40);
      if (lVar10 != 0) {
        FUN_144b3f230();
      }
    }
    local_res18 = 0x58;
    lVar10 = (*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar10,"PathRequest");
    }
    if (lVar10 != 0) {
      puVar11 = (undefined8 *)FUN_144fbeba0(lVar10,*(undefined8 *)(param_1 + 0x18),puVar13,uVar2,0);
    }
    lVar10 = *(longlong *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar11;
    if (lVar10 != 0) {
      FUN_144b3f230();
    }
    FUN_144b3f230(puVar13);
    LOCK();
    plVar1 = param_2 + 4;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    puVar9 = (undefined8 *)((longlong)(int)lVar10 * 0x10 + *param_2);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0;
      puVar9[1] = 0;
    }
    *(undefined4 *)puVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x184);
    if (puVar9[1] != *(longlong *)(param_1 + 0x60)) {
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_144b3d910();
      }
      lVar10 = puVar9[1];
      puVar9[1] = *(undefined8 *)(param_1 + 0x60);
      if (lVar10 != 0) {
        FUN_144b3f230();
      }
    }
    LOCK();
    cVar12 = *(char *)(param_1 + 0x5c);
    bVar14 = cVar12 == '\0';
    if (bVar14) {
      *(char *)(param_1 + 0x5c) = '\x01';
      cVar12 = '\0';
    }
    UNLOCK();
    if (bVar14) {
      return;
    }
    FUN_144fa9ed0(*(undefined8 *)(param_1 + 0x60),1);
    lVar10 = *(longlong *)(param_1 + 0x60);
    *(longlong *)(param_1 + 0x60) = 0;
    if (lVar10 != 0) {
      FUN_144b3f230();
    }
    lVar10 = puVar9[1];
    puVar9[1] = 0;
    if (lVar10 != 0) {
      FUN_144b3f230();
    }
  }
  if (cVar12 == '\x02') {
    LOCK();
    cVar12 = *(char *)(param_1 + 0x5c);
    bVar14 = cVar12 == '\x02';
    if (bVar14) {
      *(char *)(param_1 + 0x5c) = '\x03';
      cVar12 = '\x02';
    }
    UNLOCK();
    if (bVar14) {
      return;
    }
    if ((byte)(cVar12 - 3U) < 2) {
      return;
    }
  }
  else if (cVar12 == '\x04') {
    return;
  }
  FUN_144bde670(local_248,local_238,0x200);
  FUN_144be6160(local_248,"Invalid state.");
  iVar8 = FUN_144bfc110(0x222d3546,local_238,"Navigator\\hkaiVolumeNavigatorStaleness.cpp",0x79);
  if (iVar8 == 0) {
    FUN_144bde6e0(local_248);
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// FUNCTION 145016b00 FUN_145016b00 body=152 status=ok
// SIG undefined FUN_145016b00(void)

uint * FUN_145016b00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *param_2;
  uVar7 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar3 * -0x61c8864f;
  uVar8 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar7 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar7 = uVar7 * 0x40 + uVar8 + (uVar8 >> 2) + 0x9e3779b9 ^ uVar7;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar2 + uVar4 * 8);
    if ((*puVar5 == uVar7) && (*(longlong *)(*param_1 + (ulonglong)uVar6 * 0x10) == lVar1)) break;
    uVar4 = ((longlong)puVar5 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar2 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 145016ba0 FUN_145016ba0 body=31 status=ok
// SIG undefined FUN_145016ba0(void)

void FUN_145016ba0(longlong param_1)

{
  FUN_144fc5e30(param_1 + 0x40);
  FUN_144b3e940(param_1);
  return;
}



// FUNCTION 145016bc0 FUN_145016bc0 body=79 status=ok
// SIG undefined FUN_145016bc0(void)

undefined8 * FUN_145016bc0(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_144fc5c10(param_1 + 6);
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 145016c10 FUN_145016c10 body=193 status=ok
// SIG undefined FUN_145016c10(void)

void FUN_145016c10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1[0x4a] != 0) {
    FUN_144b3f230();
  }
  FUN_144fc5e30(param_1 + 6);
  FUN_144bf90d0(param_1 + 3);
  lVar2 = param_1[1];
  lVar3 = lVar2 + (longlong)(int)param_1[2] * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[1],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) << 3);
  }
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  if (*param_1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 145016ce0 FUN_145016ce0 body=82 status=ok
// SIG undefined FUN_145016ce0(void)

undefined2 * FUN_145016ce0(undefined2 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *param_1 = 0x103;
  *(undefined4 *)(param_1 + 4) = 0x14;
  *(undefined4 *)(param_1 + 0x10) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x12) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x14) = 2;
  *(undefined4 *)(param_1 + 0x16) = 2;
  *(undefined4 *)(param_1 + 0x18) = 4;
  *(undefined4 *)(param_1 + 0x1a) = 100000;
  return param_1;
}



// FUNCTION 145016d40 FUN_145016d40 body=1419 status=ok
// SIG undefined FUN_145016d40(void)

void FUN_145016d40(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  short *psVar13;
  undefined8 *puVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  short *psVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  uint local_res18 [2];
  uint local_res20;
  undefined4 *local_100;
  longlong local_f8;
  int local_f0;
  short *local_e8;
  longlong local_e0;
  short *local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [72];
  
  local_c0 = *(longlong *)(param_2 + 0x38);
  local_c8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x20) + 100) * 0x120;
  local_f0 = *(int *)(local_c8 + 0xe8 + local_c0);
  lVar10 = local_c8;
  do {
    do {
      do {
        local_f0 = local_f0 + -1;
        if (local_f0 < 0) {
          return;
        }
        lVar6 = *(longlong *)(lVar10 + 0xe0 + local_c0);
      } while (*(int *)(lVar6 + 4 + (longlong)local_f0 * 0x10) !=
               *(int *)(*(longlong *)(param_1 + 0x20) + 0x68));
      local_e0 = *(longlong *)(lVar6 + 8 + (longlong)local_f0 * 0x10);
      plVar12 = *(longlong **)(local_e0 + 0x30);
      local_d0 = plVar12 + (longlong)*(int *)(local_e0 + 0x38) * 3;
    } while (plVar12 == local_d0);
    plVar12 = plVar12 + 1;
    do {
      uVar16 = *(uint *)(plVar12 + 1);
      iVar5 = (int)plVar12[-1];
      puVar14 = (undefined8 *)0x0;
      if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
        puVar14 = (undefined8 *)*plVar12;
      }
      if ((int)uVar16 < 1) {
        local_e8 = (short *)0x0;
        uVar16 = 0;
        local_res20 = 0x80000000;
      }
      else {
        local_e8 = (short *)(**(code **)(PTR_vftable_14c6e47a0 + 8))
                                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar16 * 0x14);
        uVar17 = (ulonglong)uVar16;
        psVar13 = local_e8;
        do {
          if (psVar13 != (short *)0x0) {
            uVar7 = puVar14[1];
            *(undefined8 *)psVar13 = *puVar14;
            *(undefined8 *)(psVar13 + 4) = uVar7;
            puVar1 = puVar14 + 2;
            puVar14 = (undefined8 *)((longlong)puVar14 + 0x14);
            *(undefined4 *)(psVar13 + 8) = *(undefined4 *)puVar1;
          }
          uVar17 = uVar17 - 1;
          psVar13 = psVar13 + 10;
          local_res20 = uVar16;
        } while (uVar17 != 0);
      }
      psVar13 = local_e8;
      uVar18 = local_res20;
      if (iVar5 == *(int *)(*(longlong *)(param_1 + 0x20) + 0x60)) {
        local_100 = (undefined4 *)CONCAT44(local_100._4_4_,iVar5);
        local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x6c));
        FUN_144fa9e40(*(undefined8 *)(param_2 + 0xf0),local_res18,&local_f8,&local_100);
        if (local_res18[0] == 0xffffffff) goto joined_r0x000145016f44;
        lVar10 = *(longlong *)(param_1 + 0x20);
        if (*(int *)(local_e0 + 0x18) == *(int *)(lVar10 + 0x5c)) {
          iVar15 = *(int *)(lVar10 + 100);
          local_100 = (undefined4 *)CONCAT44(local_100._4_4_,*(undefined4 *)(local_e0 + 0x1c));
          local_f8 = CONCAT44(local_f8._4_4_,iVar5);
          piVar9 = (int *)FUN_144ca4a70(param_2,local_b8,&local_100,&local_f8);
          iVar19 = *piVar9;
          iVar5 = iVar19;
        }
        else {
          if (*(int *)(local_e0 + 0x1c) != *(int *)(lVar10 + 0x5c)) goto joined_r0x000145016f44;
          iVar19 = *(int *)(lVar10 + 100);
          local_100 = (undefined4 *)CONCAT44(local_100._4_4_,*(int *)(local_e0 + 0x18));
          local_f8 = CONCAT44(local_f8._4_4_,iVar5);
          piVar9 = (int *)FUN_144ca4a70(param_2,local_b0,&local_100,&local_f8);
          iVar15 = *piVar9;
          iVar5 = iVar15;
        }
        if (iVar5 != -1) {
          uVar17 = (ulonglong)(int)local_res18[0];
          lVar10 = *(longlong *)
                    (*(longlong *)((longlong)iVar15 * 0x120 + 0x10 + *(longlong *)(param_2 + 0x38))
                    + uVar17 * 8);
          if (lVar10 == 0) {
            local_100 = (undefined4 *)0x0;
          }
          else if (*(char *)(lVar10 + 0x30) == '\x01') {
            local_100 = *(undefined4 **)(lVar10 + 0x20);
            uVar17 = (ulonglong)local_res18[0];
          }
          else {
            local_100 = (undefined4 *)FUN_147e4bc84();
            uVar17 = (ulonglong)local_res18[0];
          }
          lVar10 = *(longlong *)
                    (*(longlong *)((longlong)iVar19 * 0x120 + 0x10 + *(longlong *)(param_2 + 0x38))
                    + (longlong)(int)uVar17 * 8);
          if (lVar10 == 0) {
            lVar10 = 0;
          }
          else if (*(char *)(lVar10 + 0x30) == '\x01') {
            lVar10 = *(longlong *)(lVar10 + 0x20);
            uVar17 = (ulonglong)local_res18[0];
          }
          else {
            lVar10 = FUN_147e4bc84();
            uVar17 = (ulonglong)local_res18[0];
          }
          puVar8 = local_100;
          local_d8 = psVar13 + (longlong)(int)uVar16 * 10;
          local_f8 = lVar10;
          if (psVar13 != local_d8) {
            psVar20 = psVar13 + 9;
            while( true ) {
              uVar16 = *(uint *)(psVar20 + -7);
              uVar18 = *(uint *)(psVar20 + -9);
              pfVar3 = (float *)(*(longlong *)(puVar8 + 0xe) + (longlong)(int)uVar18 * 0x10);
              pfVar4 = (float *)(*(longlong *)(lVar10 + 0x38) + (longlong)(int)uVar16 * 0x10);
              fVar21 = (*pfVar3 - *pfVar4) * (*pfVar3 - *pfVar4);
              fVar22 = (pfVar3[1] - pfVar4[1]) * (pfVar3[1] - pfVar4[1]);
              fVar23 = (pfVar3[2] - pfVar4[2]) * (pfVar3[2] - pfVar4[2]);
              auVar24._4_4_ = fVar23 + fVar22 + fVar21;
              auVar24._0_4_ = fVar23 + fVar22 + fVar21;
              auVar24._8_4_ = fVar23 + fVar22 + fVar21;
              auVar24._12_4_ = fVar23 + fVar22 + fVar21;
              unaff_XMM7 = sqrtps(unaff_XMM7,auVar24);
              auVar24 = unaff_XMM7;
              if (0.0 <= (float)((int)psVar20[-1] << 0x10)) {
                auVar24 = ZEXT416((uint)((int)psVar20[-1] << 0x10));
              }
              if (0.0 <= (float)((int)*psVar20 << 0x10)) {
                unaff_XMM7 = ZEXT416((uint)((int)*psVar20 << 0x10));
              }
              local_100 = (undefined4 *)0x0;
              local_f8._0_4_ = uVar18;
              puVar11 = (undefined2 *)FUN_144c37fc0(puVar8,&local_f8,&local_100,0);
              *(uint *)(puVar11 + 2) = (iVar19 << 4 | (uint)uVar17) << 0x12 | uVar16;
              puVar11[1] = 0x40;
              *puVar11 = (short)((uint)(auVar24._0_4_ * 1.0039062) >> 0x10);
              if (local_100 != (undefined4 *)0x0) {
                *local_100 = *(undefined4 *)(psVar20 + -5);
              }
              local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(psVar20 + -7));
              local_100 = (undefined4 *)0x0;
              puVar11 = (undefined2 *)FUN_144c37fc0(lVar10,&local_f8,&local_100,0);
              *(uint *)(puVar11 + 2) = (iVar15 << 4 | (uint)uVar17) << 0x12 | uVar18;
              puVar11[1] = 0x40;
              *puVar11 = (short)((uint)(unaff_XMM7._0_4_ * 1.0039062) >> 0x10);
              if (local_100 != (undefined4 *)0x0) {
                *local_100 = *(undefined4 *)(psVar20 + -3);
              }
              psVar13 = local_e8;
              uVar18 = local_res20;
              if (psVar20 + 1 == local_d8) break;
              uVar17 = (ulonglong)local_res18[0];
              psVar20 = psVar20 + 10;
            }
          }
        }
        if ((-1 < (int)uVar18) && (psVar13 != (short *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,psVar13,(ulonglong)(uVar18 & 0x7fffffff) * 0x14);
        }
      }
      else {
joined_r0x000145016f44:
        if ((-1 < (int)uVar18) && (psVar13 != (short *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,psVar13,(ulonglong)(uVar18 & 0x7fffffff) * 0x14);
        }
      }
      plVar2 = plVar12 + 2;
      plVar12 = plVar12 + 3;
      lVar10 = local_c8;
    } while (plVar2 != local_d0);
  } while( true );
}



// FUNCTION 1450172d0 FUN_1450172d0 body=916 status=ok
// SIG undefined FUN_1450172d0(void)

void FUN_1450172d0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  int local_res18 [2];
  uint local_res20 [2];
  
  lVar10 = *(longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(lVar10 + 100);
  iVar3 = *(int *)(lVar10 + 0x5c);
  iVar4 = *(int *)(lVar10 + 0x60);
  uVar5 = *(uint *)(lVar10 + 0x68);
  piVar11 = *(int **)((longlong)iVar2 * 0x120 + 0xe0 + *(longlong *)(param_2 + 0x38));
  piVar12 = piVar11 + (longlong)
                      *(int *)((longlong)iVar2 * 0x120 + 0xe8 + *(longlong *)(param_2 + 0x38)) * 4;
  do {
    if (piVar11 == piVar12) {
      return;
    }
    if (piVar11[1] == uVar5) {
      lVar10 = *(longlong *)(piVar11 + 2);
      local_res18[0] = iVar4;
      if (*(int *)(lVar10 + 0x18) == iVar3) {
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)*piVar11 * 0x120 + 0x10 + *(longlong *)(param_2 + 0x38)) +
                 (longlong)(int)uVar5 * 8);
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0x30) == '\x01') {
            lVar7 = *(longlong *)(lVar7 + 0x20);
          }
          else {
            lVar7 = FUN_147e4bc84();
          }
          if (lVar7 != 0) {
            lVar8 = FUN_144ca6ae0(lVar10 + 0x30,local_res18);
            if (lVar8 == 0) {
              iVar9 = -1;
            }
            else {
              iVar9 = *(int *)(lVar8 + 4);
            }
            puVar13 = *(uint **)(*(longlong *)(lVar10 + 0x30) + 8 + (longlong)iVar9 * 0x18);
            puVar1 = puVar13 + (longlong)
                               *(int *)(*(longlong *)(lVar10 + 0x30) + 0x10 + (longlong)iVar9 * 0x18
                                       ) * 5;
            if (puVar13 != puVar1) {
              do {
                if ((*(int *)(lVar7 + 0x80) != 0) &&
                   (iVar9 = *(int *)(*(longlong *)(lVar7 + 0x78) + (longlong)(int)puVar13[1] * 4),
                   iVar9 != -1)) {
                  iVar6 = *(int *)(*(longlong *)(lVar7 + 0x88) + 4 + (longlong)iVar9 * 8);
                  iVar9 = *(int *)(*(longlong *)(lVar7 + 0x88) + (longlong)iVar9 * 8);
                  if (0 < iVar6) {
                    local_res18[0] = iVar9;
                    do {
                      lVar10 = (longlong)(local_res18[0] - *(int *)(lVar7 + 0x30));
                      if (((*(byte *)(*(longlong *)(lVar7 + 0x98) + 2 + lVar10 * 8) & 0x40) != 0) &&
                         (*(uint *)(*(longlong *)(lVar7 + 0x98) + 4 + lVar10 * 8) ==
                          ((iVar2 << 4 | uVar5) << 0x12 | *puVar13))) {
                        local_res20[0] = puVar13[1];
                        FUN_144c381f0(lVar7,local_res20,local_res18);
                        break;
                      }
                      local_res18[0] = local_res18[0] + 1;
                    } while (local_res18[0] - iVar9 < iVar6);
                  }
                }
                puVar13 = puVar13 + 5;
              } while (puVar13 != puVar1);
            }
          }
        }
      }
      else if ((*(int *)(lVar10 + 0x1c) == iVar3) &&
              (lVar7 = *(longlong *)
                        (*(longlong *)
                          ((longlong)*piVar11 * 0x120 + 0x10 + *(longlong *)(param_2 + 0x38)) +
                        (longlong)(int)uVar5 * 8), lVar7 != 0)) {
        if (*(char *)(lVar7 + 0x30) == '\x01') {
          lVar7 = *(longlong *)(lVar7 + 0x20);
        }
        else {
          lVar7 = FUN_147e4bc84();
        }
        if (lVar7 != 0) {
          lVar8 = FUN_144ca6ae0(lVar10 + 0x30,local_res18);
          if (lVar8 == 0) {
            iVar9 = -1;
          }
          else {
            iVar9 = *(int *)(lVar8 + 4);
          }
          puVar13 = *(uint **)(*(longlong *)(lVar10 + 0x30) + 8 + (longlong)iVar9 * 0x18);
          puVar1 = puVar13 + (longlong)
                             *(int *)(*(longlong *)(lVar10 + 0x30) + 0x10 + (longlong)iVar9 * 0x18)
                             * 5;
          if (puVar13 != puVar1) {
            do {
              if ((*(int *)(lVar7 + 0x80) != 0) &&
                 (iVar9 = *(int *)(*(longlong *)(lVar7 + 0x78) + (longlong)(int)*puVar13 * 4),
                 iVar9 != -1)) {
                iVar6 = *(int *)(*(longlong *)(lVar7 + 0x88) + 4 + (longlong)iVar9 * 8);
                iVar9 = *(int *)(*(longlong *)(lVar7 + 0x88) + (longlong)iVar9 * 8);
                if (0 < iVar6) {
                  local_res18[0] = iVar9;
                  do {
                    lVar10 = (longlong)(local_res18[0] - *(int *)(lVar7 + 0x30));
                    if (((*(byte *)(*(longlong *)(lVar7 + 0x98) + 2 + lVar10 * 8) & 0x40) != 0) &&
                       (*(uint *)(*(longlong *)(lVar7 + 0x98) + 4 + lVar10 * 8) ==
                        ((iVar2 << 4 | uVar5) << 0x12 | puVar13[1]))) {
                      local_res20[0] = *puVar13;
                      FUN_144c381f0(lVar7,local_res20,local_res18);
                      break;
                    }
                    local_res18[0] = local_res18[0] + 1;
                  } while (local_res18[0] - iVar9 < iVar6);
                }
              }
              puVar13 = puVar13 + 5;
            } while (puVar13 != puVar1);
          }
        }
      }
    }
    piVar11 = piVar11 + 4;
  } while( true );
}



// FUNCTION 145017670 FUN_145017670 body=860 status=ok
// SIG undefined FUN_145017670(void)

void FUN_145017670(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong local_88;
  int local_80;
  uint local_7c;
  longlong local_78;
  int local_70;
  uint local_6c;
  int *local_68;
  longlong lStack_60;
  
  iVar4 = *(int *)(param_1 + 0x94);
  lVar15 = 0;
  iVar16 = 0;
  iVar5 = *(int *)(param_1 + 0x90);
  uVar17 = 0x80000000;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0x80000000;
  local_68 = *(int **)((longlong)iVar4 * 0x120 + 0xc0 + *(longlong *)(param_2 + 0x38));
  lStack_60 = *(longlong *)(param_2 + 0x48);
  piVar2 = local_68 +
           (longlong)*(int *)((longlong)iVar4 * 0x120 + 200 + *(longlong *)(param_2 + 0x38)) * 2;
  for (; local_68 != piVar2; local_68 = local_68 + 2) {
    lVar8 = *(longlong *)(*(longlong *)(lStack_60 + (longlong)local_68[1] * 0x18) + 0x20);
    iVar6 = *local_68;
    iVar13 = iVar4;
    iVar14 = iVar6;
    if (((*(int *)(lVar8 + 0x18) == iVar5) ||
        (iVar13 = iVar6, iVar14 = iVar4, *(int *)(lVar8 + 0x1c) == iVar5)) && (iVar6 != -1)) {
      iVar10 = *(int *)(lVar8 + 0x58) + iVar16;
      if ((int)(uVar17 & 0x7fffffff) < iVar10) {
        FUN_145018410(&local_78,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        lVar15 = local_78;
        iVar16 = local_70;
      }
      puVar12 = *(uint **)(lVar8 + 0x50);
      puVar3 = puVar12 + (longlong)*(int *)(lVar8 + 0x58) * 2;
      if (puVar12 != puVar3) {
        if (iVar13 == iVar4) {
          do {
            uVar17 = *puVar12;
            uVar7 = puVar12[1];
            puVar12 = puVar12 + 2;
            lVar11 = (longlong)iVar16;
            *(uint *)(lVar15 + lVar11 * 8) = uVar17;
            iVar16 = iVar16 + 1;
            *(uint *)(lVar15 + 4 + lVar11 * 8) = iVar14 << 0x16 | uVar7;
            local_70 = iVar16;
          } while (puVar12 != puVar3);
        }
        else {
          do {
            puVar1 = puVar12 + 1;
            uVar17 = *puVar12;
            puVar12 = puVar12 + 2;
            lVar11 = (longlong)iVar16;
            *(uint *)(lVar15 + lVar11 * 8) = *puVar1;
            iVar16 = iVar16 + 1;
            *(uint *)(lVar15 + 4 + lVar11 * 8) = iVar13 << 0x16 | uVar17;
            local_70 = iVar16;
          } while (puVar12 != puVar3);
        }
      }
      local_88 = 0;
      local_80 = 0;
      local_7c = 0x80000000;
      if (0 < *(int *)(lVar8 + 0x58)) {
        FUN_145018410(&local_88,&PTR_vftable_14c6e47a0,(longlong)*(int *)(lVar8 + 0x58));
      }
      puVar12 = *(uint **)(lVar8 + 0x50);
      puVar3 = puVar12 + (longlong)*(int *)(lVar8 + 0x58) * 2;
      if (puVar12 != puVar3) {
        if (iVar13 == iVar6) {
          do {
            uVar17 = *puVar12;
            uVar7 = puVar12[1];
            puVar12 = puVar12 + 2;
            lVar15 = (longlong)local_80;
            *(uint *)(local_88 + lVar15 * 8) = uVar17;
            local_80 = local_80 + 1;
            *(uint *)(local_88 + 4 + lVar15 * 8) = iVar14 << 0x16 | uVar7;
          } while (puVar12 != puVar3);
        }
        else {
          do {
            puVar1 = puVar12 + 1;
            uVar17 = *puVar12;
            puVar12 = puVar12 + 2;
            lVar15 = (longlong)local_80;
            *(uint *)(local_88 + lVar15 * 8) = *puVar1;
            local_80 = local_80 + 1;
            *(uint *)(local_88 + 4 + lVar15 * 8) = iVar13 << 0x16 | uVar17;
          } while (puVar12 != puVar3);
        }
      }
      lVar15 = *(longlong *)((longlong)iVar6 * 0x120 + 8 + *(longlong *)(param_2 + 0x38));
      if (lVar15 == 0) {
        uVar9 = 0;
      }
      else if (*(char *)(lVar15 + 0x30) == '\x01') {
        uVar9 = *(undefined8 *)(lVar15 + 0x20);
      }
      else {
        uVar9 = FUN_147e4bde2();
      }
      uVar17 = local_7c;
      lVar15 = local_88;
      FUN_145017ec0(uVar9,&local_88);
      local_80 = 0;
      if ((-1 < (int)uVar17) && (lVar15 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar15,(ulonglong)(uVar17 & 0x7fffffff) << 3);
      }
      local_88 = 0;
      local_7c = 0x80000000;
      lVar15 = local_78;
      iVar16 = local_70;
      uVar17 = local_6c;
    }
  }
  FUN_145017ec0(param_1,&local_78);
  if ((-1 < (int)uVar17) && (lVar15 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar15,(ulonglong)(uVar17 & 0x7fffffff) << 3);
  }
  return;
}



// FUNCTION 1450179d0 FUN_1450179d0 body=1263 status=ok
// SIG undefined FUN_1450179d0(void)

void FUN_1450179d0(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint *puVar20;
  int *piVar21;
  undefined8 local_res8;
  longlong local_res10;
  int local_res18 [2];
  int local_res20 [2];
  
  uVar15 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar19 = uVar15;
  if (0 < *(int *)(param_1 + 0x58)) {
    do {
      uVar17 = (int)uVar19 + 1;
      *(undefined4 *)(uVar15 + *(longlong *)(param_1 + 0x50)) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + uVar15 + 8) = 0;
      uVar15 = uVar15 + 8;
      uVar19 = (ulonglong)uVar17;
    } while ((int)uVar17 < *(int *)(param_1 + 0x58));
  }
  lVar9 = (longlong)*(int *)(param_1 + 0x94) * 0x120;
  lVar13 = *(longlong *)(lVar9 + 0xc0 + *(longlong *)(param_2 + 0x38));
  lVar9 = lVar13 + (longlong)*(int *)(lVar9 + 200 + *(longlong *)(param_2 + 0x38)) * 8;
  lVar5 = *(longlong *)(param_2 + 0x48);
  local_res10 = param_2;
  uVar15 = local_res8;
  do {
    if (lVar13 == lVar9) {
      return;
    }
    lVar7 = 0;
    lVar10 = *(longlong *)(*(longlong *)(lVar5 + (longlong)*(int *)(lVar13 + 4) * 0x18) + 0x20);
    local_res8._4_4_ = (undefined4)(uVar15 >> 0x20);
    if (*(int *)(lVar10 + 0x18) == *(int *)(param_1 + 0x90)) {
      local_res8 = CONCAT44(local_res8._4_4_,*(int *)(lVar10 + 0x1c));
      FUN_144ca4b30(param_2,local_res18,&local_res8);
      uVar15 = local_res8;
      if (local_res18[0] != -1) {
        lVar12 = *(longlong *)((longlong)local_res18[0] * 0x120 + 8 + *(longlong *)(param_2 + 0x38))
        ;
        if (lVar12 != 0) {
          if (*(char *)(lVar12 + 0x30) == '\x01') {
            lVar7 = *(longlong *)(lVar12 + 0x20);
          }
          else {
            lVar7 = FUN_147e4bde2();
          }
        }
        puVar20 = *(uint **)(lVar10 + 0x50);
        bVar6 = false;
        puVar2 = puVar20 + (longlong)*(int *)(lVar10 + 0x58) * 2;
        param_2 = local_res10;
        uVar15 = local_res8;
        if (puVar20 != puVar2) {
          do {
            lVar10 = (longlong)(int)puVar20[1];
            if ((*(int *)(lVar7 + 0x48) == 0) ||
               (iVar11 = *(int *)(*(longlong *)(lVar7 + 0x40) + lVar10 * 4), iVar11 == -1)) {
              local_res8 = local_res8 & 0xffffffff;
            }
            else {
              local_res8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar11 * 8);
              iVar11 = (int)(local_res8 >> 0x20);
              if (0 < iVar11) {
                uVar15 = local_res8 & 0xffffffff;
                do {
                  iVar14 = (int)uVar15;
                  lVar12 = (longlong)(iVar14 - *(int *)(lVar7 + 0x30));
                  if (((*(byte *)(*(longlong *)(lVar7 + 0x60) + 2 + lVar12 * 8) & 0x40) != 0) &&
                     (*(uint *)(*(longlong *)(lVar7 + 0x60) + 4 + lVar12 * 8) ==
                      (*(int *)(param_1 + 0x94) << 0x16 | *puVar20))) {
                    iVar11 = *(int *)(*(longlong *)(lVar7 + 0x40) + lVar10 * 4);
                    if (iVar11 == -1) {
                      iVar11 = *(int *)(lVar7 + 0x58);
                      *(int *)(*(longlong *)(lVar7 + 0x40) + lVar10 * 4) = iVar11;
                      iVar16 = *(int *)(lVar7 + 0x58) + 1;
                      if ((int)(*(uint *)(lVar7 + 0x5c) & 0x7fffffff) < iVar16) {
                        FUN_144c4a6d0(lVar7 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar16);
                      }
                      iVar18 = *(int *)(lVar7 + 0x58);
                      lVar10 = *(longlong *)(lVar7 + 0x50);
                      *(int *)(lVar7 + 0x58) = iVar16;
                      *(undefined4 *)(lVar10 + 4 + (longlong)iVar18 * 8) = 0;
                      *(undefined4 *)(lVar10 + (longlong)iVar18 * 8) = 0xffffffff;
                    }
                    iVar16 = *(int *)(lVar7 + 0x30);
                    piVar3 = (int *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar11 * 8);
                    iVar18 = *(int *)(*(longlong *)(lVar7 + 0x50) + 4 + (longlong)iVar11 * 8) +
                             *piVar3;
                    iVar11 = iVar18 + -1;
                    if (iVar11 < iVar16) {
                      puVar8 = (undefined8 *)
                               (*(longlong *)(lVar7 + 0x28) + (longlong)iVar18 * 8 + -8);
                    }
                    else {
                      puVar8 = (undefined8 *)
                               (*(longlong *)(lVar7 + 0x60) + (longlong)(iVar11 - iVar16) * 8);
                    }
                    *(undefined8 *)(*(longlong *)(lVar7 + 0x60) + (longlong)(iVar14 - iVar16) * 8) =
                         *puVar8;
                    piVar21 = piVar3 + 1;
                    *piVar21 = *piVar21 + -1;
                    if (*piVar21 == 0) {
                      *piVar3 = -1;
                    }
                    bVar6 = true;
                    break;
                  }
                  uVar15 = (ulonglong)(iVar14 + 1U);
                } while ((int)((iVar14 + 1U) - (int)local_res8) < iVar11);
              }
            }
            puVar20 = puVar20 + 2;
          } while (puVar20 != puVar2);
LAB_145017e6c:
          param_2 = local_res10;
          uVar15 = local_res8;
          if (bVar6) {
            FUN_145018270(lVar7);
            param_2 = local_res10;
            uVar15 = local_res8;
          }
        }
      }
    }
    else if (*(int *)(lVar10 + 0x1c) == *(int *)(param_1 + 0x90)) {
      local_res8 = CONCAT44(local_res8._4_4_,*(int *)(lVar10 + 0x18));
      FUN_144ca4b30(param_2,local_res20,&local_res8);
      uVar15 = local_res8;
      if (local_res20[0] != -1) {
        lVar12 = *(longlong *)((longlong)local_res20[0] * 0x120 + 8 + *(longlong *)(param_2 + 0x38))
        ;
        if (lVar12 != 0) {
          if (*(char *)(lVar12 + 0x30) == '\x01') {
            lVar7 = *(longlong *)(lVar12 + 0x20);
          }
          else {
            lVar7 = FUN_147e4bde2();
          }
        }
        piVar21 = *(int **)(lVar10 + 0x50);
        bVar6 = false;
        piVar3 = piVar21 + (longlong)*(int *)(lVar10 + 0x58) * 2;
        param_2 = local_res10;
        uVar15 = local_res8;
        if (piVar21 != piVar3) {
          do {
            lVar10 = (longlong)*piVar21;
            if ((*(int *)(lVar7 + 0x48) == 0) ||
               (iVar11 = *(int *)(*(longlong *)(lVar7 + 0x40) + lVar10 * 4), iVar11 == -1)) {
              local_res8 = local_res8 & 0xffffffff;
            }
            else {
              local_res8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar11 * 8);
              iVar11 = (int)(local_res8 >> 0x20);
              if (0 < iVar11) {
                uVar15 = local_res8 & 0xffffffff;
                do {
                  iVar14 = (int)uVar15;
                  lVar12 = (longlong)(iVar14 - *(int *)(lVar7 + 0x30));
                  if (((*(byte *)(*(longlong *)(lVar7 + 0x60) + 2 + lVar12 * 8) & 0x40) != 0) &&
                     (*(uint *)(*(longlong *)(lVar7 + 0x60) + 4 + lVar12 * 8) ==
                      (*(int *)(param_1 + 0x94) << 0x16 | piVar21[1]))) {
                    iVar11 = *(int *)(*(longlong *)(lVar7 + 0x40) + lVar10 * 4);
                    if (iVar11 == -1) {
                      iVar11 = *(int *)(lVar7 + 0x58);
                      *(int *)(*(longlong *)(lVar7 + 0x40) + lVar10 * 4) = iVar11;
                      iVar16 = *(int *)(lVar7 + 0x58) + 1;
                      if ((int)(*(uint *)(lVar7 + 0x5c) & 0x7fffffff) < iVar16) {
                        FUN_144c4a6d0(lVar7 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar16);
                      }
                      iVar18 = *(int *)(lVar7 + 0x58);
                      lVar10 = *(longlong *)(lVar7 + 0x50);
                      *(int *)(lVar7 + 0x58) = iVar16;
                      *(undefined4 *)(lVar10 + 4 + (longlong)iVar18 * 8) = 0;
                      *(undefined4 *)(lVar10 + (longlong)iVar18 * 8) = 0xffffffff;
                    }
                    iVar16 = *(int *)(lVar7 + 0x30);
                    puVar4 = (undefined4 *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar11 * 8);
                    iVar18 = *(int *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar11 * 8) +
                             puVar4[1];
                    iVar11 = iVar18 + -1;
                    if (iVar11 < iVar16) {
                      puVar8 = (undefined8 *)
                               (*(longlong *)(lVar7 + 0x28) + (longlong)iVar18 * 8 + -8);
                    }
                    else {
                      puVar8 = (undefined8 *)
                               (*(longlong *)(lVar7 + 0x60) + (longlong)(iVar11 - iVar16) * 8);
                    }
                    *(undefined8 *)(*(longlong *)(lVar7 + 0x60) + (longlong)(iVar14 - iVar16) * 8) =
                         *puVar8;
                    piVar1 = puVar4 + 1;
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                      *puVar4 = 0xffffffff;
                    }
                    bVar6 = true;
                    break;
                  }
                  uVar15 = (ulonglong)(iVar14 + 1U);
                } while ((int)((iVar14 + 1U) - (int)local_res8) < iVar11);
              }
            }
            piVar21 = piVar21 + 2;
          } while (piVar21 != piVar3);
          goto LAB_145017e6c;
        }
      }
    }
    local_res8 = uVar15;
    lVar13 = lVar13 + 8;
    uVar15 = local_res8;
  } while( true );
}



// FUNCTION 145017ec0 FUN_145017ec0 body=941 status=ok
// SIG undefined FUN_145017ec0(void)

void FUN_145017ec0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int local_res20;
  longlong local_58;
  longlong local_50;
  int local_48;
  uint local_44;
  
  iVar8 = (int)param_2[1];
  if (iVar8 != 0) {
    if (1 < iVar8) {
      FUN_145018520(*param_2,0,iVar8 + -1,(ulonglong)param_2 & 0xff);
    }
    iVar8 = *(int *)(param_1 + 0x68) + (int)param_2[1];
    local_50 = 0;
    local_48 = 0;
    local_44 = 0x80000000;
    if (0 < iVar8) {
      FUN_144feb430(&local_50,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    uVar11 = local_44;
    lVar7 = local_50;
    iVar8 = *(int *)(param_1 + 0x20);
    iVar19 = 0;
    local_res20 = 0;
    if (0 < iVar8) {
      local_58 = 0;
      lVar16 = 0;
      iVar20 = local_48;
      do {
        if ((*(int *)(param_1 + 0x48) == 0) ||
           (iVar9 = *(int *)(local_58 + *(longlong *)(param_1 + 0x40)), iVar9 == -1)) {
          uVar14 = 0xffffffff;
          uVar18 = 0;
        }
        else {
          uVar18 = *(ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar9 * 8);
          uVar14 = uVar18 & 0xffffffff;
          uVar18 = uVar18 >> 0x20;
        }
        iVar17 = (int)uVar18;
        iVar9 = iVar19;
        if (iVar19 < (int)param_2[1]) {
          piVar4 = (int *)(*param_2 + lVar16 * 8);
          do {
            if (local_res20 <= *piVar4) break;
            iVar9 = iVar9 + 1;
            lVar16 = lVar16 + 1;
            piVar4 = piVar4 + 2;
          } while (lVar16 < (int)param_2[1]);
        }
        lVar21 = lVar16;
        iVar19 = iVar9;
        if (iVar9 < (int)param_2[1]) {
          piVar4 = (int *)(*param_2 + lVar16 * 8);
          do {
            if (*piVar4 != local_res20) break;
            iVar19 = iVar19 + 1;
            lVar21 = lVar21 + 1;
            piVar4 = piVar4 + 2;
          } while (lVar21 < (int)param_2[1]);
        }
        iVar9 = iVar19 - iVar9;
        iVar10 = *(int *)(param_1 + 0x30);
        iVar1 = iVar10 + iVar20;
        if (0 < iVar17) {
          do {
            iVar12 = (int)uVar14;
            if (iVar12 < iVar10) {
              lVar15 = *(longlong *)(param_1 + 0x28);
              iVar3 = iVar12;
            }
            else {
              iVar3 = iVar12 - iVar10;
              lVar15 = *(longlong *)(param_1 + 0x60);
            }
            lVar5 = (longlong)iVar20;
            iVar20 = iVar20 + 1;
            puVar2 = (undefined8 *)(lVar7 + lVar5 * 8);
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = *(undefined8 *)(lVar15 + (longlong)iVar3 * 8);
              iVar10 = *(int *)(param_1 + 0x30);
            }
            uVar14 = (ulonglong)(iVar12 + 1);
            uVar18 = uVar18 - 1;
            local_48 = iVar20;
          } while (uVar18 != 0);
        }
        lVar15 = (longlong)iVar9;
        if (iVar9 < 1) {
LAB_145018113:
          if (0 < iVar17) goto LAB_14501811e;
        }
        else {
          lVar16 = lVar16 * 8;
          do {
            lVar5 = *param_2;
            lVar16 = lVar16 + 8;
            puVar6 = (undefined2 *)((longlong)iVar20 * 8 + lVar7);
            iVar20 = iVar20 + 1;
            *(undefined1 *)(puVar6 + 1) = 0;
            *(undefined4 *)(puVar6 + 2) = 0xffffffff;
            *puVar6 = 0xffff;
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(lVar5 + -4 + lVar16);
            *(undefined1 *)(puVar6 + 1) = 0x40;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          local_48 = iVar20;
          if (iVar9 < 1) goto LAB_145018113;
LAB_14501811e:
          plVar13 = (longlong *)(param_1 + 0x50);
          iVar10 = *(int *)(*(longlong *)(param_1 + 0x40) + local_58);
          if (iVar10 == -1) {
            iVar10 = *(int *)(param_1 + 0x58);
            *(int *)(*(longlong *)(param_1 + 0x40) + local_58) = iVar10;
            iVar12 = *(int *)(param_1 + 0x58) + 1;
            if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar12) {
              FUN_144c4a6d0(plVar13,&PTR_vftable_14c6e47a0,(longlong)iVar12);
            }
            iVar3 = *(int *)(param_1 + 0x58);
            lVar16 = *plVar13;
            *(int *)(param_1 + 0x58) = iVar12;
            *(undefined4 *)(lVar16 + 4 + (longlong)iVar3 * 8) = 0;
            *(undefined4 *)(lVar16 + (longlong)iVar3 * 8) = 0xffffffff;
          }
          lVar16 = *plVar13;
          *(int *)(lVar16 + (longlong)iVar10 * 8) = iVar1;
          *(int *)(lVar16 + 4 + (longlong)iVar10 * 8) = iVar17 + iVar9;
        }
        local_res20 = local_res20 + 1;
        local_58 = local_58 + 4;
        lVar16 = lVar21;
      } while (local_res20 < iVar8);
    }
    plVar13 = (longlong *)(param_1 + 0x60);
    if (&local_50 != plVar13) {
      FUN_144d080c0(plVar13,&PTR_vftable_14c6e47a0);
      FUN_144d080c0(&local_50,&PTR_vftable_14c6e47a0);
      lVar7 = *plVar13;
      *plVar13 = local_50;
      uVar11 = *(uint *)(param_1 + 0x6c);
      *(int *)(param_1 + 0x68) = local_48;
      *(uint *)(param_1 + 0x6c) = local_44;
    }
    if ((-1 < (int)uVar11) && (lVar7 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar7,(ulonglong)(uVar11 & 0x7fffffff) << 3);
    }
  }
  return;
}



// FUNCTION 145018270 FUN_145018270 body=401 status=ok
// SIG undefined FUN_145018270(void)

void FUN_145018270(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int local_res8;
  
  iVar6 = 0;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      if ((*(int *)(param_1 + 0x48) != 0) &&
         (iVar5 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 4), iVar5 != -1)) {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar5 * 8);
        iVar5 = (int)((ulonglong)uVar2 >> 0x20);
        if (0 < iVar5) {
          iVar8 = 0;
          local_res8 = (int)uVar2;
          do {
            iVar4 = (local_res8 - *(int *)(param_1 + 0x30)) + iVar8;
            iVar8 = iVar8 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x60) + lVar7 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar4 * 8);
            lVar7 = lVar7 + 1;
          } while (iVar8 < iVar5);
          iVar8 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 4);
          if (iVar8 == -1) {
            iVar8 = *(int *)(param_1 + 0x58);
            *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar9 * 4) = iVar8;
            iVar4 = *(int *)(param_1 + 0x58) + 1;
            if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar4) {
              FUN_144c4a6d0((longlong *)(param_1 + 0x50),&PTR_vftable_14c6e47a0);
            }
            iVar1 = *(int *)(param_1 + 0x58);
            lVar3 = *(longlong *)(param_1 + 0x50);
            *(int *)(param_1 + 0x58) = iVar4;
            *(undefined4 *)(lVar3 + 4 + (longlong)iVar1 * 8) = 0;
            *(undefined4 *)(lVar3 + (longlong)iVar1 * 8) = 0xffffffff;
          }
          *(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 8) =
               *(int *)(param_1 + 0x30) + iVar6;
          iVar6 = iVar6 + iVar5;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x20));
  }
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar6) {
    FUN_144c4a5d0(param_1 + 0x60,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  if ((*(int *)(param_1 + 0x68) < iVar6) || (iVar6 < *(int *)(param_1 + 0x68))) {
    *(int *)(param_1 + 0x68) = iVar6;
  }
  return;
}



// FUNCTION 145018410 FUN_145018410 body=265 status=ok
// SIG undefined FUN_145018410(void)

void FUN_145018410(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 8;
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
        puVar2[1] = puVar5[1];
      }
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
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
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 145018520 FUN_145018520 body=228 status=ok
// SIG undefined FUN_145018520(void)

void FUN_145018520(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = (ulonglong)param_2;
  uVar10 = uVar9;
  do {
    uVar6 = uVar10 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)((int)uVar10 + param_3) >> 1) * 8);
    uVar8 = (longlong)param_3;
    iVar7 = param_3;
    do {
      uVar5 = (uint)uVar6;
      iVar2 = *(int *)(param_1 + uVar9 * 8);
      while (iVar2 < iVar1) {
        uVar9 = uVar9 + 1;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        iVar2 = *(int *)(param_1 + uVar9 * 8);
      }
      iVar2 = *(int *)(param_1 + uVar8 * 8);
      while (iVar1 < iVar2) {
        uVar8 = uVar8 - 1;
        iVar7 = iVar7 + -1;
        iVar2 = *(int *)(param_1 + uVar8 * 8);
      }
      if ((longlong)uVar8 < (longlong)uVar9) break;
      if (uVar8 != uVar9) {
        uVar3 = *(undefined4 *)(param_1 + uVar8 * 8);
        uVar4 = *(undefined4 *)(param_1 + 4 + uVar8 * 8);
        *(undefined4 *)(param_1 + uVar8 * 8) = *(undefined4 *)(param_1 + uVar9 * 8);
        *(undefined4 *)(param_1 + 4 + uVar8 * 8) = *(undefined4 *)(param_1 + 4 + uVar9 * 8);
        *(undefined4 *)(param_1 + uVar9 * 8) = uVar3;
        *(undefined4 *)(param_1 + 4 + uVar9 * 8) = uVar4;
      }
      iVar7 = iVar7 + -1;
      uVar8 = uVar8 - 1;
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 <= (longlong)uVar8);
    if ((int)uVar10 < iVar7) {
      FUN_145018520(param_1,uVar10 & 0xffffffff,iVar7,param_4);
    }
    if (param_3 <= (int)uVar5) {
      return;
    }
    uVar10 = (ulonglong)uVar5;
  } while( true );
}



// FUNCTION 145018610 FUN_145018610 body=1513 status=ok
// SIG undefined FUN_145018610(void)

longlong *
FUN_145018610(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,char param_5,
             undefined4 param_6,undefined8 *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  longlong lVar13;
  undefined8 local_res8;
  longlong local_res18;
  longlong local_res20;
  char *local_48;
  char *pcStack_40;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res18 = param_3;
  local_res20 = param_4;
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
  if (lVar1 == 0) {
    local_48 = "TtMakeContext";
    pcStack_40 = "";
  }
  else {
    local_48 = "TtAi";
    pcStack_40 = "";
    FUN_144b3f370(lVar1,&local_48);
    local_48 = "TtNav Mesh Cutting";
    pcStack_40 = "";
    FUN_144b3f370(lVar1,&local_48);
    local_48 = "TthkaiUpdateNavDataTasks";
    pcStack_40 = "";
    FUN_144b3f370(lVar1,&local_48);
    local_48 = "TtMakeContext";
    pcStack_40 = "";
    FUN_144b3f370(lVar1,&local_48);
  }
  local_res8 = 0x168;
  _Dst = (void *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  lVar13 = 0;
  lVar4 = lVar13;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x168);
    lVar4 = FUN_14501b4c0(_Dst);
  }
  *param_1 = lVar4;
  *(undefined4 *)(lVar4 + 0x18) = param_6;
  *(char *)(*param_1 + 0x1c) = param_5;
  *(longlong *)(*param_1 + 0x20) = param_2;
  lVar4 = *(longlong *)(param_2 + 0x4c8);
  lVar7 = *param_1;
  if (lVar4 != 0) {
    FUN_144b3d910(lVar4);
  }
  lVar8 = *(longlong *)(lVar7 + 0x28);
  *(longlong *)(lVar7 + 0x28) = lVar4;
  if (lVar8 != 0) {
    FUN_144b3f230();
  }
  lVar4 = *param_1;
  uVar5 = FUN_144c2d0b0(param_2);
  plVar2 = *(longlong **)(lVar4 + 0x30);
  *(undefined8 *)(lVar4 + 0x30) = uVar5;
  bVar12 = 0;
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_144fad1a0(plVar2,0);
    }
    *(undefined4 *)(plVar2 + 3) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + 0x1c)) && (plVar2[2] != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,plVar2[2],
                 (ulonglong)(*(uint *)((longlong)plVar2 + 0x1c) & 0x7fffffff) << 3);
    }
    plVar2[2] = 0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = 0x80000000;
    (*DAT_14c787678)(0,plVar2,0);
  }
  *(bool *)(*param_1 + 0x38) = *(char *)(param_2 + 0x208) != '\0';
  FUN_144c904b0(*param_1 + 0x40,local_res18 + 8);
  lVar4 = *(longlong *)(param_2 + 0x228);
  lVar7 = *param_1;
  if (lVar4 != 0) {
    FUN_144b3d910(lVar4);
  }
  lVar8 = *(longlong *)(lVar7 + 0x58);
  *(longlong *)(lVar7 + 0x58) = lVar4;
  if (lVar8 != 0) {
    FUN_144b3f230();
  }
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 0x60) != *(longlong *)(param_2 + 0x180)) {
    if (*(longlong *)(param_2 + 0x180) != 0) {
      FUN_144b3d910();
    }
    lVar7 = *(longlong *)(lVar4 + 0x60);
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(param_2 + 0x180);
    if (lVar7 != 0) {
      FUN_144b3f230();
    }
  }
  lVar4 = *(longlong *)(param_2 + 0x180);
  *(undefined8 *)(param_2 + 0x180) = 0;
  if (lVar4 != 0) {
    FUN_144b3f230();
  }
  lVar4 = *param_1;
  if (param_5 == '\0') {
    lVar7 = *(longlong *)(param_2 + 0x140);
    if (lVar7 != 0) {
      FUN_144b3d910(lVar7);
    }
    lVar8 = *(longlong *)(lVar4 + 0x78);
    *(longlong *)(lVar4 + 0x78) = lVar7;
  }
  else {
    puVar6 = (undefined8 *)FUN_144ca2210(*(undefined8 *)(param_2 + 0x140),&local_res18);
    uVar5 = *puVar6;
    *puVar6 = 0;
    lVar7 = *(longlong *)(lVar4 + 0x78);
    *(undefined8 *)(lVar4 + 0x78) = uVar5;
    lVar8 = local_res18;
    if (lVar7 != 0) {
      FUN_144b3f230();
      lVar8 = local_res18;
    }
  }
  if (lVar8 != 0) {
    FUN_144b3f230();
  }
  lVar4 = *param_1;
  if (*(longlong *)(lVar4 + 0x90) != *(longlong *)(param_2 + 0x148)) {
    if (*(longlong *)(param_2 + 0x148) != 0) {
      FUN_144b3d910();
    }
    lVar7 = *(longlong *)(lVar4 + 0x90);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(param_2 + 0x148);
    if (lVar7 != 0) {
      FUN_144b3f230();
    }
  }
  lVar4 = *(longlong *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 0x148) = 0;
  if (lVar4 != 0) {
    FUN_144b3f230();
  }
  FUN_144fb7860(*(undefined8 *)(*param_1 + 0x90),*(undefined8 *)(*param_1 + 0x78));
  lVar7 = FUN_145310840(param_2);
  lVar4 = *param_1;
  puVar9 = *(undefined8 **)(lVar7 + 0x20);
  puVar6 = puVar9 + *(int *)(lVar7 + 0x28);
  iVar10 = (int)((longlong)puVar6 - (longlong)puVar9 >> 3);
  if ((int)(*(uint *)(lVar4 + 0xd4) & 0x7fffffff) < iVar10) {
    FUN_14501f0c0(lVar4 + 200,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  iVar11 = iVar10 + 1;
  if ((iVar11 < 0) || (0xffffffff < (ulonglong)((longlong)iVar11 * 3))) {
    bVar12 = 1;
  }
  uVar3 = (longlong)*(int *)(lVar4 + 0xe0) * 2;
  if ((*(int *)(lVar4 + 0xe0) < 0) || (0xffffffff < uVar3)) {
    lVar13 = 1;
  }
  if (((byte)((bVar12 ^ 1) & ((byte)lVar13 ^ 1)) != 0) &&
     ((uint)uVar3 < (uint)((longlong)iVar11 * 3))) {
    FUN_144b2eb80(lVar4 + 0xd8,iVar11);
  }
  lVar4 = *param_1;
  if ((int)(*(uint *)(lVar4 + 0xf4) & 0x7fffffff) < iVar10) {
    FUN_144fbfec0(lVar4 + 0xe8,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  lVar13 = local_res20;
  if ((*(int *)(lVar4 + 0xf0) < iVar10) || (iVar10 < *(int *)(lVar4 + 0xf0))) {
    *(int *)(lVar4 + 0xf0) = iVar10;
  }
  for (; local_res20 = lVar13, puVar9 != puVar6; puVar9 = puVar9 + 1) {
    local_res8 = *puVar9;
    lVar4 = FUN_144fbe4d0();
    if (lVar4 != 0) {
      local_res18 = lVar4;
      FUN_144b3d910(lVar4);
      FUN_14501b370(*param_1 + 200,&local_res8,&local_res18);
      if (local_res18 != 0) {
        FUN_144b3f230();
      }
    }
    lVar13 = local_res20;
  }
  lVar4 = *param_1;
  if (lVar13 != 0) {
    FUN_144b3d910(lVar13);
  }
  lVar7 = *(longlong *)(lVar4 + 0x110);
  *(longlong *)(lVar4 + 0x110) = lVar13;
  if (lVar7 != 0) {
    FUN_144b3f230();
  }
  *param_7 = *(undefined8 *)(*param_1 + 0x78);
  if (lVar1 != 0) {
    local_48 = "Et";
    pcStack_40 = "";
    FUN_144b3f260(lVar1,&local_48);
    local_48 = "Et";
    pcStack_40 = "";
    FUN_144b3f260(lVar1,&local_48);
    local_48 = "Et";
    pcStack_40 = "";
    FUN_144b3f260(lVar1,&local_48);
    local_48 = "Et";
    pcStack_40 = "";
    FUN_144b3f260(lVar1,&local_48);
  }
  return param_1;
}



// FUNCTION 145018c00 FUN_145018c00 body=867 status=ok
// SIG undefined FUN_145018c00(void)

short * FUN_145018c00(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  short local_res20 [4];
  char *local_58;
  char *local_50;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  local_res18 = param_3;
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
    local_58 = "TtAi";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtNav Mesh Cutting";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TthkaiUpdateNavDataTasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtaddPhase1Tasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    local_res8 = 0x40;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ApplyAsyncWorldUpdatesTask");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[2] = 1;
      puVar5[1] = 0xffffffff;
      puVar5[6] = param_3;
      *puVar5 = hkaiUpdateNavDataTasks::ApplyAsyncWorldUpdatesTask::vftable;
      puVar5[4] = hkaiUpdateNavDataTasks::ApplyAsyncWorldUpdatesTask::vftable;
      FUN_144b3d910(param_3);
    }
    FUN_144be3b70(param_2,local_res20,puVar5,0x40);
    sVar1 = local_res20[0];
    if ((param_4 != -1) && (local_res20[0] != -1)) {
      iVar6 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar6) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      iVar2 = *(int *)(param_2 + 0x330);
      lVar4 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar6;
      *(short *)(lVar4 + (longlong)iVar2 * 4) = param_4;
      *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = sVar1;
      param_2 = local_res10;
      param_3 = local_res18;
      sVar1 = local_res20[0];
    }
    param_4 = sVar1;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar5);
    }
  }
  local_res18 = 0x40;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"UpdateOverlapManagerTask");
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 1;
    puVar5[1] = 0xffffffff;
    puVar5[6] = param_3;
    *puVar5 = hkaiUpdateNavDataTasks::UpdateOverlapManagerTask::vftable;
    puVar5[4] = hkaiUpdateNavDataTasks::UpdateOverlapManagerTask::vftable;
    FUN_144b3d910(param_3);
  }
  FUN_144be3b70(param_2,param_1,puVar5,0x40);
  if ((param_4 != -1) && (sVar1 = *param_1, sVar1 != -1)) {
    iVar6 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar6) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar4 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar6;
    *(short *)(lVar4 + (longlong)iVar2 * 4) = param_4;
    *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = sVar1;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar5);
  }
  if (lVar3 != 0) {
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
  }
  return param_1;
}



// FUNCTION 145018f70 FUN_145018f70 body=3375 status=ok
// SIG undefined FUN_145018f70(void)

/* WARNING: Type propagation algorithm not settling */

undefined2 * FUN_145018f70(undefined2 *param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short sVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  short *psVar16;
  uint uVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong local_res18;
  char local_e8 [4];
  short local_e4 [2];
  undefined2 local_e0 [2];
  undefined2 local_dc [2];
  undefined2 local_d8 [2];
  undefined2 local_d4 [2];
  undefined2 local_d0 [2];
  undefined2 local_cc [2];
  undefined2 local_c8 [4];
  undefined8 local_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  longlong *local_a8;
  char *pcStack_a0;
  longlong *local_98;
  undefined2 *local_90;
  undefined2 local_88 [4];
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  int local_64;
  longlong local_60;
  longlong local_58 [4];
  
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res18 = param_3;
  if (*(char *)(lVar21 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar21 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar21 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar21 + 0xf0) = lVar8;
  }
  puVar3 = *(undefined **)(lVar8 + 0x3e0);
  local_b8 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_a8 = (longlong *)0x149c209f8;
    pcStack_a0 = "";
  }
  else {
    local_a8 = (longlong *)&DAT_1499cd534;
    pcStack_a0 = "";
    FUN_144b3f370(puVar3,&local_a8);
    local_a8 = (longlong *)0x149c1ffb0;
    pcStack_a0 = "";
    FUN_144b3f370(puVar3,&local_a8);
    local_a8 = (longlong *)0x149c1ffc8;
    pcStack_a0 = "";
    FUN_144b3f370(puVar3,&local_a8);
    local_a8 = (longlong *)0x149c209f8;
    pcStack_a0 = "";
    FUN_144b3f370(puVar3,&local_a8);
  }
  lVar21 = local_res18;
  plVar18 = (longlong *)(local_res18 + 0x68);
  iVar24 = *(int *)(*(longlong *)(local_res18 + 0x90) + 0x28);
  lVar8 = (longlong)iVar24;
  if ((int)(*(uint *)(local_res18 + 0x74) & 0x7fffffff) < iVar24) {
    FUN_14501ed80(plVar18,&PTR_vftable_14c6e4810,lVar8);
  }
  iVar15 = *(int *)(lVar21 + 0x70);
  uVar17 = 0;
  if (iVar15 < iVar24) {
    puVar14 = (undefined4 *)((longlong)iVar15 * 0x80 + *plVar18);
    puVar19 = (undefined4 *)(lVar8 * 0x80 + *plVar18);
    *(int *)(lVar21 + 0x70) = iVar24;
    if (puVar14 != puVar19) {
      puVar14 = puVar14 + 0x13;
      do {
        if ((undefined8 *)(puVar14 + -0x13) != (undefined8 *)0x0) {
          *(undefined8 *)(puVar14 + -0x11) = 0xffffffff;
          *(undefined8 *)(puVar14 + -0xf) = 1;
          *(undefined ***)(puVar14 + -0x13) = hkaiUpdateNavDataTasks::SectionContext::vftable;
          *(undefined8 *)(puVar14 + -0xb) = 0;
          puVar14[-9] = 0;
          puVar14[-8] = 0x80000000;
          *(undefined8 *)(puVar14 + -7) = 0;
          puVar14[-5] = 0;
          puVar14[-4] = 0x80000000;
          *(undefined8 *)(puVar14 + -3) = 0;
          puVar14[-1] = 0;
          *puVar14 = 0x80000000;
        }
        puVar1 = puVar14 + 0xd;
        puVar14 = puVar14 + 0x20;
      } while (puVar1 != puVar19);
    }
  }
  else if (iVar24 < iVar15) {
    lVar23 = *plVar18;
    plVar18 = (longlong *)((longlong)iVar15 * 0x80 + *plVar18);
    *(int *)(lVar21 + 0x70) = iVar24;
    while (plVar18 != (longlong *)(lVar8 * 0x80 + lVar23)) {
      plVar18 = plVar18 + -0x10;
      (**(code **)(*plVar18 + 8))(plVar18,0);
    }
  }
  FUN_144c3fad0(local_res18 + 0x98,0,*(undefined4 *)(*(longlong *)(local_res18 + 0x90) + 0x28),0);
  FUN_144be3ae0(param_2,local_88,0,0x40);
  FUN_144be3ae0(param_2,local_e4,0,0x40);
  FUN_144be90e0(0x6c9b25e5);
  if (0 < *(int *)(*(longlong *)(local_res18 + 0x90) + 0x28)) {
    do {
      local_80 = CONCAT44(local_80._4_4_,uVar17);
      FUN_14501a260(&local_78,param_2,local_res18,&local_80,param_4,local_88[0],local_e8);
      sVar4 = local_e4[0];
      if (local_e8[0] != '\0') {
        puVar20 = (uint *)(*(longlong *)(local_res18 + 0x98) + (longlong)((int)uVar17 >> 5) * 4);
        *puVar20 = *puVar20 | 1 << (uVar17 & 0x1f);
      }
      sVar7 = (short)local_78;
      if (((short)local_78 != -1) && (local_e4[0] != -1)) {
        iVar24 = *(int *)(param_2 + 0x330) + 1;
        if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
          FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
        }
        iVar15 = *(int *)(param_2 + 0x330);
        lVar21 = *(longlong *)(param_2 + 0x328);
        *(int *)(param_2 + 0x330) = iVar24;
        *(short *)(lVar21 + (longlong)iVar15 * 4) = sVar7;
        *(short *)(lVar21 + 2 + (longlong)iVar15 * 4) = sVar4;
      }
      FUN_144be90e0(0x99a80dee);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < *(int *)(*(longlong *)(local_res18 + 0x90) + 0x28));
  }
  iVar15 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = -0x80000000;
  iVar24 = *(int *)(*(longlong *)(local_res18 + 0x90) + 0x28);
  if (0 < iVar24) {
    FUN_14501efd0(&local_70,&PTR_vftable_14c6e47c0,(longlong)iVar24);
    lVar21 = (longlong)local_68;
    iVar15 = local_68;
    if (local_68 < iVar24) {
      uVar17 = iVar24 - local_68;
      local_68 = iVar24;
      if (0 < (int)uVar17) {
        uVar22 = (ulonglong)uVar17;
        psVar16 = (short *)(local_70 + lVar21 * 2);
        do {
          if (psVar16 != (short *)0x0) {
            *psVar16 = local_e4[0];
          }
          uVar22 = uVar22 - 1;
          psVar16 = psVar16 + 1;
        } while (uVar22 != 0);
      }
      goto LAB_1450193b7;
    }
  }
  local_68 = iVar15;
  if (iVar24 < iVar15) {
    local_68 = iVar24;
  }
LAB_1450193b7:
  FUN_144be3ae0(param_2,local_e0,0,0x40);
  uVar2 = local_e0[0];
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar15 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar24;
  *(short *)(lVar21 + (longlong)iVar15 * 4) = local_e4[0];
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar15 * 4) = uVar2;
  local_a8 = &local_res18;
  local_98 = &local_70;
  local_90 = local_e0;
  pcStack_a0 = (char *)param_2;
  if (*(int *)(local_res18 + 0xa0) != 0) {
    lVar21 = *(longlong *)(local_res18 + 0x98);
    iVar24 = *(int *)(local_res18 + 0xa8) + -1;
    iVar25 = 0;
    lVar8 = (longlong)(iVar24 >> 5);
    local_c0 = CONCAT44(local_c0._4_4_,~(-1 << ((byte)iVar24 & 0x1f)) * 2) | 1;
    uVar27 = ~(iVar24 >> 0x1f) & 1;
    iVar15 = 0;
    lVar26 = 0;
    local_78 = CONCAT44(local_78._4_4_,~(iVar24 >> 0x1f)) & 0xffffffff00000001;
    iVar24 = (iVar24 >> 5) + -1;
    local_58[0] = lVar8 + -1;
    local_80 = CONCAT44(local_80._4_4_,iVar24);
    uVar17 = 0xffffffff;
    lVar23 = local_58[0];
    local_60 = lVar8;
    do {
      uVar28 = uVar27;
      if (lVar26 < lVar8) {
        iVar24 = (iVar15 + iVar25) * 0x20;
        puVar20 = (uint *)(lVar21 + lVar26 * 4);
        lVar26 = lVar8 - lVar26;
        do {
          uVar27 = *puVar20;
          uVar28 = uVar17 & uVar27;
          lVar8 = local_60;
          while (local_60 = lVar8, uVar28 != 0) {
            iVar15 = (*(code *)PTR_FUN_14c6da350)((-(uVar27 & uVar17) & uVar27 & uVar17) - 1);
            uVar17 = uVar17 & -2 << ((byte)iVar15 & 0x1f);
            FUN_14501e4e0(&local_a8,iVar24 + iVar15);
            uVar27 = *puVar20;
            lVar8 = local_60;
            uVar28 = uVar17 & uVar27;
          }
          iVar24 = iVar24 + 0x20;
          puVar20 = puVar20 + 1;
          uVar17 = 0xffffffff;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar23 = local_58[0];
        uVar28 = (uint)local_78;
        iVar24 = (int)local_80;
      }
      iVar15 = iVar24;
      lVar26 = lVar23;
      uVar17 = uVar17 & (uint)local_c0;
      iVar25 = iVar25 + 1;
      uVar27 = uVar28 - 1;
      lVar21 = lVar21 + 4;
      local_78 = CONCAT44(local_78._4_4_,uVar27);
      lVar23 = lVar26;
      iVar24 = (int)local_80;
    } while (uVar28 != 0);
  }
  FUN_144be90e0(0xe776d91);
  local_58[0] = 0x40;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar9,"CompactTask");
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    puVar9[1] = 0xffffffff;
    *puVar9 = hkaiUpdateNavDataTasks::CompactTask::vftable;
    puVar9[4] = hkaiUpdateNavDataTasks::CompactTask::vftable;
    puVar9[2] = 1;
    puVar9[6] = local_res18;
    if (local_res18 != 0) {
      FUN_144b3d910();
    }
  }
  FUN_144be3b70(param_2,local_dc,puVar9,0x40);
  uVar2 = local_dc[0];
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar15 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar24;
  local_60 = 0x40;
  *(undefined2 *)(lVar21 + (longlong)iVar15 * 4) = local_e0[0];
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar15 * 4) = uVar2;
  puVar10 = (undefined8 *)(*DAT_14c787670)(0,&local_60,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar10,"GetAndClearModifiedFacesTask");
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[1] = 0xffffffff;
    *puVar10 = hkaiUpdateNavDataTasks::GetAndClearModifiedFacesTask::vftable;
    puVar10[4] = hkaiUpdateNavDataTasks::GetAndClearModifiedFacesTask::vftable;
    puVar10[2] = 1;
    puVar10[6] = local_res18;
    if (local_res18 != 0) {
      FUN_144b3d910();
    }
  }
  FUN_144be3b70(param_2,local_d8,puVar10,0x40);
  uVar5 = local_d8[0];
  uVar2 = local_dc[0];
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar15 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar24;
  local_78 = 0x40;
  *(undefined2 *)(lVar21 + (longlong)iVar15 * 4) = uVar2;
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar15 * 4) = uVar5;
  puVar11 = (undefined8 *)(*DAT_14c787670)(0,&local_78,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar11,"GetAndClearModifiedAabbsTask");
  }
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[1] = 0xffffffff;
    *puVar11 = hkaiUpdateNavDataTasks::GetAndClearModifiedAabbsTask::vftable;
    puVar11[4] = hkaiUpdateNavDataTasks::GetAndClearModifiedAabbsTask::vftable;
    puVar11[2] = 1;
    puVar11[6] = local_res18;
    if (local_res18 != 0) {
      FUN_144b3d910();
    }
  }
  FUN_144be3b70(param_2,local_d4,puVar11,0x40);
  uVar2 = local_d4[0];
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar15 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar24;
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar15 * 4) = uVar2;
  *(undefined2 *)(lVar21 + (longlong)iVar15 * 4) = local_dc[0];
  FUN_144be3ae0(param_2,param_1,0,0x40);
  uVar5 = local_d8[0];
  uVar2 = *param_1;
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  uVar6 = local_d4[0];
  iVar15 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar24;
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar15 * 4) = uVar2;
  *(undefined2 *)(lVar21 + (longlong)iVar15 * 4) = uVar5;
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar15 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar24;
  local_58[1] = 0x40;
  *(undefined2 *)(lVar21 + (longlong)iVar15 * 4) = uVar6;
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar15 * 4) = uVar2;
  puVar12 = (undefined8 *)(*DAT_14c787670)(0,local_58 + 1,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar12,"FireNavDataJustModifiedTask");
  }
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = 0xffffffff;
    *puVar12 = hkaiUpdateNavDataTasks::FireNavDataJustModifiedTask::vftable;
    puVar12[4] = hkaiUpdateNavDataTasks::FireNavDataJustModifiedTask::vftable;
    puVar12[2] = 1;
    puVar12[6] = local_res18;
  }
  FUN_144be3b70(param_2,local_d0,puVar12,0x40);
  uVar2 = local_d0[0];
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  local_c0._0_4_ = iVar24;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  uVar5 = local_d0[0];
  iVar24 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(uint *)(param_2 + 0x330) = (uint)local_c0;
  *(undefined2 *)(lVar21 + (longlong)iVar24 * 4) = local_d8[0];
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar24 * 4) = uVar2;
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  local_c0 = CONCAT44(local_c0._4_4_,iVar24);
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar24 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(uint *)(param_2 + 0x330) = (uint)local_c0;
  local_c0 = 0x950;
  *(undefined2 *)(lVar21 + (longlong)iVar24 * 4) = local_d4[0];
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar24 * 4) = uVar5;
  lVar21 = (*DAT_14c787670)(0,&local_c0,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar21,"UpdateVolumeStalenessTask");
  }
  if (lVar21 == 0) {
    local_80 = 0;
  }
  else {
    local_80 = FUN_14501dca0(lVar21,local_res18);
  }
  FUN_144be3b70(param_2,local_cc,local_80,0x40);
  uVar2 = local_cc[0];
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  local_c0 = CONCAT44(local_c0._4_4_,iVar24);
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  iVar24 = *(int *)(param_2 + 0x330);
  lVar21 = *(longlong *)(param_2 + 0x328);
  *(uint *)(param_2 + 0x330) = (uint)local_c0;
  local_58[2] = 0x40;
  *(undefined2 *)(lVar21 + (longlong)iVar24 * 4) = local_d0[0];
  *(undefined2 *)(lVar21 + 2 + (longlong)iVar24 * 4) = uVar2;
  puVar13 = (undefined8 *)(*DAT_14c787670)(0,local_58 + 2,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar13,"AddStalenessPathRequestsToManagerTask");
  }
  if (puVar13 != (undefined8 *)0x0) {
    puVar13[1] = 0xffffffff;
    *puVar13 = hkaiUpdateNavDataTasks::AddStalenessPathRequestsToManagerTask::vftable;
    puVar13[4] = hkaiUpdateNavDataTasks::AddStalenessPathRequestsToManagerTask::vftable;
    puVar13[2] = 1;
    puVar13[6] = local_res18;
    if (local_res18 != 0) {
      FUN_144b3d910();
    }
  }
  FUN_144be3b70(param_2,local_c8,puVar13,0x40);
  uVar2 = local_c8[0];
  local_a8 = (longlong *)(param_2 + 0x328);
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  local_c0 = CONCAT44(local_c0._4_4_,iVar24);
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca(local_a8,&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  lVar8 = local_a8[1];
  lVar21 = *local_a8;
  *(uint *)(local_a8 + 1) = (uint)local_c0;
  *(undefined2 *)(lVar21 + (longlong)(int)lVar8 * 4) = local_cc[0];
  *(undefined2 *)(lVar21 + 2 + (longlong)(int)lVar8 * 4) = uVar2;
  local_a8 = (longlong *)(param_2 + 0x328);
  uVar2 = *param_1;
  iVar24 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar24) {
    FUN_141807bca(local_a8,&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  lVar8 = local_a8[1];
  lVar21 = *local_a8;
  *(int *)(local_a8 + 1) = iVar24;
  *(undefined2 *)(lVar21 + (longlong)(int)lVar8 * 4) = local_c8[0];
  *(undefined2 *)(lVar21 + 2 + (longlong)(int)lVar8 * 4) = uVar2;
  if (puVar13 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar13);
  }
  if (local_80 != 0) {
    FUN_144b3f230();
  }
  if (puVar12 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar12);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar11);
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar10);
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar9);
  }
  local_68 = 0;
  if ((-1 < local_64) && (local_70 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,local_70,local_64 * 2);
  }
  puVar3 = local_b8;
  local_70 = 0;
  local_64 = 0x80000000;
  if (local_b8 != (undefined *)0x0) {
    local_b8 = &DAT_149981764;
    puStack_b0 = &DAT_149981766;
    FUN_144b3f260(puVar3,&local_b8);
    local_b8 = &DAT_149981764;
    puStack_b0 = &DAT_149981766;
    FUN_144b3f260(puVar3,&local_b8);
    local_b8 = &DAT_149981764;
    puStack_b0 = &DAT_149981766;
    FUN_144b3f260(puVar3,&local_b8);
    local_b8 = &DAT_149981764;
    puStack_b0 = &DAT_149981766;
    FUN_144b3f260(puVar3,&local_b8);
  }
  return param_1;
}



// FUNCTION 145019ca0 FUN_145019ca0 body=299 status=ok
// SIG undefined FUN_145019ca0(void)

short * FUN_145019ca0(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_res8;
  
  local_res8 = 0x40;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"CommitUpdatesTask");
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 1;
    puVar4[1] = 0xffffffff;
    *puVar4 = hkaiUpdateNavDataTasks::CommitUpdatesTask::vftable;
    puVar4[4] = hkaiUpdateNavDataTasks::CommitUpdatesTask::vftable;
    puVar4[6] = param_3;
    if (param_3 != 0) {
      FUN_144b3d910(param_3);
    }
  }
  FUN_144be3b70(param_2,param_1,puVar4,0x40);
  if ((param_4 != -1) && (sVar1 = *param_1, sVar1 != -1)) {
    iVar5 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar5) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar3 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar5;
    *(short *)(lVar3 + (longlong)iVar2 * 4) = param_4;
    *(short *)(lVar3 + 2 + (longlong)iVar2 * 4) = sVar1;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar4);
  }
  return param_1;
}



// FUNCTION 145019dd0 FUN_145019dd0 body=299 status=ok
// SIG undefined FUN_145019dd0(void)

short * FUN_145019dd0(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_res8;
  
  local_res8 = 0x40;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"FireEventsTask");
  }
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 1;
    puVar4[1] = 0xffffffff;
    *puVar4 = hkaiUpdateNavDataTasks::FireEventsTask::vftable;
    puVar4[4] = hkaiUpdateNavDataTasks::FireEventsTask::vftable;
    puVar4[6] = param_3;
    if (param_3 != 0) {
      FUN_144b3d910(param_3);
    }
  }
  FUN_144be3b70(param_2,param_1,puVar4,0x40);
  if ((param_4 != -1) && (sVar1 = *param_1, sVar1 != -1)) {
    iVar5 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar5) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar3 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar5;
    *(short *)(lVar3 + (longlong)iVar2 * 4) = param_4;
    *(short *)(lVar3 + 2 + (longlong)iVar2 * 4) = sVar1;
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar4);
  }
  return param_1;
}



// FUNCTION 145019f00 FUN_145019f00 body=65 status=ok
// SIG undefined FUN_145019f00(void)

int * FUN_145019f00(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 145019f50 FUN_145019f50 body=192 status=ok
// SIG undefined FUN_145019f50(void)

void FUN_145019f50(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar3 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = *puVar3 + 1;
    UNLOCK();
    uVar4 = (uint)uVar5;
    if ((uint)(uVar5 >> 0x20) <= (uint)uVar5) {
      iVar2 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res10);
      if (iVar2 == 0) {
        return;
      }
      uVar5 = (ulonglong)local_res10[0];
      uVar4 = local_res10[0];
    }
    local_res10[0] = uVar4;
    uVar4 = (uint)uVar5;
    iVar2 = *(int *)(param_1 + 0x8f0);
    if ((int)(uVar4 + 1) < *(int *)(param_1 + 0x8f0)) {
      iVar2 = uVar4 + 1;
    }
    while ((int)uVar4 < iVar2) {
      FUN_145336360(param_1 + -0x20,local_res8,uVar5 & 0xffffffff);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    }
  } while( true );
}



// FUNCTION 14501a010 FUN_14501a010 body=110 status=ok
// SIG undefined FUN_14501a010(void)

undefined8 * FUN_14501a010(undefined8 *param_1,ulonglong param_2)

{
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x920);
  }
  return param_1;
}



// FUNCTION 14501a080 FUN_14501a080 body=217 status=ok
// SIG undefined FUN_14501a080(void)

undefined8 * FUN_14501a080(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[2] = 1;
  *(undefined4 *)((longlong)param_1 + 0x914) = param_2;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x122) = param_3;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshCutFaceTask>::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshCutFaceTask>::vftable;
  param_1[0xe] = param_1 + 0x10;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  FUN_144bf95c0(param_1 + 6,param_2,param_3,1);
  param_1[0x124] = 0;
  *param_1 = hkaiNavMeshCutFaceTask::vftable;
  param_1[4] = hkaiNavMeshCutFaceTask::vftable;
  *(undefined4 *)(param_1 + 0x125) = 0;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0x80000000;
  param_1[0x126] = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return param_1;
}



// FUNCTION 14501a160 FUN_14501a160 body=87 status=ok
// SIG undefined FUN_14501a160(void)

undefined8 FUN_14501a160(undefined8 param_1,ulonglong param_2)

{
  FUN_145336210();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x950);
  }
  return param_1;
}



// FUNCTION 14501a1c0 FUN_14501a1c0 body=146 status=ok
// SIG undefined FUN_14501a1c0(void)

void FUN_14501a1c0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 4);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 14501a260 FUN_14501a260 body=3375 status=ok
// SIG undefined FUN_14501a260(void)

short * FUN_14501a260(short *param_1,longlong param_2,longlong param_3,int *param_4,short param_5,
                     undefined2 param_6,char *param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  short sVar7;
  undefined2 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  short sVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  int *piVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  int iVar27;
  short local_98 [8];
  char *local_88;
  char *pcStack_80;
  short local_78 [2];
  undefined2 local_74 [2];
  undefined2 local_70 [4];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar15 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar15 + 0xf0);
  if (lVar10 == 0) {
    if (*(char *)(lVar15 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *(longlong *)(lVar15 + 0xf0) = lVar10;
  }
  lVar15 = *(longlong *)(lVar10 + 0x3e0);
  local_50 = lVar15;
  if (lVar15 == 0) {
    local_88 = "TtaddPhase2TasksForSection";
    pcStack_80 = "";
  }
  else {
    local_88 = "TtAi";
    pcStack_80 = "";
    FUN_144b3f370(lVar15,&local_88);
    local_88 = "TtNav Mesh Cutting";
    pcStack_80 = "";
    FUN_144b3f370(lVar15,&local_88);
    local_88 = "TthkaiUpdateNavDataTasks";
    pcStack_80 = "";
    FUN_144b3f370(lVar15,&local_88);
    local_88 = "TtaddPhase2TasksForSection";
    pcStack_80 = "";
    FUN_144b3f370(lVar15,&local_88);
  }
  lVar10 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_3 + 0x90) + 0x20) + (longlong)*param_4 * 8);
  local_58 = (longlong)*param_4 * 0x80 + *(longlong *)(param_3 + 0x68);
  *(longlong *)(local_58 + 0x18) = lVar10;
  if (lVar10 == 0) {
    *param_7 = '\0';
    *param_1 = param_5;
    if (lVar15 == 0) {
      return param_1;
    }
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar15,&local_88);
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar15,&local_88);
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar15,&local_88);
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar15,&local_88);
    return param_1;
  }
  plVar23 = (longlong *)(lVar10 + 0xf8);
  plVar20 = (longlong *)(*(longlong *)(param_3 + 0x80) + 0x28 + (longlong)*param_4 * 0x38);
  if (*(int *)(lVar10 + 0x100) == 0) {
    if (plVar20 != plVar23) {
      FUN_144c90920(plVar23,&PTR_vftable_14c6e47a0);
      FUN_144c90920(plVar20,&PTR_vftable_14c6e47a0);
      lVar15 = *plVar23;
      *plVar23 = *plVar20;
      *plVar20 = lVar15;
      uVar3 = *(undefined4 *)(lVar10 + 0x100);
      *(int *)(lVar10 + 0x100) = (int)plVar20[1];
      *(undefined4 *)(plVar20 + 1) = uVar3;
      uVar3 = *(undefined4 *)(lVar10 + 0x104);
      *(undefined4 *)(lVar10 + 0x104) = *(undefined4 *)((longlong)plVar20 + 0xc);
      *(undefined4 *)((longlong)plVar20 + 0xc) = uVar3;
    }
  }
  else {
    iVar27 = *(int *)(lVar10 + 0x100);
    puVar21 = (undefined4 *)*plVar20;
    puVar24 = puVar21 + (longlong)(int)plVar20[1] * 8;
    iVar16 = (int)plVar20[1] + iVar27;
    if ((int)(*(uint *)(lVar10 + 0x104) & 0x7fffffff) < iVar16) {
      FUN_141807cf8(plVar23,&PTR_vftable_14c6e47a0,(longlong)iVar16);
    }
    puVar25 = (undefined4 *)((longlong)iVar27 * 0x20 + *plVar23);
    for (; puVar21 != puVar24; puVar21 = puVar21 + 8) {
      if (puVar25 != (undefined4 *)0x0) {
        uVar3 = puVar21[1];
        uVar4 = puVar21[2];
        uVar5 = puVar21[3];
        *puVar25 = *puVar21;
        puVar25[1] = uVar3;
        puVar25[2] = uVar4;
        puVar25[3] = uVar5;
        uVar6 = *(undefined8 *)(puVar21 + 6);
        *(undefined8 *)(puVar25 + 4) = *(undefined8 *)(puVar21 + 4);
        *(undefined8 *)(puVar25 + 6) = uVar6;
      }
      puVar25 = puVar25 + 8;
    }
    *(int *)(lVar10 + 0x100) = iVar16;
    lVar13 = (longlong)*param_4 * 0x38;
    lVar15 = *(longlong *)(param_3 + 0x80);
    *(undefined4 *)(lVar13 + 0x30 + lVar15) = 0;
    if ((-1 < *(int *)(lVar13 + 0x34 + lVar15)) && (*(longlong *)(lVar13 + 0x28 + lVar15) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
    }
    *(undefined8 *)(lVar13 + 0x28 + lVar15) = 0;
    *(undefined4 *)(lVar13 + 0x34 + lVar15) = 0x80000000;
  }
  lVar15 = (longlong)*param_4 * 0x38 + *(longlong *)(param_3 + 0x80);
  if ((((*(int *)(lVar15 + 0x10) == 0) && (*(int *)(lVar15 + 0x20) == 0)) &&
      (*(int *)(lVar15 + 0x30) == 0)) &&
     ((*(int *)(lVar10 + 0xa0) == 0 && (*(int *)(lVar10 + 0xb0) == 0)))) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  *param_7 = cVar9;
  if (*(char *)(*(longlong *)(param_3 + 0x90) + 0x108) == '\0') {
    local_68 = 0x40;
    puVar11 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar11,"ResetClearanceAllTask");
    }
    if (puVar11 != (undefined8 *)0x0) {
      iVar27 = *param_4;
      puVar11[1] = 0xffffffff;
      puVar11[2] = 1;
      *puVar11 = hkaiUpdateNavDataTasks::ResetClearanceAllTask::vftable;
      puVar11[4] = hkaiUpdateNavDataTasks::ResetClearanceAllTask::vftable;
      puVar11[6] = param_3;
      FUN_144b3d910(param_3);
      *(int *)(puVar11 + 7) = iVar27;
    }
    FUN_144be3b70(param_2,local_98,puVar11,0x40);
    sVar19 = local_98[0];
    if ((param_5 != -1) && (local_98[0] != -1)) {
      iVar27 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0);
      }
      iVar16 = *(int *)(param_2 + 0x330);
      lVar15 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar27;
      *(short *)(lVar15 + (longlong)iVar16 * 4) = param_5;
      *(short *)(lVar15 + 2 + (longlong)iVar16 * 4) = sVar19;
    }
    sVar19 = local_98[0];
    iVar27 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0);
    }
    iVar16 = *(int *)(param_2 + 0x330);
    lVar15 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar27;
    *(short *)(lVar15 + (longlong)iVar16 * 4) = sVar19;
    *(undefined2 *)(lVar15 + 2 + (longlong)iVar16 * 4) = param_6;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar11);
    }
  }
  if (*param_7 == '\0') {
    *param_1 = param_5;
    goto LAB_14501aee9;
  }
  cVar9 = *(char *)(*(longlong *)(param_3 + 0x90) + 0x108);
  if (cVar9 == '\x01') {
    local_60 = 0x40;
    puVar11 = (undefined8 *)(*DAT_14c787670)(0,&local_60,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar11,"ResetClearanceMediatorTask");
    }
    if (puVar11 != (undefined8 *)0x0) {
      iVar27 = *param_4;
      puVar11[1] = 0xffffffff;
      *puVar11 = hkaiUpdateNavDataTasks::ResetClearanceMediatorTask::vftable;
      ppuVar12 = hkaiUpdateNavDataTasks::ResetClearanceMediatorTask::vftable;
      goto LAB_14501a86c;
    }
LAB_14501a889:
    puVar11 = (undefined8 *)0x0;
LAB_14501a88b:
    FUN_144be3b70(param_2,local_98,puVar11,0x40);
    sVar19 = local_98[0];
    if ((param_5 != -1) && (local_98[0] != -1)) {
      iVar27 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0);
      }
      iVar16 = *(int *)(param_2 + 0x330);
      lVar15 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar27;
      *(short *)(lVar15 + (longlong)iVar16 * 4) = param_5;
      *(short *)(lVar15 + 2 + (longlong)iVar16 * 4) = sVar19;
    }
    sVar19 = local_98[0];
    iVar27 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0);
    }
    iVar16 = *(int *)(param_2 + 0x330);
    lVar15 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar27;
    *(short *)(lVar15 + (longlong)iVar16 * 4) = sVar19;
    *(undefined2 *)(lVar15 + 2 + (longlong)iVar16 * 4) = param_6;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar11);
    }
  }
  else if (cVar9 == '\x02') {
    local_68 = 0x40;
    puVar11 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar11,"ResetClearanceFloodFillTask");
    }
    if (puVar11 == (undefined8 *)0x0) goto LAB_14501a889;
    iVar27 = *param_4;
    puVar11[1] = 0xffffffff;
    *puVar11 = hkaiUpdateNavDataTasks::ResetClearanceFloodFillTask::vftable;
    ppuVar12 = hkaiUpdateNavDataTasks::ResetClearanceFloodFillTask::vftable;
LAB_14501a86c:
    puVar11[2] = 1;
    puVar11[4] = ppuVar12;
    puVar11[6] = param_3;
    FUN_144b3d910(param_3);
    *(int *)(puVar11 + 7) = iVar27;
    goto LAB_14501a88b;
  }
  piVar22 = (int *)((longlong)*param_4 * 0x38 + *(longlong *)(param_3 + 0x80));
  FUN_144be3ae0(param_2,local_74,0,0x40);
  iVar27 = piVar22[4];
  if (((iVar27 != 0) || (piVar22[8] != 0)) || (piVar22[0xc] != 0)) {
    if ((int)(*(uint *)(local_58 + 0x2c) & 0x7fffffff) < iVar27) {
      FUN_14501e9a0(local_58 + 0x20,&PTR_vftable_14c6e47a0);
    }
    local_68 = 0x950;
    lVar15 = (*DAT_14c787670)(0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar15);
    }
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = FUN_14501a080(lVar15,*(undefined4 *)(param_3 + 0x18));
    }
    plVar23 = (longlong *)(lVar15 + 0x920);
    *(undefined4 *)(lVar15 + 0x940) = *(undefined4 *)(*(longlong *)(param_3 + 0x90) + 0x10c);
    local_68 = lVar15;
    if ((int)(*(uint *)(lVar15 + 0x92c) & 0x7fffffff) < iVar27) {
      FUN_14501ec60(plVar23,&PTR_vftable_14c6e47a0);
    }
    local_60 = *(longlong *)
                ((longlong)*piVar22 * 0x120 + *(longlong *)(*(longlong *)(param_3 + 0x78) + 0x38));
    if (*(char *)(local_60 + 0x30) != '\x01') {
      FUN_147e4bb26(local_60 + 0x20);
    }
    lVar10 = local_60;
    puVar24 = *(undefined4 **)(piVar22 + 2);
    puVar21 = puVar24 + piVar22[4];
    if (puVar24 != puVar21) {
      lVar13 = local_68 + 0x930;
      do {
        iVar27 = *(int *)(lVar15 + 0x928);
        uVar3 = *puVar24;
        iVar16 = iVar27 + 1;
        *(int *)(lVar15 + 0x928) = iVar16;
        puVar11 = (undefined8 *)((longlong)iVar27 * 0x30 + *plVar23);
        puVar14 = (undefined8 *)((longlong)iVar16 * 0x30 + *plVar23);
        if (puVar11 != puVar14) {
          puVar17 = puVar11 + 2;
          do {
            if (puVar17 + -2 != (undefined8 *)0x0) {
              *puVar17 = 0xffffffffffffffff;
              puVar17[-2] = 0;
              puVar17[-1] = 0;
              puVar17[1] = 0;
              *(undefined4 *)(puVar17 + 2) = 0;
              *(undefined1 *)((longlong)puVar17 + 0x14) = 0;
              puVar17[3] = 0;
            }
            puVar1 = puVar17 + 4;
            puVar17 = puVar17 + 6;
          } while (puVar1 != puVar14);
        }
        iVar27 = *(int *)(local_58 + 0x28) + 1;
        puVar26 = (undefined4 *)
                  ((longlong)*(int *)(local_58 + 0x28) * 0x58 + *(longlong *)(local_58 + 0x20));
        *(int *)(local_58 + 0x28) = iVar27;
        puVar25 = (undefined4 *)((longlong)iVar27 * 0x58 + *(longlong *)(local_58 + 0x20));
        if (puVar26 != puVar25) {
          puVar18 = puVar26 + 5;
          do {
            if (puVar18 != (undefined4 *)&DAT_00000014) {
              *(undefined1 *)(puVar18 + -4) = 0;
              *(undefined8 *)(puVar18 + -3) = 0;
              puVar18[-1] = 0;
              *(undefined8 *)(puVar18 + 1) = 0;
              puVar18[3] = 0;
              *(undefined8 *)(puVar18 + 5) = 0;
              puVar18[7] = 0;
              *(undefined8 *)(puVar18 + 9) = 0;
              puVar18[0xb] = 0;
              *(undefined8 *)(puVar18 + 0xd) = 0;
              puVar18[0xf] = 0;
              *puVar18 = 0x80000000;
              puVar18[4] = 0x80000000;
              puVar18[8] = 0x80000000;
              puVar18[0xc] = 0x80000000;
              puVar18[0x10] = 0x80000000;
            }
            puVar2 = puVar18 + 0x11;
            puVar18 = puVar18 + 0x16;
          } while (puVar2 != puVar25);
        }
        puVar11[5] = puVar26;
        *puVar11 = *(undefined8 *)(param_3 + 0x58);
        plVar20 = (longlong *)(*(longlong *)(param_3 + 0x60) + 0x18);
        local_60 = CONCAT44(local_60._4_4_,uVar3);
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar10,&local_60,puVar11,lVar13);
        FUN_144be90e0(0x9e8c9a8e);
        puVar24 = puVar24 + 1;
      } while (puVar24 != puVar21);
    }
    lVar15 = local_68;
    FUN_144be3b70(param_2,local_98,local_68,0x40);
    sVar19 = local_98[0];
    if ((param_5 != -1) && (local_98[0] != -1)) {
      iVar27 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar27);
      }
      iVar16 = *(int *)(param_2 + 0x330);
      lVar10 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar27;
      *(short *)(lVar10 + (longlong)iVar16 * 4) = param_5;
      *(short *)(lVar10 + 2 + (longlong)iVar16 * 4) = sVar19;
      sVar19 = local_98[0];
    }
    uVar8 = local_74[0];
    iVar27 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar27);
    }
    iVar16 = *(int *)(param_2 + 0x330);
    lVar10 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar27;
    *(short *)(lVar10 + (longlong)iVar16 * 4) = sVar19;
    *(undefined2 *)(lVar10 + 2 + (longlong)iVar16 * 4) = uVar8;
    FUN_144b3f230(lVar15);
  }
  local_88 = (char *)0x40;
  puVar11 = (undefined8 *)(*DAT_14c787670)(0,&local_88,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar11,"UpdateCutConfigTask");
  }
  if (puVar11 != (undefined8 *)0x0) {
    iVar27 = *param_4;
    puVar11[1] = 0xffffffff;
    *puVar11 = hkaiUpdateNavDataTasks::UpdateCutConfigTask::vftable;
    puVar11[4] = hkaiUpdateNavDataTasks::UpdateCutConfigTask::vftable;
    puVar11[2] = 1;
    puVar11[6] = param_3;
    FUN_144b3d910(param_3);
    *(int *)(puVar11 + 7) = iVar27;
  }
  plVar23 = (longlong *)(param_2 + 0x328);
  FUN_144be3b70(param_2,local_70,puVar11,0x40);
  uVar8 = local_70[0];
  iVar27 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
    FUN_141807bca(plVar23,&PTR_vftable_14c6e47a0,(longlong)iVar27);
  }
  iVar16 = *(int *)(param_2 + 0x330);
  lVar15 = *plVar23;
  *(int *)(param_2 + 0x330) = iVar27;
  local_58 = 0x40;
  *(undefined2 *)(lVar15 + (longlong)iVar16 * 4) = local_74[0];
  *(undefined2 *)(lVar15 + 2 + (longlong)iVar16 * 4) = uVar8;
  puVar14 = (undefined8 *)(*DAT_14c787670)(0,&local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar14,"ApplyCutsTask");
  }
  if (puVar14 != (undefined8 *)0x0) {
    iVar27 = *param_4;
    puVar14[1] = 0xffffffff;
    *puVar14 = hkaiUpdateNavDataTasks::ApplyCutsTask::vftable;
    puVar14[4] = hkaiUpdateNavDataTasks::ApplyCutsTask::vftable;
    puVar14[2] = 1;
    puVar14[6] = param_3;
    FUN_144b3d910();
    *(int *)(puVar14 + 7) = iVar27;
  }
  FUN_144be3b70(param_2,local_78,puVar14,0x40);
  sVar19 = local_78[0];
  iVar27 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
    FUN_141807bca(plVar23,&PTR_vftable_14c6e47a0,(longlong)iVar27);
  }
  sVar7 = local_78[0];
  iVar16 = *(int *)(param_2 + 0x330);
  lVar15 = *plVar23;
  *(int *)(param_2 + 0x330) = iVar27;
  *(undefined2 *)(lVar15 + (longlong)iVar16 * 4) = local_70[0];
  *(short *)(lVar15 + 2 + (longlong)iVar16 * 4) = sVar19;
  iVar27 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar27) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar27);
  }
  iVar16 = *(int *)(param_2 + 0x330);
  lVar15 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar27;
  *(undefined2 *)(lVar15 + (longlong)iVar16 * 4) = param_6;
  *(short *)(lVar15 + 2 + (longlong)iVar16 * 4) = sVar7;
  *param_1 = local_78[0];
  if (puVar14 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar14);
  }
  if (puVar11 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar11);
  }
LAB_14501aee9:
  lVar15 = local_50;
  if (local_50 != 0) {
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(local_50,&local_88);
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar15,&local_88);
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar15,&local_88);
    local_88 = "Et";
    pcStack_80 = "";
    FUN_144b3f260(lVar15,&local_88);
  }
  return param_1;
}



// FUNCTION 14501af90 FUN_14501af90 body=574 status=ok
// SIG undefined FUN_14501af90(void)

void FUN_14501af90(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong local_res8;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x58);
    uVar1 = *(uint *)(param_1 + 1);
    local_res8 = (ulonglong)uVar1;
    puVar4 = (undefined4 *)*param_1;
    uVar6 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      puVar3 = (undefined4 *)(lVar2 + 0x14);
      puVar5 = puVar4 + 5;
      puVar7 = puVar4;
      do {
        if (puVar3 + -5 != (undefined4 *)0x0) {
          puVar3[-5] = *puVar7;
          *(undefined1 *)(puVar3 + -4) = *(undefined1 *)(puVar5 + -4);
          *(undefined8 *)(puVar3 + -3) = 0;
          puVar3[-1] = 0;
          *puVar3 = 0x80000000;
          FUN_144fb6be0(puVar5 + -3,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar3 + -3) = *(undefined8 *)(puVar5 + -3);
          puVar3[-1] = puVar5[-1];
          *puVar3 = *puVar5;
          *(undefined8 *)(puVar5 + -3) = 0;
          *(undefined8 *)(puVar5 + -1) = 0;
          *(undefined8 *)(puVar3 + 1) = 0;
          puVar3[3] = 0;
          puVar3[4] = 0x80000000;
          FUN_143821c08(puVar5 + 1,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar3 + 1) = *(undefined8 *)(puVar5 + 1);
          puVar3[3] = puVar5[3];
          puVar3[4] = puVar5[4];
          *(undefined8 *)(puVar5 + 1) = 0;
          *(undefined8 *)(puVar5 + 3) = 0;
          *(undefined8 *)(puVar3 + 5) = 0;
          puVar3[7] = 0;
          puVar3[8] = 0x80000000;
          FUN_144fb6c50(puVar5 + 5,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar3 + 5) = *(undefined8 *)(puVar5 + 5);
          puVar3[7] = puVar5[7];
          puVar3[8] = puVar5[8];
          *(undefined8 *)(puVar5 + 5) = 0;
          *(undefined8 *)(puVar5 + 7) = 0;
          *(undefined8 *)(puVar3 + 9) = 0;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0x80000000;
          FUN_144fb6cc0(puVar5 + 9,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar3 + 9) = *(undefined8 *)(puVar5 + 9);
          puVar3[0xb] = puVar5[0xb];
          puVar3[0xc] = puVar5[0xc];
          *(undefined8 *)(puVar5 + 9) = 0;
          *(undefined8 *)(puVar5 + 0xb) = 0;
          *(undefined8 *)(puVar3 + 0xd) = 0;
          puVar3[0xf] = 0;
          puVar3[0x10] = 0x80000000;
          FUN_147e4a87c(puVar5 + 0xd,&PTR_vftable_14c6e47a0);
          *(undefined8 *)(puVar3 + 0xd) = *(undefined8 *)(puVar5 + 0xd);
          puVar3[0xf] = puVar5[0xf];
          puVar3[0x10] = puVar5[0x10];
          *(undefined8 *)(puVar5 + 0xd) = 0;
          *(undefined8 *)(puVar5 + 0xf) = 0;
        }
        puVar3 = puVar3 + 0x16;
        puVar7 = puVar7 + 0x16;
        puVar5 = puVar5 + 0x16;
        local_res8 = local_res8 - 1;
      } while (local_res8 != 0);
      do {
        FUN_144fb6d30(puVar4);
        puVar4 = puVar4 + 0x16;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *param_1 = lVar2;
    *(int *)((longlong)param_1 + 0xc) = (int)param_1[1];
  }
  return;
}



// FUNCTION 14501b1d0 FUN_14501b1d0 body=215 status=ok
// SIG undefined FUN_14501b1d0(void)

undefined8 * FUN_14501b1d0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14501a1c0(param_1 + 6);
  lVar1 = param_1[4];
  lVar2 = (longlong)*(int *)(param_1 + 5) * 0x58 + lVar1;
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x58;
    FUN_144fb6d30(lVar2);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0x58);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 14501b2b0 FUN_14501b2b0 body=178 status=ok
// SIG undefined FUN_14501b2b0(void)

void FUN_14501b2b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
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



// FUNCTION 14501b370 FUN_14501b370 body=188 status=ok
// SIG undefined FUN_14501b370(void)

undefined8 FUN_14501b370(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  FUN_14501e870(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar5 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_14501f350(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    puVar3 = (undefined8 *)((longlong)(int)param_1[1] * 0x10 + *param_1);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_2;
      puVar3[1] = *param_3;
      *param_3 = 0;
    }
    *(int *)(param_1 + 1) = iVar5;
    uVar2 = 1;
  }
  else {
    uVar2 = *param_3;
    lVar4 = (longlong)local_res8[0] * 0x10 + *param_1;
    *param_3 = 0;
    lVar1 = *(longlong *)(lVar4 + 8);
    *(undefined8 *)(lVar4 + 8) = uVar2;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14501b430 FUN_14501b430 body=135 status=ok
// SIG undefined FUN_14501b430(void)

void FUN_14501b430(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[4] * 0x10 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_144b3f230();
    }
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



// FUNCTION 14501b4c0 FUN_14501b4c0 body=391 status=ok
// SIG undefined FUN_14501b4c0(void)

undefined8 * FUN_14501b4c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  param_1[5] = 0;
  *param_1 = hkaiUpdateNavDataTasks::Context::vftable;
  param_1[6] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[0x1b] = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = param_1 + 0x1f;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0x80000001;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x80000000;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x80000000;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x80000000;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80000000;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x80000000;
  return param_1;
}



// FUNCTION 14501b650 FUN_14501b650 body=463 status=ok
// SIG undefined FUN_14501b650(void)

void FUN_14501b650(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_144faefd0(param_1 + 0x23);
  if (param_1[0x22] != 0) {
    FUN_144b3f230();
  }
  FUN_14501b430(param_1 + 0x1d);
  FUN_14501b2b0(param_1 + 0x19);
  if (param_1[0x18] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x17] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x16] != 0) {
    FUN_144b3f230();
  }
  FUN_144bf90d0(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    FUN_144b3f230();
  }
  FUN_144faecf0(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    FUN_144b3f230();
  }
  plVar1 = (longlong *)param_1[0xd];
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0xe) * 0x10;
  while (plVar2 != plVar1) {
    plVar2 = plVar2 + -0x10;
    (**(code **)(*plVar2 + 8))(plVar2,0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(PTR_vftable_14c6e4810 + 0x18))
              (&PTR_vftable_14c6e4810,param_1[0xd],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x74) & 0x7fffffff) << 7);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  if (param_1[0xc] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0xb] != 0) {
    FUN_144b3f230();
  }
  FUN_144bf90d0(param_1 + 8);
  plVar1 = (longlong *)param_1[6];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_144fad1a0(plVar1,0);
    }
    *(undefined4 *)(plVar1 + 3) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar1 + 0x1c)) && (plVar1[2] != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,plVar1[2],
                 (ulonglong)(*(uint *)((longlong)plVar1 + 0x1c) & 0x7fffffff) << 3);
    }
    plVar1[2] = 0;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = 0x80000000;
    (*DAT_14c787678)(0,plVar1,0);
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 14501b820 FUN_14501b820 body=87 status=ok
// SIG undefined FUN_14501b820(void)

undefined8 FUN_14501b820(undefined8 param_1,ulonglong param_2)

{
  FUN_14501b650();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 14501b880 FUN_14501b880 body=512 status=ok
// SIG undefined FUN_14501b880(void)

void FUN_14501b880(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort *puVar3;
  char *local_98;
  char *local_90;
  undefined1 local_88 [8];
  ushort *local_80;
  int local_74;
  undefined1 local_70 [104];
  
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
    local_98 = "TtAi";
    local_90 = "";
    FUN_144b3f370(lVar1,&local_98);
    local_98 = "TtNav Mesh Cutting";
    local_90 = "";
    FUN_144b3f370(lVar1,&local_98);
    local_98 = "TtApplyAsyncWorldUpdates";
    local_90 = "";
    FUN_144b3f370(lVar1,&local_98);
  }
  FUN_144fad8e0(local_88,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30));
  FUN_144be90e0(0x10b35015);
  puVar3 = local_80;
  while (puVar3 != (ushort *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_145310c10(puVar3,lVar2 + 0x118,*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x60),
                  *(undefined8 *)(lVar2 + 0x90));
    FUN_144fadae0(puVar3);
    FUN_144be90e0(0x54fc40da);
    local_74 = local_74 + -1;
    if (local_74 < 1) {
      puVar3 = (ushort *)FUN_144fad910(local_88,CONCAT71((uint7)(byte)(*local_80 >> 8),1));
    }
    else {
      puVar3 = (ushort *)((longlong)local_80 + (ulonglong)*local_80);
      local_80 = puVar3;
    }
  }
  FUN_144fad4f0(local_70,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x28));
  FUN_144fad1a0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30),local_70);
  FUN_144fad570(local_70);
  if (lVar1 != 0) {
    local_98 = "Et";
    local_90 = "";
    FUN_144b3f260(lVar1,&local_98);
    local_98 = "Et";
    local_90 = "";
    FUN_144b3f260(lVar1,&local_98);
    local_98 = "Et";
    local_90 = "";
    FUN_144b3f260(lVar1,&local_98);
  }
  return;
}



// FUNCTION 14501ba80 FUN_14501ba80 body=8 status=ok
// SIG undefined FUN_14501ba80(void)

char * FUN_14501ba80(void)

{
  return "ApplyAsyncWorldUpdates";
}



// FUNCTION 14501ba90 FUN_14501ba90 body=115 status=ok
// SIG undefined FUN_14501ba90(void)

undefined8 * FUN_14501ba90(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501bb10 FUN_14501bb10 body=366 status=ok
// SIG undefined FUN_14501bb10(void)

void FUN_14501bb10(longlong param_1)

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
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Cutting";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtUpdateOverlapManager";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144be90e0(0xf105d305);
  FUN_144fafe20(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x60),
                *(longlong *)(param_1 + 0x10) + 0x80);
  FUN_144be90e0(0xb095fefc);
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501bc80 FUN_14501bc80 body=8 status=ok
// SIG undefined FUN_14501bc80(void)

char * FUN_14501bc80(void)

{
  return "UpdateOverlapManager";
}



// FUNCTION 14501bc90 FUN_14501bc90 body=115 status=ok
// SIG undefined FUN_14501bc90(void)

undefined8 * FUN_14501bc90(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501bd10 FUN_14501bd10 body=439 status=ok
// SIG undefined FUN_14501bd10(void)

void FUN_14501bd10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char *local_28;
  char *local_20;
  undefined *local_18;
  undefined *local_10;
  
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
    local_28 = "TtAi";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    local_28 = "TtNav Mesh Cutting";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    local_28 = "TtUpdateCutConfig";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  FUN_144be90e0(0xd20c2e87);
  lVar4 = (longlong)*(int *)(param_1 + 0x18) * 0x80 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  local_18 = *(undefined **)(lVar4 + 0x20);
  lVar3 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x18) + 0x20) * 0x38;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80);
  local_28 = *(char **)(lVar3 + 0x18 + lVar2);
  local_20 = local_28 + (longlong)*(int *)(lVar3 + 0x20 + lVar2) * 4;
  local_10 = local_18 + (longlong)*(int *)(lVar4 + 0x28) * 0x58;
  FUN_14500bac0(*(longlong *)(lVar4 + 0x18),&local_18,&local_28,lVar4 + 0x30);
  FUN_144be90e0(0xad10c384);
  if (lVar1 != 0) {
    local_18 = &DAT_149981764;
    local_10 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_18);
    local_18 = &DAT_149981764;
    local_10 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_18);
    local_18 = &DAT_149981764;
    local_10 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501bed0 FUN_14501bed0 body=8 status=ok
// SIG undefined FUN_14501bed0(void)

char * FUN_14501bed0(void)

{
  return "UpdateCutConfig";
}



// FUNCTION 14501bee0 FUN_14501bee0 body=115 status=ok
// SIG undefined FUN_14501bee0(void)

undefined8 * FUN_14501bee0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501bf60 FUN_14501bf60 body=404 status=ok
// SIG undefined FUN_14501bf60(void)

void FUN_14501bf60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Cutting";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtApplyCuts";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x18) * 0x80 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  local_18 = *(char **)(lVar3 + 0x20);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x90);
  local_10 = local_18 + (longlong)*(int *)(lVar3 + 0x28) * 0x58;
  FUN_14500bc80(*(undefined8 *)
                 (*(longlong *)(lVar2 + 0x20) + (longlong)*(int *)(param_1 + 0x18) * 8),&local_18,
                lVar3 + 0x30,*(undefined4 *)(lVar2 + 0x10c));
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501c100 FUN_14501c100 body=8 status=ok
// SIG undefined FUN_14501c100(void)

char * FUN_14501c100(void)

{
  return "ApplyCuts";
}



// FUNCTION 14501c110 FUN_14501c110 body=56 status=ok
// SIG undefined FUN_14501c110(void)

void FUN_14501c110(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  FUN_144be1640(param_2,local_res10,&DAT_1499819e4,&DAT_149993518,local_res8);
  return;
}



// FUNCTION 14501c150 FUN_14501c150 body=115 status=ok
// SIG undefined FUN_14501c150(void)

undefined8 * FUN_14501c150(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501c1d0 FUN_14501c1d0 body=567 status=ok
// SIG undefined FUN_14501c1d0(void)

void FUN_14501c1d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_18;
  char *pcStack_10;
  
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
  if (lVar1 == 0) {
    local_18 = "TtResetClearanceAll";
    pcStack_10 = "";
  }
  else {
    local_18 = "TtAi";
    pcStack_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Cutting";
    pcStack_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtResetClearanceAll";
    pcStack_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144be90e0(0x4dc5a291);
  lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0x80 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  FUN_14500dda0(*(undefined8 *)(lVar2 + 0x18));
  lVar2 = *(longlong *)(lVar2 + 0x18);
  *(undefined4 *)(lVar2 + 0x100) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x104)) && (*(longlong *)(lVar2 + 0xf8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar2 + 0xf8),
               (ulonglong)(*(uint *)(lVar2 + 0x104) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  *(undefined4 *)(lVar2 + 0x104) = 0x80000000;
  FUN_144be90e0(0xb1fe7202);
  if (lVar1 != 0) {
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501c410 FUN_14501c410 body=8 status=ok
// SIG undefined FUN_14501c410(void)

char * FUN_14501c410(void)

{
  return "ResetClearanceAll";
}



// FUNCTION 14501c420 FUN_14501c420 body=56 status=ok
// SIG undefined FUN_14501c420(void)

void FUN_14501c420(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  FUN_144be1640(param_2,local_res10,&DAT_1499819e4,&DAT_149993518,local_res8);
  return;
}



// FUNCTION 14501c460 FUN_14501c460 body=115 status=ok
// SIG undefined FUN_14501c460(void)

undefined8 * FUN_14501c460(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501c4e0 FUN_14501c4e0 body=425 status=ok
// SIG undefined FUN_14501c4e0(void)

void FUN_14501c4e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [2];
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
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Cutting";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtResetClearanceMediator";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144be90e0(0x80326ecb);
  local_res8[0] = *(int *)(param_1 + 0x18);
  lVar2 = *(longlong *)
           ((longlong)local_res8[0] * 0x80 + 0x18 +
           *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68));
  local_18 = *(char **)(lVar2 + 0xf8);
  local_10 = local_18 + (longlong)*(int *)(lVar2 + 0x100) * 0x20;
  FUN_144fec5e0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x78),local_res8,&local_18);
  FUN_144be90e0(0x5a39c6b0);
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501c690 FUN_14501c690 body=8 status=ok
// SIG undefined FUN_14501c690(void)

char * FUN_14501c690(void)

{
  return "ResetClearanceMediator";
}



// FUNCTION 14501c6a0 FUN_14501c6a0 body=56 status=ok
// SIG undefined FUN_14501c6a0(void)

void FUN_14501c6a0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  FUN_144be1640(param_2,local_res10,&DAT_1499819e4,&DAT_149993518,local_res8);
  return;
}



// FUNCTION 14501c6e0 FUN_14501c6e0 body=115 status=ok
// SIG undefined FUN_14501c6e0(void)

undefined8 * FUN_14501c6e0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501c760 FUN_14501c760 body=814 status=ok
// SIG undefined FUN_14501c760(void)

void FUN_14501c760(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  int iVar11;
  longlong local_res8;
  char *local_48;
  undefined8 uStack_40;
  char *local_38;
  char *pcStack_30;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res8 = param_1;
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar4 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar7;
  }
  lVar4 = *(longlong *)(lVar7 + 0x3e0);
  local_48 = "TtAi";
  uStack_40 = &DAT_1499cd538;
  if (lVar4 != 0) {
    local_38 = "TtAi";
    pcStack_30 = "";
    FUN_144b3f370(lVar4,&local_38);
    local_48 = "TtNav Mesh Cutting";
    uStack_40 = "";
    local_38 = "TtNav Mesh Cutting";
    pcStack_30 = "";
    FUN_144b3f370(lVar4,&local_38);
    local_48 = "TtResetClearanceFloodFill";
    uStack_40 = "";
    local_38 = "TtResetClearanceFloodFill";
    pcStack_30 = "";
    FUN_144b3f370(lVar4,&local_38);
  }
  local_48 = (char *)0x0;
  uStack_40._0_4_ = 0;
  iVar11 = (int)uStack_40;
  uStack_40._0_4_ = 0;
  uStack_40._4_4_ = 0x80000000;
  lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0x38 +
          *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80);
  iVar6 = *(int *)(lVar7 + 0x20) + *(int *)(lVar7 + 0x10);
  if (0 < iVar6) {
    FUN_144c584b0(&local_48,&PTR_vftable_14c6e47c0,(longlong)iVar6);
    iVar11 = (int)uStack_40;
  }
  uStack_40._0_4_ = iVar11;
  iVar11 = (int)uStack_40;
  uVar2 = *(uint *)(lVar7 + 0x10);
  uVar10 = (ulonglong)uVar2;
  puVar9 = *(undefined4 **)(lVar7 + 8);
  iVar6 = (int)uStack_40 + uVar2;
  if ((int)(uStack_40._4_4_ & 0x7fffffff) < iVar6) {
    FUN_144c585a0(&local_48,&PTR_vftable_14c6e47c0,(longlong)iVar6);
  }
  pcVar8 = local_48 + (longlong)iVar11 * 4;
  if (0 < (int)uVar2) {
    do {
      if (pcVar8 != (char *)0x0) {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *(undefined4 *)pcVar8 = uVar3;
      }
      uVar10 = uVar10 - 1;
      pcVar8 = pcVar8 + 4;
    } while (uVar10 != 0);
  }
  uVar2 = *(uint *)(lVar7 + 0x20);
  uVar10 = (ulonglong)uVar2;
  puVar9 = *(undefined4 **)(lVar7 + 0x18);
  iVar11 = iVar6 + uVar2;
  uStack_40._0_4_ = iVar6;
  if ((int)(uStack_40._4_4_ & 0x7fffffff) < iVar11) {
    FUN_144c585a0(&local_48,&PTR_vftable_14c6e47c0,(longlong)iVar11);
  }
  pcVar5 = local_48;
  pcVar8 = local_48 + (longlong)iVar6 * 4;
  if (0 < (int)uVar2) {
    do {
      if (pcVar8 != (char *)0x0) {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *(undefined4 *)pcVar8 = uVar3;
      }
      uVar10 = uVar10 - 1;
      pcVar8 = pcVar8 + 4;
    } while (uVar10 != 0);
  }
  pcStack_30 = local_48 + (longlong)iVar11 * 4;
  plVar1 = (longlong *)(local_res8 + 0x10);
  local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(local_res8 + 0x18));
  local_38 = local_48;
  FUN_144fecac0(*(undefined8 *)(*plVar1 + 0x78),&local_res8,&local_38);
  FUN_144be90e0(0xf1ad2a37);
  if ((-1 < (int)uStack_40._4_4_) && (pcVar5 != (char *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,pcVar5,(ulonglong)(uStack_40._4_4_ & 0x7fffffff) << 2);
  }
  if (lVar4 != 0) {
    local_38 = "Et";
    pcStack_30 = "";
    FUN_144b3f260(lVar4,&local_38);
    local_38 = "Et";
    pcStack_30 = "";
    FUN_144b3f260(lVar4,&local_38);
    local_38 = "Et";
    pcStack_30 = "";
    FUN_144b3f260(lVar4,&local_38);
  }
  return;
}



// FUNCTION 14501ca90 FUN_14501ca90 body=8 status=ok
// SIG undefined FUN_14501ca90(void)

char * FUN_14501ca90(void)

{
  return "ResetClearanceFloodFill";
}



// FUNCTION 14501caa0 FUN_14501caa0 body=56 status=ok
// SIG undefined FUN_14501caa0(void)

void FUN_14501caa0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0x18);
  FUN_144be1640(param_2,local_res10,&DAT_1499819e4,&DAT_149993518,local_res8);
  return;
}



// FUNCTION 14501cae0 FUN_14501cae0 body=115 status=ok
// SIG undefined FUN_14501cae0(void)

undefined8 * FUN_14501cae0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501cb60 FUN_14501cb60 body=499 status=ok
// SIG undefined FUN_14501cb60(void)

void FUN_14501cb60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  
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
    local_38 = "TtAi";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TtNav Mesh Cutting";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TtMatchStreamingFaces";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  FUN_144be90e0(0x1ef604d4);
  lVar2 = *(longlong *)(param_1 + 0x10);
  local_28 = *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0x104);
  local_24 = *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0x100);
  local_20 = *(longlong *)(lVar2 + 0x90) + 0xc0;
  local_18 = *(undefined8 *)(*(longlong *)(lVar2 + 0x90) + 0xf8);
  local_10 = *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0x10c);
  FUN_14500c520(*(undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x18) * 0x80 + 0x18 + *(longlong *)(lVar2 + 0x68)),
                *(undefined8 *)
                 ((longlong)*(int *)(param_1 + 0x1c) * 0x80 + 0x18 + *(longlong *)(lVar2 + 0x68)),
                *(undefined8 *)
                 (*(longlong *)(*(longlong *)(lVar2 + 0x78) + 0x48) +
                 (longlong)*(int *)(param_1 + 0x20) * 0x18),&local_28);
  FUN_144be90e0(0x501514cb);
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return;
}



// FUNCTION 14501cd60 FUN_14501cd60 body=8 status=ok
// SIG undefined FUN_14501cd60(void)

char * FUN_14501cd60(void)

{
  return "MatchStreamingFaces";
}



// FUNCTION 14501cd70 FUN_14501cd70 body=66 status=ok
// SIG undefined FUN_14501cd70(void)

void FUN_14501cd70(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144be1640(param_2,local_res8,"{}: {}/{}",&DAT_149c20a10,param_1 + 0x20,param_1 + 0x18,
                param_1 + 0x1c);
  return;
}



// FUNCTION 14501cdc0 FUN_14501cdc0 body=115 status=ok
// SIG undefined FUN_14501cdc0(void)

undefined8 * FUN_14501cdc0(undefined8 *param_1,ulonglong param_2)

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
    FUN_144bda120(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14501ce40 FUN_14501ce40 body=776 status=ok
// SIG undefined FUN_14501ce40(void)

void FUN_14501ce40(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *pcVar6;
  uint uVar7;
  uint *puVar8;
  uint local_res8 [2];
  uint *local_48;
  int local_40;
  uint local_3c;
  char *local_38;
  char *pcStack_30;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar3 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar5;
  }
  lVar3 = *(longlong *)(lVar5 + 0x3e0);
  if (lVar3 == 0) {
    local_38 = "TtCompact";
    pcStack_30 = "";
  }
  else {
    local_38 = "TtAi";
    pcStack_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TtNav Mesh Cutting";
    pcStack_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TtCompact";
    pcStack_30 = "";
    FUN_144b3f370(lVar3,&local_38);
  }
  FUN_144be90e0(0xfc861394);
  lVar5 = *(longlong *)(param_1 + 0x10);
  uVar9 = 0;
  local_48 = (uint *)0x0;
  local_40 = 0;
  local_3c = 0x80000000;
  lVar4 = *(longlong *)(lVar5 + 0x90);
  if (*(float *)(lVar4 + 0x114) == 0.0) {
    FUN_144ff30b0(*(undefined8 *)(lVar5 + 0x78),&local_48);
  }
  else {
    FUN_144ff4650(local_res8,*(undefined8 *)(lVar5 + 0x78),lVar4 + 0x30,
                  *(undefined4 *)(lVar4 + 0x114),&local_48);
  }
  puVar1 = local_48 + local_40;
  for (puVar8 = local_48; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    local_res8[0] = *puVar8 & 0x3fffff;
    FUN_144fbaf90(*(longlong *)
                   ((ulonglong)(*puVar8 >> 0x16) * 0x80 +
                    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x18) + 0xb8,&local_38,
                  local_res8);
  }
  FUN_144be90e0(0x279c4b29);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
  iVar2 = *(int *)(lVar5 + 0x40);
  if (0 < iVar2) {
    do {
      lVar4 = *(longlong *)(uVar9 * 0x120 + *(longlong *)(lVar5 + 0x38));
      if ((lVar4 != 0) && (pcVar6 = (char *)FUN_144c3f050(lVar4,local_res8), *pcVar6 != '\0')) {
        FUN_144be90e0(0xb972cf2a);
        FUN_144c3f0e0(lVar4);
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar2);
  }
  FUN_144be90e0(0x1c7fb091);
  local_40 = 0;
  if ((-1 < (int)local_3c) && (local_48 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 2);
  }
  local_48 = (uint *)0x0;
  local_3c = 0x80000000;
  if (lVar3 != 0) {
    local_38 = "Et";
    pcStack_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    pcStack_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    pcStack_30 = "";
    FUN_144b3f260(lVar3,&local_38);
  }
  return;
}



// FUNCTION 14501d150 FUN_14501d150 body=8 status=ok
// SIG undefined FUN_14501d150(void)

char * FUN_14501d150(void)

{
  return "Compact";
}



// FUNCTION 14501d160 FUN_14501d160 body=115 status=ok
// SIG undefined FUN_14501d160(void)

undefined8 * FUN_14501d160(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501d1e0 FUN_14501d1e0 body=466 status=ok
// SIG undefined FUN_14501d1e0(void)

void FUN_14501d1e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_res8;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
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
  if (lVar1 != 0) {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Cutting";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtGetAndClearModifiedFaces";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  puVar5 = (undefined8 *)FUN_144fb9550(*(undefined8 *)(lVar4 + 0x90),&local_res8);
  uVar2 = *puVar5;
  *puVar5 = 0;
  lVar3 = *(longlong *)(lVar4 + 0xb0);
  *(undefined8 *)(lVar4 + 0xb0) = uVar2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  if (local_res8 != 0) {
    FUN_144b3f230();
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  puVar5 = (undefined8 *)FUN_144fb9a00(*(undefined8 *)(lVar4 + 0x90),&local_res8);
  uVar2 = *puVar5;
  *puVar5 = 0;
  lVar3 = *(longlong *)(lVar4 + 0xb8);
  *(undefined8 *)(lVar4 + 0xb8) = uVar2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  if (local_res8 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501d3c0 FUN_14501d3c0 body=8 status=ok
// SIG undefined FUN_14501d3c0(void)

char * FUN_14501d3c0(void)

{
  return "GetAndClearModifiedFaces";
}



// FUNCTION 14501d3d0 FUN_14501d3d0 body=115 status=ok
// SIG undefined FUN_14501d3d0(void)

undefined8 * FUN_14501d3d0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501d450 FUN_14501d450 body=396 status=ok
// SIG undefined FUN_14501d450(void)

void FUN_14501d450(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong local_res8;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
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
  if (lVar1 != 0) {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Cutting";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtGetAndClearModifiedAabbs";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  puVar5 = (undefined8 *)FUN_144fb9810(*(undefined8 *)(lVar4 + 0x90),&local_res8);
  uVar2 = *puVar5;
  *puVar5 = 0;
  lVar3 = *(longlong *)(lVar4 + 0xc0);
  *(undefined8 *)(lVar4 + 0xc0) = uVar2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  if (local_res8 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501d5e0 FUN_14501d5e0 body=8 status=ok
// SIG undefined FUN_14501d5e0(void)

char * FUN_14501d5e0(void)

{
  return "GetAndClearModifiedAabbs";
}



// FUNCTION 14501d5f0 FUN_14501d5f0 body=115 status=ok
// SIG undefined FUN_14501d5f0(void)

undefined8 * FUN_14501d5f0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501d670 FUN_14501d670 body=425 status=ok
// SIG undefined FUN_14501d670(void)

void FUN_14501d670(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_38;
  char *local_30;
  undefined1 local_28 [8];
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
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
    local_38 = (undefined **)&DAT_1499cd534;
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = (undefined **)0x149c1ffb0;
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = (undefined **)0x149c20980;
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  local_30 = *(char **)(param_1 + 0x10);
  if (((*(longlong *)((longlong)local_30 + 0xb8) != 0) ||
      (*(longlong *)((longlong)local_30 + 0xb0) != 0)) ||
     (*(longlong *)((longlong)local_30 + 0xc0) != 0)) {
    local_28[0] = *(undefined1 *)((longlong)local_30 + 0x1c);
    local_18 = *(undefined8 *)((longlong)local_30 + 0xb0);
    local_10 = *(undefined8 *)((longlong)local_30 + 0xc0);
    local_38 = `public:_virtual_void___cdecl_hkaiUpdateNavDataTasks::FireNavDataJustModifiedTask::process(hkTask::Input_const&___ptr64)___ptr64'
               ::__l5::ResponseInterface::vftable;
    local_20 = *(longlong *)((longlong)local_30 + 0xb8);
    FUN_144fae6c0(*(longlong *)((longlong)local_30 + 0x20) + 0x90,
                  *(longlong *)((longlong)local_30 + 0x20),local_28,&local_38);
  }
  if (lVar1 != 0) {
    local_38 = (undefined **)&DAT_149981764;
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
    local_38 = (undefined **)&DAT_149981764;
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
    local_38 = (undefined **)&DAT_149981764;
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return;
}



// FUNCTION 14501d820 FUN_14501d820 body=8 status=ok
// SIG undefined FUN_14501d820(void)

char * FUN_14501d820(void)

{
  return "FireNavDataJustModified";
}



// FUNCTION 14501d830 FUN_14501d830 body=101 status=ok
// SIG undefined FUN_14501d830(void)

undefined8 * FUN_14501d830(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 14501d8a0 FUN_14501d8a0 body=65 status=ok
// SIG undefined FUN_14501d8a0(void)

int * FUN_14501d8a0(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 14501d8f0 FUN_14501d8f0 body=259 status=ok
// SIG undefined FUN_14501d8f0(void)

void FUN_14501d8f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x900) + 200);
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar6 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar1 * 0x40) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar7 = *puVar6;
    *puVar6 = *puVar6 + 1;
    UNLOCK();
    uVar3 = (uint)uVar7;
    if ((uint)(uVar7 >> 0x20) <= (uint)uVar7) {
      iVar4 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar4 == 0) {
        return;
      }
      uVar7 = (ulonglong)local_res8[0];
      uVar3 = local_res8[0];
    }
    local_res8[0] = uVar3;
    iVar5 = (int)uVar7 + 1;
    lVar9 = (longlong)(int)uVar7;
    iVar4 = *(int *)(param_1 + 0x8f0);
    if (iVar5 < *(int *)(param_1 + 0x8f0)) {
      iVar4 = iVar5;
    }
    if (lVar9 < iVar4) {
      puVar8 = (undefined8 *)(lVar9 * 0x10 + 8 + lVar2);
      lVar9 = iVar4 - lVar9;
      do {
        FUN_145016290(*puVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0xb8),
                      *(longlong *)(param_1 + 0x900) + 0xe8);
        puVar8 = puVar8 + 2;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  } while( true );
}



// FUNCTION 14501da00 FUN_14501da00 body=110 status=ok
// SIG undefined FUN_14501da00(void)

undefined8 * FUN_14501da00(undefined8 *param_1,ulonglong param_2)

{
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x920);
  }
  return param_1;
}



// FUNCTION 14501da70 FUN_14501da70 body=547 status=ok
// SIG undefined FUN_14501da70(void)

void FUN_14501da70(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint local_res8 [2];
  undefined *local_58;
  undefined *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  char *local_30;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
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
  if (lVar2 != 0) {
    local_58 = &DAT_1499cd534;
    local_50 = &DAT_1499cd538;
    FUN_144b3f370(lVar2,&local_58);
    local_48 = "TtNav Mesh Cutting";
    local_40 = "";
    FUN_144b3f370(lVar2,&local_48);
    local_38 = "TtUpdateVolumeStaleness";
    local_30 = "";
    FUN_144b3f370(lVar2,&local_38);
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x900) + 200);
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar7 = (ulonglong *)
             ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x50)) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar8 = *puVar7;
    *puVar7 = *puVar7 + 1;
    UNLOCK();
    uVar3 = (uint)uVar8;
    if ((uint)(uVar8 >> 0x20) <= (uint)uVar8) {
      iVar4 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar4 == 0) {
        if (lVar2 != 0) {
          local_38 = "Et";
          local_30 = "";
          FUN_144b3f260(lVar2,&local_38);
          local_48 = "Et";
          local_40 = "";
          FUN_144b3f260(lVar2,&local_48);
          local_58 = &DAT_149981764;
          local_50 = &DAT_149981766;
          FUN_144b3f260(lVar2,&local_58);
        }
        return;
      }
      uVar8 = (ulonglong)local_res8[0];
      uVar3 = local_res8[0];
    }
    local_res8[0] = uVar3;
    iVar5 = (int)uVar8 + 1;
    lVar10 = (longlong)(int)uVar8;
    iVar4 = *(int *)(param_1 + 0x8f0);
    if (iVar5 < *(int *)(param_1 + 0x8f0)) {
      iVar4 = iVar5;
    }
    if (lVar10 < iVar4) {
      puVar9 = (undefined8 *)(lVar10 * 0x10 + 8 + lVar6);
      lVar10 = iVar4 - lVar10;
      do {
        FUN_145016290(*puVar9,*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0xb8),
                      *(longlong *)(param_1 + 0x900) + 0xe8);
        puVar9 = puVar9 + 2;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
  } while( true );
}



// FUNCTION 14501dca0 FUN_14501dca0 body=207 status=ok
// SIG undefined FUN_14501dca0(void)

undefined8 * FUN_14501dca0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0xd0);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask>::
             vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask>::
               vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar2;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,uVar2,uVar1,1);
  param_1[0x124] = param_2;
  *param_1 = hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask::vftable;
  param_1[4] = hkaiUpdateNavDataTasks::UpdateVolumeStalenessTask::vftable;
  FUN_144b3d910(param_2);
  FUN_144bdde80(param_1 + 0x125);
  return param_1;
}



// FUNCTION 14501dd70 FUN_14501dd70 body=8 status=ok
// SIG undefined FUN_14501dd70(void)

char * FUN_14501dd70(void)

{
  return "UpdateVolumeStaleness";
}



// FUNCTION 14501dd80 FUN_14501dd80 body=139 status=ok
// SIG undefined FUN_14501dd80(void)

undefined8 * FUN_14501dd80(undefined8 *param_1,uint param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x125));
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x950);
  }
  return param_1;
}



// FUNCTION 14501de10 FUN_14501de10 body=193 status=ok
// SIG undefined FUN_14501de10(void)

void FUN_14501de10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xe8);
  local_10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x108) * 0x10 + local_18;
  FUN_144faaf70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x110),&local_18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  plVar4 = (longlong *)(lVar1 + 0xe8);
  lVar2 = *plVar4;
  lVar3 = *(longlong *)(lVar1 + 0x108) * 0x10 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(lVar1 + 0xf0) = 0;
  if ((*plVar4 != lVar1 + 0xf8) && (-1 < *(int *)(lVar1 + 0xf4))) {
    FUN_14501f210(&PTR_vftable_14c6e47a0,plVar4,lVar1 + 0xf8,1);
  }
  *(undefined8 *)(lVar1 + 0x108) = 0;
  return;
}



// FUNCTION 14501dee0 FUN_14501dee0 body=8 status=ok
// SIG undefined FUN_14501dee0(void)

char * FUN_14501dee0(void)

{
  return "AddStalenessPathRequestsToManagerTask";
}



// FUNCTION 14501def0 FUN_14501def0 body=115 status=ok
// SIG undefined FUN_14501def0(void)

undefined8 * FUN_14501def0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501df70 FUN_14501df70 body=549 status=ok
// SIG undefined FUN_14501df70(void)

void FUN_14501df70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char *local_18;
  char *local_10;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar1 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar5;
  }
  lVar1 = *(longlong *)(lVar5 + 0x3e0);
  if (lVar1 != 0) {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Cutting";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtCommitUpdates";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x140);
  if (lVar5 != *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78)) {
    FUN_144ca51a0(lVar5);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if (*(longlong *)(lVar3 + 0x148) != *(longlong *)(lVar2 + 0x90)) {
    if (*(longlong *)(lVar2 + 0x90) != 0) {
      FUN_144b3d910();
    }
    lVar4 = *(longlong *)(lVar3 + 0x148);
    *(undefined8 *)(lVar3 + 0x148) = *(undefined8 *)(lVar2 + 0x90);
    if (lVar4 != 0) {
      FUN_144b3f230();
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  if (*(longlong *)(lVar3 + 0x180) != *(longlong *)(lVar2 + 0x60)) {
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      FUN_144b3d910();
    }
    lVar4 = *(longlong *)(lVar3 + 0x180);
    *(undefined8 *)(lVar3 + 0x180) = *(undefined8 *)(lVar2 + 0x60);
    if (lVar4 != 0) {
      FUN_144b3f230();
    }
  }
  FUN_144fb7860(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x148),lVar5);
  lVar5 = *(longlong *)(param_1 + 0x10);
  FUN_145016420(*(undefined8 *)(lVar5 + 0x20),lVar5 + 200,*(undefined8 *)(lVar5 + 0xb8),
                *(undefined8 *)(lVar5 + 0x110));
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 14501e1a0 FUN_14501e1a0 body=8 status=ok
// SIG undefined FUN_14501e1a0(void)

char * FUN_14501e1a0(void)

{
  return "CommitUpdates";
}



// FUNCTION 14501e1b0 FUN_14501e1b0 body=115 status=ok
// SIG undefined FUN_14501e1b0(void)

undefined8 * FUN_14501e1b0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501e230 FUN_14501e230 body=460 status=ok
// SIG undefined FUN_14501e230(void)

void FUN_14501e230(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8 [2];
  longlong local_res18;
  longlong local_res20;
  char *local_38;
  char *local_30;
  
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
    local_38 = "TtAi";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TtNav Mesh Cutting";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TthkaiUpdateNavDataTasks";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TtFireEvents";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  local_res8[0] = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xc0);
  if (local_res8[0] != 0) {
    FUN_144b3d910();
  }
  local_res18 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8);
  if (local_res18 != 0) {
    FUN_144b3d910();
  }
  local_res20 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0);
  if (local_res20 != 0) {
    FUN_144b3d910();
  }
  FUN_145311920(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),&local_res20,&local_res18,
                local_res8,*(longlong *)(param_1 + 0x10) + 0x118);
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return;
}



// FUNCTION 14501e400 FUN_14501e400 body=8 status=ok
// SIG undefined FUN_14501e400(void)

char * FUN_14501e400(void)

{
  return "FireEvents";
}



// FUNCTION 14501e410 FUN_14501e410 body=115 status=ok
// SIG undefined FUN_14501e410(void)

undefined8 * FUN_14501e410(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14501e490 FUN_14501e490 body=9 status=ok
// SIG undefined FUN_14501e490(void)

undefined8 FUN_14501e490(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78);
}



// FUNCTION 14501e4a0 FUN_14501e4a0 body=16 status=ok
// SIG undefined FUN_14501e4a0(void)

void FUN_14501e4a0(longlong param_1)

{
  FUN_144fab090(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x110));
  return;
}



// FUNCTION 14501e4b0 FUN_14501e4b0 body=16 status=ok
// SIG undefined FUN_14501e4b0(void)

void FUN_14501e4b0(longlong param_1)

{
  FUN_144faac50(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x110));
  return;
}



// FUNCTION 14501e4c0 FUN_14501e4c0 body=16 status=ok
// SIG undefined FUN_14501e4c0(void)

void FUN_14501e4c0(longlong param_1)

{
  FUN_144faad80(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x110));
  return;
}



// FUNCTION 14501e4d0 FUN_14501e4d0 body=16 status=ok
// SIG undefined FUN_14501e4d0(void)

void FUN_14501e4d0(longlong param_1)

{
  FUN_144fab200(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x110));
  return;
}



// FUNCTION 14501e4e0 FUN_14501e4e0 body=911 status=ok
// SIG undefined FUN_14501e4e0(void)

void FUN_14501e4e0(undefined8 *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  short sVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  short local_res18 [4];
  undefined8 *local_res20;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  
  lVar6 = *(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x78) + 0x38);
  lVar13 = *(longlong *)(lVar6 + 0xc0 + (longlong)param_2 * 0x120);
  local_58 = lVar13 + (longlong)*(int *)(lVar6 + 200 + (longlong)param_2 * 0x120) * 8;
  if (lVar13 != local_58) {
    do {
      iVar12 = *(int *)(lVar13 + 4);
      plVar7 = (longlong *)*param_1;
      lVar6 = *plVar7;
      lVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x78) + 0x48) + (longlong)iVar12 * 0x18);
      iVar4 = *(int *)(lVar8 + 0x18);
      lVar11 = (longlong)iVar4;
      iVar5 = *(int *)(lVar8 + 0x1c);
      if ((param_2 != iVar5) ||
         ((*(uint *)(*(longlong *)(lVar6 + 0x98) + (lVar11 >> 5) * 4) >> ((byte)iVar4 & 0x1f) & 1)
          == 0)) {
        local_68 = 0x50;
        puVar10 = (undefined8 *)(*DAT_14c787670)(0,&local_68,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(puVar10,"MatchStreamingFacesTask");
        }
        if (puVar10 != (undefined8 *)0x0) {
          lVar6 = *plVar7;
          *puVar10 = hkaiUpdateNavDataTasks::MatchStreamingFacesTask::vftable;
          puVar10[4] = hkaiUpdateNavDataTasks::MatchStreamingFacesTask::vftable;
          puVar10[1] = 0xffffffff;
          puVar10[2] = 1;
          puVar10[6] = lVar6;
          if (lVar6 != 0) {
            FUN_144b3d910();
          }
          *(int *)(puVar10 + 7) = iVar4;
          *(int *)((longlong)puVar10 + 0x3c) = iVar5;
          *(int *)(puVar10 + 8) = iVar12;
        }
        FUN_144be3b70(param_1[1],local_res18,puVar10,0x40);
        sVar9 = local_res18[0];
        local_60 = lVar11 * 2;
        sVar2 = *(short *)(local_60 + *(longlong *)param_1[2]);
        if ((sVar2 != -1) && (local_res18[0] != -1)) {
          lVar6 = param_1[1];
          iVar12 = *(int *)(lVar6 + 0x330) + 1;
          if ((int)(*(uint *)(lVar6 + 0x334) & 0x7fffffff) < iVar12) {
            local_res20 = param_1 + 2;
            FUN_141807bca((longlong *)(lVar6 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          iVar4 = *(int *)(lVar6 + 0x330);
          lVar8 = *(longlong *)(lVar6 + 0x328);
          *(int *)(lVar6 + 0x330) = iVar12;
          *(short *)(lVar8 + (longlong)iVar4 * 4) = sVar2;
          *(short *)(lVar8 + 2 + (longlong)iVar4 * 4) = sVar9;
        }
        sVar9 = local_res18[0];
        local_res20 = param_1 + 2;
        lVar8 = (longlong)iVar5 * 2;
        lVar6 = *(longlong *)param_1[2];
        sVar2 = *(short *)(lVar6 + lVar8);
        psVar1 = (short *)(lVar6 + local_60);
        local_60 = lVar8;
        if (((sVar2 != *psVar1) && (sVar2 != -1)) && (local_res18[0] != -1)) {
          lVar6 = param_1[1];
          iVar12 = *(int *)(lVar6 + 0x330) + 1;
          if ((int)(*(uint *)(lVar6 + 0x334) & 0x7fffffff) < iVar12) {
            FUN_141807bca((longlong *)(lVar6 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          iVar4 = *(int *)(lVar6 + 0x330);
          lVar8 = *(longlong *)(lVar6 + 0x328);
          *(int *)(lVar6 + 0x330) = iVar12;
          *(short *)(lVar8 + (longlong)iVar4 * 4) = sVar2;
          *(short *)(lVar8 + 2 + (longlong)iVar4 * 4) = sVar9;
        }
        sVar2 = local_res18[0];
        *(short *)(*(longlong *)*local_res20 + lVar11 * 2) = local_res18[0];
        *(short *)(local_60 + *(longlong *)*local_res20) = local_res18[0];
        lVar6 = param_1[1];
        iVar12 = *(int *)(lVar6 + 0x330) + 1;
        uVar3 = *(undefined2 *)param_1[3];
        if ((int)(*(uint *)(lVar6 + 0x334) & 0x7fffffff) < iVar12) {
          FUN_141807bca((longlong *)(lVar6 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar12);
        }
        iVar4 = *(int *)(lVar6 + 0x330);
        lVar8 = *(longlong *)(lVar6 + 0x328);
        *(int *)(lVar6 + 0x330) = iVar12;
        *(short *)(lVar8 + (longlong)iVar4 * 4) = sVar2;
        *(undefined2 *)(lVar8 + 2 + (longlong)iVar4 * 4) = uVar3;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_144b3f230(puVar10);
        }
      }
      lVar13 = lVar13 + 8;
    } while (lVar13 != local_58);
  }
  return;
}



// FUNCTION 14501e870 FUN_14501e870 body=302 status=ok
// SIG undefined FUN_14501e870(void)

uint * FUN_14501e870(longlong *param_1,uint *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = (longlong)iVar8 * 3;
  if ((iVar8 < 0) || (0xffffffff < uVar7)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar7)) {
    FUN_144b2eb80(param_1 + 2);
  }
  lVar1 = *param_3;
  lVar2 = param_1[2];
  iVar8 = (int)((ulonglong)lVar1 >> 0x20);
  uVar9 = iVar8 * -0x61c8864f;
  uVar10 = (int)lVar1 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
           (int)lVar1 * -0x4f000000;
  uVar9 = (uVar10 >> 2) + 0x9e3779b9 + uVar9 * 0x40 + uVar10 ^ uVar9;
  uVar7 = (ulonglong)(uVar9 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar2 + uVar7 * 8);
    if (iVar8 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      lVar2 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_14501e976:
      param_2[1] = (uint)((longlong)puVar6 - lVar2 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(longlong *)(*param_1 + (longlong)(int)puVar6[1] * 0x10) == lVar1))
    {
      *param_2 = puVar6[1];
      goto LAB_14501e976;
    }
    uVar7 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar2 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 14501e9a0 FUN_14501e9a0 body=695 status=ok
// SIG undefined FUN_14501e9a0(void)

ulonglong FUN_14501e9a0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar7) {
    uVar8 = uVar7;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x58;
  local_res20 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,
                                 *(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  puVar5 = (undefined4 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined4 *)(local_res20 + 0x14);
    puVar6 = puVar5 + 5;
    puVar10 = puVar5;
    local_res18 = (ulonglong)uVar1;
    do {
      if (puVar4 + -5 != (undefined4 *)0x0) {
        puVar4[-5] = *puVar10;
        *(undefined1 *)(puVar4 + -4) = *(undefined1 *)(puVar6 + -4);
        *(undefined8 *)(puVar4 + -3) = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        FUN_144fb6be0(puVar6 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar6 + -3);
        puVar4[-1] = puVar6[-1];
        *puVar4 = *puVar6;
        *(undefined8 *)(puVar6 + -3) = 0;
        *(undefined8 *)(puVar6 + -1) = 0;
        *(undefined8 *)(puVar4 + 1) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0x80000000;
        FUN_143821c08(puVar6 + 1,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar4 + 1) = *(undefined8 *)(puVar6 + 1);
        puVar4[3] = puVar6[3];
        puVar4[4] = puVar6[4];
        *(undefined8 *)(puVar6 + 1) = 0;
        *(undefined8 *)(puVar6 + 3) = 0;
        *(undefined8 *)(puVar4 + 5) = 0;
        puVar4[7] = 0;
        puVar4[8] = 0x80000000;
        FUN_144fb6c50(puVar6 + 5,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar4 + 5) = *(undefined8 *)(puVar6 + 5);
        puVar4[7] = puVar6[7];
        puVar4[8] = puVar6[8];
        *(undefined8 *)(puVar6 + 5) = 0;
        *(undefined8 *)(puVar6 + 7) = 0;
        *(undefined8 *)(puVar4 + 9) = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0x80000000;
        FUN_144fb6cc0(puVar6 + 9,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar4 + 9) = *(undefined8 *)(puVar6 + 9);
        puVar4[0xb] = puVar6[0xb];
        puVar4[0xc] = puVar6[0xc];
        *(undefined8 *)(puVar6 + 9) = 0;
        *(undefined8 *)(puVar6 + 0xb) = 0;
        *(undefined8 *)(puVar4 + 0xd) = 0;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0x80000000;
        FUN_147e4a87c(puVar6 + 0xd);
        *(undefined8 *)(puVar4 + 0xd) = *(undefined8 *)(puVar6 + 0xd);
        puVar4[0xf] = puVar6[0xf];
        puVar4[0x10] = puVar6[0x10];
        *(undefined8 *)(puVar6 + 0xd) = 0;
        *(undefined8 *)(puVar6 + 0xf) = 0;
      }
      puVar4 = puVar4 + 0x16;
      puVar10 = puVar10 + 0x16;
      puVar6 = puVar6 + 0x16;
      local_res18 = local_res18 - 1;
    } while (local_res18 != 0);
    do {
      FUN_144fb6d30(puVar5);
      puVar5 = puVar5 + 0x16;
      uVar7 = uVar7 - 1;
      param_2 = local_res10;
    } while (uVar7 != 0);
  }
  lVar3 = local_res20;
  uVar7 = uVar8 * 0x58 + 0x58;
  uVar9 = uVar8;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0x58;
    uVar9 = uVar8 + 1;
    if (uVar7 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x58;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      uVar7 = SUB168(ZEXT816(0x2e8ba2e8ba2e8ba3) * auVar2,0);
      uVar9 = uVar9 + uVar8 / 0x58;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar7;
}



// FUNCTION 14501ec60 FUN_14501ec60 body=287 status=ok
// SIG undefined FUN_14501ec60(void)

ulonglong FUN_14501ec60(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar9 * 0x30;
  puVar6 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
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
      }
      puVar7 = puVar7 + 6;
      puVar8 = puVar8 + 6;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x30 + 0x30;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x30;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 14501ed80 FUN_14501ed80 body=587 status=ok
// SIG undefined FUN_14501ed80(void)

void FUN_14501ed80(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar3 * 2;
  uVar5 = param_3;
  if (param_3 < uVar8) {
    uVar5 = uVar8;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x80,&local_res18);
  uVar1 = *(uint *)(param_1 + 1);
  local_res20 = (ulonglong)uVar1;
  plVar6 = (longlong *)*param_1;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    puVar9 = (undefined4 *)((longlong)plVar6 + 0x4c);
    puVar4 = (undefined4 *)(lVar2 + 0x4c);
    do {
      if ((undefined8 *)(puVar4 + -0x13) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar4 + -0x11) = 0xffffffff;
        *(undefined8 *)(puVar4 + -0xf) = 1;
        *(undefined ***)(puVar4 + -0x13) = hkaiUpdateNavDataTasks::SectionContext::vftable;
        *(undefined8 *)(puVar4 + -0xd) = *(undefined8 *)(puVar9 + -0xd);
        *(undefined8 *)(puVar4 + -0xb) = 0;
        puVar4[-9] = 0;
        puVar4[-8] = 0x80000000;
        FUN_14501af90(puVar9 + -0xb,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar4 + -0xb) = *(undefined8 *)(puVar9 + -0xb);
        puVar4[-9] = puVar9[-9];
        puVar4[-8] = puVar9[-8];
        *(undefined8 *)(puVar9 + -0xb) = 0;
        *(undefined8 *)(puVar9 + -9) = 0;
        *(undefined8 *)(puVar4 + -7) = 0;
        puVar4[-5] = 0;
        puVar4[-4] = 0x80000000;
        FUN_145005640(puVar9 + -7,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar4 + -7) = *(undefined8 *)(puVar9 + -7);
        puVar4[-5] = puVar9[-5];
        puVar4[-4] = puVar9[-4];
        *(undefined8 *)(puVar9 + -7) = 0;
        *(undefined8 *)(puVar9 + -5) = 0;
        *(undefined8 *)(puVar4 + -3) = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        FUN_1450056d0(puVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar9 + -3);
        puVar4[-1] = puVar9[-1];
        *puVar4 = *puVar9;
        *(undefined8 *)(puVar9 + -3) = 0;
        *(undefined8 *)(puVar9 + -1) = 0;
      }
      puVar4 = puVar4 + 0x20;
      puVar9 = puVar9 + 0x20;
      uVar8 = uVar8 - 1;
      uVar7 = local_res20;
    } while (uVar8 != 0);
    do {
      (**(code **)(*plVar6 + 8))(plVar6,0);
      plVar6 = plVar6 + 0x10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar8 = uVar5 * 0x80 + 0x80;
  uVar7 = uVar5;
  if (uVar8 <= local_res18) {
    local_res18 = local_res18 - 0x80;
    uVar7 = uVar5 + 1;
    if (uVar8 <= local_res18) {
      uVar7 = uVar7 + (local_res18 + uVar5 * -0x80 >> 7);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar3 << 7);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return;
}



// FUNCTION 14501efd0 FUN_14501efd0 body=233 status=ok
// SIG undefined FUN_14501efd0(void)

void FUN_14501efd0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar2 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar2) {
    uVar4 = uVar2;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 2,&local_res8);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) * 2);
  uVar1 = uVar4 * 2 + 2;
  uVar5 = uVar4;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 2;
    uVar5 = uVar4 + 1;
    if (uVar1 <= local_res8) {
      uVar5 = uVar5 + (local_res8 + uVar4 * -2 >> 1);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2);
  }
  *param_1 = uVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 14501f0c0 FUN_14501f0c0 body=326 status=ok
// SIG undefined FUN_14501f0c0(void)

void FUN_14501f0c0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong local_res8;
  
  uVar4 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar4) {
    uVar7 = uVar4;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  local_res8 = uVar7 * 0x10;
  puVar3 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar9 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar9[1] = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 2;
      puVar9 = puVar9 + 2;
    } while (uVar4 != 0);
    plVar6 = puVar2 + 1;
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar4 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = (longlong)puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 14501f210 FUN_14501f210 body=306 status=ok
// SIG undefined FUN_14501f210(void)

void FUN_14501f210(longlong *param_1,undefined8 *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  
  FUN_144be9620(param_2,param_4);
  if ((param_3 == (undefined4 *)0x0) || (uVar2 = *(uint *)(param_2 + 1), (int)param_4 <= (int)uVar2)
     ) {
    uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    if ((int)param_4 < (int)uVar2) {
      uVar2 = param_4;
    }
    uVar1 = *(uint *)(param_2 + 1);
    if ((int)uVar2 < (int)*(uint *)(param_2 + 1)) {
      uVar1 = uVar2;
    }
    puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,(longlong)(int)param_4 << 4);
    puVar5 = (undefined4 *)*param_2;
    iVar6 = 0;
    puVar4 = puVar3;
    if (0 < (int)uVar1) {
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar5;
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar5 + 2);
          *(undefined8 *)(puVar5 + 2) = 0;
        }
        iVar6 = iVar6 + 1;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
      } while (iVar6 < (int)uVar1);
    }
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 4);
    *param_2 = puVar3;
    uVar2 = 0x7fffffff;
    if (param_4 < 0x7fffffff) {
      uVar2 = param_4;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar2;
  }
  else {
    puVar5 = (undefined4 *)*param_2;
    if (0 < (int)uVar2) {
      uVar7 = (ulonglong)uVar2;
      puVar4 = param_3;
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar5;
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(puVar5 + 2);
          *(undefined8 *)(puVar5 + 2) = 0;
        }
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      puVar5 = (undefined4 *)*param_2;
    }
    (**(code **)(*param_1 + 0x18))
              (param_1,puVar5,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 4);
    *param_2 = param_3;
    *(uint *)((longlong)param_2 + 0xc) = param_4 | 0x80000000;
  }
  return;
}



// FUNCTION 14501f350 FUN_14501f350 body=335 status=ok
// SIG undefined FUN_14501f350(void)

void FUN_14501f350(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar4 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar4) {
    uVar7 = uVar4;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar4 = (ulonglong)uVar1;
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  puVar5 = puVar3;
  puVar9 = puVar2;
  if (0 < (int)uVar1) {
    do {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar9[1] = 0;
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 2;
      puVar9 = puVar9 + 2;
    } while (uVar4 != 0);
    plVar6 = puVar2 + 1;
    do {
      if (*plVar6 != 0) {
        FUN_144b3f230();
      }
      plVar6 = plVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar4 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar4 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar4 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  *param_1 = (longlong)puVar3;
  return;
}



// FUNCTION 14501f4a0 FUN_14501f4a0 body=9 status=ok
// SIG undefined FUN_14501f4a0(void)

void FUN_14501f4a0(longlong param_1)

{
  FUN_14501e410(param_1 + -0x20);
  return;
}



// FUNCTION 14501f4ac FUN_14501f4ac body=9 status=ok
// SIG undefined FUN_14501f4ac(void)

void FUN_14501f4ac(longlong param_1)

{
  FUN_14501e1b0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f4b8 FUN_14501f4b8 body=9 status=ok
// SIG undefined FUN_14501f4b8(void)

void FUN_14501f4b8(longlong param_1)

{
  FUN_14501a160(param_1 + -0x20);
  return;
}



// FUNCTION 14501f4c4 FUN_14501f4c4 body=9 status=ok
// SIG undefined FUN_14501f4c4(void)

void FUN_14501f4c4(longlong param_1)

{
  FUN_14501a010(param_1 + -0x20);
  return;
}



// FUNCTION 14501f4d0 FUN_14501f4d0 body=9 status=ok
// SIG undefined FUN_14501f4d0(void)

void FUN_14501f4d0(longlong param_1)

{
  FUN_14501d160(param_1 + -0x20);
  return;
}



// FUNCTION 14501f4dc FUN_14501f4dc body=9 status=ok
// SIG undefined FUN_14501f4dc(void)

void FUN_14501f4dc(longlong param_1)

{
  FUN_14501c150(param_1 + -0x20);
  return;
}



// FUNCTION 14501f4e8 FUN_14501f4e8 body=9 status=ok
// SIG undefined FUN_14501f4e8(void)

void FUN_14501f4e8(longlong param_1)

{
  FUN_14501ba90(param_1 + -0x20);
  return;
}



// FUNCTION 14501f4f4 FUN_14501f4f4 body=9 status=ok
// SIG undefined FUN_14501f4f4(void)

void FUN_14501f4f4(longlong param_1)

{
  FUN_14501bc90(param_1 + -0x20);
  return;
}



// FUNCTION 14501f500 FUN_14501f500 body=9 status=ok
// SIG undefined FUN_14501f500(void)

void FUN_14501f500(longlong param_1)

{
  FUN_14501bee0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f50c FUN_14501f50c body=9 status=ok
// SIG undefined FUN_14501f50c(void)

void FUN_14501f50c(longlong param_1)

{
  FUN_14501c460(param_1 + -0x20);
  return;
}



// FUNCTION 14501f518 FUN_14501f518 body=9 status=ok
// SIG undefined FUN_14501f518(void)

void FUN_14501f518(longlong param_1)

{
  FUN_14501c6e0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f524 FUN_14501f524 body=9 status=ok
// SIG undefined FUN_14501f524(void)

void FUN_14501f524(longlong param_1)

{
  FUN_14501cae0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f530 FUN_14501f530 body=9 status=ok
// SIG undefined FUN_14501f530(void)

void FUN_14501f530(longlong param_1)

{
  FUN_14501cdc0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f53c FUN_14501f53c body=9 status=ok
// SIG undefined FUN_14501f53c(void)

void FUN_14501f53c(longlong param_1)

{
  FUN_14501d3d0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f548 FUN_14501f548 body=9 status=ok
// SIG undefined FUN_14501f548(void)

void FUN_14501f548(longlong param_1)

{
  FUN_14501d5f0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f554 FUN_14501f554 body=9 status=ok
// SIG undefined FUN_14501f554(void)

void FUN_14501f554(longlong param_1)

{
  FUN_14501d830(param_1 + -0x20);
  return;
}



// FUNCTION 14501f560 FUN_14501f560 body=9 status=ok
// SIG undefined FUN_14501f560(void)

void FUN_14501f560(longlong param_1)

{
  FUN_14501dd80(param_1 + -0x20);
  return;
}



// FUNCTION 14501f56c FUN_14501f56c body=9 status=ok
// SIG undefined FUN_14501f56c(void)

void FUN_14501f56c(longlong param_1)

{
  FUN_14501da00(param_1 + -0x20);
  return;
}



// FUNCTION 14501f578 FUN_14501f578 body=9 status=ok
// SIG undefined FUN_14501f578(void)

void FUN_14501f578(longlong param_1)

{
  FUN_14501def0(param_1 + -0x20);
  return;
}



// FUNCTION 14501f590 FUN_14501f590 body=136 status=ok
// SIG undefined FUN_14501f590(void)

void FUN_14501f590(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x28),
               *(uint *)(param_1 + 0x34) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x18),
               *(uint *)(param_1 + 0x24) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return;
}



// FUNCTION 14501f620 FUN_14501f620 body=548 status=ok
// SIG undefined FUN_14501f620(void)

longlong *
FUN_14501f620(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             undefined1 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  char *local_38;
  char *local_30;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar1 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  lVar1 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar1 != 0) {
    local_38 = "TthkaiPathRequestsTasks::makeContext";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  local_res8 = 0x78;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"Context");
  }
  puVar5 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[1] = 0xffffffff;
    *puVar4 = hkaiPathRequestsTasks::Context::vftable;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    *(undefined4 *)(puVar4 + 10) = 0;
    puVar4[0xc] = 0;
    *(undefined4 *)(puVar4 + 0xd) = 0;
    puVar4[2] = 1;
    *(undefined4 *)((longlong)puVar4 + 0x54) = 0x80000000;
    *(undefined4 *)((longlong)puVar4 + 0x6c) = 0x80000000;
    puVar5 = puVar4;
  }
  *param_1 = (longlong)puVar5;
  *(undefined4 *)(puVar5 + 3) = param_7;
  *(longlong *)(*param_1 + 0x20) = param_2;
  lVar3 = *param_1;
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  lVar2 = *(longlong *)(lVar3 + 0x28);
  *(longlong *)(lVar3 + 0x28) = param_3;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  lVar3 = *param_1;
  if (param_5 != 0) {
    FUN_144b3d910(param_5);
  }
  lVar2 = *(longlong *)(lVar3 + 0x30);
  *(longlong *)(lVar3 + 0x30) = param_5;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(*param_1 + 0x38) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)(*param_1 + 0x3c) = *(undefined4 *)(param_4 + 0x4c);
  *(undefined4 *)(*param_1 + 0x40) = *(undefined4 *)(param_4 + 0x50);
  *(bool *)(*param_1 + 0x58) = (*(ulonglong *)(param_2 + 0xa0) & 0xfffffffffffffffc) != 0;
  *(undefined1 *)(*param_1 + 0x70) = param_6;
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return param_1;
}



// FUNCTION 14501f850 FUN_14501f850 body=1317 status=ok
// SIG undefined FUN_14501f850(void)

undefined2 * FUN_14501f850(undefined2 *param_1,longlong param_2,longlong param_3,short param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 uVar5;
  longlong lVar6;
  short sVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong local_res18;
  undefined2 local_res20 [4];
  short local_78 [2];
  undefined2 local_74 [2];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  char *local_58;
  char *local_50;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res18 = param_3;
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar3 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar8;
  }
  lVar3 = *(longlong *)(lVar8 + 0x3e0);
  if (lVar3 != 0) {
    local_58 = "TtAi";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtPathfinding";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TthkaiPathRequestsTasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtaddPathRequestTasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
  }
  local_60 = 0x40;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,&local_60,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar9,"PrePathRequestsTask");
  }
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = 0xffffffff;
    *puVar9 = hkaiPathRequestsTasks::PrePathRequestsTask::vftable;
    puVar9[4] = hkaiPathRequestsTasks::PrePathRequestsTask::vftable;
    puVar9[2] = 1;
    puVar9[6] = 0;
    puVar9[7] = param_3;
    if (param_3 != 0) {
      FUN_144b3d910(param_3);
    }
  }
  FUN_144be3b70(param_2,local_78,puVar9,0x40);
  sVar7 = local_78[0];
  if ((param_4 != -1) && (param_3 = local_res18, local_78[0] != -1)) {
    iVar12 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar12) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar12);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar8 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar12;
    *(short *)(lVar8 + (longlong)iVar2 * 4) = param_4;
    *(short *)(lVar8 + 2 + (longlong)iVar2 * 4) = sVar7;
    param_3 = local_res18;
  }
  local_68 = 0x950;
  lVar8 = (*DAT_14c787670)(0,&local_68,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar8,"ProcessPathRequestsTask");
  }
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_1450208a0(lVar8,param_3);
  }
  local_68 = lVar8;
  FUN_144be3b70(param_2,local_74,lVar8,0x40);
  uVar5 = local_74[0];
  plVar1 = (longlong *)(param_2 + 0x328);
  iVar12 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar12) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar12);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar12;
  local_58 = (char *)0x40;
  *(short *)(lVar4 + (longlong)iVar2 * 4) = local_78[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar2 * 4) = uVar5;
  puVar9[6] = lVar8;
  puVar10 = (undefined8 *)(*DAT_14c787670)(0,&local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar10,"IncrementRequestPrioritiesTask");
  }
  if (puVar10 != (undefined8 *)0x0) {
    puVar10[2] = 1;
    puVar10[1] = 0xffffffff;
    *puVar10 = hkaiPathRequestsTasks::IncrementRequestPrioritiesTask::vftable;
    puVar10[4] = hkaiPathRequestsTasks::IncrementRequestPrioritiesTask::vftable;
    puVar10[6] = local_res18;
    if (local_res18 != 0) {
      FUN_144b3d910(local_res18);
    }
  }
  FUN_144be3b70(param_2,local_res20,puVar10,0x40);
  uVar5 = local_res20[0];
  iVar12 = *(int *)(param_2 + 0x330) + 1;
  local_70 = CONCAT44(local_70._4_4_,iVar12);
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar12) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar12);
  }
  lVar6 = local_res18;
  iVar12 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(undefined4 *)(param_2 + 0x330) = (undefined4)local_70;
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar12 * 4) = uVar5;
  *(undefined2 *)(lVar4 + (longlong)iVar12 * 4) = local_74[0];
  if (*(char *)(local_res18 + 0x70) == '\0') {
    local_70 = 0x40;
    puVar11 = (undefined8 *)(*DAT_14c787670)(0,&local_70,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar11,"NotifyFinishedPathRequestsTask");
    }
    if (puVar11 != (undefined8 *)0x0) {
      puVar11[2] = 1;
      puVar11[1] = 0xffffffff;
      puVar11[6] = lVar6;
      *puVar11 = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      puVar11[4] = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      FUN_144b3d910(lVar6);
    }
    FUN_144be3b70(param_2,&local_res18,puVar11,0x40);
    iVar12 = *(int *)(param_2 + 0x330) + 1;
    uVar5 = (undefined2)local_res18;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar12) {
      FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar12);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar8 = *plVar1;
    *(int *)(param_2 + 0x330) = iVar12;
    *(undefined2 *)(lVar8 + (longlong)iVar2 * 4) = local_res20[0];
    *(undefined2 *)(lVar8 + 2 + (longlong)iVar2 * 4) = uVar5;
    *param_1 = (undefined2)local_res18;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar11);
    }
    lVar8 = local_68;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar10);
      lVar8 = local_68;
    }
  }
  else {
    *param_1 = local_res20[0];
    if (puVar10 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar10);
    }
  }
  if (lVar8 != 0) {
    FUN_144b3f230(lVar8);
  }
  FUN_144b3f230(puVar9);
  if (lVar3 != 0) {
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
  }
  return param_1;
}



// FUNCTION 14501fd80 FUN_14501fd80 body=867 status=ok
// SIG undefined FUN_14501fd80(void)

short * FUN_14501fd80(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_res8;
  longlong local_res10;
  longlong local_res18;
  short local_res20 [4];
  char *local_58;
  char *local_50;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  local_res18 = param_3;
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
    local_58 = "TtAi";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtPathfinding";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TthkaiPathRequestsTasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtaddFinalTasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
  }
  if (*(char *)(param_3 + 0x70) != '\0') {
    local_res8 = 0x40;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"NotifyFinishedPathRequestsTask");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[2] = 1;
      puVar5[1] = 0xffffffff;
      puVar5[6] = param_3;
      *puVar5 = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      puVar5[4] = hkaiPathRequestsTasks::NotifyFinishedPathRequestsTask::vftable;
      FUN_144b3d910(param_3);
    }
    FUN_144be3b70(param_2,local_res20,puVar5,0x40);
    sVar1 = local_res20[0];
    if ((param_4 != -1) && (local_res20[0] != -1)) {
      iVar6 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar6) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      iVar2 = *(int *)(param_2 + 0x330);
      lVar4 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar6;
      *(short *)(lVar4 + (longlong)iVar2 * 4) = param_4;
      *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = sVar1;
      param_2 = local_res10;
      param_3 = local_res18;
      sVar1 = local_res20[0];
    }
    param_4 = sVar1;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar5);
    }
  }
  local_res18 = 0x40;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"FireEventsTask");
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 1;
    puVar5[1] = 0xffffffff;
    puVar5[6] = param_3;
    *puVar5 = hkaiPathRequestsTasks::FireEventsTask::vftable;
    puVar5[4] = hkaiPathRequestsTasks::FireEventsTask::vftable;
    FUN_144b3d910(param_3);
  }
  FUN_144be3b70(param_2,param_1,puVar5,0x40);
  if ((param_4 != -1) && (sVar1 = *param_1, sVar1 != -1)) {
    iVar6 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar6) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar4 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar6;
    *(short *)(lVar4 + (longlong)iVar2 * 4) = param_4;
    *(short *)(lVar4 + 2 + (longlong)iVar2 * 4) = sVar1;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar5);
  }
  if (lVar3 != 0) {
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
    local_58 = "Et";
    local_50 = "";
    FUN_144b3f260(lVar3,&local_58);
  }
  return param_1;
}



// FUNCTION 1450200f0 FUN_1450200f0 body=365 status=ok
// SIG undefined FUN_1450200f0(void)

undefined8 * FUN_1450200f0(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)param_1[0xc];
  if (puVar2 + (longlong)*(int *)(param_1 + 0xd) * 8 != puVar2) {
    puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0xd) * 8 + 7;
    do {
      puVar3[-9] = 0;
      if ((-1 < (int)puVar3[-8]) && (*(longlong *)(puVar3 + -0xb) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -0xb),
                   (ulonglong)(puVar3[-8] & 0x7fffffff) << 2);
      }
      puVar1 = puVar3 + -0xf;
      *(undefined8 *)(puVar3 + -0xb) = 0;
      puVar3[-8] = 0x80000000;
      puVar3 = puVar3 + -8;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 5);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 145020260 FUN_145020260 body=399 status=ok
// SIG undefined FUN_145020260(void)

void FUN_145020260(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  char *local_18;
  char *local_10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar2 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar2 != 0) {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar2,&local_18);
    local_18 = "TtPathfinding";
    local_10 = "";
    FUN_144b3f370(lVar2,&local_18);
    local_18 = "TtPrePathRequests";
    local_10 = "";
    FUN_144b3f370(lVar2,&local_18);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  FUN_144fab330(*(undefined8 *)(lVar3 + 0x30),*(undefined4 *)(lVar3 + 0x38),
                *(undefined4 *)(lVar3 + 0x3c),*(undefined4 *)(lVar3 + 0x40),lVar3 + 0x48);
  lVar3 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x50);
  *(undefined4 *)(lVar3 + 0x910) = uVar1;
  FUN_144bf95c0(lVar3 + 0x30,*(undefined4 *)(lVar3 + 0x914),uVar1,1);
  if (lVar2 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar2,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar2,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar2,&local_18);
  }
  return;
}



// FUNCTION 1450203f0 FUN_1450203f0 body=8 status=ok
// SIG undefined FUN_1450203f0(void)

char * FUN_1450203f0(void)

{
  return "PrePathRequests";
}



// FUNCTION 145020400 FUN_145020400 body=115 status=ok
// SIG undefined FUN_145020400(void)

undefined8 * FUN_145020400(undefined8 *param_1,ulonglong param_2)

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
    FUN_144bda120(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 145020480 FUN_145020480 body=65 status=ok
// SIG undefined FUN_145020480(void)

int * FUN_145020480(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    puVar1 = *(undefined8 **)(param_1 + 0x4a0);
    param_2[1] = 1;
    iVar3 = (int)((ulonglong)*puVar1 >> 0x20);
    iVar2 = *(int *)(param_1 + 0x8f4);
    if (iVar3 < *(int *)(param_1 + 0x8f4)) {
      iVar2 = iVar3;
    }
    *param_2 = iVar2;
    return param_2;
  }
  *param_2 = *(int *)(param_1 + 0x8f4);
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 1450204d0 FUN_1450204d0 body=603 status=ok
// SIG undefined FUN_1450204d0(void)

void FUN_1450204d0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint local_res8 [2];
  char *local_b8;
  char *pcStack_b0;
  undefined1 local_a8 [24];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  int local_30;
  uint local_2c;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (undefined4 *)0x0;
  local_30 = 0;
  local_b8 = "TtProcessPathRequests";
  pcStack_b0 = "";
  local_84 = 0x80000000;
  local_74 = 0x80000000;
  local_4c = 0x80000000;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_3c = 0x80000000;
  local_2c = 0x80000000;
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar3 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar6;
  }
  if (*(longlong *)(lVar6 + 0x3e0) != 0) {
    FUN_144b3f370(*(longlong *)(lVar6 + 0x3e0),&local_b8);
  }
  iVar2 = *(int *)(param_2 + 0x18);
  do {
    puVar7 = (ulonglong *)
             ((longlong)*(int *)(((longlong)iVar2 + 1) * 0x40 + *(longlong *)(param_1 + 0x50)) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar9 = *puVar7;
    *puVar7 = *puVar7 + 1;
    UNLOCK();
    uVar8 = (uint)uVar9;
    if ((uint)(uVar9 >> 0x20) <= (uint)uVar9) {
      iVar5 = FUN_144bf98f0(param_1 + 0x10,iVar2 + 1,1,local_res8);
      if (iVar5 == 0) {
        FUN_145020de0(param_1 + -0x20,local_a8);
        puVar4 = local_38;
        if (local_38 + (longlong)local_30 * 8 != local_38) {
          puVar10 = local_38 + (longlong)local_30 * 8 + 7;
          do {
            puVar10[-9] = 0;
            if ((-1 < (int)puVar10[-8]) && (*(longlong *)(puVar10 + -0xb) != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,*(longlong *)(puVar10 + -0xb),
                         (ulonglong)(puVar10[-8] & 0x7fffffff) << 2);
            }
            puVar1 = puVar10 + -0xf;
            *(undefined8 *)(puVar10 + -0xb) = 0;
            puVar10[-8] = 0x80000000;
            puVar10 = puVar10 + -8;
          } while (puVar1 != puVar4);
        }
        local_30 = 0;
        if ((-1 < (int)local_2c) && (local_38 != (undefined4 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 5);
        }
        local_38 = (undefined4 *)0x0;
        local_2c = 0x80000000;
        FUN_14501f590(local_70);
        FUN_14501f590(local_a8);
        return;
      }
      uVar9 = (ulonglong)local_res8[0];
      uVar8 = local_res8[0];
    }
    local_res8[0] = uVar8;
    uVar8 = (uint)uVar9;
    iVar5 = *(int *)(param_1 + 0x8f0);
    if ((int)(uVar8 + 1) < *(int *)(param_1 + 0x8f0)) {
      iVar5 = uVar8 + 1;
    }
    while ((int)uVar8 < iVar5) {
      FUN_145020940(param_1 + -0x20,local_a8,uVar9 & 0xffffffff);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    }
  } while( true );
}



// FUNCTION 145020730 FUN_145020730 body=363 status=ok
// SIG undefined FUN_145020730(void)

void FUN_145020730(undefined8 param_1,undefined8 param_2)

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
  if (lVar1 == 0) {
    FUN_1450204d0(param_1,param_2);
  }
  else {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtPathfinding";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtProcessPathRequests";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    FUN_1450204d0(param_1,param_2);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 1450208a0 FUN_1450208a0 body=147 status=ok
// SIG undefined FUN_1450208a0(void)

undefined8 * FUN_1450208a0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *param_1 = hkaiPathRequestsTasks::ProcessPathRequestsTask::vftable;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[4] = hkaiPathRequestsTasks::ProcessPathRequestsTask::vftable;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar1;
  param_1[0x124] = param_2;
  FUN_144b3d910(param_2);
  FUN_144bdde80(param_1 + 0x125);
  return param_1;
}



// FUNCTION 145020940 FUN_145020940 body=1182 status=ok
// SIG undefined FUN_145020940(void)

void FUN_145020940(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_48;
  char *pcStack_40;
  longlong local_38;
  int local_30;
  uint local_2c;
  longlong local_28;
  int local_20;
  uint local_1c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar3;
  }
  lVar2 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar2 == 0) {
    local_48 = "TtProcessPathRequestsTask";
    pcStack_40 = "";
  }
  else {
    local_48 = &DAT_1499cd534;
    pcStack_40 = "";
    FUN_144b3f370(lVar2,&local_48);
    local_48 = "TtPathfinding";
    pcStack_40 = "";
    FUN_144b3f370(lVar2,&local_48);
    local_48 = "TtProcessPathRequestsTask";
    pcStack_40 = "";
    FUN_144b3f370(lVar2,&local_48);
  }
  FUN_144be90e0(0x8736022d);
  lVar3 = *(longlong *)(param_1 + 0x920);
  puVar5 = (undefined8 *)((longlong)param_3 * 0x10 + *(longlong *)(lVar3 + 0x48));
  iVar6 = *(int *)(puVar5 + 1);
  if (iVar6 == 0) {
    local_1c = 0x80000000;
    local_28 = 0;
    local_20 = 0;
    local_48 = (char *)0xffffffffffffffff;
    pcStack_40 = (char *)CONCAT44(pcStack_40._4_4_,0xffffffff);
    plVar4 = &local_28;
    if (*(char *)(lVar3 + 0x58) == '\0') {
      plVar4 = (longlong *)0x0;
    }
    FUN_144faa3f0(*puVar5,*(undefined8 *)(lVar3 + 0x28),0xffffffff,param_2,param_2 + 0x38,plVar4,
                  &local_48);
    if ((*(char *)(*(longlong *)(param_1 + 0x920) + 0x58) != '\0') && (local_20 != 0)) {
      iVar6 = *(int *)(param_2 + 0x78) + 1;
      if ((int)(*(uint *)(param_2 + 0x7c) & 0x7fffffff) < iVar6) {
        FUN_1450218b0(param_2 + 0x70,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      puVar5 = (undefined8 *)
               ((longlong)*(int *)(param_2 + 0x78) * 0x20 + *(longlong *)(param_2 + 0x70));
      *(int *)(param_2 + 0x78) = iVar6;
      plVar4 = puVar5 + 2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 1) = 0xffffffff;
        *plVar4 = 0;
        *(undefined4 *)(puVar5 + 3) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x80000000;
      }
      *(undefined4 *)puVar5 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar5 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar5 + 1) = pcStack_40._0_4_;
      if (&local_28 != plVar4) {
        FUN_144c2e9f0(plVar4,&PTR_vftable_14c6e47a0);
        FUN_144c2e9f0(&local_28,&PTR_vftable_14c6e47a0);
        lVar3 = *plVar4;
        *plVar4 = local_28;
        *(int *)(puVar5 + 3) = local_20;
        uVar1 = *(uint *)((longlong)puVar5 + 0x1c);
        *(uint *)((longlong)puVar5 + 0x1c) = local_1c;
        local_28 = lVar3;
        local_1c = uVar1;
      }
    }
    local_20 = 0;
    lVar3 = local_28;
    uVar1 = local_1c;
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        FUN_144faa5d0(*puVar5,*(undefined8 *)(lVar3 + 0x28));
      }
      else {
        FUN_144faa0c0();
      }
      goto LAB_145020d4c;
    }
    local_2c = 0x80000000;
    local_38 = 0;
    local_30 = 0;
    local_48 = (char *)0xffffffffffffffff;
    pcStack_40 = (char *)CONCAT44(pcStack_40._4_4_,0xffffffff);
    plVar4 = &local_38;
    if (*(char *)(lVar3 + 0x58) == '\0') {
      plVar4 = (longlong *)0x0;
    }
    FUN_144fa9ef0(*puVar5,*(undefined8 *)(lVar3 + 0x28),0xffffffff,param_2,param_2 + 0x38,plVar4,
                  &local_48);
    if ((*(char *)(*(longlong *)(param_1 + 0x920) + 0x58) != '\0') && (local_30 != 0)) {
      iVar6 = *(int *)(param_2 + 0x78) + 1;
      if ((int)(*(uint *)(param_2 + 0x7c) & 0x7fffffff) < iVar6) {
        FUN_1450218b0(param_2 + 0x70,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      puVar5 = (undefined8 *)
               ((longlong)*(int *)(param_2 + 0x78) * 0x20 + *(longlong *)(param_2 + 0x70));
      *(int *)(param_2 + 0x78) = iVar6;
      plVar4 = puVar5 + 2;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 1) = 0xffffffff;
        *plVar4 = 0;
        *(undefined4 *)(puVar5 + 3) = 0;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x80000000;
      }
      *(undefined4 *)puVar5 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar5 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar5 + 1) = pcStack_40._0_4_;
      if (&local_38 != plVar4) {
        FUN_144c2e9f0(plVar4,&PTR_vftable_14c6e47a0);
        FUN_144c2e9f0(&local_38,&PTR_vftable_14c6e47a0);
        lVar3 = *plVar4;
        *plVar4 = local_38;
        *(int *)(puVar5 + 3) = local_30;
        uVar1 = *(uint *)((longlong)puVar5 + 0x1c);
        *(uint *)((longlong)puVar5 + 0x1c) = local_2c;
        local_38 = lVar3;
        local_2c = uVar1;
      }
    }
    local_30 = 0;
    lVar3 = local_38;
    uVar1 = local_2c;
  }
  if ((-1 < (int)uVar1) && (lVar3 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar3,(ulonglong)(uVar1 & 0x7fffffff) << 2);
  }
LAB_145020d4c:
  FUN_144be90e0(0x8736022c);
  if (lVar2 != 0) {
    local_48 = &DAT_149981764;
    pcStack_40 = "";
    FUN_144b3f260(lVar2,&local_48);
    local_48 = &DAT_149981764;
    pcStack_40 = "";
    FUN_144b3f260(lVar2,&local_48);
    local_48 = &DAT_149981764;
    pcStack_40 = "";
    FUN_144b3f260(lVar2,&local_48);
  }
  return;
}



// FUNCTION 145020de0 FUN_145020de0 body=630 status=ok
// SIG undefined FUN_145020de0(void)

void FUN_145020de0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *local_18;
  char *pcStack_10;
  
  local_18 = "EtProcessPathRequests";
  pcStack_10 = "";
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar2 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar4;
  }
  if (*(longlong *)(lVar4 + 0x3e0) != 0) {
    FUN_144b3f260(*(longlong *)(lVar4 + 0x3e0),&local_18);
  }
  FUN_144be90e0(0xf0028ca6);
  *(undefined4 *)(param_2 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_2 + 0x24)) && (*(longlong *)(param_2 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_2 + 0x18),
               *(uint *)(param_2 + 0x24) & 0x7fffffff);
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0x80000000;
  FUN_144be90e0(0x2559a1df);
  *(undefined4 *)(param_2 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_2 + 0x34)) && (*(longlong *)(param_2 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_2 + 0x28),
               *(uint *)(param_2 + 0x34) & 0x7fffffff);
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0x80000000;
  FUN_144be90e0(0x2917ef66);
  *(undefined4 *)(param_2 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_2 + 0x5c)) && (*(longlong *)(param_2 + 0x50) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_2 + 0x50),
               *(uint *)(param_2 + 0x5c) & 0x7fffffff);
  }
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0x80000000;
  FUN_144be90e0(0x41be08da);
  *(undefined4 *)(param_2 + 0x68) = 0;
  if ((-1 < (int)*(uint *)(param_2 + 0x6c)) && (*(longlong *)(param_2 + 0x60) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_2 + 0x60),
               *(uint *)(param_2 + 0x6c) & 0x7fffffff);
  }
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0x80000000;
  FUN_144be90e0(0x66ed93bc);
  puVar3 = *(undefined4 **)(param_2 + 0x70);
  if (puVar3 + (longlong)*(int *)(param_2 + 0x78) * 8 != puVar3) {
    puVar5 = puVar3 + (longlong)*(int *)(param_2 + 0x78) * 8 + 7;
    do {
      puVar5[-9] = 0;
      if ((-1 < (int)puVar5[-8]) && (*(longlong *)(puVar5 + -0xb) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -0xb),
                   (ulonglong)(puVar5[-8] & 0x7fffffff) << 2);
      }
      puVar1 = puVar5 + -0xf;
      *(undefined8 *)(puVar5 + -0xb) = 0;
      puVar5[-8] = 0x80000000;
      puVar5 = puVar5 + -8;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_2 + 0x78) = 0;
  if ((-1 < (int)*(uint *)(param_2 + 0x7c)) && (*(longlong *)(param_2 + 0x70) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_2 + 0x70),
               (ulonglong)(*(uint *)(param_2 + 0x7c) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0x80000000;
  FUN_144be90e0(0x52312641);
  return;
}



// FUNCTION 145021060 FUN_145021060 body=8 status=ok
// SIG undefined FUN_145021060(void)

char * FUN_145021060(void)

{
  return "ProcessPathRequests";
}



// FUNCTION 145021070 FUN_145021070 body=139 status=ok
// SIG undefined FUN_145021070(void)

undefined8 * FUN_145021070(undefined8 *param_1,uint param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x125));
  if (param_1[0x124] != 0) {
    FUN_144b3f230();
  }
  FUN_14006c6ec(param_1 + 6);
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x950);
  }
  return param_1;
}



// FUNCTION 145021100 FUN_145021100 body=342 status=ok
// SIG undefined FUN_145021100(void)

void FUN_145021100(longlong param_1)

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
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtPathfinding";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtIncrementRequestPriorities";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144fab240(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x30),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 145021260 FUN_145021260 body=8 status=ok
// SIG undefined FUN_145021260(void)

char * FUN_145021260(void)

{
  return "IncrementRequestPriorities";
}



// FUNCTION 145021270 FUN_145021270 body=115 status=ok
// SIG undefined FUN_145021270(void)

undefined8 * FUN_145021270(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 1450212f0 FUN_1450212f0 body=517 status=ok
// SIG undefined FUN_1450212f0(void)

void FUN_1450212f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *local_18;
  char *pcStack_10;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar2 + 0xf0);
  if (lVar4 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar4;
  }
  lVar2 = *(longlong *)(lVar4 + 0x3e0);
  if (lVar2 == 0) {
    local_18 = "TtNotifyFinishedPathRequests";
    pcStack_10 = "";
  }
  else {
    local_18 = "TtAi";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
    local_18 = "TtPathfinding";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
    local_18 = "TtNotifyFinishedPathRequests";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x48);
  plVar6 = plVar5 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x50) * 2;
  for (; plVar5 != plVar6; plVar5 = plVar5 + 2) {
    iVar1 = (int)plVar5[1];
    if ((iVar1 != 0) &&
       (((iVar1 == 1 || (iVar1 != 2)) && (plVar3 = (longlong *)*plVar5, (char)plVar3[4] == '\x02')))
       ) {
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar3[5],plVar3[6]);
    }
  }
  if (lVar2 != 0) {
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar2,&local_18);
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar2,&local_18);
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar2,&local_18);
  }
  return;
}



// FUNCTION 145021500 FUN_145021500 body=8 status=ok
// SIG undefined FUN_145021500(void)

char * FUN_145021500(void)

{
  return "NotifyFinishedPathRequests";
}



// FUNCTION 145021510 FUN_145021510 body=115 status=ok
// SIG undefined FUN_145021510(void)

undefined8 * FUN_145021510(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145021590 FUN_145021590 body=642 status=ok
// SIG undefined FUN_145021590(void)

void FUN_145021590(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  char *local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
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
  if (lVar1 == 0) {
    local_38 = "TtFireEvents";
    uStack_30 = "";
  }
  else {
    local_38 = "TtAi";
    uStack_30 = &DAT_1499cd538;
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TtPathfinding";
    uStack_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TthkaiPathRequestsTasks";
    uStack_30 = "";
    FUN_144b3f370(lVar1,&local_38);
    local_38 = "TtFireEvents";
    uStack_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  plVar5 = *(longlong **)(lVar4 + 0x48);
  lVar2 = *(longlong *)(lVar4 + 0x20);
  plVar7 = plVar5 + (longlong)*(int *)(lVar4 + 0x50) * 2;
  for (; plVar5 != plVar7; plVar5 = plVar5 + 2) {
    if ((int)plVar5[1] == 0) {
      if (*(char *)(*plVar5 + 0x35) != '\0') {
        FUN_144faf320(lVar2 + 0x30,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
      }
    }
    else if (((int)plVar5[1] == 2) && (*(char *)(*plVar5 + 0x35) != '\0')) {
      FUN_144faf3d0(lVar2 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20));
    }
  }
  puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x60);
  puVar8 = puVar6 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x68) * 4;
  for (; puVar6 != puVar8; puVar6 = puVar6 + 4) {
    local_28 = puVar6[2];
    local_38 = (char *)*puVar6;
    uVar3 = (ulonglong)uStack_30 >> 0x20;
    uStack_30 = (char *)CONCAT44((int)uVar3,*(undefined4 *)(puVar6 + 1));
    local_20 = local_28 + (longlong)*(int *)(puVar6 + 3) * 4;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
    FUN_144faf480(lVar4 + 0xa0,lVar4,&local_38);
  }
  if (lVar1 != 0) {
    local_38 = "Et";
    uStack_30 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    uStack_30 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    uStack_30 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_38);
    local_38 = "Et";
    uStack_30 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_38);
  }
  return;
}



// FUNCTION 145021820 FUN_145021820 body=8 status=ok
// SIG undefined FUN_145021820(void)

char * FUN_145021820(void)

{
  return "FireEvents";
}


