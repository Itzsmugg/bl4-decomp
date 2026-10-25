// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147e57ce8 FUN_147e57ce8 body=140 status=ok
// SIG undefined FUN_147e57ce8(void)

longlong * FUN_147e57ce8(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_147e57e68(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e57d74 FUN_147e57d74 body=142 status=ok
// SIG undefined FUN_147e57d74(void)

longlong * FUN_147e57d74(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0x70)
      ;
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_147e57ece(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e57e02 FUN_147e57e02 body=102 status=ok
// SIG undefined FUN_147e57e02(void)

void FUN_147e57e02(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)(int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] << 3);
      iVar3 = (int)param_1[1];
      if (0 < iVar3) {
        lVar1 = *param_1;
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)(lVar1 + lVar4 * 8);
          lVar4 = lVar4 + 1;
        } while (iVar3 != (int)lVar4);
        iVar3 = (int)param_1[1];
      }
      *param_1 = lVar2;
      *(int *)((longlong)param_1 + 0xc) = iVar3;
    }
  }
  return;
}



// FUNCTION 147e57e68 FUN_147e57e68 body=102 status=ok
// SIG undefined FUN_147e57e68(void)

void FUN_147e57e68(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)(int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] << 3);
      iVar3 = (int)param_1[1];
      if (0 < iVar3) {
        lVar1 = *param_1;
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)(lVar1 + lVar4 * 8);
          lVar4 = lVar4 + 1;
        } while (iVar3 != (int)lVar4);
        iVar3 = (int)param_1[1];
      }
      *param_1 = lVar2;
      *(int *)((longlong)param_1 + 0xc) = iVar3;
    }
  }
  return;
}



// FUNCTION 147e57ece FUN_147e57ece body=114 status=ok
// SIG undefined FUN_147e57ece(void)

void FUN_147e57ece(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)(int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      lVar2 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] * 0x70);
      iVar4 = (int)param_1[1];
      if (0 < iVar4) {
        lVar1 = *param_1;
        lVar7 = 0;
        do {
          puVar5 = (undefined8 *)(lVar1 + lVar7);
          puVar6 = (undefined8 *)(lVar2 + lVar7);
          for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          lVar7 = lVar7 + 0x70;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        iVar4 = (int)param_1[1];
      }
      *param_1 = lVar2;
      *(int *)((longlong)param_1 + 0xc) = iVar4;
    }
  }
  return;
}



// FUNCTION 147e57f40 FUN_147e57f40 body=291 status=ok
// SIG undefined FUN_147e57f40(void)

void FUN_147e57f40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)(uVar2 * 2);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0x10,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar5 * 0x10 + 0x10;
  uVar4 = uVar5;
  if (uVar1 <= local_50) {
    uVar4 = uVar5 + 1;
    local_50 = local_50 - 0x10;
    if (uVar1 <= local_50) {
      uVar4 = uVar4 + (local_50 + uVar5 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e58064 FUN_147e58064 body=540 status=ok
// SIG undefined FUN_147e58064(void)

longlong FUN_147e58064(undefined1 (*param_1) [16],longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_80 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *(undefined8 *)param_1[6];
  uStack_a0 = *(undefined8 *)(param_1[6] + 8);
  local_98 = *(undefined8 *)param_1[7];
  uStack_90 = *(undefined8 *)(param_1[7] + 8);
  if (param_1[1] != (undefined1  [16])0x0 || *param_1 != (undefined1  [16])0x0) {
    uVar3 = *(longlong *)(param_1[1] + 8) >> 0x3f;
    lVar4 = 0;
    bVar6 = false;
    do {
      uVar5 = *(ulonglong *)(*param_1 + lVar4 * 8) ^ uVar3;
      uVar1 = (ulonglong)bVar6;
      uVar2 = uVar5 - uVar3;
      bVar6 = uVar5 < uVar3 || uVar2 < uVar1;
      local_80[lVar4] = uVar2 - uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    FUN_147e58614(&local_60,local_80,&local_a8);
    local_98 = local_50;
    uStack_90 = uStack_48;
    local_a8 = local_60;
    uStack_a0 = uStack_58;
  }
  if (param_1[3] != (undefined1  [16])0x0 || param_1[2] != (undefined1  [16])0x0) {
    uVar3 = *(longlong *)(param_1[3] + 8) >> 0x3f;
    lVar4 = 0;
    bVar6 = false;
    do {
      uVar5 = *(ulonglong *)(param_1[2] + lVar4 * 8) ^ uVar3;
      uVar1 = (ulonglong)bVar6;
      uVar2 = uVar5 - uVar3;
      bVar6 = uVar5 < uVar3 || uVar2 < uVar1;
      local_80[lVar4] = uVar2 - uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    FUN_147e58614(&local_60,local_80,&local_a8);
    local_98 = local_50;
    uStack_90 = uStack_48;
    local_a8 = local_60;
    uStack_a0 = uStack_58;
  }
  if (param_1[5] != (undefined1  [16])0x0 || param_1[4] != (undefined1  [16])0x0) {
    uVar3 = *(longlong *)(param_1[5] + 8) >> 0x3f;
    lVar4 = 0;
    bVar6 = false;
    do {
      uVar5 = *(ulonglong *)(param_1[4] + lVar4 * 8) ^ uVar3;
      uVar1 = (ulonglong)bVar6;
      uVar2 = uVar5 - uVar3;
      bVar6 = uVar5 < uVar3 || uVar2 < uVar1;
      local_80[lVar4] = uVar2 - uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    FUN_147e58614(&local_60,local_80,&local_a8);
    local_98 = local_50;
    uStack_90 = uStack_48;
    local_a8 = local_60;
    uStack_a0 = uStack_58;
  }
  FUN_147e58519(param_1,&local_a8,param_2);
  FUN_147e58519(param_1 + 2,&local_a8,param_2 + 0x20);
  FUN_147e58519(param_1 + 4,&local_a8,param_2 + 0x40);
  FUN_147e58a78(param_1 + 6,&local_a8,&local_60,local_80);
  *(undefined8 *)(param_2 + 0x70) = local_50;
  *(undefined8 *)(param_2 + 0x78) = uStack_48;
  *(undefined8 *)(param_2 + 0x60) = local_60;
  *(undefined8 *)(param_2 + 0x68) = uStack_58;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e58282 FUN_147e58282 body=88 status=ok
// SIG undefined FUN_147e58282(void)

void FUN_147e58282(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    FUN_143821c08(param_1,&PTR_vftable_14c6e47a0);
    FUN_143821c08(param_2,&PTR_vftable_14c6e47a0);
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  }
  return;
}



// FUNCTION 147e582da FUN_147e582da body=234 status=ok
// SIG undefined FUN_147e582da(void)

undefined8 * FUN_147e582da(longlong *param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar4 = param_3 & 0x3fffffff;
  if (param_3 >> 0x1e == 1) {
    lVar6 = param_1[2];
    lVar5 = (ulonglong)uVar4 * 0x60;
    lVar1 = *(longlong *)(lVar6 + 0x10 + lVar5);
    uVar2 = ((undefined8 *)(lVar6 + lVar5))[1];
    *param_2 = *(undefined8 *)(lVar6 + lVar5);
    param_2[1] = uVar2;
    param_2[2] = lVar1;
    param_2[3] = lVar1 >> 0x3f;
    lVar1 = *(longlong *)(lVar6 + 0x28 + lVar5);
    puVar7 = (undefined8 *)(lVar6 + 0x18 + lVar5);
    uVar2 = puVar7[1];
    param_2[4] = *puVar7;
    param_2[5] = uVar2;
    param_2[6] = lVar1;
    param_2[7] = lVar1 >> 0x3f;
    lVar1 = *(longlong *)(lVar6 + 0x40 + lVar5);
    puVar7 = (undefined8 *)(lVar6 + 0x30 + lVar5);
    uVar2 = puVar7[1];
    param_2[8] = *puVar7;
    param_2[9] = uVar2;
    param_2[10] = lVar1;
    param_2[0xb] = lVar1 >> 0x3f;
    puVar7 = (undefined8 *)(lVar6 + 0x48 + lVar5);
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    param_2[0xe] = *(undefined8 *)(lVar6 + 0x58 + lVar5);
    param_2[0xc] = uVar2;
    param_2[0xd] = uVar3;
    param_2[0xf] = 0;
  }
  else if (param_3 >> 0x1e == 2) {
    puVar7 = (undefined8 *)((ulonglong)uVar4 * 0x80 + param_1[4]);
    puVar8 = param_2;
    for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    FUN_147e583c4(param_2,(ulonglong)uVar4 * 0xc + *param_1);
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 1;
  }
  return param_2;
}



// FUNCTION 147e583c4 FUN_147e583c4 body=341 status=ok
// SIG undefined FUN_147e583c4(void)

void FUN_147e583c4(longlong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar1 = *param_2;
  *param_1 = (longlong)iVar1;
  lVar3 = (longlong)(iVar1 >> 0x1f);
  uVar4 = 0;
  auVar5 = pmovsxbq(in_XMM0,0x100);
  do {
    if ((longlong)(uVar4 ^ 0x8000000000000000) < -0x7ffffffffffffffd) {
      param_1[uVar4 + 1] = lVar3;
    }
    auVar6._8_4_ = (int)uVar4;
    auVar6._0_8_ = uVar4;
    auVar6._12_4_ = (int)(uVar4 >> 0x20);
    uVar2 = auVar5._8_8_;
    if ((longlong)((auVar6._8_8_ | uVar2) ^ 0x8000000000000000) < -0x7ffffffffffffffd) {
      param_1[uVar4 + 2] = lVar3;
    }
    uVar4 = uVar4 + 2;
  } while (uVar4 != 4);
  iVar1 = param_2[1];
  param_1[4] = (longlong)iVar1;
  lVar3 = (longlong)(iVar1 >> 0x1f);
  uVar4 = 0;
  do {
    if ((longlong)(uVar4 ^ 0x8000000000000000) < -0x7ffffffffffffffd) {
      param_1[uVar4 + 5] = lVar3;
    }
    auVar5._8_4_ = (int)uVar4;
    auVar5._0_8_ = uVar4;
    auVar5._12_4_ = (int)(uVar4 >> 0x20);
    if ((longlong)((auVar5._8_8_ | uVar2) ^ 0x8000000000000000) < -0x7ffffffffffffffd) {
      param_1[uVar4 + 6] = lVar3;
    }
    uVar4 = uVar4 + 2;
  } while (uVar4 != 4);
  iVar1 = param_2[2];
  param_1[8] = (longlong)iVar1;
  lVar3 = (longlong)(iVar1 >> 0x1f);
  uVar4 = 0;
  do {
    if ((longlong)(uVar4 ^ 0x8000000000000000) < -0x7ffffffffffffffd) {
      param_1[uVar4 + 9] = lVar3;
    }
    auVar7._8_4_ = (int)uVar4;
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = (int)(uVar4 >> 0x20);
    if ((longlong)((auVar7._8_8_ | uVar2) ^ 0x8000000000000000) < -0x7ffffffffffffffd) {
      param_1[uVar4 + 10] = lVar3;
    }
    uVar4 = uVar4 + 2;
  } while (uVar4 != 4);
  return;
}



// FUNCTION 147e58519 FUN_147e58519 body=250 status=ok
// SIG undefined FUN_147e58519(void)

void FUN_147e58519(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [32];
  longlong local_58 [4];
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar3 = lVar4 >> 0x3f;
  lVar5 = 0;
  bVar7 = false;
  do {
    uVar6 = *(ulonglong *)(param_1 + lVar5 * 8) ^ uVar3;
    uVar1 = (ulonglong)bVar7;
    uVar2 = uVar6 - uVar3;
    bVar7 = uVar6 < uVar3 || uVar2 < uVar1;
    local_58[lVar5] = uVar2 - uVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  FUN_147e58a78(local_58,param_2,&local_98,local_78);
  if (lVar4 < 0) {
    local_38[2] = local_88;
    local_38[3] = uStack_80;
    local_38[0] = local_98;
    local_38[1] = uStack_90;
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar3 = (ulonglong)bVar7;
      uVar1 = -local_38[lVar4];
      bVar7 = local_38[lVar4] != 0 || uVar1 < uVar3;
      (&local_b8)[lVar4] = uVar1 - uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
  }
  else {
    local_a8 = local_88;
    uStack_a0 = uStack_80;
    local_b8 = local_98;
    uStack_b0 = uStack_90;
  }
  param_3[4] = (undefined4)local_a8;
  param_3[5] = local_a8._4_4_;
  param_3[6] = (undefined4)uStack_a0;
  param_3[7] = uStack_a0._4_4_;
  *param_3 = (undefined4)local_b8;
  param_3[1] = local_b8._4_4_;
  param_3[2] = (undefined4)uStack_b0;
  param_3[3] = uStack_b0._4_4_;
  if ((local_18 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e58614 FUN_147e58614 body=639 status=ok
// SIG undefined FUN_147e58614(void)

ulonglong * FUN_147e58614(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8 [4];
  ulonglong local_88 [4];
  ulonglong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  local_b8 = param_2[2];
  uStack_b0 = param_2[3];
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  param_1[2] = param_3[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  iVar5 = FUN_147e58894(&local_c8);
  FUN_147e588f4(&local_c8,iVar5);
  iVar6 = FUN_147e58894(param_1);
  FUN_147e588f4(param_1,iVar6);
  auVar16 = pmovsxbq(unaff_XMM6,0x101);
  while( true ) {
    local_68[2] = param_1[2];
    local_68[3] = param_1[3];
    local_68[0] = *param_1;
    local_68[1] = param_1[1];
    local_88[2] = local_b8;
    local_88[3] = uStack_b0;
    local_88[0] = local_c8;
    local_88[1] = uStack_c0;
    lVar8 = 0;
    auVar14 = auVar16;
    do {
      auVar15._0_8_ = -(ulonglong)(local_88[lVar8 + 4] == local_88[lVar8]);
      auVar15._8_8_ = -(ulonglong)(local_88[lVar8 + 5] == local_88[lVar8 + 1]);
      auVar14 = auVar14 & auVar15;
      lVar8 = lVar8 + 2;
    } while (lVar8 != 4);
    if ((auVar16 & ~auVar14) == (undefined1  [16])0x0) break;
    local_88[2] = param_1[2];
    local_88[3] = param_1[3];
    local_88[0] = *param_1;
    local_88[1] = param_1[1];
    local_68[2] = local_b8;
    local_68[3] = uStack_b0;
    local_68[0] = local_c8;
    local_68[1] = uStack_c0;
    bVar4 = 1;
    lVar8 = 3;
    bVar13 = false;
    do {
      bVar9 = bVar13;
      bVar11 = (bool)(local_88[lVar8] < local_88[lVar8 + 4] & bVar4);
      bVar4 = bVar4 & local_88[lVar8] == local_88[lVar8 + 4];
      bVar12 = lVar8 != 0;
      lVar8 = lVar8 + -1;
      bVar13 = (bool)(bVar9 | bVar11);
    } while (bVar12);
    if (bVar9 || bVar11) {
      local_88[2] = param_1[2];
      local_88[3] = param_1[3];
      local_88[0] = *param_1;
      local_88[1] = param_1[1];
      local_a8[2] = local_b8;
      local_a8[3] = uStack_b0;
      local_a8[0] = local_c8;
      local_a8[1] = uStack_c0;
      lVar8 = 0;
      bVar13 = false;
      do {
        uVar1 = (ulonglong)bVar13;
        uVar2 = local_a8[lVar8] - local_88[lVar8];
        bVar13 = local_a8[lVar8] < local_88[lVar8] || uVar2 < uVar1;
        local_88[lVar8 + 4] = uVar2 - uVar1;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      local_b8 = local_68[2];
      uStack_b0 = local_68[3];
      local_c8 = local_68[0];
      uStack_c0 = local_68[1];
      uVar7 = FUN_147e58894(&local_c8);
      puVar10 = &local_c8;
    }
    else {
      local_88[2] = local_b8;
      local_88[3] = uStack_b0;
      local_88[0] = local_c8;
      local_88[1] = uStack_c0;
      local_a8[2] = param_1[2];
      local_a8[3] = param_1[3];
      local_a8[0] = *param_1;
      local_a8[1] = param_1[1];
      lVar8 = 0;
      bVar13 = false;
      do {
        uVar1 = (ulonglong)bVar13;
        uVar2 = local_a8[lVar8] - local_88[lVar8];
        bVar13 = local_a8[lVar8] < local_88[lVar8] || uVar2 < uVar1;
        local_88[lVar8 + 4] = uVar2 - uVar1;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      param_1[2] = local_68[2];
      param_1[3] = local_68[3];
      *param_1 = local_68[0];
      param_1[1] = local_68[1];
      uVar7 = FUN_147e58894(param_1);
      puVar10 = param_1;
    }
    FUN_147e588f4(puVar10,uVar7);
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  FUN_147e589b3(param_1,iVar6);
  param_1[3] = param_1[3] & 0x3ffff;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e58894 FUN_147e58894 body=96 status=ok
// SIG undefined FUN_147e58894(void)

int FUN_147e58894(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = (*(code *)PTR_FUN_14c6da350)(~(uint)lVar1 & (uint)lVar1 - 1);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar4 = (*(code *)PTR_FUN_14c6da350)(~uVar2 & uVar2 - 1);
      iVar4 = iVar4 + 0x20;
      if (iVar3 < 0x20) {
        iVar4 = iVar3;
      }
      return iVar4 - (int)lVar5;
    }
    lVar5 = lVar5 + -0x40;
    param_1 = param_1 + 1;
  } while (lVar5 != -0x100);
  return 0x100;
}



// FUNCTION 147e588f4 FUN_147e588f4 body=191 status=ok
// SIG undefined FUN_147e588f4(void)

void FUN_147e588f4(ulonglong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (3 < (int)uVar4) goto LAB_147e58966;
    uVar2 = (ulonglong)(4 - uVar4);
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(int)uVar4];
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    if ((int)uVar4 < 3) {
      uVar2 = (ulonglong)(3 - uVar4);
      puVar3 = param_1;
      do {
        *puVar3 = puVar3[(longlong)(int)uVar4 + 1] << (0x40U - sVar1 & 0x3f) |
                  puVar3[(int)uVar4] >> sVar1;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    param_1[(int)(3 - uVar4)] = param_1[3] >> sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e58966:
  memset(param_1 + (longlong)(int)-uVar4 + 4,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e589b3 FUN_147e589b3 body=197 status=ok
// SIG undefined FUN_147e589b3(void)

void FUN_147e589b3(longlong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (3 < (int)uVar4) goto LAB_147e58a5e;
    lVar3 = 4;
    do {
      param_1[lVar3 + -1] = param_1[(lVar3 + -1) - (longlong)(int)uVar4];
      lVar3 = lVar3 + -1;
    } while ((int)uVar4 < lVar3);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    uVar2 = (ulonglong)uVar4;
    if ((int)uVar4 < 3) {
      uVar2 = (ulonglong)(int)uVar4;
      lVar3 = 3;
      do {
        param_1[lVar3] =
             (ulonglong)param_1[(lVar3 + -1) - uVar2] >> (0x40U - sVar1 & 0x3f) |
             param_1[lVar3 - uVar2] << sVar1;
        lVar3 = lVar3 + -1;
      } while ((longlong)uVar2 < lVar3);
    }
    param_1[uVar2] = *param_1 << sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e58a5e:
  memset(param_1,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e58a78 FUN_147e58a78 body=1605 status=ok
// SIG undefined FUN_147e58a78(void)

void FUN_147e58a78(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 *local_100;
  uint local_f8;
  uint local_f4;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98 [10];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  bVar9 = 1;
  lVar16 = 3;
  bVar36 = false;
  do {
    bVar10 = bVar36;
    bVar11 = (bool)((ulonglong)param_1[lVar16] < (ulonglong)param_2[lVar16] & bVar9);
    bVar9 = bVar9 & param_1[lVar16] == param_2[lVar16];
    bVar35 = lVar16 != 0;
    lVar16 = lVar16 + -1;
    bVar36 = (bool)(bVar10 | bVar11);
  } while (bVar35);
  if (bVar10 || bVar11) {
    lVar16 = 0;
    do {
      param_4[lVar16] = param_1[lVar16];
      lVar16 = lVar16 + 1;
    } while (lVar16 != 4);
    goto LAB_147e58aef;
  }
  lVar32 = 0x500000000;
  local_f0 = 0;
  lVar16 = 0;
  do {
    lVar30 = lVar16;
    uVar28 = local_f0;
    lVar32 = lVar32 + -0x100000000;
    lVar16 = lVar30 + -8;
    local_f0 = uVar28 - 1;
  } while (param_1[uVar28 + 3] == 0);
  local_110 = uVar28 + 3;
  lVar25 = 0;
  uVar24 = local_f0 & 0xffffffff;
  lVar13 = 0;
  lVar14 = 0;
  do {
    lVar22 = lVar14;
    lVar21 = lVar13;
    lVar25 = lVar25 + 0x100000000;
    uVar23 = (int)uVar24 + 1;
    uVar24 = (ulonglong)uVar23;
    lVar13 = lVar21 + -1;
    lVar14 = lVar22 + -8;
  } while (param_2[lVar21 + 3] == 0);
  local_100 = param_4;
  if (lVar21 + -1 == -4) {
    param_4[2] = 0;
    param_4[3] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    local_130 = 1;
    local_138 = 1;
    FUN_147e590c3(param_1,*param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  local_118 = uVar28 + 4;
  local_120 = lVar21 + 4;
  local_108 = lVar21 + 3;
  local_e0 = param_3;
  local_f8 = FUN_147e5105f();
  local_e8 = (ulonglong)local_f8;
  iVar31 = (int)local_118;
  if (local_f8 == 0) {
    if (0 < iVar31) {
      memcpy(local_98 + 4,param_1,lVar30 + 0x20U & 0x3fffffff8);
      iVar31 = (int)local_118;
    }
    *(undefined8 *)((longlong)local_98 + (lVar32 >> 0x1d) + 0x20) = 0;
    if (0 < (longlong)local_120) {
      memcpy(local_98,param_2,lVar22 + 0x20U & 0x7fffffff8);
      iVar31 = (int)local_118;
    }
  }
  else {
    bVar9 = (byte)local_f8;
    bVar15 = 0x40 - bVar9;
    if (1 < (longlong)local_120) {
      uVar24 = local_120 & 0xffffffff;
      uVar28 = local_108 & 0xffffffff;
      do {
        local_98[uVar28] =
             (ulonglong)param_2[uVar28 - 1 & 0xffffffff] >> (bVar15 & 0x3f) |
             param_2[uVar28] << (bVar9 & 0x3f);
        uVar26 = (int)uVar24 - 1;
        uVar24 = (ulonglong)uVar26;
        uVar28 = uVar28 - 1;
      } while (1 < (int)uVar26);
    }
    local_98[0] = *param_2 << (bVar9 & 0x3f);
    *(ulonglong *)((longlong)local_98 + (lVar32 >> 0x1d) + 0x20) =
         (ulonglong)param_1[local_f0 + 4] >> (bVar15 & 0x3f);
    if (1 < iVar31) {
      iVar18 = (int)local_f0 + 5;
      uVar28 = local_110 & 0xffffffff;
      do {
        local_98[uVar28 + 4] =
             (ulonglong)param_1[uVar28 - 1 & 0xffffffff] >> (bVar15 & 0x3f) |
             param_1[uVar28] << (bVar9 & 0x3f);
        iVar18 = iVar18 + -1;
        uVar28 = uVar28 - 1;
      } while (1 < iVar18);
    }
    local_98[4] = *param_1 << (bVar9 & 0x3f);
  }
  puVar12 = local_100;
  uVar26 = (uint)local_120;
  if ((int)uVar26 <= iVar31) {
    uVar28 = local_98[lVar21 + 3];
    local_c8 = 0x300000000 - lVar25 >> 0x20;
    local_f4 = ~uVar26 & 1;
    local_d8 = local_120 & 0xffffffff;
    local_d0 = (ulonglong)(uVar26 & 1);
    local_110 = 0x500000000 - lVar25 >> 0x20;
    local_108 = (ulonglong)((uint)local_108 & 1);
    uVar24 = (longlong)(int)uVar23;
    do {
      lVar32 = uVar24 + local_110;
      uVar27 = local_98[lVar32 + 4];
      uVar17 = 0xffffffffffffffff;
      if (uVar27 < uVar28) {
        local_b0 = local_98[lVar32 + 3];
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar28;
        auVar2._8_8_ = uVar27;
        auVar2._0_8_ = local_b0;
        local_a0 = SUB168(auVar2 / auVar1,0);
        local_a8 = SUB168(auVar2 % auVar1,0);
        uVar29 = local_98[local_c8];
        uVar33 = uVar29 * local_a0;
        uVar17 = local_a0;
        uVar34 = local_a8;
        do {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar17;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar29;
          uVar19 = SUB168(auVar3 * auVar6,8);
          local_c0 = uVar28;
          local_b8 = uVar27;
          if ((uVar19 <= uVar34) && ((uVar34 != uVar19 || (uVar33 <= local_98[lVar32 + 2])))) break;
          uVar17 = uVar17 - 1;
          uVar33 = uVar33 - uVar29;
          bVar36 = CARRY8(uVar34,uVar28);
          uVar34 = uVar34 + uVar28;
        } while (!bVar36);
      }
      uVar34 = uVar24 & 0xffffffff;
      bVar36 = false;
      uVar29 = local_d0;
      if (1 < (longlong)local_120) {
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar17;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_98[uVar29];
          uVar20 = SUB168(auVar4 * auVar7,8);
          uVar19 = SUB168(auVar4 * auVar7,0);
          uVar27 = local_98[uVar34 + uVar29 + 4];
          uVar33 = uVar27 - uVar19;
          local_98[uVar34 + uVar29 + 4] = uVar33 - (bVar36 != false);
          uVar27 = (ulonglong)(uVar27 < uVar19 || uVar33 < (bVar36 != false));
          uVar33 = local_98[uVar34 + uVar29 + 5] - uVar20;
          bVar36 = local_98[uVar34 + uVar29 + 5] < uVar20 || uVar33 < uVar27;
          local_98[uVar34 + uVar29 + 5] = uVar33 - uVar27;
          uVar29 = uVar29 + 2;
        } while ((longlong)uVar29 < (longlong)local_110);
        uVar27 = local_98[lVar32 + 4];
      }
      local_98[lVar32 + 4] = uVar27 - bVar36;
      if ((int)local_f4 < (int)uVar26) {
        bVar36 = false;
        uVar27 = local_108;
        do {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar17;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_98[uVar27];
          uVar20 = SUB168(auVar5 * auVar8,8);
          uVar19 = SUB168(auVar5 * auVar8,0);
          uVar29 = local_98[uVar34 + uVar27 + 4];
          uVar33 = uVar29 - uVar19;
          local_98[uVar34 + uVar27 + 4] = uVar33 - bVar36;
          uVar29 = (ulonglong)(uVar29 < uVar19 || uVar33 < bVar36);
          uVar33 = local_98[uVar34 + uVar27 + 5] - uVar20;
          bVar36 = local_98[uVar34 + uVar27 + 5] < uVar20 || uVar33 < uVar29;
          local_98[uVar34 + uVar27 + 5] = uVar33 - uVar29;
          uVar27 = uVar27 + 2;
        } while ((longlong)uVar27 < (longlong)local_110);
        if ((bVar36) && (uVar17 = uVar17 - 1, 0 < (longlong)local_120)) {
          uVar27 = 0;
          bVar36 = false;
          do {
            uVar29 = (ulonglong)bVar36;
            uVar33 = local_98[uVar34 + uVar27 + 4] + local_98[uVar27];
            bVar36 = CARRY8(local_98[uVar34 + uVar27 + 4],local_98[uVar27]) || CARRY8(uVar33,uVar29)
            ;
            local_98[uVar34 + uVar27 + 4] = uVar33 + uVar29;
            uVar27 = uVar27 + 1;
          } while (local_d8 != uVar27);
        }
      }
      local_e0[uVar24] = uVar17;
      bVar36 = 0 < (longlong)uVar24;
      uVar24 = uVar24 - 1;
    } while (bVar36);
  }
  if (local_f8 == 0) {
    if (0 < (longlong)local_120) {
      memcpy(local_100,local_98 + 4,lVar22 + 0x20U & 0x7fffffff8);
      goto LAB_147e5903f;
    }
LAB_147e59047:
    memset(puVar12 + lVar21 + 4,0,(0x7fffffff0U - (lVar22 + -8) & 0x7fffffff8) + 8);
  }
  else {
    if ((longlong)local_120 < 1) goto LAB_147e59047;
    uVar28 = 0;
    uVar24 = local_98[4];
    do {
      uVar27 = uVar24 >> ((byte)local_e8 & 0x3f);
      uVar24 = local_98[uVar28 + 5];
      local_100[uVar28] = uVar24 << (0x40U - (char)local_f8 & 0x3f) | uVar27;
      uVar28 = uVar28 + 1;
    } while ((local_120 & 0xffffffff) != uVar28);
LAB_147e5903f:
    if ((longlong)local_120 < 4) goto LAB_147e59047;
  }
  if ((int)local_118 < 4) {
    memset(local_e0 + local_f0 + 5,0,(0x7fffffff0U - lVar16 & 0x7fffffff8) + 8);
  }
LAB_147e58aef:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e590c3 FUN_147e590c3 body=199 status=ok
// SIG undefined FUN_147e590c3(void)

void FUN_147e590c3(longlong param_1,ulonglong param_2,longlong param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = 3;
  do {
    uVar4 = (uint)uVar5;
    if (*(longlong *)(param_1 + uVar5 * 8) != 0) goto LAB_147e59102;
    *(undefined8 *)(param_3 + uVar5 * 8) = 0;
    uVar5 = (ulonglong)(uVar4 - 1);
  } while (1 < uVar4);
  uVar4 = 0;
LAB_147e59102:
  uVar5 = *(ulonglong *)(param_1 + (longlong)(int)uVar4 * 8);
  local_18 = uVar5 % param_2;
  *(ulonglong *)(param_3 + (longlong)(int)uVar4 * 8) = uVar5 / param_2;
  if (0 < (int)uVar4) {
    puVar3 = (undefined8 *)(param_3 + (ulonglong)uVar4 * 8);
    uVar5 = (ulonglong)uVar4 + 1;
    do {
      puVar3 = puVar3 + -1;
      local_20 = *(undefined8 *)(param_1 + -0x10 + uVar5 * 8);
      local_28 = local_18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      auVar2._8_8_ = local_18;
      auVar2._0_8_ = local_20;
      local_18 = SUB168(auVar2 % auVar1,0);
      *puVar3 = SUB168(auVar2 / auVar1,0);
      uVar5 = uVar5 - 1;
      local_30 = param_2;
    } while (1 < uVar5);
  }
  *param_4 = local_18;
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5918b FUN_147e5918b body=295 status=ok
// SIG undefined FUN_147e5918b(void)

void FUN_147e5918b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_147e592b3(param_4,&local_44);
  fVar5 = (float)uVar1;
  lVar2 = FUN_147e59322(param_1,&local_48);
  iVar4 = 0;
  iVar3 = 0;
  if (lVar2 != 0) {
    iVar3 = (int)((float)lVar2 / fVar5) + (local_48 - local_44) * 0x800000;
  }
  *param_5 = iVar3;
  lVar2 = FUN_147e59322(param_2,&local_48);
  if (lVar2 != 0) {
    iVar4 = (int)((float)lVar2 / fVar5) + (local_48 - local_44) * 0x800000;
  }
  param_5[1] = iVar4;
  lVar2 = FUN_147e59322(param_3,&local_48);
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)((float)lVar2 / fVar5) + (local_48 - local_44) * 0x800000;
  }
  param_5[2] = iVar3;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e592b3 FUN_147e592b3 body=111 status=ok
// SIG undefined FUN_147e592b3(void)

ulonglong FUN_147e592b3(ulonglong *param_1,int *param_2)

{
  int iVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = param_1 + 2;
  iVar3 = 0xc0;
  uVar5 = 4;
  do {
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    if (param_1[uVar5] != 0) {
      iVar1 = FUN_147e5105f();
      *param_2 = iVar3 - iVar1;
      uVar5 = param_1[uVar5] << ((byte)iVar1 & 0x3f);
      if (iVar1 == 0) {
        return uVar5;
      }
      return uVar5 | *puVar2 >> (-(byte)iVar1 & 0x3f);
    }
    puVar2 = puVar2 + -1;
    iVar3 = iVar3 + -0x40;
  } while (1 < uVar4);
  *param_2 = 0;
  return *param_1;
}



// FUNCTION 147e59322 FUN_147e59322 body=197 status=ok
// SIG undefined FUN_147e59322(void)

ulonglong FUN_147e59322(ulonglong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = (longlong)param_1[3] >> 0x3f;
  puVar4 = param_1 + 2;
  iVar3 = 0xc1;
  uVar6 = 4;
  while( true ) {
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
    if (param_1[uVar6] != uVar2) break;
    puVar4 = puVar4 + -1;
    iVar3 = iVar3 + -0x40;
    if (uVar5 < 2) {
      if ((longlong)(*param_1 ^ uVar2) < 0) {
        *param_2 = 1;
        uVar2 = uVar2 & 0x8000000000000000 | *param_1 >> 1;
      }
      else {
        *param_2 = 0;
        uVar2 = *param_1;
      }
      return uVar2;
    }
  }
  iVar1 = FUN_147e5105f(param_1[uVar6] ^ uVar2);
  *param_2 = iVar3 - iVar1;
  if (iVar1 < 1) {
    return param_1[uVar6] >> 1 | uVar2 & 0x8000000000000000;
  }
  uVar2 = param_1[uVar6] << ((byte)(iVar1 + -1) & 0x3f);
  if (iVar1 + -1 == 0) {
    return uVar2;
  }
  return uVar2 | *puVar4 >> (0x41U - (char)iVar1 & 0x3f);
}



// FUNCTION 147e593e8 FUN_147e593e8 body=121 status=ok
// SIG undefined FUN_147e593e8(void)

void FUN_147e593e8(longlong param_1)

{
  FUN_147e5ff56(param_1 + 0x2098);
  *(undefined4 *)(param_1 + 0x2090) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x2094)) && (*(longlong *)(param_1 + 0x2088) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x2088),
               (longlong)*(int *)(param_1 + 0x2094) << 2);
  }
  *(undefined8 *)(param_1 + 0x2088) = 0;
  *(undefined4 *)(param_1 + 0x2094) = 0x80000000;
  FUN_147e5ffb6(param_1 + 0x2048);
  FUN_147e6000e(param_1);
  return;
}



// FUNCTION 147e59462 FUN_147e59462 body=330 status=ok
// SIG undefined FUN_147e59462(void)

void FUN_147e59462(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [4];
  longlong local_28 [4];
  
  local_28[3] = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1[3];
  bVar8 = false;
  lVar6 = param_1[2];
  plVar7 = local_28;
  bVar3 = true;
  do {
    bVar4 = bVar3;
    uVar1 = (ulonglong)bVar8;
    bVar8 = lVar6 != 0 || (ulonglong)-lVar6 < uVar1;
    *plVar7 = -lVar6 - uVar1;
    lVar6 = lVar5;
    plVar7 = &local_50;
    bVar3 = false;
  } while (bVar4);
  lVar5 = param_1[1];
  bVar8 = false;
  lVar6 = *param_1;
  plVar7 = &local_58;
  bVar3 = true;
  do {
    bVar4 = bVar3;
    uVar1 = (ulonglong)bVar8;
    bVar8 = lVar6 != 0 || (ulonglong)-lVar6 < uVar1;
    *plVar7 = -lVar6 - uVar1;
    lVar6 = lVar5;
    plVar7 = &local_60;
    bVar3 = false;
  } while (bVar4);
  *param_1 = local_58;
  param_1[1] = local_60;
  param_1[2] = local_28[0];
  param_1[3] = local_50;
  local_48[0] = param_1[4];
  local_48[1] = param_1[5];
  local_48[2] = param_1[6];
  lVar5 = 0;
  bVar8 = false;
  do {
    uVar1 = (ulonglong)bVar8;
    uVar2 = -local_48[lVar5];
    bVar8 = local_48[lVar5] != 0 || uVar2 < uVar1;
    local_28[lVar5] = uVar2 - uVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  param_1[6] = local_28[2];
  param_1[4] = local_28[0];
  param_1[5] = local_28[1];
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) ^ 0x80000000;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) ^ 0x80000000;
  if ((local_28[3] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e595ad FUN_147e595ad body=264 status=ok
// SIG undefined FUN_147e595ad(void)

longlong * FUN_147e595ad(longlong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [96];
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  longlong local_40;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = (longlong)*param_3;
  iVar1 = param_3[2];
  *param_1 = -lVar4 * (longlong)iVar1;
  lVar6 = (longlong)param_3[1];
  param_1[1] = -lVar6 * (longlong)iVar1;
  param_1[2] = lVar4 * lVar4 + lVar6 * lVar6;
  FUN_147e5d2e4(param_2,local_d8);
  FUN_147e5d1ef(local_78,param_1,local_d8);
  FUN_147e5d4cc(local_78,local_58,&local_40);
  bVar8 = false;
  plVar7 = &local_e0;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    uVar2 = (ulonglong)bVar8;
    bVar8 = local_40 != 0 || (ulonglong)-local_40 < uVar2;
    *plVar7 = -local_40 - uVar2;
    local_40 = local_38;
    plVar7 = &local_e8;
    bVar3 = false;
  } while (bVar5);
  param_1[3] = local_e0;
  param_1[4] = local_e8;
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e596b6 FUN_147e596b6 body=147 status=ok
// SIG undefined FUN_147e596b6(void)

void FUN_147e596b6(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_147e5fbc0(param_1,param_2,&local_24);
  local_24 = 0xffffffff;
  iVar1 = (int)param_2;
  FUN_147e4f0b2(param_1 + 0x10,&PTR_vftable_14c6e47a0,param_2 & 0xffffffff,&local_24);
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar1) {
    FUN_147e5fe2a(param_1 + 0x20,&PTR_vftable_14c6e47a0,param_2 & 0xffffffff);
  }
  if (*(int *)(param_1 + 0x28) != iVar1) {
    *(int *)(param_1 + 0x28) = iVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5974a FUN_147e5974a body=229 status=ok
// SIG undefined FUN_147e5974a(void)

longlong FUN_147e5974a(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150 [144];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_147e59d16(&local_c0,param_3,param_2 + 0x48);
  FUN_147e59d16(local_150,param_2,param_3 + 0x48);
  FUN_147e59c09(param_1,local_150,&local_c0);
  local_168 = *(undefined8 *)(param_3 + 0x48);
  uStack_160 = *(undefined8 *)(param_3 + 0x50);
  local_158 = *(undefined8 *)(param_3 + 0x58);
  local_188 = *(undefined4 *)(param_2 + 0x48);
  uStack_184 = *(undefined4 *)(param_2 + 0x4c);
  uStack_180 = *(undefined4 *)(param_2 + 0x50);
  uStack_17c = *(undefined4 *)(param_2 + 0x54);
  local_178 = *(undefined8 *)(param_2 + 0x58);
  FUN_147e51913(&local_188,&local_168,&local_c0);
  *(undefined8 *)(param_1 + 0xb0) = local_a0;
  *(undefined4 *)(param_1 + 0xa0) = local_b0;
  *(undefined4 *)(param_1 + 0xa4) = uStack_ac;
  *(undefined4 *)(param_1 + 0xa8) = uStack_a8;
  *(undefined4 *)(param_1 + 0xac) = uStack_a4;
  *(undefined4 *)(param_1 + 0x90) = local_c0;
  *(undefined4 *)(param_1 + 0x94) = uStack_bc;
  *(undefined4 *)(param_1 + 0x98) = uStack_b8;
  *(undefined4 *)(param_1 + 0x9c) = uStack_b4;
  if ((local_30 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e59830 FUN_147e59830 body=698 status=ok
// SIG undefined FUN_147e59830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_147e59830(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_e8 [40];
  longlong local_c0 [6];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = *(undefined8 *)(param_1 + 0xb0);
  local_68 = *(undefined1 (*) [16])(param_1 + 0x90);
  local_58 = *(undefined8 *)(param_1 + 0xa0);
  uStack_50 = *(undefined8 *)(param_1 + 0xa8);
  auVar8 = pmovsxbq(local_68,0x101);
  lVar4 = 0;
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar10._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar10._8_8_ = -(ulonglong)(plVar1[1] == 0);
    auVar8 = auVar8 & auVar10;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 6);
  if ((_DAT_149934d50 & ~auVar8) != (undefined1  [16])0x0) {
    uVar5 = *(longlong *)(param_1 + 0x28) >> 0x3f;
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar6 = *(ulonglong *)(param_1 + lVar4 * 8) ^ uVar5;
      uVar2 = (ulonglong)bVar7;
      uVar3 = uVar6 - uVar5;
      bVar7 = uVar6 < uVar5 || uVar3 < uVar2;
      local_c0[lVar4] = uVar3 - uVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
    FUN_147e59f89(&local_90,local_c0,local_68);
    local_48 = local_70;
    auVar8._8_8_ = uStack_88;
    auVar8._0_8_ = local_90;
    local_58 = local_80;
    uStack_50 = uStack_78;
    local_68 = auVar8;
  }
  auVar9 = pmovsxbq(auVar8,0x101);
  lVar4 = 6;
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar11._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar11._8_8_ = -(ulonglong)(plVar1[1] == 0);
    auVar9 = auVar9 & auVar11;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0xc);
  if ((_DAT_149934d50 & ~auVar9) != (undefined1  [16])0x0) {
    uVar5 = *(longlong *)(param_1 + 0x58) >> 0x3f;
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar6 = *(ulonglong *)(param_1 + 0x30 + lVar4 * 8) ^ uVar5;
      uVar2 = (ulonglong)bVar7;
      uVar3 = uVar6 - uVar5;
      bVar7 = uVar6 < uVar5 || uVar3 < uVar2;
      local_c0[lVar4] = uVar3 - uVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
    FUN_147e59f89(&local_90,local_c0,local_68);
    local_48 = local_70;
    auVar9._8_8_ = uStack_88;
    auVar9._0_8_ = local_90;
    local_58 = local_80;
    uStack_50 = uStack_78;
    local_68 = auVar9;
  }
  auVar8 = pmovsxbq(auVar9,0x101);
  lVar4 = 0xc;
  do {
    plVar1 = (longlong *)(param_1 + lVar4 * 8);
    auVar12._0_8_ = -(ulonglong)(*plVar1 == 0);
    auVar12._8_8_ = -(ulonglong)(plVar1[1] == 0);
    auVar8 = auVar8 & auVar12;
    lVar4 = lVar4 + 2;
  } while (lVar4 != 0x12);
  if ((_DAT_149934d50 & ~auVar8) != (undefined1  [16])0x0) {
    uVar5 = *(longlong *)(param_1 + 0x88) >> 0x3f;
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar6 = *(ulonglong *)(param_1 + 0x60 + lVar4 * 8) ^ uVar5;
      uVar2 = (ulonglong)bVar7;
      uVar3 = uVar6 - uVar5;
      bVar7 = uVar6 < uVar5 || uVar3 < uVar2;
      local_c0[lVar4] = uVar3 - uVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
    FUN_147e59f89(&local_90,local_c0,local_68);
    local_48 = local_70;
    local_58 = local_80;
    uStack_50 = uStack_78;
    local_68._8_8_ = uStack_88;
    local_68._0_8_ = local_90;
  }
  FUN_147e59e68(param_1,local_68,param_2);
  FUN_147e59e68(param_1 + 0x30,local_68,param_2 + 0x30);
  FUN_147e59e68(param_1 + 0x60,local_68,param_2 + 0x60);
  FUN_147e5ae6b(param_1 + 0x90,local_68,param_2 + 0x90,local_c0);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e59aec FUN_147e59aec body=285 status=ok
// SIG undefined FUN_147e59aec(void)

undefined4 * FUN_147e59aec(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = 5;
  iVar5 = -0x181;
  do {
    if (*(ulonglong *)(param_1 + uVar4 * 2) != *(longlong *)(param_1 + 10) >> 0x3f) {
      iVar6 = FUN_147e5105f(*(ulonglong *)(param_1 + uVar4 * 2) ^
                            *(longlong *)(param_1 + 10) >> 0x3f);
      iVar5 = -(iVar6 + iVar5);
      goto LAB_147e59b2c;
    }
    uVar4 = (ulonglong)((int)uVar4 - 1);
    iVar5 = iVar5 + 0x40;
  } while (iVar5 != -1);
  iVar5 = 1;
LAB_147e59b2c:
  uVar4 = 5;
  iVar6 = -0x181;
  do {
    if (*(ulonglong *)(param_1 + uVar4 * 2 + 0xc) != *(longlong *)(param_1 + 0x16) >> 0x3f) {
      iVar7 = FUN_147e5105f(*(ulonglong *)(param_1 + uVar4 * 2 + 0xc) ^
                            *(longlong *)(param_1 + 0x16) >> 0x3f);
      iVar6 = -(iVar7 + iVar6);
      goto LAB_147e59b60;
    }
    uVar4 = (ulonglong)((int)uVar4 - 1);
    iVar6 = iVar6 + 0x40;
  } while (iVar6 != -1);
  iVar6 = 1;
LAB_147e59b60:
  uVar4 = 5;
  iVar7 = -0x181;
  do {
    if (*(ulonglong *)(param_1 + uVar4 * 2 + 0x18) != *(longlong *)(param_1 + 0x22) >> 0x3f) {
      iVar3 = FUN_147e5105f(*(ulonglong *)(param_1 + uVar4 * 2 + 0x18) ^
                            *(longlong *)(param_1 + 0x22) >> 0x3f);
      iVar7 = -(iVar3 + iVar7);
      goto LAB_147e59b93;
    }
    uVar4 = (ulonglong)((int)uVar4 - 1);
    iVar7 = iVar7 + 0x40;
  } while (iVar7 != -1);
  iVar7 = 1;
LAB_147e59b93:
  if (iVar6 < iVar5) {
    iVar6 = iVar5;
  }
  if (iVar6 <= iVar7) {
    iVar6 = iVar7;
  }
  if (iVar6 < 0x1a) {
    uVar1 = param_1[0x18];
    uVar2 = param_1[0xc];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar1;
  }
  else {
    FUN_147e5b592(param_1,param_2,iVar6 + -0x19);
  }
  return param_2;
}



// FUNCTION 147e59c09 FUN_147e59c09 body=268 status=ok
// SIG undefined FUN_147e59c09(void)

longlong * FUN_147e59c09(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  longlong local_98 [6];
  longlong local_68 [6];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = 0;
  bVar6 = false;
  do {
    uVar2 = *(ulonglong *)(param_2 + 0x60 + lVar5 * 8);
    puVar1 = (ulonglong *)(param_3 + 0x60 + lVar5 * 8);
    uVar3 = (ulonglong)bVar6;
    uVar4 = uVar2 - *puVar1;
    bVar6 = uVar2 < *puVar1 || uVar4 < uVar3;
    (&local_38)[lVar5] = uVar4 - uVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  lVar5 = 0;
  bVar6 = false;
  do {
    uVar2 = *(ulonglong *)(param_2 + 0x30 + lVar5 * 8);
    puVar1 = (ulonglong *)(param_3 + 0x30 + lVar5 * 8);
    uVar3 = (ulonglong)bVar6;
    uVar4 = uVar2 - *puVar1;
    bVar6 = uVar2 < *puVar1 || uVar4 < uVar3;
    local_68[lVar5] = uVar4 - uVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  lVar5 = 0;
  bVar6 = false;
  do {
    uVar2 = *(ulonglong *)(param_2 + lVar5 * 8);
    puVar1 = (ulonglong *)(param_3 + lVar5 * 8);
    uVar3 = (ulonglong)bVar6;
    uVar4 = uVar2 - *puVar1;
    bVar6 = uVar2 < *puVar1 || uVar4 < uVar3;
    local_98[lVar5] = uVar4 - uVar3;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  param_1[4] = local_98[4];
  param_1[5] = local_98[5];
  param_1[2] = local_98[2];
  param_1[3] = local_98[3];
  *param_1 = local_98[0];
  param_1[1] = local_98[1];
  param_1[6] = local_68[0];
  param_1[7] = local_68[1];
  param_1[8] = local_68[2];
  param_1[9] = local_68[3];
  param_1[10] = local_68[4];
  param_1[0xb] = local_68[5];
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_1 + 100) = local_38._4_4_;
  *(undefined4 *)(param_1 + 0xd) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_2c;
  *(undefined4 *)(param_1 + 0xe) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x74) = uStack_24;
  *(undefined4 *)(param_1 + 0xf) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uStack_1c;
  *(undefined4 *)(param_1 + 0x10) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x84) = uStack_14;
  *(undefined4 *)(param_1 + 0x11) = uStack_10;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uStack_c;
  if ((local_8 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_b8);
}



// FUNCTION 147e59d16 FUN_147e59d16 body=193 status=ok
// SIG undefined FUN_147e59d16(void)

longlong FUN_147e59d16(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_147e59dd8(&local_60,param_3,param_2 + 0x30);
  FUN_147e59dd8(&local_90,param_3,param_2 + 0x18);
  FUN_147e59dd8(param_1,param_3,param_2);
  *(undefined8 *)(param_1 + 0x50) = local_70;
  *(undefined8 *)(param_1 + 0x58) = uStack_68;
  *(undefined8 *)(param_1 + 0x40) = local_80;
  *(undefined8 *)(param_1 + 0x48) = uStack_78;
  *(undefined8 *)(param_1 + 0x30) = local_90;
  *(undefined8 *)(param_1 + 0x38) = uStack_88;
  *(undefined4 *)(param_1 + 0x60) = local_60;
  *(undefined4 *)(param_1 + 100) = uStack_5c;
  *(undefined4 *)(param_1 + 0x68) = uStack_58;
  *(undefined4 *)(param_1 + 0x6c) = uStack_54;
  *(undefined4 *)(param_1 + 0x70) = local_50;
  *(undefined4 *)(param_1 + 0x74) = uStack_4c;
  *(undefined4 *)(param_1 + 0x78) = uStack_48;
  *(undefined4 *)(param_1 + 0x7c) = uStack_44;
  *(undefined4 *)(param_1 + 0x80) = local_40;
  *(undefined4 *)(param_1 + 0x84) = uStack_3c;
  *(undefined4 *)(param_1 + 0x88) = uStack_38;
  *(undefined4 *)(param_1 + 0x8c) = uStack_34;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e59dd8 FUN_147e59dd8 body=143 status=ok
// SIG undefined FUN_147e59dd8(void)

undefined4 * FUN_147e59dd8(undefined4 *param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e51913(param_2,param_3,&local_50);
  if (*(longlong *)(param_3 + 0x10) < 0) {
    lVar5 = 0;
    bVar6 = false;
    do {
      uVar2 = *(ulonglong *)(param_2 + lVar5 * 8);
      puVar1 = &uStack_38 + lVar5;
      uVar3 = (ulonglong)bVar6;
      uVar4 = *puVar1 - uVar2;
      bVar6 = *puVar1 < uVar2 || uVar4 < uVar3;
      *puVar1 = uVar4 - uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 3);
  }
  param_1[8] = local_30;
  param_1[9] = uStack_2c;
  param_1[10] = uStack_28;
  param_1[0xb] = uStack_24;
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = (undefined4)uStack_38;
  param_1[7] = uStack_38._4_4_;
  *param_1 = local_50;
  param_1[1] = uStack_4c;
  param_1[2] = uStack_48;
  param_1[3] = uStack_44;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e59e68 FUN_147e59e68 body=288 status=ok
// SIG undefined FUN_147e59e68(void)

void FUN_147e59e68(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [40];
  longlong local_78 [6];
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)(param_1 + 0x28);
  uVar3 = lVar4 >> 0x3f;
  lVar5 = 0;
  bVar7 = false;
  do {
    uVar6 = *(ulonglong *)(param_1 + lVar5 * 8) ^ uVar3;
    uVar1 = (ulonglong)bVar7;
    uVar2 = uVar6 - uVar3;
    bVar7 = uVar6 < uVar3 || uVar2 < uVar1;
    local_78[lVar5] = uVar2 - uVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  FUN_147e5a769(local_78,param_2,&local_d0,local_a0);
  if (lVar4 < 0) {
    local_48[4] = local_b0;
    local_48[5] = uStack_a8;
    local_48[2] = local_c0;
    local_48[3] = uStack_b8;
    local_48[0] = local_d0;
    local_48[1] = uStack_c8;
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar3 = (ulonglong)bVar7;
      uVar1 = -local_48[lVar4];
      bVar7 = local_48[lVar4] != 0 || uVar1 < uVar3;
      (&local_108)[lVar4] = uVar1 - uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
  }
  else {
    local_e8 = local_b0;
    uStack_e0 = uStack_a8;
    local_f8 = local_c0;
    uStack_f0 = uStack_b8;
    local_108 = local_d0;
    uStack_100 = uStack_c8;
  }
  param_3[8] = (undefined4)local_e8;
  param_3[9] = local_e8._4_4_;
  param_3[10] = (undefined4)uStack_e0;
  param_3[0xb] = uStack_e0._4_4_;
  param_3[4] = (undefined4)local_f8;
  param_3[5] = local_f8._4_4_;
  param_3[6] = (undefined4)uStack_f0;
  param_3[7] = uStack_f0._4_4_;
  *param_3 = (undefined4)local_108;
  param_3[1] = local_108._4_4_;
  param_3[2] = (undefined4)uStack_100;
  param_3[3] = uStack_100._4_4_;
  if ((local_18 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e59f89 FUN_147e59f89 body=784 status=ok
// SIG undefined FUN_147e59f89(void)

ulonglong * FUN_147e59f89(ulonglong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_1c8 [44];
  int local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8 [6];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_d8 = *param_2;
  uStack_d0 = param_2[1];
  local_c8 = param_2[2];
  uStack_c0 = param_2[3];
  local_b8 = *(undefined4 *)(param_2 + 4);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_b0 = *(undefined4 *)(param_2 + 5);
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[4] = *(ulonglong *)(param_3 + 8);
  uVar10 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 2) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)param_1 = uVar10;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  local_19c = FUN_147e5a466(&local_d8);
  FUN_147e5a4c6(&local_d8,local_19c);
  iVar9 = FUN_147e5a585(param_1);
  FUN_147e5a5e5(param_1,iVar9);
  while( true ) {
    local_a8[4] = param_1[4];
    local_a8[2] = param_1[2];
    local_a8[3] = param_1[3];
    local_a8[0] = *param_1;
    local_a8[1] = param_1[1];
    local_58 = CONCAT44(uStack_b4,local_b8);
    uStack_50 = CONCAT44(uStack_ac,uStack_b0);
    local_68 = local_c8;
    uStack_60 = uStack_c0;
    local_78 = local_d8;
    uStack_70 = uStack_d0;
    bVar1 = 1;
    lVar11 = 0;
    do {
      bVar1 = bVar1 & (&local_78)[lVar11] == local_a8[lVar11];
      lVar11 = lVar11 + 1;
    } while (lVar11 != 5);
    if ((bool)(bVar1 & uStack_50 == 0)) break;
    local_a8[4] = param_1[4];
    local_a8[2] = param_1[2];
    local_a8[3] = param_1[3];
    uStack_50 = CONCAT44(uStack_ac,uStack_b0);
    local_58 = CONCAT44(uStack_b4,local_b8);
    bVar13 = uStack_50 == 0;
    local_a8[0] = *param_1;
    local_a8[1] = param_1[1];
    bVar8 = !bVar13;
    lVar11 = 4;
    do {
      bVar8 = (bool)(bVar8 | local_a8[lVar11] < (ulonglong)(&local_78)[lVar11] & bVar13);
      bVar13 = (bool)(bVar13 & local_a8[lVar11] == (&local_78)[lVar11]);
      bVar12 = lVar11 != 0;
      lVar11 = lVar11 + -1;
    } while (bVar12);
    if (bVar8) {
      local_e8 = param_1[4];
      local_108 = *param_1;
      uStack_100 = param_1[1];
      local_f8 = param_1[2];
      uStack_f0 = param_1[3];
      local_138 = (undefined4)local_d8;
      uStack_134 = local_d8._4_4_;
      uStack_130 = (undefined4)uStack_d0;
      uStack_12c = uStack_d0._4_4_;
      local_128 = (undefined4)local_c8;
      uStack_124 = local_c8._4_4_;
      uStack_120 = (undefined4)uStack_c0;
      uStack_11c = uStack_c0._4_4_;
      local_118 = local_b8;
      uStack_114 = uStack_b4;
      uStack_110 = uStack_b0;
      uStack_10c = uStack_ac;
      FUN_147e5a29a(&local_d8,&local_138,&local_108);
      uVar10 = FUN_147e5a466(&local_d8);
      FUN_147e5a4c6(&local_d8,uVar10);
    }
    else {
      local_168 = local_d8;
      uStack_160 = uStack_d0;
      local_158 = local_c8;
      uStack_150 = uStack_c0;
      local_148 = local_b8;
      uStack_144 = uStack_b4;
      uStack_140 = uStack_b0;
      uStack_13c = uStack_ac;
      local_198 = (undefined4)*param_1;
      uStack_194 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_190 = (undefined4)param_1[1];
      uStack_18c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_188 = (undefined4)param_1[2];
      uStack_184 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_180 = (undefined4)param_1[3];
      uStack_17c = *(undefined4 *)((longlong)param_1 + 0x1c);
      local_178 = param_1[4];
      FUN_147e5a381(&local_78,&local_198,&local_168);
      param_1[4] = local_58;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_68;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_68._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_60._4_4_;
      *(undefined4 *)param_1 = (undefined4)local_78;
      *(undefined4 *)((longlong)param_1 + 4) = local_78._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
      uVar10 = FUN_147e5a585(param_1);
      FUN_147e5a5e5(param_1,uVar10);
    }
  }
  if (local_19c < iVar9) {
    iVar9 = local_19c;
  }
  FUN_147e5a6a4(param_1,iVar9);
  *(byte *)((longlong)param_1 + 0x27) = *(byte *)((longlong)param_1 + 0x27) & 0xf;
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5a29a FUN_147e5a29a body=230 status=ok
// SIG undefined FUN_147e5a29a(void)

undefined4 * FUN_147e5a29a(undefined4 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68 [6];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68[4] = param_3[4];
  local_68[2] = param_3[2];
  local_68[3] = param_3[3];
  local_68[0] = *param_3;
  local_68[1] = param_3[1];
  uStack_70 = (undefined4)param_2[5];
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = param_2[5];
  local_78 = (int)param_2[4];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_98[2] = param_2[2];
  local_98[3] = param_2[3];
  local_98[0] = *param_2;
  local_98[1] = param_2[1];
  lVar4 = 0;
  bVar5 = false;
  do {
    uVar1 = (ulonglong)bVar5;
    uVar2 = local_98[lVar4] - local_68[lVar4];
    bVar5 = local_98[lVar4] < local_68[lVar4] || uVar2 < uVar1;
    (&local_38)[lVar4] = uVar2 - uVar1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  local_10 = (uVar3 - ((longlong)local_68[4] >> 0x3f)) - (ulonglong)bVar5;
  param_1[4] = local_28;
  param_1[5] = uStack_24;
  param_1[6] = uStack_20;
  param_1[7] = uStack_1c;
  *param_1 = (undefined4)local_38;
  param_1[1] = local_38._4_4_;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  *(undefined8 *)(param_1 + 8) = local_18;
  *(longlong *)(param_1 + 10) = local_10;
  if ((local_8 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_b8,bVar5 + -1);
}



// FUNCTION 147e5a381 FUN_147e5a381 body=228 status=ok
// SIG undefined FUN_147e5a381(void)

undefined4 * FUN_147e5a381(undefined4 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  ulonglong local_98 [6];
  ulonglong local_68 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_40 = (undefined4)param_3[5];
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = param_3[5];
  local_48 = (int)param_3[4];
  uStack_44 = *(undefined4 *)((longlong)param_3 + 0x24);
  local_68[2] = param_3[2];
  local_68[3] = param_3[3];
  local_68[0] = *param_3;
  local_68[1] = param_3[1];
  local_98[4] = param_2[4];
  local_98[2] = param_2[2];
  local_98[3] = param_2[3];
  local_98[0] = *param_2;
  local_98[1] = param_2[1];
  lVar4 = 0;
  bVar5 = false;
  do {
    uVar1 = (ulonglong)bVar5;
    uVar2 = local_98[lVar4] - local_68[lVar4];
    bVar5 = local_98[lVar4] < local_68[lVar4] || uVar2 < uVar1;
    (&local_38)[lVar4] = uVar2 - uVar1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 5);
  local_10 = (((longlong)local_98[4] >> 0x3f) - uVar3) - (ulonglong)bVar5;
  param_1[4] = local_28;
  param_1[5] = uStack_24;
  param_1[6] = uStack_20;
  param_1[7] = uStack_1c;
  *param_1 = (undefined4)local_38;
  param_1[1] = local_38._4_4_;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  *(undefined8 *)(param_1 + 8) = local_18;
  *(longlong *)(param_1 + 10) = local_10;
  if ((local_8 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_b8,bVar5 + -1);
}



// FUNCTION 147e5a466 FUN_147e5a466 body=96 status=ok
// SIG undefined FUN_147e5a466(void)

int FUN_147e5a466(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = (*(code *)PTR_FUN_14c6da350)(~(uint)lVar1 & (uint)lVar1 - 1);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar4 = (*(code *)PTR_FUN_14c6da350)(~uVar2 & uVar2 - 1);
      iVar4 = iVar4 + 0x20;
      if (iVar3 < 0x20) {
        iVar4 = iVar3;
      }
      return iVar4 - (int)lVar5;
    }
    lVar5 = lVar5 + -0x40;
    param_1 = param_1 + 1;
  } while (lVar5 != -0x180);
  return 0x180;
}



// FUNCTION 147e5a4c6 FUN_147e5a4c6 body=191 status=ok
// SIG undefined FUN_147e5a4c6(void)

void FUN_147e5a4c6(ulonglong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (5 < (int)uVar4) goto LAB_147e5a538;
    uVar2 = (ulonglong)(6 - uVar4);
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(int)uVar4];
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    if ((int)uVar4 < 5) {
      uVar2 = (ulonglong)(5 - uVar4);
      puVar3 = param_1;
      do {
        *puVar3 = puVar3[(longlong)(int)uVar4 + 1] << (0x40U - sVar1 & 0x3f) |
                  puVar3[(int)uVar4] >> sVar1;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    param_1[(int)(5 - uVar4)] = param_1[5] >> sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e5a538:
  memset(param_1 + (longlong)(int)-uVar4 + 6,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e5a585 FUN_147e5a585 body=96 status=ok
// SIG undefined FUN_147e5a585(void)

int FUN_147e5a585(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = (*(code *)PTR_FUN_14c6da350)(~(uint)lVar1 & (uint)lVar1 - 1);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar4 = (*(code *)PTR_FUN_14c6da350)(~uVar2 & uVar2 - 1);
      iVar4 = iVar4 + 0x20;
      if (iVar3 < 0x20) {
        iVar4 = iVar3;
      }
      return iVar4 - (int)lVar5;
    }
    lVar5 = lVar5 + -0x40;
    param_1 = param_1 + 1;
  } while (lVar5 != -0x140);
  return 0x140;
}



// FUNCTION 147e5a5e5 FUN_147e5a5e5 body=191 status=ok
// SIG undefined FUN_147e5a5e5(void)

void FUN_147e5a5e5(ulonglong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (4 < (int)uVar4) goto LAB_147e5a657;
    uVar2 = (ulonglong)(5 - uVar4);
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(int)uVar4];
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    if ((int)uVar4 < 4) {
      uVar2 = (ulonglong)(4 - uVar4);
      puVar3 = param_1;
      do {
        *puVar3 = puVar3[(longlong)(int)uVar4 + 1] << (0x40U - sVar1 & 0x3f) |
                  puVar3[(int)uVar4] >> sVar1;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    param_1[(int)(4 - uVar4)] = param_1[4] >> sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e5a657:
  memset(param_1 + (longlong)(int)-uVar4 + 5,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e5a6a4 FUN_147e5a6a4 body=197 status=ok
// SIG undefined FUN_147e5a6a4(void)

void FUN_147e5a6a4(longlong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (4 < (int)uVar4) goto LAB_147e5a74f;
    lVar3 = 5;
    do {
      param_1[lVar3 + -1] = param_1[(lVar3 + -1) - (longlong)(int)uVar4];
      lVar3 = lVar3 + -1;
    } while ((int)uVar4 < lVar3);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    uVar2 = (ulonglong)uVar4;
    if ((int)uVar4 < 4) {
      uVar2 = (ulonglong)(int)uVar4;
      lVar3 = 4;
      do {
        param_1[lVar3] =
             (ulonglong)param_1[(lVar3 + -1) - uVar2] >> (0x40U - sVar1 & 0x3f) |
             param_1[lVar3 - uVar2] << sVar1;
        lVar3 = lVar3 + -1;
      } while ((longlong)uVar2 < lVar3);
    }
    param_1[uVar2] = *param_1 << sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e5a74f:
  memset(param_1,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e5a769 FUN_147e5a769 body=1555 status=ok
// SIG undefined FUN_147e5a769(void)

void FUN_147e5a769(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  byte bVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auStack_168 [40];
  ulonglong local_140;
  longlong local_138;
  ulonglong local_130;
  longlong local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 *local_110;
  uint local_104;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8 [6];
  ulonglong local_88 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  bVar36 = param_1[5] == 0;
  lVar17 = 4;
  bVar15 = false;
  do {
    bVar10 = bVar15;
    bVar11 = (bool)((ulonglong)param_1[lVar17] < (ulonglong)param_2[lVar17] & bVar36);
    bVar36 = (bool)(bVar36 & param_1[lVar17] == param_2[lVar17]);
    bVar35 = lVar17 != 0;
    lVar17 = lVar17 + -1;
    bVar15 = (bool)(bVar10 | bVar11);
  } while (bVar35);
  if (bVar10 || bVar11) {
    lVar17 = 0;
    do {
      param_4[lVar17] = param_1[lVar17];
      lVar17 = lVar17 + 1;
    } while (lVar17 != 5);
    goto LAB_147e5a7eb;
  }
  lVar32 = 0x700000000;
  local_128 = 0;
  lVar17 = 0;
  do {
    lVar31 = lVar17;
    local_138 = local_128;
    lVar32 = lVar32 + -0x100000000;
    lVar17 = lVar31 + -8;
    local_128 = local_138 + -1;
  } while (param_1[local_138 + 5] == 0);
  iVar24 = (int)local_128 + 1;
  local_118 = local_138 + 5;
  lVar26 = 0;
  lVar13 = 0;
  lVar14 = 0;
  do {
    lVar23 = lVar14;
    lVar22 = lVar13;
    lVar26 = lVar26 + 0x100000000;
    iVar24 = iVar24 + 1;
    lVar13 = lVar22 + -1;
    lVar14 = lVar23 + -8;
  } while (param_2[lVar22 + 4] == 0);
  local_120 = param_4;
  local_110 = param_3;
  if (lVar22 + -1 == -5) {
    param_4[2] = 0;
    param_4[3] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[4] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  local_138 = local_138 + 6;
  local_140 = lVar22 + 5;
  local_130 = lVar22 + 4;
  local_104 = FUN_147e5105f();
  local_100 = (ulonglong)local_104;
  if (local_104 == 0) {
    if (0 < (int)local_138) {
      memcpy(local_b8 + 6,param_1,lVar31 + 0x30U & 0x3fffffff8);
    }
    *(undefined8 *)((longlong)local_b8 + (lVar32 >> 0x1d) + 0x30) = 0;
    if (0 < (longlong)local_140) {
      memcpy(local_b8,param_2,lVar23 + 0x28U & 0x7fffffff8);
    }
  }
  else {
    bVar9 = (byte)local_104;
    bVar16 = 0x40 - bVar9;
    if (1 < (longlong)local_140) {
      uVar28 = local_140 & 0xffffffff;
      uVar30 = local_130 & 0xffffffff;
      do {
        local_b8[uVar30] =
             (ulonglong)param_2[uVar30 - 1 & 0xffffffff] >> (bVar16 & 0x3f) |
             param_2[uVar30] << (bVar9 & 0x3f);
        uVar27 = (int)uVar28 - 1;
        uVar28 = (ulonglong)uVar27;
        uVar30 = uVar30 - 1;
      } while (1 < (int)uVar27);
    }
    local_b8[0] = *param_2 << (bVar9 & 0x3f);
    *(ulonglong *)((longlong)local_b8 + (lVar32 >> 0x1d) + 0x30) =
         (ulonglong)param_1[local_128 + 6] >> (bVar16 & 0x3f);
    if (1 < (int)local_138) {
      iVar19 = (int)local_128 + 7;
      uVar30 = local_118 & 0xffffffff;
      do {
        local_b8[uVar30 + 6] =
             (ulonglong)param_1[uVar30 - 1 & 0xffffffff] >> (bVar16 & 0x3f) |
             param_1[uVar30] << (bVar9 & 0x3f);
        iVar19 = iVar19 + -1;
        uVar30 = uVar30 - 1;
      } while (1 < iVar19);
    }
    local_88[0] = *param_1 << (bVar9 & 0x3f);
  }
  puVar12 = local_120;
  iVar19 = (int)local_138;
  uVar27 = (uint)local_140;
  if ((int)uVar27 <= (int)local_138) {
    uVar30 = local_b8[lVar22 + 4];
    local_e8 = 0x400000000 - lVar26 >> 0x20;
    local_118 = CONCAT44(local_118._4_4_,~uVar27) & 0xffffffff00000001;
    local_f8 = local_140 & 0xffffffff;
    local_f0 = (ulonglong)(uVar27 & 1);
    lVar32 = 0x600000000 - lVar26 >> 0x20;
    local_130 = (ulonglong)((uint)local_130 & 1);
    uVar28 = (longlong)iVar24;
    do {
      lVar31 = uVar28 + lVar32;
      uVar29 = local_b8[lVar31 + 6];
      uVar18 = 0xffffffffffffffff;
      if (uVar29 < uVar30) {
        local_d0 = local_b8[lVar31 + 5];
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar30;
        auVar2._8_8_ = uVar29;
        auVar2._0_8_ = local_d0;
        local_c0 = SUB168(auVar2 / auVar1,0);
        local_c8 = SUB168(auVar2 % auVar1,0);
        uVar25 = local_b8[local_e8];
        uVar33 = uVar25 * local_c0;
        uVar18 = local_c0;
        uVar34 = local_c8;
        do {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar18;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar25;
          uVar20 = SUB168(auVar3 * auVar6,8);
          local_e0 = uVar30;
          local_d8 = uVar29;
          if ((uVar20 <= uVar34) && ((uVar34 != uVar20 || (uVar33 <= local_b8[lVar31 + 4])))) break;
          uVar18 = uVar18 - 1;
          uVar33 = uVar33 - uVar25;
          bVar36 = CARRY8(uVar34,uVar30);
          uVar34 = uVar34 + uVar30;
        } while (!bVar36);
      }
      uVar34 = uVar28 & 0xffffffff;
      bVar36 = false;
      uVar25 = local_f0;
      if (1 < (longlong)local_140) {
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar18;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_b8[uVar25];
          uVar21 = SUB168(auVar4 * auVar7,8);
          uVar20 = SUB168(auVar4 * auVar7,0);
          uVar29 = local_b8[uVar34 + uVar25 + 6];
          uVar33 = uVar29 - uVar20;
          local_b8[uVar34 + uVar25 + 6] = uVar33 - (bVar36 != false);
          uVar29 = (ulonglong)(uVar29 < uVar20 || uVar33 < (bVar36 != false));
          uVar33 = local_b8[uVar34 + uVar25 + 7] - uVar21;
          bVar36 = local_b8[uVar34 + uVar25 + 7] < uVar21 || uVar33 < uVar29;
          local_b8[uVar34 + uVar25 + 7] = uVar33 - uVar29;
          uVar25 = uVar25 + 2;
        } while ((longlong)uVar25 < lVar32);
        uVar29 = local_b8[lVar31 + 6];
      }
      local_b8[lVar31 + 6] = uVar29 - bVar36;
      if ((int)local_118 < (int)uVar27) {
        bVar36 = false;
        uVar29 = local_130;
        do {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar18;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_b8[uVar29];
          uVar21 = SUB168(auVar5 * auVar8,8);
          uVar20 = SUB168(auVar5 * auVar8,0);
          uVar25 = local_b8[uVar34 + uVar29 + 6];
          uVar33 = uVar25 - uVar20;
          local_b8[uVar34 + uVar29 + 6] = uVar33 - bVar36;
          uVar25 = (ulonglong)(uVar25 < uVar20 || uVar33 < bVar36);
          uVar33 = local_b8[uVar34 + uVar29 + 7] - uVar21;
          bVar36 = local_b8[uVar34 + uVar29 + 7] < uVar21 || uVar33 < uVar25;
          local_b8[uVar34 + uVar29 + 7] = uVar33 - uVar25;
          uVar29 = uVar29 + 2;
        } while ((longlong)uVar29 < lVar32);
        if ((bVar36) && (uVar18 = uVar18 - 1, 0 < (longlong)local_140)) {
          uVar29 = 0;
          bVar36 = false;
          do {
            uVar25 = (ulonglong)bVar36;
            uVar33 = local_b8[uVar34 + uVar29 + 6] + local_b8[uVar29];
            bVar36 = CARRY8(local_b8[uVar34 + uVar29 + 6],local_b8[uVar29]) || CARRY8(uVar33,uVar25)
            ;
            local_b8[uVar34 + uVar29 + 6] = uVar33 + uVar25;
            uVar29 = uVar29 + 1;
          } while (local_f8 != uVar29);
        }
      }
      local_110[uVar28] = uVar18;
      bVar36 = 0 < (longlong)uVar28;
      uVar28 = uVar28 - 1;
    } while (bVar36);
  }
  if (local_104 == 0) {
    if (0 < (longlong)local_140) {
      memcpy(local_120,local_b8 + 6,lVar23 + 0x28U & 0x7fffffff8);
      goto LAB_147e5ad23;
    }
LAB_147e5ad2b:
    memset(puVar12 + lVar22 + 5,0,(0x7fffffff0U - (lVar23 + -8) & 0x7fffffff8) + 8);
  }
  else {
    if ((longlong)local_140 < 1) goto LAB_147e5ad2b;
    uVar30 = 0;
    uVar28 = local_88[0];
    do {
      uVar29 = uVar28 >> ((byte)local_100 & 0x3f);
      uVar28 = local_b8[uVar30 + 7];
      local_120[uVar30] = uVar28 << (0x40U - (char)local_104 & 0x3f) | uVar29;
      uVar30 = uVar30 + 1;
    } while ((local_140 & 0xffffffff) != uVar30);
LAB_147e5ad23:
    if ((longlong)local_140 < 5) goto LAB_147e5ad2b;
  }
  if (iVar19 < 6) {
    memset(local_110 + local_128 + 7,0,(0x7fffffff0U - lVar17 & 0x7fffffff8) + 8);
  }
LAB_147e5a7eb:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5ae6b FUN_147e5ae6b body=1625 status=ok
// SIG undefined FUN_147e5ae6b(void)

void FUN_147e5ae6b(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  ulonglong local_130;
  longlong local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 *local_110;
  uint local_108;
  uint local_104;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8 [6];
  ulonglong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[4] = 0;
  bVar9 = 1;
  lVar16 = 4;
  bVar36 = false;
  do {
    bVar10 = bVar36;
    bVar11 = (bool)((ulonglong)param_1[lVar16] < (ulonglong)param_2[lVar16] & bVar9);
    bVar9 = bVar9 & param_1[lVar16] == param_2[lVar16];
    bVar35 = lVar16 != 0;
    lVar16 = lVar16 + -1;
    bVar36 = (bool)(bVar10 | bVar11);
  } while (bVar35);
  if (bVar10 || bVar11) {
    lVar16 = 0;
    do {
      param_4[lVar16] = param_1[lVar16];
      lVar16 = lVar16 + 1;
    } while (lVar16 != 5);
    goto LAB_147e5aeea;
  }
  lVar32 = 0x600000000;
  local_100 = 0;
  lVar16 = 0;
  do {
    lVar30 = lVar16;
    uVar28 = local_100;
    lVar32 = lVar32 + -0x100000000;
    lVar16 = lVar30 + -8;
    local_100 = uVar28 - 1;
  } while (param_1[uVar28 + 4] == 0);
  local_120 = uVar28 + 4;
  lVar25 = 0;
  uVar24 = local_100 & 0xffffffff;
  lVar13 = 0;
  lVar14 = 0;
  do {
    lVar22 = lVar14;
    lVar21 = lVar13;
    lVar25 = lVar25 + 0x100000000;
    uVar23 = (int)uVar24 + 1;
    uVar24 = (ulonglong)uVar23;
    lVar13 = lVar21 + -1;
    lVar14 = lVar22 + -8;
  } while (param_2[lVar21 + 4] == 0);
  local_110 = param_4;
  if (lVar21 + -1 == -5) {
    param_4[2] = 0;
    param_4[3] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[4] = 0;
    local_140 = 1;
    local_148 = 1;
    FUN_147e5b4ca(param_1,*param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_168);
  }
  local_128 = uVar28 + 5;
  local_130 = lVar21 + 5;
  local_118 = lVar21 + 4;
  local_f0 = param_3;
  local_108 = FUN_147e5105f();
  local_f8 = (ulonglong)local_108;
  iVar31 = (int)local_128;
  if (local_108 == 0) {
    if (0 < iVar31) {
      memcpy(local_a8 + 6,param_1,lVar30 + 0x28U & 0x3fffffff8);
      iVar31 = (int)local_128;
    }
    *(undefined8 *)((longlong)local_a8 + (lVar32 >> 0x1d) + 0x30) = 0;
    if (0 < (longlong)local_130) {
      memcpy(local_a8,param_2,lVar22 + 0x28U & 0x7fffffff8);
      iVar31 = (int)local_128;
    }
  }
  else {
    bVar9 = (byte)local_108;
    bVar15 = 0x40 - bVar9;
    if (1 < (longlong)local_130) {
      uVar24 = local_130 & 0xffffffff;
      uVar28 = local_118 & 0xffffffff;
      do {
        local_a8[uVar28] =
             (ulonglong)param_2[uVar28 - 1 & 0xffffffff] >> (bVar15 & 0x3f) |
             param_2[uVar28] << (bVar9 & 0x3f);
        uVar26 = (int)uVar24 - 1;
        uVar24 = (ulonglong)uVar26;
        uVar28 = uVar28 - 1;
      } while (1 < (int)uVar26);
    }
    local_a8[0] = *param_2 << (bVar9 & 0x3f);
    *(ulonglong *)((longlong)local_a8 + (lVar32 >> 0x1d) + 0x30) =
         (ulonglong)param_1[local_100 + 5] >> (bVar15 & 0x3f);
    if (1 < iVar31) {
      iVar18 = (int)local_100 + 6;
      uVar28 = local_120 & 0xffffffff;
      do {
        local_a8[uVar28 + 6] =
             (ulonglong)param_1[uVar28 - 1 & 0xffffffff] >> (bVar15 & 0x3f) |
             param_1[uVar28] << (bVar9 & 0x3f);
        iVar18 = iVar18 + -1;
        uVar28 = uVar28 - 1;
      } while (1 < iVar18);
    }
    local_78[0] = *param_1 << (bVar9 & 0x3f);
  }
  puVar12 = local_110;
  uVar26 = (uint)local_130;
  if ((int)uVar26 <= iVar31) {
    uVar28 = local_a8[lVar21 + 4];
    local_d8 = 0x400000000 - lVar25 >> 0x20;
    local_104 = ~uVar26 & 1;
    local_e8 = local_130 & 0xffffffff;
    local_e0 = (ulonglong)(uVar26 & 1);
    local_120 = 0x600000000 - lVar25 >> 0x20;
    local_118 = (ulonglong)((uint)local_118 & 1);
    uVar24 = (longlong)(int)uVar23;
    do {
      lVar32 = uVar24 + local_120;
      uVar27 = local_a8[lVar32 + 6];
      uVar17 = 0xffffffffffffffff;
      if (uVar27 < uVar28) {
        local_c0 = local_a8[lVar32 + 5];
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar28;
        auVar2._8_8_ = uVar27;
        auVar2._0_8_ = local_c0;
        local_b0 = SUB168(auVar2 / auVar1,0);
        local_b8 = SUB168(auVar2 % auVar1,0);
        uVar29 = local_a8[local_d8];
        uVar33 = uVar29 * local_b0;
        uVar17 = local_b0;
        uVar34 = local_b8;
        do {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar17;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar29;
          uVar19 = SUB168(auVar3 * auVar6,8);
          local_d0 = uVar28;
          local_c8 = uVar27;
          if ((uVar19 <= uVar34) && ((uVar34 != uVar19 || (uVar33 <= local_a8[lVar32 + 4])))) break;
          uVar17 = uVar17 - 1;
          uVar33 = uVar33 - uVar29;
          bVar36 = CARRY8(uVar34,uVar28);
          uVar34 = uVar34 + uVar28;
        } while (!bVar36);
      }
      uVar34 = uVar24 & 0xffffffff;
      bVar36 = false;
      uVar29 = local_e0;
      if (1 < (longlong)local_130) {
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar17;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_a8[uVar29];
          uVar20 = SUB168(auVar4 * auVar7,8);
          uVar19 = SUB168(auVar4 * auVar7,0);
          uVar27 = local_a8[uVar34 + uVar29 + 6];
          uVar33 = uVar27 - uVar19;
          local_a8[uVar34 + uVar29 + 6] = uVar33 - (bVar36 != false);
          uVar27 = (ulonglong)(uVar27 < uVar19 || uVar33 < (bVar36 != false));
          uVar33 = local_a8[uVar34 + uVar29 + 7] - uVar20;
          bVar36 = local_a8[uVar34 + uVar29 + 7] < uVar20 || uVar33 < uVar27;
          local_a8[uVar34 + uVar29 + 7] = uVar33 - uVar27;
          uVar29 = uVar29 + 2;
        } while ((longlong)uVar29 < (longlong)local_120);
        uVar27 = local_a8[lVar32 + 6];
      }
      local_a8[lVar32 + 6] = uVar27 - bVar36;
      if ((int)local_104 < (int)uVar26) {
        bVar36 = false;
        uVar27 = local_118;
        do {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar17;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_a8[uVar27];
          uVar20 = SUB168(auVar5 * auVar8,8);
          uVar19 = SUB168(auVar5 * auVar8,0);
          uVar29 = local_a8[uVar34 + uVar27 + 6];
          uVar33 = uVar29 - uVar19;
          local_a8[uVar34 + uVar27 + 6] = uVar33 - bVar36;
          uVar29 = (ulonglong)(uVar29 < uVar19 || uVar33 < bVar36);
          uVar33 = local_a8[uVar34 + uVar27 + 7] - uVar20;
          bVar36 = local_a8[uVar34 + uVar27 + 7] < uVar20 || uVar33 < uVar29;
          local_a8[uVar34 + uVar27 + 7] = uVar33 - uVar29;
          uVar27 = uVar27 + 2;
        } while ((longlong)uVar27 < (longlong)local_120);
        if ((bVar36) && (uVar17 = uVar17 - 1, 0 < (longlong)local_130)) {
          uVar27 = 0;
          bVar36 = false;
          do {
            uVar29 = (ulonglong)bVar36;
            uVar33 = local_a8[uVar34 + uVar27 + 6] + local_a8[uVar27];
            bVar36 = CARRY8(local_a8[uVar34 + uVar27 + 6],local_a8[uVar27]) || CARRY8(uVar33,uVar29)
            ;
            local_a8[uVar34 + uVar27 + 6] = uVar33 + uVar29;
            uVar27 = uVar27 + 1;
          } while (local_e8 != uVar27);
        }
      }
      local_f0[uVar24] = uVar17;
      bVar36 = 0 < (longlong)uVar24;
      uVar24 = uVar24 - 1;
    } while (bVar36);
  }
  if (local_108 == 0) {
    if (0 < (longlong)local_130) {
      memcpy(local_110,local_a8 + 6,lVar22 + 0x28U & 0x7fffffff8);
      goto LAB_147e5b446;
    }
LAB_147e5b44e:
    memset(puVar12 + lVar21 + 5,0,(0x7fffffff0U - (lVar22 + -8) & 0x7fffffff8) + 8);
  }
  else {
    if ((longlong)local_130 < 1) goto LAB_147e5b44e;
    uVar28 = 0;
    uVar24 = local_78[0];
    do {
      uVar27 = uVar24 >> ((byte)local_f8 & 0x3f);
      uVar24 = local_a8[uVar28 + 7];
      local_110[uVar28] = uVar24 << (0x40U - (char)local_108 & 0x3f) | uVar27;
      uVar28 = uVar28 + 1;
    } while ((local_130 & 0xffffffff) != uVar28);
LAB_147e5b446:
    if ((longlong)local_130 < 5) goto LAB_147e5b44e;
  }
  if ((int)local_128 < 5) {
    memset(local_f0 + local_100 + 6,0,(0x7fffffff0U - lVar16 & 0x7fffffff8) + 8);
  }
LAB_147e5aeea:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5b4ca FUN_147e5b4ca body=199 status=ok
// SIG undefined FUN_147e5b4ca(void)

void FUN_147e5b4ca(longlong param_1,ulonglong param_2,longlong param_3,ulonglong *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  undefined8 local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = 4;
  do {
    uVar4 = (uint)uVar5;
    if (*(longlong *)(param_1 + uVar5 * 8) != 0) goto LAB_147e5b509;
    *(undefined8 *)(param_3 + uVar5 * 8) = 0;
    uVar5 = (ulonglong)(uVar4 - 1);
  } while (1 < uVar4);
  uVar4 = 0;
LAB_147e5b509:
  uVar5 = *(ulonglong *)(param_1 + (longlong)(int)uVar4 * 8);
  local_18 = uVar5 % param_2;
  *(ulonglong *)(param_3 + (longlong)(int)uVar4 * 8) = uVar5 / param_2;
  if (0 < (int)uVar4) {
    puVar3 = (undefined8 *)(param_3 + (ulonglong)uVar4 * 8);
    uVar5 = (ulonglong)uVar4 + 1;
    do {
      puVar3 = puVar3 + -1;
      local_20 = *(undefined8 *)(param_1 + -0x10 + uVar5 * 8);
      local_28 = local_18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      auVar2._8_8_ = local_18;
      auVar2._0_8_ = local_20;
      local_18 = SUB168(auVar2 % auVar1,0);
      *puVar3 = SUB168(auVar2 / auVar1,0);
      uVar5 = uVar5 - 1;
      local_30 = param_2;
    } while (1 < uVar5);
  }
  *param_4 = local_18;
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5b592 FUN_147e5b592 body=117 status=ok
// SIG undefined FUN_147e5b592(void)

void FUN_147e5b592(longlong param_1,uint *param_2,uint param_3)

{
  ulonglong uVar1;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  
  uVar4 = param_3 >> 6;
  uVar5 = (ulonglong)uVar4;
  uVar1 = *(ulonglong *)(param_1 + 0x60 + uVar5 * 8);
  sVar2 = (sbyte)(param_3 & 0x3f);
  if ((param_3 & 0x3f) == 0 || uVar4 == 5) {
    uVar3 = (uint)((longlong)uVar1 >> sVar2);
    uVar6 = (uint)(*(longlong *)(param_1 + 0x30 + uVar5 * 8) >> sVar2);
    uVar4 = (uint)(*(longlong *)(param_1 + uVar5 * 8) >> sVar2);
  }
  else {
    uVar5 = (ulonglong)(uVar4 << 3);
    uVar3 = (uint)(uVar1 >> sVar2) | (uint)(*(longlong *)(param_1 + 0x68 + uVar5) << 0x40 - sVar2);
    uVar6 = (uint)(*(ulonglong *)(param_1 + 0x30 + uVar5) >> sVar2) |
            (uint)(*(longlong *)(param_1 + 0x38 + uVar5) << 0x40 - sVar2);
    uVar4 = (uint)(*(ulonglong *)(param_1 + uVar5) >> sVar2) |
            (uint)(*(longlong *)(param_1 + 8 + uVar5) << 0x40 - sVar2);
  }
  *param_2 = uVar4;
  param_2[1] = uVar6;
  param_2[2] = uVar3;
  return;
}



// FUNCTION 147e5b607 FUN_147e5b607 body=395 status=ok
// SIG undefined FUN_147e5b607(void)

void FUN_147e5b607(longlong *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  longlong local_60 [4];
  longlong local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = param_1[1];
  if (*param_1 == 0 && lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  if (*param_2 == 0 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  if ((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  uVar4 = param_2[1] >> 0x3f;
  lVar7 = 0;
  bVar8 = false;
  plVar5 = local_60;
  bVar9 = true;
  do {
    bVar3 = bVar9;
    uVar1 = (ulonglong)bVar8;
    uVar2 = (param_2[lVar7] ^ uVar4) - uVar4;
    bVar8 = (param_2[lVar7] ^ uVar4) < uVar4 || uVar2 < uVar1;
    *plVar5 = uVar2 - uVar1;
    lVar7 = 1;
    plVar5 = local_60 + 1;
    bVar9 = false;
  } while (bVar3);
  uVar4 = lVar6 >> 0x3f;
  lVar6 = 0;
  bVar9 = false;
  plVar5 = local_60 + 3;
  bVar8 = true;
  do {
    bVar3 = bVar8;
    uVar1 = (ulonglong)bVar9;
    uVar2 = (param_1[lVar6] ^ uVar4) - uVar4;
    bVar9 = (param_1[lVar6] ^ uVar4) < uVar4 || uVar2 < uVar1;
    *plVar5 = uVar2 - uVar1;
    lVar6 = 1;
    plVar5 = &local_40;
    bVar8 = false;
  } while (bVar3);
  FUN_147e5bc09(local_38,local_60 + 3,local_60);
  uVar4 = param_3[2] >> 0x3f;
  lVar6 = 0;
  bVar8 = false;
  do {
    uVar1 = (ulonglong)bVar8;
    uVar2 = (param_3[lVar6] ^ uVar4) - uVar4;
    bVar8 = (param_3[lVar6] ^ uVar4) < uVar4 || uVar2 < uVar1;
    local_60[lVar6] = uVar2 - uVar1;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  plVar5 = local_60 + 3;
  FUN_147e5bf95(plVar5,local_60,local_38);
  FUN_147e5ba2d(param_1,plVar5,param_1);
  FUN_147e5ba2d(param_2,plVar5,param_2);
  FUN_147e5bb14(param_3,plVar5,param_3);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5ba2d FUN_147e5ba2d body=230 status=ok
// SIG undefined FUN_147e5ba2d(void)

void FUN_147e5ba2d(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 local_40 [16];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 8);
  uVar4 = lVar5 >> 0x3f;
  lVar7 = 0;
  bVar10 = false;
  plVar9 = &local_30;
  bVar3 = true;
  do {
    bVar8 = bVar3;
    uVar6 = *(ulonglong *)(param_1 + lVar7 * 8) ^ uVar4;
    uVar1 = (ulonglong)bVar10;
    uVar2 = uVar6 - uVar4;
    bVar10 = uVar6 < uVar4 || uVar2 < uVar1;
    *plVar9 = uVar2 - uVar1;
    lVar7 = 1;
    plVar9 = &local_28;
    bVar3 = false;
  } while (bVar8);
  FUN_147e5c29b(&local_30,param_2,&local_50,local_40);
  lVar7 = local_48;
  if (lVar5 < 0) {
    bVar10 = false;
    lVar5 = local_50;
    plVar9 = &local_58;
    bVar3 = true;
    do {
      bVar8 = bVar3;
      uVar4 = (ulonglong)bVar10;
      bVar10 = lVar5 != 0 || (ulonglong)-lVar5 < uVar4;
      *plVar9 = -lVar5 - uVar4;
      lVar7 = local_60;
      local_50 = local_58;
      lVar5 = local_48;
      plVar9 = &local_60;
      bVar3 = false;
    } while (bVar8);
  }
  *param_3 = local_50;
  param_3[1] = lVar7;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5bb14 FUN_147e5bb14 body=244 status=ok
// SIG undefined FUN_147e5bb14(void)

void FUN_147e5bb14(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  longlong local_50 [7];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar3 = lVar4 >> 0x3f;
  lVar5 = 0;
  bVar7 = false;
  do {
    uVar6 = *(ulonglong *)(param_1 + lVar5 * 8) ^ uVar3;
    uVar1 = (ulonglong)bVar7;
    uVar2 = uVar6 - uVar3;
    bVar7 = uVar6 < uVar3 || uVar2 < uVar1;
    local_50[lVar5] = uVar2 - uVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  FUN_147e5c8a9(local_50,param_2,&local_78,local_60);
  if (lVar4 < 0) {
    local_50[5] = local_68;
    local_50[3] = local_78;
    local_50[4] = uStack_70;
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar3 = (ulonglong)bVar7;
      uVar1 = -local_50[lVar4 + 3];
      bVar7 = local_50[lVar4 + 3] != 0 || uVar1 < uVar3;
      (&local_98)[lVar4] = uVar1 - uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
  }
  else {
    local_88 = local_68;
    local_98 = local_78;
    uStack_90 = uStack_70;
  }
  *(undefined8 *)(param_3 + 4) = local_88;
  *param_3 = (undefined4)local_98;
  param_3[1] = local_98._4_4_;
  param_3[2] = (undefined4)uStack_90;
  param_3[3] = uStack_90._4_4_;
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5bc09 FUN_147e5bc09 body=421 status=ok
// SIG undefined FUN_147e5bc09(void)

ulonglong * FUN_147e5bc09(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uVar7 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  iVar5 = FUN_147e5bdaf(&local_48);
  FUN_147e5be0c(&local_48,iVar5);
  iVar6 = FUN_147e5bdaf(param_1);
  FUN_147e5be0c(param_1,iVar6);
  uVar10 = *param_1;
  uVar8 = param_1[1];
  bVar13 = uStack_40 == uVar8;
  if (local_48 != uVar10 || !bVar13) {
    do {
      if ((uVar8 < uStack_40) || ((bool)(uVar10 < local_48 & bVar13))) {
        bVar13 = false;
        puVar9 = &local_50;
        bVar4 = true;
        do {
          bVar12 = bVar4;
          uVar11 = (ulonglong)bVar13;
          bVar13 = local_48 < uVar10 || local_48 - uVar10 < uVar11;
          *puVar9 = (local_48 - uVar10) - uVar11;
          uVar10 = uVar8;
          local_48 = uStack_40;
          puVar9 = &local_58;
          bVar4 = false;
        } while (bVar12);
        local_48 = local_50;
        uStack_40 = local_58;
        uVar7 = FUN_147e5bdaf(&local_48);
        puVar9 = &local_48;
      }
      else {
        bVar13 = false;
        uVar11 = local_48;
        puVar9 = &local_50;
        bVar4 = true;
        do {
          bVar12 = bVar4;
          uVar1 = (ulonglong)bVar13;
          bVar13 = uVar10 < uVar11 || uVar10 - uVar11 < uVar1;
          *puVar9 = (uVar10 - uVar11) - uVar1;
          uVar10 = uVar8;
          uVar11 = uStack_40;
          puVar9 = &local_58;
          bVar4 = false;
        } while (bVar12);
        *param_1 = local_50;
        param_1[1] = local_58;
        uVar7 = FUN_147e5bdaf(param_1);
        puVar9 = param_1;
      }
      FUN_147e5be0c(puVar9,uVar7);
      uVar10 = *param_1;
      uVar8 = param_1[1];
      bVar13 = uStack_40 == uVar8;
    } while (uStack_40 != uVar8 || local_48 != uVar10);
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  FUN_147e5becf(param_1,iVar6);
  *(uint *)((longlong)param_1 + 0xc) = (uint)*(byte *)((longlong)param_1 + 0xc);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5bdaf FUN_147e5bdaf body=93 status=ok
// SIG undefined FUN_147e5bdaf(void)

int FUN_147e5bdaf(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  iVar4 = 0;
  if (lVar5 == 0) {
    lVar5 = param_1[1];
    iVar4 = 0x40;
    if (lVar5 == 0) {
      return 0x80;
    }
  }
  iVar2 = (*(code *)PTR_FUN_14c6da350)(~(uint)lVar5 & (uint)lVar5 - 1);
  uVar1 = (uint)((ulonglong)lVar5 >> 0x20);
  iVar3 = (*(code *)PTR_FUN_14c6da350)(~uVar1 & uVar1 - 1);
  iVar3 = iVar3 + 0x20;
  if (iVar2 < 0x20) {
    iVar3 = iVar2;
  }
  return iVar3 + iVar4;
}



// FUNCTION 147e5be0c FUN_147e5be0c body=195 status=ok
// SIG undefined FUN_147e5be0c(void)

void FUN_147e5be0c(ulonglong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (1 < (int)uVar4) goto LAB_147e5be47;
    uVar2 = (ulonglong)(2 - uVar4);
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(int)uVar4];
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    if ((int)uVar4 < 1) {
      uVar2 = (ulonglong)(1 - uVar4);
      puVar3 = param_1;
      do {
        *puVar3 = puVar3[(longlong)(int)uVar4 + 1] << (0x40U - sVar1 & 0x3f) |
                  puVar3[(int)uVar4] >> sVar1;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    param_1[(int)(1 - uVar4)] = param_1[1] >> sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e5be47:
  memset(param_1 + (longlong)(int)-uVar4 + 2,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e5becf FUN_147e5becf body=198 status=ok
// SIG undefined FUN_147e5becf(void)

void FUN_147e5becf(longlong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (1 < (int)uVar4) goto LAB_147e5bf03;
    lVar3 = 2;
    do {
      param_1[lVar3 + -1] = param_1[(lVar3 + -1) - (longlong)(int)uVar4];
      lVar3 = lVar3 + -1;
    } while ((int)uVar4 < lVar3);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    uVar2 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar2 = (ulonglong)(int)uVar4;
      lVar3 = 1;
      do {
        param_1[lVar3] =
             (ulonglong)param_1[(lVar3 + -1) - uVar2] >> (0x40U - sVar1 & 0x3f) |
             param_1[lVar3 - uVar2] << sVar1;
        lVar3 = lVar3 + -1;
      } while ((longlong)uVar2 < lVar3);
    }
    param_1[uVar2] = *param_1 << sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e5bf03:
  memset(param_1,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e5bf95 FUN_147e5bf95 body=486 status=ok
// SIG undefined FUN_147e5bf95(void)

ulonglong * FUN_147e5bf95(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong *puVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_2[2];
  local_68 = *param_2;
  uStack_60 = param_2[1];
  uVar7 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  iVar5 = FUN_147e5c17c(&local_68);
  FUN_147e5c1dc(&local_68,iVar5);
  iVar6 = FUN_147e5bdaf(param_1);
  FUN_147e5be0c(param_1,iVar6);
  uVar9 = *param_1;
  uVar8 = param_1[1];
  bVar13 = uStack_60 == uVar8;
  if (((!bVar13) || (local_68 != uVar9)) || (local_58 != 0)) {
    do {
      if (((local_58 != 0) || (uVar8 < uStack_60)) || ((bool)(bVar13 & uVar9 < local_68))) {
        bVar13 = false;
        puVar12 = &local_70;
        bVar4 = true;
        do {
          bVar11 = bVar4;
          uVar10 = (ulonglong)bVar13;
          bVar13 = local_68 < uVar9 || local_68 - uVar9 < uVar10;
          *puVar12 = (local_68 - uVar9) - uVar10;
          uVar9 = uVar8;
          local_68 = uStack_60;
          puVar12 = &local_78;
          bVar4 = false;
        } while (bVar11);
        local_58 = (local_58 - ((longlong)uVar8 >> 0x3f)) - (ulonglong)bVar13;
        local_68 = local_70;
        uStack_60 = local_78;
        uVar7 = FUN_147e5c17c(&local_68);
        FUN_147e5c1dc(&local_68,uVar7);
      }
      else {
        bVar13 = false;
        uVar10 = local_68;
        puVar12 = &local_70;
        bVar4 = true;
        do {
          bVar11 = bVar4;
          uVar1 = (ulonglong)bVar13;
          bVar13 = uVar9 < uVar10 || uVar9 - uVar10 < uVar1;
          *puVar12 = (uVar9 - uVar10) - uVar1;
          uVar9 = uVar8;
          uVar10 = uStack_60;
          puVar12 = &local_78;
          bVar4 = false;
        } while (bVar11);
        *param_1 = local_70;
        param_1[1] = local_78;
        uVar7 = FUN_147e5bdaf(param_1);
        FUN_147e5be0c(param_1,uVar7);
      }
      uVar9 = *param_1;
      uVar8 = param_1[1];
      bVar13 = uStack_60 == uVar8;
    } while (((!bVar13) || (local_68 != uVar9)) || (local_58 != 0));
  }
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  FUN_147e5becf(param_1,iVar6);
  *(uint *)((longlong)param_1 + 0xc) = (uint)*(byte *)((longlong)param_1 + 0xc);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5c17c FUN_147e5c17c body=96 status=ok
// SIG undefined FUN_147e5c17c(void)

int FUN_147e5c17c(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      iVar3 = (*(code *)PTR_FUN_14c6da350)(~(uint)lVar1 & (uint)lVar1 - 1);
      uVar2 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar4 = (*(code *)PTR_FUN_14c6da350)(~uVar2 & uVar2 - 1);
      iVar4 = iVar4 + 0x20;
      if (iVar3 < 0x20) {
        iVar4 = iVar3;
      }
      return iVar4 - (int)lVar5;
    }
    lVar5 = lVar5 + -0x40;
    param_1 = param_1 + 1;
  } while (lVar5 != -0xc0);
  return 0xc0;
}



// FUNCTION 147e5c1dc FUN_147e5c1dc body=191 status=ok
// SIG undefined FUN_147e5c1dc(void)

void FUN_147e5c1dc(ulonglong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (2 < (int)uVar4) goto LAB_147e5c24e;
    uVar2 = (ulonglong)(3 - uVar4);
    puVar3 = param_1;
    do {
      *puVar3 = puVar3[(int)uVar4];
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    if ((int)uVar4 < 2) {
      uVar2 = (ulonglong)(2 - uVar4);
      puVar3 = param_1;
      do {
        *puVar3 = puVar3[(longlong)(int)uVar4 + 1] << (0x40U - sVar1 & 0x3f) |
                  puVar3[(int)uVar4] >> sVar1;
        puVar3 = puVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    param_1[(int)(2 - uVar4)] = param_1[2] >> sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e5c24e:
  memset(param_1 + (longlong)(int)-uVar4 + 3,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e5c29b FUN_147e5c29b body=1549 status=ok
// SIG undefined FUN_147e5c29b(void)

void FUN_147e5c29b(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
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
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  bool bVar35;
  undefined1 auStack_138 [40];
  longlong local_110;
  ulonglong *local_108;
  ulonglong *local_100;
  ulonglong *local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  uint local_cc;
  ulonglong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88 [9];
  
  local_88[8] = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_3 = 0;
  param_3[1] = 0;
  if ((param_1[1] < param_2[1]) || (param_1[1] == param_2[1] && *param_1 < *param_2)) {
    *param_4 = *param_1;
    param_4[1] = param_1[1];
    goto LAB_147e5c3de;
  }
  lVar32 = 0x300000000;
  lVar31 = 0;
  uVar20 = 0;
  do {
    uVar19 = uVar20;
    lVar30 = lVar31;
    lVar32 = lVar32 + -0x100000000;
    lVar31 = lVar30 + -8;
    uVar20 = uVar19 - 1;
  } while (param_1[uVar19 + 1] == 0);
  lVar27 = 0;
  uVar20 = uVar19 - 1 & 0xffffffff;
  lVar13 = 0;
  lVar14 = 0;
  do {
    lVar24 = lVar14;
    lVar23 = lVar13;
    uVar25 = (int)uVar20 + 1;
    uVar20 = (ulonglong)uVar25;
    lVar27 = lVar27 + 0x100000000;
    lVar13 = lVar23 + -1;
    lVar14 = lVar24 + -8;
  } while (param_2[lVar23 + 1] == 0);
  local_f8 = param_1;
  if (lVar23 + -1 == -2) {
    *param_4 = 0;
    param_4[1] = 0;
    uVar20 = *param_2;
    uVar19 = param_1[1];
    if (uVar19 == 0) {
      param_3[1] = 0;
      uVar19 = *param_1 % uVar20;
      *param_3 = *param_1 / uVar20;
    }
    else {
      local_b0 = uVar19 % uVar20;
      param_3[1] = uVar19 / uVar20;
      local_a8 = *param_1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar20;
      auVar4._8_8_ = local_b0;
      auVar4._0_8_ = local_a8;
      uVar19 = SUB168(auVar4 % auVar2,0);
      *param_3 = SUB168(auVar4 / auVar2,0);
      local_b8 = uVar20;
      local_88[4] = uVar19;
    }
    *param_4 = uVar19;
    goto LAB_147e5c3de;
  }
  local_110 = uVar19 + 2;
  local_e8 = lVar23 + 2;
  local_f0 = lVar23 + 1;
  local_108 = param_3;
  local_100 = param_4;
  local_d8 = uVar19 + 1;
  local_cc = FUN_147e5105f();
  iVar18 = (int)local_110;
  local_e0 = (ulonglong)local_cc;
  if (local_cc == 0) {
    if (0 < iVar18) {
      memcpy(local_88 + 4,local_f8,lVar30 + 0x10U & 0x3fffffff8);
      iVar18 = (int)local_110;
    }
    *(undefined8 *)((longlong)local_88 + (lVar32 >> 0x1d) + 0x20) = 0;
    if (0 < (longlong)local_e8) {
      memcpy(local_88 + 2,param_2,lVar24 + 0x10U & 0x7fffffff8);
      iVar18 = (int)local_110;
    }
  }
  else {
    bVar12 = (byte)local_cc;
    bVar16 = 0x40 - bVar12;
    if (1 < (longlong)local_e8) {
      uVar20 = local_f0 & 0xffffffff;
      local_88[uVar20 + 2] =
           param_2[uVar20 - 1] >> (bVar16 & 0x3f) | param_2[uVar20] << (bVar12 & 0x3f);
    }
    local_88[2] = *param_2 << (bVar12 & 0x3f);
    *(ulonglong *)((longlong)local_88 + (lVar32 >> 0x1d) + 0x20) =
         local_f8[uVar19 + 1] >> (bVar16 & 0x3f);
    if (1 < iVar18) {
      uVar20 = local_d8 & 0xffffffff;
      local_88[uVar20 + 4] =
           local_f8[uVar20 - 1] >> (bVar16 & 0x3f) | local_f8[uVar20] << (bVar12 & 0x3f);
    }
    local_88[4] = *local_f8 << (bVar12 & 0x3f);
  }
  uVar20 = local_e8;
  uVar33 = (uint)local_e8;
  if ((int)uVar33 <= iVar18) {
    uVar29 = local_88[lVar23 + 3];
    local_c0 = 0x100000000 - lVar27 >> 0x20;
    local_d8 = CONCAT44(local_d8._4_4_,~uVar33) & 0xffffffff00000001;
    local_c8 = (ulonglong)(uVar33 & 1);
    local_f0 = (ulonglong)((uint)local_f0 & 1);
    local_f8 = (ulonglong *)(0x300000000 - lVar27 >> 0x20);
    uVar26 = (longlong)(int)uVar25;
    do {
      uVar28 = local_88[(longlong)local_f8 + uVar26 + 4];
      uVar17 = 0xffffffffffffffff;
      if (uVar28 < uVar29) {
        local_90 = local_88[(longlong)local_f8 + uVar26 + 3];
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar29;
        auVar5._8_8_ = uVar28;
        auVar5._0_8_ = local_90;
        local_88[1] = SUB168(auVar5 / auVar3,0);
        uVar21 = SUB168(auVar5 % auVar3,0);
        local_88[0] = uVar21;
        uVar15 = local_88[local_c0 + 2];
        uVar34 = uVar15 * local_88[1];
        do {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_88[1];
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar15;
          uVar22 = SUB168(auVar6 * auVar9,8);
          local_a0 = uVar29;
          local_98 = uVar28;
          if ((uVar22 <= uVar21) &&
             ((uVar17 = local_88[1], uVar21 != uVar22 ||
              (uVar34 <= local_88[(longlong)local_f8 + uVar26 + 2])))) break;
          local_88[1] = local_88[1] - 1;
          uVar34 = uVar34 - uVar15;
          bVar35 = CARRY8(uVar21,uVar29);
          uVar21 = uVar21 + uVar29;
          uVar17 = local_88[1];
        } while (!bVar35);
      }
      if ((longlong)local_e8 < 2) {
        bVar35 = false;
      }
      else {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar17;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = local_88[local_c8 + 2];
        uVar21 = SUB168(auVar7 * auVar10,8);
        uVar15 = SUB168(auVar7 * auVar10,0);
        lVar32 = (uVar26 & 0xffffffff) + local_c8;
        puVar1 = local_88 + lVar32 + 4;
        uVar28 = *puVar1;
        *puVar1 = *puVar1 - uVar15;
        puVar1 = local_88 + lVar32 + 5;
        uVar28 = (ulonglong)(uVar28 < uVar15);
        uVar15 = *puVar1 - uVar21;
        bVar35 = *puVar1 < uVar21 || uVar15 < uVar28;
        *puVar1 = uVar15 - uVar28;
        uVar28 = local_88[(longlong)local_f8 + uVar26 + 4];
      }
      local_88[(longlong)local_f8 + uVar26 + 4] = uVar28 - bVar35;
      if ((int)local_d8 < (int)uVar33) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar17;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = local_88[local_f0 + 2];
        uVar34 = SUB168(auVar8 * auVar11,8);
        uVar15 = SUB168(auVar8 * auVar11,0);
        lVar32 = (uVar26 & 0xffffffff) + local_f0;
        puVar1 = local_88 + lVar32 + 4;
        uVar28 = *puVar1;
        *puVar1 = *puVar1 - uVar15;
        puVar1 = local_88 + lVar32 + 5;
        uVar15 = (ulonglong)(uVar28 < uVar15);
        uVar28 = *puVar1;
        uVar21 = *puVar1 - uVar34;
        *puVar1 = uVar21 - uVar15;
        if ((uVar28 < uVar34 || uVar21 < uVar15) && (uVar17 = uVar17 - 1, 0 < (longlong)local_e8)) {
          uVar28 = 0;
          bVar35 = false;
          do {
            uVar15 = (ulonglong)bVar35;
            uVar21 = local_88[(uVar26 & 0xffffffff) + uVar28 + 4] + local_88[uVar28 + 2];
            bVar35 = CARRY8(local_88[(uVar26 & 0xffffffff) + uVar28 + 4],local_88[uVar28 + 2]) ||
                     CARRY8(uVar21,uVar15);
            local_88[(uVar26 & 0xffffffff) + uVar28 + 4] = uVar21 + uVar15;
            uVar28 = uVar28 + 1;
          } while ((local_e8 & 0xffffffff) != uVar28);
        }
      }
      local_108[uVar26] = uVar17;
      bVar35 = 0 < (longlong)uVar26;
      uVar26 = uVar26 - 1;
    } while (bVar35);
  }
  if (local_cc == 0) {
    if (0 < (longlong)local_e8) {
      memcpy(local_100,local_88 + 4,lVar24 + 0x10U & 0x7fffffff8);
      goto LAB_147e5c82c;
    }
LAB_147e5c832:
    memset(local_100 + lVar23 + 2,0,(0x7fffffff0U - (lVar24 + -8) & 0x7fffffff8) + 8);
  }
  else {
    if ((longlong)local_e8 < 1) goto LAB_147e5c832;
    uVar29 = 0;
    uVar26 = local_88[4];
    do {
      uVar28 = uVar26 >> ((byte)local_e0 & 0x3f);
      uVar26 = local_88[uVar29 + 5];
      local_100[uVar29] = uVar26 << (0x40U - (char)local_cc & 0x3f) | uVar28;
      uVar29 = uVar29 + 1;
    } while ((local_e8 & 0xffffffff) != uVar29);
LAB_147e5c82c:
    if ((longlong)uVar20 < 2) goto LAB_147e5c832;
  }
  if ((int)local_110 < 2) {
    memset(local_108 + uVar19 + 2,0,(0x7fffffff0U - lVar31 & 0x7fffffff8) + 8);
  }
LAB_147e5c3de:
  if ((local_88[8] ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5c8a9 FUN_147e5c8a9 body=1460 status=ok
// SIG undefined FUN_147e5c8a9(void)

void FUN_147e5c8a9(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  bool bVar33;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong *local_c8;
  undefined8 local_c0;
  uint local_b4;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88 [9];
  
  local_88[8] = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if ((param_1[2] == 0) &&
     (param_1[1] < param_2[1] || param_1[1] == param_2[1] && *param_1 < *param_2)) {
    *param_4 = *param_1;
    param_4[1] = param_1[1];
    goto LAB_147e5c913;
  }
  lVar32 = 0x400000000;
  lVar30 = 0;
  lVar12 = 0;
  do {
    lVar31 = lVar12;
    lVar29 = lVar30;
    lVar32 = lVar32 + -0x100000000;
    lVar30 = lVar29 + -8;
    lVar12 = lVar31 + -1;
  } while (param_1[lVar31 + 2] == 0);
  iVar18 = (int)(lVar31 + -1);
  iVar25 = iVar18 + 1;
  local_c0 = lVar31 + 2;
  lVar24 = 0;
  lVar12 = 0;
  lVar13 = 0;
  do {
    lVar23 = lVar13;
    lVar22 = lVar12;
    iVar25 = iVar25 + 1;
    lVar24 = lVar24 + 0x100000000;
    lVar12 = lVar22 + -1;
    lVar13 = lVar23 + -8;
  } while (param_2[lVar22 + 1] == 0);
  local_f0 = param_3;
  local_e0 = param_1;
  local_c8 = param_4;
  if (lVar22 + -1 == -2) {
    *param_4 = 0;
    param_4[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_88[8] ^ (ulonglong)auStack_118);
  }
  local_e8 = lVar31 + 3;
  local_f8 = lVar22 + 2;
  local_d8 = lVar22 + 1;
  local_b4 = FUN_147e5105f();
  iVar14 = (int)local_e8;
  local_d0 = (ulonglong)local_b4;
  if (local_b4 == 0) {
    if (0 < iVar14) {
      memcpy(local_88 + 4,local_e0,lVar29 + 0x18U & 0x3fffffff8);
      iVar14 = (int)local_e8;
    }
    *(undefined8 *)((longlong)local_88 + (lVar32 >> 0x1d) + 0x20) = 0;
    if (0 < (longlong)local_f8) {
      memcpy(local_88 + 2,param_2,lVar23 + 0x10U & 0x7fffffff8);
      iVar14 = (int)local_e8;
    }
  }
  else {
    bVar10 = (byte)local_b4;
    bVar16 = 0x40 - bVar10;
    if (1 < (longlong)local_f8) {
      uVar19 = local_d8 & 0xffffffff;
      local_88[uVar19 + 2] =
           param_2[uVar19 - 1] >> (bVar16 & 0x3f) | param_2[uVar19] << (bVar10 & 0x3f);
    }
    local_88[2] = *param_2 << (bVar10 & 0x3f);
    *(ulonglong *)((longlong)local_88 + (lVar32 >> 0x1d) + 0x20) =
         local_e0[lVar31 + 2] >> (bVar16 & 0x3f);
    if (1 < iVar14) {
      iVar18 = iVar18 + 4;
      uVar19 = local_c0 & 0xffffffff;
      do {
        local_88[uVar19 + 4] =
             local_e0[uVar19 - 1 & 0xffffffff] >> (bVar16 & 0x3f) |
             local_e0[uVar19] << (bVar10 & 0x3f);
        iVar18 = iVar18 + -1;
        uVar19 = uVar19 - 1;
      } while (1 < iVar18);
    }
    local_88[4] = *local_e0 << (bVar10 & 0x3f);
  }
  puVar11 = local_c8;
  if ((int)(uint)local_f8 <= iVar14) {
    uVar19 = local_88[lVar22 + 3];
    local_a8 = 0x100000000 - lVar24 >> 0x20;
    local_c0 = CONCAT44(local_c0._4_4_,~(uint)local_f8) & 0xffffffff00000001;
    local_b0 = (ulonglong)((uint)local_f8 & 1);
    local_d8 = (ulonglong)((uint)local_d8 & 1);
    local_e0 = (ulonglong *)(0x300000000 - lVar24 >> 0x20);
    uVar26 = (longlong)iVar25;
    do {
      uVar27 = local_88[(longlong)local_e0 + uVar26 + 4];
      uVar17 = 0xffffffffffffffff;
      if (uVar27 < uVar19) {
        local_90 = local_88[(longlong)local_e0 + uVar26 + 3];
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar19;
        auVar3._8_8_ = uVar27;
        auVar3._0_8_ = local_90;
        local_88[1] = SUB168(auVar3 / auVar2,0);
        uVar20 = SUB168(auVar3 % auVar2,0);
        local_88[0] = uVar20;
        uVar15 = local_88[local_a8 + 2];
        uVar28 = uVar15 * local_88[1];
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_88[1];
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar15;
          uVar21 = SUB168(auVar4 * auVar7,8);
          local_a0 = uVar19;
          local_98 = uVar27;
          if ((uVar21 <= uVar20) &&
             ((uVar17 = local_88[1], uVar20 != uVar21 ||
              (uVar28 <= local_88[(longlong)local_e0 + uVar26 + 2])))) break;
          local_88[1] = local_88[1] - 1;
          uVar28 = uVar28 - uVar15;
          bVar33 = CARRY8(uVar20,uVar19);
          uVar20 = uVar20 + uVar19;
          uVar17 = local_88[1];
        } while (!bVar33);
      }
      if ((longlong)local_f8 < 2) {
        bVar33 = false;
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar17;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = local_88[local_b0 + 2];
        uVar20 = SUB168(auVar5 * auVar8,8);
        uVar15 = SUB168(auVar5 * auVar8,0);
        lVar32 = (uVar26 & 0xffffffff) + local_b0;
        puVar1 = local_88 + lVar32 + 4;
        uVar27 = *puVar1;
        *puVar1 = *puVar1 - uVar15;
        puVar1 = local_88 + lVar32 + 5;
        uVar27 = (ulonglong)(uVar27 < uVar15);
        uVar15 = *puVar1 - uVar20;
        bVar33 = *puVar1 < uVar20 || uVar15 < uVar27;
        *puVar1 = uVar15 - uVar27;
        uVar27 = local_88[(longlong)local_e0 + uVar26 + 4];
      }
      local_88[(longlong)local_e0 + uVar26 + 4] = uVar27 - bVar33;
      if ((int)local_c0 < (int)(uint)local_f8) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar17;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = local_88[local_d8 + 2];
        uVar28 = SUB168(auVar6 * auVar9,8);
        uVar15 = SUB168(auVar6 * auVar9,0);
        lVar32 = (uVar26 & 0xffffffff) + local_d8;
        puVar1 = local_88 + lVar32 + 4;
        uVar27 = *puVar1;
        *puVar1 = *puVar1 - uVar15;
        puVar1 = local_88 + lVar32 + 5;
        uVar15 = (ulonglong)(uVar27 < uVar15);
        uVar27 = *puVar1;
        uVar20 = *puVar1 - uVar28;
        *puVar1 = uVar20 - uVar15;
        if ((uVar27 < uVar28 || uVar20 < uVar15) && (uVar17 = uVar17 - 1, 0 < (longlong)local_f8)) {
          uVar27 = 0;
          bVar33 = false;
          do {
            uVar15 = (ulonglong)bVar33;
            uVar20 = local_88[(uVar26 & 0xffffffff) + uVar27 + 4] + local_88[uVar27 + 2];
            bVar33 = CARRY8(local_88[(uVar26 & 0xffffffff) + uVar27 + 4],local_88[uVar27 + 2]) ||
                     CARRY8(uVar20,uVar15);
            local_88[(uVar26 & 0xffffffff) + uVar27 + 4] = uVar20 + uVar15;
            uVar27 = uVar27 + 1;
          } while ((local_f8 & 0xffffffff) != uVar27);
        }
      }
      local_f0[uVar26] = uVar17;
      bVar33 = 0 < (longlong)uVar26;
      uVar26 = uVar26 - 1;
    } while (bVar33);
  }
  if (local_b4 == 0) {
    if (0 < (longlong)local_f8) {
      memcpy(local_c8,local_88 + 4,lVar23 + 0x10U & 0x7fffffff8);
      goto LAB_147e5ce07;
    }
LAB_147e5ce0f:
    memset(puVar11 + lVar22 + 2,0,(0x7fffffff0U - (lVar23 + -8) & 0x7fffffff8) + 8);
  }
  else {
    if ((longlong)local_f8 < 1) goto LAB_147e5ce0f;
    uVar19 = 0;
    uVar26 = local_88[4];
    do {
      uVar27 = uVar26 >> ((byte)local_d0 & 0x3f);
      uVar26 = local_88[uVar19 + 5];
      local_c8[uVar19] = uVar26 << (0x40U - (char)local_b4 & 0x3f) | uVar27;
      uVar19 = uVar19 + 1;
    } while ((local_f8 & 0xffffffff) != uVar19);
LAB_147e5ce07:
    if ((longlong)local_f8 < 2) goto LAB_147e5ce0f;
  }
  if ((int)local_e8 < 3) {
    memset(local_f0 + lVar31 + 3,0,(0x7fffffff0U - lVar30 & 0x7fffffff8) + 8);
  }
LAB_147e5c913:
  if ((local_88[8] ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5cf4e FUN_147e5cf4e body=295 status=ok
// SIG undefined FUN_147e5cf4e(void)

void FUN_147e5cf4e(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auStack_98 [44];
  int local_6c;
  int local_68 [6];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147e5d076(local_68,param_2,param_1);
  lVar3 = FUN_147e510dd(local_68,&local_6c);
  *(float *)(param_1 + 0x38) = (float)((int)(float)lVar3 + local_6c * 0x800000) * 5.421011e-20;
  FUN_147e5d104(local_68,param_2,param_1);
  lVar3 = FUN_147e510dd(local_68,&local_6c);
  *(float *)(param_1 + 0x3c) = (float)((int)(float)lVar3 + local_6c * 0x800000) * 5.421011e-20;
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0xc);
  lVar3 = FUN_147e510dd(param_1 + 0x20,local_68);
  *(float *)(param_1 + 0x40) =
       (float)((int)(float)lVar3 + local_68[0] * 0x800000) * (fVar1 * fVar1 + fVar2 * fVar2) *
       5.421011e-20;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5d076 FUN_147e5d076 body=141 status=ok
// SIG undefined FUN_147e5d076(void)

longlong FUN_147e5d076(longlong param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  ulonglong local_50 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e5d195(param_3 + 0x10,param_2[1],local_50 + 3,1);
  FUN_147e5d195(param_3,*param_2,local_50,1);
  lVar3 = 0;
  bVar4 = false;
  do {
    uVar1 = (ulonglong)bVar4;
    uVar2 = local_50[lVar3] + local_50[lVar3 + 3];
    bVar4 = CARRY8(local_50[lVar3],local_50[lVar3 + 3]) || CARRY8(uVar2,uVar1);
    *(ulonglong *)(param_1 + lVar3 * 8) = uVar2 + uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5d104 FUN_147e5d104 body=144 status=ok
// SIG undefined FUN_147e5d104(void)

longlong FUN_147e5d104(longlong param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  ulonglong local_50 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e5d195(param_3,param_2[1],local_50 + 3,1);
  FUN_147e5d195(param_3 + 0x10,*param_2,local_50,1);
  lVar3 = 0;
  bVar4 = false;
  do {
    uVar1 = (ulonglong)bVar4;
    uVar2 = local_50[lVar3] - local_50[lVar3 + 3];
    bVar4 = local_50[lVar3] < local_50[lVar3 + 3] || uVar2 < uVar1;
    *(ulonglong *)(param_1 + lVar3 * 8) = uVar2 - uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5d195 FUN_147e5d195 body=90 status=ok
// SIG undefined FUN_147e5d195(void)

void FUN_147e5d195(ulonglong *param_1,int param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar9 = (ulonglong)param_2;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar9;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = SUB168(auVar3 * auVar5,8);
  *param_3 = SUB168(auVar3 * auVar5,0);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar9;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[1];
  auVar7 = auVar4 * auVar6 + auVar7;
  *(undefined1 (*) [16])(param_3 + 1) = auVar7;
  if ((longlong)param_1[1] < 0) {
    param_3[2] = auVar7._8_8_ - uVar9;
  }
  if (param_2 < 0) {
    lVar8 = 0;
    bVar10 = false;
    do {
      puVar1 = param_3 + lVar8 + 1;
      uVar9 = (ulonglong)bVar10;
      uVar2 = *puVar1 - param_1[lVar8];
      bVar10 = *puVar1 < param_1[lVar8] || uVar2 < uVar9;
      *puVar1 = uVar2 - uVar9;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 2);
  }
  return;
}



// FUNCTION 147e5d1ef FUN_147e5d1ef body=244 status=ok
// SIG undefined FUN_147e5d1ef(void)

longlong * FUN_147e5d1ef(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_e8 [40];
  ulonglong local_c0 [4];
  ulonglong local_a0 [4];
  ulonglong auStack_80 [4];
  ulonglong local_60 [4];
  longlong local_40 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147e5dd01(param_3 + 0x30,param_2[2],local_60);
  FUN_147e5dd01(param_3 + 0x18,param_2[1],local_a0);
  FUN_147e5dd01(param_3,*param_2,local_c0);
  lVar6 = 0;
  bVar7 = false;
  do {
    uVar1 = (ulonglong)bVar7;
    uVar2 = local_c0[lVar6] + local_a0[lVar6];
    bVar7 = CARRY8(local_c0[lVar6],local_a0[lVar6]) || CARRY8(uVar2,uVar1);
    auStack_80[lVar6] = uVar2 + uVar1;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  lVar6 = 0;
  bVar7 = false;
  do {
    uVar1 = (ulonglong)bVar7;
    uVar2 = auStack_80[lVar6] + local_60[lVar6];
    bVar7 = CARRY8(auStack_80[lVar6],local_60[lVar6]) || CARRY8(uVar2,uVar1);
    local_40[lVar6] = uVar2 + uVar1;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  *(undefined4 *)(param_1 + 2) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_2c;
  *(undefined4 *)(param_1 + 3) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_24;
  *param_1 = local_40[0];
  param_1[1] = local_40[1];
  uVar3 = *(undefined4 *)(param_3 + 0x4c);
  uVar4 = *(undefined4 *)(param_3 + 0x50);
  uVar5 = *(undefined4 *)(param_3 + 0x54);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  param_1[6] = *(longlong *)(param_3 + 0x58);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5d2e4 FUN_147e5d2e4 body=487 status=ok
// SIG undefined FUN_147e5d2e4(void)

longlong FUN_147e5d2e4(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_70 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_1[0xb];
  local_88 = (undefined4)param_1[9];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uStack_80 = (undefined4)param_1[10];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x54);
  if ((param_1[1] != 0 || *param_1 != 0) || param_1[2] != 0) {
    uVar3 = param_1[2] >> 0x3f;
    lVar4 = 0;
    bVar6 = false;
    do {
      uVar1 = (ulonglong)bVar6;
      uVar2 = (param_1[lVar4] ^ uVar3) - uVar3;
      bVar6 = (param_1[lVar4] ^ uVar3) < uVar3 || uVar2 < uVar1;
      local_70[lVar4] = uVar2 - uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    FUN_147e5de6d(&local_58,local_70,&local_88);
    local_78 = local_48;
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
  }
  if ((param_1[4] != 0 || param_1[3] != 0) || param_1[5] != 0) {
    uVar3 = param_1[5] >> 0x3f;
    lVar4 = 0;
    bVar6 = false;
    do {
      uVar5 = (param_1 + 3)[lVar4] ^ uVar3;
      uVar1 = (ulonglong)bVar6;
      uVar2 = uVar5 - uVar3;
      bVar6 = uVar5 < uVar3 || uVar2 < uVar1;
      local_70[lVar4] = uVar2 - uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    FUN_147e5de6d(&local_58,local_70,&local_88);
    local_78 = local_48;
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
  }
  if ((param_1[7] != 0 || param_1[6] != 0) || param_1[8] != 0) {
    uVar3 = param_1[8] >> 0x3f;
    lVar4 = 0;
    bVar6 = false;
    do {
      uVar5 = (param_1 + 6)[lVar4] ^ uVar3;
      uVar1 = (ulonglong)bVar6;
      uVar2 = uVar5 - uVar3;
      bVar6 = uVar5 < uVar3 || uVar2 < uVar1;
      local_70[lVar4] = uVar2 - uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    FUN_147e5de6d(&local_58,local_70,&local_88);
    local_78 = local_48;
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
  }
  FUN_147e5dd78(param_1,&local_88,param_2);
  FUN_147e5dd78(param_1 + 3,&local_88,param_2 + 0x18);
  FUN_147e5dd78(param_1 + 6,&local_88,param_2 + 0x30);
  FUN_147e5e16d(param_1 + 9,&local_88,&local_58,local_70);
  *(longlong *)(param_2 + 0x58) = local_48;
  *(undefined4 *)(param_2 + 0x48) = local_58;
  *(undefined4 *)(param_2 + 0x4c) = uStack_54;
  *(undefined4 *)(param_2 + 0x50) = uStack_50;
  *(undefined4 *)(param_2 + 0x54) = uStack_4c;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5d4cc FUN_147e5d4cc body=205 status=ok
// SIG undefined FUN_147e5d4cc(void)

void FUN_147e5d4cc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [4];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147e5d59a(param_1,param_2,&local_38,&local_50);
  if (((ulonglong)((local_48 != 0 || local_50 != 0) || local_40 != 0) | local_40 >> 0x3f) ==
      0xffffffffffffffff) {
    bVar4 = local_38 != 0;
    local_70[0] = local_38 + -1;
    lVar3 = 1;
    do {
      uVar1 = (ulonglong)bVar4;
      uVar2 = (&local_38)[lVar3] - 1;
      bVar4 = (&local_38)[lVar3] != 0 || CARRY8(uVar2,uVar1);
      local_70[lVar3] = uVar2 + uVar1;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    uStack_30 = local_70[1];
    local_28 = local_70[2];
    uStack_20 = local_70[3];
    local_38 = local_70[0];
  }
  param_3[4] = (undefined4)local_28;
  param_3[5] = local_28._4_4_;
  param_3[6] = (undefined4)uStack_20;
  param_3[7] = uStack_20._4_4_;
  *param_3 = (undefined4)local_38;
  param_3[1] = local_38._4_4_;
  param_3[2] = (undefined4)uStack_30;
  param_3[3] = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5d59a FUN_147e5d59a body=293 status=ok
// SIG undefined FUN_147e5d59a(void)

void FUN_147e5d59a(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8 [4];
  longlong local_88 [5];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  longlong lStack_48;
  longlong local_40 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar3 = lVar4 >> 0x3f;
  lVar5 = 0;
  bVar7 = false;
  do {
    uVar6 = *(ulonglong *)(param_1 + lVar5 * 8) ^ uVar3;
    uVar1 = (ulonglong)bVar7;
    uVar2 = uVar6 - uVar3;
    bVar7 = uVar6 < uVar3 || uVar2 < uVar1;
    local_40[lVar5] = uVar2 - uVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  FUN_147e5d6c0(local_40,param_2,param_3,param_4);
  if (lVar4 < 0) {
    local_88[0] = *param_3;
    local_88[1] = param_3[1];
    local_88[2] = param_3[2];
    local_88[3] = param_3[3];
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar3 = (ulonglong)bVar7;
      uVar1 = -local_88[lVar4];
      bVar7 = local_88[lVar4] != 0 || uVar1 < uVar3;
      (&local_60)[lVar4] = uVar1 - uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    param_3[2] = local_50;
    param_3[3] = lStack_48;
    *param_3 = CONCAT44(local_60._4_4_,(undefined4)local_60);
    param_3[1] = CONCAT44(uStack_54,uStack_58);
    local_a8[0] = *param_4;
    local_a8[1] = param_4[1];
    local_a8[2] = param_4[2];
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar3 = (ulonglong)bVar7;
      uVar1 = -local_a8[lVar4];
      bVar7 = local_a8[lVar4] != 0 || uVar1 < uVar3;
      (&local_60)[lVar4] = uVar1 - uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    param_4[2] = local_50;
    *(undefined4 *)param_4 = (undefined4)local_60;
    *(undefined4 *)((longlong)param_4 + 4) = local_60._4_4_;
    *(undefined4 *)(param_4 + 1) = uStack_58;
    *(undefined4 *)((longlong)param_4 + 0xc) = uStack_54;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5d6c0 FUN_147e5d6c0 body=1595 status=ok
// SIG undefined FUN_147e5d6c0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147e5d6c0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  int iVar16;
  byte bVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  bool bVar36;
  bool bVar37;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  uint local_e4;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong local_a0 [5];
  ulonglong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  bVar37 = param_1[3] == 0;
  lVar18 = 2;
  bVar15 = false;
  do {
    bVar10 = bVar15;
    bVar11 = (bool)((ulonglong)param_1[lVar18] < (ulonglong)param_2[lVar18] & bVar37);
    bVar37 = (bool)(bVar37 & param_1[lVar18] == param_2[lVar18]);
    bVar36 = lVar18 != 0;
    lVar18 = lVar18 + -1;
    bVar15 = (bool)(bVar10 | bVar11);
  } while (bVar36);
  if (bVar10 || bVar11) {
    lVar18 = 0;
    do {
      param_4[lVar18] = param_1[lVar18];
      lVar18 = lVar18 + 1;
    } while (lVar18 != 3);
    goto LAB_147e5d73d;
  }
  lVar33 = 0x500000000;
  local_108 = 0;
  lVar18 = 0;
  do {
    lVar32 = lVar18;
    local_118 = local_108;
    lVar33 = lVar33 + -0x100000000;
    lVar18 = lVar32 + -8;
    local_108 = local_118 + -1;
  } while (param_1[local_118 + 3] == 0);
  iVar25 = (int)local_108 + 1;
  local_f8 = local_118 + 3;
  lVar27 = 0;
  lVar13 = 0;
  lVar14 = 0;
  do {
    lVar24 = lVar14;
    lVar23 = lVar13;
    lVar27 = lVar27 + 0x100000000;
    iVar25 = iVar25 + 1;
    lVar13 = lVar23 + -1;
    lVar14 = lVar24 + -8;
  } while (param_2[lVar23 + 2] == 0);
  local_100 = param_4;
  local_f0 = param_3;
  if (lVar23 + -1 == -3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    local_130 = 1;
    local_138 = 1;
    FUN_147e590c3(param_1,*param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_158);
  }
  local_118 = local_118 + 4;
  local_120 = lVar23 + 3;
  local_110 = lVar23 + 2;
  local_e4 = FUN_147e5105f();
  local_e0 = (ulonglong)local_e4;
  iVar16 = (int)local_118;
  if (local_e4 == 0) {
    if (0 < iVar16) {
      memcpy(local_a0 + 5,param_1,lVar32 + 0x20U & 0x3fffffff8);
      iVar16 = (int)local_118;
    }
    *(undefined8 *)((longlong)local_a0 + (lVar33 >> 0x1d) + 0x28U) = 0;
    if (0 < (longlong)local_120) {
      memcpy(local_a0 + 1,param_2,lVar24 + 0x18U & 0x7fffffff8);
      iVar16 = (int)local_118;
    }
  }
  else {
    bVar9 = (byte)local_e4;
    bVar17 = 0x40 - bVar9;
    if (1 < (longlong)local_120) {
      uVar28 = local_120 & 0xffffffff;
      uVar31 = local_110 & 0xffffffff;
      do {
        local_a0[uVar31 + 1] =
             (ulonglong)param_2[uVar31 - 1 & 0xffffffff] >> (bVar17 & 0x3f) |
             param_2[uVar31] << (bVar9 & 0x3f);
        uVar29 = (int)uVar28 - 1;
        uVar28 = (ulonglong)uVar29;
        uVar31 = uVar31 - 1;
      } while (1 < (int)uVar29);
    }
    local_a0[1] = *param_2 << (bVar9 & 0x3f);
    *(ulonglong *)((longlong)local_a0 + (lVar33 >> 0x1d) + 0x28U) =
         (ulonglong)param_1[local_108 + 4] >> (bVar17 & 0x3f);
    if (1 < iVar16) {
      iVar20 = (int)local_108 + 5;
      uVar31 = local_f8 & 0xffffffff;
      do {
        local_a0[uVar31 + 5] =
             (ulonglong)param_1[uVar31 - 1 & 0xffffffff] >> (bVar17 & 0x3f) |
             param_1[uVar31] << (bVar9 & 0x3f);
        iVar20 = iVar20 + -1;
        uVar31 = uVar31 - 1;
      } while (1 < iVar20);
    }
    local_78[0] = *param_1 << (bVar9 & 0x3f);
  }
  puVar12 = local_100;
  uVar29 = (uint)local_120;
  if ((int)uVar29 <= iVar16) {
    uVar31 = local_a0[lVar23 + 3];
    local_c8 = 0x200000000 - lVar27 >> 0x20;
    local_f8 = CONCAT44(local_f8._4_4_,~uVar29) & 0xffffffff00000001;
    local_d8 = local_120 & 0xffffffff;
    local_d0 = (ulonglong)(uVar29 & 1);
    lVar33 = 0x400000000 - lVar27 >> 0x20;
    local_110 = (ulonglong)((uint)local_110 & 1);
    uVar28 = (longlong)iVar25;
    do {
      lVar32 = uVar28 + lVar33;
      uVar30 = local_a0[lVar32 + 5];
      uVar19 = 0xffffffffffffffff;
      if (uVar30 < uVar31) {
        local_b0 = local_a0[lVar32 + 4];
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar31;
        auVar2._8_8_ = uVar30;
        auVar2._0_8_ = local_b0;
        uVar19 = SUB168(auVar2 / auVar1,0);
        local_a8 = SUB168(auVar2 % auVar1,0);
        local_a0[0] = uVar19;
        uVar26 = local_a0[local_c8 + 1];
        uVar35 = uVar26 * uVar19;
        uVar34 = local_a8;
        do {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar19;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar26;
          uVar21 = SUB168(auVar3 * auVar6,8);
          local_c0 = uVar31;
          local_b8 = uVar30;
          if ((uVar21 <= uVar34) && ((uVar34 != uVar21 || (uVar35 <= local_a0[lVar32 + 3])))) break;
          uVar19 = uVar19 - 1;
          uVar35 = uVar35 - uVar26;
          bVar37 = CARRY8(uVar34,uVar31);
          uVar34 = uVar34 + uVar31;
        } while (!bVar37);
      }
      uVar34 = uVar28 & 0xffffffff;
      bVar37 = false;
      uVar26 = local_d0;
      if (1 < (longlong)local_120) {
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar19;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_a0[uVar26 + 1];
          uVar22 = SUB168(auVar4 * auVar7,8);
          uVar21 = SUB168(auVar4 * auVar7,0);
          uVar30 = local_a0[uVar34 + uVar26 + 5];
          uVar35 = uVar30 - uVar21;
          local_a0[uVar34 + uVar26 + 5] = uVar35 - (bVar37 != false);
          uVar30 = (ulonglong)(uVar30 < uVar21 || uVar35 < (bVar37 != false));
          uVar35 = local_a0[uVar34 + uVar26 + 6] - uVar22;
          bVar37 = local_a0[uVar34 + uVar26 + 6] < uVar22 || uVar35 < uVar30;
          local_a0[uVar34 + uVar26 + 6] = uVar35 - uVar30;
          uVar26 = uVar26 + 2;
        } while ((longlong)uVar26 < lVar33);
        uVar30 = local_a0[lVar32 + 5];
      }
      local_a0[lVar32 + 5] = uVar30 - bVar37;
      if ((int)local_f8 < (int)uVar29) {
        bVar37 = false;
        uVar30 = local_110;
        do {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar19;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_a0[uVar30 + 1];
          uVar22 = SUB168(auVar5 * auVar8,8);
          uVar21 = SUB168(auVar5 * auVar8,0);
          uVar26 = local_a0[uVar34 + uVar30 + 5];
          uVar35 = uVar26 - uVar21;
          local_a0[uVar34 + uVar30 + 5] = uVar35 - bVar37;
          uVar26 = (ulonglong)(uVar26 < uVar21 || uVar35 < bVar37);
          uVar35 = local_a0[uVar34 + uVar30 + 6] - uVar22;
          bVar37 = local_a0[uVar34 + uVar30 + 6] < uVar22 || uVar35 < uVar26;
          local_a0[uVar34 + uVar30 + 6] = uVar35 - uVar26;
          uVar30 = uVar30 + 2;
        } while ((longlong)uVar30 < lVar33);
        if ((bVar37) && (uVar19 = uVar19 - 1, 0 < (longlong)local_120)) {
          uVar30 = 0;
          bVar37 = false;
          do {
            uVar26 = (ulonglong)bVar37;
            uVar35 = local_a0[uVar34 + uVar30 + 5] + local_a0[uVar30 + 1];
            bVar37 = CARRY8(local_a0[uVar34 + uVar30 + 5],local_a0[uVar30 + 1]) ||
                     CARRY8(uVar35,uVar26);
            local_a0[uVar34 + uVar30 + 5] = uVar35 + uVar26;
            uVar30 = uVar30 + 1;
          } while (local_d8 != uVar30);
        }
      }
      local_f0[uVar28] = uVar19;
      bVar37 = 0 < (longlong)uVar28;
      uVar28 = uVar28 - 1;
    } while (bVar37);
  }
  if (local_e4 == 0) {
    if (0 < (longlong)local_120) {
      memcpy(local_100,local_a0 + 5,lVar24 + 0x18U & 0x7fffffff8);
      goto LAB_147e5dc7d;
    }
LAB_147e5dc85:
    memset(puVar12 + lVar23 + 3,0,(0x7fffffff0U - (lVar24 + -8) & 0x7fffffff8) + 8);
  }
  else {
    if ((longlong)local_120 < 1) goto LAB_147e5dc85;
    uVar31 = 0;
    uVar28 = local_78[0];
    do {
      uVar30 = uVar28 >> ((byte)local_e0 & 0x3f);
      uVar28 = local_a0[uVar31 + 6];
      local_100[uVar31] = uVar28 << (0x40U - (char)local_e4 & 0x3f) | uVar30;
      uVar31 = uVar31 + 1;
    } while ((local_120 & 0xffffffff) != uVar31);
LAB_147e5dc7d:
    if ((longlong)local_120 < 3) goto LAB_147e5dc85;
  }
  if ((int)local_118 < 4) {
    memset(local_f0 + local_108 + 5,0,(0x7fffffff0U - lVar18 & 0x7fffffff8) + 8);
  }
LAB_147e5d73d:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5dd01 FUN_147e5dd01 body=119 status=ok
// SIG undefined FUN_147e5dd01(void)

void FUN_147e5dd01(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_1;
  *param_3 = SUB168(auVar4 * auVar6,0);
  lVar11 = 0;
  bVar12 = false;
  uVar10 = SUB168(auVar4 * auVar6,8);
  do {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_1[lVar11 + 1];
    uVar9 = SUB168(auVar5 * auVar7,8);
    uVar8 = SUB168(auVar5 * auVar7,0);
    uVar2 = (ulonglong)bVar12;
    uVar3 = uVar8 + uVar10;
    bVar12 = CARRY8(uVar8,uVar10) || CARRY8(uVar3,uVar2);
    param_3[lVar11 + 1] = uVar3 + uVar2;
    lVar11 = lVar11 + 1;
    uVar10 = uVar9;
  } while (lVar11 != 2);
  lVar11 = uVar9 + bVar12;
  param_3[3] = lVar11;
  if ((longlong)param_1[2] < 0) {
    param_3[3] = lVar11 - param_2;
  }
  if ((longlong)param_2 < 0) {
    lVar11 = 0;
    bVar12 = false;
    do {
      puVar1 = param_3 + lVar11 + 1;
      uVar10 = (ulonglong)bVar12;
      uVar2 = *puVar1 - param_1[lVar11];
      bVar12 = *puVar1 < param_1[lVar11] || uVar2 < uVar10;
      *puVar1 = uVar2 - uVar10;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
  }
  return;
}



// FUNCTION 147e5dd78 FUN_147e5dd78 body=244 status=ok
// SIG undefined FUN_147e5dd78(void)

void FUN_147e5dd78(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  longlong local_50 [7];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  uVar3 = lVar4 >> 0x3f;
  lVar5 = 0;
  bVar7 = false;
  do {
    uVar6 = *(ulonglong *)(param_1 + lVar5 * 8) ^ uVar3;
    uVar1 = (ulonglong)bVar7;
    uVar2 = uVar6 - uVar3;
    bVar7 = uVar6 < uVar3 || uVar2 < uVar1;
    local_50[lVar5] = uVar2 - uVar1;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  FUN_147e5e16d(local_50,param_2,&local_80,local_68);
  if (lVar4 < 0) {
    local_50[5] = local_70;
    local_50[3] = local_80;
    local_50[4] = uStack_78;
    lVar4 = 0;
    bVar7 = false;
    do {
      uVar3 = (ulonglong)bVar7;
      uVar1 = -local_50[lVar4 + 3];
      bVar7 = local_50[lVar4 + 3] != 0 || uVar1 < uVar3;
      (&local_98)[lVar4] = uVar1 - uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
  }
  else {
    local_88 = local_70;
    local_98 = local_80;
    uStack_90 = uStack_78;
  }
  *(undefined8 *)(param_3 + 4) = local_88;
  *param_3 = (undefined4)local_98;
  param_3[1] = local_98._4_4_;
  param_3[2] = (undefined4)uStack_90;
  param_3[3] = uStack_90._4_4_;
  if ((local_18 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5de6d FUN_147e5de6d body=570 status=ok
// SIG undefined FUN_147e5de6d(void)

ulonglong * FUN_147e5de6d(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  ulonglong *puVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong local_88 [4];
  ulonglong local_68 [4];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2[2];
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  param_1[2] = *(ulonglong *)(param_3 + 4);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  iVar7 = FUN_147e5c17c(&local_a8);
  FUN_147e5c1dc(&local_a8,iVar7);
  iVar8 = FUN_147e5c17c(param_1);
  puVar11 = param_1;
  iVar9 = iVar8;
  while( true ) {
    FUN_147e5c1dc(puVar11,iVar9);
    local_38 = param_1[2];
    local_48 = *param_1;
    uStack_40 = param_1[1];
    local_68[2] = local_98;
    local_68[0] = local_a8;
    local_68[1] = uStack_a0;
    bVar15 = true;
    lVar12 = 0;
    do {
      bVar15 = (bool)(bVar15 & local_68[lVar12] == (&local_48)[lVar12]);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 3);
    if (bVar15) break;
    local_68[2] = param_1[2];
    local_68[0] = *param_1;
    local_68[1] = param_1[1];
    local_38 = local_98;
    local_48 = local_a8;
    uStack_40 = uStack_a0;
    bVar6 = 1;
    lVar12 = 2;
    bVar15 = false;
    do {
      bVar10 = bVar15;
      bVar13 = (bool)(local_68[lVar12] < (ulonglong)(&local_48)[lVar12] & bVar6);
      bVar6 = bVar6 & local_68[lVar12] == (&local_48)[lVar12];
      bVar14 = lVar12 != 0;
      lVar12 = lVar12 + -1;
      bVar15 = (bool)(bVar10 | bVar13);
    } while (bVar14);
    if (bVar10 || bVar13) {
      local_68[2] = param_1[2];
      local_68[0] = *param_1;
      local_68[1] = param_1[1];
      local_88[2] = local_98;
      local_88[0] = local_a8;
      local_88[1] = uStack_a0;
      lVar12 = 0;
      bVar15 = false;
      do {
        uVar1 = (ulonglong)bVar15;
        uVar2 = local_88[lVar12] - local_68[lVar12];
        bVar15 = local_88[lVar12] < local_68[lVar12] || uVar2 < uVar1;
        (&local_48)[lVar12] = uVar2 - uVar1;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      local_98 = local_38;
      local_a8 = local_48;
      uStack_a0 = uStack_40;
      iVar9 = FUN_147e5c17c(&local_a8);
      puVar11 = &local_a8;
    }
    else {
      local_68[2] = local_98;
      local_68[0] = local_a8;
      local_68[1] = uStack_a0;
      local_88[2] = param_1[2];
      local_88[0] = *param_1;
      local_88[1] = param_1[1];
      lVar12 = 0;
      bVar15 = false;
      do {
        uVar1 = (ulonglong)bVar15;
        uVar2 = local_88[lVar12] - local_68[lVar12];
        bVar15 = local_88[lVar12] < local_68[lVar12] || uVar2 < uVar1;
        (&local_48)[lVar12] = uVar2 - uVar1;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      param_1[2] = local_38;
      *(undefined4 *)param_1 = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
      iVar9 = FUN_147e5c17c(param_1);
      puVar11 = param_1;
    }
  }
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  FUN_147e5e0a8(param_1,iVar8);
  param_1[2] = param_1[2] & 0x3fffffff;
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e5e0a8 FUN_147e5e0a8 body=197 status=ok
// SIG undefined FUN_147e5e0a8(void)

void FUN_147e5e0a8(longlong *param_1,uint param_2)

{
  sbyte sVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = (int)param_2 >> 6;
  if ((param_2 & 0x3f) == 0) {
    if (2 < (int)uVar4) goto LAB_147e5e153;
    lVar3 = 3;
    do {
      param_1[lVar3 + -1] = param_1[(lVar3 + -1) - (longlong)(int)uVar4];
      lVar3 = lVar3 + -1;
    } while ((int)uVar4 < lVar3);
  }
  else {
    sVar1 = (sbyte)(param_2 & 0x3f);
    uVar2 = (ulonglong)uVar4;
    if ((int)uVar4 < 2) {
      uVar2 = (ulonglong)(int)uVar4;
      lVar3 = 2;
      do {
        param_1[lVar3] =
             (ulonglong)param_1[(lVar3 + -1) - uVar2] >> (0x40U - sVar1 & 0x3f) |
             param_1[lVar3 - uVar2] << sVar1;
        lVar3 = lVar3 + -1;
      } while ((longlong)uVar2 < lVar3);
    }
    param_1[uVar2] = *param_1 << sVar1;
  }
  if ((int)uVar4 < 1) {
    return;
  }
LAB_147e5e153:
  memset(param_1,0,(ulonglong)uVar4 << 3);
  return;
}



// FUNCTION 147e5e16d FUN_147e5e16d body=1579 status=ok
// SIG undefined FUN_147e5e16d(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147e5e16d(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  bool bVar35;
  bool bVar36;
  undefined1 auStack_138 [40];
  ulonglong local_110;
  longlong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  uint local_e0;
  uint local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  ulonglong local_90 [5];
  ulonglong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  bVar9 = 1;
  lVar16 = 2;
  bVar36 = false;
  do {
    bVar10 = bVar36;
    bVar11 = (bool)((ulonglong)param_1[lVar16] < (ulonglong)param_2[lVar16] & bVar9);
    bVar9 = bVar9 & param_1[lVar16] == param_2[lVar16];
    bVar35 = lVar16 != 0;
    lVar16 = lVar16 + -1;
    bVar36 = (bool)(bVar10 | bVar11);
  } while (bVar35);
  if (bVar10 || bVar11) {
    lVar16 = 0;
    do {
      param_4[lVar16] = param_1[lVar16];
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
    goto LAB_147e5e1e7;
  }
  lVar32 = 0x400000000;
  local_d8 = 0;
  lVar16 = 0;
  do {
    lVar30 = lVar16;
    uVar28 = local_d8;
    lVar32 = lVar32 + -0x100000000;
    lVar16 = lVar30 + -8;
    local_d8 = uVar28 - 1;
  } while (param_1[uVar28 + 2] == 0);
  local_100 = uVar28 + 2;
  lVar25 = 0;
  uVar24 = local_d8 & 0xffffffff;
  lVar13 = 0;
  lVar14 = 0;
  do {
    lVar22 = lVar14;
    lVar21 = lVar13;
    lVar25 = lVar25 + 0x100000000;
    uVar23 = (int)uVar24 + 1;
    uVar24 = (ulonglong)uVar23;
    lVar13 = lVar21 + -1;
    lVar14 = lVar22 + -8;
  } while (param_2[lVar21 + 2] == 0);
  local_f0 = param_4;
  local_e8 = param_3;
  if (lVar21 + -1 == -3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_68[4] ^ (ulonglong)auStack_138);
  }
  local_108 = uVar28 + 3;
  local_110 = lVar21 + 3;
  local_f8 = lVar21 + 2;
  local_e0 = FUN_147e5105f();
  local_d0 = (ulonglong)local_e0;
  iVar31 = (int)local_108;
  if (local_e0 == 0) {
    if (0 < iVar31) {
      memcpy(local_90 + 5,param_1,lVar30 + 0x18U & 0x3fffffff8);
      iVar31 = (int)local_108;
    }
    *(undefined8 *)((longlong)local_90 + (lVar32 >> 0x1d) + 0x28U) = 0;
    if (0 < (longlong)local_110) {
      memcpy(local_90 + 1,param_2,lVar22 + 0x18U & 0x7fffffff8);
      iVar31 = (int)local_108;
    }
  }
  else {
    bVar9 = (byte)local_e0;
    bVar15 = 0x40 - bVar9;
    if (1 < (longlong)local_110) {
      uVar24 = local_110 & 0xffffffff;
      uVar28 = local_f8 & 0xffffffff;
      do {
        local_90[uVar28 + 1] =
             (ulonglong)param_2[uVar28 - 1 & 0xffffffff] >> (bVar15 & 0x3f) |
             param_2[uVar28] << (bVar9 & 0x3f);
        uVar26 = (int)uVar24 - 1;
        uVar24 = (ulonglong)uVar26;
        uVar28 = uVar28 - 1;
      } while (1 < (int)uVar26);
    }
    local_90[1] = *param_2 << (bVar9 & 0x3f);
    *(ulonglong *)((longlong)local_90 + (lVar32 >> 0x1d) + 0x28U) =
         (ulonglong)param_1[local_d8 + 3] >> (bVar15 & 0x3f);
    if (1 < iVar31) {
      iVar18 = (int)local_d8 + 4;
      uVar28 = local_100 & 0xffffffff;
      do {
        local_90[uVar28 + 5] =
             (ulonglong)param_1[uVar28 - 1 & 0xffffffff] >> (bVar15 & 0x3f) |
             param_1[uVar28] << (bVar9 & 0x3f);
        iVar18 = iVar18 + -1;
        uVar28 = uVar28 - 1;
      } while (1 < iVar18);
    }
    local_68[0] = *param_1 << (bVar9 & 0x3f);
  }
  puVar12 = local_f0;
  uVar26 = (uint)local_110;
  if ((int)uVar26 <= iVar31) {
    uVar28 = local_90[lVar21 + 3];
    local_b8 = 0x200000000 - lVar25 >> 0x20;
    local_dc = ~uVar26 & 1;
    local_c8 = local_110 & 0xffffffff;
    local_c0 = (ulonglong)(uVar26 & 1);
    local_100 = 0x400000000 - lVar25 >> 0x20;
    local_f8 = (ulonglong)((uint)local_f8 & 1);
    uVar24 = (longlong)(int)uVar23;
    do {
      lVar32 = uVar24 + local_100;
      uVar27 = local_90[lVar32 + 5];
      uVar17 = 0xffffffffffffffff;
      if (uVar27 < uVar28) {
        local_a0 = local_90[lVar32 + 4];
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar28;
        auVar2._8_8_ = uVar27;
        auVar2._0_8_ = local_a0;
        uVar17 = SUB168(auVar2 / auVar1,0);
        local_98 = SUB168(auVar2 % auVar1,0);
        local_90[0] = uVar17;
        uVar29 = local_90[local_b8 + 1];
        uVar33 = uVar29 * uVar17;
        uVar34 = local_98;
        do {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar17;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar29;
          uVar19 = SUB168(auVar3 * auVar6,8);
          local_b0 = uVar28;
          local_a8 = uVar27;
          if ((uVar19 <= uVar34) && ((uVar34 != uVar19 || (uVar33 <= local_90[lVar32 + 3])))) break;
          uVar17 = uVar17 - 1;
          uVar33 = uVar33 - uVar29;
          bVar36 = CARRY8(uVar34,uVar28);
          uVar34 = uVar34 + uVar28;
        } while (!bVar36);
      }
      uVar34 = uVar24 & 0xffffffff;
      bVar36 = false;
      uVar29 = local_c0;
      if (1 < (longlong)local_110) {
        do {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar17;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_90[uVar29 + 1];
          uVar20 = SUB168(auVar4 * auVar7,8);
          uVar19 = SUB168(auVar4 * auVar7,0);
          uVar27 = local_90[uVar34 + uVar29 + 5];
          uVar33 = uVar27 - uVar19;
          local_90[uVar34 + uVar29 + 5] = uVar33 - (bVar36 != false);
          uVar27 = (ulonglong)(uVar27 < uVar19 || uVar33 < (bVar36 != false));
          uVar33 = local_90[uVar34 + uVar29 + 6] - uVar20;
          bVar36 = local_90[uVar34 + uVar29 + 6] < uVar20 || uVar33 < uVar27;
          local_90[uVar34 + uVar29 + 6] = uVar33 - uVar27;
          uVar29 = uVar29 + 2;
        } while ((longlong)uVar29 < (longlong)local_100);
        uVar27 = local_90[lVar32 + 5];
      }
      local_90[lVar32 + 5] = uVar27 - bVar36;
      if ((int)local_dc < (int)uVar26) {
        bVar36 = false;
        uVar27 = local_f8;
        do {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar17;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_90[uVar27 + 1];
          uVar20 = SUB168(auVar5 * auVar8,8);
          uVar19 = SUB168(auVar5 * auVar8,0);
          uVar29 = local_90[uVar34 + uVar27 + 5];
          uVar33 = uVar29 - uVar19;
          local_90[uVar34 + uVar27 + 5] = uVar33 - bVar36;
          uVar29 = (ulonglong)(uVar29 < uVar19 || uVar33 < bVar36);
          uVar33 = local_90[uVar34 + uVar27 + 6] - uVar20;
          bVar36 = local_90[uVar34 + uVar27 + 6] < uVar20 || uVar33 < uVar29;
          local_90[uVar34 + uVar27 + 6] = uVar33 - uVar29;
          uVar27 = uVar27 + 2;
        } while ((longlong)uVar27 < (longlong)local_100);
        if ((bVar36) && (uVar17 = uVar17 - 1, 0 < (longlong)local_110)) {
          uVar27 = 0;
          bVar36 = false;
          do {
            uVar29 = (ulonglong)bVar36;
            uVar33 = local_90[uVar34 + uVar27 + 5] + local_90[uVar27 + 1];
            bVar36 = CARRY8(local_90[uVar34 + uVar27 + 5],local_90[uVar27 + 1]) ||
                     CARRY8(uVar33,uVar29);
            local_90[uVar34 + uVar27 + 5] = uVar33 + uVar29;
            uVar27 = uVar27 + 1;
          } while (local_c8 != uVar27);
        }
      }
      local_e8[uVar24] = uVar17;
      bVar36 = 0 < (longlong)uVar24;
      uVar24 = uVar24 - 1;
    } while (bVar36);
  }
  if (local_e0 == 0) {
    if (0 < (longlong)local_110) {
      memcpy(local_f0,local_90 + 5,lVar22 + 0x18U & 0x7fffffff8);
      goto LAB_147e5e73e;
    }
LAB_147e5e746:
    memset(puVar12 + lVar21 + 3,0,(0x7fffffff0U - (lVar22 + -8) & 0x7fffffff8) + 8);
  }
  else {
    if ((longlong)local_110 < 1) goto LAB_147e5e746;
    uVar28 = 0;
    uVar24 = local_68[0];
    do {
      uVar27 = uVar24 >> ((byte)local_d0 & 0x3f);
      uVar24 = local_90[uVar28 + 6];
      local_f0[uVar28] = uVar24 << (0x40U - (char)local_e0 & 0x3f) | uVar27;
      uVar28 = uVar28 + 1;
    } while ((local_110 & 0xffffffff) != uVar28);
LAB_147e5e73e:
    if ((longlong)local_110 < 3) goto LAB_147e5e746;
  }
  if ((int)local_108 < 3) {
    memset(local_e8 + local_d8 + 4,0,(0x7fffffff0U - lVar16 & 0x7fffffff8) + 8);
  }
LAB_147e5e1e7:
  if ((local_68[4] ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5e7c0 FUN_147e5e7c0 body=888 status=ok
// SIG undefined FUN_147e5e7c0(void)

void FUN_147e5e7c0(longlong param_1,undefined4 *param_2,undefined4 *param_3,ulonglong *param_4)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  bool bVar10;
  undefined1 auStack_138 [40];
  ulonglong local_110;
  ulonglong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong auStack_a8 [4];
  ulonglong local_88;
  ulonglong local_80;
  ulonglong auStack_78 [4];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_147e5eb39(&local_58,param_2,param_1);
  FUN_147e5eb39(auStack_78 + 2,param_3,param_1);
  if ((local_58 != auStack_78[2]) || (local_50 != auStack_78[3])) {
    local_108 = param_4;
    lVar4 = 0;
    bVar10 = false;
    puVar5 = auStack_a8 + 2;
    puVar8 = auStack_78 + 2;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      puVar9 = (ulonglong *)(param_1 + 0x18 + lVar4 * 8);
      uVar7 = (ulonglong)bVar10;
      uVar3 = *puVar8 + *puVar9;
      bVar10 = CARRY8(*puVar8,*puVar9) || CARRY8(uVar3,uVar7);
      *puVar5 = uVar3 + uVar7;
      lVar4 = 1;
      puVar5 = auStack_a8 + 3;
      puVar8 = auStack_78 + 3;
      bVar1 = false;
    } while (bVar2);
    local_d0 = *param_2;
    local_cc = param_2[1];
    FUN_147e5ebdf();
    lVar4 = 0;
    bVar10 = false;
    puVar5 = &local_c8;
    puVar8 = &local_58;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      puVar9 = (ulonglong *)(param_1 + 0x18 + lVar4 * 8);
      uVar7 = (ulonglong)bVar10;
      uVar3 = *puVar8 + *puVar9;
      bVar10 = CARRY8(*puVar8,*puVar9) || CARRY8(uVar3,uVar7);
      *puVar5 = uVar3 + uVar7;
      lVar4 = 1;
      puVar5 = &local_c0;
      puVar8 = &local_50;
      bVar1 = false;
    } while (bVar2);
    local_d8 = *param_3;
    local_d4 = param_3[1];
    FUN_147e5ebdf(&local_b8,&local_d8,&local_c8);
    lVar4 = 0;
    bVar10 = false;
    puVar5 = &local_100;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      uVar7 = (ulonglong)bVar10;
      uVar3 = auStack_a8[lVar4] - auStack_78[lVar4];
      bVar10 = auStack_a8[lVar4] < auStack_78[lVar4] || uVar3 < uVar7;
      *puVar5 = uVar3 - uVar7;
      uVar7 = local_110;
      lVar4 = 1;
      puVar5 = &local_110;
      bVar1 = false;
    } while (bVar2);
    bVar10 = false;
    puVar5 = &local_e0;
    puVar8 = &local_b8;
    puVar9 = &local_88;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      uVar3 = (ulonglong)bVar10;
      uVar6 = *puVar8 - *puVar9;
      bVar10 = *puVar8 < *puVar9 || uVar6 < uVar3;
      *puVar5 = uVar6 - uVar3;
      puVar5 = &local_e8;
      puVar8 = &local_b0;
      puVar9 = &local_80;
      bVar1 = false;
    } while (bVar2);
    bVar10 = false;
    puVar5 = &local_100;
    puVar8 = auStack_78 + 2;
    puVar9 = &local_58;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      uVar3 = (ulonglong)bVar10;
      uVar6 = *puVar9 - *puVar8;
      bVar10 = *puVar9 < *puVar8 || uVar6 < uVar3;
      *puVar5 = uVar6 - uVar3;
      puVar5 = &local_110;
      puVar8 = auStack_78 + 3;
      puVar9 = &local_50;
      bVar1 = false;
    } while (bVar2);
    uVar3 = local_e8;
    uVar6 = local_e0;
    if ((longlong)local_110 < 0) {
      bVar10 = false;
      puVar5 = &local_88;
      bVar1 = true;
      do {
        bVar2 = bVar1;
        uVar3 = (ulonglong)bVar10;
        bVar10 = local_100 != 0 || -local_100 < uVar3;
        *puVar5 = -local_100 - uVar3;
        puVar5 = &local_b8;
        local_100 = uVar7;
        bVar1 = false;
      } while (bVar2);
      bVar10 = false;
      puVar5 = auStack_a8 + 2;
      bVar1 = true;
      do {
        bVar2 = bVar1;
        uVar7 = (ulonglong)bVar10;
        bVar10 = local_e0 != 0 || -local_e0 < uVar7;
        *puVar5 = -local_e0 - uVar7;
        uVar3 = local_c8;
        uVar6 = auStack_a8[2];
        local_e0 = local_e8;
        puVar5 = &local_c8;
        uVar7 = local_b8;
        local_100 = local_88;
        bVar1 = false;
      } while (bVar2);
    }
    *local_108 = uVar6;
    local_108[1] = uVar3;
    local_108[2] = (longlong)uVar3 >> 0x3f;
    local_108[3] = (longlong)uVar3 >> 0x3f;
    local_108[4] = local_100;
    local_108[5] = uVar7;
    local_108[6] = (longlong)uVar7 >> 0x3f;
    local_108[7] = (longlong)uVar7 >> 0x3f;
    local_110 = (longlong)local_110 >> 0x3f;
    bVar10 = false;
    puVar5 = &local_f0;
    puVar8 = &local_100;
    bVar1 = true;
    do {
      bVar2 = bVar1;
      uVar7 = (ulonglong)bVar10;
      uVar3 = (*puVar8 ^ local_110) - local_110;
      bVar10 = (*puVar8 ^ local_110) < local_110 || uVar3 < uVar7;
      *puVar5 = uVar3 - uVar7;
      puVar5 = &local_f8;
      puVar8 = &local_110;
      bVar1 = false;
    } while (bVar2);
    local_108[8] = local_f0;
    local_108[9] = local_f8;
    local_108[10] = 0;
    local_108[0xb] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e5eb39 FUN_147e5eb39 body=166 status=ok
// SIG undefined FUN_147e5eb39(void)

longlong FUN_147e5eb39(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uStack_38;
  ulonglong local_30;
  
  lVar4 = param_3[2];
  iVar1 = param_2[2];
  bVar13 = false;
  iVar2 = param_2[1];
  lVar9 = param_3[1];
  iVar3 = *param_2;
  lVar5 = *param_3;
  uVar8 = (longlong)iVar3 * *param_3;
  uVar12 = (longlong)iVar2 * param_3[1];
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar6 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,uVar12) || CARRY8(uVar8 + uVar12,uVar6);
    *puVar11 = uVar8 + uVar12 + uVar6;
    uVar8 = SUB168(SEXT816((longlong)iVar3) * SEXT816(lVar5),8);
    uVar12 = SUB168(SEXT816((longlong)iVar2) * SEXT816(lVar9),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  lVar9 = 0;
  bVar13 = false;
  uVar8 = lVar4 * iVar1;
  puVar11 = &local_30;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar12 = (ulonglong)bVar13;
    bVar13 = CARRY8(uVar8,*puVar11) || CARRY8(uVar8 + *puVar11,uVar12);
    *(ulonglong *)(param_1 + lVar9 * 8) = uVar8 + *puVar11 + uVar12;
    lVar9 = 1;
    uVar8 = SUB168(SEXT816((longlong)iVar1) * SEXT816(lVar4),8);
    puVar11 = &uStack_38;
    bVar7 = false;
  } while (bVar10);
  return param_1;
}



// FUNCTION 147e5ebdf FUN_147e5ebdf body=131 status=ok
// SIG undefined FUN_147e5ebdf(void)

undefined4 * FUN_147e5ebdf(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147e5d195(param_3,param_2[1],&local_40,1);
  param_1[4] = local_40;
  param_1[5] = uStack_3c;
  param_1[6] = uStack_38;
  param_1[7] = uStack_34;
  FUN_147e5d195(param_3,*param_2,&local_40,1);
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5ec64 FUN_147e5ec64 body=330 status=ok
// SIG undefined FUN_147e5ec64(void)

undefined8 * FUN_147e5ec64(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  ulonglong local_78 [6];
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = param_2[2];
  lVar1 = *param_3;
  lVar2 = *param_2;
  lVar3 = param_3[2];
  bVar11 = false;
  uVar6 = lVar2 * param_3[2];
  uVar9 = lVar7 * *param_3;
  puVar10 = &local_48;
  bVar5 = true;
  do {
    bVar8 = bVar5;
    uVar4 = (ulonglong)bVar11;
    bVar11 = uVar6 < uVar9 || uVar6 - uVar9 < uVar4;
    *puVar10 = (uVar6 - uVar9) - uVar4;
    uVar6 = SUB168(SEXT816(lVar2) * SEXT816(lVar3),8);
    uVar9 = SUB168(SEXT816(lVar7) * SEXT816(lVar1),8);
    puVar10 = local_78 + 3;
    bVar5 = false;
  } while (bVar8);
  *param_1 = CONCAT44(local_48._4_4_,(undefined4)local_48);
  param_1[1] = local_78[3];
  lVar7 = param_2[2];
  lVar1 = param_3[1];
  lVar2 = param_2[1];
  lVar3 = param_3[2];
  bVar11 = false;
  uVar6 = lVar2 * param_3[2];
  uVar9 = lVar7 * param_3[1];
  puVar10 = &local_48;
  bVar5 = true;
  do {
    bVar8 = bVar5;
    uVar4 = (ulonglong)bVar11;
    bVar11 = uVar6 < uVar9 || uVar6 - uVar9 < uVar4;
    *puVar10 = (uVar6 - uVar9) - uVar4;
    uVar6 = SUB168(SEXT816(lVar2) * SEXT816(lVar3),8);
    uVar9 = SUB168(SEXT816(lVar7) * SEXT816(lVar1),8);
    puVar10 = local_78 + 3;
    bVar5 = false;
  } while (bVar8);
  param_1[2] = CONCAT44(local_48._4_4_,(undefined4)local_48);
  param_1[3] = local_78[3];
  FUN_147e5edaf(param_3 + 3,param_2[2]);
  FUN_147e5edaf(param_2 + 3,param_3[2],local_78);
  lVar7 = 0;
  bVar11 = false;
  do {
    uVar6 = (ulonglong)bVar11;
    uVar9 = local_78[lVar7] - local_78[lVar7 + 3];
    bVar11 = local_78[lVar7] < local_78[lVar7 + 3] || uVar9 < uVar6;
    (&local_48)[lVar7] = uVar9 - uVar6;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  param_1[6] = local_38;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_1 + 5) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_3c;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5edaf FUN_147e5edaf body=87 status=ok
// SIG undefined FUN_147e5edaf(void)

void FUN_147e5edaf(ulonglong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  bool bVar10;
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = SUB168(auVar4 * auVar6,8);
  *param_3 = SUB168(auVar4 * auVar6,0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1[1];
  auVar8 = auVar5 * auVar7 + auVar8;
  *(undefined1 (*) [16])(param_3 + 1) = auVar8;
  if ((longlong)param_1[1] < 0) {
    param_3[2] = auVar8._8_8_ - param_2;
  }
  if ((longlong)param_2 < 0) {
    lVar9 = 0;
    bVar10 = false;
    do {
      puVar1 = param_3 + lVar9 + 1;
      uVar2 = (ulonglong)bVar10;
      uVar3 = *puVar1 - param_1[lVar9];
      bVar10 = *puVar1 < param_1[lVar9] || uVar3 < uVar2;
      *puVar1 = uVar3 - uVar2;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 2);
  }
  return;
}



// FUNCTION 147e5ee06 FUN_147e5ee06 body=319 status=ok
// SIG undefined FUN_147e5ee06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_147e5ee06(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auStack_c8 [32];
  ulonglong local_a8 [6];
  ulonglong local_78 [6];
  longlong alStack_48 [7];
  
  alStack_48[6] = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar9 = *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 100);
  fVar6 = *(float *)(param_1 + 0x38) * *(float *)(param_2 + 0x60) + fVar9 +
          *(float *)(param_1 + 0x40);
  fVar9 = (ABS(*(float *)(param_1 + 0x40)) +
          ABS(*(float *)(param_2 + 0x60)) * ABS(*(float *)(param_1 + 0x38)) + ABS(fVar9)) *
          4.7683716e-07;
  uVar3 = ((fVar9 < fVar6) - 1) + (uint)(fVar9 < fVar6);
  if ((fVar6 <= fVar9) && (-fVar9 <= fVar6)) {
    FUN_147e5efd6(local_78,param_2 + 0x40,param_1 + 0x20);
    auVar7._0_8_ = FUN_147e5ef46(local_a8,param_1,param_2);
    auVar7._8_8_ = extraout_XMM0_Qb;
    lVar4 = 0;
    bVar5 = false;
    do {
      uVar1 = (ulonglong)bVar5;
      uVar2 = local_a8[lVar4] + local_78[lVar4];
      bVar5 = CARRY8(local_a8[lVar4],local_78[lVar4]) || CARRY8(uVar2,uVar1);
      alStack_48[lVar4] = uVar2 + uVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
    auVar7 = pmovsxbq(auVar7,0x101);
    lVar4 = 0;
    do {
      auVar8._0_8_ = -(ulonglong)(alStack_48[lVar4] == 0);
      auVar8._8_8_ = -(ulonglong)(alStack_48[lVar4 + 1] == 0);
      auVar7 = auVar7 & auVar8;
      lVar4 = lVar4 + 2;
    } while (lVar4 != 6);
    uVar3 = (uint)((_DAT_149934d50 & ~auVar7) != (undefined1  [16])0x0) |
            (uint)(alStack_48[5] >> 0x3f);
  }
  if ((alStack_48[6] ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5ef46 FUN_147e5ef46 body=143 status=ok
// SIG undefined FUN_147e5ef46(void)

longlong FUN_147e5ef46(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_a8 [40];
  ulonglong local_80 [6];
  ulonglong local_50 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147e5f1aa(param_2 + 0x10,param_3 + 0x20,local_50);
  FUN_147e5f1aa(param_2,param_3,local_80);
  lVar3 = 0;
  bVar4 = false;
  do {
    uVar1 = (ulonglong)bVar4;
    uVar2 = local_80[lVar3] + local_50[lVar3];
    bVar4 = CARRY8(local_80[lVar3],local_50[lVar3]) || CARRY8(uVar2,uVar1);
    *(ulonglong *)(param_1 + lVar3 * 8) = uVar2 + uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 6);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5efd6 FUN_147e5efd6 body=143 status=ok
// SIG undefined FUN_147e5efd6(void)

undefined4 * FUN_147e5efd6(undefined4 *param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e5f066(param_2,param_3,&local_58);
  if (*(longlong *)(param_3 + 0x10) < 0) {
    lVar5 = 0;
    bVar6 = false;
    do {
      uVar2 = *(ulonglong *)(param_2 + lVar5 * 8);
      puVar1 = (ulonglong *)(&uStack_40 + lVar5 * 2);
      uVar3 = (ulonglong)bVar6;
      uVar4 = *puVar1 - uVar2;
      bVar6 = *puVar1 < uVar2 || uVar4 < uVar3;
      *puVar1 = uVar4 - uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
  }
  param_1[8] = local_38;
  param_1[9] = uStack_34;
  param_1[10] = uStack_30;
  param_1[0xb] = uStack_2c;
  param_1[4] = local_48;
  param_1[5] = uStack_44;
  param_1[6] = uStack_40;
  param_1[7] = uStack_3c;
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147e5f066 FUN_147e5f066 body=323 status=ok
// SIG undefined FUN_147e5f066(void)

void FUN_147e5f066(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  ulonglong auStack_98 [4];
  longlong local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_1;
  local_68 = auVar5 * auVar8;
  lVar13 = 2;
  bVar16 = false;
  uVar15 = local_68._8_8_;
  do {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar2;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_1[lVar13 + -1];
    uVar12 = SUB168(auVar6 * auVar9,8);
    uVar11 = SUB168(auVar6 * auVar9,0);
    uVar3 = (ulonglong)bVar16;
    uVar4 = uVar11 + uVar15;
    bVar16 = CARRY8(uVar11,uVar15) || CARRY8(uVar4,uVar3);
    (&lStack_70)[lVar13] = uVar4 + uVar3;
    *(ulonglong *)(local_68 + lVar13 * 8) = uVar12;
    lVar13 = lVar13 + 1;
    uVar15 = uVar12;
  } while (lVar13 != 5);
  local_48 = local_48 + (ulonglong)bVar16;
  lVar13 = 1;
  bVar16 = false;
  do {
    uVar2 = param_2[lVar13];
    lVar14 = 0;
    bVar17 = false;
    uVar15 = 0;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_1[lVar14];
      uVar12 = SUB168(auVar7 * auVar10,8);
      uVar11 = SUB168(auVar7 * auVar10,0);
      uVar3 = (ulonglong)bVar17;
      uVar4 = uVar11 + uVar15;
      bVar17 = CARRY8(uVar11,uVar15) || CARRY8(uVar4,uVar3);
      auStack_98[lVar14] = uVar4 + uVar3;
      lVar14 = lVar14 + 1;
      uVar15 = uVar12;
    } while (lVar14 != 4);
    local_78 = uVar12 + bVar17;
    lVar14 = 0;
    bVar17 = false;
    do {
      puVar1 = (ulonglong *)(local_68 + lVar14 * 8 + lVar13 * 8);
      uVar2 = (ulonglong)bVar17;
      uVar15 = *puVar1 + auStack_98[lVar14];
      bVar17 = CARRY8(*puVar1,auStack_98[lVar14]) || CARRY8(uVar15,uVar2);
      *puVar1 = uVar15 + uVar2;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 4);
    (&local_48)[lVar13] = local_78 + (ulonglong)bVar17;
    lVar13 = 2;
    bVar17 = !bVar16;
    bVar16 = true;
  } while (bVar17);
  *(undefined8 *)(param_3 + 0xc) = local_38;
  param_3[8] = (undefined4)local_48;
  param_3[9] = local_48._4_4_;
  param_3[10] = uStack_40;
  param_3[0xb] = uStack_3c;
  param_3[4] = local_58;
  param_3[5] = uStack_54;
  param_3[6] = uStack_50;
  param_3[7] = uStack_4c;
  *param_3 = local_68._0_4_;
  param_3[1] = local_68._4_4_;
  param_3[2] = local_68._8_4_;
  param_3[3] = local_68._12_4_;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f1aa FUN_147e5f1aa body=103 status=ok
// SIG undefined FUN_147e5f1aa(void)

void FUN_147e5f1aa(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_147e5f211();
  if (*(longlong *)(param_1 + 8) < 0) {
    lVar5 = 0;
    bVar6 = false;
    do {
      uVar2 = *(ulonglong *)(param_2 + lVar5 * 8);
      puVar1 = (ulonglong *)(param_3 + 0x10 + lVar5 * 8);
      uVar3 = (ulonglong)bVar6;
      uVar4 = *puVar1 - uVar2;
      bVar6 = *puVar1 < uVar2 || uVar4 < uVar3;
      *puVar1 = uVar4 - uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 4);
  }
  if (*(longlong *)(param_2 + 0x18) < 0) {
    lVar5 = 0;
    bVar6 = false;
    do {
      uVar2 = *(ulonglong *)(param_1 + lVar5 * 8);
      puVar1 = (ulonglong *)(param_3 + 0x20 + lVar5 * 8);
      uVar3 = (ulonglong)bVar6;
      uVar4 = *puVar1 - uVar2;
      bVar6 = *puVar1 < uVar2 || uVar4 < uVar3;
      *puVar1 = uVar4 - uVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 2);
  }
  return;
}



// FUNCTION 147e5f211 FUN_147e5f211 body=296 status=ok
// SIG undefined FUN_147e5f211(void)

void FUN_147e5f211(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
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
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_1;
  auVar5 = auVar5 * auVar8;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar5._8_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1[1];
  auStack_70 = auVar6 * auVar9 + auVar11;
  lVar16 = 1;
  do {
    uVar2 = param_2[lVar16];
    lVar17 = 0;
    bVar20 = false;
    uVar18 = 0;
    puVar19 = &local_88;
    bVar21 = true;
    do {
      bVar15 = bVar21;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_1[lVar17];
      uVar14 = SUB168(auVar7 * auVar10,8);
      uVar13 = SUB168(auVar7 * auVar10,0);
      uVar3 = (ulonglong)bVar20;
      uVar4 = uVar13 + uVar18;
      bVar20 = CARRY8(uVar13,uVar18) || CARRY8(uVar4,uVar3);
      *puVar19 = uVar4 + uVar3;
      lVar17 = 1;
      uVar18 = uVar14;
      puVar19 = &local_80;
      bVar21 = false;
    } while (bVar15);
    lVar17 = 0;
    bVar21 = false;
    puVar19 = &local_88;
    bVar15 = true;
    do {
      bVar12 = bVar15;
      puVar1 = (ulonglong *)(auStack_70 + (lVar17 + lVar16) * 8 + -8);
      uVar2 = (ulonglong)bVar21;
      uVar18 = *puVar1 + *puVar19;
      bVar21 = CARRY8(*puVar1,*puVar19) || CARRY8(uVar18,uVar2);
      *puVar1 = uVar18 + uVar2;
      lVar17 = 1;
      puVar19 = &local_80;
      bVar15 = false;
    } while (bVar12);
    *(ulonglong *)(auStack_70 + lVar16 * 8 + 8) = uVar14 + bVar20 + (ulonglong)bVar21;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 4);
  local_78._0_4_ = auVar5._0_4_;
  local_78._4_4_ = auVar5._4_4_;
  param_3[8] = local_58;
  param_3[9] = uStack_54;
  param_3[10] = uStack_50;
  param_3[0xb] = uStack_4c;
  param_3[4] = auStack_70._8_4_;
  param_3[5] = auStack_70._12_4_;
  param_3[6] = uStack_60;
  param_3[7] = uStack_5c;
  *param_3 = (undefined4)local_78;
  param_3[1] = local_78._4_4_;
  param_3[2] = auStack_70._0_4_;
  param_3[3] = auStack_70._4_4_;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
  local_78 = auVar5._0_8_;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f33a FUN_147e5f33a body=241 status=ok
// SIG undefined FUN_147e5f33a(void)

undefined8 FUN_147e5f33a(undefined8 param_1,int *param_2,int *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  bool bVar5;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong local_68 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68[0] = (longlong)param_2[1] - (longlong)param_3[1];
  local_68[2] = (longlong)*param_3 - (longlong)*param_2;
  local_68[1] = (ulonglong)((int)local_68[0] >> 0x1f);
  local_68[3] = (ulonglong)((int)local_68[2] >> 0x1f);
  FUN_147e5f976(local_98,local_68,param_2);
  lVar2 = 0;
  bVar5 = false;
  do {
    uVar3 = (ulonglong)bVar5;
    uVar1 = -local_98[lVar2];
    bVar5 = local_98[lVar2] != 0 || uVar1 < uVar3;
    (&local_80)[lVar2] = uVar1 - uVar3;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  local_38 = local_70;
  local_48 = (undefined4)local_80;
  uStack_44 = local_80._4_4_;
  uStack_40 = uStack_78;
  uStack_3c = uStack_74;
  FUN_147e5cf4e(local_68,param_1);
  puVar4 = local_68;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_4 = *puVar4;
    puVar4 = puVar4 + 1;
    param_4 = param_4 + 1;
  }
  uVar3 = local_68[1] | local_68[0] | local_68[2] | local_68[3];
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),uVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f42c FUN_147e5f42c body=341 status=ok
// SIG undefined FUN_147e5f42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e5f42c(longlong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong alStack_20 [4];
  
  alStack_20[3] = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *param_2;
  lVar4 = (longlong)(iVar1 >> 0x1f);
  uVar5 = 0;
  auVar6 = pmovsxbq(in_XMM0,0x100);
  do {
    uVar2 = DAT_149931e80;
    if ((longlong)(uVar5 ^ uVar2) < -0x7ffffffffffffffd) {
      alStack_20[uVar5] = lVar4;
    }
    auVar7._8_4_ = (int)uVar5;
    auVar7._0_8_ = uVar5;
    auVar7._12_4_ = (int)(uVar5 >> 0x20);
    uVar3 = DAT_149931e80._8_8_;
    if ((longlong)((auVar7._8_8_ | auVar6._8_8_) ^ uVar3) < -0x7ffffffffffffffd) {
      alStack_20[uVar5 + 1] = lVar4;
    }
    uVar5 = uVar5 + 2;
  } while (uVar5 != 4);
  param_1[2] = alStack_20[1];
  param_1[3] = alStack_20[2];
  *param_1 = (longlong)iVar1;
  param_1[1] = alStack_20[0];
  local_28 = (longlong)param_2[1];
  lVar4 = (longlong)(param_2[1] >> 0x1f);
  uVar5 = 0;
  do {
    if ((longlong)(uVar5 ^ uVar2) < -0x7ffffffffffffffd) {
      alStack_20[uVar5] = lVar4;
    }
    auVar8._8_4_ = (int)uVar5;
    auVar8._0_8_ = uVar5;
    auVar8._12_4_ = (int)(uVar5 >> 0x20);
    if ((longlong)((auVar8._8_8_ | auVar6._8_8_) ^ uVar3) < -0x7ffffffffffffffd) {
      alStack_20[uVar5 + 1] = lVar4;
    }
    uVar5 = uVar5 + 2;
  } while (uVar5 != 4);
  param_1[6] = alStack_20[1];
  param_1[7] = alStack_20[2];
  param_1[4] = local_28;
  param_1[5] = alStack_20[0];
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 1;
  if ((alStack_20[3] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f582 FUN_147e5f582 body=223 status=ok
// SIG undefined FUN_147e5f582(void)

void FUN_147e5f582(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [40];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = *(undefined4 *)(param_1 + 0x40);
  uStack_44 = *(undefined4 *)(param_1 + 0x44);
  uStack_40 = *(undefined4 *)(param_1 + 0x48);
  uStack_3c = *(undefined4 *)(param_1 + 0x4c);
  local_38 = *(undefined4 *)(param_1 + 0x50);
  uStack_34 = *(undefined4 *)(param_1 + 0x54);
  uStack_30 = *(undefined4 *)(param_1 + 0x58);
  uStack_2c = *(undefined4 *)(param_1 + 0x5c);
  FUN_147e5f662(local_90,local_38,param_1);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  uVar1 = FUN_147e5f772(local_90);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  local_48 = *(undefined4 *)(param_1 + 0x40);
  uStack_44 = *(undefined4 *)(param_1 + 0x44);
  uStack_40 = *(undefined4 *)(param_1 + 0x48);
  uStack_3c = *(undefined4 *)(param_1 + 0x4c);
  local_38 = *(undefined4 *)(param_1 + 0x50);
  uStack_34 = *(undefined4 *)(param_1 + 0x54);
  uStack_30 = *(undefined4 *)(param_1 + 0x58);
  uStack_2c = *(undefined4 *)(param_1 + 0x5c);
  FUN_147e5f8df(local_90,param_2,param_1);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  local_68 = local_48;
  uStack_64 = uStack_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  uVar1 = FUN_147e5f772(local_90);
  *(undefined4 *)(param_1 + 100) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f662 FUN_147e5f662 body=147 status=ok
// SIG undefined FUN_147e5f662(void)

longlong FUN_147e5f662(longlong param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [40];
  ulonglong local_70 [5];
  ulonglong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147e5f6f6(param_3 + 0x20,param_2[1],local_48,1);
  FUN_147e5f6f6(param_3,*param_2,local_70,1);
  lVar3 = 0;
  bVar4 = false;
  do {
    uVar1 = (ulonglong)bVar4;
    uVar2 = local_70[lVar3] + local_48[lVar3];
    bVar4 = CARRY8(local_70[lVar3],local_48[lVar3]) || CARRY8(uVar2,uVar1);
    *(ulonglong *)(param_1 + lVar3 * 8) = uVar2 + uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f6f6 FUN_147e5f6f6 body=124 status=ok
// SIG undefined FUN_147e5f6f6(void)

void FUN_147e5f6f6(ulonglong *param_1,int param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar11 = (ulonglong)param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_1;
  *param_3 = SUB168(auVar4 * auVar6,0);
  lVar10 = 1;
  bVar13 = false;
  uVar12 = SUB168(auVar4 * auVar6,8);
  do {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_1[lVar10];
    uVar9 = SUB168(auVar5 * auVar7,8);
    uVar8 = SUB168(auVar5 * auVar7,0);
    uVar2 = (ulonglong)bVar13;
    uVar3 = uVar8 + uVar12;
    bVar13 = CARRY8(uVar8,uVar12) || CARRY8(uVar3,uVar2);
    param_3[lVar10] = uVar3 + uVar2;
    lVar10 = lVar10 + 1;
    uVar12 = uVar9;
  } while (lVar10 != 4);
  lVar10 = uVar9 + bVar13;
  param_3[4] = lVar10;
  if ((longlong)param_1[3] < 0) {
    param_3[4] = lVar10 - uVar11;
  }
  if (param_2 < 0) {
    lVar10 = 0;
    bVar13 = false;
    do {
      puVar1 = param_3 + lVar10 + 1;
      uVar12 = (ulonglong)bVar13;
      uVar11 = *puVar1 - param_1[lVar10];
      bVar13 = *puVar1 < param_1[lVar10] || uVar11 < uVar12;
      *puVar1 = uVar11 - uVar12;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 4);
  }
  return;
}



// FUNCTION 147e5f772 FUN_147e5f772 body=167 status=ok
// SIG undefined FUN_147e5f772(void)

int FUN_147e5f772(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_147e5f81a(param_1,&local_24);
  iVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_147e592b3(param_2,&local_28);
    iVar3 = (int)((float)lVar1 / (float)uVar2) + (local_24 - local_28) * 0x800000;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f81a FUN_147e5f81a body=197 status=ok
// SIG undefined FUN_147e5f81a(void)

ulonglong FUN_147e5f81a(ulonglong *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar2 = (longlong)param_1[4] >> 0x3f;
  puVar4 = param_1 + 3;
  iVar3 = 0x101;
  uVar6 = 5;
  while( true ) {
    uVar5 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar5;
    if (param_1[uVar6] != uVar2) break;
    puVar4 = puVar4 + -1;
    iVar3 = iVar3 + -0x40;
    if (uVar5 < 2) {
      if ((longlong)(*param_1 ^ uVar2) < 0) {
        *param_2 = 1;
        uVar2 = uVar2 & 0x8000000000000000 | *param_1 >> 1;
      }
      else {
        *param_2 = 0;
        uVar2 = *param_1;
      }
      return uVar2;
    }
  }
  iVar1 = FUN_147e5105f(param_1[uVar6] ^ uVar2);
  *param_2 = iVar3 - iVar1;
  if (iVar1 < 1) {
    return param_1[uVar6] >> 1 | uVar2 & 0x8000000000000000;
  }
  uVar2 = param_1[uVar6] << ((byte)(iVar1 + -1) & 0x3f);
  if (iVar1 + -1 == 0) {
    return uVar2;
  }
  return uVar2 | *puVar4 >> (0x41U - (char)iVar1 & 0x3f);
}



// FUNCTION 147e5f8df FUN_147e5f8df body=150 status=ok
// SIG undefined FUN_147e5f8df(void)

longlong FUN_147e5f8df(longlong param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_98 [40];
  ulonglong local_70 [5];
  ulonglong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_147e5f6f6(param_3,param_2[1],local_48,1);
  FUN_147e5f6f6(param_3 + 0x20,*param_2,local_70,1);
  lVar3 = 0;
  bVar4 = false;
  do {
    uVar1 = (ulonglong)bVar4;
    uVar2 = local_70[lVar3] - local_48[lVar3];
    bVar4 = local_70[lVar3] < local_48[lVar3] || uVar2 < uVar1;
    *(ulonglong *)(param_1 + lVar3 * 8) = uVar2 - uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 5);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5f976 FUN_147e5f976 body=142 status=ok
// SIG undefined FUN_147e5f976(void)

longlong FUN_147e5f976(longlong param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  ulonglong local_50 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147e5d195(param_2 + 0x10,param_3[1],local_50 + 3,1);
  FUN_147e5d195(param_2,*param_3,local_50,1);
  lVar3 = 0;
  bVar4 = false;
  do {
    uVar1 = (ulonglong)bVar4;
    uVar2 = local_50[lVar3] + local_50[lVar3 + 3];
    bVar4 = CARRY8(local_50[lVar3],local_50[lVar3 + 3]) || CARRY8(uVar2,uVar1);
    *(ulonglong *)(param_1 + lVar3 * 8) = uVar2 + uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5fa06 FUN_147e5fa06 body=93 status=ok
// SIG undefined FUN_147e5fa06(void)

void FUN_147e5fa06(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68 [9];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_147e5ec64(local_68);
  FUN_147e5cf4e(local_68,param_1);
  puVar2 = local_68;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_4 = *puVar2;
    puVar2 = puVar2 + 1;
    param_4 = param_4 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5fa64 FUN_147e5fa64 body=346 status=ok
// SIG undefined FUN_147e5fa64(void)

ulonglong FUN_147e5fa64(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) * 2);
  if (uVar6 <= param_3) {
    uVar6 = param_3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x118,&local_50);
  iVar7 = (int)param_1[1];
  if (0 < iVar7) {
    lVar2 = *param_1;
    lVar8 = 0;
    do {
      memcpy((void *)(lVar4 + lVar8),(void *)(lVar8 + lVar2),0x118);
      lVar8 = lVar8 + 0x118;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar1 = uVar6 * 0x118 + 0x118;
  uVar5 = local_50;
  uVar9 = uVar6;
  if (uVar1 <= local_50) {
    uVar9 = uVar6 + 1;
    local_50 = local_50 - 0x118;
    uVar5 = local_50;
    if (uVar1 <= local_50) {
      uVar6 = local_50 + uVar6 * -0x118;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar5 = SUB168(auVar3 * ZEXT816(0xea0ea0ea0ea0ea0f),0);
      uVar9 = uVar9 + uVar6 / 0x118;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,(local_58 & 0x7fffffff) * 0x118);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  *param_1 = lVar4;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5fbc0 FUN_147e5fbc0 body=320 status=ok
// SIG undefined FUN_147e5fbc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e5fbc0(longlong *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_147e5fd00(param_1,&PTR_vftable_14c6e47a0,param_2);
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    auVar4 = _DAT_149931e80;
    uVar3 = *param_3;
    uVar6 = ~uVar2 + param_2;
    auVar8._4_4_ = 0;
    auVar8._0_4_ = uVar6;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = 0;
    lVar1 = *param_1 + (longlong)(int)uVar2 * 4;
    uVar5 = 0;
    auVar10 = pmovsxbq(in_XMM1,0x302);
    auVar11 = pmovsxbq(in_XMM2,0x100);
    auVar8 = auVar8 | _DAT_149931e80;
    do {
      lVar7 = auVar8._0_8_;
      lVar9 = auVar8._8_8_;
      if ((bool)(~(lVar7 < (longlong)(uVar5 ^ auVar4._0_8_)) & 1)) {
        *(undefined4 *)(lVar1 + uVar5 * 4) = uVar3;
      }
      auVar12._8_4_ = (int)uVar5;
      auVar12._0_8_ = uVar5;
      auVar12._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar12._8_8_ | auVar11._8_8_) ^ auVar4._8_8_) <= lVar9) {
        *(undefined4 *)(lVar1 + 4 + uVar5 * 4) = uVar3;
      }
      auVar12 = (auVar12 | auVar10) ^ auVar4;
      if (auVar12._0_8_ <= lVar7) {
        *(undefined4 *)(lVar1 + 8 + uVar5 * 4) = uVar3;
      }
      if (auVar12._8_8_ <= lVar9) {
        *(undefined4 *)(lVar1 + 0xc + uVar5 * 4) = uVar3;
      }
      uVar5 = uVar5 + 4;
    } while (((ulonglong)uVar6 + 4 & 0xfffffffffffffffc) != uVar5);
  }
  else if (param_2 < (int)uVar2) {
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 147e5fd00 FUN_147e5fd00 body=297 status=ok
// SIG undefined FUN_147e5fd00(void)

void FUN_147e5fd00(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)(uVar2 * 2);
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 4,&local_48);
  lVar4 = param_1[1];
  if (0 < (int)lVar4) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar6 * 4) = *(undefined4 *)(lVar3 + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while ((int)lVar4 != (int)lVar6);
  }
  uVar1 = uVar8 * 4 + 4;
  uVar7 = uVar8;
  if (uVar1 <= local_48) {
    uVar7 = uVar8 + 1;
    local_48 = local_48 - 4;
    if (uVar1 <= local_48) {
      uVar7 = uVar7 + (local_48 + uVar8 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 2);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = lVar5;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5fe2a FUN_147e5fe2a body=298 status=ok
// SIG undefined FUN_147e5fe2a(void)

ulonglong FUN_147e5fe2a(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)(uVar2 * 2);
  if (uVar6 <= param_3) {
    uVar6 = param_3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x38,&local_50);
  FUN_144b3d470(uVar4,*param_1,(longlong)*(int *)(param_1 + 1) * 0x38);
  uVar1 = uVar6 * 0x38 + 0x38;
  uVar5 = local_50;
  uVar7 = uVar6;
  if (uVar1 <= local_50) {
    uVar7 = uVar6 + 1;
    local_50 = local_50 - 0x38;
    uVar5 = local_50;
    if (uVar1 <= local_50) {
      uVar6 = local_50 + uVar6 * -0x38 >> 3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar5 = SUB168(auVar3 * ZEXT816(0x2492492492492493),0);
      uVar7 = uVar7 + uVar6 / 7;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0x38);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e5ff56 FUN_147e5ff56 body=95 status=ok
// SIG undefined FUN_147e5ff56(void)

void FUN_147e5ff56(longlong param_1)

{
  FUN_147e600ae(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0 && -1 < (longlong)*(int *)(param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x10),
               (longlong)*(int *)(param_1 + 0x1c) * 0x118);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}



// FUNCTION 147e5ffb6 FUN_147e5ffb6 body=88 status=ok
// SIG undefined FUN_147e5ffb6(void)

void FUN_147e5ffb6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0 && -1 < (longlong)*(int *)(param_1 + 0x3c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x30),
               (longlong)*(int *)(param_1 + 0x3c) << 2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  FUN_147e600ae(param_1);
  return;
}



// FUNCTION 147e6000e FUN_147e6000e body=160 status=ok
// SIG undefined FUN_147e6000e(void)

void FUN_147e6000e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2040) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x2044)) && (*(longlong *)(param_1 + 0x2038) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x2038),
               (longlong)*(int *)(param_1 + 0x2044) * 0x128);
  }
  *(undefined8 *)(param_1 + 0x2038) = 0;
  *(undefined4 *)(param_1 + 0x2044) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x20) != 0 && -1 < (longlong)*(int *)(param_1 + 0x2c)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x20),
               (longlong)*(int *)(param_1 + 0x2c) << 7);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  return;
}



// FUNCTION 147e600ae FUN_147e600ae body=201 status=ok
// SIG undefined FUN_147e600ae(void)

void FUN_147e600ae(longlong *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],(longlong)*(int *)((longlong)param_1 + 0x2c) * 0x38
              );
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e60178 FUN_147e60178 body=132 status=ok
// SIG undefined FUN_147e60178(void)

longlong * FUN_147e60178(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_143821c08(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e601fc FUN_147e601fc body=106 status=ok
// SIG undefined FUN_147e601fc(void)

void FUN_147e601fc(longlong *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = (int)param_1[3];
  uVar2 = *(undefined4 *)(*param_1 + (ulonglong)param_2 * 4);
  iVar3 = iVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) <= iVar1) {
    FUN_147e6039e(param_1 + 2,iVar1 + 1);
    iVar3 = (int)param_1[3];
  }
  *(ulonglong *)(param_1[2] + (longlong)iVar3 * 8) = CONCAT44(uVar2,param_3);
  *(int *)(param_1 + 3) = iVar1 + 1;
  *(int *)(*param_1 + (ulonglong)param_2 * 4) = iVar1;
  return;
}



// FUNCTION 147e60266 FUN_147e60266 body=311 status=ok
// SIG undefined FUN_147e60266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e60266(longlong *param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  longlong lVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_141807aa8(param_1,&PTR_vftable_14c6e47a0,param_2);
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    auVar4 = _DAT_149931e80;
    uVar3 = *param_3;
    uVar6 = ~uVar2 + param_2;
    auVar8._4_4_ = 0;
    auVar8._0_4_ = uVar6;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = 0;
    lVar1 = *param_1 + (longlong)(int)uVar2 * 4;
    uVar5 = 0;
    auVar10 = pmovsxbq(in_XMM1,0x302);
    auVar11 = pmovsxbq(in_XMM2,0x100);
    auVar8 = auVar8 | _DAT_149931e80;
    do {
      lVar7 = auVar8._0_8_;
      lVar9 = auVar8._8_8_;
      if ((bool)(~(lVar7 < (longlong)(uVar5 ^ auVar4._0_8_)) & 1)) {
        *(undefined4 *)(lVar1 + uVar5 * 4) = uVar3;
      }
      auVar12._8_4_ = (int)uVar5;
      auVar12._0_8_ = uVar5;
      auVar12._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar12._8_8_ | auVar11._8_8_) ^ auVar4._8_8_) <= lVar9) {
        *(undefined4 *)(lVar1 + 4 + uVar5 * 4) = uVar3;
      }
      auVar12 = (auVar12 | auVar10) ^ auVar4;
      if (auVar12._0_8_ <= lVar7) {
        *(undefined4 *)(lVar1 + 8 + uVar5 * 4) = uVar3;
      }
      if (auVar12._8_8_ <= lVar9) {
        *(undefined4 *)(lVar1 + 0xc + uVar5 * 4) = uVar3;
      }
      uVar5 = uVar5 + 4;
    } while (((ulonglong)uVar6 + 4 & 0xfffffffffffffffc) != uVar5);
  }
  else if (param_2 < (int)uVar2) {
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}



// FUNCTION 147e6039e FUN_147e6039e body=275 status=ok
// SIG undefined FUN_147e6039e(void)

void FUN_147e6039e(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_30 = uVar7 * 8;
  lVar4 = (*DAT_14c787670)(DAT_14c6e47a8,&local_30,DAT_14c6e47ac);
  lVar3 = param_1[1];
  if (0 < (int)lVar3) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      *(undefined8 *)(lVar4 + lVar5 * 8) = *(undefined8 *)(lVar2 + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while ((int)lVar3 != (int)lVar5);
  }
  uVar1 = uVar7 * 8 + 8;
  uVar6 = uVar7;
  if (uVar1 <= local_30) {
    uVar6 = uVar7 + 1;
    local_30 = local_30 - 8;
    if (uVar1 <= local_30) {
      uVar6 = uVar6 + (local_30 + uVar7 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),DAT_14c6e47a8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  *param_1 = lVar4;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e604b2 FUN_147e604b2 body=137 status=ok
// SIG undefined FUN_147e604b2(void)

longlong * FUN_147e604b2(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0x220
                );
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_147e605c2(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e6053c FUN_147e6053c body=133 status=ok
// SIG undefined FUN_147e6053c(void)

longlong * FUN_147e6053c(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_147e60768(param_2);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147e605c2 FUN_147e605c2 body=103 status=ok
// SIG undefined FUN_147e605c2(void)

void FUN_147e605c2(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x220);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x220);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e6062a FUN_147e6062a body=316 status=ok
// SIG undefined FUN_147e6062a(void)

ulonglong FUN_147e6062a(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar6 = (ulonglong)(uVar2 * 2);
  if (uVar6 <= param_3) {
    uVar6 = param_3;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x220,&local_50);
  FUN_144b3d470(uVar4,*param_1,(longlong)*(int *)(param_1 + 1) * 0x220);
  uVar1 = uVar6 * 0x220 + 0x220;
  uVar5 = local_50;
  uVar7 = uVar6;
  if (uVar1 <= local_50) {
    uVar7 = uVar6 + 1;
    local_50 = local_50 - 0x220;
    uVar5 = local_50;
    if (uVar1 <= local_50) {
      uVar6 = local_50 + uVar6 * -0x220;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar6;
      uVar5 = SUB168(auVar3 * ZEXT816(0xf0f0f0f0f0f0f0f1),0);
      uVar7 = uVar7 + uVar6 / 0x220;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0x220)
    ;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e60768 FUN_147e60768 body=106 status=ok
// SIG undefined FUN_147e60768(void)

void FUN_147e60768(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)(int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      lVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                        (&PTR_vftable_14c6e47a0,(longlong)(int)param_1[1] << 3);
      iVar3 = (int)param_1[1];
      if (0 < iVar3) {
        lVar1 = *param_1;
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4 * 8) = *(undefined8 *)(lVar1 + lVar4 * 8);
          lVar4 = lVar4 + 1;
        } while (iVar3 != (int)lVar4);
        iVar3 = (int)param_1[1];
      }
      *param_1 = lVar2;
      *(int *)((longlong)param_1 + 0xc) = iVar3;
    }
  }
  return;
}



// FUNCTION 147e607d2 FUN_147e607d2 body=306 status=ok
// SIG undefined FUN_147e607d2(void)

void FUN_147e607d2(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)(uVar2 * 2);
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,uVar8 * 8,&local_40);
  lVar4 = param_1[1];
  if (0 < (int)lVar4) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar5 + lVar6 * 8) = *(undefined8 *)(lVar3 + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while ((int)lVar4 != (int)lVar6);
  }
  uVar1 = uVar8 * 8 + 8;
  uVar7 = uVar8;
  if (uVar1 <= local_40) {
    uVar7 = uVar8 + 1;
    local_40 = local_40 - 8;
    if (uVar1 <= local_40) {
      uVar7 = uVar7 + (local_40 + uVar8 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 3);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = lVar5;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e60906 FUN_147e60906 body=140 status=ok
// SIG undefined FUN_147e60906(void)

void FUN_147e60906(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if (param_1[2] != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  return;
}



// FUNCTION 147e60992 FUN_147e60992 body=98 status=ok
// SIG undefined FUN_147e60992(void)

undefined8 * FUN_147e60992(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba3fd0;
  param_1[4] = &PTR_FUN_14aba3ff0;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e609fe FUN_147e609fe body=2459 status=ok
// SIG undefined FUN_147e609fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e609fe(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  int iVar25;
  int iVar26;
  longlong *plVar27;
  ulonglong uVar28;
  int *piVar29;
  longlong lVar30;
  int iVar31;
  undefined1 (*pauVar32) [16];
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  uint uVar48;
  uint uVar49;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0 [2];
  undefined1 auStack_190 [4];
  int local_18c;
  longlong local_188;
  undefined1 (*local_180) [16];
  char *local_178;
  char *local_170;
  int local_154;
  int local_124;
  int local_f4;
  int local_c4;
  ulonglong local_b0;
  undefined1 auVar44 [16];
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar20 = *(longlong *)(param_1 + 0x28);
  if (lVar20 == 0) {
    plVar27 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
  }
  else {
    plVar27 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
    lVar33 = *plVar27;
    if (lVar33 == 0) {
      lVar33 = FUN_144b3f4a0();
      *plVar27 = lVar33;
    }
    if (*(longlong *)(lVar33 + 0x3e0) != 0) {
      local_178 = "Ot";
      local_170 = "";
      FUN_144be96b0(*(longlong *)(lVar33 + 0x3e0),lVar20);
    }
  }
  lVar20 = *(longlong *)(param_1 + 0x30);
  lVar33 = *plVar27;
  if (lVar20 != 0) {
    if (lVar33 == 0) {
      lVar33 = FUN_144b3f4a0();
      *plVar27 = lVar33;
    }
    if (*(longlong *)(lVar33 + 0x3e0) != 0) {
      local_178 = "Ot";
      local_170 = "";
      FUN_144be96b0(*(longlong *)(lVar33 + 0x3e0),lVar20);
      lVar33 = *plVar27;
    }
  }
  if (lVar33 == 0) {
    lVar33 = FUN_144b3f4a0();
    *plVar27 = lVar33;
  }
  if (*(longlong *)(lVar33 + 0x3e0) != 0) {
    local_178 = "TthkcdSimdTree::BuildFirstNLevels";
    local_170 = "";
    FUN_144b3f370();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28) =
       **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x40);
  FUN_147e613a6(*(longlong *)(param_1 + 0x10) + 0x28,*(undefined8 *)(param_1 + 0x38));
  plVar3 = *(longlong **)(param_1 + 8);
  lVar20 = *plVar3;
  puVar2 = (undefined4 *)(lVar20 + 0x80 + (longlong)plVar3);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  auVar38 = *(undefined1 (*) [16])(lVar20 + 0x90 + (longlong)plVar3);
  puVar2 = (undefined4 *)(lVar20 + 0xa0 + (longlong)plVar3);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (undefined4 *)(lVar20 + 0xb0 + (longlong)plVar3);
  uVar13 = *puVar2;
  uVar14 = puVar2[1];
  uVar15 = puVar2[2];
  uVar16 = puVar2[3];
  auVar39 = *(undefined1 (*) [16])(lVar20 + 0xd0 + (longlong)plVar3);
  auVar53 = *(undefined1 (*) [16])(lVar20 + 0xc0 + (longlong)plVar3);
  FUN_147e56b1c();
  lVar20 = *(longlong *)(param_1 + 0x10);
  iVar25 = *(int *)(lVar20 + 0x30);
  lVar33 = (longlong)iVar25;
  if (lVar33 == 0) goto LAB_147e60b36;
  iVar26 = iVar25 + 4;
  local_1b8 = plVar27;
  if ((int)(*(uint *)(lVar20 + 0x34) & 0x7fffffff) < iVar26) {
    FUN_147e57f40(lVar20 + 0x28,&PTR_vftable_14c6e47a0,iVar26);
  }
  lVar30 = *(longlong *)(lVar20 + 0x28);
  lVar23 = lVar33 * 0x10;
  puVar1 = (undefined8 *)(lVar30 + 0x30 + lVar23);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar30 + 0x20 + lVar23);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar30 + 0x10 + lVar23);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar30 + lVar23) = 0;
  ((undefined8 *)(lVar30 + lVar23))[1] = 0;
  *(int *)(lVar20 + 0x30) = iVar26;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x14) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x1c);
  uVar21 = (undefined4)*(undefined8 *)(param_1 + 8);
  FUN_147e56bbe();
  pauVar32 = *(undefined1 (**) [16])(param_1 + 0x18);
  *(undefined4 *)pauVar32[2] = 0;
  *(int *)(pauVar32[2] + 4) = iVar25;
  *(undefined4 *)(pauVar32[2] + 8) = 1;
  lVar20 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar20 + 0x1d) == '\x01') {
    auVar44._0_8_ = auVar38._0_8_;
    auVar44._8_4_ = auVar38._4_4_;
    auVar44._12_4_ = uVar14;
    auVar43._8_8_ = auVar44._8_8_;
    auVar43._0_4_ = auVar38._0_4_;
    auVar43._4_4_ = uVar13;
    auVar51._8_4_ = auVar39._4_4_;
    auVar51._0_8_ = auVar43._8_8_;
    auVar51._12_4_ = 0;
    auVar45 = insertps(auVar43,auVar39,0x28);
    auVar46 = maxps(auVar45,auVar51);
    auVar37._4_4_ = uVar15;
    auVar37._0_4_ = auVar38._8_4_;
    auVar37._8_4_ = auVar38._12_4_;
    auVar37._12_4_ = uVar16;
    auVar37 = insertps(auVar37,auVar39,0xa8);
    auVar45._4_4_ = uVar16;
    auVar45._0_4_ = auVar38._12_4_;
    auVar45._8_4_ = auVar39._12_4_;
    auVar45._12_4_ = 0;
    auVar38 = maxps(auVar37,auVar45);
    auVar47 = maxps(auVar46,auVar38);
    auVar46._4_4_ = uVar9;
    auVar46._0_4_ = uVar5;
    auVar46._8_4_ = uVar6;
    auVar46._12_4_ = uVar10;
    auVar39 = insertps(auVar46,auVar53,0x28);
    auVar38._4_4_ = uVar10;
    auVar38._0_4_ = uVar6;
    auVar38._8_4_ = auVar53._4_4_;
    auVar38._12_4_ = 0;
    auVar38 = minps(auVar39,auVar38);
    auVar52._4_4_ = uVar11;
    auVar52._0_4_ = uVar7;
    auVar52._8_4_ = uVar8;
    auVar52._12_4_ = uVar12;
    auVar45 = insertps(auVar52,auVar53,0xa8);
    auVar39._4_4_ = uVar12;
    auVar39._0_4_ = uVar8;
    auVar39._8_4_ = auVar53._12_4_;
    auVar39._12_4_ = 0;
    auVar39 = minps(auVar45,auVar39);
    auVar38 = minps(auVar38,auVar39);
    auVar53._4_4_ = -(uint)(auVar47._4_4_ < auVar38._4_4_);
    auVar53._0_4_ = -(uint)(auVar47._0_4_ < auVar38._0_4_);
    auVar53._8_4_ = -(uint)(auVar47._8_4_ < auVar38._8_4_);
    auVar53._12_4_ = -(uint)(auVar47._12_4_ < auVar38._12_4_);
    uVar22 = movmskps(uVar21,auVar53);
    if ((uVar22 & 7) != 0) goto LAB_147e60e0e;
    *pauVar32 = auVar38;
  }
  else {
LAB_147e60e0e:
    auVar40._0_4_ = (uint)((int)DAT_14c6dac70 >> 0x1f) >> 1;
    auVar40._4_4_ = (uint)(DAT_14c6dac70._4_4_ >> 0x1f) >> 1;
    auVar40._8_4_ = (uint)(DAT_14c6dac70._8_4_ >> 0x1f) >> 1;
    auVar40._12_4_ = (uint)(DAT_14c6dac70._12_4_ >> 0x1f) >> 1;
    auVar41 = auVar40 ^ _DAT_14c6dac70;
    uVar22 = _DAT_14c6dac60;
    uVar48 = uRam000000014c6dac64;
    uVar49 = uRam000000014c6dac68;
    uVar50 = uRam000000014c6dac6c;
    if ((longlong)*(int *)(lVar20 + 0x30) != 0) {
      lVar30 = 0;
      auVar38 = auVar41;
      do {
        piVar29 = (int *)(*(longlong *)(lVar20 + 0x28) + lVar30);
        iVar26 = *piVar29;
        iVar42 = piVar29[1];
        iVar31 = piVar29[2];
        iVar17 = piVar29[3];
        uVar22 = (uint)(iVar26 < (int)uVar22) * iVar26 | (iVar26 >= (int)uVar22) * uVar22;
        uVar48 = (uint)(iVar42 < (int)uVar48) * iVar42 | (iVar42 >= (int)uVar48) * uVar48;
        uVar49 = (uint)(iVar31 < (int)uVar49) * iVar31 | (iVar31 >= (int)uVar49) * uVar49;
        uVar50 = (uint)(iVar17 < (int)uVar50) * iVar17 | (iVar17 >= (int)uVar50) * uVar50;
        iVar36 = auVar38._0_4_;
        auVar41._0_4_ = (uint)(iVar36 < iVar26) * iVar26 | (uint)(iVar36 >= iVar26) * iVar36;
        iVar26 = auVar38._4_4_;
        auVar41._4_4_ = (uint)(iVar26 < iVar42) * iVar42 | (uint)(iVar26 >= iVar42) * iVar26;
        iVar26 = auVar38._8_4_;
        iVar42 = auVar38._12_4_;
        auVar41._8_4_ = (uint)(iVar26 < iVar31) * iVar31 | (uint)(iVar26 >= iVar31) * iVar26;
        auVar41._12_4_ = (uint)(iVar42 < iVar17) * iVar17 | (uint)(iVar42 >= iVar17) * iVar42;
        lVar30 = lVar30 + 0x10;
        auVar38 = auVar41;
      } while ((longlong)*(int *)(lVar20 + 0x30) * 0x10 != lVar30);
    }
    auVar47._0_4_ = (uint)(auVar41._0_4_ >> 0x1f) >> 1;
    auVar47._4_4_ = (uint)(auVar41._4_4_ >> 0x1f) >> 1;
    auVar47._8_4_ = (uint)(auVar41._8_4_ >> 0x1f) >> 1;
    auVar47._12_4_ = (uint)(auVar41._12_4_ >> 0x1f) >> 1;
    auVar47 = auVar47 ^ auVar41;
    *(uint *)*pauVar32 = (uint)((int)uVar22 >> 0x1f) >> 1 ^ uVar22;
    *(uint *)(*pauVar32 + 4) = (uint)((int)uVar48 >> 0x1f) >> 1 ^ uVar48;
    *(uint *)(*pauVar32 + 8) = (uint)((int)uVar49 >> 0x1f) >> 1 ^ uVar49;
    *(uint *)(*pauVar32 + 0xc) = (uint)((int)uVar50 >> 0x1f) >> 1 ^ uVar50;
  }
  pauVar32[1] = auVar47;
  iVar26 = 6;
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1a50) == '\x01') {
    iVar26 = *(int *)(param_1 + 0x40);
  }
  local_18c = iVar25 / iVar26;
  if (local_18c < 0x21) {
    local_18c = 0x20;
  }
  iVar25 = 0x20;
  if (0x20 < local_18c / iVar26) {
    iVar25 = local_18c / iVar26;
  }
  iVar26 = 2;
  pauVar19 = pauVar32 + 0xc0;
  uVar28 = 1;
  local_188 = lVar33;
  while (pauVar24 = pauVar19, (int)uVar28 != 0) {
    uVar34 = 0;
    iVar42 = 0;
    uVar35 = 0;
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar25);
    local_1b0 = uVar28;
    local_180 = pauVar32;
    do {
      lVar20 = (longlong)(int)uVar35;
      if ((iVar25 < *(int *)(pauVar32[uVar34 * 3 + 2] + 4)) && (iVar26 < 0x3f)) {
        local_1a0[1] = uVar35;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                  (*(longlong **)(param_1 + 0x10),pauVar32 + uVar34 * 3,&local_178);
        plVar27 = *(longlong **)(param_1 + 8);
        lVar33 = (longlong)*(int *)(pauVar32[uVar34 * 3 + 2] + 8) * 0x80;
        local_1a0[0] = (longlong)plVar27 + lVar33 + *plVar27;
        lVar33 = lVar33 + *plVar27;
        piVar29 = (int *)((longlong)plVar27 + lVar33 + 0x60);
        *(undefined8 *)((longlong)plVar27 + lVar33 + 0x70) = 0;
        *(undefined8 *)((longlong)plVar27 + lVar33 + 0x78) = 0;
        piVar29[0] = 0;
        piVar29[1] = 0;
        *(undefined8 *)((longlong)plVar27 + lVar33 + 0x68) = 0;
        lVar23 = 10;
        lVar30 = -4;
        do {
          iVar25 = iVar26 + (int)lVar30 + 4;
          *(int *)((longlong)plVar27 + lVar30 * 4 + lVar33 + 0x70) = iVar25;
          uVar18 = *(undefined8 *)(auStack_190 + lVar23 * 4 + -8);
          auVar38 = *(undefined1 (*) [16])(auStack_190 + lVar23 * 4);
          uVar4 = *(undefined8 *)((longlong)&local_180 + lVar23 * 4);
          *(undefined8 *)(pauVar24[lVar20 * 3 + -3] + lVar23 * 4 + 8) =
               *(undefined8 *)((longlong)local_1a0 + lVar23 * 4);
          *(undefined8 *)((longlong)(pauVar24[lVar20 * 3 + -3] + lVar23 * 4 + 8) + 8) = uVar18;
          *(undefined1 (*) [16])(pauVar24[lVar20 * 3 + -2] + lVar23 * 4 + 8) = auVar38;
          *(undefined8 *)(pauVar24[lVar20 * 3 + -1] + lVar23 * 4 + 8) = uVar4;
          *(int *)(pauVar24[lVar20 * 3] + lVar23 * 4) = iVar25;
          lVar23 = lVar23 + 0xc;
          lVar30 = lVar30 + 1;
        } while (lVar30 != 0);
        iVar25 = local_154;
        if (local_154 < iVar42) {
          iVar25 = iVar42;
        }
        if (iVar25 <= local_124) {
          iVar25 = local_124;
        }
        if (iVar25 <= local_f4) {
          iVar25 = local_f4;
        }
        iVar26 = iVar26 + 4;
        iVar31 = 0;
        lVar20 = 9;
        do {
          iVar42 = *(int *)((longlong)&local_178 + lVar20 * 4);
          iVar31 = iVar31 + iVar42;
          *(int *)((longlong)*(longlong **)(param_1 + 8) +
                  (longlong)*piVar29 * 0x80 + 0x7c + **(longlong **)(param_1 + 8)) = iVar42;
          lVar20 = lVar20 + 0xc;
          piVar29 = piVar29 + 1;
        } while (lVar20 != 0x39);
        iVar42 = local_c4;
        if (local_c4 < iVar25) {
          iVar42 = iVar25;
        }
        uVar22 = (int)local_1a0[1] + 4;
        *(int *)(local_1a0[0] + 0x7c) = iVar31;
        uVar28 = local_1b0;
        pauVar32 = local_180;
        iVar25 = (int)local_1a8;
      }
      else {
        uVar22 = (int)uVar35 + 1;
        uVar4 = *(undefined8 *)(pauVar32[uVar34 * 3] + 8);
        *(undefined8 *)pauVar24[lVar20 * 3] = *(undefined8 *)pauVar32[uVar34 * 3];
        *(undefined8 *)(pauVar24[lVar20 * 3] + 8) = uVar4;
        uVar4 = *(undefined8 *)(pauVar32[uVar34 * 3 + 1] + 8);
        *(undefined8 *)pauVar24[lVar20 * 3 + 1] = *(undefined8 *)pauVar32[uVar34 * 3 + 1];
        *(undefined8 *)(pauVar24[lVar20 * 3 + 1] + 8) = uVar4;
        *(undefined8 *)pauVar24[lVar20 * 3 + 2] = *(undefined8 *)pauVar32[uVar34 * 3 + 2];
        *(undefined4 *)(pauVar24[lVar20 * 3 + 2] + 8) =
             *(undefined4 *)(pauVar32[uVar34 * 3 + 2] + 8);
      }
      uVar35 = (ulonglong)uVar22;
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar28);
    if ((0x3f < uVar22) ||
       (pauVar19 = pauVar32, uVar28 = uVar35, pauVar32 = pauVar24, iVar25 = local_18c,
       iVar42 <= local_18c)) goto LAB_147e610ba;
  }
  uVar35 = 0;
LAB_147e610ba:
  *(int *)(*(longlong *)(param_1 + 0x18) + 0x1810) = iVar26 + -1;
  FUN_147e56bbe(*(undefined8 *)(param_1 + 8));
  *(undefined1 (**) [16])(*(longlong *)(param_1 + 0x18) + 0x1800) = pauVar24;
  iVar26 = (int)uVar35;
  *(int *)(*(longlong *)(param_1 + 0x18) + 0x1808) = iVar26;
  *(int *)(*(longlong *)(param_1 + 0x18) + 0x180c) =
       *(int *)(*(longlong *)(param_1 + 0x18) + 0x1810) + 1;
  lVar20 = *(longlong *)(param_1 + 0x10);
  iVar25 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((int)(*(uint *)(lVar20 + 0x44) & 0x7fffffff) < iVar25) {
    FUN_141807cf8(lVar20 + 0x38);
  }
  if (*(int *)(lVar20 + 0x40) != iVar25) {
    *(int *)(lVar20 + 0x40) = iVar25;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x1814) = 0;
  lVar20 = *(longlong *)(param_1 + 0x18);
  iVar25 = *(int *)(lVar20 + 0x1808);
  if ((int)(*(uint *)(lVar20 + 0x18f4) & 0x7fffffff) < iVar25) {
    FUN_141807aa8(lVar20 + 0x18e8);
  }
  if (*(int *)(lVar20 + 0x18f0) != iVar25) {
    *(int *)(lVar20 + 0x18f0) = iVar25;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38);
  lVar20 = *(longlong *)(param_1 + 0x18);
  iVar25 = *(int *)(lVar20 + 0x1808);
  if ((int)(*(uint *)(lVar20 + 0x1824) & 0x7fffffff) < iVar25) {
    FUN_147e61462(lVar20 + 0x1818);
  }
  if (*(int *)(lVar20 + 0x1820) != iVar25) {
    *(int *)(lVar20 + 0x1820) = iVar25;
  }
  lVar20 = *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar20 + 0x1808)) {
    lVar33 = *(longlong *)(lVar20 + 0x1800);
    lVar30 = 0;
    lVar23 = 0;
    iVar25 = 0;
    do {
      lVar20 = *(longlong *)(lVar20 + 0x1818);
      *(undefined4 *)(lVar20 + 4 + lVar30) = *(undefined4 *)(lVar33 + 0x24 + lVar30 * 4);
      *(int *)(lVar20 + lVar30) = (int)lVar23;
      *(int *)(lVar20 + 8 + lVar30) = iVar25;
      iVar25 = iVar25 + *(int *)(lVar33 + 0x24 + lVar30 * 4);
      lVar23 = lVar23 + 1;
      lVar20 = *(longlong *)(param_1 + 0x18);
      lVar30 = lVar30 + 0xc;
    } while (lVar23 < *(int *)(lVar20 + 0x1808));
  }
  if (iVar26 < 2) {
    *(undefined4 *)(lVar20 + 0x1948) = 0;
    plVar27 = local_1b8;
  }
  else {
    local_1a8 = (ulonglong)(iVar26 - 1);
    uVar28 = 0;
    FUN_147e615aa(*(undefined8 *)(lVar20 + 0x1818),0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x1948) = 0;
    uVar34 = 1;
    lVar20 = 0x58;
    local_1b0 = uVar35;
    do {
      uVar35 = local_1b0;
      local_1a0[0] = lVar20;
      local_1a0[1] = uVar28;
      do {
        lVar33 = *(longlong *)(param_1 + 0x18);
        lVar30 = *(longlong *)(lVar33 + 0x1800);
        iVar26 = *(int *)(lVar33 + 0x1948);
        iVar25 = iVar26 + 1;
        if ((int)(*(uint *)(lVar33 + 0x194c) & 0x7fffffff) <= iVar26) {
          FUN_147e616fe(lVar33 + 0x1940,&PTR_vftable_14c6e47a0,iVar25);
          iVar26 = *(int *)(lVar33 + 0x1948);
        }
        lVar23 = *(longlong *)(lVar33 + 0x1940);
        *(undefined4 *)(lVar23 + (longlong)iVar26 * 8) =
             *(undefined4 *)(lVar30 + uVar28 * 0x30 + 0x28);
        *(undefined4 *)(lVar23 + 4 + (longlong)iVar26 * 8) = *(undefined4 *)(lVar30 + lVar20);
        *(int *)(lVar33 + 0x1948) = iVar25;
        uVar35 = uVar35 - 1;
        lVar20 = lVar20 + 0x30;
      } while (uVar34 != uVar35);
      uVar28 = local_1a0[1] + 1;
      uVar34 = uVar34 + 1;
      lVar20 = local_1a0[0] + 0x30;
      plVar27 = local_1b8;
    } while (uVar28 != local_1a8);
  }
LAB_147e60b36:
  lVar20 = *plVar27;
  if (lVar20 == 0) {
    lVar20 = FUN_144b3f4a0();
    *plVar27 = lVar20;
  }
  if (*(longlong *)(lVar20 + 0x3e0) != 0) {
    local_178 = "Et";
    local_170 = "";
    FUN_144b3f260();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar20 = *plVar27;
    if (lVar20 == 0) {
      lVar20 = FUN_144b3f4a0();
      *plVar27 = lVar20;
    }
    if (*(longlong *)(lVar20 + 0x3e0) != 0) {
      local_178 = "Et";
      local_170 = "";
      FUN_144b3f260();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar20 = *plVar27;
    if (lVar20 == 0) {
      lVar20 = FUN_144b3f4a0();
      *plVar27 = lVar20;
    }
    if (*(longlong *)(lVar20 + 0x3e0) != 0) {
      local_178 = "Et";
      local_170 = "";
      FUN_144b3f260();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e613a6 FUN_147e613a6 body=90 status=ok
// SIG undefined FUN_147e613a6(void)

void FUN_147e613a6(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    FUN_147e61400(param_1,&PTR_vftable_14c6e47a0);
    FUN_147e61400(param_2,&PTR_vftable_14c6e47a0);
    uVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar2;
    uVar1 = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_2 + 1) = uVar1;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  }
  return;
}



// FUNCTION 147e61400 FUN_147e61400 body=97 status=ok
// SIG undefined FUN_147e61400(void)

void FUN_147e61400(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((longlong)*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 4);
      FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
      *param_1 = uVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
    }
  }
  return;
}



// FUNCTION 147e61462 FUN_147e61462 body=327 status=ok
// SIG undefined FUN_147e61462(void)

ulonglong FUN_147e61462(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)(uVar2 * 2);
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0xc,&local_48);
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      *(undefined4 *)(lVar6 + 8 + lVar9) = *(undefined4 *)(lVar3 + 8 + lVar9);
      *(undefined8 *)(lVar6 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
      lVar9 = lVar9 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = uVar8 * 0xc + 0xc;
  uVar7 = local_48;
  uVar10 = uVar8;
  if (uVar1 <= local_48) {
    uVar10 = uVar8 + 1;
    local_48 = local_48 - 0xc;
    uVar7 = local_48;
    if (uVar1 <= local_48) {
      uVar8 = local_48 + uVar8 * -0xc;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar7 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar10 = uVar10 + uVar8 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0xc);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  *param_1 = lVar6;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e615aa FUN_147e615aa body=339 status=ok
// SIG undefined FUN_147e615aa(void)

void FUN_147e615aa(longlong param_1,uint param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar5 = DAT_14c707940;
  uVar7 = (ulonglong)param_2;
  do {
    iVar4 = (int)uVar7;
    uVar1 = *(uint *)(param_1 + 4 + (longlong)(iVar4 + (int)param_3 >> 1) * 0xc);
    uVar11 = param_3;
    do {
      iVar8 = (int)uVar7;
      lVar15 = (longlong)iVar8;
      uVar7 = 0;
      puVar13 = (undefined8 *)(param_1 + -0xc + lVar15 * 0xc);
      do {
        puVar12 = puVar13;
        uVar6 = uVar7;
        uVar7 = uVar6 - 1;
        puVar13 = (undefined8 *)((longlong)puVar12 + 0xc);
      } while (uVar1 < *(uint *)(puVar12 + 2));
      iVar10 = (int)uVar11;
      lVar14 = 0;
      puVar17 = (undefined8 *)(param_1 + 0xc + (longlong)iVar10 * 0xc);
      do {
        puVar16 = puVar17;
        lVar14 = lVar14 + 1;
        puVar17 = (undefined8 *)((longlong)puVar16 + -0xc);
      } while (*(uint *)(puVar16 + -1) < uVar1);
      lVar9 = (longlong)iVar10 + 1;
      if (lVar9 - lVar14 < (longlong)(~uVar7 + lVar15)) {
        uVar7 = (iVar8 - 1) - uVar7;
        uVar11 = ((uVar11 & 0xffffffff) - lVar14) + 1;
      }
      else {
        if ((lVar9 - lVar15) + uVar6 != lVar14) {
          uVar2 = *(undefined4 *)((longlong)puVar16 + -4);
          uVar3 = *puVar17;
          *(undefined4 *)((longlong)puVar16 + -4) = *(undefined4 *)((longlong)puVar12 + 0x14);
          *puVar17 = *puVar13;
          *(undefined4 *)((longlong)puVar12 + 0x14) = uVar2;
          *puVar13 = uVar3;
        }
        uVar11 = (ulonglong)(uint)(iVar10 - (int)lVar14);
        uVar7 = (ulonglong)(uint)(iVar8 - (int)uVar7);
      }
    } while ((int)uVar7 <= (int)uVar11);
    if (iVar4 < (int)uVar11) {
      FUN_147e615aa(param_1);
    }
  } while ((int)uVar7 < (int)param_3);
  if (lVar5 == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e616fe FUN_147e616fe body=297 status=ok
// SIG undefined FUN_147e616fe(void)

void FUN_147e616fe(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)(uVar2 * 2);
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 8,&local_48);
  lVar4 = param_1[1];
  if (0 < (int)lVar4) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      *(undefined8 *)(lVar5 + lVar6 * 8) = *(undefined8 *)(lVar3 + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while ((int)lVar4 != (int)lVar6);
  }
  uVar1 = uVar8 * 8 + 8;
  uVar7 = uVar8;
  if (uVar1 <= local_48) {
    uVar7 = uVar8 + 1;
    local_48 = local_48 - 8;
    if (uVar1 <= local_48) {
      uVar7 = uVar7 + (local_48 + uVar8 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 3);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = lVar5;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e61828 FUN_147e61828 body=98 status=ok
// SIG undefined FUN_147e61828(void)

undefined8 * FUN_147e61828(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba3fd0;
  param_1[4] = &PTR_FUN_14aba3ff0;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e618be FUN_147e618be body=1044 status=ok
// SIG undefined FUN_147e618be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e618be(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  int local_ac;
  char *local_a8;
  char *pcStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar10 = *(longlong *)(param_1 + 0x28);
  local_c0 = param_2;
  if (lVar10 == 0) {
    plVar13 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
  }
  else {
    plVar13 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
    lVar9 = *plVar13;
    if (lVar9 == 0) {
      lVar9 = FUN_144b3f4a0();
      *plVar13 = lVar9;
    }
    if (*(longlong *)(lVar9 + 0x3e0) != 0) {
      local_a8 = "Ot";
      pcStack_a0 = "";
      FUN_144be96b0(*(longlong *)(lVar9 + 0x3e0),lVar10);
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x30);
  lVar9 = *plVar13;
  if (lVar10 != 0) {
    if (lVar9 == 0) {
      lVar9 = FUN_144b3f4a0();
      *plVar13 = lVar9;
    }
    if (*(longlong *)(lVar9 + 0x3e0) != 0) {
      local_a8 = "Ot";
      pcStack_a0 = "";
      FUN_144be96b0(*(longlong *)(lVar9 + 0x3e0),lVar10);
      lVar9 = *plVar13;
    }
  }
  if (lVar9 == 0) {
    lVar9 = FUN_144b3f4a0();
    *plVar13 = lVar9;
  }
  if (*(longlong *)(lVar9 + 0x3e0) != 0) {
    local_a8 = "TthkcdSimdTree::BuildRanges";
    pcStack_a0 = "";
    FUN_144b3f370();
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x1814);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + 1;
    uVar8 = uRam000000014c6dae8c;
    uVar7 = uRam000000014c6dae88;
    uVar6 = uRam000000014c6dae84;
    uVar5 = _DAT_14c6dae80;
    UNLOCK();
    lVar10 = *(longlong *)(param_1 + 0x18);
    if (iVar11 < *(int *)(lVar10 + 0x1808)) {
      local_c8 = param_1 + 0x38;
      uVar16 = _DAT_14c6dae80 ^ 0x80000000;
      uVar17 = uRam000000014c6dae84 ^ 0x80000000;
      uVar18 = uRam000000014c6dae88 ^ 0x80000000;
      uVar19 = uRam000000014c6dae8c ^ 0x80000000;
      local_d0 = plVar13;
      do {
        local_b8 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x1818) + (longlong)iVar11 * 0xc);
        lVar9 = *(longlong *)(lVar10 + 0x1800);
        lVar14 = local_b8 * 0x30;
        local_a8 = *(char **)(lVar9 + lVar14);
        pcStack_a0 = (char *)((undefined8 *)(lVar9 + lVar14))[1];
        puVar2 = (undefined4 *)(lVar9 + 0x10 + lVar14);
        local_98 = *puVar2;
        uStack_94 = puVar2[1];
        uStack_90 = puVar2[2];
        uStack_8c = puVar2[3];
        local_80 = *(undefined4 *)(lVar9 + 0x28 + lVar14);
        local_88 = *(undefined8 *)(lVar9 + 0x20 + lVar14);
        iVar15 = *(int *)(*(longlong *)(lVar10 + 0x1818) + 8 + (longlong)iVar11 * 0xc) +
                 *(int *)(lVar10 + 0x180c);
        local_d8 = local_c8;
        local_ac = iVar15;
        FUN_147e61cdc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_a8,
                      &local_ac);
        iVar11 = local_ac;
        uVar3 = *(undefined8 *)(param_1 + 8);
        lVar10 = *(longlong *)(param_1 + 0x20);
        puVar4 = *(uint **)(lVar10 + 0x20);
        *puVar4 = uVar5;
        puVar4[1] = uVar6;
        puVar4[2] = uVar7;
        puVar4[3] = uVar8;
        puVar4[4] = uVar16;
        puVar4[5] = uVar17;
        puVar4[6] = uVar18;
        puVar4[7] = uVar19;
        iVar12 = local_ac;
        do {
          iVar12 = iVar12 + -1;
          local_d8 = CONCAT44(local_d8._4_4_,iVar12);
          FUN_147e62de8(lVar10 + 0x18,lVar10 + 0x28,lVar10 + 0x30,uVar3);
        } while (iVar15 < iVar12);
        lVar10 = *(longlong *)(param_1 + 0x20);
        local_d8 = CONCAT44(local_d8._4_4_,local_80);
        FUN_147e62de8(lVar10 + 0x18,lVar10 + 0x28,lVar10 + 0x30,*(undefined8 *)(param_1 + 8));
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18e8) + local_b8 * 4) =
             iVar11 - iVar15;
        lVar10 = *(longlong *)(param_1 + 0x18);
        if (*(code **)(lVar10 + 0x1938) != (code *)0x0) {
          local_d8 = local_c0;
          (**(code **)(lVar10 + 0x1938))
                    (*(undefined8 *)(lVar10 + 0x1a68),*(undefined8 *)(param_1 + 8),local_b8,local_80
                    );
          lVar10 = *(longlong *)(param_1 + 0x18);
        }
        LOCK();
        piVar1 = (int *)(lVar10 + 0x1814);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        lVar10 = *(longlong *)(param_1 + 0x18);
        plVar13 = local_d0;
      } while (iVar11 < *(int *)(lVar10 + 0x1808));
    }
  }
  lVar10 = *plVar13;
  if (lVar10 == 0) {
    lVar10 = FUN_144b3f4a0();
    *plVar13 = lVar10;
  }
  if (*(longlong *)(lVar10 + 0x3e0) != 0) {
    local_a8 = "Et";
    pcStack_a0 = "";
    FUN_144b3f260();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar10 = *plVar13;
    if (lVar10 == 0) {
      lVar10 = FUN_144b3f4a0();
      *plVar13 = lVar10;
    }
    if (*(longlong *)(lVar10 + 0x3e0) != 0) {
      local_a8 = "Et";
      pcStack_a0 = "";
      FUN_144b3f260();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar10 = *plVar13;
    if (lVar10 == 0) {
      lVar10 = FUN_144b3f4a0();
      *plVar13 = lVar10;
    }
    if (*(longlong *)(lVar10 + 0x3e0) != 0) {
      local_a8 = "Et";
      pcStack_a0 = "";
      FUN_144b3f260();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e61cdc FUN_147e61cdc body=454 status=ok
// SIG undefined FUN_147e61cdc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147e61cdc(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_3188 [32];
  longlong local_3168;
  undefined8 local_3160;
  undefined8 *local_3158;
  int *local_3150;
  undefined4 local_3148;
  undefined4 uStack_3144;
  undefined4 uStack_3140;
  undefined4 uStack_313c;
  undefined4 local_3138;
  undefined4 uStack_3134;
  undefined4 uStack_3130;
  undefined4 uStack_312c;
  undefined8 local_3128;
  int local_3120;
  int local_310c;
  undefined1 local_3108 [192];
  undefined8 local_3048;
  undefined8 uStack_3040;
  undefined4 local_3038 [4];
  undefined8 local_3028;
  int local_3020 [3062];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3188;
  local_310c = 1;
  local_3048 = *param_3;
  uStack_3040 = param_3[1];
  local_3038[0] = *(undefined4 *)(param_3 + 2);
  local_3038[1] = *(undefined4 *)((longlong)param_3 + 0x14);
  local_3038[2] = *(undefined4 *)(param_3 + 3);
  local_3038[3] = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_3020[0] = *(int *)(param_3 + 5);
  local_3028 = param_3[4];
  if (*(int *)((longlong)param_3 + 0x24) < 5) {
    local_3168 = (longlong)param_1 + (longlong)*(int *)(param_3 + 5) * 0x80 + *param_1;
    local_3150 = &local_310c;
    local_3158 = &local_3048;
    local_3160 = param_4;
    FUN_147e621f8(param_1,param_2 + 5,local_3158,1);
  }
  else {
    iVar3 = 1;
    do {
      iVar3 = iVar3 + -1;
      lVar2 = (longlong)iVar3;
      local_3148 = *(undefined4 *)(&local_3048 + lVar2 * 6);
      uStack_3144 = *(undefined4 *)((longlong)&local_3048 + lVar2 * 0x30 + 4);
      uStack_3140 = *(undefined4 *)(&uStack_3040 + lVar2 * 6);
      uStack_313c = *(undefined4 *)((longlong)&uStack_3040 + lVar2 * 0x30 + 4);
      local_3138 = local_3038[lVar2 * 0xc];
      uStack_3134 = local_3038[lVar2 * 0xc + 1];
      uStack_3130 = local_3038[lVar2 * 0xc + 2];
      uStack_312c = local_3038[lVar2 * 0xc + 3];
      local_3120 = local_3020[lVar2 * 0xc];
      uVar1 = *(undefined8 *)(local_3020 + lVar2 * 0xc + -2);
      local_3128._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
      local_3128 = uVar1;
      local_310c = iVar3;
      if (local_3128._4_4_ < 0x21) {
        FUN_147e61f52(param_1,param_2,&local_3148,param_4);
      }
      else {
        (**(code **)(*param_2 + 0x10))(param_2,&local_3148,local_3108);
        local_3168 = (longlong)param_1 + (longlong)local_3120 * 0x80 + *param_1;
        local_3150 = &local_310c;
        local_3158 = &local_3048;
        local_3160 = param_4;
        FUN_147e621f8(param_1,param_2 + 5,local_3108,4);
        iVar3 = local_310c;
      }
    } while (iVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_3188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e61ea4 FUN_147e61ea4 body=139 status=ok
// SIG undefined FUN_147e61ea4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e61ea4(longlong param_1,undefined8 param_2,int param_3,int param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = uRam000000014c6dae8c;
  uVar4 = uRam000000014c6dae88;
  uVar3 = uRam000000014c6dae84;
  uVar2 = _DAT_14c6dae80;
  if (param_5 == '\0') {
    FUN_147e6297e(param_1,param_1 + 0x10,param_1 + 0x18,param_2,param_3,0);
  }
  else {
    puVar1 = *(uint **)(param_1 + 8);
    *puVar1 = _DAT_14c6dae80;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar1[4] = uVar2 ^ 0x80000000;
    puVar1[5] = uVar3 ^ 0x80000000;
    puVar1[6] = uVar4 ^ 0x80000000;
    puVar1[7] = uVar5 ^ 0x80000000;
    param_4 = param_4 + param_3;
    do {
      param_4 = param_4 + -1;
      FUN_147e62de8(param_1,param_1 + 0x10,param_1 + 0x18,param_2,param_4);
    } while (param_3 < param_4);
  }
  return;
}



// FUNCTION 147e61f30 FUN_147e61f30 body=34 status=ok
// SIG undefined FUN_147e61f30(void)

void FUN_147e61f30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_147e62de8(param_1,param_1 + 0x10,param_1 + 0x18,param_2,param_3);
  return;
}



// FUNCTION 147e61f52 FUN_147e61f52 body=676 status=ok
// SIG undefined FUN_147e61f52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e61f52(longlong *param_1,longlong param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar17;
  uint uVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_160;
  undefined1 *local_158;
  int *local_150;
  int local_13c;
  undefined1 local_138 [32];
  undefined8 local_118;
  uint local_110;
  undefined1 local_108 [32];
  int local_e8 [40];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar11 = param_3;
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar10 = (uint)((int)*param_3 >> 0x1f) >> 1 ^ *param_3;
    uVar6 = (uint)((int)param_3[1] >> 0x1f) >> 1 ^ param_3[1];
    uVar23 = (uint)((int)param_3[2] >> 0x1f) >> 1 ^ param_3[2];
    uVar24 = (uint)((int)param_3[3] >> 0x1f) >> 1 ^ param_3[3];
    uVar14 = (uint)((int)param_3[4] >> 0x1f) >> 1 ^ param_3[4];
    uVar17 = (uint)((int)param_3[5] >> 0x1f) >> 1 ^ param_3[5];
    uVar18 = (uint)((int)param_3[6] >> 0x1f) >> 1 ^ param_3[6];
    uVar19 = (uint)((int)param_3[7] >> 0x1f) >> 1 ^ param_3[7];
    uVar7 = (ulonglong)param_3[9];
    lVar9 = *(longlong *)(param_2 + 0x28);
    lVar5 = (longlong)(int)param_3[8];
  }
  else {
    if ((*(int *)(param_2 + 0xc) == 2) && (*(char *)(param_2 + 0x1f) == '\x01')) {
      FUN_147e6233e(param_2,param_3);
      goto LAB_147e62081;
    }
    uVar14 = (uint)((int)_DAT_14c6dac70 >> 0x1f) >> 1 ^ _DAT_14c6dac70;
    uVar17 = (uint)((int)uRam000000014c6dac74 >> 0x1f) >> 1 ^ uRam000000014c6dac74;
    uVar18 = (uint)((int)uRam000000014c6dac78 >> 0x1f) >> 1 ^ uRam000000014c6dac78;
    uVar19 = (uint)((int)uRam000000014c6dac7c >> 0x1f) >> 1 ^ uRam000000014c6dac7c;
    lVar9 = *(longlong *)(param_2 + 0x28);
    lVar5 = (longlong)(int)param_3[8];
    uVar7 = (ulonglong)(int)param_3[9];
    uVar10 = _DAT_14c6dac60;
    uVar6 = uRam000000014c6dac64;
    uVar23 = uRam000000014c6dac68;
    uVar24 = uRam000000014c6dac6c;
    if (uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      puVar11 = (uint *)(lVar5 * 0x10 + lVar9);
      lVar13 = 0;
      do {
        piVar12 = (int *)((longlong)puVar11 + lVar13);
        iVar4 = *piVar12;
        iVar3 = piVar12[1];
        iVar1 = piVar12[2];
        iVar2 = piVar12[3];
        uVar10 = (uint)(iVar4 < (int)uVar10) * iVar4 | (iVar4 >= (int)uVar10) * uVar10;
        uVar6 = (uint)(iVar3 < (int)uVar6) * iVar3 | (iVar3 >= (int)uVar6) * uVar6;
        uVar23 = (uint)(iVar1 < (int)uVar23) * iVar1 | (iVar1 >= (int)uVar23) * uVar23;
        uVar24 = (uint)(iVar2 < (int)uVar24) * iVar2 | (iVar2 >= (int)uVar24) * uVar24;
        uVar14 = (uint)((int)uVar14 < iVar4) * iVar4 | ((int)uVar14 >= iVar4) * uVar14;
        uVar17 = (uint)((int)uVar17 < iVar3) * iVar3 | ((int)uVar17 >= iVar3) * uVar17;
        uVar18 = (uint)((int)uVar18 < iVar1) * iVar1 | ((int)uVar18 >= iVar1) * uVar18;
        uVar19 = (uint)((int)uVar19 < iVar2) * iVar2 | ((int)uVar19 >= iVar2) * uVar19;
        lVar13 = lVar13 + 0x10;
      } while (uVar7 << 4 != lVar13);
    }
  }
  fVar20 = (float)((uint)((int)uVar14 >> 0x1f) >> 1 ^ uVar14) -
           (float)((uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10);
  fVar21 = (float)((uint)((int)uVar17 >> 0x1f) >> 1 ^ uVar17) -
           (float)((uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6);
  fVar22 = (float)((uint)((int)uVar18 >> 0x1f) >> 1 ^ uVar18) -
           (float)((uint)((int)uVar23 >> 0x1f) >> 1 ^ uVar23);
  auVar26._4_4_ = fVar20;
  auVar26._0_4_ = fVar20;
  auVar26._8_4_ = fVar20;
  auVar26._12_4_ = fVar20;
  auVar25._4_4_ = fVar21;
  auVar25._0_4_ = fVar21;
  auVar25._8_4_ = fVar21;
  auVar25._12_4_ = fVar21;
  auVar26 = maxps(auVar25,auVar26);
  auVar15._4_4_ = fVar22;
  auVar15._0_4_ = fVar22;
  auVar15._8_4_ = fVar22;
  auVar15._12_4_ = fVar22;
  auVar26 = maxps(auVar15,auVar26);
  auVar16._4_4_ = -(uint)(auVar26._4_4_ <= fVar21);
  auVar16._0_4_ = -(uint)(auVar26._0_4_ <= fVar20);
  auVar16._8_4_ = -(uint)(auVar26._8_4_ <= fVar22);
  auVar16._12_4_ =
       -(uint)(auVar26._12_4_ <=
              (float)((uint)((int)uVar19 >> 0x1f) >> 1 ^ uVar19) -
              (float)((uint)((int)uVar24 >> 0x1f) >> 1 ^ uVar24));
  uVar10 = movmskps((int)puVar11,auVar16);
  FUN_147e623d0(lVar5 * 0x10 + lVar9,uVar7,(int)(char)(&DAT_14998f5c0)[uVar10 & 7]);
LAB_147e62081:
  local_110 = param_3[10];
  local_118 = *(undefined8 *)(param_3 + 8);
  do {
    iVar4 = (int)local_118;
    iVar3 = local_118._4_4_;
    if (local_118._4_4_ < 5) {
      uVar7 = 0;
      if (local_118._4_4_ != 0) goto LAB_147e62129;
    }
    else {
      uVar6 = local_118._4_4_ - 5U >> 2;
      uVar8 = (ulonglong)uVar6;
      uVar10 = 2;
      if (uVar6 < 2) {
        uVar10 = uVar6;
      }
      uVar7 = (ulonglong)(uVar10 + 1);
      if (1 < uVar8) {
        uVar8 = 2;
      }
      lVar9 = 0;
      piVar12 = local_e8 + 1;
      do {
        piVar12[-1] = (int)local_118 + (int)lVar9;
        *piVar12 = 4;
        lVar9 = lVar9 + 4;
        piVar12 = piVar12 + 0xc;
      } while (uVar8 * 4 + 4 != lVar9);
      iVar1 = (int)lVar9;
      local_118 = CONCAT44(local_118._4_4_ - iVar1,(int)local_118 + iVar1);
      iVar3 = iVar3 - iVar1;
      iVar4 = iVar1 + iVar4;
LAB_147e62129:
      local_e8[uVar7 * 0xc] = iVar4;
      local_e8[uVar7 * 0xc + 1] = iVar3;
    }
    local_13c = 0;
    local_168 = (longlong)param_1 + (longlong)(int)local_110 * 0x80 + *param_1;
    local_160 = param_4;
    local_158 = local_138;
    local_150 = &local_13c;
    FUN_147e621f8(param_1,param_2 + 0x28,local_108);
    if (local_13c == 0) {
      if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 147e621f8 FUN_147e621f8 body=326 status=ok
// SIG undefined FUN_147e621f8(void)

void FUN_147e621f8(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,
                  longlong param_5,int *param_6,longlong param_7,int *param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  *(undefined1 (*) [16])(param_5 + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_5 + 0x60) = (undefined1  [16])0x0;
  if ((int)param_4 < 1) {
    iVar11 = 0;
  }
  else {
    uVar15 = 0;
    iVar11 = 0;
    do {
      lVar12 = uVar15 * 0x30;
      puVar1 = (undefined8 *)(param_3 + lVar12);
      iVar11 = iVar11 + *(int *)(param_3 + 0x24 + lVar12);
      iVar3 = *param_6;
      *param_6 = iVar3 + 1;
      *(int *)(param_5 + 0x60 + uVar15 * 4) = iVar3;
      iVar4 = *(int *)(param_3 + 0x24 + lVar12);
      if (iVar4 < 5) {
        lVar12 = *param_1;
        lVar13 = (longlong)iVar3 * 0x80;
        puVar2 = (undefined4 *)((longlong)param_1 + lVar13 + 0x60 + lVar12);
        *puVar2 = 0xffffffff;
        puVar2[1] = 0xffffffff;
        puVar2[2] = 0xffffffff;
        puVar2[3] = 0xffffffff;
        *(undefined4 *)((longlong)param_1 + lVar13 + 0x70 + lVar12) = 0;
        *(undefined8 *)((longlong)param_1 + lVar13 + 0x78 + lVar12) = 0;
        *(undefined1 *)((longlong)param_1 + lVar13 + 0x74 + lVar12) = 1;
        *(undefined2 *)((longlong)param_1 + lVar13 + 0x75 + lVar12) = 0;
        *(undefined1 *)((longlong)param_1 + lVar13 + 0x77 + lVar12) = 0;
        iVar3 = *(int *)((longlong)puVar1 + 0x24);
        *(int *)((longlong)param_1 + lVar13 + 0x7c + lVar12) = iVar3;
        if (0 < iVar3) {
          lVar14 = 0;
          do {
            *(undefined4 *)((longlong)param_1 + lVar14 * 4 + lVar13 + lVar12 + 0x60) =
                 *(undefined4 *)(*param_2 + 0xc + (*(int *)(puVar1 + 4) + lVar14) * 0x10);
            lVar14 = lVar14 + 1;
          } while (lVar14 < *(int *)((longlong)puVar1 + 0x24));
        }
      }
      else {
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        uVar5 = *(undefined4 *)(puVar1 + 4);
        iVar6 = *param_8;
        *param_8 = iVar6 + 1;
        lVar12 = (longlong)iVar6 * 0x30;
        *(undefined8 *)(param_7 + lVar12) = uVar7;
        ((undefined8 *)(param_7 + lVar12))[1] = uVar8;
        puVar1 = (undefined8 *)(param_7 + 0x10 + lVar12);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        *(undefined4 *)(param_7 + 0x20 + lVar12) = uVar5;
        *(int *)(param_7 + 0x24 + lVar12) = iVar4;
        *(int *)(param_7 + 0x28 + lVar12) = iVar3;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != param_4);
  }
  *(int *)(param_5 + 0x7c) = iVar11;
  return;
}



// FUNCTION 147e6233e FUN_147e6233e body=145 status=ok
// SIG undefined FUN_147e6233e(void)

void FUN_147e6233e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_88 [48];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (4 < *(int *)(param_2 + 0x24)) {
    uVar1 = 4;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 * 2;
    } while ((int)uVar2 < *(int *)(param_2 + 0x24));
    local_98 = local_88;
    FUN_147e625a6(param_1,param_2,uVar2 >> 1,local_58);
    FUN_147e6233e(param_1,local_58);
    FUN_147e6233e(param_1,local_88);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e623d0 FUN_147e623d0 body=470 status=ok
// SIG undefined FUN_147e623d0(void)

void FUN_147e623d0(undefined8 *param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  
  if (param_3 == 0) {
    if (0 < (int)param_2) {
      puVar10 = (uint *)(param_1 + -2);
      uVar9 = 0;
      do {
        puVar14 = (uint *)(param_1 + uVar9 * 2);
        uVar4 = *puVar14;
        uVar6 = puVar14[1];
        uVar7 = puVar14[2];
        uVar8 = puVar14[3];
        if (uVar9 != 0) {
          uVar12 = uVar9;
          puVar14 = puVar10;
          do {
            if ((float)((uint)((int)*puVar14 >> 0x1f) >> 1 ^ *puVar14) <=
                (float)((uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4)) goto LAB_147e6258b;
            *(undefined8 *)(puVar14 + 4) = *(undefined8 *)puVar14;
            *(undefined8 *)(puVar14 + 6) = *(undefined8 *)(puVar14 + 2);
            puVar14 = puVar14 + -4;
            bVar1 = 1 < (longlong)uVar12;
            uVar12 = uVar12 - 1;
          } while (bVar1);
        }
        uVar12 = 0;
LAB_147e6258b:
        puVar14 = (uint *)(param_1 + (longlong)(int)uVar12 * 2);
        *puVar14 = uVar4;
        puVar14[1] = uVar6;
        puVar14[2] = uVar7;
        puVar14[3] = uVar8;
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 4;
      } while (uVar9 != param_2);
    }
  }
  else if (param_3 == 1) {
    if (0 < (int)param_2) {
      uVar9 = 0;
      puVar11 = param_1;
      do {
        puVar13 = param_1 + uVar9 * 2;
        uVar2 = *(undefined4 *)puVar13;
        uVar4 = *(uint *)((longlong)puVar13 + 4);
        uVar3 = *(undefined4 *)(puVar13 + 1);
        uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
        if (uVar9 != 0) {
          uVar12 = uVar9;
          puVar13 = puVar11;
          do {
            if ((float)((uint)((int)*(uint *)((longlong)puVar13 + -0xc) >> 0x1f) >> 1 ^
                       *(uint *)((longlong)puVar13 + -0xc)) <=
                (float)((uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4)) goto LAB_147e624f6;
            *puVar13 = puVar13[-2];
            puVar13[1] = puVar13[-1];
            puVar13 = puVar13 + -2;
            bVar1 = 1 < (longlong)uVar12;
            uVar12 = uVar12 - 1;
          } while (bVar1);
        }
        uVar12 = 0;
LAB_147e624f6:
        puVar13 = param_1 + (longlong)(int)uVar12 * 2;
        *(undefined4 *)puVar13 = uVar2;
        *(uint *)((longlong)puVar13 + 4) = uVar4;
        *(undefined4 *)(puVar13 + 1) = uVar3;
        *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + 2;
      } while (uVar9 != param_2);
    }
  }
  else if ((param_3 == 2) && (0 < (int)param_2)) {
    uVar9 = 0;
    puVar11 = param_1;
    do {
      puVar13 = param_1 + uVar9 * 2;
      uVar2 = *(undefined4 *)puVar13;
      uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
      uVar4 = *(uint *)(puVar13 + 1);
      uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
      if (uVar9 != 0) {
        uVar12 = uVar9;
        puVar13 = puVar11;
        do {
          if ((float)((uint)((int)*(uint *)(puVar13 + -1) >> 0x1f) >> 1 ^ *(uint *)(puVar13 + -1))
              <= (float)((uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4)) goto LAB_147e62463;
          *puVar13 = puVar13[-2];
          puVar13[1] = puVar13[-1];
          puVar13 = puVar13 + -2;
          bVar1 = 1 < (longlong)uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar1);
      }
      uVar12 = 0;
LAB_147e62463:
      puVar13 = param_1 + (longlong)(int)uVar12 * 2;
      *(undefined4 *)puVar13 = uVar2;
      *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
      *(uint *)(puVar13 + 1) = uVar4;
      *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + 2;
    } while (uVar9 != param_2);
  }
  return;
}



// FUNCTION 147e625a6 FUN_147e625a6 body=983 status=ok
// SIG undefined FUN_147e625a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e625a6(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auVar7 [12];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  undefined4 *puVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  longlong *plVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar40;
  undefined1 auVar37 [12];
  float fVar39;
  undefined1 auVar38 [16];
  float fVar41;
  float fVar45;
  undefined1 auVar42 [12];
  float fVar44;
  undefined1 auVar43 [16];
  undefined1 auVar46 [12];
  undefined1 auVar47 [16];
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 local_168 [40];
  int local_140;
  int local_13c;
  longlong local_138;
  longlong local_130;
  int local_128 [4];
  undefined1 local_118 [16];
  longlong local_108;
  uint local_100 [12];
  ulonglong local_d0;
  
  auVar18 = _DAT_14c6dae80;
  fVar17 = fRam000000014c6dacb8;
  fVar16 = fRam000000014c6dacb4;
  fVar15 = _DAT_14c6dacb0;
  local_d0 = DAT_14c707940 ^ (ulonglong)local_168;
  uVar24 = *(uint *)(param_2 + 0x24);
  uVar25 = (ulonglong)uVar24;
  lVar20 = 0xc;
  do {
    *(undefined8 *)(local_118 + lVar20 + 4) = 0;
    *(undefined8 *)(local_118 + lVar20 + 0xc) = 0x8000000000000000;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x3c);
  auVar7 = DAT_14c6dae80._0_12_;
  uVar33 = DAT_14c6dae80._8_4_ ^ 0x80000000;
  uVar34 = DAT_14c6dae80._12_4_ ^ 0x80000000;
  fVar35 = 3.40282e+38;
  iVar26 = -1;
  lVar20 = 0;
  local_140 = param_3;
  local_138 = param_4;
  local_130 = param_2;
  do {
    plVar32 = &local_108 + lVar20 * 2;
    iVar19 = *(int *)(local_130 + 0x20);
    lVar6 = *(longlong *)(param_1 + 0x28);
    uVar5 = local_100[lVar20 * 4];
    uVar31 = uVar5 + uVar24;
    local_13c = iVar26;
    if ((int)(local_100[lVar20 * 4 + 1] & 0x7fffffff) < (int)uVar31) {
      FUN_147e57f40(plVar32,&PTR_vftable_14c6e47a0,uVar31);
    }
    uVar14 = auVar18._0_8_;
    if ((int)uVar24 < 1) {
      local_100[lVar20 * 4] = uVar31;
      auVar37._0_8_ = uVar14 ^ 0x8000000080000000;
      auVar37._8_4_ = uVar33;
      auVar42._0_8_ = uVar14 ^ 0x8000000080000000;
      auVar42._8_4_ = uVar33;
      auVar48 = auVar7;
      auVar46 = auVar7;
    }
    else {
      lVar30 = *plVar32;
      lVar21 = 0;
      uVar23 = uVar24;
      do {
        puVar1 = (undefined8 *)((longlong)iVar19 * 0x10 + lVar6 + lVar21);
        uVar11 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)(int)uVar5 * 0x10 + lVar30 + lVar21);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        lVar21 = lVar21 + 0x10;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
      lVar6 = *plVar32;
      local_100[lVar20 * 4] = uVar31;
      uVar22 = 0;
      do {
        puVar1 = (undefined8 *)(lVar6 + uVar22 * 0x10);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        local_128[0] = (int)uVar11;
        local_128[1] = (int)((ulonglong)uVar11 >> 0x20);
        local_128[2] = (int)uVar12;
        local_128[3] = (int)((ulonglong)uVar12 >> 0x20);
        iVar26 = 0;
        if (uVar22 != 0) {
          iVar19 = local_128[lVar20];
          uVar29 = uVar22 & 0xffffffff;
          do {
            iVar28 = (int)uVar29;
            puVar1 = (undefined8 *)(lVar6 + uVar29 * 0x10);
            iVar26 = iVar28;
            if (*(int *)((longlong)puVar1 + lVar20 * 4 + -0x10) <= iVar19) break;
            lVar30 = uVar29 * 0x10 + lVar6;
            uVar11 = *(undefined8 *)(lVar30 + -8);
            *puVar1 = *(undefined8 *)(lVar30 + -0x10);
            puVar1[1] = uVar11;
            uVar29 = (ulonglong)(iVar28 - 1);
            iVar26 = 0;
          } while (1 < iVar28);
        }
        piVar3 = (int *)(lVar6 + (longlong)iVar26 * 0x10);
        *piVar3 = local_128[0];
        piVar3[1] = local_128[1];
        piVar3[2] = local_128[2];
        piVar3[3] = local_128[3];
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar25);
      puVar27 = (undefined4 *)(lVar6 + 0xc);
      uVar22 = 0;
      auVar43._0_8_ = uVar14 ^ 0x8000000080000000;
      auVar43._8_4_ = uVar33;
      auVar43._12_4_ = uVar34;
      auVar38._0_8_ = uVar14 ^ 0x8000000080000000;
      auVar38._8_4_ = uVar33;
      auVar38._12_4_ = uVar34;
      auVar47 = auVar18;
      auVar49 = auVar18;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                  (*(longlong **)(param_1 + 0x48),*puVar27,local_128);
        auVar13._4_4_ = local_128[1];
        auVar13._0_4_ = local_128[0];
        auVar13._8_4_ = local_128[2];
        auVar13._12_4_ = local_128[3];
        if ((longlong)uVar22 < (longlong)param_3) {
          auVar47 = minps(auVar47,auVar13);
          auVar43 = maxps(auVar43,local_118);
        }
        else {
          auVar49 = minps(auVar49,auVar13);
          auVar38 = maxps(auVar38,local_118);
        }
        auVar42 = auVar43._0_12_;
        auVar37 = auVar38._0_12_;
        uVar22 = uVar22 + 1;
        puVar27 = puVar27 + 4;
        auVar48 = auVar49._0_12_;
        auVar46 = auVar47._0_12_;
      } while (uVar25 != uVar22);
    }
    fVar36 = auVar37._0_4_ - auVar48._0_4_;
    fVar39 = auVar37._4_4_ - auVar48._4_4_;
    fVar40 = auVar37._8_4_ - auVar48._8_4_;
    fVar41 = auVar42._0_4_ - auVar46._0_4_;
    fVar44 = auVar42._4_4_ - auVar46._4_4_;
    fVar45 = auVar42._8_4_ - auVar46._8_4_;
    fVar36 = fVar36 * fVar17 * fVar40 + fVar39 * fVar15 * fVar36 + fVar40 * fVar16 * fVar39 +
             fVar41 * fVar17 * fVar45 + fVar44 * fVar15 * fVar41 + fVar45 * fVar16 * fVar44;
    iVar26 = (int)lVar20;
    if (fVar35 <= fVar36) {
      fVar36 = fVar35;
      iVar26 = local_13c;
    }
    fVar35 = fVar36;
    lVar20 = lVar20 + 1;
    if (lVar20 == 3) {
      iVar19 = *(int *)(local_130 + 0x20);
      if (uVar24 != 0) {
        lVar20 = *(longlong *)(param_1 + 0x28);
        lVar6 = (&local_108)[(longlong)iVar26 * 2];
        lVar30 = 0;
        do {
          puVar27 = (undefined4 *)(lVar6 + lVar30);
          uVar8 = puVar27[1];
          uVar9 = puVar27[2];
          uVar10 = puVar27[3];
          puVar4 = (undefined4 *)((longlong)iVar19 * 0x10 + lVar20 + lVar30);
          *puVar4 = *puVar27;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          lVar30 = lVar30 + 0x10;
          uVar24 = (int)uVar25 - 1;
          uVar25 = (ulonglong)uVar24;
        } while (uVar24 != 0);
        iVar19 = *(int *)(local_130 + 0x20);
      }
      *(int *)(local_138 + 0x20) = iVar19;
      *(int *)(local_138 + 0x24) = local_140;
      *(int *)(param_5 + 0x20) = iVar19 + local_140;
      *(int *)(param_5 + 0x24) = *(int *)(local_130 + 0x24) - local_140;
      lVar20 = 0x30;
      do {
        *(undefined4 *)(local_118 + lVar20 + 8) = 0;
        if ((-1 < (longlong)*(int *)(local_118 + lVar20 + 0xc)) &&
           (*(longlong *)(local_118 + lVar20) != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*(longlong *)(local_118 + lVar20),
                     (longlong)*(int *)(local_118 + lVar20 + 0xc) << 4);
        }
        *(undefined8 *)(local_118 + lVar20) = 0;
        *(undefined4 *)(local_118 + lVar20 + 0xc) = 0x80000000;
        lVar20 = lVar20 + -0x10;
      } while (lVar20 != 0);
      if ((local_d0 ^ (ulonglong)local_168) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 147e6297e FUN_147e6297e body=1128 status=ok
// SIG undefined FUN_147e6297e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e6297e(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  int param_5,byte param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  undefined1 uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_958 [32];
  undefined8 local_938;
  uint auStack_930 [2];
  uint local_928 [8];
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined1 local_8e8 [16];
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined1 local_8c8 [16];
  undefined4 local_8b8;
  uint local_8b4 [255];
  uint *local_4b8;
  uint local_4a8;
  uint local_4a4 [255];
  uint *local_a8;
  ulonglong local_90;
  
  uVar14 = uRam000000014c6dae8c;
  uVar13 = uRam000000014c6dae88;
  uVar12 = uRam000000014c6dae84;
  uVar11 = _DAT_14c6dae80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_958;
  local_4a8 = param_5 * 2 + 1;
  local_4b8 = local_8b4;
  local_8b8 = 0;
  uVar23 = _DAT_14c6dae80 ^ 0x80000000;
  uVar24 = uRam000000014c6dae84 ^ 0x80000000;
  uVar25 = uRam000000014c6dae88 ^ 0x80000000;
  uVar26 = uRam000000014c6dae8c ^ 0x80000000;
  puVar18 = local_4a4;
  do {
    local_a8 = puVar18 + -1;
    uVar8 = puVar18[-1];
    puVar1 = local_4b8 + -1;
    uVar9 = local_4b8[-1];
    lVar21 = *param_4;
    lVar19 = (ulonglong)(uVar8 >> 1) * 0x80;
    puVar2 = (undefined8 *)((longlong)param_4 + lVar19 + lVar21);
    *(uint *)((longlong)param_4 + lVar19 + 0x78 + lVar21) = uVar9;
    if ((*(byte *)((longlong)param_4 + lVar19 + 0x74 + lVar21) & 1) == 0) {
      if ((uVar8 & 1) == 0) {
        bVar16 = 0;
        lVar21 = 0x70;
        pauVar22 = (undefined1 (*) [16])local_928;
        iVar15 = 0;
        local_4b8 = puVar1;
        do {
          uVar8 = *(uint *)((longlong)puVar2 + lVar21 * 4 + -0x160);
          if (uVar8 == 0) {
            *(uint *)pauVar22[-1] = uVar11;
            *(uint *)(pauVar22[-1] + 4) = uVar12;
            *(uint *)(pauVar22[-1] + 8) = uVar13;
            *(uint *)(pauVar22[-1] + 0xc) = uVar14;
            *(uint *)*pauVar22 = uVar23;
            *(uint *)(*pauVar22 + 4) = uVar24;
            *(uint *)(*pauVar22 + 8) = uVar25;
            *(uint *)(*pauVar22 + 0xc) = uVar26;
            *(undefined1 *)((longlong)puVar2 + lVar21) = 0;
          }
          else if ((int)uVar8 < 0 && param_6 == 1) {
            lVar19 = *param_2;
            lVar20 = (ulonglong)(uVar8 & 0x7fffffff) * 0x20;
            puVar3 = (undefined8 *)(lVar19 + lVar20);
            uVar10 = puVar3[1];
            *(undefined8 *)pauVar22[-1] = *puVar3;
            *(undefined8 *)(pauVar22[-1] + 8) = uVar10;
            *pauVar22 = *(undefined1 (*) [16])(lVar19 + 0x10 + lVar20);
            *(undefined1 *)((longlong)puVar2 + lVar21) =
                 *(undefined1 *)
                  (*(longlong *)(*param_3 + (ulonglong)(uVar8 >> 10 & 0x1ffff8)) +
                  (ulonglong)(uVar8 & 0x1fff));
            iVar15 = iVar15 + 1;
          }
          else {
            lVar19 = *param_4;
            lVar20 = (longlong)(int)uVar8 * 0x80;
            bVar7 = *(byte *)((longlong)param_4 + lVar20 + 0x75 + lVar19);
            if (bVar16 < bVar7) {
              bVar16 = bVar7;
            }
            puVar4 = (undefined4 *)((longlong)param_4 + lVar20 + lVar19);
            auVar28 = *(undefined1 (*) [16])((longlong)param_4 + lVar20 + 0x10 + lVar19);
            puVar5 = (undefined4 *)((longlong)param_4 + lVar20 + 0x20 + lVar19);
            puVar6 = (undefined4 *)((longlong)param_4 + lVar20 + 0x30 + lVar19);
            auVar33 = *(undefined1 (*) [16])((longlong)param_4 + lVar20 + 0x50 + lVar19);
            auVar35._8_4_ = auVar28._4_4_;
            auVar35._0_8_ = auVar28._0_8_;
            auVar35._12_4_ = puVar6[1];
            auVar37._4_4_ = *puVar6;
            auVar37._0_4_ = auVar28._0_4_;
            auVar31._4_4_ = puVar6[2];
            auVar31._0_4_ = auVar28._8_4_;
            auVar31._8_4_ = auVar28._12_4_;
            auVar31._12_4_ = puVar6[3];
            auVar37._8_4_ = auVar28._4_4_;
            auVar37._12_4_ = puVar6[1];
            auVar28 = insertps(auVar37,auVar33,0x28);
            auVar32 = insertps(auVar31,auVar33,0xa8);
            auVar29._8_4_ = auVar33._4_4_;
            auVar29._0_8_ = auVar35._8_8_;
            auVar29._12_4_ = 0;
            auVar28 = maxps(auVar28,auVar29);
            auVar33._8_4_ = auVar33._12_4_;
            auVar33._0_8_ = auVar31._8_8_;
            auVar33._12_4_ = 0;
            auVar33 = maxps(auVar32,auVar33);
            auVar29 = maxps(auVar28,auVar33);
            auVar28 = *(undefined1 (*) [16])((longlong)param_4 + lVar20 + 0x40 + lVar19);
            auVar32._4_4_ = puVar5[2];
            auVar32._0_4_ = puVar4[2];
            auVar32._8_4_ = puVar4[3];
            auVar32._12_4_ = puVar5[3];
            auVar36._4_4_ = *puVar5;
            auVar36._0_4_ = *puVar4;
            auVar36._8_4_ = puVar4[1];
            auVar36._12_4_ = puVar5[1];
            auVar37 = insertps(auVar36,auVar28,0x28);
            auVar33 = insertps(auVar32,auVar28,0xa8);
            auVar34._4_4_ = puVar5[1];
            auVar34._0_4_ = puVar4[1];
            auVar34._8_4_ = auVar28._4_4_;
            auVar34._12_4_ = 0;
            auVar37 = minps(auVar37,auVar34);
            auVar28._8_4_ = auVar28._12_4_;
            auVar28._0_8_ = auVar32._8_8_;
            auVar28._12_4_ = 0;
            auVar28 = minps(auVar33,auVar28);
            auVar28 = minps(auVar37,auVar28);
            pauVar22[-1] = auVar28;
            *pauVar22 = auVar29;
            *(byte *)((longlong)puVar2 + lVar21) =
                 *(byte *)((longlong)param_4 + lVar20 + 0x71 + lVar19) |
                 *(byte *)((longlong)param_4 + lVar20 + 0x70 + lVar19) |
                 *(byte *)((longlong)param_4 + lVar20 + 0x72 + lVar19) |
                 *(byte *)((longlong)param_4 + lVar20 + 0x73 + lVar19);
            iVar15 = iVar15 + *(int *)((longlong)param_4 + lVar20 + 0x7c + lVar19);
          }
          lVar21 = lVar21 + 1;
          pauVar22 = pauVar22 + 2;
        } while (lVar21 != 0x74);
        *(byte *)((longlong)puVar2 + 0x75) = bVar16 + 1;
        goto LAB_147e62cf8;
      }
      local_a8 = puVar18;
      puVar18[-1] = uVar8 & 0xfffffffe;
      *puVar1 = uVar9;
      lVar20 = 0;
      do {
        iVar15 = *(int *)((longlong)param_4 + lVar20 * 4 + lVar19 + lVar21 + 0x6c);
        if ((iVar15 < 0 & param_6) == 0 && iVar15 != 0) {
          puVar18 = local_a8 + 1;
          *local_a8 = iVar15 * 2 + 1;
          local_a8 = puVar18;
          puVar18 = local_4b8 + 1;
          *local_4b8 = uVar8 >> 1;
          local_4b8 = puVar18;
        }
        lVar20 = lVar20 + -1;
      } while (lVar20 != -4);
    }
    else {
      *(undefined1 *)((longlong)puVar2 + 0x75) = 1;
      iVar15 = 0;
      lVar21 = -4;
      pauVar22 = (undefined1 (*) [16])local_928;
      local_4b8 = puVar1;
      do {
        uVar8 = *(uint *)((longlong)puVar2 + lVar21 * 4 + 0x70);
        if ((ulonglong)uVar8 == 0xffffffff) {
          *(uint *)pauVar22[-1] = uVar11;
          *(uint *)(pauVar22[-1] + 4) = uVar12;
          *(uint *)(pauVar22[-1] + 8) = uVar13;
          *(uint *)(pauVar22[-1] + 0xc) = uVar14;
          *(uint *)*pauVar22 = uVar23;
          *(uint *)(*pauVar22 + 4) = uVar24;
          *(uint *)(*pauVar22 + 8) = uVar25;
          *(uint *)(*pauVar22 + 0xc) = uVar26;
          uVar17 = 0;
        }
        else {
          iVar15 = iVar15 + 1;
          lVar19 = *param_2;
          lVar20 = (ulonglong)uVar8 * 0x20;
          puVar3 = (undefined8 *)(lVar19 + lVar20);
          uVar10 = puVar3[1];
          *(undefined8 *)pauVar22[-1] = *puVar3;
          *(undefined8 *)(pauVar22[-1] + 8) = uVar10;
          *pauVar22 = *(undefined1 (*) [16])(lVar19 + 0x10 + lVar20);
          uVar17 = *(undefined1 *)
                    (*(longlong *)(*param_3 + (ulonglong)(uVar8 >> 0xd) * 8) +
                    (ulonglong)(uVar8 & 0x1fff));
        }
        *(undefined1 *)((longlong)puVar2 + lVar21 + 0x74) = uVar17;
        pauVar22 = pauVar22 + 2;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0);
LAB_147e62cf8:
      *puVar2 = CONCAT44(local_928[4],(undefined4)local_938);
      puVar2[1] = CONCAT44(local_8d8,local_8f8);
      *(undefined4 *)(puVar2 + 4) = local_938._4_4_;
      *(uint *)((longlong)puVar2 + 0x24) = local_928[5];
      *(undefined4 *)(puVar2 + 5) = uStack_8f4;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_8d4;
      puVar2[8] = CONCAT44(local_928[6],auStack_930[0]);
      puVar2[9] = CONCAT44(uStack_8d0,uStack_8f0);
      auVar38._0_8_ = local_8e8._0_8_;
      auVar38._8_4_ = local_8e8._4_4_;
      auVar38._12_4_ = local_8c8._4_4_;
      auVar39._8_8_ = auVar38._8_8_;
      auVar30._12_4_ = local_8c8._0_4_;
      auVar30._8_4_ = local_8e8._0_4_;
      auVar27._4_4_ = uStack_900;
      auVar27._0_4_ = local_928[2];
      auVar27._12_4_ = local_8c8._8_4_;
      auVar27._8_4_ = local_8e8._8_4_;
      auVar30._4_4_ = local_908;
      auVar30._0_4_ = local_928[0];
      auVar39._4_4_ = uStack_904;
      auVar39._0_4_ = local_928[1];
      *(undefined1 (*) [16])(puVar2 + 2) = auVar30;
      *(undefined1 (*) [16])(puVar2 + 6) = auVar39;
      *(undefined1 (*) [16])(puVar2 + 10) = auVar27;
      *(int *)((longlong)puVar2 + 0x7c) = iVar15;
    }
    puVar18 = local_a8;
    if (local_a8 == &local_4a8) {
      if ((local_90 ^ (ulonglong)auStack_958) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 147e62de8 FUN_147e62de8 body=705 status=ok
// SIG undefined FUN_147e62de8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e62de8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  lVar11 = *param_4;
  lVar10 = (longlong)param_5 * 0x80;
  puVar1 = (undefined4 *)((longlong)param_4 + lVar10 + lVar11);
  *(undefined4 *)((longlong)param_4 + lVar10 + 0x70 + lVar11) = 0;
  if ((*(byte *)((longlong)param_4 + lVar10 + 0x74 + lVar11) & 1) == 0) {
    lVar11 = *(longlong *)(param_1 + 8);
    puVar2 = (undefined4 *)(lVar11 + (ulonglong)(uint)puVar1[0x18] * 0x20);
    uVar16 = *puVar2;
    uVar17 = puVar2[1];
    uVar18 = puVar2[2];
    uVar19 = puVar2[3];
    puVar2 = (undefined4 *)(lVar11 + 0x10 + (ulonglong)(uint)puVar1[0x18] * 0x20);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    puVar3 = (uint *)(lVar11 + (ulonglong)(uint)puVar1[0x19] * 0x20);
    uVar32 = *puVar3;
    uVar33 = puVar3[1];
    uVar34 = puVar3[2];
    uVar35 = puVar3[3];
    puVar3 = (uint *)(lVar11 + 0x10 + (ulonglong)(uint)puVar1[0x19] * 0x20);
    uVar28 = *puVar3;
    uVar29 = puVar3[1];
    uVar30 = puVar3[2];
    uVar31 = puVar3[3];
    puVar3 = (uint *)(lVar11 + (ulonglong)(uint)puVar1[0x1a] * 0x20);
    uVar40 = *puVar3;
    uVar41 = puVar3[1];
    uVar42 = puVar3[2];
    uVar43 = puVar3[3];
    puVar3 = (uint *)(lVar11 + 0x10 + (ulonglong)(uint)puVar1[0x1a] * 0x20);
    uVar36 = *puVar3;
    uVar37 = puVar3[1];
    uVar38 = puVar3[2];
    uVar39 = puVar3[3];
    puVar3 = (uint *)(lVar11 + (ulonglong)(uint)puVar1[0x1b] * 0x20);
    uVar24 = *puVar3;
    uVar25 = puVar3[1];
    uVar26 = puVar3[2];
    uVar27 = puVar3[3];
    puVar3 = (uint *)(lVar11 + 0x10 + (ulonglong)(uint)puVar1[0x1b] * 0x20);
    uVar20 = *puVar3;
    uVar21 = puVar3[1];
    uVar22 = puVar3[2];
    uVar23 = puVar3[3];
    bVar7 = 0;
    lVar11 = -4;
    do {
      if ((longlong)(int)puVar1[lVar11 + 0x1c] != 0) {
        lVar10 = *param_4;
        lVar9 = (longlong)(int)puVar1[lVar11 + 0x1c] * 0x80;
        *(int *)((longlong)param_4 + lVar9 + 0x78 + lVar10) = param_5;
        bVar4 = *(byte *)((longlong)param_4 + lVar9 + 0x75 + lVar10);
        if (bVar7 < bVar4) {
          bVar7 = bVar4;
        }
        *(byte *)((longlong)puVar1 + lVar11 + 0x74) =
             *(byte *)((longlong)param_4 + lVar9 + 0x71 + lVar10) |
             *(byte *)((longlong)param_4 + lVar9 + 0x70 + lVar10) |
             *(byte *)((longlong)param_4 + lVar9 + 0x72 + lVar10) |
             *(byte *)((longlong)param_4 + lVar9 + 0x73 + lVar10);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0);
    cVar8 = bVar7 + 1;
    lVar11 = 0x75;
  }
  else {
    *(undefined1 *)((longlong)puVar1 + 0x75) = 1;
    uVar27 = uRam000000014c6dae8c;
    uVar26 = uRam000000014c6dae88;
    uVar25 = uRam000000014c6dae84;
    uVar24 = _DAT_14c6dae80;
    uVar20 = _DAT_14c6dae80 ^ 0x80000000;
    uVar21 = uRam000000014c6dae84 ^ 0x80000000;
    uVar22 = uRam000000014c6dae88 ^ 0x80000000;
    uVar23 = uRam000000014c6dae8c ^ 0x80000000;
    uVar32 = puVar1[0x18];
    uVar5 = puVar1[0x19];
    puVar2 = (undefined4 *)(*param_2 + (ulonglong)uVar32 * 0x20);
    uVar16 = *puVar2;
    uVar17 = puVar2[1];
    uVar18 = puVar2[2];
    uVar19 = puVar2[3];
    puVar2 = (undefined4 *)(*param_2 + 0x10 + (ulonglong)uVar32 * 0x20);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    *(undefined1 *)(puVar1 + 0x1c) =
         *(undefined1 *)
          (*(longlong *)(*param_3 + (ulonglong)(uVar32 >> 0xd) * 8) + (ulonglong)(uVar32 & 0x1fff));
    uVar28 = uVar20;
    uVar29 = uVar21;
    uVar30 = uVar22;
    uVar31 = uVar23;
    uVar32 = uVar24;
    uVar33 = uVar25;
    uVar34 = uVar26;
    uVar35 = uVar27;
    if ((ulonglong)uVar5 != 0xffffffff) {
      lVar11 = (ulonglong)uVar5 * 0x20;
      puVar3 = (uint *)(*param_2 + lVar11);
      uVar32 = *puVar3;
      uVar33 = puVar3[1];
      uVar34 = puVar3[2];
      uVar35 = puVar3[3];
      puVar3 = (uint *)(*param_2 + 0x10 + lVar11);
      uVar28 = *puVar3;
      uVar29 = puVar3[1];
      uVar30 = puVar3[2];
      uVar31 = puVar3[3];
      *(undefined1 *)((longlong)puVar1 + 0x71) =
           *(undefined1 *)
            (*(longlong *)(*param_3 + (ulonglong)(uVar5 >> 0xd) * 8) + (ulonglong)(uVar5 & 0x1fff));
    }
    uVar5 = puVar1[0x1a];
    uVar36 = uVar20;
    uVar37 = uVar21;
    uVar38 = uVar22;
    uVar39 = uVar23;
    uVar40 = uVar24;
    uVar41 = uVar25;
    uVar42 = uVar26;
    uVar43 = uVar27;
    if ((ulonglong)uVar5 != 0xffffffff) {
      lVar11 = (ulonglong)uVar5 * 0x20;
      puVar3 = (uint *)(*param_2 + lVar11);
      uVar40 = *puVar3;
      uVar41 = puVar3[1];
      uVar42 = puVar3[2];
      uVar43 = puVar3[3];
      puVar3 = (uint *)(*param_2 + 0x10 + lVar11);
      uVar36 = *puVar3;
      uVar37 = puVar3[1];
      uVar38 = puVar3[2];
      uVar39 = puVar3[3];
      *(undefined1 *)((longlong)puVar1 + 0x72) =
           *(undefined1 *)
            (*(longlong *)(*param_3 + (ulonglong)(uVar5 >> 0xd) * 8) + (ulonglong)(uVar5 & 0x1fff));
    }
    uVar5 = puVar1[0x1b];
    if ((ulonglong)uVar5 == 0xffffffff) goto LAB_147e62ed8;
    lVar11 = (ulonglong)uVar5 * 0x20;
    puVar3 = (uint *)(*param_2 + lVar11);
    uVar24 = *puVar3;
    uVar25 = puVar3[1];
    uVar26 = puVar3[2];
    uVar27 = puVar3[3];
    puVar3 = (uint *)(*param_2 + 0x10 + lVar11);
    uVar20 = *puVar3;
    uVar21 = puVar3[1];
    uVar22 = puVar3[2];
    uVar23 = puVar3[3];
    cVar8 = *(char *)(*(longlong *)(*param_3 + (ulonglong)(uVar5 >> 0xd) * 8) +
                     (ulonglong)(uVar5 & 0x1fff));
    lVar11 = 0x73;
  }
  *(char *)((longlong)puVar1 + lVar11) = cVar8;
LAB_147e62ed8:
  auVar44._4_4_ = uVar17;
  auVar44._0_4_ = uVar16;
  auVar44._8_4_ = uVar18;
  auVar44._12_4_ = uVar19;
  auVar6._4_4_ = uVar33;
  auVar6._0_4_ = uVar32;
  auVar6._8_4_ = uVar34;
  auVar6._12_4_ = uVar35;
  auVar45 = minps(auVar44,auVar6);
  auVar46._4_4_ = uVar13;
  auVar46._0_4_ = uVar12;
  auVar46._8_4_ = uVar14;
  auVar46._12_4_ = uVar15;
  auVar47._4_4_ = uVar29;
  auVar47._0_4_ = uVar28;
  auVar47._8_4_ = uVar30;
  auVar47._12_4_ = uVar31;
  auVar47 = maxps(auVar46,auVar47);
  auVar48._4_4_ = uVar41;
  auVar48._0_4_ = uVar40;
  auVar48._8_4_ = uVar42;
  auVar48._12_4_ = uVar43;
  auVar49._4_4_ = uVar25;
  auVar49._0_4_ = uVar24;
  auVar49._8_4_ = uVar26;
  auVar49._12_4_ = uVar27;
  auVar49 = minps(auVar48,auVar49);
  auVar49 = minps(auVar45,auVar49);
  auVar50._4_4_ = uVar37;
  auVar50._0_4_ = uVar36;
  auVar50._8_4_ = uVar38;
  auVar50._12_4_ = uVar39;
  auVar45._4_4_ = uVar21;
  auVar45._0_4_ = uVar20;
  auVar45._8_4_ = uVar22;
  auVar45._12_4_ = uVar23;
  auVar45 = maxps(auVar50,auVar45);
  auVar45 = maxps(auVar47,auVar45);
  lVar11 = *(longlong *)(param_1 + 8);
  lVar10 = (longlong)param_5 * 0x20;
  *(undefined1 (*) [16])(lVar11 + lVar10) = auVar49;
  *(undefined1 (*) [16])(lVar11 + 0x10 + lVar10) = auVar45;
  *puVar1 = uVar16;
  puVar1[1] = uVar32;
  puVar1[2] = uVar40;
  puVar1[3] = uVar24;
  puVar1[8] = uVar17;
  puVar1[9] = uVar33;
  puVar1[10] = uVar41;
  puVar1[0xb] = uVar25;
  puVar1[0x10] = uVar18;
  puVar1[0x11] = uVar34;
  puVar1[0x12] = uVar42;
  puVar1[0x13] = uVar26;
  puVar1[4] = uVar12;
  puVar1[5] = uVar28;
  puVar1[6] = uVar36;
  puVar1[7] = uVar20;
  puVar1[0xc] = uVar13;
  puVar1[0xd] = uVar29;
  puVar1[0xe] = uVar37;
  puVar1[0xf] = uVar21;
  puVar1[0x14] = uVar14;
  puVar1[0x15] = uVar30;
  puVar1[0x16] = uVar38;
  puVar1[0x17] = uVar22;
  return;
}



// FUNCTION 147e630aa FUN_147e630aa body=98 status=ok
// SIG undefined FUN_147e630aa(void)

undefined8 * FUN_147e630aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba3fd0;
  param_1[4] = &PTR_FUN_14aba3ff0;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e63116 FUN_147e63116 body=1684 status=ok
// SIG undefined FUN_147e63116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e63116(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_d8 [32];
  int local_b8;
  longlong local_a8;
  int local_9c;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  char *local_70;
  char *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = *(longlong *)(param_1 + 0x28);
  local_a8 = param_1;
  if (lVar9 == 0) {
    plVar21 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
  }
  else {
    plVar21 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
    lVar13 = *plVar21;
    if (lVar13 == 0) {
      lVar13 = FUN_144b3f4a0();
      *plVar21 = lVar13;
    }
    if (*(longlong *)(lVar13 + 0x3e0) != 0) {
      local_70 = "Ot";
      local_68 = "";
      FUN_144be96b0(*(longlong *)(lVar13 + 0x3e0),lVar9);
    }
  }
  lVar9 = *(longlong *)(local_a8 + 0x30);
  lVar13 = *plVar21;
  if (lVar9 != 0) {
    if (lVar13 == 0) {
      lVar13 = FUN_144b3f4a0();
      *plVar21 = lVar13;
    }
    if (*(longlong *)(lVar13 + 0x3e0) != 0) {
      local_70 = "Ot";
      local_68 = "";
      FUN_144be96b0(*(longlong *)(lVar13 + 0x3e0),lVar9);
      lVar13 = *plVar21;
    }
  }
  if (lVar13 == 0) {
    lVar13 = FUN_144b3f4a0();
    *plVar21 = lVar13;
  }
  if (*(longlong *)(lVar13 + 0x3e0) != 0) {
    local_70 = "TthkcdSimdTree::FinalizeTree";
    local_68 = "";
    FUN_144b3f370();
  }
  uVar8 = uRam000000014c6dae88;
  uVar7 = _DAT_14c6dae80;
  if (*(int *)(*(longlong *)(local_a8 + 0x10) + 0x30) != 0) {
    lVar9 = *(longlong *)(local_a8 + 0x20);
    uVar5 = *(undefined8 *)(local_a8 + 8);
    iVar11 = *(int *)(*(longlong *)(local_a8 + 0x18) + 0x1810);
    puVar6 = *(ulonglong **)(lVar9 + 0x20);
    *puVar6 = _DAT_14c6dae80;
    puVar6[1] = uVar8;
    puVar6[2] = uVar7 ^ 0x8000000080000000;
    puVar6[3] = uVar8 ^ 0x8000000080000000;
    do {
      local_b8 = iVar11;
      FUN_147e62de8(lVar9 + 0x18,lVar9 + 0x28,lVar9 + 0x30,uVar5);
      iVar14 = iVar11 + 1;
      iVar11 = iVar11 + -1;
    } while (2 < iVar14);
    lVar9 = *(longlong *)(local_a8 + 0x10);
    uVar17 = *(int *)(lVar9 + 0x30) - 4;
    if (((int)uVar17 <= (int)(*(uint *)(lVar9 + 0x34) & 0x7fffffff)) ||
       (FUN_147e57f40(lVar9 + 0x28,&PTR_vftable_14c6e47a0,uVar17),
       (int)*(uint *)(lVar9 + 0x30) < (int)uVar17 || uVar17 < *(uint *)(lVar9 + 0x30))) {
      *(uint *)(lVar9 + 0x30) = uVar17;
    }
    FUN_147e613a6(*(longlong *)(local_a8 + 0x10) + 0x28,*(undefined8 *)(local_a8 + 0x38));
    if (*(char *)(*(longlong *)(local_a8 + 0x10) + 0x1c) == '\x01') {
      lVar9 = *plVar21;
      if (lVar9 == 0) {
        lVar9 = FUN_144b3f4a0();
        *plVar21 = lVar9;
      }
      if (*(longlong *)(lVar9 + 0x3e0) != 0) {
        local_70 = "TtCompact tree nodes";
        local_68 = "";
        FUN_144b3f370();
      }
      lVar9 = *(longlong *)(local_a8 + 0x18);
      local_98 = plVar21;
      if (*(int *)(lVar9 + 0x1808) < 2) {
        iVar11 = **(int **)(lVar9 + 0x18e8) + *(int *)(lVar9 + 0x180c);
        lVar9 = local_a8;
      }
      else {
        FUN_147e637b4(*(undefined8 *)(lVar9 + 0x1818),0,*(int *)(lVar9 + 0x1808) + -1);
        lVar13 = *(longlong *)(local_a8 + 0x18);
        iVar11 = *(int *)(*(longlong *)(lVar13 + 0x18e8) + (longlong)**(int **)(lVar13 + 0x1818) * 4
                         ) + *(int *)(lVar13 + 0x180c);
        lVar9 = local_a8;
        if (1 < *(int *)(lVar13 + 0x1808)) {
          lVar12 = 1;
          do {
            lVar20 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x1818) + lVar12 * 0xc);
            iVar14 = *(int *)(*(longlong *)(lVar13 + 0x1800) + 0x28 + lVar20 * 0x30);
            iVar10 = *(int *)(*(longlong *)(lVar13 + 0x1818) + 8 + lVar12 * 0xc) +
                     *(int *)(lVar13 + 0x180c);
            iVar18 = iVar11 - iVar10;
            lVar15 = (longlong)*(longlong **)(lVar9 + 8) + **(longlong **)(lVar9 + 8);
            lVar19 = (longlong)iVar14 * 0x80;
            iVar4 = *(int *)(*(longlong *)(lVar13 + 0x18e8) + lVar20 * 4);
            iVar23 = 0;
            if ((*(byte *)(lVar19 + 0x74 + lVar15) & 1) == 0) {
              iVar23 = iVar18;
            }
            piVar2 = (int *)(lVar19 + 0x60 + lVar15);
            auVar24._0_4_ = iVar23 + *piVar2;
            auVar24._4_4_ = iVar23 + piVar2[1];
            auVar24._8_4_ = iVar23 + piVar2[2];
            auVar24._12_4_ = iVar23 + piVar2[3];
            auVar26._0_4_ = -(uint)(*piVar2 == 0);
            auVar26._4_4_ = -(uint)(piVar2[1] == 0);
            auVar26._8_4_ = -(uint)(piVar2[2] == 0);
            auVar26._12_4_ = -(uint)(piVar2[3] == 0);
            *(undefined1 (*) [16])(lVar19 + 0x60 + lVar15) = ~auVar26 & auVar24;
            if (0 < iVar4) {
              lVar22 = (longlong)iVar11;
              lVar16 = (longlong)iVar10;
              lVar20 = lVar16 << 7;
              lVar13 = lVar22 << 7;
              iVar23 = 0;
              local_9c = iVar11;
              local_90 = lVar15;
              local_88 = lVar19;
              local_80 = (longlong)iVar14;
              local_78 = lVar12;
              do {
                plVar21 = *(longlong **)(lVar9 + 8);
                lVar12 = *plVar21;
                puVar3 = (undefined8 *)((longlong)plVar21 + lVar20 + lVar12);
                uVar5 = puVar3[1];
                puVar1 = (undefined8 *)((longlong)plVar21 + lVar13 + lVar12);
                *puVar1 = *puVar3;
                puVar1[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar21 + lVar20 + 0x10 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar21 + lVar13 + 0x10 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar21 + lVar20 + 0x20 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar21 + lVar13 + 0x20 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar21 + lVar20 + 0x30 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar21 + lVar13 + 0x30 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar21 + lVar20 + 0x40 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar21 + lVar13 + 0x40 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar21 + lVar20 + 0x50 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar21 + lVar13 + 0x50 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                if (lVar22 != lVar16) {
                  FUN_144bfbed0((longlong)plVar21 + lVar13 + lVar12,
                                (longlong)plVar21 + lVar20 + lVar12,0x80);
                  lVar9 = local_a8;
                }
                iVar11 = iVar18;
                if ((*(byte *)((longlong)plVar21 + lVar13 + lVar12 + 0x74) & 1) != 0) {
                  iVar11 = 0;
                }
                piVar2 = (int *)((longlong)plVar21 + lVar13 + lVar12 + 0x60);
                auVar25._0_4_ = iVar11 + *piVar2;
                auVar25._4_4_ = iVar11 + piVar2[1];
                auVar25._8_4_ = iVar11 + piVar2[2];
                auVar25._12_4_ = iVar11 + piVar2[3];
                auVar27._0_4_ = -(uint)(*piVar2 == 0);
                auVar27._4_4_ = -(uint)(piVar2[1] == 0);
                auVar27._8_4_ = -(uint)(piVar2[2] == 0);
                auVar27._12_4_ = -(uint)(piVar2[3] == 0);
                *(undefined1 (*) [16])((longlong)plVar21 + lVar13 + lVar12 + 0x60) =
                     ~auVar27 & auVar25;
                piVar2 = (int *)((longlong)plVar21 + lVar13 + lVar12 + 0x78);
                *piVar2 = *piVar2 + iVar18;
                lVar16 = lVar16 + 1;
                lVar22 = lVar22 + 1;
                lVar20 = lVar20 + 0x80;
                iVar23 = iVar23 + -1;
                lVar13 = lVar13 + 0x80;
              } while (-iVar4 != iVar23);
              iVar11 = local_9c - iVar23;
              iVar14 = (int)local_80;
              lVar12 = local_78;
              lVar15 = local_90;
              lVar19 = local_88;
            }
            lVar13 = 0;
            do {
              lVar20 = (longlong)*(int *)(lVar15 + lVar19 + 0x60 + lVar13 * 4);
              if (lVar20 != 0) {
                *(int *)((longlong)*(longlong **)(lVar9 + 8) +
                        lVar20 * 0x80 + 0x78 + **(longlong **)(lVar9 + 8)) = iVar14;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 != 4);
            lVar12 = lVar12 + 1;
            lVar13 = *(longlong *)(lVar9 + 0x18);
          } while (lVar12 < *(int *)(lVar13 + 0x1808));
        }
      }
      FUN_147e56bbe(*(undefined8 *)(lVar9 + 8),iVar11);
      if (*(int *)(*(longlong *)(local_a8 + 8) + 8) <
          (int)(*(uint *)(*(longlong *)(local_a8 + 8) + 0xc) & 0x7fffffff)) {
        FUN_147e56c0e();
      }
      plVar21 = local_98;
      lVar9 = *local_98;
      if (lVar9 == 0) {
        lVar9 = FUN_144b3f4a0();
        *plVar21 = lVar9;
      }
      if (*(longlong *)(lVar9 + 0x3e0) != 0) {
        local_70 = "Et";
        local_68 = "";
        FUN_144b3f260();
      }
    }
  }
  lVar9 = *plVar21;
  if (lVar9 == 0) {
    lVar9 = FUN_144b3f4a0();
    *plVar21 = lVar9;
  }
  if (*(longlong *)(lVar9 + 0x3e0) != 0) {
    local_70 = "Et";
    local_68 = "";
    FUN_144b3f260();
  }
  if (*(longlong *)(local_a8 + 0x28) != 0) {
    lVar9 = *plVar21;
    if (lVar9 == 0) {
      lVar9 = FUN_144b3f4a0();
      *plVar21 = lVar9;
    }
    if (*(longlong *)(lVar9 + 0x3e0) != 0) {
      local_70 = "Et";
      local_68 = "";
      FUN_144b3f260();
    }
  }
  if (*(longlong *)(local_a8 + 0x30) != 0) {
    lVar9 = *plVar21;
    if (lVar9 == 0) {
      lVar9 = FUN_144b3f4a0();
      *plVar21 = lVar9;
    }
    if (*(longlong *)(lVar9 + 0x3e0) != 0) {
      local_70 = "Et";
      local_68 = "";
      FUN_144b3f260();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e637b4 FUN_147e637b4 body=339 status=ok
// SIG undefined FUN_147e637b4(void)

void FUN_147e637b4(longlong param_1,uint param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar5 = DAT_14c707940;
  uVar7 = (ulonglong)param_2;
  do {
    iVar4 = (int)uVar7;
    uVar1 = *(uint *)(param_1 + 8 + (longlong)(iVar4 + (int)param_3 >> 1) * 0xc);
    uVar11 = param_3;
    do {
      iVar8 = (int)uVar7;
      lVar15 = (longlong)iVar8;
      uVar7 = 0;
      puVar13 = (undefined8 *)(param_1 + -0xc + lVar15 * 0xc);
      do {
        puVar12 = puVar13;
        uVar6 = uVar7;
        uVar7 = uVar6 - 1;
        puVar13 = (undefined8 *)((longlong)puVar12 + 0xc);
      } while (*(uint *)((longlong)puVar12 + 0x14) < uVar1);
      iVar10 = (int)uVar11;
      lVar14 = 0;
      puVar17 = (undefined8 *)(param_1 + 0xc + (longlong)iVar10 * 0xc);
      do {
        puVar16 = puVar17;
        lVar14 = lVar14 + 1;
        puVar17 = (undefined8 *)((longlong)puVar16 + -0xc);
      } while (uVar1 < *(uint *)((longlong)puVar16 + -4));
      lVar9 = (longlong)iVar10 + 1;
      if (lVar9 - lVar14 < (longlong)(~uVar7 + lVar15)) {
        uVar7 = (iVar8 - 1) - uVar7;
        uVar11 = ((uVar11 & 0xffffffff) - lVar14) + 1;
      }
      else {
        if ((lVar9 - lVar15) + uVar6 != lVar14) {
          uVar2 = *(undefined4 *)((longlong)puVar16 + -4);
          uVar3 = *puVar17;
          *(undefined4 *)((longlong)puVar16 + -4) = *(undefined4 *)((longlong)puVar12 + 0x14);
          *puVar17 = *puVar13;
          *(undefined4 *)((longlong)puVar12 + 0x14) = uVar2;
          *puVar13 = uVar3;
        }
        uVar11 = (ulonglong)(uint)(iVar10 - (int)lVar14);
        uVar7 = (ulonglong)(uint)(iVar8 - (int)uVar7);
      }
    } while ((int)uVar7 <= (int)uVar11);
    if (iVar4 < (int)uVar11) {
      FUN_147e637b4(param_1);
    }
  } while ((int)uVar7 < (int)param_3);
  if (lVar5 == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e63908 FUN_147e63908 body=45 status=ok
// SIG undefined FUN_147e63908(void)

undefined8 * FUN_147e63908(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e63936 FUN_147e63936 body=35 status=ok
// SIG undefined FUN_147e63936(void)

undefined8 FUN_147e63936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e63978 FUN_147e63978 body=98 status=ok
// SIG undefined FUN_147e63978(void)

undefined8 * FUN_147e63978(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4250;
  param_1[4] = &PTR_FUN_14aba4270;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e639e4 FUN_147e639e4 body=2459 status=ok
// SIG undefined FUN_147e639e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e639e4(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  int iVar25;
  int iVar26;
  longlong *plVar27;
  ulonglong uVar28;
  int *piVar29;
  longlong lVar30;
  int iVar31;
  undefined1 (*pauVar32) [16];
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  int iVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  uint uVar48;
  uint uVar49;
  undefined1 auVar43 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0 [2];
  undefined1 auStack_190 [4];
  int local_18c;
  longlong local_188;
  undefined1 (*local_180) [16];
  char *local_178;
  char *local_170;
  int local_154;
  int local_124;
  int local_f4;
  int local_c4;
  ulonglong local_b0;
  undefined1 auVar44 [16];
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar20 = *(longlong *)(param_1 + 0x28);
  if (lVar20 == 0) {
    plVar27 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
  }
  else {
    plVar27 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
    lVar33 = *plVar27;
    if (lVar33 == 0) {
      lVar33 = FUN_144b3f4a0();
      *plVar27 = lVar33;
    }
    if (*(longlong *)(lVar33 + 0x3e0) != 0) {
      local_178 = "Ot";
      local_170 = "";
      FUN_144be96b0(*(longlong *)(lVar33 + 0x3e0),lVar20);
    }
  }
  lVar20 = *(longlong *)(param_1 + 0x30);
  lVar33 = *plVar27;
  if (lVar20 != 0) {
    if (lVar33 == 0) {
      lVar33 = FUN_144b3f4a0();
      *plVar27 = lVar33;
    }
    if (*(longlong *)(lVar33 + 0x3e0) != 0) {
      local_178 = "Ot";
      local_170 = "";
      FUN_144be96b0(*(longlong *)(lVar33 + 0x3e0),lVar20);
      lVar33 = *plVar27;
    }
  }
  if (lVar33 == 0) {
    lVar33 = FUN_144b3f4a0();
    *plVar27 = lVar33;
  }
  if (*(longlong *)(lVar33 + 0x3e0) != 0) {
    local_178 = "TthkcdSimdTree::BuildFirstNLevels";
    local_170 = "";
    FUN_144b3f370();
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28) =
       **(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x38);
  FUN_147e613a6(*(longlong *)(param_1 + 0x10) + 0x28,*(undefined8 *)(param_1 + 0x38));
  plVar3 = *(longlong **)(param_1 + 8);
  lVar20 = *plVar3;
  puVar2 = (undefined4 *)(lVar20 + 0x80 + (longlong)plVar3);
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  auVar38 = *(undefined1 (*) [16])(lVar20 + 0x90 + (longlong)plVar3);
  puVar2 = (undefined4 *)(lVar20 + 0xa0 + (longlong)plVar3);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (undefined4 *)(lVar20 + 0xb0 + (longlong)plVar3);
  uVar13 = *puVar2;
  uVar14 = puVar2[1];
  uVar15 = puVar2[2];
  uVar16 = puVar2[3];
  auVar39 = *(undefined1 (*) [16])(lVar20 + 0xd0 + (longlong)plVar3);
  auVar53 = *(undefined1 (*) [16])(lVar20 + 0xc0 + (longlong)plVar3);
  FUN_147e56b1c();
  lVar20 = *(longlong *)(param_1 + 0x10);
  iVar25 = *(int *)(lVar20 + 0x30);
  lVar33 = (longlong)iVar25;
  if (lVar33 == 0) goto LAB_147e63b1c;
  iVar26 = iVar25 + 4;
  local_1b8 = plVar27;
  if ((int)(*(uint *)(lVar20 + 0x34) & 0x7fffffff) < iVar26) {
    FUN_147e57f40(lVar20 + 0x28,&PTR_vftable_14c6e47a0,iVar26);
  }
  lVar30 = *(longlong *)(lVar20 + 0x28);
  lVar23 = lVar33 * 0x10;
  puVar1 = (undefined8 *)(lVar30 + 0x30 + lVar23);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar30 + 0x20 + lVar23);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar30 + 0x10 + lVar23);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar30 + lVar23) = 0;
  ((undefined8 *)(lVar30 + lVar23))[1] = 0;
  *(int *)(lVar20 + 0x30) = iVar26;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x14) =
       *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x1c);
  uVar21 = (undefined4)*(undefined8 *)(param_1 + 8);
  FUN_147e56bbe();
  pauVar32 = *(undefined1 (**) [16])(param_1 + 0x18);
  *(undefined4 *)pauVar32[2] = 0;
  *(int *)(pauVar32[2] + 4) = iVar25;
  *(undefined4 *)(pauVar32[2] + 8) = 1;
  lVar20 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar20 + 0x1d) == '\x01') {
    auVar44._0_8_ = auVar38._0_8_;
    auVar44._8_4_ = auVar38._4_4_;
    auVar44._12_4_ = uVar14;
    auVar43._8_8_ = auVar44._8_8_;
    auVar43._0_4_ = auVar38._0_4_;
    auVar43._4_4_ = uVar13;
    auVar51._8_4_ = auVar39._4_4_;
    auVar51._0_8_ = auVar43._8_8_;
    auVar51._12_4_ = 0;
    auVar45 = insertps(auVar43,auVar39,0x28);
    auVar46 = maxps(auVar45,auVar51);
    auVar37._4_4_ = uVar15;
    auVar37._0_4_ = auVar38._8_4_;
    auVar37._8_4_ = auVar38._12_4_;
    auVar37._12_4_ = uVar16;
    auVar37 = insertps(auVar37,auVar39,0xa8);
    auVar45._4_4_ = uVar16;
    auVar45._0_4_ = auVar38._12_4_;
    auVar45._8_4_ = auVar39._12_4_;
    auVar45._12_4_ = 0;
    auVar38 = maxps(auVar37,auVar45);
    auVar47 = maxps(auVar46,auVar38);
    auVar46._4_4_ = uVar9;
    auVar46._0_4_ = uVar5;
    auVar46._8_4_ = uVar6;
    auVar46._12_4_ = uVar10;
    auVar39 = insertps(auVar46,auVar53,0x28);
    auVar38._4_4_ = uVar10;
    auVar38._0_4_ = uVar6;
    auVar38._8_4_ = auVar53._4_4_;
    auVar38._12_4_ = 0;
    auVar38 = minps(auVar39,auVar38);
    auVar52._4_4_ = uVar11;
    auVar52._0_4_ = uVar7;
    auVar52._8_4_ = uVar8;
    auVar52._12_4_ = uVar12;
    auVar45 = insertps(auVar52,auVar53,0xa8);
    auVar39._4_4_ = uVar12;
    auVar39._0_4_ = uVar8;
    auVar39._8_4_ = auVar53._12_4_;
    auVar39._12_4_ = 0;
    auVar39 = minps(auVar45,auVar39);
    auVar38 = minps(auVar38,auVar39);
    auVar53._4_4_ = -(uint)(auVar47._4_4_ < auVar38._4_4_);
    auVar53._0_4_ = -(uint)(auVar47._0_4_ < auVar38._0_4_);
    auVar53._8_4_ = -(uint)(auVar47._8_4_ < auVar38._8_4_);
    auVar53._12_4_ = -(uint)(auVar47._12_4_ < auVar38._12_4_);
    uVar22 = movmskps(uVar21,auVar53);
    if ((uVar22 & 7) != 0) goto LAB_147e63df4;
    *pauVar32 = auVar38;
  }
  else {
LAB_147e63df4:
    auVar40._0_4_ = (uint)((int)DAT_14c6dac70 >> 0x1f) >> 1;
    auVar40._4_4_ = (uint)(DAT_14c6dac70._4_4_ >> 0x1f) >> 1;
    auVar40._8_4_ = (uint)(DAT_14c6dac70._8_4_ >> 0x1f) >> 1;
    auVar40._12_4_ = (uint)(DAT_14c6dac70._12_4_ >> 0x1f) >> 1;
    auVar41 = auVar40 ^ _DAT_14c6dac70;
    uVar22 = _DAT_14c6dac60;
    uVar48 = uRam000000014c6dac64;
    uVar49 = uRam000000014c6dac68;
    uVar50 = uRam000000014c6dac6c;
    if ((longlong)*(int *)(lVar20 + 0x30) != 0) {
      lVar30 = 0;
      auVar38 = auVar41;
      do {
        piVar29 = (int *)(*(longlong *)(lVar20 + 0x28) + lVar30);
        iVar26 = *piVar29;
        iVar42 = piVar29[1];
        iVar31 = piVar29[2];
        iVar17 = piVar29[3];
        uVar22 = (uint)(iVar26 < (int)uVar22) * iVar26 | (iVar26 >= (int)uVar22) * uVar22;
        uVar48 = (uint)(iVar42 < (int)uVar48) * iVar42 | (iVar42 >= (int)uVar48) * uVar48;
        uVar49 = (uint)(iVar31 < (int)uVar49) * iVar31 | (iVar31 >= (int)uVar49) * uVar49;
        uVar50 = (uint)(iVar17 < (int)uVar50) * iVar17 | (iVar17 >= (int)uVar50) * uVar50;
        iVar36 = auVar38._0_4_;
        auVar41._0_4_ = (uint)(iVar36 < iVar26) * iVar26 | (uint)(iVar36 >= iVar26) * iVar36;
        iVar26 = auVar38._4_4_;
        auVar41._4_4_ = (uint)(iVar26 < iVar42) * iVar42 | (uint)(iVar26 >= iVar42) * iVar26;
        iVar26 = auVar38._8_4_;
        iVar42 = auVar38._12_4_;
        auVar41._8_4_ = (uint)(iVar26 < iVar31) * iVar31 | (uint)(iVar26 >= iVar31) * iVar26;
        auVar41._12_4_ = (uint)(iVar42 < iVar17) * iVar17 | (uint)(iVar42 >= iVar17) * iVar42;
        lVar30 = lVar30 + 0x10;
        auVar38 = auVar41;
      } while ((longlong)*(int *)(lVar20 + 0x30) * 0x10 != lVar30);
    }
    auVar47._0_4_ = (uint)(auVar41._0_4_ >> 0x1f) >> 1;
    auVar47._4_4_ = (uint)(auVar41._4_4_ >> 0x1f) >> 1;
    auVar47._8_4_ = (uint)(auVar41._8_4_ >> 0x1f) >> 1;
    auVar47._12_4_ = (uint)(auVar41._12_4_ >> 0x1f) >> 1;
    auVar47 = auVar47 ^ auVar41;
    *(uint *)*pauVar32 = (uint)((int)uVar22 >> 0x1f) >> 1 ^ uVar22;
    *(uint *)(*pauVar32 + 4) = (uint)((int)uVar48 >> 0x1f) >> 1 ^ uVar48;
    *(uint *)(*pauVar32 + 8) = (uint)((int)uVar49 >> 0x1f) >> 1 ^ uVar49;
    *(uint *)(*pauVar32 + 0xc) = (uint)((int)uVar50 >> 0x1f) >> 1 ^ uVar50;
  }
  pauVar32[1] = auVar47;
  iVar26 = 6;
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x1a50) == '\x01') {
    iVar26 = *(int *)(param_1 + 0x40);
  }
  local_18c = iVar25 / iVar26;
  if (local_18c < 0x21) {
    local_18c = 0x20;
  }
  iVar25 = 0x20;
  if (0x20 < local_18c / iVar26) {
    iVar25 = local_18c / iVar26;
  }
  iVar26 = 2;
  pauVar19 = pauVar32 + 0xc0;
  uVar28 = 1;
  local_188 = lVar33;
  while (pauVar24 = pauVar19, (int)uVar28 != 0) {
    uVar34 = 0;
    iVar42 = 0;
    uVar35 = 0;
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar25);
    local_1b0 = uVar28;
    local_180 = pauVar32;
    do {
      lVar20 = (longlong)(int)uVar35;
      if ((iVar25 < *(int *)(pauVar32[uVar34 * 3 + 2] + 4)) && (iVar26 < 0x3f)) {
        local_1a0[1] = uVar35;
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))
                  (*(longlong **)(param_1 + 0x10),pauVar32 + uVar34 * 3,&local_178);
        plVar27 = *(longlong **)(param_1 + 8);
        lVar33 = (longlong)*(int *)(pauVar32[uVar34 * 3 + 2] + 8) * 0x80;
        local_1a0[0] = (longlong)plVar27 + lVar33 + *plVar27;
        lVar33 = lVar33 + *plVar27;
        piVar29 = (int *)((longlong)plVar27 + lVar33 + 0x60);
        *(undefined8 *)((longlong)plVar27 + lVar33 + 0x70) = 0;
        *(undefined8 *)((longlong)plVar27 + lVar33 + 0x78) = 0;
        piVar29[0] = 0;
        piVar29[1] = 0;
        *(undefined8 *)((longlong)plVar27 + lVar33 + 0x68) = 0;
        lVar23 = 10;
        lVar30 = -4;
        do {
          iVar25 = iVar26 + (int)lVar30 + 4;
          *(int *)((longlong)plVar27 + lVar30 * 4 + lVar33 + 0x70) = iVar25;
          uVar18 = *(undefined8 *)(auStack_190 + lVar23 * 4 + -8);
          auVar38 = *(undefined1 (*) [16])(auStack_190 + lVar23 * 4);
          uVar4 = *(undefined8 *)((longlong)&local_180 + lVar23 * 4);
          *(undefined8 *)(pauVar24[lVar20 * 3 + -3] + lVar23 * 4 + 8) =
               *(undefined8 *)((longlong)local_1a0 + lVar23 * 4);
          *(undefined8 *)((longlong)(pauVar24[lVar20 * 3 + -3] + lVar23 * 4 + 8) + 8) = uVar18;
          *(undefined1 (*) [16])(pauVar24[lVar20 * 3 + -2] + lVar23 * 4 + 8) = auVar38;
          *(undefined8 *)(pauVar24[lVar20 * 3 + -1] + lVar23 * 4 + 8) = uVar4;
          *(int *)(pauVar24[lVar20 * 3] + lVar23 * 4) = iVar25;
          lVar23 = lVar23 + 0xc;
          lVar30 = lVar30 + 1;
        } while (lVar30 != 0);
        iVar25 = local_154;
        if (local_154 < iVar42) {
          iVar25 = iVar42;
        }
        if (iVar25 <= local_124) {
          iVar25 = local_124;
        }
        if (iVar25 <= local_f4) {
          iVar25 = local_f4;
        }
        iVar26 = iVar26 + 4;
        iVar31 = 0;
        lVar20 = 9;
        do {
          iVar42 = *(int *)((longlong)&local_178 + lVar20 * 4);
          iVar31 = iVar31 + iVar42;
          *(int *)((longlong)*(longlong **)(param_1 + 8) +
                  (longlong)*piVar29 * 0x80 + 0x7c + **(longlong **)(param_1 + 8)) = iVar42;
          lVar20 = lVar20 + 0xc;
          piVar29 = piVar29 + 1;
        } while (lVar20 != 0x39);
        iVar42 = local_c4;
        if (local_c4 < iVar25) {
          iVar42 = iVar25;
        }
        uVar22 = (int)local_1a0[1] + 4;
        *(int *)(local_1a0[0] + 0x7c) = iVar31;
        uVar28 = local_1b0;
        pauVar32 = local_180;
        iVar25 = (int)local_1a8;
      }
      else {
        uVar22 = (int)uVar35 + 1;
        uVar4 = *(undefined8 *)(pauVar32[uVar34 * 3] + 8);
        *(undefined8 *)pauVar24[lVar20 * 3] = *(undefined8 *)pauVar32[uVar34 * 3];
        *(undefined8 *)(pauVar24[lVar20 * 3] + 8) = uVar4;
        uVar4 = *(undefined8 *)(pauVar32[uVar34 * 3 + 1] + 8);
        *(undefined8 *)pauVar24[lVar20 * 3 + 1] = *(undefined8 *)pauVar32[uVar34 * 3 + 1];
        *(undefined8 *)(pauVar24[lVar20 * 3 + 1] + 8) = uVar4;
        *(undefined8 *)pauVar24[lVar20 * 3 + 2] = *(undefined8 *)pauVar32[uVar34 * 3 + 2];
        *(undefined4 *)(pauVar24[lVar20 * 3 + 2] + 8) =
             *(undefined4 *)(pauVar32[uVar34 * 3 + 2] + 8);
      }
      uVar35 = (ulonglong)uVar22;
      uVar34 = uVar34 + 1;
    } while (uVar34 != uVar28);
    if ((0x3f < uVar22) ||
       (pauVar19 = pauVar32, uVar28 = uVar35, pauVar32 = pauVar24, iVar25 = local_18c,
       iVar42 <= local_18c)) goto LAB_147e640a0;
  }
  uVar35 = 0;
LAB_147e640a0:
  *(int *)(*(longlong *)(param_1 + 0x18) + 0x1810) = iVar26 + -1;
  FUN_147e56bbe(*(undefined8 *)(param_1 + 8));
  *(undefined1 (**) [16])(*(longlong *)(param_1 + 0x18) + 0x1800) = pauVar24;
  iVar26 = (int)uVar35;
  *(int *)(*(longlong *)(param_1 + 0x18) + 0x1808) = iVar26;
  *(int *)(*(longlong *)(param_1 + 0x18) + 0x180c) =
       *(int *)(*(longlong *)(param_1 + 0x18) + 0x1810) + 1;
  lVar20 = *(longlong *)(param_1 + 0x10);
  iVar25 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((int)(*(uint *)(lVar20 + 0x44) & 0x7fffffff) < iVar25) {
    FUN_141807cf8(lVar20 + 0x38);
  }
  if (*(int *)(lVar20 + 0x40) != iVar25) {
    *(int *)(lVar20 + 0x40) = iVar25;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x1814) = 0;
  lVar20 = *(longlong *)(param_1 + 0x18);
  iVar25 = *(int *)(lVar20 + 0x1808);
  if ((int)(*(uint *)(lVar20 + 0x18f4) & 0x7fffffff) < iVar25) {
    FUN_141807aa8(lVar20 + 0x18e8);
  }
  if (*(int *)(lVar20 + 0x18f0) != iVar25) {
    *(int *)(lVar20 + 0x18f0) = iVar25;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x38);
  lVar20 = *(longlong *)(param_1 + 0x18);
  iVar25 = *(int *)(lVar20 + 0x1808);
  if ((int)(*(uint *)(lVar20 + 0x1824) & 0x7fffffff) < iVar25) {
    FUN_147e61462(lVar20 + 0x1818);
  }
  if (*(int *)(lVar20 + 0x1820) != iVar25) {
    *(int *)(lVar20 + 0x1820) = iVar25;
  }
  lVar20 = *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar20 + 0x1808)) {
    lVar33 = *(longlong *)(lVar20 + 0x1800);
    lVar30 = 0;
    lVar23 = 0;
    iVar25 = 0;
    do {
      lVar20 = *(longlong *)(lVar20 + 0x1818);
      *(undefined4 *)(lVar20 + 4 + lVar30) = *(undefined4 *)(lVar33 + 0x24 + lVar30 * 4);
      *(int *)(lVar20 + lVar30) = (int)lVar23;
      *(int *)(lVar20 + 8 + lVar30) = iVar25;
      iVar25 = iVar25 + *(int *)(lVar33 + 0x24 + lVar30 * 4);
      lVar23 = lVar23 + 1;
      lVar20 = *(longlong *)(param_1 + 0x18);
      lVar30 = lVar30 + 0xc;
    } while (lVar23 < *(int *)(lVar20 + 0x1808));
  }
  if (iVar26 < 2) {
    *(undefined4 *)(lVar20 + 0x1948) = 0;
    plVar27 = local_1b8;
  }
  else {
    local_1a8 = (ulonglong)(iVar26 - 1);
    uVar28 = 0;
    FUN_147e615aa(*(undefined8 *)(lVar20 + 0x1818),0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x1948) = 0;
    uVar34 = 1;
    lVar20 = 0x58;
    local_1b0 = uVar35;
    do {
      uVar35 = local_1b0;
      local_1a0[0] = lVar20;
      local_1a0[1] = uVar28;
      do {
        lVar33 = *(longlong *)(param_1 + 0x18);
        lVar30 = *(longlong *)(lVar33 + 0x1800);
        iVar26 = *(int *)(lVar33 + 0x1948);
        iVar25 = iVar26 + 1;
        if ((int)(*(uint *)(lVar33 + 0x194c) & 0x7fffffff) <= iVar26) {
          FUN_147e616fe(lVar33 + 0x1940,&PTR_vftable_14c6e47a0,iVar25);
          iVar26 = *(int *)(lVar33 + 0x1948);
        }
        lVar23 = *(longlong *)(lVar33 + 0x1940);
        *(undefined4 *)(lVar23 + (longlong)iVar26 * 8) =
             *(undefined4 *)(lVar30 + uVar28 * 0x30 + 0x28);
        *(undefined4 *)(lVar23 + 4 + (longlong)iVar26 * 8) = *(undefined4 *)(lVar30 + lVar20);
        *(int *)(lVar33 + 0x1948) = iVar25;
        uVar35 = uVar35 - 1;
        lVar20 = lVar20 + 0x30;
      } while (uVar34 != uVar35);
      uVar28 = local_1a0[1] + 1;
      uVar34 = uVar34 + 1;
      lVar20 = local_1a0[0] + 0x30;
      plVar27 = local_1b8;
    } while (uVar28 != local_1a8);
  }
LAB_147e63b1c:
  lVar20 = *plVar27;
  if (lVar20 == 0) {
    lVar20 = FUN_144b3f4a0();
    *plVar27 = lVar20;
  }
  if (*(longlong *)(lVar20 + 0x3e0) != 0) {
    local_178 = "Et";
    local_170 = "";
    FUN_144b3f260();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar20 = *plVar27;
    if (lVar20 == 0) {
      lVar20 = FUN_144b3f4a0();
      *plVar27 = lVar20;
    }
    if (*(longlong *)(lVar20 + 0x3e0) != 0) {
      local_178 = "Et";
      local_170 = "";
      FUN_144b3f260();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar20 = *plVar27;
    if (lVar20 == 0) {
      lVar20 = FUN_144b3f4a0();
      *plVar27 = lVar20;
    }
    if (*(longlong *)(lVar20 + 0x3e0) != 0) {
      local_178 = "Et";
      local_170 = "";
      FUN_144b3f260();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6438c FUN_147e6438c body=98 status=ok
// SIG undefined FUN_147e6438c(void)

undefined8 * FUN_147e6438c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4250;
  param_1[4] = &PTR_FUN_14aba4270;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e64422 FUN_147e64422 body=1020 status=ok
// SIG undefined FUN_147e64422(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e64422(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  int local_ac;
  char *local_a8;
  char *pcStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar11 = *(longlong *)(param_1 + 0x28);
  local_b8 = param_2;
  if (lVar11 == 0) {
    plVar14 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
  }
  else {
    plVar14 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
    lVar10 = *plVar14;
    if (lVar10 == 0) {
      lVar10 = FUN_144b3f4a0();
      *plVar14 = lVar10;
    }
    if (*(longlong *)(lVar10 + 0x3e0) != 0) {
      local_a8 = "Ot";
      pcStack_a0 = "";
      FUN_144be96b0(*(longlong *)(lVar10 + 0x3e0),lVar11);
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x30);
  lVar10 = *plVar14;
  if (lVar11 != 0) {
    if (lVar10 == 0) {
      lVar10 = FUN_144b3f4a0();
      *plVar14 = lVar10;
    }
    if (*(longlong *)(lVar10 + 0x3e0) != 0) {
      local_a8 = "Ot";
      pcStack_a0 = "";
      FUN_144be96b0(*(longlong *)(lVar10 + 0x3e0),lVar11);
      lVar10 = *plVar14;
    }
  }
  if (lVar10 == 0) {
    lVar10 = FUN_144b3f4a0();
    *plVar14 = lVar10;
  }
  if (*(longlong *)(lVar10 + 0x3e0) != 0) {
    local_a8 = "TthkcdSimdTree::BuildRanges";
    pcStack_a0 = "";
    FUN_144b3f370();
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 0x1814);
    iVar12 = *piVar1;
    *piVar1 = *piVar1 + 1;
    uVar9 = uRam000000014c6dae8c;
    uVar8 = uRam000000014c6dae88;
    uVar7 = uRam000000014c6dae84;
    uVar6 = _DAT_14c6dae80;
    UNLOCK();
    lVar11 = *(longlong *)(param_1 + 0x18);
    if (iVar12 < *(int *)(lVar11 + 0x1808)) {
      local_c0 = param_1 + 0x38;
      uVar17 = _DAT_14c6dae80 ^ 0x80000000;
      uVar18 = uRam000000014c6dae84 ^ 0x80000000;
      uVar19 = uRam000000014c6dae88 ^ 0x80000000;
      uVar20 = uRam000000014c6dae8c ^ 0x80000000;
      local_c8 = plVar14;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar11 + 0x1818) + (longlong)iVar12 * 0xc);
        lVar10 = *(longlong *)(lVar11 + 0x1800);
        lVar15 = (longlong)iVar3 * 0x30;
        local_a8 = *(char **)(lVar10 + lVar15);
        pcStack_a0 = (char *)((undefined8 *)(lVar10 + lVar15))[1];
        puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar15);
        local_98 = *puVar2;
        uStack_94 = puVar2[1];
        uStack_90 = puVar2[2];
        uStack_8c = puVar2[3];
        local_80 = *(undefined4 *)(lVar10 + 0x28 + lVar15);
        local_88 = *(undefined8 *)(lVar10 + 0x20 + lVar15);
        iVar16 = *(int *)(*(longlong *)(lVar11 + 0x1818) + 8 + (longlong)iVar12 * 0xc) +
                 *(int *)(lVar11 + 0x180c);
        local_d8 = local_c0;
        local_ac = iVar16;
        FUN_147e61cdc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_a8,
                      &local_ac);
        iVar12 = local_ac;
        uVar4 = *(undefined8 *)(param_1 + 8);
        lVar11 = *(longlong *)(param_1 + 0x20);
        puVar5 = *(uint **)(lVar11 + 0x20);
        *puVar5 = uVar6;
        puVar5[1] = uVar7;
        puVar5[2] = uVar8;
        puVar5[3] = uVar9;
        puVar5[4] = uVar17;
        puVar5[5] = uVar18;
        puVar5[6] = uVar19;
        puVar5[7] = uVar20;
        iVar13 = local_ac;
        do {
          iVar13 = iVar13 + -1;
          FUN_147e64cc6(lVar11 + 0x18,lVar11 + 0x28,uVar4,iVar13);
        } while (iVar16 < iVar13);
        FUN_147e64cc6(*(longlong *)(param_1 + 0x20) + 0x18,*(longlong *)(param_1 + 0x20) + 0x28,
                      *(undefined8 *)(param_1 + 8),local_80);
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18e8) + (longlong)iVar3 * 4) =
             iVar12 - iVar16;
        lVar11 = *(longlong *)(param_1 + 0x18);
        if (*(code **)(lVar11 + 0x1938) != (code *)0x0) {
          local_d8 = local_b8;
          (**(code **)(lVar11 + 0x1938))
                    (*(undefined8 *)(lVar11 + 0x1a68),*(undefined8 *)(param_1 + 8),iVar3,local_80);
          lVar11 = *(longlong *)(param_1 + 0x18);
        }
        LOCK();
        piVar1 = (int *)(lVar11 + 0x1814);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        lVar11 = *(longlong *)(param_1 + 0x18);
        plVar14 = local_c8;
      } while (iVar12 < *(int *)(lVar11 + 0x1808));
    }
  }
  lVar11 = *plVar14;
  if (lVar11 == 0) {
    lVar11 = FUN_144b3f4a0();
    *plVar14 = lVar11;
  }
  if (*(longlong *)(lVar11 + 0x3e0) != 0) {
    local_a8 = "Et";
    pcStack_a0 = "";
    FUN_144b3f260();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar11 = *plVar14;
    if (lVar11 == 0) {
      lVar11 = FUN_144b3f4a0();
      *plVar14 = lVar11;
    }
    if (*(longlong *)(lVar11 + 0x3e0) != 0) {
      local_a8 = "Et";
      pcStack_a0 = "";
      FUN_144b3f260();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar11 = *plVar14;
    if (lVar11 == 0) {
      lVar11 = FUN_144b3f4a0();
      *plVar14 = lVar11;
    }
    if (*(longlong *)(lVar11 + 0x3e0) != 0) {
      local_a8 = "Et";
      pcStack_a0 = "";
      FUN_144b3f260();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e64828 FUN_147e64828 body=127 status=ok
// SIG undefined FUN_147e64828(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e64828(longlong param_1,undefined8 param_2,int param_3,int param_4,char param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = uRam000000014c6dae8c;
  uVar4 = uRam000000014c6dae88;
  uVar3 = uRam000000014c6dae84;
  uVar2 = _DAT_14c6dae80;
  if (param_5 == '\0') {
    FUN_147e648b8(param_1,param_1 + 0x10,param_1 + 0x18,param_2,param_3,0);
  }
  else {
    puVar1 = *(uint **)(param_1 + 8);
    *puVar1 = _DAT_14c6dae80;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    puVar1[4] = uVar2 ^ 0x80000000;
    puVar1[5] = uVar3 ^ 0x80000000;
    puVar1[6] = uVar4 ^ 0x80000000;
    puVar1[7] = uVar5 ^ 0x80000000;
    param_4 = param_4 + param_3;
    do {
      param_4 = param_4 + -1;
      FUN_147e64cc6(param_1,param_1 + 0x10,param_2,param_4);
    } while (param_3 < param_4);
  }
  return;
}



// FUNCTION 147e648b8 FUN_147e648b8 body=1037 status=ok
// SIG undefined FUN_147e648b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e648b8(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  int param_5,byte param_6)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint *puVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_958 [32];
  undefined8 local_938;
  uint auStack_930 [2];
  uint local_928 [8];
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined1 local_8e8 [16];
  undefined4 local_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined1 local_8c8 [16];
  undefined4 local_8b8;
  uint local_8b4 [255];
  uint *local_4b8;
  uint local_4a8;
  uint local_4a4 [255];
  uint *local_a8;
  ulonglong local_90;
  
  uVar14 = uRam000000014c6dae8c;
  uVar13 = uRam000000014c6dae88;
  uVar12 = uRam000000014c6dae84;
  uVar11 = _DAT_14c6dae80;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_958;
  local_4a8 = param_5 * 2 + 1;
  local_4b8 = local_8b4;
  local_8b8 = 0;
  uVar23 = _DAT_14c6dae80 ^ 0x80000000;
  uVar24 = uRam000000014c6dae84 ^ 0x80000000;
  uVar25 = uRam000000014c6dae88 ^ 0x80000000;
  uVar26 = uRam000000014c6dae8c ^ 0x80000000;
  puVar16 = local_4a4;
  do {
    local_a8 = puVar16 + -1;
    uVar8 = puVar16[-1];
    puVar1 = local_4b8 + -1;
    uVar9 = local_4b8[-1];
    lVar19 = *param_4;
    lVar21 = (ulonglong)(uVar8 >> 1) * 0x80;
    puVar2 = (undefined8 *)((longlong)param_4 + lVar21 + lVar19);
    *(uint *)((longlong)param_4 + lVar21 + 0x78 + lVar19) = uVar9;
    if ((*(byte *)((longlong)param_4 + lVar21 + 0x74 + lVar19) & 1) == 0) {
      if ((uVar8 & 1) == 0) {
        bVar15 = 0;
        lVar19 = 0x70;
        iVar17 = 0;
        pauVar20 = (undefined1 (*) [16])local_928;
        local_4b8 = puVar1;
        do {
          uVar8 = *(uint *)((longlong)puVar2 + lVar19 * 4 + -0x160);
          if (uVar8 == 0) {
            *(uint *)pauVar20[-1] = uVar11;
            *(uint *)(pauVar20[-1] + 4) = uVar12;
            *(uint *)(pauVar20[-1] + 8) = uVar13;
            *(uint *)(pauVar20[-1] + 0xc) = uVar14;
            *(uint *)*pauVar20 = uVar23;
            *(uint *)(*pauVar20 + 4) = uVar24;
            *(uint *)(*pauVar20 + 8) = uVar25;
            *(uint *)(*pauVar20 + 0xc) = uVar26;
            *(undefined1 *)((longlong)puVar2 + lVar19) = 0;
          }
          else if ((int)uVar8 < 0 && param_6 == 1) {
            lVar21 = *param_2;
            lVar18 = (ulonglong)(uVar8 & 0x7fffffff) * 0x20;
            puVar6 = (undefined8 *)(lVar21 + lVar18);
            uVar10 = puVar6[1];
            *(undefined8 *)pauVar20[-1] = *puVar6;
            *(undefined8 *)(pauVar20[-1] + 8) = uVar10;
            *pauVar20 = *(undefined1 (*) [16])(lVar21 + 0x10 + lVar18);
            *(undefined1 *)((longlong)puVar2 + lVar19) = 0;
            iVar17 = iVar17 + 1;
          }
          else {
            lVar21 = *param_4;
            lVar18 = (longlong)(int)uVar8 * 0x80;
            bVar7 = *(byte *)((longlong)param_4 + lVar18 + 0x75 + lVar21);
            if (bVar15 < bVar7) {
              bVar15 = bVar7;
            }
            puVar3 = (undefined4 *)((longlong)param_4 + lVar18 + lVar21);
            auVar28 = *(undefined1 (*) [16])((longlong)param_4 + lVar18 + 0x10 + lVar21);
            puVar4 = (undefined4 *)((longlong)param_4 + lVar18 + 0x20 + lVar21);
            puVar5 = (undefined4 *)((longlong)param_4 + lVar18 + 0x30 + lVar21);
            auVar33 = *(undefined1 (*) [16])((longlong)param_4 + lVar18 + 0x50 + lVar21);
            auVar35._8_4_ = auVar28._4_4_;
            auVar35._0_8_ = auVar28._0_8_;
            auVar35._12_4_ = puVar5[1];
            auVar37._4_4_ = *puVar5;
            auVar37._0_4_ = auVar28._0_4_;
            auVar31._4_4_ = puVar5[2];
            auVar31._0_4_ = auVar28._8_4_;
            auVar31._8_4_ = auVar28._12_4_;
            auVar31._12_4_ = puVar5[3];
            auVar37._8_4_ = auVar28._4_4_;
            auVar37._12_4_ = puVar5[1];
            auVar28 = insertps(auVar37,auVar33,0x28);
            auVar32 = insertps(auVar31,auVar33,0xa8);
            auVar29._8_4_ = auVar33._4_4_;
            auVar29._0_8_ = auVar35._8_8_;
            auVar29._12_4_ = 0;
            auVar28 = maxps(auVar28,auVar29);
            auVar33._8_4_ = auVar33._12_4_;
            auVar33._0_8_ = auVar31._8_8_;
            auVar33._12_4_ = 0;
            auVar33 = maxps(auVar32,auVar33);
            auVar29 = maxps(auVar28,auVar33);
            auVar28 = *(undefined1 (*) [16])((longlong)param_4 + lVar18 + 0x40 + lVar21);
            auVar32._4_4_ = puVar4[2];
            auVar32._0_4_ = puVar3[2];
            auVar32._8_4_ = puVar3[3];
            auVar32._12_4_ = puVar4[3];
            auVar36._4_4_ = *puVar4;
            auVar36._0_4_ = *puVar3;
            auVar36._8_4_ = puVar3[1];
            auVar36._12_4_ = puVar4[1];
            auVar37 = insertps(auVar36,auVar28,0x28);
            auVar33 = insertps(auVar32,auVar28,0xa8);
            auVar34._4_4_ = puVar4[1];
            auVar34._0_4_ = puVar3[1];
            auVar34._8_4_ = auVar28._4_4_;
            auVar34._12_4_ = 0;
            auVar37 = minps(auVar37,auVar34);
            auVar28._8_4_ = auVar28._12_4_;
            auVar28._0_8_ = auVar32._8_8_;
            auVar28._12_4_ = 0;
            auVar28 = minps(auVar33,auVar28);
            auVar28 = minps(auVar37,auVar28);
            pauVar20[-1] = auVar28;
            *pauVar20 = auVar29;
            *(undefined1 *)((longlong)puVar2 + lVar19) = 0;
            iVar17 = iVar17 + *(int *)((longlong)param_4 + lVar18 + 0x7c + lVar21);
          }
          lVar19 = lVar19 + 1;
          pauVar20 = pauVar20 + 2;
        } while (lVar19 != 0x74);
        *(byte *)((longlong)puVar2 + 0x75) = bVar15 + 1;
        goto LAB_147e64bd7;
      }
      local_a8 = puVar16;
      puVar16[-1] = uVar8 & 0xfffffffe;
      *puVar1 = uVar9;
      lVar18 = 0;
      do {
        iVar17 = *(int *)((longlong)param_4 + lVar18 * 4 + lVar21 + lVar19 + 0x6c);
        if ((iVar17 < 0 & param_6) == 0 && iVar17 != 0) {
          puVar16 = local_a8 + 1;
          *local_a8 = iVar17 * 2 + 1;
          local_a8 = puVar16;
          puVar16 = local_4b8 + 1;
          *local_4b8 = uVar8 >> 1;
          local_4b8 = puVar16;
        }
        lVar18 = lVar18 + -1;
      } while (lVar18 != -4);
    }
    else {
      *(undefined1 *)((longlong)puVar2 + 0x75) = 1;
      iVar17 = 0;
      lVar19 = -4;
      pauVar20 = (undefined1 (*) [16])local_928;
      local_4b8 = puVar1;
      do {
        uVar22 = (ulonglong)*(uint *)((longlong)puVar2 + lVar19 * 4 + 0x70);
        if (uVar22 == 0xffffffff) {
          *(uint *)pauVar20[-1] = uVar11;
          *(uint *)(pauVar20[-1] + 4) = uVar12;
          *(uint *)(pauVar20[-1] + 8) = uVar13;
          *(uint *)(pauVar20[-1] + 0xc) = uVar14;
          *(uint *)*pauVar20 = uVar23;
          *(uint *)(*pauVar20 + 4) = uVar24;
          *(uint *)(*pauVar20 + 8) = uVar25;
          *(uint *)(*pauVar20 + 0xc) = uVar26;
        }
        else {
          iVar17 = iVar17 + 1;
          lVar21 = *param_2;
          lVar18 = uVar22 * 0x20;
          puVar6 = (undefined8 *)(lVar21 + lVar18);
          uVar10 = puVar6[1];
          *(undefined8 *)pauVar20[-1] = *puVar6;
          *(undefined8 *)(pauVar20[-1] + 8) = uVar10;
          *pauVar20 = *(undefined1 (*) [16])(lVar21 + 0x10 + lVar18);
        }
        *(undefined1 *)((longlong)puVar2 + lVar19 + 0x74) = 0;
        pauVar20 = pauVar20 + 2;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0);
LAB_147e64bd7:
      *puVar2 = CONCAT44(local_928[4],(undefined4)local_938);
      puVar2[1] = CONCAT44(local_8d8,local_8f8);
      *(undefined4 *)(puVar2 + 4) = local_938._4_4_;
      *(uint *)((longlong)puVar2 + 0x24) = local_928[5];
      *(undefined4 *)(puVar2 + 5) = uStack_8f4;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_8d4;
      puVar2[8] = CONCAT44(local_928[6],auStack_930[0]);
      puVar2[9] = CONCAT44(uStack_8d0,uStack_8f0);
      auVar38._0_8_ = local_8e8._0_8_;
      auVar38._8_4_ = local_8e8._4_4_;
      auVar38._12_4_ = local_8c8._4_4_;
      auVar39._8_8_ = auVar38._8_8_;
      auVar30._12_4_ = local_8c8._0_4_;
      auVar30._8_4_ = local_8e8._0_4_;
      auVar27._4_4_ = uStack_900;
      auVar27._0_4_ = local_928[2];
      auVar27._12_4_ = local_8c8._8_4_;
      auVar27._8_4_ = local_8e8._8_4_;
      auVar30._4_4_ = local_908;
      auVar30._0_4_ = local_928[0];
      auVar39._4_4_ = uStack_904;
      auVar39._0_4_ = local_928[1];
      *(undefined1 (*) [16])(puVar2 + 2) = auVar30;
      *(undefined1 (*) [16])(puVar2 + 6) = auVar39;
      *(undefined1 (*) [16])(puVar2 + 10) = auVar27;
      *(int *)((longlong)puVar2 + 0x7c) = iVar17;
    }
    puVar16 = local_a8;
    if (local_a8 == &local_4a8) {
      if ((local_90 ^ (ulonglong)auStack_958) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 147e64cc6 FUN_147e64cc6 body=579 status=ok
// SIG undefined FUN_147e64cc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e64cc6(longlong param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  lVar10 = *param_3;
  lVar8 = (longlong)param_4 * 0x80;
  puVar1 = (undefined4 *)((longlong)param_3 + lVar8 + lVar10);
  *(undefined4 *)((longlong)param_3 + lVar8 + 0x70 + lVar10) = 0;
  if ((*(byte *)((longlong)param_3 + lVar8 + 0x74 + lVar10) & 1) == 0) {
    lVar10 = *(longlong *)(param_1 + 8);
    puVar2 = (undefined4 *)(lVar10 + (ulonglong)(uint)puVar1[0x18] * 0x20);
    uVar15 = *puVar2;
    uVar16 = puVar2[1];
    uVar17 = puVar2[2];
    uVar18 = puVar2[3];
    puVar2 = (undefined4 *)(lVar10 + 0x10 + (ulonglong)(uint)puVar1[0x18] * 0x20);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uVar13 = puVar2[2];
    uVar14 = puVar2[3];
    puVar3 = (uint *)(lVar10 + (ulonglong)(uint)puVar1[0x19] * 0x20);
    uVar31 = *puVar3;
    uVar32 = puVar3[1];
    uVar33 = puVar3[2];
    uVar34 = puVar3[3];
    puVar3 = (uint *)(lVar10 + 0x10 + (ulonglong)(uint)puVar1[0x19] * 0x20);
    uVar23 = *puVar3;
    uVar24 = puVar3[1];
    uVar25 = puVar3[2];
    uVar26 = puVar3[3];
    puVar3 = (uint *)(lVar10 + (ulonglong)(uint)puVar1[0x1a] * 0x20);
    uVar39 = *puVar3;
    uVar40 = puVar3[1];
    uVar41 = puVar3[2];
    uVar42 = puVar3[3];
    puVar3 = (uint *)(lVar10 + 0x10 + (ulonglong)(uint)puVar1[0x1a] * 0x20);
    uVar35 = *puVar3;
    uVar36 = puVar3[1];
    uVar37 = puVar3[2];
    uVar38 = puVar3[3];
    puVar3 = (uint *)(lVar10 + (ulonglong)(uint)puVar1[0x1b] * 0x20);
    uVar27 = *puVar3;
    uVar28 = puVar3[1];
    uVar29 = puVar3[2];
    uVar30 = puVar3[3];
    puVar3 = (uint *)(lVar10 + 0x10 + (ulonglong)(uint)puVar1[0x1b] * 0x20);
    uVar19 = *puVar3;
    uVar20 = puVar3[1];
    uVar21 = puVar3[2];
    uVar22 = puVar3[3];
    bVar6 = 0;
    lVar10 = -4;
    do {
      if ((longlong)(int)puVar1[lVar10 + 0x1c] != 0) {
        lVar8 = *param_3;
        lVar9 = (longlong)(int)puVar1[lVar10 + 0x1c] * 0x80;
        *(int *)((longlong)param_3 + lVar9 + 0x78 + lVar8) = param_4;
        bVar4 = *(byte *)((longlong)param_3 + lVar9 + 0x75 + lVar8);
        if (bVar6 < bVar4) {
          bVar6 = bVar4;
        }
        *(undefined1 *)((longlong)puVar1 + lVar10 + 0x74) = 0;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0);
    cVar7 = bVar6 + 1;
    lVar10 = 0x75;
  }
  else {
    *(undefined1 *)((longlong)puVar1 + 0x75) = 1;
    uVar30 = uRam000000014c6dae8c;
    uVar29 = uRam000000014c6dae88;
    uVar28 = uRam000000014c6dae84;
    uVar27 = _DAT_14c6dae80;
    uVar19 = _DAT_14c6dae80 ^ 0x80000000;
    uVar20 = uRam000000014c6dae84 ^ 0x80000000;
    uVar21 = uRam000000014c6dae88 ^ 0x80000000;
    uVar22 = uRam000000014c6dae8c ^ 0x80000000;
    puVar2 = (undefined4 *)(*param_2 + (ulonglong)(uint)puVar1[0x18] * 0x20);
    uVar15 = *puVar2;
    uVar16 = puVar2[1];
    uVar17 = puVar2[2];
    uVar18 = puVar2[3];
    puVar2 = (undefined4 *)(*param_2 + 0x10 + (ulonglong)(uint)puVar1[0x18] * 0x20);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uVar13 = puVar2[2];
    uVar14 = puVar2[3];
    *(undefined1 *)(puVar1 + 0x1c) = 0;
    uVar23 = uVar19;
    uVar24 = uVar20;
    uVar25 = uVar21;
    uVar26 = uVar22;
    uVar31 = uVar27;
    uVar32 = uVar28;
    uVar33 = uVar29;
    uVar34 = uVar30;
    if ((ulonglong)(uint)puVar1[0x19] != 0xffffffff) {
      lVar10 = (ulonglong)(uint)puVar1[0x19] * 0x20;
      puVar3 = (uint *)(*param_2 + lVar10);
      uVar31 = *puVar3;
      uVar32 = puVar3[1];
      uVar33 = puVar3[2];
      uVar34 = puVar3[3];
      puVar3 = (uint *)(*param_2 + 0x10 + lVar10);
      uVar23 = *puVar3;
      uVar24 = puVar3[1];
      uVar25 = puVar3[2];
      uVar26 = puVar3[3];
      *(undefined1 *)((longlong)puVar1 + 0x71) = 0;
    }
    uVar35 = uVar19;
    uVar36 = uVar20;
    uVar37 = uVar21;
    uVar38 = uVar22;
    uVar39 = uVar27;
    uVar40 = uVar28;
    uVar41 = uVar29;
    uVar42 = uVar30;
    if ((ulonglong)(uint)puVar1[0x1a] != 0xffffffff) {
      lVar10 = (ulonglong)(uint)puVar1[0x1a] * 0x20;
      puVar3 = (uint *)(*param_2 + lVar10);
      uVar39 = *puVar3;
      uVar40 = puVar3[1];
      uVar41 = puVar3[2];
      uVar42 = puVar3[3];
      puVar3 = (uint *)(*param_2 + 0x10 + lVar10);
      uVar35 = *puVar3;
      uVar36 = puVar3[1];
      uVar37 = puVar3[2];
      uVar38 = puVar3[3];
      *(undefined1 *)((longlong)puVar1 + 0x72) = 0;
    }
    if ((ulonglong)(uint)puVar1[0x1b] == 0xffffffff) goto LAB_147e64da0;
    lVar10 = (ulonglong)(uint)puVar1[0x1b] * 0x20;
    puVar3 = (uint *)(*param_2 + lVar10);
    uVar27 = *puVar3;
    uVar28 = puVar3[1];
    uVar29 = puVar3[2];
    uVar30 = puVar3[3];
    puVar3 = (uint *)(*param_2 + 0x10 + lVar10);
    uVar19 = *puVar3;
    uVar20 = puVar3[1];
    uVar21 = puVar3[2];
    uVar22 = puVar3[3];
    lVar10 = 0x73;
    cVar7 = '\0';
  }
  *(char *)((longlong)puVar1 + lVar10) = cVar7;
LAB_147e64da0:
  auVar43._4_4_ = uVar16;
  auVar43._0_4_ = uVar15;
  auVar43._8_4_ = uVar17;
  auVar43._12_4_ = uVar18;
  auVar46._4_4_ = uVar32;
  auVar46._0_4_ = uVar31;
  auVar46._8_4_ = uVar33;
  auVar46._12_4_ = uVar34;
  auVar44 = minps(auVar43,auVar46);
  auVar45._4_4_ = uVar12;
  auVar45._0_4_ = uVar11;
  auVar45._8_4_ = uVar13;
  auVar45._12_4_ = uVar14;
  auVar48._4_4_ = uVar24;
  auVar48._0_4_ = uVar23;
  auVar48._8_4_ = uVar25;
  auVar48._12_4_ = uVar26;
  auVar46 = maxps(auVar45,auVar48);
  auVar47._4_4_ = uVar40;
  auVar47._0_4_ = uVar39;
  auVar47._8_4_ = uVar41;
  auVar47._12_4_ = uVar42;
  auVar5._4_4_ = uVar28;
  auVar5._0_4_ = uVar27;
  auVar5._8_4_ = uVar29;
  auVar5._12_4_ = uVar30;
  auVar48 = minps(auVar47,auVar5);
  auVar48 = minps(auVar44,auVar48);
  auVar49._4_4_ = uVar36;
  auVar49._0_4_ = uVar35;
  auVar49._8_4_ = uVar37;
  auVar49._12_4_ = uVar38;
  auVar44._4_4_ = uVar20;
  auVar44._0_4_ = uVar19;
  auVar44._8_4_ = uVar21;
  auVar44._12_4_ = uVar22;
  auVar44 = maxps(auVar49,auVar44);
  auVar44 = maxps(auVar46,auVar44);
  lVar10 = *(longlong *)(param_1 + 8);
  lVar8 = (longlong)param_4 * 0x20;
  *(undefined1 (*) [16])(lVar10 + lVar8) = auVar48;
  *(undefined1 (*) [16])(lVar10 + 0x10 + lVar8) = auVar44;
  *puVar1 = uVar15;
  puVar1[1] = uVar31;
  puVar1[2] = uVar39;
  puVar1[3] = uVar27;
  puVar1[8] = uVar16;
  puVar1[9] = uVar32;
  puVar1[10] = uVar40;
  puVar1[0xb] = uVar28;
  puVar1[0x10] = uVar17;
  puVar1[0x11] = uVar33;
  puVar1[0x12] = uVar41;
  puVar1[0x13] = uVar29;
  puVar1[4] = uVar11;
  puVar1[5] = uVar23;
  puVar1[6] = uVar35;
  puVar1[7] = uVar19;
  puVar1[0xc] = uVar12;
  puVar1[0xd] = uVar24;
  puVar1[0xe] = uVar36;
  puVar1[0xf] = uVar20;
  puVar1[0x14] = uVar13;
  puVar1[0x15] = uVar25;
  puVar1[0x16] = uVar37;
  puVar1[0x17] = uVar21;
  return;
}



// FUNCTION 147e64f0a FUN_147e64f0a body=98 status=ok
// SIG undefined FUN_147e64f0a(void)

undefined8 * FUN_147e64f0a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4250;
  param_1[4] = &PTR_FUN_14aba4270;
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e64f76 FUN_147e64f76 body=1675 status=ok
// SIG undefined FUN_147e64f76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e64f76(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_9c;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  char *local_70;
  char *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = *(longlong *)(param_1 + 0x28);
  local_a8 = param_1;
  if (lVar9 == 0) {
    plVar20 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
  }
  else {
    plVar20 = (longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0
              );
    lVar13 = *plVar20;
    if (lVar13 == 0) {
      lVar13 = FUN_144b3f4a0();
      *plVar20 = lVar13;
    }
    if (*(longlong *)(lVar13 + 0x3e0) != 0) {
      local_70 = "Ot";
      local_68 = "";
      FUN_144be96b0(*(longlong *)(lVar13 + 0x3e0),lVar9);
    }
  }
  lVar9 = *(longlong *)(local_a8 + 0x30);
  lVar13 = *plVar20;
  if (lVar9 != 0) {
    if (lVar13 == 0) {
      lVar13 = FUN_144b3f4a0();
      *plVar20 = lVar13;
    }
    if (*(longlong *)(lVar13 + 0x3e0) != 0) {
      local_70 = "Ot";
      local_68 = "";
      FUN_144be96b0(*(longlong *)(lVar13 + 0x3e0),lVar9);
      lVar13 = *plVar20;
    }
  }
  if (lVar13 == 0) {
    lVar13 = FUN_144b3f4a0();
    *plVar20 = lVar13;
  }
  if (*(longlong *)(lVar13 + 0x3e0) != 0) {
    local_70 = "TthkcdSimdTree::FinalizeTree";
    local_68 = "";
    FUN_144b3f370();
  }
  uVar8 = uRam000000014c6dae88;
  uVar7 = _DAT_14c6dae80;
  if (*(int *)(*(longlong *)(local_a8 + 0x10) + 0x30) != 0) {
    lVar9 = *(longlong *)(local_a8 + 0x20);
    uVar5 = *(undefined8 *)(local_a8 + 8);
    iVar11 = *(int *)(*(longlong *)(local_a8 + 0x18) + 0x1810);
    puVar6 = *(ulonglong **)(lVar9 + 0x20);
    *puVar6 = _DAT_14c6dae80;
    puVar6[1] = uVar8;
    puVar6[2] = uVar7 ^ 0x8000000080000000;
    puVar6[3] = uVar8 ^ 0x8000000080000000;
    do {
      FUN_147e64cc6(lVar9 + 0x18,lVar9 + 0x28,uVar5,iVar11);
      iVar22 = iVar11 + 1;
      iVar11 = iVar11 + -1;
    } while (2 < iVar22);
    lVar9 = *(longlong *)(local_a8 + 0x10);
    uVar16 = *(int *)(lVar9 + 0x30) - 4;
    if (((int)uVar16 <= (int)(*(uint *)(lVar9 + 0x34) & 0x7fffffff)) ||
       (FUN_147e57f40(lVar9 + 0x28,&PTR_vftable_14c6e47a0,uVar16),
       (int)*(uint *)(lVar9 + 0x30) < (int)uVar16 || uVar16 < *(uint *)(lVar9 + 0x30))) {
      *(uint *)(lVar9 + 0x30) = uVar16;
    }
    FUN_147e613a6(*(longlong *)(local_a8 + 0x10) + 0x28,*(undefined8 *)(local_a8 + 0x38));
    if (*(char *)(*(longlong *)(local_a8 + 0x10) + 0x1c) == '\x01') {
      lVar9 = *plVar20;
      if (lVar9 == 0) {
        lVar9 = FUN_144b3f4a0();
        *plVar20 = lVar9;
      }
      if (*(longlong *)(lVar9 + 0x3e0) != 0) {
        local_70 = "TtCompact tree nodes";
        local_68 = "";
        FUN_144b3f370();
      }
      lVar9 = *(longlong *)(local_a8 + 0x18);
      local_98 = plVar20;
      if (*(int *)(lVar9 + 0x1808) < 2) {
        iVar11 = **(int **)(lVar9 + 0x18e8) + *(int *)(lVar9 + 0x180c);
        lVar9 = local_a8;
      }
      else {
        FUN_147e6560a(*(undefined8 *)(lVar9 + 0x1818),0,*(int *)(lVar9 + 0x1808) + -1);
        lVar13 = *(longlong *)(local_a8 + 0x18);
        iVar11 = *(int *)(*(longlong *)(lVar13 + 0x18e8) + (longlong)**(int **)(lVar13 + 0x1818) * 4
                         ) + *(int *)(lVar13 + 0x180c);
        lVar9 = local_a8;
        if (1 < *(int *)(lVar13 + 0x1808)) {
          lVar12 = 1;
          do {
            lVar19 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x1818) + lVar12 * 0xc);
            iVar22 = *(int *)(*(longlong *)(lVar13 + 0x1800) + 0x28 + lVar19 * 0x30);
            iVar10 = *(int *)(*(longlong *)(lVar13 + 0x1818) + 8 + lVar12 * 0xc) +
                     *(int *)(lVar13 + 0x180c);
            iVar17 = iVar11 - iVar10;
            lVar14 = (longlong)*(longlong **)(lVar9 + 8) + **(longlong **)(lVar9 + 8);
            lVar18 = (longlong)iVar22 * 0x80;
            iVar4 = *(int *)(*(longlong *)(lVar13 + 0x18e8) + lVar19 * 4);
            iVar23 = 0;
            if ((*(byte *)(lVar18 + 0x74 + lVar14) & 1) == 0) {
              iVar23 = iVar17;
            }
            piVar2 = (int *)(lVar18 + 0x60 + lVar14);
            auVar24._0_4_ = iVar23 + *piVar2;
            auVar24._4_4_ = iVar23 + piVar2[1];
            auVar24._8_4_ = iVar23 + piVar2[2];
            auVar24._12_4_ = iVar23 + piVar2[3];
            auVar26._0_4_ = -(uint)(*piVar2 == 0);
            auVar26._4_4_ = -(uint)(piVar2[1] == 0);
            auVar26._8_4_ = -(uint)(piVar2[2] == 0);
            auVar26._12_4_ = -(uint)(piVar2[3] == 0);
            *(undefined1 (*) [16])(lVar18 + 0x60 + lVar14) = ~auVar26 & auVar24;
            if (0 < iVar4) {
              lVar21 = (longlong)iVar11;
              lVar15 = (longlong)iVar10;
              lVar19 = lVar15 << 7;
              lVar13 = lVar21 << 7;
              iVar23 = 0;
              local_9c = iVar11;
              local_90 = lVar14;
              local_88 = lVar18;
              local_80 = (longlong)iVar22;
              local_78 = lVar12;
              do {
                plVar20 = *(longlong **)(lVar9 + 8);
                lVar12 = *plVar20;
                puVar3 = (undefined8 *)((longlong)plVar20 + lVar19 + lVar12);
                uVar5 = puVar3[1];
                puVar1 = (undefined8 *)((longlong)plVar20 + lVar13 + lVar12);
                *puVar1 = *puVar3;
                puVar1[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar20 + lVar19 + 0x10 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar20 + lVar13 + 0x10 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar20 + lVar19 + 0x20 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar20 + lVar13 + 0x20 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar20 + lVar19 + 0x30 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar20 + lVar13 + 0x30 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar20 + lVar19 + 0x40 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar20 + lVar13 + 0x40 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                puVar1 = (undefined8 *)((longlong)plVar20 + lVar19 + 0x50 + lVar12);
                uVar5 = puVar1[1];
                puVar3 = (undefined8 *)((longlong)plVar20 + lVar13 + 0x50 + lVar12);
                *puVar3 = *puVar1;
                puVar3[1] = uVar5;
                if (lVar21 != lVar15) {
                  FUN_144bfbed0((longlong)plVar20 + lVar13 + lVar12,
                                (longlong)plVar20 + lVar19 + lVar12,0x80);
                  lVar9 = local_a8;
                }
                iVar11 = iVar17;
                if ((*(byte *)((longlong)plVar20 + lVar13 + lVar12 + 0x74) & 1) != 0) {
                  iVar11 = 0;
                }
                piVar2 = (int *)((longlong)plVar20 + lVar13 + lVar12 + 0x60);
                auVar25._0_4_ = iVar11 + *piVar2;
                auVar25._4_4_ = iVar11 + piVar2[1];
                auVar25._8_4_ = iVar11 + piVar2[2];
                auVar25._12_4_ = iVar11 + piVar2[3];
                auVar27._0_4_ = -(uint)(*piVar2 == 0);
                auVar27._4_4_ = -(uint)(piVar2[1] == 0);
                auVar27._8_4_ = -(uint)(piVar2[2] == 0);
                auVar27._12_4_ = -(uint)(piVar2[3] == 0);
                *(undefined1 (*) [16])((longlong)plVar20 + lVar13 + lVar12 + 0x60) =
                     ~auVar27 & auVar25;
                piVar2 = (int *)((longlong)plVar20 + lVar13 + lVar12 + 0x78);
                *piVar2 = *piVar2 + iVar17;
                lVar15 = lVar15 + 1;
                lVar21 = lVar21 + 1;
                lVar19 = lVar19 + 0x80;
                iVar23 = iVar23 + -1;
                lVar13 = lVar13 + 0x80;
              } while (-iVar4 != iVar23);
              iVar11 = local_9c - iVar23;
              iVar22 = (int)local_80;
              lVar12 = local_78;
              lVar14 = local_90;
              lVar18 = local_88;
            }
            lVar13 = 0;
            do {
              lVar19 = (longlong)*(int *)(lVar14 + lVar18 + 0x60 + lVar13 * 4);
              if (lVar19 != 0) {
                *(int *)((longlong)*(longlong **)(lVar9 + 8) +
                        lVar19 * 0x80 + 0x78 + **(longlong **)(lVar9 + 8)) = iVar22;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 != 4);
            lVar12 = lVar12 + 1;
            lVar13 = *(longlong *)(lVar9 + 0x18);
          } while (lVar12 < *(int *)(lVar13 + 0x1808));
        }
      }
      FUN_147e56bbe(*(undefined8 *)(lVar9 + 8),iVar11);
      if (*(int *)(*(longlong *)(local_a8 + 8) + 8) <
          (int)(*(uint *)(*(longlong *)(local_a8 + 8) + 0xc) & 0x7fffffff)) {
        FUN_147e56c0e();
      }
      plVar20 = local_98;
      lVar9 = *local_98;
      if (lVar9 == 0) {
        lVar9 = FUN_144b3f4a0();
        *plVar20 = lVar9;
      }
      if (*(longlong *)(lVar9 + 0x3e0) != 0) {
        local_70 = "Et";
        local_68 = "";
        FUN_144b3f260();
      }
    }
  }
  lVar9 = *plVar20;
  if (lVar9 == 0) {
    lVar9 = FUN_144b3f4a0();
    *plVar20 = lVar9;
  }
  if (*(longlong *)(lVar9 + 0x3e0) != 0) {
    local_70 = "Et";
    local_68 = "";
    FUN_144b3f260();
  }
  if (*(longlong *)(local_a8 + 0x28) != 0) {
    lVar9 = *plVar20;
    if (lVar9 == 0) {
      lVar9 = FUN_144b3f4a0();
      *plVar20 = lVar9;
    }
    if (*(longlong *)(lVar9 + 0x3e0) != 0) {
      local_70 = "Et";
      local_68 = "";
      FUN_144b3f260();
    }
  }
  if (*(longlong *)(local_a8 + 0x30) != 0) {
    lVar9 = *plVar20;
    if (lVar9 == 0) {
      lVar9 = FUN_144b3f4a0();
      *plVar20 = lVar9;
    }
    if (*(longlong *)(lVar9 + 0x3e0) != 0) {
      local_70 = "Et";
      local_68 = "";
      FUN_144b3f260();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6560a FUN_147e6560a body=339 status=ok
// SIG undefined FUN_147e6560a(void)

void FUN_147e6560a(longlong param_1,uint param_2,ulonglong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  lVar5 = DAT_14c707940;
  uVar7 = (ulonglong)param_2;
  do {
    iVar4 = (int)uVar7;
    uVar1 = *(uint *)(param_1 + 8 + (longlong)(iVar4 + (int)param_3 >> 1) * 0xc);
    uVar11 = param_3;
    do {
      iVar8 = (int)uVar7;
      lVar15 = (longlong)iVar8;
      uVar7 = 0;
      puVar13 = (undefined8 *)(param_1 + -0xc + lVar15 * 0xc);
      do {
        puVar12 = puVar13;
        uVar6 = uVar7;
        uVar7 = uVar6 - 1;
        puVar13 = (undefined8 *)((longlong)puVar12 + 0xc);
      } while (*(uint *)((longlong)puVar12 + 0x14) < uVar1);
      iVar10 = (int)uVar11;
      lVar14 = 0;
      puVar17 = (undefined8 *)(param_1 + 0xc + (longlong)iVar10 * 0xc);
      do {
        puVar16 = puVar17;
        lVar14 = lVar14 + 1;
        puVar17 = (undefined8 *)((longlong)puVar16 + -0xc);
      } while (uVar1 < *(uint *)((longlong)puVar16 + -4));
      lVar9 = (longlong)iVar10 + 1;
      if (lVar9 - lVar14 < (longlong)(~uVar7 + lVar15)) {
        uVar7 = (iVar8 - 1) - uVar7;
        uVar11 = ((uVar11 & 0xffffffff) - lVar14) + 1;
      }
      else {
        if ((lVar9 - lVar15) + uVar6 != lVar14) {
          uVar2 = *(undefined4 *)((longlong)puVar16 + -4);
          uVar3 = *puVar17;
          *(undefined4 *)((longlong)puVar16 + -4) = *(undefined4 *)((longlong)puVar12 + 0x14);
          *puVar17 = *puVar13;
          *(undefined4 *)((longlong)puVar12 + 0x14) = uVar2;
          *puVar13 = uVar3;
        }
        uVar11 = (ulonglong)(uint)(iVar10 - (int)lVar14);
        uVar7 = (ulonglong)(uint)(iVar8 - (int)uVar7);
      }
    } while ((int)uVar7 <= (int)uVar11);
    if (iVar4 < (int)uVar11) {
      FUN_147e6560a(param_1);
    }
  } while ((int)uVar7 < (int)param_3);
  if (lVar5 == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6575e FUN_147e6575e body=45 status=ok
// SIG undefined FUN_147e6575e(void)

undefined8 * FUN_147e6575e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e6578c FUN_147e6578c body=35 status=ok
// SIG undefined FUN_147e6578c(void)

undefined8 FUN_147e6578c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e657ce FUN_147e657ce body=44 status=ok
// SIG undefined FUN_147e657ce(void)

undefined8 FUN_147e657ce(undefined8 param_1,int param_2)

{
  FUN_147e657fa();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e657fa FUN_147e657fa body=118 status=ok
// SIG undefined FUN_147e657fa(void)

void FUN_147e657fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba4450;
  FUN_144bdefb0(param_1 + 7);
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],(longlong)*(int *)((longlong)param_1 + 0x34) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 147e65870 FUN_147e65870 body=98 status=ok
// SIG undefined FUN_147e65870(void)

undefined8 * FUN_147e65870(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4470;
  param_1[4] = &PTR_FUN_14aba4490;
  if (param_1[5] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e658e4 FUN_147e658e4 body=355 status=ok
// SIG undefined FUN_147e658e4(void)

ulonglong FUN_147e658e4(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar7 = (ulonglong)(uVar2 * 2);
  if (uVar7 <= param_2) {
    uVar7 = param_2;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_2)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(PTR_vftable_14c6e47c0 + 0x10))(&PTR_vftable_14c6e47c0,uVar7 * 0xc0,&local_50)
  ;
  iVar8 = (int)param_1[1];
  if (0 < iVar8) {
    lVar3 = *param_1;
    lVar9 = 0;
    do {
      memcpy((void *)(lVar5 + lVar9),(void *)(lVar9 + lVar3),0xc0);
      lVar9 = lVar9 + 0xc0;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  uVar1 = uVar7 * 0xc0 + 0xc0;
  uVar6 = local_50;
  uVar10 = uVar7;
  if (uVar1 <= local_50) {
    uVar10 = uVar7 + 1;
    local_50 = local_50 - 0xc0;
    uVar6 = local_50;
    if (uVar1 <= local_50) {
      uVar7 = local_50 + uVar7 * -0xc0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar10 = uVar10 + uVar7 / 0xc0;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar6 = (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,*param_1,((ulonglong)uVar2 & 0x7fffffff) * 0xc0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  *param_1 = lVar5;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e65a48 FUN_147e65a48 body=281 status=ok
// SIG undefined FUN_147e65a48(void)

void FUN_147e65a48(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [4];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = param_1[3];
  bVar8 = false;
  lVar6 = param_1[2];
  plVar7 = &local_28;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    uVar1 = (ulonglong)bVar8;
    bVar8 = lVar6 != 0 || (ulonglong)-lVar6 < uVar1;
    *plVar7 = -lVar6 - uVar1;
    lVar6 = lVar4;
    plVar7 = &local_50;
    bVar3 = false;
  } while (bVar5);
  lVar4 = param_1[1];
  bVar8 = false;
  lVar6 = *param_1;
  plVar7 = &local_58;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    uVar1 = (ulonglong)bVar8;
    bVar8 = lVar6 != 0 || (ulonglong)-lVar6 < uVar1;
    *plVar7 = -lVar6 - uVar1;
    lVar6 = lVar4;
    plVar7 = &local_60;
    bVar3 = false;
  } while (bVar5);
  *param_1 = local_58;
  param_1[1] = local_60;
  param_1[2] = CONCAT44(local_28._4_4_,(undefined4)local_28);
  param_1[3] = local_50;
  local_48[0] = param_1[4];
  local_48[1] = param_1[5];
  local_48[2] = param_1[6];
  lVar4 = 0;
  bVar8 = false;
  do {
    uVar1 = (ulonglong)bVar8;
    uVar2 = -local_48[lVar4];
    bVar8 = local_48[lVar4] != 0 || uVar2 < uVar1;
    (&local_28)[lVar4] = uVar2 - uVar1;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  param_1[6] = local_18;
  *(undefined4 *)(param_1 + 4) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_1 + 5) = uStack_20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_1c;
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e65b62 FUN_147e65b62 body=134 status=ok
// SIG undefined FUN_147e65b62(void)

void FUN_147e65b62(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e65be8 FUN_147e65be8 body=241 status=ok
// SIG undefined FUN_147e65be8(void)

longlong * FUN_147e65be8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 8) == 0) {
    lVar2 = lVar1;
  }
  *param_1 = lVar2;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = param_2;
  local_30 = (longlong)param_2 * 4;
  if (lVar2 == 0) {
    lVar1 = (*DAT_14c787670)(1,&local_30,0x40);
  }
  else {
    local_28 = local_30 + 0x3fU & 0xffffffffffffffc0;
    if (local_28 <= *(ulonglong *)(lVar2 + 0x28)) {
      lVar1 = *(longlong *)(lVar2 + 0x38);
      if (local_28 + lVar1 <= *(ulonglong *)(lVar2 + 0x40)) {
        *(ulonglong *)(lVar2 + 0x38) = local_28 + lVar1;
        goto LAB_147e65c85;
      }
    }
    lVar1 = FUN_144b454a0(lVar2,&local_28);
  }
LAB_147e65c85:
  param_1[1] = lVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e65cda FUN_147e65cda body=83 status=ok
// SIG undefined FUN_147e65cda(void)

void FUN_147e65cda(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e65d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c787678)(1);
    return;
  }
  uVar4 = (longlong)(int)param_1[2] * 4 + 0x3fU & 0xffffffffffffffc0;
  if ((uVar4 <= *(ulonglong *)(lVar2 + 0x28)) && (*(longlong *)(lVar2 + 0x38) == uVar4 + lVar3)) {
    *(longlong *)(lVar2 + 0x38) = lVar3;
    if (*(longlong *)(lVar2 + 0x48) != lVar3) {
      return;
    }
    FUN_144be8430();
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (uVar4 + 0x40 <= *(ulonglong *)(lVar2 + 0x28)) {
    if (uVar4 + lVar3 == *(longlong *)(lVar2 + 0x38)) {
      *(longlong *)(lVar2 + 0x38) = lVar3;
      FUN_144be8430();
      return;
    }
    FUN_144be85a0();
    return;
  }
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x30) + 0x20);
  *piVar1 = *piVar1 + -1;
                    /* WARNING: Could not recover jumptable at 0x000144be8598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x10))
            (*(longlong **)(lVar2 + 0x10),lVar3 - *(int *)(lVar3 + -4),uVar4 + 0x44);
  return;
}



// FUNCTION 147e65d2e FUN_147e65d2e body=367 status=ok
// SIG undefined FUN_147e65d2e(void)

void FUN_147e65d2e(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x22b0) = 0;
  if (*(longlong *)(param_1 + 0x22a8) != 0 && -1 < (longlong)*(int *)(param_1 + 0x22b4)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x22a8),
               (longlong)*(int *)(param_1 + 0x22b4) << 4);
  }
  *(undefined8 *)(param_1 + 0x22a8) = 0;
  *(undefined4 *)(param_1 + 0x22b4) = 0x80000000;
  FUN_147e65fd6((longlong *)(param_1 + 0x2298));
  if ((-1 < (longlong)*(int *)(param_1 + 0x22a4)) &&
     (lVar1 = *(longlong *)(param_1 + 0x2298), lVar1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar1,(longlong)*(int *)(param_1 + 0x22a4) * 0x148);
  }
  *(undefined8 *)(param_1 + 0x2298) = 0;
  *(undefined4 *)(param_1 + 0x22a4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2290) = 0;
  if (*(longlong *)(param_1 + 0x2288) != 0 && -1 < (longlong)*(int *)(param_1 + 0x2294)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x2288),
               (longlong)*(int *)(param_1 + 0x2294) * 0x14);
  }
  *(undefined8 *)(param_1 + 0x2288) = 0;
  *(undefined4 *)(param_1 + 0x2294) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2268) = 0;
  if (*(longlong *)(param_1 + 0x2260) != 0 && -1 < (longlong)*(int *)(param_1 + 0x226c)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x2260),
               (longlong)*(int *)(param_1 + 0x226c) << 3);
  }
  *(undefined8 *)(param_1 + 0x2260) = 0;
  *(undefined4 *)(param_1 + 0x226c) = 0x80000000;
  FUN_147e65e9e(param_1 + 0x2238);
  FUN_147e65f2c(param_1);
  return;
}



// FUNCTION 147e65e9e FUN_147e65e9e body=142 status=ok
// SIG undefined FUN_147e65e9e(void)

void FUN_147e65e9e(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x1c) << 5);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*param_1 != 0 && -1 < (longlong)*(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) * 0x70);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e65f2c FUN_147e65f2c body=169 status=ok
// SIG undefined FUN_147e65f2c(void)

void FUN_147e65f2c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2230) = 0;
  if ((-1 < (longlong)*(int *)(param_1 + 0x2234)) && (*(longlong *)(param_1 + 0x2228) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x2228),
               (longlong)*(int *)(param_1 + 0x2234) * 0x138);
  }
  *(undefined8 *)(param_1 + 0x2228) = 0;
  *(undefined4 *)(param_1 + 0x2234) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0 && -1 < (longlong)*(int *)(param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 0x10),
               (longlong)*(int *)(param_1 + 0x1c) * 0x88);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}



// FUNCTION 147e65fd6 FUN_147e65fd6 body=136 status=ok
// SIG undefined FUN_147e65fd6(void)

void FUN_147e65fd6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x148;
    do {
      lVar2 = *(longlong *)(lVar1 + -0x18 + lVar4);
      *(undefined4 *)(lVar1 + -0x10 + lVar4) = 0;
      lVar3 = (longlong)*(int *)(lVar1 + -0xc + lVar4);
      if (lVar2 != 0 && -1 < lVar3) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar2,lVar3 * 0x70);
      }
      *(undefined8 *)(lVar1 + -0x18 + lVar4) = 0;
      *(undefined4 *)(lVar1 + -0xc + lVar4) = 0x80000000;
      lVar4 = lVar4 + -0x148;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 147e6605e FUN_147e6605e body=284 status=ok
// SIG undefined FUN_147e6605e(void)

ulonglong FUN_147e6605e(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  uVar4 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) * 2);
  lVar6 = uVar4 + (uVar4 == 0);
  if (0x3fffffff < uVar5) {
    lVar6 = 0x7ffffffe;
  }
  uVar2 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,lVar6 * 0x60,&local_48)
  ;
  FUN_147e6617c(uVar2,*param_1,*(undefined4 *)(param_1 + 1));
  uVar4 = lVar6 * 0x60 + 0x60;
  uVar3 = local_48;
  lVar7 = lVar6;
  if (uVar4 <= local_48) {
    lVar7 = lVar6 + 1;
    local_48 = local_48 - 0x60;
    uVar3 = local_48;
    if (uVar4 <= local_48) {
      uVar4 = local_48 + lVar6 * -0x60;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      lVar7 = lVar7 + uVar4 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*param_1,(ulonglong)uVar5 * 0x60);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)lVar7;
  *param_1 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6617c FUN_147e6617c body=134 status=ok
// SIG undefined FUN_147e6617c(void)

void FUN_147e6617c(longlong param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  
  if (0 < param_3) {
    lVar9 = 0;
    iVar10 = param_3;
    do {
      *(undefined8 *)(param_1 + lVar9) = *(undefined8 *)((longlong)param_2 + lVar9);
      *(undefined8 *)((longlong)param_2 + lVar9) = 0;
      *(undefined4 *)(param_1 + 8 + lVar9) = *(undefined4 *)((longlong)param_2 + lVar9 + 8);
      puVar1 = (undefined8 *)((longlong)param_2 + lVar9 + 0x10);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)((longlong)param_2 + lVar9 + 0x20);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1 = (undefined8 *)((longlong)param_2 + lVar9 + 0x30);
      uVar8 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar9);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar3 = (undefined4 *)((longlong)param_2 + lVar9 + 0x40);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar4 = (undefined4 *)(param_1 + 0x40 + lVar9);
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      *(undefined4 *)(param_1 + 0x50 + lVar9) = *(undefined4 *)((longlong)param_2 + lVar9 + 0x50);
      lVar9 = lVar9 + 0x60;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    do {
      if (*param_2 != 0) {
        FUN_144b3f230();
      }
      param_2 = param_2 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147e66202 FUN_147e66202 body=133 status=ok
// SIG undefined FUN_147e66202(void)

longlong * FUN_147e66202(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147e66288(param_1,local_38);
  iVar2 = local_38[0];
  lVar1 = param_1[1];
  if (local_38[0] == (int)lVar1) {
    FUN_147e66342(param_1,param_3);
  }
  *param_2 = (longlong)local_38[0] * 0x10 + *param_1;
  *(bool *)(param_2 + 1) = iVar2 == (int)lVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e66288 FUN_147e66288 body=186 status=ok
// SIG undefined FUN_147e66288(void)

uint * FUN_147e66288(longlong *param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_147e544b0(param_1 + 2,(int)param_1[1]);
  iVar2 = *param_3;
  iVar3 = param_3[1];
  uVar4 = iVar3 * -0x61c8864f;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar3 * -0x4f000000;
  uVar5 = iVar2 * -0x61c8864f;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar2 * -0x4f000000;
  uVar5 = uVar5 * 0x40 + (uVar4 >> 2) + uVar4 + 0x9e3779b9 ^ uVar5;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar5);
  while( true ) {
    puVar1 = (uint *)(param_1[2] + uVar6 * 8);
    uVar4 = puVar1[1];
    if ((int)uVar4 < 0) break;
    if (*puVar1 == uVar5) {
      if ((*(int *)(*param_1 + (ulonglong)uVar4 * 0x10) == iVar2) &&
         (*(int *)(*param_1 + 4 + (ulonglong)uVar4 * 0x10) == iVar3)) goto LAB_147e6632e;
    }
    uVar6 = uVar6 + 1 & (longlong)(int)*(uint *)(param_1 + 3);
  }
  uVar4 = *(uint *)(param_1 + 1);
  *puVar1 = uVar5;
  puVar1[1] = uVar4;
  uVar6 = (ulonglong)((longlong)puVar1 - param_1[2]) >> 3;
  uVar4 = *(uint *)(param_1 + 1);
LAB_147e6632e:
  *param_2 = uVar4;
  param_2[1] = (uint)uVar6;
  return param_2;
}



// FUNCTION 147e66342 FUN_147e66342 body=95 status=ok
// SIG undefined FUN_147e66342(void)

void FUN_147e66342(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (int)param_1[1];
  iVar1 = iVar3 + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= iVar3) {
    FUN_147e663a2(param_1,&PTR_vftable_14c6e47a0,iVar1);
    iVar3 = (int)param_1[1];
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar3 * 0x10;
  *(undefined4 *)(lVar2 + lVar4) = *param_2;
  *(undefined4 *)(lVar2 + 4 + lVar4) = param_2[1];
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  *(int *)(param_1 + 1) = iVar1;
  return;
}



// FUNCTION 147e663a2 FUN_147e663a2 body=361 status=ok
// SIG undefined FUN_147e663a2(void)

void FUN_147e663a2(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar9 = (ulonglong)(uVar2 * 2);
  if (uVar9 <= param_3) {
    uVar9 = param_3;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x10,&local_50);
  iVar7 = (int)param_1[1];
  if (0 < iVar7) {
    lVar3 = *param_1;
    lVar5 = 0;
    iVar6 = iVar7;
    do {
      *(undefined4 *)(lVar4 + lVar5) = *(undefined4 *)(lVar3 + lVar5);
      *(undefined4 *)(lVar4 + 4 + lVar5) = *(undefined4 *)(lVar3 + 4 + lVar5);
      *(undefined8 *)(lVar4 + 8 + lVar5) = *(undefined8 *)(lVar3 + 8 + lVar5);
      *(undefined8 *)(lVar3 + 8 + lVar5) = 0;
      lVar5 = lVar5 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar10 = (longlong *)(lVar3 + 8);
    do {
      if (*plVar10 != 0) {
        FUN_144b3f230();
      }
      plVar10 = plVar10 + 2;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar1 = uVar9 * 0x10 + 0x10;
  uVar8 = uVar9;
  if (uVar1 <= local_50) {
    uVar8 = uVar9 + 1;
    local_50 = local_50 - 0x10;
    if (uVar1 <= local_50) {
      uVar8 = uVar8 + (local_50 + uVar9 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  *param_1 = lVar4;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6650c FUN_147e6650c body=71 status=ok
// SIG undefined FUN_147e6650c(void)

void FUN_147e6650c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_141807e20(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 << 2);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 147e66554 FUN_147e66554 body=9 status=ok
// SIG undefined FUN_147e66554(void)

void FUN_147e66554(longlong param_1)

{
  FUN_147e6657c(param_1 + 0x10);
  return;
}



// FUNCTION 147e6655e FUN_147e6655e body=29 status=ok
// SIG undefined FUN_147e6655e(void)

undefined8 FUN_147e6655e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e6657c FUN_147e6657c body=227 status=ok
// SIG undefined FUN_147e6657c(void)

void FUN_147e6657c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aba0f00;
  FUN_147e47250(param_1 + 0x1e);
  FUN_147e6665f(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140298e51(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140937fd9(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_147e6668e(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140b25c50(param_1);
  return;
}



// FUNCTION 147e6665f FUN_147e6665f body=47 status=ok
// SIG undefined FUN_147e6665f(void)

void FUN_147e6665f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147e6668e FUN_147e6668e body=41 status=ok
// SIG undefined FUN_147e6668e(void)

void FUN_147e6668e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147e666b8(param_1);
    param_1 = param_1 + 0x1e0;
  }
  return;
}



// FUNCTION 147e666b8 FUN_147e666b8 body=94 status=ok
// SIG undefined FUN_147e666b8(void)

void FUN_147e666b8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_144b3f230();
  }
  FUN_144d329b0(param_1 + 0x198);
  if (*(char *)(param_1 + 0x194) == '\x01') {
    *(undefined1 *)(param_1 + 0x194) = 0;
  }
  FUN_147e4aaf0(param_1 + 0x160);
  FUN_147e4ab7c(param_1 + 0x130);
  FUN_147e3486c(param_1 + 0x80);
  return;
}



// FUNCTION 147e66716 FUN_147e66716 body=167 status=ok
// SIG undefined FUN_147e66716(void)

void FUN_147e66716(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147e66791;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147e66791;
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
LAB_147e66791:
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
                    /* WARNING: Could not recover jumptable at 0x000147e667b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147e667be FUN_147e667be body=9 status=ok
// SIG undefined FUN_147e667be(void)

void FUN_147e667be(longlong param_1)

{
  FUN_147e3cda8(param_1 + 0x10);
  return;
}



// FUNCTION 147e667c8 FUN_147e667c8 body=29 status=ok
// SIG undefined FUN_147e667c8(void)

undefined8 FUN_147e667c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e667e6 FUN_147e667e6 body=167 status=ok
// SIG undefined FUN_147e667e6(void)

void FUN_147e667e6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_147e66861;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_147e66861;
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
LAB_147e66861:
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
                    /* WARNING: Could not recover jumptable at 0x000147e66881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147e6688e FUN_147e6688e body=132 status=ok
// SIG undefined FUN_147e6688e(void)

void FUN_147e6688e(longlong param_1,int param_2)

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



// FUNCTION 147e66914 FUN_147e66914 body=81 status=ok
// SIG undefined FUN_147e66914(void)

void FUN_147e66914(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + (longlong)(int)param_2 * 8) != 0) {
    FUN_144b3f230();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar2) << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147e66966 FUN_147e66966 body=62 status=ok
// SIG undefined FUN_147e66966(void)

void FUN_147e66966(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e669a4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147e669a4 FUN_147e669a4 body=93 status=ok
// SIG undefined FUN_147e669a4(void)

ulonglong FUN_147e669a4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147e66a02 FUN_147e66a02 body=31 status=ok
// SIG undefined FUN_147e66a02(void)

undefined8 FUN_147e66a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e66a3e FUN_147e66a3e body=93 status=ok
// SIG undefined FUN_147e66a3e(void)

void FUN_147e66a3e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aba4760;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e66a9c FUN_147e66a9c body=126 status=ok
// SIG undefined FUN_147e66a9c(void)

void FUN_147e66a9c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aba4760;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e66b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e66b1a FUN_147e66b1a body=21 status=ok
// SIG undefined FUN_147e66b1a(void)

undefined8 FUN_147e66b1a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e66b30 FUN_147e66b30 body=29 status=ok
// SIG undefined FUN_147e66b30(void)

undefined8 FUN_147e66b30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e66b6a FUN_147e66b6a body=93 status=ok
// SIG undefined FUN_147e66b6a(void)

void FUN_147e66b6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba4810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e66bc8 FUN_147e66bc8 body=93 status=ok
// SIG undefined FUN_147e66bc8(void)

void FUN_147e66bc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba4810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147e66c26 FUN_147e66c26 body=126 status=ok
// SIG undefined FUN_147e66c26(void)

void FUN_147e66c26(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba4810;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e66c95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e66cb0 FUN_147e66cb0 body=21 status=ok
// SIG undefined FUN_147e66cb0(void)

undefined8 FUN_147e66cb0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147e66cc6 FUN_147e66cc6 body=107 status=ok
// SIG undefined FUN_147e66cc6(void)

/* WARNING: Removing unreachable block (ram,0x000147e66cf8) */
/* WARNING: Removing unreachable block (ram,0x000147e66cd4) */
/* WARNING: Removing unreachable block (ram,0x000147e66cea) */
/* WARNING: Removing unreachable block (ram,0x000147e66d03) */
/* WARNING: Removing unreachable block (ram,0x000147e66cec) */

void FUN_147e66cc6(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1cfa0;
  LOCK();
  UNLOCK();
  DAT_14cb1cfa0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    DAT_14cb1cfa8 = DAT_14cb1cfa8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    DAT_14cb1cfa8 = DAT_14cb1cfa8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e66d32 FUN_147e66d32 body=107 status=ok
// SIG undefined FUN_147e66d32(void)

/* WARNING: Removing unreachable block (ram,0x000147e66d64) */
/* WARNING: Removing unreachable block (ram,0x000147e66d40) */
/* WARNING: Removing unreachable block (ram,0x000147e66d56) */
/* WARNING: Removing unreachable block (ram,0x000147e66d6f) */
/* WARNING: Removing unreachable block (ram,0x000147e66d58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e66d32(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1cf90;
  LOCK();
  UNLOCK();
  DAT_14cb1cf90 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1cf98 = _DAT_14cb1cf98 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1cf98 = _DAT_14cb1cf98 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e66d9e FUN_147e66d9e body=141 status=ok
// SIG undefined FUN_147e66d9e(void)

void FUN_147e66d9e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  FUN_144aa17a4();
  lVar1 = FUN_14641ed10();
  if (lVar1 != 0) {
    FUN_14485c47a(param_1 + 8,lVar1);
    uVar3 = -*(int *)(lVar1 + 0x5c) & (*(int *)(lVar1 + 0x58) + *(int *)(lVar1 + 0x5c)) - 1U;
    puVar2 = (undefined8 *)FUN_14001cc68((longlong)(int)(uVar3 + (uVar3 == 0)),0);
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    lVar1 = *param_2;
    FUN_1479ed704(puVar2,lVar1);
    *puVar2 = &PTR_FUN_14ab90cd0;
    FUN_140298f1c(puVar2 + 0x3a,lVar1 + 0x6b8);
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  return;
}



// FUNCTION 147e66e46 FUN_147e66e46 body=29 status=ok
// SIG undefined FUN_147e66e46(void)

bool FUN_147e66e46(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e66e64 FUN_147e66e64 body=101 status=ok
// SIG undefined FUN_147e66e64(void)

void FUN_147e66e64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba4880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e66eca FUN_147e66eca body=101 status=ok
// SIG undefined FUN_147e66eca(void)

void FUN_147e66eca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a7feda0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba4880;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e66f30 FUN_147e66f30 body=134 status=ok
// SIG undefined FUN_147e66f30(void)

void FUN_147e66f30(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a7feda0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba4880;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e66fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e66fb6 FUN_147e66fb6 body=62 status=ok
// SIG undefined FUN_147e66fb6(void)

void FUN_147e66fb6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147e66ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147e66ffa FUN_147e66ffa body=29 status=ok
// SIG undefined FUN_147e66ffa(void)

bool FUN_147e66ffa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147e67018 FUN_147e67018 body=26 status=ok
// SIG undefined FUN_147e67018(void)

bool FUN_147e67018(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147e67032 FUN_147e67032 body=101 status=ok
// SIG undefined FUN_147e67032(void)

void FUN_147e67032(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aba48f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147e67098 FUN_147e67098 body=134 status=ok
// SIG undefined FUN_147e67098(void)

void FUN_147e67098(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aba48f0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147e6710f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147e6711e FUN_147e6711e body=143 status=ok
// SIG undefined FUN_147e6711e(void)

bool FUN_147e6711e(longlong param_1)

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
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e671ae FUN_147e671ae body=48 status=ok
// SIG undefined FUN_147e671ae(void)

void FUN_147e671ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 147e671de FUN_147e671de body=101 status=ok
// SIG undefined FUN_147e671de(void)

void FUN_147e671de(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x50 + *param_1);
  FUN_140d4acde(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147e67244 FUN_147e67244 body=62 status=ok
// SIG undefined FUN_147e67244(void)

void FUN_147e67244(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e67282(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 147e67282 FUN_147e67282 body=112 status=ok
// SIG undefined FUN_147e67282(void)

ulonglong FUN_147e67282(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147e672bc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_147e672bc:
  return param_2 & 0xffffffff;
}



// FUNCTION 147e672f2 FUN_147e672f2 body=48 status=ok
// SIG undefined FUN_147e672f2(void)

void FUN_147e672f2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147e67322 FUN_147e67322 body=107 status=ok
// SIG undefined FUN_147e67322(void)

/* WARNING: Removing unreachable block (ram,0x000147e67354) */
/* WARNING: Removing unreachable block (ram,0x000147e67330) */
/* WARNING: Removing unreachable block (ram,0x000147e67346) */
/* WARNING: Removing unreachable block (ram,0x000147e6735f) */
/* WARNING: Removing unreachable block (ram,0x000147e67348) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147e67322(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb1cff0;
  LOCK();
  UNLOCK();
  DAT_14cb1cff0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb1cff8 = _DAT_14cb1cff8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb1cff8 = _DAT_14cb1cff8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147e673e4 FUN_147e673e4 body=132 status=ok
// SIG undefined FUN_147e673e4(void)

void FUN_147e673e4(longlong param_1,int param_2)

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



// FUNCTION 147e6746a FUN_147e6746a body=117 status=ok
// SIG undefined FUN_147e6746a(void)

void FUN_147e6746a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = (ulonglong)uVar1;
    }
  }
  else {
    uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
  }
  iVar2 = FUN_144a3809e(uVar3,1);
  iVar4 = 0x7fffffff;
  if ((int)uVar1 <= iVar2) {
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0xc) = iVar4;
  FUN_1446f8d3c(param_1,0,iVar4,1,1);
  return;
}



// FUNCTION 147e674e0 FUN_147e674e0 body=48 status=ok
// SIG undefined FUN_147e674e0(void)

void FUN_147e674e0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 147e67510 FUN_147e67510 body=62 status=ok
// SIG undefined FUN_147e67510(void)

void FUN_147e67510(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147e6754e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 147e6754e FUN_147e6754e body=112 status=ok
// SIG undefined FUN_147e6754e(void)

ulonglong FUN_147e6754e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147e67588;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_147e67588:
  return param_2 & 0xffffffff;
}



// FUNCTION 147e675be FUN_147e675be body=114 status=ok
// SIG undefined FUN_147e675be(void)

void FUN_147e675be(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 147e67630 FUN_147e67630 body=48 status=ok
// SIG undefined FUN_147e67630(void)

void FUN_147e67630(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 147e67660 FUN_147e67660 body=48 status=ok
// SIG undefined FUN_147e67660(void)

void FUN_147e67660(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147e67690 FUN_147e67690 body=151 status=ok
// SIG undefined FUN_147e67690(void)

longlong FUN_147e67690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_14c6e6040;
  local_30 = 0;
  FUN_144b464e0(param_1,local_28,param_2,param_3);
  if (local_28[0] != 0) {
    lVar1 = FUN_147e67728(local_28);
    if (lVar1 != 0) goto LAB_147e676f5;
    FUN_144becfe0(local_28,3,1);
  }
  lVar1 = 0;
LAB_147e676f5:
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e67728 FUN_147e67728 body=112 status=ok
// SIG undefined FUN_147e67728(void)

undefined8 FUN_147e67728(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [36];
  byte local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar2 = *param_1;
    cVar3 = FUN_144b45dd0(lVar1,&DAT_14c6e6040);
    if (cVar3 != '\0') {
      FUN_144b45d50(lVar1,local_24);
      uVar4 = 0;
      if ((local_24[0] & 8) == 0) {
        uVar4 = uVar2;
      }
      goto LAB_147e67776;
    }
  }
  uVar4 = 0;
LAB_147e67776:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6779a FUN_147e6779a body=133 status=ok
// SIG undefined FUN_147e6779a(void)

void FUN_147e6779a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x3c) = (int)uVar4;
    FUN_14096d7a2(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147e67820 FUN_147e67820 body=126 status=ok
// SIG undefined FUN_147e67820(void)

ulonglong FUN_147e67820(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = (longlong)*(int *)(param_1[3] + 8) / (longlong)param_2 & 0xffffffff;
  iVar2 = *(int *)(param_1[3] + 8) % param_2;
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,&local_38,0,2);
    local_38 = 0;
    uStack_30 = 0;
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,&local_38,(longlong)(param_2 - iVar2));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e678a0 FUN_147e678a0 body=246 status=ok
// SIG undefined FUN_147e678a0(void)

undefined8 FUN_147e678a0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  if (param_3 == (longlong *)0x0) {
    local_48 = 0;
    lStack_40 = 0;
  }
  else if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    FUN_144beec10(&local_48,param_3,&DAT_14c6e6040);
  }
  else {
    (**(code **)*param_3)(param_3,&local_48);
  }
  local_60 = local_48;
  local_58 = lStack_40;
  if (lStack_40 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144befdb0();
    if ((uVar1 & 1) != 0) {
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
    }
  }
  local_50 = uVar1;
  FUN_144bfe540(param_1,param_2,&local_60,param_4);
  if ((local_50 & 1) != 0) {
    FUN_144be6b30(local_50 & 0xfffffffffffffffe);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e67998 FUN_147e67998 body=71 status=ok
// SIG undefined FUN_147e67998(void)

void FUN_147e67998(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_144beaea0(*param_2);
  if (lVar2 != 0) {
    FUN_144b3d910(lVar2);
  }
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 147e679e0 FUN_147e679e0 body=98 status=ok
// SIG undefined FUN_147e679e0(void)

void FUN_147e679e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147e67a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e67a42 FUN_147e67a42 body=65 status=ok
// SIG undefined FUN_147e67a42(void)

undefined8 * FUN_147e67a42(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4a00;
  if (param_1[9] != 0) {
    FUN_144b3f230();
  }
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147e67a92 FUN_147e67a92 body=86 status=ok
// SIG undefined FUN_147e67a92(void)

void FUN_147e67a92(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143829fca(param_1 + 0x15);
  if (param_1[0x15] != 0) {
    FUN_144b3f230();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147e67ade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147e67ae8 FUN_147e67ae8 body=114 status=ok
// SIG undefined FUN_147e67ae8(void)

void FUN_147e67ae8(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 147e67b5a FUN_147e67b5a body=151 status=ok
// SIG undefined FUN_147e67b5a(void)

longlong FUN_147e67b5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &DAT_14c6ec4a0;
  local_30 = 0;
  FUN_144b464e0(param_1,local_28,param_2,param_3);
  if (local_28[0] != 0) {
    lVar1 = FUN_147e67bf2(local_28);
    if (lVar1 != 0) goto LAB_147e67bbf;
    FUN_144becfe0(local_28,3,1);
  }
  lVar1 = 0;
LAB_147e67bbf:
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e67bf2 FUN_147e67bf2 body=112 status=ok
// SIG undefined FUN_147e67bf2(void)

undefined8 FUN_147e67bf2(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [36];
  byte local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    uVar2 = *param_1;
    cVar3 = FUN_144b45dd0(lVar1,&DAT_14c6ec4a0);
    if (cVar3 != '\0') {
      FUN_144b45d50(lVar1,local_24);
      uVar4 = 0;
      if ((local_24[0] & 8) == 0) {
        uVar4 = uVar2;
      }
      goto LAB_147e67c40;
    }
  }
  uVar4 = 0;
LAB_147e67c40:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e67c64 FUN_147e67c64 body=246 status=ok
// SIG undefined FUN_147e67c64(void)

undefined8 FUN_147e67c64(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  if (param_3 == (longlong *)0x0) {
    local_48 = 0;
    lStack_40 = 0;
  }
  else if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    FUN_144beec10(&local_48,param_3,&DAT_14c6ec4a0);
  }
  else {
    (**(code **)*param_3)(param_3,&local_48);
  }
  local_60 = local_48;
  local_58 = lStack_40;
  if (lStack_40 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144befdb0();
    if ((uVar1 & 1) != 0) {
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
    }
  }
  local_50 = uVar1;
  FUN_144bfe540(param_1,param_2,&local_60,param_4);
  if ((local_50 & 1) != 0) {
    FUN_144be6b30(local_50 & 0xfffffffffffffffe);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e67d5c FUN_147e67d5c body=246 status=ok
// SIG undefined FUN_147e67d5c(void)

undefined8 FUN_147e67d5c(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  if (param_3 == (longlong *)0x0) {
    local_48 = 0;
    lStack_40 = 0;
  }
  else if ((undefined8 *)*param_3 == (undefined8 *)0x0) {
    FUN_144beec10(&local_48,param_3,&DAT_14c6eb650);
  }
  else {
    (**(code **)*param_3)(param_3,&local_48);
  }
  local_60 = local_48;
  local_58 = lStack_40;
  if (lStack_40 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144befdb0();
    if ((uVar1 & 1) != 0) {
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
    }
  }
  local_50 = uVar1;
  FUN_144bfe540(param_1,param_2,&local_60,param_4);
  if ((local_50 & 1) != 0) {
    FUN_144be6b30(local_50 & 0xfffffffffffffffe);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e67e54 FUN_147e67e54 body=98 status=ok
// SIG undefined FUN_147e67e54(void)

void FUN_147e67e54(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147e67eaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e67eb6 FUN_147e67eb6 body=98 status=ok
// SIG undefined FUN_147e67eb6(void)

void FUN_147e67eb6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147e67f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147e67f18 FUN_147e67f18 body=104 status=ok
// SIG undefined FUN_147e67f18(void)

void FUN_147e67f18(longlong *param_1,undefined **param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = (int)param_2;
  uVar3 = (ulonglong)param_2 & 0xffffffff;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
    param_2 = &PTR_vftable_14c6e47a0;
    FUN_147e67f80(param_1,&PTR_vftable_14c6e47a0,uVar3);
  }
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < iVar2) {
    *(int *)(param_1 + 1) = iVar2;
    memset((void *)((longlong)(int)uVar1 + *param_1),
           (int)CONCAT71((int7)((ulonglong)param_2 >> 8),*param_3),(ulonglong)(~uVar1 + iVar2) + 1);
    return;
  }
  if (iVar2 < (int)uVar1) {
    *(int *)(param_1 + 1) = iVar2;
  }
  return;
}



// FUNCTION 147e67f80 FUN_147e67f80 body=265 status=ok
// SIG undefined FUN_147e67f80(void)

void FUN_147e67f80(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar8 = (ulonglong)(uVar2 * 2);
  if (uVar8 <= param_3) {
    uVar8 = param_3;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,uVar8,&local_48);
  lVar4 = param_1[1];
  if (0 < (int)lVar4) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      *(undefined1 *)(lVar5 + lVar6) = *(undefined1 *)(lVar3 + lVar6);
      lVar6 = lVar6 + 1;
    } while ((int)lVar4 != (int)lVar6);
  }
  uVar7 = uVar8;
  if ((uVar8 < local_48) &&
     (uVar1 = local_48 - 1, uVar7 = local_48, local_48 = uVar1, uVar1 <= uVar8)) {
    uVar7 = uVar8 + 1;
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2 & 0x7fffffff);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  *param_1 = lVar5;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e6808a FUN_147e6808a body=83 status=ok
// SIG undefined FUN_147e6808a(void)

undefined8 * FUN_147e6808a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4a80;
  FUN_147e680de();
  FUN_147e68198(param_1 + 0x14);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  FUN_144bdb3c0(param_1);
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e680de FUN_147e680de body=185 status=ok
// SIG undefined FUN_147e680de(void)

void FUN_147e680de(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144b3d420(local_38);
  local_40 = local_38[0];
  if (local_38[0] != (longlong *)0x0) {
    do {
      plVar1 = local_40;
      if ((((*local_40 != 0) && (lVar2 = FUN_147e6849e(param_1 + 0xa0), lVar2 != 0)) &&
          (-1 < (int)(((int)lVar2 - *(int *)(param_1 + 0xb0)) * 0x20000000 | *(uint *)(lVar2 + 4))))
         && (plVar1[0x7c] != 0)) {
        FUN_144bea3b0();
      }
      FUN_144b3d450(&local_40);
    } while (local_40 != (longlong *)0x0);
  }
  FUN_144b3d410(local_38);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147e68198 FUN_147e68198 body=117 status=ok
// SIG undefined FUN_147e68198(void)

void FUN_147e68198(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,(longlong)*(int *)((longlong)param_1 + 0xc) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 147e6820e FUN_147e6820e body=183 status=ok
// SIG undefined FUN_147e6820e(void)

longlong * FUN_147e6820e(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_68 [40];
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147e682c6(param_1,local_40);
  iVar3 = local_40[0];
  lVar2 = param_1[1];
  if (local_40[0] == (int)lVar2) {
    iVar1 = local_40[0] + 1;
    iVar4 = local_40[0];
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) <= local_40[0]) {
      FUN_147e68374(param_1,&PTR_vftable_14c6e47a0,iVar1);
      iVar4 = (int)param_1[1];
    }
    *(undefined8 *)(*param_1 + (longlong)iVar4 * 8) = *param_3;
    *(int *)(param_1 + 1) = iVar1;
  }
  *param_2 = (longlong)local_40[0] * 8 + *param_1;
  *(bool *)(param_2 + 1) = iVar3 == (int)lVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e682c6 FUN_147e682c6 body=173 status=ok
// SIG undefined FUN_147e682c6(void)

uint * FUN_147e682c6(longlong *param_1,uint *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  int iVar5;
  
  FUN_147e544b0(param_1 + 2,(int)param_1[1]);
  lVar2 = *param_3;
  uVar3 = (int)lVar2 * -0x61c8864f;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | (int)lVar2 * -0x4f000000
  ;
  iVar5 = (int)((ulonglong)lVar2 >> 0x20);
  uVar4 = iVar5 * -0x61c8864f;
  uVar4 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | iVar5 * -0x4f000000;
  uVar4 = uVar4 * 0x40 + (uVar3 >> 2) + uVar3 + 0x9e3779b9 ^ uVar4;
  uVar6 = (ulonglong)(*(uint *)(param_1 + 3) & uVar4);
  while( true ) {
    puVar1 = (uint *)(param_1[2] + uVar6 * 8);
    uVar3 = puVar1[1];
    if ((int)uVar3 < 0) break;
    if ((*puVar1 == uVar4) && (*(longlong *)(*param_1 + (ulonglong)uVar3 * 8) == lVar2))
    goto LAB_147e68362;
    uVar6 = uVar6 + 1 & (longlong)(int)*(uint *)(param_1 + 3);
  }
  uVar3 = *(uint *)(param_1 + 1);
  *puVar1 = uVar4;
  puVar1[1] = uVar3;
  uVar6 = (ulonglong)((longlong)puVar1 - param_1[2]) >> 3;
  uVar3 = *(uint *)(param_1 + 1);
LAB_147e68362:
  *param_2 = uVar3;
  param_2[1] = (uint)uVar6;
  return param_2;
}



// FUNCTION 147e68374 FUN_147e68374 body=296 status=ok
// SIG undefined FUN_147e68374(void)

void FUN_147e68374(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)(uVar2 * 2);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 8,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar5 * 8 + 8;
  uVar4 = uVar5;
  if (uVar1 <= local_50) {
    uVar4 = uVar5 + 1;
    local_50 = local_50 - 8;
    if (uVar1 <= local_50) {
      uVar4 = uVar4 + (local_50 + uVar5 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 3);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6849e FUN_147e6849e body=124 status=ok
// SIG undefined FUN_147e6849e(void)

uint * FUN_147e6849e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_2;
  uVar3 = (int)lVar1 * -0x61c8864f;
  uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  uVar6 = iVar5 * -0x61c8864f;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar5 * -0x4f000000;
  uVar6 = (uVar3 >> 2) + uVar3 + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6;
  lVar2 = param_1[2];
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar3 = *(uint *)(lVar2 + 4 + uVar7 * 8);
  if (-1 < (int)uVar3) {
    puVar4 = (uint *)(lVar2 + uVar7 * 8);
    do {
      if ((*puVar4 == uVar6) && (*(longlong *)(*param_1 + (ulonglong)uVar3 * 8) == lVar1)) {
        return puVar4;
      }
      uVar7 = uVar7 + 1 & (longlong)(int)*(uint *)(param_1 + 3);
      puVar4 = (uint *)(lVar2 + uVar7 * 8);
      uVar3 = puVar4[1];
    } while (-1 < (int)uVar3);
  }
  return (uint *)0x0;
}



// FUNCTION 147e6851a FUN_147e6851a body=120 status=ok
// SIG undefined FUN_147e6851a(void)

void FUN_147e6851a(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar1 != (longlong *)0x0) {
    *param_1 = (ulonglong)plVar1 | 1;
    puVar2 = param_1;
    do {
      plVar3 = (longlong *)(plVar1[1] & 0xfffffffffffffffc);
      if ((plVar1[1] & 3U) == 0) {
        puVar2 = (ulonglong *)(plVar1 + 1);
        (*(code *)((undefined8 *)*plVar1)[3])(plVar1,param_2,param_3);
      }
      else {
        (**(code **)*plVar1)(plVar1,1);
        *puVar2 = (ulonglong)((uint)*puVar2 & 3) | (ulonglong)plVar3;
      }
      plVar1 = plVar3;
    } while (plVar3 != (longlong *)0x0);
    *(byte *)param_1 = (byte)*param_1 & 0xfc;
  }
  return;
}



// FUNCTION 147e68592 FUN_147e68592 body=98 status=ok
// SIG undefined FUN_147e68592(void)

undefined8 * FUN_147e68592(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba4ab0;
  param_1[4] = &PTR_FUN_14aba4ad0;
  if (param_1[6] != 0) {
    FUN_144b3f230();
  }
  FUN_144be5f30(param_1 + 4);
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 147e685fe FUN_147e685fe body=327 status=ok
// SIG undefined FUN_147e685fe(void)

void FUN_147e685fe(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar2 = *(longlong *)(lVar1 + 0xf0);
  if (lVar2 == 0) {
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar2;
  }
  lVar1 = *(longlong *)(lVar2 + 0x3e0);
  if (lVar1 != 0) {
    local_38 = "TtHavokNavAsyncProcessing";
    local_30 = "";
    FUN_144b3f370(lVar1);
  }
  FUN_144c2d070(*(undefined8 *)(param_1 + 8),&local_38,*(undefined8 *)(param_1 + 0x10));
  if (local_38 != (char *)0x0) {
    do {
      FUN_144be90e0(0xc3675b52);
      (**(code **)(*(longlong *)*param_2 + 0x98))((longlong *)*param_2,local_38,0);
      FUN_144be90e0(0x6eda0fdf);
      if (local_38 != (char *)0x0) {
        FUN_144b3f230();
      }
      FUN_144c2d070(*(undefined8 *)(param_1 + 8),&local_38);
    } while (local_38 != (char *)0x0);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_144be90e0(0x7c12ccac);
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e6874e FUN_147e6874e body=120 status=ok
// SIG undefined FUN_147e6874e(void)

void FUN_147e6874e(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar1 != (longlong *)0x0) {
    *param_1 = (ulonglong)plVar1 | 1;
    puVar2 = param_1;
    do {
      plVar3 = (longlong *)(plVar1[1] & 0xfffffffffffffffc);
      if ((plVar1[1] & 3U) == 0) {
        puVar2 = (ulonglong *)(plVar1 + 1);
        (*(code *)((undefined8 *)*plVar1)[3])(plVar1,param_2,param_3);
      }
      else {
        (**(code **)*plVar1)(plVar1,1);
        *puVar2 = (ulonglong)((uint)*puVar2 & 3) | (ulonglong)plVar3;
      }
      plVar1 = plVar3;
    } while (plVar3 != (longlong *)0x0);
    *(byte *)param_1 = (byte)*param_1 & 0xfc;
  }
  return;
}



// FUNCTION 147e687c6 FUN_147e687c6 body=147 status=ok
// SIG undefined FUN_147e687c6(void)

void FUN_147e687c6(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147e6885a FUN_147e6885a body=48 status=ok
// SIG undefined FUN_147e6885a(void)

void FUN_147e6885a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x60,8);
  }
  return;
}



// FUNCTION 147e6888a FUN_147e6888a body=48 status=ok
// SIG undefined FUN_147e6888a(void)

void FUN_147e6888a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 147e688ba FUN_147e688ba body=155 status=ok
// SIG undefined FUN_147e688ba(void)

ulonglong FUN_147e688ba(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            return puVar1[1];
          }
          return 0;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147e68956 FUN_147e68956 body=264 status=ok
// SIG undefined FUN_147e68956(void)

void FUN_147e68956(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((0 < *(int *)(param_1[2] + 4 + (longlong)(int)param_1[6] * 0xc)) &&
     (*(int *)(param_1[2] + (longlong)(int)param_1[6] * 0xc) != -1)) {
    if ((char)param_1[7] == '\x01') {
      local_78 = FUN_147e6bd5e(param_1[4]);
      local_70 = param_1[4];
      local_68 = param_1[5];
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      FUN_147e6be6c(param_2,&local_78);
      FUN_1409f518e(&local_78);
    }
    else {
      FUN_144bfd270(&local_78);
      local_40 = FUN_147e6bee4(&local_78,
                               (longlong)*(int *)(param_1[2] + (longlong)(int)param_1[6] * 0xc) +
                               *param_1,(longlong)
                                        *(int *)(param_1[2] + 4 + (longlong)(int)param_1[6] * 0xc));
      local_38 = 0;
      uStack_30 = 0;
      FUN_147e6be6c(param_2,&local_40);
      FUN_1409f518e(&local_40);
      FUN_144bfd310(&local_78);
    }
    *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e68a60 FUN_147e68a60 body=290 status=ok
// SIG undefined FUN_147e68a60(void)

void FUN_147e68a60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78 [5];
  undefined4 local_50;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x70)) {
    FUN_147e67820(param_1 + 0x18,0x10);
    iVar3 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
  }
  if (*param_2 != 0) {
    FUN_144bfe310(local_78 + 4);
    uVar2 = FUN_144bfe340(local_78 + 4,*(undefined8 *)(param_1 + 0x68),0);
    local_80 = param_1 + 0x18;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    FUN_147e67998(local_78);
    FUN_147e6c06e(uVar2,&local_34,*param_2,local_78);
    if (local_78[0] != 0) {
      FUN_144b3f230();
    }
    FUN_144bfe330(local_78 + 4);
    if (-1 < local_34) {
      FUN_1437ef51a(local_78 + 4,iVar3,*(int *)(param_1 + 0x10) - iVar3,0);
      iVar3 = *(int *)(param_1 + 0x70);
      lVar1 = *(longlong *)(param_1 + 0x48);
      *(undefined4 *)(lVar1 + 8 + (longlong)iVar3 * 0xc) = local_50;
      *(longlong *)(lVar1 + (longlong)iVar3 * 0xc) = local_78[4];
    }
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147e68b84 FUN_147e68b84 body=231 status=ok
// SIG undefined FUN_147e68b84(void)

undefined8 * FUN_147e68b84(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0x78;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_38,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"hkaiBalconyVaultAnalyzer");
  }
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = 0x3fc90fdb3fbc430e;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  *puVar1 = &PTR_LAB_14aba51b0;
  puVar1[6] = 0x3f0000003f000000;
  puVar1[7] = 0x3f8000003fc00000;
  puVar1[8] = 0x4040000040a00000;
  puVar1[9] = 0x3f0000003fc00000;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0x3f800000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  FUN_147e68c6c(param_1,puVar1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


