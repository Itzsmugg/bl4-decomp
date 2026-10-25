// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145021830 FUN_145021830 body=115 status=ok
// SIG undefined FUN_145021830(void)

undefined8 * FUN_145021830(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 1450218b0 FUN_1450218b0 body=504 status=ok
// SIG undefined FUN_1450218b0(void)

void FUN_1450218b0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int *piVar9;
  int *piVar10;
  ulonglong local_res18;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar7 * 2;
  uVar4 = param_3;
  if (param_3 < uVar8) {
    uVar4 = uVar8;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x20);
  piVar10 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar10 + 7;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(lVar2 + 0x1c);
    uVar8 = (ulonglong)uVar1;
    piVar9 = piVar3;
    do {
      if (piVar6 + -7 != (int *)0x0) {
        piVar6[-7] = *piVar10;
        piVar6[-6] = piVar9[-6];
        piVar6[-5] = piVar9[-5];
        piVar6[-3] = 0;
        piVar6[-2] = 0;
        piVar6[-1] = 0;
        *piVar6 = -0x80000000;
        FUN_144c2e9f0(piVar9 + -3,&PTR_vftable_14c6e47a0);
        *(undefined8 *)(piVar6 + -3) = *(undefined8 *)(piVar9 + -3);
        piVar6[-1] = piVar9[-1];
        *piVar6 = *piVar9;
        piVar9[-3] = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        piVar9[0] = 0;
      }
      piVar6 = piVar6 + 8;
      piVar10 = piVar10 + 8;
      piVar9 = piVar9 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    uVar8 = (ulonglong)uVar1;
    do {
      piVar3[-1] = 0;
      if ((-1 < *piVar3) && (*(longlong *)(piVar3 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      *piVar3 = -0x80000000;
      piVar3[-3] = 0;
      piVar3[-2] = 0;
      piVar3 = piVar3 + 8;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar4 * 0x20 + 0x20;
  uVar5 = uVar4;
  if (uVar8 <= local_res18) {
    uVar5 = uVar4 + 1;
    if (uVar8 <= local_res18 - 0x20) {
      uVar5 = uVar5 + ((local_res18 - 0x20) + uVar4 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 << 5);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return;
}



// FUNCTION 145021aa8 FUN_145021aa8 body=9 status=ok
// SIG undefined FUN_145021aa8(void)

void FUN_145021aa8(longlong param_1)

{
  FUN_145021830(param_1 + -0x20);
  return;
}



// FUNCTION 145021ab4 FUN_145021ab4 body=9 status=ok
// SIG undefined FUN_145021ab4(void)

void FUN_145021ab4(longlong param_1)

{
  FUN_145021070(param_1 + -0x20);
  return;
}



// FUNCTION 145021ac0 FUN_145021ac0 body=9 status=ok
// SIG undefined FUN_145021ac0(void)

void FUN_145021ac0(longlong param_1)

{
  FUN_145020400(param_1 + -0x20);
  return;
}



// FUNCTION 145021acc FUN_145021acc body=9 status=ok
// SIG undefined FUN_145021acc(void)

void FUN_145021acc(longlong param_1)

{
  FUN_145021270(param_1 + -0x20);
  return;
}



// FUNCTION 145021ad8 FUN_145021ad8 body=9 status=ok
// SIG undefined FUN_145021ad8(void)

void FUN_145021ad8(longlong param_1)

{
  FUN_145021510(param_1 + -0x20);
  return;
}



// FUNCTION 145021af0 FUN_145021af0 body=839 status=ok
// SIG undefined FUN_145021af0(void)

longlong *
FUN_145021af0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  char *local_48;
  char *local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  
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
    local_48 = "TthkaiNavigatorUpdateTasks::makeContext";
    local_40 = "";
    FUN_144b3f370(lVar1,&local_48);
  }
  local_res8 = 0x70;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"Context");
  }
  puVar6 = (undefined8 *)0x0;
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
    puVar4[1] = 0xffffffff;
    *puVar4 = hkaiNavigatorUpdateTasks::Context::vftable;
    puVar4[2] = 1;
    puVar4[4] = 0;
    *(undefined4 *)(puVar4 + 5) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x2c) = 0x80000000;
    puVar4[6] = 0;
    *(undefined4 *)(puVar4 + 7) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x80000000;
    puVar4[8] = puVar4 + 10;
    *(undefined4 *)(puVar4 + 9) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = 0x80000001;
    puVar4[0xc] = 0;
    puVar6 = puVar4;
  }
  *param_1 = (longlong)puVar6;
  puVar6[3] = param_2;
  lVar5 = FUN_145310850(param_2);
  lVar3 = *param_1;
  plVar8 = (longlong *)(lVar3 + 0x20);
  if (local_38 != plVar8) {
    puVar4 = *(undefined8 **)(lVar5 + 0x20);
    iVar7 = (int)(((longlong)*(int *)(lVar5 + 0x28) << 3) >> 3);
    if ((int)(*(uint *)(lVar3 + 0x2c) & 0x7fffffff) < iVar7) {
      FUN_144c9db20(plVar8,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar6 = (undefined8 *)*plVar8;
    iVar10 = iVar7;
    if (*(int *)(lVar3 + 0x28) < iVar7) {
      iVar10 = *(int *)(lVar3 + 0x28);
    }
    if ((puVar6 != puVar4) && (lVar5 = (longlong)iVar10, 0 < iVar10)) {
      lVar9 = (longlong)puVar4 - (longlong)puVar6;
      do {
        *puVar6 = *(undefined8 *)(lVar9 + (longlong)puVar6);
        puVar6 = puVar6 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    puVar4 = puVar4 + iVar10;
    if (0 < iVar7 - iVar10) {
      uVar11 = (ulonglong)(uint)(iVar7 - iVar10);
      puVar6 = (undefined8 *)(*plVar8 + (longlong)iVar10 * 8);
      do {
        if (puVar6 != (undefined8 *)0x0) {
          uVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar6 = uVar2;
        }
        uVar11 = uVar11 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar11 != 0);
    }
    *(int *)(lVar3 + 0x28) = iVar7;
  }
  lVar5 = FUN_145310840(param_2);
  lVar3 = *param_1;
  plVar8 = (longlong *)(lVar3 + 0x30);
  if (local_28 != plVar8) {
    puVar4 = *(undefined8 **)(lVar5 + 0x20);
    iVar7 = (int)(((longlong)*(int *)(lVar5 + 0x28) << 3) >> 3);
    if ((int)(*(uint *)(lVar3 + 0x3c) & 0x7fffffff) < iVar7) {
      FUN_144c9cf80(plVar8,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar6 = (undefined8 *)*plVar8;
    iVar10 = iVar7;
    if (*(int *)(lVar3 + 0x38) < iVar7) {
      iVar10 = *(int *)(lVar3 + 0x38);
    }
    if ((puVar6 != puVar4) && (lVar5 = (longlong)iVar10, 0 < iVar10)) {
      lVar9 = (longlong)puVar4 - (longlong)puVar6;
      do {
        *puVar6 = *(undefined8 *)(lVar9 + (longlong)puVar6);
        puVar6 = puVar6 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    puVar4 = puVar4 + iVar10;
    if (0 < iVar7 - iVar10) {
      uVar11 = (ulonglong)(uint)(iVar7 - iVar10);
      puVar6 = (undefined8 *)(*plVar8 + (longlong)iVar10 * 8);
      do {
        if (puVar6 != (undefined8 *)0x0) {
          uVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar6 = uVar2;
        }
        uVar11 = uVar11 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar11 != 0);
    }
    *(int *)(lVar3 + 0x38) = iVar7;
  }
  *(undefined4 *)(*param_1 + 0x68) = param_5;
  lVar3 = *param_1;
  iVar7 = *(int *)(lVar3 + 0x38);
  if ((int)(*(uint *)(lVar3 + 0x4c) & 0x7fffffff) < iVar7) {
    FUN_144fbfec0(lVar3 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  if ((*(int *)(lVar3 + 0x48) < iVar7) || (iVar7 < *(int *)(lVar3 + 0x48))) {
    *(int *)(lVar3 + 0x48) = iVar7;
  }
  if (lVar1 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar1,&local_48);
  }
  return param_1;
}



// FUNCTION 145021e40 FUN_145021e40 body=1195 status=ok
// SIG undefined FUN_145021e40(void)

undefined2 * FUN_145021e40(undefined2 *param_1,longlong param_2,longlong param_3,short param_4)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong local_res18;
  short local_58 [2];
  undefined2 local_54 [6];
  char *local_48;
  char *local_40;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res18 = param_3;
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
  if (lVar4 != 0) {
    local_48 = "TtAi";
    local_40 = "";
    FUN_144b3f370(lVar4,&local_48);
    local_48 = "TtNavigator";
    local_40 = "";
    FUN_144b3f370(lVar4,&local_48);
    local_48 = "TtUpdateTasks";
    local_40 = "";
    FUN_144b3f370(lVar4,&local_48);
    local_48 = "TtaddTasks";
    local_40 = "";
    FUN_144b3f370(lVar4,&local_48);
  }
  FUN_144be3ae0(param_2,param_1,0,0x40);
  if (*(int *)(param_3 + 0x28) != 0) {
    local_48 = (char *)0x930;
    lVar7 = (*DAT_14c787670)(0,&local_48,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar7,"UpdateNavigatorsTask");
    }
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_145022a00(lVar7,param_3);
    }
    FUN_144be3b70(param_2,local_58,lVar7,0x40);
    sVar6 = local_58[0];
    if ((param_4 != -1) && (local_58[0] != -1)) {
      iVar9 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      iVar3 = *(int *)(param_2 + 0x330);
      lVar5 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar9;
      *(short *)(lVar5 + (longlong)iVar3 * 4) = param_4;
      *(short *)(lVar5 + 2 + (longlong)iVar3 * 4) = sVar6;
    }
    sVar6 = local_58[0];
    uVar2 = *param_1;
    iVar9 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    iVar3 = *(int *)(param_2 + 0x330);
    lVar5 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar9;
    *(short *)(lVar5 + (longlong)iVar3 * 4) = sVar6;
    *(undefined2 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar2;
    param_3 = local_res18;
    if (lVar7 != 0) {
      FUN_144b3f230(lVar7);
      param_3 = local_res18;
    }
  }
  if (*(int *)(param_3 + 0x38) != 0) {
    local_48 = (char *)0x930;
    lVar7 = (*DAT_14c787670)(0,&local_48,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar7,"UpdateVolumeNavigatorsTask");
    }
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_145022ef0(lVar7,param_3);
    }
    FUN_144be3b70(param_2,local_58,lVar7,0x40);
    sVar6 = local_58[0];
    if ((param_4 != -1) && (local_58[0] != -1)) {
      iVar9 = *(int *)(param_2 + 0x330) + 1;
      if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
        FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      iVar3 = *(int *)(param_2 + 0x330);
      lVar5 = *(longlong *)(param_2 + 0x328);
      *(int *)(param_2 + 0x330) = iVar9;
      *(short *)(lVar5 + (longlong)iVar3 * 4) = param_4;
      *(short *)(lVar5 + 2 + (longlong)iVar3 * 4) = sVar6;
      param_3 = local_res18;
    }
    local_res18 = 0x40;
    puVar8 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar8,"AddStalenessVolumePathRequestsToManagerTask");
    }
    if (puVar8 != (undefined8 *)0x0) {
      puVar8[2] = 1;
      puVar8[1] = 0xffffffff;
      puVar8[6] = param_3;
      *puVar8 = hkaiNavigatorUpdateTasks::AddStalenessVolumePathRequestsToManagerTask::vftable;
      puVar8[4] = hkaiNavigatorUpdateTasks::AddStalenessVolumePathRequestsToManagerTask::vftable;
      FUN_144b3d910(param_3);
    }
    FUN_144be3b70(param_2,local_54,puVar8,0x40);
    uVar2 = local_54[0];
    plVar1 = (longlong *)(param_2 + 0x328);
    iVar9 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
      FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    iVar3 = *(int *)(param_2 + 0x330);
    lVar5 = *plVar1;
    *(int *)(param_2 + 0x330) = iVar9;
    *(undefined2 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar2;
    *(short *)(lVar5 + (longlong)iVar3 * 4) = local_58[0];
    iVar9 = *(int *)(param_2 + 0x330) + 1;
    uVar2 = *param_1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar9) {
      FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    iVar3 = *(int *)(param_2 + 0x330);
    lVar5 = *plVar1;
    *(int *)(param_2 + 0x330) = iVar9;
    *(undefined2 *)(lVar5 + (longlong)iVar3 * 4) = local_54[0];
    *(undefined2 *)(lVar5 + 2 + (longlong)iVar3 * 4) = uVar2;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar8);
    }
    if (lVar7 != 0) {
      FUN_144b3f230(lVar7);
    }
  }
  if (lVar4 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar4,&local_48);
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar4,&local_48);
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar4,&local_48);
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar4,&local_48);
  }
  return param_1;
}



// FUNCTION 1450222f0 FUN_1450222f0 body=628 status=ok
// SIG undefined FUN_1450222f0(void)

short * FUN_1450222f0(short *param_1,longlong param_2,longlong param_3,short param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_res8;
  char *local_38;
  char *local_30;
  
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
    local_38 = "TtAi";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TtNavigator";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TtUpdateTasks";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TtaddFinalTasks";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
  }
  local_res8 = 0x40;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"FireEventsTask");
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 1;
    puVar5[1] = 0xffffffff;
    *puVar5 = hkaiNavigatorUpdateTasks::FireEventsTask::vftable;
    puVar5[4] = hkaiNavigatorUpdateTasks::FireEventsTask::vftable;
    puVar5[6] = param_3;
    if (param_3 != 0) {
      FUN_144b3d910(param_3);
    }
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
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
  }
  return param_1;
}



// FUNCTION 145022570 FUN_145022570 body=236 status=ok
// SIG undefined FUN_145022570(void)

undefined8 * FUN_145022570(undefined8 *param_1,ulonglong param_2)

{
  FUN_14501b430(param_1 + 8);
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 3);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
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



// FUNCTION 145022660 FUN_145022660 body=65 status=ok
// SIG undefined FUN_145022660(void)

int * FUN_145022660(longlong param_1,int *param_2)

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



// FUNCTION 1450226b0 FUN_1450226b0 body=218 status=ok
// SIG undefined FUN_1450226b0(void)

void FUN_1450226b0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint local_res8 [2];
  
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar5 = (ulonglong *)
             ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x50)) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar6 = *puVar5;
    *puVar5 = *puVar5 + 1;
    UNLOCK();
    uVar2 = (uint)uVar6;
    if ((uint)(uVar6 >> 0x20) <= (uint)uVar6) {
      iVar3 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar3 == 0) {
        return;
      }
      uVar6 = (ulonglong)local_res8[0];
      uVar2 = local_res8[0];
    }
    local_res8[0] = uVar2;
    iVar4 = (int)uVar6 + 1;
    lVar7 = (longlong)(int)uVar6;
    iVar3 = *(int *)(param_1 + 0x8f0);
    if (iVar4 < *(int *)(param_1 + 0x8f0)) {
      iVar3 = iVar4;
    }
    for (; lVar7 < iVar3; lVar7 = lVar7 + 1) {
      FUN_145013190(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x908) + 0x20) + lVar7 * 8));
    }
  } while( true );
}



// FUNCTION 145022790 FUN_145022790 body=110 status=ok
// SIG undefined FUN_145022790(void)

undefined8 * FUN_145022790(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145022800 FUN_145022800 body=498 status=ok
// SIG undefined FUN_145022800(void)

void FUN_145022800(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
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
    local_48 = "TtNavigator";
    local_40 = "";
    FUN_144b3f370(lVar2,&local_48);
    local_38 = "TtUpdateNavigators";
    local_30 = "";
    FUN_144b3f370(lVar2,&local_38);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar7 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar1 * 0x40) *
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
    lVar6 = (longlong)(int)uVar8;
    iVar4 = *(int *)(param_1 + 0x8f0);
    if (iVar5 < *(int *)(param_1 + 0x8f0)) {
      iVar4 = iVar5;
    }
    for (; lVar6 < iVar4; lVar6 = lVar6 + 1) {
      FUN_145013190(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x908) + 0x20) + lVar6 * 8));
    }
  } while( true );
}



// FUNCTION 145022a00 FUN_145022a00 body=192 status=ok
// SIG undefined FUN_145022a00(void)

undefined8 * FUN_145022a00(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateNavigatorsTask>::
             vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateNavigatorsTask>::
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
  param_1[0x125] = param_2;
  *param_1 = hkaiNavigatorUpdateTasks::UpdateNavigatorsTask::vftable;
  param_1[4] = hkaiNavigatorUpdateTasks::UpdateNavigatorsTask::vftable;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 145022ac0 FUN_145022ac0 body=8 status=ok
// SIG undefined FUN_145022ac0(void)

char * FUN_145022ac0(void)

{
  return "UpdateNavigators";
}



// FUNCTION 145022ad0 FUN_145022ad0 body=127 status=ok
// SIG undefined FUN_145022ad0(void)

undefined8 * FUN_145022ad0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x125] != 0) {
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
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 145022b50 FUN_145022b50 body=65 status=ok
// SIG undefined FUN_145022b50(void)

int * FUN_145022b50(longlong param_1,int *param_2)

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



// FUNCTION 145022ba0 FUN_145022ba0 body=222 status=ok
// SIG undefined FUN_145022ba0(void)

void FUN_145022ba0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint local_res8 [2];
  
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar5 = (ulonglong *)
             ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x50)) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar6 = *puVar5;
    *puVar5 = *puVar5 + 1;
    UNLOCK();
    uVar2 = (uint)uVar6;
    if ((uint)(uVar6 >> 0x20) <= (uint)uVar6) {
      iVar3 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar3 == 0) {
        return;
      }
      uVar6 = (ulonglong)local_res8[0];
      uVar2 = local_res8[0];
    }
    local_res8[0] = uVar2;
    iVar4 = (int)uVar6 + 1;
    lVar7 = (longlong)(int)uVar6;
    iVar3 = *(int *)(param_1 + 0x8f0);
    if (iVar4 < *(int *)(param_1 + 0x8f0)) {
      iVar3 = iVar4;
    }
    for (; lVar7 < iVar3; lVar7 = lVar7 + 1) {
      FUN_144fbdf60(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x908) + 0x30) + lVar7 * 8),
                    *(longlong *)(param_1 + 0x908) + 0x40);
    }
  } while( true );
}



// FUNCTION 145022c80 FUN_145022c80 body=110 status=ok
// SIG undefined FUN_145022c80(void)

undefined8 * FUN_145022c80(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145022cf0 FUN_145022cf0 body=502 status=ok
// SIG undefined FUN_145022cf0(void)

void FUN_145022cf0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
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
    local_48 = "TtNavigator";
    local_40 = "";
    FUN_144b3f370(lVar2,&local_48);
    local_38 = "TtUpdateVolumeNavigators";
    local_30 = "";
    FUN_144b3f370(lVar2,&local_38);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar7 = (ulonglong *)
             ((longlong)*(int *)(*(longlong *)(param_1 + 0x50) + 0x40 + (longlong)iVar1 * 0x40) *
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
    lVar6 = (longlong)(int)uVar8;
    iVar4 = *(int *)(param_1 + 0x8f0);
    if (iVar5 < *(int *)(param_1 + 0x8f0)) {
      iVar4 = iVar5;
    }
    for (; lVar6 < iVar4; lVar6 = lVar6 + 1) {
      FUN_144fbdf60(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x908) + 0x30) + lVar6 * 8),
                    *(longlong *)(param_1 + 0x908) + 0x40);
    }
  } while( true );
}



// FUNCTION 145022ef0 FUN_145022ef0 body=192 status=ok
// SIG undefined FUN_145022ef0(void)

undefined8 * FUN_145022ef0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  uVar2 = *(undefined4 *)(param_2 + 0x68);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask>
               ::vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar2;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,uVar2,uVar1,1);
  param_1[0x125] = param_2;
  *param_1 = hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask::vftable;
  param_1[4] = hkaiNavigatorUpdateTasks::UpdateVolumeNavigatorsTask::vftable;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 145022fb0 FUN_145022fb0 body=8 status=ok
// SIG undefined FUN_145022fb0(void)

char * FUN_145022fb0(void)

{
  return "UpdateVolumeNavigators";
}



// FUNCTION 145022fc0 FUN_145022fc0 body=127 status=ok
// SIG undefined FUN_145022fc0(void)

undefined8 * FUN_145022fc0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x125] != 0) {
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
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 145023040 FUN_145023040 body=179 status=ok
// SIG undefined FUN_145023040(void)

void FUN_145023040(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10;
  
  local_18 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40);
  local_10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x60) * 0x10 + local_18;
  FUN_144faaf70(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x230),
                &local_18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(lVar1 + 0x40);
  lVar3 = *(longlong *)(lVar1 + 0x60) * 0x10 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(lVar1 + 0x48) = 0;
  if ((*(longlong *)(lVar1 + 0x40) != lVar1 + 0x50) && (-1 < *(int *)(lVar1 + 0x4c))) {
    FUN_14501f210(&PTR_vftable_14c6e47a0,lVar1 + 0x40,lVar1 + 0x50,1);
  }
  *(undefined8 *)(lVar1 + 0x60) = 0;
  return;
}



// FUNCTION 145023100 FUN_145023100 body=8 status=ok
// SIG undefined FUN_145023100(void)

char * FUN_145023100(void)

{
  return "AddStalenessVolumePathRequestsToManager";
}



// FUNCTION 145023110 FUN_145023110 body=115 status=ok
// SIG undefined FUN_145023110(void)

undefined8 * FUN_145023110(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145023190 FUN_145023190 body=530 status=ok
// SIG undefined FUN_145023190(void)

void FUN_145023190(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *local_18;
  char *pcStack_10;
  
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
    local_18 = "TtNavigator";
    pcStack_10 = "";
  }
  else {
    local_18 = "TtAi";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
    local_18 = "TtNavigator";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
    local_18 = "TtUpdateTasks";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
    local_18 = "TtFireEvents";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((*(int *)(lVar3 + 0x28) != 0) || (*(int *)(lVar3 + 0x38) != 0)) {
    puVar4 = *(undefined8 **)(lVar3 + 0x20);
    puVar1 = puVar4 + *(int *)(lVar3 + 0x28);
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      FUN_145012d80(*puVar4,*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x440);
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x30);
    puVar1 = puVar4 + *(int *)(*(longlong *)(param_1 + 0x10) + 0x38);
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      FUN_144fbe3d0(*puVar4,*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x480);
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
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar2,&local_18);
  }
  return;
}



// FUNCTION 1450233b0 FUN_1450233b0 body=8 status=ok
// SIG undefined FUN_1450233b0(void)

char * FUN_1450233b0(void)

{
  return "FireEvents";
}



// FUNCTION 1450233c0 FUN_1450233c0 body=115 status=ok
// SIG undefined FUN_1450233c0(void)

undefined8 * FUN_1450233c0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145023434 FUN_145023434 body=9 status=ok
// SIG undefined FUN_145023434(void)

void FUN_145023434(longlong param_1)

{
  FUN_145022ad0(param_1 + -0x20);
  return;
}



// FUNCTION 145023440 FUN_145023440 body=9 status=ok
// SIG undefined FUN_145023440(void)

void FUN_145023440(longlong param_1)

{
  FUN_145022790(param_1 + -0x20);
  return;
}



// FUNCTION 14502344c FUN_14502344c body=9 status=ok
// SIG undefined FUN_14502344c(void)

void FUN_14502344c(longlong param_1)

{
  FUN_145022fc0(param_1 + -0x20);
  return;
}



// FUNCTION 145023458 FUN_145023458 body=9 status=ok
// SIG undefined FUN_145023458(void)

void FUN_145023458(longlong param_1)

{
  FUN_145022c80(param_1 + -0x20);
  return;
}



// FUNCTION 145023464 FUN_145023464 body=9 status=ok
// SIG undefined FUN_145023464(void)

void FUN_145023464(longlong param_1)

{
  FUN_145023110(param_1 + -0x20);
  return;
}



// FUNCTION 145023470 FUN_145023470 body=9 status=ok
// SIG undefined FUN_145023470(void)

void FUN_145023470(longlong param_1)

{
  FUN_1450233c0(param_1 + -0x20);
  return;
}



// FUNCTION 145023480 FUN_145023480 body=774 status=ok
// SIG undefined FUN_145023480(void)

longlong *
FUN_145023480(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined8 local_res8;
  char *local_48;
  char *local_40;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
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
  lVar3 = *(longlong *)(lVar6 + 0x3e0);
  if (lVar3 != 0) {
    local_48 = "TtAi";
    local_40 = "";
    FUN_144b3f370(lVar3,&local_48);
    local_48 = "TtNav Mesh";
    local_40 = "";
    FUN_144b3f370(lVar3,&local_48);
    local_48 = "TthkaiNavMeshClearanceCacheFillingTasks";
    local_40 = "";
    FUN_144b3f370(lVar3,&local_48);
    local_48 = "TtmakeContext";
    local_40 = "";
    FUN_144b3f370(lVar3,&local_48);
  }
  local_res8 = 0x78;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"Context");
  }
  lVar6 = 0;
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    lVar6 = FUN_145024280(puVar7);
  }
  *param_1 = lVar6;
  *(longlong *)(lVar6 + 0x70) = param_2;
  *(undefined4 *)(*param_1 + 0x18) = param_6;
  lVar6 = *param_1;
  plVar10 = (longlong *)(lVar6 + 0x20);
  if (plVar10 != (longlong *)(param_4 + 0x28)) {
    iVar2 = *(int *)(param_4 + 0x30);
    lVar4 = *(longlong *)(param_4 + 0x28);
    if ((int)(*(uint *)(lVar6 + 0x2c) & 0x7fffffff) < iVar2) {
      FUN_140069f0e(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    lVar11 = *plVar10;
    iVar5 = iVar2;
    if (*(int *)(lVar6 + 0x28) < iVar2) {
      iVar5 = *(int *)(lVar6 + 0x28);
    }
    if ((lVar11 != lVar4) && (lVar9 = (longlong)iVar5, 0 < iVar5)) {
      puVar8 = (undefined4 *)(lVar11 + 4);
      lVar11 = lVar4 - lVar11;
      do {
        puVar8[-1] = *(undefined4 *)(lVar11 + -4 + (longlong)puVar8);
        *puVar8 = *(undefined4 *)((longlong)puVar8 + lVar11);
        puVar8[1] = *(undefined4 *)(lVar11 + 4 + (longlong)puVar8);
        puVar8[2] = *(undefined4 *)(lVar11 + 8 + (longlong)puVar8);
        puVar8 = puVar8 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    puVar8 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar4);
    if (0 < iVar2 - iVar5) {
      uVar13 = (ulonglong)(uint)(iVar2 - iVar5);
      puVar12 = (undefined4 *)(*plVar10 + (longlong)iVar5 * 0x10);
      do {
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = *puVar8;
          puVar12[1] = puVar8[1];
          puVar12[2] = puVar8[2];
          puVar1 = puVar8 + 3;
          puVar8 = puVar8 + 4;
          puVar12[3] = *puVar1;
        }
        uVar13 = uVar13 - 1;
        puVar12 = puVar12 + 4;
      } while (uVar13 != 0);
    }
    *(int *)(lVar6 + 0x28) = iVar2;
    FUN_140069e50(lVar6 + 0x30,param_4 + 0x38);
  }
  *(undefined8 *)(*param_1 + 0x40) = param_3;
  FUN_144fe7980(*(undefined8 *)(param_2 + 0x150),*param_1 + 0x48);
  if (lVar3 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar3,&local_48);
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar3,&local_48);
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar3,&local_48);
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar3,&local_48);
  }
  return param_1;
}



// FUNCTION 145023790 FUN_145023790 body=829 status=ok
// SIG undefined FUN_145023790(void)

undefined2 * FUN_145023790(undefined2 *param_1,longlong param_2,longlong param_3,short param_4)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_res18;
  short local_res20 [4];
  char *local_58;
  char *local_50;
  
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
    local_58 = "TtAi";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtNav Mesh";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TthkaiNavMeshClearanceCacheFillingTasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
    local_58 = "TtaddTasks";
    local_50 = "";
    FUN_144b3f370(lVar3,&local_58);
  }
  local_58 = (char *)0x40;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"GetUncalculatedClearanceFacesTask");
  }
  lVar5 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6[2] = 1;
    puVar6[1] = 0xffffffff;
    *puVar6 = hkaiNavMeshClearanceCacheFillingTasks::GetUncalculatedClearanceFacesTask::vftable;
    puVar6[4] = hkaiNavMeshClearanceCacheFillingTasks::GetUncalculatedClearanceFacesTask::vftable;
    puVar6[6] = param_3;
    if (param_3 != 0) {
      FUN_144b3d910(param_3);
    }
  }
  FUN_144be3b70(param_2,local_res20,puVar6,0x40);
  sVar4 = local_res20[0];
  if ((param_4 != -1) && (local_res20[0] != -1)) {
    iVar8 = *(int *)(param_2 + 0x330) + 1;
    local_res18 = CONCAT44(local_res18._4_4_,iVar8);
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    iVar8 = *(int *)(param_2 + 0x330);
    lVar7 = *(longlong *)(param_2 + 0x328);
    *(undefined4 *)(param_2 + 0x330) = (undefined4)local_res18;
    *(short *)(lVar7 + (longlong)iVar8 * 4) = param_4;
    *(short *)(lVar7 + 2 + (longlong)iVar8 * 4) = sVar4;
  }
  local_res18 = 0x930;
  lVar7 = (*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar7,"CalculateClearanceTask");
  }
  if (lVar7 != 0) {
    lVar5 = FUN_145024d30(lVar7,param_3);
  }
  FUN_144be3b70(param_2,param_1,lVar5,0x40);
  uVar1 = *param_1;
  iVar8 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar2 = *(int *)(param_2 + 0x330);
  lVar7 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar8;
  *(short *)(lVar7 + (longlong)iVar2 * 4) = local_res20[0];
  *(undefined2 *)(lVar7 + 2 + (longlong)iVar2 * 4) = uVar1;
  *(longlong *)(param_3 + 0x68) = lVar5;
  if (lVar5 != 0) {
    FUN_144b3f230(lVar5);
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar6);
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



// FUNCTION 145023ad0 FUN_145023ad0 body=623 status=ok
// SIG undefined FUN_145023ad0(void)

undefined2 * FUN_145023ad0(undefined2 *param_1,longlong param_2,longlong param_3,short param_4)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_res8;
  char *local_38;
  char *local_30;
  
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
    local_38 = "TtAi";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TtNav Mesh";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TthkaiNavMeshClearanceCacheFillingTasks";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
    local_38 = "TtaddFinalTasks";
    local_30 = "";
    FUN_144b3f370(lVar3,&local_38);
  }
  local_res8 = 0x40;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"FireEventsTask");
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 1;
    puVar5[1] = 0xffffffff;
    *puVar5 = hkaiNavMeshClearanceCacheFillingTasks::FireEventsTask::vftable;
    puVar5[4] = hkaiNavMeshClearanceCacheFillingTasks::FireEventsTask::vftable;
    puVar5[6] = param_3;
    if (param_3 != 0) {
      FUN_144b3d910(param_3);
    }
  }
  FUN_144be3b70(param_2,param_1,puVar5,0x40);
  if (param_4 != -1) {
    uVar1 = *param_1;
    iVar6 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar6) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    iVar2 = *(int *)(param_2 + 0x330);
    lVar4 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar6;
    *(short *)(lVar4 + (longlong)iVar2 * 4) = param_4;
    *(undefined2 *)(lVar4 + 2 + (longlong)iVar2 * 4) = uVar1;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar5);
  }
  if (lVar3 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar3,&local_38);
  }
  return param_1;
}



// FUNCTION 145023d40 FUN_145023d40 body=191 status=ok
// SIG undefined FUN_145023d40(void)

void FUN_145023d40(ulonglong *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar2 = (longlong *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (longlong *)0x0) {
    *param_1 = *param_1 & 0xfffffffffffffffd | 1;
    puVar3 = param_1;
    do {
      uVar1 = plVar2[1];
      puVar4 = (ulonglong *)(plVar2 + 1);
      if ((uVar1 & 3) == 0) {
        local_28 = *param_3;
        uStack_24 = param_3[1];
        uStack_20 = param_3[2];
        uStack_1c = param_3[3];
        (*(code *)((undefined8 *)*plVar2)[3])(local_28,param_2,&local_28);
      }
      else {
        (**(code **)*plVar2)(plVar2,1);
        *puVar3 = *puVar3 ^ (*puVar3 ^ uVar1) & 0xfffffffffffffffc;
        puVar4 = puVar3;
      }
      plVar2 = (longlong *)(uVar1 & 0xfffffffffffffffc);
      puVar3 = puVar4;
    } while ((longlong *)(uVar1 & 0xfffffffffffffffc) != (longlong *)0x0);
    *param_1 = *param_1 & 0xfffffffffffffffc;
  }
  return;
}



// FUNCTION 145023e00 FUN_145023e00 body=1142 status=ok
// SIG undefined FUN_145023e00(void)

void FUN_145023e00(longlong param_1,uint param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong local_res8;
  uint local_res10 [2];
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar10;
  longlong *plVar9;
  ulonglong local_a8 [2];
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  int local_80;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  int local_60;
  uint local_5c;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uVar8 = param_2 & 0x3fffff;
  uVar3 = (ulonglong)uVar8;
  lVar4 = *(longlong *)((ulonglong)(param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38));
  lVar6 = *(longlong *)(lVar4 + 0x20);
  local_res8 = param_1;
  local_res10[0] = uVar8;
  if ((*(int *)(lVar6 + 0x108) != 0) && ((*(byte *)(uVar3 + *(longlong *)(lVar6 + 0x100)) & 1) != 0)
     ) {
    puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + (longlong)*(int *)(param_3 + 4) * 0x18);
    if (*(char *)(puVar1 + 2) == '\x01') {
      uVar2 = *puVar1;
    }
    else {
      uVar2 = FUN_144c3f6d0();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    if ((int)uVar8 < *(int *)(lVar4 + 0x20)) {
      if (*(int *)(lVar4 + 0x98) != 0) {
        uVar8 = *(uint *)(*(longlong *)(lVar4 + 0x90) + uVar3 * 4);
      }
      if (uVar8 == 0xffffffff) {
        lVar4 = *(longlong *)(lVar4 + 0x18);
      }
      else {
        uVar3 = (ulonglong)(int)uVar8;
        lVar4 = *(longlong *)(lVar4 + 0xb0);
      }
      puVar5 = (undefined4 *)(lVar4 + uVar3 * 0xc);
    }
    else {
      puVar5 = (undefined4 *)
               (*(longlong *)(lVar4 + 0xd0) + (longlong)(int)(uVar8 - *(int *)(lVar4 + 0x20)) * 0xc)
      ;
    }
    FUN_144fd3f80(uVar2,local_res10);
    local_res10[0] = puVar5[1];
    local_res8 = CONCAT44(local_res8._4_4_,*puVar5);
    FUN_144fd3b70(uVar2,&local_res8,(int)*(short *)(puVar5 + 2),local_res10,
                  CONCAT44(uVar10,(int)*(short *)((longlong)puVar5 + 10)));
    return;
  }
  if (*(int *)(*(longlong *)(lVar6 + 0x168) + uVar3 * 4) == -3) {
    return;
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + (longlong)*(int *)(param_3 + 4) * 0x18);
  if (*(char *)(puVar1 + 2) == '\x01') {
    uVar2 = *puVar1;
  }
  else {
    uVar2 = FUN_144c3f6d0();
  }
  local_78 = 0;
  uStack_70 = 0;
  puVar5 = (undefined4 *)FUN_144c44fc0(*(undefined8 *)(lVar4 + 0x20),local_res10,&local_78);
  uVar7 = (int)*(short *)((longlong)puVar5 + 10) + (int)*(short *)(puVar5 + 2);
  local_60 = 0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar6 = *(longlong *)(lVar4 + 0xf0);
  if (lVar6 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar6 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar6;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x3d0) + 0x10);
  local_58 = 0;
  if (*(longlong *)(lVar4 + 8) == 0) {
    local_58 = lVar4;
  }
  local_98 = (longlong)(int)uVar7 * 0xc;
  local_48 = local_98;
  if (local_58 == 0) {
    local_68 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar4 >> 8),1),&local_98,0x40);
  }
  else {
    local_a8[0] = local_98 + 0x3fU & 0xffffffffffffffc0;
    if (local_a8[0] <= *(ulonglong *)(local_58 + 0x28)) {
      local_68 = *(longlong *)(local_58 + 0x38);
      if (local_a8[0] + local_68 <= *(ulonglong *)(local_58 + 0x40)) {
        *(ulonglong *)(local_58 + 0x38) = local_a8[0] + local_68;
        goto LAB_145024079;
      }
    }
    local_68 = FUN_144b454a0(local_58,local_a8);
  }
LAB_145024079:
  local_5c = uVar7 | 0x80000000;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0x80000000;
  local_50 = local_68;
  FUN_144be90e0(0xc802472d);
  local_98 = local_78;
  uStack_90 = uStack_70;
  uVar10 = *(undefined4 *)(param_3 + 0x18);
  plVar9 = &local_98;
  local_78 = CONCAT44(uVar10,uVar10);
  uStack_70 = CONCAT44(uVar10,uVar10);
  FUN_144fdbae0(local_res8,*(undefined8 *)(param_3 + 0x10),param_2,puVar5,plVar9,&local_78,&local_68
                ,&local_88,param_4);
  uVar10 = (undefined4)((ulonglong)plVar9 >> 0x20);
  FUN_144be90e0(0x6d3b7d11);
  uStack_70 = local_88 + (longlong)local_80 * 4;
  local_78 = local_88;
  local_res10[0] = uVar8;
  FUN_144fd3d90(uVar2,local_res10,&local_78);
  uStack_70 = local_68 + (longlong)local_60 * 0xc;
  local_res10[0] = puVar5[1];
  local_res8 = CONCAT44(local_res8._4_4_,*puVar5);
  local_78 = local_68;
  FUN_144fd39c0(uVar2,&local_res8,(int)*(short *)(puVar5 + 2),local_res10,
                CONCAT44(uVar10,(int)*(short *)((longlong)puVar5 + 10)),&local_78);
  local_80 = 0;
  if ((-1 < (int)local_7c) && (local_88 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_88,(ulonglong)(local_7c & 0x7fffffff) << 2);
  }
  if (local_50 == local_68) {
    local_60 = 0;
  }
  local_88 = 0;
  local_7c = 0x80000000;
  if (local_58 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar3 = local_48 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_58 + 0x28) < uVar3) ||
       (local_50 + uVar3 != *(longlong *)(local_58 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_58 + 0x38) = local_50;
      if (*(longlong *)(local_58 + 0x48) == local_50) {
        FUN_144be8430();
      }
    }
  }
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) * 0xc);
  }
  return;
}



// FUNCTION 145024280 FUN_145024280 body=122 status=ok
// SIG undefined FUN_145024280(void)

undefined8 * FUN_145024280(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[1] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = hkaiNavMeshClearanceCacheFillingTasks::Context::vftable;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 145024300 FUN_145024300 body=345 status=ok
// SIG undefined FUN_145024300(void)

undefined8 * FUN_145024300(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) * 0x18);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  plVar1 = (longlong *)param_1[9];
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 10) * 2;
  while (plVar2 != plVar1) {
    plVar3 = plVar2 + -2;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) << 5);
    }
    *plVar3 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar3;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  FUN_144c2be80(param_1 + 4);
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



// FUNCTION 145024460 FUN_145024460 body=1141 status=ok
// SIG undefined FUN_145024460(void)

void FUN_145024460(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int local_res8;
  longlong local_res20;
  char *local_48;
  undefined8 uStack_40;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar6 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar6 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar6 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar6 + 0xf0) = lVar8;
  }
  lVar6 = *(longlong *)(lVar8 + 0x3e0);
  if (lVar6 == 0) {
    local_48 = "TtGetUncalculatedClearanceFaces";
    uStack_40 = "";
  }
  else {
    local_48 = "TtAi";
    uStack_40 = &DAT_1499cd538;
    FUN_144b3f370(lVar6,&local_48);
    local_48 = "TtNav Mesh";
    uStack_40 = "";
    FUN_144b3f370(lVar6,&local_48);
    local_48 = "TthkaiNavMeshClearanceCacheFillingTasks";
    uStack_40 = "";
    FUN_144b3f370(lVar6,&local_48);
    local_48 = "TtGetUncalculatedClearanceFaces";
    uStack_40 = "";
    FUN_144b3f370(lVar6,&local_48);
  }
  FUN_144be90e0(0x65e26350);
  local_res8 = 0;
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40) + 0x40);
  if (0 < iVar2) {
    local_res20 = 0;
    do {
      lVar8 = *(longlong *)
               (local_res20 +
               *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40) + 0x38));
      if (lVar8 != 0) {
        plVar10 = (longlong *)
                  ((longlong)*(int *)(*(longlong *)(lVar8 + 0x20) + 0x180) * 0x10 +
                  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48));
        lVar13 = *plVar10;
        lVar14 = (longlong)(int)plVar10[1] * 0x20 + lVar13;
        for (; lVar13 != lVar14; lVar13 = lVar13 + 0x20) {
          lVar9 = FUN_144c4dc50(*(longlong *)(param_1 + 0x10) + 0x20,lVar13);
          if ((lVar9 != 0) && (-1 < *(int *)(lVar9 + 4))) {
            lVar9 = (longlong)*(int *)(lVar9 + 4) * 0x10 +
                    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
            iVar3 = *(int *)(lVar9 + 0xc);
            if (0 < iVar3) {
              local_48 = (char *)0x0;
              uStack_40 = (char *)0x8000000000000000;
              FUN_144fd4100(*(undefined8 *)
                             (*(longlong *)(lVar8 + 0x38) + (longlong)*(int *)(lVar13 + 4) * 0x18),
                            iVar3,&local_48);
              if ((int)uStack_40 != 0) {
                FUN_144be90e0(0xf95efc21);
                lVar11 = *(longlong *)(param_1 + 0x10);
                iVar3 = *(int *)(lVar11 + 0x60);
                iVar15 = (int)uStack_40 + iVar3;
                if ((int)(*(uint *)(lVar11 + 100) & 0x7fffffff) < iVar15) {
                  FUN_145025350(lVar11 + 0x58,&PTR_vftable_14c6e47a0,(longlong)iVar15);
                }
                lVar7 = *(longlong *)(lVar11 + 0x58);
                *(int *)(lVar11 + 0x60) = iVar15;
                FUN_144be90e0();
                iVar15 = 0;
                if (0 < (int)uStack_40) {
                  lVar11 = 0;
                  puVar12 = (uint *)(lVar7 + (longlong)iVar3 * 0x18);
                  do {
                    iVar15 = iVar15 + 1;
                    uVar4 = *(uint *)(local_48 + lVar11);
                    *(longlong *)(puVar12 + 2) = lVar13;
                    *puVar12 = uVar4 | local_res8 << 0x16;
                    lVar11 = lVar11 + 4;
                    puVar12 = puVar12 + 6;
                  } while (iVar15 < (int)uStack_40);
                }
                lVar11 = *(longlong *)
                          (local_res20 +
                          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x40) + 0x38))
                ;
                if ((lVar11 != 0) && (*(char *)(lVar11 + 0x30) != '\x01')) {
                  FUN_147e4bb26(lVar11 + 0x20);
                }
                piVar1 = (int *)(lVar9 + 0xc);
                *piVar1 = *piVar1 - (int)uStack_40;
              }
              FUN_144be90e0(0x78745e4d);
              lVar9 = (longlong)uStack_40;
              uVar4 = uStack_40._4_4_;
              uStack_40 = (char *)((ulonglong)uStack_40._4_4_ << 0x20);
              if ((-1 < lVar9) && (local_48 != (char *)0x0)) {
                (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                          (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(uVar4 & 0x7fffffff) << 2);
              }
              local_48 = (char *)0x0;
              uStack_40 = (char *)CONCAT44(0x80000000,(int)uStack_40);
            }
          }
        }
      }
      local_res8 = local_res8 + 1;
      local_res20 = local_res20 + 0x120;
    } while (local_res8 < iVar2);
  }
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
  uVar5 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60);
  *(undefined4 *)(lVar8 + 0x910) = uVar5;
  FUN_144bf95c0(lVar8 + 0x30,*(undefined4 *)(lVar8 + 0x914),uVar5,1);
  FUN_144be90e0(0xbaf3259f);
  if (lVar6 != 0) {
    local_48 = "Et";
    uStack_40 = &DAT_149981766;
    FUN_144b3f260(lVar6,&local_48);
    local_48 = "Et";
    uStack_40 = &DAT_149981766;
    FUN_144b3f260(lVar6,&local_48);
    local_48 = "Et";
    uStack_40 = &DAT_149981766;
    FUN_144b3f260(lVar6,&local_48);
    local_48 = "Et";
    uStack_40 = &DAT_149981766;
    FUN_144b3f260(lVar6,&local_48);
  }
  return;
}



// FUNCTION 1450248e0 FUN_1450248e0 body=8 status=ok
// SIG undefined FUN_1450248e0(void)

char * FUN_1450248e0(void)

{
  return "GetUncalculatedClearanceFaces";
}



// FUNCTION 1450248f0 FUN_1450248f0 body=115 status=ok
// SIG undefined FUN_1450248f0(void)

undefined8 * FUN_1450248f0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145024970 FUN_145024970 body=65 status=ok
// SIG undefined FUN_145024970(void)

int * FUN_145024970(longlong param_1,int *param_2)

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



// FUNCTION 1450249c0 FUN_1450249c0 body=457 status=ok
// SIG undefined FUN_1450249c0(void)

void FUN_1450249c0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  uint local_res8 [2];
  undefined1 local_118 [240];
  
  FUN_144c46f80(local_118);
  iVar1 = *(int *)(param_2 + 0x18);
  do {
    puVar8 = (ulonglong *)
             ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x50)) *
              0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar7 = *puVar8;
    *puVar8 = *puVar8 + 1;
    UNLOCK();
    uVar3 = (uint)uVar7;
    if ((uint)(uVar7 >> 0x20) <= (uint)uVar7) {
      iVar5 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar5 == 0) {
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar11 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar9 = *(longlong *)(lVar11 + 0xf0);
        if (lVar9 == 0) {
          if (*(char *)(lVar11 + 0x114) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar9 = FUN_144b3f4a0();
          *(longlong *)(lVar11 + 0xf0) = lVar9;
        }
        FUN_144fe6af0(local_118,*(undefined8 *)(lVar9 + 0x3e0));
        return;
      }
      uVar7 = (ulonglong)local_res8[0];
      uVar3 = local_res8[0];
    }
    local_res8[0] = uVar3;
    iVar6 = (int)uVar7 + 1;
    lVar11 = (longlong)(int)uVar7;
    iVar5 = *(int *)(param_1 + 0x8f0);
    if (iVar6 < *(int *)(param_1 + 0x8f0)) {
      iVar5 = iVar6;
    }
    if (lVar11 < iVar5) {
      lVar9 = lVar11 * 0x18;
      lVar11 = iVar5 - lVar11;
      do {
        puVar10 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x900) + 0x58) + lVar9);
        FUN_145023e00(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x40),*puVar10,
                      *(undefined8 *)(puVar10 + 2),local_118);
        uVar7 = (ulonglong)(*puVar10 & 0x3fffff);
        lVar2 = *(longlong *)
                 (*(longlong *)
                   ((ulonglong)(*puVar10 >> 0x16) * 0x120 +
                   *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x900) + 0x40) + 0x38)) +
                 0x20);
        if (((*(int *)(lVar2 + 0x108) == 0) ||
            ((*(byte *)(uVar7 + *(longlong *)(lVar2 + 0x100)) & 1) == 0)) &&
           (*(int *)(*(longlong *)(lVar2 + 0x168) + uVar7 * 4) != -3)) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        *(undefined1 *)(puVar10 + 4) = uVar4;
        FUN_144be90e0(0x4fcb3947);
        lVar9 = lVar9 + 0x18;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  } while( true );
}



// FUNCTION 145024b90 FUN_145024b90 body=401 status=ok
// SIG undefined FUN_145024b90(void)

void FUN_145024b90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  if (lVar1 == 0) {
    FUN_1450249c0(param_1,param_2);
  }
  else {
    local_28 = "TtAi";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    local_28 = "TtNav Mesh";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    local_28 = "TthkaiNavMeshClearanceCacheFillingTasks";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    local_28 = "TtCalculateClearance";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
    FUN_1450249c0(param_1,param_2);
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
    local_28 = "Et";
    local_20 = "";
    FUN_144b3f260(lVar1,&local_28);
  }
  return;
}



// FUNCTION 145024d30 FUN_145024d30 body=135 status=ok
// SIG undefined FUN_145024d30(void)

undefined8 * FUN_145024d30(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *param_1 = hkaiNavMeshClearanceCacheFillingTasks::CalculateClearanceTask::vftable;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[4] = hkaiNavMeshClearanceCacheFillingTasks::CalculateClearanceTask::vftable;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = uVar1;
  param_1[0x124] = param_2;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 145024dc0 FUN_145024dc0 body=8 status=ok
// SIG undefined FUN_145024dc0(void)

char * FUN_145024dc0(void)

{
  return "CalculateClearance";
}



// FUNCTION 145024dd0 FUN_145024dd0 body=127 status=ok
// SIG undefined FUN_145024dd0(void)

undefined8 * FUN_145024dd0(undefined8 *param_1,ulonglong param_2)

{
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
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 145024e50 FUN_145024e50 body=901 status=ok
// SIG undefined FUN_145024e50(void)

void FUN_145024e50(longlong param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char *local_28;
  undefined8 uStack_20;
  
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
    local_28 = "TtAi";
    uStack_20 = &DAT_1499cd538;
    FUN_144b3f370(lVar2,&local_28);
    local_28 = "TtNav Mesh";
    uStack_20 = "";
    FUN_144b3f370(lVar2,&local_28);
    local_28 = "TthkaiNavMeshClearanceCacheFillingTasks";
    uStack_20 = "";
    FUN_144b3f370(lVar2,&local_28);
    local_28 = "TtFireEvents";
    uStack_20 = "";
    FUN_144b3f370(lVar2,&local_28);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(lVar3 + 0x58);
  lVar6 = (longlong)*(int *)(lVar3 + 0x60) * 0x18;
  if (((*(ulonglong *)(*(longlong *)(lVar3 + 0x70) + 0x98) & 0xfffffffffffffffc) != 0) &&
     (lVar4 != lVar6 + lVar4)) {
    pcVar9 = (char *)0x0;
    local_28 = (char *)0x0;
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    iVar13 = 0;
    uStack_20._0_4_ = 0;
    uStack_20._4_4_ = 0x80000000;
    iVar14 = (int)(lVar6 >> 2) - (int)(lVar6 >> 0x3f);
    pcVar10 = pcVar9;
    uVar8 = 0x80000000;
    if (0 < iVar14) {
      FUN_145025270(&local_28,&PTR_vftable_14c6e47a0,(longlong)iVar14);
      puVar11 = (undefined8 *)(lVar4 + 8);
      iVar13 = (int)uStack_20;
      do {
        if (*(char *)(puVar11 + 1) != '\0') {
          pcVar10 = local_28 + (longlong)iVar13 * 0x10;
          iVar13 = iVar13 + 1;
          if (pcVar10 != local_28 + (longlong)iVar13 * 0x10) {
            pcVar7 = pcVar10 + 0xc;
            do {
              if (pcVar7 != &DAT_0000000c) {
                pcVar7[-8] = -1;
                pcVar7[-7] = -1;
                pcVar7[-6] = -1;
                pcVar7[-5] = -1;
                pcVar7[-4] = -1;
                pcVar7[-3] = -1;
                pcVar7[-2] = -1;
                pcVar7[-1] = -1;
                pcVar7[0] = -1;
                pcVar7[1] = -1;
                pcVar7[2] = -1;
                pcVar7[3] = -1;
              }
              pcVar1 = pcVar7 + 4;
              pcVar7 = pcVar7 + 0x10;
            } while (pcVar1 != local_28 + (longlong)iVar13 * 0x10);
          }
          *(undefined4 *)pcVar10 = *(undefined4 *)(puVar11 + -1);
          puVar5 = (undefined4 *)*puVar11;
          *(undefined4 *)(pcVar10 + 4) = *puVar5;
          *(undefined4 *)(pcVar10 + 8) = puVar5[1];
          *(undefined4 *)(pcVar10 + 0xc) = puVar5[2];
        }
        uVar12 = (int)pcVar9 + 1;
        pcVar9 = (char *)(ulonglong)uVar12;
        puVar11 = puVar11 + 3;
        pcVar10 = local_28;
        uVar8 = uStack_20._4_4_;
      } while ((int)uVar12 < iVar14);
    }
    uStack_20 = pcVar10 + (longlong)iVar13 * 0x10;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x70);
    local_28 = pcVar10;
    FUN_145023d40(lVar6 + 0x98,lVar6,&local_28);
    if ((-1 < (int)uVar8) && (pcVar10 != (char *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,pcVar10,(ulonglong)(uVar8 & 0x7fffffff) << 4);
    }
  }
  if (lVar2 != 0) {
    local_28 = "Et";
    uStack_20 = &DAT_149981766;
    FUN_144b3f260(lVar2,&local_28);
    local_28 = "Et";
    uStack_20 = &DAT_149981766;
    FUN_144b3f260(lVar2,&local_28);
    local_28 = "Et";
    uStack_20 = &DAT_149981766;
    FUN_144b3f260(lVar2,&local_28);
    local_28 = "Et";
    uStack_20 = &DAT_149981766;
    FUN_144b3f260(lVar2,&local_28);
  }
  return;
}



// FUNCTION 1450251e0 FUN_1450251e0 body=8 status=ok
// SIG undefined FUN_1450251e0(void)

char * FUN_1450251e0(void)

{
  return "FireEvents";
}



// FUNCTION 1450251f0 FUN_1450251f0 body=115 status=ok
// SIG undefined FUN_1450251f0(void)

undefined8 * FUN_1450251f0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145025270 FUN_145025270 body=212 status=ok
// SIG undefined FUN_145025270(void)

void FUN_145025270(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  puVar4 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar2 = (undefined4 *)(lVar1 + 0xc);
    uVar5 = (ulonglong)*(uint *)(param_1 + 1);
    puVar3 = puVar4 + 3;
    do {
      if (puVar2 + -3 != (undefined4 *)0x0) {
        puVar2[-3] = *puVar4;
        puVar2[-2] = puVar3[-2];
        puVar2[-1] = puVar3[-1];
        *puVar2 = *puVar3;
      }
      puVar2 = puVar2 + 4;
      puVar4 = puVar4 + 4;
      puVar3 = puVar3 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 145025350 FUN_145025350 body=262 status=ok
// SIG undefined FUN_145025350(void)

ulonglong FUN_145025350(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x18,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x18);
  uVar3 = uVar4 * 0x18 + 0x18;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x18);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 145025458 FUN_145025458 body=9 status=ok
// SIG undefined FUN_145025458(void)

void FUN_145025458(longlong param_1)

{
  FUN_145024dd0(param_1 + -0x20);
  return;
}



// FUNCTION 145025464 FUN_145025464 body=9 status=ok
// SIG undefined FUN_145025464(void)

void FUN_145025464(longlong param_1)

{
  FUN_1450248f0(param_1 + -0x20);
  return;
}



// FUNCTION 145025470 FUN_145025470 body=9 status=ok
// SIG undefined FUN_145025470(void)

void FUN_145025470(longlong param_1)

{
  FUN_1450251f0(param_1 + -0x20);
  return;
}



// FUNCTION 145025480 FUN_145025480 body=4 status=ok
// SIG undefined FUN_145025480(void)

undefined8 FUN_145025480(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 145025490 FUN_145025490 body=4 status=ok
// SIG undefined FUN_145025490(void)

undefined8 FUN_145025490(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 1450254a0 FUN_1450254a0 body=730 status=ok
// SIG undefined FUN_1450254a0(void)

void FUN_1450254a0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_res18;
  undefined1 local_res20 [8];
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  uint local_58;
  
  FUN_144be90e0(0xf027007e);
  local_64 = 0x80000000;
  local_70 = 0;
  local_68 = 0;
  local_60 = FUN_144b3d480();
  iVar2 = *(int *)(param_1 + 0x20);
  uVar11 = 0x2730b0f;
  local_58 = 0;
  local_res18 = 0;
  if (0 < (longlong)iVar2) {
    do {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + local_res18 * 4);
      iVar13 = iVar3;
      uVar12 = *(undefined4 *)
                ((longlong)*(int *)((longlong)iVar3 * 0x60 + 0xc + *(longlong *)(param_1 + 0x28)) *
                 0x60 + *(longlong *)(param_1 + 0x28));
      do {
        puVar14 = (undefined4 *)((longlong)iVar13 * 0x60 + *(longlong *)(param_1 + 0x28));
        uVar4 = *puVar14;
        cVar7 = FUN_144cb5150(param_1,iVar13);
        if ((cVar7 == '\0') && ((int)puVar14[4] < 0)) {
          local_res10 = uVar12;
          local_res14 = uVar4;
          lVar8 = FUN_1450259c0(&local_70,&local_res10);
          if (lVar8 == 0) {
LAB_14502562e:
            local_res8 = uVar4;
            uStackX_c = uVar12;
            FUN_1450258a0(&local_70,local_res20,&local_res8);
            if (local_res20._0_4_ == local_68) {
              iVar5 = local_68 + 1;
              if ((int)(local_64 & 0x7fffffff) < iVar5) {
                FUN_145025a50(&local_70,&PTR_vftable_14c6e47a0,(longlong)iVar5);
              }
              puVar1 = (undefined8 *)(local_70 + (longlong)local_68 * 0xc);
              local_68 = iVar5;
              if (puVar1 != (undefined8 *)0x0) {
                *puVar1 = CONCAT44(uStackX_c,local_res8);
                *(int *)(puVar1 + 1) = iVar13;
              }
            }
            else {
              *(int *)(local_70 + 8 + (longlong)local_res20._0_4_ * 0xc) = iVar13;
            }
            uVar11 = uVar11 + 0xa59791;
            if (0xa59790 < uVar11) goto LAB_1450256c0;
            uVar9 = 0x63738e59;
          }
          else {
            iVar5 = *(int *)(lVar8 + 4);
            if (iVar5 < 0) goto LAB_14502562e;
            iVar6 = *(int *)((longlong)iVar5 * 0xc + 8 + local_70);
            puVar14[4] = iVar6;
            *(int *)((longlong)iVar6 * 0x60 + 0x10 + *(longlong *)(param_1 + 0x28)) = iVar13;
            uVar10 = (uint)(lVar8 - local_60 >> 3);
            if ((local_58 < uVar10) ||
               (lVar8 = local_60 + (longlong)(int)uVar10 * 8,
               *(int *)(local_60 + 4 + (longlong)(int)uVar10 * 8) != iVar5)) {
              lVar8 = FUN_1450259c0(&local_70,local_70 + (longlong)iVar5 * 0xc);
            }
            FUN_145025780(&local_70,lVar8);
            uVar11 = uVar11 + 0xd3b21d;
            if (0xd3b21c < uVar11) goto LAB_1450256c0;
            uVar9 = 0x2aa78ddf;
          }
          FUN_144be90e0(uVar9);
        }
LAB_1450256c0:
        iVar13 = puVar14[2];
        uVar12 = uVar4;
      } while (iVar13 != iVar3);
      local_res18 = local_res18 + 1;
    } while (local_res18 < iVar2);
  }
  FUN_144be90e0(0x9f6f6a01);
  if ((local_60 != 0) && (*(int *)(local_60 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_60,0);
    FUN_144b3ec00(&local_60);
  }
  local_68 = 0;
  if ((-1 < (int)local_64) && (local_70 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_70,(ulonglong)(local_64 & 0x7fffffff) * 0xc);
  }
  return;
}



// FUNCTION 145025780 FUN_145025780 body=288 status=ok
// SIG undefined FUN_145025780(void)

void FUN_145025780(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_1450259c0(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0xc);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    puVar1 = (undefined4 *)(*param_1 + ((longlong)(int)lVar6 + -1) * 0xc);
    puVar8 = (undefined4 *)(*param_1 + (longlong)(int)uVar3 * 0xc);
    if (puVar8 != puVar1) {
      lVar9 = (longlong)puVar1 - (longlong)puVar8;
      lVar6 = 3;
      do {
        *puVar8 = *(undefined4 *)(lVar9 + (longlong)puVar8);
        puVar8 = puVar8 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  lVar6 = param_1[2];
  uVar10 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar10;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar10 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar10 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar10;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1450258a0 FUN_1450258a0 body=284 status=ok
// SIG undefined FUN_1450258a0(void)

uint * FUN_1450258a0(longlong *param_1,uint *param_2,int *param_3)

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
LAB_145025991:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if (*puVar6 == uVar9) {
      uVar2 = puVar6[1];
      if ((*(int *)(*param_1 + (longlong)(int)uVar2 * 0xc) == iVar8) &&
         (*(int *)(*param_1 + (longlong)(int)uVar2 * 0xc + 4) == param_3[1])) {
        *param_2 = uVar2;
        goto LAB_145025991;
      }
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 1450259c0 FUN_1450259c0 body=142 status=ok
// SIG undefined FUN_1450259c0(void)

uint * FUN_1450259c0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = param_1[2];
  iVar1 = *param_2;
  uVar5 = iVar1 * -0x61c8864f;
  uVar6 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar3 = (ulonglong)(*(uint *)(param_1 + 3) & uVar6);
  uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  while( true ) {
    if ((int)uVar5 < 0) {
      return (uint *)0x0;
    }
    puVar4 = (uint *)(lVar2 + uVar3 * 8);
    if (((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 0xc) == iVar1)) &&
       (*(int *)(*param_1 + (ulonglong)uVar5 * 0xc + 4) == param_2[1])) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145025a50 FUN_145025a50 body=262 status=ok
// SIG undefined FUN_145025a50(void)

ulonglong FUN_145025a50(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0xc,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  uVar3 = uVar4 * 0xc + 0xc;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0xc);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 145025b60 FUN_145025b60 body=584 status=ok
// SIG undefined FUN_145025b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145025b60(longlong param_1,uint param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,uint *param_6)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  FUN_144cb67e0(param_1,(longlong)(int)param_2 * 0x60 + *(longlong *)(param_1 + 0x28),&local_1d8,
                &local_158);
  local_d8 = local_158;
  uStack_d0 = uStack_150;
  local_c8 = local_148;
  uStack_c0 = uStack_140;
  local_b8 = local_138;
  uStack_b0 = uStack_130;
  local_a8 = local_128;
  uStack_a0 = uStack_120;
  local_98 = local_f8;
  uStack_90 = uStack_f0;
  local_88 = local_e8;
  uStack_80 = uStack_e0;
  local_78 = local_1d8;
  uStack_70 = uStack_1d0;
  local_68 = local_1c8;
  uStack_60 = uStack_1c0;
  local_58 = local_1b8;
  uStack_50 = uStack_1b0;
  local_48 = local_1a8;
  uStack_40 = uStack_1a0;
  local_38 = local_178;
  uStack_30 = uStack_170;
  local_28 = local_168;
  uStack_20 = uStack_160;
  cVar2 = FUN_144d32000(&local_78,&local_d8);
  if (cVar2 == '\0') {
    FUN_147e5918b(&local_1d8,&local_1b8,local_198,&local_178,local_1f8);
    FUN_147e5918b(&local_158,&local_138,local_118,&local_f8,local_1e8);
    auVar8 = maxps(local_1f8,local_1e8);
    pauVar6 = (undefined1 (*) [16])((longlong)(int)param_2 * 0x20 + *param_4);
    auVar7 = minps(local_1f8,local_1e8);
    fVar9 = (auVar8._0_4_ + auVar7._0_4_) * _DAT_14c6dad90;
    fVar10 = (auVar8._4_4_ + auVar7._4_4_) * fRam000000014c6dad94;
    fVar11 = (auVar8._8_4_ + auVar7._8_4_) * fRam000000014c6dad98;
    fVar12 = (auVar8._12_4_ + auVar7._12_4_) * fRam000000014c6dad9c;
    *pauVar6 = auVar7;
    pauVar6[1] = auVar8;
    iVar5 = (int)param_5[1] + 1;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_147e57f40(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    puVar3 = (uint *)((longlong)(int)param_5[1] * 0x10 + *param_5);
    if (puVar3 != (uint *)0x0) {
      *puVar3 = (uint)((int)fVar9 >> 0x1f) >> 1 ^ (uint)fVar9;
      puVar3[1] = (uint)((int)fVar10 >> 0x1f) >> 1 ^ (uint)fVar10;
      puVar3[2] = (uint)((int)fVar11 >> 0x1f) >> 1 ^ (uint)fVar11;
      puVar3[3] = (uint)((int)fVar12 >> 0x1f) >> 1 ^ (uint)fVar12;
      puVar3[3] = param_2;
    }
    *(int *)(param_5 + 1) = iVar5;
    uVar1 = *param_6;
    *param_6 = uVar1 + 0x1e7ac8b;
    if (0x1e7ac8a < uVar1 + 0x1e7ac8b) {
      return;
    }
    uVar4 = 0x9094cc0b;
  }
  else {
    iVar5 = (int)param_3[1] + 1;
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_1401f86b2(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    puVar3 = (uint *)(*param_3 + (longlong)(int)param_3[1] * 4);
    if (puVar3 != (uint *)0x0) {
      *puVar3 = param_2;
    }
    *(int *)(param_3 + 1) = iVar5;
    uVar1 = *param_6;
    *param_6 = uVar1 + 0x196ebb1;
    if (0x196ebb0 < uVar1 + 0x196ebb1) {
      return;
    }
    uVar4 = 0x7d646921;
  }
  FUN_144be90e0(uVar4);
  return;
}



// FUNCTION 145025db0 FUN_145025db0 body=1918 status=ok
// SIG undefined FUN_145025db0(void)

void FUN_145025db0(longlong param_1,int param_2,undefined8 param_3,uint param_4,undefined8 *param_5,
                  undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  int *piVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 local_528 [8];
  float fStack_520;
  undefined4 uStack_51c;
  undefined1 local_518 [16];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  float local_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  ulonglong local_4a8;
  longlong local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388 [32];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined1 local_308 [32];
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [64];
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [88];
  undefined1 local_b0 [120];
  
  FUN_144cb67e0(param_1,(longlong)param_2 * 0x60 + *(longlong *)(param_1 + 0x28),&local_3c8,
                &local_348);
  FUN_147e5918b(&local_3c8,&local_3a8,local_388,&local_368,local_528);
  FUN_147e5918b(&local_348,&local_328,local_308,&local_2e8,&local_498);
  puVar17 = param_5;
  auVar40._8_8_ = uStack_490;
  auVar40._0_8_ = local_498;
  auVar40 = minps(_local_528,auVar40);
  *(undefined4 *)(param_5 + 1) = 0;
  auVar16._8_8_ = uStack_490;
  auVar16._0_8_ = local_498;
  local_518 = maxps(_local_528,auVar16);
  local_528._0_4_ = auVar40._0_4_;
  uVar18 = local_528._0_4_;
  local_528._4_4_ = auVar40._4_4_;
  uVar19 = local_528._4_4_;
  uStack_51c = auVar40._12_4_;
  fStack_520 = auVar40._8_4_ - (float)param_4;
  fVar41 = local_518._8_4_ + (float)param_4;
  fVar38 = ABS((float)local_528._0_4_);
  fVar39 = ABS((float)local_528._4_4_);
  local_528 = auVar40._0_8_;
  fVar42 = (float)uVar18 - fVar38 * 4.7683716e-07;
  fVar43 = (float)uVar19 - fVar39 * 4.7683716e-07;
  local_4c8 = fStack_520 - ABS(fStack_520) * 4.7683716e-07;
  fVar38 = ABS((float)local_518._0_4_) * 4.7683716e-07 + (float)local_518._0_4_;
  fVar39 = ABS((float)local_518._4_4_) * 4.7683716e-07 + (float)local_518._4_4_;
  fVar41 = ABS(fVar41) * 4.7683716e-07 + fVar41;
  local_4e8 = CONCAT44(fVar43,fVar43);
  uStack_4e0 = CONCAT44(fVar43,fVar43);
  local_508 = CONCAT44(fVar42,fVar42);
  uStack_500 = CONCAT44(fVar42,fVar42);
  local_4f8 = CONCAT44(fVar38,fVar38);
  uStack_4f0 = CONCAT44(fVar38,fVar38);
  local_4b8 = CONCAT44(fVar41,fVar41);
  uStack_4b0 = CONCAT44(fVar41,fVar41);
  local_4d8 = CONCAT44(fVar39,fVar39);
  uStack_4d0 = CONCAT44(fVar39,fVar39);
  fStack_4c4 = local_4c8;
  fStack_4c0 = local_4c8;
  fStack_4bc = local_4c8;
  FUN_145028a90(param_3,&local_508,&param_5,1);
  iVar1 = *(int *)(puVar17 + 1);
  if (iVar1 != 0) {
    piVar24 = (int *)*puVar17;
    local_488 = local_3c8;
    uStack_480 = uStack_3c0;
    local_478 = local_3b8;
    uStack_470 = uStack_3b0;
    local_468 = local_3a8;
    uStack_460 = uStack_3a0;
    local_458 = local_398;
    uStack_450 = uStack_390;
    local_448 = local_368;
    uStack_440 = uStack_360;
    local_438 = local_358;
    uStack_430 = uStack_350;
    local_428 = local_348;
    uStack_420 = uStack_340;
    local_418 = local_338;
    uStack_410 = uStack_330;
    local_408 = local_328;
    uStack_400 = uStack_320;
    local_3f8 = local_318;
    uStack_3f0 = uStack_310;
    local_3e8 = local_2e8;
    uStack_3e4 = uStack_2e4;
    uStack_3e0 = uStack_2e0;
    uStack_3dc = uStack_2dc;
    local_3d8 = local_2d8;
    uStack_3d0 = uStack_2d0;
    local_528 = (undefined1  [8])(piVar24 + iVar1);
    if (piVar24 != piVar24 + iVar1) {
      local_498 = param_1 + 0x38;
      do {
        iVar1 = *piVar24;
        puVar20 = (undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x28));
        FUN_147e582da(param_1 + 0x38,&local_2c8,*puVar20);
        local_508 = local_2c8;
        uStack_500 = uStack_2c0;
        local_4f8 = local_2b8;
        uStack_4f0 = uStack_2b0;
        local_4e8 = local_2a8;
        uStack_4e0 = uStack_2a0;
        local_4d8 = local_298;
        uStack_4d0 = uStack_290;
        local_4c8 = local_268;
        fStack_4c4 = fStack_264;
        fStack_4c0 = fStack_260;
        fStack_4bc = fStack_25c;
        local_4b8 = local_258;
        uStack_4b0 = uStack_250;
        uVar21 = FUN_145028910(local_1c8,&local_428,&local_508);
        puVar22 = (ulonglong *)FUN_1450289d0(local_108,uVar21,&local_448);
        uVar21 = FUN_145028910(local_188,&local_488,&local_428);
        puVar23 = (ulonglong *)FUN_1450289d0(local_b0,uVar21,&local_4c8);
        local_4a8 = *puVar23 + *puVar22;
        uVar2 = puVar23[9];
        uVar3 = (ulonglong)CARRY8(*puVar23,*puVar22);
        uVar5 = puVar23[1] + puVar22[1];
        uVar25 = uVar5 + uVar3;
        uVar3 = (ulonglong)(CARRY8(puVar23[1],puVar22[1]) || CARRY8(uVar5,uVar3));
        uVar5 = puVar23[2] + puVar22[2];
        uVar26 = uVar5 + uVar3;
        uVar3 = (ulonglong)(CARRY8(puVar23[2],puVar22[2]) || CARRY8(uVar5,uVar3));
        uVar5 = puVar23[3] + puVar22[3];
        uVar27 = uVar5 + uVar3;
        uVar3 = (ulonglong)(CARRY8(puVar23[3],puVar22[3]) || CARRY8(uVar5,uVar3));
        uVar5 = puVar23[4] + puVar22[4];
        uVar28 = uVar5 + uVar3;
        uVar5 = (ulonglong)(CARRY8(puVar23[4],puVar22[4]) || CARRY8(uVar5,uVar3));
        uVar6 = puVar23[5] + puVar22[5];
        uVar33 = uVar6 + uVar5;
        uVar3 = puVar23[10];
        uVar5 = (ulonglong)(CARRY8(puVar23[5],puVar22[5]) || CARRY8(uVar6,uVar5));
        uVar6 = puVar23[6] + puVar22[6];
        uVar34 = uVar6 + uVar5;
        uVar5 = (ulonglong)(CARRY8(puVar23[6],puVar22[6]) || CARRY8(uVar6,uVar5));
        uVar6 = puVar23[7] + puVar22[7];
        uVar35 = uVar6 + uVar5;
        uVar5 = (ulonglong)(CARRY8(puVar23[7],puVar22[7]) || CARRY8(uVar6,uVar5));
        uVar6 = puVar23[8] + puVar22[8];
        uVar36 = uVar6 + uVar5;
        uVar4 = (ulonglong)(CARRY8(puVar23[8],puVar22[8]) || CARRY8(uVar6,uVar5));
        uVar5 = puVar22[9];
        uVar37 = uVar2 + puVar22[9];
        uVar30 = uVar37 + uVar4;
        uVar6 = puVar22[10];
        uVar21 = FUN_145028910(local_148,&local_508,&local_488);
        puVar22 = (ulonglong *)FUN_1450289d0(&local_2c8,uVar21,&local_3e8);
        uVar7 = uVar25 + puVar22[1];
        uVar25 = (ulonglong)
                 (CARRY8(uVar25,puVar22[1]) || CARRY8(uVar7,(ulonglong)CARRY8(local_4a8,*puVar22)));
        uVar8 = uVar26 + puVar22[2];
        uVar26 = (ulonglong)(CARRY8(uVar26,puVar22[2]) || CARRY8(uVar8,uVar25));
        uVar9 = uVar27 + puVar22[3];
        uVar27 = (ulonglong)(CARRY8(uVar27,puVar22[3]) || CARRY8(uVar9,uVar26));
        uVar10 = uVar28 + puVar22[4];
        uVar28 = (ulonglong)(CARRY8(uVar28,puVar22[4]) || CARRY8(uVar10,uVar27));
        uVar11 = uVar33 + puVar22[5];
        uVar33 = (ulonglong)(CARRY8(uVar33,puVar22[5]) || CARRY8(uVar11,uVar28));
        uVar12 = uVar34 + puVar22[6];
        uVar34 = (ulonglong)(CARRY8(uVar34,puVar22[6]) || CARRY8(uVar12,uVar33));
        uVar13 = uVar35 + puVar22[7];
        uVar35 = (ulonglong)(CARRY8(uVar35,puVar22[7]) || CARRY8(uVar13,uVar34));
        uVar14 = uVar36 + puVar22[8];
        uVar36 = (ulonglong)(CARRY8(uVar36,puVar22[8]) || CARRY8(uVar14,uVar35));
        uVar15 = uVar30 + puVar22[9];
        lVar32 = uVar3 + uVar6 + (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar37,uVar4)) +
                 puVar22[10] + (ulonglong)(CARRY8(uVar30,puVar22[9]) || CARRY8(uVar15,uVar36));
        if (-1 < lVar32 &&
            (lVar32 == 0 &&
            ((uVar14 + uVar35 == 0 &&
             ((uVar12 + uVar33 == 0 &&
              ((uVar10 + uVar27 == 0 &&
               ((uVar8 + uVar25 == 0 &&
                (uVar7 + CARRY8(local_4a8,*puVar22) == 0 && local_4a8 + *puVar22 == 0)) &&
               uVar9 + uVar26 == 0)) && uVar11 + uVar28 == 0)) && uVar13 + uVar34 == 0)) &&
            uVar15 + uVar36 == 0))) {
          FUN_147e582da(local_498,&local_248,
                        *(undefined4 *)
                         ((longlong)(int)puVar20[3] * 0x60 + *(longlong *)(param_1 + 0x28)));
          local_508 = local_248;
          uStack_500 = uStack_240;
          local_4f8 = local_238;
          uStack_4f0 = uStack_230;
          local_4e8 = local_228;
          uStack_4e0 = uStack_220;
          local_4d8 = local_218;
          uStack_4d0 = uStack_210;
          local_4c8 = local_1e8;
          fStack_4c4 = fStack_1e4;
          fStack_4c0 = fStack_1e0;
          fStack_4bc = fStack_1dc;
          local_4b8 = local_1d8;
          uStack_4b0 = uStack_1d0;
          uVar21 = FUN_145028910(local_148,&local_428,&local_508);
          puVar22 = (ulonglong *)FUN_1450289d0(&local_2c8,uVar21,&local_448);
          uVar21 = FUN_145028910(local_188,&local_488,&local_428);
          puVar23 = (ulonglong *)FUN_1450289d0(local_b0,uVar21,&local_4c8);
          uVar29 = *puVar23 + *puVar22;
          uVar2 = puVar23[9];
          uVar3 = (ulonglong)CARRY8(*puVar23,*puVar22);
          uVar5 = puVar23[1] + puVar22[1];
          uVar26 = uVar5 + uVar3;
          uVar3 = (ulonglong)(CARRY8(puVar23[1],puVar22[1]) || CARRY8(uVar5,uVar3));
          uVar5 = puVar23[2] + puVar22[2];
          uVar27 = uVar5 + uVar3;
          uVar3 = (ulonglong)(CARRY8(puVar23[2],puVar22[2]) || CARRY8(uVar5,uVar3));
          uVar5 = puVar23[3] + puVar22[3];
          uVar28 = uVar5 + uVar3;
          uVar3 = (ulonglong)(CARRY8(puVar23[3],puVar22[3]) || CARRY8(uVar5,uVar3));
          uVar5 = puVar23[4] + puVar22[4];
          uVar33 = uVar5 + uVar3;
          uVar5 = (ulonglong)(CARRY8(puVar23[4],puVar22[4]) || CARRY8(uVar5,uVar3));
          uVar6 = puVar23[5] + puVar22[5];
          uVar34 = uVar6 + uVar5;
          uVar3 = puVar23[10];
          uVar5 = (ulonglong)(CARRY8(puVar23[5],puVar22[5]) || CARRY8(uVar6,uVar5));
          uVar6 = puVar23[6] + puVar22[6];
          uVar35 = uVar6 + uVar5;
          uVar5 = (ulonglong)(CARRY8(puVar23[6],puVar22[6]) || CARRY8(uVar6,uVar5));
          uVar6 = puVar23[7] + puVar22[7];
          uVar36 = uVar6 + uVar5;
          uVar5 = (ulonglong)(CARRY8(puVar23[7],puVar22[7]) || CARRY8(uVar6,uVar5));
          uVar6 = puVar23[8] + puVar22[8];
          uVar37 = uVar6 + uVar5;
          uVar4 = (ulonglong)(CARRY8(puVar23[8],puVar22[8]) || CARRY8(uVar6,uVar5));
          uVar5 = puVar22[9];
          uVar7 = uVar2 + puVar22[9];
          uVar31 = uVar7 + uVar4;
          uVar6 = puVar22[10];
          uVar21 = FUN_145028910(local_1c8,&local_508,&local_488);
          puVar22 = (ulonglong *)FUN_1450289d0(local_108,uVar21,&local_3e8);
          uVar25 = (ulonglong)CARRY8(uVar29,*puVar22);
          uVar8 = uVar26 + puVar22[1];
          uVar26 = (ulonglong)(CARRY8(uVar26,puVar22[1]) || CARRY8(uVar8,uVar25));
          uVar9 = uVar27 + puVar22[2];
          uVar27 = (ulonglong)(CARRY8(uVar27,puVar22[2]) || CARRY8(uVar9,uVar26));
          uVar10 = uVar28 + puVar22[3];
          uVar28 = (ulonglong)(CARRY8(uVar28,puVar22[3]) || CARRY8(uVar10,uVar27));
          uVar11 = uVar33 + puVar22[4];
          uVar33 = (ulonglong)(CARRY8(uVar33,puVar22[4]) || CARRY8(uVar11,uVar28));
          uVar12 = uVar34 + puVar22[5];
          uVar34 = (ulonglong)(CARRY8(uVar34,puVar22[5]) || CARRY8(uVar12,uVar33));
          uVar13 = uVar35 + puVar22[6];
          uVar35 = (ulonglong)(CARRY8(uVar35,puVar22[6]) || CARRY8(uVar13,uVar34));
          uVar14 = uVar36 + puVar22[7];
          uVar36 = (ulonglong)(CARRY8(uVar36,puVar22[7]) || CARRY8(uVar14,uVar35));
          uVar15 = uVar37 + puVar22[8];
          uVar37 = (ulonglong)(CARRY8(uVar37,puVar22[8]) || CARRY8(uVar15,uVar36));
          uVar30 = uVar31 + puVar22[9];
          lVar32 = uVar3 + uVar6 + (ulonglong)(CARRY8(uVar2,uVar5) || CARRY8(uVar7,uVar4)) +
                   puVar22[10] + (ulonglong)(CARRY8(uVar31,puVar22[9]) || CARRY8(uVar30,uVar37));
          if (-1 < lVar32 &&
              (lVar32 == 0 &&
              ((uVar15 + uVar36 == 0 &&
               ((uVar13 + uVar34 == 0 &&
                ((uVar11 + uVar28 == 0 &&
                 ((uVar9 + uVar26 == 0 && (uVar8 + uVar25 == 0 && uVar29 + *puVar22 == 0)) &&
                 uVar10 + uVar27 == 0)) && uVar12 + uVar33 == 0)) && uVar14 + uVar35 == 0)) &&
              uVar30 + uVar37 == 0))) {
            param_5 = (undefined8 *)CONCAT44(iVar1,param_2);
            FUN_145026e60(param_1,param_5,param_4,param_6);
          }
        }
        piVar24 = piVar24 + 1;
      } while ((undefined1  [8])piVar24 != local_528);
    }
  }
  return;
}



// FUNCTION 145026530 FUN_145026530 body=1456 status=ok
// SIG undefined FUN_145026530(void)

void FUN_145026530(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  int iVar11;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar10 = (longlong)(int)param_2 * 0x60;
  iVar4 = (int)((ulonglong)param_2 >> 0x20);
  local_378 = *(undefined8 *)(lVar10 + lVar2);
  uStack_370 = ((undefined8 *)(lVar10 + lVar2))[1];
  puVar7 = (undefined8 *)(lVar10 + 0x10 + lVar2);
  local_368 = *puVar7;
  uStack_360 = puVar7[1];
  lVar8 = (longlong)iVar4 * 0x60;
  puVar7 = (undefined8 *)(lVar10 + 0x20 + lVar2);
  local_358 = *puVar7;
  uStack_350 = puVar7[1];
  puVar7 = (undefined8 *)(lVar10 + 0x30 + lVar2);
  local_348 = *puVar7;
  uStack_340 = puVar7[1];
  puVar7 = (undefined8 *)(lVar10 + 0x40 + lVar2);
  local_338 = *puVar7;
  uStack_330 = puVar7[1];
  puVar7 = (undefined8 *)(lVar10 + 0x50 + lVar2);
  local_328 = *puVar7;
  uStack_320 = puVar7[1];
  local_318 = *(undefined8 *)(lVar8 + lVar2);
  uStack_310 = ((undefined8 *)(lVar8 + lVar2))[1];
  puVar7 = (undefined8 *)(lVar8 + 0x10 + lVar2);
  local_308 = *puVar7;
  uStack_300 = puVar7[1];
  puVar7 = (undefined8 *)(lVar8 + 0x20 + lVar2);
  local_2f8 = *puVar7;
  uStack_2f0 = puVar7[1];
  puVar7 = (undefined8 *)(lVar8 + 0x30 + lVar2);
  local_2e8 = *puVar7;
  uStack_2e0 = puVar7[1];
  puVar1 = (undefined4 *)(lVar8 + 0x40 + lVar2);
  local_2d8 = *puVar1;
  uStack_2d4 = puVar1[1];
  uStack_2d0 = puVar1[2];
  uStack_2cc = puVar1[3];
  puVar1 = (undefined4 *)(lVar8 + 0x50 + lVar2);
  local_2c8 = *puVar1;
  uStack_2c4 = puVar1[1];
  uStack_2c0 = puVar1[2];
  uStack_2bc = puVar1[3];
  FUN_144cb67e0(param_1,&local_378,&local_238,&local_1b8);
  FUN_144cb67e0(param_1,&local_318,&local_138,&local_2b8);
  local_538 = local_2b8;
  uStack_530 = uStack_2b0;
  local_528 = local_2a8;
  uStack_520 = uStack_2a0;
  local_518 = local_298;
  uStack_510 = uStack_290;
  local_508 = local_288;
  uStack_500 = uStack_280;
  local_4f8 = local_258;
  uStack_4f0 = uStack_250;
  local_4e8 = local_248;
  uStack_4e0 = uStack_240;
  local_4d8 = local_238;
  uStack_4d0 = uStack_230;
  local_4c8 = local_228;
  uStack_4c0 = uStack_220;
  local_4b8 = local_218;
  uStack_4b0 = uStack_210;
  local_4a8 = local_208;
  uStack_4a0 = uStack_200;
  iVar5 = FUN_144d320f0(&local_4d8,&local_538);
  local_4c8 = local_128;
  uStack_4c0 = uStack_120;
  local_4d8 = local_138;
  uStack_4d0 = uStack_130;
  local_4a8 = local_108;
  uStack_4a0 = uStack_100;
  local_4b8 = local_118;
  uStack_4b0 = uStack_110;
  local_488 = local_c8;
  uStack_480 = uStack_c0;
  local_498 = local_d8;
  uStack_490 = uStack_d0;
  local_528 = local_1a8;
  uStack_520 = uStack_1a0;
  local_538 = local_1b8;
  uStack_530 = uStack_1b0;
  local_508 = local_188;
  uStack_500 = uStack_180;
  local_518 = local_198;
  uStack_510 = uStack_190;
  iVar6 = FUN_144d320f0(&local_538,&local_4d8);
  puVar7 = &local_2b8;
  if (-1 < iVar5) {
    puVar7 = &local_238;
  }
  local_438 = puVar7[8];
  uStack_430 = puVar7[9];
  local_478 = *(undefined4 *)puVar7;
  uStack_474 = *(undefined4 *)((longlong)puVar7 + 4);
  local_538 = *puVar7;
  uStack_470 = *(undefined4 *)(puVar7 + 1);
  uStack_46c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_530 = puVar7[1];
  local_468 = *(undefined4 *)(puVar7 + 2);
  uStack_464 = *(undefined4 *)((longlong)puVar7 + 0x14);
  local_528 = puVar7[2];
  uStack_460 = *(undefined4 *)(puVar7 + 3);
  uStack_45c = *(undefined4 *)((longlong)puVar7 + 0x1c);
  uStack_520 = puVar7[3];
  local_458 = *(undefined4 *)(puVar7 + 4);
  uStack_454 = *(undefined4 *)((longlong)puVar7 + 0x24);
  local_518 = puVar7[4];
  uStack_450 = *(undefined4 *)(puVar7 + 5);
  uStack_44c = *(undefined4 *)((longlong)puVar7 + 0x2c);
  uStack_510 = puVar7[5];
  local_448 = *(undefined4 *)(puVar7 + 6);
  uStack_444 = *(undefined4 *)((longlong)puVar7 + 0x34);
  local_508 = puVar7[6];
  uStack_440 = *(undefined4 *)(puVar7 + 7);
  uStack_43c = *(undefined4 *)((longlong)puVar7 + 0x3c);
  uStack_500 = puVar7[7];
  local_4e8 = puVar7[0xe];
  uStack_4e0 = puVar7[0xf];
  local_428 = puVar7[10];
  uStack_420 = puVar7[0xb];
  local_4f8 = puVar7[0xc];
  uStack_4f0 = puVar7[0xd];
  puVar7 = &local_1b8;
  if (-1 < iVar6) {
    puVar7 = &local_138;
  }
  local_3b8 = puVar7[8];
  uStack_3b0 = puVar7[9];
  local_4d8 = *puVar7;
  uStack_4d0 = puVar7[1];
  local_4c8 = puVar7[2];
  uStack_4c0 = puVar7[3];
  local_4b8 = puVar7[4];
  uStack_4b0 = puVar7[5];
  local_4a8 = puVar7[6];
  uStack_4a0 = puVar7[7];
  local_488 = puVar7[0xe];
  uStack_480 = puVar7[0xf];
  local_3a8 = puVar7[10];
  uStack_3a0 = puVar7[0xb];
  local_498 = puVar7[0xc];
  uStack_490 = puVar7[0xd];
  local_418 = local_4f8;
  uStack_410 = uStack_4f0;
  local_408 = local_4e8;
  uStack_400 = uStack_4e0;
  local_3f8 = local_4d8;
  uStack_3f0 = uStack_4d0;
  local_3e8 = local_4c8;
  uStack_3e0 = uStack_4c0;
  local_3d8 = local_4b8;
  uStack_3d0 = uStack_4b0;
  local_3c8 = local_4a8;
  uStack_3c0 = uStack_4a0;
  local_398 = local_498;
  uStack_390 = uStack_490;
  local_388 = local_488;
  uStack_380 = uStack_480;
  cVar3 = FUN_144d32000(&local_538,&local_4d8);
  if (cVar3 != '\0') {
    iVar11 = (int)param_3[1] + 1;
    if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar11) {
      FUN_147e6062a(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    lVar2 = param_3[1];
    *(int *)(param_3 + 1) = iVar11;
    piVar9 = (int *)((longlong)(int)lVar2 * 0x220 + *param_3);
    *(ulonglong *)(piVar9 + 2) = CONCAT44(uStack_474,local_478);
    *(ulonglong *)(piVar9 + 4) = CONCAT44(uStack_46c,uStack_470);
    *piVar9 = (int)param_2;
    *(undefined8 *)(piVar9 + 0x22) = local_3f8;
    *(undefined8 *)(piVar9 + 0x24) = uStack_3f0;
    *(ulonglong *)(piVar9 + 6) = CONCAT44(uStack_464,local_468);
    *(ulonglong *)(piVar9 + 8) = CONCAT44(uStack_45c,uStack_460);
    *(undefined8 *)(piVar9 + 0x26) = local_3e8;
    *(undefined8 *)(piVar9 + 0x28) = uStack_3e0;
    *(ulonglong *)(piVar9 + 10) = CONCAT44(uStack_454,local_458);
    *(ulonglong *)(piVar9 + 0xc) = CONCAT44(uStack_44c,uStack_450);
    *(undefined8 *)(piVar9 + 0x2a) = local_3d8;
    *(undefined8 *)(piVar9 + 0x2c) = uStack_3d0;
    *(ulonglong *)(piVar9 + 0xe) = CONCAT44(uStack_444,local_448);
    *(ulonglong *)(piVar9 + 0x10) = CONCAT44(uStack_43c,uStack_440);
    *(undefined8 *)(piVar9 + 0x2e) = local_3c8;
    *(undefined8 *)(piVar9 + 0x30) = uStack_3c0;
    *(undefined8 *)(piVar9 + 0x12) = local_438;
    *(undefined8 *)(piVar9 + 0x14) = uStack_430;
    *(undefined8 *)(piVar9 + 0x32) = local_3b8;
    *(undefined8 *)(piVar9 + 0x34) = uStack_3b0;
    *(undefined8 *)(piVar9 + 0x16) = local_428;
    *(undefined8 *)(piVar9 + 0x18) = uStack_420;
    *(undefined8 *)(piVar9 + 0x36) = local_3a8;
    *(undefined8 *)(piVar9 + 0x38) = uStack_3a0;
    *(undefined8 *)(piVar9 + 0x1a) = local_418;
    *(undefined8 *)(piVar9 + 0x1c) = uStack_410;
    *(undefined8 *)(piVar9 + 0x3a) = local_398;
    *(undefined8 *)(piVar9 + 0x3c) = uStack_390;
    *(undefined8 *)(piVar9 + 0x1e) = local_408;
    *(undefined8 *)(piVar9 + 0x20) = uStack_400;
    *(undefined8 *)(piVar9 + 0x3e) = local_388;
    *(undefined8 *)(piVar9 + 0x40) = uStack_380;
    *(byte *)(piVar9 + 0x42) = (byte)((uint)iVar5 >> 0x1f);
    *(bool *)((longlong)piVar9 + 0x109) = 0 < iVar6;
    *(undefined8 *)(piVar9 + 0x46) = local_3f8;
    *(undefined8 *)(piVar9 + 0x48) = uStack_3f0;
    piVar9[0x44] = iVar4;
    *(ulonglong *)(piVar9 + 0x66) = CONCAT44(uStack_474,local_478);
    *(ulonglong *)(piVar9 + 0x68) = CONCAT44(uStack_46c,uStack_470);
    *(undefined8 *)(piVar9 + 0x4a) = local_3e8;
    *(undefined8 *)(piVar9 + 0x4c) = uStack_3e0;
    *(ulonglong *)(piVar9 + 0x6a) = CONCAT44(uStack_464,local_468);
    *(ulonglong *)(piVar9 + 0x6c) = CONCAT44(uStack_45c,uStack_460);
    *(undefined8 *)(piVar9 + 0x4e) = local_3d8;
    *(undefined8 *)(piVar9 + 0x50) = uStack_3d0;
    *(ulonglong *)(piVar9 + 0x6e) = CONCAT44(uStack_454,local_458);
    *(ulonglong *)(piVar9 + 0x70) = CONCAT44(uStack_44c,uStack_450);
    *(undefined8 *)(piVar9 + 0x52) = local_3c8;
    *(undefined8 *)(piVar9 + 0x54) = uStack_3c0;
    *(ulonglong *)(piVar9 + 0x72) = CONCAT44(uStack_444,local_448);
    *(ulonglong *)(piVar9 + 0x74) = CONCAT44(uStack_43c,uStack_440);
    *(undefined8 *)(piVar9 + 0x56) = local_3b8;
    *(undefined8 *)(piVar9 + 0x58) = uStack_3b0;
    *(undefined8 *)(piVar9 + 0x76) = local_438;
    *(undefined8 *)(piVar9 + 0x78) = uStack_430;
    *(undefined8 *)(piVar9 + 0x5a) = local_3a8;
    *(undefined8 *)(piVar9 + 0x5c) = uStack_3a0;
    *(undefined8 *)(piVar9 + 0x7a) = local_428;
    *(undefined8 *)(piVar9 + 0x7c) = uStack_420;
    *(undefined8 *)(piVar9 + 0x5e) = local_398;
    *(undefined8 *)(piVar9 + 0x60) = uStack_390;
    *(undefined8 *)(piVar9 + 0x7e) = local_418;
    *(undefined8 *)(piVar9 + 0x80) = uStack_410;
    *(undefined8 *)(piVar9 + 0x62) = local_388;
    *(undefined8 *)(piVar9 + 100) = uStack_380;
    *(undefined8 *)(piVar9 + 0x82) = local_408;
    *(undefined8 *)(piVar9 + 0x84) = uStack_400;
    *(byte *)(piVar9 + 0x86) = (byte)((uint)iVar6 >> 0x1f);
    *(bool *)((longlong)piVar9 + 0x219) = 0 < iVar5;
  }
  return;
}



// FUNCTION 145026ae0 FUN_145026ae0 body=468 status=ok
// SIG undefined FUN_145026ae0(void)

bool FUN_145026ae0(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  bool bVar13;
  longlong local_128;
  longlong lStack_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  undefined1 local_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  longlong local_30;
  
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  local_128 = -param_2[3];
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  lStack_120 = -(ulonglong)(param_2[3] != 0) - param_2[4];
  FUN_144cc6890(param_1 + 0x40,param_2[2],&local_118,1);
  FUN_144cc6890(param_1 + 0x20,param_2[1],&local_c8,1);
  FUN_144cc6890(param_1,*param_2,&local_50,1);
  uVar8 = local_50 + local_c8;
  uVar9 = local_48 + uStack_c0 + (ulonglong)CARRY8(local_50,local_c8);
  uVar1 = (ulonglong)
          (CARRY8(local_48,uStack_c0) ||
          CARRY8(local_48 + uStack_c0,(ulonglong)CARRY8(local_50,local_c8)));
  uVar2 = local_40 + CONCAT44(local_b8._4_4_,(undefined4)local_b8);
  uVar10 = uVar2 + uVar1;
  uVar1 = (ulonglong)
          (CARRY8(local_40,CONCAT44(local_b8._4_4_,(undefined4)local_b8)) || CARRY8(uVar2,uVar1));
  uVar3 = local_38 + CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0);
  uVar11 = uVar3 + uVar1;
  local_c8 = uVar8 + local_118;
  uVar2 = (ulonglong)CARRY8(uVar8,local_118);
  uVar8 = uVar9 + local_110;
  uStack_c0 = uVar8 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar9,local_110) || CARRY8(uVar8,uVar2));
  uVar8 = uVar10 + local_108;
  local_68 = uVar8 + uVar2;
  uVar2 = (ulonglong)(CARRY8(uVar10,local_108) || CARRY8(uVar8,uVar2));
  uVar8 = uVar11 + local_100;
  uStack_60 = uVar8 + uVar2;
  local_58 = local_30 + local_a8._0_8_ +
             (ulonglong)
             (CARRY8(local_38,CONCAT44(uStack_b0._4_4_,(undefined4)uStack_b0)) ||
             CARRY8(uVar3,uVar1)) + local_f8._0_8_ +
             (ulonglong)(CARRY8(uVar11,local_100) || CARRY8(uVar8,uVar2));
  local_f8._8_4_ = (undefined4)uVar6;
  local_f8._12_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_f8._0_8_ = local_58;
  local_a8._8_4_ = local_f8._8_4_;
  local_a8._0_8_ = local_58;
  local_a8._12_4_ = local_f8._12_4_;
  uStack_e8._0_4_ = (undefined4)uVar7;
  uStack_e8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_e0._0_4_ = (undefined4)uVar4;
  uStack_e0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_98 = (undefined4)uStack_e8;
  uStack_94 = uStack_e8._4_4_;
  uStack_90 = (undefined4)uStack_e0;
  uStack_8c = uStack_e0._4_4_;
  uStack_e8 = uVar7;
  uStack_e0 = uVar4;
  uStack_d8 = uVar5;
  local_88 = uVar5;
  local_78 = local_c8;
  uStack_70 = uStack_c0;
  local_b8 = local_68;
  uStack_b0 = uStack_60;
  FUN_144cc6970(local_a8 + 8,&local_128,&local_118);
  if (lStack_120 < 0) {
    bVar12 = local_108 < (ulonglong)local_a8._8_8_;
    local_108 = local_108 - local_a8._8_8_;
    bVar13 = local_100 < CONCAT44(uStack_94,local_98);
    uVar1 = local_100 - CONCAT44(uStack_94,local_98);
    local_100 = uVar1 - bVar12;
    local_f8._0_8_ =
         (local_f8._0_8_ - CONCAT44(uStack_8c,uStack_90)) - (ulonglong)(bVar13 || uVar1 < bVar12);
  }
  return local_a8._0_8_ == local_f8._0_8_ &&
         ((local_b8 == local_108 && (uStack_c0 == local_110 && local_c8 == local_118)) &&
         uStack_b0 == local_100);
}



// FUNCTION 145026cc0 FUN_145026cc0 body=413 status=ok
// SIG undefined FUN_145026cc0(void)

undefined8 FUN_145026cc0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
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
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  
  lVar19 = param_1[2];
  uVar20 = *param_2 * lVar19;
  lVar13 = *param_2;
  lVar1 = param_2[2];
  uVar17 = lVar1 * *param_1;
  lVar2 = *param_1;
  *param_3 = uVar17 - uVar20;
  param_3[1] = (SUB168(SEXT816(lVar1) * SEXT816(lVar2),8) -
               SUB168(SEXT816(lVar19) * SEXT816(lVar13),8)) - (ulonglong)(uVar17 < uVar20);
  lVar19 = param_1[2];
  lVar13 = param_2[2];
  uVar20 = param_2[1] * lVar19;
  lVar1 = param_2[1];
  uVar17 = lVar13 * param_1[1];
  lVar2 = param_1[1];
  param_3[2] = uVar17 - uVar20;
  param_3[3] = (SUB168(SEXT816(lVar13) * SEXT816(lVar2),8) -
               SUB168(SEXT816(lVar19) * SEXT816(lVar1),8)) - (ulonglong)(uVar17 < uVar20);
  uVar17 = param_1[2];
  uVar20 = param_2[4];
  uVar3 = param_2[3];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar17;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  uVar14 = SUB168(auVar5 * auVar9,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar17;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar20;
  uVar16 = uVar20 * uVar17 + uVar14;
  lVar19 = (ulonglong)CARRY8(uVar20 * uVar17,uVar14) + SUB168(auVar6 * auVar10,8);
  if ((longlong)uVar20 < 0) {
    lVar19 = lVar19 - uVar17;
  }
  if ((longlong)uVar17 < 0) {
    bVar21 = uVar16 < uVar3;
    uVar16 = uVar16 - uVar3;
    lVar19 = (lVar19 - uVar20) - (ulonglong)bVar21;
  }
  uVar20 = param_2[2];
  uVar14 = param_1[3];
  uVar4 = param_1[4];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar20;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar14;
  uVar15 = SUB168(auVar7 * auVar11,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar20;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar4;
  uVar18 = uVar4 * uVar20 + uVar15;
  lVar13 = (ulonglong)CARRY8(uVar4 * uVar20,uVar15) + SUB168(auVar8 * auVar12,8);
  if ((longlong)uVar4 < 0) {
    lVar13 = lVar13 - uVar20;
  }
  if ((longlong)uVar20 < 0) {
    bVar21 = uVar18 < uVar14;
    uVar18 = uVar18 - uVar14;
    lVar13 = (lVar13 - uVar4) - (ulonglong)bVar21;
  }
  uVar4 = (ulonglong)(uVar14 * uVar20 < uVar3 * uVar17);
  lVar19 = (lVar13 - lVar19) - (ulonglong)(uVar18 < uVar16 || uVar18 - uVar16 < uVar4);
  param_3[4] = uVar14 * uVar20 - uVar3 * uVar17;
  param_3[5] = (uVar18 - uVar16) - uVar4;
  param_3[6] = lVar19;
  uVar17 = 1;
  if (param_3[2] == 0) {
    uVar17 = CONCAT71((int7)((ulonglong)lVar19 >> 8),param_3[1] != 0 || *param_3 != 0) & 0xffffffff;
  }
  return CONCAT71((int7)(uVar17 >> 8),(byte)uVar17 | param_3[3] != 0);
}



// FUNCTION 145026e60 FUN_145026e60 body=5760 status=ok
// SIG undefined FUN_145026e60(void)

void FUN_145026e60(longlong param_1,undefined8 param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulonglong *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  int *piVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined8 *puVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  byte bVar42;
  byte bVar43;
  ulonglong uVar44;
  undefined8 *puVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  char local_res8;
  bool local_9b8;
  ulonglong local_9a8;
  ulonglong uStack_9a0;
  ulonglong local_998;
  ulonglong uStack_990;
  ulonglong local_988;
  ulonglong uStack_980;
  ulonglong local_978;
  ulonglong local_958;
  ulonglong uStack_950;
  ulonglong local_948;
  ulonglong uStack_940;
  ulonglong local_938;
  ulonglong uStack_930;
  ulonglong local_928;
  ulonglong uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  ulonglong local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  ulonglong local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  ulonglong local_8a8;
  ulonglong uStack_8a0;
  ulonglong uStack_898;
  undefined8 uStack_890;
  ulonglong uStack_888;
  undefined8 uStack_880;
  undefined4 local_878;
  undefined4 uStack_874;
  undefined4 local_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  ulonglong local_828;
  ulonglong local_820;
  longlong local_818;
  ulonglong local_808;
  ulonglong uStack_800;
  ulonglong local_7f8;
  ulonglong uStack_7f0;
  undefined1 local_7e8 [16];
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  ulonglong uStack_7c0;
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined1 local_768 [16];
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 local_738;
  undefined4 uStack_734;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 local_708;
  undefined8 uStack_700;
  ulonglong local_6f8;
  ulonglong uStack_6f0;
  ulonglong uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  ulonglong local_6a8;
  ulonglong uStack_6a0;
  ulonglong local_698;
  ulonglong uStack_690;
  ulonglong local_688;
  ulonglong uStack_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 local_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined4 local_5e8;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  ulonglong local_598;
  longlong lStack_590;
  ulonglong local_588;
  undefined8 uStack_580;
  undefined4 local_578;
  undefined4 uStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  ulonglong local_548;
  ulonglong uStack_540;
  ulonglong local_538;
  ulonglong uStack_530;
  ulonglong local_528;
  ulonglong uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined8 local_468;
  undefined8 uStack_460;
  ulonglong local_458;
  ulonglong uStack_450;
  ulonglong local_448;
  ulonglong uStack_440;
  ulonglong local_438;
  ulonglong uStack_430;
  ulonglong local_428;
  ulonglong uStack_420;
  ulonglong local_418;
  ulonglong uStack_410;
  ulonglong local_408;
  ulonglong uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  ulonglong local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  ulonglong local_3b0;
  longlong lStack_3a8;
  ulonglong local_398;
  ulonglong uStack_390;
  ulonglong local_388;
  ulonglong uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  ulonglong local_318;
  ulonglong uStack_310;
  ulonglong local_308;
  ulonglong uStack_300;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  ulonglong local_2d8;
  longlong lStack_2d0;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  ulonglong local_288;
  ulonglong uStack_280;
  ulonglong local_278;
  ulonglong uStack_270;
  ulonglong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  ulonglong local_248;
  ulonglong uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  ulonglong local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  longlong lStack_1d0;
  ulonglong local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  uVar38 = CONCAT44(0,param_3);
  lVar30 = *(longlong *)(param_1 + 0x28);
  lVar35 = (longlong)(int)param_2 * 0x60;
  iVar25 = (int)((ulonglong)param_2 >> 0x20);
  local_198 = *(ulonglong *)(lVar35 + lVar30);
  uStack_190 = ((ulonglong *)(lVar35 + lVar30))[1];
  piVar34 = (int *)(lVar35 + 0x10 + lVar30);
  local_188 = *piVar34;
  iStack_184 = piVar34[1];
  iStack_180 = piVar34[2];
  iStack_17c = piVar34[3];
  lVar32 = (longlong)iVar25 * 0x60;
  puVar45 = (undefined8 *)(lVar35 + 0x20 + lVar30);
  local_178 = *puVar45;
  uStack_170 = puVar45[1];
  puVar45 = (undefined8 *)(lVar35 + 0x30 + lVar30);
  local_168 = *puVar45;
  uStack_160 = puVar45[1];
  puVar45 = (undefined8 *)(lVar35 + 0x40 + lVar30);
  local_158 = *puVar45;
  uStack_150 = puVar45[1];
  puVar45 = (undefined8 *)(lVar35 + 0x50 + lVar30);
  local_148 = *puVar45;
  uStack_140 = puVar45[1];
  local_138 = *(undefined8 *)(lVar32 + lVar30);
  uStack_130 = ((undefined8 *)(lVar32 + lVar30))[1];
  piVar34 = (int *)(lVar32 + 0x10 + lVar30);
  local_128 = *piVar34;
  iStack_124 = piVar34[1];
  iStack_120 = piVar34[2];
  iStack_11c = piVar34[3];
  puVar45 = (undefined8 *)(lVar32 + 0x20 + lVar30);
  local_118 = *puVar45;
  uStack_110 = puVar45[1];
  puVar45 = (undefined8 *)(lVar32 + 0x30 + lVar30);
  local_108 = *puVar45;
  uStack_100 = puVar45[1];
  puVar1 = (undefined4 *)(lVar32 + 0x40 + lVar30);
  local_f8 = *puVar1;
  uStack_f4 = puVar1[1];
  uStack_f0 = puVar1[2];
  uStack_ec = puVar1[3];
  puVar1 = (undefined4 *)(lVar32 + 0x50 + lVar30);
  local_e8 = *puVar1;
  uStack_e4 = puVar1[1];
  uStack_e0 = puVar1[2];
  uStack_dc = puVar1[3];
  if (-1 < local_188) {
    return;
  }
  if (-1 < local_128) {
    return;
  }
  FUN_144cb4a80(param_1,&local_838,local_198 >> 0x20);
  FUN_144cb4a80(param_1,&local_3c8,local_138._4_4_);
  FUN_144cb67e0(param_1,&local_138,&local_318,&local_398);
  cVar24 = FUN_145026ae0(&local_398,&local_838);
  if ((cVar24 != '\0') && (cVar24 = FUN_145026ae0(&local_318,&local_838), cVar24 != '\0')) {
    FUN_145026530(param_1,param_2,param_4);
    return;
  }
  if (param_3 == 0) {
    return;
  }
  FUN_144cb67e0(param_1,&local_198,&local_298,&local_218);
  local_5d8 = local_298;
  uStack_5d0 = uStack_290;
  local_5c8 = local_288;
  uStack_5c0 = uStack_280;
  local_5b8 = local_278;
  uStack_5b0 = uStack_270;
  local_598 = CONCAT44(uStack_234,local_238);
  lStack_590 = CONCAT44(uStack_22c,uStack_230);
  local_5a8 = local_268;
  uStack_5a0 = uStack_260;
  local_588 = local_228;
  uStack_580 = uStack_220;
  local_558 = local_218;
  uStack_550 = uStack_210;
  local_548 = local_208;
  uStack_540 = uStack_200;
  local_538 = local_1f8;
  uStack_530 = uStack_1f0;
  local_518 = CONCAT44(uStack_1b4,local_1b8);
  uStack_510 = CONCAT44(uStack_1ac,uStack_1b0);
  local_528 = local_1e8;
  uStack_520 = uStack_1e0;
  local_508 = local_1a8;
  uStack_500 = uStack_1a0;
  local_6b8 = local_318;
  uStack_6b0 = uStack_310;
  local_6a8 = local_308;
  uStack_6a0 = uStack_300;
  local_698 = local_2f8;
  uStack_690 = uStack_2f0;
  local_678 = local_2b8;
  uStack_674 = uStack_2b4;
  uStack_670 = uStack_2b0;
  uStack_66c = uStack_2ac;
  local_688 = local_2e8;
  uStack_680 = uStack_2e0;
  local_668 = local_2a8;
  uStack_660 = uStack_2a0;
  local_4d8 = local_398;
  uStack_4d0 = uStack_390;
  local_4b8 = CONCAT44(uStack_374,local_378);
  uStack_4b0 = CONCAT44(uStack_36c,uStack_370);
  local_4c8 = local_388;
  uStack_4c0 = uStack_380;
  local_4a8 = CONCAT44(uStack_364,local_368);
  uStack_4a0 = CONCAT44(uStack_35c,uStack_360);
  local_498 = CONCAT44(uStack_334,local_338);
  uStack_490 = CONCAT44(uStack_32c,uStack_330);
  local_488 = CONCAT44(uStack_324,local_328);
  uStack_480 = CONCAT44(uStack_31c,uStack_320);
  iVar26 = FUN_144d320f0(&local_5d8,&local_4d8);
  iVar27 = FUN_144d320f0(&local_558,&local_6b8);
  if (iVar26 < 1) {
    local_res8 = '\0';
    if (iVar26 < 0) {
      local_5d8 = local_4d8;
      uStack_5d0 = uStack_4d0;
      local_5c8 = local_4c8;
      uStack_5c0 = uStack_4c0;
      local_5b8 = local_4b8;
      uStack_5b0 = uStack_4b0;
      local_5a8 = local_4a8;
      uStack_5a0 = uStack_4a0;
      local_588 = local_488;
      uStack_580 = uStack_480;
      local_res8 = '\0';
      local_598 = local_498;
      lStack_590 = uStack_490;
    }
  }
  else {
    local_4d8 = local_5d8;
    uStack_4d0 = uStack_5d0;
    local_4c8 = local_5c8;
    uStack_4c0 = uStack_5c0;
    local_4b8 = local_5b8;
    uStack_4b0 = uStack_5b0;
    local_4a8 = local_5a8;
    uStack_4a0 = uStack_5a0;
    local_498 = local_598;
    uStack_490 = lStack_590;
    local_488 = local_588;
    uStack_480 = uStack_580;
    local_res8 = '\x01';
    local_5d8 = local_4d8;
    uStack_5d0 = uStack_4d0;
    local_5c8 = local_4c8;
    uStack_5c0 = uStack_4c0;
    local_5b8 = local_4b8;
    uStack_5b0 = uStack_4b0;
    local_5a8 = local_4a8;
    uStack_5a0 = uStack_4a0;
    local_588 = local_488;
    uStack_580 = uStack_480;
  }
  bVar42 = (byte)((uint)iVar26 >> 0x1f);
  bVar43 = (byte)((uint)iVar27 >> 0x1f);
  if (iVar27 < 0) {
    local_6b8 = local_558;
    uStack_6b0 = uStack_550;
    local_6a8 = local_548;
    uStack_6a0 = uStack_540;
    local_698 = local_538;
    uStack_690 = uStack_530;
    local_688 = local_528;
    uStack_680 = uStack_520;
    local_678 = (int)local_518;
    uStack_674 = local_518._4_4_;
    uStack_670 = (int)uStack_510;
    uStack_66c = uStack_510._4_4_;
    local_668 = local_508;
    uStack_660 = uStack_500;
  }
  else if (0 < iVar27) {
    local_558 = local_6b8;
    uStack_550 = uStack_6b0;
    local_548 = local_6a8;
    uStack_540 = uStack_6a0;
    local_538 = local_698;
    uStack_530 = uStack_690;
    local_528 = local_688;
    uStack_520 = uStack_680;
    local_518 = CONCAT44(uStack_674,local_678);
    uStack_510 = CONCAT44(uStack_66c,uStack_670);
    local_508 = local_668;
    uStack_500 = uStack_660;
  }
  local_9b8 = 0 < iVar27;
  if (iVar26 < 0) {
    if (iVar27 < 0) {
      cVar24 = FUN_144d32000(&local_4d8,&local_558);
      if (cVar24 == '\0') {
        return;
      }
      goto LAB_145027362;
    }
  }
  else {
LAB_145027362:
    if (((0 < iVar26) && (0 < iVar27)) &&
       (cVar24 = FUN_144d32000(&local_5d8,&local_6b8), cVar24 == '\0')) {
      return;
    }
  }
  puVar31 = &local_5d8;
  if (iVar26 < 1) {
    puVar31 = &local_4d8;
  }
  local_458 = *puVar31;
  uStack_450 = puVar31[1];
  local_448 = puVar31[2];
  uStack_440 = puVar31[3];
  local_438 = puVar31[4];
  uStack_430 = puVar31[5];
  local_428 = puVar31[6];
  uStack_420 = puVar31[7];
  puVar28 = &local_558;
  if (-1 < iVar27) {
    puVar28 = &local_6b8;
  }
  local_418 = puVar31[8];
  uStack_410 = puVar31[9];
  uVar41 = (longlong)local_828 >> 0x3f & uVar38;
  local_408 = puVar31[10];
  uStack_400 = puVar31[0xb];
  uVar36 = local_828 * uVar38;
  local_958 = *puVar28;
  uStack_950 = puVar28[1];
  local_948 = puVar28[2];
  uStack_940 = puVar28[3];
  local_938 = puVar28[4];
  uStack_930 = puVar28[5];
  local_928 = puVar28[6];
  uStack_920 = puVar28[7];
  local_918 = puVar28[8];
  uStack_910 = puVar28[9];
  local_908 = puVar28[10];
  uStack_900 = puVar28[0xb];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_828;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar38;
  uVar44 = local_820 - uVar36;
  local_8a8 = local_828;
  uVar29 = (local_818 - (SUB168(auVar3 * auVar5,8) - uVar41)) - (ulonglong)(local_820 < uVar36);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_828;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar38;
  local_8b8 = CONCAT44(uStack_834,local_838);
  uStack_8b0 = CONCAT44(uStack_82c,uStack_830);
  uVar39 = local_820 + uVar36;
  uVar38 = local_818 + (SUB168(auVar4 * auVar6,8) - uVar41) + (ulonglong)CARRY8(local_820,uVar36);
  local_9a8 = uVar39;
  uStack_9a0 = uVar38;
  local_8c8 = uVar29;
  uStack_8a0 = uVar39;
  uStack_898 = uVar38;
  cVar24 = FUN_145026cc0(&local_8b8,&local_3c8,&local_998);
  if (cVar24 != '\0') {
    local_6f8 = local_828;
    local_708 = CONCAT44(uStack_834,local_838);
    uStack_700 = CONCAT44(uStack_82c,uStack_830);
    uStack_6f0 = uVar44;
    uStack_6e8 = uVar29;
    cVar24 = FUN_145026cc0(&local_708,&local_3c8,&local_808);
    if (((cVar24 != '\0') &&
        (cVar24 = FUN_144cb9420(&iStack_180,&local_998,&local_658), cVar24 != '\0')) &&
       (cVar24 = FUN_144cb9420(&iStack_180,&local_808,&local_788), cVar24 != '\0')) {
      cVar24 = FUN_144d32000(&local_788,&local_658);
      uVar47 = uStack_5fc;
      uVar46 = uStack_600;
      uVar50 = (undefined4)local_618;
      uVar51 = local_618._4_4_;
      uVar10 = local_768._8_8_;
      uVar9 = local_768._0_8_;
      if (cVar24 == '\0') {
        uStack_8c0 = CONCAT44(uStack_5fc,uStack_600);
        uVar46 = (undefined4)local_788;
        uVar47 = local_788._4_4_;
        uVar48 = (undefined4)uStack_780;
        uVar49 = uStack_780._4_4_;
        uVar50 = (undefined4)local_748;
        uVar51 = local_748._4_4_;
        uVar52 = (undefined4)local_658;
        uVar53 = local_658._4_4_;
        uVar54 = (undefined4)uStack_650;
        uVar55 = uStack_650._4_4_;
        uVar56 = (undefined4)local_648;
        uVar57 = local_648._4_4_;
        uVar58 = (undefined4)uStack_640;
        uVar59 = uStack_640._4_4_;
        uVar60 = (undefined4)local_638;
        uVar61 = local_638._4_4_;
        uVar62 = (undefined4)uStack_630;
        uVar63 = uStack_630._4_4_;
        uVar64 = (undefined4)local_628;
        uVar65 = local_628._4_4_;
        uVar66 = (undefined4)uStack_620;
        uVar67 = uStack_620._4_4_;
        uVar38 = local_768._0_8_;
        uVar29 = local_768._8_8_;
      }
      else {
        lVar30 = CONCAT44(uStack_73c,uStack_740);
        uVar48 = (undefined4)local_608;
        uVar49 = local_608._4_4_;
        uVar56 = (undefined4)local_778;
        uVar57 = local_778._4_4_;
        uVar58 = (undefined4)uStack_770;
        uVar59 = uStack_770._4_4_;
        uVar60 = local_768._0_4_;
        uVar61 = local_768._4_4_;
        uVar62 = local_768._8_4_;
        uVar63 = local_768._12_4_;
        uVar64 = (undefined4)local_758;
        uVar65 = local_758._4_4_;
        uVar66 = (undefined4)uStack_750;
        uVar67 = uStack_750._4_4_;
        local_618 = local_748;
        uStack_8c0 = CONCAT44(uStack_72c,uStack_730);
        local_608 = CONCAT44(uStack_734,local_738);
        uStack_600 = uStack_730;
        uStack_5fc = uStack_72c;
        uVar36 = local_788;
        uVar39 = uStack_780;
        uVar41 = local_778;
        uVar44 = uStack_770;
        uVar2 = local_758;
        uVar7 = uStack_750;
        local_778 = local_648;
        uStack_770 = uStack_640;
        local_768._8_8_ = uStack_630;
        local_768._0_8_ = local_638;
        local_758 = local_628;
        uStack_750 = uStack_620;
        uStack_740 = (undefined4)uStack_610;
        uStack_73c = uStack_610._4_4_;
        local_738 = uVar48;
        uStack_734 = uVar49;
        uStack_730 = uVar46;
        uStack_72c = uVar47;
        uVar46 = (undefined4)local_658;
        uVar47 = local_658._4_4_;
        uVar48 = (undefined4)uStack_650;
        uVar49 = uStack_650._4_4_;
        uVar52 = (undefined4)local_788;
        uVar53 = local_788._4_4_;
        uVar54 = (undefined4)uStack_780;
        uVar55 = uStack_780._4_4_;
        uVar38 = local_638;
        uVar29 = uStack_630;
        local_788 = local_658;
        uStack_780 = uStack_650;
        local_658 = uVar36;
        uStack_650 = uVar39;
        local_648 = uVar41;
        uStack_640 = uVar44;
        local_638 = uVar9;
        uStack_630 = uVar10;
        local_628 = uVar2;
        uStack_620 = uVar7;
        uStack_610 = lVar30;
      }
      uVar18 = uStack_72c;
      uVar17 = uStack_730;
      uVar16 = uStack_734;
      uVar15 = local_738;
      uVar14 = uStack_73c;
      uVar13 = uStack_740;
      uVar44 = uStack_750;
      uVar41 = local_758;
      uVar39 = uStack_770;
      uVar36 = local_778;
      local_9a8 = local_618;
      uStack_9a0 = uStack_610;
      local_8c8 = local_608;
      cVar24 = FUN_144d32000(&local_658,&local_958);
      if (cVar24 == '\0') {
        return;
      }
      cVar24 = FUN_144d32000(&local_458,&local_788);
      if (cVar24 == '\0') {
        return;
      }
      cVar24 = FUN_144d32000(&local_458,&local_658);
      if (cVar24 != '\0') {
        bVar42 = 1;
        local_res8 = '\x01';
        local_598 = local_9a8;
        lStack_590 = uStack_9a0;
        local_588 = local_8c8;
        uStack_580 = uStack_8c0;
        local_498 = local_9a8;
        uStack_490 = uStack_9a0;
        local_488 = local_8c8;
        uStack_480 = uStack_8c0;
        local_5d8 = CONCAT44(uVar53,uVar52);
        uStack_5d0 = CONCAT44(uVar55,uVar54);
        local_5c8 = CONCAT44(uVar57,uVar56);
        uStack_5c0 = CONCAT44(uVar59,uVar58);
        local_5b8 = CONCAT44(uVar61,uVar60);
        uStack_5b0 = CONCAT44(uVar63,uVar62);
        local_5a8 = CONCAT44(uVar65,uVar64);
        uStack_5a0 = CONCAT44(uVar67,uVar66);
        local_4d8 = CONCAT44(uVar53,uVar52);
        uStack_4d0 = CONCAT44(uVar55,uVar54);
        local_4c8 = CONCAT44(uVar57,uVar56);
        uStack_4c0 = CONCAT44(uVar59,uVar58);
        local_4b8 = CONCAT44(uVar61,uVar60);
        uStack_4b0 = CONCAT44(uVar63,uVar62);
        local_4a8 = CONCAT44(uVar65,uVar64);
        uStack_4a0 = CONCAT44(uVar67,uVar66);
      }
      cVar24 = FUN_144d32000(&local_788,&local_958);
      if (cVar24 != '\0') {
        local_558 = CONCAT44(uVar47,uVar46);
        uStack_550 = CONCAT44(uVar49,uVar48);
        local_9b8 = true;
        bVar43 = 1;
        local_518 = CONCAT44(uVar51,uVar50);
        uStack_510 = CONCAT44(uVar14,uVar13);
        local_508 = CONCAT44(uVar16,uVar15);
        uStack_500 = CONCAT44(uVar18,uVar17);
        local_6b8 = CONCAT44(uVar47,uVar46);
        uStack_6b0 = CONCAT44(uVar49,uVar48);
        local_6a8 = uVar36;
        uStack_6a0 = uVar39;
        local_698 = uVar38;
        uStack_690 = uVar29;
        local_688 = uVar41;
        uStack_680 = uVar44;
        local_678 = uVar50;
        uStack_674 = uVar51;
        uStack_670 = uVar13;
        uStack_66c = uVar14;
        local_668 = CONCAT44(uVar16,uVar15);
        uStack_660 = CONCAT44(uVar18,uVar17);
        local_548 = uVar36;
        uStack_540 = uVar39;
        local_538 = uVar38;
        uStack_530 = uVar29;
        local_528 = uVar41;
        uStack_520 = uVar44;
        uStack_6e0 = CONCAT44(uStack_6e0._4_4_,(undefined4)uStack_6e0);
        local_6d8 = CONCAT44(local_6d8._4_4_,(undefined4)local_6d8);
        uStack_6d0 = CONCAT44(uStack_6d0._4_4_,(undefined4)uStack_6d0);
        local_6c8 = CONCAT44(local_6c8._4_4_,(undefined4)local_6c8);
        uStack_6c0 = CONCAT44(uStack_6c0._4_4_,(undefined4)uStack_6c0);
      }
      goto LAB_145027edf;
    }
  }
  uVar57 = uStack_324;
  uVar56 = local_328;
  uVar47 = uStack_32c;
  uVar46 = uStack_330;
  uVar51 = uStack_334;
  uVar50 = local_338;
  uVar36 = CONCAT44(uStack_32c,uStack_330);
  local_9a8 = local_3b0;
  uStack_9a0 = lStack_3a8;
  local_948 = local_388;
  uStack_940 = uStack_380;
  local_958 = local_398;
  uStack_950 = uStack_390;
  FUN_144cc6890(&local_938,local_3c0,&local_8b8,1);
  FUN_144cc6890(&local_958,local_3c8,&local_708,1);
  local_998 = local_708 + local_8b8;
  uStack_990 = uStack_700 + uStack_8b0 + (ulonglong)CARRY8(local_708,local_8b8);
  uVar29 = (ulonglong)
           (CARRY8(uStack_700,uStack_8b0) ||
           CARRY8(uStack_700 + uStack_8b0,(ulonglong)CARRY8(local_708,local_8b8)));
  local_988 = local_6f8 + local_8a8 + uVar29;
  uVar29 = (ulonglong)(CARRY8(local_6f8,local_8a8) || CARRY8(local_6f8 + local_8a8,uVar29));
  uStack_980 = uStack_6f0 + uStack_8a0 + uVar29;
  local_978 = uStack_6e8 + uStack_898 +
              (ulonglong)(CARRY8(uStack_6f0,uStack_8a0) || CARRY8(uStack_6f0 + uStack_8a0,uVar29));
  uStack_890 = CONCAT44(uVar51,uVar50);
  local_7e8._8_4_ = uVar50;
  local_7e8._0_8_ = local_978;
  local_7e8._12_4_ = uVar51;
  uStack_880 = CONCAT44(uVar57,uVar56);
  local_878 = uStack_320;
  uStack_874 = uStack_31c;
  local_7c8 = CONCAT44(uStack_31c,uStack_320);
  local_7d8 = CONCAT44(uVar47,uVar46);
  uStack_7d0 = CONCAT44(uVar57,uVar56);
  uStack_898 = local_978;
  uStack_888 = uVar36;
  local_808 = local_998;
  uStack_800 = uStack_990;
  local_7f8 = local_988;
  uStack_7f0 = uStack_980;
  FUN_144cc6970(local_7e8 + 8,&local_9a8,&local_8b8);
  uVar29 = local_8a8;
  uVar36 = uStack_8a0;
  uVar41 = uStack_898;
  if ((longlong)uStack_9a0 < 0) {
    uVar29 = local_8a8 - local_7e8._8_8_;
    uVar36 = (uStack_8a0 - local_7d8) - (ulonglong)(local_8a8 < (ulonglong)local_7e8._8_8_);
    uVar2 = (ulonglong)
            (uStack_8a0 < local_7d8 ||
            uStack_8a0 - local_7d8 < (ulonglong)(local_8a8 < (ulonglong)local_7e8._8_8_));
    uVar41 = (uStack_898 - uStack_7d0) - uVar2;
    uStack_890 = (uStack_890 - local_7c8) -
                 (ulonglong)(uStack_898 < uStack_7d0 || uStack_898 - uStack_7d0 < uVar2);
  }
  uVar33 = local_808 + local_8b8;
  lVar32 = uStack_800 + uStack_8b0 + (ulonglong)CARRY8(local_808,local_8b8);
  uVar2 = (ulonglong)
          (CARRY8(uStack_800,uStack_8b0) ||
          CARRY8(uStack_800 + uStack_8b0,(ulonglong)CARRY8(local_808,local_8b8)));
  lVar35 = local_7f8 + uVar29 + uVar2;
  uVar29 = (ulonglong)(CARRY8(local_7f8,uVar29) || CARRY8(local_7f8 + uVar29,uVar2));
  lVar40 = uStack_7f0 + uVar36 + uVar29;
  uVar7 = -uVar33;
  uVar2 = -lVar32;
  lVar30 = uVar2 - (uVar33 != 0);
  uVar2 = (ulonglong)(lVar32 != 0 || uVar2 < (uVar33 != 0));
  uVar8 = -lVar35;
  lVar32 = uVar8 - uVar2;
  uVar2 = (ulonglong)(lVar35 != 0 || uVar8 < uVar2);
  uVar8 = -lVar40;
  lVar35 = uVar8 - uVar2;
  lVar40 = -(ulonglong)(lVar40 != 0 || uVar8 < uVar2) -
           (local_7e8._0_8_ + uVar41 +
           (ulonglong)(CARRY8(uStack_7f0,uVar36) || CARRY8(uStack_7f0 + uVar36,uVar29)));
  local_7e8._0_8_ = lVar40;
  local_768._8_4_ = uVar50;
  local_768._0_8_ = lVar40;
  local_768._12_4_ = uVar51;
  local_998 = uVar7;
  uStack_990 = lVar30;
  local_988 = lVar32;
  uStack_980 = lVar35;
  local_978 = lVar40;
  local_788 = uVar7;
  uStack_780 = lVar30;
  local_778 = lVar32;
  uStack_770 = lVar35;
  FUN_144d19010(local_768 + 8,local_3b8,&local_8b8);
  uVar41 = (longlong)uStack_898 >> 0x3f;
  local_628 = (local_8b8 ^ uVar41) - uVar41;
  uVar29 = (ulonglong)((local_8b8 ^ uVar41) < uVar41);
  uVar36 = (uStack_8b0 ^ uVar41) - uVar41;
  uStack_620 = uVar36 - uVar29;
  local_7e8._8_8_ = local_628;
  local_7d8 = uStack_620;
  uVar29 = (ulonglong)((uStack_8b0 ^ uVar41) < uVar41 || uVar36 < uVar29);
  uVar36 = (local_8a8 ^ uVar41) - uVar41;
  local_618 = uVar36 - uVar29;
  uVar29 = (ulonglong)((local_8a8 ^ uVar41) < uVar41 || uVar36 < uVar29);
  uVar36 = (uStack_8a0 ^ uVar41) - uVar41;
  uStack_610 = uVar36 - uVar29;
  uStack_7d0 = local_618;
  local_7c8 = uStack_610;
  local_608 = ((uStack_898 ^ uVar41) - uVar41) -
              (ulonglong)((uStack_8a0 ^ uVar41) < uVar41 || uVar36 < uVar29);
  uStack_7c0 = local_608;
  if ((longlong)uStack_898 < 0) {
    local_8b8 = uVar33;
    uStack_8b0 = -lVar30 - (ulonglong)(uVar7 != 0);
    uVar29 = (ulonglong)(lVar30 != 0 || (ulonglong)-lVar30 < (ulonglong)(uVar7 != 0));
    local_8a8 = -lVar32 - uVar29;
    uVar29 = (ulonglong)(lVar32 != 0 || (ulonglong)-lVar32 < uVar29);
    uStack_8a0 = -lVar35 - uVar29;
    puVar31 = &local_8b8;
    uStack_898 = -(ulonglong)(lVar35 != 0 || (ulonglong)-lVar35 < uVar29) - lVar40;
  }
  else {
    local_708 = uVar7;
    uStack_700 = lVar30;
    puVar31 = &local_708;
    local_6f8 = lVar32;
    uStack_6f0 = lVar35;
    uStack_6e8 = lVar40;
  }
  local_708 = *puVar31;
  uStack_700 = puVar31[1];
  local_6f8 = puVar31[2];
  uStack_6f0 = puVar31[3];
  uStack_6e8 = puVar31[4];
  local_7e8._8_4_ = (undefined4)local_628;
  local_7e8._12_4_ = (undefined4)(local_628 >> 0x20);
  local_7e8._0_8_ = puVar31[4];
  local_998 = local_628;
  uStack_990 = uStack_620;
  local_988 = local_618;
  uStack_980 = uStack_610;
  local_978 = local_608;
  uStack_6e0 = local_628;
  local_6c8 = uStack_610;
  uStack_6c0 = local_608;
  local_6d8 = uStack_620;
  uStack_6d0 = local_618;
  FUN_1450290e0(&local_708,local_828,&local_8b8,1);
  uVar47 = uStack_32c;
  uVar46 = uStack_330;
  uVar51 = uStack_334;
  uVar50 = local_338;
  local_958 = local_398;
  uStack_950 = uStack_390;
  local_948 = local_388;
  uStack_940 = uStack_380;
  uVar36 = CONCAT44(uStack_32c,uStack_330);
  local_658 = local_8b8;
  uStack_650 = uStack_8b0;
  local_648 = local_8a8;
  uStack_640 = uStack_8a0;
  local_638 = uStack_898;
  uStack_630 = uStack_890;
  FUN_144cc6890(&local_938,CONCAT44(uStack_82c,uStack_830),&local_708,1);
  FUN_144cc6890(&local_958,CONCAT44(uStack_834,local_838),&local_8b8,1);
  local_998 = local_8b8 + local_708;
  uStack_990 = uStack_8b0 + uStack_700 + (ulonglong)CARRY8(local_8b8,local_708);
  uVar29 = (ulonglong)
           (CARRY8(uStack_8b0,uStack_700) ||
           CARRY8(uStack_8b0 + uStack_700,(ulonglong)CARRY8(local_8b8,local_708)));
  local_988 = local_8a8 + local_6f8 + uVar29;
  uVar29 = (ulonglong)(CARRY8(local_8a8,local_6f8) || CARRY8(local_8a8 + local_6f8,uVar29));
  uStack_980 = uStack_8a0 + uStack_6f0 + uVar29;
  local_978 = uStack_898 + uStack_6e8 +
              (ulonglong)(CARRY8(uStack_8a0,uStack_6f0) || CARRY8(uStack_8a0 + uStack_6f0,uVar29));
  local_7e8._8_4_ = uVar50;
  local_7e8._0_8_ = local_978;
  local_7e8._12_4_ = uVar51;
  local_768._8_4_ = uVar50;
  local_768._0_8_ = local_978;
  local_768._12_4_ = uVar51;
  local_758 = CONCAT44(uVar47,uVar46);
  uStack_750 = CONCAT44(uStack_324,local_328);
  local_7d8 = uVar36;
  uStack_7d0 = CONCAT44(uStack_324,local_328);
  local_788 = local_998;
  uStack_780 = uStack_990;
  local_778 = local_988;
  uStack_770 = uStack_980;
  FUN_1450284e0(&local_458,&local_788,&local_658);
  uVar23 = uStack_400;
  uVar22 = local_408;
  uVar21 = uStack_410;
  uVar20 = local_418;
  uVar19 = uStack_420;
  uVar33 = local_428;
  uVar8 = uStack_430;
  uVar7 = local_438;
  uVar2 = uStack_440;
  uVar41 = local_448;
  uVar36 = uStack_450;
  uVar29 = local_458;
  local_9a8 = -uVar44;
  uStack_9a0 = -(ulonglong)(uVar44 != 0) - local_8c8;
  local_958 = local_458;
  uStack_950 = uStack_450;
  local_948 = local_448;
  uStack_940 = uStack_440;
  local_938 = local_438;
  uStack_930 = uStack_430;
  local_928 = local_428;
  uStack_920 = uStack_420;
  local_918 = local_418;
  uStack_910 = uStack_410;
  local_908 = local_408;
  uStack_900 = uStack_400;
  local_8f8 = local_3f8;
  uStack_8f0 = uStack_3f0;
  local_8e8 = local_3e8;
  uStack_8e0 = uStack_3e0;
  local_8d8 = local_3d8;
  cVar24 = FUN_1450286b0(&local_958,&local_9a8);
  if (cVar24 == '\0') {
    return;
  }
  local_9a8 = -uVar39;
  uStack_9a0 = -(ulonglong)(uVar39 != 0) - uVar38;
  local_458 = uVar29;
  uStack_450 = uVar36;
  local_448 = uVar41;
  uStack_440 = uVar2;
  local_438 = uVar7;
  uStack_430 = uVar8;
  local_428 = uVar33;
  uStack_420 = uVar19;
  local_418 = uVar20;
  uStack_410 = uVar21;
  local_408 = uVar22;
  uStack_400 = uVar23;
  cVar24 = FUN_1450287e0(&local_458,&local_9a8);
  if (cVar24 == '\0') {
    return;
  }
LAB_145027edf:
  if (bVar42 == 0) {
    puVar31 = &local_458;
    local_458 = local_298;
    uStack_450 = uStack_290;
    local_448 = local_288;
    uStack_440 = uStack_280;
    local_438 = local_278;
    uStack_430 = uStack_270;
    local_428 = local_268;
    uStack_420 = uStack_260;
    local_418 = local_258;
    uStack_410 = uStack_250;
    local_408 = local_248;
    uStack_400 = uStack_240;
    local_3e8 = local_228;
    uStack_3e0 = uStack_220;
  }
  else {
    FUN_144cb9950(&local_5d8,&local_958);
    local_658 = local_958;
    uStack_650 = uStack_950;
    local_648 = local_948;
    uStack_640 = uStack_940;
    local_638 = local_938;
    uStack_630 = uStack_930;
    local_628 = local_928;
    uStack_620 = uStack_920;
    local_5f8 = (undefined4)local_918;
    uStack_5f4 = local_918._4_4_;
    uStack_5f0 = (undefined4)uStack_910;
    uStack_5ec = uStack_910._4_4_;
    local_5e8 = (undefined4)local_908;
    uStack_5e4 = local_908._4_4_;
    uStack_5e0 = (undefined4)uStack_900;
    uStack_5dc = uStack_900._4_4_;
    FUN_144cb95e0(&local_958,&local_838,&local_618);
    puVar31 = &local_658;
  }
  if (local_9b8 == false) {
    puVar45 = &local_5d8;
    local_5d8 = local_218;
    uStack_5d0 = uStack_210;
    local_5c8 = local_208;
    uStack_5c0 = uStack_200;
    local_5b8 = local_1f8;
    uStack_5b0 = uStack_1f0;
    local_5a8 = local_1e8;
    uStack_5a0 = uStack_1e0;
    local_598 = local_1d8;
    lStack_590 = lStack_1d0;
    local_588 = local_1c8;
    uStack_580 = uStack_1c0;
    local_578 = local_1b8;
    uStack_574 = uStack_1b4;
    uStack_570 = uStack_1b0;
    uStack_56c = uStack_1ac;
    local_568 = local_1a8;
    uStack_560 = uStack_1a0;
  }
  else {
    FUN_144cb9950(&local_558,&local_958);
    local_788 = local_958;
    uStack_780 = uStack_950;
    local_778 = local_948;
    uStack_770 = uStack_940;
    local_768._8_8_ = uStack_930;
    local_768._0_8_ = local_938;
    local_758 = local_928;
    uStack_750 = uStack_920;
    local_728 = (undefined4)local_918;
    uStack_724 = local_918._4_4_;
    uStack_720 = (undefined4)uStack_910;
    uStack_71c = uStack_910._4_4_;
    local_718 = (undefined4)local_908;
    uStack_714 = local_908._4_4_;
    uStack_710 = (undefined4)uStack_900;
    uStack_70c = uStack_900._4_4_;
    FUN_144cb95e0(&local_958,&local_838,&local_748);
    puVar45 = &local_788;
  }
  if (local_res8 == '\0') {
    puVar28 = &local_558;
    local_558 = local_398;
    uStack_550 = uStack_390;
    local_538 = CONCAT44(uStack_374,local_378);
    uStack_530 = CONCAT44(uStack_36c,uStack_370);
    local_548 = local_388;
    uStack_540 = uStack_380;
    local_528 = CONCAT44(uStack_364,local_368);
    uStack_520 = CONCAT44(uStack_35c,uStack_360);
    local_518 = local_358;
    uStack_510 = uStack_350;
    local_508 = local_348;
    uStack_500 = uStack_340;
    local_4f8 = local_338;
    uStack_4f4 = uStack_334;
    uStack_4f0 = uStack_330;
    uStack_4ec = uStack_32c;
  }
  else {
    FUN_144cb9950(&local_4d8,&local_958);
    local_808 = local_958;
    uStack_800 = uStack_950;
    local_7f8 = local_948;
    uStack_7f0 = uStack_940;
    local_7e8._8_8_ = uStack_930;
    local_7e8._0_8_ = local_938;
    local_7d8 = local_928;
    uStack_7d0 = uStack_920;
    local_7a8 = (undefined4)local_918;
    uStack_7a4 = local_918._4_4_;
    uStack_7a0 = (undefined4)uStack_910;
    uStack_79c = uStack_910._4_4_;
    local_798 = (undefined4)local_908;
    uStack_794 = local_908._4_4_;
    uStack_790 = (undefined4)uStack_900;
    uStack_78c = uStack_900._4_4_;
    FUN_144cb95e0(&local_958,&local_3c8,&local_7c8);
    puVar28 = &local_808;
  }
  if (bVar43 == 0) {
    puVar37 = &local_4d8;
    local_4d8 = local_318;
    uStack_4d0 = uStack_310;
    local_4c8 = local_308;
    uStack_4c0 = uStack_300;
    local_4b8 = local_2f8;
    uStack_4b0 = uStack_2f0;
    local_4a8 = local_2e8;
    uStack_4a0 = uStack_2e0;
    local_498 = local_2d8;
    uStack_490 = lStack_2d0;
    local_488 = local_2c8;
    uStack_480 = uStack_2c0;
    local_478 = local_2b8;
    uStack_474 = uStack_2b4;
    uStack_470 = uStack_2b0;
    uStack_46c = uStack_2ac;
    local_468 = local_2a8;
    uStack_460 = uStack_2a0;
  }
  else {
    FUN_144cb9950(&local_6b8,&local_958);
    local_8b8 = local_958;
    uStack_8b0 = uStack_950;
    local_8a8 = local_948;
    uStack_8a0 = uStack_940;
    uStack_898 = local_938;
    uStack_890 = uStack_930;
    uStack_888 = local_928;
    uStack_880 = uStack_920;
    local_858 = (undefined4)local_918;
    uStack_854 = local_918._4_4_;
    uStack_850 = (undefined4)uStack_910;
    uStack_84c = uStack_910._4_4_;
    local_848 = (undefined4)local_908;
    uStack_844 = local_908._4_4_;
    uStack_840 = (undefined4)uStack_900;
    uStack_83c = uStack_900._4_4_;
    FUN_144cb95e0(&local_958,&local_3c8,&local_878);
    puVar37 = &local_8b8;
  }
  iVar26 = (int)param_4[1] + 1;
  local_8c8 = CONCAT44(local_8c8._4_4_,iVar26);
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar26) {
    FUN_147e6062a(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar26);
  }
  uVar38 = *puVar31;
  uVar29 = puVar31[1];
  uVar36 = puVar31[2];
  uVar39 = puVar31[3];
  piVar34 = (int *)((longlong)(int)param_4[1] * 0x220 + *param_4);
  *(undefined4 *)(param_4 + 1) = (undefined4)local_8c8;
  *(ulonglong *)(piVar34 + 2) = uVar38;
  *(ulonglong *)(piVar34 + 4) = uVar29;
  *piVar34 = (int)param_2;
  uVar38 = puVar31[4];
  uVar29 = puVar31[5];
  *(ulonglong *)(piVar34 + 6) = uVar36;
  *(ulonglong *)(piVar34 + 8) = uVar39;
  uVar36 = puVar31[6];
  uVar39 = puVar31[7];
  *(ulonglong *)(piVar34 + 10) = uVar38;
  *(ulonglong *)(piVar34 + 0xc) = uVar29;
  uVar38 = puVar31[8];
  uVar29 = puVar31[9];
  *(ulonglong *)(piVar34 + 0xe) = uVar36;
  *(ulonglong *)(piVar34 + 0x10) = uVar39;
  uVar36 = puVar31[10];
  uVar39 = puVar31[0xb];
  *(ulonglong *)(piVar34 + 0x12) = uVar38;
  *(ulonglong *)(piVar34 + 0x14) = uVar29;
  uVar38 = puVar31[0xc];
  uVar29 = puVar31[0xd];
  *(ulonglong *)(piVar34 + 0x16) = uVar36;
  *(ulonglong *)(piVar34 + 0x18) = uVar39;
  uVar36 = puVar31[0xe];
  uVar39 = puVar31[0xf];
  *(ulonglong *)(piVar34 + 0x1a) = uVar38;
  *(ulonglong *)(piVar34 + 0x1c) = uVar29;
  uVar9 = *puVar45;
  uVar10 = puVar45[1];
  *(ulonglong *)(piVar34 + 0x1e) = uVar36;
  *(ulonglong *)(piVar34 + 0x20) = uVar39;
  uVar11 = puVar45[2];
  uVar12 = puVar45[3];
  *(undefined8 *)(piVar34 + 0x22) = uVar9;
  *(undefined8 *)(piVar34 + 0x24) = uVar10;
  uVar9 = puVar45[4];
  uVar10 = puVar45[5];
  *(undefined8 *)(piVar34 + 0x26) = uVar11;
  *(undefined8 *)(piVar34 + 0x28) = uVar12;
  uVar11 = puVar45[6];
  uVar12 = puVar45[7];
  *(undefined8 *)(piVar34 + 0x2a) = uVar9;
  *(undefined8 *)(piVar34 + 0x2c) = uVar10;
  uVar9 = puVar45[8];
  uVar10 = puVar45[9];
  *(undefined8 *)(piVar34 + 0x2e) = uVar11;
  *(undefined8 *)(piVar34 + 0x30) = uVar12;
  uVar11 = puVar45[10];
  uVar12 = puVar45[0xb];
  *(undefined8 *)(piVar34 + 0x32) = uVar9;
  *(undefined8 *)(piVar34 + 0x34) = uVar10;
  uVar9 = puVar45[0xc];
  uVar10 = puVar45[0xd];
  *(undefined8 *)(piVar34 + 0x36) = uVar11;
  *(undefined8 *)(piVar34 + 0x38) = uVar12;
  uVar11 = puVar45[0xe];
  uVar12 = puVar45[0xf];
  *(undefined8 *)(piVar34 + 0x3a) = uVar9;
  *(undefined8 *)(piVar34 + 0x3c) = uVar10;
  uVar9 = *puVar37;
  uVar10 = puVar37[1];
  *(undefined8 *)(piVar34 + 0x3e) = uVar11;
  *(undefined8 *)(piVar34 + 0x40) = uVar12;
  *(bool *)((longlong)piVar34 + 0x109) = local_9b8;
  uVar11 = puVar37[2];
  uVar12 = puVar37[3];
  *(byte *)(piVar34 + 0x42) = bVar42;
  *(undefined8 *)(piVar34 + 0x46) = uVar9;
  *(undefined8 *)(piVar34 + 0x48) = uVar10;
  piVar34[0x44] = iVar25;
  uVar9 = puVar37[4];
  uVar10 = puVar37[5];
  *(undefined8 *)(piVar34 + 0x4a) = uVar11;
  *(undefined8 *)(piVar34 + 0x4c) = uVar12;
  uVar11 = puVar37[6];
  uVar12 = puVar37[7];
  *(undefined8 *)(piVar34 + 0x4e) = uVar9;
  *(undefined8 *)(piVar34 + 0x50) = uVar10;
  uVar9 = puVar37[8];
  uVar10 = puVar37[9];
  *(undefined8 *)(piVar34 + 0x52) = uVar11;
  *(undefined8 *)(piVar34 + 0x54) = uVar12;
  uVar11 = puVar37[10];
  uVar12 = puVar37[0xb];
  *(undefined8 *)(piVar34 + 0x56) = uVar9;
  *(undefined8 *)(piVar34 + 0x58) = uVar10;
  uVar9 = puVar37[0xc];
  uVar10 = puVar37[0xd];
  *(undefined8 *)(piVar34 + 0x5a) = uVar11;
  *(undefined8 *)(piVar34 + 0x5c) = uVar12;
  uVar11 = puVar37[0xe];
  uVar12 = puVar37[0xf];
  *(undefined8 *)(piVar34 + 0x5e) = uVar9;
  *(undefined8 *)(piVar34 + 0x60) = uVar10;
  uVar38 = *puVar28;
  uVar29 = puVar28[1];
  *(undefined8 *)(piVar34 + 0x62) = uVar11;
  *(undefined8 *)(piVar34 + 100) = uVar12;
  uVar36 = puVar28[2];
  uVar39 = puVar28[3];
  *(ulonglong *)(piVar34 + 0x66) = uVar38;
  *(ulonglong *)(piVar34 + 0x68) = uVar29;
  uVar38 = puVar28[4];
  uVar29 = puVar28[5];
  *(ulonglong *)(piVar34 + 0x6a) = uVar36;
  *(ulonglong *)(piVar34 + 0x6c) = uVar39;
  uVar36 = puVar28[6];
  uVar39 = puVar28[7];
  *(ulonglong *)(piVar34 + 0x6e) = uVar38;
  *(ulonglong *)(piVar34 + 0x70) = uVar29;
  uVar38 = puVar28[8];
  uVar29 = puVar28[9];
  *(ulonglong *)(piVar34 + 0x72) = uVar36;
  *(ulonglong *)(piVar34 + 0x74) = uVar39;
  uVar36 = puVar28[10];
  uVar39 = puVar28[0xb];
  *(ulonglong *)(piVar34 + 0x76) = uVar38;
  *(ulonglong *)(piVar34 + 0x78) = uVar29;
  uVar38 = puVar28[0xc];
  uVar29 = puVar28[0xd];
  *(ulonglong *)(piVar34 + 0x7a) = uVar36;
  *(ulonglong *)(piVar34 + 0x7c) = uVar39;
  uVar36 = puVar28[0xe];
  uVar39 = puVar28[0xf];
  *(ulonglong *)(piVar34 + 0x7e) = uVar38;
  *(ulonglong *)(piVar34 + 0x80) = uVar29;
  *(ulonglong *)(piVar34 + 0x82) = uVar36;
  *(ulonglong *)(piVar34 + 0x84) = uVar39;
  *(byte *)(piVar34 + 0x86) = bVar43;
  *(char *)((longlong)piVar34 + 0x219) = local_res8;
  return;
}



// FUNCTION 1450284e0 FUN_1450284e0 body=464 status=ok
// SIG undefined FUN_1450284e0(void)

void FUN_1450284e0(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1450291f0(param_2 + 0x28,param_3,&local_e8);
  uVar5 = local_b8;
  uVar7 = local_b0;
  uVar8 = local_a8;
  if (*(longlong *)(param_3 + 0x28) < 0) {
    uVar5 = local_b8 - *(ulonglong *)(param_2 + 0x28);
    uVar8 = (ulonglong)(local_b8 < *(ulonglong *)(param_2 + 0x28));
    uVar3 = local_b0 - *(ulonglong *)(param_2 + 0x30);
    uVar7 = uVar3 - uVar8;
    uVar3 = (ulonglong)(local_b0 < *(ulonglong *)(param_2 + 0x30) || uVar3 < uVar8);
    uVar4 = local_a8 - *(ulonglong *)(param_2 + 0x38);
    uVar8 = uVar4 - uVar3;
    local_a0 = (local_a0 - *(longlong *)(param_2 + 0x40)) -
               (ulonglong)(local_a8 < *(ulonglong *)(param_2 + 0x38) || uVar4 < uVar3);
  }
  FUN_144d202a0(param_3 + 0x30,param_2,&local_138);
  uVar3 = uStack_110;
  uVar4 = local_108;
  uVar6 = uStack_100;
  if (*(longlong *)(param_2 + 0x20) < 0) {
    uVar3 = uStack_110 - *(ulonglong *)(param_3 + 0x30);
    uVar6 = (ulonglong)(uStack_110 < *(ulonglong *)(param_3 + 0x30));
    uVar1 = local_108 - *(ulonglong *)(param_3 + 0x38);
    uVar4 = uVar1 - uVar6;
    uVar1 = (ulonglong)(local_108 < *(ulonglong *)(param_3 + 0x38) || uVar1 < uVar6);
    uVar2 = uStack_100 - *(ulonglong *)(param_3 + 0x40);
    uVar6 = uVar2 - uVar1;
    uVar1 = (ulonglong)(uStack_100 < *(ulonglong *)(param_3 + 0x40) || uVar2 < uVar1);
    bVar9 = local_f8 < *(ulonglong *)(param_3 + 0x48);
    uVar2 = local_f8 - *(ulonglong *)(param_3 + 0x48);
    local_f8 = uVar2 - uVar1;
    local_f0 = (local_f0 - *(longlong *)(param_3 + 0x50)) - (ulonglong)(bVar9 || uVar2 < uVar1);
  }
  local_98 = local_138 + local_e8;
  lStack_90 = uStack_130 + uStack_e0 + (ulonglong)CARRY8(local_138,local_e8);
  uVar1 = (ulonglong)
          (CARRY8(uStack_130,uStack_e0) ||
          CARRY8(uStack_130 + uStack_e0,(ulonglong)CARRY8(local_138,local_e8)));
  local_88 = local_128 + local_d8 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_128,local_d8) || CARRY8(local_128 + local_d8,uVar1));
  lStack_80 = uStack_120 + uStack_d0 + uVar1;
  uVar1 = (ulonglong)(CARRY8(uStack_120,uStack_d0) || CARRY8(uStack_120 + uStack_d0,uVar1));
  local_78 = local_118 + local_c8 + uVar1;
  uVar1 = (ulonglong)(CARRY8(local_118,local_c8) || CARRY8(local_118 + local_c8,uVar1));
  lStack_70 = uVar3 + local_c0 + uVar1;
  local_c8 = *(undefined8 *)(param_3 + 0x50);
  uVar3 = (ulonglong)(CARRY8(uVar3,local_c0) || CARRY8(uVar3 + local_c0,uVar1));
  local_68 = uVar4 + uVar5 + uVar3;
  local_48 = *(undefined4 *)(param_2 + 0x28);
  uStack_44 = *(undefined4 *)(param_2 + 0x2c);
  uStack_40 = *(undefined4 *)(param_2 + 0x30);
  uStack_3c = *(undefined4 *)(param_2 + 0x34);
  uVar5 = (ulonglong)(CARRY8(uVar4,uVar5) || CARRY8(uVar4 + uVar5,uVar3));
  lStack_60 = uVar6 + uVar7 + uVar5;
  local_38 = *(undefined4 *)(param_2 + 0x38);
  uStack_34 = *(undefined4 *)(param_2 + 0x3c);
  uStack_30 = *(undefined4 *)(param_2 + 0x40);
  uStack_2c = *(undefined4 *)(param_2 + 0x44);
  local_58 = local_f8 + uVar8 + (ulonglong)(CARRY8(uVar6,uVar7) || CARRY8(uVar6 + uVar7,uVar5));
  local_e8 = *(ulonglong *)(param_3 + 0x30);
  uStack_e0 = *(undefined8 *)(param_3 + 0x38);
  local_d8 = *(undefined8 *)(param_3 + 0x40);
  uStack_d0 = *(undefined8 *)(param_3 + 0x48);
  FUN_144cd87b0(&local_48,&local_e8,&local_138);
  *param_1 = local_98;
  param_1[1] = lStack_90;
  param_1[2] = local_88;
  param_1[3] = lStack_80;
  param_1[4] = local_78;
  param_1[5] = lStack_70;
  param_1[9] = local_138;
  param_1[10] = uStack_130;
  param_1[0xb] = local_128;
  param_1[0xc] = uStack_120;
  param_1[6] = local_68;
  param_1[7] = lStack_60;
  param_1[0xd] = local_118;
  param_1[0xe] = uStack_110;
  param_1[8] = local_58;
  param_1[0xf] = local_108;
  param_1[0x10] = uStack_100;
  return;
}



// FUNCTION 1450286b0 FUN_1450286b0 body=297 status=ok
// SIG undefined FUN_1450286b0(void)

bool FUN_1450286b0(ulonglong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_e8 = *param_1;
  uStack_e0 = param_1[1];
  local_d8 = param_1[2];
  uStack_d0 = param_1[3];
  local_a8 = (undefined4)param_1[8];
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_a0 = (undefined4)param_1[9];
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_c8 = param_1[4];
  uStack_c0 = param_1[5];
  local_b8 = param_1[6];
  uStack_b0 = param_1[7];
  local_98 = param_1[10];
  uStack_90 = param_1[0xb];
  local_88 = param_1[0xc];
  uStack_80 = param_1[0xd];
  local_78 = param_1[0xe];
  uStack_70 = param_1[0xf];
  local_68 = param_1[0x10];
  local_f8 = *param_2;
  uStack_f4 = param_2[1];
  uStack_f0 = param_2[2];
  iStack_ec = param_2[3];
  local_18 = local_a8;
  uStack_14 = uStack_a4;
  FUN_1450293e0(&uStack_a0,&local_f8,&local_148);
  if (iStack_ec < 0) {
    bVar2 = local_138 < CONCAT44(uStack_9c,uStack_a0);
    local_138 = local_138 - CONCAT44(uStack_9c,uStack_a0);
    uVar1 = (ulonglong)bVar2;
    bVar2 = local_130 < local_98;
    local_98 = local_130 - local_98;
    local_130 = local_98 - uVar1;
    uVar1 = (ulonglong)(bVar2 || local_98 < uVar1);
    bVar2 = local_128 < uStack_90;
    uStack_90 = local_128 - uStack_90;
    local_128 = uStack_90 - uVar1;
    uVar1 = (ulonglong)(bVar2 || uStack_90 < uVar1);
    bVar2 = local_120 < local_88;
    local_88 = local_120 - local_88;
    local_120 = local_88 - uVar1;
    uVar1 = (ulonglong)(bVar2 || local_88 < uVar1);
    bVar2 = local_118 < uStack_80;
    uStack_80 = local_118 - uStack_80;
    local_118 = uStack_80 - uVar1;
    uVar1 = (ulonglong)(bVar2 || uStack_80 < uVar1);
    bVar2 = local_110 < local_78;
    local_78 = local_110 - local_78;
    local_110 = local_78 - uVar1;
    local_108 = (local_108 - uStack_70) - (ulonglong)(bVar2 || local_78 < uVar1);
  }
  return -1 < (longlong)
              ((local_108 - CONCAT44(uStack_14,local_18)) -
              (ulonglong)
              (local_110 < param_1[7] ||
              local_110 - param_1[7] <
              (ulonglong)
              (local_118 < param_1[6] ||
              local_118 - param_1[6] <
              (ulonglong)
              (local_120 < param_1[5] ||
              local_120 - param_1[5] <
              (ulonglong)
              (local_128 < param_1[4] ||
              local_128 - param_1[4] <
              (ulonglong)
              (local_130 < param_1[3] ||
              local_130 - param_1[3] <
              (ulonglong)
              (local_138 < param_1[2] ||
              local_138 - param_1[2] <
              (ulonglong)
              (local_140 < param_1[1] || local_140 - param_1[1] < (ulonglong)(local_148 < *param_1))
              )))))));
}



// FUNCTION 1450287e0 FUN_1450287e0 body=297 status=ok
// SIG undefined FUN_1450287e0(void)

undefined8 FUN_1450287e0(ulonglong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 local_18;
  longlong lStack_10;
  
  local_18 = *param_2;
  lStack_10 = param_2[1];
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  local_98 = param_1[2];
  uStack_90 = param_1[3];
  local_88 = param_1[4];
  uStack_80 = param_1[5];
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_68 = param_1[8];
  uStack_60 = param_1[9];
  local_58 = param_1[10];
  uStack_50 = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_40 = param_1[0xd];
  local_38 = (undefined4)param_1[0xe];
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0x74);
  uStack_30 = (undefined4)param_1[0xf];
  uStack_2c = *(undefined4 *)((longlong)param_1 + 0x7c);
  local_28 = param_1[0x10];
  FUN_1450293e0(&uStack_60,&local_18,&local_f8);
  if (lStack_10 < 0) {
    bVar4 = local_e8 < uStack_60;
    local_e8 = local_e8 - uStack_60;
    bVar5 = local_e0 < local_58;
    local_58 = local_e0 - local_58;
    local_e0 = local_58 - bVar4;
    uVar1 = (ulonglong)(bVar5 || local_58 < bVar4);
    bVar4 = local_d8 < uStack_50;
    uStack_50 = local_d8 - uStack_50;
    local_d8 = uStack_50 - uVar1;
    uVar1 = (ulonglong)(bVar4 || uStack_50 < uVar1);
    bVar4 = local_d0 < local_48;
    local_48 = local_d0 - local_48;
    local_d0 = local_48 - uVar1;
    uVar1 = (ulonglong)(bVar4 || local_48 < uVar1);
    bVar4 = local_c8 < uStack_40;
    uStack_40 = local_c8 - uStack_40;
    local_c8 = uStack_40 - uVar1;
    uVar1 = (ulonglong)(bVar4 || uStack_40 < uVar1);
    bVar4 = local_c0 < CONCAT44(uStack_34,local_38);
    uVar2 = local_c0 - CONCAT44(uStack_34,local_38);
    local_c0 = uVar2 - uVar1;
    local_b8 = (local_b8 - CONCAT44(uStack_2c,uStack_30)) - (ulonglong)(bVar4 || uVar2 < uVar1);
  }
  lVar3 = (local_68 - local_b8) -
          (ulonglong)
          (uStack_70 < local_c0 ||
          uStack_70 - local_c0 <
          (ulonglong)
          (local_78 < local_c8 ||
          local_78 - local_c8 <
          (ulonglong)
          (uStack_80 < local_d0 ||
          uStack_80 - local_d0 <
          (ulonglong)
          (local_88 < local_d8 ||
          local_88 - local_d8 <
          (ulonglong)
          (uStack_90 < local_e0 ||
          uStack_90 - local_e0 <
          (ulonglong)
          (local_98 < local_e8 ||
          local_98 - local_e8 <
          (ulonglong)
          (uStack_a0 < local_f0 || uStack_a0 - local_f0 < (ulonglong)(local_a8 < local_f8))))))));
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),-1 < lVar3);
}



// FUNCTION 145028910 FUN_145028910 body=192 status=ok
// SIG undefined FUN_145028910(void)

longlong * FUN_145028910(longlong *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  puVar6 = (ulonglong *)FUN_144d18cc0(local_88,param_2 + 0x20);
  puVar7 = (ulonglong *)FUN_144d18cc0(local_48,param_2,param_3 + 0x20);
  uVar1 = *puVar7;
  uVar2 = *puVar6;
  *param_1 = uVar1 - *puVar6;
  uVar3 = puVar7[1];
  uVar4 = (ulonglong)(uVar1 < uVar2);
  uVar1 = puVar6[1];
  uVar5 = uVar3 - puVar6[1];
  param_1[1] = uVar5 - uVar4;
  uVar2 = puVar7[2];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = puVar6[2];
  uVar5 = uVar2 - puVar6[2];
  param_1[2] = uVar5 - uVar4;
  uVar3 = puVar7[3];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = puVar6[3];
  uVar5 = uVar3 - puVar6[3];
  param_1[3] = uVar5 - uVar4;
  uVar2 = puVar7[4];
  uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = puVar6[4];
  uVar5 = uVar2 - puVar6[4];
  param_1[4] = uVar5 - uVar4;
  uVar3 = puVar7[5];
  uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
  uVar1 = puVar6[5];
  uVar5 = uVar3 - puVar6[5];
  param_1[5] = uVar5 - uVar4;
  uVar2 = puVar7[6];
  uVar3 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
  uVar1 = puVar6[6];
  uVar4 = uVar2 - puVar6[6];
  param_1[6] = uVar4 - uVar3;
  param_1[7] = (puVar7[7] - puVar6[7]) - (ulonglong)(uVar2 < uVar1 || uVar4 < uVar3);
  return param_1;
}



// FUNCTION 1450289d0 FUN_1450289d0 body=189 status=ok
// SIG undefined FUN_1450289d0(void)

undefined8 * FUN_1450289d0(undefined8 *param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong local_18;
  
  FUN_144d19420(param_3,param_2,&local_68);
  if (*(longlong *)(param_2 + 0x38) < 0) {
    bVar2 = local_28 < *param_3;
    local_28 = local_28 - *param_3;
    bVar3 = local_20 < param_3[1];
    uVar1 = local_20 - param_3[1];
    local_20 = uVar1 - bVar2;
    local_18 = (local_18 - param_3[2]) - (ulonglong)(bVar3 || uVar1 < bVar2);
  }
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  param_1[3] = local_50;
  param_1[4] = local_48;
  param_1[5] = local_40;
  param_1[6] = local_38;
  param_1[7] = local_30;
  param_1[8] = local_28;
  param_1[9] = local_20;
  param_1[10] = local_18;
  return param_1;
}



// FUNCTION 145028a90 FUN_145028a90 body=1600 status=ok
// SIG undefined FUN_145028a90(void)

void FUN_145028a90(longlong *param_1,float *param_2,longlong *param_3,undefined4 param_4)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  undefined1 (*pauVar25) [16];
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uStack_448;
  undefined1 auStack_444 [1020];
  undefined1 (*local_48) [16];
  longlong *plVar20;
  
  uStack_448 = param_4;
  lVar17 = 1;
  uVar18 = SUB84(param_1,0);
  uVar21 = (undefined4)((ulonglong)param_1 >> 0x20);
  pauVar25 = (undefined1 (*) [16])auStack_444;
  if ((*(uint *)(DAT_14c787698 + 0x20) & 0x820000) == 0x820000) {
    do {
      local_48 = (undefined1 (*) [16])(pauVar25[-1] + 0xc);
      pfVar23 = (float *)((longlong)*(int *)*local_48 * 0x80 + *param_1 + (longlong)param_1);
      if ((int)lVar17 < 2) {
        auVar9._4_4_ = -(uint)((param_2[0x11] <= pfVar23[0x15] && pfVar23[0x11] <= param_2[0x15]) &&
                              ((param_2[9] <= pfVar23[0xd] && pfVar23[9] <= param_2[0xd]) &&
                              (pfVar23[1] <= param_2[5] && param_2[1] <= pfVar23[5])));
        auVar9._0_4_ = -(uint)(((param_2[8] <= pfVar23[0xc] && pfVar23[8] <= param_2[0xc]) &&
                               (*pfVar23 <= param_2[4] && *param_2 <= pfVar23[4])) &&
                              (param_2[0x10] <= pfVar23[0x14] && pfVar23[0x10] <= param_2[0x14]));
        auVar9._8_4_ = -(uint)((param_2[0x12] <= pfVar23[0x16] && pfVar23[0x12] <= param_2[0x16]) &&
                              ((param_2[10] <= pfVar23[0xe] && pfVar23[10] <= param_2[0xe]) &&
                              (param_2[2] <= pfVar23[6] && pfVar23[2] <= param_2[6])));
        auVar9._12_4_ =
             -(uint)((param_2[0x13] <= pfVar23[0x17] && pfVar23[0x13] <= param_2[0x17]) &&
                    ((param_2[0xb] <= pfVar23[0xf] && pfVar23[0xb] <= param_2[0xf]) &&
                    (pfVar23[3] <= param_2[7] && param_2[3] <= pfVar23[7])));
        uVar19 = movmskps(uVar18,auVar9);
        iVar26 = *(int *)(&DAT_149990100 + CONCAT44(uVar21,uVar19) * 4);
        auVar30 = pshufb(*(undefined1 (*) [16])(pfVar23 + 0x18),
                         *(undefined1 (*) [16])(&DAT_14998fc00 + (ulonglong)uVar19 * 0x10));
        if (((uint)pfVar23[0x1d] & 1) == 0) {
          *local_48 = auVar30;
          goto LAB_145028d51;
        }
LAB_145028ceb:
        lVar17 = *param_3;
        iVar22 = *(int *)(lVar17 + 8) + 4;
        if ((int)(*(uint *)(lVar17 + 0xc) & 0x7fffffff) < iVar22) {
          FUN_141807990(lVar17,&PTR_vftable_14c6e47c0,(longlong)iVar22);
        }
        plVar20 = (longlong *)*param_3;
        lVar17 = plVar20[1];
        iVar26 = iVar26 + (int)lVar17;
        if ((int)(*(uint *)((longlong)plVar20 + 0xc) & 0x7fffffff) < iVar26) {
          FUN_140163394(plVar20,&PTR_vftable_14c6e47c0,(longlong)iVar26);
        }
        *(int *)(plVar20 + 1) = iVar26;
        *(undefined1 (*) [16])(*plVar20 + (longlong)(int)lVar17 * 4) = auVar30;
      }
      else {
        local_48 = (undefined1 (*) [16])(pauVar25[-1] + 8);
        pfVar24 = (float *)((longlong)*(int *)*local_48 * 0x80 + *param_1 + (longlong)param_1);
        auVar7._4_4_ = -(uint)(((param_2[9] <= pfVar23[0xd] && pfVar23[9] <= param_2[0xd]) &&
                               (pfVar23[1] <= param_2[5] && param_2[1] <= pfVar23[5])) &&
                              (param_2[0x11] <= pfVar23[0x15] && pfVar23[0x11] <= param_2[0x15]));
        auVar7._0_4_ = -(uint)(((param_2[8] <= pfVar23[0xc] && pfVar23[8] <= param_2[0xc]) &&
                               (*pfVar23 <= param_2[4] && *param_2 <= pfVar23[4])) &&
                              (param_2[0x10] <= pfVar23[0x14] && pfVar23[0x10] <= param_2[0x14]));
        auVar7._8_4_ = -(uint)(((param_2[10] <= pfVar23[0xe] && pfVar23[10] <= param_2[0xe]) &&
                               (param_2[2] <= pfVar23[6] && pfVar23[2] <= param_2[6])) &&
                              (param_2[0x12] <= pfVar23[0x16] && pfVar23[0x12] <= param_2[0x16]));
        auVar7._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar23[0xf] && pfVar23[0xb] <= param_2[0xf]) &&
                     (pfVar23[3] <= param_2[7] && param_2[3] <= pfVar23[7])) &&
                    (param_2[0x13] <= pfVar23[0x17] && pfVar23[0x13] <= param_2[0x17]));
        uVar19 = movmskps(uVar18,auVar7);
        plVar20 = (longlong *)CONCAT44(uVar21,uVar19);
        iVar26 = *(int *)(&DAT_149990100 + (longlong)plVar20 * 4);
        auVar30 = pshufb(*(undefined1 (*) [16])(pfVar23 + 0x18),
                         *(undefined1 (*) [16])(&DAT_14998fc00 + (ulonglong)uVar19 * 0x10));
        if (((uint)pfVar23[0x1d] & 1) == 0) {
          *local_48 = auVar30;
          local_48 = (undefined1 (*) [16])(*local_48 + (longlong)iVar26 * 4);
        }
        else {
          plVar20 = (longlong *)*param_3;
          iVar22 = (int)plVar20[1] + 4;
          if ((int)(*(uint *)((longlong)plVar20 + 0xc) & 0x7fffffff) < iVar22) {
            FUN_141807990(plVar20,&PTR_vftable_14c6e47c0,(longlong)iVar22);
          }
          plVar1 = (longlong *)*param_3;
          lVar17 = plVar1[1];
          iVar26 = iVar26 + (int)lVar17;
          if ((int)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) < iVar26) {
            plVar20 = plVar1;
            FUN_140163394(plVar1,&PTR_vftable_14c6e47c0,(longlong)iVar26);
          }
          *(int *)(plVar1 + 1) = iVar26;
          *(undefined1 (*) [16])(*plVar1 + (longlong)(int)lVar17 * 4) = auVar30;
        }
        auVar8._4_4_ = -(uint)(((param_2[9] <= pfVar24[0xd] && pfVar24[9] <= param_2[0xd]) &&
                               (pfVar24[1] <= param_2[5] && param_2[1] <= pfVar24[5])) &&
                              (param_2[0x11] <= pfVar24[0x15] && pfVar24[0x11] <= param_2[0x15]));
        auVar8._0_4_ = -(uint)(((param_2[8] <= pfVar24[0xc] && pfVar24[8] <= param_2[0xc]) &&
                               (*pfVar24 <= param_2[4] && *param_2 <= pfVar24[4])) &&
                              (param_2[0x10] <= pfVar24[0x14] && pfVar24[0x10] <= param_2[0x14]));
        auVar8._8_4_ = -(uint)(((param_2[10] <= pfVar24[0xe] && pfVar24[10] <= param_2[0xe]) &&
                               (pfVar24[2] <= param_2[6] && param_2[2] <= pfVar24[6])) &&
                              (param_2[0x12] <= pfVar24[0x16] && pfVar24[0x12] <= param_2[0x16]));
        auVar8._12_4_ =
             -(uint)(((param_2[0xb] <= pfVar24[0xf] && pfVar24[0xb] <= param_2[0xf]) &&
                     (pfVar24[3] <= param_2[7] && param_2[3] <= pfVar24[7])) &&
                    (param_2[0x13] <= pfVar24[0x17] && pfVar24[0x13] <= param_2[0x17]));
        uVar19 = movmskps((int)plVar20,auVar8);
        iVar26 = *(int *)(&DAT_149990100 + CONCAT44((int)((ulonglong)plVar20 >> 0x20),uVar19) * 4);
        auVar30 = pshufb(*(undefined1 (*) [16])(pfVar24 + 0x18),
                         *(undefined1 (*) [16])(&DAT_14998fc00 + (ulonglong)uVar19 * 0x10));
        if (((uint)pfVar24[0x1d] & 1) != 0) goto LAB_145028ceb;
        *local_48 = auVar30;
LAB_145028d51:
        local_48 = (undefined1 (*) [16])(*local_48 + (longlong)iVar26 * 4);
      }
      lVar17 = (longlong)local_48 - (longlong)&uStack_448 >> 2;
      pauVar25 = local_48;
    } while ((int)lVar17 != 0);
  }
  else {
    do {
      local_48 = (undefined1 (*) [16])(pauVar25[-1] + 0xc);
      pfVar23 = (float *)((longlong)*(int *)*local_48 * 0x80 + *param_1 + (longlong)param_1);
      if ((int)lVar17 < 2) {
        fVar13 = pfVar23[0x18];
        fVar14 = pfVar23[0x19];
        fVar15 = pfVar23[0x1a];
        fVar16 = pfVar23[0x1b];
        auVar12._4_4_ =
             -(uint)((param_2[0x11] <= pfVar23[0x15] && pfVar23[0x11] <= param_2[0x15]) &&
                    ((pfVar23[1] <= param_2[5] && param_2[1] <= pfVar23[5]) &&
                    (param_2[9] <= pfVar23[0xd] && pfVar23[9] <= param_2[0xd])));
        auVar12._0_4_ =
             -(uint)(((param_2[8] <= pfVar23[0xc] && pfVar23[8] <= param_2[0xc]) &&
                     (*pfVar23 <= param_2[4] && *param_2 <= pfVar23[4])) &&
                    (param_2[0x10] <= pfVar23[0x14] && pfVar23[0x10] <= param_2[0x14]));
        auVar12._8_4_ =
             -(uint)((param_2[0x12] <= pfVar23[0x16] && pfVar23[0x12] <= param_2[0x16]) &&
                    ((param_2[10] <= pfVar23[0xe] && pfVar23[10] <= param_2[0xe]) &&
                    (param_2[2] <= pfVar23[6] && pfVar23[2] <= param_2[6])));
        auVar12._12_4_ =
             -(uint)((param_2[0x13] <= pfVar23[0x17] && pfVar23[0x13] <= param_2[0x17]) &&
                    ((pfVar23[3] <= param_2[7] && param_2[3] <= pfVar23[7]) &&
                    (param_2[0xb] <= pfVar23[0xf] && pfVar23[0xb] <= param_2[0xf])));
        uVar19 = movmskps(uVar18,auVar12);
        lVar17 = (ulonglong)uVar19 * 0x40;
        iVar26 = *(int *)(&DAT_149990100 + CONCAT44(uVar21,uVar19) * 4);
        auVar33._0_4_ = (uint)fVar16 & *(uint *)(&DAT_14998fd30 + lVar17);
        auVar33._4_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd34 + lVar17);
        auVar33._8_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd38 + lVar17);
        auVar33._12_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd3c + lVar17);
        auVar29._0_4_ = (uint)fVar14 & *(uint *)(&DAT_14998fd10 + lVar17);
        auVar29._4_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd14 + lVar17);
        auVar29._8_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd18 + lVar17);
        auVar29._12_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd1c + lVar17);
        auVar30._4_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd24 + lVar17);
        auVar30._0_4_ = (uint)fVar15 & *(uint *)(&DAT_14998fd20 + lVar17);
        auVar30._8_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd28 + lVar17);
        auVar30._12_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd2c + lVar17);
        auVar6._4_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd04 + lVar17);
        auVar6._0_4_ = (uint)fVar13 & *(uint *)(&DAT_14998fd00 + lVar17);
        auVar6._8_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd08 + lVar17);
        auVar6._12_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd0c + lVar17);
        auVar30 = auVar33 | auVar30 | auVar29 | auVar6;
        if (((uint)pfVar23[0x1d] & 1) == 0) {
          *local_48 = auVar30;
          goto LAB_145029082;
        }
LAB_14502901c:
        lVar17 = *param_3;
        iVar22 = *(int *)(lVar17 + 8) + 4;
        if ((int)(*(uint *)(lVar17 + 0xc) & 0x7fffffff) < iVar22) {
          FUN_141807990(lVar17,&PTR_vftable_14c6e47c0,(longlong)iVar22);
        }
        plVar20 = (longlong *)*param_3;
        lVar17 = plVar20[1];
        iVar26 = iVar26 + (int)lVar17;
        if ((int)(*(uint *)((longlong)plVar20 + 0xc) & 0x7fffffff) < iVar26) {
          FUN_140163394(plVar20,&PTR_vftable_14c6e47c0,(longlong)iVar26);
        }
        *(int *)(plVar20 + 1) = iVar26;
        *(undefined1 (*) [16])(*plVar20 + (longlong)(int)lVar17 * 4) = auVar30;
      }
      else {
        local_48 = (undefined1 (*) [16])(pauVar25[-1] + 8);
        fVar13 = pfVar23[0x18];
        fVar14 = pfVar23[0x19];
        fVar15 = pfVar23[0x1a];
        fVar16 = pfVar23[0x1b];
        pfVar24 = (float *)((longlong)*(int *)*local_48 * 0x80 + *param_1 + (longlong)param_1);
        auVar10._4_4_ =
             -(uint)(((pfVar23[1] <= param_2[5] && param_2[1] <= pfVar23[5]) &&
                     (param_2[9] <= pfVar23[0xd] && pfVar23[9] <= param_2[0xd])) &&
                    (param_2[0x11] <= pfVar23[0x15] && pfVar23[0x11] <= param_2[0x15]));
        auVar10._0_4_ =
             -(uint)(((param_2[8] <= pfVar23[0xc] && pfVar23[8] <= param_2[0xc]) &&
                     (*pfVar23 <= param_2[4] && *param_2 <= pfVar23[4])) &&
                    (param_2[0x10] <= pfVar23[0x14] && pfVar23[0x10] <= param_2[0x14]));
        auVar10._8_4_ =
             -(uint)(((param_2[10] <= pfVar23[0xe] && pfVar23[10] <= param_2[0xe]) &&
                     (param_2[2] <= pfVar23[6] && pfVar23[2] <= param_2[6])) &&
                    (param_2[0x12] <= pfVar23[0x16] && pfVar23[0x12] <= param_2[0x16]));
        auVar10._12_4_ =
             -(uint)(((pfVar23[3] <= param_2[7] && param_2[3] <= pfVar23[7]) &&
                     (param_2[0xb] <= pfVar23[0xf] && pfVar23[0xb] <= param_2[0xf])) &&
                    (param_2[0x13] <= pfVar23[0x17] && pfVar23[0x13] <= param_2[0x17]));
        uVar19 = movmskps(uVar18,auVar10);
        plVar20 = (longlong *)CONCAT44(uVar21,uVar19);
        lVar17 = (ulonglong)uVar19 * 0x40;
        iVar26 = *(int *)(&DAT_149990100 + (longlong)plVar20 * 4);
        auVar31._0_4_ = (uint)fVar16 & *(uint *)(&DAT_14998fd30 + lVar17);
        auVar31._4_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd34 + lVar17);
        auVar31._8_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd38 + lVar17);
        auVar31._12_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd3c + lVar17);
        auVar27._0_4_ = (uint)fVar14 & *(uint *)(&DAT_14998fd10 + lVar17);
        auVar27._4_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd14 + lVar17);
        auVar27._8_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd18 + lVar17);
        auVar27._12_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd1c + lVar17);
        auVar2._4_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd24 + lVar17);
        auVar2._0_4_ = (uint)fVar15 & *(uint *)(&DAT_14998fd20 + lVar17);
        auVar2._8_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd28 + lVar17);
        auVar2._12_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd2c + lVar17);
        auVar3._4_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd04 + lVar17);
        auVar3._0_4_ = (uint)fVar13 & *(uint *)(&DAT_14998fd00 + lVar17);
        auVar3._8_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd08 + lVar17);
        auVar3._12_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd0c + lVar17);
        auVar30 = auVar31 | auVar2 | auVar27 | auVar3;
        if (((uint)pfVar23[0x1d] & 1) == 0) {
          *local_48 = auVar30;
          local_48 = (undefined1 (*) [16])(*local_48 + (longlong)iVar26 * 4);
        }
        else {
          plVar20 = (longlong *)*param_3;
          iVar22 = (int)plVar20[1] + 4;
          if ((int)(*(uint *)((longlong)plVar20 + 0xc) & 0x7fffffff) < iVar22) {
            FUN_141807990(plVar20,&PTR_vftable_14c6e47c0,(longlong)iVar22);
          }
          plVar1 = (longlong *)*param_3;
          lVar17 = plVar1[1];
          iVar26 = iVar26 + (int)lVar17;
          if ((int)(*(uint *)((longlong)plVar1 + 0xc) & 0x7fffffff) < iVar26) {
            plVar20 = plVar1;
            FUN_140163394(plVar1,&PTR_vftable_14c6e47c0,(longlong)iVar26);
          }
          *(int *)(plVar1 + 1) = iVar26;
          *(undefined1 (*) [16])(*plVar1 + (longlong)(int)lVar17 * 4) = auVar30;
        }
        fVar13 = pfVar24[0x18];
        fVar14 = pfVar24[0x19];
        fVar15 = pfVar24[0x1a];
        fVar16 = pfVar24[0x1b];
        auVar11._4_4_ =
             -(uint)(((pfVar24[1] <= param_2[5] && param_2[1] <= pfVar24[5]) &&
                     (param_2[9] <= pfVar24[0xd] && pfVar24[9] <= param_2[0xd])) &&
                    (param_2[0x11] <= pfVar24[0x15] && pfVar24[0x11] <= param_2[0x15]));
        auVar11._0_4_ =
             -(uint)(((param_2[8] <= pfVar24[0xc] && pfVar24[8] <= param_2[0xc]) &&
                     (*pfVar24 <= param_2[4] && *param_2 <= pfVar24[4])) &&
                    (param_2[0x10] <= pfVar24[0x14] && pfVar24[0x10] <= param_2[0x14]));
        auVar11._8_4_ =
             -(uint)(((param_2[2] <= pfVar24[6] && pfVar24[2] <= param_2[6]) &&
                     (param_2[10] <= pfVar24[0xe] && pfVar24[10] <= param_2[0xe])) &&
                    (param_2[0x12] <= pfVar24[0x16] && pfVar24[0x12] <= param_2[0x16]));
        auVar11._12_4_ =
             -(uint)(((pfVar24[3] <= param_2[7] && param_2[3] <= pfVar24[7]) &&
                     (param_2[0xb] <= pfVar24[0xf] && pfVar24[0xb] <= param_2[0xf])) &&
                    (param_2[0x13] <= pfVar24[0x17] && pfVar24[0x13] <= param_2[0x17]));
        uVar19 = movmskps((int)plVar20,auVar11);
        lVar17 = (ulonglong)uVar19 * 0x40;
        iVar26 = *(int *)(&DAT_149990100 + CONCAT44((int)((ulonglong)plVar20 >> 0x20),uVar19) * 4);
        auVar32._0_4_ = (uint)fVar16 & *(uint *)(&DAT_14998fd30 + lVar17);
        auVar32._4_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd34 + lVar17);
        auVar32._8_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd38 + lVar17);
        auVar32._12_4_ = (uint)fVar16 & *(uint *)(&UNK_14998fd3c + lVar17);
        auVar28._0_4_ = (uint)fVar14 & *(uint *)(&DAT_14998fd10 + lVar17);
        auVar28._4_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd14 + lVar17);
        auVar28._8_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd18 + lVar17);
        auVar28._12_4_ = (uint)fVar14 & *(uint *)(&UNK_14998fd1c + lVar17);
        auVar4._4_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd24 + lVar17);
        auVar4._0_4_ = (uint)fVar15 & *(uint *)(&DAT_14998fd20 + lVar17);
        auVar4._8_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd28 + lVar17);
        auVar4._12_4_ = (uint)fVar15 & *(uint *)(&UNK_14998fd2c + lVar17);
        auVar5._4_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd04 + lVar17);
        auVar5._0_4_ = (uint)fVar13 & *(uint *)(&DAT_14998fd00 + lVar17);
        auVar5._8_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd08 + lVar17);
        auVar5._12_4_ = (uint)fVar13 & *(uint *)(&UNK_14998fd0c + lVar17);
        auVar30 = auVar32 | auVar4 | auVar28 | auVar5;
        if (((uint)pfVar24[0x1d] & 1) != 0) goto LAB_14502901c;
        *local_48 = auVar30;
LAB_145029082:
        local_48 = (undefined1 (*) [16])(*local_48 + (longlong)iVar26 * 4);
      }
      lVar17 = (longlong)local_48 - (longlong)&uStack_448 >> 2;
      pauVar25 = local_48;
    } while ((int)lVar17 != 0);
  }
  return;
}



// FUNCTION 1450290e0 FUN_1450290e0 body=267 status=ok
// SIG undefined FUN_1450290e0(void)

void FUN_1450290e0(ulonglong *param_1,ulonglong param_2,longlong *param_3)

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
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_1;
  uVar14 = SUB168(auVar1 * auVar6,8);
  *param_3 = *param_1 * param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1[1];
  uVar15 = SUB168(auVar2 * auVar7,8);
  uVar18 = param_1[1] * param_2;
  param_3[1] = uVar18 + uVar14;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1[2];
  uVar16 = SUB168(auVar3 * auVar8,8);
  uVar11 = param_1[2] * param_2;
  uVar14 = (ulonglong)CARRY8(uVar18,uVar14);
  uVar18 = uVar11 + uVar15;
  param_3[2] = uVar18 + uVar14;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_1[3];
  uVar17 = SUB168(auVar4 * auVar9,8);
  uVar12 = param_1[3] * param_2;
  uVar14 = (ulonglong)(CARRY8(uVar11,uVar15) || CARRY8(uVar18,uVar14));
  uVar18 = uVar12 + uVar16;
  param_3[3] = uVar18 + uVar14;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_1[4];
  uVar11 = param_1[4] * param_2;
  uVar14 = (ulonglong)(CARRY8(uVar12,uVar16) || CARRY8(uVar18,uVar14));
  uVar18 = uVar11 + uVar17;
  param_3[4] = uVar18 + uVar14;
  lVar13 = (ulonglong)(CARRY8(uVar11,uVar17) || CARRY8(uVar18,uVar14)) + SUB168(auVar5 * auVar10,8);
  param_3[5] = lVar13;
  if ((longlong)param_1[4] < 0) {
    param_3[5] = lVar13 - param_2;
  }
  if ((longlong)param_2 < 0) {
    uVar14 = param_3[1];
    uVar18 = *param_1;
    param_3[1] = uVar14 - *param_1;
    uVar11 = param_3[2];
    uVar12 = (ulonglong)(uVar14 < uVar18);
    uVar14 = param_1[1];
    uVar15 = uVar11 - param_1[1];
    param_3[2] = uVar15 - uVar12;
    uVar18 = param_3[3];
    uVar12 = (ulonglong)(uVar11 < uVar14 || uVar15 < uVar12);
    uVar14 = param_1[2];
    uVar15 = uVar18 - param_1[2];
    param_3[3] = uVar15 - uVar12;
    uVar11 = param_3[4];
    uVar18 = (ulonglong)(uVar18 < uVar14 || uVar15 < uVar12);
    uVar14 = param_1[3];
    uVar12 = uVar11 - param_1[3];
    param_3[4] = uVar12 - uVar18;
    param_3[5] = (param_3[5] - param_1[4]) - (ulonglong)(uVar11 < uVar14 || uVar12 < uVar18);
  }
  return;
}



// FUNCTION 1450291f0 FUN_1450291f0 body=483 status=ok
// SIG undefined FUN_1450291f0(void)

void FUN_1450291f0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_res8;
  ulonglong local_88 [9];
  longlong lStack_40;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  uVar26 = SUB168(auVar10 * auVar18,8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  uVar27 = SUB168(auVar11 * auVar19,8);
  local_88[1] = uVar4 * uVar2 + uVar26;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  uVar28 = SUB168(auVar12 * auVar20,8);
  uVar26 = (ulonglong)CARRY8(uVar4 * uVar2,uVar26);
  uVar29 = uVar5 * uVar2 + uVar27;
  local_88[2] = uVar29 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar6;
  uVar26 = (ulonglong)(CARRY8(uVar5 * uVar2,uVar27) || CARRY8(uVar29,uVar26));
  uVar29 = uVar6 * uVar2 + uVar28;
  local_88[3] = uVar29 + uVar26;
  local_res8 = 1;
  local_88[4] = SUB168(auVar13 * auVar21,8) +
                (ulonglong)(CARRY8(uVar6 * uVar2,uVar28) || CARRY8(uVar29,uVar26));
  iVar31 = 1;
  do {
    uVar26 = param_2[local_res8];
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar3;
    uVar29 = SUB168(auVar14 * auVar22,8);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar26;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar4;
    uVar28 = SUB168(auVar15 * auVar23,8);
    uVar7 = uVar4 * uVar26 + uVar29;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar26;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar5;
    uVar30 = SUB168(auVar16 * auVar24,8);
    uVar29 = (ulonglong)CARRY8(uVar4 * uVar26,uVar29);
    uVar27 = uVar5 * uVar26 + uVar28;
    uVar33 = uVar27 + uVar29;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar26;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar6;
    uVar27 = (ulonglong)(CARRY8(uVar5 * uVar26,uVar28) || CARRY8(uVar27,uVar29));
    uVar8 = uVar6 * uVar26 + uVar30;
    uVar32 = uVar8 + uVar27;
    lVar1 = local_res8 + 1;
    uVar29 = local_88[local_res8];
    local_88[iVar31] = uVar3 * uVar26 + local_88[local_res8];
    uVar28 = (ulonglong)CARRY8(uVar3 * uVar26,uVar29);
    uVar29 = local_88[lVar1];
    uVar9 = uVar7 + local_88[lVar1];
    local_88[iVar31 + 1] = uVar9 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar7,uVar29) || CARRY8(uVar9,uVar28));
    uVar29 = local_88[local_res8 + 2];
    uVar7 = uVar33 + local_88[local_res8 + 2];
    local_88[iVar31 + 2] = uVar7 + uVar28;
    uVar28 = (ulonglong)(CARRY8(uVar33,uVar29) || CARRY8(uVar7,uVar28));
    uVar29 = local_88[local_res8 + 3];
    uVar7 = uVar32 + local_88[local_res8 + 3];
    local_88[iVar31 + 3] = uVar7 + uVar28;
    local_88[iVar31 + 4] =
         SUB168(auVar17 * auVar25,8) +
         (ulonglong)(CARRY8(uVar6 * uVar26,uVar30) || CARRY8(uVar8,uVar27)) +
         (ulonglong)(CARRY8(uVar32,uVar29) || CARRY8(uVar7,uVar28));
    iVar31 = iVar31 + 1;
    local_res8 = lVar1;
  } while (lVar1 < 6);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_88[1];
  param_3[2] = local_88[2];
  param_3[3] = local_88[3];
  param_3[4] = local_88[4];
  param_3[5] = local_88[5];
  param_3[6] = local_88[6];
  param_3[7] = local_88[7];
  param_3[8] = local_88[8];
  param_3[9] = lStack_40;
  return;
}



// FUNCTION 1450293e0 FUN_1450293e0 body=721 status=ok
// SIG undefined FUN_1450293e0(void)

void FUN_1450293e0(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = param_1[2];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar2;
  uVar46 = SUB168(auVar10 * auVar26,8);
  uVar7 = param_1[1];
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar7;
  uVar47 = SUB168(auVar11 * auVar27,8);
  uVar42 = uVar7 * uVar1 + uVar46;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar3;
  uVar48 = SUB168(auVar12 * auVar28,8);
  uVar51 = param_1[3];
  uVar8 = (ulonglong)CARRY8(uVar7 * uVar1,uVar46);
  uVar9 = uVar3 * uVar1 + uVar47;
  uVar43 = uVar9 + uVar8;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar51;
  uVar49 = SUB168(auVar13 * auVar29,8);
  uVar46 = param_1[4];
  uVar8 = (ulonglong)(CARRY8(uVar3 * uVar1,uVar47) || CARRY8(uVar9,uVar8));
  uVar9 = uVar51 * uVar1 + uVar48;
  uVar44 = uVar9 + uVar8;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar1;
  auVar30._8_8_ = 0;
  auVar30._0_8_ = uVar46;
  uVar47 = SUB168(auVar14 * auVar30,8);
  uVar8 = (ulonglong)(CARRY8(uVar51 * uVar1,uVar48) || CARRY8(uVar9,uVar8));
  uVar9 = uVar46 * uVar1 + uVar49;
  uVar45 = uVar9 + uVar8;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar1;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar4;
  uVar48 = SUB168(auVar15 * auVar31,8);
  uVar8 = (ulonglong)(CARRY8(uVar46 * uVar1,uVar49) || CARRY8(uVar9,uVar8));
  uVar9 = uVar4 * uVar1 + uVar47;
  uVar59 = uVar9 + uVar8;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar5;
  uVar49 = SUB168(auVar16 * auVar32,8);
  uVar8 = (ulonglong)(CARRY8(uVar4 * uVar1,uVar47) || CARRY8(uVar9,uVar8));
  uVar9 = uVar5 * uVar1 + uVar48;
  uVar61 = uVar9 + uVar8;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar1;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar6;
  uVar8 = (ulonglong)(CARRY8(uVar5 * uVar1,uVar48) || CARRY8(uVar9,uVar8));
  uVar9 = uVar6 * uVar1 + uVar49;
  uVar56 = uVar9 + uVar8;
  uVar55 = SUB168(auVar17 * auVar33,8) +
           (ulonglong)(CARRY8(uVar6 * uVar1,uVar49) || CARRY8(uVar9,uVar8));
  uVar8 = param_2[1];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar8;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = uVar2;
  uVar47 = SUB168(auVar18 * auVar34,8);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar8;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar7;
  uVar48 = SUB168(auVar19 * auVar35,8);
  uVar9 = uVar7 * uVar8 + uVar47;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar8;
  auVar36._8_8_ = 0;
  auVar36._0_8_ = uVar3;
  uVar49 = SUB168(auVar20 * auVar36,8);
  uVar7 = (ulonglong)CARRY8(uVar7 * uVar8,uVar47);
  uVar47 = uVar3 * uVar8 + uVar48;
  uVar57 = uVar47 + uVar7;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar8;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar51;
  uVar50 = SUB168(auVar21 * auVar37,8);
  uVar3 = (ulonglong)(CARRY8(uVar3 * uVar8,uVar48) || CARRY8(uVar47,uVar7));
  uVar7 = uVar51 * uVar8 + uVar49;
  uVar53 = uVar7 + uVar3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar8;
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar46;
  uVar47 = SUB168(auVar22 * auVar38,8);
  uVar3 = (ulonglong)(CARRY8(uVar51 * uVar8,uVar49) || CARRY8(uVar7,uVar3));
  uVar7 = uVar46 * uVar8 + uVar50;
  uVar58 = uVar7 + uVar3;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar8;
  auVar39._8_8_ = 0;
  auVar39._0_8_ = uVar4;
  uVar51 = SUB168(auVar23 * auVar39,8);
  uVar3 = (ulonglong)(CARRY8(uVar46 * uVar8,uVar50) || CARRY8(uVar7,uVar3));
  uVar7 = uVar4 * uVar8 + uVar47;
  uVar60 = uVar7 + uVar3;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar8;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar5;
  uVar52 = SUB168(auVar24 * auVar40,8);
  uVar3 = (ulonglong)(CARRY8(uVar4 * uVar8,uVar47) || CARRY8(uVar7,uVar3));
  uVar4 = uVar5 * uVar8 + uVar51;
  uVar47 = uVar4 + uVar3;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar8;
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar6;
  uVar3 = (ulonglong)(CARRY8(uVar5 * uVar8,uVar51) || CARRY8(uVar4,uVar3));
  uVar48 = uVar6 * uVar8 + uVar52;
  uVar54 = uVar48 + uVar3;
  uVar4 = (ulonglong)CARRY8(uVar2 * uVar8,uVar42);
  uVar49 = uVar9 + uVar43;
  uVar5 = (ulonglong)(CARRY8(uVar9,uVar43) || CARRY8(uVar49,uVar4));
  uVar43 = uVar57 + uVar44;
  uVar7 = (ulonglong)(CARRY8(uVar57,uVar44) || CARRY8(uVar43,uVar5));
  uVar44 = uVar53 + uVar45;
  uVar51 = (ulonglong)(CARRY8(uVar53,uVar45) || CARRY8(uVar44,uVar7));
  uVar45 = uVar58 + uVar59;
  uVar46 = (ulonglong)(CARRY8(uVar58,uVar59) || CARRY8(uVar45,uVar51));
  uVar50 = uVar60 + uVar61;
  uVar9 = (ulonglong)(CARRY8(uVar60,uVar61) || CARRY8(uVar50,uVar46));
  uVar53 = uVar47 + uVar56;
  uVar47 = (ulonglong)(CARRY8(uVar47,uVar56) || CARRY8(uVar53,uVar9));
  uVar56 = uVar54 + uVar55;
  *param_3 = uVar2 * uVar1;
  param_3[1] = uVar2 * uVar8 + uVar42;
  param_3[2] = uVar49 + uVar4;
  param_3[3] = uVar43 + uVar5;
  param_3[4] = uVar44 + uVar7;
  param_3[5] = uVar45 + uVar51;
  param_3[6] = uVar50 + uVar46;
  param_3[7] = uVar53 + uVar9;
  param_3[8] = uVar56 + uVar47;
  param_3[9] = SUB168(auVar25 * auVar41,8) +
               (ulonglong)(CARRY8(uVar6 * uVar8,uVar52) || CARRY8(uVar48,uVar3)) +
               (ulonglong)(CARRY8(uVar54,uVar55) || CARRY8(uVar56,uVar47));
  return;
}



// FUNCTION 1450296c0 FUN_1450296c0 body=2028 status=ok
// SIG undefined FUN_1450296c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1450296c0(undefined8 *param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  float *pfVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint local_res20;
  longlong local_348;
  int local_340;
  uint local_33c;
  longlong local_338;
  uint local_330;
  undefined8 *local_328;
  int local_320 [2];
  longlong local_318;
  undefined8 local_310;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  int local_2c8 [4];
  undefined8 local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong lStack_290;
  longlong local_288;
  longlong lStack_280;
  longlong local_278;
  undefined8 local_270;
  undefined1 local_248 [528];
  
  local_2b8 = 0x48;
  puVar14 = (undefined8 *)(*DAT_14c787670)(0,&local_2b8,0);
  local_328 = puVar14;
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar14,"InputVolume");
  }
  puVar20 = (undefined8 *)0x0;
  if (puVar14 == (undefined8 *)0x0) {
    local_328 = (undefined8 *)0x0;
    puVar14 = puVar20;
  }
  else {
    puVar14[4] = 0;
    puVar14[6] = 0;
    puVar14[8] = 0;
    puVar14[1] = 0xffffffff;
    *puVar14 = hkaiNavMeshGeneration::InputVolume::vftable;
    puVar14[2] = 1;
    puVar14[3] = 0;
    *(undefined4 *)(puVar14 + 4) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x24) = 0x80000000;
    puVar14[5] = 0;
    *(undefined4 *)(puVar14 + 6) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x34) = 0x80000000;
    puVar14[7] = 0;
    *(undefined4 *)(puVar14 + 8) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x44) = 0x80000000;
  }
  local_2b0 = puVar14 + 3;
  iVar4 = *(int *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x30);
  lVar32 = (longlong)iVar5;
  if ((int)(*(uint *)((longlong)puVar14 + 0x24) & 0x7fffffff) < iVar5) {
    FUN_14502b0d0(local_2b0,&PTR_vftable_14c6e47a0,lVar32);
  }
  if ((*(int *)(puVar14 + 4) < iVar5) || (iVar5 < *(int *)(puVar14 + 4))) {
    *(int *)(puVar14 + 4) = iVar5;
  }
  iVar9 = iVar5 * 3;
  if ((int)(*(uint *)((longlong)puVar14 + 0x34) & 0x7fffffff) < iVar9) {
    FUN_14502b1e0(puVar14 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar9);
  }
  if ((*(int *)(puVar14 + 6) < iVar9) || (iVar9 < *(int *)(puVar14 + 6))) {
    *(int *)(puVar14 + 6) = iVar9;
  }
  plVar1 = puVar14 + 7;
  local_2a8 = plVar1;
  if ((int)(*(uint *)((longlong)puVar14 + 0x44) & 0x7fffffff) < iVar4) {
    FUN_144d30c20(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  if ((*(int *)(puVar14 + 8) < iVar4) || (iVar4 < *(int *)(puVar14 + 8))) {
    *(int *)(puVar14 + 8) = iVar4;
  }
  puVar23 = (undefined8 *)*plVar1;
  iVar4 = *(int *)(param_2 + 0x20);
  pfVar29 = *(float **)(param_2 + 0x18);
  puVar25 = puVar20;
  if (0 < iVar4) {
    do {
      fVar40 = *pfVar29;
      fVar11 = pfVar29[1];
      fVar12 = pfVar29[2];
      fVar38 = fVar40 * *param_3 + param_3[0xc] + fVar11 * param_3[4] + fVar12 * param_3[8];
      fVar39 = fVar40 * param_3[1] + param_3[0xd] + fVar11 * param_3[5] + fVar12 * param_3[9];
      fVar40 = fVar40 * param_3[2] + param_3[0xe] + fVar11 * param_3[6] + fVar12 * param_3[10];
      fVar38 = (float)(-(uint)(fVar38 < 0.0) & 0x80000000 ^ _DAT_14c6dad90) + fVar38;
      fVar39 = (float)(-(uint)(fVar39 < 0.0) & 0x80000000 ^ uRam000000014c6dad94) + fVar39;
      fVar40 = (float)(-(uint)(fVar40 < 0.0) & 0x80000000 ^ uRam000000014c6dad98) + fVar40;
      uVar42 = (int)fVar38 ^ -(uint)(2.1474836e+09 <= fVar38);
      uVar43 = (int)fVar39 ^ -(uint)(2.1474836e+09 <= fVar39);
      uVar44 = (int)fVar40 ^ -(uint)(2.1474836e+09 <= fVar40);
      uVar35 = ((int)uVar42 >> 0x1f ^ uVar42) - ((int)uVar42 >> 0x1f);
      uVar36 = ((int)uVar43 >> 0x1f ^ uVar43) - ((int)uVar43 >> 0x1f);
      uVar37 = ((int)uVar44 >> 0x1f ^ uVar44) - ((int)uVar44 >> 0x1f);
      uVar41 = -(uint)((int)uVar36 < (int)uVar35);
      uVar36 = uVar41 & uVar35 | ~uVar41 & uVar36;
      uVar35 = -(uint)((int)uVar37 < (int)uVar36);
      if (0x7fffff < (int)(uVar35 & uVar36 | ~uVar35 & uVar37)) break;
      puVar25 = (undefined8 *)((longlong)puVar25 + 1);
      pfVar29 = pfVar29 + 4;
      local_310 = CONCAT44(uVar43,uVar42);
      *puVar23 = local_310;
      *(uint *)(puVar23 + 1) = uVar44;
      puVar23 = (undefined8 *)((longlong)puVar23 + 0xc);
    } while ((longlong)puVar25 < (longlong)iVar4);
  }
  local_348 = 0;
  local_340 = 0;
  local_33c = 0x80000000;
  local_338 = FUN_144b3d480();
  local_330 = 0;
  local_res20 = 0;
  local_2e0 = 0;
  local_310 = lVar32;
  if (0 < iVar5) {
    local_318 = 0;
    local_2d0 = 0;
    local_2d8 = 0;
    puVar23 = puVar20;
    do {
      uVar28 = 0;
      local_2e8 = 0;
      piVar2 = (int *)(local_2d8 + *(longlong *)(param_2 + 0x28));
      iVar4 = *piVar2;
      iVar5 = piVar2[1];
      iVar9 = piVar2[2];
      local_2c8[0] = iVar4;
      local_2c8[1] = iVar5;
      local_2c8[2] = iVar9;
      local_2c8[3] = piVar2[3];
      lVar32 = *local_2b0;
      iVar31 = (int)puVar23;
      *(int *)(local_2d0 + lVar32) = iVar31;
      local_2a0 = local_2d0 + lVar32;
      lVar32 = 0x28;
      uVar17 = 8;
      uVar27 = uVar28;
      iVar18 = 1;
      iVar34 = 2;
      do {
        uVar6 = *(undefined4 *)((longlong)local_2c8 + uVar27);
        uVar7 = *(undefined4 *)((longlong)local_2c8 + uVar17);
        puVar21 = (undefined4 *)(local_318 + lVar32 + local_328[5]);
        puVar21[2] = iVar31 + iVar18;
        iVar10 = (int)uVar28;
        puVar21[3] = iVar31 + iVar10;
        *puVar21 = (int)puVar20;
        puVar21[1] = uVar6;
        local_300 = uVar6;
        local_2fc = uVar7;
        lVar32 = FUN_14502ae10(&local_348,&local_300);
        if (lVar32 == 0) {
LAB_145029a9f:
          local_2f8 = uVar7;
          local_2f4 = uVar6;
          lVar32 = FUN_14502ae10(&local_348,&local_2f8);
          if (lVar32 == 0) {
            iVar18 = -1;
          }
          else {
            iVar18 = *(int *)(lVar32 + 4);
          }
          if (-1 < iVar18) {
            *param_1 = 0;
            if ((local_338 != 0) && (*(int *)(local_338 + 4) != -2)) {
              (*DAT_14c787678)(DAT_14c6e47a8,local_338,0);
              FUN_144b3ec00(&local_338);
            }
            local_340 = 0;
            if ((-1 < (int)local_33c) && (local_348 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_348,(ulonglong)(local_33c & 0x7fffffff) * 0xc)
              ;
            }
            local_348 = 0;
            local_33c = 0x80000000;
            FUN_144b3f230(local_328);
            return param_1;
          }
          local_320[0] = iVar31 + iVar34;
          local_2f0 = uVar7;
          local_2ec = uVar6;
          FUN_14502ad60(&local_348,&local_2f0,local_320);
        }
        else {
          iVar18 = *(int *)(lVar32 + 4);
          if (iVar18 < 0) goto LAB_145029a9f;
          iVar8 = *(int *)((longlong)iVar18 * 0xc + 8 + local_348);
          puVar21[4] = iVar8;
          *(int *)(local_328[5] + 0x10 + (longlong)iVar8 * 0x14) = iVar31 + iVar34;
          uVar35 = (uint)(lVar32 - local_338 >> 3);
          if ((local_330 < uVar35) ||
             (lVar32 = local_338 + (longlong)(int)uVar35 * 8,
             *(int *)(local_338 + 4 + (longlong)(int)uVar35 * 8) != iVar18)) {
            lVar32 = FUN_14502ae10(&local_348,local_348 + (longlong)iVar18 * 0xc);
          }
          FUN_14502ac40(&local_348,lVar32);
        }
        puVar20 = (undefined8 *)(ulonglong)local_res20;
        lVar15 = local_2e8 + 0x14;
        uVar28 = (ulonglong)(iVar10 + 1U);
        lVar32 = local_2e8;
        uVar17 = uVar27;
        uVar27 = uVar27 + 4;
        iVar18 = iVar34;
        iVar34 = iVar10;
        local_2e8 = lVar15;
      } while ((int)(iVar10 + 1U) < 3);
      lVar32 = *local_2a8;
      piVar2 = (int *)(lVar32 + (longlong)iVar4 * 0xc);
      piVar3 = (int *)(lVar32 + (longlong)iVar9 * 0xc);
      lVar15 = (longlong)iVar5;
      local_270 = *(undefined8 *)(lVar32 + lVar15 * 0xc);
      iVar5 = *(int *)(lVar32 + lVar15 * 0xc);
      lVar33 = (longlong)*(int *)(lVar32 + 8 + lVar15 * 0xc);
      lVar22 = (longlong)
               (*(int *)(lVar32 + 8 + (longlong)iVar9 * 0xc) - *(int *)(lVar32 + 8 + lVar15 * 0xc));
      lVar19 = (longlong)(*piVar3 - iVar5);
      lVar24 = (longlong)(piVar3[1] - *(int *)(lVar32 + 4 + lVar15 * 0xc));
      lVar16 = (longlong)(*piVar2 - iVar5);
      lVar26 = (longlong)
               (*(int *)(lVar32 + 4 + (longlong)iVar4 * 0xc) - *(int *)(lVar32 + 4 + lVar15 * 0xc));
      uVar13 = local_270;
      local_288 = lVar16 * lVar24 - lVar26 * lVar19;
      uVar30 = lVar33 * local_288;
      lVar32 = (longlong)(piVar2[2] - *(int *)(lVar32 + 8 + lVar15 * 0xc));
      lStack_290 = lVar32 * lVar19 - lVar22 * lVar16;
      local_298 = lVar22 * lVar26 - lVar32 * lVar24;
      local_270._4_4_ = (int)((ulonglong)local_270 >> 0x20);
      uVar17 = local_270._4_4_ * lStack_290;
      uVar27 = (int)local_270 * local_298;
      uVar28 = uVar27 + uVar17;
      lVar32 = uVar28 + uVar30;
      lStack_280 = -lVar32;
      local_278 = -(ulonglong)(lVar32 != 0) -
                  (SUB168(SEXT816((longlong)(int)local_270) * SEXT816(local_298),8) +
                   SUB168(SEXT816((longlong)local_270._4_4_) * SEXT816(lStack_290),8) +
                   (ulonglong)CARRY8(uVar27,uVar17) + SUB168(SEXT816(lVar33) * SEXT816(local_288),8)
                  + (ulonglong)CARRY8(uVar28,uVar30));
      puVar23 = (undefined8 *)(ulonglong)(iVar31 + 3);
      local_res20 = local_res20 + 1;
      puVar20 = (undefined8 *)(ulonglong)local_res20;
      local_2e0 = local_2e0 + 1;
      local_2d8 = local_2d8 + 0x10;
      local_2d0 = local_2d0 + 0x30;
      local_318 = local_318 + 0x3c;
      *(longlong *)(local_2a0 + 8) = local_298;
      *(longlong *)(local_2a0 + 0x10) = lStack_290;
      *(longlong *)(local_2a0 + 0x18) = local_288;
      *(longlong *)(local_2a0 + 0x20) = lStack_280;
      *(longlong *)(local_2a0 + 0x28) = local_278;
      puVar14 = local_328;
      local_270 = uVar13;
    } while (local_2e0 < local_310);
  }
  if (local_340 == 0) {
    *param_1 = puVar14;
    if ((local_338 != 0) && (*(int *)(local_338 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_338,0);
      FUN_144b3ec00(&local_338);
    }
    local_340 = 0;
    if ((-1 < (int)local_33c) && (local_348 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_348,(ulonglong)(local_33c & 0x7fffffff) * 0xc);
    }
  }
  else {
    FUN_144bde670(local_2c8,local_248,0x200);
    FUN_144be6160(local_2c8,"Input geometry for volumes must be closed.");
    FUN_144bfc0d0(0x47171324,local_248,
                  "NavMesh\\Generation\\InputVolume\\hkaiNavMeshGenerationInputVolumeUtils.cpp",0x57
                 );
    FUN_144bde6e0(local_2c8);
    *param_1 = 0;
    if ((local_338 != 0) && (*(int *)(local_338 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_338,0);
      FUN_144b3ec00(&local_338);
    }
    local_340 = 0;
    if ((-1 < (int)local_33c) && (local_348 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_348,(ulonglong)(local_33c & 0x7fffffff) * 0xc);
    }
    local_348 = 0;
    local_33c = 0x80000000;
    if (puVar14 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar14);
    }
  }
  return param_1;
}



// FUNCTION 145029eb0 FUN_145029eb0 body=929 status=ok
// SIG undefined FUN_145029eb0(void)

byte FUN_145029eb0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char cVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  ulonglong *puVar22;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  ulonglong local_1c0;
  ulonglong uStack_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong lStack_168;
  undefined8 local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  ulonglong uStack_80;
  longlong local_78;
  
  puVar18 = *(ulonglong **)(param_2 + 0x18);
  bVar21 = 0;
  puVar22 = puVar18 + (longlong)*(int *)(param_2 + 0x20) * 6;
  do {
    if (puVar18 == puVar22) {
      return bVar21 & 1;
    }
    uVar2 = puVar18[4];
    uVar3 = puVar18[5];
    uVar4 = *puVar18;
    uVar5 = puVar18[1];
    uVar6 = puVar18[2];
    uVar7 = puVar18[3];
    local_1a8 = -uVar2;
    lStack_1a0 = -(ulonglong)(uVar2 != 0) - puVar18[5];
    local_1d8 = puVar18[3];
    local_198 = local_1a8;
    lStack_190 = lStack_1a0;
    FUN_144cc6890(param_1 + 8,local_1d8,&local_208,1);
    FUN_144cc6890(param_1 + 4,uVar6,&local_e0,1);
    FUN_144cc6890(param_1,uVar5,&local_108,1);
    uVar8 = param_1[0xc];
    uStack_158 = param_1[0xd];
    local_150 = param_1[0xe];
    lStack_148 = param_1[0xf];
    uVar10 = local_100 + local_d8 + (ulonglong)CARRY8(local_108,local_e0);
    uVar13 = (ulonglong)
             (CARRY8(local_100,local_d8) ||
             CARRY8(local_100 + local_d8,(ulonglong)CARRY8(local_108,local_e0)));
    uVar12 = local_f8 + local_d0 + uVar13;
    uVar13 = (ulonglong)(CARRY8(local_f8,local_d0) || CARRY8(local_f8 + local_d0,uVar13));
    uVar15 = local_f0 + local_c8 + uVar13;
    uVar20 = local_108 + local_e0 + local_208;
    uVar16 = (ulonglong)CARRY8(local_108 + local_e0,local_208);
    uVar19 = uVar10 + uStack_200;
    uVar11 = uVar19 + uVar16;
    local_160._0_4_ = (undefined4)uVar8;
    local_160._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar16 = (ulonglong)(CARRY8(uVar10,uStack_200) || CARRY8(uVar19,uVar16));
    uVar19 = uVar12 + local_1f8;
    uVar10 = uVar19 + uVar16;
    uVar16 = (ulonglong)(CARRY8(uVar12,local_1f8) || CARRY8(uVar19,uVar16));
    uVar19 = uVar15 + uStack_1f0;
    uVar12 = uVar19 + uVar16;
    lVar17 = local_e8 + local_c0 +
             (ulonglong)(CARRY8(local_f0,local_c8) || CARRY8(local_f0 + local_c8,uVar13)) +
             local_1e8 + (ulonglong)(CARRY8(uVar15,uStack_1f0) || CARRY8(uVar19,uVar16));
    uStack_90 = (undefined4)local_160;
    uStack_8c = local_160._4_4_;
    local_1d0 = uVar20;
    uStack_1c8 = uVar11;
    local_1c0 = uVar10;
    uStack_1b8 = uVar12;
    local_1b0 = lVar17;
    lStack_168 = lVar17;
    local_160 = uVar8;
    local_98 = lVar17;
    local_88 = uStack_158;
    uStack_80 = local_150;
    local_78 = lStack_148;
    local_a8 = uVar10;
    uStack_a0 = uVar12;
    local_b8 = uVar20;
    uStack_b0 = uVar11;
    FUN_144cc6970(&uStack_90,&local_198,&local_208);
    uVar13 = local_1f8;
    uVar16 = uStack_1f0;
    uVar19 = local_1e8;
    if (lStack_190 < 0) {
      uVar13 = local_1f8 - CONCAT44(uStack_8c,uStack_90);
      uVar19 = (ulonglong)(local_1f8 < CONCAT44(uStack_8c,uStack_90));
      uVar16 = (uStack_1f0 - local_88) - uVar19;
      uVar15 = (ulonglong)(uStack_1f0 < local_88 || uStack_1f0 - local_88 < uVar19);
      uVar19 = (local_1e8 - uStack_80) - uVar15;
      uStack_1e0 = (uStack_1e0 - local_78) -
                   (ulonglong)(local_1e8 < uStack_80 || local_1e8 - uStack_80 < uVar15);
    }
    uVar15 = (ulonglong)
             (uVar11 < uStack_200 || uVar11 - uStack_200 < (ulonglong)(uVar20 < local_208));
    uVar1 = (ulonglong)(uVar10 < uVar13 || uVar10 - uVar13 < uVar15);
    lVar17 = (lVar17 - uVar19) - (ulonglong)(uVar12 < uVar16 || uVar12 - uVar16 < uVar1);
    uVar14 = (uint)(lVar17 != 0 ||
                   ((uVar10 - uVar13 != uVar15 ||
                    (uVar11 - uStack_200 != (ulonglong)(uVar20 < local_208) || uVar20 != local_208))
                   || uVar12 - uVar16 != uVar1)) | (uint)(lVar17 >> 0x3f);
    if (uVar14 == 0) {
      local_188 = *param_1;
      uStack_180 = param_1[1];
      local_178 = param_1[2];
      uStack_170 = param_1[3];
      lStack_168 = param_1[4];
      local_160 = param_1[5];
      uStack_158 = param_1[6];
      local_150 = param_1[7];
      lStack_148 = param_1[8];
      uStack_140 = param_1[9];
      local_138 = param_1[10];
      uStack_130 = param_1[0xb];
      local_128 = param_1[0xc];
      uStack_120 = param_1[0xd];
      local_118 = *(undefined4 *)(param_1 + 0xe);
      uStack_114 = *(undefined4 *)((longlong)param_1 + 0x74);
      uStack_110 = *(undefined4 *)(param_1 + 0xf);
      uStack_10c = *(undefined4 *)((longlong)param_1 + 0x7c);
      local_208 = uVar4;
      uStack_200 = uVar5;
      local_1f8 = uVar6;
      uStack_1f0 = uVar7;
      local_1e8 = uVar2;
      uStack_1e0 = uVar3;
      cVar9 = FUN_14502a260(&local_188,param_2,&local_208);
      if (cVar9 != '\0') {
        return 1;
      }
    }
    else if ((int)(((uint)((longlong)local_1d8 >> 0x3f) | (uint)(local_1d8 != 0)) * uVar14) < 0) {
      local_188 = *param_1;
      uStack_180 = param_1[1];
      local_178 = param_1[2];
      uStack_170 = param_1[3];
      lStack_168 = param_1[4];
      local_160 = param_1[5];
      uStack_158 = param_1[6];
      local_150 = param_1[7];
      lStack_148 = param_1[8];
      uStack_140 = param_1[9];
      local_138 = param_1[10];
      uStack_130 = param_1[0xb];
      local_128 = param_1[0xc];
      uStack_120 = param_1[0xd];
      local_118 = *(undefined4 *)(param_1 + 0xe);
      uStack_114 = *(undefined4 *)((longlong)param_1 + 0x74);
      uStack_110 = *(undefined4 *)(param_1 + 0xf);
      uStack_10c = *(undefined4 *)((longlong)param_1 + 0x7c);
      local_208 = uVar4;
      uStack_200 = uVar5;
      local_1f8 = uVar6;
      uStack_1f0 = uVar7;
      local_1e8 = uVar2;
      uStack_1e0 = uVar3;
      cVar9 = FUN_14502a740(&local_188,param_2,&local_208);
      if (cVar9 != '\0') {
        bVar21 = bVar21 + 1;
      }
    }
    puVar18 = puVar18 + 6;
  } while( true );
}



// FUNCTION 14502a260 FUN_14502a260 body=1240 status=ok
// SIG undefined FUN_14502a260(void)

ulonglong FUN_14502a260(longlong param_1,longlong param_2,int *param_3)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ulonglong in_RAX;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  longlong lVar21;
  bool bVar22;
  int local_1d0;
  int iStack_1cc;
  int local_1c8;
  int iStack_1c4;
  longlong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  ulonglong local_1a0;
  ulonglong uStack_198;
  longlong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  int local_168;
  undefined4 uStack_164;
  ulonglong local_158;
  ulonglong uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  longlong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  
  if (*(longlong *)(param_3 + 2) == 0) {
    if (*(longlong *)(param_3 + 4) == 0) {
      if (*(longlong *)(param_3 + 6) == 0) {
        return in_RAX & 0xffffffffffffff00;
      }
      lVar18 = 0;
      lVar17 = 4;
      lVar21 = 0;
      local_1b8 = 0;
      lVar13 = 0x20;
    }
    else {
      lVar21 = 8;
      local_1b8 = 8;
      lVar18 = 0x40;
      lVar13 = 0;
      lVar17 = 0;
    }
  }
  else {
    lVar21 = 4;
    local_1b8 = 4;
    lVar18 = 0x20;
    lVar13 = 0x40;
    lVar17 = 8;
  }
  local_f8 = *(undefined8 *)(lVar18 + param_1);
  uStack_f0 = ((undefined8 *)(lVar18 + param_1))[1];
  puVar1 = (ulonglong *)(lVar13 + param_1);
  puVar3 = (undefined8 *)(lVar18 + 0x10 + param_1);
  local_e8 = *puVar3;
  uStack_e0 = puVar3[1];
  iVar4 = *param_3;
  local_158 = *puVar1;
  uStack_150 = puVar1[1];
  local_d8 = *puVar1;
  uStack_d0 = puVar1[1];
  local_148 = (undefined4)puVar1[2];
  uStack_144 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_140 = (undefined4)puVar1[3];
  uStack_13c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_b8 = *(longlong *)(param_1 + 0x60);
  uStack_b0 = *(undefined8 *)(param_1 + 0x68);
  local_a8 = *(undefined8 *)(param_1 + 0x70);
  uStack_a0 = *(undefined8 *)(param_1 + 0x78);
  local_128 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x78);
  lVar13 = *(longlong *)(param_2 + 0x28) + (longlong)iVar4 * 0x14;
  iVar12 = *(int *)(lVar13 + 0xc);
  local_138 = *(longlong *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x68);
  uStack_164 = 0;
  lVar13 = *(longlong *)(param_2 + 0x38) + (longlong)*(int *)(lVar13 + 4) * 0xc;
  iVar11 = *(int *)(lVar21 + lVar13);
  iStack_1c4 = *(int *)(lVar17 + lVar13);
  local_1c0 = lVar17;
  local_168 = iVar12;
  local_c8 = local_148;
  uStack_c4 = uStack_144;
  uStack_c0 = uStack_140;
  uStack_bc = uStack_13c;
  local_98 = local_a8;
  uStack_90 = uStack_a0;
  local_88 = local_b8;
  uStack_80 = uStack_b0;
  local_78 = local_d8;
  uStack_70 = uStack_d0;
  local_68 = local_148;
  uStack_64 = uStack_144;
  uStack_60 = uStack_140;
  uStack_5c = uStack_13c;
  local_1c8 = iVar11;
  FUN_144ccf3e0(&local_138,iStack_1c4,&local_1b0);
  local_180 = puVar1[2];
  local_188 = puVar1[3];
  local_178 = *puVar1;
  local_170 = puVar1[1];
  local_148 = (int)puVar1[2];
  uStack_144 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_140 = (int)puVar1[3];
  uStack_13c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  iStack_4c = iVar12;
  local_158 = local_178;
  uStack_150 = puVar1[1];
  bVar20 = 0;
  bVar9 = (longlong)
          ((puVar1[3] - uStack_198) -
          (ulonglong)
          (puVar1[2] < local_1a0 ||
          puVar1[2] - local_1a0 <
          (ulonglong)
          (puVar1[1] < uStack_1a8 || puVar1[1] - uStack_1a8 < (ulonglong)(*puVar1 < local_1b0)))) <
          0;
  while( true ) {
    uVar6 = local_170;
    puVar2 = (undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iStack_4c * 0x14);
    local_58 = *puVar2;
    iStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    iStack_4c = puVar2[3];
    local_138 = local_88;
    uStack_130 = uStack_80;
    lVar13 = *(longlong *)(param_2 + 0x38) + (longlong)iStack_54 * 0xc;
    iVar12 = *(int *)(lVar21 + lVar13);
    iVar5 = *(int *)(lVar17 + lVar13);
    local_128 = local_98;
    uStack_120 = uStack_90;
    local_1d0 = iVar12;
    iStack_1cc = iVar5;
    FUN_144ccf3e0(&local_138,iVar5,&local_1b0);
    lVar17 = (longlong)iStack_1c4;
    bVar22 = (longlong)
             ((local_188 - uStack_198) -
             (ulonglong)
             (local_180 < local_1a0 ||
             local_180 - local_1a0 <
             (ulonglong)
             (uVar6 < uStack_1a8 || uVar6 - uStack_1a8 < (ulonglong)(local_178 < local_1b0)))) < 0;
    iVar14 = iVar5 - iStack_1c4;
    FUN_147e5f6f6(&local_d8,iVar12 - iVar11,&local_1b0,1);
    FUN_147e5f6f6(&local_f8,iVar14,&local_158,1);
    uVar15 = local_158 - local_1b0;
    uVar19 = (uStack_150 - uStack_1a8) - (ulonglong)(local_158 < local_1b0);
    uVar6 = (ulonglong)
            (uStack_150 < uStack_1a8 || uStack_150 - uStack_1a8 < (ulonglong)(local_158 < local_1b0)
            );
    uVar7 = CONCAT44(uStack_144,local_148) - local_1a0;
    local_118 = uVar7 - uVar6;
    uVar6 = (ulonglong)(CONCAT44(uStack_144,local_148) < local_1a0 || uVar7 < uVar6);
    uVar7 = CONCAT44(uStack_13c,uStack_140) - uStack_198;
    local_110 = uVar7 - uVar6;
    local_108 = (local_138 - local_190) -
                (ulonglong)(CONCAT44(uStack_13c,uStack_140) < uStack_198 || uVar7 < uVar6);
    FUN_144d19010(&local_b8,(longlong)iVar11 * (longlong)iVar5 - lVar17 * iVar12,&local_1b0);
    uVar6 = (ulonglong)(local_1b0 < uVar15);
    uVar8 = uStack_1a8 - uVar19;
    uVar7 = (ulonglong)(uStack_1a8 < uVar19 || uVar8 < uVar6);
    uVar19 = (ulonglong)(local_1a0 < local_118 || local_1a0 - local_118 < uVar7);
    lVar17 = (local_190 - local_108) -
             (ulonglong)(uStack_198 < local_110 || uStack_198 - local_110 < uVar19);
    uVar16 = (uint)(lVar17 != 0 ||
                   ((local_1a0 - local_118 != uVar7 || (uVar8 != uVar6 || local_1b0 != uVar15)) ||
                   uStack_198 - local_110 != uVar19)) | (uint)(lVar17 >> 0x3f);
    if (uVar16 == 0) {
      iVar11 = FUN_14502aec0(&local_1c8,&local_f8);
      iVar12 = FUN_14502aec0(&local_1d0,&local_f8);
      if (iVar12 * iVar11 < 1) {
        return CONCAT71((uint7)(uint3)((uint)(iVar12 * iVar11) >> 8),1);
      }
      local_188 = CONCAT44(uStack_bc,uStack_c0);
      local_180 = CONCAT44(uStack_c4,local_c8);
      local_98 = local_a8;
      uStack_90 = uStack_a0;
      local_178 = local_d8;
      local_88 = local_b8;
      uStack_80 = uStack_b0;
      local_170 = uStack_d0;
      local_68 = local_c8;
      uStack_64 = uStack_c4;
      uStack_60 = uStack_c0;
      uStack_5c = uStack_bc;
      local_78 = local_d8;
      uStack_70 = uStack_d0;
    }
    bVar10 = bVar20 + 1;
    if ((int)(uVar16 * ((uint)bVar22 - (uint)bVar9)) < 1) {
      bVar10 = bVar20;
    }
    if (local_168 == iVar4) break;
    local_168 = iStack_4c;
    local_1c8 = local_1d0;
    iStack_1c4 = iStack_1cc;
    uStack_164 = 0;
    lVar17 = local_1c0;
    lVar21 = local_1b8;
    local_148 = local_68;
    uStack_144 = uStack_64;
    uStack_140 = uStack_60;
    uStack_13c = uStack_5c;
    local_158 = local_78;
    uStack_150 = uStack_70;
    bVar20 = bVar10;
    iVar11 = local_1d0;
    bVar9 = bVar22;
  }
  return (ulonglong)(bVar10 & 1);
}



// FUNCTION 14502a740 FUN_14502a740 body=1279 status=ok
// SIG undefined FUN_14502a740(void)

ulonglong FUN_14502a740(ulonglong *param_1,longlong param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong in_RAX;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  ulonglong local_170;
  ulonglong uStack_168;
  ulonglong local_160;
  ulonglong uStack_158;
  longlong local_150;
  undefined8 local_148;
  int local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  int local_f8;
  undefined4 uStack_f4;
  int local_f0;
  int iStack_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  
  if (*(longlong *)(param_3 + 6) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_a8 = *param_1;
  uStack_a0 = param_1[1];
  local_98 = param_1[2];
  uStack_90 = param_1[3];
  local_138 = (undefined4)param_1[4];
  uStack_134 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_130 = (undefined4)param_1[5];
  uStack_12c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_128 = (undefined4)param_1[6];
  uStack_124 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_120 = (undefined4)param_1[7];
  uStack_11c = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_88 = param_1[4];
  uStack_80 = param_1[5];
  local_78 = param_1[6];
  uStack_70 = param_1[7];
  local_68 = param_1[0xc];
  uStack_60 = param_1[0xd];
  local_108 = param_1[0xe];
  uStack_100 = param_1[0xf];
  lVar6 = *(longlong *)(param_2 + 0x28) + (longlong)*param_3 * 0x14;
  iVar2 = *(int *)(lVar6 + 0xc);
  lVar6 = (longlong)*(int *)(lVar6 + 4);
  local_118 = param_1[0xc];
  uStack_110 = param_1[0xd];
  uStack_f4 = 0;
  iVar12 = *(int *)(*(longlong *)(param_2 + 0x38) + lVar6 * 0xc);
  local_148._4_4_ = *(int *)(*(longlong *)(param_2 + 0x38) + 4 + lVar6 * 0xc);
  local_f8 = iVar2;
  local_58 = local_108;
  uStack_50 = uStack_100;
  local_148._0_4_ = iVar12;
  FUN_144ccf3e0(&local_118,local_148._4_4_,&local_170);
  local_138 = (undefined4)*param_1;
  uStack_134 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_130 = (undefined4)param_1[1];
  uStack_12c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_128 = (undefined4)param_1[2];
  uStack_124 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_120 = (undefined4)param_1[3];
  uStack_11c = *(undefined4 *)((longlong)param_1 + 0x1c);
  bVar13 = param_1[4] < local_170;
  local_118 = param_1[0xc];
  uStack_110 = param_1[0xd];
  bVar14 = param_1[5] < uStack_168;
  uVar4 = param_1[5] - uStack_168;
  bVar15 = param_1[6] < local_160;
  uVar5 = param_1[6] - local_160;
  local_108 = param_1[0xe];
  uStack_100 = param_1[0xf];
  lVar6 = param_1[7] - uStack_158;
  FUN_144ccf3e0(&local_118,iVar12,&local_170);
  bVar14 = (longlong)(lVar6 - (ulonglong)(bVar15 || uVar5 < (bVar14 || uVar4 < bVar13))) < 0;
  iStack_bc = iVar2;
  bVar10 = 0;
  bVar13 = (longlong)
           ((param_1[3] - uStack_158) -
           (ulonglong)
           (param_1[2] < local_160 ||
           param_1[2] - local_160 <
           (ulonglong)
           (param_1[1] < uStack_168 || param_1[1] - uStack_168 < (ulonglong)(*param_1 < local_170)))
           ) < 0;
  while( true ) {
    local_138 = (undefined4)param_1[4];
    uStack_134 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_130 = (undefined4)param_1[5];
    uStack_12c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_128 = (undefined4)param_1[6];
    uStack_124 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_120 = (undefined4)param_1[7];
    uStack_11c = *(undefined4 *)((longlong)param_1 + 0x3c);
    local_108 = param_1[0xe];
    uStack_100 = param_1[0xf];
    puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iStack_bc * 0x14);
    local_c8 = *puVar1;
    iStack_c4 = puVar1[1];
    uStack_c0 = puVar1[2];
    iStack_bc = puVar1[3];
    local_118 = param_1[0xc];
    uStack_110 = param_1[0xd];
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x38) + 4 + (longlong)iStack_c4 * 0xc);
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x38) + (longlong)iStack_c4 * 0xc);
    local_f0 = iVar3;
    iStack_ec = iVar2;
    FUN_144ccf3e0(&local_118,iVar2,&local_170);
    local_138 = (undefined4)*param_1;
    uStack_134 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_130 = (undefined4)param_1[1];
    uStack_12c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_128 = (undefined4)param_1[2];
    uStack_124 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_120 = (undefined4)param_1[3];
    uStack_11c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_118 = param_1[0xc];
    uStack_110 = param_1[0xd];
    local_108 = param_1[0xe];
    uStack_100 = param_1[0xf];
    bVar15 = (longlong)
             ((param_1[7] - uStack_158) -
             (ulonglong)
             (param_1[6] < local_160 ||
             param_1[6] - local_160 <
             (ulonglong)
             (param_1[5] < uStack_168 ||
             param_1[5] - uStack_168 < (ulonglong)(param_1[4] < local_170)))) < 0;
    FUN_144ccf3e0(&local_118,iVar3,&local_170);
    bVar16 = (longlong)
             ((param_1[3] - uStack_158) -
             (ulonglong)
             (param_1[2] < local_160 ||
             param_1[2] - local_160 <
             (ulonglong)
             (param_1[1] < uStack_168 || param_1[1] - uStack_168 < (ulonglong)(*param_1 < local_170)
             ))) < 0;
    bVar11 = bVar10;
    if (((bVar13) || (bVar16)) && (local_13c = (uint)bVar15 - (uint)bVar14, local_13c != 0)) {
      lVar6 = (longlong)local_148._4_4_;
      iVar9 = iVar2 - local_148._4_4_;
      FUN_147e5f6f6(&local_88,iVar3 - iVar12,&local_170,1);
      FUN_147e5f6f6(&local_a8,iVar9,&local_138,1);
      local_148 = CONCAT44(uStack_134,local_138) - local_170;
      uVar4 = (ulonglong)(CONCAT44(uStack_134,local_138) < local_170);
      uVar5 = CONCAT44(uStack_12c,uStack_130) - uStack_168;
      local_e8 = uVar5 - uVar4;
      uVar4 = (ulonglong)(CONCAT44(uStack_12c,uStack_130) < uStack_168 || uVar5 < uVar4);
      uVar5 = CONCAT44(uStack_124,local_128) - local_160;
      local_e0 = uVar5 - uVar4;
      uVar4 = (ulonglong)(CONCAT44(uStack_124,local_128) < local_160 || uVar5 < uVar4);
      uVar5 = CONCAT44(uStack_11c,uStack_120) - uStack_158;
      local_d8 = uVar5 - uVar4;
      local_d0 = (local_118 - local_150) -
                 (ulonglong)(CONCAT44(uStack_11c,uStack_120) < uStack_158 || uVar5 < uVar4);
      FUN_144d19010(&local_68,(longlong)iVar2 * (longlong)iVar12 - iVar3 * lVar6,&local_170);
      uVar4 = (ulonglong)
              (uStack_168 < local_e8 || uStack_168 - local_e8 < (ulonglong)(local_170 < local_148));
      uVar5 = (ulonglong)(local_160 < local_e0 || local_160 - local_e0 < uVar4);
      lVar6 = (local_150 - local_d0) -
              (ulonglong)(uStack_158 < local_d8 || uStack_158 - local_d8 < uVar5);
      uVar8 = (uint)(lVar6 != 0 ||
                    ((local_160 - local_e0 != uVar4 ||
                     (uStack_168 - local_e8 != (ulonglong)(local_170 < local_148) ||
                     local_170 != local_148)) || uStack_158 - local_d8 != uVar5)) |
              (uint)(lVar6 >> 0x3f);
      if (uVar8 == 0) {
        lVar6 = (longlong)iVar9 * (longlong)(iVar3 - iVar12);
        bVar7 = 0;
        if (lVar6 != 0) {
          bVar7 = (byte)((ulonglong)lVar6 >> 0x3f) ^ 1;
        }
        bVar11 = bVar10 + 1;
        if (bVar7 == 0) {
          bVar11 = bVar10;
        }
      }
      else if (0 < (int)(uVar8 * local_13c)) {
        bVar11 = bVar10 + 1;
      }
    }
    if (local_f8 == *param_3) break;
    local_f8 = iStack_bc;
    local_148._0_4_ = local_f0;
    local_148._4_4_ = iStack_ec;
    uStack_f4 = 0;
    bVar14 = bVar15;
    bVar10 = bVar11;
    iVar12 = local_f0;
    bVar13 = bVar16;
  }
  return (ulonglong)(bVar11 & 1);
}



// FUNCTION 14502ac40 FUN_14502ac40 body=273 status=ok
// SIG undefined FUN_14502ac40(void)

void FUN_14502ac40(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar4 = param_2[1];
  if (uVar4 != (int)param_1[1] - 1U) {
    lVar7 = FUN_14502ae10(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0xc);
    *(uint *)(lVar7 + 4) = uVar4;
  }
  lVar7 = param_1[1];
  uVar6 = (int)lVar7 - 1;
  *(uint *)(param_1 + 1) = uVar6;
  if (uVar6 != uVar4) {
    puVar1 = (undefined8 *)(*param_1 + ((longlong)(int)lVar7 + -1) * 0xc);
    puVar2 = (undefined8 *)(*param_1 + (longlong)(int)uVar4 * 0xc);
    if ((puVar2 != puVar1) && (puVar2 != (undefined8 *)0x0)) {
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
    }
  }
  lVar7 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar7 >> 3) + 1U & uVar9;
  puVar3 = (uint *)(lVar7 + uVar8 * 8);
  iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  while (-1 < iVar5) {
    lVar7 = lVar7 + ((ulonglong)*puVar3 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar7 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar3 - lVar7 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar3;
      param_2 = puVar3;
    }
    lVar7 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar3 - lVar7 >> 3) + 1U & uVar9;
    puVar3 = (uint *)(lVar7 + uVar8 * 8);
    iVar5 = *(int *)(lVar7 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 14502ad60 FUN_14502ad60 body=164 status=ok
// SIG undefined FUN_14502ad60(void)

longlong FUN_14502ad60(ulonglong *param_1,undefined8 *param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  FUN_144c230a0(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar5 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144c23ae0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    uVar3 = *param_1;
    puVar1 = (undefined8 *)(uVar3 + (longlong)(int)param_1[1] * 0xc);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_2;
      uVar3 = (ulonglong)*param_3;
      *(uint *)(puVar1 + 1) = *param_3;
    }
    *(int *)(param_1 + 1) = iVar5;
    lVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    uVar2 = *param_3;
    *(uint *)(*param_1 + 8 + (longlong)local_res8[0] * 0xc) = uVar2;
    lVar4 = (ulonglong)(uint3)(uVar2 >> 8) << 8;
  }
  return lVar4;
}



// FUNCTION 14502ae10 FUN_14502ae10 body=162 status=ok
// SIG undefined FUN_14502ae10(void)

uint * FUN_14502ae10(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  uVar7 = iVar1 * -0x61c8864f;
  uVar6 = iVar2 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | iVar2 * -0x4f000000;
  lVar3 = param_1[2];
  uVar7 = uVar7 ^ uVar7 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9;
  uVar4 = (ulonglong)(*(uint *)(param_1 + 3) & uVar7);
  uVar6 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  while( true ) {
    if ((int)uVar6 < 0) {
      return (uint *)0x0;
    }
    puVar5 = (uint *)(lVar3 + uVar4 * 8);
    if (((*puVar5 == uVar7) && (*(int *)(*param_1 + (ulonglong)uVar6 * 0xc) == iVar1)) &&
       (*(int *)(*param_1 + 4 + (ulonglong)uVar6 * 0xc) == iVar2)) break;
    uVar4 = ((longlong)puVar5 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar6 = *(uint *)(lVar3 + 4 + uVar4 * 8);
  }
  return puVar5;
}



// FUNCTION 14502aec0 FUN_14502aec0 body=527 status=ok
// SIG undefined FUN_14502aec0(void)

ulonglong FUN_14502aec0(undefined4 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  ulonglong uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2[0xb] == 0 && ((param_2[9] == 0 && param_2[8] == 1) && param_2[10] == 0)) {
    uVar7 = FUN_14502b2f0(param_1,param_2);
  }
  else {
    local_48 = (undefined4)*param_2;
    uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
    uVar4 = *param_2;
    uStack_40 = (undefined4)param_2[1];
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar1 = param_2[1];
    local_38 = (undefined4)param_2[2];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar5 = param_2[2];
    uStack_30 = (undefined4)param_2[3];
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar6 = param_2[3];
    local_28 = param_2[8];
    uStack_20 = param_2[9];
    local_18 = (undefined4)param_2[10];
    uStack_14 = *(undefined4 *)((longlong)param_2 + 0x54);
    uStack_10 = (undefined4)param_2[0xb];
    uStack_c = *(undefined4 *)((longlong)param_2 + 0x5c);
    FUN_144ccf3e0(&local_28,*param_1,&local_78);
    uVar7 = (ulonglong)(local_78 < uVar4);
    uVar2 = local_70 - uVar1;
    uVar1 = (ulonglong)(local_70 < uVar1 || uVar2 < uVar7);
    uVar3 = local_68 - uVar5;
    lVar9 = (local_60 - uVar6) - (ulonglong)(local_68 < uVar5 || uVar3 < uVar1);
    uVar8 = (uint)(lVar9 >> 0x3f) |
            (uint)((uVar3 != uVar1 || (uVar2 != uVar7 || local_78 != uVar4)) || lVar9 != 0);
    if (uVar8 == 0) {
      local_48 = (undefined4)param_2[4];
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar4 = param_2[4];
      uStack_40 = (undefined4)param_2[5];
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
      uVar1 = param_2[5];
      local_38 = (undefined4)param_2[6];
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
      uVar5 = param_2[6];
      uStack_30 = (undefined4)param_2[7];
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
      uVar6 = param_2[7];
      local_28 = param_2[8];
      uStack_20 = param_2[9];
      local_18 = (undefined4)param_2[10];
      uStack_14 = *(undefined4 *)((longlong)param_2 + 0x54);
      uStack_10 = (undefined4)param_2[0xb];
      uStack_c = *(undefined4 *)((longlong)param_2 + 0x5c);
      FUN_144ccf3e0(&local_28,param_1[1],&local_78);
      uVar7 = (ulonglong)(local_78 < uVar4);
      uVar2 = local_70 - uVar1;
      uVar1 = (ulonglong)(local_70 < uVar1 || uVar2 < uVar7);
      uVar3 = local_68 - uVar5;
      lVar9 = (local_60 - uVar6) - (ulonglong)(local_68 < uVar5 || uVar3 < uVar1);
      uVar8 = (uint)((uVar3 != uVar1 || (uVar2 != uVar7 || local_78 != uVar4)) || lVar9 != 0) |
              (uint)(lVar9 >> 0x3f);
    }
    uVar7 = (ulonglong)uVar8;
  }
  return uVar7;
}



// FUNCTION 14502b0d0 FUN_14502b0d0 body=262 status=ok
// SIG undefined FUN_14502b0d0(void)

ulonglong FUN_14502b0d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x30,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x30);
  uVar3 = uVar4 * 0x30 + 0x30;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x30;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x30);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 14502b1e0 FUN_14502b1e0 body=262 status=ok
// SIG undefined FUN_14502b1e0(void)

ulonglong FUN_14502b1e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar6 * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x14,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x14);
  uVar3 = uVar4 * 0x14 + 0x14;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x14;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x14;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x14;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x14);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 14502b2f0 FUN_14502b2f0 body=219 status=ok
// SIG undefined FUN_14502b2f0(void)

uint FUN_14502b2f0(int *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar4 = (ulonglong)*param_1;
  uVar7 = (longlong)uVar4 >> 0x3f;
  uVar2 = uVar7 - param_2[1];
  uVar1 = (ulonglong)(uVar7 < param_2[1] || uVar2 < (uVar4 < *param_2));
  uVar3 = uVar7 - param_2[2];
  lVar8 = (uVar7 - param_2[3]) - (ulonglong)(uVar7 < param_2[2] || uVar3 < uVar1);
  uVar6 = (uint)(lVar8 >> 0x3f) |
          (uint)((uVar3 != uVar1 || (uVar2 != uVar4 < *param_2 || uVar4 != *param_2)) || lVar8 != 0)
  ;
  if (uVar6 != 0) {
    return uVar6;
  }
  uVar7 = (ulonglong)param_1[1];
  uVar5 = (longlong)uVar7 >> 0x3f;
  uVar1 = (ulonglong)(uVar7 < param_2[4]);
  uVar3 = uVar5 - param_2[5];
  uVar2 = (ulonglong)(uVar5 < param_2[5] || uVar3 < uVar1);
  uVar4 = uVar5 - param_2[6];
  lVar8 = (uVar5 - param_2[7]) - (ulonglong)(uVar5 < param_2[6] || uVar4 < uVar2);
  return (uint)(lVar8 >> 0x3f) |
         (uint)((uVar4 != uVar2 || (uVar3 != uVar1 || uVar7 != param_2[4])) || lVar8 != 0);
}



// FUNCTION 14502b3d0 FUN_14502b3d0 body=532 status=ok
// SIG undefined FUN_14502b3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14502b3d0(longlong *param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 local_res8;
  
  local_res8 = 0x28;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"InputArea");
  }
  puVar8 = (undefined8 *)0x0;
  puVar9 = puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[4] = 0;
    puVar6[1] = 0xffffffff;
    *puVar6 = hkaiNavMeshGeneration::InputArea::vftable;
    puVar6[2] = 1;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0x80000000;
    puVar9 = puVar6;
  }
  lVar1 = param_2[1];
  lVar2 = *param_2;
  *param_1 = (longlong)puVar9;
  iVar5 = (int)(lVar1 - lVar2 >> 4);
  if ((int)(*(uint *)((longlong)puVar9 + 0x24) & 0x7fffffff) < iVar5) {
    FUN_14502b9c0(puVar9 + 3,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  if ((*(int *)(puVar9 + 4) < iVar5) || (iVar5 < *(int *)(puVar9 + 4))) {
    *(int *)(puVar9 + 4) = iVar5;
  }
  pfVar7 = (float *)*param_2;
  lVar1 = *(longlong *)(*param_1 + 0x18);
  iVar5 = (int)(param_2[1] - (longlong)pfVar7 >> 4);
  if (0 < iVar5) {
    do {
      fVar15 = *pfVar7;
      fVar3 = pfVar7[1];
      fVar4 = pfVar7[2];
      fVar13 = fVar15 * *param_3 + param_3[0xc] + fVar3 * param_3[4] + fVar4 * param_3[8];
      fVar14 = fVar15 * param_3[1] + param_3[0xd] + fVar3 * param_3[5] + fVar4 * param_3[9];
      fVar15 = fVar15 * param_3[2] + param_3[0xe] + fVar3 * param_3[6] + fVar4 * param_3[10];
      fVar13 = (float)(-(uint)(fVar13 < 0.0) & 0x80000000 ^ _DAT_14c6dad90) + fVar13;
      fVar14 = (float)(-(uint)(fVar14 < 0.0) & 0x80000000 ^ uRam000000014c6dad94) + fVar14;
      fVar15 = (float)(-(uint)(fVar15 < 0.0) & 0x80000000 ^ uRam000000014c6dad98) + fVar15;
      uVar16 = (int)fVar13 ^ -(uint)(2.1474836e+09 <= fVar13);
      uVar17 = (int)fVar14 ^ -(uint)(2.1474836e+09 <= fVar14);
      uVar18 = (int)fVar15 ^ -(uint)(2.1474836e+09 <= fVar15);
      uVar10 = (int)uVar18 >> 0x1f;
      uVar11 = (uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f);
      uVar12 = (uVar17 ^ (int)uVar17 >> 0x1f) - ((int)uVar17 >> 0x1f);
      uVar10 = (uVar18 ^ uVar10) - uVar10;
      uVar18 = -(uint)((int)uVar12 < (int)uVar11);
      uVar11 = ~uVar18 & uVar12 | uVar18 & uVar11;
      uVar12 = -(uint)((int)uVar10 < (int)uVar11);
      if (0x7fffff < (int)(uVar12 & uVar11 | ~uVar12 & uVar10)) {
        return param_1;
      }
      pfVar7 = pfVar7 + 4;
      local_res8 = CONCAT44(uVar17,uVar16);
      *(undefined8 *)(lVar1 + (longlong)puVar8 * 8) = local_res8;
      puVar8 = (undefined8 *)((longlong)puVar8 + 1);
    } while ((longlong)puVar8 < (longlong)iVar5);
    return param_1;
  }
  return param_1;
}



// FUNCTION 14502b5f0 FUN_14502b5f0 body=970 status=ok
// SIG undefined FUN_14502b5f0(void)

ulonglong FUN_14502b5f0(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  undefined8 local_res20;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulonglong *local_140;
  ulonglong uStack_138;
  ulonglong local_130;
  ulonglong uStack_128;
  ulonglong local_120;
  ulonglong uStack_118;
  longlong local_110;
  undefined8 uStack_108;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_b8 = *param_1;
  uStack_b0 = param_1[1];
  local_a8 = param_1[2];
  uStack_a0 = param_1[3];
  local_140 = (ulonglong *)param_1[4];
  uStack_138 = param_1[5];
  bVar10 = 0;
  local_130 = param_1[4];
  uStack_128 = param_1[5];
  uVar9 = *(ulonglong *)
           (*(longlong *)(param_2 + 0x18) + -8 + (longlong)*(int *)(param_2 + 0x20) * 8);
  puVar14 = param_1 + 6;
  local_88 = (undefined4)*puVar14;
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_e8 = *puVar14;
  local_150 = *puVar14;
  local_120 = *puVar14;
  puVar14 = param_1 + 7;
  uStack_148 = (undefined4)*puVar14;
  uStack_144 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_e0 = *puVar14;
  uStack_118 = *puVar14;
  local_110 = param_1[0xc];
  uStack_108 = param_1[0xd];
  local_68 = param_1[0xe];
  uStack_60 = param_1[0xf];
  local_d8 = param_1[0xc];
  uStack_d0 = param_1[0xd];
  local_c8 = param_1[0xe];
  uStack_c0 = param_1[0xf];
  local_res20 = uVar9;
  local_f8 = (ulonglong)local_140;
  uStack_f0 = uStack_138;
  local_98 = local_130;
  uStack_90 = uStack_128;
  uStack_80 = uStack_148;
  uStack_7c = uStack_144;
  local_78 = local_110;
  uStack_70 = uStack_108;
  local_58 = local_68;
  uStack_50 = uStack_60;
  FUN_144ccf3e0(&local_d8,uVar9 >> 0x20,&local_198);
  puVar14 = *(ulonglong **)(param_2 + 0x18);
  bVar16 = local_140 < local_198;
  local_140 = puVar14 + *(int *)(param_2 + 0x20);
  if (puVar14 != local_140) {
    local_168 = local_120;
    local_170 = uStack_118;
    local_158 = local_130;
    local_160 = uStack_128;
    bVar16 = (longlong)
             ((CONCAT44(uStack_144,uStack_148) - uStack_180) -
             (ulonglong)
             (local_150 < local_188 ||
             local_150 - local_188 <
             (ulonglong)(uStack_138 < uStack_190 || uStack_138 - uStack_190 < (ulonglong)bVar16))) <
             0;
    bVar4 = 0;
    do {
      uVar15 = local_158;
      uVar2 = local_160;
      uVar12 = local_168;
      uVar1 = local_170;
      uStack_d0 = uStack_108;
      local_d8 = local_110;
      uStack_f0 = uStack_128;
      local_f8 = local_130;
      uStack_e0 = uStack_118;
      local_e8 = local_120;
      local_c8 = local_58;
      uStack_c0 = uStack_50;
      FUN_144ccf3e0(&local_d8,*(int *)((longlong)puVar14 + 4),&local_198);
      lVar11 = (longlong)local_res20._4_4_;
      bVar17 = (longlong)
               ((uVar1 - uStack_180) -
               (ulonglong)
               (uVar12 < local_188 ||
               uVar12 - local_188 <
               (ulonglong)
               (uVar2 < uStack_190 || uVar2 - uStack_190 < (ulonglong)(uVar15 < local_198)))) < 0;
      iVar6 = *(int *)((longlong)puVar14 + 4) - local_res20._4_4_;
      FUN_147e5f6f6(&local_98,(int)*puVar14 - (int)uVar9,&local_198,1);
      FUN_147e5f6f6(&local_b8,iVar6,&local_f8,1);
      uVar7 = local_f8 - local_198;
      uVar15 = (uStack_f0 - uStack_190) - (ulonglong)(local_f8 < local_198);
      uVar1 = (ulonglong)
              (uStack_f0 < uStack_190 || uStack_f0 - uStack_190 < (ulonglong)(local_f8 < local_198))
      ;
      uVar12 = (local_e8 - local_188) - uVar1;
      uVar1 = (ulonglong)(local_e8 < local_188 || local_e8 - local_188 < uVar1);
      uVar13 = (uStack_e0 - uStack_180) - uVar1;
      local_150 = (local_d8 - local_178) -
                  (ulonglong)(uStack_e0 < uStack_180 || uStack_e0 - uStack_180 < uVar1);
      FUN_144d19010(&local_78,
                    (longlong)(int)uVar9 * (longlong)*(int *)((longlong)puVar14 + 4) -
                    (int)*puVar14 * lVar11,&local_198);
      uVar9 = (ulonglong)(local_198 < uVar7);
      uVar2 = uStack_190 - uVar15;
      uVar1 = (ulonglong)(uStack_190 < uVar15 || uVar2 < uVar9);
      uVar15 = local_188 - uVar12;
      uVar12 = (ulonglong)(local_188 < uVar12 || uVar15 < uVar1);
      uVar3 = uStack_180 - uVar13;
      lVar11 = (local_178 - local_150) - (ulonglong)(uStack_180 < uVar13 || uVar3 < uVar12);
      uVar8 = (uint)(lVar11 != 0 ||
                    ((uVar15 != uVar1 || (uVar2 != uVar9 || local_198 != uVar7)) || uVar3 != uVar12)
                    ) | (uint)(lVar11 >> 0x3f);
      if (uVar8 == 0) {
        iVar6 = FUN_14502aec0(&local_res20,&local_b8);
        iVar5 = FUN_14502aec0(puVar14,&local_b8);
        if (iVar5 * iVar6 < 1) {
          return CONCAT71((uint7)(uint3)((uint)(iVar5 * iVar6) >> 8),1);
        }
        local_170 = CONCAT44(uStack_7c,uStack_80);
        local_168 = CONCAT44(uStack_84,local_88);
        local_120 = CONCAT44(uStack_84,local_88);
        uStack_118 = CONCAT44(uStack_7c,uStack_80);
        local_58 = local_68;
        uStack_50 = uStack_60;
        local_110 = local_78;
        uStack_108 = uStack_70;
        local_160 = uStack_90;
        local_158 = local_98;
        local_130 = local_98;
        uStack_128 = uStack_90;
      }
      uVar9 = *puVar14;
      bVar10 = bVar4 + 1;
      if ((int)(uVar8 * ((uint)bVar17 - (uint)bVar16)) < 1) {
        bVar10 = bVar4;
      }
      puVar14 = puVar14 + 1;
      local_res20 = uVar9;
      bVar16 = bVar17;
      bVar4 = bVar10;
    } while (puVar14 != local_140);
  }
  return (ulonglong)(bVar10 & 1);
}



// FUNCTION 14502b9c0 FUN_14502b9c0 body=247 status=ok
// SIG undefined FUN_14502b9c0(void)

void FUN_14502b9c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 14502bac0 FUN_14502bac0 body=53 status=ok
// SIG undefined FUN_14502bac0(void)

undefined8 FUN_14502bac0(undefined8 param_1)

{
  FUN_14502bbc0();
  return param_1;
}



// FUNCTION 14502bb00 FUN_14502bb00 body=53 status=ok
// SIG undefined FUN_14502bb00(void)

undefined8 FUN_14502bb00(undefined8 param_1)

{
  FUN_14502bbc0();
  return param_1;
}



// FUNCTION 14502bb40 FUN_14502bb40 body=126 status=ok
// SIG undefined FUN_14502bb40(void)

undefined4 *
FUN_14502bb40(undefined4 *param_1,void *param_2,undefined8 param_3,void *param_4,undefined8 param_5,
             uint param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_144beec90(param_3);
  iVar2 = FUN_144beec90(param_5);
  if (0 < (int)param_6) {
    uVar3 = (ulonglong)param_6;
    do {
      memcpy(param_2,param_4,(longlong)iVar1);
      param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
      param_4 = (void *)((longlong)param_4 + (longlong)iVar2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14502bbc0 FUN_14502bbc0 body=888 status=ok
// SIG undefined FUN_14502bbc0(void)

undefined4 *
FUN_14502bbc0(undefined4 *param_1,longlong *param_2,longlong param_3,undefined4 param_4,
             longlong param_5,undefined4 param_6,longlong param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_5 != 0) {
    if (param_3 == param_5) {
      uVar1 = FUN_144beec90();
      iVar2 = (int)param_2[1];
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar2 + 1) {
        FUN_144f9d210(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar2 + 1);
      }
      if ((longlong)(int)param_2[1] * 0x38 + *param_2 != 0) {
        FUN_144f998a0();
      }
      *(int *)(param_2 + 1) = iVar2 + 1;
      plVar6 = (longlong *)((longlong)iVar2 * 0x38 + *param_2);
      (**(code **)(*plVar6 + 8))(plVar6,0);
      if (plVar6 != (longlong *)0x0) {
        FUN_144f99c40(plVar6,param_4,param_6,uVar1);
        *param_1 = 0;
        return param_1;
      }
      goto LAB_14502bf06;
    }
    lVar4 = FUN_144bef4c0(param_3);
    lVar5 = FUN_144bef4c0(param_5);
    if ((((lVar4 != 0) && (lVar5 != 0)) && (*(short *)(lVar4 + 8) != 0)) &&
       (*(short *)(lVar5 + 8) != 0)) {
      if ((((longlong *)(lVar4 + 0x10) != (longlong *)0x0) &&
          ((longlong *)(lVar5 + 0x10) != (longlong *)0x0)) &&
         ((**(char **)(lVar4 + 0x18) == 'v' &&
          ((**(char **)(lVar5 + 0x18) == 'v' &&
           (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar5 + 0x10))))))) {
        iVar2 = FUN_144beec90(param_3);
        iVar3 = FUN_144beec90(param_5);
        if (iVar2 == iVar3) {
          uVar1 = FUN_144beec90(param_3);
          iVar2 = (int)param_2[1];
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar2 + 1) {
            FUN_144f9d210(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar2 + 1);
          }
          if ((longlong)(int)param_2[1] * 0x38 + *param_2 != 0) {
            FUN_144f998a0();
          }
          *(int *)(param_2 + 1) = iVar2 + 1;
          plVar6 = (longlong *)((longlong)iVar2 * 0x38 + *param_2);
          (**(code **)(*plVar6 + 8))(plVar6,0);
          if (plVar6 != (longlong *)0x0) {
            FUN_144f99c40(plVar6,param_4,param_6,uVar1);
            *param_1 = 0;
            return param_1;
          }
LAB_14502bf06:
          *param_1 = 0;
          return param_1;
        }
        if (iVar3 < iVar2) {
          if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 ==
              ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * 2 + -1) {
            iVar2 = (int)param_2[1];
            if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar2 + 1) {
              FUN_144f9d210(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar2 + 1);
            }
            if ((longlong)(int)param_2[1] * 0x38 + *param_2 != 0) {
              FUN_144f998a0();
            }
            *(int *)(param_2 + 1) = iVar2 + 1;
            plVar6 = (longlong *)((longlong)iVar2 * 0x38 + *param_2);
            (**(code **)(*plVar6 + 8))(plVar6,0);
            if (plVar6 != (longlong *)0x0) {
              FUN_144f99960(plVar6,6,param_4,param_3,param_6,param_5);
              *param_1 = 0;
              *plVar6 = (longlong)hkTypeVm::CallInstruction::vftable;
              plVar6[5] = param_7;
              return param_1;
            }
            goto LAB_14502bf06;
          }
        }
        else if ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2 ==
                 ((int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) * 2 + -1) {
          iVar2 = (int)param_2[1];
          if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar2 + 1) {
            FUN_144f9d210(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar2 + 1);
          }
          if ((longlong)(int)param_2[1] * 0x38 + *param_2 != 0) {
            FUN_144f998a0();
          }
          *(int *)(param_2 + 1) = iVar2 + 1;
          plVar6 = (longlong *)((longlong)iVar2 * 0x38 + *param_2);
          (**(code **)(*plVar6 + 8))(plVar6,0);
          if (plVar6 != (longlong *)0x0) {
            FUN_144f99960(plVar6,6,param_4,param_3,param_6,param_5);
            *plVar6 = (longlong)hkTypeVm::CallInstruction::vftable;
            plVar6[5] = (longlong)FUN_14502bb40;
          }
          goto LAB_14502bf06;
        }
      }
    }
  }
  *param_1 = 0x80040200;
  return param_1;
}



// FUNCTION 14502bf40 FUN_14502bf40 body=148 status=ok
// SIG undefined FUN_14502bf40(void)

undefined4 *
FUN_14502bf40(undefined4 *param_1,void *param_2,undefined8 param_3,void *param_4,undefined8 param_5,
             uint param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_144beec90(param_3);
  iVar2 = FUN_144beec90(param_5);
  if (0 < (int)param_6) {
    uVar3 = (ulonglong)param_6;
    do {
      memcpy(param_2,param_4,(longlong)iVar2);
      param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
      param_4 = (void *)((longlong)param_4 + (longlong)iVar2);
      *(undefined4 *)((longlong)param_2 + -4) = 0;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14502bfe0 FUN_14502bfe0 body=148 status=ok
// SIG undefined FUN_14502bfe0(void)

undefined4 *
FUN_14502bfe0(undefined4 *param_1,void *param_2,undefined8 param_3,void *param_4,undefined8 param_5,
             uint param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar1 = FUN_144beec90(param_3);
  iVar2 = FUN_144beec90(param_5);
  if (0 < (int)param_6) {
    uVar3 = (ulonglong)param_6;
    do {
      memcpy(param_2,param_4,(longlong)iVar2);
      param_4 = (void *)((longlong)param_4 + (longlong)iVar2);
      param_2 = (void *)((longlong)param_2 + (longlong)iVar1);
      *(longlong *)((longlong)param_2 + -8) = (longlong)*(int *)((longlong)param_4 + -4);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14502c080 FUN_14502c080 body=4 status=ok
// SIG undefined FUN_14502c080(void)

undefined8 FUN_14502c080(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 14502c090 FUN_14502c090 body=4 status=ok
// SIG undefined FUN_14502c090(void)

undefined8 FUN_14502c090(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 14502c0a0 FUN_14502c0a0 body=585 status=ok
// SIG undefined FUN_14502c0a0(void)

int * FUN_14502c0a0(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  
  puVar8 = (undefined8 *)*param_3;
  iVar11 = (int)param_1[1];
  param_2[1] = (int)param_1[3];
  param_2[2] = (int)param_1[5];
  iVar10 = *(int *)(param_3 + 1);
  *param_2 = iVar11;
  lVar1 = (longlong)iVar10 * 0xc;
  lVar7 = lVar1 / 6 + (lVar1 >> 0x3f);
  puVar9 = (undefined8 *)((longlong)puVar8 + lVar1);
  iVar10 = ((int)(lVar7 >> 1) - (int)(lVar7 >> 0x3f)) + iVar11;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar10) {
    FUN_144d30c20(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  puVar6 = (undefined8 *)(*param_1 + (longlong)iVar11 * 0xc);
  for (; puVar8 != puVar9; puVar8 = (undefined8 *)((longlong)puVar8 + 0xc)) {
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = *puVar8;
      *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar8 + 1);
    }
    puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
  }
  *(int *)(param_1 + 1) = iVar10;
  puVar8 = (undefined8 *)param_3[2];
  lVar1 = param_1[3];
  lVar7 = (longlong)*(int *)(param_3 + 3) * 0x60;
  puVar9 = puVar8 + (longlong)*(int *)(param_3 + 3) * 0xc;
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  iVar11 = ((int)(lVar7 >> 4) - (int)(lVar7 >> 0x3f)) + (int)lVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar11) {
    FUN_144d20a90(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  puVar6 = (undefined8 *)((longlong)(int)lVar1 * 0x60 + param_1[2]);
  for (; puVar8 != puVar9; puVar8 = puVar8 + 0xc) {
    if (puVar6 != (undefined8 *)0x0) {
      uVar5 = puVar8[1];
      *puVar6 = *puVar8;
      puVar6[1] = uVar5;
      uVar5 = puVar8[3];
      puVar6[2] = puVar8[2];
      puVar6[3] = uVar5;
      uVar5 = puVar8[5];
      puVar6[4] = puVar8[4];
      puVar6[5] = uVar5;
      uVar5 = puVar8[7];
      puVar6[6] = puVar8[6];
      puVar6[7] = uVar5;
      uVar2 = *(undefined4 *)((longlong)puVar8 + 0x44);
      uVar3 = *(undefined4 *)(puVar8 + 9);
      uVar4 = *(undefined4 *)((longlong)puVar8 + 0x4c);
      *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar8 + 8);
      *(undefined4 *)((longlong)puVar6 + 0x44) = uVar2;
      *(undefined4 *)(puVar6 + 9) = uVar3;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar4;
      uVar5 = puVar8[0xb];
      puVar6[10] = puVar8[10];
      puVar6[0xb] = uVar5;
    }
    puVar6 = puVar6 + 0xc;
  }
  *(int *)(param_1 + 3) = iVar11;
  lVar1 = param_1[5];
  puVar9 = (undefined8 *)param_3[4];
  puVar8 = puVar9 + (longlong)*(int *)(param_3 + 5) * 0x10;
  iVar11 = *(int *)(param_3 + 5) + (int)lVar1;
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar11) {
    FUN_144cc4ac0(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  puVar6 = (undefined8 *)((longlong)(int)lVar1 * 0x80 + param_1[4]);
  for (; puVar9 != puVar8; puVar9 = puVar9 + 0x10) {
    if (puVar6 != (undefined8 *)0x0) {
      uVar5 = puVar9[1];
      *puVar6 = *puVar9;
      puVar6[1] = uVar5;
      uVar5 = puVar9[3];
      puVar6[2] = puVar9[2];
      puVar6[3] = uVar5;
      uVar5 = puVar9[5];
      puVar6[4] = puVar9[4];
      puVar6[5] = uVar5;
      uVar5 = puVar9[7];
      puVar6[6] = puVar9[6];
      puVar6[7] = uVar5;
      uVar5 = puVar9[9];
      puVar6[8] = puVar9[8];
      puVar6[9] = uVar5;
      uVar5 = puVar9[0xb];
      puVar6[10] = puVar9[10];
      puVar6[0xb] = uVar5;
      uVar5 = puVar9[0xd];
      puVar6[0xc] = puVar9[0xc];
      puVar6[0xd] = uVar5;
      uVar5 = puVar9[0xf];
      puVar6[0xe] = puVar9[0xe];
      puVar6[0xf] = uVar5;
    }
    puVar6 = puVar6 + 0x10;
  }
  *(int *)(param_1 + 5) = iVar11;
  return param_2;
}



// FUNCTION 14502c2f0 FUN_14502c2f0 body=408 status=ok
// SIG undefined FUN_14502c2f0(void)

undefined8 *
FUN_14502c2f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  plVar1 = param_1 + 2;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar2 = param_1 + 4;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *plVar2 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (param_2 != param_1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_14502c620(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (param_3 != plVar1) {
    *(undefined4 *)(param_1 + 3) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 2);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
    FUN_14502c620(param_3,&PTR_vftable_14c6e47a0);
    *plVar1 = *param_3;
    *(int *)(param_1 + 3) = (int)param_3[1];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_3 = 0;
    param_3[1] = 0;
  }
  if (param_4 != plVar2) {
    *(undefined4 *)(param_1 + 5) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
    FUN_14502c620(param_4,&PTR_vftable_14c6e47a0);
    *plVar2 = *param_4;
    *(int *)(param_1 + 5) = (int)param_4[1];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_4 + 0xc);
    *param_4 = 0;
    param_4[1] = 0;
  }
  return param_1;
}



// FUNCTION 14502c490 FUN_14502c490 body=235 status=ok
// SIG undefined FUN_14502c490(void)

longlong FUN_14502c490(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  uint *puVar4;
  
  puVar2 = (uint *)(param_1 + 0xc);
  param_2 = param_2 - param_1;
  lVar3 = 3;
  do {
    puVar4 = (uint *)(param_2 + -0xc + (longlong)puVar2);
    puVar1 = puVar2 + -3;
    if (puVar4 != puVar1) {
      puVar2[-1] = 0;
      if ((-1 < (int)*puVar2) && (*(longlong *)puVar1 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)puVar1,(ulonglong)(*puVar2 & 0x7fffffff) << 2
                  );
      }
      puVar1[0] = 0;
      puVar1[1] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0x80000000;
      FUN_14502c620(puVar4,&PTR_vftable_14c6e47a0);
      *(undefined8 *)puVar1 = *(undefined8 *)puVar4;
      puVar2[-1] = *(uint *)(param_2 + -4 + (longlong)puVar2);
      *puVar2 = *(uint *)((longlong)puVar2 + param_2);
      puVar4[0] = 0;
      puVar4[1] = 0;
      *(undefined4 *)(param_2 + -4 + (longlong)puVar2) = 0;
      *(undefined4 *)((longlong)puVar2 + param_2) = 0;
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 14502c580 FUN_14502c580 body=31 status=ok
// SIG undefined FUN_14502c580(void)

undefined4 * FUN_14502c580(longlong param_1,undefined4 *param_2,uint param_3)

{
  *param_2 = *(undefined4 *)
              (*(longlong *)(param_1 + (ulonglong)(param_3 >> 0x1e) * 0x10) +
              (ulonglong)(param_3 & 0x3fffffff) * 4);
  return param_2;
}



// FUNCTION 14502c5a0 FUN_14502c5a0 body=114 status=ok
// SIG undefined FUN_14502c5a0(void)

void FUN_14502c5a0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 6;
  for (; param_1 != plVar1; param_1 = param_1 + 2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  }
  return;
}



// FUNCTION 14502c620 FUN_14502c620 body=103 status=ok
// SIG undefined FUN_14502c620(void)

void FUN_14502c620(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 14502c690 FUN_14502c690 body=12 status=ok
// SIG undefined FUN_14502c690(void)

void FUN_14502c690(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 14502c6a0 FUN_14502c6a0 body=205 status=ok
// SIG undefined FUN_14502c6a0(void)

void FUN_14502c6a0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) * 0x60);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 7);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  return;
}



// FUNCTION 14502c770 FUN_14502c770 body=27 status=ok
// SIG undefined FUN_14502c770(void)

uint FUN_14502c770(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0x3fffffff;
  if (param_2 >> 0x1e != 1) {
    if (param_2 >> 0x1e != 2) {
      return uVar1;
    }
    uVar1 = uVar1 + *(int *)(param_1 + 0x18);
  }
  return uVar1 + *(int *)(param_1 + 8);
}



// FUNCTION 14502c790 FUN_14502c790 body=46 status=ok
// SIG undefined FUN_14502c790(void)

uint * FUN_14502c790(longlong param_1,uint *param_2,uint param_3)

{
  if (*(int *)(param_1 + 8) <= (int)param_3) {
    param_3 = param_3 - *(int *)(param_1 + 8);
    if ((int)param_3 < *(int *)(param_1 + 0x18)) {
      *param_2 = param_3 | 0x40000000;
      return param_2;
    }
    param_3 = param_3 - *(int *)(param_1 + 0x18) | 0x80000000;
  }
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 14502c7c0 FUN_14502c7c0 body=439 status=ok
// SIG undefined FUN_14502c7c0(void)

longlong * FUN_14502c7c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 8);
  if ((int)(*(uint *)((longlong)param_1 + 0x14) & 0x7fffffff) < iVar1) {
    FUN_145030330(param_1 + 1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = (int)param_1[2];
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 2) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar3 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar4 = (undefined4 *)(param_1[1] + (longlong)iVar2 * 4);
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xffffffff;
        }
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 2) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x18);
  if ((int)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) < iVar1) {
    FUN_145030330(param_1 + 3,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = (int)param_1[4];
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 4) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar3 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar4 = (undefined4 *)(param_1[3] + (longlong)iVar2 * 4);
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xffffffff;
        }
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 4) = iVar1;
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if ((int)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) < iVar1) {
    FUN_145030330(param_1 + 5,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  iVar2 = (int)param_1[6];
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 6) = iVar1;
    if (0 < iVar1 - iVar2) {
      uVar3 = (ulonglong)(uint)(iVar1 - iVar2);
      puVar4 = (undefined4 *)(param_1[5] + (longlong)iVar2 * 4);
      do {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0xffffffff;
        }
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
    }
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 6) = iVar1;
  }
  return param_1;
}



// FUNCTION 14502c980 FUN_14502c980 body=59 status=ok
// SIG undefined FUN_14502c980(void)

void FUN_14502c980(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 0x1e;
  lVar2 = *(longlong *)(param_1 + 8 + (ulonglong)uVar3 * 0x10);
  if (*(int *)(lVar2 + (ulonglong)(param_2 & 0x3fffffff) * 4) == -1) {
    uVar1 = *(uint *)(param_1 + 0x38 + (ulonglong)uVar3 * 4);
    *(uint *)(param_1 + 0x38 + (ulonglong)uVar3 * 4) = uVar1 + 1;
    *(uint *)(lVar2 + (ulonglong)(param_2 & 0x3fffffff) * 4) = uVar3 << 0x1e | uVar1;
  }
  return;
}



// FUNCTION 14502c9c0 FUN_14502c9c0 body=92 status=ok
// SIG undefined FUN_14502c9c0(void)

void FUN_14502c9c0(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_3 >> 0x1e;
  lVar2 = *(longlong *)(param_1 + 8 + (ulonglong)uVar3 * 0x10);
  uVar4 = *(uint *)(lVar2 + (ulonglong)(param_3 & 0x3fffffff) * 4);
  if (uVar4 == 0xffffffff) {
    uVar1 = *(uint *)(param_1 + 0x38 + (ulonglong)uVar3 * 4);
    uVar4 = uVar3 << 0x1e | uVar1;
    *(uint *)(param_1 + 0x38 + (ulonglong)uVar3 * 4) = uVar1 + 1;
    *(uint *)(lVar2 + (ulonglong)(param_3 & 0x3fffffff) * 4) = uVar4;
  }
  *(uint *)(*(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 0x1e) * 0x10) +
           (ulonglong)(param_2 & 0x3fffffff) * 4) = uVar4;
  return;
}



// FUNCTION 14502ca20 FUN_14502ca20 body=1125 status=ok
// SIG undefined FUN_14502ca20(void)

void FUN_14502ca20(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong local_38;
  int local_30;
  uint local_2c;
  longlong local_28;
  int local_20;
  uint local_1c;
  longlong local_18;
  int local_10;
  uint local_c;
  
  lVar16 = 0;
  iVar3 = (int)param_1[7];
  local_38 = 0;
  local_2c = 0x80000000;
  uVar15 = 0;
  puVar10 = *(undefined8 **)*param_1;
  local_30 = 0;
  if (((0 < iVar3) &&
      (FUN_144d30c20(&local_38,&PTR_vftable_14c6e47a0,(longlong)iVar3), local_30 < iVar3)) ||
     (iVar3 < local_30)) {
    local_30 = iVar3;
  }
  lVar14 = param_1[2];
  lVar13 = param_1[1];
  lVar9 = lVar16;
  if (0 < (longlong)(int)lVar14) {
    do {
      uVar12 = *(uint *)(lVar13 + lVar9 * 4);
      if ((uVar12 != 0xffffffff) && (uVar12 < 0x40000000)) {
        puVar1 = (undefined8 *)(local_38 + (ulonglong)(uVar12 & 0x3fffffff) * 0xc);
        *puVar1 = *puVar10;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar10 + 1);
      }
      lVar9 = lVar9 + 1;
      puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
    } while (lVar9 < (int)lVar14);
  }
  plVar11 = (longlong *)*param_1;
  lVar13 = local_38;
  uVar12 = local_2c;
  if (&local_38 != plVar11) {
    *(undefined4 *)(plVar11 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar11 + 0xc)) && (*plVar11 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar11,
                 (ulonglong)(*(uint *)((longlong)plVar11 + 0xc) & 0x7fffffff) * 0xc);
    }
    *plVar11 = 0;
    *(undefined4 *)(plVar11 + 1) = 0;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 0x80000000;
    FUN_147e549a6(&local_38,&PTR_vftable_14c6e47a0);
    *plVar11 = local_38;
    *(int *)(plVar11 + 1) = local_30;
    *(uint *)((longlong)plVar11 + 0xc) = local_2c;
    lVar13 = lVar16;
    uVar12 = uVar15;
  }
  if ((-1 < (int)uVar12) && (lVar13 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar13,(ulonglong)(uVar12 & 0x7fffffff) * 0xc);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x3c);
  local_28 = 0;
  local_1c = 0x80000000;
  puVar10 = *(undefined8 **)(*param_1 + 0x10);
  local_20 = 0;
  if (((0 < iVar3) &&
      (FUN_144d20a90(&local_28,&PTR_vftable_14c6e47a0,(longlong)iVar3), local_20 < iVar3)) ||
     (iVar3 < local_20)) {
    local_20 = iVar3;
  }
  lVar14 = param_1[4];
  lVar13 = param_1[3];
  lVar9 = lVar16;
  if (0 < (longlong)(int)lVar14) {
    do {
      uVar12 = *(uint *)(lVar13 + lVar9 * 4);
      if ((uVar12 != 0xffffffff) && ((uVar12 & 0xc0000000) == 0x40000000)) {
        uVar7 = puVar10[1];
        lVar8 = (ulonglong)(uVar12 & 0x3fffffff) * 0x60;
        *(undefined8 *)(lVar8 + local_28) = *puVar10;
        ((undefined8 *)(lVar8 + local_28))[1] = uVar7;
        uVar7 = puVar10[3];
        puVar1 = (undefined8 *)(lVar8 + 0x10 + local_28);
        *puVar1 = puVar10[2];
        puVar1[1] = uVar7;
        uVar7 = puVar10[5];
        puVar1 = (undefined8 *)(lVar8 + 0x20 + local_28);
        *puVar1 = puVar10[4];
        puVar1[1] = uVar7;
        uVar7 = puVar10[7];
        puVar1 = (undefined8 *)(lVar8 + 0x30 + local_28);
        *puVar1 = puVar10[6];
        puVar1[1] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar10 + 0x44);
        uVar5 = *(undefined4 *)(puVar10 + 9);
        uVar6 = *(undefined4 *)((longlong)puVar10 + 0x4c);
        puVar2 = (undefined4 *)(lVar8 + 0x40 + local_28);
        *puVar2 = *(undefined4 *)(puVar10 + 8);
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        uVar7 = puVar10[0xb];
        puVar1 = (undefined8 *)(lVar8 + 0x50 + local_28);
        *puVar1 = puVar10[10];
        puVar1[1] = uVar7;
      }
      lVar9 = lVar9 + 1;
      puVar10 = puVar10 + 0xc;
    } while (lVar9 < (int)lVar14);
  }
  lVar13 = *param_1;
  plVar11 = (longlong *)(lVar13 + 0x10);
  lVar14 = local_28;
  uVar12 = local_1c;
  if (&local_28 != plVar11) {
    *(undefined4 *)(lVar13 + 0x18) = 0;
    if ((-1 < (int)*(uint *)(lVar13 + 0x1c)) && (*plVar11 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar11,
                 (ulonglong)(*(uint *)(lVar13 + 0x1c) & 0x7fffffff) * 0x60);
    }
    *plVar11 = 0;
    *(undefined4 *)(lVar13 + 0x18) = 0;
    *(undefined4 *)(lVar13 + 0x1c) = 0x80000000;
    FUN_147e54a10(&local_28,&PTR_vftable_14c6e47a0);
    *plVar11 = local_28;
    *(int *)(lVar13 + 0x18) = local_20;
    *(uint *)(lVar13 + 0x1c) = local_1c;
    lVar14 = lVar16;
    uVar12 = uVar15;
  }
  if ((-1 < (int)uVar12) && (lVar14 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar14,(ulonglong)(uVar12 & 0x7fffffff) * 0x60);
  }
  iVar3 = (int)param_1[8];
  local_18 = 0;
  local_c = 0x80000000;
  puVar10 = *(undefined8 **)(*param_1 + 0x20);
  local_10 = 0;
  if (((0 < iVar3) &&
      (FUN_144cc4ac0(&local_18,&PTR_vftable_14c6e47a0,(longlong)iVar3), local_10 < iVar3)) ||
     (iVar3 < local_10)) {
    local_10 = iVar3;
  }
  lVar14 = param_1[6];
  lVar13 = param_1[5];
  lVar9 = lVar16;
  if (0 < (longlong)(int)lVar14) {
    do {
      uVar12 = *(uint *)(lVar13 + lVar9 * 4);
      if ((uVar12 != 0xffffffff) && ((uVar12 & 0xc0000000) == 0x80000000)) {
        uVar7 = puVar10[1];
        lVar8 = (ulonglong)(uVar12 & 0x3fffffff) * 0x80;
        *(undefined8 *)(lVar8 + local_18) = *puVar10;
        ((undefined8 *)(lVar8 + local_18))[1] = uVar7;
        uVar7 = puVar10[3];
        puVar1 = (undefined8 *)(lVar8 + 0x10 + local_18);
        *puVar1 = puVar10[2];
        puVar1[1] = uVar7;
        uVar7 = puVar10[5];
        puVar1 = (undefined8 *)(lVar8 + 0x20 + local_18);
        *puVar1 = puVar10[4];
        puVar1[1] = uVar7;
        uVar7 = puVar10[7];
        puVar1 = (undefined8 *)(lVar8 + 0x30 + local_18);
        *puVar1 = puVar10[6];
        puVar1[1] = uVar7;
        uVar7 = puVar10[9];
        puVar1 = (undefined8 *)(lVar8 + 0x40 + local_18);
        *puVar1 = puVar10[8];
        puVar1[1] = uVar7;
        uVar7 = puVar10[0xb];
        puVar1 = (undefined8 *)(lVar8 + 0x50 + local_18);
        *puVar1 = puVar10[10];
        puVar1[1] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar10 + 100);
        uVar5 = *(undefined4 *)(puVar10 + 0xd);
        uVar6 = *(undefined4 *)((longlong)puVar10 + 0x6c);
        puVar2 = (undefined4 *)(lVar8 + 0x60 + local_18);
        *puVar2 = *(undefined4 *)(puVar10 + 0xc);
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
        uVar7 = puVar10[0xf];
        puVar1 = (undefined8 *)(lVar8 + 0x70 + local_18);
        *puVar1 = puVar10[0xe];
        puVar1[1] = uVar7;
      }
      lVar9 = lVar9 + 1;
      puVar10 = puVar10 + 0x10;
    } while (lVar9 < (int)lVar14);
  }
  lVar13 = *param_1;
  plVar11 = (longlong *)(lVar13 + 0x20);
  lVar14 = local_18;
  uVar12 = local_c;
  if (&local_18 != plVar11) {
    *(undefined4 *)(lVar13 + 0x28) = 0;
    if ((-1 < (int)*(uint *)(lVar13 + 0x2c)) && (*plVar11 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar11,
                 (ulonglong)(*(uint *)(lVar13 + 0x2c) & 0x7fffffff) << 7);
    }
    *plVar11 = 0;
    *(undefined4 *)(lVar13 + 0x28) = 0;
    *(undefined4 *)(lVar13 + 0x2c) = 0x80000000;
    FUN_147e54a7a(&local_18,&PTR_vftable_14c6e47a0);
    *plVar11 = local_18;
    *(int *)(lVar13 + 0x28) = local_10;
    *(uint *)(lVar13 + 0x2c) = local_c;
    lVar14 = lVar16;
    uVar12 = uVar15;
  }
  if ((-1 < (int)uVar12) && (lVar14 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar14,(ulonglong)(uVar12 & 0x7fffffff) << 7);
  }
  return;
}



// FUNCTION 14502ce90 FUN_14502ce90 body=32 status=ok
// SIG undefined FUN_14502ce90(void)

undefined4 * FUN_14502ce90(longlong param_1,undefined4 *param_2,uint param_3)

{
  *param_2 = *(undefined4 *)
              (*(longlong *)(param_1 + 8 + (ulonglong)(param_3 >> 0x1e) * 0x10) +
              (ulonglong)(param_3 & 0x3fffffff) * 4);
  return param_2;
}



// FUNCTION 14502ceb0 FUN_14502ceb0 body=191 status=ok
// SIG undefined FUN_14502ceb0(void)

void FUN_14502ceb0(longlong param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 == 0) {
    iVar1 = param_2[1];
    if ((int)(*(uint *)(param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_144d30c20(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if ((*(int *)(param_1 + 8) < iVar1) || (iVar1 < *(int *)(param_1 + 8))) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  else if (*param_2 != 1) goto LAB_14502cf33;
  iVar1 = param_2[1];
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar1) {
    FUN_144d20a90(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(param_1 + 0x18) < iVar1) || (iVar1 < *(int *)(param_1 + 0x18))) {
    *(int *)(param_1 + 0x18) = iVar1;
  }
LAB_14502cf33:
  iVar1 = param_2[1];
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x7fffffff) < iVar1) {
    FUN_144cc4ac0(param_1 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(param_1 + 0x28) < iVar1) || (iVar1 < *(int *)(param_1 + 0x28))) {
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}



// FUNCTION 14502cf70 FUN_14502cf70 body=1585 status=ok
// SIG undefined FUN_14502cf70(void)

undefined2 *
FUN_14502cf70(undefined8 param_1,undefined2 *param_2,longlong param_3,longlong *param_4,
             undefined4 param_5,short param_6)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  short sVar6;
  undefined8 *_Dst;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  short local_res18 [4];
  longlong *local_res20;
  short local_68 [2];
  short local_64 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  
  local_60 = 0x900;
  local_res20 = param_4;
  _Dst = (undefined8 *)(*DAT_14c787670)(0,&local_60,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  if (_Dst == (undefined8 *)0x0) {
    _Dst = (undefined8 *)0x0;
  }
  else {
    memset(_Dst,0,0x900);
    _Dst[1] = 0xffffffff;
    _Dst[0xc] = _Dst + 0xe;
    _Dst[2] = 1;
    _Dst[0x96] = _Dst + 0x98;
    *_Dst = hkaiNavMeshGeneration::_anon_8F1F5E14::ReduceVerticesContext::vftable;
    *(undefined4 *)(_Dst + 0xd) = 0;
    *(undefined4 *)((longlong)_Dst + 0x6c) = 0x80000011;
    *(undefined4 *)(_Dst + 0x97) = 0;
    *(undefined4 *)((longlong)_Dst + 0x4bc) = 0x80000011;
  }
  puVar9 = (undefined8 *)0x0;
  local_58 = 0x900;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,&local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7);
  }
  if (puVar7 != (undefined8 *)0x0) {
    memset(puVar7,0,0x900);
    puVar7[1] = 0xffffffff;
    puVar7[0xc] = puVar7 + 0xe;
    puVar7[0x96] = puVar7 + 0x98;
    puVar7[2] = 1;
    *puVar7 = hkaiNavMeshGeneration::_anon_8F1F5E14::ReduceVerticesContext::vftable;
    *(undefined4 *)(puVar7 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x6c) = 0x80000011;
    *(undefined4 *)(puVar7 + 0x97) = 0;
    *(undefined4 *)((longlong)puVar7 + 0x4bc) = 0x80000011;
    puVar9 = puVar7;
  }
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3d910(_Dst);
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar9);
  }
  local_50[0] = 0x60;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_50,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,local_res18,0,0x40);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar9);
    }
    puVar7 = _Dst;
    if (_Dst != (undefined8 *)0x0) goto LAB_14502d188;
  }
  else {
    puVar7[1] = 0xffffffff;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
              ::vftable;
    puVar7[2] = 1;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
                ::vftable;
    *(undefined4 *)(puVar7 + 9) = param_5;
    puVar7[10] = "PreReduceVertices";
    puVar7[6] = param_1;
    puVar7[7] = _Dst;
    puVar7[8] = puVar9;
    FUN_144be3b70(param_3,local_res18,puVar7,0x40);
LAB_14502d188:
    FUN_144b3f230(puVar7);
  }
  sVar5 = local_res18[0];
  if ((param_6 != -1) && (local_res18[0] != -1)) {
    iVar10 = *(int *)(param_3 + 0x330) + 1;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar10) {
      FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    iVar3 = *(int *)(param_3 + 0x330);
    lVar4 = *(longlong *)(param_3 + 0x328);
    *(int *)(param_3 + 0x330) = iVar10;
    *(short *)(lVar4 + (longlong)iVar3 * 4) = param_6;
    *(short *)(lVar4 + 2 + (longlong)iVar3 * 4) = sVar5;
  }
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3d910(_Dst);
  }
  local_50[0] = 0x50;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_50,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,local_68,0,0x40);
    puVar7 = _Dst;
    if (_Dst != (undefined8 *)0x0) goto LAB_14502d2a6;
  }
  else {
    puVar7[2] = 1;
    puVar7[1] = 0xffffffff;
    puVar7[6] = param_1;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_2>_>
              ::vftable;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_2>_>
                ::vftable;
    *(undefined4 *)(puVar7 + 8) = param_5;
    puVar7[9] = "ReduceBiplanarVertices";
    puVar7[7] = _Dst;
    *(undefined4 *)((longlong)puVar7 + 0x44) = 1;
    FUN_144be3b70(param_3,local_68,puVar7,0x40);
LAB_14502d2a6:
    FUN_144b3f230(puVar7);
  }
  sVar6 = local_68[0];
  sVar5 = local_res18[0];
  if ((local_res18[0] != -1) && (local_68[0] != -1)) {
    iVar10 = *(int *)(param_3 + 0x330) + 1;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar10) {
      FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    iVar3 = *(int *)(param_3 + 0x330);
    lVar4 = *(longlong *)(param_3 + 0x328);
    *(int *)(param_3 + 0x330) = iVar10;
    *(short *)(lVar4 + (longlong)iVar3 * 4) = sVar5;
    *(short *)(lVar4 + 2 + (longlong)iVar3 * 4) = sVar6;
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar9);
  }
  local_50[0] = 0x50;
  puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_50,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar7,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar7 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,local_64,0,0x40);
    puVar7 = puVar9;
    if (puVar9 != (undefined8 *)0x0) goto LAB_14502d3be;
  }
  else {
    puVar7[2] = 1;
    puVar7[1] = 0xffffffff;
    puVar7[7] = puVar9;
    *puVar7 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_3>_>
              ::vftable;
    puVar7[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_3>_>
                ::vftable;
    puVar7[6] = param_1;
    *(undefined4 *)(puVar7 + 8) = param_5;
    puVar7[9] = "ReduceQuadriplanarVertices";
    *(undefined4 *)((longlong)puVar7 + 0x44) = 1;
    FUN_144be3b70(param_3,local_64,puVar7,0x40);
LAB_14502d3be:
    FUN_144b3f230(puVar7);
  }
  sVar5 = local_64[0];
  if ((local_res18[0] != -1) && (local_64[0] != -1)) {
    iVar10 = *(int *)(param_3 + 0x330) + 1;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar10) {
      FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    iVar3 = *(int *)(param_3 + 0x330);
    lVar4 = *(longlong *)(param_3 + 0x328);
    *(int *)(param_3 + 0x330) = iVar10;
    *(short *)(lVar4 + (longlong)iVar3 * 4) = local_res18[0];
    *(short *)(lVar4 + 2 + (longlong)iVar3 * 4) = sVar5;
  }
  puVar7 = (undefined8 *)*local_res20;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar7);
  }
  local_50[0] = 0x50;
  puVar8 = (undefined8 *)(*DAT_14c787670)(0,local_50,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar8,"ReferencedFunctorTask");
  }
  if (puVar8 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,param_2,0,0x40);
    if (puVar7 == (undefined8 *)0x0) goto LAB_14502d4d2;
  }
  else {
    puVar8[2] = 1;
    puVar8[1] = 0xffffffff;
    puVar8[7] = puVar7;
    *puVar8 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_4>_>
              ::vftable;
    puVar8[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addReduceVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_4>_>
                ::vftable;
    puVar8[6] = param_1;
    puVar8[8] = "RecategorizeVertices";
    FUN_144be3b70(param_3,param_2,puVar8,0x40);
    puVar7 = puVar8;
  }
  FUN_144b3f230(puVar7);
LAB_14502d4d2:
  uVar2 = *param_2;
  plVar1 = (longlong *)(param_3 + 0x328);
  iVar10 = *(int *)(param_3 + 0x330) + 1;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar10) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  iVar3 = *(int *)(param_3 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_3 + 0x330) = iVar10;
  *(short *)(lVar4 + (longlong)iVar3 * 4) = local_68[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  iVar10 = *(int *)(param_3 + 0x330) + 1;
  uVar2 = *param_2;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar10) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  iVar3 = *(int *)(param_3 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_3 + 0x330) = iVar10;
  *(short *)(lVar4 + (longlong)iVar3 * 4) = local_64[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar9);
  }
  if (_Dst != (undefined8 *)0x0) {
    FUN_144b3f230(_Dst);
  }
  if (*local_res20 != 0) {
    FUN_144b3f230();
  }
  return param_2;
}



// FUNCTION 14502d5b0 FUN_14502d5b0 body=1564 status=ok
// SIG undefined FUN_14502d5b0(void)

undefined2 *
FUN_14502d5b0(undefined8 param_1,undefined2 *param_2,longlong param_3,longlong *param_4,
             undefined8 param_5,short param_6)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_res8;
  short local_res10 [4];
  short local_res18 [4];
  longlong *local_res20;
  short local_68 [4];
  undefined8 local_60;
  undefined8 local_58 [3];
  
  local_60 = 0x48;
  local_res8 = param_1;
  local_res20 = param_4;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_60,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"SortAndWeldVerticesContext");
  }
  puVar7 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[4] = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
    *puVar6 = hkaiNavMeshGeneration::_anon_8F1F5E14::SortAndWeldVerticesContext::vftable;
    puVar6[3] = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 0x80000000;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0x80000000;
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 0x80000000;
    FUN_144b3d910(puVar6);
    puVar7 = puVar6;
  }
  local_58[0] = 0x50;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"ReferencedFunctorTask");
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,local_res10,0,0x40);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
    }
  }
  else {
    puVar6[1] = 0xffffffff;
    *puVar6 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
              ::vftable;
    puVar6[2] = 1;
    puVar6[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
                ::vftable;
    puVar6[8] = "SortAndWeldInteger";
    puVar6[6] = param_1;
    puVar6[7] = puVar7;
    FUN_144be3b70(param_3,local_res10,puVar6,0x40);
    FUN_144b3f230(puVar6);
  }
  sVar5 = local_res10[0];
  if ((param_6 != -1) && (local_res10[0] != -1)) {
    iVar8 = *(int *)(param_3 + 0x330) + 1;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar8) {
      FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    iVar3 = *(int *)(param_3 + 0x330);
    lVar4 = *(longlong *)(param_3 + 0x328);
    *(int *)(param_3 + 0x330) = iVar8;
    *(short *)(lVar4 + (longlong)iVar3 * 4) = param_6;
    *(short *)(lVar4 + 2 + (longlong)iVar3 * 4) = sVar5;
    param_1 = local_res8;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar7);
  }
  local_58[0] = 0x50;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"ReferencedFunctorTask");
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,local_res18,0,0x40);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
    }
  }
  else {
    puVar6[2] = 1;
    puVar6[1] = 0xffffffff;
    puVar6[6] = param_1;
    *puVar6 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_2>_>
              ::vftable;
    puVar6[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_2>_>
                ::vftable;
    puVar6[8] = "SortAndWeldBiplanar";
    puVar6[7] = puVar7;
    FUN_144be3b70(param_3,local_res18,puVar6,0x40);
    FUN_144b3f230(puVar6);
  }
  sVar5 = local_res18[0];
  if ((param_6 != -1) && (local_res18[0] != -1)) {
    iVar8 = *(int *)(param_3 + 0x330) + 1;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar8) {
      FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    iVar3 = *(int *)(param_3 + 0x330);
    lVar4 = *(longlong *)(param_3 + 0x328);
    *(int *)(param_3 + 0x330) = iVar8;
    *(short *)(lVar4 + (longlong)iVar3 * 4) = param_6;
    *(short *)(lVar4 + 2 + (longlong)iVar3 * 4) = sVar5;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar7);
  }
  local_58[0] = 0x50;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"ReferencedFunctorTask");
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,local_68,0,0x40);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
    }
  }
  else {
    puVar6[2] = 1;
    puVar6[1] = 0xffffffff;
    puVar6[7] = puVar7;
    *puVar6 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_3>_>
              ::vftable;
    puVar6[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_3>_>
                ::vftable;
    puVar6[6] = local_res8;
    puVar6[8] = "SortAndWeldQuadriplanar";
    FUN_144be3b70(param_3,local_68,puVar6,0x40);
    FUN_144b3f230(puVar6);
  }
  sVar5 = local_68[0];
  if ((param_6 != -1) && (local_68[0] != -1)) {
    iVar8 = *(int *)(param_3 + 0x330) + 1;
    if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar8) {
      FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    iVar3 = *(int *)(param_3 + 0x330);
    lVar4 = *(longlong *)(param_3 + 0x328);
    *(int *)(param_3 + 0x330) = iVar8;
    *(short *)(lVar4 + (longlong)iVar3 * 4) = param_6;
    *(short *)(lVar4 + 2 + (longlong)iVar3 * 4) = sVar5;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar7);
  }
  lVar4 = *local_res20;
  if (lVar4 != 0) {
    FUN_144b3d910(lVar4);
  }
  local_res8 = 0x50;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"ReferencedFunctorTask");
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,param_2,0,0x40);
    if (lVar4 != 0) {
      FUN_144b3f230(lVar4);
    }
    if (puVar7 != (undefined8 *)0x0) {
      FUN_144b3f230(puVar7);
    }
  }
  else {
    puVar6[2] = 1;
    puVar6[1] = 0xffffffff;
    puVar6[6] = puVar7;
    *puVar6 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_4>_>
              ::vftable;
    puVar6[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::VertexSet::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_4>_>
                ::vftable;
    puVar6[8] = "MakeRemapping";
    puVar6[7] = lVar4;
    FUN_144be3b70(param_3,param_2,puVar6,0x40);
    FUN_144b3f230(puVar6);
  }
  uVar2 = *param_2;
  plVar1 = (longlong *)(param_3 + 0x328);
  iVar8 = *(int *)(param_3 + 0x330) + 1;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_3 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_3 + 0x330) = iVar8;
  *(short *)(lVar4 + (longlong)iVar3 * 4) = local_res10[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  iVar8 = *(int *)(param_3 + 0x330) + 1;
  uVar2 = *param_2;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_3 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_3 + 0x330) = iVar8;
  *(short *)(lVar4 + (longlong)iVar3 * 4) = local_res18[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  iVar8 = *(int *)(param_3 + 0x330) + 1;
  uVar2 = *param_2;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar8) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar3 = *(int *)(param_3 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_3 + 0x330) = iVar8;
  *(short *)(lVar4 + (longlong)iVar3 * 4) = local_68[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar7);
  }
  if (*local_res20 != 0) {
    FUN_144b3f230();
  }
  return param_2;
}



// FUNCTION 14502dbd0 FUN_14502dbd0 body=101 status=ok
// SIG undefined FUN_14502dbd0(void)

undefined8 * FUN_14502dbd0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14502dc40 FUN_14502dc40 body=2226 status=ok
// SIG undefined FUN_14502dc40(void)

void FUN_14502dc40(longlong *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  int iVar31;
  longlong lVar32;
  int *piVar33;
  undefined4 *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  longlong local_res8;
  ulonglong local_res10;
  longlong local_208;
  uint local_200;
  uint local_1fc;
  longlong local_1f8;
  int local_1f0;
  uint local_1ec;
  longlong local_1e8;
  int local_1e0;
  uint local_1dc;
  undefined8 local_1d8;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  longlong local_198;
  longlong lStack_190;
  ulonglong local_188;
  longlong local_178;
  uint local_170 [5];
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong local_140;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  
  uVar38 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1fc = 0x80000000;
  uVar26 = *(uint *)(*param_1 + 8);
  uVar35 = uVar38;
  if ((int)uVar26 < 1) {
LAB_14502dcc3:
    uVar37 = (uint)uVar35;
    if ((int)local_200 <= (int)uVar26) goto LAB_14502dccc;
  }
  else {
    FUN_145030330(&local_208,&PTR_vftable_14c6e47a0,(longlong)(int)uVar26);
    uVar35 = (ulonglong)local_200;
    if ((int)uVar26 <= (int)local_200) goto LAB_14502dcc3;
  }
  local_200 = uVar26;
  uVar37 = uVar26;
LAB_14502dccc:
  uVar35 = uVar38;
  if ((0 < (int)uVar37) && (uVar35 = 0, 0xf < uVar37)) {
    uVar26 = uVar37 & 0x8000000f;
    if ((int)uVar26 < 0) {
      uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
    }
    uVar35 = uVar38;
    piVar33 = (int *)(local_208 + 0x20);
    iVar39 = 8;
    do {
      iVar31 = (int)uVar35;
      piVar33[-8] = iVar31;
      piVar33[-7] = iVar31 + 1;
      piVar33[-6] = iVar31 + 2;
      piVar33[-5] = iVar31 + 3;
      uVar35 = (ulonglong)(iVar31 + 0x10U);
      piVar33[-4] = iVar39 + -4;
      piVar33[-3] = iVar39 + -3;
      piVar33[-2] = iVar39 + -2;
      piVar33[-1] = iVar39 + -1;
      *piVar33 = iVar39;
      piVar33[1] = iVar39 + 1;
      piVar33[2] = iVar39 + 2;
      piVar33[3] = iVar39 + 3;
      piVar33[4] = iVar39 + 4;
      piVar33[5] = iVar39 + 5;
      piVar33[6] = iVar39 + 6;
      piVar33[7] = iVar39 + 7;
      piVar33 = piVar33 + 0x10;
      iVar39 = iVar39 + 0x10;
    } while ((int)(iVar31 + 0x10U) < (int)(uVar37 - uVar26));
  }
  for (lVar27 = (longlong)(int)uVar35; lVar27 < (int)uVar37; lVar27 = lVar27 + 1) {
    *(int *)(local_208 + lVar27 * 4) = (int)uVar35;
    uVar35 = (ulonglong)((int)uVar35 + 1);
  }
  local_1e8 = 0;
  iVar31 = 0;
  local_1e0 = 0;
  local_1dc = 0x80000000;
  iVar39 = *(int *)(*param_1 + 0x18);
  if (((0 < iVar39) &&
      (FUN_145030330(&local_1e8,&PTR_vftable_14c6e47a0,(longlong)iVar39), local_1e0 < iVar39)) ||
     (iVar39 < local_1e0)) {
    local_1e0 = iVar39;
  }
  iVar39 = *(int *)(*param_1 + 0x18);
  if (0 < (longlong)iVar39) {
    local_res10 = 0;
    uVar35 = uVar38;
    uVar40 = uVar38;
    uVar41 = uVar38;
    do {
      plVar5 = (longlong *)*param_1;
      lVar27 = plVar5[2];
      plVar1 = (longlong *)(lVar27 + 0x50 + uVar38);
      lVar7 = *plVar1;
      lVar8 = plVar1[1];
      puVar34 = (undefined4 *)(lVar27 + uVar38);
      uVar9 = puVar34[1];
      uVar10 = puVar34[2];
      uVar11 = puVar34[3];
      puVar29 = (undefined8 *)(lVar27 + 0x10 + uVar38);
      uVar30 = *puVar29;
      uVar18 = puVar29[1];
      puVar29 = (undefined8 *)(lVar27 + 0x20 + uVar38);
      uVar20 = *puVar29;
      uVar21 = puVar29[1];
      puVar2 = (undefined4 *)(lVar27 + 0x30 + uVar38);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar15 = puVar2[3];
      puVar29 = (undefined8 *)(lVar27 + 0x40 + uVar38);
      uVar22 = *puVar29;
      uVar23 = puVar29[1];
      if (*(longlong *)(lVar27 + 0x58 + uVar38) == 0 &&
          (lVar7 == 0 && *(longlong *)(lVar27 + 0x48 + uVar38) == 1)) {
        uVar26 = *(uint *)(plVar5 + 1);
        iVar31 = uVar26 + 1;
        local_1d8 = CONCAT44((int)uVar18,*puVar34);
        uVar36 = uVar35;
        if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar31) {
          FUN_147e4dcf0(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar31);
          uVar36 = local_res10;
        }
        puVar34 = (undefined4 *)(*plVar5 + (longlong)(int)plVar5[1] * 0xc);
        if (puVar34 != (undefined4 *)0x0) {
          *puVar34 = (undefined4)local_1d8;
          puVar34[1] = local_1d8._4_4_;
          puVar34[2] = uVar12;
        }
        *(int *)(plVar5 + 1) = iVar31;
      }
      else {
        uVar26 = (uint)uVar41;
        uVar36 = uVar35 + 1;
        uVar41 = (ulonglong)(uVar26 + 1);
        uVar26 = uVar26 | 0x40000000;
        lVar28 = uVar35 * 0x60;
        puVar2 = (undefined4 *)(lVar28 + lVar27);
        *puVar2 = *puVar34;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar29 = (undefined8 *)(lVar28 + 0x10 + lVar27);
        *puVar29 = uVar30;
        puVar29[1] = uVar18;
        puVar29 = (undefined8 *)(lVar28 + 0x20 + lVar27);
        *puVar29 = uVar20;
        puVar29[1] = uVar21;
        puVar34 = (undefined4 *)(lVar28 + 0x30 + lVar27);
        *puVar34 = uVar12;
        puVar34[1] = uVar13;
        puVar34[2] = uVar14;
        puVar34[3] = uVar15;
        puVar29 = (undefined8 *)(lVar28 + 0x40 + lVar27);
        *puVar29 = uVar22;
        puVar29[1] = uVar23;
        plVar1 = (longlong *)(lVar28 + 0x50 + lVar27);
        *plVar1 = lVar7;
        plVar1[1] = lVar8;
        local_res10 = uVar36;
      }
      iVar31 = (int)uVar41;
      uVar38 = uVar38 + 0x60;
      *(uint *)(local_1e8 + uVar40 * 4) = uVar26;
      uVar40 = uVar40 + 1;
      uVar35 = uVar36;
    } while ((longlong)uVar40 < (longlong)iVar39);
  }
  uVar35 = 0;
  lVar27 = *param_1;
  if ((int)(*(uint *)(lVar27 + 0x1c) & 0x7fffffff) < iVar31) {
    FUN_144d20a90(lVar27 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar31);
  }
  if ((*(int *)(lVar27 + 0x18) < iVar31) || (iVar31 < *(int *)(lVar27 + 0x18))) {
    *(int *)(lVar27 + 0x18) = iVar31;
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 0x80000000;
  iVar39 = *(int *)(*param_1 + 0x28);
  if (((0 < iVar39) &&
      (FUN_145030330(&local_1f8,&PTR_vftable_14c6e47a0,(longlong)iVar39), local_1f0 < iVar39)) ||
     (iVar39 < local_1f0)) {
    local_1f0 = iVar39;
  }
  iVar39 = 0;
  local_1d8 = (longlong)*(int *)(*param_1 + 0x28);
  if (0 < local_1d8) {
    local_res8 = 0;
    uVar38 = uVar35;
    uVar40 = uVar35;
    do {
      plVar5 = (longlong *)*param_1;
      lVar27 = plVar5[4];
      puVar3 = (ulonglong *)(lVar27 + 0x70 + uVar38);
      local_1b0 = *puVar3;
      uVar41 = puVar3[1];
      plVar1 = (longlong *)(lVar27 + 0x60 + uVar38);
      local_1c0 = *plVar1;
      local_1b8 = plVar1[1];
      puVar29 = (undefined8 *)(lVar27 + uVar38);
      uVar9 = *(undefined4 *)puVar29;
      uVar10 = *(undefined4 *)((longlong)puVar29 + 4);
      uVar20 = *puVar29;
      uVar11 = *(undefined4 *)(puVar29 + 1);
      uVar12 = *(undefined4 *)((longlong)puVar29 + 0xc);
      uVar21 = puVar29[1];
      plVar1 = (longlong *)(lVar27 + 0x10 + uVar38);
      lVar7 = *plVar1;
      lVar8 = plVar1[1];
      puVar29 = (undefined8 *)(lVar27 + 0x20 + uVar38);
      uVar13 = *(undefined4 *)puVar29;
      uVar14 = *(undefined4 *)((longlong)puVar29 + 4);
      uVar15 = *(undefined4 *)(puVar29 + 1);
      uVar16 = *(undefined4 *)((longlong)puVar29 + 0xc);
      uVar22 = puVar29[1];
      plVar1 = (longlong *)(lVar27 + 0x30 + uVar38);
      lVar28 = *plVar1;
      lVar17 = plVar1[1];
      puVar4 = (undefined8 *)(lVar27 + 0x40 + uVar38);
      uVar30 = *puVar4;
      uVar18 = puVar4[1];
      plVar1 = (longlong *)(lVar27 + 0x50 + uVar38);
      lVar27 = *plVar1;
      lVar19 = plVar1[1];
      if (uVar41 == 0 && (local_1b0 == 0 && (local_1b8 == 0 && local_1c0 == 1))) {
        uVar26 = *(uint *)(plVar5 + 1);
        iVar39 = uVar26 + 1;
        local_1a8 = uVar9;
        uStack_1a4 = uVar13;
        if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar39) {
          FUN_147e4dcf0(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar39);
        }
        puVar29 = (undefined8 *)(*plVar5 + (longlong)(int)plVar5[1] * 0xc);
        if (puVar29 != (undefined8 *)0x0) {
          *puVar29 = CONCAT44(uStack_1a4,local_1a8);
          *(int *)(puVar29 + 1) = (int)uVar30;
        }
        *(int *)(plVar5 + 1) = iVar39;
      }
      else {
        local_1c8 = lVar7;
        if (lVar8 == lVar8 >> 0x3f &&
            ((lVar7 >> 0x37) + 1U < 2 &&
            (((lVar28 >> 0x37) + 1U < 2 &&
             (((local_1b0 & 0xffffffffc0000000) == 0 &&
              ((lVar27 >> 0x37) + 1U < 2 && lVar19 == lVar19 >> 0x3f)) && uVar41 == 0)) &&
            lVar17 == lVar17 >> 0x3f))) {
          uVar26 = *(uint *)(plVar5 + 3) | 0x40000000;
          iVar39 = (int)plVar5[3] + 1;
          local_158._0_4_ = (undefined4)lVar7;
          uVar24 = (undefined4)local_158;
          local_158._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
          uVar25 = local_158._4_4_;
          uVar42 = (undefined4)lVar28;
          uVar43 = (undefined4)((ulonglong)lVar28 >> 0x20);
          local_128 = (undefined4)local_158;
          uStack_124 = local_158._4_4_;
          local_198 = local_1c0;
          lStack_190 = local_1b8;
          local_188 = local_1b0;
          local_170[2] = uVar9;
          local_170[3] = uVar10;
          local_170[4] = uVar11;
          uStack_15c = uVar12;
          local_158 = lVar7;
          local_150 = uVar13;
          uStack_14c = uVar14;
          uStack_148 = uVar15;
          uStack_144 = uVar16;
          local_140 = lVar28;
          uStack_120 = *puVar29;
          uStack_118 = uVar22;
          uStack_110 = uVar42;
          uStack_10c = uVar43;
          local_b0 = lVar27;
          lStack_a8 = local_1c0;
          lStack_a0 = local_1b8;
          uStack_98 = local_1b0;
          if ((int)(*(uint *)((longlong)plVar5 + 0x1c) & 0x7fffffff) < iVar39) {
            FUN_144cac060(plVar5 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar39);
          }
          puVar29 = (undefined8 *)((longlong)(int)plVar5[3] * 0x60 + plVar5[2]);
          if (puVar29 != (undefined8 *)0x0) {
            *puVar29 = uVar20;
            puVar29[1] = uVar21;
            *(undefined4 *)(puVar29 + 2) = uVar24;
            *(undefined4 *)((longlong)puVar29 + 0x14) = uVar25;
            *(undefined4 *)(puVar29 + 3) = uVar13;
            *(undefined4 *)((longlong)puVar29 + 0x1c) = uVar14;
            *(undefined4 *)(puVar29 + 4) = uVar15;
            *(undefined4 *)((longlong)puVar29 + 0x24) = uVar16;
            *(undefined4 *)(puVar29 + 5) = uVar42;
            *(undefined4 *)((longlong)puVar29 + 0x2c) = uVar43;
            puVar29[6] = uVar30;
            puVar29[7] = uVar18;
            puVar29[8] = local_b0;
            puVar29[9] = lStack_a8;
            puVar29[10] = lStack_a0;
            puVar29[0xb] = uStack_98;
          }
          *(int *)(plVar5 + 3) = iVar39;
        }
        else {
          lVar6 = plVar5[4];
          uVar26 = (uint)uVar40 | 0x80000000;
          uVar40 = (ulonglong)((uint)uVar40 + 1);
          lVar32 = local_res8 * 0x80;
          puVar34 = (undefined4 *)(lVar32 + lVar6);
          *puVar34 = uVar9;
          puVar34[1] = uVar10;
          puVar34[2] = uVar11;
          puVar34[3] = uVar12;
          plVar1 = (longlong *)(lVar32 + 0x10 + lVar6);
          *plVar1 = lVar7;
          plVar1[1] = lVar8;
          puVar34 = (undefined4 *)(lVar32 + 0x20 + lVar6);
          *puVar34 = uVar13;
          puVar34[1] = uVar14;
          puVar34[2] = uVar15;
          puVar34[3] = uVar16;
          plVar1 = (longlong *)(lVar32 + 0x30 + lVar6);
          *plVar1 = lVar28;
          plVar1[1] = lVar17;
          puVar29 = (undefined8 *)(lVar32 + 0x40 + lVar6);
          *puVar29 = uVar30;
          puVar29[1] = uVar18;
          plVar1 = (longlong *)(lVar32 + 0x50 + lVar6);
          *plVar1 = lVar27;
          plVar1[1] = lVar19;
          plVar1 = (longlong *)(lVar32 + 0x60 + lVar6);
          *plVar1 = local_1c0;
          plVar1[1] = local_1b8;
          puVar3 = (ulonglong *)(lVar32 + 0x70 + lVar6);
          *puVar3 = local_1b0;
          puVar3[1] = uVar41;
          local_res8 = local_res8 + 1;
        }
      }
      iVar39 = (int)uVar40;
      uVar38 = uVar38 + 0x80;
      *(uint *)(local_1f8 + uVar35 * 4) = uVar26;
      uVar35 = uVar35 + 1;
    } while ((longlong)uVar35 < local_1d8);
  }
  lVar27 = *param_1;
  if ((int)(*(uint *)(lVar27 + 0x2c) & 0x7fffffff) < iVar39) {
    FUN_144cc4ac0(lVar27 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar39);
  }
  if ((*(int *)(lVar27 + 0x28) < iVar39) || (iVar39 < *(int *)(lVar27 + 0x28))) {
    *(int *)(lVar27 + 0x28) = iVar39;
  }
  lVar27 = param_1[1];
  uVar30 = FUN_14502c2f0(&local_198,&local_208,&local_1e8,&local_1f8);
  FUN_14502c490(lVar27 + 0x18,uVar30);
  lVar27 = 3;
  puVar34 = &uStack_15c;
  do {
    lVar27 = lVar27 + -1;
    puVar34[-5] = 0;
    if ((-1 < (int)puVar34[-4]) && (*(longlong *)(puVar34 + -7) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(puVar34 + -7),
                 (ulonglong)(puVar34[-4] & 0x7fffffff) << 2);
    }
    *(undefined8 *)(puVar34 + -7) = 0;
    puVar34[-4] = 0x80000000;
    puVar34 = puVar34 + -4;
  } while (lVar27 != 0);
  if ((-1 < (int)local_1ec) && (local_1f8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1f8,(ulonglong)(local_1ec & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_1dc) && (local_1e8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1e8,(ulonglong)(local_1dc & 0x7fffffff) << 2);
  }
  if ((-1 < (int)local_1fc) && (local_208 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_208,(ulonglong)(local_1fc & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 14502e500 FUN_14502e500 body=286 status=ok
// SIG undefined FUN_14502e500(void)

undefined8 * FUN_14502e500(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 2);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 2);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14502e620 FUN_14502e620 body=1309 status=ok
// SIG undefined FUN_14502e620(void)

longlong * FUN_14502e620(longlong *param_1,ulonglong *param_2,undefined1 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_d8;
  ulonglong local_d0;
  uint local_c8;
  uint local_c4;
  ulonglong *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_88;
  longlong local_78;
  int *local_70;
  int local_68;
  
  uVar12 = (uint)param_2[1];
  lVar13 = (longlong)(int)uVar12;
  if (uVar12 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  local_res18[0] = param_3;
  local_res20 = param_4;
  FUN_144c582c0(&local_78,uVar12);
  uVar14 = 0;
  uVar11 = uVar14;
  if ((0 < (int)uVar12) && (uVar11 = 0, 0xf < uVar12)) {
    uVar4 = uVar12 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    uVar11 = uVar14;
    piVar10 = local_70 + 8;
    iVar7 = 8;
    do {
      iVar6 = (int)uVar11;
      piVar10[-8] = iVar6;
      piVar10[-7] = iVar6 + 1;
      piVar10[-6] = iVar6 + 2;
      piVar10[-5] = iVar6 + 3;
      uVar11 = (ulonglong)(iVar6 + 0x10U);
      piVar10[-4] = iVar7 + -4;
      piVar10[-3] = iVar7 + -3;
      piVar10[-2] = iVar7 + -2;
      piVar10[-1] = iVar7 + -1;
      *piVar10 = iVar7;
      piVar10[1] = iVar7 + 1;
      piVar10[2] = iVar7 + 2;
      piVar10[3] = iVar7 + 3;
      piVar10[4] = iVar7 + 4;
      piVar10[5] = iVar7 + 5;
      piVar10[6] = iVar7 + 6;
      piVar10[7] = iVar7 + 7;
      piVar10 = piVar10 + 0x10;
      iVar7 = iVar7 + 0x10;
    } while ((int)(iVar6 + 0x10U) < (int)(uVar12 - uVar4));
  }
  for (lVar5 = (longlong)(int)uVar11; lVar5 < lVar13; lVar5 = lVar5 + 1) {
    local_70[lVar5] = (int)uVar11;
    uVar11 = (ulonglong)((int)uVar11 + 1);
  }
  uStack_b0 = local_res18;
  local_a0 = lVar13;
  if (1 < local_68) {
    local_b8 = param_2;
    FUN_145030430(local_70,0,local_68 + -1,&local_b8);
  }
  local_b8 = (ulonglong *)0x0;
  uStack_b0._0_4_ = 0;
  uStack_b0._4_4_ = 0x80000000;
  uVar4 = 0;
  if ((int)uVar12 < 1) {
LAB_14502e7fd:
    if ((int)uVar12 < (int)uVar4) {
      uVar4 = uVar12;
    }
    local_d0 = 0;
    uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,uVar4);
    local_c8 = 0;
    local_c4 = 0x80000000;
    puVar16 = local_b8;
    if ((int)uVar12 < 1) goto LAB_14502e843;
  }
  else {
    FUN_145030330(&local_b8,&PTR_vftable_14c6e47a0,lVar13);
    uVar4 = (uint)uStack_b0;
    lVar5 = (longlong)(int)(uint)uStack_b0;
    if ((int)uVar12 <= (int)(uint)uStack_b0) goto LAB_14502e7fd;
    uStack_b0 = (undefined1 *)CONCAT44(uStack_b0._4_4_,uVar12);
    if (0 < (int)(uVar12 - uVar4)) {
      uVar11 = (ulonglong)(uVar12 - uVar4);
      puVar8 = (undefined4 *)((longlong)local_b8 + lVar5 * 4);
      do {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0xffffffff;
        }
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar11 != 0);
    }
  }
  puVar16 = local_b8;
  local_c4 = 0x80000000;
  local_c8 = 0;
  local_d0 = 0;
  FUN_147e4dcf0(&local_d0,&PTR_vftable_14c6e47a0,lVar13);
LAB_14502e843:
  uVar12 = local_c8 + 1;
  puVar1 = (undefined8 *)(*param_2 + (longlong)*local_70 * 0xc);
  if ((int)(local_c4 & 0x7fffffff) < (int)uVar12) {
    FUN_147e4dcf0(&local_d0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar12);
  }
  puVar2 = (undefined8 *)(local_d0 + (longlong)(int)local_c8 * 0xc);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *puVar1;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  }
  lVar5 = 1;
  local_res20 = local_res20 << 0x1e;
  *(uint *)((longlong)puVar16 + (longlong)*local_70 * 4) = local_res20;
  lVar13 = local_a0;
  uVar11 = local_d0;
  local_d8 = local_c4;
  local_c8 = uVar12;
  if (1 < local_a0) {
    do {
      lVar15 = (longlong)local_70[lVar5];
      local_a8 = *(int *)(*param_2 + 8 + lVar15 * 0xc);
      uVar3 = *(undefined8 *)(*param_2 + lVar15 * 0xc);
      local_88 = *(undefined8 *)((uVar11 - 0xc) + (longlong)(int)uVar12 * 0xc);
      local_98._0_4_ = (int)uVar3;
      if ((int)local_88 - (int)local_98 == 0) {
        iVar7 = (int)((ulonglong)local_88 >> 0x20) - (int)((ulonglong)uVar3 >> 0x20);
        if (iVar7 == 0) {
          bVar9 = *(int *)((uVar11 - 4) + (longlong)(int)uVar12 * 0xc) < local_a8;
        }
        else {
          bVar9 = (bool)((byte)(iVar7 >> 0x1f) >> 7);
        }
      }
      else {
        bVar9 = (bool)((byte)((int)local_88 - (int)local_98 >> 0x1f) >> 7);
      }
      local_98 = uVar3;
      if (bVar9 == false) {
        *(undefined4 *)((longlong)puVar16 + lVar15 * 4) =
             *(undefined4 *)((longlong)puVar16 + (longlong)local_70[lVar5 + -1] * 4);
      }
      else {
        uVar4 = uVar12 + 1;
        *(uint *)((longlong)puVar16 + lVar15 * 4) = local_res20 | uVar12;
        if ((int)(local_d8 & 0x7fffffff) < (int)uVar4) {
          FUN_147e4dcf0(&local_d0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
          lVar13 = local_a0;
          uVar11 = local_d0;
          local_d8 = local_c4;
          uVar12 = local_c8;
        }
        puVar1 = (undefined8 *)(uVar11 + (longlong)(int)uVar12 * 0xc);
        uVar12 = uVar4;
        local_c8 = uVar4;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = uVar3;
          *(int *)(puVar1 + 1) = local_a8;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar13);
  }
  if (&local_d0 != param_2) {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_2,
                 (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) * 0xc);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
    FUN_147e549a6(&local_d0,&PTR_vftable_14c6e47a0);
    *param_2 = local_d0;
    *(uint *)(param_2 + 1) = local_c8;
    *(uint *)((longlong)param_2 + 0xc) = local_c4;
    uVar11 = uVar14;
    local_d8 = 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  FUN_14502c620(&local_b8,&PTR_vftable_14c6e47a0);
  *param_1 = (longlong)local_b8;
  *(uint *)(param_1 + 1) = (uint)uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_b0._4_4_;
  if ((-1 < (int)local_d8) && (uVar11 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,uVar11,(ulonglong)(local_d8 & 0x7fffffff) * 0xc);
  }
  if (local_78 == 0) {
    (*DAT_14c787678)(1,local_70);
  }
  else {
    uVar11 = (longlong)local_68 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_78 + 0x28) < uVar11) ||
       ((longlong)local_70 + uVar11 != *(longlong *)(local_78 + 0x38))) {
      FUN_144be8550(local_78,local_70);
    }
    else {
      *(int **)(local_78 + 0x38) = local_70;
      if (*(int **)(local_78 + 0x48) == local_70) {
        FUN_144be8430();
      }
    }
  }
  return param_1;
}



// FUNCTION 14502eb40 FUN_14502eb40 body=177 status=ok
// SIG undefined FUN_14502eb40(void)

uint FUN_14502eb40(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = FUN_14502fdf0();
  if (uVar3 != 0) {
    return uVar3 >> 0x1f;
  }
  uVar1 = *(ulonglong *)(param_2 + 0x58);
  uVar2 = *(ulonglong *)(param_1 + 0x58);
  bVar4 = *(ulonglong *)(param_1 + 0x50) < *(ulonglong *)(param_2 + 0x50);
  if (*(ulonglong *)(param_1 + 0x48) < *(ulonglong *)(param_2 + 0x48)) {
    bVar4 = *(ulonglong *)(param_1 + 0x50) <= *(ulonglong *)(param_2 + 0x50) && !bVar4 || bVar4;
  }
  return (uint)(byte)((uVar2 <= uVar1 && uVar2 >= uVar1) & bVar4 | uVar2 < uVar1);
}



// FUNCTION 14502ec00 FUN_14502ec00 body=1400 status=ok
// SIG undefined FUN_14502ec00(void)

longlong * FUN_14502ec00(longlong *param_1,longlong *param_2,code *param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  code *local_res18;
  uint local_res20;
  longlong local_f8;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_c0;
  int *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar13 = *(uint *)(param_2 + 1);
  lVar14 = (longlong)(int)uVar13;
  if (uVar13 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144c582c0(&local_c0,uVar13);
  iVar6 = 0;
  uVar15 = 0;
  iVar7 = iVar6;
  if ((0 < (int)uVar13) && (iVar7 = 0, 0xf < uVar13)) {
    uVar4 = uVar13 & 0x8000000f;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffff0) + 1;
    }
    piVar11 = local_b8 + 8;
    iVar16 = 8;
    do {
      piVar11[-8] = iVar6;
      piVar11[-7] = iVar6 + 1;
      piVar11[-6] = iVar6 + 2;
      piVar11[-5] = iVar6 + 3;
      iVar6 = iVar6 + 0x10;
      piVar11[-4] = iVar16 + -4;
      piVar11[-3] = iVar16 + -3;
      piVar11[-2] = iVar16 + -2;
      piVar11[-1] = iVar16 + -1;
      *piVar11 = iVar16;
      piVar11[1] = iVar16 + 1;
      piVar11[2] = iVar16 + 2;
      piVar11[3] = iVar16 + 3;
      piVar11[4] = iVar16 + 4;
      piVar11[5] = iVar16 + 5;
      piVar11[6] = iVar16 + 6;
      piVar11[7] = iVar16 + 7;
      piVar11 = piVar11 + 0x10;
      iVar16 = iVar16 + 0x10;
      iVar7 = iVar6;
    } while (iVar6 < (int)(uVar13 - uVar4));
  }
  for (lVar5 = (longlong)iVar7; lVar5 < lVar14; lVar5 = lVar5 + 1) {
    local_b8[lVar5] = iVar7;
    iVar7 = iVar7 + 1;
  }
  uStack_d0 = &local_res18;
  local_c8 = lVar14;
  if (1 < local_b0) {
    local_d8 = param_2;
    FUN_145030650(local_b8,0,local_b0 + -1,&local_d8);
  }
  local_d8 = (longlong *)0x0;
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0x80000000;
  if ((int)uVar13 < 1) {
LAB_14502eded:
    if ((int)uVar13 < (int)uVar15) {
      uVar15 = uVar13;
    }
    uStack_d0 = (code **)CONCAT44(uStack_d0._4_4_,uVar15);
LAB_14502edf3:
    local_f8 = 0;
    local_e8 = 0x80000000;
    local_f0 = 0;
    plVar18 = local_d8;
    if ((int)uVar13 < 1) goto LAB_14502ee3c;
  }
  else {
    FUN_145030330(&local_d8,&PTR_vftable_14c6e47a0,lVar14);
    uVar15 = (uint)uStack_d0;
    lVar5 = (longlong)(int)(uint)uStack_d0;
    if ((int)uVar13 <= (int)(uint)uStack_d0) goto LAB_14502eded;
    uStack_d0 = (code **)CONCAT44(uStack_d0._4_4_,uVar13);
    if ((int)(uVar13 - uVar15) < 1) goto LAB_14502edf3;
    uVar12 = (ulonglong)(uVar13 - uVar15);
    puVar8 = (undefined4 *)(lVar5 * 4 + (longlong)local_d8);
    do {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0xffffffff;
      }
      uVar12 = uVar12 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar12 != 0);
  }
  plVar18 = local_d8;
  local_ec = 0x80000000;
  local_f0 = 0;
  local_f8 = 0;
  FUN_144cac060(&local_f8,&PTR_vftable_14c6e47a0,lVar14);
  local_e8 = local_ec;
LAB_14502ee3c:
  uVar13 = local_f0 + 1;
  puVar17 = (undefined8 *)((longlong)*local_b8 * 0x60 + *param_2);
  if ((int)(local_e8 & 0x7fffffff) < (int)uVar13) {
    local_ec = local_e8;
    FUN_144cac060(&local_f8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar13);
    local_e8 = local_ec;
  }
  puVar9 = (undefined8 *)((longlong)(int)local_f0 * 0x60 + local_f8);
  if (puVar9 != (undefined8 *)0x0) {
    uVar2 = puVar17[1];
    *puVar9 = *puVar17;
    puVar9[1] = uVar2;
    uVar2 = puVar17[3];
    puVar9[2] = puVar17[2];
    puVar9[3] = uVar2;
    uVar2 = puVar17[5];
    puVar9[4] = puVar17[4];
    puVar9[5] = uVar2;
    uVar2 = puVar17[7];
    puVar9[6] = puVar17[6];
    puVar9[7] = uVar2;
    uVar2 = puVar17[9];
    puVar9[8] = puVar17[8];
    puVar9[9] = uVar2;
    uVar2 = puVar17[0xb];
    puVar9[10] = puVar17[10];
    puVar9[0xb] = uVar2;
  }
  lVar5 = 1;
  local_res20 = local_res20 << 0x1e;
  *(uint *)((longlong)plVar18 + (longlong)*local_b8 * 4) = local_res20;
  lVar14 = local_f8;
  uVar15 = local_e8;
  local_f0 = uVar13;
  local_ec = local_e8;
  if (1 < local_c8) {
    do {
      lVar1 = *param_2;
      lVar10 = (longlong)local_b8[lVar5] * 0x60;
      local_a8 = *(undefined8 *)(lVar10 + lVar1);
      uStack_a0 = ((undefined8 *)(lVar10 + lVar1))[1];
      puVar17 = (undefined8 *)(lVar10 + 0x10 + lVar1);
      local_98 = *puVar17;
      uStack_90 = puVar17[1];
      puVar17 = (undefined8 *)(lVar10 + 0x20 + lVar1);
      local_88 = *puVar17;
      uStack_80 = puVar17[1];
      puVar17 = (undefined8 *)(lVar10 + 0x30 + lVar1);
      local_78 = *puVar17;
      uStack_70 = puVar17[1];
      puVar17 = (undefined8 *)(lVar10 + 0x40 + lVar1);
      local_68 = *puVar17;
      uStack_60 = puVar17[1];
      puVar17 = (undefined8 *)(lVar10 + 0x50 + lVar1);
      local_58 = *puVar17;
      uStack_50 = puVar17[1];
      cVar3 = (*local_res18)((longlong)(int)(uVar13 - 1) * 0x60 + lVar14,&local_a8);
      if (cVar3 == '\0') {
        *(undefined4 *)((longlong)plVar18 + (longlong)local_b8[lVar5] * 4) =
             *(undefined4 *)((longlong)plVar18 + (longlong)local_b8[lVar5 + -1] * 4);
      }
      else {
        uVar4 = uVar13 + 1;
        *(uint *)((longlong)local_b8[lVar5] * 4 + (longlong)plVar18) = local_res20 | uVar13;
        if ((int)(uVar15 & 0x7fffffff) < (int)uVar4) {
          FUN_144cac060(&local_f8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar4);
          lVar14 = local_f8;
          uVar13 = local_f0;
          uVar15 = local_ec;
        }
        puVar17 = (undefined8 *)((longlong)(int)uVar13 * 0x60 + lVar14);
        uVar13 = uVar4;
        local_f0 = uVar4;
        if (puVar17 != (undefined8 *)0x0) {
          *puVar17 = local_a8;
          puVar17[1] = uStack_a0;
          puVar17[2] = local_98;
          puVar17[3] = uStack_90;
          puVar17[4] = local_88;
          puVar17[5] = uStack_80;
          puVar17[6] = local_78;
          puVar17[7] = uStack_70;
          puVar17[8] = local_68;
          puVar17[9] = uStack_60;
          puVar17[10] = local_58;
          puVar17[0xb] = uStack_50;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < local_c8);
  }
  local_e8 = uVar15;
  uVar13 = local_e8;
  if (&local_f8 != param_2) {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_2,
                 (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) * 0x60);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
    FUN_147e54a10(&local_f8,&PTR_vftable_14c6e47a0);
    *param_2 = local_f8;
    *(uint *)(param_2 + 1) = local_f0;
    *(uint *)((longlong)param_2 + 0xc) = local_ec;
    lVar14 = 0;
    uVar13 = 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  FUN_14502c620(&local_d8,&PTR_vftable_14c6e47a0);
  *param_1 = (longlong)local_d8;
  *(uint *)(param_1 + 1) = (uint)uStack_d0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_d0._4_4_;
  if ((-1 < (int)uVar13) && (lVar14 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar14,(ulonglong)(uVar13 & 0x7fffffff) * 0x60);
  }
  if (local_c0 == 0) {
    (*DAT_14c787678)(1,local_b8);
  }
  else {
    uVar12 = (longlong)local_b0 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_c0 + 0x28) < uVar12) ||
       ((longlong)local_b8 + uVar12 != *(longlong *)(local_c0 + 0x38))) {
      FUN_144be8550(local_c0,local_b8);
    }
    else {
      *(int **)(local_c0 + 0x38) = local_b8;
      if (*(int **)(local_c0 + 0x48) == local_b8) {
        FUN_144be8430();
      }
    }
  }
  return param_1;
}



// FUNCTION 14502f180 FUN_14502f180 body=198 status=ok
// SIG undefined FUN_14502f180(void)

uint FUN_14502f180(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar5 = FUN_144d22810();
  if (uVar5 != 0) {
    return uVar5 >> 0x1f;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x78);
  uVar2 = *(ulonglong *)(param_2 + 0x78);
  uVar3 = *(ulonglong *)(param_2 + 0x70);
  uVar4 = *(ulonglong *)(param_1 + 0x70);
  bVar6 = uVar1 <= uVar2 && uVar1 >= uVar2;
  bVar7 = *(ulonglong *)(param_1 + 0x68) < *(ulonglong *)(param_2 + 0x68);
  if (*(ulonglong *)(param_1 + 0x60) < *(ulonglong *)(param_2 + 0x60)) {
    bVar7 = *(ulonglong *)(param_1 + 0x68) <= *(ulonglong *)(param_2 + 0x68) && !bVar7 || bVar7;
  }
  return (uint)(byte)(((uVar4 <= uVar3 && uVar4 >= uVar3) && bVar6) & bVar7 |
                     (uVar1 < uVar2 || uVar4 < uVar3 && bVar6));
}



// FUNCTION 14502f250 FUN_14502f250 body=1412 status=ok
// SIG undefined FUN_14502f250(void)

longlong * FUN_14502f250(longlong *param_1,longlong *param_2,code *param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  code *local_res18;
  uint local_res20;
  longlong local_108;
  uint local_100;
  uint local_fc;
  longlong *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_e0;
  int *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar14 = *(uint *)(param_2 + 1);
  lVar15 = (longlong)(int)uVar14;
  if (uVar14 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144c582c0(&local_e0,uVar14);
  iVar8 = 0;
  uVar16 = 0;
  iVar9 = iVar8;
  if ((0 < (int)uVar14) && (iVar9 = 0, 0xf < uVar14)) {
    uVar5 = uVar14 & 0x8000000f;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff0) + 1;
    }
    piVar12 = local_d8 + 8;
    iVar17 = 8;
    do {
      piVar12[-8] = iVar8;
      piVar12[-7] = iVar8 + 1;
      piVar12[-6] = iVar8 + 2;
      piVar12[-5] = iVar8 + 3;
      iVar8 = iVar8 + 0x10;
      piVar12[-4] = iVar17 + -4;
      piVar12[-3] = iVar17 + -3;
      piVar12[-2] = iVar17 + -2;
      piVar12[-1] = iVar17 + -1;
      *piVar12 = iVar17;
      piVar12[1] = iVar17 + 1;
      piVar12[2] = iVar17 + 2;
      piVar12[3] = iVar17 + 3;
      piVar12[4] = iVar17 + 4;
      piVar12[5] = iVar17 + 5;
      piVar12[6] = iVar17 + 6;
      piVar12[7] = iVar17 + 7;
      piVar12 = piVar12 + 0x10;
      iVar17 = iVar17 + 0x10;
      iVar9 = iVar8;
    } while (iVar8 < (int)(uVar14 - uVar5));
  }
  for (lVar6 = (longlong)iVar9; lVar6 < lVar15; lVar6 = lVar6 + 1) {
    local_d8[lVar6] = iVar9;
    iVar9 = iVar9 + 1;
  }
  uStack_f0 = &local_res18;
  local_e8 = lVar15;
  if (1 < local_d0) {
    local_f8 = param_2;
    FUN_145030a90(local_d8,0,local_d0 + -1,&local_f8);
  }
  local_f8 = (longlong *)0x0;
  uStack_f0._0_4_ = 0;
  uStack_f0._4_4_ = 0x80000000;
  if ((int)uVar14 < 1) {
LAB_14502f43d:
    if ((int)uVar14 < (int)uVar16) {
      uVar16 = uVar14;
    }
    uStack_f0 = (code **)CONCAT44(uStack_f0._4_4_,uVar16);
LAB_14502f444:
    local_108 = 0;
    local_100 = 0;
    local_fc = 0x80000000;
    plVar19 = local_f8;
    if ((int)uVar14 < 1) goto LAB_14502f483;
  }
  else {
    FUN_145030330(&local_f8,&PTR_vftable_14c6e47a0,lVar15);
    uVar16 = (uint)uStack_f0;
    lVar6 = (longlong)(int)(uint)uStack_f0;
    if ((int)uVar14 <= (int)(uint)uStack_f0) goto LAB_14502f43d;
    uStack_f0 = (code **)CONCAT44(uStack_f0._4_4_,uVar14);
    if ((int)(uVar14 - uVar16) < 1) goto LAB_14502f444;
    uVar13 = (ulonglong)(uVar14 - uVar16);
    puVar10 = (undefined4 *)((longlong)local_f8 + lVar6 * 4);
    do {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0xffffffff;
      }
      uVar13 = uVar13 - 1;
      puVar10 = puVar10 + 1;
    } while (uVar13 != 0);
  }
  plVar19 = local_f8;
  local_fc = 0x80000000;
  local_100 = 0;
  local_108 = 0;
  FUN_144cabf70(&local_108,&PTR_vftable_14c6e47a0,lVar15);
LAB_14502f483:
  uVar14 = local_100 + 1;
  puVar18 = (undefined8 *)((longlong)*local_d8 * 0x80 + *param_2);
  if ((int)(local_fc & 0x7fffffff) < (int)uVar14) {
    FUN_144cabf70(&local_108,&PTR_vftable_14c6e47a0,(longlong)(int)uVar14);
  }
  plVar3 = local_f8;
  puVar7 = (undefined8 *)((longlong)(int)local_100 * 0x80 + local_108);
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = puVar18[1];
    *puVar7 = *puVar18;
    puVar7[1] = uVar2;
    uVar2 = puVar18[3];
    puVar7[2] = puVar18[2];
    puVar7[3] = uVar2;
    uVar2 = puVar18[5];
    puVar7[4] = puVar18[4];
    puVar7[5] = uVar2;
    uVar2 = puVar18[7];
    puVar7[6] = puVar18[6];
    puVar7[7] = uVar2;
    uVar2 = puVar18[9];
    puVar7[8] = puVar18[8];
    puVar7[9] = uVar2;
    uVar2 = puVar18[0xb];
    puVar7[10] = puVar18[10];
    puVar7[0xb] = uVar2;
    uVar2 = puVar18[0xd];
    puVar7[0xc] = puVar18[0xc];
    puVar7[0xd] = uVar2;
    uVar2 = puVar18[0xf];
    puVar7[0xe] = puVar18[0xe];
    puVar7[0xf] = uVar2;
  }
  lVar6 = 1;
  local_res20 = local_res20 << 0x1e;
  *(uint *)((longlong)plVar19 + (longlong)*local_d8 * 4) = local_res20;
  lVar15 = local_108;
  uVar16 = local_fc;
  local_100 = uVar14;
  if (1 < local_e8) {
    do {
      lVar1 = *param_2;
      lVar11 = (longlong)local_d8[lVar6] * 0x80;
      local_c8 = *(undefined8 *)(lVar11 + lVar1);
      uStack_c0 = ((undefined8 *)(lVar11 + lVar1))[1];
      puVar18 = (undefined8 *)(lVar11 + 0x10 + lVar1);
      local_b8 = *puVar18;
      uStack_b0 = puVar18[1];
      puVar18 = (undefined8 *)(lVar11 + 0x20 + lVar1);
      local_a8 = *puVar18;
      uStack_a0 = puVar18[1];
      puVar18 = (undefined8 *)(lVar11 + 0x30 + lVar1);
      local_98 = *puVar18;
      uStack_90 = puVar18[1];
      puVar18 = (undefined8 *)(lVar11 + 0x40 + lVar1);
      local_88 = *puVar18;
      uStack_80 = puVar18[1];
      puVar18 = (undefined8 *)(lVar11 + 0x50 + lVar1);
      local_78 = *puVar18;
      uStack_70 = puVar18[1];
      puVar18 = (undefined8 *)(lVar11 + 0x60 + lVar1);
      local_68 = *puVar18;
      uStack_60 = puVar18[1];
      puVar18 = (undefined8 *)(lVar11 + 0x70 + lVar1);
      local_58 = *puVar18;
      uStack_50 = puVar18[1];
      cVar4 = (*local_res18)((longlong)(int)(uVar14 - 1) * 0x80 + lVar15,&local_c8);
      if (cVar4 == '\0') {
        *(undefined4 *)((longlong)plVar3 + (longlong)local_d8[lVar6] * 4) =
             *(undefined4 *)((longlong)plVar3 + (longlong)local_d8[lVar6 + -1] * 4);
      }
      else {
        uVar5 = uVar14 + 1;
        *(uint *)((longlong)plVar3 + (longlong)local_d8[lVar6] * 4) = local_res20 | uVar14;
        if ((int)(uVar16 & 0x7fffffff) < (int)uVar5) {
          FUN_144cabf70(&local_108,&PTR_vftable_14c6e47a0,(longlong)(int)uVar5);
          lVar15 = local_108;
          uVar16 = local_fc;
          uVar14 = local_100;
        }
        puVar18 = (undefined8 *)((longlong)(int)uVar14 * 0x80 + lVar15);
        uVar14 = uVar5;
        local_100 = uVar5;
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = local_c8;
          puVar18[1] = uStack_c0;
          puVar18[2] = local_b8;
          puVar18[3] = uStack_b0;
          puVar18[4] = local_a8;
          puVar18[5] = uStack_a0;
          puVar18[6] = local_98;
          puVar18[7] = uStack_90;
          puVar18[8] = local_88;
          puVar18[9] = uStack_80;
          puVar18[10] = local_78;
          puVar18[0xb] = uStack_70;
          puVar18[0xc] = local_68;
          puVar18[0xd] = uStack_60;
          puVar18[0xe] = local_58;
          puVar18[0xf] = uStack_50;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < local_e8);
  }
  if (&local_108 != param_2) {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_2 + 0xc)) && (*param_2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_2,
                 (ulonglong)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 7);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0x80000000;
    FUN_147e54a7a(&local_108,&PTR_vftable_14c6e47a0);
    *param_2 = local_108;
    *(uint *)(param_2 + 1) = local_100;
    *(uint *)((longlong)param_2 + 0xc) = local_fc;
    lVar15 = 0;
    uVar16 = 0;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  FUN_14502c620(&local_f8,&PTR_vftable_14c6e47a0);
  *param_1 = (longlong)local_f8;
  *(uint *)(param_1 + 1) = (uint)uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_f0._4_4_;
  if ((-1 < (int)uVar16) && (lVar15 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar15,(ulonglong)(uVar16 & 0x7fffffff) << 7);
  }
  if (local_e0 == 0) {
    (*DAT_14c787678)(1,local_d8);
  }
  else {
    uVar13 = (longlong)local_d0 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_e0 + 0x28) < uVar13) ||
       ((longlong)local_d8 + uVar13 != *(longlong *)(local_e0 + 0x38))) {
      FUN_144be8550(local_e0,local_d8);
    }
    else {
      *(int **)(local_e0 + 0x38) = local_d8;
      if (*(int **)(local_e0 + 0x48) == local_d8) {
        FUN_144be8430();
      }
    }
  }
  return param_1;
}



// FUNCTION 14502f7e0 FUN_14502f7e0 body=74 status=ok
// SIG undefined FUN_14502f7e0(void)

void FUN_14502f7e0(longlong param_1)

{
  FUN_144bf95c0(*(longlong *)(param_1 + 0x18) + 0x20,*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x18),1);
  FUN_144bf95c0(*(longlong *)(param_1 + 0x20) + 0x20,*(undefined4 *)(param_1 + 0x28),
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x28),1);
  return;
}



// FUNCTION 14502f830 FUN_14502f830 body=5 status=ok
// SIG undefined FUN_14502f830(void)

undefined8 FUN_14502f830(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 14502f840 FUN_14502f840 body=129 status=ok
// SIG undefined FUN_14502f840(void)

undefined8 * FUN_14502f840(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[8] != 0) {
    FUN_144b3f230();
  }
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
    FUN_144bda120(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14502f8d0 FUN_14502f8d0 body=15 status=ok
// SIG undefined FUN_14502f8d0(void)

undefined4 * FUN_14502f8d0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  return param_2;
}



// FUNCTION 14502f8e0 FUN_14502f8e0 body=214 status=ok
// SIG undefined FUN_14502f8e0(void)

void FUN_14502f8e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [104];
  
  uVar7 = 0;
  local_88 = *(longlong *)(param_1 + 0x18) + 0x20;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_74 = *(undefined4 *)(param_2 + 0x18);
  if (local_88 != 0) {
    local_80 = 0;
    local_78 = 0;
  }
  do {
    if (local_80._4_4_ <= uVar7) {
      if ((local_88 == 0) || (FUN_144bf9800(local_88,local_res8,&local_88), local_res8[0] < 0)) {
        return;
      }
      uVar7 = (uint)local_80;
    }
    puVar8 = (undefined8 *)((longlong)(int)uVar7 * 0x60 + lVar1);
    puVar6 = (undefined8 *)FUN_147e5d2e4(puVar8,local_70);
    uVar7 = uVar7 + 1;
    uVar5 = puVar6[1];
    *puVar8 = *puVar6;
    puVar8[1] = uVar5;
    uVar5 = puVar6[3];
    puVar8[2] = puVar6[2];
    puVar8[3] = uVar5;
    uVar5 = puVar6[5];
    puVar8[4] = puVar6[4];
    puVar8[5] = uVar5;
    uVar5 = puVar6[7];
    puVar8[6] = puVar6[6];
    puVar8[7] = uVar5;
    uVar2 = *(undefined4 *)((longlong)puVar6 + 0x44);
    uVar3 = *(undefined4 *)(puVar6 + 9);
    uVar4 = *(undefined4 *)((longlong)puVar6 + 0x4c);
    *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar6 + 8);
    *(undefined4 *)((longlong)puVar8 + 0x44) = uVar2;
    *(undefined4 *)(puVar8 + 9) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar6 + 0x54);
    uVar3 = *(undefined4 *)(puVar6 + 0xb);
    uVar4 = *(undefined4 *)((longlong)puVar6 + 0x5c);
    *(undefined4 *)(puVar8 + 10) = *(undefined4 *)(puVar6 + 10);
    *(undefined4 *)((longlong)puVar8 + 0x54) = uVar2;
    *(undefined4 *)(puVar8 + 0xb) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar4;
  } while( true );
}



// FUNCTION 14502f9c0 FUN_14502f9c0 body=5 status=ok
// SIG undefined FUN_14502f9c0(void)

undefined8 FUN_14502f9c0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14502f9d0 FUN_14502f9d0 body=115 status=ok
// SIG undefined FUN_14502f9d0(void)

undefined8 * FUN_14502f9d0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14502fa50 FUN_14502fa50 body=15 status=ok
// SIG undefined FUN_14502fa50(void)

undefined4 * FUN_14502fa50(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  return param_2;
}



// FUNCTION 14502fa60 FUN_14502fa60 body=233 status=ok
// SIG undefined FUN_14502fa60(void)

void FUN_14502fa60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [136];
  
  uVar7 = 0;
  local_a8 = *(longlong *)(param_1 + 0x18) + 0x20;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  local_94 = *(undefined4 *)(param_2 + 0x18);
  if (local_a8 != 0) {
    local_a0 = 0;
    local_98 = 0;
  }
  do {
    if (local_a0._4_4_ <= uVar7) {
      if ((local_a8 == 0) || (FUN_144bf9800(local_a8,local_res8,&local_a8), local_res8[0] < 0)) {
        return;
      }
      uVar7 = (uint)local_a0;
    }
    puVar8 = (undefined8 *)((longlong)(int)uVar7 * 0x80 + lVar1);
    puVar6 = (undefined8 *)FUN_147e58064(puVar8,local_90);
    uVar7 = uVar7 + 1;
    uVar5 = puVar6[1];
    *puVar8 = *puVar6;
    puVar8[1] = uVar5;
    uVar5 = puVar6[3];
    puVar8[2] = puVar6[2];
    puVar8[3] = uVar5;
    uVar5 = puVar6[5];
    puVar8[4] = puVar6[4];
    puVar8[5] = uVar5;
    uVar5 = puVar6[7];
    puVar8[6] = puVar6[6];
    puVar8[7] = uVar5;
    uVar5 = puVar6[9];
    puVar8[8] = puVar6[8];
    puVar8[9] = uVar5;
    uVar5 = puVar6[0xb];
    puVar8[10] = puVar6[10];
    puVar8[0xb] = uVar5;
    uVar2 = *(undefined4 *)((longlong)puVar6 + 100);
    uVar3 = *(undefined4 *)(puVar6 + 0xd);
    uVar4 = *(undefined4 *)((longlong)puVar6 + 0x6c);
    *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
    *(undefined4 *)((longlong)puVar8 + 100) = uVar2;
    *(undefined4 *)(puVar8 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar4;
    uVar2 = *(undefined4 *)((longlong)puVar6 + 0x74);
    uVar3 = *(undefined4 *)(puVar6 + 0xf);
    uVar4 = *(undefined4 *)((longlong)puVar6 + 0x7c);
    *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)(puVar6 + 0xe);
    *(undefined4 *)((longlong)puVar8 + 0x74) = uVar2;
    *(undefined4 *)(puVar8 + 0xf) = uVar3;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar4;
  } while( true );
}



// FUNCTION 14502fb50 FUN_14502fb50 body=5 status=ok
// SIG undefined FUN_14502fb50(void)

undefined8 FUN_14502fb50(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 14502fb60 FUN_14502fb60 body=115 status=ok
// SIG undefined FUN_14502fb60(void)

undefined8 * FUN_14502fb60(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14502fbe0 FUN_14502fbe0 body=9 status=ok
// SIG undefined FUN_14502fbe0(void)

void FUN_14502fbe0(longlong param_1)

{
  FUN_14502dc40(param_1 + 0x10);
  return;
}



// FUNCTION 14502fbf0 FUN_14502fbf0 body=5 status=ok
// SIG undefined FUN_14502fbf0(void)

undefined8 FUN_14502fbf0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14502fc00 FUN_14502fc00 body=115 status=ok
// SIG undefined FUN_14502fc00(void)

undefined8 * FUN_14502fc00(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14502fc80 FUN_14502fc80 body=222 status=ok
// SIG undefined FUN_14502fc80(void)

void FUN_14502fc80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res8;
  longlong local_18;
  undefined4 local_10;
  uint local_c;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  plVar2 = (longlong *)FUN_14502e620(&local_18,*(undefined8 *)(param_1 + 0x10),local_res8,0);
  plVar3 = (longlong *)(lVar1 + 0x18);
  if (plVar2 != plVar3) {
    *(undefined4 *)(lVar1 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(lVar1 + 0x24)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)(lVar1 + 0x24) & 0x7fffffff) << 2);
    }
    *plVar3 = 0;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined4 *)(lVar1 + 0x24) = 0x80000000;
    FUN_14502c620(plVar2,&PTR_vftable_14c6e47a0);
    *plVar3 = *plVar2;
    *(int *)(lVar1 + 0x20) = (int)plVar2[1];
    *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)((longlong)plVar2 + 0xc);
    *plVar2 = 0;
    plVar2[1] = 0;
  }
  local_10 = 0;
  if ((-1 < (int)local_c) && (local_18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_18,(ulonglong)(local_c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 14502fd60 FUN_14502fd60 body=5 status=ok
// SIG undefined FUN_14502fd60(void)

undefined8 FUN_14502fd60(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14502fd70 FUN_14502fd70 body=115 status=ok
// SIG undefined FUN_14502fd70(void)

undefined8 * FUN_14502fd70(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 14502fdf0 FUN_14502fdf0 body=235 status=ok
// SIG undefined FUN_14502fdf0(void)

uint FUN_14502fdf0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar1 = (ulonglong)(*param_1 < *param_2);
  uVar2 = param_1[1] - param_2[1];
  lVar4 = (param_1[2] - param_2[2]) - (ulonglong)(param_1[1] < param_2[1] || uVar2 < uVar1);
  uVar3 = (uint)(lVar4 >> 0x3f) | (uint)(lVar4 != 0 || (uVar2 != uVar1 || *param_1 != *param_2));
  if (uVar3 != 0) {
    return uVar3;
  }
  uVar1 = (ulonglong)(param_1[3] < param_2[3]);
  uVar2 = param_1[4] - param_2[4];
  lVar4 = (param_1[5] - param_2[5]) - (ulonglong)(param_1[4] < param_2[4] || uVar2 < uVar1);
  uVar3 = (uint)(lVar4 != 0 || (uVar2 != uVar1 || param_1[3] != param_2[3])) | (uint)(lVar4 >> 0x3f)
  ;
  if (uVar3 == 0) {
    uVar1 = (ulonglong)(param_1[6] < param_2[6]);
    uVar2 = param_1[7] - param_2[7];
    lVar4 = (param_1[8] - param_2[8]) - (ulonglong)(param_1[7] < param_2[7] || uVar2 < uVar1);
    uVar3 = (uint)(lVar4 != 0 || (uVar2 != uVar1 || param_1[6] != param_2[6])) |
            (uint)(lVar4 >> 0x3f);
  }
  return uVar3;
}



// FUNCTION 14502fee0 FUN_14502fee0 body=230 status=ok
// SIG undefined FUN_14502fee0(void)

void FUN_14502fee0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_18;
  undefined4 local_10;
  uint local_c;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  plVar2 = (longlong *)FUN_14502ec00(&local_18,*(longlong *)(param_1 + 0x10) + 0x10,FUN_14502eb40,1)
  ;
  plVar3 = (longlong *)(lVar1 + 0x28);
  if (plVar2 != plVar3) {
    *(undefined4 *)(lVar1 + 0x30) = 0;
    if ((-1 < (int)*(uint *)(lVar1 + 0x34)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)(lVar1 + 0x34) & 0x7fffffff) << 2);
    }
    *plVar3 = 0;
    *(undefined4 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x34) = 0x80000000;
    FUN_14502c620(plVar2,&PTR_vftable_14c6e47a0);
    *plVar3 = *plVar2;
    *(int *)(lVar1 + 0x30) = (int)plVar2[1];
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)((longlong)plVar2 + 0xc);
    *plVar2 = 0;
    plVar2[1] = 0;
  }
  local_10 = 0;
  if ((-1 < (int)local_c) && (local_18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_18,(ulonglong)(local_c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 14502ffd0 FUN_14502ffd0 body=5 status=ok
// SIG undefined FUN_14502ffd0(void)

undefined8 FUN_14502ffd0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 14502ffe0 FUN_14502ffe0 body=115 status=ok
// SIG undefined FUN_14502ffe0(void)

undefined8 * FUN_14502ffe0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145030060 FUN_145030060 body=230 status=ok
// SIG undefined FUN_145030060(void)

void FUN_145030060(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong local_18;
  undefined4 local_10;
  uint local_c;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  plVar2 = (longlong *)FUN_14502f250(&local_18,*(longlong *)(param_1 + 0x10) + 0x20,FUN_14502f180,2)
  ;
  plVar3 = (longlong *)(lVar1 + 0x38);
  if (plVar2 != plVar3) {
    *(undefined4 *)(lVar1 + 0x40) = 0;
    if ((-1 < (int)*(uint *)(lVar1 + 0x44)) && (*plVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar3,
                 (ulonglong)(*(uint *)(lVar1 + 0x44) & 0x7fffffff) << 2);
    }
    *plVar3 = 0;
    *(undefined4 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 0x44) = 0x80000000;
    FUN_14502c620(plVar2,&PTR_vftable_14c6e47a0);
    *plVar3 = *plVar2;
    *(int *)(lVar1 + 0x40) = (int)plVar2[1];
    *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)((longlong)plVar2 + 0xc);
    *plVar2 = 0;
    plVar2[1] = 0;
  }
  local_10 = 0;
  if ((-1 < (int)local_c) && (local_18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_18,(ulonglong)(local_c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 145030150 FUN_145030150 body=5 status=ok
// SIG undefined FUN_145030150(void)

undefined8 FUN_145030150(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 145030160 FUN_145030160 body=115 status=ok
// SIG undefined FUN_145030160(void)

undefined8 * FUN_145030160(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 1450301e0 FUN_1450301e0 body=166 status=ok
// SIG undefined FUN_1450301e0(void)

void FUN_1450301e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 local_38 [48];
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  uVar2 = FUN_14502c2f0(local_38,lVar4 + 0x18,lVar4 + 0x28,lVar4 + 0x38);
  FUN_14502c490(lVar1 + 0x18,uVar2);
  lVar4 = 3;
  puVar3 = (undefined4 *)&stack0x00000004;
  do {
    lVar4 = lVar4 + -1;
    puVar3[-5] = 0;
    if ((-1 < (int)puVar3[-4]) && (*(longlong *)(puVar3 + -7) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -7),
                 (ulonglong)(puVar3[-4] & 0x7fffffff) << 2);
    }
    *(undefined8 *)(puVar3 + -7) = 0;
    puVar3[-4] = 0x80000000;
    puVar3 = puVar3 + -4;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 145030290 FUN_145030290 body=5 status=ok
// SIG undefined FUN_145030290(void)

undefined8 FUN_145030290(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 1450302a0 FUN_1450302a0 body=129 status=ok
// SIG undefined FUN_1450302a0(void)

undefined8 * FUN_1450302a0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145030330 FUN_145030330 body=247 status=ok
// SIG undefined FUN_145030330(void)

void FUN_145030330(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145030430 FUN_145030430 body=532 status=ok
// SIG undefined FUN_145030430(void)

void FUN_145030430(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint local_res10;
  int local_98;
  int local_88;
  int local_78;
  int local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  plVar4 = (longlong *)*param_4;
  uVar6 = (ulonglong)(int)param_2;
  uVar11 = uVar6;
  local_res10 = param_2;
  do {
    uVar14 = (ulonglong)param_3;
    uVar13 = uVar6 & 0xffffffff;
    lVar1 = (longlong)*(int *)(param_1 + ((longlong)((int)uVar6 + param_3) >> 1) * 4) * 0xc;
    iVar15 = param_3;
    do {
      lVar5 = *plVar4;
      iVar3 = *(int *)(lVar5 + 8 + lVar1);
      local_98 = (int)*(undefined8 *)(lVar5 + lVar1);
      while( true ) {
        uVar12 = (uint)uVar13;
        lVar7 = (longlong)*(int *)(param_1 + uVar11 * 4);
        uVar2 = *(undefined8 *)(lVar5 + lVar7 * 0xc);
        local_88 = (int)uVar2;
        if (local_88 - local_98 == 0) {
          iVar8 = (int)((ulonglong)uVar2 >> 0x20) -
                  (int)((ulonglong)*(undefined8 *)(lVar5 + lVar1) >> 0x20);
          if (iVar8 == 0) {
            bVar10 = *(int *)(lVar5 + 8 + lVar7 * 0xc) < iVar3;
          }
          else {
            bVar10 = (bool)((byte)(iVar8 >> 0x1f) >> 7);
          }
        }
        else {
          bVar10 = (bool)((byte)(local_88 - local_98 >> 0x1f) >> 7);
        }
        if (bVar10 == false) break;
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar11 = uVar11 + 1;
      }
      local_78 = (int)*(undefined8 *)(lVar5 + lVar1);
      while( true ) {
        iVar8 = *(int *)(param_1 + uVar14 * 4);
        uVar2 = *(undefined8 *)(lVar5 + (longlong)iVar8 * 0xc);
        local_68 = (int)uVar2;
        if (local_78 - local_68 == 0) {
          iVar9 = (int)((ulonglong)*(undefined8 *)(lVar5 + lVar1) >> 0x20) -
                  (int)((ulonglong)uVar2 >> 0x20);
          if (iVar9 == 0) {
            bVar10 = iVar3 < *(int *)(lVar5 + 8 + (longlong)iVar8 * 0xc);
          }
          else {
            bVar10 = (bool)((byte)(iVar9 >> 0x1f) >> 7);
          }
        }
        else {
          bVar10 = (bool)((byte)(local_78 - local_68 >> 0x1f) >> 7);
        }
        if (bVar10 == false) break;
        iVar15 = iVar15 + -1;
        uVar14 = uVar14 - 1;
      }
      if ((longlong)uVar14 < (longlong)uVar11) break;
      if (uVar14 != uVar11) {
        *(undefined4 *)(param_1 + uVar14 * 4) = *(undefined4 *)(param_1 + uVar11 * 4);
        *(int *)(param_1 + uVar11 * 4) = iVar8;
      }
      iVar15 = iVar15 + -1;
      uVar14 = uVar14 - 1;
      uVar12 = uVar12 + 1;
      uVar13 = (ulonglong)uVar12;
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 <= (longlong)uVar14);
    if ((int)local_res10 < iVar15) {
      local_58 = *(undefined4 *)param_4;
      uStack_54 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_50 = *(undefined4 *)(param_4 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_145030430(param_1,local_res10,iVar15,&local_58);
    }
    if (param_3 <= (int)uVar12) {
      return;
    }
    uVar6 = (ulonglong)uVar12;
    local_res10 = uVar12;
  } while( true );
}



// FUNCTION 145030650 FUN_145030650 body=1081 status=ok
// SIG undefined FUN_145030650(void)

void FUN_145030650(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint local_res8;
  uint local_res10;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar7 = (ulonglong)(int)param_2;
  puVar3 = (undefined8 *)param_4[1];
  plVar4 = (longlong *)*param_4;
  uVar10 = uVar7;
  local_res10 = param_2;
  do {
    uVar11 = (ulonglong)param_3;
    local_res8 = (uint)uVar7;
    uVar7 = uVar7 & 0xffffffff;
    lVar13 = (longlong)*(int *)(param_1 + ((longlong)(int)(local_res8 + param_3) >> 1) * 4) * 0x60;
    iVar12 = param_3;
    do {
      uVar14 = (uint)uVar7;
      lVar9 = *plVar4;
      lVar8 = (longlong)*(int *)(param_1 + uVar10 * 4) * 0x60;
      local_a8 = *(undefined8 *)(lVar8 + lVar9);
      uStack_a0 = ((undefined8 *)(lVar8 + lVar9))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
      local_98 = *puVar1;
      uStack_90 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar9);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar9);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar9);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar9);
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      lVar9 = *plVar4;
      local_108 = *(undefined8 *)(lVar9 + lVar13);
      uStack_100 = ((undefined8 *)(lVar9 + lVar13))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
      local_f8 = *puVar1;
      uStack_f0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
      local_e8 = *puVar1;
      uStack_e0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar13);
      local_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar13);
      local_c8 = *puVar1;
      uStack_c0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar13);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      cVar6 = (*(code *)*puVar3)(&local_a8,&local_108);
      uVar5 = local_res8;
      while (cVar6 != '\0') {
        lVar9 = uVar10 * 4;
        uVar10 = uVar10 + 1;
        uVar14 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar14;
        lVar8 = *plVar4;
        lVar9 = (longlong)*(int *)(param_1 + 4 + lVar9) * 0x60;
        local_a8 = *(undefined8 *)(lVar9 + lVar8);
        uStack_a0 = ((undefined8 *)(lVar9 + lVar8))[1];
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar8);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar8);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar8);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar8);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        lVar9 = *plVar4;
        local_108 = *(undefined8 *)(lVar9 + lVar13);
        uStack_100 = ((undefined8 *)(lVar9 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
        local_f8 = *puVar1;
        uStack_f0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar13);
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar13);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar13);
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        cVar6 = (*(code *)*puVar3)(&local_a8,&local_108);
        uVar5 = uVar14;
      }
      lVar9 = *plVar4;
      local_108 = *(undefined8 *)(lVar9 + lVar13);
      uStack_100 = ((undefined8 *)(lVar9 + lVar13))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
      local_f8 = *puVar1;
      uStack_f0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
      local_e8 = *puVar1;
      uStack_e0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar13);
      local_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar13);
      local_c8 = *puVar1;
      uStack_c0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar13);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      lVar9 = *plVar4;
      lVar8 = (longlong)*(int *)(param_1 + uVar11 * 4) * 0x60;
      local_a8 = *(undefined8 *)(lVar8 + lVar9);
      uStack_a0 = ((undefined8 *)(lVar8 + lVar9))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
      local_98 = *puVar1;
      uStack_90 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar9);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar9);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar9);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar9);
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      cVar6 = (*(code *)*puVar3)(&local_108,&local_a8);
      local_res8 = uVar14;
      while (cVar6 != '\0') {
        lVar9 = *plVar4;
        uVar11 = uVar11 - 1;
        iVar12 = iVar12 + -1;
        local_108 = *(undefined8 *)(lVar9 + lVar13);
        uStack_100 = ((undefined8 *)(lVar9 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
        local_f8 = *puVar1;
        uStack_f0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar13);
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar13);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar13);
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        lVar9 = *plVar4;
        lVar8 = (longlong)*(int *)(param_1 + uVar11 * 4) * 0x60;
        local_a8 = *(undefined8 *)(lVar8 + lVar9);
        uStack_a0 = ((undefined8 *)(lVar8 + lVar9))[1];
        puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar9);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar9);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar9);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar9);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        cVar6 = (*(code *)*puVar3)(&local_108,&local_a8);
        local_res8 = uVar5;
      }
      if ((longlong)uVar11 < (longlong)uVar10) break;
      if (uVar11 != uVar10) {
        uVar2 = *(undefined4 *)(param_1 + uVar11 * 4);
        *(undefined4 *)(param_1 + uVar11 * 4) = *(undefined4 *)(param_1 + uVar10 * 4);
        *(undefined4 *)(param_1 + uVar10 * 4) = uVar2;
      }
      iVar12 = iVar12 + -1;
      local_res8 = local_res8 + 1;
      uVar7 = (ulonglong)local_res8;
      uVar11 = uVar11 - 1;
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 <= (longlong)uVar11);
    if ((int)local_res10 < iVar12) {
      local_48 = *(undefined4 *)param_4;
      uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_40 = *(undefined4 *)(param_4 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_145030650(param_1,local_res10,iVar12,&local_48);
    }
    if (param_3 <= (int)local_res8) {
      return;
    }
    uVar7 = (ulonglong)local_res8;
    local_res10 = local_res8;
  } while( true );
}



// FUNCTION 145030a90 FUN_145030a90 body=1294 status=ok
// SIG undefined FUN_145030a90(void)

void FUN_145030a90(longlong param_1,uint param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint local_res8;
  uint local_res10;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar7 = (ulonglong)(int)param_2;
  puVar3 = (undefined8 *)param_4[1];
  plVar4 = (longlong *)*param_4;
  uVar11 = uVar7;
  local_res10 = param_2;
  do {
    uVar12 = (ulonglong)param_3;
    local_res8 = (uint)uVar7;
    uVar7 = uVar7 & 0xffffffff;
    lVar13 = (longlong)*(int *)(param_1 + ((longlong)(int)(local_res8 + param_3) >> 1) * 4) * 0x80;
    iVar15 = param_3;
    do {
      uVar14 = (uint)uVar7;
      lVar9 = *plVar4;
      lVar8 = (longlong)*(int *)(param_1 + uVar11 * 4) * 0x80;
      local_c8 = *(undefined8 *)(lVar8 + lVar9);
      uStack_c0 = ((undefined8 *)(lVar8 + lVar9))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar9);
      local_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar9);
      local_98 = *puVar1;
      uStack_90 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar9);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar9);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x60 + lVar9);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x70 + lVar9);
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      lVar9 = *plVar4;
      local_148 = *(undefined8 *)(lVar9 + lVar13);
      uStack_140 = ((undefined8 *)(lVar9 + lVar13))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
      local_138 = *puVar1;
      uStack_130 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
      local_128 = *puVar1;
      uStack_120 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar13);
      local_118 = *puVar1;
      uStack_110 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar13);
      local_108 = *puVar1;
      uStack_100 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar13);
      local_f8 = *puVar1;
      uStack_f0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x60 + lVar13);
      local_e8 = *puVar1;
      uStack_e0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x70 + lVar13);
      local_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      cVar6 = (*(code *)*puVar3)(&local_c8,&local_148);
      uVar5 = local_res8;
      while (cVar6 != '\0') {
        lVar8 = *plVar4;
        lVar9 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        lVar9 = (longlong)*(int *)(param_1 + 4 + lVar9) * 0x80;
        uVar14 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar14;
        local_c8 = *(undefined8 *)(lVar9 + lVar8);
        uStack_c0 = ((undefined8 *)(lVar9 + lVar8))[1];
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar8);
        local_a8 = *puVar1;
        uStack_a0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar8);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar8);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar8);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x60 + lVar8);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x70 + lVar8);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        lVar9 = *plVar4;
        local_148 = *(undefined8 *)(lVar9 + lVar13);
        uStack_140 = ((undefined8 *)(lVar9 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
        local_138 = *puVar1;
        uStack_130 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
        local_128 = *puVar1;
        uStack_120 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar13);
        local_118 = *puVar1;
        uStack_110 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar13);
        local_108 = *puVar1;
        uStack_100 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar13);
        local_f8 = *puVar1;
        uStack_f0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x60 + lVar13);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar9 + 0x70 + lVar13);
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        cVar6 = (*(code *)*puVar3)(&local_c8,&local_148);
        uVar5 = uVar14;
      }
      lVar9 = *plVar4;
      lVar8 = (longlong)*(int *)(param_1 + uVar12 * 4) * 0x80;
      local_148 = *(undefined8 *)(lVar9 + lVar13);
      uStack_140 = ((undefined8 *)(lVar9 + lVar13))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar13);
      local_138 = *puVar1;
      uStack_130 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar13);
      local_128 = *puVar1;
      uStack_120 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar13);
      local_118 = *puVar1;
      uStack_110 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar13);
      local_108 = *puVar1;
      uStack_100 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar13);
      local_f8 = *puVar1;
      uStack_f0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x60 + lVar13);
      local_e8 = *puVar1;
      uStack_e0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x70 + lVar13);
      local_d8 = *puVar1;
      uStack_d0 = puVar1[1];
      lVar9 = *plVar4;
      local_c8 = *(undefined8 *)(lVar8 + lVar9);
      uStack_c0 = ((undefined8 *)(lVar8 + lVar9))[1];
      puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar9);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar9);
      local_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar9);
      local_98 = *puVar1;
      uStack_90 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar9);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar9);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x60 + lVar9);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      puVar1 = (undefined8 *)(lVar8 + 0x70 + lVar9);
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      cVar6 = (*(code *)*puVar3)(&local_148,&local_c8);
      local_res8 = uVar14;
      while (cVar6 != '\0') {
        lVar8 = *plVar4;
        lVar9 = uVar12 * 4;
        uVar12 = uVar12 - 1;
        lVar10 = (longlong)*(int *)(param_1 + -4 + lVar9) * 0x80;
        iVar15 = iVar15 + -1;
        local_148 = *(undefined8 *)(lVar8 + lVar13);
        uStack_140 = ((undefined8 *)(lVar8 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar13);
        local_138 = *puVar1;
        uStack_130 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar13);
        local_128 = *puVar1;
        uStack_120 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar13);
        local_118 = *puVar1;
        uStack_110 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x40 + lVar13);
        local_108 = *puVar1;
        uStack_100 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x50 + lVar13);
        local_f8 = *puVar1;
        uStack_f0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x60 + lVar13);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar8 + 0x70 + lVar13);
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        lVar9 = *plVar4;
        local_c8 = *(undefined8 *)(lVar10 + lVar9);
        uStack_c0 = ((undefined8 *)(lVar10 + lVar9))[1];
        puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar9);
        local_b8 = *puVar1;
        uStack_b0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar9);
        local_a8 = *puVar1;
        uStack_a0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar10 + 0x30 + lVar9);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar10 + 0x40 + lVar9);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar10 + 0x50 + lVar9);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar10 + 0x60 + lVar9);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar10 + 0x70 + lVar9);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        cVar6 = (*(code *)*puVar3)(&local_148,&local_c8);
        local_res8 = uVar5;
      }
      if ((longlong)uVar12 < (longlong)uVar11) break;
      if (uVar12 != uVar11) {
        uVar2 = *(undefined4 *)(param_1 + uVar12 * 4);
        *(undefined4 *)(param_1 + uVar12 * 4) = *(undefined4 *)(param_1 + uVar11 * 4);
        *(undefined4 *)(param_1 + uVar11 * 4) = uVar2;
      }
      iVar15 = iVar15 + -1;
      local_res8 = local_res8 + 1;
      uVar7 = (ulonglong)local_res8;
      uVar12 = uVar12 - 1;
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 <= (longlong)uVar12);
    if ((int)local_res10 < iVar15) {
      local_48 = *(undefined4 *)param_4;
      uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_40 = *(undefined4 *)(param_4 + 1);
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_145030a90(param_1,local_res10,iVar15,&local_48);
    }
    if (param_3 <= (int)local_res8) {
      return;
    }
    uVar7 = (ulonglong)local_res8;
    local_res10 = local_res8;
  } while( true );
}



// FUNCTION 145030fa0 FUN_145030fa0 body=9 status=ok
// SIG undefined FUN_145030fa0(void)

void FUN_145030fa0(longlong param_1)

{
  FUN_14502f840(param_1 + -0x20);
  return;
}



// FUNCTION 145030fac FUN_145030fac body=9 status=ok
// SIG undefined FUN_145030fac(void)

void FUN_145030fac(longlong param_1)

{
  FUN_14502f9d0(param_1 + -0x20);
  return;
}



// FUNCTION 145030fb8 FUN_145030fb8 body=9 status=ok
// SIG undefined FUN_145030fb8(void)

void FUN_145030fb8(longlong param_1)

{
  FUN_14502fb60(param_1 + -0x20);
  return;
}



// FUNCTION 145030fc4 FUN_145030fc4 body=9 status=ok
// SIG undefined FUN_145030fc4(void)

void FUN_145030fc4(longlong param_1)

{
  FUN_14502fc00(param_1 + -0x20);
  return;
}



// FUNCTION 145030fd0 FUN_145030fd0 body=9 status=ok
// SIG undefined FUN_145030fd0(void)

void FUN_145030fd0(longlong param_1)

{
  FUN_14502fd70(param_1 + -0x20);
  return;
}



// FUNCTION 145030fdc FUN_145030fdc body=9 status=ok
// SIG undefined FUN_145030fdc(void)

void FUN_145030fdc(longlong param_1)

{
  FUN_14502ffe0(param_1 + -0x20);
  return;
}



// FUNCTION 145030fe8 FUN_145030fe8 body=9 status=ok
// SIG undefined FUN_145030fe8(void)

void FUN_145030fe8(longlong param_1)

{
  FUN_145030160(param_1 + -0x20);
  return;
}



// FUNCTION 145030ff4 FUN_145030ff4 body=9 status=ok
// SIG undefined FUN_145030ff4(void)

void FUN_145030ff4(longlong param_1)

{
  FUN_1450302a0(param_1 + -0x20);
  return;
}



// FUNCTION 145031000 FUN_145031000 body=153 status=ok
// SIG undefined FUN_145031000(void)

longlong * FUN_145031000(longlong *param_1,longlong *param_2)

{
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_14382139c(param_2,&PTR_vftable_14c6e47a0);
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 1450310a0 FUN_1450310a0 body=48 status=ok
// SIG undefined FUN_1450310a0(void)

longlong FUN_1450310a0(longlong param_1,longlong param_2)

{
  FUN_145025480();
  FUN_144c904b0(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 1450310d0 FUN_1450310d0 body=48 status=ok
// SIG undefined FUN_1450310d0(void)

longlong FUN_1450310d0(longlong param_1,longlong param_2)

{
  FUN_145025490();
  FUN_145031000(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 145031100 FUN_145031100 body=120 status=ok
// SIG undefined FUN_145031100(void)

undefined8 * FUN_145031100(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x20;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"BooleanMeshEdgeOverlay");
  }
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = hkaiNavMeshGeneration::BooleanMeshEdgeOverlay::vftable;
    FUN_144c90410(puVar1 + 1,param_1 + 8);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 145031180 FUN_145031180 body=109 status=ok
// SIG undefined FUN_145031180(void)

undefined8 * FUN_145031180(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = 0x20;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"BooleanMeshEdgeOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = hkaiNavMeshGeneration::BooleanMeshEdgeOverlay::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}



// FUNCTION 1450311f0 FUN_1450311f0 body=1193 status=ok
// SIG undefined FUN_1450311f0(void)

void FUN_1450311f0(longlong param_1,longlong *param_2)

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
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  longlong *plVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong local_58;
  uint local_50;
  uint local_4c;
  int local_48;
  
  iVar18 = *(int *)(param_1 + 0x18);
  uVar26 = 0;
  uVar22 = iVar18 + 0x1f >> 5;
  if ((int)uVar22 < 1) {
    local_58 = 0;
    local_50 = 0;
    local_4c = 0x80000000;
  }
  else {
    local_58 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar22 << 2);
    local_50 = uVar22;
    local_4c = uVar22;
  }
  local_48 = iVar18;
  if ((int)(local_4c & 0x7fffffff) < (int)uVar22) {
    FUN_140163394(&local_58,&PTR_vftable_14c6e47a0);
  }
  if (((int)local_50 < (int)uVar22) || ((int)uVar22 < (int)local_50)) {
    local_50 = uVar22;
  }
  iVar18 = local_48 >> 5;
  uVar25 = uVar26;
  if (0 < iVar18) {
    uVar25 = (ulonglong)(uint)(iVar18 << 5);
    lVar28 = 8;
    do {
      lVar20 = *param_2;
      uVar22 = 0;
      lVar16 = *(longlong *)(param_1 + 8);
      lVar27 = lVar28;
      iVar24 = 2;
      do {
        iVar1 = *(int *)(lVar27 + -8 + lVar20);
        bVar17 = (byte)iVar24;
        iVar2 = *(int *)(lVar27 + -4 + lVar20);
        iVar3 = *(int *)(lVar27 + 4 + lVar20);
        iVar4 = *(int *)(lVar27 + 8 + lVar20);
        iVar5 = *(int *)(lVar27 + 0xc + lVar20);
        iVar6 = *(int *)(lVar27 + 0x10 + lVar20);
        iVar7 = *(int *)(lVar27 + 0x14 + lVar20);
        iVar8 = *(int *)(lVar27 + 0x18 + lVar20);
        iVar9 = *(int *)(lVar27 + 0x1c + lVar20);
        iVar10 = *(int *)(lVar27 + 0x20 + lVar20);
        iVar11 = *(int *)(lVar27 + 0x24 + lVar20);
        iVar12 = *(int *)(lVar27 + 0x28 + lVar20);
        iVar13 = *(int *)(lVar27 + 0x2c + lVar20);
        iVar14 = *(int *)(lVar27 + 0x30 + lVar20);
        iVar15 = *(int *)(lVar27 + 0x34 + lVar20);
        uVar22 = uVar22 | (*(uint *)(lVar16 + ((longlong)iVar1 >> 5) * 4) >> ((byte)iVar1 & 0x1f) &
                          1) << (bVar17 - 2 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar2 >> 5) * 4) >> ((byte)iVar2 & 0x1f) & 1) <<
                 (bVar17 - 1 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)*(int *)(lVar27 + lVar20) >> 5) * 4) >>
                  ((byte)*(int *)(lVar27 + lVar20) & 0x1f) & 1) << (bVar17 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar3 >> 5) * 4) >> ((byte)iVar3 & 0x1f) & 1) <<
                 (bVar17 + 1 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar4 >> 5) * 4) >> ((byte)iVar4 & 0x1f) & 1) <<
                 (bVar17 + 2 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar5 >> 5) * 4) >> ((byte)iVar5 & 0x1f) & 1) <<
                 (bVar17 + 3 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar6 >> 5) * 4) >> ((byte)iVar6 & 0x1f) & 1) <<
                 (bVar17 + 4 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar7 >> 5) * 4) >> ((byte)iVar7 & 0x1f) & 1) <<
                 (bVar17 + 5 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar8 >> 5) * 4) >> ((byte)iVar8 & 0x1f) & 1) <<
                 (bVar17 + 6 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar9 >> 5) * 4) >> ((byte)iVar9 & 0x1f) & 1) <<
                 (bVar17 + 7 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar10 >> 5) * 4) >> ((byte)iVar10 & 0x1f) & 1) <<
                 (bVar17 + 8 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar11 >> 5) * 4) >> ((byte)iVar11 & 0x1f) & 1) <<
                 (bVar17 + 9 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar12 >> 5) * 4) >> ((byte)iVar12 & 0x1f) & 1) <<
                 (bVar17 + 10 & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar13 >> 5) * 4) >> ((byte)iVar13 & 0x1f) & 1) <<
                 (bVar17 + 0xb & 0x1f) |
                 (*(uint *)(lVar16 + ((longlong)iVar14 >> 5) * 4) >> ((byte)iVar14 & 0x1f) & 1) <<
                 (bVar17 + 0xc & 0x1f) |
                 (*(uint *)(lVar16 + (longlong)(iVar15 >> 5) * 4) >> ((byte)iVar15 & 0x1f) & 1) <<
                 (bVar17 + 0xd & 0x1f);
        iVar1 = iVar24 + 0xe;
        lVar27 = lVar27 + 0x40;
        iVar24 = iVar24 + 0x10;
      } while (iVar1 < 0x20);
      *(uint *)(local_58 + uVar26 * 4) = uVar22;
      uVar26 = uVar26 + 1;
      lVar28 = lVar28 + 0x80;
    } while ((longlong)uVar26 < (longlong)iVar18);
  }
  lVar28 = (longlong)(int)uVar25;
  if (lVar28 < local_48) {
    uVar22 = 1;
    do {
      iVar24 = (int)uVar25;
      uVar25 = (ulonglong)(iVar24 + 1);
      iVar18 = *(int *)(*param_2 + lVar28 * 4);
      lVar28 = lVar28 + 1;
      uVar21 = ~uVar22;
      lVar20 = (longlong)(iVar24 >> 5);
      uVar19 = uVar22 & -(*(uint *)(*(longlong *)(param_1 + 8) + (longlong)(iVar18 >> 5) * 4) >>
                          ((byte)iVar18 & 0x1f) & 1);
      uVar22 = uVar22 << 1 | (uint)((int)uVar22 < 0);
      *(uint *)(local_58 + lVar20 * 4) = uVar21 & *(uint *)(local_58 + lVar20 * 4) | uVar19;
    } while (lVar28 < local_48);
  }
  plVar23 = (longlong *)(param_1 + 8);
  lVar28 = local_58;
  uVar22 = local_4c;
  if (&local_58 != plVar23) {
    uVar22 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*plVar23 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar23,
                 (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
    }
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    *plVar23 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_14382139c(&local_58,&PTR_vftable_14c6e47a0);
    *plVar23 = local_58;
    *(uint *)(param_1 + 0x10) = local_50;
    *(uint *)(param_1 + 0x14) = local_4c;
    lVar28 = 0;
  }
  *(int *)(param_1 + 0x18) = local_48;
  if ((-1 < (int)uVar22) && (lVar28 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar28,(ulonglong)(uVar22 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 1450316a0 FUN_1450316a0 body=223 status=ok
// SIG undefined FUN_1450316a0(void)

void FUN_1450316a0(longlong param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar5) {
    lVar3 = *param_2;
    uVar6 = uVar4;
    do {
      iVar2 = *(int *)(lVar3 + uVar4 * 4);
      if (-1 < iVar2) {
        uVar7 = 1 << ((byte)iVar2 & 0x1f);
        puVar1 = (uint *)(*(longlong *)(param_1 + 8) + ((longlong)iVar2 >> 5) * 4);
        *puVar1 = -(*(uint *)(*(longlong *)(param_1 + 8) + ((longlong)(int)uVar6 >> 5) * 4) >>
                    ((byte)uVar6 & 0x1f) & 1) & uVar7 | ~uVar7 & *puVar1;
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < (longlong)iVar5);
  }
  iVar5 = param_3 + 0x1f >> 5;
  *(int *)(param_1 + 0x18) = param_3;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar5) {
    FUN_140163394(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  if ((*(int *)(param_1 + 0x10) < iVar5) || (iVar5 < *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = iVar5;
  }
  return;
}



// FUNCTION 145031780 FUN_145031780 body=352 status=ok
// SIG undefined FUN_145031780(void)

void FUN_145031780(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar5 = (**(code **)(*param_2 + 0x58))(param_2);
  FUN_144c3fad0((longlong *)(param_1 + 8),0,iVar1 + iVar5,0);
  if ((int)param_2[2] != 0) {
    iVar6 = (int)param_2[3] + -1;
    iVar13 = 0;
    lVar10 = (longlong)(iVar6 >> 5);
    lVar14 = param_2[1];
    uVar9 = 0xffffffff;
    lVar11 = 0;
    uVar12 = ~(iVar6 >> 0x1f) & 1;
    iVar5 = 0;
    do {
      if (lVar11 < lVar10) {
        iVar5 = (iVar5 + iVar13) * 0x20 + iVar1;
        do {
          uVar2 = *(uint *)(lVar14 + lVar11 * 4);
          uVar4 = uVar9 & uVar2;
          while (uVar4 != 0) {
            iVar7 = (*(code *)PTR_FUN_14c6da350)((-(uVar2 & uVar9) & uVar2 & uVar9) - 1);
            uVar9 = uVar9 & -2 << ((byte)iVar7 & 0x1f);
            lVar3 = *(longlong *)(param_1 + 8);
            lVar8 = (longlong)(iVar5 + iVar7) >> 5;
            *(uint *)(lVar3 + lVar8 * 4) =
                 *(uint *)(lVar3 + lVar8 * 4) | 1 << (iVar5 + iVar7 & 0x1fU);
            uVar2 = *(uint *)(lVar14 + lVar11 * 4);
            uVar4 = uVar9 & uVar2;
          }
          iVar5 = iVar5 + 0x20;
          lVar11 = lVar11 + 1;
          uVar9 = 0xffffffff;
        } while (lVar11 < lVar10);
      }
      lVar11 = lVar10 + -1;
      uVar9 = uVar9 & (~(-1 << ((byte)iVar6 & 0x1f)) * 2 | 1U);
      iVar13 = iVar13 + 1;
      lVar14 = lVar14 + 4;
      bVar15 = uVar12 != 0;
      uVar12 = uVar12 - 1;
      iVar5 = (iVar6 >> 5) + -1;
    } while (bVar15);
  }
  return;
}



// FUNCTION 1450318e0 FUN_1450318e0 body=72 status=ok
// SIG undefined FUN_1450318e0(void)

void FUN_1450318e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (iVar1 == 0) {
    FUN_144c904b0(param_1 + 1,param_2 + 8);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145031924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 145031930 FUN_145031930 body=17 status=ok
// SIG undefined FUN_145031930(void)

void FUN_145031930(longlong param_1,undefined4 param_2)

{
  FUN_144c3fad0(param_1 + 8,0,param_2,0);
  return;
}



// FUNCTION 145031950 FUN_145031950 body=4 status=ok
// SIG undefined FUN_145031950(void)

undefined4 FUN_145031950(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 145031960 FUN_145031960 body=3 status=ok
// SIG undefined FUN_145031960(void)

void FUN_145031960(void)

{
  return;
}



// FUNCTION 145031970 FUN_145031970 body=49 status=ok
// SIG undefined FUN_145031970(void)

void FUN_145031970(longlong param_1,int param_2)

{
  FUN_144c3fad0(param_1 + 8,0,*(int *)(param_1 + 0x18) + 1,
                *(uint *)(*(longlong *)(param_1 + 8) + ((longlong)param_2 >> 5) * 4) >>
                ((byte)param_2 & 0x1f) & 1);
  return;
}



// FUNCTION 1450319b0 FUN_1450319b0 body=183 status=ok
// SIG undefined FUN_1450319b0(void)

void FUN_1450319b0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x20);
  puVar2 = (undefined4 *)FUN_144cb3900();
  local_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  local_28 = *(undefined4 *)(param_1 + 0x38);
  uStack_24 = *(undefined4 *)(param_1 + 0x3c);
  uStack_20 = *(undefined4 *)(param_1 + 0x40);
  uStack_1c = *(undefined4 *)(param_1 + 0x44);
  local_18 = *(undefined8 *)(param_1 + 0x48);
  FUN_144cb4a30(*(undefined8 *)(param_1 + 8),uVar1,&local_38);
  FUN_144cb4b80(*(undefined8 *)(param_1 + 8),uVar1,*(undefined4 *)(param_1 + 0x50));
  local_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = *(undefined4 *)(param_1 + 0x60);
  uStack_3c = *(undefined4 *)(param_1 + 100);
  FUN_144cb48b0(*(undefined8 *)(param_1 + 8),uVar1,&local_48);
  local_48 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = *(undefined4 *)(param_1 + 0x70);
  FUN_144cb4c80(*(undefined8 *)(param_1 + 8),uVar1,&local_48);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x30);
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *puVar2 = uVar1;
  return;
}



// FUNCTION 145031a70 FUN_145031a70 body=627 status=ok
// SIG undefined FUN_145031a70(void)

void FUN_145031a70(undefined8 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  iVar13 = *(int *)(param_1[1] + 0x30);
  puVar10 = (uint *)FUN_144cb3c80();
  cVar8 = '\0';
  iVar12 = -1;
  puVar1 = puVar10 + 6;
  if (param_6 < 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    puVar10[0x12] = 0;
    puVar10[0x13] = 0;
    puVar10[0x14] = 0;
    puVar10[0x15] = 0;
    puVar10[0x16] = 0;
  }
  else {
    lVar11 = (longlong)param_6 * 0x120 + param_1[3];
    uVar7 = *(undefined8 *)(lVar11 + 0xd8);
    *(undefined8 *)puVar1 = *(undefined8 *)(lVar11 + 0xd0);
    *(undefined8 *)(puVar10 + 8) = uVar7;
    uVar7 = *(undefined8 *)(lVar11 + 0xe8);
    *(undefined8 *)(puVar10 + 10) = *(undefined8 *)(lVar11 + 0xe0);
    *(undefined8 *)(puVar10 + 0xc) = uVar7;
    uVar7 = *(undefined8 *)(lVar11 + 0xf8);
    *(undefined8 *)(puVar10 + 0xe) = *(undefined8 *)(lVar11 + 0xf0);
    *(undefined8 *)(puVar10 + 0x10) = uVar7;
    uVar3 = *(uint *)(lVar11 + 0x104);
    uVar5 = *(uint *)(lVar11 + 0x108);
    uVar6 = *(uint *)(lVar11 + 0x10c);
    puVar10[0x12] = *(uint *)(lVar11 + 0x100);
    puVar10[0x13] = uVar3;
    puVar10[0x14] = uVar5;
    puVar10[0x15] = uVar6;
    *(undefined8 *)(puVar10 + 0x16) = *(undefined8 *)(lVar11 + 0x110);
    FUN_144cd9210((longlong)param_3 * 0x80 + param_1[0xf],(longlong)param_4 * 0x80 + param_1[0xf]);
    iVar12 = *(int *)(lVar11 + 0x118);
    if (-1 < iVar12) {
      cVar8 = FUN_144cb5150(*param_1,iVar12);
      FUN_144cb50f0(param_1[1],iVar13,cVar8);
      cVar9 = FUN_144cb4f60(*param_1,iVar12);
      if (cVar9 != '\0') {
        FUN_144cb4fe0(*param_1,iVar12,&local_58,&local_68);
        local_48 = local_68;
        local_40 = local_60;
        local_38 = local_58;
        local_30 = local_50;
        FUN_144cb4ef0(param_1[1],iVar13,&local_38,&local_48);
      }
      goto LAB_145031bf2;
    }
  }
  FUN_144cb50f0(param_1[1],iVar13,0);
LAB_145031bf2:
  *(int *)(param_1[0x13] + (longlong)param_2 * 4) = iVar13;
  if (iVar13 != *(int *)((longlong)param_1 + 0x94)) {
    puVar10[2] = iVar13 - 1;
    *(int *)((longlong)iVar13 * 0x60 + -0x54 + *(longlong *)(param_1[1] + 0x28)) = iVar13;
  }
  puVar10[1] = *(int *)(param_1[1] + 0x20) - 1;
  *puVar10 = *(int *)((longlong)param_1 + 0x8c) + param_3 | *(int *)(param_1 + 0x11) << 0x1e;
  if ((cVar8 == '\0') && (-1 < param_5)) {
    uVar3 = *(uint *)(param_1[0x13] + (longlong)param_5 * 4);
    if (0 < (int)uVar3) {
      *(int *)((longlong)(int)uVar3 * 0x60 + 0x10 + *(longlong *)(param_1[1] + 0x28)) = iVar13;
      puVar10[4] = uVar3;
    }
  }
  else {
    puVar10[4] = 0xffffffff;
  }
  plVar4 = (longlong *)param_1[2];
  iVar13 = (int)plVar4[1] + 1;
  if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) < iVar13) {
    FUN_1401f86b2(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  piVar2 = (int *)(*plVar4 + (longlong)(int)plVar4[1] * 4);
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar12;
  }
  *(int *)(plVar4 + 1) = iVar13;
  return;
}



// FUNCTION 145031cf0 FUN_145031cf0 body=70 status=ok
// SIG undefined FUN_145031cf0(void)

void FUN_145031cf0(longlong param_1)

{
  *(int *)((longlong)*(int *)(param_1 + 0x94) * 0x60 + 8 +
          *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) =
       *(int *)(*(longlong *)(param_1 + 8) + 0x30) + -1;
  *(undefined4 *)
   ((longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x30) * 0x60 + -0x54 +
   *(longlong *)(*(longlong *)(param_1 + 8) + 0x28)) = *(undefined4 *)(param_1 + 0x94);
  return;
}



// FUNCTION 145031d40 FUN_145031d40 body=171 status=ok
// SIG undefined FUN_145031d40(void)

longlong * FUN_145031d40(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if (0 < param_2) {
    FUN_1450324d0(param_1,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    lVar2 = *param_1;
    *(int *)(param_1 + 1) = param_2;
    for (puVar3 = (undefined4 *)(lVar2 + (longlong)iVar1 * 4);
        puVar3 != (undefined4 *)(lVar2 + (longlong)param_2 * 4); puVar3 = puVar3 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
      }
    }
  }
  else if (param_2 < iVar1) {
    *(int *)(param_1 + 1) = param_2;
  }
  uVar6 = uVar4;
  if (0 < param_2) {
    do {
      uVar4 = uVar4 + 4;
      uVar5 = (int)uVar6 + 1;
      LOCK();
      *(int *)(*param_1 + -4 + uVar4) = (int)uVar6;
      UNLOCK();
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < param_2);
  }
  return param_1;
}



// FUNCTION 145031df0 FUN_145031df0 body=168 status=ok
// SIG undefined FUN_145031df0(void)

undefined4 * FUN_145031df0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar6 = param_1[1];
  uVar9 = (ulonglong)(int)lVar6;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_2) {
    FUN_1450324d0(param_1,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  iVar3 = (int)param_1[1];
  puVar5 = (undefined4 *)(longlong)iVar3;
  if (iVar3 < param_2) {
    lVar4 = *param_1;
    *(int *)(param_1 + 1) = param_2;
    for (puVar5 = (undefined4 *)(lVar4 + (longlong)puVar5 * 4);
        puVar5 != (undefined4 *)(lVar4 + (longlong)param_2 * 4); puVar5 = puVar5 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
      }
    }
  }
  else if (param_2 < iVar3) {
    *(int *)(param_1 + 1) = param_2;
  }
  if ((int)lVar6 < param_2) {
    lVar6 = uVar9 << 2;
    do {
      lVar6 = lVar6 + 4;
      uVar7 = (uint)uVar9;
      uVar8 = uVar7 + 1;
      uVar9 = (ulonglong)uVar8;
      LOCK();
      puVar1 = (uint *)(*param_1 + -4 + lVar6);
      uVar2 = *puVar1;
      *puVar1 = uVar7;
      puVar5 = (undefined4 *)(ulonglong)uVar2;
      UNLOCK();
    } while ((int)uVar8 < param_2);
  }
  return puVar5;
}



// FUNCTION 145031ea0 FUN_145031ea0 body=211 status=ok
// SIG undefined FUN_145031ea0(void)

ulonglong FUN_145031ea0(ulonglong *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = (ulonglong)(int)param_3;
  iVar1 = *(int *)(*param_1 + (longlong)param_2 * 4);
  iVar8 = param_2;
  if (iVar1 != param_2) {
    do {
      iVar8 = iVar1;
      iVar1 = *(int *)(*param_1 + (longlong)iVar8 * 4);
    } while (iVar1 != iVar8);
    while (param_2 != iVar8) {
      lVar3 = (longlong)param_2;
      param_2 = *(int *)(lVar3 * 4 + *param_1);
      LOCK();
      *(int *)(lVar3 * 4 + *param_1) = iVar8;
      UNLOCK();
    }
  }
  uVar4 = *param_1;
  uVar2 = *(uint *)(uVar4 + uVar7 * 4);
  uVar6 = param_3;
  if (uVar2 != param_3) {
    do {
      uVar6 = uVar2;
      uVar4 = *param_1;
      uVar2 = *(uint *)(uVar4 + (longlong)(int)uVar6 * 4);
    } while (uVar2 != uVar6);
    while (param_3 != uVar6) {
      lVar3 = (longlong)(int)uVar7 * 4;
      param_3 = *(uint *)(lVar3 + *param_1);
      uVar7 = (ulonglong)param_3;
      puVar5 = (uint *)(lVar3 + *param_1);
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = uVar6;
      uVar4 = (ulonglong)uVar2;
      UNLOCK();
    }
  }
  if ((int)uVar6 <= iVar8) {
    if ((int)uVar6 < iVar8) {
      uVar4 = *param_1;
      LOCK();
      *(uint *)(uVar4 + (longlong)iVar8 * 4) = uVar6;
      UNLOCK();
    }
    return uVar4;
  }
  uVar7 = *param_1;
  LOCK();
  *(int *)(uVar7 + (longlong)(int)uVar6 * 4) = iVar8;
  UNLOCK();
  return uVar7;
}



// FUNCTION 145031f80 FUN_145031f80 body=215 status=ok
// SIG undefined FUN_145031f80(void)

void FUN_145031f80(longlong *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  do {
    iVar4 = *(int *)(*param_1 + (longlong)param_2 * 4);
    iVar3 = param_2;
    if (param_2 != iVar4) {
      do {
        iVar3 = *(int *)(*param_1 + (longlong)iVar4 * 4);
        *(int *)(*param_1 + (longlong)param_2 * 4) = iVar3;
        iVar4 = *(int *)(*param_1 + (longlong)iVar3 * 4);
        param_2 = iVar3;
      } while (iVar3 != iVar4);
    }
    iVar4 = *(int *)(*param_1 + (longlong)param_3 * 4);
    iVar2 = param_3;
    if (param_3 != iVar4) {
      do {
        param_3 = *(int *)(*param_1 + (longlong)iVar4 * 4);
        *(int *)(*param_1 + (longlong)iVar2 * 4) = param_3;
        iVar4 = *(int *)(*param_1 + (longlong)param_3 * 4);
        iVar2 = param_3;
      } while (param_3 != iVar4);
    }
    if (iVar3 < param_3) {
      piVar1 = (int *)(*param_1 + (longlong)param_3 * 4);
      LOCK();
      iVar4 = *piVar1;
      bVar5 = param_3 == iVar4;
      if (bVar5) {
        *piVar1 = iVar3;
        iVar4 = param_3;
      }
      param_3 = iVar4;
      UNLOCK();
      param_2 = iVar3;
    }
    else {
      if (iVar3 <= param_3) {
        return;
      }
      piVar1 = (int *)(*param_1 + (longlong)iVar3 * 4);
      LOCK();
      param_2 = *piVar1;
      bVar5 = iVar3 == param_2;
      if (bVar5) {
        *piVar1 = param_3;
        param_2 = iVar3;
      }
      UNLOCK();
    }
  } while (!bVar5);
  return;
}



// FUNCTION 145032060 FUN_145032060 body=1124 status=ok
// SIG undefined FUN_145032060(void)

void FUN_145032060(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  uVar12 = 0;
  uVar18 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  iVar14 = (int)param_1[1];
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar14) {
    FUN_141807aa8(param_3);
  }
  if (((int)param_3[1] < iVar14) || (iVar14 < (int)param_3[1])) {
    *(int *)(param_3 + 1) = iVar14;
  }
  iVar14 = (int)param_1[1];
  lVar4 = (longlong)iVar14;
  lVar3 = *param_1;
  uVar9 = uVar12;
  uVar17 = uVar12;
  if (0 < iVar14) {
    do {
      uVar16 = (uint)uVar9;
      uVar18 = *(uint *)(*param_1 + uVar17 * 4);
      if (uVar18 != uVar16) {
        do {
          uVar7 = uVar18;
          uVar18 = *(uint *)(*param_1 + (longlong)(int)uVar7 * 4);
          uVar2 = uVar16;
        } while (uVar18 != uVar7);
        while (uVar2 != uVar7) {
          lVar1 = (longlong)(int)uVar9 * 4;
          uVar2 = *(uint *)(lVar1 + *param_1);
          uVar9 = (ulonglong)uVar2;
          LOCK();
          *(uint *)(lVar1 + *param_1) = uVar7;
          UNLOCK();
        }
      }
      uVar9 = (ulonglong)(uVar16 + 1);
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < lVar4);
    iVar11 = -1;
    uVar9 = uVar12;
    uVar17 = uVar12;
    uVar15 = uVar12;
    do {
      iVar13 = (int)uVar15;
      if (*(int *)(lVar3 + uVar9 * 4) == iVar13) {
        uVar17 = (ulonglong)((int)uVar17 + 1);
        LOCK();
        *(int *)(lVar3 + (longlong)iVar13 * 4) = iVar11;
        UNLOCK();
        iVar11 = iVar11 + -1;
      }
      uVar18 = (uint)uVar17;
      uVar15 = (ulonglong)(iVar13 + 1);
      uVar9 = uVar9 + 1;
    } while ((longlong)uVar9 < lVar4);
  }
  iVar11 = uVar18 + 1;
  if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar11) {
    FUN_141807aa8(param_2);
  }
  if (((int)param_2[1] < iVar11) || (iVar11 < (int)param_2[1])) {
    *(int *)(param_2 + 1) = iVar11;
  }
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
  uVar9 = *(ulonglong *)(*(longlong *)(lVar5 + 0x3d0) + 0x10);
  lVar5 = (longlong)(int)uVar18;
  lVar1 = lVar5 * 4;
  if (*(longlong *)(uVar9 + 8) == 0) {
    uVar12 = uVar9;
  }
  if (uVar12 == 0) {
    puVar6 = (undefined4 *)(*DAT_14c787670)();
  }
  else {
    uVar9 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    if (uVar9 <= *(ulonglong *)(uVar12 + 0x28)) {
      puVar6 = *(undefined4 **)(uVar12 + 0x38);
      uVar9 = (longlong)puVar6 + uVar9;
      if (uVar9 <= *(ulonglong *)(uVar12 + 0x40)) {
        *(ulonglong *)(uVar12 + 0x38) = uVar9;
        goto LAB_145032271;
      }
    }
    puVar6 = (undefined4 *)FUN_144b454a0();
  }
LAB_145032271:
  if ((int)(uVar18 & 0x7fffffff) < (int)uVar18) {
    FUN_141807aa8();
  }
  if ((0 < (int)uVar18) && (0 < (int)uVar18)) {
    uVar9 = (ulonglong)uVar18;
    puVar8 = puVar6;
    do {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      uVar9 = uVar9 - 1;
      puVar8 = puVar8 + 1;
    } while (uVar9 != 0);
  }
  iVar11 = 0;
  lVar10 = 0;
  if (0 < lVar4) {
    do {
      iVar13 = *(int *)(lVar3 + lVar10 * 4);
      if (iVar13 < 0) {
        iVar13 = iVar11;
      }
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 1;
      puVar6[(int)~*(uint *)(lVar3 + (longlong)iVar13 * 4)] =
           puVar6[(int)~*(uint *)(lVar3 + (longlong)iVar13 * 4)] + 1;
    } while (lVar10 < lVar4);
  }
  iVar11 = 0;
  lVar10 = 0;
  *(undefined4 *)*param_2 = 0;
  if (0 < lVar5) {
    do {
      iVar11 = iVar11 + puVar6[lVar10];
      *(int *)(*param_2 + 4 + lVar10 * 4) = iVar11;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar5);
  }
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar14) {
    FUN_141807aa8(param_3,&PTR_vftable_14c6e47a0);
  }
  if (((int)param_3[1] < iVar14) || (iVar14 < (int)param_3[1])) {
    *(int *)(param_3 + 1) = iVar14;
  }
  iVar14 = 0;
  lVar5 = 0;
  if (0 < lVar4) {
    do {
      iVar11 = *(int *)(lVar3 + lVar5 * 4);
      if (iVar11 < 0) {
        iVar11 = iVar14;
      }
      lVar5 = lVar5 + 1;
      lVar10 = (longlong)(int)~*(uint *)(lVar3 + (longlong)iVar11 * 4);
      puVar6[lVar10] = puVar6[lVar10] + -1;
      *(int *)(*param_3 + (longlong)(*(int *)(*param_2 + lVar10 * 4) + puVar6[lVar10]) * 4) = iVar14
      ;
      iVar14 = iVar14 + 1;
    } while (lVar5 < lVar4);
  }
  if ((-1 < (int)(uVar18 | 0x80000000)) && (puVar6 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar6,(ulonglong)(uVar18 & 0x7fffffff) << 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  if (uVar12 == 0) {
    (*DAT_14c787678)(1,puVar6,lVar1);
  }
  else {
    uVar9 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar12 + 0x28) < uVar9) ||
       ((longlong)puVar6 + uVar9 != *(longlong *)(uVar12 + 0x38))) {
      FUN_144be8550(uVar12,puVar6);
    }
    else {
      *(undefined4 **)(uVar12 + 0x38) = puVar6;
      if (*(undefined4 **)(uVar12 + 0x48) == puVar6) {
        FUN_144be8430(uVar12);
      }
    }
  }
  return;
}



// FUNCTION 1450324d0 FUN_1450324d0 body=269 status=ok
// SIG undefined FUN_1450324d0(void)

void FUN_1450324d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 1450325e0 FUN_1450325e0 body=552 status=ok
// SIG undefined FUN_1450325e0(void)

undefined8
FUN_1450325e0(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4,undefined8 param_5
             ,undefined4 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 local_98 [72];
  undefined1 local_50 [72];
  
  if (param_3 == -1) {
    *(undefined4 *)(param_1 + 0xf0) = param_6;
  }
  else {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x30) + (longlong)param_3 * 4) =
         param_6;
  }
  uVar11 = (ulonglong)*(uint *)(param_1 + 0xf0);
  if (*(uint *)(param_1 + 0xf0) != 0xffffffff) {
    lVar3 = **(longlong **)(param_1 + 0xe8);
    lVar4 = (*(longlong **)(param_1 + 0xe8))[6];
    do {
      iVar9 = (int)uVar11;
      iVar10 = *(int *)(lVar4 + (longlong)iVar9 * 4);
      uVar11 = (ulonglong)iVar10;
      if (*(int *)(lVar3 + (longlong)iVar9 * 4) == 3) {
        if ((iVar10 != -1) && (*(int *)(lVar3 + uVar11 * 4) != 1)) goto LAB_1450327e0;
        break;
      }
    } while (iVar10 != -1);
  }
  iVar10 = -1;
LAB_14503265b:
  iVar9 = *(int *)(param_1 + 0x78);
  if (iVar9 != iVar10) {
    if ((iVar9 != -1) &&
       ((*(int *)(**(longlong **)(param_1 + 0xe8) + (longlong)iVar9 * 4) - 2U & 0xfffffffd) == 0)) {
      puVar8 = (undefined8 *)FUN_144cd3670(local_98,*(undefined8 *)(param_1 + 0x60),param_2);
      local_138 = *puVar8;
      uStack_130 = puVar8[1];
      local_128 = puVar8[2];
      uStack_120 = puVar8[3];
      local_118 = puVar8[4];
      uStack_110 = puVar8[5];
      local_108 = *(undefined4 *)(puVar8 + 6);
      uStack_104 = *(undefined4 *)((longlong)puVar8 + 0x34);
      uStack_100 = *(undefined4 *)(puVar8 + 7);
      uStack_fc = *(undefined4 *)((longlong)puVar8 + 0x3c);
      local_f8 = puVar8[8];
      puVar8 = (undefined8 *)FUN_144cd3670(local_50,*(undefined8 *)(param_1 + 0x60),param_1 + 0x80);
      local_e8 = *puVar8;
      uStack_e0 = puVar8[1];
      local_d8 = puVar8[2];
      uStack_d0 = puVar8[3];
      local_c8 = puVar8[4];
      uStack_c0 = puVar8[5];
      local_b8 = *(undefined4 *)(puVar8 + 6);
      uStack_b4 = *(undefined4 *)((longlong)puVar8 + 0x34);
      uStack_b0 = *(undefined4 *)(puVar8 + 7);
      uStack_ac = *(undefined4 *)((longlong)puVar8 + 0x3c);
      local_a8 = puVar8[8];
      FUN_1450328c0(param_1,&local_e8,&local_138,
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x10) +
                     (longlong)*(int *)(param_1 + 0x78) * 4),
                    (longlong)*(int *)(param_1 + 0x78) * 0x38 +
                    *(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x20));
    }
    uVar1 = *param_2;
    uVar5 = param_2[1];
    *(int *)(param_1 + 0x78) = iVar10;
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    uVar1 = param_2[4];
    uVar5 = param_2[5];
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0x98) = uVar7;
    uVar6 = param_2[6];
    uVar7 = param_2[7];
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    uVar1 = param_2[8];
    uVar5 = param_2[9];
    *(undefined8 *)(param_1 + 0xb0) = uVar6;
    *(undefined8 *)(param_1 + 0xb8) = uVar7;
    uVar6 = param_2[10];
    uVar7 = param_2[0xb];
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
    *(undefined8 *)(param_1 + 200) = uVar5;
    uVar1 = param_2[0xc];
    *(undefined8 *)(param_1 + 0xd0) = uVar6;
    *(undefined8 *)(param_1 + 0xd8) = uVar7;
    *(undefined8 *)(param_1 + 0xe0) = uVar1;
  }
  return 1;
LAB_1450327e0:
  while( true ) {
    iVar10 = (int)uVar11;
    uVar2 = *(uint *)(lVar4 + (longlong)iVar10 * 4);
    if ((uVar2 == 0xffffffff) ||
       ((*(int *)(lVar3 + (longlong)iVar10 * 4) != 4 ||
        (*(int *)(lVar3 + (longlong)(int)uVar2 * 4) == 1)))) break;
    uVar11 = (ulonglong)uVar2;
  }
  goto LAB_14503265b;
}



// FUNCTION 145032810 FUN_145032810 body=60 status=ok
// SIG undefined FUN_145032810(void)

undefined8 FUN_145032810(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  plVar4 = *(longlong **)(param_1 + 0xe8);
  lVar5 = *plVar4;
  uVar6 = (ulonglong)param_2;
  iVar2 = *(int *)((longlong)param_3 * 4 + lVar5);
  lVar1 = uVar6 * 4;
  if (iVar2 < *(int *)(lVar1 + lVar5)) {
    *(int *)(lVar1 + lVar5) = iVar2;
    lVar5 = plVar4[2];
    uVar3 = *(uint *)(lVar5 + (longlong)param_3 * 4);
    uVar6 = (ulonglong)uVar3;
    *(uint *)(lVar5 + lVar1) = uVar3;
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 145032850 FUN_145032850 body=110 status=ok
// SIG undefined FUN_145032850(void)

ulonglong FUN_145032850(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xf0);
  if (*(uint *)(param_1 + 0xf0) != 0xffffffff) {
    lVar3 = **(longlong **)(param_1 + 0xe8);
    lVar4 = (*(longlong **)(param_1 + 0xe8))[6];
    do {
      iVar5 = (int)uVar6;
      iVar1 = *(int *)(lVar4 + (longlong)iVar5 * 4);
      uVar6 = (ulonglong)iVar1;
      if (*(int *)(lVar3 + (longlong)iVar5 * 4) == 3) {
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        if (*(int *)(lVar3 + uVar6 * 4) == 1) {
          return 0xffffffff;
        }
        while( true ) {
          uVar2 = *(uint *)(lVar4 + (longlong)(int)uVar6 * 4);
          if (uVar2 == 0xffffffff) {
            return uVar6;
          }
          if (*(int *)(lVar3 + (longlong)(int)uVar6 * 4) != 4) break;
          if (*(int *)(lVar3 + (longlong)(int)uVar2 * 4) == 1) {
            return uVar6;
          }
          uVar6 = (ulonglong)uVar2;
        }
        return uVar6;
      }
    } while (iVar1 != -1);
  }
  return 0xffffffff;
}



// FUNCTION 1450328c0 FUN_1450328c0 body=2935 status=ok
// SIG undefined FUN_1450328c0(void)

undefined8
FUN_1450328c0(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4,
             undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  char cVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong local_res18;
  undefined4 local_res20;
  uint *local_2d0 [3];
  longlong local_2b8;
  undefined8 uStack_2b0;
  uint *local_2a8;
  uint local_298;
  uint *local_288;
  longlong lStack_280;
  longlong local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  uint *local_258;
  longlong lStack_250;
  longlong local_248;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong local_1b8;
  longlong lStack_1b0;
  uint *local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  uint *local_188;
  longlong lStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  longlong lStack_150;
  uint *local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  uint *local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  uint *local_108;
  longlong lStack_100;
  ulonglong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 *local_b8;
  longlong local_a8;
  longlong lStack_a0;
  uint *local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  uint *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  
  local_238 = *param_3;
  lStack_230 = param_3[1];
  local_228 = param_3[2];
  lStack_220 = param_3[3];
  local_218 = param_3[4];
  lStack_210 = param_3[5];
  local_208 = param_3[6];
  lStack_200 = param_3[7];
  local_1f8 = param_3[8];
  local_138 = *param_2;
  lStack_130 = param_2[1];
  local_128 = (uint *)param_2[2];
  lStack_120 = param_2[3];
  local_118 = param_2[4];
  lStack_110 = param_2[5];
  local_108 = (uint *)param_2[6];
  lStack_100 = param_2[7];
  local_f8 = param_2[8];
  local_res20 = param_4;
  cVar12 = FUN_145033440(&local_138,&local_238);
  if (cVar12 == '\0') {
    uVar18 = *(uint *)(param_1[0xd] + 0x20);
    local_258 = (uint *)FUN_144cb3900();
    uVar8 = *(uint *)(param_1[0xd] + 0x30);
    local_298 = uVar8;
    FUN_144cb3be0(param_1[0xd],local_2d0,4);
    lVar21 = param_1[0xd];
    iVar17 = *(int *)(lVar21 + 0x60);
    local_res18 = CONCAT44(local_res18._4_4_,*(undefined4 *)(lVar21 + 0x60));
    iVar16 = iVar17 + 4;
    if ((int)(*(uint *)(lVar21 + 100) & 0x7fffffff) < iVar16) {
      FUN_144cc4ac0((longlong *)(lVar21 + 0x58),&PTR_vftable_14c6e47a0,(longlong)iVar16);
    }
    *(int *)(lVar21 + 0x60) = iVar16;
    plVar22 = (longlong *)((longlong)iVar17 * 0x80 + *(longlong *)(lVar21 + 0x58));
    plVar13 = (longlong *)param_1[0xe];
    _local_268 = CONCAT44((int)local_res18,2);
    lVar21 = plVar13[1];
    iVar17 = (int)lVar21 + 4;
    if ((int)(*(uint *)((longlong)plVar13 + 0xc) & 0x7fffffff) < iVar17) {
      FUN_141807aa8(plVar13,&PTR_vftable_14c6e47a0,(longlong)iVar17);
    }
    *(int *)(plVar13 + 1) = iVar17;
    uVar1 = uVar8 + 1;
    local_b8 = (undefined4 *)(*plVar13 + (longlong)(int)lVar21 * 4);
    *local_b8 = (int)param_1[1];
    uVar2 = uVar8 + 3;
    local_b8[2] = local_res20;
    local_b8[1] = 0xffffffff;
    local_b8[3] = 0xffffffff;
    *local_258 = uVar8;
    local_2d0[0][1] = uVar18;
    local_2d0[0][3] = uVar1;
    local_2d0[0][2] = uVar2;
    local_2d0[0][4] = 0xffffffff;
    *local_2d0[0] = (uint)local_res18 | 0x80000000;
    FUN_144cb50f0(param_1[0xd],uVar8,0);
    local_2d0[0][0x19] = uVar18;
    uVar3 = uVar8 + 2;
    local_2d0[0][0x1b] = uVar3;
    local_2d0[0][0x1a] = uVar8;
    local_2d0[0][0x1c] = 0xffffffff;
    local_2d0[0][0x18] = (uint)local_res18 + 1 | 0x80000000;
    FUN_144cb50f0(param_1[0xd],uVar1,0);
    local_2d0[0][0x31] = uVar18;
    local_2d0[0][0x33] = uVar2;
    local_2d0[0][0x32] = uVar1;
    iVar17 = (uint)local_res18;
    local_2d0[0][0x34] = 0xffffffff;
    local_2d0[0][0x30] = (uint)local_res18 + 2 | 0x80000000;
    FUN_144cb50f0(param_1[0xd],uVar3,0);
    local_2d0[0][0x49] = uVar18;
    local_2d0[0][0x4b] = uVar8;
    local_2d0[0][0x4a] = uVar3;
    local_2d0[0][0x4c] = 0xffffffff;
    local_2d0[0][0x48] = iVar17 + 3U | 0x80000000;
    FUN_144cb50f0(param_1[0xd],uVar2,0);
    lVar15 = (longlong)(int)param_1[1] * 0x60;
    lVar21 = *(longlong *)(*param_1 + 0x28);
    puVar6 = (undefined8 *)(lVar15 + 0x18 + lVar21);
    uVar11 = puVar6[1];
    *(undefined8 *)(local_2d0[0] + 6) = *puVar6;
    *(undefined8 *)(local_2d0[0] + 8) = uVar11;
    puVar6 = (undefined8 *)(lVar15 + 0x28 + lVar21);
    uVar11 = puVar6[1];
    *(undefined8 *)(local_2d0[0] + 10) = *puVar6;
    *(undefined8 *)(local_2d0[0] + 0xc) = uVar11;
    puVar6 = (undefined8 *)(lVar15 + 0x38 + lVar21);
    uVar11 = puVar6[1];
    *(undefined8 *)(local_2d0[0] + 0xe) = *puVar6;
    *(undefined8 *)(local_2d0[0] + 0x10) = uVar11;
    puVar7 = (uint *)(lVar15 + 0x48 + lVar21);
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    uVar3 = puVar7[3];
    local_2d0[0][0x12] = *puVar7;
    local_2d0[0][0x13] = uVar1;
    local_2d0[0][0x14] = uVar2;
    local_2d0[0][0x15] = uVar3;
    *(undefined8 *)(local_2d0[0] + 0x16) = *(undefined8 *)(lVar15 + 0x58 + lVar21);
    cVar12 = FUN_144cb4f60(*param_1,(int)param_1[1]);
    if (cVar12 != '\0') {
      FUN_144cb4fe0(*param_1,(int)param_1[1],&local_258,&local_1d8);
      local_288 = local_258;
      lStack_280 = CONCAT44(lStack_280._4_4_,(undefined4)lStack_250);
      local_2b8 = local_1d8;
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(undefined4)lStack_1d0);
      FUN_144cb4ef0(param_1[0xd],uVar8,&local_2b8,&local_288);
    }
    uVar11 = param_5[1];
    *(undefined8 *)(local_2d0[0] + 0x36) = *param_5;
    *(undefined8 *)(local_2d0[0] + 0x38) = uVar11;
    uVar11 = param_5[3];
    *(undefined8 *)(local_2d0[0] + 0x3a) = param_5[2];
    *(undefined8 *)(local_2d0[0] + 0x3c) = uVar11;
    uVar8 = *(uint *)((longlong)param_5 + 0x24);
    uVar1 = *(uint *)(param_5 + 5);
    uVar2 = *(uint *)((longlong)param_5 + 0x2c);
    local_2d0[0][0x3e] = *(uint *)(param_5 + 4);
    local_2d0[0][0x3f] = uVar8;
    local_2d0[0][0x40] = uVar1;
    local_2d0[0][0x41] = uVar2;
    *(undefined8 *)(local_2d0[0] + 0x42) = param_5[6];
    FUN_144cb9890();
    local_res18 = local_res18 & 0xffffffffffffff00;
    FUN_145033600(param_1,param_3,local_2d0[0] + 0x1e,&local_res18);
    FUN_145034060(param_1,param_2,local_2d0[0] + 0x4e,&local_res18);
    local_238 = param_1[2];
    lStack_230 = param_1[3];
    local_228 = param_1[4];
    lStack_220 = param_1[5];
    local_218 = param_1[6];
    FUN_144cb4a30(param_1[0xd],uVar18,&local_238);
    FUN_144cb4b80(param_1[0xd],uVar18,(int)param_1[7]);
    local_2b8 = param_1[8];
    uStack_2b0._0_4_ = (undefined4)param_1[9];
    uStack_2b0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x4c);
    FUN_144cb48b0(param_1[0xd],uVar18,&local_2b8);
    local_2b8 = param_1[10];
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)param_1[0xb]);
    FUN_144cb4c80(param_1[0xd],uVar18,&local_2b8);
    uVar20 = 0;
    lVar21 = 4;
    uVar14 = 0x120;
    plVar13 = plVar22;
    uVar19 = uVar20;
    do {
      local_1c8 = *(longlong *)((longlong)local_2d0[0] + uVar19 + 0x48);
      plVar4 = (longlong *)((longlong)local_2d0[0] + uVar19 + 0x38);
      local_158 = -*plVar4;
      plVar5 = (longlong *)((longlong)local_2d0[0] + uVar19 + 0x40);
      uVar9 = (ulonglong)(*plVar4 != 0);
      uVar10 = -*plVar5;
      lStack_150 = uVar10 - uVar9;
      local_2a8 = (uint *)(-(ulonglong)(*plVar5 != 0 || uVar10 < uVar9) - local_1c8);
      plVar4 = (longlong *)((longlong)local_2d0[0] + uVar14 + 0x38);
      local_238 = -*plVar4;
      plVar5 = (longlong *)((longlong)local_2d0[0] + uVar14 + 0x40);
      uVar9 = (ulonglong)(*plVar4 != 0);
      uVar10 = -*plVar5;
      lStack_230 = uVar10 - uVar9;
      local_248 = *(longlong *)((longlong)local_2d0[0] + uVar14 + 0x48);
      local_278 = -(ulonglong)(*plVar5 != 0 || uVar10 < uVar9) - local_248;
      local_288 = *(uint **)((longlong)local_2d0[0] + uVar19 + 0x18);
      lStack_280 = *(longlong *)((longlong)local_2d0[0] + uVar19 + 0x20);
      local_2b8 = *(longlong *)((longlong)local_2d0[0] + uVar19 + 0x28);
      uStack_2b0 = *(longlong *)((longlong)local_2d0[0] + uVar19 + 0x30);
      local_258 = *(uint **)((longlong)local_2d0[0] + uVar14 + 0x18);
      lStack_250 = *(longlong *)((longlong)local_2d0[0] + uVar14 + 0x20);
      local_1d8 = *(longlong *)((longlong)local_2d0[0] + uVar14 + 0x28);
      lStack_1d0 = *(longlong *)((longlong)local_2d0[0] + uVar14 + 0x30);
      local_228 = local_278;
      local_148 = local_2a8;
      cVar12 = FUN_144cc4040(&local_258,&local_1d8,&local_288,&local_2b8,&local_238,&local_158,
                             &local_1b8);
      if (cVar12 != '\0') {
        local_158 = local_198;
        lStack_150 = lStack_190;
        local_148 = local_188;
        lStack_140 = lStack_180;
        local_238 = CONCAT44(uStack_174,local_178);
        lStack_230 = CONCAT44(uStack_16c,uStack_170);
        local_228 = CONCAT44(uStack_164,local_168);
        lStack_220 = CONCAT44(uStack_15c,uStack_160);
        local_a8 = local_1b8;
        lStack_a0 = lStack_1b0;
        local_98 = local_1a8;
        lStack_90 = lStack_1a0;
        local_88 = local_198;
        lStack_80 = lStack_190;
        local_78 = local_188;
        lStack_70 = lStack_180;
      }
      FUN_144cb9950(&local_a8,&local_1b8);
      local_138 = local_1b8;
      lStack_130 = lStack_1b0;
      local_128 = local_1a8;
      lStack_120 = lStack_1a0;
      local_118 = local_198;
      lStack_110 = lStack_190;
      local_108 = local_188;
      lStack_100 = lStack_180;
      local_d8 = local_178;
      uStack_d4 = uStack_174;
      uStack_d0 = uStack_170;
      uStack_cc = uStack_16c;
      local_c8 = local_168;
      uStack_c4 = uStack_164;
      uStack_c0 = uStack_160;
      uStack_bc = uStack_15c;
      FUN_144cb95e0(&local_1b8,param_1 + 2,&local_f8);
      uVar8 = local_298;
      *plVar13 = local_138;
      plVar13[1] = lStack_130;
      plVar13[2] = (longlong)local_128;
      plVar13[3] = lStack_120;
      plVar13[4] = local_118;
      plVar13[5] = lStack_110;
      plVar13[6] = (longlong)local_108;
      plVar13[7] = lStack_100;
      plVar13[8] = local_f8;
      plVar13[9] = CONCAT44(uStack_ec,uStack_f0);
      plVar13[10] = CONCAT44(uStack_e4,local_e8);
      plVar13[0xb] = CONCAT44(uStack_dc,uStack_e0);
      *(undefined4 *)(plVar13 + 0xc) = local_d8;
      *(undefined4 *)((longlong)plVar13 + 100) = uStack_d4;
      *(undefined4 *)(plVar13 + 0xd) = uStack_d0;
      *(undefined4 *)((longlong)plVar13 + 0x6c) = uStack_cc;
      plVar13[0xe] = CONCAT44(uStack_c4,local_c8);
      plVar13[0xf] = CONCAT44(uStack_bc,uStack_c0);
      plVar13 = plVar13 + 0x10;
      lVar21 = lVar21 + -1;
      uVar14 = uVar19;
      uVar19 = uVar19 + 0x60;
    } while (lVar21 != 0);
    if ((char)local_res18 != '\0') {
      local_138 = plVar22[0x10];
      lStack_130 = plVar22[0x11];
      local_128 = (uint *)plVar22[0x12];
      lStack_120 = plVar22[0x13];
      local_118 = plVar22[0x14];
      lStack_110 = plVar22[0x15];
      local_108 = (uint *)plVar22[0x16];
      lStack_100 = plVar22[0x17];
      local_f8 = plVar22[0x1c];
      uStack_f0 = (undefined4)plVar22[0x1d];
      uStack_ec = *(undefined4 *)((longlong)plVar22 + 0xec);
      local_e8 = (undefined4)plVar22[0x1e];
      uStack_e4 = *(undefined4 *)((longlong)plVar22 + 0xf4);
      uStack_e0 = (undefined4)plVar22[0x1f];
      uStack_dc = *(undefined4 *)((longlong)plVar22 + 0xfc);
      plVar13 = (longlong *)FUN_145034ad0(&local_a8,&local_138,param_1[0xc]);
      local_228 = plVar22[2];
      lStack_220 = plVar22[3];
      local_2b8 = *plVar13;
      uStack_2b0 = plVar13[1];
      local_208 = plVar22[6];
      lStack_200 = plVar22[7];
      local_288 = (uint *)plVar13[2];
      lStack_280 = plVar13[3];
      local_1e8 = (undefined4)plVar22[0xe];
      uStack_1e4 = *(undefined4 *)((longlong)plVar22 + 0x74);
      uStack_1e0 = (undefined4)plVar22[0xf];
      uStack_1dc = *(undefined4 *)((longlong)plVar22 + 0x7c);
      local_1d8 = plVar13[4];
      lStack_1d0 = plVar13[5];
      local_258 = (uint *)plVar13[6];
      lStack_250 = plVar13[7];
      local_res18 = plVar13[8];
      local_238 = *plVar22;
      lStack_230 = plVar22[1];
      local_218 = plVar22[4];
      lStack_210 = plVar22[5];
      local_1f8 = plVar22[0xc];
      uStack_1f0 = (undefined4)plVar22[0xd];
      uStack_1ec = *(undefined4 *)((longlong)plVar22 + 0x6c);
      plVar13 = (longlong *)FUN_145034ad0(&local_1b8,&local_238,param_1[0xc]);
      local_138 = local_2b8;
      lStack_130 = uStack_2b0;
      local_118 = local_1d8;
      lStack_110 = lStack_1d0;
      local_f8 = local_res18;
      local_238 = *plVar13;
      lStack_230 = plVar13[1];
      local_128 = local_288;
      lStack_120 = lStack_280;
      local_108 = local_258;
      lStack_100 = lStack_250;
      local_228 = plVar13[2];
      lStack_220 = plVar13[3];
      local_218 = plVar13[4];
      lStack_210 = plVar13[5];
      local_208 = plVar13[6];
      lStack_200 = plVar13[7];
      local_1f8 = plVar13[8];
      cVar12 = FUN_145034e70(&local_238,&local_138);
      if (cVar12 == '\0') {
        FUN_144cb38a0(param_1[0xd],uVar18);
        FUN_144cb3b80(param_1[0xd],uVar8);
        local_260 = 4;
        FUN_144cb4160(param_1[0xd],&local_268);
        *(int *)(param_1[0xe] + 8) = *(int *)(param_1[0xe] + 8) + -4;
        return 1;
      }
    }
    uVar18 = 3;
    plVar13 = plVar22;
    do {
      uVar14 = (ulonglong)uVar18;
      FUN_144cd9060(plVar22 + uVar14 * 0x10,plVar13,local_2d0[0] + uVar14 * 0x18 + 6);
      FUN_144cb9890(local_2d0[0] + uVar14 * 0x18 + 6);
      uVar18 = (uint)uVar20;
      plVar13 = plVar13 + 0x10;
      uVar20 = (ulonglong)(uVar18 + 1);
    } while ((int)(uVar18 + 1) < 4);
    local_a8 = plVar22[0x30];
    lStack_a0 = plVar22[0x31];
    local_98 = (uint *)plVar22[0x32];
    lStack_90 = plVar22[0x33];
    local_88 = plVar22[0x34];
    lStack_80 = plVar22[0x35];
    local_78 = (uint *)plVar22[0x36];
    lStack_70 = plVar22[0x37];
    local_68 = plVar22[0x3c];
    lStack_60 = plVar22[0x3d];
    local_58 = plVar22[0x3e];
    lStack_50 = plVar22[0x3f];
    local_1b8 = *plVar22;
    lStack_1b0 = plVar22[1];
    local_1a8 = (uint *)plVar22[2];
    lStack_1a0 = plVar22[3];
    local_198 = plVar22[4];
    lStack_190 = plVar22[5];
    local_188 = (uint *)plVar22[6];
    lStack_180 = plVar22[7];
    local_178 = (undefined4)plVar22[0xc];
    uStack_174 = *(undefined4 *)((longlong)plVar22 + 100);
    uStack_170 = (undefined4)plVar22[0xd];
    uStack_16c = *(undefined4 *)((longlong)plVar22 + 0x6c);
    local_168 = (undefined4)plVar22[0xe];
    uStack_164 = *(undefined4 *)((longlong)plVar22 + 0x74);
    uStack_160 = (undefined4)plVar22[0xf];
    uStack_15c = *(undefined4 *)((longlong)plVar22 + 0x7c);
    cVar12 = FUN_144cc4380(&local_a8,&local_1b8);
    if (cVar12 == '\0') {
      iVar17 = 4;
    }
    else {
      iVar17 = 3;
      local_2d0[0][0x33] = uVar8;
      local_2d0[0][2] = uVar8 + 2;
    }
    local_a8 = plVar22[0x10];
    lStack_a0 = plVar22[0x11];
    local_98 = (uint *)plVar22[0x12];
    lStack_90 = plVar22[0x13];
    local_88 = plVar22[0x14];
    lStack_80 = plVar22[0x15];
    local_78 = (uint *)plVar22[0x16];
    lStack_70 = plVar22[0x17];
    local_68 = plVar22[0x1c];
    lStack_60 = plVar22[0x1d];
    local_58 = plVar22[0x1e];
    lStack_50 = plVar22[0x1f];
    local_1b8 = plVar22[0x20];
    lStack_1b0 = plVar22[0x21];
    local_1a8 = (uint *)plVar22[0x22];
    lStack_1a0 = plVar22[0x23];
    local_198 = plVar22[0x24];
    lStack_190 = plVar22[0x25];
    local_188 = (uint *)plVar22[0x26];
    lStack_180 = plVar22[0x27];
    local_178 = (undefined4)plVar22[0x2c];
    uStack_174 = *(undefined4 *)((longlong)plVar22 + 0x164);
    uStack_170 = (undefined4)plVar22[0x2d];
    uStack_16c = *(undefined4 *)((longlong)plVar22 + 0x16c);
    local_168 = (undefined4)plVar22[0x2e];
    uStack_164 = *(undefined4 *)((longlong)plVar22 + 0x174);
    uStack_160 = (undefined4)plVar22[0x2f];
    uStack_15c = *(undefined4 *)((longlong)plVar22 + 0x17c);
    cVar12 = FUN_144cc4380(&local_a8,&local_1b8);
    if (cVar12 != '\0') {
      local_2d0[0][3] = uVar8 + 2;
      lVar21 = (ulonglong)(iVar17 == 4) + 2;
      local_2d0[0][0x32] = uVar8;
      uVar11 = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 2);
      *(undefined8 *)(local_2d0[0] + 0x18) = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18);
      *(undefined8 *)(local_2d0[0] + 0x1a) = uVar11;
      uVar11 = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 4 + 2);
      *(undefined8 *)(local_2d0[0] + 0x1c) = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 4);
      *(undefined8 *)(local_2d0[0] + 0x1e) = uVar11;
      uVar11 = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 8 + 2);
      *(undefined8 *)(local_2d0[0] + 0x20) = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 8);
      *(undefined8 *)(local_2d0[0] + 0x22) = uVar11;
      uVar11 = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 0xc + 2);
      *(undefined8 *)(local_2d0[0] + 0x24) = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 0xc);
      *(undefined8 *)(local_2d0[0] + 0x26) = uVar11;
      puVar7 = local_2d0[0] + lVar21 * 0x18 + 0x10;
      uVar18 = puVar7[1];
      uVar1 = puVar7[2];
      uVar2 = puVar7[3];
      local_2d0[0][0x28] = *puVar7;
      local_2d0[0][0x29] = uVar18;
      local_2d0[0][0x2a] = uVar1;
      local_2d0[0][0x2b] = uVar2;
      uVar11 = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 0x14 + 2);
      *(undefined8 *)(local_2d0[0] + 0x2c) = *(undefined8 *)(local_2d0[0] + lVar21 * 0x18 + 0x14);
      *(undefined8 *)(local_2d0[0] + 0x2e) = uVar11;
      local_2d0[0][(longlong)(int)(local_2d0[0][0x1a] - uVar8) * 0x18 + 3] = uVar8 + 1;
      iVar17 = iVar17 + -1;
      local_2d0[0][(longlong)(int)(local_2d0[0][0x1b] - uVar8) * 0x18 + 2] = uVar8 + 1;
      local_b8[1] = local_b8[lVar21];
    }
    FUN_144cb3b80(param_1[0xd],iVar17 + uVar8);
    if (iVar17 < 4) {
      *(int *)(param_1[0xe] + 8) = *(int *)(param_1[0xe] + 8) + iVar17 + -4;
    }
  }
  return 1;
}



// FUNCTION 145033440 FUN_145033440 body=439 status=ok
// SIG undefined FUN_145033440(void)

bool FUN_145033440(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  longlong local_48;
  
  FUN_144cd87b0(param_1 + 0x28,param_2,&local_88);
  if (*(longlong *)(param_2 + 0x20) < 0) {
    bVar3 = uStack_60 < *(ulonglong *)(param_1 + 0x28);
    uStack_60 = uStack_60 - *(ulonglong *)(param_1 + 0x28);
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_58 < *(ulonglong *)(param_1 + 0x30);
    uVar2 = local_58 - *(ulonglong *)(param_1 + 0x30);
    local_58 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = uStack_50 < *(ulonglong *)(param_1 + 0x38);
    uVar2 = uStack_50 - *(ulonglong *)(param_1 + 0x38);
    uStack_50 = uVar2 - uVar1;
    local_48 = (local_48 - *(longlong *)(param_1 + 0x40)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  FUN_144cd87b0(param_2 + 0x28,param_1,&local_d8);
  if (*(longlong *)(param_1 + 0x20) < 0) {
    bVar3 = uStack_b0 < *(ulonglong *)(param_2 + 0x28);
    uStack_b0 = uStack_b0 - *(ulonglong *)(param_2 + 0x28);
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_a8 < *(ulonglong *)(param_2 + 0x30);
    uVar2 = local_a8 - *(ulonglong *)(param_2 + 0x30);
    local_a8 = uVar2 - uVar1;
    uStack_a0 = (uStack_a0 - *(longlong *)(param_2 + 0x38)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  return uStack_a0 == uStack_50 &&
         (local_a8 == local_58 &&
         ((local_b8 == local_68 &&
          ((local_c8 == local_78 && (lStack_d0 == lStack_80 && local_d8 == local_88)) &&
          lStack_c0 == lStack_70)) && uStack_b0 == uStack_60));
}



// FUNCTION 145033600 FUN_145033600 body=2625 status=ok
// SIG undefined FUN_145033600(void)

void FUN_145033600(longlong param_1,longlong *param_2,ulonglong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  ulonglong uStack_148;
  longlong local_140;
  ulonglong local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  longlong local_68;
  ulonglong local_58;
  
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  local_68 = param_2[4];
  local_f8 = -*param_2;
  uVar9 = -param_2[1];
  uStack_f0 = uVar9 - (*param_2 != 0);
  uVar9 = (ulonglong)(param_2[1] != 0 || uVar9 < (*param_2 != 0));
  uVar4 = -param_2[2];
  uVar3 = uVar4 - uVar9;
  uVar9 = (ulonglong)(param_2[2] != 0 || uVar4 < uVar9);
  uVar4 = -param_2[3];
  uVar6 = uVar4 - uVar9;
  uVar9 = -(ulonglong)(param_2[3] != 0 || uVar4 < uVar9) - local_68;
  local_e8 = uVar3;
  uStack_e0 = uVar6;
  local_d8 = uVar9;
  FUN_144ccf3e0(param_2 + 5,puVar1[1],&local_188);
  FUN_144ccf3e0(param_2 + 5,*puVar1,&local_88);
  local_b8 = CONCAT44(uStack_74,local_78);
  uStack_b0 = CONCAT44(iStack_6c,uStack_70);
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  local_98 = local_178;
  uStack_90 = uStack_170;
  local_a8 = local_188;
  uStack_a0 = uStack_180;
  if (((1 < ((longlong)uStack_80 >> 0x28) + 1U ||
       (local_b8 != (longlong)iStack_6c >> 0x1f || uStack_b0 != (longlong)iStack_6c >> 0x1f)) ||
       (1 < ((longlong)uStack_180 >> 0x28) + 1U ||
       (local_178 != (longlong)uStack_170 >> 0x3f || uStack_170 != (longlong)uStack_170 >> 0x3f)))
     || (uVar5 = uStack_180, uVar4 = local_188,
        1 < ((longlong)uVar3 >> 2) + 1U ||
        (uVar9 != (longlong)uVar9 >> 0x3f || uVar6 != (longlong)uVar9 >> 0x3f))) {
    FUN_145034bd0(&local_c8,&local_a8,&local_f8);
    uVar9 = uStack_90;
    uVar5 = uStack_a0;
    uVar4 = local_a8;
    uVar8 = (longlong)uStack_b0 >> 0x3f;
    local_d0 = local_e8;
    uVar7 = (longlong)uStack_90 >> 0x3f;
    uVar6 = (longlong)local_d8 >> 0x3f;
    if (((1 < ((longlong)uStack_c0 >> 0x28) + 1U || (uStack_b0 != uVar8 || local_b8 != uVar8)) ||
         (1 < ((longlong)uStack_a0 >> 0x28) + 1U || (uStack_90 != uVar7 || local_98 != uVar7))) ||
       (uVar3 = local_e8,
       1 < ((longlong)local_e8 >> 2) + 1U || (local_d8 != uVar6 || uStack_e0 != uVar6))) {
      bVar13 = local_c8 != 0;
      bVar14 = uStack_c0 != 0;
      if ((local_b8 != 0 || (bVar13 || bVar14)) || uStack_b0 != 0) {
        if (uStack_90 == 0 && (local_98 == 0 && (local_a8 == 0 && uStack_a0 == 0))) {
          local_138 = (uVar8 ^ local_c8) - uVar8;
          uVar9 = (ulonglong)((uVar8 ^ local_c8) < uVar8);
          uVar3 = (uVar8 ^ uStack_c0) - uVar8;
          uStack_130 = uVar3 - uVar9;
          uVar9 = (ulonglong)((uVar8 ^ uStack_c0) < uVar8 || uVar3 < uVar9);
          uVar3 = (local_b8 ^ uVar8) - uVar8;
          local_128 = uVar3 - uVar9;
          uStack_120 = ((uStack_b0 ^ uVar8) - uVar8) -
                       (ulonglong)((local_b8 ^ uVar8) < uVar8 || uVar3 < uVar9);
          bVar15 = (longlong)local_d8 < 0;
          local_160 = (local_f8 ^ uVar6) - uVar6;
          uVar9 = (ulonglong)((local_f8 ^ uVar6) < uVar6);
          uVar3 = (uStack_f0 ^ uVar6) - uVar6;
          uStack_158 = uVar3 - uVar9;
          uVar9 = (ulonglong)((uStack_f0 ^ uVar6) < uVar6 || uVar3 < uVar9);
          uVar3 = (uVar6 ^ local_e8) - uVar6;
          local_150 = uVar3 - uVar9;
          uVar9 = (ulonglong)((uVar6 ^ local_e8) < uVar6 || uVar3 < uVar9);
          uVar3 = (uStack_e0 ^ uVar6) - uVar6;
          uStack_148 = uVar3 - uVar9;
          local_140 = ((local_d8 ^ uVar6) - uVar6) -
                      (ulonglong)((uStack_e0 ^ uVar6) < uVar6 || uVar3 < uVar9);
          FUN_145036130(&local_160,&local_138,&local_188,&local_118);
          if (bVar15) {
            bVar15 = local_188 != 0;
            local_188 = -local_188;
            bVar12 = uStack_180 != 0;
            uVar9 = -uStack_180;
            uStack_180 = uVar9 - bVar15;
            uVar9 = (ulonglong)(bVar12 || uVar9 < bVar15);
            bVar15 = local_178 != 0;
            uVar3 = -local_178;
            local_178 = uVar3 - uVar9;
            uStack_170 = -(ulonglong)(bVar15 || uVar3 < uVar9) - uStack_170;
            local_138 = -local_118;
            uStack_130 = -uStack_110 - (ulonglong)(local_118 != 0);
            uVar9 = (ulonglong)(uStack_110 != 0 || -uStack_110 < (ulonglong)(local_118 != 0));
            local_128 = -local_108 - uVar9;
            uStack_120 = -(ulonglong)(local_108 != 0 || -local_108 < uVar9) - uStack_100;
            local_160 = local_188;
            uStack_158 = uStack_180;
            local_150 = local_178;
            uStack_148 = uStack_170;
            local_118 = local_138;
            uStack_110 = uStack_130;
            local_108 = local_128;
            uStack_100 = uStack_120;
          }
          if (((uint)((longlong)uStack_100 >> 0x3f) |
              (uint)((local_108 != 0 || (uStack_110 != 0 || local_118 != 0)) || uStack_100 != 0)) ==
              1) {
            bVar12 = 0xfffffffffffffffe < local_188;
            local_188 = local_188 + 1;
            bVar15 = CARRY8(uStack_180,(ulonglong)bVar12);
            uStack_180 = uStack_180 + bVar12;
            uVar9 = (ulonglong)bVar15;
            bVar15 = CARRY8(local_178,uVar9);
            local_178 = local_178 + uVar9;
            uStack_170 = uStack_170 + bVar15;
          }
          local_c8 = (ulonglong)((local_b8 != 0 || (bVar13 || bVar14)) || uStack_b0 != 0) |
                     (longlong)(int)((longlong)uStack_b0 >> 0x3f);
          uStack_c0 = (longlong)local_c8 >> 0x3f;
          local_f8 = local_188;
          uStack_f0 = uStack_180;
          local_e8 = local_178;
          uStack_e0 = uStack_170;
        }
        else {
          uVar4 = uVar7 ^ local_a8;
          local_138 = uVar4 - uVar7;
          local_d0 = uVar7 ^ uStack_a0;
          uStack_130 = (local_d0 - uVar7) - (ulonglong)(uVar4 < uVar7);
          local_58 = local_98 ^ uVar7;
          uVar9 = (ulonglong)(local_d0 < uVar7 || local_d0 - uVar7 < (ulonglong)(uVar4 < uVar7));
          local_128 = (local_58 - uVar7) - uVar9;
          local_118 = uStack_90 ^ uVar7;
          uStack_120 = (local_118 - uVar7) -
                       (ulonglong)(local_58 < uVar7 || local_58 - uVar7 < uVar9);
          uVar10 = uVar8 ^ local_c8;
          local_160 = uVar10 - uVar8;
          uVar6 = uVar8 ^ uStack_c0;
          uStack_158 = (uVar6 - uVar8) - (ulonglong)(uVar10 < uVar8);
          uVar3 = local_b8 ^ uVar8;
          uVar9 = (ulonglong)(uVar6 < uVar8 || uVar6 - uVar8 < (ulonglong)(uVar10 < uVar8));
          local_150 = (uVar3 - uVar8) - uVar9;
          uVar5 = uStack_b0 ^ uVar8;
          uStack_148 = (uVar5 - uVar8) - (ulonglong)(uVar3 < uVar8 || uVar3 - uVar8 < uVar9);
          FUN_1450356b0(&local_188,&local_160,&local_138,(ulonglong)param_3 & 0xff);
          local_68 = 0;
          local_160 = uVar10 - uVar8;
          uStack_158 = (uVar6 - uVar8) - (ulonglong)(uVar10 < uVar8);
          local_88 = local_188;
          uStack_80 = uStack_180;
          uVar9 = (ulonglong)(uVar6 < uVar8 || uVar6 - uVar8 < (ulonglong)(uVar10 < uVar8));
          local_150 = (uVar3 - uVar8) - uVar9;
          local_78 = (undefined4)local_178;
          uStack_74 = local_178._4_4_;
          uStack_70 = (undefined4)uStack_170;
          iStack_6c = uStack_170._4_4_;
          uStack_148 = (uVar5 - uVar8) - (ulonglong)(uVar3 < uVar8 || uVar3 - uVar8 < uVar9);
          FUN_145035890(&local_160,&local_88,&local_138,&local_188);
          if ((longlong)uStack_b0 < 0) {
            local_160 = -local_138;
            uStack_158 = -(ulonglong)(local_138 != 0) - uStack_130;
            puVar2 = &local_160;
          }
          else {
            puVar2 = &local_188;
            local_188 = local_138;
            uStack_180 = uStack_130;
            local_178 = local_128;
            uStack_170 = uStack_120;
          }
          local_c8 = *puVar2;
          uStack_c0 = puVar2[1];
          bVar13 = (longlong)uStack_90 < 0;
          local_160 = uVar4 - uVar7;
          uStack_158 = (local_d0 - uVar7) - (ulonglong)(uVar4 < uVar7);
          uVar9 = (ulonglong)(local_d0 < uVar7 || local_d0 - uVar7 < (ulonglong)(uVar4 < uVar7));
          local_150 = (local_58 - uVar7) - uVar9;
          uStack_148 = (local_118 - uVar7) -
                       (ulonglong)(local_58 < uVar7 || local_58 - uVar7 < uVar9);
          FUN_145035890(&local_160,&local_88,&local_138,&local_188);
          if (bVar13) {
            local_160 = -local_138;
            uStack_158 = -uStack_130 - (ulonglong)(local_138 != 0);
            uVar9 = (ulonglong)(uStack_130 != 0 || -uStack_130 < (ulonglong)(local_138 != 0));
            local_150 = -local_128 - uVar9;
            uStack_148 = -(ulonglong)(local_128 != 0 || -local_128 < uVar9) - uStack_120;
            puVar2 = &local_160;
          }
          else {
            puVar2 = &local_188;
            local_188 = local_138;
            uStack_180 = uStack_130;
            local_178 = local_128;
            uStack_170 = uStack_120;
          }
          local_a8 = *puVar2;
          uStack_a0 = puVar2[1];
          FUN_145035fb0(&local_f8,&local_88,&local_188,&local_160);
          uVar11 = 0;
          if (local_140 == 0) {
            uVar11 = (uint)((local_150 == 0 && (uStack_158 == 0 && local_160 == 0)) &&
                           uStack_148 == 0);
          }
          if ((1 - uVar11 | (uint)(local_140 >> 0x3f)) == 1) {
            bVar14 = 0xfffffffffffffffe < local_188;
            local_188 = local_188 + 1;
            bVar13 = CARRY8(uStack_180,(ulonglong)bVar14);
            uStack_180 = uStack_180 + bVar14;
            uVar9 = (ulonglong)bVar13;
            bVar13 = CARRY8(local_178,uVar9);
            local_178 = local_178 + uVar9;
            uStack_170 = uStack_170 + bVar13;
          }
          local_f8 = local_188;
          uStack_f0 = uStack_180;
          local_e8 = local_178;
          uStack_e0 = uStack_170;
          uVar5 = uStack_a0;
          uVar4 = local_a8;
        }
      }
      else {
        local_138 = (uVar7 ^ local_a8) - uVar7;
        uVar4 = (ulonglong)((uVar7 ^ local_a8) < uVar7);
        uVar3 = (uVar7 ^ uStack_a0) - uVar7;
        uStack_130 = uVar3 - uVar4;
        uVar4 = (ulonglong)((uVar7 ^ uStack_a0) < uVar7 || uVar3 < uVar4);
        uVar3 = (local_98 ^ uVar7) - uVar7;
        local_128 = uVar3 - uVar4;
        uStack_120 = ((uStack_90 ^ uVar7) - uVar7) -
                     (ulonglong)((local_98 ^ uVar7) < uVar7 || uVar3 < uVar4);
        bVar13 = (longlong)local_d8 < 0;
        local_160 = (local_f8 ^ uVar6) - uVar6;
        uVar4 = (ulonglong)((local_f8 ^ uVar6) < uVar6);
        uVar3 = (uStack_f0 ^ uVar6) - uVar6;
        uStack_158 = uVar3 - uVar4;
        uVar4 = (ulonglong)((uStack_f0 ^ uVar6) < uVar6 || uVar3 < uVar4);
        uVar3 = (uVar6 ^ local_e8) - uVar6;
        local_150 = uVar3 - uVar4;
        uVar4 = (ulonglong)((uVar6 ^ local_e8) < uVar6 || uVar3 < uVar4);
        uVar3 = (uStack_e0 ^ uVar6) - uVar6;
        uStack_148 = uVar3 - uVar4;
        local_140 = ((local_d8 ^ uVar6) - uVar6) -
                    (ulonglong)((uStack_e0 ^ uVar6) < uVar6 || uVar3 < uVar4);
        FUN_145036130(&local_160,&local_138,&local_188,&local_118);
        if (bVar13) {
          bVar13 = local_188 != 0;
          local_188 = -local_188;
          bVar14 = uStack_180 != 0;
          uVar4 = -uStack_180;
          uStack_180 = uVar4 - bVar13;
          uVar4 = (ulonglong)(bVar14 || uVar4 < bVar13);
          bVar13 = local_178 != 0;
          uVar3 = -local_178;
          local_178 = uVar3 - uVar4;
          uStack_170 = -(ulonglong)(bVar13 || uVar3 < uVar4) - uStack_170;
          local_138 = -local_118;
          uStack_130 = -uStack_110 - (ulonglong)(local_118 != 0);
          uVar4 = (ulonglong)(uStack_110 != 0 || -uStack_110 < (ulonglong)(local_118 != 0));
          local_128 = -local_108 - uVar4;
          uStack_120 = -(ulonglong)(local_108 != 0 || -local_108 < uVar4) - uStack_100;
          local_160 = local_188;
          uStack_158 = uStack_180;
          local_150 = local_178;
          uStack_148 = uStack_170;
          local_118 = local_138;
          uStack_110 = uStack_130;
          local_108 = local_128;
          uStack_100 = uStack_120;
        }
        if (((uint)((local_108 != 0 || (uStack_110 != 0 || local_118 != 0)) || uStack_100 != 0) |
            (uint)((longlong)uStack_100 >> 0x3f)) == 1) {
          bVar14 = 0xfffffffffffffffe < local_188;
          local_188 = local_188 + 1;
          bVar13 = CARRY8(uStack_180,(ulonglong)bVar14);
          uStack_180 = uStack_180 + bVar14;
          uVar4 = (ulonglong)bVar13;
          bVar13 = CARRY8(local_178,uVar4);
          local_178 = local_178 + uVar4;
          uStack_170 = uStack_170 + bVar13;
        }
        uVar4 = (longlong)(int)((longlong)uVar9 >> 0x3f) | 1;
        uVar5 = (longlong)uVar4 >> 0x3f;
        local_f8 = local_188;
        uStack_f0 = uStack_180;
        local_e8 = local_178;
        uStack_e0 = uStack_170;
      }
      *param_4 = 1;
      uVar3 = local_e8;
      local_188 = local_f8;
      uStack_180 = uStack_f0;
      local_178 = local_e8;
      uStack_170 = uStack_e0;
    }
  }
  local_118 = local_f8;
  *param_3 = local_c8;
  param_3[1] = uStack_c0;
  uStack_110 = uStack_f0;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  param_3[4] = local_f8;
  param_3[5] = uStack_f0;
  param_3[6] = uVar3;
  local_108 = uVar3;
  FUN_144cb9890();
  return;
}



// FUNCTION 145034060 FUN_145034060 body=2630 status=ok
// SIG undefined FUN_145034060(void)

void FUN_145034060(longlong param_1,longlong *param_2,ulonglong *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  ulonglong local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong local_160;
  ulonglong uStack_158;
  ulonglong local_150;
  ulonglong uStack_148;
  longlong local_140;
  ulonglong local_138;
  ulonglong uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  ulonglong local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  longlong local_68;
  ulonglong local_58;
  
  puVar1 = *(undefined4 **)(param_1 + 0x60);
  local_68 = param_2[4];
  local_f8 = -*param_2;
  uVar9 = -param_2[1];
  uStack_f0 = uVar9 - (*param_2 != 0);
  uVar9 = (ulonglong)(param_2[1] != 0 || uVar9 < (*param_2 != 0));
  uVar4 = -param_2[2];
  uVar3 = uVar4 - uVar9;
  uVar9 = (ulonglong)(param_2[2] != 0 || uVar4 < uVar9);
  uVar4 = -param_2[3];
  uVar6 = uVar4 - uVar9;
  uVar9 = -(ulonglong)(param_2[3] != 0 || uVar4 < uVar9) - local_68;
  local_e8 = uVar3;
  uStack_e0 = uVar6;
  local_d8 = uVar9;
  FUN_144ccf3e0(param_2 + 5,puVar1[1],&local_188);
  FUN_144ccf3e0(param_2 + 5,*puVar1,&local_88);
  local_b8 = CONCAT44(uStack_74,local_78);
  uStack_b0 = CONCAT44(iStack_6c,uStack_70);
  local_c8 = local_88;
  uStack_c0 = uStack_80;
  local_98 = local_178;
  uStack_90 = uStack_170;
  local_a8 = local_188;
  uStack_a0 = uStack_180;
  if (((1 < ((longlong)uStack_80 >> 0x28) + 1U ||
       (local_b8 != (longlong)iStack_6c >> 0x1f || uStack_b0 != (longlong)iStack_6c >> 0x1f)) ||
       (1 < ((longlong)uStack_180 >> 0x28) + 1U ||
       (local_178 != (longlong)uStack_170 >> 0x3f || uStack_170 != (longlong)uStack_170 >> 0x3f)))
     || (uVar5 = uStack_180, uVar4 = local_188,
        1 < ((longlong)uVar3 >> 2) + 1U ||
        (uVar9 != (longlong)uVar9 >> 0x3f || uVar6 != (longlong)uVar9 >> 0x3f))) {
    FUN_145034bd0(&local_c8,&local_a8,&local_f8);
    uVar9 = uStack_90;
    uVar5 = uStack_a0;
    uVar4 = local_a8;
    uVar8 = (longlong)uStack_b0 >> 0x3f;
    local_d0 = local_e8;
    uVar7 = (longlong)uStack_90 >> 0x3f;
    uVar6 = (longlong)local_d8 >> 0x3f;
    if (((1 < ((longlong)uStack_c0 >> 0x28) + 1U || (uStack_b0 != uVar8 || local_b8 != uVar8)) ||
         (1 < ((longlong)uStack_a0 >> 0x28) + 1U || (uStack_90 != uVar7 || local_98 != uVar7))) ||
       (uVar3 = local_e8,
       1 < ((longlong)local_e8 >> 2) + 1U || (local_d8 != uVar6 || uStack_e0 != uVar6))) {
      bVar13 = local_c8 != 0;
      bVar14 = uStack_c0 != 0;
      if ((local_b8 != 0 || (bVar13 || bVar14)) || uStack_b0 != 0) {
        if (uStack_90 == 0 && (local_98 == 0 && (local_a8 == 0 && uStack_a0 == 0))) {
          local_138 = (uVar8 ^ local_c8) - uVar8;
          uVar9 = (ulonglong)((uVar8 ^ local_c8) < uVar8);
          uVar3 = (uVar8 ^ uStack_c0) - uVar8;
          uStack_130 = uVar3 - uVar9;
          uVar9 = (ulonglong)((uVar8 ^ uStack_c0) < uVar8 || uVar3 < uVar9);
          uVar3 = (local_b8 ^ uVar8) - uVar8;
          local_128 = uVar3 - uVar9;
          uStack_120 = ((uStack_b0 ^ uVar8) - uVar8) -
                       (ulonglong)((local_b8 ^ uVar8) < uVar8 || uVar3 < uVar9);
          bVar15 = (longlong)local_d8 < 0;
          local_160 = (local_f8 ^ uVar6) - uVar6;
          uVar9 = (ulonglong)((local_f8 ^ uVar6) < uVar6);
          uVar3 = (uStack_f0 ^ uVar6) - uVar6;
          uStack_158 = uVar3 - uVar9;
          uVar9 = (ulonglong)((uStack_f0 ^ uVar6) < uVar6 || uVar3 < uVar9);
          uVar3 = (uVar6 ^ local_e8) - uVar6;
          local_150 = uVar3 - uVar9;
          uVar9 = (ulonglong)((uVar6 ^ local_e8) < uVar6 || uVar3 < uVar9);
          uVar3 = (uStack_e0 ^ uVar6) - uVar6;
          uStack_148 = uVar3 - uVar9;
          local_140 = ((local_d8 ^ uVar6) - uVar6) -
                      (ulonglong)((uStack_e0 ^ uVar6) < uVar6 || uVar3 < uVar9);
          FUN_145036130(&local_160,&local_138,&local_188,&local_118);
          if (bVar15) {
            bVar15 = local_188 != 0;
            local_188 = -local_188;
            bVar12 = uStack_180 != 0;
            uVar9 = -uStack_180;
            uStack_180 = uVar9 - bVar15;
            uVar9 = (ulonglong)(bVar12 || uVar9 < bVar15);
            bVar15 = local_178 != 0;
            uVar3 = -local_178;
            local_178 = uVar3 - uVar9;
            uStack_170 = -(ulonglong)(bVar15 || uVar3 < uVar9) - uStack_170;
            local_138 = -local_118;
            uStack_130 = -uStack_110 - (ulonglong)(local_118 != 0);
            uVar9 = (ulonglong)(uStack_110 != 0 || -uStack_110 < (ulonglong)(local_118 != 0));
            local_128 = -local_108 - uVar9;
            uStack_120 = -(ulonglong)(local_108 != 0 || -local_108 < uVar9) - uStack_100;
            local_160 = local_188;
            uStack_158 = uStack_180;
            local_150 = local_178;
            uStack_148 = uStack_170;
            local_118 = local_138;
            uStack_110 = uStack_130;
            local_108 = local_128;
            uStack_100 = uStack_120;
          }
          if (((uint)((longlong)uStack_100 >> 0x3f) |
              (uint)((local_108 != 0 || (uStack_110 != 0 || local_118 != 0)) || uStack_100 != 0)) ==
              0xffffffff) {
            bVar15 = local_188 != 0;
            local_188 = local_188 - 1;
            bVar12 = uStack_180 != 0;
            uVar9 = uStack_180 - 1;
            uStack_180 = uVar9 + bVar15;
            uVar9 = (ulonglong)(bVar12 || CARRY8(uVar9,(ulonglong)bVar15));
            bVar15 = local_178 != 0;
            uVar3 = local_178 - 1;
            local_178 = uVar3 + uVar9;
            uStack_170 = (uStack_170 - 1) + (ulonglong)(bVar15 || CARRY8(uVar3,uVar9));
          }
          local_c8 = (ulonglong)((local_b8 != 0 || (bVar13 || bVar14)) || uStack_b0 != 0) |
                     (longlong)(int)((longlong)uStack_b0 >> 0x3f);
          uStack_c0 = (longlong)local_c8 >> 0x3f;
          local_f8 = local_188;
          uStack_f0 = uStack_180;
          local_e8 = local_178;
          uStack_e0 = uStack_170;
        }
        else {
          uVar4 = uVar7 ^ local_a8;
          local_138 = uVar4 - uVar7;
          local_d0 = uVar7 ^ uStack_a0;
          uStack_130 = (local_d0 - uVar7) - (ulonglong)(uVar4 < uVar7);
          local_58 = local_98 ^ uVar7;
          uVar9 = (ulonglong)(local_d0 < uVar7 || local_d0 - uVar7 < (ulonglong)(uVar4 < uVar7));
          local_128 = (local_58 - uVar7) - uVar9;
          local_118 = uStack_90 ^ uVar7;
          uStack_120 = (local_118 - uVar7) -
                       (ulonglong)(local_58 < uVar7 || local_58 - uVar7 < uVar9);
          uVar10 = uVar8 ^ local_c8;
          local_160 = uVar10 - uVar8;
          uVar6 = uVar8 ^ uStack_c0;
          uStack_158 = (uVar6 - uVar8) - (ulonglong)(uVar10 < uVar8);
          uVar3 = local_b8 ^ uVar8;
          uVar9 = (ulonglong)(uVar6 < uVar8 || uVar6 - uVar8 < (ulonglong)(uVar10 < uVar8));
          local_150 = (uVar3 - uVar8) - uVar9;
          uVar5 = uStack_b0 ^ uVar8;
          uStack_148 = (uVar5 - uVar8) - (ulonglong)(uVar3 < uVar8 || uVar3 - uVar8 < uVar9);
          FUN_1450356b0(&local_188,&local_160,&local_138,(ulonglong)param_3 & 0xff);
          local_68 = 0;
          local_160 = uVar10 - uVar8;
          uStack_158 = (uVar6 - uVar8) - (ulonglong)(uVar10 < uVar8);
          local_88 = local_188;
          uStack_80 = uStack_180;
          uVar9 = (ulonglong)(uVar6 < uVar8 || uVar6 - uVar8 < (ulonglong)(uVar10 < uVar8));
          local_150 = (uVar3 - uVar8) - uVar9;
          local_78 = (undefined4)local_178;
          uStack_74 = local_178._4_4_;
          uStack_70 = (undefined4)uStack_170;
          iStack_6c = uStack_170._4_4_;
          uStack_148 = (uVar5 - uVar8) - (ulonglong)(uVar3 < uVar8 || uVar3 - uVar8 < uVar9);
          FUN_145035890(&local_160,&local_88,&local_138,&local_188);
          if ((longlong)uStack_b0 < 0) {
            local_160 = -local_138;
            uStack_158 = -(ulonglong)(local_138 != 0) - uStack_130;
            puVar2 = &local_160;
          }
          else {
            puVar2 = &local_188;
            local_188 = local_138;
            uStack_180 = uStack_130;
            local_178 = local_128;
            uStack_170 = uStack_120;
          }
          local_c8 = *puVar2;
          uStack_c0 = puVar2[1];
          bVar13 = (longlong)uStack_90 < 0;
          local_160 = uVar4 - uVar7;
          uStack_158 = (local_d0 - uVar7) - (ulonglong)(uVar4 < uVar7);
          uVar9 = (ulonglong)(local_d0 < uVar7 || local_d0 - uVar7 < (ulonglong)(uVar4 < uVar7));
          local_150 = (local_58 - uVar7) - uVar9;
          uStack_148 = (local_118 - uVar7) -
                       (ulonglong)(local_58 < uVar7 || local_58 - uVar7 < uVar9);
          FUN_145035890(&local_160,&local_88,&local_138,&local_188);
          if (bVar13) {
            local_160 = -local_138;
            uStack_158 = -uStack_130 - (ulonglong)(local_138 != 0);
            uVar9 = (ulonglong)(uStack_130 != 0 || -uStack_130 < (ulonglong)(local_138 != 0));
            local_150 = -local_128 - uVar9;
            uStack_148 = -(ulonglong)(local_128 != 0 || -local_128 < uVar9) - uStack_120;
            puVar2 = &local_160;
          }
          else {
            puVar2 = &local_188;
            local_188 = local_138;
            uStack_180 = uStack_130;
            local_178 = local_128;
            uStack_170 = uStack_120;
          }
          local_a8 = *puVar2;
          uStack_a0 = puVar2[1];
          FUN_145035fb0(&local_f8,&local_88,&local_188,&local_160);
          uVar11 = 0;
          if (local_140 == 0) {
            uVar11 = (uint)((local_150 == 0 && (uStack_158 == 0 && local_160 == 0)) &&
                           uStack_148 == 0);
          }
          if ((1 - uVar11 | (uint)(local_140 >> 0x3f)) == 0xffffffff) {
            bVar13 = local_188 != 0;
            local_188 = local_188 - 1;
            bVar14 = uStack_180 != 0;
            uVar9 = uStack_180 - 1;
            uStack_180 = uVar9 + bVar13;
            uVar9 = (ulonglong)(bVar14 || CARRY8(uVar9,(ulonglong)bVar13));
            bVar13 = local_178 != 0;
            uVar4 = local_178 - 1;
            local_178 = uVar4 + uVar9;
            uStack_170 = (uStack_170 - 1) + (ulonglong)(bVar13 || CARRY8(uVar4,uVar9));
          }
          local_f8 = local_188;
          uStack_f0 = uStack_180;
          local_e8 = local_178;
          uStack_e0 = uStack_170;
          uVar5 = uStack_a0;
          uVar4 = local_a8;
        }
      }
      else {
        local_138 = (uVar7 ^ local_a8) - uVar7;
        uVar4 = (ulonglong)((uVar7 ^ local_a8) < uVar7);
        uVar3 = (uVar7 ^ uStack_a0) - uVar7;
        uStack_130 = uVar3 - uVar4;
        uVar4 = (ulonglong)((uVar7 ^ uStack_a0) < uVar7 || uVar3 < uVar4);
        uVar3 = (local_98 ^ uVar7) - uVar7;
        local_128 = uVar3 - uVar4;
        uStack_120 = ((uStack_90 ^ uVar7) - uVar7) -
                     (ulonglong)((local_98 ^ uVar7) < uVar7 || uVar3 < uVar4);
        bVar13 = (longlong)local_d8 < 0;
        local_160 = (local_f8 ^ uVar6) - uVar6;
        uVar4 = (ulonglong)((local_f8 ^ uVar6) < uVar6);
        uVar3 = (uStack_f0 ^ uVar6) - uVar6;
        uStack_158 = uVar3 - uVar4;
        uVar4 = (ulonglong)((uStack_f0 ^ uVar6) < uVar6 || uVar3 < uVar4);
        uVar3 = (uVar6 ^ local_e8) - uVar6;
        local_150 = uVar3 - uVar4;
        uVar4 = (ulonglong)((uVar6 ^ local_e8) < uVar6 || uVar3 < uVar4);
        uVar3 = (uStack_e0 ^ uVar6) - uVar6;
        uStack_148 = uVar3 - uVar4;
        local_140 = ((local_d8 ^ uVar6) - uVar6) -
                    (ulonglong)((uStack_e0 ^ uVar6) < uVar6 || uVar3 < uVar4);
        FUN_145036130(&local_160,&local_138,&local_188,&local_118);
        if (bVar13) {
          bVar13 = local_188 != 0;
          local_188 = -local_188;
          bVar14 = uStack_180 != 0;
          uVar4 = -uStack_180;
          uStack_180 = uVar4 - bVar13;
          uVar4 = (ulonglong)(bVar14 || uVar4 < bVar13);
          bVar13 = local_178 != 0;
          uVar3 = -local_178;
          local_178 = uVar3 - uVar4;
          uStack_170 = -(ulonglong)(bVar13 || uVar3 < uVar4) - uStack_170;
          local_138 = -local_118;
          uStack_130 = -uStack_110 - (ulonglong)(local_118 != 0);
          uVar4 = (ulonglong)(uStack_110 != 0 || -uStack_110 < (ulonglong)(local_118 != 0));
          local_128 = -local_108 - uVar4;
          uStack_120 = -(ulonglong)(local_108 != 0 || -local_108 < uVar4) - uStack_100;
          local_160 = local_188;
          uStack_158 = uStack_180;
          local_150 = local_178;
          uStack_148 = uStack_170;
          local_118 = local_138;
          uStack_110 = uStack_130;
          local_108 = local_128;
          uStack_100 = uStack_120;
        }
        if (((uint)((local_108 != 0 || (uStack_110 != 0 || local_118 != 0)) || uStack_100 != 0) |
            (uint)((longlong)uStack_100 >> 0x3f)) == 0xffffffff) {
          bVar13 = local_188 != 0;
          local_188 = local_188 - 1;
          bVar14 = uStack_180 != 0;
          uVar4 = uStack_180 - 1;
          uStack_180 = uVar4 + bVar13;
          uVar4 = (ulonglong)(bVar14 || CARRY8(uVar4,(ulonglong)bVar13));
          bVar13 = local_178 != 0;
          uVar3 = local_178 - 1;
          local_178 = uVar3 + uVar4;
          uStack_170 = (uStack_170 - 1) + (ulonglong)(bVar13 || CARRY8(uVar3,uVar4));
        }
        uVar4 = (longlong)(int)((longlong)uVar9 >> 0x3f) | 1;
        uVar5 = (longlong)uVar4 >> 0x3f;
        local_f8 = local_188;
        uStack_f0 = uStack_180;
        local_e8 = local_178;
        uStack_e0 = uStack_170;
      }
      *param_4 = 1;
      uVar3 = local_e8;
      local_188 = local_f8;
      uStack_180 = uStack_f0;
      local_178 = local_e8;
      uStack_170 = uStack_e0;
    }
  }
  local_118 = local_f8;
  *param_3 = local_c8;
  param_3[1] = uStack_c0;
  uStack_110 = uStack_f0;
  param_3[2] = uVar4;
  param_3[3] = uVar5;
  param_3[4] = local_f8;
  param_3[5] = uStack_f0;
  param_3[6] = uVar3;
  local_108 = uVar3;
  FUN_144cb9890();
  return;
}



// FUNCTION 145034ad0 FUN_145034ad0 body=247 status=ok
// SIG undefined FUN_145034ad0(void)

longlong * FUN_145034ad0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_38;
  longlong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *(longlong *)(param_2 + 0x40);
  lStack_20 = *(longlong *)(param_2 + 0x48);
  local_18 = *(undefined4 *)(param_2 + 0x50);
  uStack_14 = *(undefined4 *)(param_2 + 0x54);
  uStack_10 = *(undefined4 *)(param_2 + 0x58);
  uStack_c = *(undefined4 *)(param_2 + 0x5c);
  FUN_147e5f6f6(param_2 + 0x20,param_3[1],&local_58,1);
  FUN_147e5f6f6(param_2,*param_3,&local_80,1);
  uVar1 = (ulonglong)
          (CARRY8(local_78,local_50) ||
          CARRY8(local_78 + local_50,(ulonglong)CARRY8(local_80,local_58)));
  uVar2 = (ulonglong)(CARRY8(local_70,local_48) || CARRY8(local_70 + local_48,uVar1));
  *param_1 = local_80 + local_58;
  param_1[1] = local_78 + local_50 + (ulonglong)CARRY8(local_80,local_58);
  param_1[2] = local_70 + local_48 + uVar1;
  param_1[3] = local_68 + local_40 + uVar2;
  param_1[4] = local_60 + local_38 +
               (ulonglong)(CARRY8(local_68,local_40) || CARRY8(local_68 + local_40,uVar2));
  param_1[5] = local_28;
  param_1[6] = lStack_20;
  param_1[7] = CONCAT44(uStack_14,local_18);
  param_1[8] = CONCAT44(uStack_c,uStack_10);
  return param_1;
}



// FUNCTION 145034bd0 FUN_145034bd0 body=648 status=ok
// SIG undefined FUN_145034bd0(void)

void FUN_145034bd0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res20;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [32];
  undefined1 local_50 [40];
  
  uVar1 = param_1[3];
  if (uVar1 == 0 && (param_1[2] == 0 && (param_1[1] == 0 && *param_1 == 0))) {
    FUN_145034fd0(param_2,param_3);
    return;
  }
  uVar4 = param_2[3];
  if (uVar4 == 0 && (param_2[2] == 0 && (param_2[1] == 0 && *param_2 == 0))) {
    FUN_145034fd0(param_1,param_3);
  }
  else if (param_3[4] == 0 &&
           ((param_3[2] == 0 && (param_3[1] == 0 && *param_3 == 0)) && param_3[3] == 0)) {
    FUN_145035240(param_1,param_2);
  }
  else {
    uVar2 = (longlong)uVar4 >> 0x3f;
    uVar7 = *param_2 ^ uVar2;
    local_90 = uVar7 - uVar2;
    uVar5 = param_2[1] ^ uVar2;
    uVar7 = (ulonglong)(uVar7 < uVar2);
    uVar3 = uVar5 - uVar2;
    local_88 = uVar3 - uVar7;
    uVar6 = param_2[2] ^ uVar2;
    uVar7 = (ulonglong)(uVar5 < uVar2 || uVar3 < uVar7);
    uVar3 = uVar6 - uVar2;
    local_80 = uVar3 - uVar7;
    local_78 = ((uVar4 ^ uVar2) - uVar2) - (ulonglong)(uVar6 < uVar2 || uVar3 < uVar7);
    uVar3 = (longlong)uVar1 >> 0x3f;
    uVar4 = *param_1 ^ uVar3;
    local_b8 = uVar4 - uVar3;
    uVar2 = param_1[1] ^ uVar3;
    uVar4 = (ulonglong)(uVar4 < uVar3);
    uVar7 = uVar2 - uVar3;
    local_b0 = uVar7 - uVar4;
    uVar5 = param_1[2] ^ uVar3;
    uVar4 = (ulonglong)(uVar2 < uVar3 || uVar7 < uVar4);
    uVar7 = uVar5 - uVar3;
    local_a8 = uVar7 - uVar4;
    local_a0 = ((uVar1 ^ uVar3) - uVar3) - (ulonglong)(uVar5 < uVar3 || uVar7 < uVar4);
    FUN_1450356b0(local_50,&local_b8,&local_90,local_res20);
    uVar7 = (longlong)param_3[4] >> 0x3f;
    local_b8 = (*param_3 ^ uVar7) - uVar7;
    uVar1 = (ulonglong)((*param_3 ^ uVar7) < uVar7);
    uVar4 = (param_3[1] ^ uVar7) - uVar7;
    local_b0 = uVar4 - uVar1;
    uVar1 = (ulonglong)((param_3[1] ^ uVar7) < uVar7 || uVar4 < uVar1);
    uVar4 = (param_3[2] ^ uVar7) - uVar7;
    local_a8 = uVar4 - uVar1;
    uVar1 = (ulonglong)((param_3[2] ^ uVar7) < uVar7 || uVar4 < uVar1);
    uVar4 = (param_3[3] ^ uVar7) - uVar7;
    local_a0 = uVar4 - uVar1;
    local_98 = ((param_3[4] ^ uVar7) - uVar7) -
               (ulonglong)((param_3[3] ^ uVar7) < uVar7 || uVar4 < uVar1);
    FUN_145036910(local_70,&local_b8,local_50,local_res20);
    FUN_145035460(param_1,local_70,param_1);
    FUN_145035460(param_2,local_70,param_2);
    FUN_145035570(param_3,local_70,param_3);
  }
  return;
}



// FUNCTION 145034e70 FUN_145034e70 body=345 status=ok
// SIG undefined FUN_145034e70(void)

bool FUN_145034e70(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  ulonglong local_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  longlong lStack_70;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  longlong local_18;
  
  FUN_144cd87b0(param_1 + 0x28,param_2,&local_58);
  if (*(longlong *)(param_2 + 0x20) < 0) {
    bVar3 = uStack_30 < *(ulonglong *)(param_1 + 0x28);
    uStack_30 = uStack_30 - *(ulonglong *)(param_1 + 0x28);
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_28 < *(ulonglong *)(param_1 + 0x30);
    uVar2 = local_28 - *(ulonglong *)(param_1 + 0x30);
    local_28 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = uStack_20 < *(ulonglong *)(param_1 + 0x38);
    uVar2 = uStack_20 - *(ulonglong *)(param_1 + 0x38);
    uStack_20 = uVar2 - uVar1;
    local_18 = (local_18 - *(longlong *)(param_1 + 0x40)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  FUN_144cd87b0(param_2 + 0x28,param_1,&local_a8);
  if (*(longlong *)(param_1 + 0x20) < 0) {
    bVar3 = uStack_80 < *(ulonglong *)(param_2 + 0x28);
    uStack_80 = uStack_80 - *(ulonglong *)(param_2 + 0x28);
    uVar1 = (ulonglong)bVar3;
    bVar3 = local_78 < *(ulonglong *)(param_2 + 0x30);
    uVar2 = local_78 - *(ulonglong *)(param_2 + 0x30);
    local_78 = uVar2 - uVar1;
    lStack_70 = (lStack_70 - *(longlong *)(param_2 + 0x38)) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  return (longlong)
         ((lStack_70 - uStack_20) -
         (ulonglong)
         (local_78 < local_28 ||
         local_78 - local_28 <
         (ulonglong)
         (uStack_80 < uStack_30 ||
         uStack_80 - uStack_30 <
         (ulonglong)
         (local_88 < local_38 ||
         local_88 - local_38 <
         (ulonglong)
         (uStack_90 < uStack_40 ||
         uStack_90 - uStack_40 <
         (ulonglong)
         (local_98 < local_48 ||
         local_98 - local_48 <
         (ulonglong)
         (uStack_a0 < uStack_50 || uStack_a0 - uStack_50 < (ulonglong)(local_a8 < local_58)))))))) <
         0;
}



// FUNCTION 145034fd0 FUN_145034fd0 body=618 status=ok
// SIG undefined FUN_145034fd0(void)

void FUN_145034fd0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res18;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined1 local_88 [48];
  longlong local_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  uVar4 = param_1[3];
  uVar5 = param_2[4];
  if (uVar5 == 0 && ((param_2[2] == 0 && (param_2[1] == 0 && *param_2 == 0)) && param_2[3] == 0) ||
      (param_1[2] == 0 && (param_1[1] == 0 && *param_1 == 0)) && uVar4 == 0) {
    uVar4 = (longlong)(int)((longlong)uVar4 >> 0x3f) | 1;
    uVar5 = (longlong)uVar4 >> 0x3f;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar5;
    param_1[3] = uVar5;
    uVar4 = (ulonglong)
            (param_2[4] != 0 ||
            ((param_2[2] != 0 || (param_2[1] != 0 || *param_2 != 0)) || param_2[3] != 0)) |
            (longlong)(int)((longlong)param_2[4] >> 0x3f);
    uVar5 = (longlong)uVar4 >> 0x3f;
    *param_2 = uVar4;
    param_2[1] = uVar5;
    param_2[2] = uVar5;
    param_2[3] = uVar5;
    param_2[4] = uVar5;
  }
  else {
    uVar1 = (longlong)uVar5 >> 0x3f;
    uVar3 = *param_2 ^ uVar1;
    local_58 = uVar3 - uVar1;
    uVar6 = param_2[1] ^ uVar1;
    uVar3 = (ulonglong)(uVar3 < uVar1);
    uVar2 = uVar6 - uVar1;
    lStack_50 = uVar2 - uVar3;
    uVar7 = param_2[2] ^ uVar1;
    uVar3 = (ulonglong)(uVar6 < uVar1 || uVar2 < uVar3);
    uVar2 = uVar7 - uVar1;
    lStack_48 = uVar2 - uVar3;
    uVar6 = param_2[3] ^ uVar1;
    uVar3 = (ulonglong)(uVar7 < uVar1 || uVar2 < uVar3);
    uVar2 = uVar6 - uVar1;
    lStack_40 = uVar2 - uVar3;
    lStack_38 = ((uVar5 ^ uVar1) - uVar1) - (ulonglong)(uVar6 < uVar1 || uVar2 < uVar3);
    uVar2 = (longlong)uVar4 >> 0x3f;
    uVar5 = *param_1 ^ uVar2;
    local_a8 = uVar5 - uVar2;
    uVar5 = (ulonglong)(uVar5 < uVar2);
    uVar3 = (param_1[1] ^ uVar2) - uVar2;
    lStack_a0 = uVar3 - uVar5;
    uVar5 = (ulonglong)((param_1[1] ^ uVar2) < uVar2 || uVar3 < uVar5);
    uVar3 = (param_1[2] ^ uVar2) - uVar2;
    local_98 = uVar3 - uVar5;
    lStack_90 = ((uVar4 ^ uVar2) - uVar2) -
                (ulonglong)((param_1[2] ^ uVar2) < uVar2 || uVar3 < uVar5);
    FUN_145036910(local_88,&local_58,&local_a8,local_res18);
    FUN_145035460(param_1,local_88,param_1);
    FUN_145035570(param_2,local_88,param_2);
  }
  return;
}



// FUNCTION 145035240 FUN_145035240 body=537 status=ok
// SIG undefined FUN_145035240(void)

void FUN_145035240(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_res18;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined1 local_48 [32];
  
  uVar4 = param_1[3];
  uVar5 = param_2[3];
  if ((param_2[2] == 0 && (param_2[1] == 0 && *param_2 == 0)) && uVar5 == 0 ||
      (param_1[2] == 0 && (param_1[1] == 0 && *param_1 == 0)) && uVar4 == 0) {
    uVar4 = (longlong)(int)((longlong)uVar4 >> 0x3f) | 1;
    uVar5 = (longlong)uVar4 >> 0x3f;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_1[2] = uVar5;
    param_1[3] = uVar5;
    uVar4 = (longlong)(int)((longlong)param_2[3] >> 0x3f) | 1;
    uVar5 = (longlong)uVar4 >> 0x3f;
    *param_2 = uVar4;
    param_2[1] = uVar5;
    param_2[2] = uVar5;
    param_2[3] = uVar5;
  }
  else {
    uVar1 = (longlong)uVar5 >> 0x3f;
    uVar3 = *param_2 ^ uVar1;
    local_88 = uVar3 - uVar1;
    uVar6 = param_2[1] ^ uVar1;
    uVar3 = (ulonglong)(uVar3 < uVar1);
    uVar2 = uVar6 - uVar1;
    lStack_80 = uVar2 - uVar3;
    uVar7 = param_2[2] ^ uVar1;
    uVar3 = (ulonglong)(uVar6 < uVar1 || uVar2 < uVar3);
    uVar2 = uVar7 - uVar1;
    local_78 = uVar2 - uVar3;
    lStack_70 = ((uVar5 ^ uVar1) - uVar1) - (ulonglong)(uVar7 < uVar1 || uVar2 < uVar3);
    uVar2 = (longlong)uVar4 >> 0x3f;
    uVar5 = *param_1 ^ uVar2;
    local_68 = uVar5 - uVar2;
    uVar1 = param_1[1] ^ uVar2;
    uVar5 = (ulonglong)(uVar5 < uVar2);
    uVar3 = uVar1 - uVar2;
    local_60 = uVar3 - uVar5;
    uVar5 = (ulonglong)(uVar1 < uVar2 || uVar3 < uVar5);
    uVar3 = (param_1[2] ^ uVar2) - uVar2;
    local_58 = uVar3 - uVar5;
    local_50 = ((uVar4 ^ uVar2) - uVar2) -
               (ulonglong)((param_1[2] ^ uVar2) < uVar2 || uVar3 < uVar5);
    FUN_1450356b0(local_48,&local_68,&local_88,local_res18);
    FUN_145035460(param_1,local_48,param_1);
    FUN_145035460(param_2,local_48,param_2);
  }
  return;
}



// FUNCTION 145035460 FUN_145035460 body=259 status=ok
// SIG undefined FUN_145035460(void)

void FUN_145035460(ulonglong *param_1,undefined8 param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  uVar1 = param_1[3];
  uVar8 = (longlong)uVar1 >> 0x3f;
  local_48 = (*param_1 ^ uVar8) - uVar8;
  uVar2 = (ulonglong)((*param_1 ^ uVar8) < uVar8);
  uVar3 = (param_1[1] ^ uVar8) - uVar8;
  lStack_40 = uVar3 - uVar2;
  uVar2 = (ulonglong)((param_1[1] ^ uVar8) < uVar8 || uVar3 < uVar2);
  uVar3 = (param_1[2] ^ uVar8) - uVar8;
  local_38 = uVar3 - uVar2;
  lStack_30 = ((uVar1 ^ uVar8) - uVar8) - (ulonglong)((param_1[2] ^ uVar8) < uVar8 || uVar3 < uVar2)
  ;
  FUN_147e58a78(&local_48,param_2,&local_68,&local_28);
  if ((longlong)uVar1 < 0) {
    local_48 = -local_68;
    lStack_40 = -lStack_60 - (ulonglong)(local_68 != 0);
    uVar1 = (ulonglong)(lStack_60 != 0 || (ulonglong)-lStack_60 < (ulonglong)(local_68 != 0));
    local_38 = -local_58 - uVar1;
    plVar7 = &local_48;
    lStack_30 = -(ulonglong)(local_58 != 0 || (ulonglong)-local_58 < uVar1) - lStack_50;
  }
  else {
    plVar7 = &local_28;
    local_28 = local_68;
    lStack_20 = lStack_60;
    local_18 = local_58;
    lStack_10 = lStack_50;
  }
  lVar4 = plVar7[1];
  lVar5 = plVar7[2];
  lVar6 = plVar7[3];
  *param_3 = *plVar7;
  param_3[1] = lVar4;
  param_3[2] = lVar5;
  param_3[3] = lVar6;
  return;
}



// FUNCTION 145035570 FUN_145035570 body=314 status=ok
// SIG undefined FUN_145035570(void)

void FUN_145035570(ulonglong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  uVar2 = param_1[4];
  uVar8 = (longlong)uVar2 >> 0x3f;
  local_88 = (*param_1 ^ uVar8) - uVar8;
  uVar3 = (ulonglong)((*param_1 ^ uVar8) < uVar8);
  uVar4 = (param_1[1] ^ uVar8) - uVar8;
  lStack_80 = uVar4 - uVar3;
  uVar3 = (ulonglong)((param_1[1] ^ uVar8) < uVar8 || uVar4 < uVar3);
  uVar4 = (param_1[2] ^ uVar8) - uVar8;
  local_78 = uVar4 - uVar3;
  uVar3 = (ulonglong)((param_1[2] ^ uVar8) < uVar8 || uVar4 < uVar3);
  uVar4 = (param_1[3] ^ uVar8) - uVar8;
  lStack_70 = uVar4 - uVar3;
  local_68 = ((uVar2 ^ uVar8) - uVar8) - (ulonglong)((param_1[3] ^ uVar8) < uVar8 || uVar4 < uVar3);
  FUN_145036130(&local_88,param_2,&local_60,&local_38);
  if ((longlong)uVar2 < 0) {
    local_88 = -local_60;
    lStack_80 = -local_58 - (ulonglong)(local_60 != 0);
    uVar2 = (ulonglong)(local_58 != 0 || (ulonglong)-local_58 < (ulonglong)(local_60 != 0));
    local_78 = -local_50 - uVar2;
    uVar2 = (ulonglong)(local_50 != 0 || (ulonglong)-local_50 < uVar2);
    lStack_70 = -local_48 - uVar2;
    plVar7 = &local_88;
    local_68 = -(ulonglong)(local_48 != 0 || (ulonglong)-local_48 < uVar2) - local_40;
  }
  else {
    local_38 = local_60;
    local_30 = local_58;
    local_28 = local_50;
    local_20 = local_48;
    local_18 = local_40;
    plVar7 = &local_38;
  }
  lVar1 = plVar7[1];
  lVar5 = plVar7[2];
  lVar6 = plVar7[3];
  *param_3 = *plVar7;
  param_3[1] = lVar1;
  lVar1 = plVar7[4];
  param_3[2] = lVar5;
  param_3[3] = lVar6;
  param_3[4] = lVar1;
  return;
}



// FUNCTION 1450356b0 FUN_1450356b0 body=468 status=ok
// SIG undefined FUN_1450356b0(void)

ulonglong * FUN_1450356b0(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  uStack_50 = param_2[3];
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
  uVar6 = param_3[5];
  uVar7 = param_3[6];
  uVar8 = param_3[7];
  *(undefined4 *)(param_1 + 2) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  iVar11 = FUN_147e58894(&local_68);
  FUN_147e588f4(&local_68,iVar11);
  iVar12 = FUN_147e58894(param_1);
  FUN_147e588f4(param_1);
  uVar9 = uStack_50;
  uVar10 = local_58;
  uVar4 = uStack_60;
  uVar5 = local_68;
  if (iVar11 < iVar12) {
    iVar12 = iVar11;
  }
  while (uVar1 = param_1[2],
        uVar9 != param_1[3] || (uVar10 != uVar1 || (uVar5 != *param_1 || uVar4 != param_1[1]))) {
    uVar2 = param_1[3];
    bVar13 = uVar9 <= uVar2;
    uVar3 = *param_1;
    bVar14 = param_1[1] < uVar4;
    if (uVar3 < uVar5) {
      bVar14 = param_1[1] <= uVar4 && !bVar14 || bVar14;
    }
    if ((!bVar13 || uVar10 > uVar1 && ((!bVar13 || uVar2 == uVar9) && bVar13)) ||
        (bool)(bVar14 & (((!bVar13 || uVar2 == uVar9) && bVar13) &&
                        (uVar1 <= uVar10 && uVar10 <= uVar1)))) {
      local_68 = uVar5 - uVar3;
      uVar1 = uVar4 - param_1[1];
      uStack_60 = uVar1 - (uVar5 < uVar3);
      uVar4 = (ulonglong)(uVar4 < param_1[1] || uVar1 < (uVar5 < uVar3));
      uVar5 = uVar10 - param_1[2];
      local_58 = uVar5 - uVar4;
      uStack_50 = (uVar9 - param_1[3]) - (ulonglong)(uVar10 < param_1[2] || uVar5 < uVar4);
      local_48 = local_68;
      uStack_40 = uStack_60;
      local_38 = local_58;
      uStack_30 = uStack_50;
      FUN_147e58894(&local_68);
      FUN_147e588f4(&local_68);
      uVar9 = uStack_50;
      uVar10 = local_58;
      uVar4 = uStack_60;
      uVar5 = local_68;
    }
    else {
      local_48 = uVar3 - uVar5;
      uVar1 = param_1[1] - uVar4;
      uStack_40 = uVar1 - (uVar3 < uVar5);
      uVar1 = (ulonglong)(param_1[1] < uVar4 || uVar1 < (uVar3 < uVar5));
      uVar2 = param_1[2] - uVar10;
      local_38 = uVar2 - uVar1;
      uStack_30 = (param_1[3] - uVar9) - (ulonglong)(param_1[2] < uVar10 || uVar2 < uVar1);
      *param_1 = local_48;
      param_1[1] = uStack_40;
      param_1[2] = local_38;
      param_1[3] = uStack_30;
      FUN_147e58894(param_1);
      FUN_147e588f4(param_1);
    }
  }
  FUN_147e589b3(param_1,iVar12);
  param_1[3] = param_1[3] & 0x3ffffffffff;
  return param_1;
}



// FUNCTION 145035890 FUN_145035890 body=1818 status=ok
// SIG undefined FUN_145035890(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145035890(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong *puVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong local_e0;
  int local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  ulonglong local_c8 [9];
  ulonglong local_80 [9];
  
  puVar16 = param_2 + 4;
  *param_3 = 0;
  puVar29 = param_1 + 3;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  uVar19 = param_1[2];
  uVar26 = *puVar16;
  uVar32 = *puVar29;
  bVar35 = uVar26 == 0;
  bVar33 = param_2[3] <= uVar32;
  bVar34 = param_1[1] < param_2[1];
  if (*param_1 < *param_2) {
    bVar34 = param_1[1] <= param_2[1] && !bVar34 || bVar34;
  }
  if (((uVar26 == 0 && (bVar33 || !bVar35)) &&
      (param_2[2] <= uVar19 || (!bVar35 || (uVar32 > param_2[3] || !bVar33)))) &&
      !(bool)(bVar34 & ((bVar35 && (uVar32 <= param_2[3] && bVar33)) &&
                       (uVar19 <= param_2[2] && param_2[2] <= uVar19)))) {
    local_d8 = 4;
    while (uVar32 == 0) {
      local_d8 = local_d8 + -1;
      puVar29 = puVar29 + -1;
      uVar32 = *puVar29;
    }
    uVar31 = 5;
    local_cc = 5;
    if (uVar26 == 0) {
      do {
        uVar31 = uVar31 - 1;
        puVar16 = puVar16 + -1;
      } while (*puVar16 == 0);
      local_cc = uVar31;
      if (uVar31 == 1) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        param_4[4] = 0;
        local_e0 = 1;
        FUN_147e590c3(param_1,*param_2,param_3,param_4,1);
        return;
      }
    }
    uVar31 = local_cc;
    lVar24 = (longlong)(int)local_cc + -1;
    uVar13 = FUN_144cd81c0(param_2[lVar24]);
    iVar22 = local_d8;
    local_d4 = uVar13;
    lVar25 = (longlong)(int)uVar31;
    if (uVar13 == 0) {
      lVar24 = (longlong)local_d8;
      if (0 < local_d8) {
        memcpy(local_c8 + 1,param_1,lVar24 << 3);
      }
      lVar28 = 0;
      local_c8[lVar24 + 1] = 0;
      if (0 < (int)uVar31) {
        memcpy(local_80 + 2,param_2,lVar25 << 3);
        do {
          lVar28 = lVar28 + 1;
        } while (lVar28 < lVar25);
      }
    }
    else {
      bVar11 = (byte)uVar13;
      bVar17 = 0x40 - bVar11;
      if (0 < lVar24) {
        uVar19 = param_2[lVar24];
        puVar16 = param_2 + lVar24;
        do {
          lVar24 = lVar24 + -1;
          *(ulonglong *)((longlong)local_80 + (0x10 - (longlong)param_2) + (longlong)puVar16) =
               uVar19 << (bVar11 & 0x3f) | puVar16[-1] >> (bVar17 & 0x3f);
          uVar19 = puVar16[-1];
          puVar16 = puVar16 + -1;
        } while (0 < lVar24);
      }
      local_80[2] = *param_2 << (bVar11 & 0x3f);
      lVar24 = (longlong)local_d8 + -1;
      uVar19 = param_1[lVar24];
      local_c8[(longlong)local_d8 + 1] = uVar19 >> (bVar17 & 0x3f);
      if (0 < lVar24) {
        puVar16 = param_1 + lVar24;
        do {
          lVar24 = lVar24 + -1;
          *(ulonglong *)((longlong)local_c8 + (8U - (longlong)param_1) + (longlong)puVar16) =
               uVar19 << (bVar11 & 0x3f) | puVar16[-1] >> (bVar17 & 0x3f);
          uVar19 = puVar16[-1];
          puVar16 = puVar16 + -1;
        } while (0 < lVar24);
      }
      local_c8[1] = *param_1 << (bVar11 & 0x3f);
    }
    iVar30 = iVar22 - uVar31;
    local_c8[6] = (ulonglong)iVar30;
    if (-1 < iVar30) {
      uVar19 = local_80[lVar25 + 1];
      uVar14 = uVar31 & 1;
      uVar32 = (ulonglong)uVar14;
      uVar26 = 1 - uVar32;
      local_d0 = 1 - uVar14;
      local_c8[0] = uVar26;
      lVar24 = local_c8[6] * -8 + 0x48;
      puVar16 = local_c8 + local_c8[6] + lVar25;
      local_80[0] = lVar25 * -8 + 8;
      local_c8[7] = (uVar32 - lVar25) * 8 + 0x10;
      local_c8[8] = (uVar26 - lVar25) * 8 + 0x10;
      local_80[1] = (longlong)param_3 + (lVar25 * -8 - (longlong)(local_c8 + 1)) + 8;
      iVar23 = 1 - uVar14;
      do {
        if (puVar16[1] < uVar19) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar19;
          auVar4._8_8_ = puVar16[1];
          auVar4._0_8_ = *puVar16;
          uVar18 = SUB168(auVar4 / auVar3,0);
          uVar19 = SUB168(auVar4 % auVar3,0);
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_80[lVar25];
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            uVar20 = SUB168(auVar5 * auVar8,8);
            if ((uVar20 <= uVar19) &&
               ((uVar26 = local_c8[0], uVar20 != uVar19 ||
                (uVar20 = local_80[lVar25] * uVar18,
                uVar20 < puVar16[-1] || uVar20 - puVar16[-1] == 0)))) break;
            uVar18 = uVar18 - 1;
            bVar34 = CARRY8(uVar19,local_80[lVar25 + 1]);
            uVar19 = uVar19 + local_80[lVar25 + 1];
            uVar26 = local_c8[0];
          } while (!bVar34);
        }
        else {
          uVar18 = 0xffffffffffffffff;
        }
        bVar34 = false;
        if ((longlong)uVar32 < lVar25) {
          iVar22 = iVar30 + uVar14;
          lVar28 = ((lVar25 - uVar32) - 1 >> 1) + 1;
          puVar29 = (ulonglong *)(local_c8[7] + (longlong)puVar16);
          do {
            uVar19 = puVar29[-1];
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar18;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *(ulonglong *)((longlong)puVar29 + lVar24);
            uVar20 = SUB168(auVar6 * auVar9,8);
            uVar27 = *(ulonglong *)((longlong)puVar29 + lVar24) * uVar18;
            uVar26 = uVar19 - uVar27;
            local_c8[(longlong)iVar22 + 1] = uVar26 - (bVar34 != false);
            iVar23 = iVar22 + 1;
            uVar19 = (ulonglong)(uVar19 < uVar27 || uVar26 < (bVar34 != false));
            uVar26 = *puVar29 - uVar20;
            bVar34 = *puVar29 < uVar20 || uVar26 < uVar19;
            iVar22 = iVar22 + 2;
            local_c8[(longlong)iVar23 + 1] = uVar26 - uVar19;
            lVar28 = lVar28 + -1;
            uVar26 = local_c8[0];
            puVar29 = puVar29 + 2;
            iVar23 = local_d0;
          } while (lVar28 != 0);
        }
        bVar33 = false;
        puVar16[1] = puVar16[1] - (ulonglong)bVar34;
        if ((longlong)uVar26 < lVar25) {
          iVar23 = iVar23 + iVar30;
          lVar28 = ((lVar25 - uVar26) - 1 >> 1) + 1;
          puVar29 = (ulonglong *)(local_c8[8] + (longlong)puVar16);
          do {
            uVar19 = puVar29[-1];
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar18;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = *(ulonglong *)((longlong)puVar29 + lVar24);
            uVar21 = SUB168(auVar7 * auVar10,8);
            uVar27 = *(ulonglong *)((longlong)puVar29 + lVar24) * uVar18;
            uVar26 = uVar19 - uVar27;
            local_c8[(longlong)iVar23 + 1] = uVar26 - bVar33;
            iVar22 = iVar23 + 1;
            uVar20 = *puVar29;
            uVar19 = (ulonglong)(uVar19 < uVar27 || uVar26 < bVar33);
            uVar27 = uVar20 - uVar21;
            bVar33 = uVar20 < uVar21 || uVar27 < uVar19;
            iVar23 = iVar23 + 2;
            local_c8[(longlong)iVar22 + 1] = uVar27 - uVar19;
            uVar36 = local_80[0];
            lVar28 = lVar28 + -1;
            puVar29 = puVar29 + 2;
          } while (lVar28 != 0);
          uVar26 = local_c8[0];
          if (uVar20 < uVar21 || uVar27 < uVar19) {
            lVar28 = 0;
            uVar18 = uVar18 - 1;
            if (0 < lVar25) {
              bVar34 = false;
              iVar22 = iVar30;
              do {
                uVar19 = *(ulonglong *)((longlong)puVar16 + lVar28 * 8 + uVar36);
                lVar15 = (longlong)iVar22;
                uVar26 = (ulonglong)bVar34;
                uVar20 = uVar19 + local_80[lVar28 + 2];
                bVar34 = CARRY8(uVar19,local_80[lVar28 + 2]) || CARRY8(uVar20,uVar26);
                iVar22 = iVar22 + 1;
                lVar28 = lVar28 + 1;
                local_c8[lVar15 + 1] = uVar20 + uVar26;
                uVar26 = local_c8[0];
              } while (lVar28 < lVar25);
            }
          }
        }
        iVar30 = iVar30 + -1;
        lVar28 = local_c8[6] + -1;
        uVar19 = local_80[lVar25 + 1];
        lVar24 = lVar24 + 8;
        local_c8[6] = lVar28;
        *(ulonglong *)(local_80[1] + (longlong)puVar16) = uVar18;
        puVar16 = puVar16 + -1;
        uVar31 = local_cc;
        iVar23 = local_d0;
        iVar22 = local_d8;
      } while (-1 < lVar28);
    }
    uVar19 = 0;
    if (local_d4 == 0) {
      if (0 < lVar25) {
        memcpy(param_4,local_c8 + 1,lVar25 << 3);
      }
    }
    else {
      if ((0 < (int)uVar31) && (7 < uVar31)) {
        uVar14 = uVar31 & 0x80000007;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
        }
        puVar16 = param_4 + 4;
        uVar26 = uVar19;
        do {
          puVar1 = (ulonglong *)((longlong)&local_e0 + -(longlong)param_4 + (longlong)puVar16);
          uVar32 = puVar1[1];
          uVar19 = (ulonglong)((int)uVar19 + 8);
          uVar26 = uVar26 + 8;
          plVar2 = (longlong *)((longlong)&local_d8 + -(longlong)param_4 + (longlong)puVar16);
          lVar24 = plVar2[1];
          puVar29 = (ulonglong *)((longlong)&local_d0 + -(longlong)param_4 + (longlong)puVar16);
          uVar18 = *puVar29;
          uVar20 = puVar29[1];
          puVar29 = puVar16 + 8;
          uVar36 = (ulonglong)(0x40 - local_d4);
          uVar37 = (ulonglong)uVar13;
          lVar28 = *(longlong *)(&stack0xfffffffffffffef8 + -(longlong)param_4 + (longlong)puVar29);
          lVar15 = *(longlong *)
                    ((longlong)(&stack0xfffffffffffffef8 + -(longlong)param_4 + (longlong)puVar29) +
                    8);
          puVar16[-4] = *puVar1 >> uVar37 | *plVar2 << uVar36;
          puVar16[-3] = uVar32 >> uVar37 | lVar24 << uVar36;
          plVar2 = (longlong *)((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 0x10U)
          ;
          lVar24 = *plVar2;
          lVar12 = plVar2[1];
          uVar21 = (ulonglong)(0x40 - local_d4);
          puVar1 = (ulonglong *)((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 8U);
          uVar32 = *puVar1;
          uVar27 = puVar1[1];
          puVar16[-2] = uVar18 >> uVar37 | lVar28 << uVar36;
          puVar16[-1] = uVar20 >> uVar37 | lVar15 << uVar36;
          plVar2 = (longlong *)((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 0x20U)
          ;
          lVar28 = *plVar2;
          lVar15 = plVar2[1];
          uVar36 = (ulonglong)uVar13;
          puVar1 = (ulonglong *)
                   ((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 0x18U);
          uVar18 = *puVar1;
          uVar20 = puVar1[1];
          *puVar16 = lVar24 << uVar21 | uVar32 >> uVar36;
          puVar16[1] = lVar12 << uVar21 | uVar27 >> uVar36;
          puVar16[2] = lVar28 << uVar21 | uVar18 >> uVar36;
          puVar16[3] = lVar15 << uVar21 | uVar20 >> uVar36;
          puVar16 = puVar29;
        } while ((longlong)uVar26 < (longlong)(int)(uVar31 - uVar14));
      }
      lVar24 = (longlong)(int)uVar19;
      if (lVar24 < lVar25) {
        do {
          param_4[lVar24] =
               local_c8[lVar24 + 2] << (0x40 - (byte)local_d4 & 0x3f) |
               local_c8[lVar24 + 1] >> ((byte)local_d4 & 0x3f);
          lVar24 = lVar24 + 1;
        } while (lVar24 < lVar25);
      }
    }
    if ((int)uVar31 < 5) {
      memset(param_4 + lVar25,0,(longlong)(int)(5 - uVar31) << 3);
    }
    if (iVar22 < 4) {
      memset(param_3 + iVar22,0,(longlong)(4 - iVar22) << 3);
    }
  }
  else {
    *param_4 = *param_1;
    param_4[1] = param_1[1];
    param_4[2] = param_1[2];
    param_4[3] = *puVar29;
    param_4[4] = 0;
  }
  return;
}



// FUNCTION 145035fb0 FUN_145035fb0 body=372 status=ok
// SIG undefined FUN_145035fb0(void)

void FUN_145035fb0(ulonglong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  uVar1 = param_1[4];
  uVar7 = (longlong)uVar1 >> 0x3f;
  local_78 = (*param_1 ^ uVar7) - uVar7;
  uVar4 = (ulonglong)((*param_1 ^ uVar7) < uVar7);
  uVar5 = (param_1[1] ^ uVar7) - uVar7;
  lStack_70 = uVar5 - uVar4;
  uVar4 = (ulonglong)((param_1[1] ^ uVar7) < uVar7 || uVar5 < uVar4);
  uVar5 = (param_1[2] ^ uVar7) - uVar7;
  local_68 = uVar5 - uVar4;
  uVar4 = (ulonglong)((param_1[2] ^ uVar7) < uVar7 || uVar5 < uVar4);
  uVar5 = (param_1[3] ^ uVar7) - uVar7;
  lStack_60 = uVar5 - uVar4;
  local_58 = ((uVar1 ^ uVar7) - uVar7) - (ulonglong)((param_1[3] ^ uVar7) < uVar7 || uVar5 < uVar4);
  FUN_147e5ae6b(&local_78);
  if ((longlong)uVar1 < 0) {
    lVar2 = *param_3;
    uVar5 = -param_3[1];
    uVar1 = (ulonglong)(param_3[1] != 0 || uVar5 < (lVar2 != 0));
    uVar7 = -param_3[2];
    uVar4 = (ulonglong)(param_3[2] != 0 || uVar7 < uVar1);
    lVar3 = param_3[3];
    uVar6 = -param_3[3];
    *param_3 = -*param_3;
    param_3[1] = uVar5 - (lVar2 != 0);
    param_3[2] = uVar7 - uVar1;
    param_3[3] = uVar6 - uVar4;
    param_3[4] = -(ulonglong)(lVar3 != 0 || uVar6 < uVar4) - param_3[4];
    lVar2 = *param_4;
    uVar5 = -param_4[1];
    uVar1 = (ulonglong)(param_4[1] != 0 || uVar5 < (lVar2 != 0));
    uVar7 = -param_4[2];
    uVar4 = (ulonglong)(param_4[2] != 0 || uVar7 < uVar1);
    lVar3 = param_4[3];
    uVar6 = -param_4[3];
    *param_4 = -*param_4;
    param_4[1] = uVar5 - (lVar2 != 0);
    param_4[2] = uVar7 - uVar1;
    param_4[3] = uVar6 - uVar4;
    param_4[4] = -(ulonglong)(lVar3 != 0 || uVar6 < uVar4) - param_4[4];
  }
  return;
}



// FUNCTION 145036130 FUN_145036130 body=1809 status=ok
// SIG undefined FUN_145036130(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_145036130(ulonglong *param_1,ulonglong *param_2,undefined8 *param_3,ulonglong *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong *puVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong local_e0;
  int local_d8;
  uint local_d4;
  int local_d0;
  uint local_cc;
  ulonglong local_c8 [13];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  puVar16 = param_2 + 3;
  *param_3 = 0;
  puVar29 = param_1 + 4;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  uVar19 = param_1[2];
  uVar26 = *puVar16;
  uVar32 = *puVar29;
  bVar35 = uVar32 == 0;
  bVar34 = param_1[3] >= uVar26;
  bVar33 = param_1[1] < param_2[1];
  if (*param_1 < *param_2) {
    bVar33 = param_1[1] <= param_2[1] && !bVar33 || bVar33;
  }
  if ((param_1[3] < uVar26 && bVar35 ||
      uVar19 < param_2[2] && (bVar35 && (param_1[3] <= uVar26 && bVar34))) ||
      (bool)(bVar33 & ((bVar35 && (param_1[3] <= uVar26 && bVar34)) &&
                      (uVar19 <= param_2[2] && uVar19 >= param_2[2])))) {
    *param_4 = *param_1;
    param_4[1] = param_1[1];
    param_4[2] = param_1[2];
    param_4[3] = param_1[3];
  }
  else {
    local_d8 = 5;
    while (uVar32 == 0) {
      local_d8 = local_d8 + -1;
      puVar29 = puVar29 + -1;
      uVar32 = *puVar29;
    }
    uVar31 = 4;
    local_cc = 4;
    if (uVar26 == 0) {
      do {
        uVar31 = uVar31 - 1;
        puVar16 = puVar16 + -1;
      } while (*puVar16 == 0);
      local_cc = uVar31;
      if (uVar31 == 1) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
        local_e0 = 1;
        FUN_147e5b4ca(param_1,*param_2,param_3,param_4,1);
        return;
      }
    }
    uVar31 = local_cc;
    lVar24 = (longlong)(int)local_cc + -1;
    uVar13 = FUN_144cd81c0(param_2[lVar24]);
    iVar22 = local_d8;
    local_d4 = uVar13;
    lVar25 = (longlong)(int)uVar31;
    if (uVar13 == 0) {
      lVar24 = (longlong)local_d8;
      if (0 < local_d8) {
        memcpy(local_c8 + 1,param_1,lVar24 << 3);
      }
      lVar28 = 0;
      local_c8[lVar24 + 1] = 0;
      if (0 < (int)uVar31) {
        memcpy(local_c8 + 9,param_2,lVar25 << 3);
        do {
          lVar28 = lVar28 + 1;
        } while (lVar28 < lVar25);
      }
    }
    else {
      bVar11 = (byte)uVar13;
      bVar17 = 0x40 - bVar11;
      if (0 < lVar24) {
        uVar19 = param_2[lVar24];
        puVar16 = param_2 + lVar24;
        do {
          lVar24 = lVar24 + -1;
          *(ulonglong *)((longlong)local_c8 + (0x48U - (longlong)param_2) + (longlong)puVar16) =
               uVar19 << (bVar11 & 0x3f) | puVar16[-1] >> (bVar17 & 0x3f);
          uVar19 = puVar16[-1];
          puVar16 = puVar16 + -1;
        } while (0 < lVar24);
      }
      local_c8[9] = *param_2 << (bVar11 & 0x3f);
      lVar24 = (longlong)local_d8 + -1;
      uVar19 = param_1[lVar24];
      local_c8[(longlong)local_d8 + 1] = uVar19 >> (bVar17 & 0x3f);
      if (0 < lVar24) {
        puVar16 = param_1 + lVar24;
        do {
          lVar24 = lVar24 + -1;
          *(ulonglong *)((longlong)local_c8 + (8U - (longlong)param_1) + (longlong)puVar16) =
               uVar19 << (bVar11 & 0x3f) | puVar16[-1] >> (bVar17 & 0x3f);
          uVar19 = puVar16[-1];
          puVar16 = puVar16 + -1;
        } while (0 < lVar24);
      }
      local_c8[1] = *param_1 << (bVar11 & 0x3f);
    }
    iVar30 = iVar22 - uVar31;
    local_c8[7] = (ulonglong)iVar30;
    if (-1 < iVar30) {
      uVar19 = local_c8[lVar25 + 8];
      uVar14 = uVar31 & 1;
      uVar32 = (ulonglong)uVar14;
      uVar26 = 1 - uVar32;
      local_d0 = 1 - uVar14;
      local_c8[0] = uVar26;
      lVar24 = local_c8[7] * -8 + 0x38;
      puVar16 = local_c8 + local_c8[7] + lVar25;
      local_58 = lVar25 * -8 + 8;
      local_c8[8] = (uVar32 - lVar25) * 8 + 0x10;
      local_60 = (uVar26 - lVar25) * 8 + 0x10;
      local_50 = (longlong)param_3 + (lVar25 * -8 - (longlong)(local_c8 + 1)) + 8;
      iVar23 = 1 - uVar14;
      do {
        if (puVar16[1] < uVar19) {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar19;
          auVar4._8_8_ = puVar16[1];
          auVar4._0_8_ = *puVar16;
          uVar18 = SUB168(auVar4 / auVar3,0);
          uVar19 = SUB168(auVar4 % auVar3,0);
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = local_c8[lVar25 + 7];
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            uVar20 = SUB168(auVar5 * auVar8,8);
            if ((uVar20 <= uVar19) &&
               ((uVar26 = local_c8[0], uVar20 != uVar19 ||
                (uVar20 = local_c8[lVar25 + 7] * uVar18,
                uVar20 < puVar16[-1] || uVar20 - puVar16[-1] == 0)))) break;
            uVar18 = uVar18 - 1;
            bVar33 = CARRY8(uVar19,local_c8[lVar25 + 8]);
            uVar19 = uVar19 + local_c8[lVar25 + 8];
            uVar26 = local_c8[0];
          } while (!bVar33);
        }
        else {
          uVar18 = 0xffffffffffffffff;
        }
        bVar33 = false;
        if ((longlong)uVar32 < lVar25) {
          iVar22 = iVar30 + uVar14;
          lVar28 = ((lVar25 - uVar32) - 1 >> 1) + 1;
          puVar29 = (ulonglong *)((longlong)puVar16 + local_c8[8]);
          do {
            uVar19 = puVar29[-1];
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar18;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = *(ulonglong *)(lVar24 + (longlong)puVar29);
            uVar20 = SUB168(auVar6 * auVar9,8);
            uVar27 = *(ulonglong *)(lVar24 + (longlong)puVar29) * uVar18;
            uVar26 = uVar19 - uVar27;
            local_c8[(longlong)iVar22 + 1] = uVar26 - (bVar33 != false);
            iVar23 = iVar22 + 1;
            uVar19 = (ulonglong)(uVar19 < uVar27 || uVar26 < (bVar33 != false));
            uVar26 = *puVar29 - uVar20;
            bVar33 = *puVar29 < uVar20 || uVar26 < uVar19;
            iVar22 = iVar22 + 2;
            local_c8[(longlong)iVar23 + 1] = uVar26 - uVar19;
            lVar28 = lVar28 + -1;
            uVar26 = local_c8[0];
            puVar29 = puVar29 + 2;
            iVar23 = local_d0;
          } while (lVar28 != 0);
        }
        bVar34 = false;
        puVar16[1] = puVar16[1] - (ulonglong)bVar33;
        if ((longlong)uVar26 < lVar25) {
          iVar23 = iVar23 + iVar30;
          lVar28 = ((lVar25 - uVar26) - 1 >> 1) + 1;
          puVar29 = (ulonglong *)(local_60 + (longlong)puVar16);
          do {
            uVar19 = puVar29[-1];
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar18;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = *(ulonglong *)(lVar24 + (longlong)puVar29);
            uVar21 = SUB168(auVar7 * auVar10,8);
            uVar27 = *(ulonglong *)(lVar24 + (longlong)puVar29) * uVar18;
            uVar26 = uVar19 - uVar27;
            local_c8[(longlong)iVar23 + 1] = uVar26 - bVar34;
            iVar22 = iVar23 + 1;
            uVar20 = *puVar29;
            uVar19 = (ulonglong)(uVar19 < uVar27 || uVar26 < bVar34);
            uVar27 = uVar20 - uVar21;
            bVar34 = uVar20 < uVar21 || uVar27 < uVar19;
            iVar23 = iVar23 + 2;
            local_c8[(longlong)iVar22 + 1] = uVar27 - uVar19;
            lVar12 = local_58;
            lVar28 = lVar28 + -1;
            puVar29 = puVar29 + 2;
          } while (lVar28 != 0);
          uVar26 = local_c8[0];
          if (uVar20 < uVar21 || uVar27 < uVar19) {
            lVar28 = 0;
            uVar18 = uVar18 - 1;
            if (0 < lVar25) {
              bVar33 = false;
              iVar22 = iVar30;
              do {
                uVar19 = *(ulonglong *)((longlong)puVar16 + lVar28 * 8 + lVar12);
                lVar15 = (longlong)iVar22;
                uVar26 = (ulonglong)bVar33;
                uVar20 = uVar19 + local_c8[lVar28 + 9];
                bVar33 = CARRY8(uVar19,local_c8[lVar28 + 9]) || CARRY8(uVar20,uVar26);
                iVar22 = iVar22 + 1;
                lVar28 = lVar28 + 1;
                local_c8[lVar15 + 1] = uVar20 + uVar26;
                uVar26 = local_c8[0];
              } while (lVar28 < lVar25);
            }
          }
        }
        iVar30 = iVar30 + -1;
        lVar28 = local_c8[7] + -1;
        uVar19 = local_c8[lVar25 + 8];
        lVar24 = lVar24 + 8;
        local_c8[7] = lVar28;
        *(ulonglong *)((longlong)puVar16 + local_50) = uVar18;
        puVar16 = puVar16 + -1;
        uVar31 = local_cc;
        iVar23 = local_d0;
        iVar22 = local_d8;
      } while (-1 < lVar28);
    }
    uVar19 = 0;
    if (local_d4 == 0) {
      if (0 < lVar25) {
        memcpy(param_4,local_c8 + 1,lVar25 << 3);
      }
    }
    else {
      if ((0 < (int)uVar31) && (7 < uVar31)) {
        uVar14 = uVar31 & 0x80000007;
        if ((int)uVar14 < 0) {
          uVar14 = (uVar14 - 1 | 0xfffffff8) + 1;
        }
        puVar16 = param_4 + 4;
        uVar26 = uVar19;
        do {
          puVar1 = (ulonglong *)((longlong)&local_e0 + -(longlong)param_4 + (longlong)puVar16);
          uVar32 = puVar1[1];
          uVar19 = (ulonglong)((int)uVar19 + 8);
          uVar26 = uVar26 + 8;
          plVar2 = (longlong *)((longlong)&local_d8 + -(longlong)param_4 + (longlong)puVar16);
          lVar24 = plVar2[1];
          puVar29 = (ulonglong *)((longlong)&local_d0 + -(longlong)param_4 + (longlong)puVar16);
          uVar18 = *puVar29;
          uVar20 = puVar29[1];
          puVar29 = puVar16 + 8;
          uVar21 = (ulonglong)(0x40 - local_d4);
          uVar37 = (ulonglong)uVar13;
          lVar28 = *(longlong *)(&stack0xfffffffffffffef8 + -(longlong)param_4 + (longlong)puVar29);
          lVar12 = *(longlong *)
                    ((longlong)(&stack0xfffffffffffffef8 + -(longlong)param_4 + (longlong)puVar29) +
                    8);
          puVar16[-4] = *puVar1 >> uVar37 | *plVar2 << uVar21;
          puVar16[-3] = uVar32 >> uVar37 | lVar24 << uVar21;
          plVar2 = (longlong *)((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 0x10U)
          ;
          lVar24 = *plVar2;
          lVar15 = plVar2[1];
          uVar36 = (ulonglong)(0x40 - local_d4);
          puVar1 = (ulonglong *)((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 8U);
          uVar32 = *puVar1;
          uVar27 = puVar1[1];
          puVar16[-2] = uVar18 >> uVar37 | lVar28 << uVar21;
          puVar16[-1] = uVar20 >> uVar37 | lVar12 << uVar21;
          plVar2 = (longlong *)((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 0x20U)
          ;
          lVar28 = *plVar2;
          lVar12 = plVar2[1];
          uVar21 = (ulonglong)uVar13;
          puVar1 = (ulonglong *)
                   ((longlong)puVar16 + (longlong)local_c8 + -(longlong)param_4 + 0x18U);
          uVar18 = *puVar1;
          uVar20 = puVar1[1];
          *puVar16 = lVar24 << uVar36 | uVar32 >> uVar21;
          puVar16[1] = lVar15 << uVar36 | uVar27 >> uVar21;
          puVar16[2] = lVar28 << uVar36 | uVar18 >> uVar21;
          puVar16[3] = lVar12 << uVar36 | uVar20 >> uVar21;
          puVar16 = puVar29;
        } while ((longlong)uVar26 < (longlong)(int)(uVar31 - uVar14));
      }
      lVar24 = (longlong)(int)uVar19;
      if (lVar24 < lVar25) {
        do {
          param_4[lVar24] =
               local_c8[lVar24 + 2] << (0x40 - (byte)local_d4 & 0x3f) |
               local_c8[lVar24 + 1] >> ((byte)local_d4 & 0x3f);
          lVar24 = lVar24 + 1;
        } while (lVar24 < lVar25);
      }
    }
    if ((int)uVar31 < 4) {
      memset(param_4 + lVar25,0,(longlong)(int)(4 - uVar31) << 3);
    }
    if (iVar22 < 5) {
      memset(param_3 + iVar22,0,(longlong)(5 - iVar22) << 3);
    }
  }
  return;
}



// FUNCTION 145036850 FUN_145036850 body=179 status=ok
// SIG undefined FUN_145036850(void)

byte FUN_145036850(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  uVar3 = param_2[4];
  bVar4 = uVar3 == 0 && (uVar1 <= param_2[3] && uVar1 >= param_2[3]);
  bVar5 = param_1[1] < param_2[1];
  if (*param_1 < *param_2) {
    bVar5 = param_1[1] <= param_2[1] && !bVar5 || bVar5;
  }
  return ((uVar2 <= param_2[2] && uVar2 >= param_2[2]) && bVar4) & bVar5 |
         ((uVar3 != 0 || uVar1 < param_2[3] && uVar3 == 0) || uVar2 < param_2[2] && bVar4);
}



// FUNCTION 145036910 FUN_145036910 body=531 status=ok
// SIG undefined FUN_145036910(void)

ulonglong * FUN_145036910(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  ulonglong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  local_b8 = param_2[2];
  uStack_b0 = param_2[3];
  local_a8 = param_2[4];
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 1) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar9;
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  *(undefined4 *)(param_1 + 2) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
  iVar13 = FUN_147e5a585(&local_c8);
  FUN_147e5a5e5(&local_c8,iVar13);
  iVar14 = FUN_147e58894(param_1);
  FUN_147e588f4(param_1);
  uVar10 = local_a8;
  uVar11 = uStack_b0;
  uVar3 = local_b8;
  uVar2 = uStack_c0;
  uVar5 = local_c8;
  if (iVar13 < iVar14) {
    iVar14 = iVar13;
  }
  while (uVar10 != 0 ||
         ((uVar3 != param_1[2] || (uVar2 != param_1[1] || uVar5 != *param_1)) ||
         uVar11 != param_1[3])) {
    local_78 = local_c8;
    uStack_70 = uStack_c0;
    local_58 = local_a8;
    local_38 = (undefined4)param_1[2];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_30 = (undefined4)param_1[3];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_68 = local_b8;
    uStack_60 = uStack_b0;
    local_48 = (undefined4)*param_1;
    uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_40 = (undefined4)param_1[1];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
    cVar12 = FUN_145036850(&local_48,&local_78);
    uVar1 = param_1[3];
    if (cVar12 == '\0') {
      local_a0 = *param_1 - uVar5;
      uVar4 = (ulonglong)(*param_1 < uVar5);
      uVar6 = param_1[1] - uVar2;
      uStack_98 = uVar6 - uVar4;
      uVar4 = (ulonglong)(param_1[1] < uVar2 || uVar6 < uVar4);
      uVar6 = param_1[2] - uVar3;
      local_90 = uVar6 - uVar4;
      uVar4 = (ulonglong)(param_1[2] < uVar3 || uVar6 < uVar4);
      uStack_88 = (uVar1 - uVar11) - uVar4;
      *param_1 = local_a0;
      param_1[1] = uStack_98;
      local_58 = (((longlong)uVar1 >> 0x3f) - uVar10) -
                 (ulonglong)(uVar1 < uVar11 || uVar1 - uVar11 < uVar4);
      param_1[2] = local_90;
      param_1[3] = uStack_88;
      FUN_147e58894(param_1);
      FUN_147e588f4(param_1);
    }
    else {
      local_c8 = uVar5 - *param_1;
      uVar4 = uVar2 - param_1[1];
      uStack_c0 = uVar4 - (uVar5 < *param_1);
      uVar2 = (ulonglong)(uVar2 < param_1[1] || uVar4 < (uVar5 < *param_1));
      uVar5 = uVar3 - param_1[2];
      local_b8 = uVar5 - uVar2;
      uVar3 = (ulonglong)(uVar3 < param_1[2] || uVar5 < uVar2);
      uStack_b0 = (uVar11 - uVar1) - uVar3;
      local_a8 = (uVar10 - ((longlong)uVar1 >> 0x3f)) -
                 (ulonglong)(uVar11 < uVar1 || uVar11 - uVar1 < uVar3);
      local_a0 = local_c8;
      uStack_98 = uStack_c0;
      local_90 = local_b8;
      uStack_88 = uStack_b0;
      local_80 = local_a8;
      FUN_147e5a585(&local_c8);
      FUN_147e5a5e5(&local_c8);
      uVar10 = local_a8;
      uVar11 = uStack_b0;
      uVar3 = local_b8;
      uVar2 = uStack_c0;
      uVar5 = local_c8;
    }
  }
  FUN_147e589b3(param_1,iVar14);
  param_1[3] = param_1[3] & 0x3ffffffffff;
  return param_1;
}



// FUNCTION 145036b30 FUN_145036b30 body=3 status=ok
// SIG undefined FUN_145036b30(void)

void FUN_145036b30(void)

{
  return;
}



// FUNCTION 145036b40 FUN_145036b40 body=33 status=ok
// SIG undefined FUN_145036b40(void)

void FUN_145036b40(undefined8 param_1)

{
  undefined1 local_18 [16];
  
  FUN_144cb4920(param_1,local_18);
  FUN_144cb4970(param_1);
  return;
}



// FUNCTION 145036b70 FUN_145036b70 body=3 status=ok
// SIG undefined FUN_145036b70(void)

void FUN_145036b70(void)

{
  return;
}



// FUNCTION 145036b80 FUN_145036b80 body=3 status=ok
// SIG undefined FUN_145036b80(void)

void FUN_145036b80(void)

{
  return;
}



// FUNCTION 145036b90 FUN_145036b90 body=120 status=ok
// SIG undefined FUN_145036b90(void)

void FUN_145036b90(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) << 2)
    ;
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar4;
    puVar3 = (undefined4 *)*param_1;
    puVar2 = puVar1;
    if (0 < (int)uVar4) {
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *puVar3;
        }
        puVar3 = puVar3 + 1;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 145036c10 FUN_145036c10 body=2797 status=ok
// SIG undefined FUN_145036c10(void)

undefined2 *
FUN_145036c10(undefined2 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5,int *param_6,undefined8 param_7,undefined4 param_8,int param_9)

{
  undefined8 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  void *_Dst;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int *piVar16;
  longlong *plVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined2 local_res10 [4];
  longlong *local_res18;
  longlong *local_res20;
  undefined2 local_a8 [2];
  undefined2 local_a4 [2];
  undefined2 local_a0 [2];
  undefined2 local_9c [2];
  undefined8 local_98 [2];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_68 [10];
  
  local_88 = 0x50f0;
  local_res18 = param_3;
  local_res20 = param_4;
  _Dst = (void *)(*DAT_14c787670)(0,&local_88,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  if (_Dst == (void *)0x0) {
    lVar12 = 0;
  }
  else {
    memset(_Dst,0,0x50f0);
    lVar12 = FUN_1450378d0(_Dst);
  }
  if (*(longlong *)(lVar12 + 0x18) != *param_4) {
    if (*param_4 != 0) {
      FUN_144b3d910();
    }
    lVar13 = *(longlong *)(lVar12 + 0x18);
    *(longlong *)(lVar12 + 0x18) = *param_4;
    if (lVar13 != 0) {
      FUN_144b3f230();
    }
  }
  piVar16 = param_6;
  uVar1 = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)param_6;
  *(undefined8 *)(lVar12 + 0x28) = uVar1;
  *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(param_6 + 4);
  lVar13 = *param_4;
  uVar1 = param_5[1];
  *(undefined8 *)(lVar13 + 0xb0) = *param_5;
  *(undefined8 *)(lVar13 + 0xb8) = uVar1;
  uVar1 = param_5[3];
  *(undefined8 *)(lVar13 + 0xc0) = param_5[2];
  *(undefined8 *)(lVar13 + 200) = uVar1;
  uVar1 = param_5[5];
  *(undefined8 *)(lVar13 + 0xd0) = param_5[4];
  *(undefined8 *)(lVar13 + 0xd8) = uVar1;
  uVar1 = param_5[7];
  *(undefined8 *)(lVar13 + 0xe0) = param_5[6];
  *(undefined8 *)(lVar13 + 0xe8) = uVar1;
  uVar1 = param_5[9];
  *(undefined8 *)(lVar13 + 0xf0) = param_5[8];
  *(undefined8 *)(lVar13 + 0xf8) = uVar1;
  uVar1 = param_5[0xb];
  *(undefined8 *)(lVar13 + 0x100) = param_5[10];
  *(undefined8 *)(lVar13 + 0x108) = uVar1;
  uVar1 = param_5[0xd];
  *(undefined8 *)(lVar13 + 0x110) = param_5[0xc];
  *(undefined8 *)(lVar13 + 0x118) = uVar1;
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x74);
  uVar7 = *(undefined4 *)(param_5 + 0xf);
  uVar8 = *(undefined4 *)((longlong)param_5 + 0x7c);
  *(undefined4 *)(lVar13 + 0x120) = *(undefined4 *)(param_5 + 0xe);
  *(undefined4 *)(lVar13 + 0x124) = uVar3;
  *(undefined4 *)(lVar13 + 0x128) = uVar7;
  *(undefined4 *)(lVar13 + 300) = uVar8;
  uVar1 = param_5[0x11];
  *(undefined8 *)(lVar13 + 0x130) = param_5[0x10];
  *(undefined8 *)(lVar13 + 0x138) = uVar1;
  *(undefined4 *)(lVar13 + 0x140) = *(undefined4 *)(param_5 + 0x12);
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x94);
  *(undefined4 *)(lVar13 + 0x144) = uVar3;
  lVar13 = *param_3;
  auVar6._4_4_ = -(uint)(*(float *)(lVar13 + 0x54) < *(float *)(lVar13 + 0x44));
  auVar6._0_4_ = -(uint)(*(float *)(lVar13 + 0x50) < *(float *)(lVar13 + 0x40));
  auVar6._8_4_ = -(uint)(*(float *)(lVar13 + 0x58) < *(float *)(lVar13 + 0x48));
  auVar6._12_4_ = -(uint)(*(float *)(lVar13 + 0x5c) < *(float *)(lVar13 + 0x4c));
  uVar10 = movmskps(uVar3,auVar6);
  if ((uVar10 & 7) == 0) {
    FUN_144d11040(param_5,local_68);
    lVar15 = 0;
    lVar20 = (longlong)local_68 - (longlong)piVar16;
    lVar13 = 0xc - (longlong)piVar16;
    do {
      if ((*piVar16 < *(int *)(lVar20 + (longlong)piVar16)) ||
         (*(int *)((longlong)local_68 + lVar13 + (longlong)piVar16) < piVar16[3])) {
        uVar1 = *(undefined8 *)(lVar12 + 0x20);
        local_98[0]._0_4_ = (int)uVar1;
        iVar18 = (int)local_68._0_8_;
        if ((int)local_68._0_8_ < (int)local_98[0]) {
          iVar18 = (int)local_98[0];
        }
        *(int *)(lVar12 + 0x20) = iVar18;
        iVar18 = (int)((ulonglong)uVar1 >> 0x20);
        if (iVar18 <= SUB84(local_68._0_8_,4)) {
          iVar18 = SUB84(local_68._0_8_,4);
        }
        *(int *)(lVar12 + 0x24) = iVar18;
        if (local_68[2] < *(int *)(lVar12 + 0x28)) {
          local_68[2] = *(int *)(lVar12 + 0x28);
        }
        *(int *)(lVar12 + 0x28) = local_68[2];
        local_98[0] = *(undefined8 *)(lVar12 + 0x2c);
        iVar18 = (int)local_68._12_8_;
        if ((int)local_98[0] < (int)local_68._12_8_) {
          iVar18 = (int)local_98[0];
        }
        iVar11 = (int)((ulonglong)local_98[0] >> 0x20);
        *(int *)(lVar12 + 0x2c) = iVar18;
        if (SUB84(local_68._12_8_,4) <= iVar11) {
          iVar11 = SUB84(local_68._12_8_,4);
        }
        *(int *)(lVar12 + 0x30) = iVar11;
        if (*(int *)(lVar12 + 0x34) < local_68[5]) {
          local_68[5] = *(int *)(lVar12 + 0x34);
        }
        *(int *)(lVar12 + 0x34) = local_68[5];
        break;
      }
      lVar15 = lVar15 + 1;
      piVar16 = piVar16 + 1;
    } while (lVar15 < 3);
  }
  lVar13 = *(longlong *)(*param_4 + 0x18);
  iVar18 = *(int *)(lVar13 + 0x28);
  lVar15 = (longlong)iVar18;
  iVar11 = *(int *)(lVar13 + 0x38);
  lVar20 = (longlong)iVar11;
  iVar4 = *(int *)(*(longlong *)(lVar13 + 0x18) + 0x30);
  param_6 = (int *)CONCAT44(param_6._4_4_,*(undefined4 *)(*(longlong *)(lVar13 + 0x18) + 0x20));
  if ((int)(*(uint *)(lVar12 + 0x44) & 0x7fffffff) < iVar4) {
    FUN_141807cf8(lVar12 + 0x38,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  if ((*(int *)(lVar12 + 0x40) < iVar4) || (iVar4 < *(int *)(lVar12 + 0x40))) {
    *(int *)(lVar12 + 0x40) = iVar4;
  }
  if ((int)(*(uint *)(lVar12 + 0x1b2c) & 0x7fffffff) < iVar18) {
    FUN_141807cf8(lVar12 + 0x1b20,&PTR_vftable_14c6e47a0,lVar15);
  }
  if ((*(int *)(lVar12 + 0x1b28) < iVar18) || (iVar18 < *(int *)(lVar12 + 0x1b28))) {
    *(int *)(lVar12 + 0x1b28) = iVar18;
  }
  if ((int)(*(uint *)(lVar12 + 0x1b3c) & 0x7fffffff) < iVar18 + 4) {
    FUN_144ccdc40(lVar12 + 0x1b30,&PTR_vftable_14c6e47a0,(longlong)(iVar18 + 4));
  }
  if ((int)(*(uint *)(lVar12 + 0x1b3c) & 0x7fffffff) < iVar18) {
    FUN_147e57f40(lVar12 + 0x1b30,&PTR_vftable_14c6e47a0,lVar15);
  }
  if ((*(int *)(lVar12 + 0x1b38) < iVar18) || (iVar18 < *(int *)(lVar12 + 0x1b38))) {
    *(int *)(lVar12 + 0x1b38) = iVar18;
  }
  lVar13 = *param_4;
  if ((int)(*(uint *)(lVar13 + 100) & 0x7fffffff) < iVar18) {
    FUN_145039d30(lVar13 + 0x58,&PTR_vftable_14c6e47a0,lVar15);
  }
  iVar4 = *(int *)(lVar13 + 0x60);
  if (iVar4 < iVar18) {
    lVar5 = *(longlong *)(lVar13 + 0x58);
    *(int *)(lVar13 + 0x60) = iVar18;
    for (puVar19 = (undefined8 *)(lVar5 + (longlong)iVar4 * 8);
        puVar19 != (undefined8 *)(lVar5 + lVar15 * 8); puVar19 = puVar19 + 1) {
      if (puVar19 != (undefined8 *)0x0) {
        *puVar19 = 0;
      }
    }
  }
  else if (iVar18 < iVar4) {
    lVar5 = *(longlong *)(lVar13 + 0x58);
    *(int *)(lVar13 + 0x60) = iVar18;
    lVar13 = lVar5 + (longlong)iVar4 * 8;
    while (lVar13 != lVar5 + lVar15 * 8) {
      plVar17 = (longlong *)(lVar13 + -8);
      lVar13 = lVar13 + -8;
      if (*plVar17 != 0) {
        FUN_144b3f230();
      }
    }
  }
  lVar13 = 0;
  if ((int)(*(uint *)(lVar12 + 0x360c) & 0x7fffffff) < iVar11) {
    FUN_141807cf8(lVar12 + 0x3600,&PTR_vftable_14c6e47a0,lVar20);
  }
  if ((*(int *)(lVar12 + 0x3608) < iVar11) || (iVar11 < *(int *)(lVar12 + 0x3608))) {
    *(int *)(lVar12 + 0x3608) = iVar11;
  }
  if ((int)(*(uint *)(lVar12 + 0x361c) & 0x7fffffff) < iVar11 + 4) {
    FUN_144ccdc40(lVar12 + 0x3610,&PTR_vftable_14c6e47a0,(longlong)(iVar11 + 4));
  }
  if ((int)(*(uint *)(lVar12 + 0x361c) & 0x7fffffff) < iVar11) {
    FUN_147e57f40(lVar12 + 0x3610,&PTR_vftable_14c6e47a0,lVar20);
  }
  if ((*(int *)(lVar12 + 0x3618) < iVar11) || (iVar11 < *(int *)(lVar12 + 0x3618))) {
    *(int *)(lVar12 + 0x3618) = iVar11;
  }
  lVar15 = *param_4;
  plVar17 = (longlong *)(lVar15 + 0x80);
  if ((int)(*(uint *)(lVar15 + 0x8c) & 0x7fffffff) < iVar11) {
    FUN_145039e70(plVar17,&PTR_vftable_14c6e47a0,lVar20);
  }
  iVar18 = *(int *)(lVar15 + 0x88);
  if (iVar18 < iVar11) {
    lVar5 = *plVar17;
    *(int *)(lVar15 + 0x88) = iVar11;
    for (puVar19 = (undefined8 *)(lVar5 + (longlong)iVar18 * 8);
        puVar19 != (undefined8 *)(lVar5 + lVar20 * 8); puVar19 = puVar19 + 1) {
      if (puVar19 != (undefined8 *)0x0) {
        *puVar19 = 0;
      }
    }
  }
  else if (iVar11 < iVar18) {
    lVar5 = *plVar17;
    *(int *)(lVar15 + 0x88) = iVar11;
    lVar15 = lVar5 + (longlong)iVar18 * 8;
    while (lVar15 != lVar5 + lVar20 * 8) {
      plVar17 = (longlong *)(lVar15 + -8);
      lVar15 = lVar15 + -8;
      if (*plVar17 != 0) {
        FUN_144b3f230();
      }
    }
  }
  lVar15 = *param_4;
  iVar18 = (int)param_6;
  if ((int)(*(uint *)(lVar15 + 0x2c) & 0x7fffffff) < (int)param_6) {
    FUN_144d30c20(lVar15 + 0x20,&PTR_vftable_14c6e47a0,(longlong)(int)param_6);
  }
  if ((*(int *)(lVar15 + 0x28) < iVar18) || (iVar18 < *(int *)(lVar15 + 0x28))) {
    *(int *)(lVar15 + 0x28) = iVar18;
  }
  param_6 = (int *)0x930;
  lVar15 = (*DAT_14c787670)(0,&param_6,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar15,"QuantizeInputVerticesTask");
  }
  uVar3 = param_8;
  if (lVar15 != 0) {
    lVar13 = FUN_145038370(lVar15,lVar12,param_8);
  }
  local_88 = lVar13;
  FUN_144be3b70(param_2,local_res10,lVar13,0x40);
  uVar2 = local_res10[0];
  sVar9 = (short)param_9;
  plVar17 = (longlong *)(param_2 + 0x328);
  if ((short)param_9 != -1) {
    iVar18 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
      FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar11 = *(int *)(param_2 + 0x330);
    lVar13 = *plVar17;
    *(int *)(param_2 + 0x330) = iVar18;
    *(short *)(lVar13 + (longlong)iVar11 * 4) = sVar9;
    *(undefined2 *)(lVar13 + 2 + (longlong)iVar11 * 4) = uVar2;
  }
  param_6 = (int *)0x950;
  lVar13 = (*DAT_14c787670)(0,&param_6,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar13,"BuildTriangleAabbsAndPointsTask");
  }
  if (lVar13 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = FUN_145038c60(lVar13,lVar12,uVar3);
  }
  FUN_144be3b70(param_2,local_a8,local_70,0x40);
  uVar2 = local_a8[0];
  param_9 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < param_9) {
    FUN_141807bca(plVar17,&PTR_vftable_14c6e47a0,(longlong)param_9);
  }
  iVar18 = *(int *)(param_2 + 0x330);
  lVar13 = *plVar17;
  *(int *)(param_2 + 0x330) = param_9;
  *(undefined2 *)(lVar13 + (longlong)iVar18 * 4) = local_res10[0];
  lVar15 = 0;
  *(undefined2 *)(lVar13 + 2 + (longlong)iVar18 * 4) = uVar2;
  FUN_147e557be(local_a8[0],lVar12 + 0x38,lVar12 + 0xb0,lVar12 + 0x58,lVar12 + 0x48,uVar3,0x40,
                *local_res20 + 0x40,param_2,&param_9,&param_6,0,0,0,0,0);
  param_5 = (undefined8 *)0x930;
  lVar13 = (*DAT_14c787670)(0,&param_5,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar13,"ConvertThreeDVolumesTask");
  }
  if (lVar13 != 0) {
    lVar15 = FUN_145039560(lVar13,lVar12,uVar3);
  }
  local_78 = lVar15;
  FUN_144be3b70(param_2,local_a4,lVar15,0x40);
  uVar2 = local_a4[0];
  if (sVar9 != -1) {
    iVar18 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar11 = *(int *)(param_2 + 0x330);
    lVar13 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar18;
    *(short *)(lVar13 + (longlong)iVar11 * 4) = sVar9;
    *(undefined2 *)(lVar13 + 2 + (longlong)iVar11 * 4) = uVar2;
  }
  lVar15 = 0;
  param_5 = (undefined8 *)0x930;
  lVar13 = (*DAT_14c787670)(0,&param_5,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar13,"ConvertAreaVolumesTask");
  }
  if (lVar13 != 0) {
    lVar15 = FUN_145039a20(lVar13,lVar12,uVar3);
  }
  local_80 = lVar15;
  FUN_144be3b70(param_2,local_a0,lVar15,0x40);
  uVar2 = local_a0[0];
  if (sVar9 != -1) {
    iVar18 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
      FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
    }
    iVar11 = *(int *)(param_2 + 0x330);
    lVar13 = *(longlong *)(param_2 + 0x328);
    *(int *)(param_2 + 0x330) = iVar18;
    *(short *)(lVar13 + (longlong)iVar11 * 4) = sVar9;
    *(undefined2 *)(lVar13 + 2 + (longlong)iVar11 * 4) = uVar2;
  }
  plVar17 = local_res20;
  puVar19 = (undefined8 *)0x0;
  FUN_147e557be(local_a4[0],lVar12 + 0x1b20,lVar12 + 0x1b90,lVar12 + 0x1b40,lVar12 + 0x1b30,uVar3,
                0x40,*local_res20 + 0x68,param_2,&param_9,&param_5,0,0,0,0,0);
  FUN_147e557be(local_a0[0],lVar12 + 0x3600,lVar12 + 0x3670,lVar12 + 0x3620,lVar12 + 0x3610,uVar3,
                0x40,*plVar17 + 0x90,param_2,&param_9,local_9c,0,0,0,0,0);
  local_98[0] = 0x40;
  puVar14 = (undefined8 *)(*DAT_14c787670)(0,local_98,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar14,"CleanUpTask");
  }
  if (puVar14 != (undefined8 *)0x0) {
    puVar14[2] = 1;
    puVar14[1] = 0xffffffff;
    puVar14[6] = lVar12;
    *puVar14 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::CleanUpTask::vftable;
    puVar14[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::CleanUpTask::vftable;
    FUN_144b3d910(lVar12);
    puVar19 = puVar14;
  }
  FUN_144be3b70(param_2,param_1,puVar19,0x40);
  uVar2 = *param_1;
  iVar18 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  iVar11 = *(int *)(param_2 + 0x330);
  lVar13 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar18;
  *(undefined2 *)(lVar13 + (longlong)iVar11 * 4) = param_6._0_2_;
  *(undefined2 *)(lVar13 + 2 + (longlong)iVar11 * 4) = uVar2;
  iVar18 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  iVar11 = *(int *)(param_2 + 0x330);
  lVar13 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar18;
  *(undefined2 *)(lVar13 + (longlong)iVar11 * 4) = param_5._0_2_;
  *(undefined2 *)(lVar13 + 2 + (longlong)iVar11 * 4) = uVar2;
  iVar18 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar18) {
    FUN_141807bca((longlong *)(param_2 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  iVar11 = *(int *)(param_2 + 0x330);
  lVar13 = *(longlong *)(param_2 + 0x328);
  *(int *)(param_2 + 0x330) = iVar18;
  *(undefined2 *)(lVar13 + (longlong)iVar11 * 4) = local_9c[0];
  *(undefined2 *)(lVar13 + 2 + (longlong)iVar11 * 4) = uVar2;
  if (puVar19 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar19);
  }
  if (local_80 != 0) {
    FUN_144b3f230();
  }
  if (local_78 != 0) {
    FUN_144b3f230();
  }
  if (local_70 != 0) {
    FUN_144b3f230();
  }
  if (local_88 != 0) {
    FUN_144b3f230();
  }
  FUN_144b3f230(lVar12);
  if (*local_res18 != 0) {
    FUN_144b3f230();
  }
  if (*local_res20 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 145037700 FUN_145037700 body=458 status=ok
// SIG undefined FUN_145037700(void)

void FUN_145037700(longlong param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(longlong *)(param_1 + 0x38) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x38),
               (ulonglong)(*(uint *)(param_1 + 0x44) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x48),
               (ulonglong)(*(uint *)(param_1 + 0x54) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b28) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1b2c)) && (*(longlong *)(param_1 + 0x1b20) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1b20),
               (ulonglong)(*(uint *)(param_1 + 0x1b2c) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(param_1 + 0x1b20) = 0;
  *(undefined4 *)(param_1 + 0x1b2c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1b3c)) && (*(longlong *)(param_1 + 0x1b30) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1b30),
               (ulonglong)(*(uint *)(param_1 + 0x1b3c) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x1b30) = 0;
  *(undefined4 *)(param_1 + 0x1b3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3608) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x360c)) && (*(longlong *)(param_1 + 0x3600) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x3600),
               (ulonglong)(*(uint *)(param_1 + 0x360c) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(param_1 + 0x3600) = 0;
  *(undefined4 *)(param_1 + 0x360c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3618) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x361c)) && (*(longlong *)(param_1 + 0x3610) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x3610),
               (ulonglong)(*(uint *)(param_1 + 0x361c) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x3610) = 0;
  *(undefined4 *)(param_1 + 0x361c) = 0x80000000;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  return;
}



// FUNCTION 1450378d0 FUN_1450378d0 body=877 status=ok
// SIG undefined FUN_1450378d0(void)

undefined8 * FUN_1450378d0(undefined8 *param_1)

{
  param_1[2] = 1;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildContext::vftable;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  param_1[0xb] = &PTR_FUN_14aba39d0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x317) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c4) = 0;
  param_1[0x319] = param_1 + 0x31b;
  param_1[0x333] = param_1 + 0x335;
  param_1[0x33e] = param_1 + 0x340;
  *(undefined4 *)(param_1 + 0x31a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18d4) = 0x80000010;
  *(undefined4 *)(param_1 + 0x334) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19a4) = 0x80000010;
  param_1[0x33d] = 0;
  *(undefined4 *)(param_1 + 0x33f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x19fc) = 0x80000020;
  *(undefined1 *)(param_1 + 0x360) = 0;
  param_1[0x361] = 0;
  *(undefined4 *)(param_1 + 0x362) = 0;
  param_1[0x364] = 0;
  *(undefined4 *)(param_1 + 0x365) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b2c) = 0x80000000;
  param_1[0x366] = 0;
  *(undefined4 *)(param_1 + 0x367) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b3c) = 0x80000000;
  param_1[0x368] = &PTR_FUN_14aba39d0;
  param_1[0x369] = 0;
  param_1[0x36a] = 0;
  *(undefined4 *)(param_1 + 0x36b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1b5c) = 1;
  *(undefined1 *)(param_1 + 0x36c) = 0;
  param_1[0x36d] = 0;
  *(undefined4 *)(param_1 + 0x36e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b74) = 0x80000000;
  param_1[0x36f] = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b84) = 0x80000000;
  param_1[0x371] = 0;
  *(undefined4 *)(param_1 + 0x673) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33a4) = 0;
  param_1[0x675] = param_1 + 0x677;
  param_1[0x68f] = param_1 + 0x691;
  param_1[0x69a] = param_1 + 0x69c;
  *(undefined4 *)(param_1 + 0x676) = 0;
  *(undefined4 *)((longlong)param_1 + 0x33b4) = 0x80000010;
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3484) = 0x80000010;
  param_1[0x699] = 0;
  *(undefined4 *)(param_1 + 0x69b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34dc) = 0x80000020;
  *(undefined1 *)(param_1 + 0x6bc) = 0;
  param_1[0x6bd] = 0;
  *(undefined4 *)(param_1 + 0x6be) = 0;
  param_1[0x6c0] = 0;
  *(undefined4 *)(param_1 + 0x6c1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x360c) = 0x80000000;
  param_1[0x6c2] = 0;
  *(undefined4 *)(param_1 + 0x6c3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x361c) = 0x80000000;
  param_1[0x6c4] = &PTR_FUN_14aba39d0;
  param_1[0x6c5] = 0;
  param_1[0x6c6] = 0;
  *(undefined4 *)(param_1 + 0x6c7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x363c) = 1;
  *(undefined1 *)(param_1 + 0x6c8) = 0;
  param_1[0x6c9] = 0;
  *(undefined4 *)(param_1 + 0x6ca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3654) = 0x80000000;
  param_1[0x6cb] = 0;
  *(undefined4 *)(param_1 + 0x6cc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3664) = 0x80000000;
  param_1[0x6cd] = 0;
  *(undefined4 *)(param_1 + 0x9cf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e84) = 0;
  param_1[0x9d1] = param_1 + 0x9d3;
  param_1[0x9eb] = param_1 + 0x9ed;
  param_1[0x9f6] = param_1 + 0x9f8;
  *(undefined4 *)(param_1 + 0x9d2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e94) = 0x80000010;
  *(undefined4 *)(param_1 + 0x9ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4f64) = 0x80000010;
  param_1[0x9f5] = 0;
  *(undefined4 *)(param_1 + 0x9f7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4fbc) = 0x80000020;
  *(undefined1 *)(param_1 + 0xa18) = 0;
  param_1[0xa19] = 0;
  *(undefined4 *)(param_1 + 0xa1a) = 0;
  *(undefined1 *)(param_1 + 0xa1c) = 0;
  return param_1;
}



// FUNCTION 145037c40 FUN_145037c40 body=533 status=ok
// SIG undefined FUN_145037c40(void)

void FUN_145037c40(undefined8 *param_1)

{
  FUN_147e56e8a(param_1 + 0x6ce);
  FUN_147e56a8a(param_1 + 0x6c4);
  *(undefined4 *)(param_1 + 0x6c3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x361c)) && (param_1[0x6c2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x6c2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x361c) & 0x7fffffff) << 4);
  }
  param_1[0x6c2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x361c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x6c1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x360c)) && (param_1[0x6c0] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x6c0],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x360c) & 0x7fffffff) << 5);
  }
  param_1[0x6c0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x360c) = 0x80000000;
  FUN_147e56e8a(param_1 + 0x372);
  FUN_147e56a8a(param_1 + 0x368);
  *(undefined4 *)(param_1 + 0x367) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1b3c)) && (param_1[0x366] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x366],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1b3c) & 0x7fffffff) << 4);
  }
  param_1[0x366] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x365) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1b2c)) && (param_1[0x364] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x364],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1b2c) & 0x7fffffff) << 5);
  }
  param_1[0x364] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b2c) = 0x80000000;
  FUN_147e56e8a(param_1 + 0x16);
  FUN_147e56a8a(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 4);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) << 5);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145037e60 FUN_145037e60 body=87 status=ok
// SIG undefined FUN_145037e60(void)

undefined8 FUN_145037e60(undefined8 param_1,ulonglong param_2)

{
  FUN_145037c40();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x50f0);
  }
  return param_1;
}



// FUNCTION 145037ec0 FUN_145037ec0 body=65 status=ok
// SIG undefined FUN_145037ec0(void)

int * FUN_145037ec0(longlong param_1,int *param_2)

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



// FUNCTION 145037f10 FUN_145037f10 body=637 status=ok
// SIG undefined FUN_145037f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145037f10(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
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
  int iVar18;
  int iVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  float *pfVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x900) + 0x18);
  fVar4 = *(float *)(lVar2 + 0xb0);
  fVar5 = *(float *)(lVar2 + 0xb4);
  fVar6 = *(float *)(lVar2 + 0xb8);
  fVar7 = *(float *)(lVar2 + 0xc0);
  fVar8 = *(float *)(lVar2 + 0xc4);
  fVar9 = *(float *)(lVar2 + 200);
  fVar10 = *(float *)(lVar2 + 0xd0);
  fVar11 = *(float *)(lVar2 + 0xd4);
  fVar12 = *(float *)(lVar2 + 0xd8);
  iVar1 = *(int *)(param_2 + 0x18);
  fVar13 = *(float *)(lVar2 + 0xe0);
  fVar14 = *(float *)(lVar2 + 0xe4);
  fVar15 = *(float *)(lVar2 + 0xe8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18) + 0x18);
  do {
    puVar20 = (ulonglong *)
              ((longlong)*(int *)((longlong)iVar1 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x50)) *
               0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar21 = *puVar20;
    *puVar20 = *puVar20 + 1;
    UNLOCK();
    uVar25 = (uint)uVar21;
    if ((uint)(uVar21 >> 0x20) <= (uint)uVar21) {
      iVar18 = FUN_144bf98f0(param_1 + 0x10,iVar1 + 1,1,local_res8);
      if (iVar18 == 0) {
        return;
      }
      uVar21 = (ulonglong)local_res8[0];
      uVar25 = local_res8[0];
    }
    local_res8[0] = uVar25;
    iVar19 = (int)uVar21 + 1;
    lVar24 = (longlong)(int)uVar21;
    iVar18 = *(int *)(param_1 + 0x8f0);
    if (iVar19 < *(int *)(param_1 + 0x8f0)) {
      iVar18 = iVar19;
    }
    if (lVar24 < iVar18) {
      puVar22 = (undefined8 *)(lVar3 + lVar24 * 0xc);
      pfVar23 = (float *)(lVar24 * 0x10 + lVar2);
      lVar24 = iVar18 - lVar24;
      do {
        fVar31 = *pfVar23;
        fVar16 = pfVar23[1];
        fVar17 = pfVar23[2];
        fVar28 = fVar31 * fVar4 + fVar13 + fVar16 * fVar7 + fVar17 * fVar10;
        fVar30 = fVar31 * fVar5 + fVar14 + fVar16 * fVar8 + fVar17 * fVar11;
        fVar31 = fVar31 * fVar6 + fVar15 + fVar16 * fVar9 + fVar17 * fVar12;
        fVar28 = (float)(-(uint)(fVar28 < 0.0) & 0x80000000 ^ _DAT_14c6dad90) + fVar28;
        fVar30 = (float)(-(uint)(fVar30 < 0.0) & 0x80000000 ^ uRam000000014c6dad94) + fVar30;
        fVar31 = (float)(-(uint)(fVar31 < 0.0) & 0x80000000 ^ uRam000000014c6dad98) + fVar31;
        uVar32 = (int)fVar28 ^ -(uint)(2.1474836e+09 <= fVar28);
        uVar33 = (int)fVar30 ^ -(uint)(2.1474836e+09 <= fVar30);
        uVar34 = (int)fVar31 ^ -(uint)(2.1474836e+09 <= fVar31);
        uVar25 = (uVar32 ^ (int)uVar32 >> 0x1f) - ((int)uVar32 >> 0x1f);
        uVar26 = (uVar33 ^ (int)uVar33 >> 0x1f) - ((int)uVar33 >> 0x1f);
        uVar27 = (uVar34 ^ (int)uVar34 >> 0x1f) - ((int)uVar34 >> 0x1f);
        uVar29 = -(uint)((int)uVar26 < (int)uVar25);
        uVar26 = ~uVar29 & uVar26 | uVar29 & uVar25;
        uVar25 = -(uint)((int)uVar27 < (int)uVar26);
        if ((int)(uVar25 & uVar26 | ~uVar25 & uVar27) < 0x800000) {
          *puVar22 = CONCAT44(uVar33,uVar32);
          *(uint *)(puVar22 + 1) = uVar34;
          FUN_144be90e0(0xc7dec42);
        }
        else {
          *(undefined1 *)(*(longlong *)(param_1 + 0x900) + 0x50e0) = 1;
        }
        pfVar23 = pfVar23 + 4;
        puVar22 = (undefined8 *)((longlong)puVar22 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
  } while( true );
}



// FUNCTION 145038190 FUN_145038190 body=110 status=ok
// SIG undefined FUN_145038190(void)

undefined8 * FUN_145038190(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145038200 FUN_145038200 body=363 status=ok
// SIG undefined FUN_145038200(void)

void FUN_145038200(undefined8 param_1,undefined8 param_2)

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
    FUN_145037f10(param_1,param_2);
  }
  else {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Generation";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtQuantizeInputVertices";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    FUN_145037f10(param_1,param_2);
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



// FUNCTION 145038370 FUN_145038370 body=208 status=ok
// SIG undefined FUN_145038370(void)

undefined8 * FUN_145038370(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x18) + 0x18) + 0x20);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask>
               ::vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = param_3;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,param_3,uVar1,1);
  param_1[0x124] = param_2;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask::vftable;
  param_1[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::QuantizeInputVerticesTask::vftable
  ;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 145038440 FUN_145038440 body=8 status=ok
// SIG undefined FUN_145038440(void)

char * FUN_145038440(void)

{
  return "QuantizeInputVertices";
}



// FUNCTION 145038450 FUN_145038450 body=127 status=ok
// SIG undefined FUN_145038450(void)

undefined8 * FUN_145038450(undefined8 *param_1,ulonglong param_2)

{
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
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 1450384d0 FUN_1450384d0 body=65 status=ok
// SIG undefined FUN_1450384d0(void)

int * FUN_1450384d0(longlong param_1,int *param_2)

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



// FUNCTION 145038520 FUN_145038520 body=1369 status=ok
// SIG undefined FUN_145038520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145038520(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  byte bVar14;
  ulonglong *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  int local_1b8 [8];
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong lStack_160;
  int local_158 [4];
  undefined8 local_148;
  longlong local_140;
  longlong lStack_138;
  longlong local_130;
  int local_128;
  uint local_124;
  longlong local_120;
  int local_118;
  uint local_114;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  
  lVar11 = *(longlong *)(param_1 + 0x900);
  local_d8 = param_1 + -0x20;
  local_130 = 0;
  local_128 = 0;
  lVar18 = *(longlong *)(lVar11 + 0x18);
  local_158[0] = *(int *)(lVar11 + 0x20);
  local_158[1] = *(undefined4 *)(lVar11 + 0x24);
  local_158[2] = *(undefined4 *)(lVar11 + 0x28);
  local_158[3] = *(undefined4 *)(lVar11 + 0x2c);
  local_120 = 0;
  local_118 = 0;
  local_178 = *(longlong *)(lVar18 + 0x20);
  local_124 = 0x80000000;
  local_114 = 0x80000000;
  local_170 = local_178 + (longlong)*(int *)(lVar18 + 0x28) * 0xc;
  lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x18);
  local_168 = *(longlong *)(lVar18 + 0x28);
  lStack_160 = (longlong)*(int *)(lVar18 + 0x30) * 0x10 + local_168;
  local_198 = *(longlong *)(lVar11 + 0x38);
  lStack_190 = (longlong)*(int *)(lVar11 + 0x40) * 0x20 + local_198;
  local_188 = param_1 + 0x10;
  local_148 = *(undefined8 *)(lVar11 + 0x30);
  local_res18 = *(int *)(param_2 + 0x18) + 1;
  local_180 = ((longlong)*(int *)(param_2 + 0x18) + 1) * 0x40;
  lVar11 = local_188;
  local_140 = local_198;
  lStack_138 = lStack_190;
  do {
    do {
      puVar15 = (ulonglong *)
                ((longlong)*(int *)(local_180 + *(longlong *)(lVar11 + 0x40)) * 0x40 +
                *(longlong *)(lVar11 + 0x490));
      LOCK();
      uVar22 = *puVar15;
      *puVar15 = *puVar15 + 1;
      UNLOCK();
      uVar21 = (uint)uVar22;
      if ((uint)(uVar22 >> 0x20) <= (uint)uVar22) {
        iVar19 = FUN_144bf98f0(lVar11,local_res18,1,local_res10);
        if (iVar19 == 0) {
          FUN_145038d40(local_d8,&local_178);
          if ((-1 < (int)local_114) && (local_120 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_120,(ulonglong)(local_114 & 0x7fffffff) << 2);
          }
          if ((-1 < (int)local_124) && (local_130 != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_130,(ulonglong)(local_124 & 0x7fffffff) << 4);
          }
          return;
        }
        uVar22 = (ulonglong)local_res10[0];
        lVar11 = local_188;
        uVar21 = local_res10[0];
      }
      local_res10[0] = uVar21;
      iVar9 = (int)uVar22 + 1;
      lVar18 = (longlong)(int)uVar22;
      iVar19 = *(int *)(param_1 + 0x8f0);
      if (iVar9 < *(int *)(param_1 + 0x8f0)) {
        iVar19 = iVar9;
      }
    } while (iVar19 <= lVar18);
    lVar20 = lVar18 << 5;
    lVar24 = lVar18 << 4;
    lVar18 = iVar19 - lVar18;
    lVar25 = local_178;
    do {
      FUN_144be90e0(0xd4c567e0);
      piVar1 = (int *)(local_168 + lVar24);
      lVar11 = (longlong)*piVar1;
      lVar12 = (longlong)piVar1[1];
      local_108 = *(undefined8 *)(lVar25 + lVar11 * 0xc);
      local_f8 = *(undefined8 *)(lVar25 + lVar12 * 0xc);
      iVar19 = *(int *)(lVar25 + 8 + lVar12 * 0xc);
      lVar16 = (longlong)piVar1[2];
      iVar9 = *(int *)(lVar25 + 8 + lVar11 * 0xc);
      local_e8 = *(undefined8 *)(lVar25 + lVar16 * 0xc);
      uVar2 = *(undefined8 *)(lVar25 + lVar12 * 0xc);
      local_b8 = *(undefined8 *)(lVar25 + lVar11 * 0xc);
      local_c8._0_4_ = (int)uVar2;
      uVar3 = *(undefined8 *)(lVar25 + lVar12 * 0xc);
      if ((int)local_b8 < (int)local_c8) {
        local_c8._0_4_ = (int)local_b8;
      }
      iVar17 = (int)((ulonglong)uVar2 >> 0x20);
      iVar10 = (int)((ulonglong)local_b8 >> 0x20);
      local_98 = *(undefined8 *)(lVar25 + lVar11 * 0xc);
      local_a8._0_4_ = (int)uVar3;
      if (iVar17 <= iVar10) {
        iVar10 = iVar17;
      }
      iVar17 = *(int *)(lVar25 + 8 + lVar12 * 0xc);
      if (iVar9 < iVar19) {
        iVar19 = iVar9;
      }
      uVar4 = *(undefined8 *)(lVar25 + lVar16 * 0xc);
      if ((int)local_a8 < (int)local_98) {
        local_a8._0_4_ = (int)local_98;
      }
      local_1b8[4] = (int)((ulonglong)local_98 >> 0x20);
      iVar23 = (int)((ulonglong)uVar3 >> 0x20);
      local_88._0_4_ = (int)uVar4;
      if (local_1b8[4] <= iVar23) {
        local_1b8[4] = iVar23;
      }
      local_68 = CONCAT44(iVar10,(int)local_c8);
      if (iVar17 < iVar9) {
        iVar17 = iVar9;
      }
      local_res20 = *(int *)(lVar25 + 8 + lVar16 * 0xc);
      uVar5 = *(undefined8 *)(lVar25 + lVar16 * 0xc);
      if ((int)local_c8 < (int)local_88) {
        local_88._0_4_ = (int)local_c8;
      }
      local_1b8[5] = *(int *)(lVar25 + 8 + lVar16 * 0xc);
      local_198 = CONCAT44(local_1b8[4],(int)local_a8);
      uVar6 = local_68;
      if ((int)((ulonglong)uVar4 >> 0x20) <= iVar10) {
        uVar6 = uVar4;
      }
      local_1b8[0] = (int)local_88;
      local_1b8[1] = (int)((ulonglong)uVar6 >> 0x20);
      if (iVar19 < local_res20) {
        local_res20 = iVar19;
      }
      local_1b8[2] = local_res20;
      local_78._0_4_ = (int)uVar5;
      if ((int)local_78 < (int)local_a8) {
        local_78._0_4_ = (int)local_a8;
      }
      iVar19 = (int)((ulonglong)uVar5 >> 0x20);
      local_1b8[3] = (int)local_78;
      if (local_1b8[4] <= iVar19) {
        local_1b8[4] = iVar19;
      }
      if (local_1b8[5] < iVar17) {
        local_1b8[5] = iVar17;
      }
      lVar11 = 0;
      do {
        uVar21 = (uint)uVar22;
        local_c8 = uVar2;
        local_a8 = uVar3;
        if ((*(int *)((longlong)local_1b8 + lVar11 + 0xc) <= *(int *)((longlong)local_158 + lVar11))
           || (*(int *)((longlong)local_158 + lVar11 + 0xc) <=
               *(int *)((longlong)local_1b8 + lVar11))) goto LAB_1450389c4;
        lVar11 = lVar11 + 4;
      } while (lVar11 < 0xc);
      fVar26 = (float)local_1b8[1];
      auVar7._4_4_ = fVar26;
      auVar7._0_4_ = (float)(int)local_88;
      auVar7._8_4_ = (float)local_res20;
      auVar7._12_4_ = 0;
      *(undefined1 (*) [16])(local_140 + lVar20) = auVar7;
      iVar19 = local_128 + 1;
      auVar8._4_4_ = (float)local_1b8[4];
      auVar8._0_4_ = (float)(int)local_78;
      auVar8._8_4_ = (float)local_1b8[5];
      auVar8._12_4_ = 0;
      *(undefined1 (*) [16])(local_140 + 0x10 + lVar20) = auVar8;
      fVar27 = ((float)(int)local_78 + (float)(int)local_88) * _DAT_14c6dad90;
      fVar26 = ((float)local_1b8[4] + fVar26) * fRam000000014c6dad94;
      fVar28 = ((float)local_1b8[5] + (float)local_res20) * fRam000000014c6dad98;
      fVar29 = fRam000000014c6dad9c * 0.0;
      local_88 = uVar4;
      local_78 = uVar5;
      if ((int)(local_124 & 0x7fffffff) < iVar19) {
        FUN_147e57f40(&local_130,&PTR_vftable_14c6e47a0,(longlong)iVar19);
        lVar25 = local_178;
      }
      puVar13 = (uint *)((longlong)local_128 * 0x10 + local_130);
      if (puVar13 != (uint *)0x0) {
        *puVar13 = (uint)((int)fVar27 >> 0x1f) >> 1 ^ (uint)fVar27;
        puVar13[1] = (uint)((int)fVar26 >> 0x1f) >> 1 ^ (uint)fVar26;
        puVar13[2] = (uint)((int)fVar28 >> 0x1f) >> 1 ^ (uint)fVar28;
        puVar13[3] = (uint)((int)fVar29 >> 0x1f) >> 1 ^ (uint)fVar29;
        puVar13[3] = uVar21;
      }
      lVar11 = (longlong)((int)local_f8 - (int)local_108) *
               (longlong)(local_e8._4_4_ - local_108._4_4_) -
               (longlong)(local_f8._4_4_ - local_108._4_4_) *
               (longlong)((int)local_e8 - (int)local_108);
      bVar14 = 0;
      if (lVar11 != 0) {
        bVar14 = (byte)((ulonglong)lVar11 >> 0x3f) ^ 1;
      }
      local_128 = iVar19;
      uVar4 = local_88;
      uVar5 = local_78;
      if (bVar14 != 0) {
        iVar19 = local_118 + 1;
        if ((int)(local_114 & 0x7fffffff) < iVar19) {
          FUN_145039fb0(&local_120,&PTR_vftable_14c6e47a0,(longlong)iVar19);
          lVar25 = local_178;
        }
        puVar13 = (uint *)(local_120 + (longlong)local_118 * 4);
        local_118 = iVar19;
        uVar4 = local_88;
        uVar5 = local_78;
        if (puVar13 != (uint *)0x0) {
          *puVar13 = uVar21;
        }
      }
LAB_1450389c4:
      local_78 = uVar5;
      local_88 = uVar4;
      FUN_144be90e0(0x5e09c539);
      uVar22 = (ulonglong)(uVar21 + 1);
      lVar24 = lVar24 + 0x10;
      lVar20 = lVar20 + 0x20;
      lVar18 = lVar18 + -1;
      lVar11 = local_188;
    } while (lVar18 != 0);
  } while( true );
}



// FUNCTION 145038a80 FUN_145038a80 body=110 status=ok
// SIG undefined FUN_145038a80(void)

undefined8 * FUN_145038a80(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145038af0 FUN_145038af0 body=363 status=ok
// SIG undefined FUN_145038af0(void)

void FUN_145038af0(undefined8 param_1,undefined8 param_2)

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
    FUN_145038520(param_1,param_2);
  }
  else {
    local_18 = "TtAi";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtNav Mesh Generation";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    local_18 = "TtBuildAabbsAndPoints";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
    FUN_145038520(param_1,param_2);
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



// FUNCTION 145038c60 FUN_145038c60 body=220 status=ok
// SIG undefined FUN_145038c60(void)

undefined8 * FUN_145038c60(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x18) + 0x18) + 0x30);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask>
               ::vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = param_3;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,param_3,uVar1,1);
  param_1[0x124] = param_2;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask::
             vftable;
  param_1[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::BuildTriangleAabbsAndPointsTask::
               vftable;
  FUN_144b3d910(param_2);
  FUN_144bdde80(param_1 + 0x125);
  return param_1;
}



// FUNCTION 145038d40 FUN_145038d40 body=555 status=ok
// SIG undefined FUN_145038d40(void)

void FUN_145038d40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x928));
  lVar4 = *(longlong *)(param_1 + 0x920);
  plVar1 = (longlong *)(param_2 + 0x48);
  plVar2 = (longlong *)(lVar4 + 0x48);
  if (*(int *)(lVar4 + 0x50) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(lVar4 + 0x50) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + 0x54)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(lVar4 + 0x54) & 0x7fffffff) << 4);
      }
      *plVar2 = 0;
      *(undefined4 *)(lVar4 + 0x50) = 0;
      *(undefined4 *)(lVar4 + 0x54) = 0x80000000;
      FUN_147e61400(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(lVar4 + 0x54) = *(undefined4 *)(param_2 + 0x54);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
    }
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x50);
    puVar9 = (undefined4 *)*plVar1;
    puVar11 = puVar9 + (longlong)*(int *)(param_2 + 0x50) * 4;
    iVar10 = *(int *)(param_2 + 0x50) + iVar3;
    if ((int)(*(uint *)(lVar4 + 0x54) & 0x7fffffff) < iVar10) {
      FUN_147e57f40(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    puVar8 = (undefined4 *)((longlong)iVar3 * 0x10 + *plVar2);
    for (; puVar9 != puVar11; puVar9 = puVar9 + 4) {
      if (puVar8 != (undefined4 *)0x0) {
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
      }
      puVar8 = puVar8 + 4;
    }
    *(int *)(lVar4 + 0x50) = iVar10;
  }
  plVar1 = (longlong *)(param_2 + 0x58);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x920) + 0x18);
  plVar2 = (longlong *)(lVar4 + 0x30);
  if (*(int *)(lVar4 + 0x38) == 0) {
    if (plVar1 != plVar2) {
      *(undefined4 *)(lVar4 + 0x38) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + 0x3c)) && (*plVar2 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar2,
                   (ulonglong)(*(uint *)(lVar4 + 0x3c) & 0x7fffffff) << 2);
      }
      *plVar2 = 0;
      *(undefined4 *)(lVar4 + 0x38) = 0;
      *(undefined4 *)(lVar4 + 0x3c) = 0x80000000;
      FUN_145036b90(plVar1,&PTR_vftable_14c6e47a0);
      *plVar2 = *plVar1;
      *(undefined4 *)(lVar4 + 0x38) = *(undefined4 *)(param_2 + 0x60);
      *(undefined4 *)(lVar4 + 0x3c) = *(undefined4 *)(param_2 + 100);
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
    }
  }
  else {
    iVar3 = *(int *)(lVar4 + 0x38);
    puVar11 = (undefined4 *)*plVar1;
    iVar10 = *(int *)(param_2 + 0x60) + iVar3;
    puVar9 = puVar11 + *(int *)(param_2 + 0x60);
    if ((int)(*(uint *)(lVar4 + 0x3c) & 0x7fffffff) < iVar10) {
      FUN_14503a0c0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    puVar8 = (undefined4 *)(*plVar2 + (longlong)iVar3 * 4);
    for (; puVar11 != puVar9; puVar11 = puVar11 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar11;
      }
      puVar8 = puVar8 + 1;
    }
    *(int *)(lVar4 + 0x38) = iVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x000145038f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x928));
  return;
}



// FUNCTION 145038f70 FUN_145038f70 body=8 status=ok
// SIG undefined FUN_145038f70(void)

char * FUN_145038f70(void)

{
  return "BuildAabbsAndPoints";
}



// FUNCTION 145038f80 FUN_145038f80 body=139 status=ok
// SIG undefined FUN_145038f80(void)

undefined8 * FUN_145038f80(undefined8 *param_1,uint param_2)

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



// FUNCTION 145039010 FUN_145039010 body=65 status=ok
// SIG undefined FUN_145039010(void)

int * FUN_145039010(longlong param_1,int *param_2)

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



// FUNCTION 145039060 FUN_145039060 body=1166 status=ok
// SIG undefined FUN_145039060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145039060(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  uint local_res10 [2];
  int local_res18;
  longlong local_res20;
  undefined8 local_198;
  undefined8 local_18c;
  int local_168;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  lVar15 = *(longlong *)(param_1 + 0x900);
  lVar17 = *(longlong *)(lVar15 + 0x18);
  local_128 = *(undefined8 *)(lVar17 + 0xb0);
  uStack_120 = *(undefined8 *)(lVar17 + 0xb8);
  local_118 = *(undefined8 *)(lVar17 + 0xc0);
  uStack_110 = *(undefined8 *)(lVar17 + 200);
  local_108 = *(undefined8 *)(lVar17 + 0xd0);
  uStack_100 = *(undefined8 *)(lVar17 + 0xd8);
  local_f8 = *(undefined8 *)(lVar17 + 0xe0);
  uStack_f0 = *(undefined8 *)(lVar17 + 0xe8);
  local_e8 = *(undefined8 *)(lVar17 + 0xf0);
  uStack_e0 = *(undefined8 *)(lVar17 + 0xf8);
  local_d8 = *(undefined8 *)(lVar17 + 0x100);
  uStack_d0 = *(undefined8 *)(lVar17 + 0x108);
  local_c8 = *(undefined8 *)(lVar17 + 0x110);
  uStack_c0 = *(undefined8 *)(lVar17 + 0x118);
  local_b8 = *(undefined8 *)(lVar17 + 0x120);
  uStack_b0 = *(undefined8 *)(lVar17 + 0x128);
  local_a8 = *(undefined8 *)(lVar17 + 0x130);
  uStack_a0 = *(undefined8 *)(lVar17 + 0x138);
  local_98 = *(undefined4 *)(lVar17 + 0x140);
  local_94 = *(undefined4 *)(lVar17 + 0x144);
  local_88 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x20);
  local_80 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x18) + 0x28) * 0x10 + local_88;
  local_78 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x58);
  local_70 = local_78 + (longlong)*(int *)(*(longlong *)(lVar15 + 0x18) + 0x60) * 8;
  iVar3 = *(int *)(param_2 + 0x18);
  local_68 = *(longlong *)(lVar15 + 0x1b20);
  local_60 = (longlong)*(int *)(lVar15 + 0x1b28) * 0x20 + local_68;
  local_58 = *(longlong *)(lVar15 + 0x1b30);
  local_50 = (longlong)*(int *)(lVar15 + 0x1b38) * 0x10 + local_58;
  local_res18 = iVar3 + 1;
  iVar10 = local_res18;
  do {
    puVar14 = (ulonglong *)
              ((longlong)*(int *)((longlong)iVar3 * 0x40 + 0x40 + *(longlong *)(param_1 + 0x50)) *
               0x40 + *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar16 = *puVar14;
    *puVar14 = *puVar14 + 1;
    UNLOCK();
    uVar21 = (uint)uVar16;
    if ((uint)(uVar16 >> 0x20) <= (uint)uVar16) {
      iVar10 = FUN_144bf98f0(param_1 + 0x10,iVar10,1,local_res10);
      if (iVar10 == 0) {
        return;
      }
      uVar16 = (ulonglong)local_res10[0];
      uVar21 = local_res10[0];
      iVar10 = local_res18;
    }
    local_res10[0] = uVar21;
    iVar11 = (int)uVar16 + 1;
    lVar15 = (longlong)(int)uVar16;
    iVar13 = *(int *)(param_1 + 0x8f0);
    if (iVar11 < *(int *)(param_1 + 0x8f0)) {
      iVar13 = iVar11;
    }
    if (lVar15 < iVar13) {
      lVar17 = lVar15 << 4;
      lVar20 = lVar15 << 5;
      do {
        FUN_1450296c0(&local_res20,*(undefined8 *)(lVar17 + local_88),&local_128);
        lVar12 = local_78;
        if (*(longlong *)(local_78 + lVar15 * 8) != local_res20) {
          if (local_res20 != 0) {
            FUN_144b3d910(local_res20);
          }
          lVar5 = *(longlong *)(lVar12 + lVar15 * 8);
          *(longlong *)(lVar12 + lVar15 * 8) = local_res20;
          if (lVar5 != 0) {
            FUN_144b3f230();
          }
        }
        if (local_res20 == 0) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x900) + 0x50e0) = 1;
          uVar25 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
          *(undefined8 *)(lVar20 + local_68) = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
          ((undefined8 *)(lVar20 + local_68))[1] = uVar25;
          uVar26 = uRam000000014c6dae84 ^ 0x80000000;
          uVar27 = uRam000000014c6dae88 ^ 0x80000000;
          uVar28 = uRam000000014c6dae8c ^ 0x80000000;
          uVar21 = 0;
          uVar22 = 0;
          uVar23 = 0;
          uVar24 = 0;
          puVar1 = (uint *)(lVar20 + 0x10 + local_68);
          *puVar1 = _DAT_14c6dae80 ^ 0x80000000;
          puVar1[1] = uVar26;
          puVar1[2] = uVar27;
          puVar1[3] = uVar28;
        }
        else {
          puVar6 = *(undefined8 **)(local_res20 + 0x38);
          local_198 = *puVar6;
          iVar10 = *(int *)(puVar6 + 1);
          local_18c._0_4_ = (int)local_198;
          lVar12 = (longlong)(int)(((longlong)*(int *)(local_res20 + 0x40) * 0xc) / 0xc);
          iVar19 = iVar10;
          iVar11 = (int)local_18c;
          if (lVar12 < 2) {
            local_18c._4_4_ = (int)((ulonglong)local_198 >> 0x20);
            iVar18 = local_18c._4_4_;
          }
          else {
            lVar12 = lVar12 + -1;
            uVar25 = local_198;
            do {
              iVar4 = *(int *)((longlong)puVar6 + 0x14);
              uVar2 = *(undefined8 *)((longlong)puVar6 + 0xc);
              local_168 = (int)uVar2;
              iVar18 = local_168;
              if (iVar11 < local_168) {
                iVar18 = iVar11;
              }
              iVar11 = iVar18;
              iVar18 = (int)((ulonglong)local_198 >> 0x20);
              iVar7 = (int)((ulonglong)uVar2 >> 0x20);
              local_18c._4_4_ = (int)((ulonglong)uVar25 >> 0x20);
              if (iVar7 <= iVar18) {
                iVar18 = iVar7;
              }
              local_198 = CONCAT44(iVar18,iVar11);
              iVar9 = iVar4;
              if (iVar19 < iVar4) {
                iVar9 = iVar19;
              }
              iVar19 = iVar9;
              iVar9 = local_168;
              if (local_168 < (int)local_18c) {
                iVar9 = (int)local_18c;
              }
              local_18c._0_4_ = iVar9;
              if (local_18c._4_4_ <= iVar7) {
                local_18c._4_4_ = iVar7;
              }
              if (iVar4 < iVar10) {
                iVar4 = iVar10;
              }
              iVar10 = iVar4;
              lVar12 = lVar12 + -1;
              uVar25 = local_18c;
              puVar6 = (undefined8 *)((longlong)puVar6 + 0xc);
            } while (lVar12 != 0);
          }
          auVar30._0_4_ = (float)(int)local_18c;
          auVar8._4_4_ = (float)iVar18;
          auVar8._0_4_ = (float)iVar11;
          auVar8._8_4_ = (float)iVar19;
          auVar8._12_4_ = 0;
          *(undefined1 (*) [16])(lVar20 + local_68) = auVar8;
          auVar30._4_4_ = (float)local_18c._4_4_;
          auVar30._8_4_ = (float)iVar10;
          auVar30._12_4_ = 0;
          *(undefined1 (*) [16])(lVar20 + 0x10 + local_68) = auVar30;
          fVar29 = (auVar30._0_4_ + (float)iVar11) * _DAT_14c6dad90;
          fVar31 = ((float)local_18c._4_4_ + (float)iVar18) * fRam000000014c6dad94;
          fVar32 = ((float)iVar10 + (float)iVar19) * fRam000000014c6dad98;
          uVar21 = (uint)((int)fVar29 >> 0x1f) >> 1 ^ (uint)fVar29;
          uVar22 = (uint)((int)fVar31 >> 0x1f) >> 1 ^ (uint)fVar31;
          uVar23 = (uint)((int)fVar32 >> 0x1f) >> 1 ^ (uint)fVar32;
          uVar24 = (uint)((int)(fRam000000014c6dad9c * 0.0) >> 0x1f) >> 1 ^
                   (uint)(fRam000000014c6dad9c * 0.0);
        }
        puVar1 = (uint *)(lVar17 + local_58);
        *puVar1 = uVar21;
        puVar1[1] = uVar22;
        puVar1[2] = uVar23;
        puVar1[3] = uVar24;
        *(int *)(lVar17 + 0xc + local_58) = (int)uVar16;
        if (local_res20 != 0) {
          FUN_144b3f230();
        }
        lVar15 = lVar15 + 1;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        lVar20 = lVar20 + 0x20;
        lVar17 = lVar17 + 0x10;
        iVar10 = local_res18;
      } while (lVar15 < iVar13);
    }
  } while( true );
}



// FUNCTION 1450394f0 FUN_1450394f0 body=110 status=ok
// SIG undefined FUN_1450394f0(void)

undefined8 * FUN_1450394f0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145039560 FUN_145039560 body=204 status=ok
// SIG undefined FUN_145039560(void)

undefined8 * FUN_145039560(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x18) + 0x28);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertThreeDVolumesTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertThreeDVolumesTask>
               ::vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = param_3;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,param_3,uVar1,1);
  param_1[0x124] = param_2;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertThreeDVolumesTask::vftable;
  param_1[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertThreeDVolumesTask::vftable;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 145039630 FUN_145039630 body=8 status=ok
// SIG undefined FUN_145039630(void)

char * FUN_145039630(void)

{
  return "ConvertThreeDVolumes";
}



// FUNCTION 145039640 FUN_145039640 body=127 status=ok
// SIG undefined FUN_145039640(void)

undefined8 * FUN_145039640(undefined8 *param_1,ulonglong param_2)

{
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
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 1450396c0 FUN_1450396c0 body=65 status=ok
// SIG undefined FUN_1450396c0(void)

int * FUN_1450396c0(longlong param_1,int *param_2)

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



// FUNCTION 145039710 FUN_145039710 body=667 status=ok
// SIG undefined FUN_145039710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145039710(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint local_res8 [2];
  int local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_78;
  longlong local_70;
  
  local_res20 = (longlong)*(int *)(param_2 + 0x18) << 6;
  local_res10 = *(int *)(param_2 + 0x18) + 1;
  iVar7 = local_res10;
  do {
    puVar10 = (ulonglong *)
              ((longlong)*(int *)(local_res20 + 0x40 + *(longlong *)(param_1 + 0x50)) * 0x40 +
              *(longlong *)(param_1 + 0x4a0));
    LOCK();
    uVar14 = *puVar10;
    *puVar10 = *puVar10 + 1;
    UNLOCK();
    uVar6 = (uint)uVar14;
    if ((uint)(uVar14 >> 0x20) <= (uint)uVar14) {
      iVar7 = FUN_144bf98f0(param_1 + 0x10,iVar7,1,local_res8);
      if (iVar7 == 0) {
        return;
      }
      uVar14 = (ulonglong)local_res8[0];
      uVar6 = local_res8[0];
      iVar7 = local_res10;
    }
    local_res8[0] = uVar6;
    iVar8 = (int)uVar14 + 1;
    lVar12 = (longlong)(int)uVar14;
    iVar9 = *(int *)(param_1 + 0x8f0);
    if (iVar8 < *(int *)(param_1 + 0x8f0)) {
      iVar9 = iVar8;
    }
    if (lVar12 < iVar9) {
      lVar13 = lVar12 << 4;
      lVar16 = lVar12 << 5;
      lVar15 = lVar12 * 0x18;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x900) + 0x18);
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x30);
        local_78 = *(longlong *)(lVar15 + lVar4);
        local_70 = (longlong)*(int *)(lVar15 + 8 + lVar4) * 0x10 + local_78;
        FUN_14502b3d0(&local_res18,&local_78,lVar3 + 0xb0);
        lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x900) + 0x18) + 0x80);
        if (*(longlong *)(lVar3 + lVar12 * 8) != local_res18) {
          if (local_res18 != 0) {
            FUN_144b3d910(local_res18);
          }
          lVar4 = *(longlong *)(lVar3 + lVar12 * 8);
          *(longlong *)(lVar3 + lVar12 * 8) = local_res18;
          if (lVar4 != 0) {
            FUN_144b3f230();
          }
        }
        fVar23 = fRam000000014c6dae9c;
        puVar11 = *(undefined8 **)(local_res18 + 0x18);
        auVar20._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
        auVar20._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
        auVar20._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
        puVar1 = puVar11 + *(int *)(local_res18 + 0x20);
        auVar24 = _DAT_14c6dae80;
        while (puVar11 != puVar1) {
          uVar5 = *puVar11;
          puVar11 = puVar11 + 1;
          auVar18._0_4_ = (float)(int)uVar5;
          auVar18._4_4_ = (float)(int)((ulonglong)uVar5 >> 0x20);
          auVar18._8_8_ = 0;
          auVar24 = minps(auVar24,auVar18);
          auVar20 = maxps(auVar20,auVar18);
        }
        auVar25._12_4_ = auVar24._12_4_;
        fVar17 = 0.0 - fRam000000014c6dae9c;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x900) + 0x3600);
        auVar25._0_8_ = auVar24._0_8_;
        auVar25._8_4_ = fVar17;
        auVar21._12_4_ = auVar20._12_4_;
        auVar21._0_8_ = auVar20._0_8_;
        auVar21._8_4_ = fRam000000014c6dae9c;
        *(undefined1 (*) [16])(lVar16 + 0x10 + lVar3) = auVar21;
        *(undefined1 (*) [16])(lVar16 + lVar3) = auVar25;
        fVar19 = (auVar20._0_4_ + auVar24._0_4_) * _DAT_14c6dad90;
        fVar22 = (auVar20._4_4_ + auVar24._4_4_) * fRam000000014c6dad94;
        fVar23 = (fVar23 + fVar17) * fRam000000014c6dad98;
        fVar17 = (auVar21._12_4_ + auVar25._12_4_) * fRam000000014c6dad9c;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x900) + 0x3610);
        puVar2 = (uint *)(lVar3 + lVar13);
        *puVar2 = (uint)((int)fVar19 >> 0x1f) >> 1 ^ (uint)fVar19;
        puVar2[1] = (uint)((int)fVar22 >> 0x1f) >> 1 ^ (uint)fVar22;
        puVar2[2] = (uint)((int)fVar23 >> 0x1f) >> 1 ^ (uint)fVar23;
        puVar2[3] = (uint)((int)fVar17 >> 0x1f) >> 1 ^ (uint)fVar17;
        *(int *)(lVar3 + 0xc + lVar13) = (int)uVar14;
        if (local_res18 != 0) {
          FUN_144b3f230();
        }
        uVar14 = (ulonglong)((int)uVar14 + 1);
        lVar12 = lVar12 + 1;
        lVar15 = lVar15 + 0x18;
        lVar16 = lVar16 + 0x20;
        lVar13 = lVar13 + 0x10;
        iVar7 = local_res10;
      } while (lVar12 < iVar9);
    }
  } while( true );
}



// FUNCTION 1450399b0 FUN_1450399b0 body=110 status=ok
// SIG undefined FUN_1450399b0(void)

undefined8 * FUN_1450399b0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 145039a20 FUN_145039a20 body=204 status=ok
// SIG undefined FUN_145039a20(void)

undefined8 * FUN_145039a20(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x18) + 0x18) + 0x38);
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreaVolumesTask>
             ::vftable;
  param_1[4] = hkBatchTaskBase<hkReferencedTask,hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreaVolumesTask>
               ::vftable;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x914) = param_3;
  *(undefined4 *)(param_1 + 0x122) = uVar1;
  FUN_144bf95c0(param_1 + 6,param_3,uVar1,1);
  param_1[0x124] = param_2;
  *param_1 = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreaVolumesTask::vftable;
  param_1[4] = hkaiNavMeshGeneration::SimpleGeometrySourceDetail::ConvertAreaVolumesTask::vftable;
  FUN_144b3d910(param_2);
  return param_1;
}



// FUNCTION 145039af0 FUN_145039af0 body=8 status=ok
// SIG undefined FUN_145039af0(void)

char * FUN_145039af0(void)

{
  return "ConvertAreaVolumes";
}



// FUNCTION 145039b00 FUN_145039b00 body=127 status=ok
// SIG undefined FUN_145039b00(void)

undefined8 * FUN_145039b00(undefined8 *param_1,ulonglong param_2)

{
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
    FUN_144bda120(param_1,0x930);
  }
  return param_1;
}



// FUNCTION 145039b80 FUN_145039b80 body=276 status=ok
// SIG undefined FUN_145039b80(void)

void FUN_145039b80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x50e0) != '\0') {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x28) = 0;
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x38) = 0;
    FUN_147e56b1c(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x40);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
    lVar3 = *(longlong *)(lVar2 + 0x58);
    lVar4 = lVar3 + (longlong)*(int *)(lVar2 + 0x60) * 8;
    while (lVar4 != lVar3) {
      plVar1 = (longlong *)(lVar4 + -8);
      lVar4 = lVar4 + -8;
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined4 *)(lVar2 + 0x60) = 0;
    FUN_147e56b1c(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x68);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
    lVar3 = *(longlong *)(lVar2 + 0x80);
    lVar4 = lVar3 + (longlong)*(int *)(lVar2 + 0x88) * 8;
    while (lVar4 != lVar3) {
      plVar1 = (longlong *)(lVar4 + -8);
      lVar4 = lVar4 + -8;
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    }
    *(undefined4 *)(lVar2 + 0x88) = 0;
    FUN_147e56b1c(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 0x90);
  }
  FUN_145037700(*(undefined8 *)(param_1 + 0x10));
  return;
}


