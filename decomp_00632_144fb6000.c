// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144fb6000 FUN_144fb6000 body=413 status=ok
// SIG undefined FUN_144fb6000(void)

ulonglong FUN_144fb6000(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong local_res8;
  
  uVar13 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar13 * 2;
  uVar9 = param_3;
  if (param_3 < uVar10) {
    uVar9 = uVar10;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x60,&local_res8);
  puVar11 = (undefined4 *)*param_1;
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  plVar8 = (longlong *)(puVar11 + 0x14);
  if (0 < (int)*(uint *)(param_1 + 1)) {
    plVar6 = (longlong *)(lVar5 + 0x40);
    plVar7 = plVar8;
    uVar12 = uVar10;
    do {
      if (plVar6 + -8 != (longlong *)0x0) {
        *(undefined4 *)(plVar6 + -8) = *puVar11;
        *(undefined4 *)((longlong)plVar6 + -0x3c) = *(undefined4 *)((longlong)plVar7 + -0x4c);
        *(char *)(plVar6 + -7) = (char)plVar7[-9];
        lVar4 = plVar7[-7];
        plVar6[-6] = plVar7[-8];
        plVar6[-5] = lVar4;
        lVar4 = plVar7[-5];
        plVar6[-4] = plVar7[-6];
        plVar6[-3] = lVar4;
        uVar2 = *(undefined4 *)((longlong)plVar7 + -0x1c);
        lVar4 = plVar7[-3];
        uVar3 = *(undefined4 *)((longlong)plVar7 + -0x14);
        *(int *)(plVar6 + -2) = (int)plVar7[-4];
        *(undefined4 *)((longlong)plVar6 + -0xc) = uVar2;
        *(int *)(plVar6 + -1) = (int)lVar4;
        *(undefined4 *)((longlong)plVar6 + -4) = uVar3;
        lVar4 = plVar7[-1];
        *plVar6 = plVar7[-2];
        plVar6[1] = lVar4;
        plVar6[2] = *plVar7;
        *plVar7 = 0;
      }
      plVar6 = plVar6 + 0xc;
      puVar11 = puVar11 + 0x18;
      plVar7 = plVar7 + 0xc;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    do {
      if (*plVar8 != 0) {
        FUN_144b3f230();
      }
      plVar8 = plVar8 + 0xc;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar9 * 0x60 + 0x60;
  uVar12 = uVar9;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x60;
    uVar12 = uVar9 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x60;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar12 = uVar12 + uVar9 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar13 * 0x60);
  }
  *param_1 = lVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar12;
  return uVar10;
}



// FUNCTION 144fb61a0 FUN_144fb61a0 body=163 status=ok
// SIG undefined FUN_144fb61a0(void)

void FUN_144fb61a0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  
  pfVar8 = (float *)((longlong)(int)param_2 * 0x50 + *param_1);
  pfVar7 = (float *)((longlong)(int)((ulonglong)param_2 >> 0x20) * 0x50 + param_1[2]);
  pfVar6 = pfVar8 + 8;
  if (*(char *)(pfVar8 + 0x10) == '\0') {
    pfVar6 = pfVar8;
  }
  pfVar4 = pfVar7 + 8;
  if (*(char *)(pfVar7 + 0x10) == '\0') {
    pfVar4 = pfVar7;
  }
  auVar1._4_4_ = -(uint)(pfVar4[1] <= pfVar6[5] && pfVar6[1] <= pfVar4[5]);
  auVar1._0_4_ = -(uint)(*pfVar4 <= pfVar6[4] && *pfVar6 <= pfVar4[4]);
  auVar1._8_4_ = -(uint)(pfVar4[2] <= pfVar6[6] && pfVar6[2] <= pfVar4[6]);
  auVar1._12_4_ = -(uint)(pfVar4[3] <= pfVar6[7] && pfVar6[3] <= pfVar4[7]);
  uVar5 = movmskps((int)pfVar6,auVar1);
  iVar9 = -(uint)(*pfVar7 <= pfVar8[4] && *pfVar8 <= pfVar7[4]);
  auVar2._4_4_ = -(uint)(pfVar7[1] <= pfVar8[5] && pfVar8[1] <= pfVar7[5]);
  auVar2._0_4_ = iVar9;
  auVar2._8_4_ = -(uint)(pfVar7[2] <= pfVar8[6] && pfVar8[2] <= pfVar7[6]);
  auVar2._12_4_ = -(uint)(pfVar7[3] <= pfVar8[7] && pfVar8[3] <= pfVar7[7]);
  uVar3 = movmskps((int)pfVar4,auVar2);
  if (((byte)uVar3 & 7) == 7) {
    if ((uVar5 & 7) != 7) {
      FUN_144fb6250(param_1,iVar9,param_3);
      return;
    }
  }
  else if ((uVar5 & 7) == 7) {
    FUN_144fb6300(param_1,iVar9,param_3);
    return;
  }
  return;
}



// FUNCTION 144fb6250 FUN_144fb6250 body=166 status=ok
// SIG undefined FUN_144fb6250(void)

void FUN_144fb6250(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iStackX_14;
  
  iVar3 = *(int *)(param_1 + 0x68);
  uVar5 = 0;
  if (0 < iVar3) {
    piVar4 = *(int **)(param_1 + 0x60);
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    uVar7 = uVar5;
    while ((iVar6 = (int)uVar7, *piVar4 != (int)param_2 || (piVar4[1] != iStackX_14))) {
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 2;
      if ((longlong)iVar3 <= (longlong)uVar5) {
        return;
      }
    }
    if (iVar6 != -1) {
      *(int *)(param_1 + 0x68) = iVar3 + -1;
      if (iVar3 + -1 != iVar6) {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + ((longlong)iVar3 + -1) * 8);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar6 * 8);
        if ((puVar2 != puVar1) && (puVar2 != (undefined8 *)0x0)) {
          *puVar2 = *puVar1;
        }
      }
      FUN_144fb2700(*param_3,uVar7);
      FUN_144fb2910(*param_3,uVar7);
    }
  }
  return;
}



// FUNCTION 144fb6300 FUN_144fb6300 body=113 status=ok
// SIG undefined FUN_144fb6300(void)

void FUN_144fb6300(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  
  FUN_144fb25e0(*param_3,param_2,param_2 >> 0x20);
  iVar2 = *(int *)(param_1 + 0x68) + 1;
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar2) {
    FUN_144fb6a20(param_1 + 0x60,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x68) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(param_1 + 0x68) = iVar2;
  return;
}



// FUNCTION 144fb6380 FUN_144fb6380 body=363 status=ok
// SIG undefined FUN_144fb6380(void)

void FUN_144fb6380(longlong param_1,uint param_2,uint param_3,undefined1 param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint local_res10;
  
  uVar5 = (ulonglong)(int)param_2;
  uVar7 = uVar5;
  local_res10 = param_2;
  do {
    lVar10 = (longlong)(int)param_3;
    uVar9 = uVar5 & 0xffffffff;
    iVar1 = *(int *)(param_1 + ((longlong)(int)((int)uVar5 + param_3) >> 1) * 4);
    uVar4 = param_3;
    do {
      *param_5 = *param_5 + 0xe6afc;
      uVar6 = (uint)uVar9;
      if (*param_5 < 0xe6afc) {
        FUN_144be90e0(0xa56c5f8);
      }
      iVar2 = *(int *)(param_1 + uVar7 * 4);
      uVar8 = uVar6;
      while (iVar2 < iVar1) {
        uVar7 = uVar7 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        iVar2 = *(int *)(param_1 + uVar7 * 4);
      }
      uVar6 = (uVar8 - uVar6) * 0xd1b71;
      *param_5 = *param_5 + uVar6;
      if (*param_5 < uVar6) {
        FUN_144be90e0(0xa56c5f8);
      }
      *param_5 = *param_5 + 0xe6afc;
      if (*param_5 < 0xe6afc) {
        FUN_144be90e0(0xa56c5f8);
      }
      iVar2 = *(int *)(param_1 + lVar10 * 4);
      uVar6 = uVar4;
      while (iVar1 < iVar2) {
        lVar10 = lVar10 + -1;
        uVar6 = uVar6 - 1;
        iVar2 = *(int *)(param_1 + lVar10 * 4);
      }
      uVar4 = (uVar4 - uVar6) * 0xd1b71;
      *param_5 = *param_5 + uVar4;
      if (*param_5 < uVar4) {
        FUN_144be90e0(0xa56c5f8);
      }
      if ((int)uVar6 < (int)uVar8) break;
      if (uVar6 != uVar8) {
        uVar3 = *(undefined4 *)(param_1 + lVar10 * 4);
        *(undefined4 *)(param_1 + lVar10 * 4) = *(undefined4 *)(param_1 + uVar7 * 4);
        *(undefined4 *)(param_1 + uVar7 * 4) = uVar3;
      }
      uVar6 = uVar6 - 1;
      lVar10 = lVar10 + -1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar7 = uVar7 + 1;
      uVar4 = uVar6;
    } while ((int)uVar8 <= (int)uVar6);
    if ((int)local_res10 < (int)uVar6) {
      FUN_144fb6380(param_1,local_res10,uVar6,param_4,param_5);
    }
    if ((int)param_3 <= (int)uVar8) {
      return;
    }
    uVar5 = (ulonglong)uVar8;
    local_res10 = uVar8;
  } while( true );
}



// FUNCTION 144fb64f0 FUN_144fb64f0 body=235 status=ok
// SIG undefined FUN_144fb64f0(void)

void FUN_144fb64f0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144fb65e0 FUN_144fb65e0 body=326 status=ok
// SIG undefined FUN_144fb65e0(void)

ulonglong FUN_144fb65e0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x50,&local_res8);
  puVar8 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar7 = (undefined8 *)(lVar6 + 0x10);
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar7 + -2 != (undefined8 *)0x0) {
        uVar5 = puVar8[1];
        puVar7[-2] = *puVar8;
        puVar7[-1] = uVar5;
        uVar5 = puVar8[3];
        *puVar7 = puVar8[2];
        puVar7[1] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar8 + 0x24);
        uVar3 = *(undefined4 *)(puVar8 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar8 + 0x2c);
        *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar8 + 4);
        *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar4;
        uVar5 = puVar8[7];
        puVar7[4] = puVar8[6];
        puVar7[5] = uVar5;
        *(undefined1 *)(puVar7 + 6) = *(undefined1 *)(puVar8 + 8);
        *(undefined4 *)((longlong)puVar7 + 0x34) = *(undefined4 *)((longlong)puVar8 + 0x44);
      }
      puVar7 = puVar7 + 10;
      puVar8 = puVar8 + 10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar9 * 0x50 + 0x50;
  uVar10 = uVar9;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x50;
    uVar10 = uVar9 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = local_res8 + uVar9 * -0x50;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar9;
      uVar11 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar10 = uVar10 + uVar9 / 0x50;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x50);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 144fb6730 FUN_144fb6730 body=269 status=ok
// SIG undefined FUN_144fb6730(void)

void FUN_144fb6730(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144fb6840 FUN_144fb6840 body=258 status=ok
// SIG undefined FUN_144fb6840(void)

void FUN_144fb6840(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
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
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144fb6950 FUN_144fb6950 body=206 status=ok
// SIG undefined FUN_144fb6950(void)

void FUN_144fb6950(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
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
    uVar1 = *(uint *)(param_1 + ((longlong)((int)uVar7 + param_3) >> 1) * 4);
    uVar5 = (longlong)param_3;
    iVar4 = param_3;
    do {
      uVar8 = (uint)uVar9;
      uVar2 = *(uint *)(param_1 + uVar6 * 4);
      while (uVar2 < uVar1) {
        uVar6 = uVar6 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar2 = *(uint *)(param_1 + uVar6 * 4);
      }
      uVar2 = *(uint *)(param_1 + uVar5 * 4);
      while (uVar1 < uVar2) {
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        uVar2 = *(uint *)(param_1 + uVar5 * 4);
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
      FUN_144fb6950(param_1,uVar7 & 0xffffffff,iVar4,param_4);
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 144fb6a20 FUN_144fb6a20 body=259 status=ok
// SIG undefined FUN_144fb6a20(void)

void FUN_144fb6a20(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
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
  puVar1 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
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
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144fb6b30 FUN_144fb6b30 body=175 status=ok
// SIG undefined FUN_144fb6b30(void)

void FUN_144fb6b30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar1 = *param_1;
  for (lVar2 = lVar1 + (longlong)(int)param_1[1] * 0x28; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    FUN_144c914e0(lVar2 + -0x20);
  }
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



// FUNCTION 144fb6be0 FUN_144fb6be0 body=107 status=ok
// SIG undefined FUN_144fb6be0(void)

void FUN_144fb6be0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 6);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 6);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144fb6c50 FUN_144fb6c50 body=103 status=ok
// SIG undefined FUN_144fb6c50(void)

void FUN_144fb6c50(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144fb6cc0 FUN_144fb6cc0 body=103 status=ok
// SIG undefined FUN_144fb6cc0(void)

void FUN_144fb6cc0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 3);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144fb6d30 FUN_144fb6d30 body=324 status=ok
// SIG undefined FUN_144fb6d30(void)

void FUN_144fb6d30(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x48),
               (ulonglong)(*(uint *)(param_1 + 0x54) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x38),
               (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 6);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 144fb6e80 FUN_144fb6e80 body=374 status=ok
// SIG undefined FUN_144fb6e80(void)

undefined8 * FUN_144fb6e80(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  uVar4 = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  *param_1 = hkaiNavMeshCutter::vftable;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_144b469b0(param_1 + 0x18);
  param_1[0x1f] = 0;
  param_1[0x20] = 0x38d1b717;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3a83126f;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x3f000000;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  uVar2 = FUN_144b3d480();
  param_1[0x26] = uVar2;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80000000;
  uVar2 = FUN_144b3d480();
  param_1[0x2a] = uVar2;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  FUN_144caeba0(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x22) = 1;
  local_res8 = 0x68;
  puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar3,"hkaiModifiedSections");
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    uVar4 = FUN_144faef50(puVar3);
  }
  lVar1 = param_1[0x2c];
  param_1[0x2c] = uVar4;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144fb7000 FUN_144fb7000 body=236 status=ok
// SIG undefined FUN_144fb7000(void)

void FUN_144fb7000(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = hkaiNavMeshCutter::vftable;
  if (param_1[0x2c] != 0) {
    FUN_144b3f230();
  }
  FUN_144fbab00(param_1 + 0x28);
  FUN_144fb6b30(param_1 + 0x24);
  if (param_1[0x1f] != 0) {
    FUN_144b3f230();
  }
  lVar2 = param_1[4];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 5) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144fb70f0 FUN_144fb70f0 body=415 status=ok
// SIG undefined FUN_144fb70f0(void)

void FUN_144fb70f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_res10;
  
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  if (lVar7 != 0) {
    FUN_144b3f230();
  }
  uVar12 = 0;
  iVar10 = 0;
  if (param_2 != 0) {
    iVar10 = *(int *)(param_2 + 0x40);
  }
  lVar7 = (longlong)iVar10;
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar10) {
    FUN_144fbbab0(param_1 + 0x20,&PTR_vftable_14c6e47a0,lVar7);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 < iVar10) {
    lVar8 = *(longlong *)(param_1 + 0x20);
    *(int *)(param_1 + 0x28) = iVar10;
    for (puVar5 = (undefined8 *)(lVar8 + (longlong)iVar2 * 8);
        puVar5 != (undefined8 *)(lVar8 + lVar7 * 8); puVar5 = puVar5 + 1) {
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
      }
    }
  }
  else if (iVar10 < iVar2) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    *(int *)(param_1 + 0x28) = iVar10;
    lVar8 = lVar3 + (longlong)iVar2 * 8;
    while (lVar8 != lVar3 + lVar7 * 8) {
      plVar1 = (longlong *)(lVar8 + -8);
      lVar8 = lVar8 + -8;
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    }
  }
  uVar9 = uVar12;
  uVar11 = uVar12;
  if (0 < iVar10) {
    do {
      if (*(longlong *)(uVar9 * 0x120 + *(longlong *)(param_2 + 0x38)) != 0) {
        local_res10 = 0x108;
        lVar7 = (*DAT_14c787670)(0,&local_res10,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(lVar7,"hkaiNavMeshInstanceCutter");
        }
        uVar4 = uVar12;
        if (lVar7 != 0) {
          uVar4 = FUN_14500b840(lVar7,param_2);
        }
        lVar7 = *(longlong *)(uVar11 + *(longlong *)(param_1 + 0x20));
        *(ulonglong *)(uVar11 + *(longlong *)(param_1 + 0x20)) = uVar4;
        if (lVar7 != 0) {
          FUN_144b3f230();
        }
      }
      uVar6 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar6;
      uVar11 = uVar11 + 8;
    } while ((int)uVar6 < iVar10);
  }
  *(undefined1 *)(param_1 + 0x34) = 3;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 144fb7290 FUN_144fb7290 body=1473 status=ok
// SIG undefined FUN_144fb7290(void)

void FUN_144fb7290(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  int *piVar22;
  longlong lVar23;
  int local_res20 [2];
  longlong local_b8;
  longlong local_b0;
  int local_a8;
  undefined1 local_a4 [4];
  undefined1 local_a0 [8];
  longlong local_98;
  longlong local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 uStack_78;
  undefined1 local_60 [32];
  
  iVar15 = *param_2 + 1;
  if (*(int *)(param_1 + 0x28) < iVar15) {
    plVar1 = (longlong *)(param_1 + 0x20);
    lVar19 = (longlong)iVar15;
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar15) {
      FUN_144fbbab0(plVar1,&PTR_vftable_14c6e47a0,lVar19);
    }
    iVar13 = *(int *)(param_1 + 0x28);
    if (iVar13 < iVar15) {
      lVar16 = *plVar1;
      *(int *)(param_1 + 0x28) = iVar15;
      for (puVar14 = (undefined8 *)(lVar16 + (longlong)iVar13 * 8);
          puVar14 != (undefined8 *)(lVar16 + lVar19 * 8); puVar14 = puVar14 + 1) {
        if (puVar14 != (undefined8 *)0x0) {
          *puVar14 = 0;
        }
      }
    }
    else if (iVar15 < iVar13) {
      lVar20 = *plVar1;
      *(int *)(param_1 + 0x28) = iVar15;
      lVar16 = lVar20 + (longlong)iVar13 * 8;
      while (lVar16 != lVar20 + lVar19 * 8) {
        plVar1 = (longlong *)(lVar16 + -8);
        lVar16 = lVar16 + -8;
        if (*plVar1 != 0) {
          FUN_144b3f230();
        }
      }
    }
  }
  local_b8 = 0x108;
  lVar19 = (*DAT_14c787670)(0,&local_b8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar19);
  }
  if (lVar19 == 0) {
    uVar9 = 0;
  }
  else {
    local_res20[0] = *param_2;
    uVar9 = FUN_14500b840(lVar19,*(undefined8 *)(param_1 + 0x18),local_res20);
  }
  lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 8) = uVar9;
  if (lVar19 != 0) {
    FUN_144b3f230(lVar19);
  }
  lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  local_90 = *(longlong *)((longlong)*param_2 * 0x120 + 0xc0 + lVar19);
  local_98 = local_90 + (longlong)*(int *)((longlong)*param_2 * 0x120 + 200 + lVar19) * 8;
  uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x48);
  uStack_78._0_4_ = (undefined4)uVar9;
  uStack_78._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_88 = (undefined4)uStack_78;
  uStack_84 = uStack_78._4_4_;
  local_80 = local_90;
  uStack_78 = uVar9;
  if (local_90 != local_98) {
    do {
      lVar19 = *(longlong *)
                (*(longlong *)
                  (CONCAT44(uStack_84,uStack_88) + (longlong)*(int *)(local_90 + 4) * 0x18) + 0x20);
      iVar15 = *(int *)(*(longlong *)(param_3 + 0x20) + 0x178);
      if (*(int *)(lVar19 + 0x18) == iVar15) {
        local_res20[0] = *(int *)(lVar19 + 0x1c);
        iVar15 = *param_2;
        piVar10 = (int *)FUN_144ca4a20(*(undefined8 *)(param_1 + 0x18),local_a4,local_res20);
        iVar13 = *piVar10;
        iVar3 = iVar13;
LAB_144fb74b9:
        if (iVar3 != -1) {
          lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar15 * 8);
          lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 8);
          lVar11 = *(longlong *)
                    ((longlong)iVar15 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38))
          ;
          local_b8 = lVar20;
          local_b0 = lVar16;
          if (lVar11 == 0) {
            lVar11 = 0;
          }
          else if (*(char *)(lVar11 + 0x30) == '\x01') {
            lVar11 = *(longlong *)(lVar11 + 0x20);
          }
          else {
            lVar11 = FUN_147e4bb26();
          }
          lVar12 = *(longlong *)
                    ((longlong)iVar13 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38))
          ;
          if (lVar12 == 0) {
            lVar12 = 0;
          }
          else if (*(char *)(lVar12 + 0x30) == '\x01') {
            lVar12 = *(longlong *)(lVar12 + 0x20);
          }
          else {
            lVar12 = FUN_147e4bb26();
          }
          iVar13 = *(int *)(lVar16 + 0xa0) + *(int *)(lVar19 + 0x28);
          if ((int)(*(uint *)(lVar16 + 0xa4) & 0x7fffffff) < iVar13) {
            FUN_144c584b0((longlong *)(lVar16 + 0x98),&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          iVar13 = *(int *)(lVar19 + 0x28) + *(int *)(lVar20 + 0xa0);
          if ((int)(*(uint *)(lVar20 + 0xa4) & 0x7fffffff) < iVar13) {
            FUN_144c584b0((longlong *)(lVar20 + 0x98),&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          piVar10 = *(int **)(lVar19 + 0x20);
          piVar22 = piVar10 + (longlong)*(int *)(lVar19 + 0x28) * 4;
          lVar23 = local_b8;
          lVar18 = local_b0;
          for (; local_b8 = lVar23, local_b0 = lVar18, piVar10 != piVar22; piVar10 = piVar10 + 4) {
            iVar13 = *(int *)(lVar16 + 0xa0);
            piVar2 = (int *)(*(longlong *)(lVar16 + 0x98) + (longlong)iVar13 * 4);
            if (piVar2 != (int *)0x0) {
              *piVar2 = *piVar10;
            }
            *(int *)(lVar16 + 0xa0) = iVar13 + 1;
            iVar13 = *(int *)(lVar20 + 0xa0);
            piVar2 = (int *)(*(longlong *)(lVar20 + 0x98) + (longlong)iVar13 * 4);
            if (piVar2 != (int *)0x0) {
              *piVar2 = piVar10[2];
            }
            *(int *)(lVar20 + 0xa0) = iVar13 + 1;
            if (*(int *)(lVar11 + 0x108) == 0) {
              bVar8 = 0;
            }
            else {
              bVar8 = *(byte *)((longlong)*piVar10 + *(longlong *)(lVar11 + 0x100));
            }
            *(byte *)((longlong)*piVar10 + *(longlong *)(lVar11 + 0x100)) = bVar8 | 4;
            if (*(int *)(lVar12 + 0x108) == 0) {
              bVar8 = 0;
            }
            else {
              bVar8 = *(byte *)((longlong)piVar10[2] + *(longlong *)(lVar12 + 0x100));
            }
            *(byte *)((longlong)piVar10[2] + *(longlong *)(lVar12 + 0x100)) = bVar8 | 4;
            FUN_144be90e0(0x4133962b);
            lVar23 = local_b8;
            lVar18 = local_b0;
          }
          lVar16 = *(longlong *)(lVar19 + 0x20);
          if (*param_2 == iVar15) {
            lVar20 = (longlong)*(int *)(lVar19 + 0x28) * 0x10 + lVar16;
            for (; local_b8 = lVar23, lVar16 != lVar20; lVar16 = lVar16 + 0x10) {
              FUN_144fbaf90(lVar18 + 0xd8,local_60,lVar16);
              lVar23 = local_b8;
            }
          }
          else {
            lVar20 = (longlong)*(int *)(lVar19 + 0x28) * 0x10 + lVar16;
            for (; local_b0 = lVar18, lVar16 != lVar20; lVar16 = lVar16 + 0x10) {
              FUN_144fbaf90(lVar23 + 0xd8,&local_80,lVar16 + 8);
              lVar18 = local_b0;
            }
          }
          iVar15 = *(int *)(lVar18 + 0x100);
          puVar17 = *(undefined4 **)(lVar19 + 0x60);
          puVar21 = puVar17 + (longlong)*(int *)(lVar19 + 0x68) * 8;
          iVar13 = *(int *)(lVar19 + 0x68) + iVar15;
          if ((int)(*(uint *)(lVar18 + 0x104) & 0x7fffffff) < iVar13) {
            FUN_141807cf8((longlong *)(lVar18 + 0xf8),&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          puVar7 = (undefined4 *)((longlong)iVar15 * 0x20 + *(longlong *)(lVar18 + 0xf8));
          for (; puVar17 != puVar21; puVar17 = puVar17 + 8) {
            if (puVar7 != (undefined4 *)0x0) {
              uVar4 = puVar17[1];
              uVar5 = puVar17[2];
              uVar6 = puVar17[3];
              *puVar7 = *puVar17;
              puVar7[1] = uVar4;
              puVar7[2] = uVar5;
              puVar7[3] = uVar6;
              uVar9 = *(undefined8 *)(puVar17 + 6);
              *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar17 + 4);
              *(undefined8 *)(puVar7 + 6) = uVar9;
            }
            puVar7 = puVar7 + 8;
          }
          *(int *)(lVar18 + 0x100) = iVar13;
          iVar15 = *(int *)(lVar23 + 0x100);
          puVar17 = *(undefined4 **)(lVar19 + 0x70);
          puVar21 = puVar17 + (longlong)*(int *)(lVar19 + 0x78) * 8;
          iVar13 = *(int *)(lVar19 + 0x78) + iVar15;
          if ((int)(*(uint *)(lVar23 + 0x104) & 0x7fffffff) < iVar13) {
            FUN_141807cf8(lVar23 + 0xf8,&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          puVar7 = (undefined4 *)((longlong)iVar15 * 0x20 + *(longlong *)(lVar23 + 0xf8));
          for (; puVar17 != puVar21; puVar17 = puVar17 + 8) {
            if (puVar7 != (undefined4 *)0x0) {
              uVar4 = puVar17[1];
              uVar5 = puVar17[2];
              uVar6 = puVar17[3];
              *puVar7 = *puVar17;
              puVar7[1] = uVar4;
              puVar7[2] = uVar5;
              puVar7[3] = uVar6;
              uVar9 = *(undefined8 *)(puVar17 + 6);
              *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar17 + 4);
              *(undefined8 *)(puVar7 + 6) = uVar9;
            }
            puVar7 = puVar7 + 8;
          }
          *(int *)(lVar23 + 0x100) = iVar13;
          FUN_144be90e0(0x870bac88);
        }
      }
      else if (*(int *)(lVar19 + 0x1c) == iVar15) {
        iVar13 = *param_2;
        local_a8 = *(int *)(lVar19 + 0x18);
        piVar10 = (int *)FUN_144ca4a20(*(undefined8 *)(param_1 + 0x18),local_a0,&local_a8);
        iVar15 = *piVar10;
        iVar3 = iVar15;
        goto LAB_144fb74b9;
      }
      local_90 = local_90 + 8;
    } while (local_90 != local_98);
  }
  return;
}



// FUNCTION 144fb7860 FUN_144fb7860 body=125 status=ok
// SIG undefined FUN_144fb7860(void)

void FUN_144fb7860(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar3 + *(int *)(param_1 + 0x28);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    if (*plVar3 != 0) {
      FUN_14500bab0(*plVar3,param_2);
    }
  }
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 144fb78e0 FUN_144fb78e0 body=2801 status=ok
// SIG undefined FUN_144fb78e0(void)

void FUN_144fb78e0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  char *pcVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  int *piVar22;
  int local_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  int *local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  char *local_148;
  undefined8 uStack_140;
  int local_138 [4];
  longlong *local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined4 local_110;
  uint local_10c;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  uint local_e4;
  longlong local_e0;
  undefined4 local_d8;
  char *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char *pcStack_60;
  undefined1 local_58 [24];
  
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar9 = *(char *)(lVar21 + 0x114);
  if (cVar9 == '\0') {
    __dyn_tls_on_demand_init();
    cVar9 = *(char *)(lVar21 + 0x114);
  }
  lVar7 = *(longlong *)(lVar21 + 0xf0);
  if (lVar7 == 0) {
    if (cVar9 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar21 + 0xf0) = lVar7;
  }
  lVar21 = *(longlong *)(lVar7 + 0x3e0);
  local_128 = (longlong *)0x149c1e100;
  uStack_120 = "";
  local_148 = "LtcutSilhouettes";
  uStack_140 = "";
  local_f8 = lVar21;
  if (lVar21 != 0) {
    local_178 = "StgetUpdatedFaces";
    uStack_170 = (longlong *)0x149c1e111;
    local_b8 = "LtcutSilhouettes";
    uStack_b0 = "";
    FUN_144be9870(lVar21,&local_b8,&local_178);
  }
  local_168 = (int *)(param_1 + 0x28);
  if ((int)param_4[1] == 0) {
    iVar11 = 0;
    pcVar6 = uStack_120;
    uStack_150 = (longlong *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
    if (0 < *local_168) {
      plVar10 = *(longlong **)(param_1 + 0x20);
      do {
        lVar7 = *plVar10;
        if ((lVar7 != 0) && ((*(int *)(lVar7 + 0xa0) != 0 || (*(int *)(lVar7 + 0xb0) != 0))))
        goto LAB_144fb7a27;
        iVar11 = iVar11 + 1;
        plVar10 = plVar10 + 1;
        uStack_150 = (longlong *)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
      } while (iVar11 < *local_168);
    }
    goto LAB_144fb8261;
  }
LAB_144fb7a27:
  iVar11 = 0;
  if (0 < *local_168) {
    lVar21 = 0;
    local_180 = 0;
    do {
      lVar7 = *(longlong *)(local_180 + *(longlong *)(param_1 + 0x20));
      if (lVar7 != 0) {
        plVar10 = (longlong *)(lVar7 + 0xf8);
        plVar14 = (longlong *)(*param_4 + 0x28 + lVar21);
        if (*(int *)(lVar7 + 0x100) == 0) {
          if (plVar14 != plVar10) {
            FUN_144c90920(plVar10,&PTR_vftable_14c6e47a0);
            FUN_144c90920(plVar14,&PTR_vftable_14c6e47a0);
            lVar8 = *plVar10;
            *plVar10 = *plVar14;
            *plVar14 = lVar8;
            uVar1 = *(undefined4 *)(lVar7 + 0x100);
            *(int *)(lVar7 + 0x100) = (int)plVar14[1];
            *(undefined4 *)(plVar14 + 1) = uVar1;
            uVar1 = *(undefined4 *)(lVar7 + 0x104);
            *(undefined4 *)(lVar7 + 0x104) = *(undefined4 *)((longlong)plVar14 + 0xc);
            *(undefined4 *)((longlong)plVar14 + 0xc) = uVar1;
          }
        }
        else {
          iVar19 = *(int *)(lVar7 + 0x100);
          puVar15 = (undefined4 *)*plVar14;
          puVar20 = puVar15 + (longlong)(int)plVar14[1] * 8;
          iVar18 = iVar19 + (int)plVar14[1];
          if ((int)(*(uint *)(lVar7 + 0x104) & 0x7fffffff) < iVar18) {
            FUN_141807cf8(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar18);
          }
          puVar5 = (undefined4 *)((longlong)iVar19 * 0x20 + *plVar10);
          for (; puVar15 != puVar20; puVar15 = puVar15 + 8) {
            if (puVar5 != (undefined4 *)0x0) {
              uVar1 = puVar15[1];
              uVar2 = puVar15[2];
              uVar3 = puVar15[3];
              *puVar5 = *puVar15;
              puVar5[1] = uVar1;
              puVar5[2] = uVar2;
              puVar5[3] = uVar3;
              uVar4 = *(undefined8 *)(puVar15 + 6);
              *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar15 + 4);
              *(undefined8 *)(puVar5 + 6) = uVar4;
            }
            puVar5 = puVar5 + 8;
          }
          *(int *)(lVar7 + 0x100) = iVar18;
          lVar7 = *param_4;
          uVar17 = *(uint *)(lVar7 + 0x34 + lVar21);
          *(undefined4 *)(lVar7 + 0x30 + lVar21) = 0;
          if ((-1 < (int)uVar17) && (lVar8 = *(longlong *)(lVar7 + 0x28 + lVar21), lVar8 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,lVar8,(ulonglong)(uVar17 & 0x7fffffff) << 5);
          }
          *(undefined8 *)(lVar7 + 0x28 + lVar21) = 0;
          *(undefined4 *)(lVar7 + 0x34 + lVar21) = 0x80000000;
        }
      }
      iVar11 = iVar11 + 1;
      local_180 = local_180 + 8;
      lVar21 = lVar21 + 0x38;
    } while (iVar11 < *local_168);
  }
  piVar22 = (int *)(param_1 + 0x28);
  local_168 = piVar22;
  FUN_144fba6c0(param_1,param_4);
  iVar11 = *piVar22;
  lVar21 = (longlong)iVar11;
  local_188 = 0;
  local_128 = (longlong *)0x0;
  uStack_120 = (char *)0x8000000000000000;
  if (iVar11 < 1) {
LAB_144fb8351:
    plVar10 = local_128;
    if (iVar11 < local_188) {
      plVar12 = local_128 + lVar21 * 2;
      plVar14 = local_128 + (longlong)local_188 * 2;
      local_188 = iVar11;
      local_168 = piVar22;
      if (plVar14 != plVar12) {
        do {
          plVar13 = plVar14 + -2;
          *(undefined4 *)(plVar14 + -1) = 0;
          if ((-1 < (int)*(uint *)((longlong)plVar14 + -4)) && (*plVar13 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*plVar13,
                       (ulonglong)(*(uint *)((longlong)plVar14 + -4) & 0x7fffffff) << 2);
          }
          *plVar13 = 0;
          *(undefined4 *)((longlong)plVar14 + -4) = 0x80000000;
          plVar14 = plVar13;
        } while (plVar13 != plVar12);
        local_168 = (int *)(param_1 + 0x28);
      }
    }
  }
  else {
    FUN_144fbbbf0(&local_128,&PTR_vftable_14c6e47c0,lVar21);
    local_188 = (int)uStack_120;
    if (iVar11 <= (int)uStack_120) goto LAB_144fb8351;
    for (plVar10 = local_128 + (longlong)(int)uStack_120 * 2; plVar10 != local_128 + lVar21 * 2;
        plVar10 = plVar10 + 2) {
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = 0;
        *(undefined4 *)(plVar10 + 1) = 0;
        *(undefined4 *)((longlong)plVar10 + 0xc) = 0x80000000;
      }
    }
    plVar10 = local_128;
    local_188 = iVar11;
    local_168 = (int *)(param_1 + 0x28);
  }
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_e0 = FUN_144b3d480();
  local_138[0] = 0;
  local_d8 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_a8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      iVar11 = local_138[0];
      lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)local_138[0] * 8);
      if ((lVar21 != 0) &&
         ((((lVar7 = (longlong)local_138[0] * 0x38 + *param_4, *(int *)(lVar7 + 0x10) != 0 ||
            (*(int *)(lVar7 + 0x20) != 0)) || (*(int *)(lVar7 + 0x30) != 0)) ||
          ((*(int *)(lVar21 + 0xa0) != 0 || (*(int *)(lVar21 + 0xb0) != 0)))))) {
        FUN_144fbb030(&local_f0,local_58,local_138);
        local_148 = (char *)0x0;
        lVar7 = (longlong)iVar11 * 0x38 + *param_4;
        uStack_140 = (char *)0x8000000000000000;
        if ((*(int *)(lVar7 + 0x10) != 0) ||
           ((*(int *)(lVar7 + 0x20) != 0 ||
            (iVar19 = 0, uVar17 = 0x80000000, *(int *)(lVar7 + 0x30) != 0)))) {
          local_98 = "StintersectST";
          pcStack_90 = "";
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar7 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = *(longlong *)(lVar7 + 0xf0);
          if (lVar8 == 0) {
            if (*(char *)(lVar7 + 0x114) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar8 = FUN_144b3f4a0();
            *(longlong *)(lVar7 + 0xf0) = lVar8;
          }
          if (*(longlong *)(lVar8 + 0x3e0) != 0) {
            local_c8 = local_98;
            pcStack_c0 = pcStack_90;
            FUN_144be99f0(*(longlong *)(lVar8 + 0x3e0),&local_c8);
          }
          FUN_144fb9b00(param_1,(longlong)iVar11 * 0x38 + *param_4,param_2,param_3,&local_148);
          iVar19 = (int)uStack_140;
          uVar17 = uStack_140._4_4_;
        }
        pcVar6 = local_148;
        local_88 = "StupdateCutConfig";
        pcStack_80 = "";
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        cVar9 = *(char *)(lVar7 + 0x114);
        if (cVar9 == '\0') {
          __dyn_tls_on_demand_init();
          cVar9 = *(char *)(lVar7 + 0x114);
        }
        lVar8 = *(longlong *)(lVar7 + 0xf0);
        if (lVar8 == 0) {
          if (cVar9 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = FUN_144b3f4a0();
          *(longlong *)(lVar7 + 0xf0) = lVar8;
        }
        if (*(longlong *)(lVar8 + 0x3e0) != 0) {
          local_c8 = local_88;
          pcStack_c0 = pcStack_80;
          FUN_144be99f0(*(longlong *)(lVar8 + 0x3e0),&local_c8);
        }
        local_10c = 0x80000000;
        local_118 = 0;
        local_110 = 0;
        local_108 = 0;
        local_100 = 0;
        local_fc = 0x80000000;
        lVar8 = (longlong)iVar11 * 0x38 + *param_4;
        local_c8 = *(char **)(lVar8 + 0x18);
        pcStack_c0 = local_c8 + (longlong)*(int *)(lVar8 + 0x20) * 4;
        pcStack_60 = pcVar6 + (longlong)iVar19 * 0x58;
        local_68._0_4_ = SUB84(pcVar6,0);
        uVar1 = (undefined4)local_68;
        local_68._4_4_ = (undefined4)((ulonglong)pcVar6 >> 0x20);
        uVar2 = local_68._4_4_;
        local_158 = (undefined4)local_68;
        uStack_154 = local_68._4_4_;
        local_78 = local_c8;
        pcStack_70 = pcStack_c0;
        local_68 = pcVar6;
        uStack_150 = (longlong *)pcStack_60;
        FUN_14500bac0(lVar21,&local_158,&local_c8,&local_118);
        local_b8 = "StapplyCuts";
        uStack_b0 = "";
        if (*(char *)(lVar7 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar8 = *(longlong *)(lVar7 + 0xf0);
        if (lVar8 == 0) {
          if (*(char *)(lVar7 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = FUN_144b3f4a0();
          *(longlong *)(local_a8 + 0xf0) = lVar8;
        }
        if (*(longlong *)(lVar8 + 0x3e0) != 0) {
          local_158 = (undefined4)local_b8;
          uStack_154 = local_b8._4_4_;
          uStack_150._0_4_ = (undefined4)uStack_b0;
          uStack_150._4_4_ = uStack_b0._4_4_;
          FUN_144be99f0(*(longlong *)(lVar8 + 0x3e0),&local_158);
        }
        uStack_170 = (longlong *)(pcVar6 + (longlong)iVar19 * 0x58);
        local_158 = uVar1;
        uStack_154 = uVar2;
        local_178 = pcVar6;
        uStack_150 = uStack_170;
        FUN_14500bc80(lVar21,&local_158,&local_118,*(undefined4 *)(param_1 + 0x10c));
        local_100 = 0;
        if ((-1 < (int)local_fc) && (local_108 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_108,(ulonglong)(local_fc & 0x7fffffff) << 4);
        }
        local_108 = 0;
        local_fc = 0x80000000;
        local_110 = 0;
        if ((-1 < (int)local_10c) && (local_118 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_118,(ulonglong)(local_10c & 0x7fffffff) * 0xc);
        }
        local_118 = 0;
        pcVar16 = pcVar6 + (longlong)iVar19 * 0x58;
        local_10c = 0x80000000;
        while (pcVar16 != pcVar6) {
          pcVar16 = pcVar16 + -0x58;
          FUN_144fb6d30(pcVar16);
        }
        uStack_140 = (char *)((ulonglong)uStack_140 & 0xffffffff00000000);
        if ((-1 < (int)uVar17) && (pcVar6 != (char *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,pcVar6,(ulonglong)(uVar17 & 0x7fffffff) * 0x58);
        }
        local_148 = (char *)0x0;
        uStack_140 = (char *)CONCAT44(0x80000000,(int)uStack_140);
      }
      local_138[0] = iVar11 + 1;
      plVar10 = local_128;
    } while (local_138[0] < *local_168);
  }
  local_178 = "StMatchStreaming";
  uStack_170 = (longlong *)0x149c1e178;
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar21 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar21 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar21 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar21 + 0xf0) = lVar7;
  }
  if (*(longlong *)(lVar7 + 0x3e0) != 0) {
    local_158 = (undefined4)local_178;
    uStack_154 = local_178._4_4_;
    uStack_150._0_4_ = (undefined4)uStack_170;
    uStack_150._4_4_ = uStack_170._4_4_;
    FUN_144be99f0(*(longlong *)(lVar7 + 0x3e0),&local_158);
  }
  plVar14 = plVar10 + (longlong)local_188 * 2;
  local_178._0_4_ = SUB84(plVar10,0);
  local_178._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
  local_158 = (undefined4)local_178;
  uStack_154 = local_178._4_4_;
  local_178 = (char *)plVar10;
  uStack_170 = plVar14;
  uStack_150 = plVar14;
  FUN_145316100(param_1,&local_f0,&local_158);
  if ((local_e0 != 0) && (*(int *)(local_e0 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_e0,0);
    FUN_144b3ec00(&local_e0);
  }
  local_e8 = 0;
  if ((-1 < (int)local_e4) && (local_f0 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_f0,(ulonglong)(local_e4 & 0x7fffffff) << 2);
  }
  local_f0 = 0;
  local_e4 = 0x80000000;
  pcVar6 = uStack_120;
  while (uStack_120 = pcVar6, plVar14 != plVar10) {
    plVar12 = plVar14 + -2;
    *(undefined4 *)(plVar14 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar14 + -4)) && (*plVar12 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar12,
                 (ulonglong)(*(uint *)((longlong)plVar14 + -4) & 0x7fffffff) << 2);
    }
    *plVar12 = 0;
    *(undefined4 *)((longlong)plVar14 + -4) = 0x80000000;
    plVar14 = plVar12;
    pcVar6 = uStack_120;
  }
  uStack_120._4_4_ = (uint)((ulonglong)pcVar6 >> 0x20);
  lVar21 = local_f8;
  if ((-1 < (longlong)pcVar6) && (plVar10 != (longlong *)0x0)) {
    uVar17 = uStack_120._4_4_ & 0x7fffffff;
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,plVar10,(ulonglong)uVar17 << 4);
    lVar21 = local_f8;
    pcVar6 = uStack_120;
  }
LAB_144fb8261:
  uStack_120 = pcVar6;
  local_178 = "StcompactSections";
  uStack_170 = (longlong *)0x149c1e191;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar7 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar7 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar7 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar7 + 0xf0) = lVar8;
  }
  if (*(longlong *)(lVar8 + 0x3e0) != 0) {
    local_158 = (undefined4)local_178;
    uStack_154 = local_178._4_4_;
    uStack_150._0_4_ = (undefined4)uStack_170;
    uStack_150._4_4_ = uStack_170._4_4_;
    FUN_144be99f0(*(longlong *)(lVar8 + 0x3e0),&local_158);
  }
  FUN_145315fa0(param_1);
  if (lVar21 != 0) {
    local_178 = &DAT_14999058c;
    uStack_170 = (longlong *)&DAT_14999058e;
    local_158 = 0x4999058c;
    uStack_154 = 1;
    uStack_150._0_4_ = 0x4999058e;
    uStack_150._4_4_ = 1;
    FUN_144be9b20(lVar21,&local_158);
  }
  return;
}



// FUNCTION 144fb83e0 FUN_144fb83e0 body=1187 status=ok
// SIG undefined FUN_144fb83e0(void)

void FUN_144fb83e0(longlong param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined4 local_res18 [2];
  longlong local_res20;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 8);
  lVar8 = *(longlong *)
           ((longlong)*param_2 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  plVar12 = (longlong *)(lVar8 + 0x20);
  if (*(char *)(lVar8 + 0x30) == '\x01') {
    lVar8 = *plVar12;
  }
  else {
    lVar8 = FUN_147e4bb26(plVar12);
  }
  FUN_144c542d0(lVar8,*(undefined8 *)(param_1 + 0x18),0);
  *(undefined4 *)(lVar10 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(lVar10 + 0xa4)) && (*(longlong *)(lVar10 + 0x98) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar10 + 0x98),
               (ulonglong)(*(uint *)(lVar10 + 0xa4) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(lVar10 + 0x98) = 0;
  *(undefined4 *)(lVar10 + 0xa4) = 0x80000000;
  *(undefined4 *)(lVar10 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(lVar10 + 0xb4)) && (*(longlong *)(lVar10 + 0xa8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar10 + 0xa8),
               (ulonglong)(*(uint *)(lVar10 + 0xb4) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(lVar10 + 0xa8) = 0;
  *(undefined4 *)(lVar10 + 0xb4) = 0x80000000;
  FUN_144be90e0(0xd1843d6e);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
  lVar10 = *(longlong *)((longlong)*param_2 * 0x120 + 0xc0 + lVar8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x48);
  lVar8 = lVar10 + (longlong)*(int *)((longlong)*param_2 * 0x120 + 200 + lVar8) * 8;
  do {
    if (lVar10 == lVar8) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)*param_2 * 8) = 0;
      if (lVar10 != 0) {
        FUN_144b3f230(lVar10);
      }
      if (*(int *)(param_1 + 0x30) == *param_2) {
        *(undefined1 *)(param_1 + 0x34) = 3;
      }
      return;
    }
    lVar14 = *(longlong *)(lVar3 + (longlong)*(int *)(lVar10 + 4) * 0x18);
    lVar4 = *(longlong *)(lVar14 + 0x20);
    local_res20 = lVar10;
    if (*(int *)(lVar14 + 0x18) == *(int *)(*plVar12 + 0x17c)) {
      if (lVar4 != 0) {
        lVar10 = *(longlong *)(lVar4 + 0x20);
        lVar15 = (longlong)*(int *)(lVar4 + 0x28) * 0x10 + lVar10;
        lVar14 = *(longlong *)
                  (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar14 + 0x1c) * 8);
        if (lVar10 != lVar15) {
          do {
            iVar11 = *(int *)(lVar14 + 0xb0) + 1;
            uVar2 = *(undefined4 *)(lVar10 + 8);
            local_res18[0] = uVar2;
            if ((int)(*(uint *)(lVar14 + 0xb4) & 0x7fffffff) < iVar11) {
              FUN_144c584b0((longlong *)(lVar14 + 0xa8),&PTR_vftable_14c6e47a0,(longlong)iVar11);
            }
            puVar16 = (undefined4 *)
                      (*(longlong *)(lVar14 + 0xa8) + (longlong)*(int *)(lVar14 + 0xb0) * 4);
            if (puVar16 != (undefined4 *)0x0) {
              *puVar16 = uVar2;
            }
            *(int *)(lVar14 + 0xb0) = iVar11;
            FUN_144fbaf90(lVar14 + 0xb8,local_68,local_res18);
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != lVar15);
        }
        lVar10 = local_res20;
        iVar11 = *(int *)(lVar14 + 0x100);
        puVar16 = *(undefined4 **)(lVar4 + 0x70);
        puVar13 = puVar16 + (longlong)*(int *)(lVar4 + 0x78) * 8;
        iVar9 = iVar11 + *(int *)(lVar4 + 0x78);
        if ((int)(*(uint *)(lVar14 + 0x104) & 0x7fffffff) < iVar9) {
          FUN_141807cf8(lVar14 + 0xf8,&PTR_vftable_14c6e47a0,(longlong)iVar9);
        }
        puVar1 = (undefined4 *)((longlong)iVar11 * 0x20 + *(longlong *)(lVar14 + 0xf8));
        for (; puVar16 != puVar13; puVar16 = puVar16 + 8) {
          if (puVar1 != (undefined4 *)0x0) {
            uVar2 = puVar16[1];
            uVar5 = puVar16[2];
            uVar6 = puVar16[3];
            *puVar1 = *puVar16;
            puVar1[1] = uVar2;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            uVar7 = *(undefined8 *)(puVar16 + 6);
            *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar16 + 4);
            *(undefined8 *)(puVar1 + 6) = uVar7;
          }
          puVar1 = puVar1 + 8;
        }
LAB_144fb87e5:
        *(int *)(lVar14 + 0x100) = iVar9;
      }
    }
    else if ((*(int *)(lVar14 + 0x1c) == *(int *)(*plVar12 + 0x17c)) && (lVar4 != 0)) {
      puVar16 = *(undefined4 **)(lVar4 + 0x20);
      puVar13 = puVar16 + (longlong)*(int *)(lVar4 + 0x28) * 4;
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar14 + 0x18) * 8);
      if (puVar16 != puVar13) {
        do {
          iVar11 = *(int *)(lVar14 + 0xb0) + 1;
          uVar2 = *puVar16;
          local_res18[0] = uVar2;
          if ((int)(*(uint *)(lVar14 + 0xb4) & 0x7fffffff) < iVar11) {
            FUN_144c584b0((longlong *)(lVar14 + 0xa8),&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          puVar1 = (undefined4 *)
                   (*(longlong *)(lVar14 + 0xa8) + (longlong)*(int *)(lVar14 + 0xb0) * 4);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = uVar2;
          }
          *(int *)(lVar14 + 0xb0) = iVar11;
          FUN_144fbaf90(lVar14 + 0xb8,local_58,local_res18);
          puVar16 = puVar16 + 4;
        } while (puVar16 != puVar13);
      }
      lVar10 = local_res20;
      iVar11 = *(int *)(lVar14 + 0x100);
      puVar16 = *(undefined4 **)(lVar4 + 0x60);
      puVar13 = puVar16 + (longlong)*(int *)(lVar4 + 0x68) * 8;
      iVar9 = iVar11 + *(int *)(lVar4 + 0x68);
      if ((int)(*(uint *)(lVar14 + 0x104) & 0x7fffffff) < iVar9) {
        FUN_141807cf8(lVar14 + 0xf8,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      puVar1 = (undefined4 *)((longlong)iVar11 * 0x20 + *(longlong *)(lVar14 + 0xf8));
      for (; puVar16 != puVar13; puVar16 = puVar16 + 8) {
        if (puVar1 != (undefined4 *)0x0) {
          uVar2 = puVar16[1];
          uVar5 = puVar16[2];
          uVar6 = puVar16[3];
          *puVar1 = *puVar16;
          puVar1[1] = uVar2;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          uVar7 = *(undefined8 *)(puVar16 + 6);
          *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar16 + 4);
          *(undefined8 *)(puVar1 + 6) = uVar7;
        }
        puVar1 = puVar1 + 8;
      }
      goto LAB_144fb87e5;
    }
    lVar10 = lVar10 + 8;
    local_res20 = lVar10;
  } while( true );
}



// FUNCTION 144fb8890 FUN_144fb8890 body=102 status=ok
// SIG undefined FUN_144fb8890(void)

void FUN_144fb8890(longlong param_1,undefined4 param_2)

{
  undefined1 local_res8 [8];
  undefined4 local_res10 [6];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  
  local_30 = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  local_res10[0] = param_2;
  local_38[0] = param_2;
  local_20 = FUN_144b3d480();
  local_18 = 0;
  FUN_144fbaef0(param_1 + 0x140,local_res8,local_res10,local_38);
  FUN_144c91db0(&local_30);
  return;
}



// FUNCTION 144fb8900 FUN_144fb8900 body=154 status=ok
// SIG undefined FUN_144fb8900(void)

void FUN_144fb8900(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_res10 [2];
  
  local_res10[0] = param_2;
  lVar3 = FUN_144fbb0d0(param_1 + 0x140,local_res10);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(lVar3 + 4);
  }
  lVar3 = param_3[1];
  lVar1 = *(longlong *)(param_1 + 0x140);
  for (lVar4 = *param_3; lVar4 != lVar3; lVar4 = lVar4 + 0x90) {
    FUN_144fb8c80(param_1,(longlong)iVar2 * 0x30 + lVar1 + 8,lVar4);
    FUN_144be90e0(0x1c6e3ad);
  }
  return;
}



// FUNCTION 144fb89a0 FUN_144fb89a0 body=721 status=ok
// SIG undefined FUN_144fb89a0(void)

void FUN_144fb89a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  longlong *in_stack_ffffffffffffff60;
  undefined4 uVar8;
  int local_88;
  uint local_84;
  uint local_80 [2];
  longlong local_78 [4];
  longlong local_58 [4];
  
  lVar1 = param_2[1];
  lVar7 = *param_2;
  if (lVar7 != lVar1) {
    do {
      local_84 = *(uint *)(lVar7 + 0x30);
      FUN_144ca4a20(*(undefined8 *)(param_1 + 0x18),local_res20,&local_84);
      local_84 = *(uint *)(lVar7 + 0x34);
      FUN_144ca4a20(*(undefined8 *)(param_1 + 0x18),&local_88,&local_84);
      uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
      if ((local_res20[0] != -1) && (local_88 != -1)) {
        local_78[1] = 0;
        local_78[2] = 0;
        local_58[1] = 0;
        local_58[2] = 0;
        FUN_144ca39b0(*(undefined8 *)(param_1 + 0x18),0,lVar7,local_78);
        FUN_144be90e0(0x7fb05e94);
        local_84 = *(uint *)(lVar7 + 0x38);
        local_80[0] = *(uint *)(lVar7 + 0x3c);
        lVar2 = *(longlong *)(param_1 + 0x20);
        uVar6 = local_res20[0] << 0x16 | local_84;
        uVar5 = local_88 << 0x16 | local_80[0];
        if (local_res20[0] == local_88) {
          in_stack_ffffffffffffff60 = (longlong *)CONCAT44(uVar8,*(undefined4 *)(param_1 + 0x10c));
          uVar3 = local_84;
          local_84 = local_80[0];
          local_80[0] = uVar3;
          FUN_14500d4b0(*(undefined8 *)(lVar2 + (longlong)local_res20[0] * 8),local_80,&local_84,
                        local_78,local_58,in_stack_ffffffffffffff60);
        }
        else {
          in_stack_ffffffffffffff60 = local_58;
          FUN_14500d7b0(*(undefined8 *)(lVar2 + (longlong)local_res20[0] * 8),&local_84,local_78,
                        *(undefined8 *)(lVar2 + (longlong)local_88 * 8),local_80,
                        in_stack_ffffffffffffff60,*(undefined4 *)(param_1 + 0x10c));
        }
        FUN_144be90e0(0xc5cda5da);
        uVar4 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
          uVar3 = (uint)uVar4;
          if (((((int)uVar3 < *(int *)((longlong)local_res20[0] * 0x120 + 0x18 + lVar2)) &&
               (*(longlong *)
                 (*(longlong *)((longlong)local_res20[0] * 0x120 + 0x10 + lVar2) + uVar4 * 8) != 0))
              && ((int)uVar3 < *(int *)((longlong)local_88 * 0x120 + 0x18 + lVar2))) &&
             (*(longlong *)(*(longlong *)((longlong)local_88 * 0x120 + 0x10 + lVar2) + uVar4 * 8) !=
              0)) {
            local_80[0] = uVar3;
            FUN_144fc36a0(local_res18,*(longlong *)(param_1 + 0x18),local_80,uVar6);
            local_80[0] = uVar3;
            FUN_144fc36a0(local_res10,*(undefined8 *)(param_1 + 0x18),local_80,uVar5);
            if (((local_res18[0] != -1) && (local_res10[0] != -1)) &&
               (local_res18[0] != local_res10[0])) {
              if ((*(byte *)(local_78[0] + 0x10) & 0x20) == 0) {
                FUN_144fc3740(*(undefined8 *)(param_1 + 0x18),local_res10[0],local_res18[0],1,
                              *(undefined2 *)(local_78[0] + 0x12));
                if (((uVar5 ^ uVar6) & 0xffc00000) != 0) {
                  FUN_145314670(param_1 + 0x120,local_res10[0],local_res18[0]);
                }
              }
              if ((*(byte *)(local_58[0] + 0x10) & 0x20) == 0) {
                FUN_144fc3740(*(undefined8 *)(param_1 + 0x18),local_res18[0],local_res10[0],1,
                              *(undefined2 *)(local_58[0] + 0x12));
                if (((uVar5 ^ uVar6) & 0xffc00000) != 0) {
                  FUN_145314670(param_1 + 0x120,local_res18[0],local_res10[0]);
                }
              }
            }
          }
          uVar4 = (ulonglong)(uVar3 + 1);
        } while ((int)(uVar3 + 1) < 0x10);
      }
      FUN_144be90e0(0x6e06431d);
      lVar7 = lVar7 + 0x90;
    } while (lVar7 != lVar1);
  }
  return;
}



// FUNCTION 144fb8c80 FUN_144fb8c80 body=740 status=ok
// SIG undefined FUN_144fb8c80(void)

void FUN_144fb8c80(longlong param_1,uint *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint local_res8 [2];
  uint local_res18 [2];
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar7;
  int local_78;
  int local_74 [3];
  longlong local_68 [4];
  longlong local_48 [4];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  local_res8[0] = *(uint *)(param_3 + 0x30);
  FUN_144ca4a20(*(undefined8 *)(param_1 + 0x18),local_res20,local_res8);
  local_res8[0] = *(uint *)(param_3 + 0x34);
  FUN_144ca4a20(*(undefined8 *)(param_1 + 0x18),&local_78,local_res8);
  if ((local_res20[0] != -1) && (local_78 != -1)) {
    uVar5 = 0;
    uVar2 = uVar5;
    if (param_2 != (uint *)0x0) {
      uVar2 = (ulonglong)*param_2;
    }
    local_68[1] = 0;
    local_68[2] = 0;
    local_48[1] = 0;
    local_48[2] = 0;
    FUN_144ca39b0(*(undefined8 *)(param_1 + 0x18),uVar2,param_3,local_68);
    FUN_144be90e0(0x7fb05e94);
    local_res18[0] = *(uint *)(param_3 + 0x38);
    local_res8[0] = *(uint *)(param_3 + 0x3c);
    uVar3 = local_res20[0] << 0x16 | local_res18[0];
    uVar6 = local_78 << 0x16 | local_res8[0];
    if (local_res20[0] == local_78) {
      FUN_14500d4b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_res20[0] * 8),
                    local_res18,local_res8,local_68,local_48,
                    CONCAT44(uVar7,*(undefined4 *)(param_1 + 0x10c)));
    }
    else {
      FUN_14500d7b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_res20[0] * 8),
                    local_res18,local_68,
                    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)local_78 * 8),
                    local_res8,local_48,*(undefined4 *)(param_1 + 0x10c));
    }
    if (param_2 != (uint *)0x0) {
      FUN_1453134e0(param_2,uVar3,uVar6);
    }
    FUN_144be90e0(0xc5cda5da);
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
      iVar4 = (int)uVar5;
      if ((((iVar4 < *(int *)((longlong)local_res20[0] * 0x120 + 0x18 + lVar1)) &&
           (*(longlong *)
             (*(longlong *)((longlong)local_res20[0] * 0x120 + 0x10 + lVar1) + uVar5 * 8) != 0)) &&
          (iVar4 < *(int *)((longlong)local_78 * 0x120 + 0x18 + lVar1))) &&
         (*(longlong *)(*(longlong *)((longlong)local_78 * 0x120 + 0x10 + lVar1) + uVar5 * 8) != 0))
      {
        local_74[0] = iVar4;
        FUN_144fc36a0(local_res18,*(longlong *)(param_1 + 0x18),local_74,uVar3);
        local_74[0] = iVar4;
        FUN_144fc36a0(local_res8,*(undefined8 *)(param_1 + 0x18),local_74,uVar6);
        if (((local_res18[0] != 0xffffffff) && (local_res8[0] != 0xffffffff)) &&
           (local_res18[0] != local_res8[0])) {
          if ((*(byte *)(local_68[0] + 0x10) & 0x20) == 0) {
            FUN_144fc3740(*(undefined8 *)(param_1 + 0x18),local_res8[0],local_res18[0],1,
                          *(undefined2 *)(local_68[0] + 0x12));
            if (param_2 == (uint *)0x0) {
              if (((uVar6 ^ uVar3) & 0xffc00000) != 0) {
                FUN_145314670(param_1 + 0x120,local_res8[0],local_res18[0]);
              }
            }
            else {
              FUN_1453136f0(param_2,local_res8[0],local_res18[0]);
            }
          }
          if ((*(byte *)(local_48[0] + 0x10) & 0x20) == 0) {
            FUN_144fc3740(*(undefined8 *)(param_1 + 0x18),local_res18[0],local_res8[0],1,
                          *(undefined2 *)(local_48[0] + 0x12));
            if (param_2 == (uint *)0x0) {
              if (((uVar6 ^ uVar3) & 0xffc00000) != 0) {
                FUN_145314670(param_1 + 0x120,local_res18[0],local_res8[0]);
              }
            }
            else {
              FUN_1453136f0(param_2,local_res18[0],local_res8[0]);
            }
          }
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < 0x10);
  }
  return;
}



// FUNCTION 144fb8f70 FUN_144fb8f70 body=693 status=ok
// SIG undefined FUN_144fb8f70(void)

void FUN_144fb8f70(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined4 local_res10 [2];
  uint local_res18 [2];
  longlong local_res20;
  undefined4 *local_98;
  int local_90;
  uint local_8c;
  uint *local_88;
  int local_80;
  uint local_7c;
  longlong local_78;
  undefined4 local_70;
  int local_6c;
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  
  local_res10[0] = param_2;
  lVar4 = FUN_144fbb0d0((longlong *)(param_1 + 0x140),local_res10);
  if (lVar4 == 0) {
    iVar8 = -1;
    uVar7 = 0xffffffff;
  }
  else {
    iVar8 = *(int *)(lVar4 + 4);
    uVar7 = (uint)(lVar4 - *(longlong *)(param_1 + 0x150) >> 3);
  }
  local_7c = 0x80000000;
  local_res20 = *(longlong *)(param_1 + 0x140) + 8 + (longlong)iVar8 * 0x30;
  local_88 = (uint *)0x0;
  local_80 = 0;
  FUN_145313a10(local_res20,&local_88);
  puVar1 = local_88 + local_80;
  for (puVar9 = local_88; puVar9 != puVar1; puVar9 = puVar9 + 1) {
    uVar3 = *puVar9;
    local_78 = 0;
    local_70 = 0;
    local_6c = -0x80000000;
    local_68 = 0;
    local_60 = 0;
    local_5c = 0x80000000;
    local_58 = 0;
    FUN_144ca3f00(*(undefined8 *)(param_1 + 0x18),param_2,uVar3,&local_78);
    local_res18[0] = uVar3 & 0x3fffff;
    FUN_14500dbb0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(uVar3 >> 0x16) * 8),
                  local_res18,&local_78);
    FUN_144be90e0(0xfdd13bc4);
    local_60 = 0;
    if ((-1 < (int)local_5c) && (local_68 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) << 2);
    }
    local_68 = 0;
    local_5c = 0x80000000;
    local_70 = 0;
    if ((-1 < local_6c) && (local_78 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,local_78,local_6c * 2);
    }
  }
  local_8c = 0x80000000;
  local_98 = (undefined4 *)0x0;
  local_90 = 0;
  FUN_145313d20(local_res20,&local_98);
  puVar2 = local_98 + (longlong)local_90 * 3;
  for (puVar5 = local_98; puVar5 != puVar2; puVar5 = puVar5 + 3) {
    FUN_144fc3740(*(undefined8 *)(param_1 + 0x18),*puVar5,puVar5[1],-puVar5[2],0);
  }
  plVar6 = (longlong *)(param_1 + 0x140);
  if ((*(uint *)(param_1 + 0x158) < uVar7) ||
     (lVar4 = *(longlong *)(param_1 + 0x150) + (longlong)(int)uVar7 * 8,
     *(int *)(*(longlong *)(param_1 + 0x150) + 4 + (longlong)(int)uVar7 * 8) != iVar8)) {
    lVar4 = FUN_144fbb0d0(plVar6,(longlong)iVar8 * 0x30 + *plVar6);
  }
  FUN_144fba9b0(plVar6,lVar4);
  local_90 = 0;
  if ((-1 < (int)local_8c) && (local_98 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_98,(ulonglong)(local_8c & 0x7fffffff) * 0xc);
  }
  local_98 = (undefined4 *)0x0;
  local_8c = 0x80000000;
  local_80 = 0;
  if ((-1 < (int)local_7c) && (local_88 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_88,(ulonglong)(local_7c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144fb9230 FUN_144fb9230 body=787 status=ok
// SIG undefined FUN_144fb9230(void)

void FUN_144fb9230(longlong param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint local_res8 [2];
  undefined4 *local_48;
  int local_40;
  uint local_3c;
  uint *local_38;
  int local_30;
  uint local_2c;
  
  local_res8[0] = *param_2;
  local_38 = (uint *)0x0;
  local_30 = 0;
  local_2c = 0x80000000;
  FUN_144ca4320(*(undefined8 *)(param_1 + 0x18),local_res8,&local_38);
  puVar7 = local_38 + (longlong)local_30 * 0xe;
  for (puVar5 = local_38; puVar5 != puVar7; puVar5 = puVar5 + 0xe) {
    local_res8[0] = *puVar5 & 0x3fffff;
    FUN_14500dbb0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)(*puVar5 >> 0x16) * 8),
                  local_res8,puVar5 + 2);
  }
  FUN_144be90e0(0x598815fa);
  local_res8[0] = *param_2;
  local_48 = (undefined4 *)0x0;
  local_40 = 0;
  local_3c = 0x80000000;
  FUN_145314810(param_1 + 0x120,local_res8,&local_48);
  puVar3 = local_48 + (longlong)local_40 * 3;
  for (puVar6 = local_48; puVar6 != puVar3; puVar6 = puVar6 + 3) {
    FUN_144fc3740(*(undefined8 *)(param_1 + 0x18),*puVar6,puVar6[1],-puVar6[2],0);
  }
  local_res8[0] = *param_2;
  FUN_1453146f0(param_1 + 0x120,local_res8);
  local_40 = 0;
  if ((-1 < (int)local_3c) && (local_48 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_48,(ulonglong)(local_3c & 0x7fffffff) * 0xc);
  }
  FUN_144be90e0(0xd1eb3ba9);
  iVar4 = *(int *)(param_1 + 0x148);
  puVar5 = local_38;
  while (iVar4 = iVar4 + -1, local_38 = puVar5, -1 < iVar4) {
    local_48 = (undefined4 *)0x0;
    local_40 = 0;
    local_3c = 0x80000000;
    local_res8[0] = *param_2;
    lVar8 = (longlong)iVar4 * 0x30 + *(longlong *)(param_1 + 0x140);
    FUN_145313e10(lVar8 + 8,local_res8,&local_48);
    puVar3 = local_48 + (longlong)local_40 * 3;
    for (puVar6 = local_48; puVar6 != puVar3; puVar6 = puVar6 + 3) {
      FUN_144fc3740(*(undefined8 *)(param_1 + 0x18),*puVar6,puVar6[1],-puVar6[2],0);
    }
    local_res8[0] = *param_2;
    FUN_1453138f0(lVar8 + 8,local_res8);
    local_40 = 0;
    if ((-1 < (int)local_3c) && (local_48 != (undefined4 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_48,(ulonglong)(local_3c & 0x7fffffff) * 0xc);
    }
    local_48 = (undefined4 *)0x0;
    local_3c = 0x80000000;
    puVar5 = local_38;
  }
  if (puVar5 + (longlong)local_30 * 0xe != puVar5) {
    puVar7 = puVar5 + (longlong)local_30 * 0xe + 5;
    do {
      puVar1 = puVar7 + -0xe;
      FUN_144bf90d0(puVar7 + -0xd);
      puVar7[-0xf] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar7 + -0x11) != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,*(longlong *)(puVar7 + -0x11),*puVar1 * 2);
      }
      puVar2 = puVar7 + -0x13;
      puVar7[-0x11] = 0;
      puVar7[-0x10] = 0;
      *puVar1 = 0x80000000;
      puVar7 = puVar1;
    } while (puVar2 != puVar5);
  }
  local_30 = 0;
  if ((-1 < (int)local_2c) && (local_38 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_38,(ulonglong)(local_2c & 0x7fffffff) * 0x38);
  }
  return;
}



// FUNCTION 144fb9550 FUN_144fb9550 body=698 status=ok
// SIG undefined FUN_144fb9550(void)

undefined8 * FUN_144fb9550(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *local_res8;
  undefined8 local_res18 [2];
  
  plVar11 = *(longlong **)(param_1 + 0x20);
  plVar2 = plVar11 + *(int *)(param_1 + 0x28);
  while( true ) {
    if (plVar11 == plVar2) {
      *param_2 = 0;
      return param_2;
    }
    if ((*plVar11 != 0) && (*(int *)(*plVar11 + 0xc0) != 0)) break;
    plVar11 = plVar11 + 1;
  }
  local_res18[0] = 0x28;
  local_res8 = (undefined8 *)(*DAT_14c787670)(0,local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(local_res8,"hkaiNavMeshModifiedFaces");
  }
  if (local_res8 == (undefined8 *)0x0) {
    local_res8 = (undefined8 *)0x0;
  }
  else {
    local_res8[2] = 1;
    local_res8[1] = 0xffffffff;
    *local_res8 = hkaiNavMeshModifiedFaces::vftable;
    local_res8[3] = 0;
    *(undefined4 *)(local_res8 + 4) = 0;
    *(undefined4 *)((longlong)local_res8 + 0x24) = 0x80000000;
  }
  plVar2 = local_res8 + 3;
  if ((int)(*(uint *)((longlong)local_res8 + 0x24) & 0x7fffffff) < *(int *)(param_1 + 0x28)) {
    FUN_144fbb430(plVar2,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x28));
  }
  plVar12 = *(longlong **)(param_1 + 0x20);
  plVar11 = plVar12 + *(int *)(param_1 + 0x28);
  for (; plVar12 != plVar11; plVar12 = plVar12 + 1) {
    lVar4 = *plVar12;
    puVar10 = (undefined8 *)((longlong)*(int *)(local_res8 + 4) * 0x20 + *plVar2);
    iVar7 = *(int *)(local_res8 + 4) + 1;
    puVar9 = (undefined8 *)((longlong)iVar7 * 0x20 + *plVar2);
    *(int *)(local_res8 + 4) = iVar7;
    if (puVar10 != puVar9) {
      puVar8 = puVar10 + 1;
      do {
        if (puVar8 + -1 != (undefined8 *)0x0) {
          puVar8[-1] = 0;
          *(undefined4 *)puVar8 = 0;
          *(undefined4 *)((longlong)puVar8 + 4) = 0x80000000;
          uVar6 = FUN_144b3d480();
          puVar8[1] = uVar6;
          *(undefined4 *)(puVar8 + 2) = 0;
        }
        puVar1 = puVar8 + 3;
        puVar8 = puVar8 + 4;
      } while (puVar1 != puVar9);
    }
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)(lVar4 + 0xb8);
      if (puVar9 != puVar10) {
        FUN_144c52690(puVar10,&PTR_vftable_14c6e47a0);
        FUN_144c52690(puVar9,&PTR_vftable_14c6e47a0);
        uVar6 = *puVar10;
        *puVar10 = *puVar9;
        *puVar9 = uVar6;
        uVar3 = *(undefined4 *)(puVar10 + 1);
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar4 + 0xc0);
        *(undefined4 *)(lVar4 + 0xc0) = uVar3;
        uVar3 = *(undefined4 *)((longlong)puVar10 + 0xc);
        *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)(lVar4 + 0xc4);
        *(undefined4 *)(lVar4 + 0xc4) = uVar3;
      }
      uVar6 = puVar10[2];
      puVar10[2] = *(undefined8 *)(lVar4 + 200);
      *(undefined8 *)(lVar4 + 200) = uVar6;
      uVar3 = *(undefined4 *)(puVar10 + 3);
      *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(lVar4 + 0xd0);
      *(undefined4 *)(lVar4 + 0xd0) = uVar3;
      *(undefined4 *)(lVar4 + 0xe0) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + 0xe4)) && (*(longlong *)(lVar4 + 0xd8) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar4 + 0xd8),
                   (ulonglong)(*(uint *)(lVar4 + 0xe4) & 0x7fffffff) << 2);
      }
      *(undefined8 *)(lVar4 + 0xd8) = 0;
      *(undefined4 *)(lVar4 + 0xe4) = 0x80000000;
      lVar5 = *(longlong *)(lVar4 + 0xe8);
      if ((lVar5 != 0) && (*(int *)(lVar5 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar5,0);
        FUN_144b3ec00(lVar4 + 0xe8);
      }
    }
  }
  *param_2 = local_res8;
  return param_2;
}



// FUNCTION 144fb9810 FUN_144fb9810 body=484 status=ok
// SIG undefined FUN_144fb9810(void)

undefined8 * FUN_144fb9810(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 local_res8;
  
  plVar11 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar11 + *(int *)(param_1 + 0x28);
  while( true ) {
    if (plVar11 == plVar1) {
      *param_2 = 0;
      return param_2;
    }
    if ((*plVar11 != 0) && (*(int *)(*plVar11 + 0x100) != 0)) break;
    plVar11 = plVar11 + 1;
  }
  local_res8 = 0x28;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"hkaiNavMeshModifiedAabbs");
  }
  puVar9 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[2] = 1;
    puVar7[1] = 0xffffffff;
    *puVar7 = hkaiNavMeshModifiedAabbs::vftable;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = 0x80000000;
    puVar9 = puVar7;
  }
  if ((int)(*(uint *)((longlong)puVar9 + 0x24) & 0x7fffffff) < *(int *)(param_1 + 0x28)) {
    FUN_144fbb250(puVar9 + 3,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x28));
  }
  plVar11 = *(longlong **)(param_1 + 0x20);
  plVar1 = plVar11 + *(int *)(param_1 + 0x28);
  for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
    iVar2 = *(int *)(puVar9 + 4);
    lVar4 = *plVar11;
    iVar8 = iVar2 + 1;
    lVar5 = puVar9[3];
    *(int *)(puVar9 + 4) = iVar8;
    puVar10 = (undefined8 *)((longlong)iVar2 * 0x10 + puVar9[3]);
    for (puVar7 = puVar10; puVar7 != (undefined8 *)((longlong)iVar8 * 0x10 + lVar5);
        puVar7 = puVar7 + 2) {
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
      }
    }
    if ((lVar4 != 0) && (puVar7 = (undefined8 *)(lVar4 + 0xf8), puVar7 != puVar10)) {
      FUN_144c90920(puVar10,&PTR_vftable_14c6e47a0);
      FUN_144c90920(puVar7,&PTR_vftable_14c6e47a0);
      uVar6 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar6;
      uVar3 = *(undefined4 *)(puVar10 + 1);
      *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(lVar4 + 0x100);
      *(undefined4 *)(lVar4 + 0x100) = uVar3;
      uVar3 = *(undefined4 *)((longlong)puVar10 + 0xc);
      *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)(lVar4 + 0x104);
      *(undefined4 *)(lVar4 + 0x104) = uVar3;
    }
  }
  *param_2 = puVar9;
  return param_2;
}



// FUNCTION 144fb9a00 FUN_144fb9a00 body=224 status=ok
// SIG undefined FUN_144fb9a00(void)

longlong * FUN_144fb9a00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x160);
  if (*(int *)(lVar1 + 0x20) == 0) {
    *param_2 = 0;
    return param_2;
  }
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  local_res8 = 0x68;
  puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar3,"hkaiModifiedSections");
  }
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    uVar4 = FUN_144faef50(puVar3);
  }
  lVar2 = *(longlong *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  *param_2 = lVar1;
  return param_2;
}



// FUNCTION 144fb9ae0 FUN_144fb9ae0 body=18 status=ok
// SIG undefined FUN_144fb9ae0(void)

void FUN_144fb9ae0(longlong param_1,undefined8 *param_2)

{
  FUN_144b3d470(param_1 + 0x40,*param_2,0x80);
  return;
}



// FUNCTION 144fb9b00 FUN_144fb9b00 body=2999 status=ok
// SIG undefined FUN_144fb9b00(void)

void FUN_144fb9b00(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined4 *puVar18;
  void *pvVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  char **in_stack_fffffffffffffbf8;
  undefined4 uVar22;
  int local_3e8 [4];
  longlong *local_3d8;
  undefined8 uStack_3d0;
  char *local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  char *local_3a8;
  char *pcStack_3a0;
  int *local_398;
  longlong local_390;
  longlong local_388;
  undefined4 *local_380;
  int local_378;
  uint local_374;
  ulonglong local_370;
  undefined4 *local_368;
  undefined4 *local_360;
  uint local_358;
  int local_354;
  longlong local_350;
  ulonglong local_348;
  undefined *local_338;
  undefined *puStack_330;
  ulonglong local_328;
  longlong local_320;
  longlong local_318;
  undefined *local_308;
  undefined *puStack_300;
  undefined4 *local_2f8;
  undefined4 *puStack_2f0;
  undefined4 *local_2e8;
  undefined4 *puStack_2e0;
  undefined4 *local_2d8;
  undefined4 *puStack_2d0;
  undefined *local_2c8;
  undefined *puStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [32];
  undefined1 local_218 [352];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  undefined4 local_88;
  uint local_84;
  longlong local_80;
  undefined4 local_78;
  uint local_74;
  
  iVar6 = param_2[4];
  lVar15 = (longlong)iVar6;
  if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_144fbb6e0(param_5,&PTR_vftable_14c6e47c0,lVar15);
  }
  iVar3 = (int)param_5[1];
  if (iVar3 < iVar6) {
    puVar18 = (undefined4 *)((longlong)iVar3 * 0x58 + *param_5);
    *(int *)(param_5 + 1) = iVar6;
    puVar11 = (undefined4 *)(lVar15 * 0x58 + *param_5);
    if (puVar18 != puVar11) {
      puVar18 = puVar18 + 5;
      do {
        if (puVar18 != (undefined4 *)&DAT_00000014) {
          *(undefined1 *)(puVar18 + -4) = 0;
          *(undefined8 *)(puVar18 + -3) = 0;
          puVar18[-1] = 0;
          *puVar18 = 0x80000000;
          *(undefined8 *)(puVar18 + 1) = 0;
          puVar18[3] = 0;
          puVar18[4] = 0x80000000;
          *(undefined8 *)(puVar18 + 5) = 0;
          puVar18[7] = 0;
          puVar18[8] = 0x80000000;
          *(undefined8 *)(puVar18 + 9) = 0;
          puVar18[0xb] = 0;
          puVar18[0xc] = 0x80000000;
          *(undefined8 *)(puVar18 + 0xd) = 0;
          puVar18[0xf] = 0;
          puVar18[0x10] = 0x80000000;
        }
        puVar1 = puVar18 + 0x11;
        puVar18 = puVar18 + 0x16;
      } while (puVar1 != puVar11);
    }
  }
  else if (iVar6 < iVar3) {
    lVar7 = *param_5;
    *(int *)(param_5 + 1) = iVar6;
    lVar9 = (longlong)iVar3 * 0x58 + *param_5;
    while (lVar9 != lVar15 * 0x58 + lVar7) {
      lVar9 = lVar9 + -0x58;
      FUN_144fb6d30(lVar9);
    }
  }
  FUN_145316340(local_218);
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0x80000000;
  local_a0 = FUN_144b3d480();
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x80000000;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0x80000000;
  if (0.0 < *(float *)(param_1 + 0x118)) {
    FUN_145316b90(local_218);
  }
  iVar6 = *param_2;
  uVar20 = (ulonglong)_tls_index;
  local_354 = *(int *)(DAT_14c7fcf28 + 0x18);
  local_390 = *(longlong *)
               ((longlong)iVar6 * 0x120 + *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38));
  if (0 < local_354) {
    FUN_144d3efe0(local_3e8,*(undefined4 *)(DAT_14c7fcf28 + 0x20),
                  *(undefined4 *)(*(longlong *)(local_390 + 0x20) + 0x180),0);
    lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
    if (*(char *)(lVar15 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = *(longlong *)(lVar15 + 0xf0);
    if (lVar7 == 0) {
      if (*(char *)(lVar15 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar7 = FUN_144b3f4a0();
      *(longlong *)(lVar15 + 0xf0) = lVar7;
    }
    local_398 = (int *)0x0;
    if (*(longlong *)(lVar7 + 0x3e0) != 0) {
      local_3c8 = "B\x01\x04";
      uStack_3c0 = "";
      local_338 = &DAT_149c1e0c8;
      puStack_330 = &DAT_149c1e0cb;
      FUN_144be9f50(*(longlong *)(lVar7 + 0x3e0),&local_338,4,&local_398);
      if (local_398 != (int *)0x0) {
        *local_398 = local_3e8[0];
      }
    }
  }
  lVar15 = 0x114;
  local_3e8[0] = 0;
  if (0 < param_2[4]) {
    local_3c8 = "TtintersectOneFace";
    uStack_3c0 = "";
    local_388 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar20 * 8);
    local_3d8 = (longlong *)0x149c1e0e8;
    uVar17 = iVar6 << 0x16;
    lVar7 = 0xf0;
    uStack_3d0 = "";
    local_350 = 0x114;
    local_320 = 0xf0;
    local_398 = (int *)0x0;
    pvVar19 = ThreadLocalStoragePointer;
    local_358 = uVar17;
    local_348 = uVar20;
    do {
      lVar9 = local_388;
      uVar22 = (undefined4)((ulonglong)in_stack_fffffffffffffbf8 >> 0x20);
      if (*(char *)(local_388 + lVar15) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar8 = *(longlong *)(lVar9 + lVar7);
      if (lVar8 == 0) {
        lVar10 = *(longlong *)((longlong)pvVar19 + uVar20 * 8);
        if (*(char *)(lVar10 + lVar15) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar8 = FUN_144b3f4a0();
        *(longlong *)(lVar10 + lVar7) = lVar8;
      }
      local_318 = *(longlong *)(lVar8 + 0x3e0);
      if (local_318 != 0) {
        local_3a8 = "TtintersectOneFace";
        pcStack_3a0 = "";
        FUN_144b3f370(local_318,&local_3a8);
      }
      uVar12 = uVar17 | *(uint *)((longlong)local_398 + *(longlong *)(param_2 + 2));
      local_3d8 = (longlong *)0x0;
      uStack_3d0 = (char *)0x8000000000000000;
      local_3c8 = (char *)0x0;
      uStack_3c0 = (char *)0x8000000000000000;
      if (*(char *)(lVar9 + lVar15) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar9 = *(longlong *)(lVar9 + lVar7);
      if (lVar9 == 0) {
        lVar8 = *(longlong *)((longlong)pvVar19 + uVar20 * 8);
        if (*(char *)(lVar8 + lVar15) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar9 = FUN_144b3f4a0();
        *(longlong *)(lVar8 + lVar7) = lVar9;
      }
      lVar9 = *(longlong *)(lVar9 + 0x3e0);
      if (lVar9 != 0) {
        local_3a8 = "TtgatherSilhouettes";
        pcStack_3a0 = "";
        FUN_144b3f370(lVar9,&local_3a8);
      }
      (**(code **)(*param_3 + 0x10))(param_3,uVar12,&local_3d8,&local_3c8);
      if (lVar9 != 0) {
        local_308 = &DAT_149981764;
        puStack_300 = &DAT_149981766;
        local_3a8 = "Et";
        pcStack_3a0 = "";
        FUN_144b3f260(lVar9,&local_3a8);
      }
      lVar8 = (longlong)local_3e8[0];
      local_3a8 = (char *)0x0;
      pcStack_3a0 = (char *)0x0;
      lVar9 = *param_5;
      bVar2 = *(byte *)(*(longlong *)(*(longlong *)(local_390 + 0x20) + 0x68) + 0x80);
      local_3b8 = (undefined4 *)(CONCAT44(local_3b8._4_4_,uVar12) & 0xffffffff003fffff);
      lVar10 = FUN_144c44fc0(*(longlong *)(local_390 + 0x20),&local_3b8,&local_3a8);
      local_380 = (undefined4 *)0x0;
      uVar14 = (int)*(short *)(lVar10 + 8) + 1;
      local_378 = 0;
      local_374 = 0x80000000;
      if (*(char *)(local_388 + lVar15) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar15 = *(longlong *)(local_388 + lVar7);
      if (lVar15 == 0) {
        lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_348 * 8);
        if (*(char *)(lVar10 + local_350) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar15 = FUN_144b3f4a0();
        *(longlong *)(lVar10 + lVar7) = lVar15;
      }
      uVar16 = 0;
      uVar20 = *(ulonglong *)(*(longlong *)(lVar15 + 0x3d0) + 0x10);
      local_370 = uVar16;
      if (*(longlong *)(uVar20 + 8) == 0) {
        local_370 = uVar20;
      }
      local_3b8 = (undefined4 *)((longlong)(int)uVar14 * 0x10);
      local_360 = local_3b8;
      if (local_370 == 0) {
        puVar11 = (undefined4 *)
                  (*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_3b8 >> 8),1),&local_3b8,0x40);
      }
      else {
        local_328 = (longlong)local_3b8 + 0x3fU & 0xffffffffffffffc0;
        if (local_328 <= *(ulonglong *)(local_370 + 0x28)) {
          puVar11 = *(undefined4 **)(local_370 + 0x38);
          if (local_328 + (longlong)puVar11 <= *(ulonglong *)(local_370 + 0x40)) {
            *(ulonglong *)(local_370 + 0x38) = local_328 + (longlong)puVar11;
            goto LAB_144fba085;
          }
        }
        puVar11 = (undefined4 *)FUN_144b454a0(local_370,&local_328);
      }
LAB_144fba085:
      local_374 = uVar14 | 0x80000000;
      local_380 = puVar11;
      local_368 = puVar11;
      FUN_145316ba0(local_218,uVar12,(ulonglong)uStack_3d0 & 0xffffffff);
      if ((int)uStack_3d0 != 0) {
        local_268 = *(undefined8 *)(local_390 + 0xc0);
        uStack_260 = *(undefined8 *)(local_390 + 200);
        local_258 = *(undefined4 *)(local_390 + 0xd0);
        uStack_254 = *(undefined4 *)(local_390 + 0xd4);
        uStack_250 = *(undefined4 *)(local_390 + 0xd8);
        uStack_24c = *(undefined4 *)(local_390 + 0xdc);
        local_248 = *(undefined4 *)(local_390 + 0xe0);
        uStack_244 = *(undefined4 *)(local_390 + 0xe4);
        uStack_240 = *(undefined4 *)(local_390 + 0xe8);
        uStack_23c = *(undefined4 *)(local_390 + 0xec);
        FUN_145316c70(local_218,*(undefined8 *)(local_390 + 0x20),&local_268,bVar2 & 1,
                      CONCAT44(uVar22,uVar12),&local_380);
        lVar15 = local_390;
        uVar20 = uVar16;
        uVar21 = uVar16;
        if (0 < (int)uStack_3d0) {
          do {
            if (*(longlong *)(local_3c8 + uVar16) == 0) {
LAB_144fba231:
              local_3b8 = *(undefined4 **)(uVar20 + (longlong)local_3d8);
              puStack_2e0 = local_3b8 + (longlong)*(int *)(uVar20 + 8 + (longlong)local_3d8) * 4;
              local_2e8 = local_3b8;
              uStack_3b0 = puStack_2e0;
              FUN_145317140(local_218,&local_3b8,*(undefined8 *)(local_3c8 + uVar16));
            }
            else {
              local_288 = 0;
              uStack_280 = 0;
              local_278 = 0;
              uStack_270 = 0;
              FUN_144f72310(&local_288,lVar15 + 0x60,*(longlong *)(local_3c8 + uVar16) + 0x30);
              (**(code **)(**(longlong **)(local_3c8 + uVar16) + 0x40))
                        (*(longlong **)(local_3c8 + uVar16),&local_288,
                         *(undefined4 *)(*(longlong *)(*(longlong *)(lVar15 + 0x20) + 0x68) + 0xb0),
                         &local_268,local_238);
              local_2b8 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar15 + 0x20) + 0x68) + 0xb0)
              ;
              local_2a8 = *(undefined4 *)
                           (param_1 + 0x40 +
                           (longlong)*(int *)(*(longlong *)(lVar15 + 0x20) + 0x180) * 4);
              uStack_2b4 = local_2b8;
              uStack_2b0 = local_2b8;
              uStack_2ac = local_2b8;
              uStack_2a4 = local_2a8;
              uStack_2a0 = local_2a8;
              uStack_29c = local_2a8;
              FUN_144ca9e80(local_238,&local_268,&local_2a8,&local_2b8,1);
              puStack_2f0 = local_380 + (longlong)local_378 * 4;
              local_2f8 = local_380;
              local_3b8 = local_380;
              uStack_3b0 = puStack_2f0;
              iVar6 = FUN_144c55320(local_238,&local_3b8);
              if (iVar6 != 0) goto LAB_144fba231;
            }
            uVar14 = (int)uVar21 + 1;
            uVar16 = uVar16 + 8;
            lVar7 = local_320;
            uVar20 = uVar20 + 0x10;
            uVar21 = (ulonglong)uVar14;
            uVar17 = local_358;
          } while ((int)uVar14 < (int)uStack_3d0);
        }
      }
      lVar10 = local_390;
      local_2d8 = local_380;
      puStack_2d0 = local_380 + (longlong)local_378 * 4;
      local_3b8 = local_380;
      in_stack_fffffffffffffbf8 = &local_3a8;
      uStack_3b0 = puStack_2d0;
      FUN_145317270(local_218,lVar8 * 0x58 + lVar9,local_390,&local_3b8,in_stack_fffffffffffffbf8,
                    param_4,*(undefined4 *)(param_1 + 0x10c));
      pvVar19 = ThreadLocalStoragePointer;
      lVar15 = local_350;
      uVar20 = local_348;
      if (0 < local_354) {
        local_3b8 = (undefined4 *)(CONCAT44(local_3b8._4_4_,uVar12) & 0xffffffff003fffff);
        FUN_144c52c90(lVar10,&local_3b8,&local_298);
        uVar20 = local_348;
        lVar15 = local_350;
        pvVar19 = ThreadLocalStoragePointer;
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + local_348 * 8);
        if (*(char *)(local_350 + lVar9) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar8 = *(longlong *)(lVar9 + lVar7);
        if (lVar8 == 0) {
          if (*(char *)(lVar15 + lVar9) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar8 = FUN_144b3f4a0();
          *(longlong *)(local_388 + lVar7) = lVar8;
        }
        local_3b8 = (undefined4 *)0x0;
        if (*(longlong *)(lVar8 + 0x3e0) != 0) {
          local_2c8 = &DAT_149c1e0c4;
          puStack_2c0 = &DAT_149c1e0c7;
          local_3a8 = "B\b\x10";
          pcStack_3a0 = "";
          FUN_144be9f50(*(longlong *)(lVar8 + 0x3e0),&local_3a8,0x10,&local_3b8);
          if (local_3b8 != (undefined4 *)0x0) {
            *local_3b8 = local_298;
            local_3b8[1] = uStack_294;
            local_3b8[2] = uStack_290;
            local_3b8[3] = 0x3f800000;
          }
        }
      }
      if (local_368 == local_380) {
        local_378 = 0;
      }
      if (local_370 == 0) {
        (*DAT_14c787678)();
      }
      else {
        uVar16 = (longlong)local_360 + 0x3fU & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_370 + 0x28) < uVar16) ||
           (uVar16 + (longlong)local_368 != *(longlong *)(local_370 + 0x38))) {
          FUN_144be8550();
        }
        else {
          *(undefined4 **)(local_370 + 0x38) = local_368;
          if (*(undefined4 **)(local_370 + 0x48) == local_368) {
            FUN_144be8430();
          }
        }
      }
      local_378 = 0;
      if ((-1 < (int)local_374) && (local_380 != (undefined4 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_380,(ulonglong)(local_374 & 0x7fffffff) << 4);
      }
      lVar9 = (longlong)uStack_3c0;
      uVar12 = uStack_3c0._4_4_;
      local_380 = (undefined4 *)0x0;
      local_374 = 0x80000000;
      uStack_3c0 = (char *)((ulonglong)uStack_3c0._4_4_ << 0x20);
      if ((-1 < lVar9) && (local_3c8 != (char *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_3c8,(ulonglong)(uVar12 & 0x7fffffff) << 3);
      }
      plVar5 = local_3d8;
      local_3c8 = (char *)0x0;
      uStack_3c0 = (char *)CONCAT44(0x80000000,(undefined4)uStack_3c0);
      plVar4 = local_3d8 + (longlong)(int)uStack_3d0 * 2;
      uVar16 = (ulonglong)uStack_3d0;
      while (plVar4 != plVar5) {
        plVar13 = plVar4 + -2;
        *(undefined4 *)(plVar4 + -1) = 0;
        uStack_3d0 = (char *)uVar16;
        if ((-1 < (int)*(uint *)((longlong)plVar4 + -4)) && (*plVar13 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,*plVar13,
                     (ulonglong)(*(uint *)((longlong)plVar4 + -4) & 0x7fffffff) << 4);
        }
        *plVar13 = 0;
        *(undefined4 *)((longlong)plVar4 + -4) = 0x80000000;
        plVar4 = plVar13;
        uVar16 = (ulonglong)uStack_3d0;
      }
      uStack_3d0._4_4_ = (uint)(uVar16 >> 0x20);
      uVar12 = uStack_3d0._4_4_;
      uStack_3d0 = (char *)((ulonglong)uStack_3d0._4_4_ << 0x20);
      if ((-1 < (longlong)uVar16) && (local_3d8 != (longlong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_3d8,(ulonglong)(uVar12 & 0x7fffffff) << 4);
      }
      local_3d8 = (longlong *)0x0;
      uStack_3d0 = (char *)CONCAT44(0x80000000,(int)uStack_3d0);
      if (local_318 != 0) {
        local_338 = &DAT_149981764;
        puStack_330 = &DAT_149981766;
        local_3a8 = "Et";
        pcStack_3a0 = "";
        FUN_144b3f260(local_318,&local_3a8);
      }
      local_3e8[0] = local_3e8[0] + 1;
      local_398 = local_398 + 1;
    } while (local_3e8[0] < param_2[4]);
  }
  local_78 = 0;
  if ((-1 < (int)local_74) && (local_80 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_80,(ulonglong)(local_74 & 0x7fffffff) * 0x30);
  }
  local_80 = 0;
  local_74 = 0x80000000;
  local_88 = 0;
  if ((-1 < (int)local_84) && (local_90 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_90,(ulonglong)(local_84 & 0x7fffffff) << 3);
  }
  local_90 = 0;
  local_84 = 0x80000000;
  FUN_144fbae70(&local_b0);
  FUN_144fbabb0(local_218);
  return;
}



// FUNCTION 144fba6c0 FUN_144fba6c0 body=737 status=ok
// SIG undefined FUN_144fba6c0(void)

void FUN_144fba6c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int local_res18 [2];
  longlong *local_res20;
  longlong local_80;
  int local_78;
  uint local_74;
  undefined8 local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  
  cVar2 = *(char *)(param_1 + 0x108);
  if (cVar2 == '\0') {
    plVar9 = *(longlong **)(param_1 + 0x20);
    plVar1 = plVar9 + *(int *)(param_1 + 0x28);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      if (*plVar9 != 0) {
        FUN_14500dda0();
      }
    }
  }
  else if (cVar2 == '\x01') {
    plVar9 = *(longlong **)(param_1 + 0x20);
    plVar1 = plVar9 + *(int *)(param_1 + 0x28);
    if (plVar9 != plVar1) {
      do {
        lVar13 = *plVar9;
        if (lVar13 != 0) {
          lVar6 = *(longlong *)(lVar13 + 0xf8);
          lStack_60 = (longlong)*(int *)(lVar13 + 0x100) * 0x20 + lVar6;
          local_res18[0] = *(int *)(lVar13 + 0x20);
          local_68._0_4_ = (undefined4)lVar6;
          local_68._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
          local_58 = (undefined4)local_68;
          uStack_54 = local_68._4_4_;
          local_68 = lVar6;
          uStack_50 = lStack_60;
          FUN_144feb6e0(*(undefined8 *)(param_1 + 0x18),local_res18,&local_58);
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar1);
      return;
    }
  }
  else if (cVar2 == '\x02') {
    local_res20 = *(longlong **)(param_1 + 0x20);
    plVar1 = local_res20 + *(int *)(param_1 + 0x28);
    if (local_res20 != plVar1) {
      do {
        if (*local_res20 != 0) {
          iVar3 = *(int *)(*local_res20 + 0x20);
          local_80 = 0;
          lVar13 = (longlong)iVar3 * 0x38 + *param_2;
          local_78 = 0;
          local_74 = 0x80000000;
          iVar7 = *(int *)(lVar13 + 0x10) + *(int *)(lVar13 + 0x20);
          if (0 < iVar7) {
            FUN_144c584b0(&local_80,&PTR_vftable_14c6e47c0,(longlong)iVar7);
          }
          iVar7 = local_78;
          uVar4 = *(uint *)(lVar13 + 0x10);
          uVar11 = (ulonglong)uVar4;
          puVar10 = *(undefined4 **)(lVar13 + 8);
          iVar12 = local_78 + uVar4;
          if ((int)(local_74 & 0x7fffffff) < iVar12) {
            FUN_144c585a0(&local_80,&PTR_vftable_14c6e47c0,(longlong)iVar12);
          }
          puVar8 = (undefined4 *)(local_80 + (longlong)iVar7 * 4);
          if (0 < (int)uVar4) {
            do {
              if (puVar8 != (undefined4 *)0x0) {
                uVar5 = *puVar10;
                puVar10 = puVar10 + 1;
                *puVar8 = uVar5;
              }
              uVar11 = uVar11 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar11 != 0);
          }
          uVar4 = *(uint *)(lVar13 + 0x20);
          uVar11 = (ulonglong)uVar4;
          puVar10 = *(undefined4 **)(lVar13 + 0x18);
          iVar7 = iVar12 + uVar4;
          local_78 = iVar12;
          if ((int)(local_74 & 0x7fffffff) < iVar7) {
            FUN_144c585a0(&local_80,&PTR_vftable_14c6e47c0,(longlong)iVar7);
          }
          lVar13 = local_80;
          puVar8 = (undefined4 *)(local_80 + (longlong)iVar12 * 4);
          if (0 < (int)uVar4) {
            do {
              if (puVar8 != (undefined4 *)0x0) {
                uVar5 = *puVar10;
                puVar10 = puVar10 + 1;
                *puVar8 = uVar5;
              }
              uVar11 = uVar11 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar11 != 0);
          }
          lStack_60 = local_80 + (longlong)iVar7 * 4;
          local_68._0_4_ = (undefined4)local_80;
          local_68._4_4_ = (undefined4)((ulonglong)local_80 >> 0x20);
          local_58 = (undefined4)local_68;
          uStack_54 = local_68._4_4_;
          local_res18[0] = iVar3;
          local_68 = local_80;
          uStack_50 = lStack_60;
          FUN_144feba70(*(undefined8 *)(param_1 + 0x18),local_res18,&local_58);
          local_78 = 0;
          if ((-1 < (int)local_74) && (lVar13 != 0)) {
            (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                      (&PTR_vftable_14c6e47c0,lVar13,(ulonglong)(local_74 & 0x7fffffff) << 2);
          }
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 != plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 144fba9b0 FUN_144fba9b0 body=325 status=ok
// SIG undefined FUN_144fba9b0(void)

void FUN_144fba9b0(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144fbb0d0(param_1,*param_1 + -0x30 + (longlong)(int)param_1[1] * 0x30);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  FUN_144c91db0(*param_1 + 0x10 + (longlong)(int)uVar3 * 0x30);
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    puVar8 = (undefined4 *)(*param_1 + -0x30 + (longlong)(int)lVar6 * 0x30);
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)uVar3 * 0x30);
    if (puVar1 != puVar8) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar8;
        puVar1[2] = puVar8[2];
        FUN_144c91f60(puVar1 + 4,puVar8 + 4);
      }
      FUN_144c91db0(puVar8 + 4);
    }
  }
  lVar6 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar9;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar9;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144fbab00 FUN_144fbab00 body=176 status=ok
// SIG undefined FUN_144fbab00(void)

void FUN_144fbab00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar1 = *param_1;
  for (lVar2 = (longlong)(int)param_1[1] * 0x30 + lVar1; lVar2 != lVar1; lVar2 = lVar2 + -0x30) {
    FUN_144c91db0(lVar2 + -0x20);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x30);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144fbabb0 FUN_144fbabb0 body=690 status=ok
// SIG undefined FUN_144fbabb0(void)

void FUN_144fbabb0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x15c)) && (*(longlong *)(param_1 + 0x150) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x150),
               (ulonglong)(*(uint *)(param_1 + 0x15c) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14c)) && (*(longlong *)(param_1 + 0x140) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x140),
               (ulonglong)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x13c)) && (*(longlong *)(param_1 + 0x130) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x130),
               (ulonglong)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 300)) && (*(longlong *)(param_1 + 0x120) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x120),
               (ulonglong)(*(uint *)(param_1 + 300) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 300) = 0x80000000;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x114)) && (*(longlong *)(param_1 + 0x108) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x108),
               (ulonglong)(*(uint *)(param_1 + 0x114) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xfc)) && (*(longlong *)(param_1 + 0xf0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xf0),
               (ulonglong)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if ((-1 < *(int *)(param_1 + 0xe4)) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xd8),*(int *)(param_1 + 0xe4) * 2);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if ((-1 < *(int *)(param_1 + 0xd4)) && (*(longlong *)(param_1 + 200) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 200),*(int *)(param_1 + 0xd4) * 2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xbc)) && (*(longlong *)(param_1 + 0xb0) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xb0),
               (ulonglong)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0x80000000;
  return;
}



// FUNCTION 144fbae70 FUN_144fbae70 body=123 status=ok
// SIG undefined FUN_144fbae70(void)

void FUN_144fbae70(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 5);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144fbaef0 FUN_144fbaef0 body=155 status=ok
// SIG undefined FUN_144fbaef0(void)

int * FUN_144fbaef0(longlong *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_144fbb140();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144fbbdc0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined4 *)((longlong)(int)param_1[1] * 0x30 + *param_1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
      puVar1[2] = *param_4;
      FUN_144c91e80(puVar1 + 4,param_4 + 2);
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 144fbaf90 FUN_144fbaf90 body=148 status=ok
// SIG undefined FUN_144fbaf90(void)

longlong * FUN_144fbaf90(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144fbb5e0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144c585a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 4;
  return param_2;
}



// FUNCTION 144fbb030 FUN_144fbb030 body=148 status=ok
// SIG undefined FUN_144fbb030(void)

longlong * FUN_144fbb030(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144fbb9b0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144fbbf20(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 4;
  return param_2;
}



// FUNCTION 144fbb0d0 FUN_144fbb0d0 body=108 status=ok
// SIG undefined FUN_144fbb0d0(void)

uint * FUN_144fbb0d0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 0x30) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144fbb140 FUN_144fbb140 body=260 status=ok
// SIG undefined FUN_144fbb140(void)

uint * FUN_144fbb140(longlong *param_1,uint *param_2,int *param_3)

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
LAB_144fbb21c:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x30) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144fbb21c;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144fbb250 FUN_144fbb250 body=466 status=ok
// SIG undefined FUN_144fbb250(void)

void FUN_144fbb250(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  longlong local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  local_res20 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,
                                 *(undefined4 *)(param_2 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  uVar9 = (ulonglong)uVar2;
  local_res18 = puVar4;
  if (0 < (int)uVar2) {
    puVar8 = (undefined4 *)(local_res20 + 0xc);
    uVar6 = (ulonglong)uVar2;
    do {
      puVar1 = (undefined8 *)(puVar8 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        FUN_144c90920(puVar4,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar4;
        puVar8[-1] = *(undefined4 *)(puVar4 + 1);
        *puVar8 = *(undefined4 *)((longlong)puVar4 + 0xc);
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar8 = puVar8 + 4;
      puVar4 = puVar4 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    puVar5 = (uint *)((longlong)local_res18 + 0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(longlong *)(puVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar5 + -3),
                   (ulonglong)(*puVar5 & 0x7fffffff) << 5);
      }
      *puVar5 = 0x80000000;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 1;
      param_2 = local_res10;
    } while (uVar9 != 0);
  }
  lVar3 = local_res20;
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar6 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar6 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 144fbb430 FUN_144fbb430 body=417 status=ok
// SIG undefined FUN_144fbb430(void)

void FUN_144fbb430(longlong *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar6 = param_3;
  if (param_3 < uVar8) {
    uVar6 = uVar8;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar8 = uVar6 << 5;
  local_res8 = uVar8;
  local_res18 = uVar8;
  local_res20 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,
                                 *(undefined4 *)(param_2 + 0xc));
  uVar2 = *(uint *)(param_1 + 1);
  puVar7 = (undefined8 *)*param_1;
  uVar10 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar9 = (undefined4 *)(local_res20 + 8);
    uVar8 = (ulonglong)uVar2;
    puVar5 = puVar7;
    do {
      puVar1 = (undefined8 *)(puVar9 + -2);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
        *puVar9 = 0;
        puVar9[1] = 0x80000000;
        FUN_144c52690(puVar5,&PTR_vftable_14c6e47a0);
        *puVar1 = *puVar5;
        *puVar9 = *(undefined4 *)(puVar5 + 1);
        puVar9[1] = *(undefined4 *)((longlong)puVar5 + 0xc);
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined8 *)(puVar9 + 2) = puVar5[2];
        puVar9[4] = *(undefined4 *)(puVar5 + 3);
        uVar4 = FUN_144b3d480();
        puVar5[2] = uVar4;
        *(undefined4 *)(puVar5 + 3) = 0;
      }
      puVar9 = puVar9 + 8;
      puVar5 = puVar5 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    do {
      FUN_144c90d90(puVar7);
      puVar7 = puVar7 + 4;
      uVar10 = uVar10 - 1;
      uVar8 = local_res18;
      param_2 = local_res10;
    } while (uVar10 != 0);
  }
  lVar3 = local_res20;
  if (uVar8 + 0x20 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar6 = uVar6 + 1;
    if (uVar8 + 0x20 <= local_res8) {
      uVar6 = uVar6 + (local_res8 - uVar8 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 144fbb5e0 FUN_144fbb5e0 body=254 status=ok
// SIG undefined FUN_144fbb5e0(void)

uint * FUN_144fbb5e0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144fbb6b6:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 4) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_144fbb6b6;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144fbb6e0 FUN_144fbb6e0 body=719 status=ok
// SIG undefined FUN_144fbb6e0(void)

ulonglong FUN_144fbb6e0(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  ulonglong local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar6 * 2;
  uVar8 = param_3;
  if (param_3 < uVar7) {
    uVar8 = uVar7;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res20 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x58,&local_res18);
  uVar1 = (uint)param_1[1];
  local_res8 = (ulonglong)uVar1;
  puVar4 = (undefined4 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)(local_res20 + 0x14);
    puVar5 = puVar4 + 5;
    puVar10 = puVar4;
    do {
      if (puVar3 + -5 != (undefined4 *)0x0) {
        puVar3[-5] = *puVar10;
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
        FUN_147e4a87c(puVar5 + 0xd);
        *(undefined8 *)(puVar3 + 0xd) = *(undefined8 *)(puVar5 + 0xd);
        puVar3[0xf] = puVar5[0xf];
        puVar3[0x10] = puVar5[0x10];
        *(undefined8 *)(puVar5 + 0xd) = 0;
        *(undefined8 *)(puVar5 + 0xf) = 0;
      }
      puVar3 = puVar3 + 0x16;
      puVar10 = puVar10 + 0x16;
      puVar5 = puVar5 + 0x16;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    do {
      FUN_144fb6d30(puVar4);
      puVar4 = puVar4 + 0x16;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar8 * 0x58 + 0x58;
  uVar9 = uVar8;
  if (uVar7 <= local_res18) {
    local_res18 = local_res18 - 0x58;
    uVar9 = uVar8 + 1;
    if (uVar7 <= local_res18) {
      uVar8 = local_res18 + uVar8 * -0x58;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      uVar7 = SUB168(ZEXT816(0x2e8ba2e8ba2e8ba3) * auVar2,0);
      uVar9 = uVar9 + uVar8 / 0x58;
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *param_1 = local_res20;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x58);
    *param_1 = local_res20;
    uVar7 = local_res20;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar7;
}



// FUNCTION 144fbb9b0 FUN_144fbb9b0 body=254 status=ok
// SIG undefined FUN_144fbb9b0(void)

uint * FUN_144fbb9b0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = (int)param_1[1] + 1;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar7 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar7)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar7 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  iVar8 = *param_3;
  lVar3 = param_1[2];
  uVar9 = iVar8 * -0x61c8864f;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | iVar8 * -0x4f000000;
  uVar7 = (ulonglong)(*(uint *)(param_1 + 3) & uVar9);
  iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar7 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar9;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144fbba86:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 4) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_144fbba86;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 144fbbab0 FUN_144fbbab0 body=319 status=ok
// SIG undefined FUN_144fbbab0(void)

void FUN_144fbbab0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144fbbbf0 FUN_144fbbbf0 body=459 status=ok
// SIG undefined FUN_144fbbbf0(void)

void FUN_144fbbbf0(longlong *param_1,longlong *param_2,ulonglong param_3)

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
        FUN_144c52690(puVar4,&PTR_vftable_14c6e47a0);
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
                   (ulonglong)(*puVar5 & 0x7fffffff) << 2);
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



// FUNCTION 144fbbdc0 FUN_144fbbdc0 body=349 status=ok
// SIG undefined FUN_144fbbdc0(void)

ulonglong FUN_144fbbdc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  longlong *local_res10;
  undefined4 *local_res18;
  undefined4 *local_res20;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar5 = uVar7 * 2;
  uVar6 = param_3;
  if (param_3 < uVar5) {
    uVar6 = uVar5;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x30,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  puVar4 = (undefined4 *)*param_1;
  uVar5 = (ulonglong)uVar1;
  local_res18 = puVar4;
  local_res20 = puVar3;
  if (0 < (int)uVar1) {
    uVar8 = (ulonglong)uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        puVar3[2] = puVar4[2];
        FUN_144c91f60(puVar3 + 4,puVar4 + 4);
      }
      puVar3 = puVar3 + 0xc;
      puVar4 = puVar4 + 0xc;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    puVar4 = local_res18 + 4;
    do {
      FUN_144c91db0(puVar4);
      puVar4 = puVar4 + 0xc;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar4 = local_res20;
  uVar5 = uVar6 * 0x30 + 0x30;
  uVar8 = uVar6;
  if (uVar5 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar8 = uVar6 + 1;
    if (uVar5 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x30;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar6;
      uVar5 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar8 = uVar8 + uVar6 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar5 = (**(code **)(*local_res10 + 0x18))(local_res10,*param_1,uVar7 * 0x30);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return uVar5;
}



// FUNCTION 144fbbf20 FUN_144fbbf20 body=247 status=ok
// SIG undefined FUN_144fbbf20(void)

void FUN_144fbbf20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144fbc020 FUN_144fbc020 body=70 status=ok
// SIG undefined FUN_144fbc020(void)

undefined8 * FUN_144fbc020(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[3] = param_2;
  *param_1 = hkaiNavigatorManager::vftable;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  FUN_144fbc4e0();
  return param_1;
}



// FUNCTION 144fbc070 FUN_144fbc070 body=234 status=ok
// SIG undefined FUN_144fbc070(void)

void FUN_144fbc070(undefined8 *param_1)

{
  *param_1 = hkaiNavigatorManager::vftable;
  if (param_1[3] != 0) {
    FUN_144bfd110(param_1[3] + 0xf8,param_1);
    FUN_144bfd110(param_1[3] + 0x110,param_1);
    FUN_144bfd110(param_1[3] + 0x118,param_1);
    FUN_144bfd110(param_1[3] + 0x48,param_1);
    FUN_144bfd110(param_1[3] + 0x88,param_1);
    FUN_144bfd110(param_1[3] + 0x90,param_1);
    FUN_144bfd110(param_1[3] + 0x20,param_1);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144fbc170 FUN_144fbc170 body=75 status=ok
// SIG undefined FUN_144fbc170(void)

void FUN_144fbc170(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_2 + 0x480);
  *(int *)(*(longlong *)
            (*(longlong *)(param_1 + 0x20) + -8 + (longlong)*(int *)(param_1 + 0x28) * 8) + 0x480) =
       iVar3;
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = iVar4 + -1;
  *(int *)(param_1 + 0x28) = iVar5;
  if (iVar5 != iVar3) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + ((longlong)iVar4 + -1) * 8);
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8);
    if ((puVar2 != puVar1) && (puVar2 != (undefined8 *)0x0)) {
      *puVar2 = *puVar1;
    }
  }
  return;
}



// FUNCTION 144fbc1c0 FUN_144fbc1c0 body=79 status=ok
// SIG undefined FUN_144fbc1c0(void)

undefined8 FUN_144fbc1c0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar3 + *(int *)(param_1 + 0x28);
  while( true ) {
    if (puVar3 == puVar1) {
      return 0;
    }
    cVar2 = FUN_145011d30(*puVar3);
    if (cVar2 != '\0') break;
    puVar3 = puVar3 + 1;
  }
  return 1;
}



// FUNCTION 144fbc210 FUN_144fbc210 body=105 status=ok
// SIG undefined FUN_144fbc210(void)

void FUN_144fbc210(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_1450131c0(*puVar2,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 144fbc280 FUN_144fbc280 body=92 status=ok
// SIG undefined FUN_144fbc280(void)

void FUN_144fbc280(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_145013380(*puVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 144fbc2e0 FUN_144fbc2e0 body=92 status=ok
// SIG undefined FUN_144fbc2e0(void)

void FUN_144fbc2e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_145013420(*puVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 144fbc340 FUN_144fbc340 body=100 status=ok
// SIG undefined FUN_144fbc340(void)

void FUN_144fbc340(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res8 [2];
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    local_res8[0] = *param_3;
    FUN_145013490(*puVar2,param_2,local_res8);
  }
  return;
}



// FUNCTION 144fbc3b0 FUN_144fbc3b0 body=92 status=ok
// SIG undefined FUN_144fbc3b0(void)

void FUN_144fbc3b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_1450136e0(*puVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 144fbc410 FUN_144fbc410 body=105 status=ok
// SIG undefined FUN_144fbc410(void)

void FUN_144fbc410(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_145013840(*puVar2,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 144fbc480 FUN_144fbc480 body=92 status=ok
// SIG undefined FUN_144fbc480(void)

void FUN_144fbc480(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  puVar1 = puVar2 + *(int *)(param_1 + 0x28);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_145013870(*puVar2,param_2,param_3);
  }
  return;
}



// FUNCTION 144fbc4e0 FUN_144fbc4e0 body=190 status=ok
// SIG undefined FUN_144fbc4e0(void)

void FUN_144fbc4e0(longlong param_1)

{
  FUN_144fbc5a0(*(longlong *)(param_1 + 0x18) + 0xf8,param_1,FUN_144fbc210);
  FUN_144fbc640(*(longlong *)(param_1 + 0x18) + 0x110,param_1,FUN_144fbc280);
  FUN_144fbc6e0(*(longlong *)(param_1 + 0x18) + 0x118,param_1,FUN_144fbc2e0);
  FUN_144fbc780(*(longlong *)(param_1 + 0x18) + 0x48,param_1,FUN_144fbc340);
  FUN_144fbc820(*(longlong *)(param_1 + 0x18) + 0x88,param_1,FUN_144fbc3b0);
  FUN_144fbc8c0(*(longlong *)(param_1 + 0x18) + 0x90,param_1,FUN_144fbc410);
  FUN_144fbc960(*(longlong *)(param_1 + 0x18) + 0x20,param_1,FUN_144fbc480);
  return;
}



// FUNCTION 144fbc5a0 FUN_144fbc5a0 body=160 status=ok
// SIG undefined FUN_144fbc5a0(void)

undefined8 * FUN_144fbc5a0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar2 = hkSignal3<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunStartingInfo_const&___ptr64,hkaiWorldSignals::ProcessingRunStartingResponseInterface&___ptr64>
              ::
              MemberSlot<hkaiNavigatorManager,void_(__cdecl_hkaiNavigatorManager::*)(hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunStartingInfo_const&___ptr64,hkaiWorldSignals::ProcessingRunStartingResponseInterface&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 144fbc640 FUN_144fbc640 body=160 status=ok
// SIG undefined FUN_144fbc640(void)

undefined8 * FUN_144fbc640(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
              MemberSlot<hkaiNavigatorManager,void_(__cdecl_hkaiNavigatorManager::*)(hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunAbortedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 144fbc6e0 FUN_144fbc6e0 body=160 status=ok
// SIG undefined FUN_144fbc6e0(void)

undefined8 * FUN_144fbc6e0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
              MemberSlot<hkaiNavigatorManager,void_(__cdecl_hkaiNavigatorManager::*)(hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunCommittedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 144fbc780 FUN_144fbc780 body=160 status=ok
// SIG undefined FUN_144fbc780(void)

undefined8 * FUN_144fbc780(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar2 = hkSignal2<hkaiWorld*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>_>::
              MemberSlot<hkaiNavigatorManager,void_(__cdecl_hkaiNavigatorManager::*)(hkaiWorld*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 144fbc820 FUN_144fbc820 body=160 status=ok
// SIG undefined FUN_144fbc820(void)

undefined8 * FUN_144fbc820(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar2 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::NavMeshDataModifiedInfo_const&___ptr64>
              ::
              MemberSlot<hkaiNavigatorManager,void_(__cdecl_hkaiNavigatorManager::*)(hkaiWorld*___ptr64,hkaiWorldSignals::NavMeshDataModifiedInfo_const&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 144fbc8c0 FUN_144fbc8c0 body=160 status=ok
// SIG undefined FUN_144fbc8c0(void)

undefined8 * FUN_144fbc8c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar2 = hkSignal3<hkaiWorld*___ptr64,hkaiWorldSignals::NavDataJustModifiedInfo_const&___ptr64,hkaiWorldSignals::NavDataJustModifiedResponseInterface&___ptr64>
              ::
              MemberSlot<hkaiNavigatorManager,void_(__cdecl_hkaiNavigatorManager::*)(hkaiWorld*___ptr64,hkaiWorldSignals::NavDataJustModifiedInfo_const&___ptr64,hkaiWorldSignals::NavDataJustModifiedResponseInterface&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 144fbc960 FUN_144fbc960 body=160 status=ok
// SIG undefined FUN_144fbc960(void)

undefined8 * FUN_144fbc960(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

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
    *puVar2 = hkSignal2<hkaiWorld*___ptr64,hkVector4f_const&___ptr64>::
              MemberSlot<hkaiNavigatorManager,void_(__cdecl_hkaiNavigatorManager::*)(hkaiWorld*___ptr64,hkVector4f_const&___ptr64)___ptr64>
              ::vftable;
    puVar2[3] = param_3;
  }
  return puVar2;
}



// FUNCTION 144fbca00 FUN_144fbca00 body=71 status=ok
// SIG undefined FUN_144fbca00(void)

undefined8 * FUN_144fbca00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal3<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunStartingInfo_const&___ptr64,hkaiWorldSignals::ProcessingRunStartingResponseInterface&___ptr64>
             ::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144fbca50 FUN_144fbca50 body=11 status=ok
// SIG undefined FUN_144fbca50(void)

void FUN_144fbca50(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144fbca57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fbca60 FUN_144fbca60 body=24 status=ok
// SIG undefined FUN_144fbca60(void)

undefined8 FUN_144fbca60(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144fbca80 FUN_144fbca80 body=3 status=ok
// SIG undefined FUN_144fbca80(void)

undefined8 FUN_144fbca80(void)

{
  return 0;
}



// FUNCTION 144fbca90 FUN_144fbca90 body=19 status=ok
// SIG undefined FUN_144fbca90(void)

void FUN_144fbca90(longlong param_1,undefined8 param_2)

{
  FUN_144fbc5a0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcab0 FUN_144fbcab0 body=33 status=ok
// SIG undefined FUN_144fbcab0(void)

void FUN_144fbcab0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144fbd3f0(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcae0 FUN_144fbcae0 body=15 status=ok
// SIG undefined FUN_144fbcae0(void)

void FUN_144fbcae0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 144fbcaf0 FUN_144fbcaf0 body=71 status=ok
// SIG undefined FUN_144fbcaf0(void)

undefined8 * FUN_144fbcaf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal3<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunStartingInfo_const&___ptr64,hkaiWorldSignals::ProcessingRunStartingResponseInterface&___ptr64>
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



// FUNCTION 144fbcb40 FUN_144fbcb40 body=71 status=ok
// SIG undefined FUN_144fbcb40(void)

undefined8 * FUN_144fbcb40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunAbortedInfo_const&___ptr64>
             ::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144fbcb90 FUN_144fbcb90 body=11 status=ok
// SIG undefined FUN_144fbcb90(void)

void FUN_144fbcb90(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144fbcb97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fbcba0 FUN_144fbcba0 body=24 status=ok
// SIG undefined FUN_144fbcba0(void)

undefined8 FUN_144fbcba0(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144fbcbc0 FUN_144fbcbc0 body=3 status=ok
// SIG undefined FUN_144fbcbc0(void)

undefined8 FUN_144fbcbc0(void)

{
  return 0;
}



// FUNCTION 144fbcbd0 FUN_144fbcbd0 body=19 status=ok
// SIG undefined FUN_144fbcbd0(void)

void FUN_144fbcbd0(longlong param_1,undefined8 param_2)

{
  FUN_144fbc640(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcbf0 FUN_144fbcbf0 body=33 status=ok
// SIG undefined FUN_144fbcbf0(void)

void FUN_144fbcbf0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144fbd3c0(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcc20 FUN_144fbcc20 body=15 status=ok
// SIG undefined FUN_144fbcc20(void)

void FUN_144fbcc20(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 144fbcc30 FUN_144fbcc30 body=71 status=ok
// SIG undefined FUN_144fbcc30(void)

undefined8 * FUN_144fbcc30(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144fbcc80 FUN_144fbcc80 body=71 status=ok
// SIG undefined FUN_144fbcc80(void)

undefined8 * FUN_144fbcc80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::ProcessingRunCommittedInfo_const&___ptr64>
             ::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144fbccd0 FUN_144fbccd0 body=11 status=ok
// SIG undefined FUN_144fbccd0(void)

void FUN_144fbccd0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144fbccd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fbcce0 FUN_144fbcce0 body=24 status=ok
// SIG undefined FUN_144fbcce0(void)

undefined8 FUN_144fbcce0(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144fbcd00 FUN_144fbcd00 body=3 status=ok
// SIG undefined FUN_144fbcd00(void)

undefined8 FUN_144fbcd00(void)

{
  return 0;
}



// FUNCTION 144fbcd10 FUN_144fbcd10 body=19 status=ok
// SIG undefined FUN_144fbcd10(void)

void FUN_144fbcd10(longlong param_1,undefined8 param_2)

{
  FUN_144fbc6e0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcd30 FUN_144fbcd30 body=33 status=ok
// SIG undefined FUN_144fbcd30(void)

void FUN_144fbcd30(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144fbd390(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcd60 FUN_144fbcd60 body=15 status=ok
// SIG undefined FUN_144fbcd60(void)

void FUN_144fbcd60(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 144fbcd70 FUN_144fbcd70 body=71 status=ok
// SIG undefined FUN_144fbcd70(void)

undefined8 * FUN_144fbcd70(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144fbcdc0 FUN_144fbcdc0 body=71 status=ok
// SIG undefined FUN_144fbcdc0(void)

undefined8 * FUN_144fbcdc0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>_>::Slot::
             vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144fbce10 FUN_144fbce10 body=32 status=ok
// SIG undefined FUN_144fbce10(void)

void FUN_144fbce10(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *param_3;
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10),param_2,local_res8);
  return;
}



// FUNCTION 144fbce30 FUN_144fbce30 body=24 status=ok
// SIG undefined FUN_144fbce30(void)

undefined8 FUN_144fbce30(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144fbce50 FUN_144fbce50 body=3 status=ok
// SIG undefined FUN_144fbce50(void)

undefined8 FUN_144fbce50(void)

{
  return 0;
}



// FUNCTION 144fbce60 FUN_144fbce60 body=19 status=ok
// SIG undefined FUN_144fbce60(void)

void FUN_144fbce60(longlong param_1,undefined8 param_2)

{
  FUN_144fbc780(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbce80 FUN_144fbce80 body=33 status=ok
// SIG undefined FUN_144fbce80(void)

void FUN_144fbce80(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144fbd360(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbceb0 FUN_144fbceb0 body=15 status=ok
// SIG undefined FUN_144fbceb0(void)

void FUN_144fbceb0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 144fbcec0 FUN_144fbcec0 body=71 status=ok
// SIG undefined FUN_144fbcec0(void)

undefined8 * FUN_144fbcec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiIndex<int,hkaiRuntimeIndexDiscriminant>_>::Slot::
             vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144fbcf10 FUN_144fbcf10 body=71 status=ok
// SIG undefined FUN_144fbcf10(void)

undefined8 * FUN_144fbcf10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::NavMeshDataModifiedInfo_const&___ptr64>
             ::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144fbcf60 FUN_144fbcf60 body=11 status=ok
// SIG undefined FUN_144fbcf60(void)

void FUN_144fbcf60(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144fbcf67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fbcf70 FUN_144fbcf70 body=24 status=ok
// SIG undefined FUN_144fbcf70(void)

undefined8 FUN_144fbcf70(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144fbcf90 FUN_144fbcf90 body=3 status=ok
// SIG undefined FUN_144fbcf90(void)

undefined8 FUN_144fbcf90(void)

{
  return 0;
}



// FUNCTION 144fbcfa0 FUN_144fbcfa0 body=19 status=ok
// SIG undefined FUN_144fbcfa0(void)

void FUN_144fbcfa0(longlong param_1,undefined8 param_2)

{
  FUN_144fbc820(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcfc0 FUN_144fbcfc0 body=33 status=ok
// SIG undefined FUN_144fbcfc0(void)

void FUN_144fbcfc0(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144fbd330(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbcff0 FUN_144fbcff0 body=15 status=ok
// SIG undefined FUN_144fbcff0(void)

void FUN_144fbcff0(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 144fbd000 FUN_144fbd000 body=71 status=ok
// SIG undefined FUN_144fbd000(void)

undefined8 * FUN_144fbd000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkaiWorldSignals::NavMeshDataModifiedInfo_const&___ptr64>
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



// FUNCTION 144fbd050 FUN_144fbd050 body=71 status=ok
// SIG undefined FUN_144fbd050(void)

undefined8 * FUN_144fbd050(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal3<hkaiWorld*___ptr64,hkaiWorldSignals::NavDataJustModifiedInfo_const&___ptr64,hkaiWorldSignals::NavDataJustModifiedResponseInterface&___ptr64>
             ::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144fbd0a0 FUN_144fbd0a0 body=11 status=ok
// SIG undefined FUN_144fbd0a0(void)

void FUN_144fbd0a0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144fbd0a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fbd0b0 FUN_144fbd0b0 body=24 status=ok
// SIG undefined FUN_144fbd0b0(void)

undefined8 FUN_144fbd0b0(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144fbd0d0 FUN_144fbd0d0 body=3 status=ok
// SIG undefined FUN_144fbd0d0(void)

undefined8 FUN_144fbd0d0(void)

{
  return 0;
}



// FUNCTION 144fbd0e0 FUN_144fbd0e0 body=19 status=ok
// SIG undefined FUN_144fbd0e0(void)

void FUN_144fbd0e0(longlong param_1,undefined8 param_2)

{
  FUN_144fbc8c0(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbd100 FUN_144fbd100 body=33 status=ok
// SIG undefined FUN_144fbd100(void)

void FUN_144fbd100(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144fbd300(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbd130 FUN_144fbd130 body=15 status=ok
// SIG undefined FUN_144fbd130(void)

void FUN_144fbd130(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 144fbd140 FUN_144fbd140 body=71 status=ok
// SIG undefined FUN_144fbd140(void)

undefined8 * FUN_144fbd140(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal3<hkaiWorld*___ptr64,hkaiWorldSignals::NavDataJustModifiedInfo_const&___ptr64,hkaiWorldSignals::NavDataJustModifiedResponseInterface&___ptr64>
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



// FUNCTION 144fbd190 FUN_144fbd190 body=71 status=ok
// SIG undefined FUN_144fbd190(void)

undefined8 * FUN_144fbd190(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkVector4f_const&___ptr64>::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144fbd1e0 FUN_144fbd1e0 body=11 status=ok
// SIG undefined FUN_144fbd1e0(void)

void FUN_144fbd1e0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144fbd1e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 144fbd1f0 FUN_144fbd1f0 body=24 status=ok
// SIG undefined FUN_144fbd1f0(void)

undefined8 FUN_144fbd1f0(longlong param_1,longlong *param_2,int param_3)

{
  if ((param_3 == 8) && (*param_2 == *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}



// FUNCTION 144fbd210 FUN_144fbd210 body=3 status=ok
// SIG undefined FUN_144fbd210(void)

undefined8 FUN_144fbd210(void)

{
  return 0;
}



// FUNCTION 144fbd220 FUN_144fbd220 body=19 status=ok
// SIG undefined FUN_144fbd220(void)

void FUN_144fbd220(longlong param_1,undefined8 param_2)

{
  FUN_144fbc960(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbd240 FUN_144fbd240 body=33 status=ok
// SIG undefined FUN_144fbd240(void)

void FUN_144fbd240(longlong param_1,undefined8 param_2)

{
  undefined1 local_res8 [32];
  
  FUN_144fbd2d0(param_2,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbd270 FUN_144fbd270 body=15 status=ok
// SIG undefined FUN_144fbd270(void)

void FUN_144fbd270(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  *param_2 = param_1 + 0x18;
  *param_3 = 8;
  return;
}



// FUNCTION 144fbd280 FUN_144fbd280 body=71 status=ok
// SIG undefined FUN_144fbd280(void)

undefined8 * FUN_144fbd280(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSignal2<hkaiWorld*___ptr64,hkVector4f_const&___ptr64>::Slot::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144fbd2d0 FUN_144fbd2d0 body=40 status=ok
// SIG undefined FUN_144fbd2d0(void)

undefined8 FUN_144fbd2d0(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 144fbd300 FUN_144fbd300 body=40 status=ok
// SIG undefined FUN_144fbd300(void)

undefined8 FUN_144fbd300(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 144fbd330 FUN_144fbd330 body=40 status=ok
// SIG undefined FUN_144fbd330(void)

undefined8 FUN_144fbd330(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 144fbd360 FUN_144fbd360 body=40 status=ok
// SIG undefined FUN_144fbd360(void)

undefined8 FUN_144fbd360(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 144fbd390 FUN_144fbd390 body=40 status=ok
// SIG undefined FUN_144fbd390(void)

undefined8 FUN_144fbd390(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 144fbd3c0 FUN_144fbd3c0 body=40 status=ok
// SIG undefined FUN_144fbd3c0(void)

undefined8 FUN_144fbd3c0(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 144fbd3f0 FUN_144fbd3f0 body=40 status=ok
// SIG undefined FUN_144fbd3f0(void)

undefined8 FUN_144fbd3f0(undefined8 param_1,undefined8 param_2)

{
  FUN_144b4abc0();
  return param_2;
}



// FUNCTION 144fbd420 FUN_144fbd420 body=6 status=ok
// SIG undefined FUN_144fbd420(void)

undefined8 FUN_144fbd420(void)

{
  return 0x20;
}



// FUNCTION 144fbd430 FUN_144fbd430 body=116 status=ok
// SIG undefined FUN_144fbd430(void)

undefined8 * FUN_144fbd430(undefined8 *param_1,int param_2,undefined4 param_3)

{
  FUN_145318df0();
  *param_1 = hkDynamicBlockStreamAllocator::vftable;
  FUN_144bdde80(param_1 + 3);
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  if (0 < param_2) {
    FUN_144fbd8f0(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return param_1;
}



// FUNCTION 144fbd4b0 FUN_144fbd4b0 body=174 status=ok
// SIG undefined FUN_144fbd4b0(void)

void FUN_144fbd4b0(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if ((int)param_1[0xb] < param_3) {
      FUN_144fbd8f0(param_1);
    }
    if (0 < param_3) {
      lVar2 = 0;
      do {
        *(undefined8 *)(param_2 + lVar2 * 8) =
             *(undefined8 *)(param_1[10] + -8 + (longlong)(int)param_1[0xb] * 8);
        lVar2 = lVar2 + 1;
        *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
      } while (lVar2 < param_3);
    }
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar1 < *(int *)((longlong)param_1 + 100)) {
      iVar1 = *(int *)((longlong)param_1 + 100);
    }
    *(int *)((longlong)param_1 + 100) = iVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  return;
}



// FUNCTION 144fbd560 FUN_144fbd560 body=186 status=ok
// SIG undefined FUN_144fbd560(void)

void FUN_144fbd560(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_3 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (0 < param_3) {
      lVar2 = 0;
      do {
        if (*(longlong *)(param_2 + lVar2 * 8) != 0) {
          iVar3 = *(int *)(param_1 + 0x58) + 1;
          if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar3) {
            FUN_144fad300(param_1 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar3);
          }
          puVar1 = (undefined8 *)
                   (*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = *(undefined8 *)(param_2 + lVar2 * 8);
          }
          *(int *)(param_1 + 0x58) = iVar3;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < param_3);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 144fbd620 FUN_144fbd620 body=10 status=ok
// SIG undefined FUN_144fbd620(void)

int FUN_144fbd620(longlong param_1)

{
  return (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x58)) * 0x1000;
}



// FUNCTION 144fbd630 FUN_144fbd630 body=4 status=ok
// SIG undefined FUN_144fbd630(void)

undefined4 FUN_144fbd630(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// FUNCTION 144fbd640 FUN_144fbd640 body=11 status=ok
// SIG undefined FUN_144fbd640(void)

void FUN_144fbd640(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iStackX_8;
  longlong lStackX_10;
  longlong lStack_48;
  int iStack_40;
  uint uStack_3c;
  
  if (*(int *)(param_1 + 0x60) == 1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    iVar6 = *(int *)(param_1 + 0x48);
    if (iVar6 == *(int *)(param_1 + 0x58)) {
      iVar4 = 0;
      if (0 < iVar6) {
        lVar7 = 0;
        do {
          (*DAT_14c787678)(0,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar7),0);
          iVar4 = iVar4 + 1;
          lVar7 = lVar7 + 8;
        } while (iVar4 < *(int *)(param_1 + 0x48));
      }
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
    else {
      plVar5 = (longlong *)(param_1 + 0x40);
      if (1 < iVar6) {
        FUN_144fbdb60(*plVar5,0,iVar6 + -1,(undefined1)iStackX_8);
      }
      if (1 < *(int *)(param_1 + 0x58)) {
        FUN_144fbdb60(*(undefined8 *)(param_1 + 0x50),0,*(int *)(param_1 + 0x58) + -1,
                      (undefined1)iStackX_8);
      }
      lVar7 = 0;
      iVar6 = 0;
      iStackX_8 = 0;
      iVar4 = 0;
      lStack_48 = 0;
      iStack_40 = 0;
      uStack_3c = 0x80000000;
      if (0 < *(int *)(param_1 + 0x48)) {
        lVar8 = 0;
        lStackX_10 = 0;
        do {
          if ((iStackX_8 < *(int *)(param_1 + 0x58)) &&
             (*(longlong *)(lVar8 + *plVar5) ==
              *(longlong *)(*(longlong *)(param_1 + 0x50) + lStackX_10))) {
            (*DAT_14c787678)(0,*(longlong *)(lVar8 + *plVar5),0);
            iStackX_8 = iStackX_8 + 1;
            lStackX_10 = lStackX_10 + 8;
          }
          else {
            lVar3 = *plVar5;
            iVar1 = iVar6 + 1;
            if ((int)(uStack_3c & 0x7fffffff) < iVar1) {
              FUN_144fad300(&lStack_48,&PTR_vftable_14c6e47a0,(longlong)iVar1);
              lVar7 = lStack_48;
              iVar6 = iStack_40;
            }
            puVar2 = (undefined8 *)(lVar7 + (longlong)iVar6 * 8);
            iVar6 = iVar1;
            iStack_40 = iVar1;
            if (puVar2 != (undefined8 *)0x0) {
              *puVar2 = *(undefined8 *)(lVar3 + lVar8);
            }
          }
          iVar4 = iVar4 + 1;
          lVar8 = lVar8 + 8;
        } while (iVar4 < *(int *)(param_1 + 0x48));
      }
      plVar5 = (longlong *)(param_1 + 0x40);
      if (&lStack_48 != plVar5) {
        if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar6) {
          FUN_144fbdc40(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        FUN_144b3d470(*plVar5,lVar7,(longlong)iVar6 << 3);
        *(int *)(param_1 + 0x48) = iVar6;
      }
      if ((-1 < (int)uStack_3c) && (lVar7 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar7,(ulonglong)(uStack_3c & 0x7fffffff) << 3);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144fbd8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 144fbd650 FUN_144fbd650 body=98 status=ok
// SIG undefined FUN_144fbd650(void)

void FUN_144fbd650(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0x8000000000000000;
  param_2[3] = 0;
  param_2[3] = (longlong)((int)param_1[9] << 0xc);
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  param_2[1] = (longlong)iVar1;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  param_2[2] = (longlong)iVar1;
  return;
}



// FUNCTION 144fbd6c0 FUN_144fbd6c0 body=555 status=ok
// SIG undefined FUN_144fbd6c0(void)

void FUN_144fbd6c0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res8;
  longlong local_res10;
  longlong local_48;
  int local_40;
  uint local_3c;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  iVar6 = *(int *)(param_1 + 0x48);
  if (iVar6 == *(int *)(param_1 + 0x58)) {
    iVar4 = 0;
    if (0 < iVar6) {
      lVar7 = 0;
      do {
        (*DAT_14c787678)(0,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar7),0);
        iVar4 = iVar4 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x48));
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  else {
    plVar5 = (longlong *)(param_1 + 0x40);
    if (1 < iVar6) {
      FUN_144fbdb60(*plVar5,0,iVar6 + -1,(undefined1)local_res8);
    }
    if (1 < *(int *)(param_1 + 0x58)) {
      FUN_144fbdb60(*(undefined8 *)(param_1 + 0x50),0,*(int *)(param_1 + 0x58) + -1,
                    (undefined1)local_res8);
    }
    lVar7 = 0;
    iVar6 = 0;
    local_res8 = 0;
    iVar4 = 0;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0x80000000;
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar8 = 0;
      local_res10 = 0;
      do {
        if ((local_res8 < *(int *)(param_1 + 0x58)) &&
           (*(longlong *)(lVar8 + *plVar5) ==
            *(longlong *)(*(longlong *)(param_1 + 0x50) + local_res10))) {
          (*DAT_14c787678)(0,*(longlong *)(lVar8 + *plVar5),0);
          local_res8 = local_res8 + 1;
          local_res10 = local_res10 + 8;
        }
        else {
          lVar3 = *plVar5;
          iVar1 = iVar6 + 1;
          if ((int)(local_3c & 0x7fffffff) < iVar1) {
            FUN_144fad300(&local_48,&PTR_vftable_14c6e47a0,(longlong)iVar1);
            lVar7 = local_48;
            iVar6 = local_40;
          }
          puVar2 = (undefined8 *)(lVar7 + (longlong)iVar6 * 8);
          iVar6 = iVar1;
          local_40 = iVar1;
          if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = *(undefined8 *)(lVar3 + lVar8);
          }
        }
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + 8;
      } while (iVar4 < *(int *)(param_1 + 0x48));
    }
    plVar5 = (longlong *)(param_1 + 0x40);
    if (&local_48 != plVar5) {
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar6) {
        FUN_144fbdc40(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      FUN_144b3d470(*plVar5,lVar7,(longlong)iVar6 << 3);
      *(int *)(param_1 + 0x48) = iVar6;
    }
    if ((-1 < (int)local_3c) && (lVar7 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar7,(ulonglong)(local_3c & 0x7fffffff) << 3);
    }
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144fbd8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 144fbd8f0 FUN_144fbd8f0 body=303 status=ok
// SIG undefined FUN_144fbd8f0(void)

void FUN_144fbd8f0(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 local_res8;
  
  uVar5 = (longlong)param_2 + 0xfffU >> 0xc;
  iVar4 = (int)uVar5;
  iVar3 = *(int *)(param_1 + 0x48) + iVar4;
  if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar3) {
    FUN_144fad300(param_1 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  iVar3 = *(int *)(param_1 + 0x58) + iVar4;
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar3) {
    FUN_144fad300(param_1 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  if (0 < iVar4) {
    uVar5 = uVar5 & 0xffffffff;
    do {
      local_res8 = 0x1000;
      uVar2 = (*DAT_14c787670)(0,&local_res8,0x10);
      iVar3 = *(int *)(param_1 + 0x48) + 1;
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x7fffffff) < iVar3) {
        FUN_144fad300(param_1 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar3);
      }
      puVar1 = (undefined8 *)
               (*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = uVar2;
      }
      *(int *)(param_1 + 0x48) = iVar3;
      iVar3 = *(int *)(param_1 + 0x58) + 1;
      if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar3) {
        FUN_144fad300(param_1 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar3);
      }
      puVar1 = (undefined8 *)
               (*(longlong *)(param_1 + 0x50) + (longlong)*(int *)(param_1 + 0x58) * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = uVar2;
      }
      *(int *)(param_1 + 0x58) = iVar3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 144fbda20 FUN_144fbda20 body=312 status=ok
// SIG undefined FUN_144fbda20(void)

undefined8 * FUN_144fbda20(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar3;
  ulonglong uVar2;
  
  uVar2 = 0;
  *param_1 = hkDynamicBlockStreamAllocator::vftable;
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 9)) {
    do {
      (*DAT_14c787678)(0,*(undefined8 *)(uVar3 + param_1[8]),0);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 8;
    } while ((int)uVar1 < *(int *)(param_1 + 9));
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 3);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FUN_145318e10(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 144fbdb60 FUN_144fbdb60 body=209 status=ok
// SIG undefined FUN_144fbdb60(void)

void FUN_144fbdb60(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
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
    uVar1 = *(ulonglong *)(param_1 + ((longlong)((int)uVar7 + param_3) >> 1) * 8);
    uVar5 = (longlong)param_3;
    iVar4 = param_3;
    do {
      uVar8 = (uint)uVar9;
      uVar2 = *(ulonglong *)(param_1 + uVar6 * 8);
      while (uVar2 < uVar1) {
        uVar6 = uVar6 + 1;
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar2 = *(ulonglong *)(param_1 + uVar6 * 8);
      }
      uVar9 = *(ulonglong *)(param_1 + uVar5 * 8);
      while (uVar1 < uVar9) {
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        uVar9 = *(ulonglong *)(param_1 + uVar5 * 8);
      }
      if ((longlong)uVar5 < (longlong)uVar6) break;
      if (uVar5 != uVar6) {
        uVar3 = *(undefined8 *)(param_1 + uVar5 * 8);
        *(undefined8 *)(param_1 + uVar5 * 8) = *(undefined8 *)(param_1 + uVar6 * 8);
        *(undefined8 *)(param_1 + uVar6 * 8) = uVar3;
      }
      iVar4 = iVar4 + -1;
      uVar5 = uVar5 - 1;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar6 = uVar6 + 1;
    } while ((longlong)uVar6 <= (longlong)uVar5);
    if ((int)uVar7 < iVar4) {
      FUN_144fbdb60(param_1,uVar7 & 0xffffffff,iVar4,param_4);
    }
    if (param_3 <= (int)uVar8) {
      return;
    }
    uVar7 = (ulonglong)uVar8;
  } while( true );
}



// FUNCTION 144fbdc40 FUN_144fbdc40 body=159 status=ok
// SIG undefined FUN_144fbdc40(void)

void FUN_144fbdc40(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144fbdce0 FUN_144fbdce0 body=632 status=ok
// SIG undefined FUN_144fbdce0(void)

void FUN_144fbdce0(undefined8 *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar2 = param_1[0x1c];
  *param_1 = hkaiVolumeNavigator::vftable;
  if (lVar2 != 0) {
    local_10 = *(undefined4 *)((longlong)param_1 + 0x184);
    local_14 = 0x51;
    local_18 = 0x5000010;
    FUN_144c2c1d0(lVar2 + 0x28,lVar2,&local_18);
  }
  if (param_1[0x26] != 0) {
    FUN_144fa9ed0(param_1[0x26],1);
  }
  if (param_1[0x27] != 0) {
    FUN_144fa9ed0(param_1[0x27],1);
  }
  if (param_1[0x2a] != 0) {
    FUN_1450163d0();
  }
  if (param_1[0x1c] != 0) {
    FUN_1453108a0(param_1[0x1c],param_1);
  }
  FUN_144bfd1a0(param_1 + 0x3a);
  FUN_144bfd1a0(param_1 + 0x39);
  FUN_144bfd1a0(param_1 + 0x38);
  FUN_144bfd1a0(param_1 + 0x37);
  FUN_144bfd1a0(param_1 + 0x36);
  FUN_144bfd1a0(param_1 + 0x35);
  FUN_144bfd1a0(param_1 + 0x34);
  puVar3 = (undefined4 *)param_1[0x32];
  if (puVar3 + (longlong)*(int *)(param_1 + 0x33) * 0x18 != puVar3) {
    puVar4 = puVar3 + (longlong)*(int *)(param_1 + 0x33) * 0x18 + 0x17;
    do {
      puVar4[-0x19] = 0;
      if ((-1 < (int)puVar4[-0x18]) && (*(longlong *)(puVar4 + -0x1b) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x1b),
                   (ulonglong)(puVar4[-0x18] & 0x7fffffff) << 2);
      }
      puVar1 = puVar4 + -0x2f;
      *(undefined8 *)(puVar4 + -0x1b) = 0;
      puVar4[-0x18] = 0x80000000;
      puVar4 = puVar4 + -0x18;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x32],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x19c) & 0x7fffffff) * 0x60);
  }
  param_1[0x32] = 0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x80000000;
  if (param_1[0x2a] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x29] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x27] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x26] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x1c] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x1a] != 0) {
    FUN_144b3f230();
  }
  if (param_1[0x19] != 0) {
    FUN_144b3f230();
  }
  param_1[0xb] = &PTR_FUN_14ab67d10;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 4);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144fbdf60 FUN_144fbdf60 body=795 status=ok
// SIG undefined FUN_144fbdf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fbdf60(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res8 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  
  lVar3 = *(longlong *)(param_1 + 0x148);
  if (lVar3 != 0) {
    lVar8 = (longlong)*(int *)(lVar3 + 0x20) * 0x40;
    if (*(char *)(lVar8 + -0x18 + *(longlong *)(lVar3 + 0x18)) == -1) {
      puVar1 = (undefined8 *)(lVar8 + -0x30 + *(longlong *)(lVar3 + 0x18));
      uVar6 = puVar1[1];
      *(undefined8 *)(param_1 + 0x110) = *puVar1;
      *(undefined8 *)(param_1 + 0x118) = uVar6;
    }
    FUN_144fbf7c0(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x140),(float *)(param_1 + 0x30),
                  param_1 + 0x58,&local_48,local_res8);
    if (local_res8[0] == -1) {
      FUN_144fbe500(param_1,1,param_2);
    }
    else {
      *(undefined8 *)(param_1 + 0x100) = local_48;
      *(undefined8 *)(param_1 + 0x108) = uStack_40;
      *(int *)(param_1 + 0xfc) = local_res8[0];
    }
    if (*(char *)(param_1 + 0xf8) == '\0') {
      iVar7 = FUN_144c6e040(*(undefined8 *)(param_1 + 0x148),param_1 + 0x160,local_res8[0],&local_48
                           );
      if (iVar7 == 1) {
        FUN_144fbe500(param_1,2,param_2);
      }
      else {
        uStack_30 = 0x2000000008;
        local_38 = (undefined1  [8])0x2000000008;
        local_28 = 0x3c000000;
        local_24 = 0x3dc00000;
        FUN_144c6ea00(*(undefined8 *)(param_1 + 0x148),param_1 + 0x160,local_38);
      }
      if (*(char *)(param_1 + 0xf8) == '\0') {
        FUN_144c6eb80(*(undefined8 *)(param_1 + 0x148),param_1 + 0x160,local_38);
        fVar17 = (float)local_38._0_4_ * (float)local_38._0_4_;
        fVar20 = (float)local_38._4_4_ * (float)local_38._4_4_;
        fVar21 = (float)uStack_30 * (float)uStack_30;
        auVar16._4_4_ = fVar17;
        auVar16._0_4_ = fVar17;
        auVar16._8_4_ = fVar17;
        auVar16._12_4_ = fVar17;
        fVar22 = fVar20 + fVar17 + fVar21;
        fVar23 = fVar20 + fVar17 + fVar21;
        fVar24 = fVar20 + fVar17 + fVar21;
        fVar21 = fVar20 + fVar17 + fVar21;
        auVar18._0_12_ = ZEXT812(0);
        auVar18._12_4_ = 0;
        uVar12 = -(uint)(0.0 - fVar22 < 0.0);
        uVar13 = -(uint)(0.0 - fVar23 < 0.0);
        uVar14 = -(uint)(0.0 - fVar24 < 0.0);
        uVar15 = -(uint)(0.0 - fVar21 < 0.0);
        if (fVar22 != 0.0) {
          auVar5._4_4_ = fVar23;
          auVar5._0_4_ = fVar22;
          auVar5._8_4_ = fVar24;
          auVar5._12_4_ = fVar21;
          auVar16 = sqrtps(auVar16,auVar5);
          auVar18 = divps(_DAT_14c6daca0,auVar16);
        }
        auVar19._0_4_ = (uint)(auVar18._0_4_ * (float)local_38._0_4_) & uVar12;
        auVar19._4_4_ = (uint)(auVar18._4_4_ * (float)local_38._4_4_) & uVar13;
        auVar19._8_4_ = (uint)(auVar18._8_4_ * (float)uStack_30) & uVar14;
        auVar19._12_4_ = (uint)(auVar18._12_4_ * uStack_30._4_4_) & uVar15;
        auVar4._4_4_ = ~uVar13 & local_38._4_4_;
        auVar4._0_4_ = ~uVar12 & local_38._0_4_;
        auVar4._8_4_ = ~uVar14 & (uint)(float)uStack_30;
        auVar4._12_4_ = ~uVar15 & (uint)uStack_30._4_4_;
        _local_38 = auVar19 | auVar4;
        *(undefined1 (*) [16])(param_1 + 0x120) = _local_38;
        *(undefined1 (*) [16])(param_1 + 0x40) = _local_38;
        *(undefined1 *)(param_1 + 0x50) = 1;
        iVar7 = FUN_144c6ec20(*(undefined8 *)(param_1 + 0x148),param_1 + 0x160,
                              *(undefined4 *)(param_1 + 0x80),*(int *)(param_1 + 0x180) + 1);
        if (-1 < iVar7) {
          FUN_144fbf8b0(param_1,iVar7);
          *(int *)(param_1 + 0x180) = iVar7;
        }
      }
    }
    iVar7 = 0;
    if (*(int *)(param_1 + 0xf4) == 8) {
      pfVar9 = (float *)&local_48;
      if (local_res8[0] == -1) {
        pfVar9 = (float *)(param_1 + 0x30);
      }
      fVar17 = *pfVar9 - *(float *)(param_1 + 0x110);
      fVar20 = pfVar9[1] - *(float *)(param_1 + 0x114);
      fVar21 = pfVar9[2] - *(float *)(param_1 + 0x118);
      if (fVar20 * fVar20 + fVar17 * fVar17 + fVar21 * fVar21 <
          *(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c)) {
        *(undefined8 *)(param_1 + 0x120) = 0;
        *(undefined8 *)(param_1 + 0x128) = 0;
        if (*(char *)(param_1 + 0x140) == '\0') {
          iVar11 = *(int *)(param_1 + 0x198) + 1;
          if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar11) {
            FUN_144fbfc90((longlong *)(param_1 + 400),&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          iVar2 = *(int *)(param_1 + 0x198);
          *(int *)(param_1 + 0x198) = iVar11;
          puVar10 = (undefined4 *)((longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 400));
          if (puVar10 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar10 + 0x14) = 0;
            puVar10[0x16] = 0;
            puVar10[0x17] = 0x80000000;
          }
          *puVar10 = 6;
          *(undefined1 *)(param_1 + 0x140) = 1;
        }
      }
    }
    if (*(char *)(param_1 + 0x140) != '\0') {
      *(undefined4 *)(param_1 + 0xf0) = 3;
      return;
    }
    if (*(char *)(param_1 + 0xf8) == '\0') goto LAB_144fbe26e;
    if (*(char *)(param_1 + 0x50) != '\0') {
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0xf0) = 0;
      return;
    }
  }
  iVar7 = (*(longlong *)(param_1 + 0x130) != 0) + 1;
LAB_144fbe26e:
  *(int *)(param_1 + 0xf0) = iVar7;
  return;
}



// FUNCTION 144fbe280 FUN_144fbe280 body=328 status=ok
// SIG undefined FUN_144fbe280(void)

void FUN_144fbe280(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *local_48;
  undefined1 *puStack_40;
  undefined1 *local_38;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x34);
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(lVar1 + 0x24) = uVar2;
    *(undefined4 *)(lVar1 + 0x28) = uVar3;
    *(undefined4 *)(lVar1 + 0x2c) = uVar4;
    *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x58) = *(undefined4 *)(param_1 + 0x170);
  }
  lVar1 = *(longlong *)(param_1 + 0x150);
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
    local_38 = local_28;
    local_2c = 0x80000001;
    local_30 = 1;
    local_18 = 0;
    FUN_145016700(param_1,lVar1,param_2,&local_38);
    puStack_40 = local_38 + local_18 * 0x10;
    local_48 = local_38;
    FUN_144faaf70(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x230),&local_48);
    puVar5 = local_38 + local_18 * 0x10;
    for (puVar6 = local_38; puVar6 != puVar5; puVar6 = puVar6 + 0x10) {
      if (*(longlong *)(puVar6 + 8) != 0) {
        FUN_144b3f230();
      }
    }
    local_30 = 0;
    if ((-1 < (int)local_2c) && (local_38 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 4);
    }
    FUN_144b3f230(lVar1);
  }
  return;
}



// FUNCTION 144fbe3d0 FUN_144fbe3d0 body=252 status=ok
// SIG undefined FUN_144fbe3d0(void)

void FUN_144fbe3d0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 400);
  lVar5 = (longlong)*(int *)(param_1 + 0x198) * 0x60 + lVar3;
  for (; lVar3 != lVar5; lVar3 = lVar3 + 0x60) {
    FUN_145319340(lVar3,param_1,param_2,param_1 + 0x1a0);
  }
  puVar2 = *(undefined4 **)(param_1 + 400);
  if (puVar2 + (longlong)*(int *)(param_1 + 0x198) * 0x18 != puVar2) {
    puVar4 = puVar2 + (longlong)*(int *)(param_1 + 0x198) * 0x18 + 0x17;
    do {
      puVar4[-0x19] = 0;
      if ((-1 < (int)puVar4[-0x18]) && (*(longlong *)(puVar4 + -0x1b) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -0x1b),
                   (ulonglong)(puVar4[-0x18] & 0x7fffffff) << 2);
      }
      puVar1 = puVar4 + -0x2f;
      *(undefined8 *)(puVar4 + -0x1b) = 0;
      puVar4[-0x18] = 0x80000000;
      puVar4 = puVar4 + -0x18;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  return;
}



// FUNCTION 144fbe4d0 FUN_144fbe4d0 body=44 status=ok
// SIG undefined FUN_144fbe4d0(void)

undefined8 FUN_144fbe4d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x150);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x58) = *(undefined4 *)(param_1 + 0x170);
    uVar2 = *(undefined8 *)(param_1 + 0x150);
  }
  return uVar2;
}



// FUNCTION 144fbe500 FUN_144fbe500 body=244 status=ok
// SIG undefined FUN_144fbe500(void)

void FUN_144fbe500(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1450163d0();
    lVar2 = *(longlong *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(char *)(param_1 + 0xf8) == '\0') {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    iVar4 = *(int *)(param_1 + 0x198) + 1;
    if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar4) {
      FUN_144fbfc90((longlong *)(param_1 + 400),&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    iVar1 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar4;
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 400));
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar3 + 0x14) = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0x80000000;
    }
    *puVar3 = 4;
    puVar3[4] = param_2;
    if ((*(char *)(param_1 + 0xd8) != '\0') && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_144fbee50(param_1,param_3);
    }
  }
  return;
}



// FUNCTION 144fbe600 FUN_144fbe600 body=252 status=ok
// SIG undefined FUN_144fbe600(void)

void FUN_144fbe600(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 0x130) == 0) {
    if (param_2 != 0) {
      FUN_144b3d910(param_2);
    }
    lVar2 = *(longlong *)(param_1 + 0x130);
    *(longlong *)(param_1 + 0x130) = param_2;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_144fa9ed0(*(longlong *)(param_1 + 0x138),1);
    lVar2 = *(longlong *)(param_1 + 0x138);
    *(undefined8 *)(param_1 + 0x138) = 0;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(char *)(param_1 + 0xf8) == '\0') {
    *(undefined1 *)(param_1 + 0xf8) = 1;
    iVar4 = *(int *)(param_1 + 0x198) + 1;
    if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar4) {
      FUN_144fbfc90((longlong *)(param_1 + 400),&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    iVar1 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar4;
    puVar3 = (undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 400));
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar3 + 0x14) = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0x80000000;
    }
    *puVar3 = 4;
    puVar3[4] = 0;
  }
  return;
}



// FUNCTION 144fbe700 FUN_144fbe700 body=155 status=ok
// SIG undefined FUN_144fbe700(void)

undefined8 * FUN_144fbe700(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiVolumeNavigator::NavigatorSettings::vftable;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  param_1[9] = uVar5;
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  uVar3 = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  lVar1 = *(longlong *)(param_2 + 0x70);
  param_1[0xe] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  lVar1 = *(longlong *)(param_2 + 0x78);
  param_1[0xf] = lVar1;
  if (lVar1 != 0) {
    FUN_144b3d910();
  }
  return param_1;
}



// FUNCTION 144fbe7a0 FUN_144fbe7a0 body=1011 status=ok
// SIG undefined FUN_144fbe7a0(void)

ulonglong FUN_144fbe7a0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 local_res8;
  undefined4 local_128;
  undefined4 local_124;
  undefined ***local_120;
  undefined8 local_118;
  undefined **local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  local_f8 = 1;
  local_118 = *(undefined8 *)(lVar2 + 0x38);
  local_128 = *(undefined4 *)(lVar2 + 0x20);
  local_124 = *(undefined4 *)(lVar2 + 0x1c);
  local_108 = _anon_40EE2D15::HitFilter::vftable;
  local_e8 = *(longlong *)(lVar2 + 0x48);
  uStack_100 = 0xffffffff;
  local_120 = &local_108;
  if (local_e8 == 0) {
    local_120 = (undefined ***)0x0;
  }
  local_f0 = param_2;
  FUN_144be90e0(0x6971e8f4);
  local_d8 = *(undefined4 *)(param_1 + 0x20);
  uStack_d4 = *(undefined4 *)(param_1 + 0x24);
  uStack_d0 = *(undefined4 *)(param_1 + 0x28);
  uStack_cc = *(undefined4 *)(param_1 + 0x2c);
  local_c8 = 0xffffffff;
  FUN_144fc0dd0(&local_78,param_2,&local_d8,&local_128);
  if (local_68 == -1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    iVar9 = (int)param_4[1] + 1;
    if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar9) {
      FUN_144fbfc90(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    uVar7 = (ulonglong)(int)param_4[1];
    *(int *)(param_4 + 1) = iVar9;
    puVar8 = (undefined4 *)(uVar7 * 0x60 + *param_4);
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar8 + 0x14) = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0x80000000;
    }
    local_res8 = (undefined4)param_1;
    *puVar8 = 1;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 10) = 0;
    *(undefined8 *)(puVar8 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0xf) = 0;
    *(undefined8 *)(puVar8 + 4) = uVar3;
    *(undefined8 *)(puVar8 + 6) = uVar4;
    local_90 = local_res8;
  }
  else {
    *(undefined4 *)(param_3 + 0x20) = local_78;
    *(undefined4 *)(param_3 + 0x24) = uStack_74;
    *(undefined4 *)(param_3 + 0x28) = uStack_70;
    *(undefined4 *)(param_3 + 0x2c) = uStack_6c;
    *(int *)(param_3 + 0x40) = local_68;
    *(undefined4 *)(param_3 + 0x50) = 0;
    *(undefined4 *)(param_3 + 0x38) = 0;
    puVar8 = *(undefined4 **)(param_1 + 0x30);
    puVar5 = puVar8 + (longlong)*(int *)(param_1 + 0x38) * 4;
    iVar9 = local_68;
    for (; puVar8 != puVar5; puVar8 = puVar8 + 4) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      uStack_b0 = 0xffffffff;
      local_a8 = 1;
      local_118 = *(undefined8 *)(lVar2 + 0x38);
      local_128 = *(undefined4 *)(lVar2 + 0x20);
      local_124 = *(undefined4 *)(lVar2 + 0x1c);
      local_b8 = _anon_40EE2D15::HitFilter::vftable;
      local_98 = *(longlong *)(lVar2 + 0x48);
      local_120 = (undefined ***)&local_b8;
      if (local_98 == 0) {
        local_120 = (undefined ***)0x0;
      }
      local_a0 = param_2;
      local_68 = iVar9;
      FUN_144be90e0(0x6971e8f4);
      local_d8 = *puVar8;
      uStack_d4 = puVar8[1];
      uStack_d0 = puVar8[2];
      uStack_cc = puVar8[3];
      local_c8 = 0xffffffff;
      FUN_144fc0dd0(&local_108,param_2,&local_d8,&local_128);
      iVar9 = (int)local_f8;
      if ((int)local_f8 != -1) {
        iVar10 = *(int *)(param_3 + 0x50) + 1;
        if ((int)(*(uint *)(param_3 + 0x54) & 0x7fffffff) < iVar10) {
          FUN_144c33790(param_3 + 0x48,&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        piVar1 = (int *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_3 + 0x50) * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar9;
        }
        *(int *)(param_3 + 0x50) = iVar10;
        iVar9 = *(int *)(param_3 + 0x38) + 1;
        if ((int)(*(uint *)(param_3 + 0x3c) & 0x7fffffff) < iVar9) {
          FUN_144bdedb0(param_3 + 0x30,&PTR_vftable_14c6e47a0,(longlong)iVar9);
        }
        puVar6 = (undefined8 *)
                 ((longlong)*(int *)(param_3 + 0x38) * 0x10 + *(longlong *)(param_3 + 0x30));
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = local_108;
          puVar6[1] = uStack_100;
        }
        *(int *)(param_3 + 0x38) = iVar9;
      }
      iVar9 = local_68;
    }
    if (*(int *)(param_3 + 0x50) != 0) {
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x18);
      iVar10 = 10000;
      if (0 < iVar9) {
        iVar10 = iVar9;
      }
      *(int *)(param_3 + 0x58) = iVar10;
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38);
      *(undefined8 *)(param_3 + 0x60) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x30);
      *(undefined8 *)(param_3 + 0x68) = uVar3;
      lVar2 = *(longlong *)(param_1 + 0x40);
      uVar3 = *(undefined8 *)(lVar2 + 0x48);
      *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(param_3 + 0x78) = uVar3;
      uVar3 = *(undefined8 *)(lVar2 + 0x58);
      *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(lVar2 + 0x50);
      *(undefined8 *)(param_3 + 0x88) = uVar3;
      uVar3 = *(undefined8 *)(lVar2 + 0x68);
      *(undefined8 *)(param_3 + 0x90) = *(undefined8 *)(lVar2 + 0x60);
      *(undefined8 *)(param_3 + 0x98) = uVar3;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    iVar10 = (int)param_4[1] + 1;
    local_b8 = (undefined **)CONCAT44(uStack_74,local_78);
    uStack_b0 = CONCAT44(uStack_6c,uStack_70);
    if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar10) {
      FUN_144fbfc90(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    uVar7 = (ulonglong)(int)param_4[1];
    *(int *)(param_4 + 1) = iVar10;
    puVar8 = (undefined4 *)(uVar7 * 0x60 + *param_4);
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar8 + 0x14) = 0;
      puVar8[0x16] = 0;
      puVar8[0x17] = 0x80000000;
    }
    *puVar8 = 1;
    *(undefined ***)(puVar8 + 4) = local_b8;
    *(undefined8 *)(puVar8 + 6) = uStack_b0;
    *(undefined8 *)(puVar8 + 8) = 0;
    *(undefined8 *)(puVar8 + 10) = 0;
    puVar8[0xc] = iVar9;
    puVar8[0xd] = 0xffffffff;
    puVar8[0xf] = 0;
    puVar8[0x10] = 1;
  }
  puVar8[0xe] = local_90;
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 144fbeba0 FUN_144fbeba0 body=114 status=ok
// SIG undefined FUN_144fbeba0(void)

undefined8 *
FUN_144fbeba0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
             undefined4 param_5)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_5;
  *param_1 = hkaiVolumeNavigator::PathRequest::vftable;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = param_3;
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  return param_1;
}



// FUNCTION 144fbec20 FUN_144fbec20 body=171 status=ok
// SIG undefined FUN_144fbec20(void)

longlong * FUN_144fbec20(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  local_res8 = 0xb0;
  lVar2 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar2,"FindPathInput");
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_144c31710(lVar2,0);
  }
  cVar1 = FUN_144fbe7a0(*(undefined8 *)(param_1 + 0x40),param_3,lVar3,param_1 + 0x48);
  if (cVar1 == '\0') {
    *param_2 = 0;
    if (lVar3 != 0) {
      FUN_144b3f230(lVar3);
    }
  }
  else {
    *param_2 = lVar3;
  }
  return param_2;
}



// FUNCTION 144fbecd0 FUN_144fbecd0 body=301 status=ok
// SIG undefined FUN_144fbecd0(void)

void FUN_144fbecd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *(longlong *)(lVar1 + 0x130);
  FUN_144fbf220(lVar1,*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  lVar5 = *(longlong *)(param_1 + 0x48);
  lVar3 = *(longlong *)(lVar1 + 0xe0);
  lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x60 + lVar5;
  for (; lVar5 != lVar4; lVar5 = lVar5 + 0x60) {
    FUN_145319340(lVar5,lVar1,lVar3 + 0x480,lVar1 + 0x1a0);
  }
  if (param_1 == lVar2) {
    lVar2 = *(longlong *)(lVar1 + 0x130);
    *(undefined8 *)(lVar1 + 0x130) = 0;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (*(longlong *)(lVar1 + 0x138) != 0) {
      FUN_144fa9ed0(*(longlong *)(lVar1 + 0x138),1);
      lVar2 = *(longlong *)(lVar1 + 0x138);
      *(undefined8 *)(lVar1 + 0x138) = 0;
      if (lVar2 != 0) {
        FUN_144b3f230();
      }
    }
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x138);
    *(undefined8 *)(lVar1 + 0x138) = 0;
    if (lVar2 != 0) {
      FUN_144b3f230();
    }
    if (*(longlong *)(lVar1 + 0x150) != 0) {
      FUN_145016370();
    }
  }
  FUN_144b3f230(lVar1);
  return;
}



// FUNCTION 144fbee00 FUN_144fbee00 body=68 status=ok
// SIG undefined FUN_144fbee00(void)

void FUN_144fbee00(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *(float *)(lVar1 + 0x20) = *(float *)(lVar1 + 0x20) + *param_2;
  *(float *)(lVar1 + 0x24) = *(float *)(lVar1 + 0x24) + fVar2;
  *(float *)(lVar1 + 0x28) = *(float *)(lVar1 + 0x28) + fVar3;
  *(float *)(lVar1 + 0x2c) = *(float *)(lVar1 + 0x2c) + fVar4;
  pfVar5 = *(float **)(*(longlong *)(param_1 + 0x40) + 0x30);
  pfVar6 = pfVar5 + (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x38) * 4;
  for (; pfVar5 != pfVar6; pfVar5 = pfVar5 + 4) {
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    *pfVar5 = *pfVar5 + *param_2;
    pfVar5[1] = pfVar5[1] + fVar2;
    pfVar5[2] = pfVar5[2] + fVar3;
    pfVar5[3] = pfVar5[3] + fVar4;
  }
  return;
}



// FUNCTION 144fbee50 FUN_144fbee50 body=770 status=ok
// SIG undefined FUN_144fbee50(void)

void FUN_144fbee50(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  
  puVar12 = (undefined8 *)0x0;
  lVar9 = *(longlong *)(param_1 + 0x130);
  uVar11 = 0;
  local_res10 = param_2;
  if (lVar9 != 0) {
    uVar11 = *(undefined4 *)(lVar9 + 0x1c);
    iVar7 = FUN_144fa9ed0(lVar9,0);
    if (iVar7 == 1) {
      if (*(longlong *)(param_1 + 0x138) != 0) {
        FUN_144fa9ed0(*(longlong *)(param_1 + 0x138),1);
      }
      if (*(longlong *)(param_1 + 0x138) != *(longlong *)(param_1 + 0x130)) {
        if (*(longlong *)(param_1 + 0x130) != 0) {
          FUN_144b3d910();
        }
        lVar9 = *(longlong *)(param_1 + 0x138);
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
        if (lVar9 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x130);
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (lVar9 != 0) {
      FUN_144b3f230();
    }
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_145016370();
  }
  local_res8 = 0x50;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"PathRequestInput");
  }
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[7] = 0;
    puVar8[9] = 0;
    puVar8[1] = 0xffffffff;
    puVar8[2] = 1;
    *puVar8 = hkaiVolumeNavigator::PathRequestInput::vftable;
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 7) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x3c) = 0x80000000;
    puVar8[8] = 0;
    puVar12 = puVar8;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  uVar5 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x3c);
  puVar8 = puVar12 + 6;
  *(undefined4 *)(puVar12 + 4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((longlong)puVar12 + 0x24) = uVar4;
  *(undefined4 *)(puVar12 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar6;
  if ((undefined8 *)(param_1 + 0x20) != puVar8) {
    iVar7 = *(int *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if ((int)(*(uint *)((longlong)puVar12 + 0x3c) & 0x7fffffff) < iVar7) {
      FUN_144c9dda0(puVar8,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    FUN_144b3d470(*puVar8,uVar3,(longlong)iVar7 << 4);
    *(int *)(puVar12 + 7) = iVar7;
    param_2 = local_res10;
  }
  puVar8 = (undefined8 *)0x0;
  local_res10 = (longlong *)0x80;
  lVar9 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar9,"NavigatorSettings");
  }
  puVar10 = puVar8;
  if (lVar9 != 0) {
    puVar10 = (undefined8 *)FUN_144fbe700(lVar9,param_1 + 0x58);
  }
  lVar9 = puVar12[8];
  puVar12[8] = puVar10;
  if (lVar9 != 0) {
    FUN_144b3f230();
  }
  local_res18 = 0x58;
  puVar10 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar10,"PathRequest");
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar2 = *(undefined1 *)(param_1 + 0x188);
    puVar10[2] = 1;
    *(undefined1 *)(puVar10 + 3) = uVar2;
    puVar10[1] = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar11;
    *(undefined1 *)(puVar10 + 4) = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    *puVar10 = hkaiVolumeNavigator::PathRequest::vftable;
    puVar10[7] = param_1;
    puVar10[8] = puVar12;
    FUN_144b3d910(puVar12);
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x54) = 0x80000000;
    puVar8 = puVar10;
  }
  lVar9 = *(longlong *)(param_1 + 0x130);
  *(undefined8 **)(param_1 + 0x130) = puVar8;
  if (lVar9 != 0) {
    FUN_144b3f230();
  }
  LOCK();
  plVar1 = param_2 + 4;
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  puVar8 = (undefined8 *)((longlong)(int)lVar9 * 0x10 + *param_2);
  plVar1 = puVar8 + 1;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    *plVar1 = 0;
  }
  *(undefined4 *)puVar8 = *(undefined4 *)(param_1 + 0x184);
  if (*plVar1 != *(longlong *)(param_1 + 0x130)) {
    if (*(longlong *)(param_1 + 0x130) != 0) {
      FUN_144b3d910();
    }
    lVar9 = *plVar1;
    *plVar1 = *(longlong *)(param_1 + 0x130);
    if (lVar9 != 0) {
      FUN_144b3f230();
    }
  }
  FUN_144b3f230(puVar12);
  return;
}



// FUNCTION 144fbf160 FUN_144fbf160 body=190 status=ok
// SIG undefined FUN_144fbf160(void)

void FUN_144fbf160(longlong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *local_38;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_38 = local_28;
  local_2c = 0x80000001;
  local_30 = 1;
  local_18 = 0;
  FUN_144fbee50(param_1,&local_38);
  FUN_144faf550(*(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x130));
  puVar2 = local_38 + local_18 * 0x10;
  for (puVar1 = local_38; puVar1 != puVar2; puVar1 = puVar1 + 0x10) {
    if (*(longlong *)(puVar1 + 8) != 0) {
      FUN_144b3f230();
    }
  }
  local_30 = 0;
  if ((-1 < (int)local_2c) && (local_38 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_38,(ulonglong)(local_2c & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 144fbf220 FUN_144fbf220 body=1415 status=ok
// SIG undefined FUN_144fbf220(void)

void FUN_144fbf220(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong lStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  undefined1 local_258 [560];
  
  bVar10 = false;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_4 + 0x5c)) {
  case 0:
    FUN_144bde670(&local_278,local_258,0x200);
    FUN_144be6160(&local_278,
                  "Output status shouldn\'t be SEARCH_IN_PROGRESS if path request is marked as processed."
                 );
    iVar11 = FUN_144bfc110(0x45c0fd69,local_258,"Navigator\\hkaiVolumeNavigator.cpp",0x327);
    if (iVar11 != 0) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_144bde6e0(&local_278);
    break;
  case 1:
    iVar11 = *(int *)(param_1 + 0x198) + 1;
    uVar3 = *(undefined4 *)(param_3 + 0x40);
    uVar19 = *(undefined4 *)(*(longlong *)(param_3 + 0x48) + (longlong)*(int *)(param_4 + 0x54) * 4)
    ;
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    uVar1 = *(undefined4 *)(param_4 + 0x58);
    local_288 = CONCAT44(local_288._4_4_,*(undefined4 *)(param_4 + 0x50));
    puVar12 = (undefined8 *)
              (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(param_4 + 0x54) * 0x10);
    uVar8 = *puVar12;
    uVar9 = puVar12[1];
    uVar16 = *(undefined4 *)(param_4 + 0x50);
    if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar11) {
      FUN_144fbfc90((longlong *)(param_1 + 400),&PTR_vftable_14c6e47a0,(longlong)iVar11);
      uVar16 = (undefined4)local_288;
    }
    iVar2 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar11;
    puVar15 = (undefined4 *)((longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 400));
    if (puVar15 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar15 + 0x14) = 0;
      puVar15[0x16] = 0;
      puVar15[0x17] = 0x80000000;
    }
    *puVar15 = 0;
    puVar15[0xd] = uVar19;
    uVar18 = 8;
    puVar15[0xe] = uVar1;
    *(undefined8 *)(puVar15 + 4) = uVar4;
    *(undefined8 *)(puVar15 + 6) = uVar7;
    *(undefined8 *)(puVar15 + 8) = uVar8;
    *(undefined8 *)(puVar15 + 10) = uVar9;
    puVar15[0xc] = uVar3;
    puVar15[0xf] = uVar16;
LAB_144fbf550:
    puVar17 = (undefined8 *)0x0;
    local_280 = 0x30;
    puVar12 = (undefined8 *)(*DAT_14c787670)(0,&local_280,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar12,"hkaiGatePath");
    }
    puVar14 = puVar17;
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[2] = 1;
      puVar12[1] = 0xffffffff;
      *puVar12 = &PTR_LAB_14ab9f090;
      puVar12[3] = 0;
      *(undefined4 *)(puVar12 + 4) = 0;
      *(undefined4 *)((longlong)puVar12 + 0x24) = 0x80000000;
      *(undefined4 *)(puVar12 + 5) = 0;
      puVar14 = puVar12;
    }
    lVar13 = *(longlong *)(param_1 + 0x148);
    *(undefined8 **)(param_1 + 0x148) = puVar14;
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
    FUN_144c6e150(*(undefined8 *)(param_1 + 0x148),param_3,param_4,
                  *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x140));
    *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined2 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf4) = uVar18;
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_1450163d0();
      lVar13 = *(longlong *)(param_1 + 0x150);
      *(undefined8 *)(param_1 + 0x150) = 0;
      if (lVar13 != 0) {
        FUN_144b3f230();
      }
    }
    local_280 = 0x80;
    lVar13 = (*DAT_14c787670)(0,&local_280,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar13,"NavigatorSettings");
    }
    puVar12 = puVar17;
    if (lVar13 != 0) {
      puVar12 = (undefined8 *)FUN_144fbe700(lVar13,param_1 + 0x58);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x148);
    local_288 = 0x70;
    lVar13 = (*DAT_14c787670)(0,&local_288,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar13,"hkaiVolumeNavigatorStalenessChecker");
    }
    puVar14 = puVar17;
    if (lVar13 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      lStack_270 = (longlong)*(int *)(param_1 + 0x28) * 0x10 + lVar5;
      local_278._0_4_ = (undefined4)lVar5;
      local_278._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
      local_268 = (undefined4)local_278;
      uStack_264 = local_278._4_4_;
      local_278 = puVar12;
      uStack_260 = lStack_270;
      puVar14 = (undefined8 *)
                FUN_1450160a0(lVar13,uVar4,param_1,param_1 + 0x30,&local_268,&local_278);
      puVar12 = puVar17;
    }
    lVar13 = *(longlong *)(param_1 + 0x150);
    *(undefined8 **)(param_1 + 0x150) = puVar14;
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar12);
    }
    goto LAB_144fbf756;
  case 2:
    uVar3 = *(undefined4 *)(param_3 + 0x40);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    uVar19 = *(undefined4 *)(param_4 + 0x50);
    uVar1 = *(undefined4 *)(param_4 + 0x58);
    iVar11 = *(int *)(param_1 + 0x198) + 1;
    if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar11) {
      FUN_144fbfc90((longlong *)(param_1 + 400),&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    iVar2 = *(int *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = iVar11;
    puVar15 = (undefined4 *)((longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 400));
    if (puVar15 != (undefined4 *)0x0) {
      puVar15[0x17] = 0x80000000;
      *(undefined8 *)(puVar15 + 0x14) = 0;
      puVar15[0x16] = 0;
    }
    *puVar15 = 1;
    puVar15[0xe] = uVar1;
    puVar15[0xc] = uVar3;
    puVar15[0xd] = 0xffffffff;
    puVar15[0xf] = uVar19;
    puVar15[0x10] = 2;
    *(undefined8 *)(puVar15 + 4) = uVar4;
    *(undefined8 *)(puVar15 + 6) = uVar7;
    *(undefined8 *)(puVar15 + 8) = 0;
    *(undefined8 *)(puVar15 + 10) = 0;
    break;
  case 3:
    if (((*(int *)(param_1 + 0x70) < 1) || (*(char *)(param_4 + 0x5d) != '\x01')) ||
       (*(int *)(param_1 + 0x70) <= *(int *)(param_4 + 0x50))) {
      uVar18 = 2;
      uVar3 = *(undefined4 *)(param_3 + 0x40);
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      uVar7 = *(undefined8 *)(param_3 + 0x28);
      uVar1 = *(undefined4 *)(param_4 + 0x58);
      local_288 = CONCAT44(local_288._4_4_,*(undefined4 *)(param_4 + 0x50));
      uVar19 = 0;
      if (*(char *)(param_4 + 0x5d) != '\x01') {
        if (*(char *)(param_4 + 0x5d) == '\x02') {
          uVar19 = 1;
        }
        else {
          uVar19 = 2;
        }
      }
      iVar11 = *(int *)(param_1 + 0x198) + 1;
      local_280 = CONCAT44(local_280._4_4_,iVar11);
      uVar16 = *(undefined4 *)(param_4 + 0x50);
      if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar11) {
        FUN_144fbfc90((longlong *)(param_1 + 400),&PTR_vftable_14c6e47a0,(longlong)iVar11);
        uVar16 = (undefined4)local_288;
      }
      iVar11 = *(int *)(param_1 + 0x198);
      *(undefined4 *)(param_1 + 0x198) = (undefined4)local_280;
      puVar15 = (undefined4 *)((longlong)iVar11 * 0x60 + *(longlong *)(param_1 + 400));
      if (puVar15 != (undefined4 *)0x0) {
        *(undefined8 *)(puVar15 + 0x14) = 0;
        puVar15[0x16] = 0;
        puVar15[0x17] = 0x80000000;
      }
      *puVar15 = 2;
      puVar15[0xe] = uVar1;
      puVar15[0xc] = uVar3;
      puVar15[0xd] = 0xffffffff;
      puVar15[0xf] = uVar16;
      puVar15[0x10] = uVar19;
      *(undefined8 *)(puVar15 + 4) = uVar4;
      *(undefined8 *)(puVar15 + 6) = uVar7;
      *(undefined8 *)(puVar15 + 8) = 0;
      *(undefined8 *)(puVar15 + 10) = 0;
    }
    else {
      bVar10 = true;
      uVar18 = 1;
    }
    if ((*(byte *)(param_1 + 0x1d8) & 2) != 0) goto LAB_144fbf550;
LAB_144fbf756:
    if (((bVar10) && (*(char *)(param_1 + 0xd8) != '\0')) && (*(int *)(param_1 + 0x28) != 0)) {
      FUN_144fbf160(param_1);
    }
    break;
  case 4:
    FUN_144bde670(&local_278,local_258,0x200);
    FUN_144be6160(&local_278,"We don\'t expect result truncation in hkaiVolumeNavigator.");
    iVar11 = FUN_144bfc110(0x16844053,local_258,"Navigator\\hkaiVolumeNavigator.cpp",0x32b);
    if (iVar11 != 0) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FUN_144bde6e0(&local_278);
  }
  return;
}



// FUNCTION 144fbf7c0 FUN_144fbf7c0 body=238 status=ok
// SIG undefined FUN_144fbf7c0(void)

ulonglong FUN_144fbf7c0(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 *param_4,
                       int *param_5)

{
  ulonglong uVar1;
  undefined4 local_88;
  undefined4 local_84;
  undefined ***local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  int local_18;
  
  local_78 = *(undefined8 *)(param_3 + 0x38);
  local_88 = *(undefined4 *)(param_3 + 0x20);
  local_84 = *(undefined4 *)(param_3 + 0x1c);
  local_70 = _anon_40EE2D15::HitFilter::vftable;
  local_50 = *(longlong *)(param_3 + 0x48);
  local_68 = 0xffffffff;
  local_60 = 1;
  local_80 = &local_70;
  if (local_50 == 0) {
    local_80 = (undefined ***)0x0;
  }
  local_58 = param_1;
  FUN_144be90e0(0x6971e8f4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = 0xffffffff;
  FUN_144fc0dd0(&local_28,param_1,&local_48,&local_88);
  if (local_18 == -1) {
    *param_5 = -1;
    uVar1 = (ulonglong)param_5 & 0xffffffffffffff00;
  }
  else {
    *param_4 = local_28;
    param_4[1] = uStack_20;
    *param_5 = local_18;
    uVar1 = CONCAT71((uint7)(uint3)((uint)local_18 >> 8),1);
  }
  return uVar1;
}



// FUNCTION 144fbf8b0 FUN_144fbf8b0 body=429 status=ok
// SIG undefined FUN_144fbf8b0(void)

void FUN_144fbf8b0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_50 [9];
  
  uVar1 = *(uint *)((longlong)param_2 * 0x40 + 0x34 +
                   *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x18));
  FUN_144c6ecc0(*(longlong *)(param_1 + 0x148),param_2,&local_98,&local_88);
  uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x148) + 0x18) + 0x38 +
                   (longlong)param_2 * 0x40);
  plVar6 = (longlong *)
           FUN_144c6ecf0(*(longlong *)(param_1 + 0x148),local_a8,param_2,
                         *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x140));
  lVar4 = *plVar6;
  lVar5 = plVar6[1];
  iVar8 = *(int *)(param_1 + 0x198) + 1;
  if ((int)(*(uint *)(param_1 + 0x19c) & 0x7fffffff) < iVar8) {
    FUN_144fbfc90((longlong *)(param_1 + 400),&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_1 + 0x198);
  *(int *)(param_1 + 0x198) = iVar8;
  puVar7 = (undefined4 *)((longlong)iVar3 * 0x60 + *(longlong *)(param_1 + 400));
  plVar6 = (longlong *)(puVar7 + 0x14);
  if (puVar7 != (undefined4 *)0x0) {
    puVar7[0x17] = 0x80000000;
    *plVar6 = 0;
    puVar7[0x16] = 0;
  }
  *puVar7 = 5;
  *(undefined8 *)(puVar7 + 4) = local_98;
  *(undefined8 *)(puVar7 + 6) = uStack_90;
  *(undefined8 *)(puVar7 + 8) = local_88;
  *(undefined8 *)(puVar7 + 10) = uStack_80;
  puVar7[0xc] = uVar1 & 0xffc00000 | uVar2;
  *(longlong *)(puVar7 + 0xe) = lVar4;
  *(longlong *)(puVar7 + 0x10) = lVar5;
  if (local_50 != plVar6) {
    iVar8 = (int)(lVar5 - lVar4 >> 2);
    if ((int)(puVar7[0x17] & 0x7fffffff) < iVar8) {
      FUN_141807e20(plVar6,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    FUN_144b3d470(*plVar6,lVar4,(longlong)iVar8 * 4);
    puVar7[0x16] = iVar8;
  }
  *(longlong *)(puVar7 + 0xe) = *plVar6;
  *(longlong *)(puVar7 + 0x10) = *plVar6 + (longlong)(int)puVar7[0x16] * 4;
  return;
}



// FUNCTION 144fbfa60 FUN_144fbfa60 body=98 status=ok
// SIG undefined FUN_144fbfa60(void)

undefined8 FUN_144fbfa60(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,"Not implemented");
  iVar2 = FUN_144bfc110(0x6370a13c,local_208,"Navigator\\hkaiVolumeNavigator.cpp",0x3b4);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_144bde6e0(local_218);
  return 0;
}



// FUNCTION 144fbfad0 FUN_144fbfad0 body=98 status=ok
// SIG undefined FUN_144fbfad0(void)

undefined8 FUN_144fbfad0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_218 [16];
  undefined1 local_208 [520];
  
  FUN_144bde670(local_218,local_208,0x200);
  FUN_144be6160(local_218,"Not implemented");
  iVar2 = FUN_144bfc110(0x362e4038,local_208,"Navigator\\hkaiVolumeNavigator.cpp",0x3ba);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  FUN_144bde6e0(local_218);
  return 0;
}



// FUNCTION 144fbfb40 FUN_144fbfb40 body=6 status=ok
// SIG undefined FUN_144fbfb40(void)

undefined8 FUN_144fbfb40(void)

{
  return 1;
}



// FUNCTION 144fbfb50 FUN_144fbfb50 body=235 status=ok
// SIG undefined FUN_144fbfb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_144fbfb50(longlong param_1,longlong param_2,uint *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 local_128 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined1 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  uint local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_68 = 0;
  uStack_60 = 0;
  local_18 = _DAT_14c6dae80 ^ 0x80000000;
  uStack_14 = uRam000000014c6dae84 ^ 0x80000000;
  uStack_10 = uRam000000014c6dae88 ^ 0x80000000;
  uStack_c = uRam000000014c6dae8c ^ 0x80000000;
  local_b8 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x94) << 0x16 | *param_3;
  local_f0 = 0;
  local_70 = 0;
  local_58 = 0;
  local_f8[0] = 0xffffffff;
  local_78 = 0xffffffff;
  local_28 = _DAT_14c6dae80;
  uStack_24 = uRam000000014c6dae84;
  uStack_20 = uRam000000014c6dae88;
  uStack_1c = uRam000000014c6dae8c;
  local_118 = *(undefined8 *)(param_1 + 0x18);
  local_110 = local_128;
  local_b0 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18) + (longlong)(int)*param_3 * 0x18;
  local_108 = local_f8;
  local_a8 = 0;
  uStack_a0 = 0;
  local_128[0] = 0;
  local_100 = 0;
  local_120 = param_4;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))
                    (*(longlong **)(param_1 + 0x20),&local_118);
  return uVar1;
}



// FUNCTION 144fbfc40 FUN_144fbfc40 body=71 status=ok
// SIG undefined FUN_144fbfc40(void)

undefined8 * FUN_144fbfc40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144fbfc90 FUN_144fbfc90 body=548 status=ok
// SIG undefined FUN_144fbfc90(void)

ulonglong FUN_144fbfc90(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong local_res18;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar12 = uVar11 * 2;
  uVar14 = param_3;
  if (param_3 < uVar12) {
    uVar14 = uVar12;
  }
  if ((0x7ffffffe < uVar14) && (uVar14 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar7 = (**(code **)(*param_2 + 0x10))(param_2,uVar14 * 0x60);
  piVar9 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar8 = piVar9 + 0x17;
  if (0 < (int)uVar1) {
    piVar10 = (int *)(lVar7 + 0x5c);
    uVar12 = (ulonglong)uVar1;
    piVar13 = piVar8;
    do {
      if (piVar10 + -0x17 != (int *)0x0) {
        piVar10[-0x17] = *piVar9;
        uVar6 = *(undefined8 *)(piVar13 + -0x11);
        *(undefined8 *)(piVar10 + -0x13) = *(undefined8 *)(piVar13 + -0x13);
        *(undefined8 *)(piVar10 + -0x11) = uVar6;
        uVar6 = *(undefined8 *)(piVar13 + -0xd);
        *(undefined8 *)(piVar10 + -0xf) = *(undefined8 *)(piVar13 + -0xf);
        *(undefined8 *)(piVar10 + -0xd) = uVar6;
        iVar3 = piVar13[-10];
        iVar4 = piVar13[-9];
        iVar5 = piVar13[-8];
        piVar10[-0xb] = piVar13[-0xb];
        piVar10[-10] = iVar3;
        piVar10[-9] = iVar4;
        piVar10[-8] = iVar5;
        iVar3 = piVar13[-6];
        iVar4 = piVar13[-5];
        iVar5 = piVar13[-4];
        piVar10[-7] = piVar13[-7];
        piVar10[-6] = iVar3;
        piVar10[-5] = iVar4;
        piVar10[-4] = iVar5;
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
      piVar10 = piVar10 + 0x18;
      piVar9 = piVar9 + 0x18;
      piVar13 = piVar13 + 0x18;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar12 = (ulonglong)uVar1;
    do {
      piVar8[-1] = 0;
      if ((-1 < *piVar8) && (*(longlong *)(piVar8 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar8 = -0x80000000;
      piVar8[-3] = 0;
      piVar8[-2] = 0;
      piVar8 = piVar8 + 0x18;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar12 = uVar14 * 0x60 + 0x60;
  uVar15 = uVar14;
  if (uVar12 <= local_res18) {
    uVar15 = uVar14 + 1;
    if (uVar12 <= local_res18 - 0x60) {
      uVar14 = (local_res18 - 0x60) + uVar14 * -0x60;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14;
      uVar12 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar15 = uVar15 + uVar14 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar12 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x60);
  }
  *param_1 = lVar7;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar15;
  return uVar12;
}



// FUNCTION 144fbfec0 FUN_144fbfec0 body=279 status=ok
// SIG undefined FUN_144fbfec0(void)

void FUN_144fbfec0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
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
                  ,0x90);
  }
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x10,&local_res8);
  uVar6 = (ulonglong)*(uint *)(param_1 + 1);
  puVar3 = (undefined4 *)*param_1;
  puVar2 = puVar1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
        *(undefined8 *)(puVar3 + 2) = 0;
      }
      puVar3 = puVar3 + 4;
      uVar6 = uVar6 - 1;
      puVar2 = puVar2 + 4;
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
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 144fbffe0 FUN_144fbffe0 body=24 status=ok
// SIG undefined FUN_144fbffe0(void)

undefined8 * FUN_144fbffe0(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xbf80bf80;
  return param_1;
}



// FUNCTION 144fc0000 FUN_144fc0000 body=142 status=ok
// SIG undefined FUN_144fc0000(void)

ulonglong FUN_144fc0000(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = FUN_144ca6ae0((longlong *)(param_1 + 0x30));
  if ((lVar1 != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar1 + 4) * 0x18, lVar1 != 0)) {
    uVar3 = 0;
    if (0 < *(int *)(lVar1 + 0x10)) {
      piVar2 = *(int **)(lVar1 + 8);
      uVar4 = uVar3;
      do {
        if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
          return uVar4;
        }
        uVar4 = (ulonglong)((int)uVar4 + 1);
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 5;
      } while ((longlong)uVar3 < (longlong)*(int *)(lVar1 + 0x10));
    }
  }
  return 0xffffffff;
}



// FUNCTION 144fc0090 FUN_144fc0090 body=3 status=ok
// SIG undefined FUN_144fc0090(void)

void FUN_144fc0090(void)

{
  return;
}



// FUNCTION 144fc00a0 FUN_144fc00a0 body=84 status=ok
// SIG undefined FUN_144fc00a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fc00a0(undefined8 *param_1,uint *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  
  auVar1._0_8_ = CONCAT44((((int)param_2[1] >> 0x1f | uRam000000014c72e3d4) ^ param_2[1]) >> 1,
                          (((int)*param_2 >> 0x1f | _DAT_14c72e3d0) ^ *param_2) >> 1);
  auVar1._8_4_ = (((int)param_2[2] >> 0x1f | uRam000000014c72e3d8) ^ param_2[2]) >> 1;
  auVar1._12_4_ = (((int)param_2[3] >> 0x1f | uRam000000014c72e3dc) ^ param_2[3]) >> 1;
  iVar2 = ((((int)param_2[5] >> 0x1f | uRam000000014c72e3d4) ^ param_2[5]) >> 1) +
          iRam000000014c72e3e4;
  iVar3 = ((((int)param_2[6] >> 0x1f | uRam000000014c72e3d8) ^ param_2[6]) >> 1) +
          iRam000000014c72e3e8;
  iVar4 = ((((int)param_2[7] >> 0x1f | uRam000000014c72e3dc) ^ param_2[7]) >> 1) +
          iRam000000014c72e3ec;
  *(uint *)(param_1 + 2) =
       ((((int)param_2[4] >> 0x1f | _DAT_14c72e3d0) ^ param_2[4]) >> 1) + _DAT_14c72e3e0;
  *(int *)((longlong)param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 3) = iVar3;
  *(int *)((longlong)param_1 + 0x1c) = iVar4;
  *param_1 = auVar1._0_8_;
  param_1[1] = auVar1._8_8_ & 0xffffffff | (param_3 & 0xffff) << 0x20 | (param_3 >> 0x10) << 0x30;
  return;
}



// FUNCTION 144fc0100 FUN_144fc0100 body=243 status=ok
// SIG undefined FUN_144fc0100(void)

uint * FUN_144fc0100(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  uint *puVar5;
  
  uVar2 = *param_2;
  uVar1 = *param_4;
  param_1[10] = param_3;
  bVar4 = uVar1 < uVar2;
  *(uint **)(param_1 + 6) = param_2;
  puVar5 = param_4;
  if (uVar2 <= uVar1) {
    puVar5 = param_2;
  }
  *param_1 = (uint)bVar4;
  if (uVar2 <= uVar1) {
    param_2 = param_4;
  }
  *(uint **)(param_1 + 8) = param_4;
  *(uint **)(param_1 + 4) = param_2;
  param_1[0xb] = param_5;
  *(uint **)(param_1 + 2) = puVar5;
  do {
    if (*param_2 < puVar5[4]) {
      do {
        if (-1 < (int)(puVar5[5] - param_2[1] | puVar5[6] - param_2[2] | param_2[5] - puVar5[1] |
                      param_2[6] - puVar5[2])) {
          *(uint **)(param_1 + 4) = param_2;
          *(uint **)(param_1 + 2) = puVar5;
          *param_1 = (uint)bVar4;
          return param_1;
        }
        param_2 = param_2 + 8;
      } while (*param_2 < puVar5[4]);
    }
    *(longlong *)(param_1 + (ulonglong)bVar4 * 2 + 6) =
         *(longlong *)(param_1 + (ulonglong)bVar4 * 2 + 6) + 0x20;
    param_1[(ulonglong)bVar4 + 10] = param_1[(ulonglong)bVar4 + 10] - 1;
    puVar5 = *(uint **)(param_1 + 6);
    puVar3 = *(uint **)(param_1 + 8);
    bVar4 = *puVar3 < *puVar5;
    param_2 = puVar3;
    if (*puVar3 < *puVar5) {
      param_2 = puVar5;
      puVar5 = puVar3;
    }
  } while ((0 < (int)param_1[10]) && (0 < (int)param_1[0xb]));
  return param_1;
}



// FUNCTION 144fc0200 FUN_144fc0200 body=736 status=ok
// SIG undefined FUN_144fc0200(void)

void FUN_144fc0200(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong local_res8;
  longlong local_res18 [2];
  longlong local_88;
  longlong local_80;
  undefined4 *local_78;
  undefined4 *local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  undefined4 *local_48;
  int local_40;
  
  uVar13 = (ulonglong)param_2;
  FUN_144fc04e0(&local_50,param_2);
  puVar9 = local_48;
  uVar15 = 0;
  puVar11 = param_1;
  if (0 < param_2) {
    do {
      uVar3 = *puVar11;
      puVar9[1] = (int)uVar15;
      uVar16 = (int)uVar15 + 1;
      *puVar9 = uVar3;
      puVar9 = puVar9 + 2;
      uVar15 = (ulonglong)uVar16;
      puVar11 = puVar11 + 8;
    } while ((int)uVar16 < param_2);
  }
  FUN_144fc04e0(&local_68,param_2);
  local_88 = local_60;
  local_78 = local_48;
  lVar12 = (longlong)local_58 * 8;
  local_80 = lVar12 + local_60;
  lVar2 = (longlong)local_40 * 8;
  local_70 = local_48 + (longlong)local_40 * 2;
  FUN_1453194f0(&local_78,&local_88,0);
  if (local_68 == 0) {
    (*DAT_14c787678)(1,local_60,lVar12);
  }
  else {
    uVar15 = lVar12 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_68 + 0x28) < uVar15) ||
       (local_60 + uVar15 != *(longlong *)(local_68 + 0x38))) {
      FUN_144be8550(local_68,local_60);
    }
    else {
      *(longlong *)(local_68 + 0x38) = local_60;
      if (*(longlong *)(local_68 + 0x48) == local_60) {
        FUN_144be8430();
      }
    }
  }
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar12 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar12 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar12 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar12 + 0xf0) = lVar8;
  }
  uVar15 = *(ulonglong *)(*(longlong *)(lVar8 + 0x3d0) + 0x10);
  if (*(longlong *)(uVar15 + 8) != 0) {
    uVar15 = 0;
  }
  lVar12 = uVar13 * 0x20;
  local_res18[0] = lVar12;
  if (uVar15 == 0) {
    puVar9 = (undefined4 *)(*DAT_14c787670)(1,local_res18,0x40);
  }
  else {
    local_res8 = lVar12 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(uVar15 + 0x28)) {
      puVar9 = *(undefined4 **)(uVar15 + 0x38);
      if ((longlong)puVar9 + local_res8 <= *(ulonglong *)(uVar15 + 0x40)) {
        *(ulonglong *)(uVar15 + 0x38) = (longlong)puVar9 + local_res8;
        goto LAB_144fc03c7;
      }
    }
    puVar9 = (undefined4 *)FUN_144b454a0(uVar15,&local_res8);
  }
LAB_144fc03c7:
  if (0 < (longlong)uVar13) {
    puVar10 = local_48 + 1;
    puVar11 = puVar9;
    uVar14 = uVar13;
    do {
      uVar16 = *puVar10;
      puVar10 = puVar10 + 2;
      uVar6 = *(undefined8 *)(param_1 + (ulonglong)uVar16 * 8 + 4);
      uVar7 = *(undefined8 *)((longlong)(param_1 + (ulonglong)uVar16 * 8 + 4) + 8);
      puVar1 = param_1 + (ulonglong)uVar16 * 8;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar11 = *puVar1;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      *(undefined8 *)(puVar11 + 4) = uVar6;
      *(undefined8 *)(puVar11 + 6) = uVar7;
      uVar14 = uVar14 - 1;
      puVar11 = puVar11 + 8;
    } while (uVar14 != 0);
  }
  uVar13 = (uVar13 & 0x7ffffffffffffff) << 1;
  if ((int)uVar13 != 0) {
    puVar11 = puVar9;
    do {
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      puVar1 = (undefined4 *)(((longlong)param_1 - (longlong)puVar9) + (longlong)puVar11);
      *puVar1 = *puVar11;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar11 = puVar11 + 4;
      uVar16 = (int)uVar13 - 1;
      uVar13 = (ulonglong)uVar16;
    } while (uVar16 != 0);
  }
  if (uVar15 == 0) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar13 >> 8),1),puVar9,lVar12);
  }
  else {
    uVar13 = lVar12 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar15 + 0x28) < uVar13) ||
       (uVar13 + (longlong)puVar9 != *(longlong *)(uVar15 + 0x38))) {
      FUN_144be8550(uVar15,puVar9);
    }
    else {
      *(undefined4 **)(uVar15 + 0x38) = puVar9;
      if (*(undefined4 **)(uVar15 + 0x48) == puVar9) {
        FUN_144be8430(uVar15);
      }
    }
  }
  if (local_50 == 0) {
    (*DAT_14c787678)(1,local_48,lVar2);
  }
  else {
    uVar15 = lVar2 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_50 + 0x28) < uVar15) ||
       ((longlong)local_48 + uVar15 != *(longlong *)(local_50 + 0x38))) {
      FUN_144be8550(local_50,local_48);
    }
    else {
      *(undefined4 **)(local_50 + 0x38) = local_48;
      if (*(undefined4 **)(local_50 + 0x48) == local_48) {
        FUN_144be8430();
      }
    }
  }
  return;
}



// FUNCTION 144fc04e0 FUN_144fc04e0 body=250 status=ok
// SIG undefined FUN_144fc04e0(void)

longlong * FUN_144fc04e0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_res8;
  longlong local_res18;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar3 + 0xf0);
  if (lVar2 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar2 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar2;
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar3 + 8) != 0) {
    lVar3 = 0;
  }
  *param_1 = lVar3;
  param_1[1] = 0;
  local_res18 = (longlong)param_2 * 8;
  *(int *)(param_1 + 2) = param_2;
  if (lVar3 == 0) {
    lVar3 = (*DAT_14c787670)(1,&local_res18,0x40);
    param_1[1] = lVar3;
  }
  else {
    local_res8 = local_res18 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(lVar3 + 0x28)) {
      lVar2 = *(longlong *)(lVar3 + 0x38);
      uVar1 = local_res8 + lVar2;
      if (uVar1 <= *(ulonglong *)(lVar3 + 0x40)) {
        *(ulonglong *)(lVar3 + 0x38) = uVar1;
        param_1[1] = lVar2;
        return param_1;
      }
    }
    lVar3 = FUN_144b454a0(lVar3,&local_res8);
    param_1[1] = lVar3;
  }
  return param_1;
}



// FUNCTION 144fc05e0 FUN_144fc05e0 body=3 status=ok
// SIG undefined FUN_144fc05e0(void)

void FUN_144fc05e0(void)

{
  return;
}



// FUNCTION 144fc05f0 FUN_144fc05f0 body=95 status=ok
// SIG undefined FUN_144fc05f0(void)

float * FUN_144fc05f0(float *param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  undefined8 uVar17;
  
  if (param_1[8] != -NAN) {
    fVar2 = *param_1;
    fVar3 = param_1[1];
    fVar4 = param_1[2];
    lVar1 = *(longlong *)((longlong)(int)param_1[8] * 0x120 + *(longlong *)(param_3 + 0x38));
    fVar5 = *(float *)(lVar1 + 0x74);
    fVar6 = *(float *)(lVar1 + 0x78);
    fVar7 = *(float *)(lVar1 + 0x7c);
    fVar8 = *(float *)(lVar1 + 100);
    fVar9 = *(float *)(lVar1 + 0x68);
    fVar10 = *(float *)(lVar1 + 0x6c);
    fVar11 = *(float *)(lVar1 + 0x84);
    fVar12 = *(float *)(lVar1 + 0x88);
    fVar13 = *(float *)(lVar1 + 0x8c);
    fVar14 = *(float *)(lVar1 + 0x94);
    fVar15 = *(float *)(lVar1 + 0x98);
    fVar16 = *(float *)(lVar1 + 0x9c);
    *param_2 = fVar3 * *(float *)(lVar1 + 0x70) + fVar2 * *(float *)(lVar1 + 0x60) +
               fVar4 * *(float *)(lVar1 + 0x80) + *(float *)(lVar1 + 0x90);
    param_2[1] = fVar3 * fVar5 + fVar2 * fVar8 + fVar4 * fVar11 + fVar14;
    param_2[2] = fVar3 * fVar6 + fVar2 * fVar9 + fVar4 * fVar12 + fVar15;
    param_2[3] = fVar3 * fVar7 + fVar2 * fVar10 + fVar4 * fVar13 + fVar16;
    return param_2;
  }
  uVar17 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)param_2 = *(undefined8 *)param_1;
  *(undefined8 *)(param_2 + 2) = uVar17;
  return param_2;
}



// FUNCTION 144fc0650 FUN_144fc0650 body=1907 status=ok
// SIG undefined FUN_144fc0650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144fc0650(float *param_1,longlong param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  float *pfVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_res20 [2];
  float local_580;
  float local_57c [5];
  undefined8 local_568;
  undefined8 uStack_560;
  longlong *local_558;
  float local_550;
  float local_54c;
  float local_548;
  float local_540;
  float local_53c;
  float local_538;
  float local_530;
  undefined1 local_528 [16];
  char *local_518;
  char *local_510;
  undefined *local_508;
  undefined *local_500;
  undefined1 local_4f8 [16];
  undefined *local_4e8;
  undefined *local_4e0;
  undefined *local_4d8;
  undefined *local_4d0;
  undefined *local_4c8;
  undefined *local_4c0;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_4a8;
  undefined *local_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  float local_488;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  float local_448;
  float local_444;
  float local_440;
  undefined4 local_43c;
  float local_438;
  undefined8 local_428;
  undefined8 uStack_420;
  float local_418;
  float local_414;
  float local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined **local_3e8 [2];
  int local_3d8;
  undefined ***local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined **local_398 [2];
  int local_388;
  undefined ***local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined8 uStack_340;
  float local_338;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined **local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  float local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined8 local_288;
  undefined1 local_258 [560];
  
  ppuVar6 = &local_4b8;
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
    local_518 = "TtresolvePositionOnNavMesh";
    local_510 = "";
    FUN_144b3f370(lVar1,&local_518);
  }
  local_res20[0] = param_4[8];
  cVar3 = FUN_144ca49d0(param_2,local_res20);
  if (cVar3 == '\0') {
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = -NAN;
    if (lVar1 == 0) {
      return param_1;
    }
    local_508 = &DAT_149981764;
    local_500 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_508);
    return param_1;
  }
  local_558 = (longlong *)FUN_144b3e3b0(param_2);
  iVar7 = 0;
  if (0 < *(int *)(param_2 + 0x40)) {
    do {
      lVar4 = *(longlong *)((longlong)iVar7 * 0x120 + *(longlong *)(param_2 + 0x38));
      if ((lVar4 != 0) &&
         (lVar4 = *(longlong *)(lVar4 + 0x20), *(float *)(lVar4 + 0x180) == param_4[8])) {
        local_530 = param_4[3] - *(float *)(*(longlong *)(lVar4 + 0x68) + 0xb0);
        fVar17 = 0.0;
        if (0.0 <= local_530) {
          fVar17 = local_530;
        }
        goto LAB_144fc0821;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_2 + 0x40));
  }
  FUN_144bde670(local_4f8,local_258,0x200);
  FUN_144be6160(local_4f8,"Layer not found");
  iVar7 = FUN_144bfc110(0x4ed2fce5,local_258,"Character\\Utilities\\hkaiCharacterUtil.cpp",0x194);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    pfVar5 = (float *)(*pcVar2)();
    return pfVar5;
  }
  FUN_144bde6e0(local_4f8);
  fVar17 = 0.0;
LAB_144fc0821:
  fVar14 = 0.0;
  local_568 = 0;
  uStack_560 = 0;
  if ((*(char *)(param_4 + 2) != '\0') && (0.0 < fVar17)) {
    if (-1 < (int)param_4[0xd]) {
      uVar9 = *(undefined8 *)(param_2 + 0x58);
      local_548 = param_4[0xe];
      local_580 = param_4[0xc];
      local_550 = param_4[0xc];
      local_54c = param_4[0xd];
      uVar8 = FUN_144ca5190(param_2,&local_580);
      uVar9 = FUN_144fe7780(uVar9,&local_550);
      fVar14 = (float)FUN_144fd4200(uVar9,uVar8);
    }
    local_458 = *(undefined8 *)param_3;
    uStack_450 = *(undefined8 *)(param_3 + 2);
    local_448 = fVar14 + fVar17;
    local_438 = param_4[8];
    local_444 = param_4[1];
    local_400 = *(undefined8 *)(param_4 + 10);
    local_3f8 = *(undefined8 *)(param_4 + 0x12);
    local_418 = param_4[0xc];
    local_414 = param_4[0xd];
    local_440 = *param_4 / 4.0;
    local_410 = param_4[0xe];
    local_408 = *(undefined8 *)(param_4 + 0x10);
    local_43c = 3;
    local_428 = *(undefined8 *)(param_3 + 4);
    uStack_420 = *(undefined8 *)(param_3 + 6);
    iVar7 = FUN_144b3e3c0(param_2,&local_458,&local_568,local_57c);
    if (iVar7 == 0) {
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = -NAN;
      if (lVar1 == 0) {
        return param_1;
      }
      local_4d8 = &DAT_149981764;
      ppuVar6 = &local_4d8;
      local_4d0 = &DAT_149981766;
    }
    else {
      *(undefined8 *)param_1 = local_568;
      *(undefined8 *)(param_1 + 2) = uStack_560;
      param_1[4] = local_57c[0];
      if (lVar1 == 0) {
        return param_1;
      }
      local_4e8 = &DAT_149981764;
      ppuVar6 = &local_4e8;
      local_4e0 = &DAT_149981766;
    }
    goto LAB_144fc0d86;
  }
  local_57c[1] = 0.001;
  local_478 = 0x3a83126f3a83126f;
  uStack_470 = 0x3a83126f3a83126f;
  local_57c[2] = 0.1;
  local_468 = 0x3dcccccd3dcccccd;
  uStack_460 = 0x3dcccccd3dcccccd;
  local_498 = _DAT_14c6dae80;
  uStack_490 = uRam000000014c6dae88;
  local_488 = -NAN;
  if (param_3[9] != -NAN) {
    local_478 = *(undefined8 *)(param_4 + 4);
    uStack_470 = *(undefined8 *)(param_4 + 6);
    local_498 = *(undefined8 *)param_3;
    uStack_490 = *(undefined8 *)(param_3 + 2);
    local_488 = param_3[9];
  }
  if ((int)param_4[0xd] < 0) {
    local_2e8 = *(undefined8 *)(param_4 + 0x10);
  }
  else {
    local_540 = param_4[0xc];
    local_53c = param_4[0xd];
    local_538 = param_4[0xe];
    local_2e8 = FUN_144fe77a0(*(undefined8 *)(param_2 + 0x58),&local_540);
  }
  local_2d0 = param_4[3];
  local_3a8 = param_4[1];
  local_2c8 = *(undefined8 *)(param_3 + 4);
  uStack_2c0 = *(undefined8 *)(param_3 + 6);
  local_2e0 = *(undefined8 *)(param_4 + 10);
  local_2d8 = *(undefined8 *)(param_4 + 0x12);
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_3b8 = *(undefined8 *)param_3;
  uStack_3b0 = *(undefined8 *)(param_3 + 2);
  local_3e8[0] = hkaiUpOrientedRaycast::BidirectionalRaycastInput::vftable;
  local_308 = _anon_BCAF2FDA::FaceEnablementWrapper::vftable;
  local_3d8 = 1 << (SUB41(param_4[8],0) & 0x1f);
  local_3d0 = &local_308;
  local_348 = _DAT_14c6daca0;
  uStack_340 = uRam000000014c6daca8;
  local_300 = 0xffffffff;
  local_2f8 = 1;
  local_2b8 = 0;
  local_288 = 0;
  local_338 = -NAN;
  fStack_3a4 = local_3a8;
  fStack_3a0 = local_3a8;
  fStack_39c = local_3a8;
  local_2f0 = param_2;
  if (param_3[9] == -NAN) {
    cVar3 = FUN_14531b0d0(local_3e8,param_2,&local_348);
  }
  else {
    local_468 = CONCAT44(local_3a8,local_3a8);
    uStack_460 = CONCAT44(local_3a8,local_3a8);
    cVar3 = FUN_14531ba20(param_2,local_3e8,&local_498,&local_348);
  }
  if (cVar3 == '\0') {
LAB_144fc0b98:
    local_298 = param_4[1];
    local_368 = *param_3;
    fStack_364 = param_3[1];
    fStack_360 = param_3[2];
    fStack_35c = param_3[3];
    local_378 = 0;
    uStack_370 = 0;
    local_398[0] = &PTR_LAB_14aba2e20;
    local_388 = 1 << (SUB41(param_4[8],0) & 0x1f);
    local_380 = &local_308;
    local_2b8 = 1;
    auVar10._0_4_ = *param_4 * *param_4 + local_298 * local_298;
    auVar10._4_4_ = auVar10._0_4_;
    auVar10._8_4_ = auVar10._0_4_;
    auVar10._12_4_ = auVar10._0_4_;
    auVar10 = sqrtps(auVar10,auVar10);
    local_358 = auVar10._0_4_;
    uStack_354 = local_358;
    uStack_350 = local_358;
    uStack_34c = local_358;
    local_2a8 = local_368;
    fStack_2a4 = fStack_364;
    fStack_2a0 = fStack_360;
    fStack_29c = fStack_35c;
    fStack_294 = local_298;
    fStack_290 = local_298;
    fStack_28c = local_298;
    if (param_3[9] == -NAN) {
      pfVar5 = (float *)(**(code **)(*local_558 + 0x18))(local_558,&local_558,local_398,&local_568);
    }
    else {
      local_468 = *(undefined8 *)(param_4 + 4);
      uStack_460 = *(undefined8 *)(param_4 + 6);
      pfVar5 = (float *)FUN_14531b3e0(local_528,param_2,local_398,&local_498,&local_568);
    }
    fVar17 = *pfVar5;
    local_318 = (float)local_568;
    fStack_314 = local_568._4_4_;
    fStack_310 = (float)uStack_560;
    fStack_30c = uStack_560._4_4_;
    if (fVar17 != -NAN) goto LAB_144fc0c74;
  }
  else {
    local_568 = CONCAT44(fStack_314,local_318);
    uStack_560 = CONCAT44(fStack_30c,fStack_310);
    fVar17 = local_338;
    if (local_338 == -NAN) goto LAB_144fc0b98;
LAB_144fc0c74:
    lVar4 = *(longlong *)((ulonglong)((uint)fVar17 >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38))
    ;
    fVar11 = (local_318 - *param_3) * *(float *)(lVar4 + 0xc0);
    fVar12 = (fStack_314 - param_3[1]) * *(float *)(lVar4 + 0xc4);
    fVar13 = (fStack_310 - param_3[2]) * *(float *)(lVar4 + 200);
    fVar14 = fVar12 + fVar11 + fVar13;
    fVar15 = (local_318 - *param_3) - fVar14 * *(float *)(lVar4 + 0xc0);
    fVar16 = (fStack_314 - param_3[1]) - (fVar12 + fVar11 + fVar13) * *(float *)(lVar4 + 0xc4);
    fVar11 = (fStack_310 - param_3[2]) - (fVar12 + fVar11 + fVar13) * *(float *)(lVar4 + 200);
    if ((*param_4 * *param_4 < fVar16 * fVar16 + fVar15 * fVar15 + fVar11 * fVar11) ||
       (fVar14 = ABS(fVar14), param_4[1] <= fVar14 && fVar14 != param_4[1])) {
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[4] = -NAN;
      if (lVar1 == 0) {
        return param_1;
      }
      local_4c8 = &DAT_149981764;
      ppuVar6 = &local_4c8;
      local_4c0 = &DAT_149981766;
      goto LAB_144fc0d86;
    }
    if (fVar17 != -NAN) {
      *param_1 = local_318;
      param_1[1] = fStack_314;
      param_1[2] = fStack_310;
      param_1[3] = fStack_30c;
      param_1[4] = fVar17;
      if (lVar1 == 0) {
        return param_1;
      }
      local_4b8 = &DAT_149981764;
      local_4b0 = &DAT_149981766;
      goto LAB_144fc0d86;
    }
  }
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = -NAN;
  if (lVar1 == 0) {
    return param_1;
  }
  local_4a8 = &DAT_149981764;
  ppuVar6 = &local_4a8;
  local_4a0 = &DAT_149981766;
LAB_144fc0d86:
  FUN_144b3f260(lVar1,ppuVar6);
  return param_1;
}



// FUNCTION 144fc0dd0 FUN_144fc0dd0 body=852 status=ok
// SIG undefined FUN_144fc0dd0(void)

float * FUN_144fc0dd0(float *param_1,longlong param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [14];
  longlong lVar16;
  longlong *plVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar25 [16];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_res18 [2];
  char *local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined **local_a8 [2];
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar16 = param_2;
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar18 = (undefined4)lVar16;
  lVar16 = *(longlong *)(lVar2 + 0xf0);
  if (lVar16 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar16 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar16;
  }
  lVar2 = *(longlong *)(lVar16 + 0x3e0);
  if (lVar2 != 0) {
    local_c8 = "TtresolvePositionOnNavVolume";
    uVar18 = SUB84(&local_c8,0);
    local_c0 = "";
    FUN_144b3f370(lVar2);
  }
  fVar1 = param_3[4];
  if (fVar1 != -NAN) {
    lVar16 = *(longlong *)
              ((ulonglong)((uint)fVar1 >> 0x16) * 0x120 + 8 + *(longlong *)(param_2 + 0x38));
    if ((lVar16 != 0) &&
       (lVar3 = *(longlong *)(lVar16 + 0x20), (int)((uint)fVar1 & 0x3fffff) < *(int *)(lVar3 + 0x20)
       )) {
      lVar4 = *(longlong *)(lVar3 + 0x38);
      auVar25 = *(undefined1 (*) [16])
                 (*(longlong *)(lVar3 + 0x18) + (ulonglong)((uint)fVar1 & 0x3fffff) * 0x18);
      auVar8._10_2_ = 0;
      auVar8._0_10_ = auVar25._0_10_;
      auVar8._12_2_ = auVar25._6_2_;
      auVar9._8_2_ = auVar25._4_2_;
      auVar9._0_8_ = auVar25._0_8_;
      auVar9._10_4_ = auVar8._10_4_;
      auVar15._6_8_ = 0;
      auVar15._0_6_ = auVar9._8_6_;
      auVar10._4_2_ = auVar25._2_2_;
      auVar10._0_4_ = auVar25._0_4_;
      auVar10._6_8_ = SUB148(auVar15 << 0x40,6);
      auVar33._0_4_ =
           ((float)(auVar25._0_4_ & 0xffff) + 0.0) * *(float *)(lVar4 + 0xa0) +
           *(float *)(lVar4 + 0xb0);
      auVar33._4_4_ =
           ((float)auVar10._4_4_ + 0.0) * *(float *)(lVar4 + 0xa4) + *(float *)(lVar4 + 0xb4);
      auVar33._8_4_ =
           ((float)(auVar9._8_4_ >> 0x10) * 65536.0 + (float)(auVar9._8_4_ & 0xffff)) *
           *(float *)(lVar4 + 0xa8) + *(float *)(lVar4 + 0xb8);
      auVar33._12_4_ =
           ((float)auVar25._6_2_ + 0.0) * *(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0xbc);
      auVar35._0_4_ =
           ((float)auVar25._8_2_ + 0.0) * *(float *)(lVar4 + 0xa0) + *(float *)(lVar4 + 0xb0);
      auVar35._4_4_ =
           ((float)auVar25._10_2_ + 0.0) * *(float *)(lVar4 + 0xa4) + *(float *)(lVar4 + 0xb4);
      auVar35._8_4_ =
           ((float)auVar25._12_2_ + 0.0) * *(float *)(lVar4 + 0xa8) + *(float *)(lVar4 + 0xb8);
      auVar35._12_4_ =
           ((float)auVar25._14_2_ + 0.0) * *(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0xbc);
      if (*(byte *)(lVar16 + 0x40) != 0) {
        uVar22 = (uint)*(byte *)(lVar16 + 0x40);
        uVar29 = -(uint)(0x16a8300 << uVar22 < 0);
        uVar30 = -(uint)(0x502ab000 << uVar22 < 0);
        uVar31 = -(uint)(0xa2a8c00 << uVar22 < 0);
        uVar5 = -(uint)(0xa154c00 << uVar22 < 0);
        uVar6 = -(uint)(0x1554300 << uVar22 < 0);
        uVar7 = -(uint)(0x50157000 << uVar22 < 0);
        uVar19 = (ulonglong)uVar22;
        uVar24 = (0xae71e0U >> uVar19) << 0x1f;
        uVar26 = (0xb9e306U >> uVar19) << 0x1f;
        uVar27 = (0xeb903cU >> uVar19) << 0x1f;
        uVar28 = (0U >> uVar19) << 0x1f;
        uVar21 = CONCAT44(uVar26 ^ (~uVar6 & ((uint)auVar33._8_4_ & uVar30 |
                                             ~uVar30 & (uint)auVar33._4_4_) |
                                   (uint)auVar33._0_4_ & uVar6),
                          uVar24 ^ (~uVar5 & ((uint)auVar33._4_4_ & uVar29 |
                                             ~uVar29 & (uint)auVar33._0_4_) |
                                   (uint)auVar33._8_4_ & uVar5));
        uVar22 = uVar27 ^ (~uVar7 & ((uint)auVar33._0_4_ & uVar31 | ~uVar31 & (uint)auVar33._8_4_) |
                          (uint)auVar33._4_4_ & uVar7);
        uVar23 = uVar28 ^ (uint)auVar33._12_4_;
        auVar32._8_4_ = uVar22;
        auVar32._0_8_ = uVar21;
        auVar32._12_4_ = uVar23;
        auVar34._8_4_ = uVar22;
        auVar34._0_8_ = uVar21;
        auVar34._12_4_ = uVar23;
        auVar25._0_4_ =
             uVar24 ^ (~uVar5 & ((uint)auVar35._4_4_ & uVar29 | ~uVar29 & (uint)auVar35._0_4_) |
                      (uint)auVar35._8_4_ & uVar5);
        auVar25._4_4_ =
             uVar26 ^ (~uVar6 & ((uint)auVar35._8_4_ & uVar30 | ~uVar30 & (uint)auVar35._4_4_) |
                      (uint)auVar35._0_4_ & uVar6);
        auVar25._8_4_ =
             uVar27 ^ (~uVar7 & ((uint)auVar35._0_4_ & uVar31 | ~uVar31 & (uint)auVar35._8_4_) |
                      (uint)auVar35._4_4_ & uVar7);
        auVar25._12_4_ = uVar28 ^ (uint)auVar35._12_4_;
        auVar33 = minps(auVar32,auVar25);
        auVar35 = maxps(auVar34,auVar25);
      }
      fVar11 = *param_3;
      fVar12 = param_3[1];
      fVar13 = param_3[2];
      fVar14 = param_3[3];
      auVar20._0_4_ =
           -(uint)(auVar33._0_4_ + *(float *)(lVar16 + 0x50) <= fVar11 &&
                  fVar11 <= auVar35._0_4_ + *(float *)(lVar16 + 0x50));
      auVar20._4_4_ =
           -(uint)(auVar33._4_4_ + *(float *)(lVar16 + 0x54) <= fVar12 &&
                  fVar12 <= auVar35._4_4_ + *(float *)(lVar16 + 0x54));
      auVar20._8_4_ =
           -(uint)(fVar13 <= auVar35._8_4_ + *(float *)(lVar16 + 0x58) &&
                  auVar33._8_4_ + *(float *)(lVar16 + 0x58) <= fVar13);
      auVar20._12_4_ =
           -(uint)(fVar14 <= auVar35._12_4_ + *(float *)(lVar16 + 0x5c) &&
                  auVar33._12_4_ + *(float *)(lVar16 + 0x5c) <= fVar14);
      uVar18 = movmskps(uVar18,auVar20);
      if (((byte)uVar18 & 7) == 7) {
        *param_1 = fVar11;
        param_1[1] = fVar12;
        param_1[2] = fVar13;
        param_1[3] = fVar14;
        param_1[4] = fVar1;
        goto LAB_144fc10de;
      }
    }
  }
  local_68 = *param_4;
  local_a8[0] = &PTR_FUN_14ab9efb8;
  local_98 = 1 << ((byte)param_4[1] & 0x1f);
  local_90 = *(undefined8 *)(param_4 + 2);
  local_88 = *(undefined8 *)(param_4 + 4);
  local_78 = *(undefined8 *)param_3;
  uStack_70 = *(undefined8 *)(param_3 + 2);
  local_80 = 0;
  uStack_64 = local_68;
  uStack_60 = local_68;
  uStack_5c = local_68;
  plVar17 = (longlong *)FUN_144b3f1e0(param_2);
  (**(code **)(*plVar17 + 0x18))(plVar17,local_res18,local_a8,&local_b8);
  if (local_res18[0] == -NAN) {
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    param_1[0] = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    param_1[4] = -NAN;
  }
  else {
    *(undefined8 *)param_1 = local_b8;
    *(undefined8 *)(param_1 + 2) = uStack_b0;
    param_1[4] = local_res18[0];
  }
LAB_144fc10de:
  if (lVar2 != 0) {
    local_c8 = "Et";
    local_c0 = "";
    FUN_144b3f260(lVar2,&local_c8);
  }
  return param_1;
}



// FUNCTION 144fc1130 FUN_144fc1130 body=62 status=ok
// SIG undefined FUN_144fc1130(void)

bool FUN_144fc1130(longlong param_1,longlong param_2)

{
  return 0.0 <= *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x48) * *(float *)(param_2 + 200)
                + *(float *)(param_1 + 0x44) * *(float *)(param_2 + 0xc4) +
                  *(float *)(param_1 + 0x40) * *(float *)(param_2 + 0xc0);
}



// FUNCTION 144fc1170 FUN_144fc1170 body=1117 status=ok
// SIG undefined FUN_144fc1170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144fc1170(longlong param_1,longlong param_2,uint *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong local_res8;
  float *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  float *local_e0;
  longlong local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_58;
  longlong local_50;
  longlong local_48;
  undefined8 uStack_40;
  
  if (((*(longlong *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x28) == 0)) &&
     (*(char *)(param_1 + 0x50) == '\0')) {
    return 1;
  }
  local_res8 = CONCAT44(local_res8._4_4_,*param_3);
  local_c8 = 0;
  uStack_c0 = 0;
  lVar11 = FUN_144c44fc0(*(undefined8 *)(param_2 + 0x20),&local_res8,&local_c8);
  uVar8 = uStack_c0;
  lVar2 = local_c8;
  plVar1 = *(longlong **)(param_1 + 0x20);
  uVar14 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x17c) << 0x16 | *param_3;
  if ((plVar1 != (longlong *)0x0) &&
     (cVar9 = (**(code **)(*plVar1 + 0x18))
                        (plVar1,*(undefined8 *)(param_1 + 0x18),uVar14,lVar11,&local_c8),
     cVar9 == '\0')) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    uStack_c0 = *(undefined8 *)(param_1 + 0x30);
    local_f8 = *(float **)(param_1 + 0x18);
    local_a8 = 0;
    uStack_a0 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_f0 = &local_c8;
    local_e8 = local_b8;
    local_c8 = CONCAT44(local_c8._4_4_,*(float *)(param_1 + 0x38) * 2.0);
    local_b8[0] = 0xffffffff;
    local_b0 = 0;
    local_88 = 0xffffffff;
    local_80 = 0;
    local_48 = lVar2;
    uStack_40 = uVar8;
    local_e0 = (float *)CONCAT71(local_e0._1_7_,0x80);
    local_58 = uVar14;
    local_50 = lVar11;
    cVar9 = (**(code **)(*plVar1 + 0x28))(plVar1,&local_f8);
    if (cVar9 == '\0') {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x50) == '\0') {
    return 1;
  }
  fVar5 = *(float *)(param_2 + 0xc0);
  fVar6 = *(float *)(param_2 + 0xc4);
  fVar7 = *(float *)(param_2 + 200);
  if (*(longlong *)(param_1 + 0x80) != param_2) {
    *(longlong *)(param_1 + 0x80) = param_2;
    fVar16 = fVar5 * *(float *)(param_1 + 0x60);
    fVar18 = fVar6 * *(float *)(param_1 + 100);
    fVar20 = fVar7 * *(float *)(param_1 + 0x68);
    fVar17 = fVar20 + fVar18 + fVar16;
    fVar19 = fVar20 + fVar18 + fVar16;
    fVar21 = fVar20 + fVar18 + fVar16;
    fVar20 = fVar20 + fVar18 + fVar16;
    *(float *)(param_1 + 0x90) = fVar17 - *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x94) = fVar19 - *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x98) = fVar21 - *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x9c) = fVar20 - *(float *)(param_1 + 0x7c);
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x70) + fVar17;
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x74) + fVar19;
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x78) + fVar21;
    *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0x7c) + fVar20;
  }
  uVar14 = (int)*(short *)(lVar11 + 8) + 1;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffff00000000);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar2 + 0xf0);
  if (lVar12 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar12;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar12 + 0x3d0) + 0x10);
  local_e8 = (undefined4 *)0;
  if (*(longlong *)(lVar2 + 8) == 0) {
    local_e8 = (undefined4 *)lVar2;
  }
  local_d8 = (longlong)(int)uVar14 * 0x10;
  local_c8 = local_d8;
  if (local_e8 == (undefined4 *)0x0) {
    pfVar13 = (float *)(*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_d8 >> 8),1),&local_c8,0x40)
    ;
  }
  else {
    local_res8 = local_d8 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)((longlong)local_e8 + 0x28)) {
      pfVar13 = *(float **)((longlong)local_e8 + 0x38);
      if (local_res8 + (longlong)pfVar13 <= *(ulonglong *)((longlong)local_e8 + 0x40)) {
        *(ulonglong *)((longlong)local_e8 + 0x38) = local_res8 + (longlong)pfVar13;
        goto LAB_144fc13db;
      }
    }
    pfVar13 = (float *)FUN_144b454a0(local_e8,&local_res8);
  }
LAB_144fc13db:
  iVar10 = *(short *)(lVar11 + 8) + 1;
  local_f0._4_4_ = uVar14 | 0x80000000;
  if (((int)local_f0 < iVar10) || (iVar10 < (int)local_f0)) {
    local_f0._0_4_ = iVar10;
  }
  local_f8 = pfVar13;
  local_e0 = pfVar13;
  thunk_FUN_144c555a0(param_2,lVar11,&local_f8);
  auVar22 = _DAT_14c6dae80;
  auVar23 = _DAT_14c6daec0;
  pfVar13 = local_f8;
  while (pfVar13 != local_f8 + (longlong)(int)local_f0 * 4 + -4) {
    fVar16 = fVar5 * *pfVar13;
    fVar18 = fVar6 * pfVar13[1];
    fVar20 = fVar7 * pfVar13[2];
    pfVar13 = pfVar13 + 4;
    fVar17 = fVar20 + fVar18 + fVar16;
    fVar19 = fVar20 + fVar18 + fVar16;
    fVar21 = fVar20 + fVar18 + fVar16;
    fVar20 = fVar20 + fVar18 + fVar16;
    auVar3._4_4_ = fVar19;
    auVar3._0_4_ = fVar17;
    auVar3._8_4_ = fVar21;
    auVar3._12_4_ = fVar20;
    auVar22 = minps(auVar22,auVar3);
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar17;
    auVar4._8_4_ = fVar21;
    auVar4._12_4_ = fVar20;
    auVar23 = maxps(auVar23,auVar4);
  }
  if ((auVar22._0_4_ < *(float *)(param_1 + 0xa0) || auVar22._0_4_ == *(float *)(param_1 + 0xa0)) &&
     (*(float *)(param_1 + 0x90) <= auVar23._0_4_)) {
    if (local_e0 == local_f8) {
      local_f0._0_4_ = 0;
    }
    if (local_e8 == (undefined4 *)0x0) {
      (*DAT_14c787678)(1);
    }
    else {
      uVar15 = local_d8 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)((longlong)local_e8 + 0x28) < uVar15) ||
         (uVar15 + (longlong)local_e0 != *(longlong *)((longlong)local_e8 + 0x38))) {
        FUN_144be8550();
      }
      else {
        *(float **)((longlong)local_e8 + 0x38) = local_e0;
        if (*(float **)((longlong)local_e8 + 0x48) == local_e0) {
          FUN_144be8430();
        }
      }
    }
    uVar14 = local_f0._4_4_;
    local_f0 = (longlong *)((ulonglong)local_f0._4_4_ << 0x20);
    if ((-1 < (int)uVar14) && (local_f8 != (float *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_f8,(ulonglong)(uVar14 & 0x7fffffff) << 4);
    }
    return 1;
  }
  if (local_e0 == local_f8) {
    local_f0._0_4_ = 0;
  }
  if (local_e8 == (undefined4 *)0x0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar15 = local_d8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)((longlong)local_e8 + 0x28) < uVar15) ||
       ((longlong)local_e0 + uVar15 != *(longlong *)((longlong)local_e8 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(float **)((longlong)local_e8 + 0x38) = local_e0;
      if (*(float **)((longlong)local_e8 + 0x48) == local_e0) {
        FUN_144be8430();
      }
    }
  }
  uVar14 = local_f0._4_4_;
  local_f0 = (longlong *)((ulonglong)local_f0._4_4_ << 0x20);
  if ((-1 < (int)uVar14) && (local_f8 != (float *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_f8,(ulonglong)(uVar14 & 0x7fffffff) << 4);
  }
  return 0;
}



// FUNCTION 144fc15d0 FUN_144fc15d0 body=35 status=ok
// SIG undefined FUN_144fc15d0(void)

undefined8 FUN_144fc15d0(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_144f634e0(&DAT_149c1e738,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}



// FUNCTION 144fc1600 FUN_144fc1600 body=35 status=ok
// SIG undefined FUN_144fc1600(void)

undefined8 FUN_144fc1600(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_144f634e0(&DAT_149c1e7c8,"Not implemented");
  if (cVar2 != '\0') {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}



// FUNCTION 144fc1630 FUN_144fc1630 body=71 status=ok
// SIG undefined FUN_144fc1630(void)

undefined8 * FUN_144fc1630(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 144fc1680 FUN_144fc1680 body=253 status=ok
// SIG undefined FUN_144fc1680(void)

void FUN_144fc1680(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,param_1[0x11],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & 0x7fffffff) * 0x30);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x80000000;
  lVar1 = param_1[0xd];
  if (lVar1 == param_1[10]) {
    *(undefined4 *)(param_1 + 0xb) = 0;
  }
  lVar2 = param_1[0xc];
  if (lVar2 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar3 = param_1[0xe] + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar2 + 0x28) < uVar3) || (uVar3 + lVar1 != *(longlong *)(lVar2 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(lVar2 + 0x38) = lVar1;
      if (*(longlong *)(lVar2 + 0x48) == lVar1) {
        FUN_144be8430();
      }
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 7);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144fc1780 FUN_144fc1780 body=427 status=ok
// SIG undefined FUN_144fc1780(void)

uint FUN_144fc1780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,char param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined8 *param_14)

{
  byte bVar1;
  uint uVar2;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined1 local_168 [48];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [288];
  
  FUN_144be90e0(0x98ec58ea);
  FUN_14531be30(local_168);
  FUN_14531be40(local_168,param_11,param_12,param_13);
  if (param_10 == '\0') {
    FUN_144be90e0(0x466fae2f);
    FUN_14531c9c0(local_128,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                  local_168);
    bVar1 = FUN_14531d950(local_128);
    uVar2 = (uint)bVar1;
    FUN_144be90e0(0x22f3b1d7);
    FUN_144fc1680(local_128);
  }
  else {
    local_198 = *param_5;
    uStack_190 = param_5[1];
    local_174 = param_9;
    local_188 = *param_6;
    uStack_184 = param_6[1];
    uStack_180 = param_6[2];
    uStack_17c = param_6[3];
    local_170 = local_168;
    local_1a8 = param_1;
    local_1a0 = param_3;
    local_178 = param_4;
    uVar2 = FUN_144fc1a70(&local_1a8,param_8);
    FUN_144be90e0(0xb4802c79);
  }
  if (param_14 != (undefined8 *)0x0) {
    *param_14 = local_138;
    param_14[1] = uStack_130;
  }
  return uVar2;
}



// FUNCTION 144fc1930 FUN_144fc1930 body=307 status=ok
// SIG undefined FUN_144fc1930(void)

undefined1
FUN_144fc1930(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  undefined1 uVar1;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [64];
  undefined1 local_138 [288];
  
  FUN_14531be30(local_178);
  FUN_14531be40(local_178,param_10,param_11,param_12);
  FUN_14531c9c0(local_138,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                local_178);
  local_198 = *param_5;
  uStack_190 = param_5[1];
  local_1d8 = *(undefined4 *)(param_3 + 8);
  local_1c8 = *param_6;
  uStack_1c4 = param_6[1];
  uStack_1c0 = param_6[2];
  uStack_1bc = param_6[3];
  local_1a4 = 0x102;
  local_1d4 = 0x202;
  local_1a8 = 0xffffffff;
  local_1b8 = local_1c8;
  uStack_1b4 = uStack_1c4;
  uStack_1b0 = uStack_1c0;
  uStack_1ac = uStack_1bc;
  local_188 = local_198;
  uStack_180 = uStack_190;
  FUN_14531f990(local_138,&local_1a8,&local_1d8);
  uVar1 = FUN_14531fd40(local_138);
  FUN_144fc1680(local_138);
  return uVar1;
}



// FUNCTION 144fc1a70 FUN_144fc1a70 body=5498 status=ok
// SIG undefined FUN_144fc1a70(void)

/* WARNING: Removing unreachable block (ram,0x000144fc2004) */
/* WARNING: Removing unreachable block (ram,0x000144fc21bb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144fc1a70(longlong *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int *piVar14;
  int *piVar15;
  float *pfVar16;
  float *pfVar17;
  undefined1 uVar18;
  int iVar19;
  undefined1 (*pauVar20) [16];
  undefined4 uVar21;
  float *pfVar22;
  uint uVar23;
  char *pcVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined4 uVar27;
  uint uVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined1 (*pauVar31) [16];
  ulonglong uVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  ulonglong uVar36;
  uint uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar52;
  float fVar53;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  longlong local_res8;
  uint local_res10 [2];
  ulonglong local_res18;
  undefined8 local_res20;
  uint local_238 [2];
  undefined8 *local_230;
  undefined1 (*local_228) [16];
  int local_220;
  undefined1 local_218 [8];
  undefined8 uStack_210;
  ulonglong local_208;
  longlong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  uint local_1d8;
  uint local_1d4;
  ulonglong local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  longlong local_198;
  undefined1 local_188 [16];
  float *local_178;
  longlong local_170;
  longlong local_168;
  undefined1 (*local_160) [16];
  ulonglong local_158;
  ulonglong local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [16];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  uVar36 = 0;
  local_238[0] = *(uint *)(param_1[1] + 8);
  local_res18 = CONCAT44(local_res18._4_4_,local_238[0] * 2);
  uVar26 = local_238[0] * 2 + 2;
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar1 = *(char *)(lVar13 + 0x114);
  local_res10[0] = param_2;
  if (cVar1 == '\0') {
    __dyn_tls_on_demand_init();
    cVar1 = *(char *)(lVar13 + 0x114);
  }
  lVar10 = *(longlong *)(lVar13 + 0xf0);
  if (lVar10 == 0) {
    if (cVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *(longlong *)(lVar13 + 0xf0) = lVar10;
  }
  local_150 = *(ulonglong *)(*(longlong *)(lVar10 + 0x3d0) + 0x10);
  if (*(longlong *)(local_150 + 8) != 0) {
    local_150 = uVar36;
  }
  lVar10 = (longlong)(int)uVar26 * 0x10;
  local_200 = lVar10;
  local_198 = lVar10;
  if (local_150 == 0) {
    local_228 = (undefined1 (*) [16])(*DAT_14c787670)(1,&local_200,0x40);
  }
  else {
    local_res20 = lVar10 + 0x3fU & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(local_150 + 0x28)) {
      local_228 = *(undefined1 (**) [16])(local_150 + 0x38);
      if (*local_228 + local_res20 <= *(undefined1 **)(local_150 + 0x40)) {
        *(undefined1 **)(local_150 + 0x38) = *local_228 + local_res20;
        goto LAB_144fc1bc4;
      }
    }
    local_228 = (undefined1 (*) [16])FUN_144b454a0(local_150,&local_res20);
  }
LAB_144fc1bc4:
  cVar1 = *(char *)(lVar13 + 0x114);
  uVar26 = uVar26 | 0x80000000;
  local_1d4 = uVar26;
  if (cVar1 == '\0') {
    __dyn_tls_on_demand_init();
    cVar1 = *(char *)(lVar13 + 0x114);
  }
  lVar11 = *(longlong *)(lVar13 + 0xf0);
  if (lVar11 == 0) {
    if (cVar1 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar13 + 0xf0) = lVar11;
  }
  local_158 = *(ulonglong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  if (*(longlong *)(local_158 + 8) != 0) {
    local_158 = uVar36;
  }
  if (local_158 == 0) {
    local_200 = lVar10;
    puVar12 = (undefined8 *)(*DAT_14c787670)(1,&local_200,0x40);
  }
  else {
    local_res20 = lVar10 + 0x3fU & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(local_158 + 0x28)) {
      puVar12 = *(undefined8 **)(local_158 + 0x38);
      local_230 = puVar12;
      if (local_res20 + (longlong)puVar12 <= *(ulonglong *)(local_158 + 0x40)) {
        *(ulonglong *)(local_158 + 0x38) = local_res20 + (longlong)puVar12;
        local_200 = lVar10;
        goto LAB_144fc1c76;
      }
    }
    local_200 = lVar10;
    puVar12 = (undefined8 *)FUN_144b454a0(local_158,&local_res20);
  }
LAB_144fc1c76:
  local_1d8 = 0;
  local_230 = puVar12;
  local_1d4 = uVar26;
  if (*(char *)(lVar13 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar13 + 0xf0);
  if (lVar10 == 0) {
    if (*(char *)(lVar13 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *(longlong *)(lVar13 + 0xf0) = lVar10;
  }
  uVar26 = (uint)local_res18;
  uVar25 = *(ulonglong *)(*(longlong *)(lVar10 + 0x3d0) + 0x10);
  local_1f0 = uVar36;
  if (*(longlong *)(uVar25 + 8) == 0) {
    local_1f0 = uVar25;
  }
  local_res20 = (longlong)(int)(uint)local_res18 * 0x30;
  local_1f8 = local_res20;
  local_1d0 = local_1f0;
  local_1c0 = local_res20;
  if (local_1f0 == 0) {
    lVar13 = (*DAT_14c787670)(CONCAT71((int7)(uVar25 >> 8),1),&local_res20,0x40);
  }
  else {
    local_res18 = local_res20 + 0x3f & 0xffffffffffffffc0;
    if (local_res18 <= *(ulonglong *)(local_1f0 + 0x28)) {
      lVar13 = *(longlong *)(local_1f0 + 0x38);
      if (local_res18 + lVar13 <= *(ulonglong *)(local_1f0 + 0x40)) {
        *(ulonglong *)(local_1f0 + 0x38) = local_res18 + lVar13;
        goto LAB_144fc1d45;
      }
    }
    lVar13 = FUN_144b454a0(local_1f0,&local_res18);
  }
LAB_144fc1d45:
  local_1d4 = uVar26 | 0x80000000;
  local_res18._0_4_ = uVar26 | 0x80000000;
  lVar10 = *(longlong *)
            ((ulonglong)(*(uint *)(param_1 + 6) >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38));
  local_1e0 = lVar13;
  local_1c8 = lVar13;
  if (local_res10[0] == 0) {
    if (puVar12 != (undefined8 *)0x0) {
      uVar5 = *(undefined8 *)(lVar10 + 200);
      *puVar12 = *(undefined8 *)(lVar10 + 0xc0);
      puVar12[1] = uVar5;
    }
  }
  else {
    local_res20 = CONCAT44(local_res20._4_4_,*(uint *)(param_1 + 6)) & 0xffffffff003fffff;
    FUN_144c52b10(local_1a8,lVar10,&local_res20,local_230);
  }
  iVar35 = 1;
  local_200 = (longlong)(int)local_238[0];
  local_res20 = local_res20 & 0xffffffff00000000;
  uVar26 = 0xffffffff;
  local_1e8 = 0;
  if (0 < (int)local_238[0]) {
    local_220 = local_238[0] - 1;
    iVar34 = iVar35;
    uVar26 = 0xffffffff;
    do {
      _local_218 = ZEXT816(0);
      uVar28 = *(uint *)(*(longlong *)param_1[1] + local_1e8 * 4);
      local_238[0] = uVar28 & 0x3fffff;
      local_208 = *(longlong *)
                   ((ulonglong)(uVar28 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38));
      lVar10 = *(longlong *)(local_208 + 0x20);
      piVar14 = (int *)FUN_144c450c0(lVar10,local_238,local_218);
      iVar35 = *(int *)(lVar10 + 0x40);
      iVar19 = *piVar14;
      if (iVar19 < iVar35) {
        pfVar22 = (float *)((longlong)iVar19 * 0x10 + *(longlong *)(lVar10 + 0x38));
      }
      else {
        pfVar22 = (float *)((longlong)(iVar19 - iVar35) * 0x10 + *(longlong *)(lVar10 + 0xf0));
      }
      iVar19 = piVar14[1];
      fVar73 = *pfVar22;
      fVar75 = pfVar22[1];
      fVar77 = pfVar22[2];
      if (iVar19 < iVar35) {
        pfVar22 = (float *)((longlong)iVar19 * 0x10 + *(longlong *)(lVar10 + 0x38));
      }
      else {
        pfVar22 = (float *)((longlong)(iVar19 - iVar35) * 0x10 + *(longlong *)(lVar10 + 0xf0));
      }
      fVar78 = *pfVar22;
      fVar85 = pfVar22[1];
      fVar86 = pfVar22[2];
      uVar23 = piVar14[2];
      auVar42 = *(undefined1 (*) [16])(local_208 + 0x80);
      iVar35 = *(int *)(*(longlong *)(local_208 + 0x20) + 0x17c);
      fVar61 = fVar75 * *(float *)(local_208 + 0x74) + fVar73 * *(float *)(local_208 + 100) +
               fVar77 * auVar42._4_4_ + *(float *)(local_208 + 0x94);
      auVar80._0_8_ =
           CONCAT44(fVar61,fVar75 * *(float *)(local_208 + 0x70) +
                           fVar73 * *(float *)(local_208 + 0x60) + fVar77 * auVar42._0_4_ +
                           *(float *)(local_208 + 0x90));
      auVar80._8_4_ =
           fVar75 * *(float *)(local_208 + 0x78) + fVar73 * *(float *)(local_208 + 0x68) +
           fVar77 * auVar42._8_4_ + *(float *)(local_208 + 0x98);
      auVar80._12_4_ =
           fVar75 * *(float *)(local_208 + 0x7c) + fVar73 * *(float *)(local_208 + 0x6c) +
           fVar77 * auVar42._12_4_ + *(float *)(local_208 + 0x9c);
      auVar65._0_4_ =
           fVar85 * *(float *)(local_208 + 0x70) + fVar78 * *(float *)(local_208 + 0x60) +
           fVar86 * auVar42._0_4_ + *(float *)(local_208 + 0x90);
      auVar65._4_4_ =
           fVar85 * *(float *)(local_208 + 0x74) + fVar78 * *(float *)(local_208 + 100) +
           fVar86 * auVar42._4_4_ + *(float *)(local_208 + 0x94);
      auVar65._8_4_ =
           fVar85 * *(float *)(local_208 + 0x78) + fVar78 * *(float *)(local_208 + 0x68) +
           fVar86 * auVar42._8_4_ + *(float *)(local_208 + 0x98);
      if (((*(byte *)(piVar14 + 4) & 0x40) == 0) && (uVar23 != 0xffffffff)) {
        uVar23 = iVar35 << 0x16 | uVar23 & 0x3fffff;
        uVar9 = piVar14[3];
LAB_144fc1f3f:
        if (uVar9 != 0xffffffff) {
          uVar9 = iVar35 << 0x16 | uVar9 & 0x3fffff;
        }
      }
      else {
        uVar9 = piVar14[3];
        if ((*(byte *)(piVar14 + 4) & 0x40) == 0) goto LAB_144fc1f3f;
      }
      if (local_res10[0] == 0) {
        puVar12 = local_230 + (longlong)iVar34 * 2;
        if (puVar12 != (undefined8 *)0x0) {
          uVar5 = *(undefined8 *)(local_208 + 200);
          *puVar12 = *(undefined8 *)(local_208 + 0xc0);
          puVar12[1] = uVar5;
        }
      }
      else {
        local_1f8 = CONCAT44(local_1f8._4_4_,uVar9) & 0xffffffff003fffff;
        FUN_144c52b10(local_1a8,
                      *(undefined8 *)
                       ((ulonglong)(uVar9 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38)),
                      &local_1f8,local_230 + (longlong)iVar34 * 2);
      }
      iVar19 = (uint)uVar36 + 1;
      local_208 = CONCAT44(local_208._4_4_,iVar19);
      iVar35 = iVar34 + 1;
      uVar9 = (uint)uVar36;
      if ((int)((uint)local_res18 & 0x7fffffff) < iVar19) {
        FUN_144fc33a0(&local_1e0,&PTR_vftable_14c6e47a0,(longlong)iVar19);
        local_res18._0_4_ = local_1d4;
        lVar13 = local_1e0;
        uVar9 = local_1d8;
      }
      uVar37 = (uint)local_208;
      auVar42._0_8_ = auVar80._0_8_ << 0x20;
      auVar42._8_8_ = auVar80._8_8_ << 0x20 | (ulonglong)(uint)fVar61;
      local_1d8 = (uint)local_208;
      pauVar20 = (undefined1 (*) [16])((longlong)(int)uVar9 * 0x30 + lVar13);
      *pauVar20 = auVar42 >> 0x20;
      fVar73 = fRam000000014c6dacac;
      *(uint *)pauVar20[2] = uVar28;
      uVar27 = 0;
      auVar65._12_4_ = fVar73;
      pauVar20[1] = auVar65;
      if (((*(byte *)(piVar14 + 4) & 0x10) != 0) && (local_218 != (undefined1  [8])uStack_210)) {
        uVar27 = *(undefined4 *)local_218;
      }
      *(undefined4 *)(pauVar20[2] + 4) = uVar27;
      pauVar20[2][8] = *(byte *)(piVar14 + 4) >> 4 & 1;
      if ((int)local_res20 == local_220) {
        uVar26 = uVar23;
      }
      uVar28 = (uint)local_208;
      if ((*(byte *)(piVar14 + 4) & 0x10) != 0) {
        _local_218 = ZEXT816(0);
        local_238[0] = uVar23 & 0x3fffff;
        local_1f0 = *(ulonglong *)
                     ((ulonglong)(uVar23 >> 0x16) * 0x120 + *(longlong *)(*param_1 + 0x38));
        lVar10 = *(longlong *)(local_1f0 + 0x20);
        piVar15 = (int *)FUN_144c450c0(lVar10,local_238,local_218);
        iVar19 = *(int *)(lVar10 + 0x40);
        iVar2 = *piVar15;
        if (iVar2 < iVar19) {
          pfVar22 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 0x38));
        }
        else {
          pfVar22 = (float *)((longlong)(iVar2 - iVar19) * 0x10 + *(longlong *)(lVar10 + 0xf0));
        }
        iVar2 = piVar15[1];
        fVar73 = *pfVar22;
        fVar75 = pfVar22[1];
        fVar77 = pfVar22[2];
        if (iVar2 < iVar19) {
          pfVar22 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 0x38));
        }
        else {
          pfVar22 = (float *)((longlong)(iVar2 - iVar19) * 0x10 + *(longlong *)(lVar10 + 0xf0));
        }
        fVar78 = *pfVar22;
        fVar85 = pfVar22[1];
        fVar86 = pfVar22[2];
        uVar28 = uVar37 + 1;
        fVar61 = fVar77 * *(float *)(local_1f0 + 0x84) +
                 fVar75 * *(float *)(local_1f0 + 0x74) + fVar73 * *(float *)(local_1f0 + 100) +
                 *(float *)(local_1f0 + 0x94);
        auVar66._0_8_ =
             CONCAT44(fVar61,fVar77 * *(float *)(local_1f0 + 0x80) +
                             fVar75 * *(float *)(local_1f0 + 0x70) +
                             fVar73 * *(float *)(local_1f0 + 0x60) + *(float *)(local_1f0 + 0x90));
        auVar66._8_4_ =
             fVar77 * *(float *)(local_1f0 + 0x88) +
             fVar75 * *(float *)(local_1f0 + 0x78) + fVar73 * *(float *)(local_1f0 + 0x68) +
             *(float *)(local_1f0 + 0x98);
        auVar66._12_4_ =
             fVar77 * *(float *)(local_1f0 + 0x8c) +
             fVar75 * *(float *)(local_1f0 + 0x7c) + fVar73 * *(float *)(local_1f0 + 0x6c) +
             *(float *)(local_1f0 + 0x9c);
        auVar83._0_4_ =
             fVar86 * *(float *)(local_1f0 + 0x80) +
             fVar85 * *(float *)(local_1f0 + 0x70) + fVar78 * *(float *)(local_1f0 + 0x60) +
             *(float *)(local_1f0 + 0x90);
        auVar83._4_4_ =
             fVar86 * *(float *)(local_1f0 + 0x84) +
             fVar85 * *(float *)(local_1f0 + 0x74) + fVar78 * *(float *)(local_1f0 + 100) +
             *(float *)(local_1f0 + 0x94);
        auVar83._8_4_ =
             fVar86 * *(float *)(local_1f0 + 0x88) +
             fVar85 * *(float *)(local_1f0 + 0x78) + fVar78 * *(float *)(local_1f0 + 0x68) +
             *(float *)(local_1f0 + 0x98);
        if ((int)((uint)local_res18 & 0x7fffffff) < (int)uVar28) {
          FUN_144fc33a0(&local_1e0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar28);
          local_res18._0_4_ = local_1d4;
          lVar13 = local_1e0;
          uVar37 = local_1d8;
        }
        auVar69._0_8_ = auVar66._0_8_ << 0x20;
        auVar69._8_8_ = auVar66._8_8_ << 0x20 | (ulonglong)(uint)fVar61;
        uVar27 = 0;
        pauVar20 = (undefined1 (*) [16])((longlong)(int)uVar37 * 0x30 + lVar13);
        *pauVar20 = auVar69 >> 0x20;
        auVar83._12_4_ = fRam000000014c6dacac;
        pauVar20[1] = auVar83;
        *(uint *)pauVar20[2] = uVar23;
        if ((*(byte *)(piVar14 + 4) & 0x10) != 0) {
          if (local_218 != (undefined1  [8])uStack_210) {
            uVar27 = *(undefined4 *)local_218;
          }
        }
        lVar10 = (longlong)iVar35;
        iVar35 = iVar34 + 2;
        *(undefined4 *)(pauVar20[2] + 4) = uVar27;
        pauVar20[2][8] = 2;
        puVar12 = local_230 + lVar10 * 2;
        if (puVar12 != (undefined8 *)0x0) {
          uVar5 = *(undefined8 *)(local_1f0 + 200);
          *puVar12 = *(undefined8 *)(local_1f0 + 0xc0);
          puVar12[1] = uVar5;
        }
      }
      uVar36 = (ulonglong)uVar28;
      local_1e8 = local_1e8 + 1;
      local_res20 = CONCAT44(local_res20._4_4_,(int)local_res20 + 1);
      iVar34 = iVar35;
      local_1d8 = uVar28;
    } while (local_1e8 < local_200);
    local_1f8 = local_1c0;
    local_1f0 = local_1d0;
  }
  uVar25 = 0;
  uVar5 = (local_230 + (longlong)iVar35 * 2 + -2)[1];
  puVar12 = local_230 + (longlong)iVar35 * 2;
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = local_230[(longlong)iVar35 * 2 + -2];
    puVar12[1] = uVar5;
  }
  uVar28 = (uint)uVar36;
  uVar23 = uVar28 + 2;
  local_res10[0] = uVar23;
  if (((int)uVar23 < 1) && (local_res10[0] = 0, (int)uVar23 < 0)) {
    local_res10[0] = uVar23;
  }
  local_238[0] = 0;
  pfVar22 = (float *)(param_1 + 4);
  *local_228 = *(undefined1 (*) [16])(param_1 + 2);
  pauVar20 = local_228;
  if (0 < (int)uVar28) {
    auVar81._4_4_ = fRam000000014c6daca4;
    auVar81._0_4_ = _DAT_14c6daca0;
    auVar81._8_4_ = fRam000000014c6daca8;
    auVar81._12_4_ = fRam000000014c6dacac;
    pauVar31 = local_228;
    local_178 = pfVar22;
    do {
      uVar9 = (uint)uVar25;
      local_170 = (longlong)(int)uVar9;
      uVar23 = uVar9 + 1;
      auVar42 = ZEXT816(0);
      local_res20 = CONCAT44(local_res20._4_4_,uVar9);
      local_208 = CONCAT44(local_208._4_4_,uVar9);
      local_168 = local_170 * 0x10;
      lVar10 = local_170 * 0x30;
      pfVar16 = (float *)(lVar13 + 0x10 + lVar10);
      local_148 = *pfVar16;
      fStack_144 = pfVar16[1];
      fStack_140 = pfVar16[2];
      fStack_13c = pfVar16[3];
      local_160 = (undefined1 (*) [16])(lVar13 + lVar10);
      local_138 = *local_160;
      pauVar20 = pauVar31 + local_170;
      fVar73 = *(float *)*pauVar20;
      fVar75 = *(float *)(*pauVar20 + 4);
      fVar77 = *(float *)(*pauVar20 + 8);
      fVar78 = *(float *)(*pauVar20 + 0xc);
      _local_1a8 = *pauVar20;
      fVar85 = local_148 - local_138._0_4_;
      fVar86 = fStack_144 - local_138._4_4_;
      fVar61 = fStack_140 - local_138._8_4_;
      fVar87 = fStack_13c - local_138._12_4_;
      pauVar20 = pauVar31;
      if ((int)uVar23 <= (int)uVar28) {
        local_128 = fVar85 * fVar85;
        fStack_124 = fVar86 * fVar86;
        fStack_120 = fVar61 * fVar61;
        fStack_11c = fVar87 * fVar87;
        local_108 = local_138._0_4_ - fVar73;
        fStack_104 = local_138._4_4_ - fVar75;
        fStack_100 = local_138._8_4_ - fVar77;
        fStack_fc = local_138._12_4_ - fVar78;
        lVar29 = (longlong)(int)uVar23 * 0x30;
        uVar36 = uVar25;
        uVar30 = uVar25;
        lVar11 = lVar10;
        auVar80 = auVar81;
        local_1e8 = lVar10;
        local_118 = fVar86;
        fStack_114 = fVar61;
        fStack_110 = fVar85;
        fStack_10c = fVar87;
        do {
          uVar32 = (ulonglong)uVar23;
          pfVar16 = pfVar22;
          if (uVar23 != uVar28) {
            pfVar16 = (float *)((longlong)(int)uVar23 * 0x30 + lVar13);
          }
          pfVar17 = pfVar22;
          if (uVar23 != uVar28) {
            pfVar17 = (float *)((longlong)(int)uVar23 * 0x30 + 0x10 + lVar13);
          }
          fVar46 = *pfVar16 - fVar73;
          fVar52 = pfVar16[1] - fVar75;
          fVar53 = pfVar16[2] - fVar77;
          fVar72 = *pfVar17 - fVar73;
          fVar74 = pfVar17[1] - fVar75;
          fVar76 = pfVar17[2] - fVar77;
          fVar43 = fVar85 * fVar52 - fVar46 * local_118;
          fVar44 = fVar86 * fVar53 - fVar52 * fStack_114;
          fVar45 = fVar61 * fVar46 - fVar53 * fStack_110;
          fVar57 = fVar44 * fVar44;
          fVar62 = fVar45 * fVar45;
          fVar63 = fVar43 * fVar43;
          auVar58._0_4_ = fVar63 + fVar62 + fVar57;
          auVar58._4_4_ = fVar63 + fVar62 + fVar57;
          auVar58._8_4_ = fVar63 + fVar62 + fVar57;
          auVar58._12_4_ = fVar63 + fVar62 + fVar57;
          if (auVar58._0_4_ == 0.0) {
            auVar65 = ZEXT816(0);
          }
          else {
            auVar65 = divps(auVar81,auVar58);
          }
          fVar62 = fVar85 * fVar46;
          fVar63 = fVar86 * fVar52;
          fVar55 = fVar61 * fVar53;
          fVar57 = (fVar45 * fStack_114 - fVar86 * fVar43) * local_108;
          fVar43 = (fVar43 * fStack_110 - fVar61 * fVar44) * fStack_104;
          fVar44 = (fVar44 * local_118 - fVar85 * fVar45) * fStack_100;
          auVar64._0_4_ = auVar65._0_4_ * (fVar44 + fVar43 + fVar57);
          auVar64._4_4_ = auVar65._4_4_ * (fVar44 + fVar43 + fVar57);
          auVar64._8_4_ = auVar65._8_4_ * (fVar44 + fVar43 + fVar57);
          auVar64._12_4_ = auVar65._12_4_ * (fVar44 + fVar43 + fVar57);
          fVar57 = fVar55 + fVar63 + fVar62;
          fVar54 = fVar55 + fVar63 + fVar62;
          fVar56 = fVar55 + fVar63 + fVar62;
          fVar55 = fVar55 + fVar63 + fVar62;
          local_218._0_4_ = fVar85 * local_108;
          local_218._4_4_ = fVar86 * fStack_104;
          uStack_210._0_4_ = fVar61 * fStack_100;
          auVar65 = minps(auVar64,_DAT_1499314a0);
          uStack_210._4_4_ = fVar87 * fStack_fc;
          auVar66 = maxps(auVar65,ZEXT816(0));
          auVar47._0_4_ = fVar52 * fVar52 + fVar46 * fVar46 + fVar53 * fVar53;
          auVar47._4_4_ = fVar52 * fStack_104 + fVar46 * local_108 + fVar53 * fStack_100;
          auVar47._8_4_ = fStack_124 + local_128 + fStack_120;
          auVar47._12_4_ = (float)local_218._4_4_ + (float)local_218._0_4_ + (float)uStack_210;
          auVar65 = divps(auVar81,auVar47);
          fVar44 = (float)(~-(uint)(auVar47._0_4_ == 0.0) & auVar65._0_4_);
          fVar45 = (float)(~-(uint)(auVar47._8_4_ == 0.0) & auVar65._8_4_);
          fVar43 = (auVar66._0_4_ * fVar57 - auVar47._12_4_) * fVar45;
          auVar82._4_4_ = (auVar66._4_4_ * fVar54 - auVar47._12_4_) * fVar45;
          auVar82._0_4_ = fVar43;
          auVar82._8_4_ = (auVar66._8_4_ * fVar56 - auVar47._12_4_) * fVar45;
          auVar82._12_4_ = (auVar66._12_4_ * fVar55 - auVar47._12_4_) * fVar45;
          auVar65 = minps(auVar82,_DAT_1499314a0);
          auVar83 = maxps(auVar65,ZEXT816(0));
          fVar62 = auVar83._0_4_;
          uVar9 = -(uint)(fVar62 == fVar43 && auVar58._0_4_ != 0.0);
          auVar48._0_4_ = (auVar47._4_4_ + fVar62 * fVar57) * fVar44;
          auVar48._4_4_ = (auVar47._4_4_ + auVar83._4_4_ * fVar54) * fVar44;
          auVar48._8_4_ = (auVar47._4_4_ + auVar83._8_4_ * fVar56) * fVar44;
          auVar48._12_4_ = (auVar47._4_4_ + auVar83._12_4_ * fVar55) * fVar44;
          auVar65 = minps(auVar48,_DAT_1499314a0);
          auVar65 = maxps(auVar65,ZEXT816(0));
          fVar43 = (float)((uint)auVar66._0_4_ & uVar9 | ~uVar9 & auVar65._0_4_);
          auVar67._4_4_ = -(uint)(fVar43 == fRam000000014c6daf14);
          auVar67._0_4_ = -(uint)(fVar43 == _DAT_14c6daf10);
          auVar67._8_4_ = -(uint)(fVar62 == fRam000000014c6daf18);
          auVar67._12_4_ = -(uint)(fVar62 == fRam000000014c6daf1c);
          uVar9 = movmskps((int)pauVar31,auVar67);
          pauVar31 = (undefined1 (*) [16])(ulonglong)uVar9;
          fVar46 = fVar85 * fVar74 - fVar72 * local_118;
          fVar52 = fVar86 * fVar76 - fVar74 * fStack_114;
          fVar53 = fVar61 * fVar72 - fVar76 * fStack_110;
          fVar43 = fVar52 * fVar52;
          fVar44 = fVar53 * fVar53;
          fVar45 = fVar46 * fVar46;
          local_188._0_4_ = fVar45 + fVar44 + fVar43;
          local_188._4_4_ = fVar45 + fVar44 + fVar43;
          local_188._8_4_ = fVar45 + fVar44 + fVar43;
          local_188._12_4_ = fVar45 + fVar44 + fVar43;
          if (local_188._0_4_ == 0.0) {
            auVar65 = ZEXT816(0);
          }
          else {
            auVar65 = divps(auVar81,local_188);
          }
          fVar57 = (fVar53 * fStack_114 - fVar86 * fVar46) * local_108;
          fVar46 = (fVar46 * fStack_110 - fVar61 * fVar52) * fStack_104;
          fVar52 = (fVar52 * local_118 - fVar85 * fVar53) * fStack_100;
          fVar43 = fVar72 * fVar85;
          fVar44 = fVar74 * fVar86;
          fVar45 = fVar76 * fVar61;
          auVar59._0_4_ = auVar65._0_4_ * (fVar52 + fVar46 + fVar57);
          auVar59._4_4_ = auVar65._4_4_ * (fVar52 + fVar46 + fVar57);
          auVar59._8_4_ = auVar65._8_4_ * (fVar52 + fVar46 + fVar57);
          auVar59._12_4_ = auVar65._12_4_ * (fVar52 + fVar46 + fVar57);
          auVar65 = minps(auVar59,_DAT_1499314a0);
          fVar52 = fVar44 + fVar43 + fVar45;
          fVar53 = fVar44 + fVar43 + fVar45;
          fVar57 = fVar44 + fVar43 + fVar45;
          fVar45 = fVar44 + fVar43 + fVar45;
          auVar66 = maxps(auVar65,ZEXT816(0));
          auVar49._0_4_ = fVar74 * fVar74 + fVar72 * fVar72 + fVar76 * fVar76;
          auVar49._4_4_ = fVar74 * fStack_104 + fVar72 * local_108 + fVar76 * fStack_100;
          auVar49._8_4_ = fStack_124 + local_128 + fStack_120;
          auVar49._12_4_ = (float)local_218._4_4_ + (float)local_218._0_4_ + (float)uStack_210;
          auVar65 = divps(auVar81,auVar49);
          fVar44 = (float)(~-(uint)(auVar49._0_4_ == 0.0) & auVar65._0_4_);
          fVar46 = (float)(~-(uint)(auVar49._8_4_ == 0.0) & auVar65._8_4_);
          fVar43 = (fVar52 * auVar66._0_4_ - auVar49._12_4_) * fVar46;
          auVar68._4_4_ = (fVar53 * auVar66._4_4_ - auVar49._12_4_) * fVar46;
          auVar68._0_4_ = fVar43;
          auVar68._8_4_ = (fVar57 * auVar66._8_4_ - auVar49._12_4_) * fVar46;
          auVar68._12_4_ = (fVar45 * auVar66._12_4_ - auVar49._12_4_) * fVar46;
          auVar65 = minps(auVar68,_DAT_1499314a0);
          auVar69 = maxps(auVar65,ZEXT816(0));
          fVar46 = auVar69._0_4_;
          uVar37 = -(uint)(fVar43 == fVar46 && local_188._0_4_ != 0.0);
          auVar50._0_4_ = (auVar49._4_4_ + fVar46 * fVar52) * fVar44;
          auVar50._4_4_ = (auVar49._4_4_ + auVar69._4_4_ * fVar53) * fVar44;
          auVar50._8_4_ = (auVar49._4_4_ + auVar69._8_4_ * fVar57) * fVar44;
          auVar50._12_4_ = (auVar49._4_4_ + auVar69._12_4_ * fVar45) * fVar44;
          auVar65 = minps(auVar50,_DAT_1499314a0);
          auVar65 = maxps(auVar65,ZEXT816(0));
          fVar43 = (float)((uint)auVar66._0_4_ & uVar37 | ~uVar37 & auVar65._0_4_);
          auVar60._4_4_ = -(uint)(fVar43 == fRam000000014c6daf14);
          auVar60._0_4_ = -(uint)(fVar43 == _DAT_14c6daf10);
          auVar60._8_4_ = -(uint)(fVar46 == fRam000000014c6daf18);
          auVar60._12_4_ = -(uint)(fVar46 == fRam000000014c6daf1c);
          uVar37 = movmskps((int)CONCAT71((int7)(int3)(uVar23 >> 8),local_188._0_4_ == 0.0),auVar60)
          ;
          uVar33 = (uint)uVar30;
          if (((uVar37 | uVar9) & 3) != 0) {
            local_188 = auVar42;
            if (uVar9 == 0) {
              local_188 = maxps(auVar42,auVar83);
            }
            _local_218 = auVar80;
            if (uVar37 == 0) {
              _local_218 = minps(auVar80,auVar69);
            }
            pauVar31 = (undefined1 (*) [16])&local_148;
            lVar10 = (longlong)(int)uVar33 * 0x30 + lVar13;
            FUN_144fc2ff0(local_1a8,local_138,pauVar31,local_188,local_218,lVar10,lVar10 + 0x10,
                          &local_1b8);
            uVar36 = local_208 & 0xffffffff;
            lVar10 = local_1e8;
            pfVar22 = local_178;
            local_218._0_4_ = (float)local_1b8;
            local_218._4_4_ = local_1b8._4_4_;
            uStack_210._0_4_ = (float)uStack_1b0;
            uStack_210._4_4_ = uStack_1b0._4_4_;
            uVar23 = uVar33;
LAB_144fc27e7:
            if (uVar23 == 0xffffffff) {
              uVar25 = local_res20 & 0xffffffff;
              goto LAB_144fc27f8;
            }
            fVar85 = (float)local_218._0_4_ - fVar73;
            fVar86 = (float)local_218._4_4_ - fVar75;
            fVar61 = (float)uStack_210 - fVar77;
            if (local_170 < (int)uVar23) {
              pauVar31 = (undefined1 (*) [16])(local_228[1] + local_168);
              lVar10 = (int)uVar23 - local_170;
              local_1a8._4_4_ = fVar61;
              local_1a8._0_4_ = fVar86;
              fStack_1a0 = fVar85;
              fStack_19c = uStack_210._4_4_ - fVar78;
              pauVar20 = local_160;
              while( true ) {
                fVar78 = *(float *)*pauVar20;
                fVar87 = *(float *)(*pauVar20 + 4);
                fVar43 = *(float *)(*pauVar20 + 8);
                puVar7 = *pauVar20;
                pauVar8 = pauVar20 + 1;
                fVar74 = *(float *)pauVar20[1] - fVar78;
                fVar76 = *(float *)(pauVar20[1] + 4) - fVar87;
                fVar54 = *(float *)(pauVar20[1] + 8) - fVar43;
                fVar62 = fVar78 - fVar73;
                fVar63 = fVar87 - fVar75;
                fVar72 = fVar43 - fVar77;
                fVar52 = fVar86 * fVar74 - fVar85 * fVar76;
                fVar53 = fVar61 * fVar76 - fVar86 * fVar54;
                fVar57 = fVar85 * fVar54 - fVar61 * fVar74;
                fVar44 = fVar53 * fVar53;
                fVar45 = fVar57 * fVar57;
                fVar46 = fVar52 * fVar52;
                auVar38._0_4_ = fVar46 + fVar45 + fVar44;
                auVar38._4_4_ = fVar46 + fVar45 + fVar44;
                auVar38._8_4_ = fVar46 + fVar45 + fVar44;
                auVar38._12_4_ = fVar46 + fVar45 + fVar44;
                if (auVar38._0_4_ == 0.0) {
                  auVar42 = ZEXT816(0);
                }
                else {
                  auVar42 = divps(auVar81,auVar38);
                }
                pauVar20 = pauVar20 + 3;
                fVar45 = fVar85 * fVar74;
                fVar46 = fVar86 * fVar76;
                fVar55 = fVar61 * fVar54;
                fVar44 = (fVar57 * fVar54 - fVar52 * fVar76) * fVar62;
                fVar52 = (fVar52 * fVar74 - fVar53 * fVar54) * fVar63;
                fVar53 = (fVar53 * fVar76 - fVar57 * fVar74) * fVar72;
                auVar70._0_4_ = auVar42._0_4_ * (fVar53 + fVar52 + fVar44);
                auVar70._4_4_ = auVar42._4_4_ * (fVar53 + fVar52 + fVar44);
                auVar70._8_4_ = auVar42._8_4_ * (fVar53 + fVar52 + fVar44);
                auVar70._12_4_ = auVar42._12_4_ * (fVar53 + fVar52 + fVar44);
                auVar42 = minps(auVar70,_DAT_1499314a0);
                auVar42 = maxps(auVar42,ZEXT816(0));
                auVar51._0_4_ = fVar86 * fVar86 + fVar85 * fVar85 + fVar61 * fVar61;
                auVar51._4_4_ = fVar63 * fVar86 + fVar62 * fVar85 + fVar72 * fVar61;
                auVar51._8_4_ = fVar76 * fVar76 + fVar74 * fVar74 + fVar54 * fVar54;
                auVar51._12_4_ = fVar63 * fVar76 + fVar62 * fVar74 + fVar72 * fVar54;
                auVar80 = divps(auVar81,auVar51);
                fVar44 = (float)(~-(uint)(auVar51._8_4_ == 0.0) & auVar80._8_4_);
                auVar71._0_4_ =
                     (auVar42._0_4_ * (fVar55 + fVar46 + fVar45) - auVar51._12_4_) * fVar44;
                auVar71._4_4_ =
                     (auVar42._4_4_ * (fVar55 + fVar46 + fVar45) - auVar51._12_4_) * fVar44;
                auVar71._8_4_ =
                     (auVar42._8_4_ * (fVar55 + fVar46 + fVar45) - auVar51._12_4_) * fVar44;
                auVar71._12_4_ =
                     (auVar42._12_4_ * (fVar55 + fVar46 + fVar45) - auVar51._12_4_) * fVar44;
                auVar42 = minps(auVar71,_DAT_1499314a0);
                auVar42 = maxps(auVar42,ZEXT816(0));
                auVar84._0_4_ = fVar78 + auVar42._0_4_ * fVar74;
                auVar84._4_4_ = fVar87 + auVar42._4_4_ * fVar76;
                auVar84._8_4_ = fVar43 + auVar42._8_4_ * fVar54;
                auVar84._12_4_ =
                     *(float *)(puVar7 + 0xc) +
                     auVar42._12_4_ * (*(float *)(*pauVar8 + 0xc) - *(float *)(puVar7 + 0xc));
                *pauVar31 = auVar84;
                pauVar31 = pauVar31 + 1;
                lVar10 = lVar10 + -1;
                if (lVar10 == 0) break;
                auVar81._4_4_ = fRam000000014c6daca4;
                auVar81._0_4_ = _DAT_14c6daca0;
                auVar81._8_4_ = fRam000000014c6daca8;
                auVar81._12_4_ = fRam000000014c6dacac;
              }
            }
            pauVar20 = local_228 + (longlong)(int)uVar23 + 1;
            *(undefined4 *)*pauVar20 = local_218._0_4_;
            *(undefined4 *)(*pauVar20 + 4) = local_218._4_4_;
            *(float *)(*pauVar20 + 8) = (float)uStack_210;
            *(float *)(*pauVar20 + 0xc) = uStack_210._4_4_;
            auVar81._4_4_ = fRam000000014c6daca4;
            auVar81._0_4_ = _DAT_14c6daca0;
            auVar81._8_4_ = fRam000000014c6daca8;
            auVar81._12_4_ = fRam000000014c6dacac;
            pauVar20 = local_228;
            uVar9 = uVar23;
            break;
          }
          if (fVar46 <= auVar42._0_4_) {
            pfVar16 = (float *)(lVar10 + lVar13);
            pfVar17 = (float *)(lVar10 + 0x10 + lVar13);
            local_220 = 0x3dcccccd;
            local_218._0_4_ = *pfVar16 + (*pfVar17 - *pfVar16) * 0.1;
            local_218._4_4_ = pfVar16[1] + (pfVar17[1] - pfVar16[1]) * 0.1;
            uStack_210._0_4_ = pfVar16[2] + (pfVar17[2] - pfVar16[2]) * 0.1;
            uStack_210._4_4_ = pfVar16[3] + (pfVar17[3] - pfVar16[3]) * 0.1;
            uVar23 = (uint)uVar25;
LAB_144fc27e2:
            local_1b8 = CONCAT44(local_218._4_4_,local_218._0_4_);
            uStack_1b0 = CONCAT44(uStack_210._4_4_,(float)uStack_210);
            goto LAB_144fc27e7;
          }
          if (auVar80._0_4_ <= fVar62) {
            pfVar16 = (float *)(lVar13 + lVar11);
            pfVar17 = (float *)(lVar13 + 0x10 + lVar11);
            local_220 = 0x3f666666;
            local_218._0_4_ = *pfVar16 + (*pfVar17 - *pfVar16) * 0.9;
            local_218._4_4_ = pfVar16[1] + (pfVar17[1] - pfVar16[1]) * 0.9;
            uStack_210._0_4_ = pfVar16[2] + (pfVar17[2] - pfVar16[2]) * 0.9;
            uStack_210._4_4_ = pfVar16[3] + (pfVar17[3] - pfVar16[3]) * 0.9;
            uVar23 = (uint)uVar36;
            goto LAB_144fc27e2;
          }
          if (uVar23 == uVar28) {
            local_218._0_4_ = *pfVar22;
            local_218._4_4_ = pfVar22[1];
            uStack_210._0_4_ = pfVar22[2];
            uStack_210._4_4_ = pfVar22[3];
            goto LAB_144fc27e2;
          }
LAB_144fc27f8:
          iVar35 = (int)uVar32;
          if (auVar42._0_4_ < fVar62) {
            uVar25 = uVar32 & 0xffffffff;
            local_res20 = CONCAT44(local_res20._4_4_,iVar35);
            lVar10 = lVar29;
            auVar42 = auVar83;
            local_1e8 = lVar29;
          }
          if (fVar46 < auVar80._0_4_) {
            local_208 = CONCAT44(local_208._4_4_,iVar35);
            uVar36 = uVar32 & 0xffffffff;
            lVar11 = lVar29;
            auVar80 = auVar69;
          }
          uVar23 = iVar35 + 1;
          uVar30 = (ulonglong)(uVar33 + 1);
          lVar29 = lVar29 + 0x30;
          pauVar20 = local_228;
          uVar9 = local_238[0];
        } while ((int)uVar23 <= (int)uVar28);
      }
      local_238[0] = uVar9 + 1;
      uVar25 = (ulonglong)local_238[0];
      pauVar31 = pauVar20;
    } while ((int)local_238[0] < (int)uVar28);
  }
  fVar73 = pfVar22[1];
  fVar75 = pfVar22[2];
  fVar77 = pfVar22[3];
  lVar10 = (longlong)(int)(local_res10[0] - 1);
  pauVar31 = pauVar20 + lVar10;
  *(float *)*pauVar31 = *pfVar22;
  *(float *)(*pauVar31 + 4) = fVar73;
  *(float *)(*pauVar31 + 8) = fVar75;
  *(float *)(*pauVar31 + 0xc) = fVar77;
  local_res8 = 5;
  local_res20 = lVar10;
  do {
    if (1 < lVar10) {
      pcVar24 = (char *)(lVar13 + 0x28);
      lVar11 = lVar10 + -1;
      pauVar31 = pauVar20;
      do {
        local_148 = *(float *)*pauVar31;
        fStack_144 = *(float *)(*pauVar31 + 4);
        fStack_140 = *(float *)(*pauVar31 + 8);
        fStack_13c = *(float *)(*pauVar31 + 0xc);
        fVar73 = *(float *)*(undefined1 (*) [16])(pcVar24 + -0x28);
        fVar75 = *(float *)(pcVar24 + -0x24);
        fVar77 = *(float *)(pcVar24 + -0x20);
        fVar78 = *(float *)(pcVar24 + -0x1c);
        local_138 = *(undefined1 (*) [16])(pcVar24 + -0x28);
        _local_1a8 = *(undefined1 (*) [16])(pcVar24 + -0x18);
        if (*pcVar24 == '\x01') {
          FUN_144ff6df0(&local_148,local_138,local_1a8,&local_108);
          fVar73 = local_f8;
          fVar75 = fStack_f4;
          fVar77 = fStack_f0;
          fVar78 = fStack_ec;
        }
        else {
          fVar85 = local_1a8._0_4_ - fVar73;
          fVar86 = local_1a8._4_4_ - fVar75;
          fVar61 = local_1a8._8_4_ - fVar77;
          fVar87 = local_1a8._12_4_ - fVar78;
          if (*pcVar24 == '\x02') {
            fVar73 = fVar73 + (_DAT_14c6daca0 - fStack_13c) * fVar85;
            fVar75 = fVar75 + (fRam000000014c6daca4 - fStack_13c) * fVar86;
            fVar77 = fVar77 + (fRam000000014c6daca8 - fStack_13c) * fVar61;
            fVar78 = fVar78 + (fRam000000014c6dacac - fStack_13c) * fVar87;
          }
          else {
            auVar6._4_4_ = fRam000000014c6daca4;
            auVar6._0_4_ = _DAT_14c6daca0;
            auVar6._8_4_ = fRam000000014c6daca8;
            auVar6._12_4_ = fRam000000014c6dacac;
            fVar57 = *(float *)pauVar31[2] - local_148;
            fVar62 = *(float *)(pauVar31[2] + 4) - fStack_144;
            fVar63 = *(float *)(pauVar31[2] + 8) - fStack_140;
            fVar72 = fVar73 - local_148;
            fVar74 = fVar75 - fStack_144;
            fVar76 = fVar77 - fStack_140;
            auVar42 = ZEXT816(0);
            fVar46 = fVar85 * fVar62 - fVar86 * fVar57;
            fVar52 = fVar86 * fVar63 - fVar61 * fVar62;
            fVar53 = fVar61 * fVar57 - fVar85 * fVar63;
            fVar43 = fVar52 * fVar52;
            fVar44 = fVar53 * fVar53;
            fVar45 = fVar46 * fVar46;
            auVar39._0_4_ = fVar45 + fVar44 + fVar43;
            auVar39._4_4_ = fVar45 + fVar44 + fVar43;
            auVar39._8_4_ = fVar45 + fVar44 + fVar43;
            auVar39._12_4_ = fVar45 + fVar44 + fVar43;
            if (auVar39._0_4_ == 0.0) {
              auVar80 = ZEXT816(0);
            }
            else {
              auVar80 = divps(auVar6,auVar39);
            }
            fVar54 = fVar85 * fVar57;
            fVar55 = fVar86 * fVar62;
            fVar56 = fVar61 * fVar63;
            fVar43 = (fVar53 * fVar61 - fVar86 * fVar46) * fVar72;
            fVar44 = (fVar46 * fVar85 - fVar61 * fVar52) * fVar74;
            fVar45 = (fVar52 * fVar86 - fVar85 * fVar53) * fVar76;
            auVar79._0_4_ = auVar80._0_4_ * (fVar45 + fVar44 + fVar43);
            auVar79._4_4_ = auVar80._4_4_ * (fVar45 + fVar44 + fVar43);
            auVar79._8_4_ = auVar80._8_4_ * (fVar45 + fVar44 + fVar43);
            auVar79._12_4_ = auVar80._12_4_ * (fVar45 + fVar44 + fVar43);
            auVar80 = minps(auVar79,_DAT_1499314a0);
            auVar65 = maxps(auVar80,auVar42);
            fVar43 = fVar86 * fVar86 + fVar85 * fVar85 + fVar61 * fVar61;
            fVar44 = fVar86 * fVar74 + fVar85 * fVar72 + fVar61 * fVar76;
            auVar4._4_4_ = fVar74 * fVar62 + fVar72 * fVar57 + fVar76 * fVar63;
            auVar4._0_4_ = fVar62 * fVar62 + fVar57 * fVar57 + fVar63 * fVar63;
            auVar4._8_4_ = fVar43;
            auVar4._12_4_ = fVar44;
            auVar80 = divps(auVar6,auVar4);
            fVar45 = (float)(~-(uint)(fVar43 == 0.0) & auVar80._8_4_);
            fVar43 = *(float *)(pauVar31[1] + 0xc);
            auVar40._0_4_ = fVar45 * (auVar65._0_4_ * (fVar56 + fVar55 + fVar54) - fVar44);
            auVar40._4_4_ = fVar45 * (auVar65._4_4_ * (fVar56 + fVar55 + fVar54) - fVar44);
            auVar40._8_4_ = fVar45 * (auVar65._8_4_ * (fVar56 + fVar55 + fVar54) - fVar44);
            auVar40._12_4_ = fVar45 * (auVar65._12_4_ * (fVar56 + fVar55 + fVar54) - fVar44);
            auVar80 = minps(auVar40,_DAT_1499314a0);
            auVar80 = maxps(auVar80,auVar42);
            auVar41._0_4_ = auVar80._0_4_ * 1.5 + fVar43 * (_DAT_14c6daca0 - 1.5);
            auVar41._4_4_ = auVar80._4_4_ * 1.5 + fVar43 * (fRam000000014c6daca4 - 1.5);
            auVar41._8_4_ = auVar80._8_4_ * 1.5 + fVar43 * (fRam000000014c6daca8 - 1.5);
            auVar41._12_4_ = auVar80._12_4_ * 1.5 + fVar43 * (fRam000000014c6dacac - 1.5);
            auVar80 = minps(auVar41,_DAT_1499314a0);
            auVar42 = maxps(auVar80,auVar42);
            fVar73 = fVar73 + auVar42._0_4_ * fVar85;
            fVar75 = fVar75 + auVar42._4_4_ * fVar86;
            fVar77 = fVar77 + auVar42._8_4_ * fVar61;
            fVar78 = fVar78 + auVar42._12_4_ * fVar87;
          }
        }
        *(float *)pauVar31[1] = fVar73;
        *(float *)(pauVar31[1] + 4) = fVar75;
        *(float *)(pauVar31[1] + 8) = fVar77;
        *(float *)(pauVar31[1] + 0xc) = fVar78;
        pcVar24 = pcVar24 + 0x30;
        lVar11 = lVar11 + -1;
        lVar10 = local_res20;
        pauVar20 = local_228;
        pauVar31 = pauVar31 + 1;
      } while (lVar11 != 0);
    }
    local_res8 = local_res8 + -1;
  } while (local_res8 != 0);
  lVar10 = (longlong)(int)local_res10[0];
  uVar36 = 0;
  if (0 < (int)local_res10[0]) {
    uVar27 = 0;
    if (local_200 == 0) {
      iVar35 = local_res10[0] - 1;
      uVar25 = uVar36;
      uVar30 = uVar36;
      do {
        local_1b8 = *(undefined8 *)pauVar20[uVar25];
        uStack_1b0 = *(undefined8 *)(pauVar20[uVar25] + 8);
        _local_218 = *(undefined1 (*) [16])(local_230 + uVar25 * 2);
        uVar21 = uVar27;
        if (uVar25 == 0) {
          local_res10[0] = *(uint *)(param_1 + 6) >> 0x16;
          uVar18 = 0;
        }
        else if ((int)uVar30 == iVar35) {
          local_res10[0] = *(uint *)(param_1 + 6) >> 0x16;
          uVar18 = 0;
        }
        else {
          uVar21 = *(undefined4 *)(lVar13 + -0xc + uVar25 * 0x30);
          uVar18 = *(undefined1 *)(lVar13 + -8 + uVar25 * 0x30);
          local_res10[0] = *(uint *)(lVar13 + -0x10 + uVar25 * 0x30) >> 0x16;
        }
        FUN_14531be60(param_1[7],&local_1b8,local_218,local_res10,uVar21,uVar18);
        uVar30 = (ulonglong)((int)uVar30 + 1);
        uVar25 = uVar25 + 1;
        pauVar20 = local_228;
      } while ((longlong)uVar25 < lVar10);
    }
    else if (0 < (int)local_res10[0]) {
      iVar35 = local_res10[0] - 1;
      uVar25 = uVar36;
      uVar30 = uVar36;
      do {
        local_1b8 = *(undefined8 *)pauVar20[uVar25];
        uStack_1b0 = *(undefined8 *)(pauVar20[uVar25] + 8);
        _local_218 = *(undefined1 (*) [16])(local_230 + uVar25 * 2);
        uVar21 = uVar27;
        if (uVar25 == 0) {
          local_res10[0] = *(uint *)(param_1 + 6) >> 0x16;
          uVar18 = 0;
        }
        else if ((int)uVar30 == iVar35) {
          local_res10[0] = uVar26 >> 0x16;
          uVar18 = 0;
        }
        else {
          uVar21 = *(undefined4 *)(lVar13 + -0xc + uVar25 * 0x30);
          uVar18 = *(undefined1 *)(lVar13 + -8 + uVar25 * 0x30);
          local_res10[0] = *(uint *)(lVar13 + -0x10 + uVar25 * 0x30) >> 0x16;
        }
        FUN_14531be60(param_1[7],&local_1b8,local_218,local_res10,uVar21,uVar18);
        uVar30 = (ulonglong)((int)uVar30 + 1);
        uVar25 = uVar25 + 1;
        pauVar20 = local_228;
      } while ((longlong)uVar25 < lVar10);
    }
  }
  FUN_14531bf90(param_1[7]);
  plVar3 = (longlong *)param_1[7];
  if ((*plVar3 != 0) || (*(int *)((longlong)plVar3 + 0x14) < (int)plVar3[2])) {
    uVar36 = 1;
  }
  if (local_1f0 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar25 = local_1f8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_1f0 + 0x28) < uVar25) ||
       (local_1c8 + uVar25 != *(longlong *)(local_1f0 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_1f0 + 0x38) = local_1c8;
      if (*(longlong *)(local_1f0 + 0x48) == local_1c8) {
        FUN_144be8430();
      }
    }
  }
  if ((-1 < (int)(uint)local_res18) && (lVar13 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar13,(ulonglong)((uint)local_res18 & 0x7fffffff) * 0x30);
  }
  lVar13 = local_198;
  if (local_158 == 0) {
    (*DAT_14c787678)(1,local_230,local_198);
  }
  else {
    uVar25 = local_198 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_158 + 0x28) < uVar25) ||
       ((longlong)local_230 + uVar25 != *(longlong *)(local_158 + 0x38))) {
      FUN_144be8550(local_158,local_230);
    }
    else {
      *(undefined8 **)(local_158 + 0x38) = local_230;
      if (*(undefined8 **)(local_158 + 0x48) == local_230) {
        FUN_144be8430(local_158);
      }
    }
  }
  if (local_150 == 0) {
    (*DAT_14c787678)(1,local_228,lVar13);
  }
  else {
    uVar25 = lVar13 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_150 + 0x28) < uVar25) ||
       (*local_228 + uVar25 != *(undefined1 **)(local_150 + 0x38))) {
      FUN_144be8550(local_150,local_228);
    }
    else {
      *(undefined1 (**) [16])(local_150 + 0x38) = local_228;
      if (*(undefined1 (**) [16])(local_150 + 0x48) == local_228) {
        FUN_144be8430(local_150);
      }
    }
  }
  return uVar36;
}



// FUNCTION 144fc2ff0 FUN_144fc2ff0 body=941 status=ok
// SIG undefined FUN_144fc2ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144fc2ff0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  
  fVar30 = *param_1;
  fVar31 = param_1[1];
  fVar32 = param_1[2];
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar14 = param_2[2];
  fVar6 = *param_6;
  fVar7 = param_6[1];
  fVar8 = param_6[2];
  fVar9 = param_6[3];
  fVar37 = fVar6 - fVar30;
  fVar38 = fVar7 - fVar31;
  fVar39 = fVar8 - fVar32;
  fVar18 = ((*param_3 - fVar12) * *param_4 + fVar12) - fVar30;
  fVar21 = ((param_3[1] - fVar13) * param_4[1] + fVar13) - fVar31;
  fVar22 = ((param_3[2] - fVar14) * param_4[2] + fVar14) - fVar32;
  fVar10 = param_7[3];
  fVar30 = ((*param_3 - fVar12) * *param_5 + fVar12) - fVar30;
  fVar31 = ((param_3[1] - fVar13) * param_5[1] + fVar13) - fVar31;
  fVar32 = ((param_3[2] - fVar14) * param_5[2] + fVar14) - fVar32;
  fVar33 = *param_7 - fVar6;
  fVar34 = param_7[1] - fVar7;
  fVar35 = param_7[2] - fVar8;
  fVar15 = fVar21 * fVar33 - fVar34 * fVar18;
  fVar16 = fVar22 * fVar34 - fVar35 * fVar21;
  fVar17 = fVar18 * fVar35 - fVar33 * fVar22;
  fVar12 = fVar16 * fVar16;
  fVar13 = fVar17 * fVar17;
  fVar14 = fVar15 * fVar15;
  auVar19._0_4_ = fVar13 + fVar12 + fVar14;
  auVar19._4_4_ = fVar13 + fVar12 + fVar14;
  auVar19._8_4_ = fVar13 + fVar12 + fVar14;
  auVar19._12_4_ = fVar13 + fVar12 + fVar14;
  if (auVar19._0_4_ == 0.0) {
    auVar19 = ZEXT816(0);
  }
  else {
    auVar19 = divps(_DAT_14c6daca0,auVar19);
  }
  fVar25 = fVar33 * fVar18;
  fVar26 = fVar34 * fVar21;
  fVar27 = fVar35 * fVar22;
  fVar12 = (fVar35 * fVar17 - fVar15 * fVar34) * fVar37;
  fVar13 = (fVar33 * fVar15 - fVar16 * fVar35) * fVar38;
  fVar14 = (fVar34 * fVar16 - fVar17 * fVar33) * fVar39;
  fVar15 = fVar35 * fVar35 + fVar34 * fVar34 + fVar33 * fVar33;
  fVar28 = fVar39 * fVar35 + fVar38 * fVar34 + fVar37 * fVar33;
  auVar11._4_4_ = fVar39 * fVar22 + fVar38 * fVar21 + fVar37 * fVar18;
  auVar11._0_4_ = fVar22 * fVar22 + fVar21 * fVar21 + fVar18 * fVar18;
  auVar11._8_4_ = fVar15;
  auVar11._12_4_ = fVar28;
  auVar11 = divps(_DAT_14c6daca0,auVar11);
  fVar15 = (float)(~-(uint)(fVar15 == 0.0) & auVar11._8_4_);
  auVar36._0_4_ = (fVar13 + fVar12 + fVar14) * auVar19._0_4_;
  auVar36._4_4_ = (fVar13 + fVar12 + fVar14) * auVar19._4_4_;
  auVar36._8_4_ = (fVar13 + fVar12 + fVar14) * auVar19._8_4_;
  auVar36._12_4_ = (fVar13 + fVar12 + fVar14) * auVar19._12_4_;
  fVar16 = fVar31 * fVar33 - fVar34 * fVar30;
  fVar17 = fVar32 * fVar34 - fVar35 * fVar31;
  fVar18 = fVar30 * fVar35 - fVar33 * fVar32;
  auVar19 = minps(auVar36,_DAT_1499314a0);
  auVar19 = maxps(auVar19,ZEXT816(0));
  fVar12 = fVar17 * fVar17;
  fVar13 = fVar18 * fVar18;
  fVar14 = fVar16 * fVar16;
  auVar20._0_4_ = (auVar19._0_4_ * (fVar26 + fVar25 + fVar27) - fVar28) * fVar15;
  auVar20._4_4_ = (auVar19._4_4_ * (fVar26 + fVar25 + fVar27) - fVar28) * fVar15;
  auVar20._8_4_ = (auVar19._8_4_ * (fVar26 + fVar25 + fVar27) - fVar28) * fVar15;
  auVar20._12_4_ = (auVar19._12_4_ * (fVar26 + fVar25 + fVar27) - fVar28) * fVar15;
  auVar19 = minps(auVar20,_DAT_1499314a0);
  fVar15 = fVar13 + fVar12 + fVar14;
  auVar19 = maxps(auVar19,ZEXT816(0));
  if (fVar15 == 0.0) {
    auVar11 = ZEXT816(0);
  }
  else {
    auVar3._4_4_ = fVar13 + fVar12 + fVar14;
    auVar3._0_4_ = fVar15;
    auVar3._8_4_ = fVar13 + fVar12 + fVar14;
    auVar3._12_4_ = fVar13 + fVar12 + fVar14;
    auVar11 = divps(_DAT_14c6daca0,auVar3);
  }
  fVar12 = fVar33 * fVar30;
  fVar13 = fVar34 * fVar31;
  fVar14 = fVar35 * fVar32;
  fVar15 = (fVar35 * fVar18 - fVar16 * fVar34) * fVar37;
  fVar16 = (fVar33 * fVar16 - fVar17 * fVar35) * fVar38;
  fVar17 = (fVar34 * fVar17 - fVar18 * fVar33) * fVar39;
  auVar29._0_4_ = fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30;
  auVar29._4_4_ = fVar39 * fVar32 + fVar38 * fVar31 + fVar37 * fVar30;
  auVar29._8_4_ = fVar35 * fVar35 + fVar34 * fVar34 + fVar33 * fVar33;
  auVar29._12_4_ = fVar39 * fVar35 + fVar38 * fVar34 + fVar37 * fVar33;
  auVar36 = divps(_DAT_14c6daca0,auVar29);
  fVar30 = (float)(~-(uint)(auVar29._8_4_ == 0.0) & auVar36._8_4_);
  auVar23._0_4_ = (fVar16 + fVar15 + fVar17) * auVar11._0_4_;
  auVar23._4_4_ = (fVar16 + fVar15 + fVar17) * auVar11._4_4_;
  auVar23._8_4_ = (fVar16 + fVar15 + fVar17) * auVar11._8_4_;
  auVar23._12_4_ = (fVar16 + fVar15 + fVar17) * auVar11._12_4_;
  auVar1._8_4_ = 0x3f733333;
  auVar1._0_8_ = 0x3f7333333f733333;
  auVar1._12_4_ = 0x3f733333;
  auVar19 = minps(auVar19,auVar1);
  auVar11 = minps(auVar23,_DAT_1499314a0);
  auVar4._8_4_ = 0x3d4ccccd;
  auVar4._0_8_ = 0x3d4ccccd3d4ccccd;
  auVar4._12_4_ = 0x3d4ccccd;
  auVar19 = maxps(auVar19,auVar4);
  auVar11 = maxps(auVar11,ZEXT816(0));
  auVar24._0_4_ = (auVar11._0_4_ * (fVar13 + fVar12 + fVar14) - auVar29._12_4_) * fVar30;
  auVar24._4_4_ = (auVar11._4_4_ * (fVar13 + fVar12 + fVar14) - auVar29._12_4_) * fVar30;
  auVar24._8_4_ = (auVar11._8_4_ * (fVar13 + fVar12 + fVar14) - auVar29._12_4_) * fVar30;
  auVar24._12_4_ = (auVar11._12_4_ * (fVar13 + fVar12 + fVar14) - auVar29._12_4_) * fVar30;
  auVar11 = minps(auVar24,_DAT_1499314a0);
  auVar11 = maxps(auVar11,ZEXT816(0));
  auVar2._8_4_ = 0x3f733333;
  auVar2._0_8_ = 0x3f7333333f733333;
  auVar2._12_4_ = 0x3f733333;
  auVar11 = minps(auVar11,auVar2);
  auVar5._8_4_ = 0x3d4ccccd;
  auVar5._0_8_ = 0x3d4ccccd3d4ccccd;
  auVar5._12_4_ = 0x3d4ccccd;
  auVar11 = maxps(auVar11,auVar5);
  fVar30 = (auVar11._4_4_ + auVar19._4_4_) * fRam000000014c6dad94;
  fVar31 = (auVar11._8_4_ + auVar19._8_4_) * fRam000000014c6dad98;
  fVar32 = (auVar11._12_4_ + auVar19._12_4_) * fRam000000014c6dad9c;
  *param_8 = (auVar11._0_4_ + auVar19._0_4_) * _DAT_14c6dad90 * fVar33 + fVar6;
  param_8[1] = fVar30 * fVar34 + fVar7;
  param_8[2] = fVar31 * fVar35 + fVar8;
  param_8[3] = fVar32 * (fVar10 - fVar9) + fVar9;
  return;
}



// FUNCTION 144fc33a0 FUN_144fc33a0 body=316 status=ok
// SIG undefined FUN_144fc33a0(void)

ulonglong FUN_144fc33a0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong local_res8;
  
  uVar12 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar12 * 2;
  uVar9 = param_3;
  if (param_3 < uVar11) {
    uVar9 = uVar11;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar6 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x30,&local_res8);
  puVar8 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar7 = (undefined4 *)(lVar6 + 0x20);
    uVar11 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if (puVar7 + -8 != (undefined4 *)0x0) {
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        puVar7[-8] = *puVar8;
        puVar7[-7] = uVar2;
        puVar7[-6] = uVar3;
        puVar7[-5] = uVar4;
        uVar5 = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar7 + -4) = *(undefined8 *)(puVar8 + 4);
        *(undefined8 *)(puVar7 + -2) = uVar5;
        *puVar7 = puVar8[8];
        puVar7[1] = puVar8[9];
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar8 + 10);
      }
      puVar7 = puVar7 + 0xc;
      puVar8 = puVar8 + 0xc;
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
    uVar11 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar12 * 0x30);
  }
  *param_1 = lVar6;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar11;
}



// FUNCTION 144fc34e0 FUN_144fc34e0 body=3 status=ok
// SIG undefined FUN_144fc34e0(void)

undefined1 FUN_144fc34e0(void)

{
  return 1;
}



// FUNCTION 144fc34f0 FUN_144fc34f0 body=429 status=ok
// SIG undefined FUN_144fc34f0(void)

undefined8
FUN_144fc34f0(undefined8 *param_1,undefined4 param_2,uint param_3,uint *param_4,float param_5)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint *puVar8;
  undefined1 (*pauVar9) [16];
  float *pfVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined4 *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint local_78;
  short *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [32];
  
  local_70 = (short *)param_1[0x3c];
  pfVar10 = (float *)param_1[0x48];
  iVar7 = (int)*local_70 << 0x10;
  local_38._4_4_ = (float)iVar7;
  local_38._0_4_ = (float)iVar7;
  local_38._8_4_ = (float)iVar7;
  local_38._12_4_ = (float)iVar7;
  if ((pfVar10 != (float *)0x0) &&
     (uVar11 = (ulonglong)*(uint *)(param_1 + 0x49), 0 < (int)*(uint *)(param_1 + 0x49))) {
    puVar8 = (uint *)param_1[0x47];
    auVar13 = local_38;
    do {
      local_38 = auVar13;
      if (*puVar8 == param_3) {
        fVar1 = *pfVar10;
        local_38._0_4_ = auVar13._0_4_ + fVar1;
        local_38._4_4_ = auVar13._4_4_ + fVar1;
        local_38._8_4_ = auVar13._8_4_ + fVar1;
        local_38._12_4_ = auVar13._12_4_ + fVar1;
      }
      pfVar10 = pfVar10 + 1;
      puVar8 = puVar8 + 1;
      uVar11 = uVar11 - 1;
      auVar13 = local_38;
    } while (uVar11 != 0);
  }
  uVar12 = local_38._0_8_;
  plVar2 = (longlong *)param_1[0x45];
  if (plVar2 != (longlong *)0x0) {
    lVar3 = param_1[0x40];
    local_b0 = (longlong)param_1 + 0x1c;
    local_a8 = param_1[6];
    uStack_a0 = param_1[7];
    uVar11 = (ulonglong)(param_3 & 0x3ffff);
    lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x18);
    local_res8 = *(undefined4 *)(lVar4 + uVar11 * 8);
    local_resc = *(undefined4 *)(lVar4 + 4 + uVar11 * 8);
    local_90 = &local_res8;
    pfVar10 = (float *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x38) + uVar11 * 0x10);
    fVar1 = *pfVar10;
    fVar5 = pfVar10[1];
    fVar6 = pfVar10[2];
    local_88 = fVar5 * *(float *)(lVar3 + 0x50) + fVar1 * *(float *)(lVar3 + 0x40) +
               fVar6 * *(float *)(lVar3 + 0x60) + *(float *)(lVar3 + 0x70);
    fStack_84 = fVar5 * *(float *)(lVar3 + 0x54) + fVar1 * *(float *)(lVar3 + 0x44) +
                fVar6 * *(float *)(lVar3 + 100) + *(float *)(lVar3 + 0x74);
    fStack_80 = fVar5 * *(float *)(lVar3 + 0x58) + fVar1 * *(float *)(lVar3 + 0x48) +
                fVar6 * *(float *)(lVar3 + 0x68) + *(float *)(lVar3 + 0x78);
    fStack_7c = fVar5 * *(float *)(lVar3 + 0x5c) + fVar1 * *(float *)(lVar3 + 0x4c) +
                fVar6 * *(float *)(lVar3 + 0x6c) + *(float *)(lVar3 + 0x7c);
    local_78 = (*(int *)(param_1 + 0x3d) << 4 | *(uint *)(param_1 + 1)) << 0x12 | *param_4;
    local_68 = *param_1;
    local_60 = param_1 + 0x43;
    local_58 = local_b8;
    local_48 = param_5;
    fStack_44 = param_5;
    fStack_40 = param_5;
    fStack_3c = param_5;
    local_b8[0] = param_2;
    local_98 = param_3;
    pauVar9 = (undefined1 (*) [16])(**(code **)(*plVar2 + 0x18))(plVar2,local_28,&local_68);
    auVar13 = maxps(ZEXT816(0),*pauVar9);
    uVar12 = auVar13._0_8_;
  }
  return CONCAT44(param_5 + (float)((ulonglong)uVar12 >> 0x20),param_5 + (float)uVar12);
}



// FUNCTION 144fc36a0 FUN_144fc36a0 body=153 status=ok
// SIG undefined FUN_144fc36a0(void)

uint * FUN_144fc36a0(uint *param_1,longlong param_2,int *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  uVar3 = param_4 & 0x3fffff;
  lVar4 = (ulonglong)(param_4 >> 0x16) * 0x120;
  lVar1 = *(longlong *)(*(longlong *)(lVar2 + lVar4) + 0x20);
  if (*(int *)(lVar1 + 0x20) <= (int)uVar3) {
    uVar3 = *(uint *)(*(longlong *)(lVar1 + 0x168) + (ulonglong)uVar3 * 4);
  }
  if (*param_3 < *(int *)(lVar2 + 0x18 + lVar4)) {
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10 + lVar4) + (longlong)*param_3 * 8);
  }
  else {
    lVar2 = 0;
  }
  lVar2 = *(longlong *)(lVar2 + 0x20);
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x68) + (longlong)(int)uVar3 * 4);
  if (uVar3 != 0xffffffff) {
    *param_1 = (*(int *)(lVar2 + 100) << 4 | *(uint *)(lVar2 + 0x68)) << 0x12 | uVar3;
    return param_1;
  }
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 144fc3740 FUN_144fc3740 body=524 status=ok
// SIG undefined FUN_144fc3740(void)

void FUN_144fc3740(longlong param_1,uint param_2,uint param_3,int param_4,short param_5)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  short *psVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined8 local_48 [2];
  
  uVar4 = param_2 >> 0x16;
  lVar6 = *(longlong *)
           (*(longlong *)
             (((ulonglong)uVar4 * 8 + (ulonglong)uVar4) * 0x20 + 0x10 +
             *(longlong *)(param_1 + 0x38)) + (ulonglong)(param_2 >> 0x12 & 0xf) * 8);
  if (lVar6 == 0) {
    lVar6 = 0;
  }
  else if (*(char *)(lVar6 + 0x30) == '\x01') {
    lVar6 = *(longlong *)(lVar6 + 0x20);
  }
  else {
    lVar6 = FUN_147e4bc84();
  }
  local_res18[0] = param_2 & 0x3ffff;
  if ((*(int *)(lVar6 + 0x80) != 0) &&
     (iVar10 = *(int *)(*(longlong *)(lVar6 + 0x78) + (ulonglong)local_res18[0] * 4), iVar10 != -1))
  {
    local_res10[0] = *(uint *)(*(longlong *)(lVar6 + 0x88) + (longlong)iVar10 * 8);
    iVar10 = *(int *)(*(longlong *)(lVar6 + 0x88) + 4 + (longlong)iVar10 * 8) + local_res10[0];
    if ((int)local_res10[0] < iVar10) {
      iVar3 = *(int *)(lVar6 + 0x30);
      do {
        if ((int)local_res10[0] < iVar3) {
          lVar9 = *(longlong *)(lVar6 + 0x28);
          uVar5 = local_res10[0];
        }
        else {
          lVar9 = *(longlong *)(lVar6 + 0x98);
          uVar5 = local_res10[0] - iVar3;
        }
        lVar8 = (longlong)(int)uVar5;
        uVar5 = *(uint *)(lVar9 + 4 + lVar8 * 8);
        if (((*(byte *)(lVar9 + 2 + lVar8 * 8) & 0x40) == 0) && (uVar5 != 0xffffffff)) {
          uVar5 = *(int *)(lVar6 + 100) << 0x16 | uVar5 & 0x3fffff;
        }
        if (uVar5 == param_3) {
          if ((*(ushort *)(lVar9 + lVar8 * 8 + 2) >> 1 & 1) == 0) {
            return;
          }
          if ((int)local_res10[0] < iVar3) {
            return;
          }
          piVar1 = (int *)(*(longlong *)(lVar6 + 0xb8) + (longlong)(int)(local_res10[0] - iVar3) * 4
                          );
          *piVar1 = *piVar1 + param_4;
          if (*piVar1 == 0) {
            FUN_144c381f0(lVar6,local_res18,local_res10);
            return;
          }
          if (param_4 < 1) {
            return;
          }
          lVar9 = (longlong)(int)(local_res10[0] - *(int *)(lVar6 + 0x30));
          sVar2 = *(short *)(*(longlong *)(lVar6 + 0x98) + lVar9 * 8);
          if ((float)((int)sVar2 << 0x10) < (float)((int)param_5 << 0x10)) {
            param_5 = sVar2;
          }
          *(short *)(*(longlong *)(lVar6 + 0x98) + lVar9 * 8) = param_5;
          return;
        }
        local_res10[0] = local_res10[0] + 1;
      } while ((int)local_res10[0] < iVar10);
    }
  }
  local_48[0] = 0;
  local_res8 = (int *)0x0;
  local_res10[0] = local_res18[0];
  psVar7 = (short *)FUN_144c37fc0(lVar6,local_res10,local_48,&local_res8);
  *psVar7 = param_5;
  *(uint *)(psVar7 + 2) = param_3;
  psVar7[1] = 2;
  *local_res8 = param_4;
  if (uVar4 != param_3 >> 0x16) {
    psVar7[1] = psVar7[1] | 0x40;
  }
  return;
}



// FUNCTION 144fc3950 FUN_144fc3950 body=4540 status=ok
// SIG undefined FUN_144fc3950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144fc3950(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,undefined8 *param_5,
             undefined4 *param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9)

{
  int *piVar1;
  ushort *puVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [14];
  undefined4 *puVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  uint *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  uint *puVar19;
  char cVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  undefined4 *puVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  undefined1 (*pauVar29) [16];
  ulonglong uVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  int iVar43;
  undefined1 auVar38 [16];
  int iVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  int iVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  int iVar56;
  float fVar62;
  float fVar63;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  float fVar77;
  float fVar78;
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  uint local_res20 [2];
  ulonglong local_208;
  int local_200;
  undefined1 (*local_1f8) [16];
  ulonglong local_1f0;
  undefined8 local_1e8;
  uint *local_1e0;
  ulonglong local_1d8;
  undefined4 *local_1d0;
  undefined1 (*local_1c8) [16];
  ulonglong local_1c0;
  undefined1 *local_1b8;
  uint local_1b0;
  ulonglong local_1a8;
  ulonglong local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined1 local_188 [16];
  longlong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  longlong local_118 [2];
  int local_108;
  int local_104;
  
  uVar31 = *(uint *)(param_3 + 1);
  local_200 = (int)param_2[1] + -1;
  uVar30 = 0;
  iVar36 = 0;
  if (uVar31 != 0) {
    uVar28 = uVar30;
    uVar22 = uVar30;
    if ((0 < (int)uVar31) && (uVar28 = 0, uVar22 = 0, 7 < uVar31)) {
      iVar44 = 0;
      iVar48 = 0;
      iVar52 = 0;
      iVar56 = 0;
      iVar36 = 0;
      iVar39 = 0;
      iVar41 = 0;
      iVar43 = 0;
      uVar24 = uVar31 & 0x80000007;
      if ((int)uVar24 < 0) {
        uVar24 = (uVar24 - 1 | 0xfffffff8) + 1;
      }
      uVar22 = uVar30;
      uVar28 = uVar30;
      do {
        piVar1 = (int *)(*param_3 + uVar22 * 4);
        uVar28 = (ulonglong)((int)uVar28 + 8);
        iVar44 = iVar44 + (~-(uint)(*piVar1 == (int)DAT_149931c80) & (uint)DAT_149931e70);
        iVar48 = iVar48 + (~-(uint)(piVar1[1] == DAT_149931c80._4_4_) & DAT_149931e70._4_4_);
        iVar52 = iVar52 + (~-(uint)(piVar1[2] == DAT_149931c80._8_4_) & DAT_149931e70._8_4_);
        iVar56 = iVar56 + (~-(uint)(piVar1[3] == DAT_149931c80._12_4_) & DAT_149931e70._12_4_);
        piVar1 = (int *)(*param_3 + 0x10 + uVar22 * 4);
        uVar22 = uVar22 + 8;
        iVar36 = iVar36 + (~-(uint)(*piVar1 == (int)DAT_149931c80) & (uint)DAT_149931e70);
        iVar39 = iVar39 + (~-(uint)(piVar1[1] == DAT_149931c80._4_4_) & DAT_149931e70._4_4_);
        iVar41 = iVar41 + (~-(uint)(piVar1[2] == DAT_149931c80._8_4_) & DAT_149931e70._8_4_);
        iVar43 = iVar43 + (~-(uint)(piVar1[3] == DAT_149931c80._12_4_) & DAT_149931e70._12_4_);
      } while ((longlong)uVar22 < (longlong)(int)(uVar31 - uVar24));
      uVar22 = (ulonglong)
               (uint)(iVar36 + iVar44 + iVar41 + iVar52 + iVar39 + iVar48 + iVar43 + iVar56);
    }
    iVar36 = (int)uVar22;
    lVar23 = (longlong)(int)uVar28;
    if (lVar23 < (int)uVar31) {
      do {
        uVar28 = (ulonglong)((int)uVar22 + 1);
        if (*(int *)(*param_3 + lVar23 * 4) == -1) {
          uVar28 = uVar22;
        }
        iVar36 = (int)uVar28;
        lVar23 = lVar23 + 1;
        uVar22 = uVar28;
      } while (lVar23 < (int)uVar31);
    }
  }
  uVar31 = (int)param_2[1] + 1 + iVar36;
  lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar20 = *(char *)(lVar23 + 0x114);
  local_res20[0] = param_4;
  local_1b0 = uVar31;
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar23 + 0x114);
  }
  lVar14 = *(longlong *)(lVar23 + 0xf0);
  if (lVar14 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar23 + 0xf0) = lVar14;
  }
  uVar22 = (ulonglong)(int)uVar31;
  local_140 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  if (*(longlong *)(local_140 + 8) != 0) {
    local_140 = uVar30;
  }
  local_208 = uVar22 * 0x10;
  local_1d8 = uVar22;
  local_1a8 = local_208;
  if (local_140 == 0) {
    pauVar15 = (undefined1 (*) [16])(*DAT_14c787670)(1,&local_208,0x40);
  }
  else {
    local_1c0 = local_208 + 0x3f & 0xffffffffffffffc0;
    if (local_1c0 <= *(ulonglong *)(local_140 + 0x28)) {
      pauVar15 = *(undefined1 (**) [16])(local_140 + 0x38);
      local_1c8 = pauVar15;
      if (*pauVar15 + local_1c0 <= *(undefined1 **)(local_140 + 0x40)) {
        *(undefined1 **)(local_140 + 0x38) = *pauVar15 + local_1c0;
        goto LAB_144fc3b95;
      }
    }
    pauVar15 = (undefined1 (*) [16])FUN_144b454a0(local_140,&local_1c0);
  }
LAB_144fc3b95:
  uVar24 = uVar31 | 0x80000000;
  local_1e8 = CONCAT44(local_1e8._4_4_,uVar31) | 0x80000000;
  cVar20 = *(char *)(lVar23 + 0x114);
  local_1c8 = pauVar15;
  uStack_18c = uVar24;
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar23 + 0x114);
  }
  lVar14 = *(longlong *)(lVar23 + 0xf0);
  if (lVar14 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar23 + 0xf0) = lVar14;
  }
  local_148 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  local_208 = uVar22 * 4;
  if (*(longlong *)(local_148 + 8) != 0) {
    local_148 = uVar30;
  }
  if (local_148 == 0) {
    puVar16 = (uint *)(*DAT_14c787670)(1,&local_208,0x40);
  }
  else {
    local_1c0 = local_208 + 0x3f & 0xffffffffffffffc0;
    if (local_1c0 <= *(ulonglong *)(local_148 + 0x28)) {
      puVar16 = *(uint **)(local_148 + 0x38);
      local_1e0 = puVar16;
      if (local_1c0 + (longlong)puVar16 <= *(ulonglong *)(local_148 + 0x40)) {
        *(ulonglong *)(local_148 + 0x38) = local_1c0 + (longlong)puVar16;
        goto LAB_144fc3c64;
      }
    }
    puVar16 = (uint *)FUN_144b454a0(local_148,&local_1c0);
  }
LAB_144fc3c64:
  cVar20 = *(char *)(lVar23 + 0x114);
  local_1e0 = puVar16;
  uStack_18c = uVar24;
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar23 + 0x114);
  }
  lVar14 = *(longlong *)(lVar23 + 0xf0);
  if (lVar14 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar23 + 0xf0) = lVar14;
  }
  local_150 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  if (*(longlong *)(local_150 + 8) != 0) {
    local_150 = uVar30;
  }
  local_1f0 = (longlong)(local_200 + iVar36) * 0x20;
  local_1c0 = local_1f0;
  if (local_150 == 0) {
    local_1f8 = (undefined1 (*) [16])(*DAT_14c787670)(1,&local_1f0,0x40);
  }
  else {
    local_208 = local_1f0 + 0x3f & 0xffffffffffffffc0;
    if (local_208 <= *(ulonglong *)(local_150 + 0x28)) {
      local_1f8 = *(undefined1 (**) [16])(local_150 + 0x38);
      if (*local_1f8 + local_208 <= *(undefined1 **)(local_150 + 0x40)) {
        *(undefined1 **)(local_150 + 0x38) = *local_1f8 + local_208;
        goto LAB_144fc3d31;
      }
    }
    local_1f8 = (undefined1 (*) [16])FUN_144b454a0(local_150,&local_208);
  }
LAB_144fc3d31:
  uStack_18c = local_200 + iVar36 | 0x80000000;
  cVar20 = *(char *)(lVar23 + 0x114);
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar23 + 0x114);
  }
  lVar14 = *(longlong *)(lVar23 + 0xf0);
  if (lVar14 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar23 + 0xf0) = lVar14;
  }
  local_158 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  local_1f0 = local_1d8;
  if (*(longlong *)(local_158 + 8) != 0) {
    local_158 = uVar30;
  }
  if (local_158 == 0) {
    puVar17 = (undefined1 *)(*DAT_14c787670)(1,&local_1f0,0x40);
  }
  else {
    local_208 = local_1d8 + 0x3f & 0xffffffffffffffc0;
    if (local_208 <= *(ulonglong *)(local_158 + 0x28)) {
      puVar17 = *(undefined1 **)(local_158 + 0x38);
      local_1b8 = puVar17;
      if (puVar17 + local_208 <= *(undefined1 **)(local_158 + 0x40)) {
        *(undefined1 **)(local_158 + 0x38) = puVar17 + local_208;
        goto LAB_144fc3dfa;
      }
    }
    puVar17 = (undefined1 *)FUN_144b454a0(local_158,&local_208);
  }
LAB_144fc3dfa:
  uStack_18c = (undefined4)local_1e8;
  local_1b8 = puVar17;
  if (*(char *)(lVar23 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar14 = *(longlong *)(lVar23 + 0xf0);
  if (lVar14 == 0) {
    if (*(char *)(lVar23 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar23 + 0xf0) = lVar14;
  }
  local_160 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  local_1f0 = local_1d8 * 4;
  if (*(longlong *)(local_160 + 8) != 0) {
    local_160 = uVar30;
  }
  if (local_160 == 0) {
    local_1d0 = (undefined4 *)(*DAT_14c787670)(CONCAT71((int7)(local_1f0 >> 8),1),&local_1f0,0x40);
  }
  else {
    local_208 = local_1f0 + 0x3f & 0xffffffffffffffc0;
    if (local_208 <= *(ulonglong *)(local_160 + 0x28)) {
      local_1d0 = *(undefined4 **)(local_160 + 0x38);
      if (local_208 + (longlong)local_1d0 <= *(ulonglong *)(local_160 + 0x40)) {
        *(ulonglong *)(local_160 + 0x38) = local_208 + (longlong)local_1d0;
        goto LAB_144fc3ebe;
      }
    }
    local_1d0 = (undefined4 *)FUN_144b454a0(local_160,&local_208);
  }
LAB_144fc3ebe:
  uStack_18c = (undefined4)local_1e8;
  if (pauVar15 != (undefined1 (*) [16])0x0) {
    uVar27 = param_5[1];
    *(undefined8 *)*pauVar15 = *param_5;
    *(undefined8 *)(*pauVar15 + 8) = uVar27;
  }
  iVar39 = 1;
  if (puVar16 != (uint *)0x0) {
    *puVar16 = param_4 >> 0x16;
  }
  iVar41 = 1;
  iVar43 = 1;
  if (puVar17 != (undefined1 *)0x0) {
    *puVar17 = 0;
  }
  if (local_1d0 != (undefined4 *)0x0) {
    *local_1d0 = 0;
  }
  local_1e8 = (ulonglong)(*(uint *)*param_2 >> 0x16);
  uVar22 = *(ulonglong *)(local_1e8 * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
  FUN_144fc4b10(uVar22,*(uint *)*param_2 & 0x3fffff,&local_198);
  pauVar15 = local_1c8;
  puVar13 = local_1d0;
  puVar16 = local_1e0;
  local_208 = 0;
  fVar37 = _DAT_14c6dad90;
  fVar40 = fRam000000014c6dad94;
  fVar42 = fRam000000014c6dad98;
  fVar35 = fRam000000014c6dad9c;
  iVar44 = iVar41;
  if (0 < local_200) {
    auVar79._8_4_ = uStack_190;
    auVar79._0_8_ = local_198;
    auVar79._12_4_ = uStack_18c;
    do {
      iVar48 = (int)uVar30;
      uVar31 = *(uint *)(*param_2 + 4 + local_208 * 4);
      uVar24 = uVar31 >> 0x16;
      local_198 = (ulonglong)uVar24;
      local_1f0 = *(ulonglong *)(local_198 * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
      lVar23 = *(longlong *)(*(longlong *)(local_1f0 + 0x20) + 0x38);
      auVar82 = *(undefined1 (*) [16])
                 (*(longlong *)(*(longlong *)(local_1f0 + 0x20) + 0x18) +
                 (ulonglong)(uVar31 & 0x3fffff) * 0x18);
      bVar3 = *(byte *)(local_1f0 + 0x40);
      auVar6._10_2_ = 0;
      auVar6._0_10_ = auVar82._0_10_;
      auVar6._12_2_ = auVar82._6_2_;
      auVar7._8_2_ = auVar82._4_2_;
      auVar7._0_8_ = auVar82._0_8_;
      auVar7._10_4_ = auVar6._10_4_;
      auVar12._6_8_ = 0;
      auVar12._0_6_ = auVar7._8_6_;
      auVar8._4_2_ = auVar82._2_2_;
      auVar8._0_4_ = auVar82._0_4_;
      auVar8._6_8_ = SUB148(auVar12 << 0x40,6);
      auVar57 = *(undefined1 (*) [16])(lVar23 + 0xb0);
      auVar80._0_4_ =
           ((float)(auVar82._0_4_ & 0xffff) + 0.0) * *(float *)(lVar23 + 0xa0) + auVar57._0_4_;
      auVar80._4_4_ = ((float)auVar8._4_4_ + 0.0) * *(float *)(lVar23 + 0xa4) + auVar57._4_4_;
      auVar80._8_4_ =
           ((float)(auVar7._8_4_ & 0xffff) + (float)(auVar7._8_4_ >> 0x10) * 65536.0) *
           *(float *)(lVar23 + 0xa8) + auVar57._8_4_;
      auVar80._12_4_ =
           ((float)(auVar6._10_4_ >> 0x10) + 0.0) * *(float *)(lVar23 + 0xac) + auVar57._12_4_;
      auVar83._0_4_ = ((float)auVar82._8_2_ + 0.0) * *(float *)(lVar23 + 0xa0) + auVar57._0_4_;
      auVar83._4_4_ = ((float)auVar82._10_2_ + 0.0) * *(float *)(lVar23 + 0xa4) + auVar57._4_4_;
      auVar83._8_4_ = ((float)auVar82._12_2_ + 0.0) * *(float *)(lVar23 + 0xa8) + auVar57._8_4_;
      auVar83._12_4_ = ((float)auVar82._14_2_ + 0.0) * *(float *)(lVar23 + 0xac) + auVar57._12_4_;
      auVar82 = auVar80;
      auVar57 = auVar83;
      if (bVar3 != 0) {
        uVar31 = (uint)bVar3;
        uVar45 = -(uint)(0x16a8300 << uVar31 < 0);
        uVar49 = -(uint)(0x502ab000 << uVar31 < 0);
        uVar53 = -(uint)(0xa2a8c00 << uVar31 < 0);
        uVar46 = -(uint)(0xa154c00 << uVar31 < 0);
        uVar50 = -(uint)(0x1554300 << uVar31 < 0);
        uVar54 = -(uint)(0x50157000 << uVar31 < 0);
        uVar30 = (ulonglong)uVar31;
        uVar21 = (uint)bVar3;
        uVar47 = -(uint)(0x16a8300 << uVar31 < 0);
        uVar51 = -(uint)(0x502ab000 << uVar31 < 0);
        uVar55 = -(uint)(0xa2a8c00 << uVar31 < 0);
        uVar31 = -(uint)(0 << uVar31 < 0);
        auVar64._0_4_ = ~uVar47 & (uint)auVar83._0_4_;
        auVar64._4_4_ = ~uVar51 & (uint)auVar83._4_4_;
        auVar64._8_4_ = ~uVar55 & (uint)auVar83._8_4_;
        auVar64._12_4_ = ~uVar31 & (uint)auVar83._12_4_;
        auVar57._0_4_ = (uint)auVar83._4_4_ & uVar47;
        auVar57._4_4_ = (uint)auVar83._8_4_ & uVar51;
        auVar57._8_4_ = (uint)auVar83._0_4_ & uVar55;
        auVar57._12_4_ = (uint)auVar83._12_4_ & uVar31;
        uVar27 = CONCAT44((0xb9e306U >> uVar30) << 0x1f ^
                          ((uint)auVar80._0_4_ & uVar50 |
                          ~uVar50 & ((uint)auVar80._8_4_ & uVar49 | ~uVar49 & (uint)auVar80._4_4_)),
                          (0xae71e0U >> uVar30) << 0x1f ^
                          ((uint)auVar80._8_4_ & uVar46 |
                          ~uVar46 & ((uint)auVar80._4_4_ & uVar45 | ~uVar45 & (uint)auVar80._0_4_)))
        ;
        uVar49 = (0xeb903cU >> uVar30) << 0x1f ^
                 ((uint)auVar80._4_4_ & uVar54 |
                 ~uVar54 & ((uint)auVar80._0_4_ & uVar53 | ~uVar53 & (uint)auVar80._8_4_));
        uVar50 = (0U >> uVar30) << 0x1f ^ (uint)auVar80._12_4_;
        auVar57 = auVar57 | auVar64;
        uVar31 = -(uint)(0xa154c00 << uVar21 < 0);
        uVar45 = -(uint)(0x1554300 << uVar21 < 0);
        uVar46 = -(uint)(0x50157000 << uVar21 < 0);
        uVar47 = -(uint)(0 << uVar21 < 0);
        auVar81._8_4_ = uVar49;
        auVar81._0_8_ = uVar27;
        auVar81._12_4_ = uVar50;
        uVar30 = (ulonglong)uVar21;
        auVar82._0_4_ =
             (0xae71e0U >> uVar30) << 0x1f ^
             ((uint)auVar83._8_4_ & uVar31 | ~uVar31 & auVar57._0_4_);
        auVar82._4_4_ =
             (0xb9e306U >> uVar30) << 0x1f ^
             ((uint)auVar83._0_4_ & uVar45 | ~uVar45 & auVar57._4_4_);
        auVar82._8_4_ =
             (0xeb903cU >> uVar30) << 0x1f ^
             ((uint)auVar83._4_4_ & uVar46 | ~uVar46 & auVar57._8_4_);
        auVar82._12_4_ =
             (0U >> uVar30) << 0x1f ^ ((uint)auVar83._12_4_ & uVar47 | ~uVar47 & auVar57._12_4_);
        auVar84._8_4_ = uVar49;
        auVar84._0_8_ = uVar27;
        auVar84._12_4_ = uVar50;
        auVar57 = maxps(auVar84,auVar82);
        auVar82 = minps(auVar81,auVar82);
        local_138 = auVar80;
        local_128 = auVar83;
      }
      auVar85._0_8_ =
           CONCAT44(*(float *)(local_1f0 + 0x54) + auVar57._4_4_,
                    *(float *)(local_1f0 + 0x50) + auVar57._0_4_);
      auVar85._8_4_ = *(float *)(local_1f0 + 0x58) + auVar57._8_4_;
      auVar85._12_4_ = *(float *)(local_1f0 + 0x5c) + auVar57._12_4_;
      fVar86 = *(float *)(local_1f0 + 0x50) + auVar82._0_4_;
      fVar87 = *(float *)(local_1f0 + 0x54) + auVar82._4_4_;
      fVar88 = *(float *)(local_1f0 + 0x58) + auVar82._8_4_;
      fVar89 = *(float *)(local_1f0 + 0x5c) + auVar82._12_4_;
      uVar31 = (uint)local_1e8;
      if ((iVar36 < 1) || (uVar21 = *(uint *)(*param_3 + local_208 * 4), uVar21 == 0xffffffff)) {
        auVar5._4_4_ = fVar87;
        auVar5._0_4_ = fVar86;
        auVar5._8_4_ = fVar88;
        auVar5._12_4_ = fVar89;
        auVar82 = maxps(auVar79,auVar5);
        auVar57 = minps(local_188,auVar85);
        auVar79 = minps(auVar82,auVar57);
        auVar82 = maxps(auVar82,auVar57);
        pauVar25 = local_1f8 + (longlong)iVar48 * 2;
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          *pauVar25 = auVar79;
          pauVar25[1] = auVar82;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        pauVar25 = local_1c8 + iVar39;
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          *(float *)*pauVar25 = (auVar79._0_4_ + auVar82._0_4_) * fVar37;
          *(float *)(*pauVar25 + 4) = (auVar79._4_4_ + auVar82._4_4_) * fVar40;
          *(float *)(*pauVar25 + 8) = (auVar79._8_4_ + auVar82._8_4_) * fVar42;
          *(float *)(*pauVar25 + 0xc) = (auVar79._12_4_ + auVar82._12_4_) * fVar35;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        if (local_1e0 + iVar43 != (uint *)0x0) {
          local_1e0[iVar43] = uVar31;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        if (local_1b8 + iVar41 != (undefined1 *)0x0) {
          local_1b8[iVar41] = 0;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        if (local_1d0 + iVar44 != (undefined4 *)0x0) {
          local_1d0[iVar44] = 0;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
      }
      else {
        lVar23 = *(longlong *)(uVar22 + 0x20);
        uVar21 = uVar21 & 0x3fffff;
        uVar30 = (ulonglong)uVar21;
        if ((int)uVar21 < *(int *)(lVar23 + 0x30)) {
          lVar14 = *(longlong *)(lVar23 + 0x28);
        }
        else {
          lVar14 = *(longlong *)(lVar23 + 0x60);
          uVar30 = (ulonglong)(int)(uVar21 - *(int *)(lVar23 + 0x30));
        }
        puVar2 = (ushort *)(lVar14 + uVar30 * 8);
        lVar23 = *(longlong *)(lVar23 + 0x38);
        uVar30 = (ulonglong)*puVar2;
        lVar14 = *(longlong *)(lVar23 + 0x38);
        fVar68 = (float)*(ushort *)(lVar14 + uVar30 * 0x18) * *(float *)(lVar23 + 0xa0) +
                 *(float *)(lVar23 + 0xb0);
        fVar72 = (float)*(ushort *)(lVar14 + 2 + uVar30 * 0x18) * *(float *)(lVar23 + 0xa4) +
                 *(float *)(lVar23 + 0xb4);
        fVar73 = (float)*(ushort *)(lVar14 + 4 + uVar30 * 0x18) * *(float *)(lVar23 + 0xa8) +
                 *(float *)(lVar23 + 0xb8);
        fVar74 = *(float *)(lVar23 + 0xac) * 0.0 + *(float *)(lVar23 + 0xbc);
        if (*(byte *)(uVar22 + 0x40) != 0) {
          uVar21 = (uint)*(byte *)(uVar22 + 0x40);
          uVar45 = -(uint)(0x16a8300 << uVar21 < 0);
          uVar46 = -(uint)(0x502ab000 << uVar21 < 0);
          uVar47 = -(uint)(0xa2a8c00 << uVar21 < 0);
          uVar49 = -(uint)(0 << uVar21 < 0);
          auVar65._0_4_ = ~uVar45 & (uint)fVar68;
          auVar65._4_4_ = ~uVar46 & (uint)fVar72;
          auVar65._8_4_ = ~uVar47 & (uint)fVar73;
          auVar65._12_4_ = ~uVar49 & (uint)fVar74;
          auVar58._0_4_ = (uint)fVar72 & uVar45;
          auVar58._4_4_ = (uint)fVar73 & uVar46;
          auVar58._8_4_ = (uint)fVar68 & uVar47;
          auVar58._12_4_ = (uint)fVar74 & uVar49;
          uVar45 = -(uint)(0xa154c00 << uVar21 < 0);
          uVar46 = -(uint)(0x1554300 << uVar21 < 0);
          uVar47 = -(uint)(0x50157000 << uVar21 < 0);
          uVar49 = -(uint)(0 << uVar21 < 0);
          auVar65 = auVar65 | auVar58;
          uVar50 = (uint)fVar68 & uVar46;
          uVar51 = (uint)fVar72 & uVar47;
          uVar28 = (ulonglong)uVar21;
          fVar68 = (float)((0xae71e0U >> uVar28) << 0x1f ^
                          (~uVar45 & auVar65._0_4_ | (uint)fVar73 & uVar45));
          fVar72 = (float)((0xb9e306U >> uVar28) << 0x1f ^ (~uVar46 & auVar65._4_4_ | uVar50));
          fVar73 = (float)((0xeb903cU >> uVar28) << 0x1f ^ (~uVar47 & auVar65._8_4_ | uVar51));
          fVar74 = (float)((0U >> uVar28) << 0x1f ^
                          (~uVar49 & auVar65._12_4_ | (uint)fVar74 & uVar49));
        }
        fVar68 = fVar68 + *(float *)(uVar22 + 0x50);
        fVar72 = fVar72 + *(float *)(uVar22 + 0x54);
        fVar73 = fVar73 + *(float *)(uVar22 + 0x58);
        fVar74 = fVar74 + *(float *)(uVar22 + 0x5c);
        lVar23 = (longlong)iVar39;
        iVar39 = iVar39 + 1;
        pauVar25 = local_1c8 + lVar23;
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          *(float *)*pauVar25 = fVar68;
          *(float *)(*pauVar25 + 4) = fVar72;
          *(float *)(*pauVar25 + 8) = fVar73;
          *(float *)(*pauVar25 + 0xc) = fVar74;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        lVar23 = (longlong)iVar48;
        iVar48 = iVar48 + 1;
        pauVar25 = local_1f8 + lVar23 * 2;
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          *(float *)*pauVar25 = fVar68;
          *(float *)(*pauVar25 + 4) = fVar72;
          *(float *)(*pauVar25 + 8) = fVar73;
          *(float *)(*pauVar25 + 0xc) = fVar74;
          *(float *)pauVar25[1] = fVar68;
          *(float *)(pauVar25[1] + 4) = fVar72;
          *(float *)(pauVar25[1] + 8) = fVar73;
          *(float *)(pauVar25[1] + 0xc) = fVar74;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        lVar23 = (longlong)iVar43;
        iVar43 = iVar43 + 1;
        if (local_1e0 + lVar23 != (uint *)0x0) {
          local_1e0[lVar23] = uVar31;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        lVar23 = (longlong)iVar41;
        iVar41 = iVar41 + 1;
        if (local_1b8 + lVar23 != (undefined1 *)0x0) {
          local_1b8[lVar23] = 1;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        lVar23 = *(longlong *)(*(longlong *)(uVar22 + 0x20) + 0x38);
        local_168 = *(longlong *)(lVar23 + 0x48);
        lVar23 = (longlong)(int)((uint)*puVar2 * *(int *)(lVar23 + 0xcc));
        local_138._0_8_ = lVar23;
        lVar18 = (longlong)iVar44;
        iVar44 = iVar44 + 1;
        if (local_1d0 + lVar18 != (undefined4 *)0x0) {
          local_1d0[lVar18] = *(undefined4 *)(local_168 + lVar23 * 4);
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        lVar23 = *(longlong *)(*(longlong *)(local_1f0 + 0x20) + 0x38);
        fVar68 = (float)*(ushort *)(lVar14 + 8 + uVar30 * 0x18) * *(float *)(lVar23 + 0xa0) +
                 *(float *)(lVar23 + 0xb0);
        fVar72 = (float)*(ushort *)(lVar14 + 10 + uVar30 * 0x18) * *(float *)(lVar23 + 0xa4) +
                 *(float *)(lVar23 + 0xb4);
        fVar73 = (float)*(ushort *)(lVar14 + 0xc + uVar30 * 0x18) * *(float *)(lVar23 + 0xa8) +
                 *(float *)(lVar23 + 0xb8);
        fVar74 = *(float *)(lVar23 + 0xac) * 0.0 + *(float *)(lVar23 + 0xbc);
        if (*(byte *)(local_1f0 + 0x40) != 0) {
          uVar21 = (uint)*(byte *)(local_1f0 + 0x40);
          uVar45 = -(uint)(0x16a8300 << uVar21 < 0);
          uVar46 = -(uint)(0x502ab000 << uVar21 < 0);
          uVar47 = -(uint)(0xa2a8c00 << uVar21 < 0);
          uVar49 = -(uint)(0 << uVar21 < 0);
          auVar66._0_4_ = ~uVar45 & (uint)fVar68;
          auVar66._4_4_ = ~uVar46 & (uint)fVar72;
          auVar66._8_4_ = ~uVar47 & (uint)fVar73;
          auVar66._12_4_ = ~uVar49 & (uint)fVar74;
          auVar59._0_4_ = (uint)fVar72 & uVar45;
          auVar59._4_4_ = (uint)fVar73 & uVar46;
          auVar59._8_4_ = (uint)fVar68 & uVar47;
          auVar59._12_4_ = (uint)fVar74 & uVar49;
          uVar45 = -(uint)(0xa154c00 << uVar21 < 0);
          uVar46 = -(uint)(0x1554300 << uVar21 < 0);
          uVar47 = -(uint)(0x50157000 << uVar21 < 0);
          uVar49 = -(uint)(0 << uVar21 < 0);
          auVar66 = auVar66 | auVar59;
          auVar69._0_4_ = (uint)fVar73 & uVar45;
          auVar69._4_4_ = (uint)fVar68 & uVar46;
          auVar69._8_4_ = (uint)fVar72 & uVar47;
          auVar69._12_4_ = (uint)fVar74 & uVar49;
          auVar38._0_4_ = ~uVar45 & auVar66._0_4_;
          auVar38._4_4_ = ~uVar46 & auVar66._4_4_;
          auVar38._8_4_ = ~uVar47 & auVar66._8_4_;
          auVar38._12_4_ = ~uVar49 & auVar66._12_4_;
          auVar38 = auVar38 | auVar69;
          uVar30 = (ulonglong)uVar21;
          fVar68 = (float)((0xae71e0U >> uVar30) << 0x1f ^ auVar38._0_4_);
          fVar72 = (float)((0xb9e306U >> uVar30) << 0x1f ^ auVar38._4_4_);
          fVar73 = (float)((0xeb903cU >> uVar30) << 0x1f ^ auVar38._8_4_);
          fVar74 = (float)((0U >> uVar30) << 0x1f ^ auVar38._12_4_);
        }
        auVar70._0_4_ = fVar68 + *(float *)(local_1f0 + 0x50);
        auVar70._4_4_ = fVar72 + *(float *)(local_1f0 + 0x54);
        auVar70._8_4_ = fVar73 + *(float *)(local_1f0 + 0x58);
        auVar70._12_4_ = fVar74 + *(float *)(local_1f0 + 0x5c);
        if (local_1c8 + iVar39 != (undefined1 (*) [16])0x0) {
          local_1c8[iVar39] = auVar70;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        pauVar25 = local_1f8 + (longlong)iVar48 * 2;
        if (pauVar25 != (undefined1 (*) [16])0x0) {
          *pauVar25 = auVar70;
          pauVar25[1] = auVar70;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        if (local_1e0 + iVar43 != (uint *)0x0) {
          local_1e0[iVar43] = uVar31;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        if (local_1b8 + iVar41 != (undefined1 *)0x0) {
          local_1b8[iVar41] = 2;
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
        lVar23 = *(longlong *)(*(longlong *)(uVar22 + 0x20) + 0x38);
        if (local_1d0 + iVar44 != (undefined4 *)0x0) {
          local_1d0[iVar44] =
               *(undefined4 *)
                (*(longlong *)(lVar23 + 0x48) +
                (longlong)(int)((uint)*puVar2 * *(int *)(lVar23 + 0xcc)) * 4);
          fVar37 = _DAT_14c6dad90;
          fVar40 = fRam000000014c6dad94;
          fVar42 = fRam000000014c6dad98;
          fVar35 = fRam000000014c6dad9c;
        }
      }
      iVar39 = iVar39 + 1;
      iVar43 = iVar43 + 1;
      iVar41 = iVar41 + 1;
      local_1e8 = CONCAT44(local_1e8._4_4_,uVar24);
      local_208 = local_208 + 1;
      iVar44 = iVar44 + 1;
      uVar30 = (ulonglong)(iVar48 + 1);
      auVar79._4_4_ = fVar87;
      auVar79._0_4_ = fVar86;
      auVar79._8_4_ = fVar88;
      auVar79._12_4_ = fVar89;
      local_188._8_4_ = auVar85._8_4_;
      local_188._0_8_ = auVar85._0_8_;
      local_188._12_4_ = auVar85._12_4_;
      uVar22 = local_1f0;
    } while ((longlong)local_208 < (longlong)local_200);
  }
  pauVar25 = local_1c8 + iVar39;
  if (pauVar25 != (undefined1 (*) [16])0x0) {
    uVar9 = param_6[1];
    uVar10 = param_6[2];
    uVar11 = param_6[3];
    *(undefined4 *)*pauVar25 = *param_6;
    *(undefined4 *)(*pauVar25 + 4) = uVar9;
    *(undefined4 *)(*pauVar25 + 8) = uVar10;
    *(undefined4 *)(*pauVar25 + 0xc) = uVar11;
    fVar37 = _DAT_14c6dad90;
    fVar40 = fRam000000014c6dad94;
    fVar42 = fRam000000014c6dad98;
    fVar35 = fRam000000014c6dad9c;
  }
  if ((int)param_2[1] == 0) {
    puVar19 = local_res20;
  }
  else {
    puVar19 = (uint *)(*param_2 + (longlong)(int)param_2[1] * 4 + -4);
  }
  if (local_1e0 + iVar43 != (uint *)0x0) {
    local_1e0[iVar43] = *puVar19 >> 0x16;
    fVar37 = _DAT_14c6dad90;
    fVar40 = fRam000000014c6dad94;
    fVar42 = fRam000000014c6dad98;
    fVar35 = fRam000000014c6dad9c;
  }
  if (local_1b8 + iVar41 != (undefined1 *)0x0) {
    local_1b8[iVar41] = 0;
    fVar37 = _DAT_14c6dad90;
    fVar40 = fRam000000014c6dad94;
    fVar42 = fRam000000014c6dad98;
    fVar35 = fRam000000014c6dad9c;
  }
  lVar23 = 0;
  if (local_1d0 + iVar44 != (undefined4 *)0x0) {
    local_1d0[iVar44] = 0;
    fVar37 = _DAT_14c6dad90;
    fVar40 = fRam000000014c6dad94;
    fVar42 = fRam000000014c6dad98;
    fVar35 = fRam000000014c6dad9c;
  }
  lVar14 = 3;
  do {
    if (1 < iVar39) {
      pauVar25 = local_1c8 + 2;
      uVar30 = (ulonglong)(iVar39 - 1);
      pauVar29 = local_1f8;
      do {
        auVar79 = pauVar29[1];
        auVar82 = *pauVar29;
        fVar86 = *(float *)pauVar25[-2];
        fVar87 = *(float *)(pauVar25[-2] + 4);
        fVar88 = *(float *)(pauVar25[-2] + 8);
        fVar89 = ABS(auVar79._0_4_ - auVar82._0_4_);
        fVar68 = ABS(auVar79._4_4_ - auVar82._4_4_);
        fVar72 = ABS(auVar79._8_4_ - auVar82._8_4_);
        uVar31 = -(uint)(fVar68 < fVar89);
        uVar24 = -(uint)(fVar68 < fVar89);
        uVar21 = -(uint)(fVar68 < fVar89);
        uVar45 = -(uint)(fVar68 < fVar89);
        auVar60._0_4_ = uVar31 & _DAT_14c6dae50;
        auVar60._4_4_ = uVar24 & uRam000000014c6dae54;
        auVar60._8_4_ = uVar21 & uRam000000014c6dae58;
        auVar60._12_4_ = uVar45 & uRam000000014c6dae5c;
        auVar67._0_4_ = ~uVar31 & _DAT_14c6dae40;
        auVar67._4_4_ = ~uVar24 & uRam000000014c6dae44;
        auVar67._8_4_ = ~uVar21 & uRam000000014c6dae48;
        auVar67._12_4_ = ~uVar45 & uRam000000014c6dae4c;
        auVar32._0_4_ = ~uVar31 & (uint)fVar89;
        auVar32._4_4_ = ~uVar24 & (uint)fVar89;
        auVar32._8_4_ = ~uVar21 & (uint)fVar89;
        auVar32._12_4_ = ~uVar45 & (uint)fVar89;
        auVar71._0_4_ = uVar31 & (uint)fVar68;
        auVar71._4_4_ = uVar24 & (uint)fVar68;
        auVar71._8_4_ = uVar21 & (uint)fVar68;
        auVar71._12_4_ = uVar45 & (uint)fVar68;
        auVar60 = auVar60 | auVar67;
        auVar71 = auVar71 | auVar32;
        uVar31 = -(uint)(fVar72 < auVar71._0_4_);
        uVar24 = -(uint)(fVar72 < auVar71._4_4_);
        uVar21 = -(uint)(fVar72 < auVar71._8_4_);
        uVar45 = -(uint)(fVar72 < auVar71._12_4_);
        auVar76._0_4_ = uVar31 & _DAT_14c6dae60;
        auVar76._4_4_ = uVar24 & uRam000000014c6dae64;
        auVar76._8_4_ = uVar21 & uRam000000014c6dae68;
        auVar76._12_4_ = uVar45 & uRam000000014c6dae6c;
        auVar33._0_4_ = ~uVar31 & auVar60._0_4_;
        auVar33._4_4_ = ~uVar24 & auVar60._4_4_;
        auVar33._8_4_ = ~uVar21 & auVar60._8_4_;
        auVar33._12_4_ = ~uVar45 & auVar60._12_4_;
        auVar76 = auVar76 | auVar33;
        fVar75 = auVar76._0_4_;
        fVar77 = auVar76._4_4_;
        fVar78 = auVar76._8_4_;
        fVar89 = 0.0 - ((auVar79._8_4_ + auVar82._8_4_) * fVar42 * fVar78 +
                       (auVar79._4_4_ + auVar82._4_4_) * fVar40 * fVar77 +
                       (auVar79._0_4_ + auVar82._0_4_) * fVar37 * fVar75);
        fVar68 = *(float *)*pauVar25 - fVar86;
        fVar72 = *(float *)(*pauVar25 + 4) - fVar87;
        fVar73 = *(float *)(*pauVar25 + 8) - fVar88;
        fVar74 = fVar75 * fVar68;
        fVar62 = fVar77 * fVar72;
        fVar63 = fVar78 * fVar73;
        auVar61._0_4_ = fVar63 + fVar62 + fVar74;
        auVar61._4_4_ = fVar63 + fVar62 + fVar74;
        auVar61._8_4_ = fVar63 + fVar62 + fVar74;
        auVar61._12_4_ = fVar63 + fVar62 + fVar74;
        if (_DAT_14c6daea0 <= ABS(auVar61._0_4_)) {
          fVar37 = fVar75 * fVar86 + fVar77 * fVar87;
          fVar40 = fVar77 * fVar87 + fVar75 * fVar86;
          fVar42 = fVar78 * fVar88 + fVar89;
          fVar89 = fVar89 + fVar78 * fVar88;
          auVar34._0_4_ = 0.0 - (fVar37 + fVar42);
          auVar34._4_4_ = 0.0 - (fVar40 + fVar89);
          auVar34._8_4_ = 0.0 - (fVar42 + fVar37);
          auVar34._12_4_ = 0.0 - (fVar89 + fVar40);
          auVar57 = divps(auVar34,auVar61);
          fVar37 = auVar57._0_4_;
          fVar40 = auVar57._4_4_;
          fVar42 = auVar57._8_4_;
          fVar35 = auVar57._12_4_;
        }
        auVar4._4_4_ = fVar87 + fVar72 * fVar40;
        auVar4._0_4_ = fVar86 + fVar68 * fVar37;
        auVar4._8_4_ = fVar88 + fVar73 * fVar42;
        auVar4._12_4_ =
             *(float *)(pauVar25[-2] + 0xc) +
             (*(float *)(*pauVar25 + 0xc) - *(float *)(pauVar25[-2] + 0xc)) * fVar35;
        auVar79 = minps(auVar79,auVar4);
        pauVar29 = pauVar29 + 2;
        auVar79 = maxps(auVar82,auVar79);
        pauVar25[-1] = auVar79;
        pauVar25 = pauVar25 + 1;
        uVar30 = uVar30 - 1;
        fVar37 = _DAT_14c6dad90;
        fVar40 = fRam000000014c6dad94;
        fVar42 = fRam000000014c6dad98;
        fVar35 = fRam000000014c6dad9c;
      } while (uVar30 != 0);
    }
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  FUN_14531be30(local_118);
  FUN_14531be40(local_118,param_7,param_8,param_9);
  puVar17 = local_1b8;
  lVar14 = (longlong)(int)local_1b0;
  pauVar25 = pauVar15;
  puVar19 = puVar16;
  if (0 < lVar14) {
    puVar26 = puVar13;
    do {
      local_138 = *pauVar15;
      local_res20[0] = *(uint *)(((longlong)puVar16 - (longlong)puVar13) + (longlong)puVar26);
      local_198 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      FUN_14531be60(local_118,local_138,&local_198,local_res20,*puVar26,puVar17[lVar23]);
      lVar23 = lVar23 + 1;
      pauVar15 = pauVar15 + 1;
      puVar26 = puVar26 + 1;
      pauVar25 = local_1c8;
      puVar19 = local_1e0;
    } while (lVar23 < lVar14);
  }
  uVar27 = 0;
  FUN_14531bf90(local_118);
  uVar30 = local_1d8;
  if ((local_118[0] != 0) || (local_104 < local_108)) {
    uVar27 = 1;
  }
  if (local_160 == 0) {
    (*DAT_14c787678)(1,puVar13,local_1d8 * 4);
  }
  else {
    uVar22 = local_1d8 * 4 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_160 + 0x28) < uVar22) ||
       ((longlong)puVar13 + uVar22 != *(longlong *)(local_160 + 0x38))) {
      FUN_144be8550(local_160,puVar13);
    }
    else {
      *(undefined4 **)(local_160 + 0x38) = puVar13;
      if (*(undefined4 **)(local_160 + 0x48) == puVar13) {
        FUN_144be8430();
      }
    }
  }
  if (local_158 == 0) {
    (*DAT_14c787678)(1,puVar17,local_1d8);
  }
  else {
    uVar22 = local_1d8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_158 + 0x28) < uVar22) ||
       (puVar17 + uVar22 != *(undefined1 **)(local_158 + 0x38))) {
      FUN_144be8550(local_158,puVar17);
    }
    else {
      *(undefined1 **)(local_158 + 0x38) = puVar17;
      if (*(undefined1 **)(local_158 + 0x48) == puVar17) {
        FUN_144be8430();
      }
    }
  }
  if (local_150 == 0) {
    (*DAT_14c787678)(1,local_1f8);
  }
  else {
    uVar22 = local_1c0 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_150 + 0x28) < uVar22) ||
       (*local_1f8 + uVar22 != *(undefined1 **)(local_150 + 0x38))) {
      FUN_144be8550(local_150,local_1f8);
    }
    else {
      *(undefined1 (**) [16])(local_150 + 0x38) = local_1f8;
      if (*(undefined1 (**) [16])(local_150 + 0x48) == local_1f8) {
        FUN_144be8430(local_150);
      }
    }
  }
  if (local_148 == 0) {
    (*DAT_14c787678)(1,puVar19,uVar30 * 4);
  }
  else {
    uVar30 = uVar30 * 4 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_148 + 0x28) < uVar30) ||
       (uVar30 + (longlong)puVar19 != *(longlong *)(local_148 + 0x38))) {
      FUN_144be8550(local_148,puVar19);
    }
    else {
      *(uint **)(local_148 + 0x38) = puVar19;
      if (*(uint **)(local_148 + 0x48) == puVar19) {
        FUN_144be8430();
      }
    }
  }
  if (local_140 == 0) {
    (*DAT_14c787678)(1,pauVar25);
  }
  else {
    uVar30 = local_1a8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_140 + 0x28) < uVar30) ||
       (*pauVar25 + uVar30 != *(undefined1 **)(local_140 + 0x38))) {
      FUN_144be8550(local_140,pauVar25);
      return uVar27;
    }
    *(undefined1 (**) [16])(local_140 + 0x38) = pauVar25;
    if (*(undefined1 (**) [16])(local_140 + 0x48) == pauVar25) {
      FUN_144be8430();
      return uVar27;
    }
  }
  return uVar27;
}



// FUNCTION 144fc4b10 FUN_144fc4b10 body=384 status=ok
// SIG undefined FUN_144fc4b10(void)

void FUN_144fc4b10(longlong param_1,int param_2,undefined1 (*param_3) [16])

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [14];
  ulonglong uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38);
  fVar8 = *(float *)(lVar1 + 0xa0);
  fVar9 = *(float *)(lVar1 + 0xa4);
  fVar10 = *(float *)(lVar1 + 0xa8);
  fVar11 = *(float *)(lVar1 + 0xac);
  fVar12 = *(float *)(lVar1 + 0xb0);
  fVar13 = *(float *)(lVar1 + 0xb4);
  fVar14 = *(float *)(lVar1 + 0xb8);
  fVar15 = *(float *)(lVar1 + 0xbc);
  auVar22 = *(undefined1 (*) [16])
             (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) + (longlong)param_2 * 0x18);
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar22._0_10_;
  auVar5._12_2_ = auVar22._6_2_;
  auVar6._8_2_ = auVar22._4_2_;
  auVar6._0_8_ = auVar22._0_8_;
  auVar6._10_4_ = auVar5._10_4_;
  auVar16._6_8_ = 0;
  auVar16._0_6_ = auVar6._8_6_;
  auVar7._4_2_ = auVar22._2_2_;
  auVar7._0_4_ = auVar22._0_4_;
  auVar7._6_8_ = SUB148(auVar16 << 0x40,6);
  auVar30._0_4_ = ((float)(auVar22._0_4_ & 0xffff) + 0.0) * fVar8 + fVar12;
  auVar30._4_4_ = ((float)auVar7._4_4_ + 0.0) * fVar9 + fVar13;
  auVar30._8_4_ =
       ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) * fVar10 + fVar14;
  auVar30._12_4_ = ((float)(auVar5._10_4_ >> 0x10) + 0.0) * fVar11 + fVar15;
  *param_3 = auVar30;
  auVar32._0_4_ = ((float)auVar22._8_2_ + 0.0) * fVar8 + fVar12;
  auVar32._4_4_ = ((float)auVar22._10_2_ + 0.0) * fVar9 + fVar13;
  auVar32._8_4_ = ((float)auVar22._12_2_ + 0.0) * fVar10 + fVar14;
  auVar32._12_4_ = ((float)auVar22._14_2_ + 0.0) * fVar11 + fVar15;
  param_3[1] = auVar32;
  if (*(byte *)(param_1 + 0x40) != 0) {
    uVar19 = (uint)*(byte *)(param_1 + 0x40);
    uVar26 = -(uint)(0x16a8300 << uVar19 < 0);
    uVar27 = -(uint)(0x502ab000 << uVar19 < 0);
    uVar28 = -(uint)(0xa2a8c00 << uVar19 < 0);
    uVar2 = -(uint)(0xa154c00 << uVar19 < 0);
    uVar3 = -(uint)(0x1554300 << uVar19 < 0);
    uVar4 = -(uint)(0x50157000 << uVar19 < 0);
    uVar17 = (ulonglong)uVar19;
    uVar21 = (0xae71e0U >> uVar17) << 0x1f;
    uVar23 = (0xb9e306U >> uVar17) << 0x1f;
    uVar24 = (0xeb903cU >> uVar17) << 0x1f;
    uVar25 = (0U >> uVar17) << 0x1f;
    uVar18 = CONCAT44(uVar23 ^ (~uVar3 & ((uint)auVar30._8_4_ & uVar27 |
                                         ~uVar27 & (uint)auVar30._4_4_) |
                               (uint)auVar30._0_4_ & uVar3),
                      uVar21 ^ (~uVar2 & ((uint)auVar30._4_4_ & uVar26 |
                                         ~uVar26 & (uint)auVar30._0_4_) |
                               (uint)auVar30._8_4_ & uVar2));
    uVar19 = uVar24 ^ (~uVar4 & ((uint)auVar30._0_4_ & uVar28 | ~uVar28 & (uint)auVar30._8_4_) |
                      (uint)auVar30._4_4_ & uVar4);
    uVar20 = uVar25 ^ (uint)auVar30._12_4_;
    auVar29._8_4_ = uVar19;
    auVar29._0_8_ = uVar18;
    auVar29._12_4_ = uVar20;
    auVar31._8_4_ = uVar19;
    auVar31._0_8_ = uVar18;
    auVar31._12_4_ = uVar20;
    auVar22._0_4_ =
         uVar21 ^ (~uVar2 & ((uint)auVar32._4_4_ & uVar26 | ~uVar26 & (uint)auVar32._0_4_) |
                  (uint)auVar32._8_4_ & uVar2);
    auVar22._4_4_ =
         uVar23 ^ (~uVar3 & ((uint)auVar32._8_4_ & uVar27 | ~uVar27 & (uint)auVar32._4_4_) |
                  (uint)auVar32._0_4_ & uVar3);
    auVar22._8_4_ =
         uVar24 ^ (~uVar4 & ((uint)auVar32._0_4_ & uVar28 | ~uVar28 & (uint)auVar32._8_4_) |
                  (uint)auVar32._4_4_ & uVar4);
    auVar22._12_4_ = uVar25 ^ (uint)auVar32._12_4_;
    auVar30 = minps(auVar29,auVar22);
    auVar32 = maxps(auVar31,auVar22);
    *param_3 = auVar30;
    param_3[1] = auVar32;
  }
  fVar8 = *(float *)(param_1 + 0x54);
  fVar9 = *(float *)(param_1 + 0x58);
  fVar10 = *(float *)(param_1 + 0x5c);
  *(float *)*param_3 = auVar30._0_4_ + *(float *)(param_1 + 0x50);
  *(float *)(*param_3 + 4) = auVar30._4_4_ + fVar8;
  *(float *)(*param_3 + 8) = auVar30._8_4_ + fVar9;
  *(float *)(*param_3 + 0xc) = auVar30._12_4_ + fVar10;
  fVar8 = *(float *)(param_1 + 0x54);
  fVar9 = *(float *)(param_1 + 0x58);
  fVar10 = *(float *)(param_1 + 0x5c);
  *(float *)param_3[1] = auVar32._0_4_ + *(float *)(param_1 + 0x50);
  *(float *)(param_3[1] + 4) = auVar32._4_4_ + fVar8;
  *(float *)(param_3[1] + 8) = auVar32._8_4_ + fVar9;
  *(float *)(param_3[1] + 0xc) = auVar32._12_4_ + fVar10;
  return;
}



// FUNCTION 144fc4c90 FUN_144fc4c90 body=3323 status=ok
// SIG undefined FUN_144fc4c90(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144fc4c90(longlong param_1,undefined1 (*param_2) [16],longlong *param_3,char param_4,
             int *param_5,float *param_6)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  char cVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 (*pauVar19) [16];
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  int iVar27;
  uint uVar28;
  undefined *puVar29;
  ulonglong uVar30;
  int iVar31;
  uint uVar39;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar60;
  float fVar61;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar67;
  undefined8 uVar68;
  float fVar71;
  uint uVar72;
  float fVar73;
  uint uVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  uint uVar75;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  undefined1 auVar76 [16];
  uint uVar80;
  uint uVar81;
  uint uVar82;
  float fVar83;
  float fVar90;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar91;
  float fVar95;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  int local_res10;
  undefined8 local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  undefined2 local_2d4;
  ushort local_2d2;
  undefined4 local_2d0;
  ushort local_2cc;
  uint local_2c8;
  undefined4 local_2c4;
  longlong local_2c0;
  uint local_2b8;
  uint local_2b4 [5];
  undefined4 local_2a0;
  undefined2 uStack_29c;
  ushort uStack_29a;
  undefined2 uStack_298;
  ushort uStack_296;
  ushort uStack_294;
  ushort uStack_292;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_278;
  longlong local_268;
  undefined1 (*local_260) [16];
  uint *local_258;
  undefined1 local_250;
  uint local_248 [2];
  undefined4 *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  uint local_208;
  undefined4 *local_200;
  undefined1 local_1f8 [8];
  float fStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  uint local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  longlong local_158;
  undefined1 (*local_150) [16];
  uint *local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [176];
  
  FUN_144be90e0(0xd27d5388);
  fVar103 = 0.0;
  fVar104 = 0.0;
  fVar105 = 0.0;
  fVar106 = 0.0;
  fVar52 = *(float *)*param_2 - *(float *)param_2[1];
  fVar60 = *(float *)(*param_2 + 4) - *(float *)(param_2[1] + 4);
  fVar64 = *(float *)(*param_2 + 8) - *(float *)(param_2[1] + 8);
  iVar24 = 0;
  local_res10 = 0;
  fVar52 = fVar52 * fVar52;
  fVar60 = fVar60 * fVar60;
  fVar64 = fVar64 * fVar64;
  auVar84._0_4_ = fVar60 + fVar52 + fVar64;
  auVar84._4_4_ = fVar60 + fVar52 + fVar64;
  auVar84._8_4_ = fVar60 + fVar52 + fVar64;
  auVar84._12_4_ = fVar60 + fVar52 + fVar64;
  auVar84 = sqrtps(unaff_XMM6,auVar84);
  if ((*(int *)param_2[2] == -1) || (*(int *)(param_2[2] + 4) == -1)) goto LAB_144fc4fbf;
  lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar20 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar18 = *(longlong *)(lVar20 + 0xf0);
  if (lVar18 == 0) {
    if (*(char *)(lVar20 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar18 = FUN_144b3f4a0();
    *(longlong *)(lVar20 + 0xf0) = lVar18;
  }
  local_2c0 = *(longlong *)(lVar18 + 0x3e0);
  if (local_2c0 != 0) {
    local_2e8 = "TtlosCheck";
    local_2e0 = "";
    FUN_144b3f370(local_2c0,&local_2e8);
  }
  local_248[0] = *(uint *)param_2[2];
  local_1b8 = 0;
  uStack_1b0 = 0;
  uVar30 = (ulonglong)(local_248[0] & 0x3fffff);
  puVar29 = (undefined *)(ulonglong)(local_248[0] >> 0x16);
  local_168 = _DAT_14c6dae80 ^ 0x80000000;
  uStack_164 = uRam000000014c6dae84 ^ 0x80000000;
  uStack_160 = uRam000000014c6dae88 ^ 0x80000000;
  uStack_15c = uRam000000014c6dae8c ^ 0x80000000;
  local_208 = 0xffffffff;
  local_200 = (undefined4 *)0x0;
  local_1c8 = 0xffffffff;
  local_1c0 = (undefined8 *)0x0;
  local_1a8 = 0;
  local_178 = _DAT_14c6dae80;
  uStack_174 = uRam000000014c6dae84;
  uStack_170 = uRam000000014c6dae88;
  uStack_16c = uRam000000014c6dae8c;
  lVar20 = *(longlong *)((longlong)puVar29 * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
  lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x20) + 0x18);
  local_2d8 = *(undefined4 *)(lVar18 + uVar30 * 0x18);
  local_2d4 = *(undefined2 *)(lVar18 + 4 + uVar30 * 0x18);
  local_2d2 = *(ushort *)(lVar18 + 6 + uVar30 * 0x18);
  local_2d0 = *(undefined4 *)(lVar18 + 8 + uVar30 * 0x18);
  local_2cc = *(ushort *)(lVar18 + 0xc + uVar30 * 0x18);
  local_2c8 = *(uint *)(lVar18 + 0x10 + uVar30 * 0x18);
  local_2c4 = *(undefined4 *)(lVar18 + 0x14 + uVar30 * 0x18);
  lVar18 = *(longlong *)(lVar20 + 0x20);
  if ((*(int *)(lVar18 + 0x48) == 0) ||
     (iVar24 = *(int *)(*(longlong *)(lVar18 + 0x40) + uVar30 * 4), iVar24 == -1)) {
    uVar30 = 0xffffffff;
    iVar31 = 0;
  }
  else {
    uVar4 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + (longlong)iVar24 * 8);
    uVar30 = uVar4 & 0xffffffff;
    local_278._4_4_ = (int)(uVar4 >> 0x20);
    iVar31 = local_278._4_4_;
    local_278 = uVar4;
  }
  local_238 = *(undefined8 *)*param_2;
  uStack_230 = *(undefined8 *)(*param_2 + 8);
  local_240 = &local_2d8;
  local_2e8 = puVar29;
  FUN_144fc5990(lVar20,&local_2d8,&local_228);
  uVar21 = *(uint *)(param_2[2] + 4);
  uVar17 = *(uint *)param_2[2];
  if (uVar17 == uVar21) {
    plVar5 = *(longlong **)(param_2[4] + 8);
    if ((plVar5 == (longlong *)0x0) && (*(longlong *)param_2[4] == 0)) {
LAB_144fc50b8:
      fVar103 = auVar84._0_4_;
      fVar104 = auVar84._4_4_;
      fVar105 = auVar84._8_4_;
      fVar106 = auVar84._12_4_;
      goto LAB_144fc50bc;
    }
    _local_1f8 = param_2[1];
    pauVar19 = param_2 + 3;
    local_290 = local_248;
    local_208 = local_248[0];
    local_1e8._8_8_ = uStack_220;
    local_1e8._0_8_ = local_228;
    local_200 = local_240;
    local_1d8._8_8_ = uStack_210;
    local_1d8._0_8_ = local_218;
    local_1c8 = 0xffffffff;
    local_1c0 = (undefined8 *)0x0;
    local_2a0._0_2_ = (undefined2)param_1;
    local_2a0._2_2_ = (undefined2)((ulonglong)param_1 >> 0x10);
    uStack_29c = (undefined2)((ulonglong)param_1 >> 0x20);
    uStack_29a = (ushort)((ulonglong)param_1 >> 0x30);
    uStack_298 = SUB82(pauVar19,0);
    uStack_296 = (ushort)((ulonglong)pauVar19 >> 0x10);
    uStack_294 = (ushort)((ulonglong)pauVar19 >> 0x20);
    uStack_292 = (ushort)((ulonglong)pauVar19 >> 0x30);
    local_288 = 0x52;
    if (plVar5 == (longlong *)0x0) {
LAB_144fc504f:
      plVar5 = *(longlong **)param_2[4];
      puVar29 = local_2e8;
      if (plVar5 != (longlong *)0x0) {
        local_148 = local_248;
        local_140 = 0x52;
        local_138 = 0;
        uStack_130 = 0;
        local_118 = ZEXT816(0);
        local_158 = param_1;
        local_150 = pauVar19;
        local_128 = auVar84;
        pauVar19 = (undefined1 (*) [16])(**(code **)(*plVar5 + 0x20))(plVar5,&local_278,&local_158);
        uVar21 = *(uint *)(param_2[2] + 4);
        uVar17 = *(uint *)param_2[2];
        auVar84 = *pauVar19;
        puVar29 = local_2e8;
      }
      goto LAB_144fc50b8;
    }
    cVar16 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_2a0);
    iVar24 = local_res10;
    if (cVar16 != '\0') {
      uVar21 = *(uint *)(param_2[2] + 4);
      uVar17 = *(uint *)param_2[2];
      goto LAB_144fc504f;
    }
  }
  else {
LAB_144fc50bc:
    auVar102._4_4_ = uRam000000014c6daca4;
    auVar102._0_4_ = _DAT_14c6daca0;
    auVar102._8_4_ = uRam000000014c6daca8;
    auVar102._12_4_ = fRam000000014c6dacac;
    auVar33 = *param_2;
    fVar52 = *(float *)param_2[1];
    fVar60 = *(float *)(param_2[1] + 4);
    fVar64 = *(float *)(param_2[1] + 8);
    fVar11 = *(float *)(param_2[1] + 0xc);
    fVar53 = auVar33._0_4_ - fVar52;
    fVar61 = auVar33._4_4_ - fVar60;
    fVar65 = auVar33._8_4_ - fVar64;
    auVar42._0_4_ = (float)(~-(uint)(fVar53 == 0.0) & (uint)fVar53);
    auVar42._4_4_ = (float)(~-(uint)(fVar61 == 0.0) & (uint)fVar61);
    auVar42._8_4_ = (float)(~-(uint)(fVar65 == 0.0) & (uint)fVar65);
    auVar42._12_4_ = (float)(~-(uint)(fRam000000014c6dacac == 0.0) & (uint)fRam000000014c6dacac);
    auVar84 = divps(auVar102,auVar42);
    fVar53 = (float)(~-(uint)(auVar42._0_4_ == 0.0) & auVar84._0_4_ |
                    -(uint)(auVar42._0_4_ == 0.0) & 0x7f7fffee);
    fVar61 = (float)(~-(uint)(auVar42._4_4_ == 0.0) & auVar84._4_4_ |
                    -(uint)(auVar42._4_4_ == 0.0) & 0x7f7fffee);
    fVar65 = (float)(~-(uint)(auVar42._8_4_ == 0.0) & auVar84._8_4_ |
                    -(uint)(auVar42._8_4_ == 0.0) & 0x7f7fffee);
    fVar98 = (float)(~-(uint)(auVar42._12_4_ == 0.0) & auVar84._12_4_ |
                    -(uint)(auVar42._12_4_ == 0.0) & 0x7f7fffee);
    if (uVar17 != uVar21) {
      fVar54 = (float)local_238;
      fVar63 = local_238._4_4_;
      fVar66 = (float)uStack_230;
      uVar99 = _DAT_14c6daca0;
      uVar100 = uRam000000014c6daca4;
      uVar101 = uRam000000014c6daca8;
      fVar97 = fRam000000014c6dacac;
      uVar21 = 0xffffffff;
LAB_144fc5130:
      uVar23 = uVar17;
      iVar24 = local_res10;
      if (local_res10 < *(int *)(param_2[2] + 8)) {
        local_res10 = local_res10 + 1;
        iVar27 = 0;
        auVar102 = minps(auVar33,param_2[1]);
        local_2b4[1] = (int)uVar30;
        local_2b4[3] = 0;
        auVar84 = maxps(auVar33,param_2[1]);
        local_278 = *(ulonglong *)
                     (((ulonglong)puVar29 & 0xffffffff) * 0x120 + 8 + *(longlong *)(param_1 + 0x38))
        ;
        local_2b4[0] = (int)(short)local_2d2 + local_2c8;
        local_2b4[2] = iVar31 + (int)uVar30;
        local_2b4[4] = local_2c8;
        local_2b8 = local_2c8;
        iVar24 = local_res10;
        if (local_2c8 == (int)(short)local_2d2 + local_2c8) {
          do {
            lVar20 = (longlong)iVar27;
            lVar18 = (longlong)iVar27;
            iVar27 = iVar27 + 1;
            local_2b4[3] = iVar27;
            if (iVar27 == 2) goto joined_r0x000144fc5980;
            local_2b4[4] = local_2b4[lVar20 * 2 + 1];
          } while (local_2b4[4] == local_2b4[lVar18 * 2 + 2]);
          if (1 < iVar27) goto joined_r0x000144fc5980;
        }
        uVar17 = local_2b4[4];
        uVar28 = local_2b4[3];
        do {
          local_2b4[4] = uVar17 + 1;
          if (local_2b4[4] == local_2b4[(longlong)(int)uVar28 * 2]) {
            do {
              lVar20 = (longlong)(int)uVar28;
              lVar18 = (longlong)(int)uVar28;
              uVar28 = uVar28 + 1;
              local_2b4[3] = uVar28;
              if (uVar28 == 2) break;
              local_2b4[4] = local_2b4[lVar20 * 2 + 1];
            } while (local_2b4[4] == local_2b4[lVar18 * 2 + 2]);
          }
          lVar20 = *(longlong *)(local_278 + 0x20);
          uVar22 = uVar17 | (int)puVar29 << 0x16;
          if ((int)uVar17 < *(int *)(lVar20 + 0x30)) {
            lVar18 = *(longlong *)(lVar20 + 0x28);
          }
          else {
            uVar17 = uVar17 - *(int *)(lVar20 + 0x30);
            lVar18 = *(longlong *)(lVar20 + 0x60);
          }
          uVar30 = *(ulonglong *)(lVar18 + (longlong)(int)uVar17 * 8);
          if ((uVar30 >> 0x10 & 0x10) == 0) {
            uVar17 = (uint)(uVar30 >> 0x20);
            if (((uVar30 >> 0x10 & 0x40) == 0) && (uVar17 != 0xffffffff)) {
              uVar17 = *(int *)(lVar20 + 0x94) << 0x16 | uVar17 & 0x3fffff;
            }
            local_2e8 = (char *)CONCAT44(uVar17,(int)uVar30);
            if (uVar17 != uVar21) {
              lVar20 = *(longlong *)
                        ((ulonglong)(uVar17 >> 0x16) * 0x120 + 8 + *(longlong *)(param_1 + 0x38));
              uVar30 = (ulonglong)(uVar17 & 0x3fffff);
              lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x20) + 0x18);
              uVar25 = *(uint *)(lVar18 + uVar30 * 0x18);
              local_2a0._0_2_ = (undefined2)uVar25;
              local_2a0._2_2_ = (undefined2)(uVar25 >> 0x10);
              uStack_29c = *(undefined2 *)(lVar18 + 4 + uVar30 * 0x18);
              uStack_29a = *(ushort *)(lVar18 + 6 + uVar30 * 0x18);
              uVar3 = *(uint *)(lVar18 + 8 + uVar30 * 0x18);
              uStack_298 = (undefined2)uVar3;
              uStack_296 = (ushort)(uVar3 >> 0x10);
              uStack_294 = *(ushort *)(lVar18 + 0xc + uVar30 * 0x18);
              auVar15._2_2_ = uStack_298;
              auVar15._0_2_ = uStack_29a;
              local_290 = (uint *)CONCAT44(*(undefined4 *)(lVar18 + 0x14 + uVar30 * 0x18),
                                           *(undefined4 *)(lVar18 + 0x10 + uVar30 * 0x18));
              auVar15._4_8_ = 0;
              auVar9._12_2_ = uStack_29a;
              auVar9._0_12_ = auVar15 << 0x30;
              uVar68 = CONCAT44(auVar9._10_4_,CONCAT22(uStack_29c,uStack_29a));
              auVar14._6_8_ = 0;
              auVar14._0_6_ = (uint6)((ulonglong)uVar68 >> 0x10);
              auVar10._4_2_ = local_2a0._2_2_;
              auVar10._0_4_ = uVar25;
              auVar10._6_8_ = SUB148(auVar14 << 0x40,6);
              uVar39 = (uint)((ulonglong)uVar68 >> 0x10);
              lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x20) + 0x38);
              auVar33 = *(undefined1 (*) [16])(lVar18 + 0xa0);
              auVar42 = *(undefined1 (*) [16])(lVar18 + 0xb0);
              auVar87._0_4_ = ((float)(uVar25 & 0xffff) + 0.0) * auVar33._0_4_ + auVar42._0_4_;
              auVar87._4_4_ = ((float)auVar10._4_4_ + 0.0) * auVar33._4_4_ + auVar42._4_4_;
              auVar87._8_4_ =
                   ((float)(uVar39 >> 0x10) * 65536.0 + (float)(uVar39 & 0xffff)) * auVar33._8_4_ +
                   auVar42._8_4_;
              auVar87._12_4_ = ((float)uStack_29a + 0.0) * auVar33._12_4_ + auVar42._12_4_;
              auVar93._0_4_ = ((float)(uVar3 & 0xffff) + 0.0) * auVar33._0_4_ + auVar42._0_4_;
              auVar93._4_4_ = ((float)uStack_296 + 0.0) * auVar33._4_4_ + auVar42._4_4_;
              auVar93._8_4_ = ((float)uStack_294 + 0.0) * auVar33._8_4_ + auVar42._8_4_;
              auVar93._12_4_ = ((float)uStack_292 + 0.0) * auVar33._12_4_ + auVar42._12_4_;
              uVar25 = (uint)*(byte *)(lVar20 + 0x40);
              if (*(byte *)(lVar20 + 0x40) != 0) {
                uVar80 = -(uint)(0x16a8300 << uVar25 < 0);
                uVar81 = -(uint)(0x502ab000 << uVar25 < 0);
                uVar82 = -(uint)(0xa2a8c00 << uVar25 < 0);
                uVar3 = -(uint)(0xa154c00 << uVar25 < 0);
                uVar39 = -(uint)(0x1554300 << uVar25 < 0);
                uVar6 = -(uint)(0x50157000 << uVar25 < 0);
                uVar72 = -(uint)(0 << uVar25 < 0);
                auVar85._0_4_ = (uint)auVar87._8_4_ & uVar3;
                auVar85._4_4_ = (uint)auVar87._0_4_ & uVar39;
                auVar85._8_4_ = (uint)auVar87._4_4_ & uVar6;
                auVar85._12_4_ = (uint)auVar87._12_4_ & uVar72;
                auVar55._0_4_ =
                     ~uVar3 & ((uint)auVar87._4_4_ & uVar80 | ~uVar80 & (uint)auVar87._0_4_);
                auVar55._4_4_ =
                     ~uVar39 & ((uint)auVar87._8_4_ & uVar81 | ~uVar81 & (uint)auVar87._4_4_);
                auVar55._8_4_ =
                     ~uVar6 & ((uint)auVar87._0_4_ & uVar82 | ~uVar82 & (uint)auVar87._8_4_);
                auVar55._12_4_ = ~uVar72 & (uint)auVar87._12_4_;
                uVar30 = (ulonglong)uVar25;
                auVar55 = auVar55 | auVar85;
                uVar75 = (0xae71e0U >> uVar30) << 0x1f;
                uVar77 = (0xb9e306U >> uVar30) << 0x1f;
                uVar78 = (0xeb903cU >> uVar30) << 0x1f;
                uVar79 = (0U >> uVar30) << 0x1f;
                uVar68 = CONCAT44(uVar77 ^ auVar55._4_4_,uVar75 ^ auVar55._0_4_);
                uVar72 = uVar78 ^ auVar55._8_4_;
                uVar74 = uVar79 ^ auVar55._12_4_;
                auVar86._8_4_ = uVar72;
                auVar86._0_8_ = uVar68;
                auVar86._12_4_ = uVar74;
                auVar92._8_4_ = uVar72;
                auVar92._0_8_ = uVar68;
                auVar92._12_4_ = uVar74;
                auVar76._0_4_ =
                     uVar75 ^ (~uVar3 & ((uint)auVar93._4_4_ & uVar80 |
                                        ~uVar80 & (uint)auVar93._0_4_) | (uint)auVar93._8_4_ & uVar3
                              );
                auVar76._4_4_ =
                     uVar77 ^ (~uVar39 & ((uint)auVar93._8_4_ & uVar81 |
                                         ~uVar81 & (uint)auVar93._4_4_) |
                              (uint)auVar93._0_4_ & uVar39);
                auVar76._8_4_ =
                     uVar78 ^ (~uVar6 & ((uint)auVar93._0_4_ & uVar82 |
                                        ~uVar82 & (uint)auVar93._8_4_) | (uint)auVar93._4_4_ & uVar6
                              );
                auVar76._12_4_ = uVar79 ^ (uint)auVar93._12_4_;
                auVar87 = minps(auVar86,auVar76);
                auVar93 = maxps(auVar92,auVar76);
              }
              fVar83 = auVar87._0_4_ + *(float *)(lVar20 + 0x50);
              fVar90 = auVar87._4_4_ + *(float *)(lVar20 + 0x54);
              local_1e8._0_8_ = CONCAT44(fVar90,fVar83);
              local_1e8._8_4_ = auVar87._8_4_ + *(float *)(lVar20 + 0x58);
              local_1e8._12_4_ = auVar87._12_4_ + *(float *)(lVar20 + 0x5c);
              fVar91 = auVar93._0_4_ + *(float *)(lVar20 + 0x50);
              fVar95 = auVar93._4_4_ + *(float *)(lVar20 + 0x54);
              local_1d8._0_8_ = CONCAT44(fVar95,fVar91);
              local_1d8._8_4_ = auVar93._8_4_ + *(float *)(lVar20 + 0x58);
              local_1d8._12_4_ = auVar93._12_4_ + *(float *)(lVar20 + 0x5c);
              auVar40._0_4_ = -(uint)(fVar83 <= auVar84._0_4_ && auVar102._0_4_ <= fVar91);
              auVar40._4_4_ = -(uint)(fVar90 <= auVar84._4_4_ && auVar102._4_4_ <= fVar95);
              auVar40._8_4_ =
                   -(uint)(local_1e8._8_4_ <= auVar84._8_4_ && auVar102._8_4_ <= local_1d8._8_4_);
              auVar40._12_4_ =
                   -(uint)(local_1e8._12_4_ <= auVar84._12_4_ && auVar102._12_4_ <= local_1d8._12_4_
                          );
              uVar25 = movmskps(uVar25,auVar40);
              if ((char)(uVar25 & 7) == '\a') {
                auVar41._8_4_ = local_1e8._8_4_;
                auVar41._0_8_ = local_1e8._0_8_;
                auVar41._12_4_ = local_1e8._12_4_;
                auVar32._8_4_ = local_1d8._8_4_;
                auVar32._0_8_ = local_1d8._0_8_;
                auVar32._12_4_ = local_1d8._12_4_;
                auVar12._8_8_ = uStack_220;
                auVar12._0_8_ = local_228;
                auVar42 = maxps(auVar41,auVar12);
                auVar13._8_8_ = uStack_210;
                auVar13._0_8_ = local_218;
                auVar33 = minps(auVar32,auVar13);
                local_188 = maxps(auVar42,auVar33);
                local_198 = minps(auVar42,auVar33);
                auVar43._0_4_ = (local_188._0_4_ - fVar52) * fVar53;
                auVar43._4_4_ = (local_188._4_4_ - fVar60) * fVar61;
                auVar43._8_4_ = (local_188._8_4_ - fVar64) * fVar65;
                auVar43._12_4_ = (local_188._12_4_ - fVar11) * fVar98;
                auVar69._0_8_ =
                     CONCAT44((local_198._4_4_ - fVar60) * fVar61,
                              (local_198._0_4_ - fVar52) * fVar53);
                auVar69._8_4_ = (local_198._8_4_ - fVar64) * fVar65;
                auVar69._12_4_ = (local_198._12_4_ - fVar11) * fVar98;
                auVar56._8_4_ = auVar69._8_4_;
                auVar56._0_8_ = auVar69._0_8_;
                auVar56._12_4_ = auVar69._12_4_;
                auVar33 = minps(auVar56,auVar43);
                auVar42 = maxps(auVar69,auVar43);
                uVar26 = auVar33._0_4_;
                uVar62 = auVar33._4_4_;
                auVar57._8_4_ = auVar33._8_4_;
                auVar44._4_4_ = uVar62;
                auVar44._0_4_ = uVar62;
                auVar44._8_4_ = uVar62;
                auVar44._12_4_ = uVar62;
                auVar34._4_4_ = uVar26;
                auVar34._0_4_ = uVar26;
                auVar34._8_4_ = uVar26;
                auVar34._12_4_ = uVar26;
                auVar33 = maxps(auVar44,auVar34);
                uVar26 = auVar42._0_4_;
                uVar62 = auVar42._4_4_;
                auVar70._8_4_ = auVar42._8_4_;
                auVar57._4_4_ = auVar57._8_4_;
                auVar57._0_4_ = auVar57._8_4_;
                auVar57._12_4_ = auVar57._8_4_;
                auVar42 = maxps(auVar57,auVar33);
                auVar35._4_4_ = uVar26;
                auVar35._0_4_ = uVar26;
                auVar35._8_4_ = uVar26;
                auVar35._12_4_ = uVar26;
                auVar45._4_4_ = uVar62;
                auVar45._0_4_ = uVar62;
                auVar45._8_4_ = uVar62;
                auVar45._12_4_ = uVar62;
                auVar70._4_4_ = auVar70._8_4_;
                auVar70._0_4_ = auVar70._8_4_;
                auVar70._12_4_ = auVar70._8_4_;
                auVar33 = minps(auVar45,auVar35);
                auVar42 = maxps(auVar42,ZEXT816(0));
                auVar33 = minps(auVar70,auVar33);
                auVar7._4_4_ = uVar100;
                auVar7._0_4_ = uVar99;
                auVar7._8_4_ = uVar101;
                auVar7._12_4_ = fVar97;
                auVar33 = minps(auVar33,auVar7);
                if (auVar42._0_4_ <= auVar33._0_4_) {
                  auVar42 = param_2[1];
                  fVar96 = auVar42._12_4_;
                  fVar67 = auVar42._0_4_;
                  fVar71 = auVar42._4_4_;
                  fVar73 = auVar42._8_4_;
                  auVar46._0_4_ = -(uint)(fVar83 <= fVar67 && fVar67 <= fVar91);
                  auVar46._4_4_ = -(uint)(fVar90 <= fVar71 && fVar71 <= fVar95);
                  auVar46._8_4_ = -(uint)(local_1e8._8_4_ <= fVar73 && fVar73 <= local_1d8._8_4_);
                  auVar46._12_4_ = -(uint)(local_1e8._12_4_ <= fVar96 && fVar96 <= local_1d8._12_4_)
                  ;
                  uVar26 = movmskps(uVar25 & 7,auVar46);
                  auVar87 = local_1e8;
                  auVar33 = auVar42;
                  if (((byte)uVar26 & 7) == 7) goto LAB_144fc55c7;
                  auVar88._0_8_ = CONCAT44((fVar90 - fVar60) * fVar61,(fVar83 - fVar52) * fVar53);
                  auVar88._8_4_ = (local_1e8._8_4_ - fVar64) * fVar65;
                  auVar88._12_4_ = (local_1e8._12_4_ - fVar11) * fVar98;
                  auVar94._0_4_ = (fVar91 - fVar52) * fVar53;
                  auVar94._4_4_ = (fVar95 - fVar60) * fVar61;
                  auVar94._8_4_ = (local_1d8._8_4_ - fVar64) * fVar65;
                  auVar94._12_4_ = (local_1d8._12_4_ - fVar11) * fVar98;
                  auVar58._8_4_ = auVar88._8_4_;
                  auVar58._0_8_ = auVar88._0_8_;
                  auVar58._12_4_ = auVar88._12_4_;
                  auVar33 = minps(auVar58,auVar94);
                  auVar87 = maxps(auVar88,auVar94);
                  uVar26 = auVar33._0_4_;
                  uVar62 = auVar33._4_4_;
                  auVar59._8_4_ = auVar33._8_4_;
                  auVar47._4_4_ = uVar62;
                  auVar47._0_4_ = uVar62;
                  auVar47._8_4_ = uVar62;
                  auVar47._12_4_ = uVar62;
                  auVar36._4_4_ = uVar26;
                  auVar36._0_4_ = uVar26;
                  auVar36._8_4_ = uVar26;
                  auVar36._12_4_ = uVar26;
                  auVar33 = maxps(auVar47,auVar36);
                  uVar26 = auVar87._0_4_;
                  uVar62 = auVar87._4_4_;
                  auVar89._8_4_ = auVar87._8_4_;
                  auVar59._4_4_ = auVar59._8_4_;
                  auVar59._0_4_ = auVar59._8_4_;
                  auVar59._12_4_ = auVar59._8_4_;
                  auVar87 = maxps(auVar59,auVar33);
                  auVar37._4_4_ = uVar26;
                  auVar37._0_4_ = uVar26;
                  auVar37._8_4_ = uVar26;
                  auVar37._12_4_ = uVar26;
                  auVar48._4_4_ = uVar62;
                  auVar48._0_4_ = uVar62;
                  auVar48._8_4_ = uVar62;
                  auVar48._12_4_ = uVar62;
                  auVar89._4_4_ = auVar89._8_4_;
                  auVar89._0_4_ = auVar89._8_4_;
                  auVar89._12_4_ = auVar89._8_4_;
                  auVar33 = minps(auVar48,auVar37);
                  auVar93 = maxps(auVar87,ZEXT816(0));
                  auVar33 = minps(auVar89,auVar33);
                  auVar8._4_4_ = uVar100;
                  auVar8._0_4_ = uVar99;
                  auVar8._8_4_ = uVar101;
                  auVar8._12_4_ = fVar97;
                  auVar87 = minps(auVar33,auVar8);
                  if (auVar93._0_4_ <= auVar87._0_4_) goto LAB_144fc55b1;
                }
              }
            }
          }
          uVar17 = local_2b4[4];
          if (1 < (int)uVar28) break;
        } while( true );
      }
      goto joined_r0x000144fc5980;
    }
LAB_144fc5859:
    plVar5 = *(longlong **)(param_2[4] + 8);
    if (plVar5 == (longlong *)0x0) {
LAB_144fc58b9:
      if (local_2c0 != 0) {
        local_2e8 = &DAT_149981764;
        local_2e0 = "";
        FUN_144b3f260(local_2c0,&local_2e8);
      }
      if ((param_3 != (longlong *)0x0) &&
         ((param_4 == '\0' ||
          ((int)param_3[1] < (int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff))))) {
        iVar24 = (int)param_3[1] + 1;
        if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar24) {
          FUN_144c33790(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar24);
        }
        puVar2 = (undefined4 *)(*param_3 + (longlong)(int)param_3[1] * 4);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(param_2[2] + 4);
        }
        *(int *)(param_3 + 1) = iVar24;
      }
      if (param_5 != (int *)0x0) {
        *param_5 = local_res10;
      }
      if (param_6 != (float *)0x0) {
        *param_6 = fVar103;
      }
      return 1;
    }
    _local_1f8 = param_2[1];
    local_260 = param_2 + 3;
    local_258 = local_248;
    local_208 = 0xffffffff;
    local_200 = (undefined4 *)0x0;
    local_1c8 = 0xffffffff;
    local_1c0 = (undefined8 *)0x0;
    local_250 = 0x42;
    local_268 = param_1;
    cVar16 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_268);
    iVar24 = local_res10;
    if (cVar16 != '\0') goto LAB_144fc58b9;
  }
joined_r0x000144fc5980:
  if (local_2c0 != 0) {
    local_2e8 = &DAT_149981764;
    local_2e0 = "";
    FUN_144b3f260(local_2c0,&local_2e8);
  }
LAB_144fc4fbf:
  if (param_3 != (longlong *)0x0) {
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = iVar24;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar103;
  }
  return 0;
LAB_144fc55b1:
  auVar33._0_4_ = (*(float *)*param_2 - fVar67) * auVar93._0_4_ + fVar67;
  auVar33._4_4_ = (*(float *)(*param_2 + 4) - fVar71) * auVar93._4_4_ + fVar71;
  auVar33._8_4_ = (*(float *)(*param_2 + 8) - fVar73) * auVar93._8_4_ + fVar73;
  auVar33._12_4_ = (*(float *)(*param_2 + 0xc) - fVar96) * auVar93._12_4_ + fVar96;
LAB_144fc55c7:
  fVar95 = auVar33._0_4_;
  fVar96 = auVar33._4_4_;
  fVar67 = auVar33._8_4_;
  local_1c0 = &local_2e8;
  local_200 = &local_2a0;
  plVar5 = *(longlong **)(param_2[4] + 8);
  fVar83 = (fVar54 - fVar95) * (fVar54 - fVar95);
  fVar90 = (fVar63 - fVar96) * (fVar63 - fVar96);
  fVar91 = (fVar66 - fVar67) * (fVar66 - fVar67);
  auVar49._0_4_ = fVar90 + fVar83 + fVar91;
  auVar49._4_4_ = fVar90 + fVar83 + fVar91;
  auVar49._8_4_ = fVar90 + fVar83 + fVar91;
  auVar49._12_4_ = fVar90 + fVar83 + fVar91;
  auVar84 = sqrtps(auVar87,auVar49);
  local_208 = uVar17;
  _local_1f8 = auVar33;
  local_1c8 = uVar22;
  if (plVar5 == (longlong *)0x0) {
    if (*(longlong *)param_2[4] == 0) goto LAB_144fc571a;
  }
  else {
    local_258 = local_248;
    local_260 = param_2 + 3;
    local_250 = 0x22;
    if (uVar23 == *(uint *)param_2[2]) {
      local_250 = 0x12;
    }
    local_268 = param_1;
    cVar16 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_268);
    if (cVar16 == '\0') goto joined_r0x000144fc5980;
    fVar54 = (float)local_238;
    fVar63 = local_238._4_4_;
    fVar66 = (float)uStack_230;
    uVar99 = _DAT_14c6daca0;
    uVar100 = uRam000000014c6daca4;
    uVar101 = uRam000000014c6daca8;
    fVar97 = fRam000000014c6dacac;
  }
  plVar5 = *(longlong **)param_2[4];
  if (plVar5 != (longlong *)0x0) {
    local_148 = local_248;
    local_140 = 0x52;
    fVar97 = (fVar54 - fVar95) * (fVar54 - fVar95);
    fVar83 = (fVar63 - fVar96) * (fVar63 - fVar96);
    fVar90 = (fVar66 - fVar67) * (fVar66 - fVar67);
    fVar54 = ((float)local_1f8._0_4_ - fVar95) * ((float)local_1f8._0_4_ - fVar95);
    fVar63 = ((float)local_1f8._4_4_ - fVar96) * ((float)local_1f8._4_4_ - fVar96);
    fVar66 = (fStack_1f0 - fVar67) * (fStack_1f0 - fVar67);
    local_138 = CONCAT44(fVar104,fVar103);
    uStack_130 = CONCAT44(fVar106,fVar105);
    auVar38._4_4_ = fVar54;
    auVar38._0_4_ = fVar54;
    auVar38._8_4_ = fVar54;
    auVar38._12_4_ = fVar54;
    auVar50._0_4_ = fVar83 + fVar97 + fVar90;
    auVar50._4_4_ = fVar83 + fVar97 + fVar90;
    auVar50._8_4_ = fVar83 + fVar97 + fVar90;
    auVar50._12_4_ = fVar83 + fVar97 + fVar90;
    local_128 = sqrtps(auVar42,auVar50);
    auVar51._0_4_ = fVar63 + fVar54 + fVar66;
    auVar51._4_4_ = fVar63 + fVar54 + fVar66;
    auVar51._8_4_ = fVar63 + fVar54 + fVar66;
    auVar51._12_4_ = fVar63 + fVar54 + fVar66;
    local_118 = sqrtps(auVar38,auVar51);
    local_158 = param_1;
    local_150 = param_2 + 3;
    pauVar19 = (undefined1 (*) [16])(**(code **)(*plVar5 + 0x20))(plVar5,local_108,&local_158);
    auVar84 = *pauVar19;
    uVar99 = _DAT_14c6daca0;
    uVar100 = uRam000000014c6daca4;
    uVar101 = uRam000000014c6daca8;
    fVar97 = fRam000000014c6dacac;
  }
LAB_144fc571a:
  fVar103 = fVar103 + auVar84._0_4_;
  fVar104 = fVar104 + auVar84._4_4_;
  fVar105 = fVar105 + auVar84._8_4_;
  fVar106 = fVar106 + auVar84._12_4_;
  if ((param_3 != (longlong *)0x0) &&
     ((param_4 == '\0' || ((int)param_3[1] < (int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff))
      ))) {
    iVar24 = (int)param_3[1] + 1;
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar24) {
      FUN_144c33790(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar24);
    }
    puVar1 = (uint *)(*param_3 + (longlong)(int)param_3[1] * 4);
    if (puVar1 != (uint *)0x0) {
      *puVar1 = uVar23;
    }
    *(int *)(param_3 + 1) = iVar24;
    uVar99 = _DAT_14c6daca0;
    uVar100 = uRam000000014c6daca4;
    uVar101 = uRam000000014c6daca8;
    fVar97 = fRam000000014c6dacac;
  }
  local_228 = local_1e8._0_8_;
  uStack_220 = local_1e8._8_8_;
  local_2d2 = uStack_29a;
  local_2c8 = (uint)local_290;
  local_2d8 = CONCAT22(local_2a0._2_2_,(undefined2)local_2a0);
  local_2d4 = uStack_29c;
  local_2d0 = CONCAT22(uStack_296,uStack_298);
  local_2cc = uStack_294;
  local_2c4 = local_290._4_4_;
  local_218 = local_1d8._0_8_;
  uStack_210 = local_1d8._8_8_;
  lVar20 = *(longlong *)(lVar20 + 0x20);
  if ((*(int *)(lVar20 + 0x48) == 0) ||
     (iVar24 = *(int *)(*(longlong *)(lVar20 + 0x40) + (ulonglong)(local_2e8._4_4_ & 0x3fffff) * 4),
     iVar24 == -1)) {
    uVar30 = 0xffffffff;
    iVar31 = 0;
  }
  else {
    uVar4 = *(ulonglong *)(*(longlong *)(lVar20 + 0x50) + (longlong)iVar24 * 8);
    uVar30 = uVar4 & 0xffffffff;
    local_278._4_4_ = (int)(uVar4 >> 0x20);
    iVar31 = local_278._4_4_;
    local_278 = uVar4;
  }
  local_240 = &local_2d8;
  local_238 = local_1f8;
  uStack_230 = local_1f8._8_8_;
  local_248[0] = local_2e8._4_4_;
  puVar29 = (undefined *)(ulonglong)(local_2e8._4_4_ >> 0x16);
  fVar54 = (float)local_1f8._0_4_;
  fVar63 = (float)local_1f8._4_4_;
  fVar66 = fStack_1f0;
  uVar17 = local_2e8._4_4_;
  uVar21 = uVar23;
  if (local_2e8._4_4_ == *(uint *)(param_2[2] + 4)) goto LAB_144fc5859;
  goto LAB_144fc5130;
}



// FUNCTION 144fc5990 FUN_144fc5990 body=372 status=ok
// SIG undefined FUN_144fc5990(void)

void FUN_144fc5990(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [14];
  ulonglong uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  auVar22 = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x38);
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar22._0_10_;
  auVar5._12_2_ = auVar22._6_2_;
  auVar6._8_2_ = auVar22._4_2_;
  auVar6._0_8_ = auVar22._0_8_;
  auVar6._10_4_ = auVar5._10_4_;
  auVar16._6_8_ = 0;
  auVar16._0_6_ = auVar6._8_6_;
  auVar7._4_2_ = auVar22._2_2_;
  auVar7._0_4_ = auVar22._0_4_;
  auVar7._6_8_ = SUB148(auVar16 << 0x40,6);
  fVar8 = *(float *)(lVar1 + 0xa0);
  fVar9 = *(float *)(lVar1 + 0xa4);
  fVar10 = *(float *)(lVar1 + 0xa8);
  fVar11 = *(float *)(lVar1 + 0xac);
  fVar12 = *(float *)(lVar1 + 0xb0);
  fVar13 = *(float *)(lVar1 + 0xb4);
  fVar14 = *(float *)(lVar1 + 0xb8);
  fVar15 = *(float *)(lVar1 + 0xbc);
  auVar30._0_4_ = ((float)(auVar22._0_4_ & 0xffff) + 0.0) * fVar8 + fVar12;
  auVar30._4_4_ = ((float)auVar7._4_4_ + 0.0) * fVar9 + fVar13;
  auVar30._8_4_ =
       ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) * fVar10 + fVar14;
  auVar30._12_4_ = ((float)auVar22._6_2_ + 0.0) * fVar11 + fVar15;
  *param_3 = auVar30;
  auVar32._0_4_ = ((float)auVar22._8_2_ + 0.0) * fVar8 + fVar12;
  auVar32._4_4_ = ((float)auVar22._10_2_ + 0.0) * fVar9 + fVar13;
  auVar32._8_4_ = ((float)auVar22._12_2_ + 0.0) * fVar10 + fVar14;
  auVar32._12_4_ = ((float)auVar22._14_2_ + 0.0) * fVar11 + fVar15;
  param_3[1] = auVar32;
  if (*(byte *)(param_1 + 0x40) != 0) {
    uVar19 = (uint)*(byte *)(param_1 + 0x40);
    uVar26 = -(uint)(0x16a8300 << uVar19 < 0);
    uVar27 = -(uint)(0x502ab000 << uVar19 < 0);
    uVar28 = -(uint)(0xa2a8c00 << uVar19 < 0);
    uVar2 = -(uint)(0xa154c00 << uVar19 < 0);
    uVar3 = -(uint)(0x1554300 << uVar19 < 0);
    uVar4 = -(uint)(0x50157000 << uVar19 < 0);
    uVar17 = (ulonglong)uVar19;
    uVar21 = (0xae71e0U >> uVar17) << 0x1f;
    uVar23 = (0xb9e306U >> uVar17) << 0x1f;
    uVar24 = (0xeb903cU >> uVar17) << 0x1f;
    uVar25 = (0U >> uVar17) << 0x1f;
    uVar18 = CONCAT44(uVar23 ^ (~uVar3 & ((uint)auVar30._8_4_ & uVar27 |
                                         ~uVar27 & (uint)auVar30._4_4_) |
                               (uint)auVar30._0_4_ & uVar3),
                      uVar21 ^ (~uVar2 & ((uint)auVar30._4_4_ & uVar26 |
                                         ~uVar26 & (uint)auVar30._0_4_) |
                               (uint)auVar30._8_4_ & uVar2));
    uVar19 = uVar24 ^ (~uVar4 & ((uint)auVar30._0_4_ & uVar28 | ~uVar28 & (uint)auVar30._8_4_) |
                      (uint)auVar30._4_4_ & uVar4);
    uVar20 = uVar25 ^ (uint)auVar30._12_4_;
    auVar29._8_4_ = uVar19;
    auVar29._0_8_ = uVar18;
    auVar29._12_4_ = uVar20;
    auVar31._8_4_ = uVar19;
    auVar31._0_8_ = uVar18;
    auVar31._12_4_ = uVar20;
    auVar22._0_4_ =
         uVar21 ^ (~uVar2 & ((uint)auVar32._4_4_ & uVar26 | ~uVar26 & (uint)auVar32._0_4_) |
                  (uint)auVar32._8_4_ & uVar2);
    auVar22._4_4_ =
         uVar23 ^ (~uVar3 & ((uint)auVar32._8_4_ & uVar27 | ~uVar27 & (uint)auVar32._4_4_) |
                  (uint)auVar32._0_4_ & uVar3);
    auVar22._8_4_ =
         uVar24 ^ (~uVar4 & ((uint)auVar32._0_4_ & uVar28 | ~uVar28 & (uint)auVar32._8_4_) |
                  (uint)auVar32._4_4_ & uVar4);
    auVar22._12_4_ = uVar25 ^ (uint)auVar32._12_4_;
    auVar30 = minps(auVar29,auVar22);
    auVar32 = maxps(auVar31,auVar22);
    *param_3 = auVar30;
    param_3[1] = auVar32;
  }
  fVar8 = *(float *)(param_1 + 0x54);
  fVar9 = *(float *)(param_1 + 0x58);
  fVar10 = *(float *)(param_1 + 0x5c);
  *(float *)*param_3 = auVar30._0_4_ + *(float *)(param_1 + 0x50);
  *(float *)(*param_3 + 4) = auVar30._4_4_ + fVar8;
  *(float *)(*param_3 + 8) = auVar30._8_4_ + fVar9;
  *(float *)(*param_3 + 0xc) = auVar30._12_4_ + fVar10;
  fVar8 = *(float *)(param_1 + 0x54);
  fVar9 = *(float *)(param_1 + 0x58);
  fVar10 = *(float *)(param_1 + 0x5c);
  *(float *)param_3[1] = auVar32._0_4_ + *(float *)(param_1 + 0x50);
  *(float *)(param_3[1] + 4) = auVar32._4_4_ + fVar8;
  *(float *)(param_3[1] + 8) = auVar32._8_4_ + fVar9;
  *(float *)(param_3[1] + 0xc) = auVar32._12_4_ + fVar10;
  return;
}



// FUNCTION 144fc5b10 FUN_144fc5b10 body=107 status=ok
// SIG undefined FUN_144fc5b10(void)

void FUN_144fc5b10(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 4);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 144fc5b80 FUN_144fc5b80 body=75 status=ok
// SIG undefined FUN_144fc5b80(void)

undefined8 * FUN_144fc5b80(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 2) = 0x3f860a92;
  FUN_144b469b0((longlong)param_1 + 0x14);
  FUN_1450459a0(param_1 + 10);
  return param_1;
}



// FUNCTION 144fc5bd0 FUN_144fc5bd0 body=57 status=ok
// SIG undefined FUN_144fc5bd0(void)

void FUN_144fc5bd0(longlong *param_1)

{
  FUN_144b49dd0(param_1 + 0x1d);
  FUN_144fc5b10(param_1 + 0x15);
  if (*param_1 != 0) {
    FUN_144b3f230();
    return;
  }
  return;
}



// FUNCTION 144fc5c10 FUN_144fc5c10 body=535 status=ok
// SIG undefined FUN_144fc5c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144fc5c10(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkaiNavMeshDeprecatedGenerationUtilsSettings::vftable;
  *(undefined4 *)(param_1 + 3) = 0x3fe00000;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 8) = 0x3ba3d70a;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 9) = 0xff;
  *(undefined4 *)(param_1 + 6) = 0x3c000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f860a92;
  FUN_144b469b0((longlong)param_1 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x84) = 2;
  *(undefined4 *)(param_1 + 0x11) = 2;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  *(undefined4 *)(param_1 + 0x12) = 0x40a00000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = 0x3dcccccd;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0x100;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80000000;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 3;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  *(undefined1 *)(param_1 + 0x26) = 1;
  FUN_14500b7b0((longlong)param_1 + 0x134);
  *(undefined2 *)(param_1 + 0x28) = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x3c23d70a;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 1;
  *(undefined4 *)(param_1 + 0x2a) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0x154) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x156) = 1;
  FUN_1450459a0(param_1 + 0x2b);
  *(undefined2 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f) = 0x8fffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0x8ffffffe;
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  param_1[0x1a] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  param_1[0x1b] = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)(param_1 + 0x1c) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0xe4) = uVar2;
  *(uint *)(param_1 + 0x1d) = uVar3;
  *(uint *)((longlong)param_1 + 0xec) = uVar4;
  return param_1;
}



// FUNCTION 144fc5e30 FUN_144fc5e30 body=588 status=ok
// SIG undefined FUN_144fc5e30(void)

void FUN_144fc5e30(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = hkaiNavMeshDeprecatedGenerationUtilsSettings::vftable;
  plVar1 = (longlong *)param_1[0x42];
  plVar3 = plVar1 + (longlong)*(int *)(param_1 + 0x43) * 0x1e;
  while (plVar3 != plVar1) {
    plVar5 = plVar3 + -0x1e;
    FUN_144b49dd0(plVar3 + -1);
    FUN_144fc5b10(plVar3 + -9);
    plVar3 = plVar5;
    if (*plVar5 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x42],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x21c) & 0x7fffffff) * 0xf0);
  }
  param_1[0x42] = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  FUN_144b49dd0(param_1 + 0x41);
  FUN_144b49dd0(param_1 + 0x3e);
  FUN_144fc5b10(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 300)) && (param_1[0x24] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x24],
               (ulonglong)(*(uint *)((longlong)param_1 + 300) & 0x7fffffff) << 3);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x80000000;
  lVar2 = param_1[0x20];
  lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0x21) * 8;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x21) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x10c)) && (param_1[0x20] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x20],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x10c) & 0x7fffffff) << 3);
  }
  param_1[0x20] = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80000000;
  lVar2 = param_1[0x1e];
  lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0x1f) * 8;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x1e],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xfc) & 0x7fffffff) << 3);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80000000;
  FUN_144fc60c0(param_1 + 0x12);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144fc6080 FUN_144fc6080 body=60 status=ok
// SIG undefined FUN_144fc6080(void)

undefined4 * FUN_144fc6080(undefined4 *param_1)

{
  *param_1 = 0x40a00000;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3dcccccd;
  *(undefined2 *)(param_1 + 3) = 0x100;
  param_1[7] = 0x80000000;
  param_1[0xb] = 0x80000000;
  return param_1;
}



// FUNCTION 144fc60c0 FUN_144fc60c0 body=144 status=ok
// SIG undefined FUN_144fc60c0(void)

void FUN_144fc60c0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x2c)) && (*(longlong *)(param_1 + 0x20) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x20),
               (ulonglong)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1c)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x10),
               (ulonglong)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  return;
}



// FUNCTION 144fc6150 FUN_144fc6150 body=9 status=ok
// SIG undefined FUN_144fc6150(void)

undefined2 * FUN_144fc6150(undefined2 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144fc6160 FUN_144fc6160 body=63 status=ok
// SIG undefined FUN_144fc6160(void)

longlong FUN_144fc6160(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144fc61a0();
  if (iVar1 == -1) {
    return param_1 + 0x4c;
  }
  return *(longlong *)(param_1 + 0x210) + 0x14 + (longlong)iVar1 * 0xf0;
}



// FUNCTION 144fc61a0 FUN_144fc61a0 body=298 status=ok
// SIG undefined FUN_144fc61a0(void)

int FUN_144fc61a0(longlong param_1,longlong *param_2,int param_3,int param_4,char param_5)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint local_res8 [2];
  uint *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  local_res8[0] = 0;
  local_50 = 1;
  iVar5 = *(int *)(param_1 + 0x218);
  iVar4 = 0;
  local_4c = 0x80000001;
  local_48 = 1;
  puVar2 = local_res8;
  local_58 = puVar2;
  if (0 < iVar5) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x210) + lVar6);
      if (plVar1 == (longlong *)0x0) {
        if ((param_5 != '\0') &&
           ((iVar3 = *(int *)(*(longlong *)(param_1 + 0x210) + 8 + lVar6), iVar3 == param_3 ||
            (iVar3 == param_4)))) goto LAB_144fc62a6;
      }
      else {
        iVar3 = 0;
        if (0 < (int)param_2[1]) {
          do {
            *puVar2 = *puVar2 & 0xfffffffe;
            (**(code **)(*plVar1 + 0x20))(plVar1,(longlong)iVar3 * 0x10 + *param_2,1,&local_58);
            if ((*local_58 & 1) != 0) goto LAB_144fc62a6;
            iVar3 = iVar3 + 1;
            puVar2 = local_58;
          } while (iVar3 < (int)param_2[1]);
          iVar5 = *(int *)(param_1 + 0x218);
        }
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 0xf0;
    } while (iVar4 < iVar5);
  }
  iVar4 = -1;
LAB_144fc62a6:
  FUN_144bf90d0(&local_58);
  return iVar4;
}



// FUNCTION 144fc62d0 FUN_144fc62d0 body=107 status=ok
// SIG undefined FUN_144fc62d0(void)

void FUN_144fc62d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) << 2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 144fc6340 FUN_144fc6340 body=113 status=ok
// SIG undefined FUN_144fc6340(void)

bool FUN_144fc6340(longlong param_1,longlong param_2)

{
  if (1e-05 < ABS(*(float *)(param_1 + 0x10) - *(float *)(param_2 + 0x10))) {
    return *(float *)(param_2 + 0x10) < *(float *)(param_1 + 0x10);
  }
  if (ABS(*(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x14)) <= 1e-05) {
    return *(float *)(param_1 + 0x18) <= *(float *)(param_2 + 0x18) &&
           *(float *)(param_2 + 0x18) != *(float *)(param_1 + 0x18);
  }
  return *(float *)(param_1 + 0x14) < *(float *)(param_2 + 0x14);
}



// FUNCTION 144fc63c0 FUN_144fc63c0 body=743 status=ok
// SIG undefined FUN_144fc63c0(void)

undefined8
FUN_144fc63c0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  
  bVar18 = *(byte *)(*(longlong *)(*(longlong *)(param_4 + 0x20) + 0x68) + 0x80) & 1;
  bVar21 = *(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x20) + 0x68) + 0x80) & 1;
  if ((bVar21 == 0) && (bVar18 == 0)) {
    bVar14 = true;
LAB_144fc6432:
    bVar16 = false;
    if ((bVar21 != 0) && (bVar18 != 0)) goto LAB_144fc6446;
    bVar13 = true;
    if ((bVar21 != 0) || (bVar18 != 0)) goto LAB_144fc6448;
    bVar17 = false;
  }
  else {
    bVar14 = false;
    if ((bVar21 == 0) || (bVar18 == 0)) goto LAB_144fc6432;
    bVar16 = true;
LAB_144fc6446:
    bVar13 = false;
LAB_144fc6448:
    bVar15 = true;
    local_b8 = 0;
    uStack_b0 = 0;
    bVar17 = true;
    if (!bVar13) goto LAB_144fc64b1;
  }
  bVar15 = bVar17;
  uStack_b0 = 0;
  local_b8 = 0;
  uVar19 = FUN_144fc7800(param_1,param_2,&local_b8,param_3,param_4,0,param_5,param_6,param_7,param_8
                         ,param_9);
  if (bVar14) {
    return uVar19;
  }
  if ((int)uVar19 != -1) {
    return uVar19;
  }
LAB_144fc64b1:
  uVar19 = *param_9;
  uVar12 = param_9[1];
  fVar1 = *(float *)(param_9 + 2);
  fVar2 = *(float *)((longlong)param_9 + 0x14);
  fVar3 = *(float *)(param_9 + 3);
  uVar4 = *(undefined4 *)((longlong)param_9 + 0x1c);
  fVar22 = *(float *)(param_9 + 4);
  fVar23 = *(float *)((longlong)param_9 + 0x24);
  fVar24 = *(float *)(param_9 + 5);
  fVar25 = *(float *)((longlong)param_9 + 0x2c);
  if (bVar15) {
    local_a8 = 0;
    uStack_a0 = 0;
    uVar20 = FUN_144fc8850(param_1,&local_a8,&local_b8,param_3,param_4,0,param_5,param_6,param_7,
                           param_8,param_9);
    if (bVar16) {
      return uVar20;
    }
    if ((int)uVar20 != -1) {
      return uVar20;
    }
  }
  fVar5 = *(float *)(param_9 + 4);
  fVar6 = *(float *)((longlong)param_9 + 0x24);
  fVar7 = *(float *)(param_9 + 5);
  fVar8 = *(float *)((longlong)param_9 + 0x2c);
  fVar9 = *(float *)(param_9 + 2);
  fVar10 = *(float *)((longlong)param_9 + 0x14);
  fVar11 = *(float *)(param_9 + 3);
  *param_9 = uVar19;
  param_9[1] = uVar12;
  *(float *)(param_9 + 2) = fVar1;
  *(float *)((longlong)param_9 + 0x14) = fVar2;
  *(float *)(param_9 + 3) = fVar3;
  *(undefined4 *)((longlong)param_9 + 0x1c) = uVar4;
  *(float *)(param_9 + 4) = fVar22;
  *(float *)((longlong)param_9 + 0x24) = fVar23;
  *(float *)(param_9 + 5) = fVar24;
  *(float *)((longlong)param_9 + 0x2c) = fVar25;
  *(float *)(param_9 + 2) = (fVar9 + fVar1) * 0.5;
  *(float *)((longlong)param_9 + 0x14) = (fVar10 + fVar2) * 0.5;
  if (fVar22 <= fVar5) {
    fVar22 = fVar5;
  }
  *(float *)(param_9 + 3) = (fVar11 + fVar3) * 0.5;
  *(float *)(param_9 + 4) = fVar22;
  if (fVar6 <= fVar23) {
    fVar23 = fVar6;
  }
  *(float *)((longlong)param_9 + 0x24) = fVar23;
  if (fVar24 <= fVar7) {
    fVar24 = fVar7;
  }
  *(float *)(param_9 + 5) = fVar24;
  if (fVar8 <= fVar25) {
    fVar25 = fVar8;
  }
  *(float *)((longlong)param_9 + 0x2c) = fVar25;
  return 0xffffffff;
}



// FUNCTION 144fc66b0 FUN_144fc66b0 body=875 status=ok
// SIG undefined FUN_144fc66b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144fc66b0(float *param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
             float *param_11,float *param_12)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  fVar16 = param_1[7];
  fVar20 = *param_5;
  fVar36 = param_5[1];
  fVar37 = param_5[2];
  fVar38 = param_5[3];
  fVar17 = *param_6;
  fVar18 = param_6[1];
  fVar24 = param_6[2];
  fVar26 = param_6[3];
  fVar19 = fVar20 - *param_7;
  fVar21 = fVar36 - param_7[1];
  fVar22 = fVar37 - param_7[2];
  fVar23 = fVar38 - param_7[3];
  fVar27 = fVar21 * *param_9 - param_9[1] * fVar19;
  fVar21 = fVar22 * param_9[1] - param_9[2] * fVar21;
  fVar19 = fVar19 * param_9[2] - *param_9 * fVar22;
  auVar12._12_4_ = fVar23 * param_9[3] - param_9[3] * fVar23;
  auVar12._4_4_ = fVar19;
  auVar12._0_4_ = fVar21;
  auVar12._8_4_ = fVar27;
  fVar21 = fVar21 * fVar21;
  fVar19 = fVar19 * fVar19;
  fVar27 = fVar27 * fVar27;
  auVar14._4_4_ = fVar21;
  auVar14._0_4_ = fVar21;
  auVar14._8_4_ = fVar21;
  auVar14._12_4_ = fVar21;
  fVar22 = fVar19 + fVar21 + fVar27;
  if (fVar22 == 0.0) {
    auVar14 = ZEXT816(0);
  }
  else {
    auVar2._4_4_ = fVar19 + fVar21 + fVar27;
    auVar2._0_4_ = fVar22;
    auVar2._8_4_ = fVar19 + fVar21 + fVar27;
    auVar2._12_4_ = fVar19 + fVar21 + fVar27;
    auVar14 = sqrtps(auVar14,auVar2);
    auVar14 = divps(auVar12,auVar14);
  }
  fVar19 = fVar17 - *param_8;
  fVar21 = fVar18 - param_8[1];
  fVar22 = fVar24 - param_8[2];
  fVar23 = fVar26 - param_8[3];
  auVar11._0_4_ = *param_11 * _DAT_14c6dad90;
  auVar11._4_4_ = param_11[1] * fRam000000014c6dad94;
  auVar11._8_4_ = param_11[2] * fRam000000014c6dad98;
  auVar11._12_4_ = param_11[3] * fRam000000014c6dad9c;
  auVar3._4_4_ = fVar16;
  auVar3._0_4_ = fVar16;
  auVar3._8_4_ = fVar16;
  auVar3._12_4_ = fVar16;
  auVar12 = minps(auVar11,auVar3);
  fVar27 = fVar21 * *param_10 - param_10[1] * fVar19;
  fVar21 = fVar22 * param_10[1] - param_10[2] * fVar21;
  fVar19 = fVar19 * param_10[2] - *param_10 * fVar22;
  auVar25._12_4_ = fVar23 * param_10[3] - param_10[3] * fVar23;
  fVar22 = (0.0 - auVar12._0_4_) * auVar14._0_4_ + (*param_7 - fVar20) * _DAT_14c6dad90 + fVar20;
  fVar36 = (0.0 - auVar12._4_4_) * auVar14._4_4_ +
           (param_7[1] - fVar36) * fRam000000014c6dad94 + fVar36;
  fVar37 = (0.0 - auVar12._8_4_) * auVar14._8_4_ +
           (param_7[2] - fVar37) * fRam000000014c6dad98 + fVar37;
  fVar38 = (0.0 - auVar12._12_4_) * auVar14._12_4_ +
           (param_7[3] - fVar38) * fRam000000014c6dad9c + fVar38;
  auVar25._4_4_ = fVar19;
  auVar25._0_4_ = fVar21;
  auVar25._8_4_ = fVar27;
  fVar21 = fVar21 * fVar21;
  fVar19 = fVar19 * fVar19;
  fVar27 = fVar27 * fVar27;
  auVar13._4_4_ = fVar21;
  auVar13._0_4_ = fVar21;
  auVar13._8_4_ = fVar21;
  auVar13._12_4_ = fVar21;
  fVar20 = fVar19 + fVar21 + fVar27;
  if (fVar20 == 0.0) {
    auVar14 = ZEXT816(0);
  }
  else {
    auVar1._4_4_ = fVar19 + fVar21 + fVar27;
    auVar1._0_4_ = fVar20;
    auVar1._8_4_ = fVar19 + fVar21 + fVar27;
    auVar1._12_4_ = fVar19 + fVar21 + fVar27;
    auVar14 = sqrtps(auVar13,auVar1);
    auVar14 = divps(auVar25,auVar14);
  }
  local_1a8 = *param_2;
  fStack_1a4 = param_2[1];
  fStack_1a0 = param_2[2];
  fStack_19c = param_2[3];
  fVar20 = *param_1;
  fVar21 = fVar22 * local_1a8;
  fVar19 = fVar36 * fStack_1a4;
  fVar27 = fVar37 * fStack_1a0;
  auVar15._0_4_ = *param_12 * _DAT_14c6dad90;
  auVar15._4_4_ = param_12[1] * fRam000000014c6dad94;
  auVar15._8_4_ = param_12[2] * fRam000000014c6dad98;
  auVar15._12_4_ = param_12[3] * fRam000000014c6dad9c;
  auVar4._4_4_ = fVar16;
  auVar4._0_4_ = fVar16;
  auVar4._8_4_ = fVar16;
  auVar4._12_4_ = fVar16;
  auVar12 = minps(auVar15,auVar4);
  fVar33 = fVar19 + fVar21 + fVar27;
  fVar34 = fVar19 + fVar21 + fVar27;
  fVar35 = fVar19 + fVar21 + fVar27;
  fVar27 = fVar19 + fVar21 + fVar27;
  fVar19 = (0.0 - auVar12._0_4_) * auVar14._0_4_ + (*param_8 - fVar17) * _DAT_14c6dad90 + fVar17;
  fVar23 = (0.0 - auVar12._4_4_) * auVar14._4_4_ +
           (param_8[1] - fVar18) * fRam000000014c6dad94 + fVar18;
  fVar28 = (0.0 - auVar12._8_4_) * auVar14._8_4_ +
           (param_8[2] - fVar24) * fRam000000014c6dad98 + fVar24;
  fVar29 = (0.0 - auVar12._12_4_) * auVar14._12_4_ +
           (param_8[3] - fVar26) * fRam000000014c6dad9c + fVar26;
  fVar16 = local_1a8 * fVar19;
  fVar17 = fStack_1a4 * fVar23;
  fVar18 = fStack_1a0 * fVar28;
  fVar24 = fVar17 + fVar16 + fVar18;
  fVar26 = fVar17 + fVar16 + fVar18;
  fVar21 = fVar17 + fVar16 + fVar18;
  fVar18 = fVar17 + fVar16 + fVar18;
  uVar7 = -(uint)(fVar24 < fVar33);
  uVar8 = -(uint)(fVar26 < fVar34);
  uVar9 = -(uint)(fVar21 < fVar35);
  uVar10 = -(uint)(fVar18 < fVar27);
  fVar17 = (float)(~uVar7 & (uint)fVar22 | (uint)fVar19 & uVar7);
  fVar30 = (float)(~uVar8 & (uint)fVar36 | (uint)fVar23 & uVar8);
  fVar31 = (float)(~uVar9 & (uint)fVar37 | (uint)fVar28 & uVar9);
  fVar32 = (float)(~uVar10 & (uint)fVar38 | (uint)fVar29 & uVar10);
  local_188 = (float)((uint)fVar22 & uVar7 | ~uVar7 & (uint)fVar19);
  fStack_184 = (float)((uint)fVar36 & uVar8 | ~uVar8 & (uint)fVar23);
  fStack_180 = (float)((uint)fVar37 & uVar9 | ~uVar9 & (uint)fVar28);
  fStack_17c = (float)((uint)fVar38 & uVar10 | ~uVar10 & (uint)fVar29);
  fVar16 = param_1[8];
  fVar36 = (float)(~uVar7 & (uint)(fVar20 - (fVar24 - fVar33)) |
                  (uint)(fVar20 - (fVar33 - fVar24)) & uVar7);
  fVar37 = (float)(~uVar8 & (uint)(fVar20 - (fVar26 - fVar34)) |
                  (uint)(fVar20 - (fVar34 - fVar26)) & uVar8);
  fVar38 = (float)(~uVar9 & (uint)(fVar20 - (fVar21 - fVar35)) |
                  (uint)(fVar20 - (fVar35 - fVar21)) & uVar9);
  fVar18 = (float)(~uVar10 & (uint)(fVar20 - (fVar18 - fVar27)) |
                  (uint)(fVar20 - (fVar27 - fVar18)) & uVar10);
  local_108 = local_1a8 * fVar16 * _DAT_14c6dad90 + fVar17;
  fStack_104 = fStack_1a4 * fVar16 * fRam000000014c6dad94 + fVar30;
  fStack_100 = fStack_1a0 * fVar16 * fRam000000014c6dad98 + fVar31;
  fStack_fc = fStack_19c * fVar16 * fRam000000014c6dad9c + fVar32;
  local_178 = local_1a8 * fVar16 * _DAT_14c6dad90 + local_188;
  fStack_174 = fStack_1a4 * fVar16 * fRam000000014c6dad94 + fStack_184;
  fStack_170 = fStack_1a0 * fVar16 * fRam000000014c6dad98 + fStack_180;
  fStack_16c = fStack_19c * fVar16 * fRam000000014c6dad9c + fStack_17c;
  local_128 = (fVar36 - fVar16) * _DAT_14c6dad90 * local_1a8;
  fStack_124 = (fVar37 - fVar16) * fRam000000014c6dad94 * fStack_1a4;
  fStack_120 = (fVar38 - fVar16) * fRam000000014c6dad98 * fStack_1a0;
  fStack_11c = (fVar18 - fVar16) * fRam000000014c6dad9c * fStack_19c;
  local_198 = (fVar20 - fVar36) * local_1a8 + fVar17 + fVar16 * local_1a8;
  fStack_194 = (fVar20 - fVar37) * fStack_1a4 + fVar30 + fVar16 * fStack_1a4;
  fStack_190 = (fVar20 - fVar38) * fStack_1a0 + fVar31 + fVar16 * fStack_1a0;
  fStack_18c = (fVar20 - fVar18) * fStack_19c + fVar32 + fVar16 * fStack_19c;
  local_188 = fVar16 * local_1a8 + local_188;
  fStack_184 = fVar16 * fStack_1a4 + fStack_184;
  fStack_180 = fVar16 * fStack_1a0 + fStack_180;
  fStack_17c = fVar16 * fStack_19c + fStack_17c;
  local_168 = local_128 + local_198;
  fStack_164 = fStack_124 + fStack_194;
  fStack_160 = fStack_120 + fStack_190;
  fStack_15c = fStack_11c + fStack_18c;
  local_158 = local_128 + local_188;
  fStack_154 = fStack_124 + fStack_184;
  fStack_150 = fStack_120 + fStack_180;
  fStack_14c = fStack_11c + fStack_17c;
  local_138 = local_128 + local_168;
  fStack_134 = fStack_124 + fStack_164;
  fStack_130 = fStack_120 + fStack_160;
  fStack_12c = fStack_11c + fStack_15c;
  local_128 = local_128 + local_158;
  fStack_124 = fStack_124 + fStack_154;
  fStack_120 = fStack_120 + fStack_150;
  fStack_11c = fStack_11c + fStack_14c;
  local_1a8 = (0.0 - *param_3) * local_1a8;
  fStack_1a4 = (0.0 - param_3[1]) * fStack_1a4;
  fStack_1a0 = (0.0 - param_3[2]) * fStack_1a0;
  fStack_19c = (0.0 - param_3[3]) * fStack_19c;
  local_148 = local_178;
  fStack_144 = fStack_174;
  fStack_140 = fStack_170;
  fStack_13c = fStack_16c;
  local_118 = local_178;
  fStack_114 = fStack_174;
  fStack_110 = fStack_170;
  fStack_10c = fStack_16c;
  local_f8 = local_198;
  fStack_f4 = fStack_194;
  fStack_f0 = fStack_190;
  fStack_ec = fStack_18c;
  local_e8 = local_188;
  fStack_e4 = fStack_184;
  fStack_e0 = fStack_180;
  fStack_dc = fStack_17c;
  local_d8 = local_108;
  fStack_d4 = fStack_104;
  fStack_d0 = fStack_100;
  fStack_cc = fStack_fc;
  local_c8 = local_168;
  fStack_c4 = fStack_164;
  fStack_c0 = fStack_160;
  fStack_bc = fStack_15c;
  local_b8 = local_158;
  fStack_b4 = fStack_154;
  fStack_b0 = fStack_150;
  fStack_ac = fStack_14c;
  local_a8 = local_108;
  fStack_a4 = fStack_104;
  fStack_a0 = fStack_100;
  fStack_9c = fStack_fc;
  local_98 = local_138;
  fStack_94 = fStack_134;
  fStack_90 = fStack_130;
  fStack_8c = fStack_12c;
  local_88 = local_128;
  fStack_84 = fStack_124;
  fStack_80 = fStack_120;
  fStack_7c = fStack_11c;
  iVar5 = FUN_144ff4ad0(param_4,&local_108,&local_198,&local_1a8);
  uVar6 = 0xffffffff;
  if (iVar5 != 0) {
    uVar6 = 0xb;
  }
  return uVar6;
}



// FUNCTION 144fc6a20 FUN_144fc6a20 body=1690 status=ok
// SIG undefined FUN_144fc6a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144fc6a20(float *param_1,undefined8 param_2,float *param_3,undefined8 param_4,float *param_5,
             float *param_6,float *param_7,float *param_8,undefined1 (*param_9) [16],float *param_10
             ,undefined8 param_11,undefined8 param_12)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [144];
  
  fVar50 = _DAT_14c6dafb0;
  auVar40 = ZEXT816(0);
  fVar17 = *(float *)*param_9;
  fVar18 = *(float *)(*param_9 + 4);
  fVar19 = *(float *)(*param_9 + 8);
  fVar31 = *(float *)(*param_9 + 0xc);
  _local_158 = *param_9;
  local_148 = *param_10;
  fStack_144 = param_10[1];
  fStack_140 = param_10[2];
  fStack_13c = param_10[3];
  fVar29 = *param_5;
  fVar35 = param_5[1];
  fVar36 = param_5[2];
  fVar37 = param_5[3];
  fVar41 = *param_6;
  fVar43 = param_6[1];
  fVar44 = param_6[2];
  fVar45 = param_6[3];
  fVar51 = (*param_7 - fVar29) * _DAT_14c6dad90 + fVar29;
  fVar52 = (param_7[1] - fVar35) * fRam000000014c6dad94 + fVar35;
  fVar53 = (param_7[2] - fVar36) * fRam000000014c6dad98 + fVar36;
  fVar54 = (param_7[3] - fVar37) * fRam000000014c6dad9c + fVar37;
  fVar29 = fVar29 - *param_7;
  fVar35 = fVar35 - param_7[1];
  fVar36 = fVar36 - param_7[2];
  fVar37 = fVar37 - param_7[3];
  fVar46 = (*param_8 - fVar41) * _DAT_14c6dad90 + fVar41;
  fVar47 = (param_8[1] - fVar43) * fRam000000014c6dad94 + fVar43;
  fVar48 = (param_8[2] - fVar44) * fRam000000014c6dad98 + fVar44;
  fVar49 = (param_8[3] - fVar45) * fRam000000014c6dad9c + fVar45;
  fVar30 = fVar35 * fVar17 - fVar18 * fVar29;
  fVar35 = fVar36 * fVar18 - fVar19 * fVar35;
  fVar29 = fVar29 * fVar19 - fVar17 * fVar36;
  auVar32._12_4_ = fVar37 * fVar31 - fVar31 * fVar37;
  auVar32._4_4_ = fVar29;
  auVar32._0_4_ = fVar35;
  auVar32._8_4_ = fVar30;
  fVar35 = fVar35 * fVar35;
  fVar29 = fVar29 * fVar29;
  fVar30 = fVar30 * fVar30;
  auVar16._4_4_ = fVar35;
  auVar16._0_4_ = fVar35;
  auVar16._8_4_ = fVar35;
  auVar16._12_4_ = fVar35;
  auVar21._0_4_ = fVar29 + fVar35 + fVar30;
  auVar21._4_4_ = fVar29 + fVar35 + fVar30;
  auVar21._8_4_ = fVar29 + fVar35 + fVar30;
  auVar21._12_4_ = fVar29 + fVar35 + fVar30;
  if (auVar21._0_4_ == 0.0) {
    auVar16 = ZEXT816(0);
  }
  else {
    auVar16 = sqrtps(auVar16,auVar21);
    auVar16 = divps(auVar32,auVar16);
  }
  fVar41 = fVar41 - *param_8;
  fVar43 = fVar43 - param_8[1];
  fVar44 = fVar44 - param_8[2];
  fVar45 = fVar45 - param_8[3];
  fVar36 = fVar43 * local_148 - fStack_144 * fVar41;
  fVar29 = fVar44 * fStack_144 - fStack_140 * fVar43;
  fVar35 = fVar41 * fStack_140 - local_148 * fVar44;
  auVar42._12_4_ = fVar45 * fStack_13c - fStack_13c * fVar45;
  fVar37 = auVar16._0_4_ * -0.001 + fVar51;
  fVar41 = auVar16._4_4_ * -0.001 + fVar52;
  fVar43 = auVar16._8_4_ * -0.001 + fVar53;
  fVar44 = auVar16._12_4_ * -0.001 + fVar54;
  auVar42._4_4_ = fVar35;
  auVar42._0_4_ = fVar29;
  auVar42._8_4_ = fVar36;
  fVar29 = fVar29 * fVar29;
  fVar35 = fVar35 * fVar35;
  fVar36 = fVar36 * fVar36;
  auVar8._4_4_ = fVar29;
  auVar8._0_4_ = fVar29;
  auVar8._8_4_ = fVar29;
  auVar8._12_4_ = fVar29;
  auVar22._0_4_ = fVar35 + fVar29 + fVar36;
  auVar22._4_4_ = fVar35 + fVar29 + fVar36;
  auVar22._8_4_ = fVar35 + fVar29 + fVar36;
  auVar22._12_4_ = fVar35 + fVar29 + fVar36;
  if (auVar22._0_4_ == 0.0) {
    auVar16 = ZEXT816(0);
  }
  else {
    auVar16 = sqrtps(auVar8,auVar22);
    auVar16 = divps(auVar42,auVar16);
  }
  fVar29 = param_1[0xb];
  fVar35 = auVar16._0_4_ * -0.001 + fVar46;
  fVar36 = auVar16._4_4_ * -0.001 + fVar47;
  fVar45 = auVar16._8_4_ * -0.001 + fVar48;
  fVar30 = auVar16._12_4_ * -0.001 + fVar49;
  if (fVar29 < _DAT_14c6dafb0) {
    auVar33._0_4_ = fVar37 - fVar51;
    auVar33._4_4_ = fVar41 - fVar52;
    auVar33._8_4_ = fVar43 - fVar53;
    auVar33._12_4_ = fVar44 - fVar54;
    fVar51 = auVar33._0_4_ * auVar33._0_4_;
    fVar52 = auVar33._4_4_ * auVar33._4_4_;
    fVar53 = auVar33._8_4_ * auVar33._8_4_;
    auVar9._4_4_ = fVar51;
    auVar9._0_4_ = fVar51;
    auVar9._8_4_ = fVar51;
    auVar9._12_4_ = fVar51;
    auVar23._0_4_ = fVar52 + fVar51 + fVar53;
    auVar23._4_4_ = fVar52 + fVar51 + fVar53;
    auVar23._8_4_ = fVar52 + fVar51 + fVar53;
    auVar23._12_4_ = fVar52 + fVar51 + fVar53;
    if (auVar23._0_4_ == 0.0) {
      auVar38 = SUB1612(ZEXT816(0),0);
    }
    else {
      auVar16 = sqrtps(auVar9,auVar23);
      auVar16 = divps(auVar33,auVar16);
      auVar38 = auVar16._0_12_;
    }
    auVar24._0_4_ = fVar35 - fVar46;
    auVar24._4_4_ = fVar36 - fVar47;
    auVar24._8_4_ = fVar45 - fVar48;
    auVar24._12_4_ = fVar30 - fVar49;
    fVar46 = auVar24._0_4_ * auVar24._0_4_;
    fVar47 = auVar24._4_4_ * auVar24._4_4_;
    fVar48 = auVar24._8_4_ * auVar24._8_4_;
    auVar10._4_4_ = fVar46;
    auVar10._0_4_ = fVar46;
    auVar10._8_4_ = fVar46;
    auVar10._12_4_ = fVar46;
    fVar49 = fVar47 + fVar46 + fVar48;
    if (fVar49 == 0.0) {
      auVar20 = SUB1612(ZEXT816(0),0);
    }
    else {
      auVar1._4_4_ = fVar47 + fVar46 + fVar48;
      auVar1._0_4_ = fVar49;
      auVar1._8_4_ = fVar47 + fVar46 + fVar48;
      auVar1._12_4_ = fVar47 + fVar46 + fVar48;
      auVar16 = sqrtps(auVar10,auVar1);
      auVar16 = divps(auVar24,auVar16);
      auVar20 = auVar16._0_12_;
    }
    auVar39._0_4_ = fVar17 + local_148;
    auVar39._4_4_ = fVar18 + fStack_144;
    auVar39._8_4_ = fVar19 + fStack_140;
    auVar39._12_4_ = fVar31 + fStack_13c;
    fVar31 = auVar38._0_4_;
    fVar46 = auVar38._4_4_;
    fVar47 = auVar38._8_4_;
    fVar48 = (auVar20._0_4_ - fVar31) * _DAT_14c6dad90;
    fVar49 = (auVar20._4_4_ - fVar46) * fRam000000014c6dad94;
    fVar51 = (auVar20._8_4_ - fVar47) * fRam000000014c6dad98;
    fVar17 = auVar39._0_4_ * auVar39._0_4_;
    fVar18 = auVar39._4_4_ * auVar39._4_4_;
    fVar19 = auVar39._8_4_ * auVar39._8_4_;
    auVar11._4_4_ = fVar17;
    auVar11._0_4_ = fVar17;
    auVar11._8_4_ = fVar17;
    auVar11._12_4_ = fVar17;
    auVar27._0_4_ = fVar18 + fVar17 + fVar19;
    auVar27._4_4_ = fVar18 + fVar17 + fVar19;
    auVar27._8_4_ = fVar18 + fVar17 + fVar19;
    auVar27._12_4_ = fVar18 + fVar17 + fVar19;
    if (auVar27._0_4_ == 0.0) {
      auVar38 = SUB1612(ZEXT816(0),0);
    }
    else {
      auVar16 = sqrtps(auVar11,auVar27);
      auVar16 = divps(auVar39,auVar16);
      auVar38 = auVar16._0_12_;
    }
    local_168 = auVar20._0_4_ * fVar31 + auVar20._4_4_ * fVar46 + auVar20._8_4_ * fVar47;
    fStack_164 = local_168;
    fStack_160 = local_168;
    fStack_15c = local_168;
    pfVar6 = (float *)FUN_144beabd0(&local_138,&local_168);
    fVar50 = fVar50 - *pfVar6;
    if ((fVar49 + fVar46) * auVar38._4_4_ + (fVar48 + fVar31) * auVar38._0_4_ +
        (fVar51 + fVar47) * auVar38._8_4_ < 0.0) {
      fVar50 = _DAT_14c6dafe0 - fVar50;
    }
    if ((fVar50 < _DAT_14c6dafb0) && (fVar29 < fVar50)) {
      local_168 = (float)local_158._0_4_ * local_148 + (float)local_158._4_4_ * fStack_144 +
                  fStack_150 * fStack_140;
      fStack_164 = local_168;
      fStack_160 = local_168;
      fStack_15c = local_168;
      FUN_144beabd0(local_98,&local_168);
      FUN_144bfc400(local_b8,param_11);
      FUN_144bfc400(&local_128,param_12);
      FUN_144bfa5d0(&local_a8,local_b8,local_158);
      fVar17 = local_a8 * local_a8;
      fVar18 = fStack_a4 * fStack_a4;
      fVar19 = fStack_a0 * fStack_a0;
      auVar12._4_4_ = fVar17;
      auVar12._0_4_ = fVar17;
      auVar12._8_4_ = fVar17;
      auVar12._12_4_ = fVar17;
      auVar28._0_4_ = fVar18 + fVar17 + fVar19;
      auVar28._4_4_ = fVar18 + fVar17 + fVar19;
      auVar28._8_4_ = fVar18 + fVar17 + fVar19;
      auVar28._12_4_ = fVar18 + fVar17 + fVar19;
      if (auVar28._0_4_ == 0.0) {
        auVar16 = ZEXT816(0);
      }
      else {
        auVar3._4_4_ = fRam000000014c6daca4;
        auVar3._0_4_ = _DAT_14c6daca0;
        auVar3._8_4_ = fRam000000014c6daca8;
        auVar3._12_4_ = fRam000000014c6dacac;
        auVar16 = sqrtps(auVar12,auVar28);
        auVar16 = divps(auVar3,auVar16);
      }
      auVar25._0_4_ = -(uint)(auVar28._0_4_ < _DAT_14c6daeb0) & _DAT_14c6dae40;
      auVar25._4_4_ = -(uint)(auVar28._4_4_ < _DAT_14c6daeb4) & uRam000000014c6dae44;
      auVar25._8_4_ = -(uint)(auVar28._8_4_ < _DAT_14c6daeb8) & uRam000000014c6dae48;
      auVar25._12_4_ = -(uint)(auVar28._12_4_ < _DAT_14c6daebc) & uRam000000014c6dae4c;
      auVar13._0_4_ = ~-(uint)(auVar28._0_4_ < _DAT_14c6daeb0) & (uint)(auVar16._0_4_ * local_a8);
      auVar13._4_4_ = ~-(uint)(auVar28._4_4_ < _DAT_14c6daeb4) & (uint)(auVar16._4_4_ * fStack_a4);
      auVar13._8_4_ = ~-(uint)(auVar28._8_4_ < _DAT_14c6daeb8) & (uint)(auVar16._8_4_ * fStack_a0);
      auVar13._12_4_ =
           ~-(uint)(auVar28._12_4_ < _DAT_14c6daebc) & (uint)(auVar16._12_4_ * fStack_9c);
      _local_158 = auVar13 | auVar25;
      FUN_144bfa5d0(&local_138,&local_128,&local_148);
      fVar17 = local_138 * local_138;
      fVar18 = fStack_134 * fStack_134;
      fVar19 = fStack_130 * fStack_130;
      auVar14._4_4_ = fVar17;
      auVar14._0_4_ = fVar17;
      auVar14._8_4_ = fVar17;
      auVar14._12_4_ = fVar17;
      auVar26._0_4_ = fVar18 + fVar17 + fVar19;
      auVar26._4_4_ = fVar18 + fVar17 + fVar19;
      auVar26._8_4_ = fVar18 + fVar17 + fVar19;
      auVar26._12_4_ = fVar18 + fVar17 + fVar19;
      if (auVar26._0_4_ == 0.0) {
        auVar16 = ZEXT816(0);
      }
      else {
        auVar2._4_4_ = fRam000000014c6daca4;
        auVar2._0_4_ = _DAT_14c6daca0;
        auVar2._8_4_ = fRam000000014c6daca8;
        auVar2._12_4_ = fRam000000014c6dacac;
        auVar16 = sqrtps(auVar14,auVar26);
        auVar16 = divps(auVar2,auVar16);
      }
      local_148 = (float)(~-(uint)(auVar26._0_4_ < _DAT_14c6daeb0) &
                          (uint)(auVar16._0_4_ * local_138) |
                         -(uint)(auVar26._0_4_ < _DAT_14c6daeb0) & _DAT_14c6dae40);
      fStack_144 = (float)(~-(uint)(auVar26._4_4_ < _DAT_14c6daeb4) &
                           (uint)(auVar16._4_4_ * fStack_134) |
                          -(uint)(auVar26._4_4_ < _DAT_14c6daeb4) & uRam000000014c6dae44);
      fStack_140 = (float)(~-(uint)(auVar26._8_4_ < _DAT_14c6daeb8) &
                           (uint)(auVar16._8_4_ * fStack_130) |
                          -(uint)(auVar26._8_4_ < _DAT_14c6daeb8) & uRam000000014c6dae48);
      fStack_13c = (float)(~-(uint)(auVar26._12_4_ < _DAT_14c6daebc) &
                           (uint)(auVar16._12_4_ * fStack_12c) |
                          -(uint)(auVar26._12_4_ < _DAT_14c6daebc) & uRam000000014c6dae4c);
    }
    fVar17 = (float)local_158._0_4_;
    fVar18 = (float)local_158._4_4_;
    fVar19 = fStack_150;
    fVar31 = fStack_14c;
  }
  fVar29 = *param_3;
  fVar50 = param_3[1];
  fVar46 = param_3[2];
  fVar47 = param_3[3];
  fVar52 = fVar17 + local_148;
  fVar53 = fVar18 + fStack_144;
  fVar54 = fVar19 + fStack_140;
  fVar48 = fVar52 * fVar52;
  fVar49 = fVar53 * fVar53;
  fVar51 = fVar54 * fVar54;
  local_e8 = (fVar35 - fVar37) * 0.45 + fVar37;
  fStack_e4 = (fVar36 - fVar41) * 0.45 + fVar41;
  fStack_e0 = (fVar45 - fVar43) * 0.45 + fVar43;
  fStack_dc = (fVar30 - fVar44) * 0.45 + fVar44;
  local_118 = fVar17 * fVar29 + fVar37;
  fStack_114 = fVar18 * fVar50 + fVar41;
  fStack_110 = fVar19 * fVar46 + fVar43;
  fStack_10c = fVar31 * fVar47 + fVar44;
  auVar15._4_4_ = fVar48;
  auVar15._0_4_ = fVar48;
  auVar15._8_4_ = fVar48;
  auVar15._12_4_ = fVar48;
  auVar34._0_4_ = fVar49 + fVar48 + fVar51;
  auVar34._4_4_ = fVar49 + fVar48 + fVar51;
  auVar34._8_4_ = fVar49 + fVar48 + fVar51;
  auVar34._12_4_ = fVar49 + fVar48 + fVar51;
  if (auVar34._0_4_ != 0.0) {
    auVar16 = sqrtps(auVar15,auVar34);
    auVar40._4_4_ = fVar53;
    auVar40._0_4_ = fVar52;
    auVar40._8_4_ = fVar54;
    auVar40._12_4_ = fVar31 + fStack_13c;
    auVar40 = divps(auVar40,auVar16);
  }
  local_d8 = local_148 * fVar29 + fVar35;
  fStack_d4 = fStack_144 * fVar50 + fVar36;
  fStack_d0 = fStack_140 * fVar46 + fVar45;
  fStack_cc = fStack_13c * fVar47 + fVar30;
  local_f8 = fVar29 * auVar40._0_4_ + local_e8;
  fStack_f4 = fVar50 * auVar40._4_4_ + fStack_e4;
  fStack_f0 = fVar46 * auVar40._8_4_ + fStack_e0;
  fStack_ec = fVar47 * auVar40._12_4_ + fStack_dc;
  fVar29 = *param_1;
  local_e8 = fVar29 * auVar40._0_4_ + local_e8;
  fStack_e4 = fVar29 * auVar40._4_4_ + fStack_e4;
  fStack_e0 = fVar29 * auVar40._8_4_ + fStack_e0;
  fStack_dc = fVar29 * auVar40._12_4_ + fStack_dc;
  local_108 = fVar17 * fVar29 + fVar37;
  fStack_104 = fVar18 * fVar29 + fVar41;
  fStack_100 = fVar19 * fVar29 + fVar43;
  fStack_fc = fVar31 * fVar29 + fVar44;
  local_c8 = local_148 * fVar29 + fVar35;
  fStack_c4 = fStack_144 * fVar29 + fVar36;
  fStack_c0 = fStack_140 * fVar29 + fVar45;
  fStack_bc = fStack_13c * fVar29 + fVar30;
  iVar4 = FUN_144ff4980(param_4,&local_108,&local_118);
  if (((iVar4 == 0) && (iVar4 = FUN_144ff4980(param_4,&local_e8,&local_f8), iVar4 == 0)) &&
     (iVar4 = FUN_144ff4980(param_4,&local_c8,&local_d8), fVar31 = fRam000000014c6dadac,
     fVar19 = fRam000000014c6dada8, fVar18 = fRam000000014c6dada4, fVar17 = _DAT_14c6dada0,
     iVar4 == 0)) {
    iVar4 = 0;
    fVar29 = _DAT_14c6dad90;
    fVar35 = fRam000000014c6dad94;
    fVar36 = fRam000000014c6dad98;
    fVar37 = fRam000000014c6dad9c;
    do {
      fVar41 = fVar29 * fVar17;
      fVar43 = fVar35 * fVar18;
      fVar44 = fVar36 * fVar19;
      fVar45 = fVar37 * fVar31;
      local_138 = (local_118 - local_108) * fVar41 + local_108;
      fStack_134 = (fStack_114 - fStack_104) * fVar43 + fStack_104;
      fStack_130 = (fStack_110 - fStack_100) * fVar44 + fStack_100;
      fStack_12c = (fStack_10c - fStack_fc) * fVar45 + fStack_fc;
      local_168 = (local_f8 - local_e8) * fVar41 + local_e8;
      fStack_164 = (fStack_f4 - fStack_e4) * fVar43 + fStack_e4;
      fStack_160 = (fStack_f0 - fStack_e0) * fVar44 + fStack_e0;
      fStack_15c = (fStack_ec - fStack_dc) * fVar45 + fStack_dc;
      local_128 = (local_d8 - local_c8) * fVar41 + local_c8;
      fStack_124 = (fStack_d4 - fStack_c4) * fVar43 + fStack_c4;
      fStack_120 = (fStack_d0 - fStack_c0) * fVar44 + fStack_c0;
      fStack_11c = (fStack_cc - fStack_bc) * fVar45 + fStack_bc;
      iVar5 = FUN_144ff4980(param_4,&local_138,&local_168);
      if ((iVar5 != 0) || (iVar5 = FUN_144ff4980(param_4,&local_168,&local_128), iVar5 != 0))
      goto LAB_144fc7074;
      fVar29 = fVar29 + _DAT_14c6daca0;
      fVar35 = fVar35 + fRam000000014c6daca4;
      fVar36 = fVar36 + fRam000000014c6daca8;
      fVar37 = fVar37 + fRam000000014c6dacac;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    uVar7 = 0xffffffff;
  }
  else {
LAB_144fc7074:
    uVar7 = 0xb;
  }
  return uVar7;
}



// FUNCTION 144fc70c0 FUN_144fc70c0 body=1841 status=ok
// SIG undefined FUN_144fc70c0(void)

undefined4 * FUN_144fc70c0(undefined4 *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  int *local_c0;
  uint local_b8;
  uint local_b4;
  longlong local_b0;
  int local_a8;
  uint local_a4;
  int *local_a0;
  uint local_98;
  uint local_94;
  int *local_90;
  uint local_88;
  int local_84;
  
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 0x80000000;
  local_a0 = (int *)0x0;
  local_98 = 0;
  local_94 = 0x80000000;
  if (0 < *(int *)(param_2 + 1) * 2) {
    FUN_144fca540(&local_b0,&PTR_vftable_14c6e47c0);
  }
  iVar17 = local_a8;
  if (0 < *(int *)(param_2 + 1) * 2) {
    FUN_144fca450(&local_a0,&PTR_vftable_14c6e47c0);
  }
  iVar9 = 8;
  local_90 = (int *)0x0;
  local_88 = 0;
  local_84 = -0x80000000;
  if (8 < *(int *)(param_2 + 1) * 4) {
    do {
      iVar9 = iVar9 * 2;
    } while (iVar9 < *(int *)(param_2 + 1) * 4);
  }
  uVar20 = iVar9 * 8;
  if (0 < (int)uVar20) {
    FUN_144be4580(&local_90,&PTR_vftable_14c6e47c0);
  }
  if ((uVar20 - local_88 != 0 && (int)local_88 <= (int)uVar20) ||
     (uVar13 = local_88, (int)uVar20 < (int)local_88)) {
    uVar13 = uVar20;
  }
  uVar13 = uVar13 >> 3;
  local_b8 = 0x80000000;
  local_b4 = uVar13 - 1;
  lVar14 = 0;
  if ((ulonglong)uVar13 != 0) {
    do {
      local_90[lVar14 * 2] = -1;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (longlong)(ulonglong)uVar13);
  }
  piVar12 = (int *)*param_2;
  piVar15 = piVar12 + (longlong)*(int *)(param_2 + 1) * 0xc;
  local_c0 = local_90;
  if (piVar12 != piVar15) {
    local_res10[0] = -1;
    local_res18[0] = -1;
    lVar14 = local_b0;
    uVar20 = local_a4;
    do {
      iVar9 = iVar17 + 1;
      iVar10 = iVar17;
      if ((int)(uVar20 & 0x7fffffff) < iVar9) {
        FUN_144fca630(&local_b0,&PTR_vftable_14c6e47c0,(longlong)iVar9);
        lVar14 = local_b0;
        iVar10 = local_a8;
        uVar20 = local_a4;
      }
      *(int **)(lVar14 + (longlong)iVar10 * 0x10) = piVar12;
      if (0 < (int)local_b4) {
        iVar3 = *piVar12;
        uVar13 = iVar3 * -0x61c8864f;
        uVar21 = (ulonglong)
                 ((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                  iVar3 * -0x4f000000) & local_b4);
        iVar4 = local_c0[uVar21 * 2];
        while (iVar4 != -1) {
          if (iVar4 == iVar3) {
            piVar11 = local_c0 + uVar21 * 2 + 1;
            goto LAB_144fc729d;
          }
          uVar21 = (ulonglong)((int)uVar21 + 1U & local_b4);
          iVar4 = local_c0[uVar21 * 2];
        }
      }
      piVar11 = local_res10;
LAB_144fc729d:
      *(int *)(lVar14 + 8 + (longlong)iVar10 * 0x10) = *piVar11;
      local_a8 = iVar9;
      iVar10 = FUN_144fc9ea0(&local_c0,&PTR_vftable_14c6e47c0,piVar12,local_res20);
      if (local_c0 + (longlong)iVar10 * 2 != (int *)0x0) {
        local_c0[(longlong)iVar10 * 2] = *piVar12;
      }
      if (local_c0 + (longlong)iVar10 * 2 + 1 != (int *)0x0) {
        local_c0[(longlong)iVar10 * 2 + 1] = iVar17;
      }
      iVar17 = iVar17 + 2;
      iVar10 = iVar9;
      if ((int)(uVar20 & 0x7fffffff) < iVar17) {
        FUN_144fca630(&local_b0,&PTR_vftable_14c6e47c0,(longlong)iVar17);
        lVar14 = local_b0;
        uVar20 = local_a4;
        iVar10 = local_a8;
      }
      *(int **)(lVar14 + (longlong)iVar10 * 0x10) = piVar12;
      if (0 < (int)local_b4) {
        iVar3 = piVar12[1];
        uVar13 = iVar3 * -0x61c8864f;
        uVar21 = (ulonglong)
                 ((uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                  iVar3 * -0x4f000000) & local_b4);
        iVar4 = local_c0[uVar21 * 2];
        while (iVar4 != -1) {
          if (iVar4 == iVar3) {
            piVar11 = local_c0 + uVar21 * 2 + 1;
            goto LAB_144fc7361;
          }
          uVar21 = (ulonglong)((int)uVar21 + 1U & local_b4);
          iVar4 = local_c0[uVar21 * 2];
        }
      }
      piVar11 = local_res18;
LAB_144fc7361:
      *(int *)(lVar14 + 8 + (longlong)iVar10 * 0x10) = *piVar11;
      local_a8 = iVar17;
      iVar10 = FUN_144fc9ea0(&local_c0,&PTR_vftable_14c6e47c0,piVar12 + 1,local_c8);
      if (local_c0 + (longlong)iVar10 * 2 != (int *)0x0) {
        local_c0[(longlong)iVar10 * 2] = piVar12[1];
      }
      if (local_c0 + (longlong)iVar10 * 2 + 1 != (int *)0x0) {
        local_c0[(longlong)iVar10 * 2 + 1] = iVar9;
      }
      piVar12 = piVar12 + 0xc;
    } while (piVar12 != piVar15);
  }
  iVar17 = 0;
  piVar12 = local_c0;
  if (-1 < (int)local_b4) {
    do {
      if (*piVar12 != -1) break;
      iVar17 = iVar17 + 1;
      piVar12 = piVar12 + 2;
    } while (iVar17 <= (int)local_b4);
  }
  piVar12 = local_a0;
  uVar20 = local_94;
  if (iVar17 <= (int)local_b4) {
    do {
      uVar13 = local_98 + 1;
      if ((int)(uVar20 & 0x7fffffff) < (int)uVar13) {
        FUN_144fca730(&local_a0,&PTR_vftable_14c6e47c0,(longlong)(int)uVar13);
        piVar12 = local_a0;
        uVar20 = local_94;
      }
      lVar14 = (longlong)iVar17;
      piVar12[(longlong)(int)local_98 * 2] = local_c0[lVar14 * 2];
      iVar17 = iVar17 + 1;
      piVar12[(longlong)(int)local_98 * 2 + 1] = local_c0[lVar14 * 2 + 1];
      if (iVar17 <= (int)local_b4) {
        piVar15 = local_c0 + (longlong)iVar17 * 2;
        do {
          if (*piVar15 != -1) break;
          iVar17 = iVar17 + 1;
          piVar15 = piVar15 + 2;
        } while (iVar17 <= (int)local_b4);
      }
      local_98 = uVar13;
    } while (iVar17 <= (int)local_b4);
  }
  iVar17 = local_84;
  piVar15 = local_90;
  uVar20 = local_98;
  piVar12 = local_a0;
  if (1 < (int)local_98) {
    FUN_144fca830(local_a0,0,local_98 - 1,(undefined1)local_res10[0]);
  }
  if (local_b4 != 0) {
    lVar14 = 0;
    if (0 < (int)(local_b4 + 1)) {
      do {
        if (local_c0[lVar14 * 2] != -1) {
          local_c0[lVar14 * 2] = -1;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)(local_b4 + 1));
    }
  }
  local_b8 = local_b8 & 0x80000000;
  if ((local_c0 != (int *)0x0) && (local_b8 == 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0);
  }
  local_c0 = (int *)0x0;
  local_b8 = 0;
  local_b4 = 0xffffffff;
  if ((-1 < iVar17) && (piVar15 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))(&PTR_vftable_14c6e47c0,piVar15);
  }
  lVar22 = 0;
  lVar14 = 2;
  do {
    if (0 < (int)uVar20) {
      uVar21 = (ulonglong)uVar20;
      do {
        iVar9 = *piVar12;
        for (iVar17 = piVar12[1]; iVar17 != -1;
            iVar17 = *(int *)(local_b0 + 8 + (longlong)iVar17 * 0x10)) {
          piVar15 = *(int **)(local_b0 + (longlong)iVar17 * 0x10);
          if ((char)piVar15[7] != '\0') {
            if (*piVar15 == iVar9) {
              fVar24 = (float)piVar15[8];
              fVar26 = (float)piVar15[9];
            }
            else {
              fVar24 = (float)piVar15[10];
              fVar26 = (float)piVar15[0xb];
            }
            for (iVar10 = *(int *)(local_b0 + 8 + (longlong)iVar17 * 0x10); iVar10 != -1;
                iVar10 = *(int *)(local_b0 + 8 + (longlong)iVar10 * 0x10)) {
              lVar16 = (longlong)iVar10;
              piVar15 = *(int **)(local_b0 + lVar16 * 0x10);
              if ((char)piVar15[7] != '\0') {
                if (*piVar15 == iVar9) {
                  pfVar19 = (float *)(piVar15 + 8);
                  pfVar18 = (float *)(piVar15 + 9);
                }
                else {
                  pfVar19 = (float *)(piVar15 + 10);
                  pfVar18 = (float *)(piVar15 + 0xb);
                }
                fVar1 = *pfVar19;
                fVar2 = *pfVar18;
                fVar23 = fVar24;
                if (fVar24 <= fVar1) {
                  fVar23 = fVar1;
                }
                fVar25 = fVar26;
                if (fVar2 <= fVar26) {
                  fVar25 = fVar2;
                }
                fVar25 = fVar25 - fVar23;
                if (lVar22 == 1) {
                  if (0.0 < fVar25) {
LAB_144fc7713:
                    *(undefined1 *)(piVar15 + 7) = 0;
                  }
                }
                else {
                  if ((fVar1 < fVar24) || (fVar26 < fVar1)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((fVar2 < fVar24) || (fVar26 < fVar2)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if ((bVar5) && (bVar6)) {
                    bVar7 = true;
                  }
                  else {
                    bVar7 = false;
                    bVar8 = false;
                    if ((0.0 < fVar25) && (fVar25 < 0.01)) {
                      if (bVar5) {
                        if (!bVar6) {
                          *pfVar19 = fVar26;
                          bVar7 = bVar8;
                        }
                      }
                      else {
                        bVar7 = bVar8;
                        if (bVar6) {
                          *pfVar18 = fVar24;
                        }
                      }
                    }
                  }
                  if ((fVar24 < *pfVar19) || (*pfVar18 < fVar24)) {
                    bVar5 = false;
                  }
                  else {
                    bVar5 = true;
                  }
                  if ((fVar26 < *pfVar19) || (*pfVar18 < fVar26)) {
                    bVar6 = false;
                  }
                  else {
                    bVar6 = true;
                  }
                  if ((bVar5) && (bVar6)) {
                    *(undefined1 *)(*(longlong *)(local_b0 + lVar16 * 0x10) + 0x1c) = 0;
                  }
                  if (bVar7) {
                    piVar15 = *(int **)(local_b0 + lVar16 * 0x10);
                    goto LAB_144fc7713;
                  }
                }
              }
            }
          }
        }
        piVar12 = piVar12 + 2;
        uVar21 = uVar21 - 1;
        uVar20 = local_98;
      } while (uVar21 != 0);
    }
    lVar22 = lVar22 + 1;
    lVar14 = lVar14 + -1;
    piVar12 = local_a0;
    if (lVar14 == 0) {
      *param_1 = 0;
      if ((-1 < (int)local_94) && (local_a0 != (int *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_a0,(ulonglong)(local_94 & 0x7fffffff) << 3);
      }
      if ((-1 < (int)local_a4) && (local_b0 != 0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_b0,(ulonglong)(local_a4 & 0x7fffffff) << 4);
      }
      return param_1;
    }
  } while( true );
}



// FUNCTION 144fc7800 FUN_144fc7800 body=4161 status=ok
// SIG undefined FUN_144fc7800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144fc7800(float *param_1,float *param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
             undefined4 param_10,undefined4 *param_11)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined8 uVar14;
  float *pfVar15;
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
  float fVar29;
  float fVar37;
  float fVar38;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar39;
  undefined1 auVar40 [12];
  float fVar54;
  undefined1 auVar41 [16];
  float fVar55;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar56;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar67;
  float fVar68;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [12];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar92 [16];
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined8 local_res18;
  undefined4 local_res20 [2];
  undefined4 local_388 [4];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  float local_350;
  undefined1 local_348 [8];
  float fStack_340;
  float fStack_33c;
  undefined1 local_338 [8];
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float local_198 [4];
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178 [4];
  float local_168 [4];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [184];
  
  uVar10 = param_9;
  uVar9 = param_8;
  lVar8 = param_5;
  local_188 = *(undefined8 *)param_2;
  uStack_180 = *(undefined8 *)(param_2 + 2);
  param_8 = param_7;
  local_res18 = param_3;
  piVar12 = (int *)FUN_144c46e20(param_4,&param_8);
  param_5._0_4_ = uVar9;
  piVar13 = (int *)FUN_144c46e20(lVar8,&param_5);
  lVar3 = *(longlong *)(param_4 + 0x20);
  iVar1 = *piVar12;
  iVar2 = *(int *)(lVar3 + 0x40);
  if (iVar1 < iVar2) {
    pfVar15 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar15 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar29 = *pfVar15;
  fVar37 = pfVar15[1];
  fVar38 = pfVar15[2];
  iVar1 = piVar12[1];
  fVar89 = fVar29 * *(float *)(param_4 + 0x60) + fVar37 * *(float *)(param_4 + 0x70) +
           fVar38 * *(float *)(param_4 + 0x80) + *(float *)(param_4 + 0x90);
  fVar90 = fVar29 * *(float *)(param_4 + 100) + fVar37 * *(float *)(param_4 + 0x74) +
           fVar38 * *(float *)(param_4 + 0x84) + *(float *)(param_4 + 0x94);
  fVar91 = fVar29 * *(float *)(param_4 + 0x68) + fVar37 * *(float *)(param_4 + 0x78) +
           fVar38 * *(float *)(param_4 + 0x88) + *(float *)(param_4 + 0x98);
  fStack_31c = fVar29 * *(float *)(param_4 + 0x6c) + fVar37 * *(float *)(param_4 + 0x7c) +
               fVar38 * *(float *)(param_4 + 0x8c) + *(float *)(param_4 + 0x9c);
  if (iVar1 < iVar2) {
    pfVar15 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar15 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar29 = *pfVar15;
  fVar37 = pfVar15[1];
  fVar38 = pfVar15[2];
  lVar3 = *(longlong *)(lVar8 + 0x20);
  iVar1 = *piVar13;
  iVar2 = *(int *)(lVar3 + 0x40);
  local_318 = fVar37 * *(float *)(param_4 + 0x70) + fVar29 * *(float *)(param_4 + 0x60) +
              fVar38 * *(float *)(param_4 + 0x80) + *(float *)(param_4 + 0x90);
  fStack_314 = fVar37 * *(float *)(param_4 + 0x74) + fVar29 * *(float *)(param_4 + 100) +
               fVar38 * *(float *)(param_4 + 0x84) + *(float *)(param_4 + 0x94);
  fStack_310 = fVar37 * *(float *)(param_4 + 0x78) + fVar29 * *(float *)(param_4 + 0x68) +
               fVar38 * *(float *)(param_4 + 0x88) + *(float *)(param_4 + 0x98);
  fStack_30c = fVar37 * *(float *)(param_4 + 0x7c) + fVar29 * *(float *)(param_4 + 0x6c) +
               fVar38 * *(float *)(param_4 + 0x8c) + *(float *)(param_4 + 0x9c);
  if (iVar1 < iVar2) {
    pfVar15 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar15 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar29 = *pfVar15;
  fVar37 = pfVar15[1];
  fVar38 = pfVar15[2];
  iVar1 = piVar13[1];
  fVar86 = fVar29 * *(float *)(lVar8 + 0x60) + fVar37 * *(float *)(lVar8 + 0x70) +
           fVar38 * *(float *)(lVar8 + 0x80) + *(float *)(lVar8 + 0x90);
  fVar87 = fVar29 * *(float *)(lVar8 + 100) + fVar37 * *(float *)(lVar8 + 0x74) +
           fVar38 * *(float *)(lVar8 + 0x84) + *(float *)(lVar8 + 0x94);
  fVar88 = fVar29 * *(float *)(lVar8 + 0x68) + fVar37 * *(float *)(lVar8 + 0x78) +
           fVar38 * *(float *)(lVar8 + 0x88) + *(float *)(lVar8 + 0x98);
  fStack_2fc = fVar29 * *(float *)(lVar8 + 0x6c) + fVar37 * *(float *)(lVar8 + 0x7c) +
               fVar38 * *(float *)(lVar8 + 0x8c) + *(float *)(lVar8 + 0x9c);
  if (iVar1 < iVar2) {
    pfVar15 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar15 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar29 = *pfVar15;
  fVar37 = pfVar15[1];
  fVar38 = pfVar15[2];
  fVar76 = local_318 - fVar89;
  fVar77 = fStack_314 - fVar90;
  fVar78 = fStack_310 - fVar91;
  local_258._4_4_ = fRam000000014c6daca4;
  local_258._0_4_ = _DAT_14c6daca0;
  fStack_250 = fRam000000014c6daca8;
  fStack_24c = fRam000000014c6dacac;
  local_238 = _DAT_14c6daca0;
  fStack_234 = fRam000000014c6daca4;
  fStack_230 = fRam000000014c6daca8;
  fStack_22c = fRam000000014c6dacac;
  local_2e8 = (local_318 - fVar89) * 0.0 + fVar89;
  fStack_2e4 = (fStack_314 - fVar90) * 0.0 + fVar90;
  fStack_2e0 = (fStack_310 - fVar91) * 0.0 + fVar91;
  fStack_2dc = (fStack_30c - fStack_31c) * 0.0 + fStack_31c;
  local_268 = 0;
  uStack_260 = 0;
  local_2f8 = fVar29 * *(float *)(lVar8 + 0x60) + fVar37 * *(float *)(lVar8 + 0x70) +
              fVar38 * *(float *)(lVar8 + 0x80) + *(float *)(lVar8 + 0x90);
  fStack_2f4 = fVar29 * *(float *)(lVar8 + 100) + fVar37 * *(float *)(lVar8 + 0x74) +
               fVar38 * *(float *)(lVar8 + 0x84) + *(float *)(lVar8 + 0x94);
  fStack_2f0 = fVar29 * *(float *)(lVar8 + 0x68) + fVar37 * *(float *)(lVar8 + 0x78) +
               fVar38 * *(float *)(lVar8 + 0x88) + *(float *)(lVar8 + 0x98);
  fStack_2ec = fVar29 * *(float *)(lVar8 + 0x6c) + fVar37 * *(float *)(lVar8 + 0x7c) +
               fVar38 * *(float *)(lVar8 + 0x8c) + *(float *)(lVar8 + 0x9c);
  local_248 = 0;
  uStack_240 = 0;
  local_2d8 = _DAT_14c6daca0 * (local_318 - fVar89) + fVar89;
  fStack_2d4 = fRam000000014c6daca4 * (fStack_314 - fVar90) + fVar90;
  fStack_2d0 = fRam000000014c6daca8 * (fStack_310 - fVar91) + fVar91;
  fStack_2cc = fRam000000014c6dacac * (fStack_30c - fStack_31c) + fStack_31c;
  fVar79 = local_2f8 - fVar86;
  fVar80 = fStack_2f4 - fVar87;
  fVar81 = fStack_2f0 - fVar88;
  fVar29 = fVar76 * fVar76;
  fVar37 = fVar77 * fVar77;
  fVar38 = fVar78 * fVar78;
  local_2c8 = (local_2f8 - fVar86) * 0.0 + fVar86;
  fStack_2c4 = (fStack_2f4 - fVar87) * 0.0 + fVar87;
  fStack_2c0 = (fStack_2f0 - fVar88) * 0.0 + fVar88;
  fStack_2bc = (fStack_2ec - fStack_2fc) * 0.0 + fStack_2fc;
  local_2b8 = _DAT_14c6daca0 * (local_2f8 - fVar86) + fVar86;
  fStack_2b4 = fRam000000014c6daca4 * (fStack_2f4 - fVar87) + fVar87;
  fStack_2b0 = fRam000000014c6daca8 * (fStack_2f0 - fVar88) + fVar88;
  fStack_2ac = fRam000000014c6dacac * (fStack_2ec - fStack_2fc) + fStack_2fc;
  auVar85._4_4_ = fVar29;
  auVar85._0_4_ = fVar29;
  auVar85._8_4_ = fVar29;
  auVar85._12_4_ = fVar29;
  auVar92._0_4_ = fVar37 + fVar29 + fVar38;
  auVar92._4_4_ = fVar37 + fVar29 + fVar38;
  auVar92._8_4_ = fVar37 + fVar29 + fVar38;
  auVar92._12_4_ = fVar37 + fVar29 + fVar38;
  if (auVar92._0_4_ == 0.0) {
    _local_348 = ZEXT816(0);
  }
  else {
    auVar85 = sqrtps(auVar85,auVar92);
    auVar65._4_4_ = fVar77;
    auVar65._0_4_ = fVar76;
    auVar65._8_4_ = fVar78;
    auVar65._12_4_ = fStack_30c - fStack_31c;
    _local_348 = divps(auVar65,auVar85);
  }
  fVar29 = fVar79 * fVar79;
  fVar37 = fVar80 * fVar80;
  fVar38 = fVar81 * fVar81;
  auVar16._4_4_ = fVar29;
  auVar16._0_4_ = fVar29;
  auVar16._8_4_ = fVar29;
  auVar16._12_4_ = fVar29;
  auVar41._0_4_ = fVar37 + fVar29 + fVar38;
  auVar41._4_4_ = fVar37 + fVar29 + fVar38;
  auVar41._8_4_ = fVar37 + fVar29 + fVar38;
  auVar41._12_4_ = fVar37 + fVar29 + fVar38;
  if (auVar41._0_4_ == 0.0) {
    _local_338 = ZEXT816(0);
  }
  else {
    auVar85 = sqrtps(auVar16,auVar41);
    auVar82._4_4_ = fVar80;
    auVar82._0_4_ = fVar79;
    auVar82._8_4_ = fVar81;
    auVar82._12_4_ = fStack_2ec - fStack_2fc;
    _local_338 = divps(auVar82,auVar85);
  }
  fVar29 = *param_2;
  fVar37 = param_2[1];
  fVar38 = param_2[2];
  fVar56 = param_2[3];
  fVar39 = fVar29 * fVar76;
  fVar54 = fVar37 * fVar77;
  fVar55 = fVar38 * fVar78;
  fVar57 = fVar29 * fVar79;
  fVar67 = fVar37 * fVar80;
  fVar68 = fVar38 * fVar81;
  auVar73._0_4_ = (0.0 - (fVar54 + fVar39 + fVar55)) * fVar29 + fVar76;
  auVar73._4_4_ = (0.0 - (fVar54 + fVar39 + fVar55)) * fVar37 + fVar77;
  auVar73._8_4_ = (0.0 - (fVar54 + fVar39 + fVar55)) * fVar38 + fVar78;
  auVar73._12_4_ = (0.0 - (fVar54 + fVar39 + fVar55)) * fVar56 + (fStack_30c - fStack_31c);
  fVar76 = auVar73._0_4_ * auVar73._0_4_;
  fVar77 = auVar73._4_4_ * auVar73._4_4_;
  fVar78 = auVar73._8_4_ * auVar73._8_4_;
  auVar17._4_4_ = fVar76;
  auVar17._0_4_ = fVar76;
  auVar17._8_4_ = fVar76;
  auVar17._12_4_ = fVar76;
  auVar42._0_4_ = (0.0 - (fVar67 + fVar57 + fVar68)) * fVar29 + fVar79;
  auVar42._4_4_ = (0.0 - (fVar67 + fVar57 + fVar68)) * fVar37 + fVar80;
  auVar42._8_4_ = (0.0 - (fVar67 + fVar57 + fVar68)) * fVar38 + fVar81;
  auVar42._12_4_ = (0.0 - (fVar67 + fVar57 + fVar68)) * fVar56 + (fStack_2ec - fStack_2fc);
  auVar58._0_4_ = fVar77 + fVar76 + fVar78;
  auVar58._4_4_ = fVar77 + fVar76 + fVar78;
  auVar58._8_4_ = fVar77 + fVar76 + fVar78;
  auVar58._12_4_ = fVar77 + fVar76 + fVar78;
  if (auVar58._0_4_ == 0.0) {
    auVar72 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar85 = sqrtps(auVar17,auVar58);
    auVar85 = divps(auVar73,auVar85);
    auVar72 = auVar85._0_12_;
  }
  fVar76 = auVar42._0_4_ * auVar42._0_4_;
  fVar77 = auVar42._4_4_ * auVar42._4_4_;
  fVar78 = auVar42._8_4_ * auVar42._8_4_;
  auVar18._4_4_ = fVar76;
  auVar18._0_4_ = fVar76;
  auVar18._8_4_ = fVar76;
  auVar18._12_4_ = fVar76;
  auVar59._0_4_ = fVar77 + fVar76 + fVar78;
  auVar59._4_4_ = fVar77 + fVar76 + fVar78;
  auVar59._8_4_ = fVar77 + fVar76 + fVar78;
  auVar59._12_4_ = fVar77 + fVar76 + fVar78;
  if (auVar59._0_4_ == 0.0) {
    auVar40 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar85 = sqrtps(auVar18,auVar59);
    auVar85 = divps(auVar42,auVar85);
    auVar40 = auVar85._0_12_;
  }
  fVar76 = 0.0 - (auVar72._4_4_ * auVar40._4_4_ + auVar72._0_4_ * auVar40._0_4_ +
                 auVar72._8_4_ * auVar40._8_4_);
  if (fVar76 < param_1[4]) {
    return 0;
  }
  fVar39 = local_348._0_4_;
  fVar54 = local_348._4_4_;
  fVar55 = local_348._8_4_;
  fVar79 = local_338._0_4_;
  fVar80 = local_338._4_4_;
  fVar81 = local_338._8_4_;
  fVar78 = local_348._12_4_ - local_338._12_4_;
  fVar77 = fVar37 * (fVar39 - fVar79) - (fVar54 - fVar80) * fVar29;
  fVar37 = fVar38 * (fVar54 - fVar80) - (fVar55 - fVar81) * fVar37;
  fVar29 = fVar29 * (fVar55 - fVar81) - (fVar39 - fVar79) * fVar38;
  auVar69._12_4_ = fVar56 * fVar78 - fVar78 * fVar56;
  auVar69._4_4_ = fVar29;
  auVar69._0_4_ = fVar37;
  auVar69._8_4_ = fVar77;
  fVar37 = fVar37 * fVar37;
  fVar29 = fVar29 * fVar29;
  fVar77 = fVar77 * fVar77;
  auVar19._4_4_ = fVar37;
  auVar19._0_4_ = fVar37;
  auVar19._8_4_ = fVar37;
  auVar19._12_4_ = fVar37;
  auVar43._0_4_ = fVar29 + fVar37 + fVar77;
  auVar43._4_4_ = fVar29 + fVar37 + fVar77;
  auVar43._8_4_ = fVar29 + fVar37 + fVar77;
  auVar43._12_4_ = fVar29 + fVar37 + fVar77;
  if (auVar43._0_4_ == 0.0) {
    auVar85 = ZEXT816(0);
  }
  else {
    auVar85 = sqrtps(auVar19,auVar43);
    auVar85 = divps(auVar69,auVar85);
  }
  fVar57 = auVar85._0_4_;
  fVar29 = fVar39 * fVar57;
  fVar67 = auVar85._4_4_;
  fVar37 = fVar54 * fVar67;
  fVar68 = auVar85._8_4_;
  fVar38 = fVar55 * fVar68;
  fVar77 = fVar57 * fVar79;
  fVar78 = fVar67 * fVar80;
  fVar56 = fVar68 * fVar81;
  auVar60._0_4_ = (0.0 - (fVar37 + fVar29 + fVar38)) * fVar57 + fVar39;
  auVar60._4_4_ = (0.0 - (fVar37 + fVar29 + fVar38)) * fVar67 + fVar54;
  auVar60._8_4_ = (0.0 - (fVar37 + fVar29 + fVar38)) * fVar68 + fVar55;
  auVar60._12_4_ = (0.0 - (fVar37 + fVar29 + fVar38)) * auVar85._12_4_ + local_348._12_4_;
  fVar29 = auVar60._0_4_ * auVar60._0_4_;
  fVar37 = auVar60._4_4_ * auVar60._4_4_;
  fVar38 = auVar60._8_4_ * auVar60._8_4_;
  auVar20._4_4_ = fVar29;
  auVar20._0_4_ = fVar29;
  auVar20._8_4_ = fVar29;
  auVar20._12_4_ = fVar29;
  auVar74._0_4_ = (0.0 - (fVar78 + fVar77 + fVar56)) * fVar57 + fVar79;
  auVar74._4_4_ = (0.0 - (fVar78 + fVar77 + fVar56)) * fVar67 + fVar80;
  auVar74._8_4_ = (0.0 - (fVar78 + fVar77 + fVar56)) * fVar68 + fVar81;
  auVar74._12_4_ = (0.0 - (fVar78 + fVar77 + fVar56)) * auVar85._12_4_ + local_338._12_4_;
  auVar44._0_4_ = fVar37 + fVar29 + fVar38;
  auVar44._4_4_ = fVar37 + fVar29 + fVar38;
  auVar44._8_4_ = fVar37 + fVar29 + fVar38;
  auVar44._12_4_ = fVar37 + fVar29 + fVar38;
  if (auVar44._0_4_ == 0.0) {
    auVar72 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar85 = sqrtps(auVar20,auVar44);
    auVar85 = divps(auVar60,auVar85);
    auVar72 = auVar85._0_12_;
  }
  fVar29 = auVar74._0_4_ * auVar74._0_4_;
  fVar37 = auVar74._4_4_ * auVar74._4_4_;
  fVar38 = auVar74._8_4_ * auVar74._8_4_;
  auVar21._4_4_ = fVar29;
  auVar21._0_4_ = fVar29;
  auVar21._8_4_ = fVar29;
  auVar21._12_4_ = fVar29;
  auVar45._0_4_ = fVar37 + fVar29 + fVar38;
  auVar45._4_4_ = fVar37 + fVar29 + fVar38;
  auVar45._8_4_ = fVar37 + fVar29 + fVar38;
  auVar45._12_4_ = fVar37 + fVar29 + fVar38;
  if (auVar45._0_4_ == 0.0) {
    auVar40 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar85 = sqrtps(auVar21,auVar45);
    auVar85 = divps(auVar74,auVar85);
    auVar40 = auVar85._0_12_;
  }
  if (-(auVar72._4_4_ * auVar40._4_4_ + auVar72._0_4_ * auVar40._0_4_ +
       auVar72._8_4_ * auVar40._8_4_) < param_1[5]) {
    return 1;
  }
  local_328 = fVar89;
  fStack_324 = fVar90;
  fStack_320 = fVar91;
  local_308 = fVar86;
  fStack_304 = fVar87;
  fStack_300 = fVar88;
  uVar14 = FUN_144fc9970(&local_328,param_1,param_2,local_348,local_338,&local_1d8,&local_1e8,
                         &local_1b8,&local_1c8,local_res8);
  puVar11 = param_11;
  if ((int)uVar14 != -1) {
    return uVar14;
  }
  param_11[4] = 0xbf800000;
  param_11[5] = fVar76;
  param_11[6] = local_res8[0];
  *param_11 = param_7;
  param_11[1] = uVar9;
  param_11[2] = uVar10;
  param_11[3] = param_10;
  *(undefined1 *)(param_11 + 7) = 1;
  local_258._4_4_ = fRam000000014c6daca4;
  local_258._0_4_ = _DAT_14c6daca0;
  fStack_250 = fRam000000014c6daca8;
  fStack_24c = fRam000000014c6dacac;
  auVar22._0_4_ = local_1e8 - local_1d8;
  auVar22._4_4_ = fStack_1e4 - fStack_1d4;
  auVar22._8_4_ = fStack_1e0 - fStack_1d0;
  auVar22._12_4_ = fStack_1dc - fStack_1cc;
  local_res10 = 0x3a83126f;
  auVar92 = divps(_local_258,auVar22);
  auVar23._0_4_ = local_1c8 - local_1b8;
  auVar23._4_4_ = fStack_1c4 - fStack_1b4;
  auVar23._8_4_ = fStack_1c0 - fStack_1b0;
  auVar23._12_4_ = fStack_1bc - fStack_1ac;
  auVar85 = divps(_local_258,auVar23);
  if (0.001 < ABS(local_1d8 - local_1b8)) {
    if (local_1d8 <= local_1b8) {
      fVar29 = (local_1b8 - local_1d8) * auVar92._0_4_;
      fVar37 = (fStack_1b4 - fStack_1d4) * auVar92._4_4_;
      fVar38 = (fStack_1b0 - fStack_1d0) * auVar92._8_4_;
      fVar76 = (fStack_1ac - fStack_1cc) * auVar92._12_4_;
      goto LAB_144fc7edb;
    }
    fVar29 = 0.0;
    fVar37 = 0.0;
    fVar38 = 0.0;
    fVar76 = 0.0;
    local_238 = auVar85._0_4_ * (local_1d8 - local_1b8);
    fStack_234 = auVar85._4_4_ * (fStack_1d4 - fStack_1b4);
    fStack_230 = auVar85._8_4_ * (fStack_1d0 - fStack_1b0);
    fStack_22c = auVar85._12_4_ * (fStack_1cc - fStack_1ac);
  }
  else {
    fVar29 = 0.0;
    fVar37 = 0.0;
    fVar38 = 0.0;
    fVar76 = 0.0;
LAB_144fc7edb:
    local_238 = 0.0;
    fStack_234 = 0.0;
    fStack_230 = 0.0;
    fStack_22c = 0.0;
  }
  auVar46 = _local_258;
  if (0.001 < ABS(local_1e8 - local_1c8)) {
    if (local_1e8 <= local_1c8) {
      auVar46._0_4_ = (local_1e8 - local_1b8) * auVar85._0_4_;
      auVar46._4_4_ = (fStack_1e4 - fStack_1b4) * auVar85._4_4_;
      auVar46._8_4_ = (fStack_1e0 - fStack_1b0) * auVar85._8_4_;
      auVar46._12_4_ = (fStack_1dc - fStack_1ac) * auVar85._12_4_;
    }
    else {
      auVar70._0_4_ = (local_1c8 - local_1d8) * auVar92._0_4_;
      auVar70._4_4_ = (fStack_1c4 - fStack_1d4) * auVar92._4_4_;
      auVar70._8_4_ = (fStack_1c0 - fStack_1d0) * auVar92._8_4_;
      auVar70._12_4_ = (fStack_1bc - fStack_1cc) * auVar92._12_4_;
      _local_258 = auVar70;
    }
  }
  fVar77 = _DAT_14c6daca0 - auVar46._0_4_;
  fVar78 = fRam000000014c6daca4 - auVar46._4_4_;
  fVar79 = fRam000000014c6daca8 - auVar46._8_4_;
  fVar80 = fRam000000014c6dacac - auVar46._12_4_;
  local_238 = _DAT_14c6daca0 - local_238;
  fStack_234 = fRam000000014c6daca4 - fStack_234;
  fStack_230 = fRam000000014c6daca8 - fStack_230;
  fStack_22c = fRam000000014c6dacac - fStack_22c;
  local_268 = CONCAT44(fVar37,fVar29);
  uStack_260 = CONCAT44(fVar76,fVar38);
  local_248 = CONCAT44(fVar78,fVar77);
  uStack_240 = CONCAT44(fVar80,fVar79);
  local_2e8 = fVar29 * (local_318 - local_328) + local_328;
  fStack_2e4 = fVar37 * (fStack_314 - fStack_324) + fStack_324;
  fStack_2e0 = fVar38 * (fStack_310 - fStack_320) + fStack_320;
  fStack_2dc = fVar76 * (fStack_30c - fStack_31c) + fStack_31c;
  local_2d8 = local_258._0_4_ * (local_318 - local_328) + local_328;
  fStack_2d4 = local_258._4_4_ * (fStack_314 - fStack_324) + fStack_324;
  fStack_2d0 = local_258._8_4_ * (fStack_310 - fStack_320) + fStack_320;
  fStack_2cc = local_258._12_4_ * (fStack_30c - fStack_31c) + fStack_31c;
  local_2b8 = local_238 * (local_2f8 - local_308) + local_308;
  fStack_2b4 = fStack_234 * (fStack_2f4 - fStack_304) + fStack_304;
  fStack_2b0 = fStack_230 * (fStack_2f0 - fStack_300) + fStack_300;
  fStack_2ac = fStack_22c * (fStack_2ec - fStack_2fc) + fStack_2fc;
  local_2c8 = (local_2f8 - local_308) * fVar77 + local_308;
  fStack_2c4 = (fStack_2f4 - fStack_304) * fVar78 + fStack_304;
  fStack_2c0 = (fStack_2f0 - fStack_300) * fVar79 + fStack_300;
  fStack_2bc = (fStack_2ec - fStack_2fc) * fVar80 + fStack_2fc;
  if ((local_258._0_4_ <= fVar29) || (local_238 <= fVar77)) {
    return 5;
  }
  FUN_144fc94b0(&local_328,local_118,&local_1a8);
  lVar3 = param_6;
  if (*param_1 < ABS(fStack_1a4 * param_2[1] + local_1a8 * *param_2 + fStack_1a0 * param_2[2])) {
    return 6;
  }
  if ((param_6 != 0) && (uVar14 = FUN_144fc9b70(&local_328,param_1,param_2,0), (int)uVar14 != -1)) {
    return uVar14;
  }
  FUN_144fc93d0(&local_328,param_2);
  fVar29 = param_1[1] * param_1[1];
  local_350 = fVar29;
  FUN_144fc9710(&local_328,local_198);
  if (fVar29 < local_198[0]) {
    return 2;
  }
  if ((lVar3 != 0) && (uVar14 = FUN_144fc9b70(&local_328,param_1,param_2,1), (int)uVar14 != -1)) {
    return uVar14;
  }
  puVar11[8] = (undefined4)local_268;
  puVar11[9] = local_258._0_4_;
  puVar11[10] = (undefined4)local_248;
  puVar11[0xb] = local_238;
  FUN_144fc93d0(&local_328,param_2);
  fVar79 = local_288 - local_278;
  fVar81 = fStack_284 - fStack_274;
  fVar39 = fStack_280 - fStack_270;
  fVar76 = fVar79 * fVar79;
  fVar77 = fVar81 * fVar81;
  fVar78 = fVar39 * fVar39;
  fVar68 = local_288 - ((local_298 - local_2a8) * _DAT_14c6dad90 + local_2a8);
  fVar83 = fStack_284 - ((fStack_294 - fStack_2a4) * fRam000000014c6dad94 + fStack_2a4);
  fVar84 = fStack_280 - ((fStack_290 - fStack_2a0) * fRam000000014c6dad98 + fStack_2a0);
  fVar29 = fVar68 * fVar79;
  fVar37 = fVar83 * fVar81;
  fVar38 = fVar84 * fVar39;
  auVar61._0_4_ = fVar37 + fVar29 + fVar38;
  auVar61._4_4_ = fVar37 + fVar29 + fVar38;
  auVar61._8_4_ = fVar37 + fVar29 + fVar38;
  auVar61._12_4_ = fVar37 + fVar29 + fVar38;
  auVar30._0_4_ = fVar77 + fVar76 + fVar78;
  auVar30._4_4_ = fVar77 + fVar76 + fVar78;
  auVar30._8_4_ = fVar77 + fVar76 + fVar78;
  auVar30._12_4_ = fVar77 + fVar76 + fVar78;
  auVar85 = divps(auVar61,auVar30);
  auVar85 = minps(auVar85,_DAT_1499314a0);
  auVar85 = maxps(auVar85,ZEXT816(0));
  fVar80 = local_2a8 - local_298;
  fVar56 = fStack_2a4 - fStack_294;
  fVar54 = fStack_2a0 - fStack_290;
  fVar55 = local_2a8 - ((local_278 - local_288) * _DAT_14c6dad90 + local_288);
  fVar57 = fStack_2a4 - ((fStack_274 - fStack_284) * fRam000000014c6dad94 + fStack_284);
  fVar67 = fStack_2a0 - ((fStack_270 - fStack_280) * fRam000000014c6dad98 + fStack_280);
  fVar68 = fVar68 - auVar85._0_4_ * fVar79;
  fVar83 = fVar83 - auVar85._4_4_ * fVar81;
  fVar84 = fVar84 - auVar85._8_4_ * fVar39;
  fVar76 = fVar80 * fVar80;
  fVar77 = fVar56 * fVar56;
  fVar78 = fVar54 * fVar54;
  fVar29 = fVar55 * fVar80;
  fVar37 = fVar57 * fVar56;
  fVar38 = fVar67 * fVar54;
  fVar68 = fVar68 * fVar68;
  fVar83 = fVar83 * fVar83;
  fVar84 = fVar84 * fVar84;
  auVar62._0_4_ = fVar37 + fVar29 + fVar38;
  auVar62._4_4_ = fVar37 + fVar29 + fVar38;
  auVar62._8_4_ = fVar37 + fVar29 + fVar38;
  auVar62._12_4_ = fVar37 + fVar29 + fVar38;
  auVar31._0_4_ = fVar77 + fVar76 + fVar78;
  auVar31._4_4_ = fVar77 + fVar76 + fVar78;
  auVar31._8_4_ = fVar77 + fVar76 + fVar78;
  auVar31._12_4_ = fVar77 + fVar76 + fVar78;
  auVar85 = divps(auVar62,auVar31);
  auVar85 = minps(auVar85,_DAT_1499314a0);
  auVar85 = maxps(auVar85,ZEXT816(0));
  auVar63._0_4_ = auVar85._0_4_ * fVar80;
  auVar63._4_4_ = auVar85._4_4_ * fVar56;
  auVar63._8_4_ = auVar85._8_4_ * fVar54;
  auVar63._12_4_ = auVar85._12_4_ * (fStack_29c - fStack_28c);
  fVar55 = fVar55 - auVar63._0_4_;
  fVar57 = fVar57 - auVar63._4_4_;
  fVar67 = fVar67 - auVar63._8_4_;
  fVar55 = fVar55 * fVar55;
  fVar57 = fVar57 * fVar57;
  fVar67 = fVar67 * fVar67;
  auVar24._4_4_ = fVar68;
  auVar24._0_4_ = fVar68;
  auVar24._8_4_ = fVar68;
  auVar24._12_4_ = fVar68;
  auVar32._0_4_ = fVar57 + fVar55 + fVar67;
  auVar32._4_4_ = fVar57 + fVar55 + fVar67;
  auVar32._8_4_ = fVar57 + fVar55 + fVar67;
  auVar32._12_4_ = fVar57 + fVar55 + fVar67;
  auVar47._0_4_ = fVar83 + fVar68 + fVar84;
  auVar47._4_4_ = fVar83 + fVar68 + fVar84;
  auVar47._8_4_ = fVar83 + fVar68 + fVar84;
  auVar47._12_4_ = fVar83 + fVar68 + fVar84;
  auVar92 = sqrtps(auVar63,auVar32);
  auVar85 = sqrtps(auVar24,auVar47);
  fVar29 = (auVar92._0_4_ + auVar85._0_4_) * _DAT_14c6dad90;
  puVar11[4] = fVar29 * fVar29;
  fVar77 = (float)local_348._0_4_ * local_188._4_4_ - (float)local_348._4_4_ * (float)local_188;
  fVar29 = (float)local_348._4_4_ * (float)uStack_180 - fStack_340 * local_188._4_4_;
  fVar38 = fStack_340 * (float)local_188 - (float)local_348._0_4_ * (float)uStack_180;
  auVar75._12_4_ = fStack_33c * uStack_180._4_4_ - fStack_33c * uStack_180._4_4_;
  auVar75._4_4_ = fVar38;
  auVar75._0_4_ = fVar29;
  auVar75._8_4_ = fVar77;
  fVar78 = local_188._4_4_ * (float)local_338._0_4_ - (float)local_338._4_4_ * (float)local_188;
  fVar37 = (float)uStack_180 * (float)local_338._4_4_ - fStack_330 * local_188._4_4_;
  fVar76 = (float)local_188 * fStack_330 - (float)local_338._0_4_ * (float)uStack_180;
  auVar71._12_4_ = uStack_180._4_4_ * fStack_32c - fStack_32c * uStack_180._4_4_;
  fVar29 = fVar29 * fVar29;
  fVar38 = fVar38 * fVar38;
  fVar77 = fVar77 * fVar77;
  auVar71._4_4_ = fVar76;
  auVar71._0_4_ = fVar37;
  auVar71._8_4_ = fVar78;
  auVar25._4_4_ = fVar29;
  auVar25._0_4_ = fVar29;
  auVar25._8_4_ = fVar29;
  auVar25._12_4_ = fVar29;
  auVar48._0_4_ = fVar38 + fVar29 + fVar77;
  auVar48._4_4_ = fVar38 + fVar29 + fVar77;
  auVar48._8_4_ = fVar38 + fVar29 + fVar77;
  auVar48._12_4_ = fVar38 + fVar29 + fVar77;
  if (auVar48._0_4_ == 0.0) {
    auVar72 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar85 = sqrtps(auVar25,auVar48);
    auVar85 = divps(auVar75,auVar85);
    auVar72 = auVar85._0_12_;
  }
  fVar38 = auVar72._0_4_;
  fVar77 = auVar72._4_4_;
  fVar79 = auVar72._8_4_;
  fVar29 = 0.0 - (fVar77 * fVar90 + fVar38 * fVar89 + fVar79 * fVar91);
  local_368._12_4_ = fVar29;
  local_368._0_12_ = auVar72;
  fVar37 = fVar37 * fVar37;
  fVar76 = fVar76 * fVar76;
  fVar78 = fVar78 * fVar78;
  auVar26._4_4_ = fVar37;
  auVar26._0_4_ = fVar37;
  auVar26._8_4_ = fVar37;
  auVar26._12_4_ = fVar37;
  auVar49._0_4_ = fVar76 + fVar37 + fVar78;
  auVar49._4_4_ = fVar76 + fVar37 + fVar78;
  auVar49._8_4_ = fVar76 + fVar37 + fVar78;
  auVar49._12_4_ = fVar76 + fVar37 + fVar78;
  if (auVar49._0_4_ == 0.0) {
    auVar72 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar85 = sqrtps(auVar26,auVar49);
    auVar85 = divps(auVar71,auVar85);
    auVar72 = auVar85._0_12_;
  }
  fVar90 = auVar72._0_4_;
  fVar91 = auVar72._4_4_;
  fVar76 = auVar72._8_4_;
  fVar37 = 0.0 - (fVar87 * fVar91 + fVar86 * fVar90 + fVar88 * fVar76);
  local_378._12_4_ = fVar37;
  local_378._0_12_ = auVar72;
  fVar89 = 0.0 - param_1[2];
  if ((((fVar29 + fVar79 * fStack_2c0 + fVar77 * fStack_2c4 + fVar38 * local_2c8 < fVar89) ||
       (fVar29 + fStack_2b0 * fVar79 + fStack_2b4 * fVar77 + local_2b8 * fVar38 < fVar89)) ||
      (fVar37 + fVar76 * fStack_2e0 + fVar91 * fStack_2e4 + fVar90 * local_2e8 < fVar89)) ||
     (fVar37 + fStack_2d0 * fVar76 + fStack_2d4 * fVar91 + local_2d8 * fVar90 < fVar89)) {
    return 7;
  }
  fVar29 = param_1[3];
  FUN_144fca050(local_178,lVar8,param_10,local_368,0);
  if ((local_178[0] < fVar29) ||
     (FUN_144fca050(local_168,param_4,uVar10,local_378,0), local_168[0] < fVar29)) {
    return 8;
  }
  if ((lVar3 != 0) || (0.0 < fVar29)) {
    local_378._0_8_ = local_378._0_8_ ^ 0x8000000080000000;
    local_378._8_4_ = local_378._8_4_ ^ 0x80000000;
    local_378._12_4_ = local_378._12_4_ ^ 0x80000000;
    local_368._0_8_ = local_368._0_8_ ^ 0x8000000080000000;
    local_368._8_4_ = local_368._8_4_ ^ 0x80000000;
    local_368._12_4_ = local_368._12_4_ ^ 0x80000000;
    FUN_144fca220(local_158,param_4,uVar10,local_368,&local_228);
    FUN_144fca220(local_148,lVar8,param_10,local_378,&local_218);
    if (0.0 < local_158._0_4_) {
      if (0.0 < local_148._0_4_) {
        if (*(char *)(param_1 + 0xd) == '\0') {
          local_1f8 = local_158;
        }
        else {
          fVar29 = *param_2;
          fVar37 = param_2[1];
          fVar38 = param_2[2];
          fVar89 = local_228 * fVar29;
          fVar91 = fStack_224 * fVar37;
          fVar87 = fStack_220 * fVar38;
          fVar90 = local_218 * fVar29;
          fVar86 = fStack_214 * fVar37;
          fVar88 = fStack_210 * fVar38;
          local_228 = local_228 - (fVar91 + fVar89 + fVar87) * fVar29;
          fStack_224 = fStack_224 - (fVar91 + fVar89 + fVar87) * fVar37;
          fStack_220 = fStack_220 - (fVar91 + fVar89 + fVar87) * fVar38;
          fStack_21c = fStack_21c - (fVar91 + fVar89 + fVar87) * param_2[3];
          auVar64._0_4_ = local_2a8 - local_298;
          auVar64._4_4_ = fStack_2a4 - fStack_294;
          auVar64._8_4_ = fStack_2a0 - fStack_290;
          auVar64._12_4_ = fStack_29c - fStack_28c;
          local_218 = local_218 - (fVar86 + fVar90 + fVar88) * fVar29;
          fStack_214 = fStack_214 - (fVar86 + fVar90 + fVar88) * fVar37;
          fStack_210 = fStack_210 - (fVar86 + fVar90 + fVar88) * fVar38;
          fStack_20c = fStack_20c - (fVar86 + fVar90 + fVar88) * param_2[3];
          fVar29 = auVar64._0_4_ * auVar64._0_4_;
          fVar37 = auVar64._4_4_ * auVar64._4_4_;
          fVar38 = auVar64._8_4_ * auVar64._8_4_;
          fVar90 = fVar37 + fVar29 + fVar38;
          fVar91 = fVar37 + fVar29 + fVar38;
          fVar86 = fVar37 + fVar29 + fVar38;
          fVar38 = fVar37 + fVar29 + fVar38;
          fVar29 = (local_2a8 - local_228) * auVar64._0_4_;
          fVar37 = (fStack_2a4 - fStack_224) * auVar64._4_4_;
          fVar89 = (fStack_2a0 - fStack_220) * auVar64._8_4_;
          auVar50._0_4_ = fVar37 + fVar29 + fVar89;
          auVar50._4_4_ = fVar37 + fVar29 + fVar89;
          auVar50._8_4_ = fVar37 + fVar29 + fVar89;
          auVar50._12_4_ = fVar37 + fVar29 + fVar89;
          auVar4._4_4_ = fVar91;
          auVar4._0_4_ = fVar90;
          auVar4._8_4_ = fVar86;
          auVar4._12_4_ = fVar38;
          auVar85 = divps(auVar50,auVar4);
          fVar29 = ((local_2a8 - local_228) - auVar85._0_4_ * auVar64._0_4_) + local_228;
          fVar37 = ((fStack_2a4 - fStack_224) - auVar85._4_4_ * auVar64._4_4_) + fStack_224;
          fVar89 = ((fStack_2a0 - fStack_220) - auVar85._8_4_ * auVar64._8_4_) + fStack_220;
          local_2a8 = local_2a8 - fVar29;
          fStack_2a4 = fStack_2a4 - fVar37;
          fStack_2a0 = fStack_2a0 - fVar89;
          local_298 = local_298 - fVar29;
          fStack_294 = fStack_294 - fVar37;
          fStack_290 = fStack_290 - fVar89;
          local_2a8 = local_2a8 * local_2a8;
          fStack_2a4 = fStack_2a4 * fStack_2a4;
          fStack_2a0 = fStack_2a0 * fStack_2a0;
          local_298 = local_298 * local_298;
          fStack_294 = fStack_294 * fStack_294;
          fStack_290 = fStack_290 * fStack_290;
          auVar27._4_4_ = fStack_294;
          auVar27._0_4_ = fStack_294;
          auVar27._8_4_ = fStack_294;
          auVar27._12_4_ = fStack_294;
          auVar33._0_4_ = fStack_2a4 + local_2a8 + fStack_2a0;
          auVar33._4_4_ = fStack_2a4 + local_2a8 + fStack_2a0;
          auVar33._8_4_ = fStack_2a4 + local_2a8 + fStack_2a0;
          auVar33._12_4_ = fStack_2a4 + local_2a8 + fStack_2a0;
          auVar51._0_4_ = local_298 + fStack_294 + fStack_290;
          auVar51._4_4_ = local_298 + fStack_294 + fStack_290;
          auVar51._8_4_ = local_298 + fStack_294 + fStack_290;
          auVar51._12_4_ = local_298 + fStack_294 + fStack_290;
          auVar65 = sqrtps(auVar64,auVar33);
          auVar85 = sqrtps(auVar27,auVar51);
          auVar5._4_4_ = fVar91;
          auVar5._0_4_ = fVar90;
          auVar5._8_4_ = fVar86;
          auVar5._12_4_ = fVar38;
          auVar92 = sqrtps(auVar33,auVar5);
          auVar85 = maxps(auVar65,auVar85);
          auVar34._0_4_ = auVar92._0_4_ * _DAT_14c6dad90 * local_158._0_4_;
          auVar34._4_4_ = auVar92._4_4_ * fRam000000014c6dad94 * local_158._4_4_;
          auVar34._8_4_ = auVar92._8_4_ * fRam000000014c6dad98 * local_158._8_4_;
          auVar34._12_4_ = auVar92._12_4_ * fRam000000014c6dad9c * local_158._12_4_;
          auVar85 = divps(auVar34,auVar85);
          local_1f8 = minps(local_158,auVar85);
          auVar66._0_4_ = local_288 - local_278;
          auVar66._4_4_ = fStack_284 - fStack_274;
          auVar66._8_4_ = fStack_280 - fStack_270;
          auVar66._12_4_ = fStack_27c - fStack_26c;
          fVar29 = auVar66._0_4_ * auVar66._0_4_;
          fVar37 = auVar66._4_4_ * auVar66._4_4_;
          fVar38 = auVar66._8_4_ * auVar66._8_4_;
          fVar90 = fVar37 + fVar29 + fVar38;
          fVar91 = fVar37 + fVar29 + fVar38;
          fVar86 = fVar37 + fVar29 + fVar38;
          fVar38 = fVar37 + fVar29 + fVar38;
          fVar29 = (local_288 - local_218) * auVar66._0_4_;
          fVar37 = (fStack_284 - fStack_214) * auVar66._4_4_;
          fVar89 = (fStack_280 - fStack_210) * auVar66._8_4_;
          auVar52._0_4_ = fVar37 + fVar29 + fVar89;
          auVar52._4_4_ = fVar37 + fVar29 + fVar89;
          auVar52._8_4_ = fVar37 + fVar29 + fVar89;
          auVar52._12_4_ = fVar37 + fVar29 + fVar89;
          auVar6._4_4_ = fVar91;
          auVar6._0_4_ = fVar90;
          auVar6._8_4_ = fVar86;
          auVar6._12_4_ = fVar38;
          auVar85 = divps(auVar52,auVar6);
          fVar29 = ((local_288 - local_218) - auVar85._0_4_ * auVar66._0_4_) + local_218;
          fVar37 = ((fStack_284 - fStack_214) - auVar85._4_4_ * auVar66._4_4_) + fStack_214;
          fVar89 = ((fStack_280 - fStack_210) - auVar85._8_4_ * auVar66._8_4_) + fStack_210;
          local_288 = local_288 - fVar29;
          fStack_284 = fStack_284 - fVar37;
          fStack_280 = fStack_280 - fVar89;
          local_278 = local_278 - fVar29;
          fStack_274 = fStack_274 - fVar37;
          fStack_270 = fStack_270 - fVar89;
          local_288 = local_288 * local_288;
          fStack_284 = fStack_284 * fStack_284;
          fStack_280 = fStack_280 * fStack_280;
          local_278 = local_278 * local_278;
          fStack_274 = fStack_274 * fStack_274;
          fStack_270 = fStack_270 * fStack_270;
          auVar28._4_4_ = local_278;
          auVar28._0_4_ = local_278;
          auVar28._8_4_ = local_278;
          auVar28._12_4_ = local_278;
          auVar35._0_4_ = fStack_284 + local_288 + fStack_280;
          auVar35._4_4_ = fStack_284 + local_288 + fStack_280;
          auVar35._8_4_ = fStack_284 + local_288 + fStack_280;
          auVar35._12_4_ = fStack_284 + local_288 + fStack_280;
          auVar53._0_4_ = fStack_274 + local_278 + fStack_270;
          auVar53._4_4_ = fStack_274 + local_278 + fStack_270;
          auVar53._8_4_ = fStack_274 + local_278 + fStack_270;
          auVar53._12_4_ = fStack_274 + local_278 + fStack_270;
          auVar65 = sqrtps(auVar66,auVar35);
          auVar7._4_4_ = fVar91;
          auVar7._0_4_ = fVar90;
          auVar7._8_4_ = fVar86;
          auVar7._12_4_ = fVar38;
          auVar92 = sqrtps(auVar35,auVar7);
          auVar85 = sqrtps(auVar28,auVar53);
          auVar85 = maxps(auVar65,auVar85);
          auVar36._0_4_ = auVar92._0_4_ * _DAT_14c6dad90 * local_148._0_4_;
          auVar36._4_4_ = auVar92._4_4_ * fRam000000014c6dad94 * local_148._4_4_;
          auVar36._8_4_ = auVar92._8_4_ * fRam000000014c6dad98 * local_148._8_4_;
          auVar36._12_4_ = auVar92._12_4_ * fRam000000014c6dad9c * local_148._12_4_;
          auVar85 = divps(auVar36,auVar85);
          local_148 = minps(local_148,auVar85);
        }
        if (lVar3 != 0) {
          local_res20[0] = uVar10;
          local_208 = local_148;
          FUN_144c52b10(local_108,param_4,local_res20,local_128);
          local_388[0] = param_10;
          FUN_144c52b10(local_f8,lVar8,local_388,local_138);
          uVar14 = FUN_144fc66b0(param_1,param_2,local_res18,lVar3,&local_2e8,&local_2c8,&local_2d8,
                                 &local_2b8,local_128,local_138,local_1f8,local_208,puVar11);
          return uVar14;
        }
        goto LAB_144fc87c8;
      }
    }
    uVar14 = 9;
  }
  else {
LAB_144fc87c8:
    uVar14 = 0xffffffff;
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return uVar14;
}



// FUNCTION 144fc8850 FUN_144fc8850 body=2939 status=ok
// SIG undefined FUN_144fc8850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144fc8850(longlong param_1,float *param_2,undefined8 param_3,longlong param_4,longlong param_5,
             longlong param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
             undefined4 param_10,undefined4 *param_11)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar22;
  float fVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar25 [12];
  float fVar32;
  undefined1 auVar26 [16];
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar34;
  float fVar41;
  float fVar42;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 local_res8 [2];
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  float local_2a0;
  undefined1 local_298 [8];
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118 [4];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [176];
  
  local_res8[0] = param_9;
  FUN_144c52b10(local_108,param_4,local_res8,&local_278);
  local_2e8 = param_10;
  FUN_144c52b10(local_f8,param_5,&local_2e8,&local_288);
  if (fStack_274 * fStack_284 + local_278 * local_288 + fStack_270 * fStack_280 <
      *(float *)(param_1 + 0x24)) {
    return 0xc;
  }
  local_2e4 = param_7;
  piVar4 = (int *)FUN_144c46e20(param_4,&local_2e4);
  local_2e0 = param_8;
  piVar5 = (int *)FUN_144c46e20(param_5,&local_2e0);
  lVar3 = *(longlong *)(param_4 + 0x20);
  iVar1 = *piVar4;
  iVar2 = *(int *)(lVar3 + 0x40);
  if (iVar1 < iVar2) {
    pfVar7 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar7 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar16 = *pfVar7;
  fVar22 = pfVar7[1];
  fVar23 = pfVar7[2];
  iVar1 = piVar4[1];
  fVar55 = fVar16 * *(float *)(param_4 + 0x60) + fVar22 * *(float *)(param_4 + 0x70) +
           fVar23 * *(float *)(param_4 + 0x80) + *(float *)(param_4 + 0x90);
  fVar56 = fVar16 * *(float *)(param_4 + 100) + fVar22 * *(float *)(param_4 + 0x74) +
           fVar23 * *(float *)(param_4 + 0x84) + *(float *)(param_4 + 0x94);
  fVar57 = fVar16 * *(float *)(param_4 + 0x68) + fVar22 * *(float *)(param_4 + 0x78) +
           fVar23 * *(float *)(param_4 + 0x88) + *(float *)(param_4 + 0x98);
  fStack_25c = fVar16 * *(float *)(param_4 + 0x6c) + fVar22 * *(float *)(param_4 + 0x7c) +
               fVar23 * *(float *)(param_4 + 0x8c) + *(float *)(param_4 + 0x9c);
  if (iVar1 < iVar2) {
    pfVar7 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar7 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar16 = *pfVar7;
  fVar22 = pfVar7[1];
  fVar23 = pfVar7[2];
  lVar3 = *(longlong *)(param_5 + 0x20);
  iVar1 = *piVar5;
  iVar2 = *(int *)(lVar3 + 0x40);
  local_258 = fVar22 * *(float *)(param_4 + 0x70) + fVar16 * *(float *)(param_4 + 0x60) +
              fVar23 * *(float *)(param_4 + 0x80) + *(float *)(param_4 + 0x90);
  fStack_254 = fVar22 * *(float *)(param_4 + 0x74) + fVar16 * *(float *)(param_4 + 100) +
               fVar23 * *(float *)(param_4 + 0x84) + *(float *)(param_4 + 0x94);
  fStack_250 = fVar22 * *(float *)(param_4 + 0x78) + fVar16 * *(float *)(param_4 + 0x68) +
               fVar23 * *(float *)(param_4 + 0x88) + *(float *)(param_4 + 0x98);
  fStack_24c = fVar22 * *(float *)(param_4 + 0x7c) + fVar16 * *(float *)(param_4 + 0x6c) +
               fVar23 * *(float *)(param_4 + 0x8c) + *(float *)(param_4 + 0x9c);
  if (iVar1 < iVar2) {
    pfVar7 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar7 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar16 = *pfVar7;
  fVar22 = pfVar7[1];
  fVar23 = pfVar7[2];
  iVar1 = piVar5[1];
  fVar52 = fVar16 * *(float *)(param_5 + 0x60) + fVar22 * *(float *)(param_5 + 0x70) +
           fVar23 * *(float *)(param_5 + 0x80) + *(float *)(param_5 + 0x90);
  fVar53 = fVar16 * *(float *)(param_5 + 100) + fVar22 * *(float *)(param_5 + 0x74) +
           fVar23 * *(float *)(param_5 + 0x84) + *(float *)(param_5 + 0x94);
  fVar54 = fVar16 * *(float *)(param_5 + 0x68) + fVar22 * *(float *)(param_5 + 0x78) +
           fVar23 * *(float *)(param_5 + 0x88) + *(float *)(param_5 + 0x98);
  fStack_23c = fVar16 * *(float *)(param_5 + 0x6c) + fVar22 * *(float *)(param_5 + 0x7c) +
               fVar23 * *(float *)(param_5 + 0x8c) + *(float *)(param_5 + 0x9c);
  if (iVar1 < iVar2) {
    pfVar7 = (float *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 0x38));
  }
  else {
    pfVar7 = (float *)((longlong)(iVar1 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
  }
  fVar16 = *pfVar7;
  fVar22 = pfVar7[1];
  fVar23 = pfVar7[2];
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = _DAT_14c6daca0;
  fStack_194 = fRam000000014c6daca4;
  fStack_190 = fRam000000014c6daca8;
  fStack_18c = fRam000000014c6dacac;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = _DAT_14c6daca0;
  fStack_174 = fRam000000014c6daca4;
  fStack_170 = fRam000000014c6daca8;
  fStack_16c = fRam000000014c6dacac;
  fVar45 = local_258 - fVar55;
  fVar46 = fStack_254 - fVar56;
  fVar47 = fStack_250 - fVar57;
  local_238 = fVar22 * *(float *)(param_5 + 0x70) + fVar16 * *(float *)(param_5 + 0x60) +
              fVar23 * *(float *)(param_5 + 0x80) + *(float *)(param_5 + 0x90);
  fStack_234 = fVar22 * *(float *)(param_5 + 0x74) + fVar16 * *(float *)(param_5 + 100) +
               fVar23 * *(float *)(param_5 + 0x84) + *(float *)(param_5 + 0x94);
  fStack_230 = fVar22 * *(float *)(param_5 + 0x78) + fVar16 * *(float *)(param_5 + 0x68) +
               fVar23 * *(float *)(param_5 + 0x88) + *(float *)(param_5 + 0x98);
  fStack_22c = fVar22 * *(float *)(param_5 + 0x7c) + fVar16 * *(float *)(param_5 + 0x6c) +
               fVar23 * *(float *)(param_5 + 0x8c) + *(float *)(param_5 + 0x9c);
  local_218 = (local_258 - fVar55) * _DAT_14c6daca0 + fVar55;
  fStack_214 = (fStack_254 - fVar56) * fRam000000014c6daca4 + fVar56;
  fStack_210 = (fStack_250 - fVar57) * fRam000000014c6daca8 + fVar57;
  fStack_20c = (fStack_24c - fStack_25c) * fRam000000014c6dacac + fStack_25c;
  local_228 = (local_258 - fVar55) * 0.0 + fVar55;
  fStack_224 = (fStack_254 - fVar56) * 0.0 + fVar56;
  fStack_220 = (fStack_250 - fVar57) * 0.0 + fVar57;
  fStack_21c = (fStack_24c - fStack_25c) * 0.0 + fStack_25c;
  fVar48 = local_238 - fVar52;
  fVar49 = fStack_234 - fVar53;
  fVar50 = fStack_230 - fVar54;
  fVar16 = fVar45 * fVar45;
  fVar22 = fVar46 * fVar46;
  fVar23 = fVar47 * fVar47;
  local_1f8 = (local_238 - fVar52) * _DAT_14c6daca0 + fVar52;
  fStack_1f4 = (fStack_234 - fVar53) * fRam000000014c6daca4 + fVar53;
  fStack_1f0 = (fStack_230 - fVar54) * fRam000000014c6daca8 + fVar54;
  fStack_1ec = (fStack_22c - fStack_23c) * fRam000000014c6dacac + fStack_23c;
  local_208 = (local_238 - fVar52) * 0.0 + fVar52;
  fStack_204 = (fStack_234 - fVar53) * 0.0 + fVar53;
  fStack_200 = (fStack_230 - fVar54) * 0.0 + fVar54;
  fStack_1fc = (fStack_22c - fStack_23c) * 0.0 + fStack_23c;
  auVar51._4_4_ = fVar16;
  auVar51._0_4_ = fVar16;
  auVar51._8_4_ = fVar16;
  auVar51._12_4_ = fVar16;
  auVar40._0_4_ = fVar22 + fVar16 + fVar23;
  auVar40._4_4_ = fVar22 + fVar16 + fVar23;
  auVar40._8_4_ = fVar22 + fVar16 + fVar23;
  auVar40._12_4_ = fVar22 + fVar16 + fVar23;
  if (auVar40._0_4_ == 0.0) {
    _local_2b8 = ZEXT816(0);
  }
  else {
    auVar51 = sqrtps(auVar51,auVar40);
    auVar17._4_4_ = fVar46;
    auVar17._0_4_ = fVar45;
    auVar17._8_4_ = fVar47;
    auVar17._12_4_ = fStack_24c - fStack_25c;
    _local_2b8 = divps(auVar17,auVar51);
  }
  fVar16 = fVar48 * fVar48;
  fVar22 = fVar49 * fVar49;
  fVar23 = fVar50 * fVar50;
  auVar8._4_4_ = fVar16;
  auVar8._0_4_ = fVar16;
  auVar8._8_4_ = fVar16;
  auVar8._12_4_ = fVar16;
  auVar26._0_4_ = fVar22 + fVar16 + fVar23;
  auVar26._4_4_ = fVar22 + fVar16 + fVar23;
  auVar26._8_4_ = fVar22 + fVar16 + fVar23;
  auVar26._12_4_ = fVar22 + fVar16 + fVar23;
  if (auVar26._0_4_ == 0.0) {
    _local_2c8 = ZEXT816(0);
  }
  else {
    auVar51 = sqrtps(auVar8,auVar26);
    auVar18._4_4_ = fVar49;
    auVar18._0_4_ = fVar48;
    auVar18._8_4_ = fVar50;
    auVar18._12_4_ = fStack_22c - fStack_23c;
    _local_2c8 = divps(auVar18,auVar51);
  }
  fVar16 = *param_2;
  fVar22 = param_2[1];
  fVar23 = param_2[2];
  fVar24 = fVar45 * fVar16;
  fVar32 = fVar46 * fVar22;
  fVar33 = fVar47 * fVar23;
  fVar34 = fVar48 * fVar16;
  fVar41 = fVar49 * fVar22;
  fVar42 = fVar50 * fVar23;
  auVar44._0_4_ = (0.0 - (fVar32 + fVar24 + fVar33)) * fVar16 + fVar45;
  auVar44._4_4_ = (0.0 - (fVar32 + fVar24 + fVar33)) * fVar22 + fVar46;
  auVar44._8_4_ = (0.0 - (fVar32 + fVar24 + fVar33)) * fVar23 + fVar47;
  auVar44._12_4_ = (0.0 - (fVar32 + fVar24 + fVar33)) * param_2[3] + (fStack_24c - fStack_25c);
  fVar45 = auVar44._0_4_ * auVar44._0_4_;
  fVar46 = auVar44._4_4_ * auVar44._4_4_;
  fVar47 = auVar44._8_4_ * auVar44._8_4_;
  auVar9._4_4_ = fVar45;
  auVar9._0_4_ = fVar45;
  auVar9._8_4_ = fVar45;
  auVar9._12_4_ = fVar45;
  auVar27._0_4_ = (0.0 - (fVar41 + fVar34 + fVar42)) * fVar16 + fVar48;
  auVar27._4_4_ = (0.0 - (fVar41 + fVar34 + fVar42)) * fVar22 + fVar49;
  auVar27._8_4_ = (0.0 - (fVar41 + fVar34 + fVar42)) * fVar23 + fVar50;
  auVar27._12_4_ = (0.0 - (fVar41 + fVar34 + fVar42)) * param_2[3] + (fStack_22c - fStack_23c);
  auVar35._0_4_ = fVar46 + fVar45 + fVar47;
  auVar35._4_4_ = fVar46 + fVar45 + fVar47;
  auVar35._8_4_ = fVar46 + fVar45 + fVar47;
  auVar35._12_4_ = fVar46 + fVar45 + fVar47;
  if (auVar35._0_4_ == 0.0) {
    auVar43 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar51 = sqrtps(auVar9,auVar35);
    auVar51 = divps(auVar44,auVar51);
    auVar43 = auVar51._0_12_;
  }
  fVar16 = auVar27._0_4_ * auVar27._0_4_;
  fVar22 = auVar27._4_4_ * auVar27._4_4_;
  fVar23 = auVar27._8_4_ * auVar27._8_4_;
  auVar10._4_4_ = fVar16;
  auVar10._0_4_ = fVar16;
  auVar10._8_4_ = fVar16;
  auVar10._12_4_ = fVar16;
  auVar36._0_4_ = fVar22 + fVar16 + fVar23;
  auVar36._4_4_ = fVar22 + fVar16 + fVar23;
  auVar36._8_4_ = fVar22 + fVar16 + fVar23;
  auVar36._12_4_ = fVar22 + fVar16 + fVar23;
  if (auVar36._0_4_ == 0.0) {
    auVar25 = SUB1612(ZEXT816(0),0);
  }
  else {
    auVar51 = sqrtps(auVar10,auVar36);
    auVar51 = divps(auVar27,auVar51);
    auVar25 = auVar51._0_12_;
  }
  fVar16 = 0.0 - (auVar43._4_4_ * auVar25._4_4_ + auVar43._0_4_ * auVar25._0_4_ +
                 auVar43._8_4_ * auVar25._8_4_);
  if (fVar16 < *(float *)(param_1 + 0x28)) {
    return 0xd;
  }
  local_268 = fVar55;
  fStack_264 = fVar56;
  fStack_260 = fVar57;
  local_248 = fVar52;
  fStack_244 = fVar53;
  fStack_240 = fVar54;
  uVar6 = FUN_144fc9970(&local_268,param_1,param_2,local_2b8,local_2c8,&local_158,&local_168,
                        &local_138,&local_148,&local_2dc);
  if ((int)uVar6 != -1) {
    return uVar6;
  }
  param_11[4] = 0xbf800000;
  param_11[5] = fVar16;
  param_11[6] = local_2dc;
  *param_11 = param_7;
  param_11[1] = param_8;
  param_11[2] = param_9;
  param_11[3] = param_10;
  *(undefined1 *)(param_11 + 7) = 1;
  auVar28._4_4_ = fRam000000014c6daca4;
  auVar28._0_4_ = _DAT_14c6daca0;
  auVar28._8_4_ = fRam000000014c6daca8;
  auVar28._12_4_ = fRam000000014c6dacac;
  auVar11._0_4_ = local_168 - local_158;
  auVar11._4_4_ = fStack_164 - fStack_154;
  auVar11._8_4_ = fStack_160 - fStack_150;
  auVar11._12_4_ = fStack_15c - fStack_14c;
  local_2d8 = 0x3a83126f;
  _local_298 = divps(auVar28,auVar11);
  auVar12._0_4_ = local_148 - local_138;
  auVar12._4_4_ = fStack_144 - fStack_134;
  auVar12._8_4_ = fStack_140 - fStack_130;
  auVar12._12_4_ = fStack_13c - fStack_12c;
  local_128 = local_158 - local_138;
  fStack_124 = fStack_154 - fStack_134;
  fStack_120 = fStack_150 - fStack_130;
  fStack_11c = fStack_14c - fStack_12c;
  auVar51 = divps(auVar28,auVar12);
  if (0.001 < ABS(local_128)) {
    if (local_138 < local_158) {
      fVar16 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      fVar45 = 0.0;
      local_178 = auVar51._0_4_ * local_128;
      fStack_174 = auVar51._4_4_ * fStack_124;
      fStack_170 = auVar51._8_4_ * fStack_120;
      fStack_16c = auVar51._12_4_ * fStack_11c;
      goto LAB_144fc8e5b;
    }
    fVar16 = (local_138 - local_158) * (float)local_298._0_4_;
    fVar22 = (fStack_134 - fStack_154) * (float)local_298._4_4_;
    fVar23 = (fStack_130 - fStack_150) * fStack_290;
    fVar45 = (fStack_12c - fStack_14c) * fStack_28c;
  }
  else {
    fVar16 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar45 = 0.0;
  }
  local_178 = 0.0;
  fStack_174 = 0.0;
  fStack_170 = 0.0;
  fStack_16c = 0.0;
LAB_144fc8e5b:
  local_198 = _DAT_14c6daca0;
  fStack_194 = fRam000000014c6daca4;
  fStack_190 = fRam000000014c6daca8;
  fStack_18c = fRam000000014c6dacac;
  if (0.001 < ABS(local_168 - local_148)) {
    if (local_168 <= local_148) {
      auVar28._0_4_ = (local_168 - local_138) * auVar51._0_4_;
      auVar28._4_4_ = (fStack_164 - fStack_134) * auVar51._4_4_;
      auVar28._8_4_ = (fStack_160 - fStack_130) * auVar51._8_4_;
      auVar28._12_4_ = (fStack_15c - fStack_12c) * auVar51._12_4_;
    }
    else {
      local_198 = (local_148 - local_158) * (float)local_298._0_4_;
      fStack_194 = (fStack_144 - fStack_154) * (float)local_298._4_4_;
      fStack_190 = (fStack_140 - fStack_150) * fStack_290;
      fStack_18c = (fStack_13c - fStack_14c) * fStack_28c;
    }
  }
  fVar46 = _DAT_14c6daca0 - auVar28._0_4_;
  fVar47 = fRam000000014c6daca4 - auVar28._4_4_;
  fVar48 = fRam000000014c6daca8 - auVar28._8_4_;
  fVar49 = fRam000000014c6dacac - auVar28._12_4_;
  local_1a8 = CONCAT44(fVar22,fVar16);
  uStack_1a0 = CONCAT44(fVar45,fVar23);
  local_178 = _DAT_14c6daca0 - local_178;
  fStack_174 = fRam000000014c6daca4 - fStack_174;
  fStack_170 = fRam000000014c6daca8 - fStack_170;
  fStack_16c = fRam000000014c6dacac - fStack_16c;
  local_188 = CONCAT44(fVar47,fVar46);
  uStack_180 = CONCAT44(fVar49,fVar48);
  local_218 = (local_258 - local_268) * local_198 + local_268;
  fStack_214 = (fStack_254 - fStack_264) * fStack_194 + fStack_264;
  fStack_210 = (fStack_250 - fStack_260) * fStack_190 + fStack_260;
  fStack_20c = (fStack_24c - fStack_25c) * fStack_18c + fStack_25c;
  local_228 = (local_258 - local_268) * fVar16 + local_268;
  fStack_224 = (fStack_254 - fStack_264) * fVar22 + fStack_264;
  fStack_220 = (fStack_250 - fStack_260) * fVar23 + fStack_260;
  fStack_21c = (fStack_24c - fStack_25c) * fVar45 + fStack_25c;
  local_208 = fVar46 * (local_238 - local_248) + local_248;
  fStack_204 = fVar47 * (fStack_234 - fStack_244) + fStack_244;
  fStack_200 = fVar48 * (fStack_230 - fStack_240) + fStack_240;
  fStack_1fc = fVar49 * (fStack_22c - fStack_23c) + fStack_23c;
  local_1f8 = local_178 * (local_238 - local_248) + local_248;
  fStack_1f4 = fStack_174 * (fStack_234 - fStack_244) + fStack_244;
  fStack_1f0 = fStack_170 * (fStack_230 - fStack_240) + fStack_240;
  fStack_1ec = fStack_16c * (fStack_22c - fStack_23c) + fStack_23c;
  if ((local_198 <= fVar16) || (local_178 <= fVar46)) {
    uVar6 = 5;
  }
  else {
    FUN_144fc94b0(&local_268,local_118,local_e8);
    local_2a0 = *(float *)(param_1 + 4) * *(float *)(param_1 + 4);
    if (local_118[0] <= local_2a0) {
      if ((param_6 == 0) || (uVar6 = FUN_144fc9b70(&local_268,param_1,param_2,0), (int)uVar6 == -1))
      {
        param_11[8] = (undefined4)local_1a8;
        param_11[9] = local_198;
        param_11[10] = (undefined4)local_188;
        param_11[0xb] = local_178;
        FUN_144fc93d0(&local_268,param_2);
        fVar48 = local_1c8 - local_1b8;
        fVar49 = fStack_1c4 - fStack_1b4;
        fVar50 = fStack_1c0 - fStack_1b0;
        fVar45 = fVar48 * fVar48;
        fVar46 = fVar49 * fVar49;
        fVar47 = fVar50 * fVar50;
        fVar24 = local_1c8 - ((local_1d8 - local_1e8) * _DAT_14c6dad90 + local_1e8);
        fVar32 = fStack_1c4 - ((fStack_1d4 - fStack_1e4) * fRam000000014c6dad94 + fStack_1e4);
        fVar33 = fStack_1c0 - ((fStack_1d0 - fStack_1e0) * fRam000000014c6dad98 + fStack_1e0);
        fVar16 = fVar24 * fVar48;
        fVar22 = fVar32 * fVar49;
        fVar23 = fVar33 * fVar50;
        auVar37._0_4_ = fVar22 + fVar16 + fVar23;
        auVar37._4_4_ = fVar22 + fVar16 + fVar23;
        auVar37._8_4_ = fVar22 + fVar16 + fVar23;
        auVar37._12_4_ = fVar22 + fVar16 + fVar23;
        auVar19._0_4_ = fVar46 + fVar45 + fVar47;
        auVar19._4_4_ = fVar46 + fVar45 + fVar47;
        auVar19._8_4_ = fVar46 + fVar45 + fVar47;
        auVar19._12_4_ = fVar46 + fVar45 + fVar47;
        auVar51 = divps(auVar37,auVar19);
        auVar51 = minps(auVar51,_DAT_1499314a0);
        auVar51 = maxps(auVar51,ZEXT816(0));
        local_1d8 = local_1e8 - local_1d8;
        fStack_1d4 = fStack_1e4 - fStack_1d4;
        fStack_1d0 = fStack_1e0 - fStack_1d0;
        local_1e8 = local_1e8 - ((local_1b8 - local_1c8) * _DAT_14c6dad90 + local_1c8);
        fStack_1e4 = fStack_1e4 - ((fStack_1b4 - fStack_1c4) * fRam000000014c6dad94 + fStack_1c4);
        fStack_1e0 = fStack_1e0 - ((fStack_1b0 - fStack_1c0) * fRam000000014c6dad98 + fStack_1c0);
        fVar24 = fVar24 - auVar51._0_4_ * fVar48;
        fVar32 = fVar32 - auVar51._4_4_ * fVar49;
        fVar33 = fVar33 - auVar51._8_4_ * fVar50;
        fVar45 = local_1d8 * local_1d8;
        fVar46 = fStack_1d4 * fStack_1d4;
        fVar47 = fStack_1d0 * fStack_1d0;
        fVar16 = local_1e8 * local_1d8;
        fVar22 = fStack_1e4 * fStack_1d4;
        fVar23 = fStack_1e0 * fStack_1d0;
        fVar24 = fVar24 * fVar24;
        fVar32 = fVar32 * fVar32;
        fVar33 = fVar33 * fVar33;
        auVar38._0_4_ = fVar22 + fVar16 + fVar23;
        auVar38._4_4_ = fVar22 + fVar16 + fVar23;
        auVar38._8_4_ = fVar22 + fVar16 + fVar23;
        auVar38._12_4_ = fVar22 + fVar16 + fVar23;
        auVar20._0_4_ = fVar46 + fVar45 + fVar47;
        auVar20._4_4_ = fVar46 + fVar45 + fVar47;
        auVar20._8_4_ = fVar46 + fVar45 + fVar47;
        auVar20._12_4_ = fVar46 + fVar45 + fVar47;
        auVar51 = divps(auVar38,auVar20);
        auVar51 = minps(auVar51,_DAT_1499314a0);
        auVar51 = maxps(auVar51,ZEXT816(0));
        auVar39._0_4_ = auVar51._0_4_ * local_1d8;
        auVar39._4_4_ = auVar51._4_4_ * fStack_1d4;
        auVar39._8_4_ = auVar51._8_4_ * fStack_1d0;
        auVar39._12_4_ = auVar51._12_4_ * (fStack_1dc - fStack_1cc);
        local_1e8 = local_1e8 - auVar39._0_4_;
        fStack_1e4 = fStack_1e4 - auVar39._4_4_;
        fStack_1e0 = fStack_1e0 - auVar39._8_4_;
        local_1e8 = local_1e8 * local_1e8;
        fStack_1e4 = fStack_1e4 * fStack_1e4;
        fStack_1e0 = fStack_1e0 * fStack_1e0;
        auVar13._4_4_ = fVar24;
        auVar13._0_4_ = fVar24;
        auVar13._8_4_ = fVar24;
        auVar13._12_4_ = fVar24;
        auVar21._0_4_ = fStack_1e4 + local_1e8 + fStack_1e0;
        auVar21._4_4_ = fStack_1e4 + local_1e8 + fStack_1e0;
        auVar21._8_4_ = fStack_1e4 + local_1e8 + fStack_1e0;
        auVar21._12_4_ = fStack_1e4 + local_1e8 + fStack_1e0;
        auVar29._0_4_ = fVar32 + fVar24 + fVar33;
        auVar29._4_4_ = fVar32 + fVar24 + fVar33;
        auVar29._8_4_ = fVar32 + fVar24 + fVar33;
        auVar29._12_4_ = fVar32 + fVar24 + fVar33;
        auVar40 = sqrtps(auVar39,auVar21);
        auVar51 = sqrtps(auVar13,auVar29);
        fVar16 = (auVar40._0_4_ + auVar51._0_4_) * _DAT_14c6dad90;
        param_11[4] = fVar16 * fVar16;
        fVar46 = fStack_274 * (float)local_2b8._0_4_ - (float)local_2b8._4_4_ * local_278;
        fVar16 = fStack_270 * (float)local_2b8._4_4_ - fStack_2b0 * fStack_274;
        fVar23 = local_278 * fStack_2b0 - (float)local_2b8._0_4_ * fStack_270;
        auVar59._12_4_ = fStack_26c * fStack_2ac - fStack_2ac * fStack_26c;
        auVar59._4_4_ = fVar23;
        auVar59._0_4_ = fVar16;
        auVar59._8_4_ = fVar46;
        fVar47 = fStack_284 * (float)local_2c8._0_4_ - (float)local_2c8._4_4_ * local_288;
        fVar22 = fStack_280 * (float)local_2c8._4_4_ - fStack_2c0 * fStack_284;
        fVar45 = local_288 * fStack_2c0 - (float)local_2c8._0_4_ * fStack_280;
        auVar58._12_4_ = fStack_27c * fStack_2bc - fStack_2bc * fStack_27c;
        fVar16 = fVar16 * fVar16;
        fVar23 = fVar23 * fVar23;
        fVar46 = fVar46 * fVar46;
        auVar58._4_4_ = fVar45;
        auVar58._0_4_ = fVar22;
        auVar58._8_4_ = fVar47;
        auVar14._4_4_ = fVar16;
        auVar14._0_4_ = fVar16;
        auVar14._8_4_ = fVar16;
        auVar14._12_4_ = fVar16;
        auVar30._0_4_ = fVar23 + fVar16 + fVar46;
        auVar30._4_4_ = fVar23 + fVar16 + fVar46;
        auVar30._8_4_ = fVar23 + fVar16 + fVar46;
        auVar30._12_4_ = fVar23 + fVar16 + fVar46;
        if (auVar30._0_4_ == 0.0) {
          auVar43 = SUB1612(ZEXT816(0),0);
        }
        else {
          auVar51 = sqrtps(auVar14,auVar30);
          auVar51 = divps(auVar59,auVar51);
          auVar43 = auVar51._0_12_;
        }
        fVar23 = auVar43._0_4_;
        fVar46 = auVar43._4_4_;
        fVar48 = auVar43._8_4_;
        fVar16 = 0.0 - (fVar46 * fVar56 + fVar23 * fVar55 + fVar48 * fVar57);
        fVar22 = fVar22 * fVar22;
        fVar45 = fVar45 * fVar45;
        fVar47 = fVar47 * fVar47;
        auVar15._4_4_ = fVar22;
        auVar15._0_4_ = fVar22;
        auVar15._8_4_ = fVar22;
        auVar15._12_4_ = fVar22;
        auVar31._0_4_ = fVar45 + fVar22 + fVar47;
        auVar31._4_4_ = fVar45 + fVar22 + fVar47;
        auVar31._8_4_ = fVar45 + fVar22 + fVar47;
        auVar31._12_4_ = fVar45 + fVar22 + fVar47;
        if (auVar31._0_4_ == 0.0) {
          auVar43 = SUB1612(ZEXT816(0),0);
        }
        else {
          auVar51 = sqrtps(auVar15,auVar31);
          auVar51 = divps(auVar58,auVar51);
          auVar43 = auVar51._0_12_;
        }
        fVar56 = auVar43._0_4_;
        fVar57 = auVar43._4_4_;
        fVar45 = auVar43._8_4_;
        fVar55 = 0.0 - *(float *)(param_1 + 8);
        fVar22 = 0.0 - (fVar53 * fVar57 + fVar52 * fVar56 + fVar54 * fVar45);
        if ((((fVar16 + fVar48 * fStack_200 + fVar46 * fStack_204 + fVar23 * local_208 < fVar55) ||
             (fVar16 + fStack_1f0 * fVar48 + fStack_1f4 * fVar46 + local_1f8 * fVar23 < fVar55)) ||
            (fVar22 + fStack_220 * fVar45 + fStack_224 * fVar57 + local_228 * fVar56 < fVar55)) ||
           (fVar22 + fStack_210 * fVar45 + fStack_214 * fVar57 + local_218 * fVar56 < fVar55)) {
          uVar6 = 7;
        }
        else if (param_6 == 0) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = FUN_144fc6a20(param_1);
        }
      }
    }
    else {
      uVar6 = 2;
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return uVar6;
}



// FUNCTION 144fc93d0 FUN_144fc93d0 body=217 status=ok
// SIG undefined FUN_144fc93d0(void)

void FUN_144fc93d0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x80) = fVar1;
  *(float *)(param_1 + 0x84) = fVar2;
  *(float *)(param_1 + 0x88) = fVar3;
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x4c);
  fVar7 = *param_2 * fVar1;
  fVar8 = param_2[1] * fVar2;
  fVar9 = param_2[2] * fVar3;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)(param_1 + 0x80) = fVar1 - (fVar8 + fVar7 + fVar9) * *param_2;
  *(float *)(param_1 + 0x84) = fVar2 - (fVar8 + fVar7 + fVar9) * fVar4;
  *(float *)(param_1 + 0x88) = fVar3 - (fVar8 + fVar7 + fVar9) * fVar5;
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x4c) - (fVar8 + fVar7 + fVar9) * fVar6;
  fVar1 = *(float *)(param_1 + 0x50);
  fVar2 = *(float *)(param_1 + 0x54);
  fVar3 = *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x90) = fVar1;
  *(float *)(param_1 + 0x94) = fVar2;
  *(float *)(param_1 + 0x98) = fVar3;
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x5c);
  fVar7 = fVar1 * *param_2;
  fVar8 = fVar2 * param_2[1];
  fVar9 = fVar3 * param_2[2];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)(param_1 + 0x90) = fVar1 - (fVar8 + fVar7 + fVar9) * *param_2;
  *(float *)(param_1 + 0x94) = fVar2 - (fVar8 + fVar7 + fVar9) * fVar4;
  *(float *)(param_1 + 0x98) = fVar3 - (fVar8 + fVar7 + fVar9) * fVar5;
  *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x5c) - (fVar8 + fVar7 + fVar9) * fVar6;
  fVar1 = *(float *)(param_1 + 0x60);
  fVar2 = *(float *)(param_1 + 100);
  fVar3 = *(float *)(param_1 + 0x68);
  *(float *)(param_1 + 0xa0) = fVar1;
  *(float *)(param_1 + 0xa4) = fVar2;
  *(float *)(param_1 + 0xa8) = fVar3;
  *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0x6c);
  fVar7 = fVar1 * *param_2;
  fVar8 = fVar2 * param_2[1];
  fVar9 = fVar3 * param_2[2];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)(param_1 + 0xa0) = fVar1 - (fVar8 + fVar7 + fVar9) * *param_2;
  *(float *)(param_1 + 0xa4) = fVar2 - (fVar8 + fVar7 + fVar9) * fVar4;
  *(float *)(param_1 + 0xa8) = fVar3 - (fVar8 + fVar7 + fVar9) * fVar5;
  *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0x6c) - (fVar8 + fVar7 + fVar9) * fVar6;
  fVar1 = *(float *)(param_1 + 0x70);
  fVar2 = *(float *)(param_1 + 0x74);
  fVar3 = *(float *)(param_1 + 0x78);
  *(float *)(param_1 + 0xb0) = fVar1;
  *(float *)(param_1 + 0xb4) = fVar2;
  *(float *)(param_1 + 0xb8) = fVar3;
  *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0x7c);
  fVar7 = fVar1 * *param_2;
  fVar8 = fVar2 * param_2[1];
  fVar9 = fVar3 * param_2[2];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)(param_1 + 0xb0) = fVar1 - (fVar8 + fVar7 + fVar9) * *param_2;
  *(float *)(param_1 + 0xb4) = fVar2 - (fVar8 + fVar7 + fVar9) * fVar4;
  *(float *)(param_1 + 0xb8) = fVar3 - (fVar8 + fVar7 + fVar9) * fVar5;
  *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0x7c) - (fVar8 + fVar7 + fVar9) * fVar6;
  return;
}



// FUNCTION 144fc94b0 FUN_144fc94b0 body=594 status=ok
// SIG undefined FUN_144fc94b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144fc94b0(longlong param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  fVar1 = *(float *)(param_1 + 0x7c);
  fVar2 = *(float *)(param_1 + 0x5c);
  fVar18 = *(float *)(param_1 + 0x40);
  fVar19 = *(float *)(param_1 + 0x44);
  fVar20 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x4c);
  fVar40 = *(float *)(param_1 + 0x50) - fVar18;
  fVar41 = *(float *)(param_1 + 0x54) - fVar19;
  fVar42 = *(float *)(param_1 + 0x58) - fVar20;
  fVar4 = *(float *)(param_1 + 0x60);
  fVar5 = *(float *)(param_1 + 100);
  fVar6 = *(float *)(param_1 + 0x68);
  fVar7 = *(float *)(param_1 + 0x6c);
  fVar37 = *(float *)(param_1 + 0x70) - fVar4;
  fVar38 = *(float *)(param_1 + 0x74) - fVar5;
  fVar39 = *(float *)(param_1 + 0x78) - fVar6;
  fVar21 = fVar4 - fVar18;
  fVar23 = fVar5 - fVar19;
  fVar24 = fVar6 - fVar20;
  fVar11 = fVar41 * fVar37 - fVar38 * fVar40;
  fVar13 = fVar42 * fVar38 - fVar39 * fVar41;
  fVar15 = fVar40 * fVar39 - fVar37 * fVar42;
  fVar8 = fVar13 * fVar13;
  fVar9 = fVar15 * fVar15;
  fVar10 = fVar11 * fVar11;
  fVar34 = fVar9 + fVar8 + fVar10;
  fVar35 = fVar9 + fVar8 + fVar10;
  fVar36 = fVar9 + fVar8 + fVar10;
  fVar10 = fVar9 + fVar8 + fVar10;
  if (fVar34 == 0.0) {
    auVar32 = ZEXT816(0);
  }
  else {
    auVar32._4_4_ = fVar35;
    auVar32._0_4_ = fVar34;
    auVar32._8_4_ = fVar36;
    auVar32._12_4_ = fVar10;
    auVar32 = divps(_DAT_14c6daca0,auVar32);
  }
  fVar8 = (fVar39 * fVar15 - fVar11 * fVar38) * fVar21;
  fVar9 = (fVar37 * fVar11 - fVar13 * fVar39) * fVar23;
  fVar11 = (fVar38 * fVar13 - fVar15 * fVar37) * fVar24;
  auVar33._0_4_ = (fVar9 + fVar8 + fVar11) * auVar32._0_4_;
  auVar33._4_4_ = (fVar9 + fVar8 + fVar11) * auVar32._4_4_;
  auVar33._8_4_ = (fVar9 + fVar8 + fVar11) * auVar32._8_4_;
  auVar33._12_4_ = (fVar9 + fVar8 + fVar11) * auVar32._12_4_;
  fVar8 = fVar37 * fVar40;
  fVar9 = fVar38 * fVar41;
  fVar11 = fVar39 * fVar42;
  auVar32 = minps(auVar33,_DAT_1499314a0);
  fVar27 = fVar9 + fVar8 + fVar11;
  fVar28 = fVar9 + fVar8 + fVar11;
  fVar29 = fVar9 + fVar8 + fVar11;
  fVar11 = fVar9 + fVar8 + fVar11;
  auVar33 = maxps(auVar32,ZEXT816(0));
  auVar30._0_4_ = fVar42 * fVar42 + fVar41 * fVar41 + fVar40 * fVar40;
  auVar30._4_4_ = fVar24 * fVar42 + fVar23 * fVar41 + fVar21 * fVar40;
  auVar30._8_4_ = fVar39 * fVar39 + fVar38 * fVar38 + fVar37 * fVar37;
  auVar30._12_4_ = fVar24 * fVar39 + fVar23 * fVar38 + fVar21 * fVar37;
  auVar32 = divps(_DAT_14c6daca0,auVar30);
  fVar21 = (float)(~-(uint)(auVar30._0_4_ == 0.0) & auVar32._0_4_);
  fVar15 = (float)(~-(uint)(auVar30._8_4_ == 0.0) & auVar32._8_4_);
  fVar8 = (auVar33._0_4_ * fVar27 - auVar30._12_4_) * fVar15;
  fVar9 = (auVar33._4_4_ * fVar28 - auVar30._12_4_) * fVar15;
  auVar22._4_4_ = fVar9;
  auVar22._0_4_ = fVar8;
  fVar13 = (auVar33._8_4_ * fVar29 - auVar30._12_4_) * fVar15;
  fVar15 = (auVar33._12_4_ * fVar11 - auVar30._12_4_) * fVar15;
  auVar22._8_4_ = fVar13;
  auVar22._12_4_ = fVar15;
  auVar32 = minps(auVar22,_DAT_1499314a0);
  auVar32 = maxps(auVar32,ZEXT816(0));
  fVar23 = auVar32._0_4_;
  fVar24 = auVar32._4_4_;
  fVar25 = auVar32._8_4_;
  fVar26 = auVar32._12_4_;
  uVar12 = -(uint)(fVar34 != 0.0 && fVar23 == fVar8);
  uVar14 = -(uint)(fVar35 != 0.0 && fVar24 == fVar9);
  uVar16 = -(uint)(fVar36 != 0.0 && fVar25 == fVar13);
  uVar17 = -(uint)(fVar10 != 0.0 && fVar26 == fVar15);
  auVar31._0_4_ = (auVar30._4_4_ + fVar23 * fVar27) * fVar21;
  auVar31._4_4_ = (auVar30._4_4_ + fVar24 * fVar28) * fVar21;
  auVar31._8_4_ = (auVar30._4_4_ + fVar25 * fVar29) * fVar21;
  auVar31._12_4_ = (auVar30._4_4_ + fVar26 * fVar11) * fVar21;
  auVar32 = minps(auVar31,_DAT_1499314a0);
  auVar32 = maxps(auVar32,ZEXT816(0));
  fVar18 = ((float)(~uVar12 & auVar32._0_4_ | uVar12 & (uint)auVar33._0_4_) * fVar40 + fVar18) -
           (fVar23 * fVar37 + fVar4);
  fVar19 = ((float)(~uVar14 & auVar32._4_4_ | uVar14 & (uint)auVar33._4_4_) * fVar41 + fVar19) -
           (fVar24 * fVar38 + fVar5);
  fVar20 = ((float)(~uVar16 & auVar32._8_4_ | uVar16 & (uint)auVar33._8_4_) * fVar42 + fVar20) -
           (fVar25 * fVar39 + fVar6);
  *param_3 = fVar18;
  param_3[1] = fVar19;
  param_3[2] = fVar20;
  param_3[3] = ((float)(~uVar17 & auVar32._12_4_ | uVar17 & (uint)auVar33._12_4_) * (fVar2 - fVar3)
               + fVar3) - (fVar26 * (fVar1 - fVar7) + fVar7);
  fVar18 = fVar18 * fVar18;
  fVar19 = fVar19 * fVar19;
  fVar20 = fVar20 * fVar20;
  *param_2 = fVar19 + fVar18 + fVar20;
  param_2[1] = fVar19 + fVar18 + fVar20;
  param_2[2] = fVar19 + fVar18 + fVar20;
  param_2[3] = fVar19 + fVar18 + fVar20;
  return param_2;
}



// FUNCTION 144fc9710 FUN_144fc9710 body=602 status=ok
// SIG undefined FUN_144fc9710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144fc9710(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  
  fVar13 = *(float *)(param_1 + 0x80);
  fVar14 = *(float *)(param_1 + 0x84);
  fVar15 = *(float *)(param_1 + 0x88);
  fVar33 = *(float *)(param_1 + 0x90) - fVar13;
  fVar34 = *(float *)(param_1 + 0x94) - fVar14;
  fVar35 = *(float *)(param_1 + 0x98) - fVar15;
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar2 = *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar30 = *(float *)(param_1 + 0xb0) - fVar1;
  fVar31 = *(float *)(param_1 + 0xb4) - fVar2;
  fVar32 = *(float *)(param_1 + 0xb8) - fVar3;
  fVar16 = fVar1 - fVar13;
  fVar18 = fVar2 - fVar14;
  fVar19 = fVar3 - fVar15;
  fVar7 = fVar34 * fVar30 - fVar31 * fVar33;
  fVar9 = fVar35 * fVar31 - fVar32 * fVar34;
  fVar11 = fVar33 * fVar32 - fVar30 * fVar35;
  fVar4 = fVar9 * fVar9;
  fVar5 = fVar11 * fVar11;
  fVar6 = fVar7 * fVar7;
  fVar27 = fVar5 + fVar4 + fVar6;
  fVar28 = fVar5 + fVar4 + fVar6;
  fVar29 = fVar5 + fVar4 + fVar6;
  if (fVar27 == 0.0) {
    auVar25 = ZEXT816(0);
  }
  else {
    auVar25._4_4_ = fVar28;
    auVar25._0_4_ = fVar27;
    auVar25._8_4_ = fVar29;
    auVar25._12_4_ = fVar5 + fVar4 + fVar6;
    auVar25 = divps(_DAT_14c6daca0,auVar25);
  }
  fVar4 = (fVar32 * fVar11 - fVar7 * fVar31) * fVar16;
  fVar5 = (fVar30 * fVar7 - fVar9 * fVar32) * fVar18;
  fVar6 = (fVar31 * fVar9 - fVar11 * fVar30) * fVar19;
  auVar26._0_4_ = (fVar5 + fVar4 + fVar6) * auVar25._0_4_;
  auVar26._4_4_ = (fVar5 + fVar4 + fVar6) * auVar25._4_4_;
  auVar26._8_4_ = (fVar5 + fVar4 + fVar6) * auVar25._8_4_;
  auVar26._12_4_ = (fVar5 + fVar4 + fVar6) * auVar25._12_4_;
  fVar4 = fVar30 * fVar33;
  fVar5 = fVar31 * fVar34;
  fVar6 = fVar32 * fVar35;
  auVar25 = minps(auVar26,_DAT_1499314a0);
  fVar20 = fVar5 + fVar4 + fVar6;
  fVar21 = fVar5 + fVar4 + fVar6;
  fVar22 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar26 = maxps(auVar25,ZEXT816(0));
  auVar23._0_4_ = fVar35 * fVar35 + fVar34 * fVar34 + fVar33 * fVar33;
  auVar23._4_4_ = fVar19 * fVar35 + fVar18 * fVar34 + fVar16 * fVar33;
  auVar23._8_4_ = fVar32 * fVar32 + fVar31 * fVar31 + fVar30 * fVar30;
  auVar23._12_4_ = fVar19 * fVar32 + fVar18 * fVar31 + fVar16 * fVar30;
  auVar25 = divps(_DAT_14c6daca0,auVar23);
  fVar9 = (float)(~-(uint)(auVar23._0_4_ == 0.0) & auVar25._0_4_);
  fVar11 = (float)(~-(uint)(auVar23._8_4_ == 0.0) & auVar25._8_4_);
  fVar4 = (auVar26._0_4_ * fVar20 - auVar23._12_4_) * fVar11;
  fVar5 = (auVar26._4_4_ * fVar21 - auVar23._12_4_) * fVar11;
  auVar17._4_4_ = fVar5;
  auVar17._0_4_ = fVar4;
  fVar7 = (auVar26._8_4_ * fVar22 - auVar23._12_4_) * fVar11;
  auVar17._8_4_ = fVar7;
  auVar17._12_4_ = (auVar26._12_4_ * fVar6 - auVar23._12_4_) * fVar11;
  auVar25 = minps(auVar17,_DAT_1499314a0);
  auVar25 = maxps(auVar25,ZEXT816(0));
  fVar11 = auVar25._0_4_;
  fVar16 = auVar25._4_4_;
  fVar18 = auVar25._8_4_;
  uVar8 = -(uint)(fVar27 != 0.0 && fVar11 == fVar4);
  uVar10 = -(uint)(fVar28 != 0.0 && fVar16 == fVar5);
  uVar12 = -(uint)(fVar29 != 0.0 && fVar18 == fVar7);
  auVar24._0_4_ = (auVar23._4_4_ + fVar11 * fVar20) * fVar9;
  auVar24._4_4_ = (auVar23._4_4_ + fVar16 * fVar21) * fVar9;
  auVar24._8_4_ = (auVar23._4_4_ + fVar18 * fVar22) * fVar9;
  auVar24._12_4_ = (auVar23._4_4_ + auVar25._12_4_ * fVar6) * fVar9;
  auVar25 = minps(auVar24,_DAT_1499314a0);
  auVar25 = maxps(auVar25,ZEXT816(0));
  fVar13 = ((float)(~uVar8 & auVar25._0_4_ | uVar8 & (uint)auVar26._0_4_) * fVar33 + fVar13) -
           (fVar11 * fVar30 + fVar1);
  fVar14 = ((float)(~uVar10 & auVar25._4_4_ | uVar10 & (uint)auVar26._4_4_) * fVar34 + fVar14) -
           (fVar16 * fVar31 + fVar2);
  fVar15 = ((float)(~uVar12 & auVar25._8_4_ | uVar12 & (uint)auVar26._8_4_) * fVar35 + fVar15) -
           (fVar18 * fVar32 + fVar3);
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  *param_2 = fVar14 + fVar13 + fVar15;
  param_2[1] = fVar14 + fVar13 + fVar15;
  param_2[2] = fVar14 + fVar13 + fVar15;
  param_2[3] = fVar14 + fVar13 + fVar15;
  return param_2;
}



// FUNCTION 144fc9970 FUN_144fc9970 body=498 status=ok
// SIG undefined FUN_144fc9970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144fc9970(longlong param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
             undefined1 (*param_6) [16],undefined1 (*param_7) [16],undefined1 (*param_8) [16],
             undefined1 (*param_9) [16],float *param_10)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  
  auVar16 = SUB1612(ZEXT816(0),0);
  fVar13 = (*param_4 - *param_5) * _DAT_14c6dad90;
  fVar14 = (param_4[1] - param_5[1]) * fRam000000014c6dad94;
  fVar15 = (param_4[2] - param_5[2]) * fRam000000014c6dad98;
  fVar8 = *param_3 * fVar13;
  fVar10 = param_3[1] * fVar14;
  fVar11 = param_3[2] * fVar15;
  fVar13 = (0.0 - (fVar10 + fVar8 + fVar11)) * *param_3 + fVar13;
  fVar14 = (0.0 - (fVar10 + fVar8 + fVar11)) * param_3[1] + fVar14;
  auVar9._4_4_ = fVar14;
  auVar9._0_4_ = fVar13;
  fVar15 = (0.0 - (fVar10 + fVar8 + fVar11)) * param_3[2] + fVar15;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  fVar7 = fVar15 * fVar15;
  auVar6._4_4_ = fVar13;
  auVar6._0_4_ = fVar13;
  auVar6._8_4_ = fVar13;
  auVar6._12_4_ = fVar13;
  fVar12 = fVar14 + fVar13 + fVar7;
  if (fVar12 != 0.0) {
    auVar1._4_4_ = fVar14 + fVar13 + fVar7;
    auVar1._0_4_ = fVar12;
    auVar1._8_4_ = fVar14 + fVar13 + fVar7;
    auVar1._12_4_ = fVar14 + fVar13 + fVar7;
    auVar6 = sqrtps(auVar6,auVar1);
    auVar9._8_4_ = fVar15;
    auVar9._12_4_ =
         (0.0 - (fVar10 + fVar8 + fVar11)) * param_3[3] +
         (param_4[3] - param_5[3]) * fRam000000014c6dad9c;
    auVar6 = divps(auVar9,auVar6);
    auVar16 = auVar6._0_12_;
  }
  fVar10 = auVar16._0_4_;
  fVar11 = auVar16._4_4_;
  fVar13 = fVar10 * *(float *)(param_1 + 0x40);
  fVar14 = fVar11 * *(float *)(param_1 + 0x44);
  fVar8 = auVar16._8_4_;
  fVar7 = fVar8 * *(float *)(param_1 + 0x48);
  *(float *)*param_6 = fVar14 + fVar13 + fVar7;
  *(float *)(*param_6 + 4) = fVar14 + fVar13 + fVar7;
  *(float *)(*param_6 + 8) = fVar14 + fVar13 + fVar7;
  *(float *)(*param_6 + 0xc) = fVar14 + fVar13 + fVar7;
  fVar13 = fVar10 * *(float *)(param_1 + 0x50);
  fVar14 = fVar11 * *(float *)(param_1 + 0x54);
  fVar7 = fVar8 * *(float *)(param_1 + 0x58);
  *(float *)*param_7 = fVar14 + fVar13 + fVar7;
  *(float *)(*param_7 + 4) = fVar14 + fVar13 + fVar7;
  *(float *)(*param_7 + 8) = fVar14 + fVar13 + fVar7;
  *(float *)(*param_7 + 0xc) = fVar14 + fVar13 + fVar7;
  fVar13 = fVar10 * *(float *)(param_1 + 0x60);
  fVar14 = fVar11 * *(float *)(param_1 + 100);
  fVar7 = fVar8 * *(float *)(param_1 + 0x68);
  *(float *)*param_8 = fVar14 + fVar13 + fVar7;
  *(float *)(*param_8 + 4) = fVar14 + fVar13 + fVar7;
  *(float *)(*param_8 + 8) = fVar14 + fVar13 + fVar7;
  *(float *)(*param_8 + 0xc) = fVar14 + fVar13 + fVar7;
  fVar10 = fVar10 * *(float *)(param_1 + 0x70);
  fVar11 = fVar11 * *(float *)(param_1 + 0x74);
  fVar8 = fVar8 * *(float *)(param_1 + 0x78);
  fVar14 = fVar11 + fVar10 + fVar8;
  *(float *)*param_9 = fVar14;
  *(float *)(*param_9 + 4) = fVar11 + fVar10 + fVar8;
  *(float *)(*param_9 + 8) = fVar11 + fVar10 + fVar8;
  *(float *)(*param_9 + 0xc) = fVar11 + fVar10 + fVar8;
  fVar13 = *(float *)*param_8;
  uVar2 = *(undefined4 *)(*param_8 + 4);
  uVar3 = *(undefined4 *)(*param_8 + 8);
  uVar4 = *(undefined4 *)(*param_8 + 0xc);
  if (fVar14 < fVar13) {
    uVar5 = *(undefined8 *)(*param_9 + 8);
    *(undefined8 *)*param_8 = *(undefined8 *)*param_9;
    *(undefined8 *)(*param_8 + 8) = uVar5;
    *(float *)*param_9 = fVar13;
    *(undefined4 *)(*param_9 + 4) = uVar2;
    *(undefined4 *)(*param_9 + 8) = uVar3;
    *(undefined4 *)(*param_9 + 0xc) = uVar4;
  }
  fVar14 = SUB164(*param_8,0);
  fVar13 = SUB164(*param_7,0);
  if (fVar14 <= fVar13) {
    fVar7 = SUB164(*param_6,0);
    fVar8 = SUB164(*param_9,0);
    if (((fVar7 <= fVar8) && (1e-06 <= fVar13 - fVar7)) && (1e-06 <= fVar8 - fVar14)) {
      auVar9 = minps(*param_7,*param_9);
      auVar6 = maxps(*param_6,*param_8);
      fVar13 = auVar9._0_4_ - auVar6._0_4_;
      *param_10 = fVar13;
      if (fVar13 < *(float *)(param_2 + 0x18)) {
        if (1e-05 < ABS(fVar13 - (*(float *)*param_7 - *(float *)*param_6))) {
          uVar5 = 0xffffffff;
          if (1e-05 < ABS(fVar13 - (*(float *)*param_9 - *(float *)*param_8))) {
            uVar5 = 4;
          }
          return uVar5;
        }
      }
      return 0xffffffff;
    }
  }
  return 3;
}



// FUNCTION 144fc9b70 FUN_144fc9b70 body=815 status=ok
// SIG undefined FUN_144fc9b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_144fc9b70(float *param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 in_XMM4 [16];
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 local_res20 [8];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [64];
  
  if (param_4 == 0) {
    fVar11 = *param_2;
    fVar5 = (param_1[0x1c] - param_1[0x10]) * *param_3;
    fVar6 = (param_1[0x1d] - param_1[0x11]) * param_3[1];
    fVar7 = (param_1[0x1e] - param_1[0x12]) * param_3[2];
    auVar20._0_4_ = fVar6 + fVar5 + fVar7;
    auVar20._4_4_ = fVar6 + fVar5 + fVar7;
    auVar20._8_4_ = fVar6 + fVar5 + fVar7;
    auVar20._12_4_ = fVar6 + fVar5 + fVar7;
    fVar5 = (param_1[0x18] - param_1[0x14]) * *param_3;
    fVar6 = (param_1[0x19] - param_1[0x15]) * param_3[1];
    fVar7 = (param_1[0x1a] - param_1[0x16]) * param_3[2];
    auVar8._0_4_ = fVar6 + fVar5 + fVar7;
    auVar8._4_4_ = fVar6 + fVar5 + fVar7;
    auVar8._8_4_ = fVar6 + fVar5 + fVar7;
    auVar8._12_4_ = fVar6 + fVar5 + fVar7;
  }
  else {
    fVar11 = param_2[1];
    fVar5 = (param_1[0x20] - param_1[0x2c]) * (param_1[0x20] - param_1[0x2c]);
    fVar6 = (param_1[0x21] - param_1[0x2d]) * (param_1[0x21] - param_1[0x2d]);
    fVar7 = (param_1[0x22] - param_1[0x2e]) * (param_1[0x22] - param_1[0x2e]);
    auVar14._0_4_ = fVar6 + fVar5 + fVar7;
    auVar14._4_4_ = fVar6 + fVar5 + fVar7;
    auVar14._8_4_ = fVar6 + fVar5 + fVar7;
    auVar14._12_4_ = fVar6 + fVar5 + fVar7;
    auVar20 = sqrtps(in_XMM4,auVar14);
    fVar5 = (param_1[0x28] - param_1[0x24]) * (param_1[0x28] - param_1[0x24]);
    fVar6 = (param_1[0x29] - param_1[0x25]) * (param_1[0x29] - param_1[0x25]);
    auVar15._8_4_ = (param_1[0x2a] - param_1[0x26]) * (param_1[0x2a] - param_1[0x26]);
    auVar15._4_4_ = auVar15._8_4_;
    auVar15._0_4_ = auVar15._8_4_;
    auVar15._12_4_ = auVar15._8_4_;
    auVar26._0_4_ = fVar6 + fVar5 + auVar15._8_4_;
    auVar26._4_4_ = fVar6 + fVar5 + auVar15._8_4_;
    auVar26._8_4_ = fVar6 + fVar5 + auVar15._8_4_;
    auVar26._12_4_ = fVar6 + fVar5 + auVar15._8_4_;
    auVar8 = sqrtps(auVar15,auVar26);
  }
  fVar6 = auVar20._0_4_;
  fVar7 = auVar20._4_4_;
  fVar24 = auVar20._8_4_;
  fVar27 = auVar20._12_4_;
  fVar5 = auVar8._0_4_;
  if (((fVar11 <= ABS(fVar6)) || (fVar11 <= ABS(fVar5))) &&
     (auVar31._0_4_ = fVar5 - fVar6, auVar31._4_4_ = auVar8._4_4_ - fVar7,
     auVar31._8_4_ = auVar8._8_4_ - fVar24, auVar31._12_4_ = auVar8._12_4_ - fVar27,
     param_2[0xc] <= ABS(auVar31._0_4_))) {
    auVar13._0_4_ = fVar11 - fVar6;
    auVar13._4_4_ = fVar11 - fVar7;
    auVar13._8_4_ = fVar11 - fVar24;
    auVar13._12_4_ = fVar11 - fVar27;
    local_98 = ZEXT816(0);
    auVar25._0_4_ = (0.0 - fVar11) - fVar6;
    auVar25._4_4_ = (0.0 - fVar11) - fVar7;
    auVar25._8_4_ = (0.0 - fVar11) - fVar24;
    auVar25._12_4_ = (0.0 - fVar11) - fVar27;
    auVar14 = divps(auVar13,auVar31);
    auVar26 = divps(auVar25,auVar31);
    if (fVar6 <= fVar5) {
      auVar26 = minps(auVar26,_DAT_1499314a0);
      auVar15 = maxps(auVar26,local_98);
    }
    else {
      auVar14 = minps(auVar14,_DAT_1499314a0);
      auVar15 = maxps(auVar14,local_98);
      auVar14 = auVar26;
    }
    auVar14 = minps(auVar14,_DAT_1499314a0);
    fVar11 = param_1[0x30];
    fVar5 = param_1[0x31];
    fVar6 = param_1[0x32];
    fVar7 = param_1[0x33];
    auVar14 = maxps(auVar14,local_98);
    fVar19 = auVar15._0_4_ * (param_1[0x34] - fVar11) + fVar11;
    fVar21 = auVar15._4_4_ * (param_1[0x35] - fVar5) + fVar5;
    fVar22 = auVar15._8_4_ * (param_1[0x36] - fVar6) + fVar6;
    fVar23 = auVar15._12_4_ * (param_1[0x37] - fVar7) + fVar7;
    fVar11 = auVar14._0_4_ * (param_1[0x34] - fVar11) + fVar11;
    fVar5 = auVar14._4_4_ * (param_1[0x35] - fVar5) + fVar5;
    fVar6 = auVar14._8_4_ * (param_1[0x36] - fVar6) + fVar6;
    fVar7 = auVar14._12_4_ * (param_1[0x37] - fVar7) + fVar7;
    fVar24 = param_1[0x3c];
    fVar27 = param_1[0x3d];
    fVar28 = param_1[0x3e];
    fVar29 = param_1[0x3f];
    param_1[0x30] = fVar19;
    param_1[0x31] = fVar21;
    param_1[0x32] = fVar22;
    param_1[0x33] = fVar23;
    param_1[0x34] = fVar11;
    param_1[0x35] = fVar5;
    param_1[0x36] = fVar6;
    param_1[0x37] = fVar7;
    fVar33 = auVar15._0_4_ * (param_1[0x38] - fVar24) + fVar24;
    fVar34 = auVar15._4_4_ * (param_1[0x39] - fVar27) + fVar27;
    fVar35 = auVar15._8_4_ * (param_1[0x3a] - fVar28) + fVar28;
    fVar36 = auVar15._12_4_ * (param_1[0x3b] - fVar29) + fVar29;
    fVar24 = auVar14._0_4_ * (param_1[0x38] - fVar24) + fVar24;
    fVar27 = auVar14._4_4_ * (param_1[0x39] - fVar27) + fVar27;
    fVar28 = auVar14._8_4_ * (param_1[0x3a] - fVar28) + fVar28;
    fVar29 = auVar14._12_4_ * (param_1[0x3b] - fVar29) + fVar29;
    param_1[0x3c] = fVar33;
    param_1[0x3d] = fVar34;
    param_1[0x3e] = fVar35;
    param_1[0x3f] = fVar36;
    param_1[0x38] = fVar24;
    param_1[0x39] = fVar27;
    param_1[0x3a] = fVar28;
    param_1[0x3b] = fVar29;
    fVar12 = *param_1;
    fVar16 = param_1[1];
    fVar17 = param_1[2];
    fVar18 = param_1[3];
    auVar32._0_4_ = param_1[4] - fVar12;
    auVar32._4_4_ = param_1[5] - fVar16;
    auVar32._8_4_ = param_1[6] - fVar17;
    auVar32._12_4_ = param_1[7] - fVar18;
    param_1[0x14] = auVar32._0_4_ * fVar11 + fVar12;
    param_1[0x15] = auVar32._4_4_ * fVar5 + fVar16;
    param_1[0x16] = auVar32._8_4_ * fVar6 + fVar17;
    param_1[0x17] = auVar32._12_4_ * fVar7 + fVar18;
    param_1[0x10] = auVar32._0_4_ * fVar19 + fVar12;
    param_1[0x11] = auVar32._4_4_ * fVar21 + fVar16;
    param_1[0x12] = auVar32._8_4_ * fVar22 + fVar17;
    param_1[0x13] = auVar32._12_4_ * fVar23 + fVar18;
    fVar11 = param_1[8];
    fVar5 = param_1[9];
    fVar6 = param_1[10];
    fVar7 = param_1[0xb];
    fVar12 = param_1[0xc] - fVar11;
    fVar16 = param_1[0xd] - fVar5;
    auVar30._4_4_ = fVar16;
    auVar30._0_4_ = fVar12;
    fVar17 = param_1[0xe] - fVar6;
    fVar18 = param_1[0xf] - fVar7;
    param_1[0x1c] = fVar12 * fVar33 + fVar11;
    param_1[0x1d] = fVar16 * fVar34 + fVar5;
    param_1[0x1e] = fVar17 * fVar35 + fVar6;
    param_1[0x1f] = fVar18 * fVar36 + fVar7;
    param_1[0x18] = fVar12 * fVar24 + fVar11;
    param_1[0x19] = fVar16 * fVar27 + fVar5;
    param_1[0x1a] = fVar17 * fVar28 + fVar6;
    param_1[0x1b] = fVar18 * fVar29 + fVar7;
    if ((param_1[0x34] <= fVar19) || (param_1[0x3c] <= fVar24)) {
      iVar2 = 5;
    }
    else {
      fVar11 = auVar32._0_4_ * auVar32._0_4_;
      fVar5 = auVar32._4_4_ * auVar32._4_4_;
      fVar6 = auVar32._8_4_ * auVar32._8_4_;
      auVar3._4_4_ = fVar11;
      auVar3._0_4_ = fVar11;
      auVar3._8_4_ = fVar11;
      auVar3._12_4_ = fVar11;
      auVar9._0_4_ = fVar5 + fVar11 + fVar6;
      auVar9._4_4_ = fVar5 + fVar11 + fVar6;
      auVar9._8_4_ = fVar5 + fVar11 + fVar6;
      auVar9._12_4_ = fVar5 + fVar11 + fVar6;
      if (auVar9._0_4_ == 0.0) {
        local_88 = ZEXT816(0);
      }
      else {
        auVar14 = sqrtps(auVar3,auVar9);
        local_88 = divps(auVar32,auVar14);
      }
      fVar12 = fVar12 * fVar12;
      fVar16 = fVar16 * fVar16;
      fVar11 = fVar17 * fVar17;
      auVar4._4_4_ = fVar12;
      auVar4._0_4_ = fVar12;
      auVar4._8_4_ = fVar12;
      auVar4._12_4_ = fVar12;
      auVar10._0_4_ = fVar16 + fVar12 + fVar11;
      auVar10._4_4_ = fVar16 + fVar12 + fVar11;
      auVar10._8_4_ = fVar16 + fVar12 + fVar11;
      auVar10._12_4_ = fVar16 + fVar12 + fVar11;
      if (auVar10._0_4_ != 0.0) {
        auVar14 = sqrtps(auVar4,auVar10);
        auVar30._8_4_ = fVar17;
        auVar30._12_4_ = fVar18;
        local_98 = divps(auVar30,auVar14);
      }
      iVar1 = FUN_144fc9970(param_1,param_2,param_3,local_88,local_98,local_48,local_58,local_68,
                            local_78,local_res20);
      iVar2 = -1;
      if (iVar1 != -1) {
        iVar2 = iVar1;
      }
    }
    return iVar2;
  }
  return -1;
}



// FUNCTION 144fc9ea0 FUN_144fc9ea0 body=425 status=ok
// SIG undefined FUN_144fc9ea0(void)

void FUN_144fc9ea0(longlong *param_1,longlong *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  
  lVar3 = param_1[1];
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  if (iVar4 < (int)lVar3 * 2) {
    iVar8 = iVar4 * 2 + 2;
    lVar2 = *param_1;
    iVar9 = 8;
    if (8 < iVar8) {
      iVar9 = iVar8;
    }
    lVar6 = (**(code **)(*param_2 + 8))(param_2,(longlong)iVar9 * 8);
    if (lVar6 != 0) {
      *param_1 = lVar6;
      if (0 < iVar9) {
        lVar6 = 0;
        do {
          *(undefined4 *)(*param_1 + lVar6 * 8) = 0xffffffff;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar9);
      }
      iVar8 = 0;
      lVar6 = (longlong)(iVar4 + 1);
      *(undefined4 *)(param_1 + 1) = 0;
      *(int *)((longlong)param_1 + 0xc) = iVar9 + -1;
      if (0 < lVar6) {
        lVar10 = 0;
        do {
          if (*(int *)(lVar2 + lVar10 * 8) != -1) {
            lVar1 = lVar2 + (longlong)iVar8 * 8;
            iVar4 = FUN_144fc9ea0(param_1,param_2,lVar1,local_res20);
            FUN_144b3d470(*param_1 + (longlong)iVar4 * 8,lVar1,8);
          }
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + 1;
        } while (lVar10 < lVar6);
      }
      if (-1 < (int)lVar3) {
        (**(code **)(*param_2 + 0x18))(param_2,lVar2,lVar6 * 8);
      }
    }
  }
  *param_4 = 1;
  iVar4 = *param_3;
  uVar5 = iVar4 * -0x61c8864f;
  uVar7 = (ulonglong)
          ((uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar4 * -0x4f000000) &
          *(uint *)((longlong)param_1 + 0xc));
  iVar8 = *(int *)(*param_1 + uVar7 * 8);
  if (iVar8 != -1) {
    while (iVar8 != iVar4) {
      uVar7 = (ulonglong)((int)uVar7 + 1U & *(uint *)((longlong)param_1 + 0xc));
      iVar8 = *(int *)(*param_1 + uVar7 * 8);
      if (iVar8 == -1) {
        *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
        return;
      }
    }
    *param_4 = 0;
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + *param_4;
  return;
}



// FUNCTION 144fca050 FUN_144fca050 body=462 status=ok
// SIG undefined FUN_144fca050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_144fca050(undefined1 (*param_1) [16],longlong param_2,int param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int *piVar22;
  longlong lVar23;
  float *pfVar24;
  int iVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (param_3 < *(int *)(lVar3 + 0x20)) {
    lVar27 = (longlong)param_3;
    if (*(int *)(lVar3 + 0x98) != 0) {
      param_3 = *(int *)(*(longlong *)(lVar3 + 0x90) + lVar27 * 4);
    }
    if (param_3 == -1) {
      lVar29 = *(longlong *)(lVar3 + 0x18);
    }
    else {
      lVar27 = (longlong)param_3;
      lVar29 = *(longlong *)(lVar3 + 0xb0);
    }
    piVar22 = (int *)(lVar29 + lVar27 * 0xc);
  }
  else {
    piVar22 = (int *)(*(longlong *)(lVar3 + 0xd0) +
                     (longlong)(param_3 - *(int *)(lVar3 + 0x20)) * 0xc);
  }
  uVar26 = (ulonglong)*piVar22;
  auVar35._0_4_ = 0.0 - _DAT_14c6dae80;
  auVar35._4_4_ = 0.0 - fRam000000014c6dae84;
  auVar35._8_4_ = 0.0 - fRam000000014c6dae88;
  auVar35._12_4_ = 0.0 - fRam000000014c6dae8c;
  iVar25 = piVar22[2];
  *param_1 = auVar35;
  if (0 < (short)iVar25) {
    fVar5 = *(float *)(param_2 + 0x70);
    fVar6 = *(float *)(param_2 + 0x74);
    fVar7 = *(float *)(param_2 + 0x78);
    fVar8 = *param_4;
    fVar9 = param_4[1];
    fVar10 = param_4[2];
    fVar11 = param_4[3];
    lVar27 = uVar26 * 4;
    iVar1 = *(int *)(lVar3 + 0x40);
    iVar2 = *(int *)(lVar3 + 0x30);
    fVar12 = *(float *)(param_2 + 0x60);
    fVar13 = *(float *)(param_2 + 100);
    fVar14 = *(float *)(param_2 + 0x68);
    fVar15 = *(float *)(param_2 + 0x80);
    fVar16 = *(float *)(param_2 + 0x84);
    fVar17 = *(float *)(param_2 + 0x88);
    fVar18 = *(float *)(param_2 + 0x90);
    fVar19 = *(float *)(param_2 + 0x94);
    fVar20 = *(float *)(param_2 + 0x98);
    lVar29 = uVar26 * 0x14;
    uVar28 = (ulonglong)(uint)(int)(short)iVar25;
    do {
      iVar25 = (int)uVar26;
      if (iVar25 < iVar2) {
        iVar21 = iVar25;
        if (*(int *)(lVar3 + 0x78) != 0) {
          iVar21 = *(int *)(lVar27 + *(longlong *)(lVar3 + 0x70));
        }
        if (iVar21 != -1) {
          lVar23 = *(longlong *)(lVar3 + 0xc0);
          goto LAB_144fca16f;
        }
        piVar22 = (int *)(*(longlong *)(lVar3 + 0x28) + lVar29);
      }
      else {
        iVar21 = iVar25 - iVar2;
        lVar23 = *(longlong *)(lVar3 + 0xe0);
LAB_144fca16f:
        piVar22 = (int *)(lVar23 + (longlong)iVar21 * 0x14);
      }
      iVar21 = *piVar22;
      if (iVar21 < iVar1) {
        pfVar24 = (float *)((longlong)iVar21 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar24 = (float *)((longlong)(iVar21 - iVar1) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      fVar30 = *pfVar24;
      fVar31 = pfVar24[1];
      fVar34 = pfVar24[2];
      uVar26 = (ulonglong)(iVar25 + 1);
      lVar27 = lVar27 + 4;
      lVar29 = lVar29 + 0x14;
      fVar32 = (fVar30 * fVar12 + fVar31 * fVar5 + fVar34 * fVar15 + fVar18) * fVar8;
      fVar33 = (fVar30 * fVar13 + fVar31 * fVar6 + fVar34 * fVar16 + fVar19) * fVar9;
      fVar34 = (fVar30 * fVar14 + fVar31 * fVar7 + fVar34 * fVar17 + fVar20) * fVar10;
      fVar30 = fVar33 + fVar32;
      fVar32 = fVar32 + fVar33;
      fVar31 = fVar11 + fVar34;
      fVar34 = fVar34 + fVar11;
      auVar4._4_4_ = fVar34 + fVar32;
      auVar4._0_4_ = fVar31 + fVar30;
      auVar4._8_4_ = fVar30 + fVar31;
      auVar4._12_4_ = fVar32 + fVar34;
      auVar35 = maxps(auVar35,auVar4);
      *param_1 = auVar35;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  return param_1;
}



// FUNCTION 144fca220 FUN_144fca220 body=558 status=ok
// SIG undefined FUN_144fca220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144fca220(float *param_1,longlong param_2,int param_3,float *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  int *piVar28;
  longlong lVar29;
  float *pfVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (param_3 < *(int *)(lVar3 + 0x20)) {
    lVar33 = (longlong)param_3;
    if (*(int *)(lVar3 + 0x98) != 0) {
      param_3 = *(int *)(*(longlong *)(lVar3 + 0x90) + lVar33 * 4);
    }
    if (param_3 == -1) {
      lVar35 = *(longlong *)(lVar3 + 0x18);
    }
    else {
      lVar33 = (longlong)param_3;
      lVar35 = *(longlong *)(lVar3 + 0xb0);
    }
    piVar28 = (int *)(lVar35 + lVar33 * 0xc);
  }
  else {
    piVar28 = (int *)(*(longlong *)(lVar3 + 0xd0) +
                     (longlong)(param_3 - *(int *)(lVar3 + 0x20)) * 0xc);
  }
  uVar32 = (ulonglong)*piVar28;
  fVar49 = 0.0 - _DAT_14c6dae80;
  fVar50 = 0.0 - fRam000000014c6dae84;
  fVar51 = 0.0 - fRam000000014c6dae88;
  fVar52 = 0.0 - fRam000000014c6dae8c;
  iVar31 = piVar28[2];
  uVar53 = 0;
  uVar54 = 0;
  uVar55 = 0;
  uVar56 = 0;
  *param_1 = fVar49;
  param_1[1] = fVar50;
  param_1[2] = fVar51;
  param_1[3] = fVar52;
  if (0 < (short)iVar31) {
    iVar1 = *(int *)(lVar3 + 0x40);
    iVar2 = *(int *)(lVar3 + 0x30);
    fVar4 = *param_4;
    fVar5 = param_4[1];
    fVar6 = param_4[2];
    fVar7 = param_4[3];
    lVar33 = uVar32 * 4;
    fVar8 = *(float *)(param_2 + 0x70);
    fVar9 = *(float *)(param_2 + 0x74);
    fVar10 = *(float *)(param_2 + 0x78);
    fVar11 = *(float *)(param_2 + 0x7c);
    fVar12 = *(float *)(param_2 + 0x60);
    fVar13 = *(float *)(param_2 + 100);
    fVar14 = *(float *)(param_2 + 0x68);
    fVar15 = *(float *)(param_2 + 0x6c);
    fVar16 = *(float *)(param_2 + 0x80);
    fVar17 = *(float *)(param_2 + 0x84);
    fVar18 = *(float *)(param_2 + 0x88);
    fVar19 = *(float *)(param_2 + 0x8c);
    fVar20 = *(float *)(param_2 + 0x90);
    fVar21 = *(float *)(param_2 + 0x94);
    fVar22 = *(float *)(param_2 + 0x98);
    fVar23 = *(float *)(param_2 + 0x9c);
    lVar35 = uVar32 * 0x14;
    uVar34 = (ulonglong)(uint)(int)(short)iVar31;
    do {
      iVar31 = (int)uVar32;
      if (iVar31 < iVar2) {
        iVar27 = iVar31;
        if (*(int *)(lVar3 + 0x78) != 0) {
          iVar27 = *(int *)(lVar33 + *(longlong *)(lVar3 + 0x70));
        }
        if (iVar27 != -1) {
          lVar29 = *(longlong *)(lVar3 + 0xc0);
          goto LAB_144fca357;
        }
        piVar28 = (int *)(*(longlong *)(lVar3 + 0x28) + lVar35);
      }
      else {
        iVar27 = iVar31 - iVar2;
        lVar29 = *(longlong *)(lVar3 + 0xe0);
LAB_144fca357:
        piVar28 = (int *)(lVar29 + (longlong)iVar27 * 0x14);
      }
      iVar27 = *piVar28;
      if (iVar27 < iVar1) {
        pfVar30 = (float *)((longlong)iVar27 * 0x10 + *(longlong *)(lVar3 + 0x38));
      }
      else {
        pfVar30 = (float *)((longlong)(iVar27 - iVar1) * 0x10 + *(longlong *)(lVar3 + 0xf0));
      }
      fVar24 = *pfVar30;
      fVar25 = pfVar30[1];
      fVar26 = pfVar30[2];
      uVar32 = (ulonglong)(iVar31 + 1);
      lVar33 = lVar33 + 4;
      lVar35 = lVar35 + 0x14;
      fVar46 = fVar24 * fVar12 + fVar25 * fVar8 + fVar26 * fVar16 + fVar20;
      fVar47 = fVar24 * fVar13 + fVar25 * fVar9 + fVar26 * fVar17 + fVar21;
      fVar48 = fVar24 * fVar14 + fVar25 * fVar10 + fVar26 * fVar18 + fVar22;
      fVar41 = fVar46 * fVar4;
      fVar42 = fVar47 * fVar5;
      fVar43 = fVar48 * fVar6;
      fVar40 = fVar42 + fVar41;
      fVar41 = fVar41 + fVar42;
      fVar42 = fVar7 + fVar43;
      fVar43 = fVar43 + fVar7;
      fVar44 = fVar42 + fVar40;
      fVar45 = fVar43 + fVar41;
      fVar40 = fVar40 + fVar42;
      fVar41 = fVar41 + fVar43;
      uVar36 = -(uint)(fVar49 < fVar44);
      uVar37 = -(uint)(fVar50 < fVar45);
      uVar38 = -(uint)(fVar51 < fVar40);
      uVar39 = -(uint)(fVar52 < fVar41);
      fVar49 = (float)(uVar36 & (uint)fVar44 | ~uVar36 & (uint)fVar49);
      fVar50 = (float)(uVar37 & (uint)fVar45 | ~uVar37 & (uint)fVar50);
      fVar51 = (float)(uVar38 & (uint)fVar40 | ~uVar38 & (uint)fVar51);
      fVar52 = (float)(uVar39 & (uint)fVar41 | ~uVar39 & (uint)fVar52);
      *param_1 = fVar49;
      param_1[1] = fVar50;
      param_1[2] = fVar51;
      param_1[3] = fVar52;
      uVar53 = ~uVar36 & uVar53 | uVar36 & (uint)fVar46;
      uVar54 = ~uVar37 & uVar54 | uVar37 & (uint)fVar47;
      uVar55 = ~uVar38 & uVar55 | uVar38 & (uint)fVar48;
      uVar56 = ~uVar39 & uVar56 |
               uVar39 & (uint)(fVar24 * fVar15 + fVar25 * fVar11 + fVar26 * fVar19 + fVar23);
      uVar34 = uVar34 - 1;
    } while (uVar34 != 0);
  }
  *param_5 = uVar53;
  param_5[1] = uVar54;
  param_5[2] = uVar55;
  param_5[3] = uVar56;
  return param_1;
}



// FUNCTION 144fca450 FUN_144fca450 body=235 status=ok
// SIG undefined FUN_144fca450(void)

void FUN_144fca450(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144fca540 FUN_144fca540 body=236 status=ok
// SIG undefined FUN_144fca540(void)

void FUN_144fca540(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 0x10;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144fca630 FUN_144fca630 body=243 status=ok
// SIG undefined FUN_144fca630(void)

void FUN_144fca630(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x10,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144fca730 FUN_144fca730 body=247 status=ok
// SIG undefined FUN_144fca730(void)

void FUN_144fca730(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144fca830 FUN_144fca830 body=260 status=ok
// SIG undefined FUN_144fca830(void)

void FUN_144fca830(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iStack_5c;
  
  uVar8 = (ulonglong)param_2;
  uVar9 = uVar8;
  do {
    uVar5 = uVar9 & 0xffffffff;
    iStack_5c = (int)((ulonglong)
                      *(undefined8 *)(param_1 + ((longlong)((int)uVar9 + param_3) >> 1) * 8) >> 0x20
                     );
    uVar7 = (longlong)param_3;
    iVar6 = param_3;
    do {
      uVar4 = (uint)uVar5;
      piVar1 = (int *)(param_1 + 4 + uVar8 * 8);
      iVar2 = *(int *)(param_1 + 4 + uVar8 * 8);
      while (iStack_5c < iVar2) {
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        piVar1 = piVar1 + 2;
        uVar8 = uVar8 + 1;
        iVar2 = *piVar1;
      }
      piVar1 = (int *)(param_1 + 4 + uVar7 * 8);
      iVar2 = *(int *)(param_1 + 4 + uVar7 * 8);
      while (iVar2 < iStack_5c) {
        iVar6 = iVar6 + -1;
        piVar1 = piVar1 + -2;
        uVar7 = uVar7 - 1;
        iVar2 = *piVar1;
      }
      if ((longlong)uVar7 < (longlong)uVar8) break;
      if (uVar7 != uVar8) {
        uVar3 = *(undefined8 *)(param_1 + uVar7 * 8);
        *(undefined8 *)(param_1 + uVar7 * 8) = *(undefined8 *)(param_1 + uVar8 * 8);
        *(undefined8 *)(param_1 + uVar8 * 8) = uVar3;
      }
      iVar6 = iVar6 + -1;
      uVar7 = uVar7 - 1;
      uVar4 = uVar4 + 1;
      uVar5 = (ulonglong)uVar4;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)uVar7);
    if ((int)uVar9 < iVar6) {
      FUN_144fca830(param_1,uVar9 & 0xffffffff,iVar6,param_4);
    }
    if (param_3 <= (int)uVar4) {
      return;
    }
    uVar9 = (ulonglong)uVar4;
  } while( true );
}



// FUNCTION 144fca940 FUN_144fca940 body=584 status=ok
// SIG undefined FUN_144fca940(void)

undefined8 * FUN_144fca940(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *local_res8;
  int local_res10 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  undefined1 local_68 [48];
  ulonglong uVar9;
  
  uVar4 = 0;
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshStaticTreeFaceIterator::vftable;
  param_1[3] = 0;
  local_res8 = param_1;
  FUN_144be90e0(0x7dae5151);
  iVar1 = *(int *)(param_2 + 0x20);
  FUN_144be90e0(0xa0275451);
  FUN_144fcd2c0(local_88);
  FUN_144fcd510(local_88,local_res10,iVar1);
  FUN_144be90e0(0xf022e075);
  uVar5 = 0x73237a;
  uVar9 = uVar4;
  if (iVar1 != 0) {
    do {
      uVar8 = (uint)uVar9;
      iVar2 = iVar1 - uVar8;
      if (0x4f < (int)(iVar1 - uVar8)) {
        iVar2 = 0x4f;
      }
      iVar6 = iVar2 + uVar8;
      while (iVar7 = (int)uVar9, (int)uVar8 < iVar6) {
        local_98 = 0;
        uStack_90 = 0;
        local_res10[0] = iVar7;
        FUN_144c52da0(param_2,local_res10,&local_98,local_68);
        FUN_144fcd550(local_88,local_68,uVar9);
        uVar8 = iVar7 + 1;
        uVar9 = (ulonglong)uVar8;
      }
      uVar5 = uVar5 + iVar2 * 0xcd32be;
      if (uVar5 < (uint)(iVar2 * 0xcd32be)) {
        FUN_144be90e0(0x7cf180c1);
      }
      param_1 = local_res8;
    } while (iVar7 != iVar1);
  }
  FUN_144be90e0(0xc942f028);
  FUN_144fce170(local_88,&local_res8);
  FUN_144be90e0(0xe1762101);
  local_res8 = (undefined8 *)0x20;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkcdStaticAabbTree");
  }
  if (lVar3 != 0) {
    uVar4 = FUN_145320480(lVar3);
  }
  FUN_1453204f0(uVar4,local_88);
  if (param_1[3] != uVar4) {
    if (uVar4 != 0) {
      FUN_144b3d910(uVar4);
    }
    lVar3 = param_1[3];
    param_1[3] = uVar4;
    if (lVar3 != 0) {
      FUN_144b3f230();
    }
  }
  FUN_144be90e0(0x685c359d);
  if (uVar4 != 0) {
    FUN_144b3f230(uVar4);
  }
  FUN_144fcd490(local_88);
  return param_1;
}



// FUNCTION 144fcab90 FUN_144fcab90 body=299 status=ok
// SIG undefined FUN_144fcab90(void)

void FUN_144fcab90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_38;
  undefined8 local_30;
  char *local_28;
  char *local_20;
  
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
    local_28 = "TtStaticTree::iterateAroundPoint";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_38 = _anon_7997F7CA::NavMeshMediatorCPCollector::vftable;
  local_30 = param_4;
  FUN_1453208a0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,&local_38,param_5);
  local_38 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if (lVar1 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
  }
  return;
}



// FUNCTION 144fcacc0 FUN_144fcacc0 body=296 status=ok
// SIG undefined FUN_144fcacc0(void)

bool FUN_144fcacc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined **local_38;
  undefined8 local_30;
  char *local_28;
  char *local_20;
  
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
    local_28 = "TtStaticTree::iterateAlongRay";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_38 = _anon_7997F7CA::NavMeshMediatorRayCastCollector::vftable;
  local_30 = param_4;
  iVar2 = FUN_1453205c0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,&local_38);
  local_38 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (lVar1 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
  }
  return iVar2 != 0;
}



// FUNCTION 144fcadf0 FUN_144fcadf0 body=312 status=ok
// SIG undefined FUN_144fcadf0(void)

bool FUN_144fcadf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined **local_38;
  undefined8 local_30;
  char *local_28;
  char *local_20;
  
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
    local_28 = "TtStaticTree::iterateAlongSphereRay";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_38 = _anon_7997F7CA::NavMeshMediatorRayCastCollector::vftable;
  local_30 = param_5;
  iVar2 = FUN_1453206d0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,&local_38);
  local_38 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if (lVar1 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
  }
  return iVar2 != 0;
}



// FUNCTION 144fcaf30 FUN_144fcaf30 body=268 status=ok
// SIG undefined FUN_144fcaf30(void)

void FUN_144fcaf30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined **local_38;
  undefined8 local_30;
  char *local_28;
  char *local_20;
  
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
    local_28 = "TtStaticTree::iterateInsideAabb";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_38 = _anon_7997F7CA::NavMeshMediatorAabbCollector::vftable;
  local_30 = param_3;
  FUN_1453207f0(*(undefined8 *)(param_1 + 0x18),param_2,&local_38);
  local_38 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if (lVar1 != 0) {
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
  }
  return;
}



// FUNCTION 144fcb040 FUN_144fcb040 body=383 status=ok
// SIG undefined FUN_144fcb040(void)

void FUN_144fcb040(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [48];
  
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
    local_58 = "TtStaticTree::iterateInsideAabbCollection";
    pcStack_50 = "";
    FUN_144b3f370(lVar1,&local_58);
  }
  FUN_144fcd2c0(local_48);
  local_58 = (char *)*param_2;
  pcStack_50 = (char *)param_2[1];
  FUN_144fcb1d0(&local_58,param_3,param_4,local_48);
  uVar5 = FUN_144fce650(local_48);
  uVar6 = FUN_145320990(*(undefined8 *)(param_1 + 0x18));
  local_res8 = param_5;
  iVar2 = FUN_145320980(*(undefined8 *)(param_1 + 0x18));
  iVar3 = FUN_144fce630(local_48);
  if (iVar2 < iVar3) {
    FUN_144fcb780(uVar5,uVar6);
  }
  else {
    FUN_144fcb820(uVar6,uVar5,&local_res8);
  }
  FUN_144fcd490(local_48);
  if (lVar1 != 0) {
    local_58 = "Et";
    pcStack_50 = "";
    FUN_144b3f260(lVar1,&local_58);
  }
  return;
}



// FUNCTION 144fcb1c0 FUN_144fcb1c0 body=3 status=ok
// SIG undefined FUN_144fcb1c0(void)

void FUN_144fcb1c0(void)

{
  return;
}



// FUNCTION 144fcb1d0 FUN_144fcb1d0 body=1068 status=ok
// SIG undefined FUN_144fcb1d0(void)

void FUN_144fcb1d0(longlong *param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined *puVar13;
  uint local_res10;
  longlong local_338;
  undefined4 local_330;
  uint local_32c;
  char *local_328;
  char *pcStack_320;
  undefined *local_318;
  undefined *puStack_310;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined8 local_2e8;
  longlong *local_2e0;
  float local_2d8;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  undefined4 local_2a4;
  ulonglong local_298;
  undefined8 *local_288 [2];
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 *local_258;
  undefined4 local_250;
  uint local_24c;
  undefined1 local_248 [528];
  
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar12 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar12 + 0xf0);
  if (lVar3 == 0) {
    if (*(char *)(lVar12 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar12 + 0xf0) = lVar3;
  }
  puVar13 = *(undefined **)(lVar3 + 0x3e0);
  local_328 = "TtQueryMediator::buildAabbTreeWithMerging";
  pcStack_320 = "";
  local_318 = puVar13;
  if (puVar13 != (undefined *)0x0) {
    local_328 = "TtQueryMediator::buildAabbTreeWithMerging";
    pcStack_320 = "";
    FUN_144b3f370(puVar13,&local_328);
  }
  uVar6 = 0;
  local_338 = 0;
  local_330 = 0;
  local_32c = 0x80000000;
  iVar2 = (int)(param_1[1] - *param_1 >> 5);
  if (0 < iVar2) {
    FUN_141807990(&local_338,&PTR_vftable_14c6e47c0,(longlong)iVar2);
  }
  local_2e0 = &local_338;
  local_2e8 = param_4;
  local_2a4 = param_2;
  FUN_144be90e0(0x25659f10);
  uVar7 = 0x496fa3f;
  local_328 = (char *)(param_1[1] - *param_1 >> 5);
  iVar2 = (int)local_328;
  local_res10 = 0;
  uVar10 = uVar6;
  if (iVar2 != 0) {
    do {
      iVar5 = (int)uVar6;
      iVar11 = (int)local_328 - iVar5;
      if (0x11 < iVar11) {
        iVar11 = 0x11;
      }
      if ((longlong)uVar10 < (longlong)(iVar5 + iVar11)) {
        lVar3 = (longlong)(iVar5 + iVar11) - uVar10;
        local_298 = uVar10 + lVar3;
        lVar12 = uVar10 << 5;
        local_res10 = iVar5 + (int)lVar3;
        do {
          pfVar1 = (float *)(lVar12 + *param_1);
          local_308 = *pfVar1;
          fStack_304 = pfVar1[1];
          fStack_300 = pfVar1[2];
          fStack_2fc = pfVar1[3];
          pfVar1 = (float *)(lVar12 + 0x10 + *param_1);
          local_2f8 = *pfVar1;
          fStack_2f4 = pfVar1[1];
          fStack_2f0 = pfVar1[2];
          fStack_2ec = pfVar1[3];
          if (param_3 != 0) {
            FUN_144be9410(param_3,&local_308,&local_308);
          }
          local_2d8 = (fStack_2f0 - fStack_300) *
                      (fStack_2f4 - fStack_304) * (local_2f8 - local_308);
          local_2c8 = local_308;
          fStack_2c4 = fStack_304;
          fStack_2c0 = fStack_300;
          fStack_2bc = fStack_2fc;
          local_2b8 = local_2f8;
          fStack_2b4 = fStack_2f4;
          fStack_2b0 = fStack_2f0;
          fStack_2ac = fStack_2ec;
          local_2a8 = local_2d8;
          uVar4 = FUN_144fce650(local_2e8);
          local_288[0] = &local_2e8;
          local_258 = local_248;
          local_278 = local_308;
          fStack_274 = fStack_304;
          fStack_270 = fStack_300;
          fStack_26c = fStack_2fc;
          local_268 = local_2f8;
          fStack_264 = fStack_2f4;
          fStack_260 = fStack_2f0;
          fStack_25c = fStack_2ec;
          local_250 = 0;
          local_24c = 0x80000080;
          FUN_144fccdc0(uVar4,&local_258,local_288);
          local_250 = 0;
          if ((-1 < (int)local_24c) && (local_258 != (undefined1 *)0x0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_258,(ulonglong)(local_24c & 0x7fffffff) << 2);
          }
          iVar5 = (int)local_2e0[1];
          if (iVar5 == 0) {
            if (0.0 < local_2d8) {
              FUN_144fcd550(local_2e8,&local_308,local_2d8);
            }
          }
          else {
            if ((iVar5 != 1) && (iVar8 = 1, 1 < iVar5)) {
              lVar9 = 4;
              do {
                FUN_144fcded0(local_2e8,*(undefined4 *)(lVar9 + *local_2e0));
                lVar9 = lVar9 + 4;
                iVar8 = iVar8 + 1;
              } while (iVar8 < (int)local_2e0[1]);
            }
            FUN_144fcd920(local_2e8,*(undefined4 *)*local_2e0,&local_2c8);
            FUN_144fcd8f0(local_2e8,*(undefined4 *)*local_2e0,local_2a8);
            *(undefined4 *)(local_2e0 + 1) = 0;
          }
          lVar12 = lVar12 + 0x20;
          lVar3 = lVar3 + -1;
          uVar10 = local_298;
        } while (lVar3 != 0);
      }
      uVar7 = uVar7 + iVar11 * 0x3bef784;
      if (uVar7 < (uint)(iVar11 * 0x3bef784)) {
        FUN_144be90e0(0x25659f09);
      }
      uVar6 = (ulonglong)local_res10;
      puVar13 = local_318;
    } while (uVar10 != (longlong)iVar2);
  }
  local_330 = 0;
  if ((-1 < (int)local_32c) && (local_338 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_338,(ulonglong)(local_32c & 0x7fffffff) << 2);
  }
  local_338 = 0;
  local_32c = 0x80000000;
  if (puVar13 != (undefined *)0x0) {
    local_318 = &DAT_149981764;
    puStack_310 = &DAT_149981766;
    FUN_144b3f260(puVar13,&local_318);
  }
  return;
}



// FUNCTION 144fcb600 FUN_144fcb600 body=63 status=ok
// SIG undefined FUN_144fcb600(void)

undefined8
FUN_144fcb600(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  (**(code **)**(undefined8 **)(param_1 + 8))
            (*(undefined8 **)(param_1 + 8),param_2,local_res18,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 144fcb640 FUN_144fcb640 body=71 status=ok
// SIG undefined FUN_144fcb640(void)

undefined8 * FUN_144fcb640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144fcb690 FUN_144fcb690 body=33 status=ok
// SIG undefined FUN_144fcb690(void)

undefined1 FUN_144fcb690(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))
                    (*(undefined8 **)(param_1 + 8),local_res10,param_4);
  return uVar1;
}



// FUNCTION 144fcb6c0 FUN_144fcb6c0 body=71 status=ok
// SIG undefined FUN_144fcb6c0(void)

undefined8 * FUN_144fcb6c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::RaycastCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144fcb710 FUN_144fcb710 body=30 status=ok
// SIG undefined FUN_144fcb710(void)

undefined1 FUN_144fcb710(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),local_res10);
  return uVar1;
}



// FUNCTION 144fcb730 FUN_144fcb730 body=71 status=ok
// SIG undefined FUN_144fcb730(void)

undefined8 * FUN_144fcb730(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144fcb780 FUN_144fcb780 body=147 status=ok
// SIG undefined FUN_144fcb780(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144fcb780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 *local_2018;
  undefined4 local_2010;
  uint local_200c;
  undefined1 local_2008 [8184];
  undefined8 uStack_10;
  
  uStack_10 = 0x144fcb78c;
  local_2018 = local_2008;
  local_2010 = 0;
  local_200c = 0x80000080;
  local_res18[0] = param_3;
  FUN_144fcba20(0,param_1,param_2,&local_2018,local_res18,0,0);
  local_2010 = 0;
  if ((-1 < (int)local_200c) && (local_2018 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2018,(ulonglong)(local_200c & 0x7fffffff) << 6);
  }
  return;
}



// FUNCTION 144fcb820 FUN_144fcb820 body=147 status=ok
// SIG undefined FUN_144fcb820(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144fcb820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 *local_2018;
  undefined4 local_2010;
  uint local_200c;
  undefined1 local_2008 [8184];
  undefined8 uStack_10;
  
  uStack_10 = 0x144fcb82c;
  local_2018 = local_2008;
  local_2010 = 0;
  local_200c = 0x80000080;
  local_res18[0] = param_3;
  FUN_144fcc440(0,param_1,param_2,&local_2018,local_res18,0,0);
  local_2010 = 0;
  if ((-1 < (int)local_200c) && (local_2018 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_2018,(ulonglong)(local_200c & 0x7fffffff) << 6);
  }
  return;
}


