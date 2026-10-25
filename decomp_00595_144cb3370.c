// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144cb3370 FUN_144cb3370 body=149 status=ok
// SIG undefined FUN_144cb3370(void)

longlong FUN_144cb3370(longlong param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144cb3410 FUN_144cb3410 body=117 status=ok
// SIG undefined FUN_144cb3410(void)

void FUN_144cb3410(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 3;
  plVar2 = (longlong *)(param_1 + 0x30);
  do {
    plVar1 = plVar2 + -2;
    lVar3 = lVar3 + -1;
    *(undefined4 *)(plVar2 + -1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + -4)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)((longlong)plVar2 + -4) & 0x7fffffff) << 2);
    }
    *plVar1 = 0;
    *(undefined4 *)((longlong)plVar2 + -4) = 0x80000000;
    plVar2 = plVar1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 144cb3490 FUN_144cb3490 body=101 status=ok
// SIG undefined FUN_144cb3490(void)

undefined8 * FUN_144cb3490(undefined8 *param_1,ulonglong param_2)

{
  FUN_144cb3410(param_1 + 3);
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



// FUNCTION 144cb3500 FUN_144cb3500 body=101 status=ok
// SIG undefined FUN_144cb3500(void)

undefined8 * FUN_144cb3500(undefined8 *param_1,ulonglong param_2)

{
  FUN_144cb3410(param_1 + 3);
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



// FUNCTION 144cb3570 FUN_144cb3570 body=401 status=ok
// SIG undefined FUN_144cb3570(void)

longlong * FUN_144cb3570(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_147e549a6(param_2,&PTR_vftable_14c6e47a0);
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
    FUN_147e54a10(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *plVar1 = 0;
    param_2[3] = 0;
  }
  plVar1 = param_2 + 4;
  plVar2 = param_1 + 4;
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 5) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 7);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
    FUN_147e54a7a(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *plVar1 = 0;
    param_2[5] = 0;
  }
  return param_1;
}



// FUNCTION 144cb3710 FUN_144cb3710 body=58 status=ok
// SIG undefined FUN_144cb3710(void)

void FUN_144cb3710(longlong param_1,longlong param_2)

{
  FUN_144cad710(param_1 + 0x68,param_2 + 0x68);
  FUN_144cad1f0(param_1 + 0xb8,param_2 + 0xb8);
  return;
}



// FUNCTION 144cb3750 FUN_144cb3750 body=56 status=ok
// SIG undefined FUN_144cb3750(void)

void FUN_144cb3750(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_14502c690(param_1 + 0x38);
  FUN_144cad990(param_1 + 0x68,0);
  FUN_144cad4c0(param_1 + 0xb8,0);
  return;
}



// FUNCTION 144cb3790 FUN_144cb3790 body=211 status=ok
// SIG undefined FUN_144cb3790(void)

void FUN_144cb3790(longlong param_1)

{
  FUN_144be90e0(0x9edd3517);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_144be90e0(0x31db8b03);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) * 0x60);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_144be90e0(0xc974b339);
  FUN_14502c6a0(param_1 + 0x38);
  FUN_144cad990(param_1 + 0x68,0);
  FUN_144cad4c0(param_1 + 0xb8,0);
  return;
}



// FUNCTION 144cb3870 FUN_144cb3870 body=27 status=ok
// SIG undefined FUN_144cb3870(void)

longlong FUN_144cb3870(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x40);
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x20) == 0)) && (*(int *)(param_1 + 0x30) == 0)) {
    return 1;
  }
  return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
}



// FUNCTION 144cb3890 FUN_144cb3890 body=3 status=ok
// SIG undefined FUN_144cb3890(void)

void FUN_144cb3890(void)

{
  return;
}



// FUNCTION 144cb38a0 FUN_144cb38a0 body=87 status=ok
// SIG undefined FUN_144cb38a0(void)

void FUN_144cb38a0(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < param_2) {
    FUN_144cb7480(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x20) < param_2) || (param_2 < *(int *)(param_1 + 0x20))) {
    *(int *)(param_1 + 0x20) = param_2;
  }
  FUN_144cad990(param_1 + 0x68,param_2);
  return;
}



// FUNCTION 144cb3900 FUN_144cb3900 body=118 status=ok
// SIG undefined FUN_144cb3900(void)

longlong FUN_144cb3900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20) + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar3) {
    FUN_144cb7480(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(int *)(param_1 + 0x20) = iVar3;
  iVar3 = FUN_144cad980(param_1 + 0x68);
  FUN_144cad990(param_1 + 0x68,iVar3 + 1);
  return lVar2 + (longlong)iVar1 * 4;
}



// FUNCTION 144cb3980 FUN_144cb3980 body=425 status=ok
// SIG undefined FUN_144cb3980(void)

void FUN_144cb3980(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong local_38;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar6 = *plVar1;
  if ((int)uVar7 < 1) {
    local_30 = 0;
    local_38 = 0;
    uVar7 = 0x80000000;
  }
  else {
    local_38 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar7 << 2);
    local_30 = uVar7;
  }
  piVar3 = (int *)*param_2;
  iVar4 = (int)(param_2[1] - (longlong)piVar3 >> 2);
  lVar8 = (longlong)iVar4;
  if (0 < iVar4) {
    piVar5 = piVar3;
    do {
      iVar4 = *piVar5;
      puVar2 = (undefined4 *)((lVar6 - (longlong)piVar3) + (longlong)piVar5);
      piVar5 = piVar5 + 1;
      *(undefined4 *)(local_38 + (longlong)iVar4 * 4) = *puVar2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar6 = *(longlong *)(param_1 + 0x28);
  lVar8 = (longlong)*(int *)(param_1 + 0x30) * 0x60 + lVar6;
  for (; lVar6 != lVar8; lVar6 = lVar6 + 0x60) {
    *(int *)(lVar6 + 4) = piVar3[*(int *)(lVar6 + 4)];
  }
  lVar6 = local_38;
  local_2c = uVar7;
  if (&local_38 != plVar1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*plVar1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) << 2);
    }
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0x80000000;
    FUN_147e548da(&local_38,&PTR_vftable_14c6e47a0);
    *plVar1 = local_38;
    *(uint *)(param_1 + 0x20) = local_30;
    *(uint *)(param_1 + 0x24) = local_2c;
    lVar6 = 0;
    uVar7 = 0;
  }
  local_28 = *(undefined4 *)param_2;
  uStack_24 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_20 = *(undefined4 *)(param_2 + 1);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_144cad810(param_1 + 0x68,&local_28,*(undefined4 *)(param_1 + 0x20));
  if ((-1 < (int)uVar7) && (lVar6 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar6,(ulonglong)(uVar7 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144cb3b30 FUN_144cb3b30 body=70 status=ok
// SIG undefined FUN_144cb3b30(void)

void FUN_144cb3b30(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < param_2) {
    FUN_144cb71f0(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  FUN_144cad530(param_1 + 0xb8,param_2);
  return;
}



// FUNCTION 144cb3b80 FUN_144cb3b80 body=90 status=ok
// SIG undefined FUN_144cb3b80(void)

void FUN_144cb3b80(longlong param_1,int param_2)

{
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < param_2) {
    FUN_144cb7580(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)param_2);
  }
  if ((*(int *)(param_1 + 0x30) < param_2) || (param_2 < *(int *)(param_1 + 0x30))) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  FUN_144cad4c0(param_1 + 0xb8,param_2);
  return;
}



// FUNCTION 144cb3be0 FUN_144cb3be0 body=159 status=ok
// SIG undefined FUN_144cb3be0(void)

longlong * FUN_144cb3be0(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = iVar1 + param_3;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar2) {
    FUN_144cb7580(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  *(int *)(param_1 + 0x30) = iVar2;
  lVar3 = (longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x28);
  iVar1 = FUN_144cad4b0(param_1 + 0xb8);
  FUN_144cad4c0(param_1 + 0xb8,param_3 + iVar1);
  *param_2 = lVar3;
  param_2[1] = (longlong)param_3 * 0x60 + lVar3;
  return param_2;
}



// FUNCTION 144cb3c80 FUN_144cb3c80 body=128 status=ok
// SIG undefined FUN_144cb3c80(void)

longlong FUN_144cb3c80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x30) + 1;
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar3) {
    FUN_144cb7580(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar3;
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar3 = FUN_144cad4b0(param_1 + 0xb8);
  FUN_144cad4c0(param_1 + 0xb8,iVar3 + 1);
  return (longlong)iVar1 * 0x60 + lVar2;
}



// FUNCTION 144cb3d00 FUN_144cb3d00 body=413 status=ok
// SIG undefined FUN_144cb3d00(void)

int FUN_144cb3d00(longlong param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined4 *puVar29;
  int iVar30;
  longlong lVar31;
  
  lVar3 = *(longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar30 = *(int *)(param_1 + 0x30) + 1;
  lVar31 = (longlong)param_2 * 0x60;
  puVar29 = (undefined4 *)(lVar31 + lVar3);
  uVar4 = *puVar29;
  uVar5 = puVar29[1];
  uVar6 = puVar29[2];
  uVar7 = puVar29[3];
  puVar29 = (undefined4 *)(lVar31 + 0x10 + lVar3);
  uVar8 = *puVar29;
  uVar9 = puVar29[1];
  uVar10 = puVar29[2];
  uVar11 = puVar29[3];
  puVar29 = (undefined4 *)(lVar31 + 0x20 + lVar3);
  uVar12 = *puVar29;
  uVar13 = puVar29[1];
  uVar14 = puVar29[2];
  uVar15 = puVar29[3];
  puVar29 = (undefined4 *)(lVar31 + 0x30 + lVar3);
  uVar16 = *puVar29;
  uVar17 = puVar29[1];
  uVar18 = puVar29[2];
  uVar19 = puVar29[3];
  puVar29 = (undefined4 *)(lVar31 + 0x40 + lVar3);
  uVar20 = *puVar29;
  uVar21 = puVar29[1];
  uVar22 = puVar29[2];
  uVar23 = puVar29[3];
  puVar29 = (undefined4 *)(lVar31 + 0x50 + lVar3);
  uVar24 = *puVar29;
  uVar25 = puVar29[1];
  uVar26 = puVar29[2];
  uVar27 = puVar29[3];
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar30) {
    FUN_144cb71f0(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar30);
  }
  puVar29 = (undefined4 *)
            ((longlong)*(int *)(param_1 + 0x30) * 0x60 + *(longlong *)(param_1 + 0x28));
  if (puVar29 != (undefined4 *)0x0) {
    *puVar29 = uVar4;
    puVar29[1] = uVar5;
    puVar29[2] = uVar6;
    puVar29[3] = uVar7;
    puVar29[4] = uVar8;
    puVar29[5] = uVar9;
    puVar29[6] = uVar10;
    puVar29[7] = uVar11;
    puVar29[8] = uVar12;
    puVar29[9] = uVar13;
    puVar29[10] = uVar14;
    puVar29[0xb] = uVar15;
    puVar29[0xc] = uVar16;
    puVar29[0xd] = uVar17;
    puVar29[0xe] = uVar18;
    puVar29[0xf] = uVar19;
    puVar29[0x10] = uVar20;
    puVar29[0x11] = uVar21;
    puVar29[0x12] = uVar22;
    puVar29[0x13] = uVar23;
    puVar29[0x14] = uVar24;
    puVar29[0x15] = uVar25;
    puVar29[0x16] = uVar26;
    puVar29[0x17] = uVar27;
  }
  *(int *)(param_1 + 0x30) = iVar30;
  FUN_144cad580(param_1 + 0xb8,param_2);
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar29 = (undefined4 *)((longlong)iVar2 * 0x60 + lVar3);
  *puVar29 = param_3;
  puVar29[1] = *(undefined4 *)(lVar3 + 4 + lVar31);
  puVar29[2] = param_2;
  puVar29[3] = *(undefined4 *)(lVar3 + 0xc + lVar31);
  puVar29[4] = *(undefined4 *)(lVar3 + 0x10 + lVar31);
  puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar31);
  uVar28 = puVar1[1];
  *(undefined8 *)(puVar29 + 6) = *puVar1;
  *(undefined8 *)(puVar29 + 8) = uVar28;
  puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar31);
  uVar28 = puVar1[1];
  *(undefined8 *)(puVar29 + 10) = *puVar1;
  *(undefined8 *)(puVar29 + 0xc) = uVar28;
  puVar1 = (undefined8 *)(lVar3 + 0x38 + lVar31);
  uVar28 = puVar1[1];
  *(undefined8 *)(puVar29 + 0xe) = *puVar1;
  *(undefined8 *)(puVar29 + 0x10) = uVar28;
  puVar1 = (undefined8 *)(lVar3 + 0x48 + lVar31);
  uVar28 = puVar1[1];
  *(undefined8 *)(puVar29 + 0x12) = *puVar1;
  *(undefined8 *)(puVar29 + 0x14) = uVar28;
  *(undefined8 *)(puVar29 + 0x16) = *(undefined8 *)(lVar3 + 0x58 + lVar31);
  *(int *)(lVar3 + 0xc + lVar31) = iVar2;
  *(int *)((longlong)(int)puVar29[3] * 0x60 + 8 + *(longlong *)(param_1 + 0x28)) = iVar2;
  return iVar2;
}



// FUNCTION 144cb3ea0 FUN_144cb3ea0 body=702 status=ok
// SIG undefined FUN_144cb3ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144cb3ea0(longlong param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  uint uVar19;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar14 = (int *)*param_2;
  uVar15 = (uint)(param_2[1] - (longlong)piVar14 >> 2);
  uVar19 = uVar15 + 1;
  if ((int)uVar19 < 1) {
    puVar9 = (undefined4 *)0x0;
    _DAT_00000000 = 0xffffffff;
    uVar19 = 0x80000000;
    puVar13 = (undefined4 *)&DAT_00000004;
  }
  else {
    puVar9 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47c0 + 8))
                       (&PTR_vftable_14c6e47c0,(longlong)(int)uVar19 << 2);
    *puVar9 = 0xffffffff;
    puVar13 = puVar9 + 1;
    if (0 < (int)uVar15) {
      local_48 = (undefined8 *)
                 (**(code **)(PTR_vftable_14c6e47a0 + 8))
                           (&PTR_vftable_14c6e47a0,(longlong)(int)uVar15 * 0x60);
      local_40 = uVar15;
      local_3c = uVar15;
      goto LAB_144cb3f6d;
    }
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_3c = 0x80000000;
LAB_144cb3f6d:
  lVar16 = (longlong)(int)uVar15;
  lVar4 = *(longlong *)(param_1 + 0x28);
  ppuVar1 = (undefined8 **)(param_1 + 0x28);
  iVar18 = 0;
  puVar11 = local_48;
  if (0 < lVar16) {
    do {
      iVar3 = *piVar14;
      piVar14 = piVar14 + 1;
      puVar13[iVar3] = iVar18;
      lVar10 = (longlong)iVar3 * 0x60;
      iVar18 = iVar18 + 1;
      uVar8 = ((undefined8 *)(lVar10 + lVar4))[1];
      *puVar11 = *(undefined8 *)(lVar10 + lVar4);
      puVar11[1] = uVar8;
      puVar17 = (undefined8 *)(lVar10 + 0x10 + lVar4);
      uVar8 = puVar17[1];
      puVar11[2] = *puVar17;
      puVar11[3] = uVar8;
      puVar17 = (undefined8 *)(lVar10 + 0x20 + lVar4);
      uVar8 = puVar17[1];
      puVar11[4] = *puVar17;
      puVar11[5] = uVar8;
      puVar17 = (undefined8 *)(lVar10 + 0x30 + lVar4);
      uVar8 = puVar17[1];
      puVar11[6] = *puVar17;
      puVar11[7] = uVar8;
      puVar2 = (undefined4 *)(lVar10 + 0x40 + lVar4);
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      *(undefined4 *)(puVar11 + 8) = *puVar2;
      *(undefined4 *)((longlong)puVar11 + 0x44) = uVar5;
      *(undefined4 *)(puVar11 + 9) = uVar6;
      *(undefined4 *)((longlong)puVar11 + 0x4c) = uVar7;
      puVar17 = (undefined8 *)(lVar10 + 0x50 + lVar4);
      uVar8 = puVar17[1];
      puVar11[10] = *puVar17;
      puVar11[0xb] = uVar8;
      lVar16 = lVar16 + -1;
      puVar11 = puVar11 + 0xc;
    } while (lVar16 != 0);
  }
  puVar11 = local_48;
  uVar15 = local_3c;
  if (&local_48 != ppuVar1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*ppuVar1 != (undefined8 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*ppuVar1,
                 (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) * 0x60);
    }
    puVar11 = (undefined8 *)0x0;
    *(undefined4 *)(param_1 + 0x34) = 0x80000000;
    *ppuVar1 = (undefined8 *)0x0;
    uVar15 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_147e5493c(&local_48,&PTR_vftable_14c6e47a0);
    *ppuVar1 = local_48;
    *(uint *)(param_1 + 0x30) = local_40;
    *(uint *)(param_1 + 0x34) = local_3c;
  }
  if ((-1 < (int)uVar15) && (puVar11 != (undefined8 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar11,(ulonglong)(uVar15 & 0x7fffffff) * 0x60);
  }
  puVar11 = *ppuVar1;
  puVar17 = puVar11 + (longlong)*(int *)(param_1 + 0x30) * 0xc;
  for (; puVar11 != puVar17; puVar11 = puVar11 + 0xc) {
    *(undefined4 *)(puVar11 + 1) = puVar13[*(int *)(puVar11 + 1)];
    *(undefined4 *)((longlong)puVar11 + 0xc) = puVar13[*(int *)((longlong)puVar11 + 0xc)];
    *(undefined4 *)(puVar11 + 2) = puVar13[*(int *)(puVar11 + 2)];
  }
  piVar12 = *(int **)(param_1 + 0x18);
  piVar14 = piVar12 + *(int *)(param_1 + 0x20);
  for (; piVar12 != piVar14; piVar12 = piVar12 + 1) {
    *piVar12 = puVar13[*piVar12];
  }
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_30 = *(undefined4 *)(param_2 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
  FUN_144cad360(param_1 + 0xb8,&local_38);
  if ((-1 < (int)uVar19) && (puVar9 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,puVar9,(ulonglong)(uVar19 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144cb4160 FUN_144cb4160 body=40 status=ok
// SIG undefined FUN_144cb4160(void)

void FUN_144cb4160(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  FUN_14502ceb0(param_1 + 0x38,&local_18);
  return;
}



// FUNCTION 144cb4190 FUN_144cb4190 body=196 status=ok
// SIG undefined FUN_144cb4190(void)

longlong * FUN_144cb4190(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = (ulonglong)(param_3 & 0x3fffffff);
  if (param_3 >> 0x1e != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    lVar5 = uVar2 * 0x60;
    lVar3 = ((longlong *)(lVar5 + lVar4))[1];
    *param_2 = *(longlong *)(lVar5 + lVar4);
    param_2[1] = lVar3;
    plVar1 = (longlong *)(lVar5 + 0x10 + lVar4);
    lVar3 = plVar1[1];
    param_2[2] = *plVar1;
    param_2[3] = lVar3;
    plVar1 = (longlong *)(lVar5 + 0x20 + lVar4);
    lVar3 = plVar1[1];
    param_2[4] = *plVar1;
    param_2[5] = lVar3;
    plVar1 = (longlong *)(lVar5 + 0x30 + lVar4);
    lVar3 = plVar1[1];
    param_2[6] = *plVar1;
    param_2[7] = lVar3;
    plVar1 = (longlong *)(lVar5 + 0x40 + lVar4);
    lVar3 = plVar1[1];
    param_2[8] = *plVar1;
    param_2[9] = lVar3;
    plVar1 = (longlong *)(lVar5 + 0x50 + lVar4);
    lVar4 = plVar1[1];
    param_2[10] = *plVar1;
    param_2[0xb] = lVar4;
    return param_2;
  }
  lVar4 = *(longlong *)(param_1 + 0x38) + uVar2 * 0xc;
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + uVar2 * 0xc);
  *param_2 = lVar3;
  lVar3 = lVar3 >> 0x3f;
  param_2[1] = lVar3;
  param_2[2] = lVar3;
  lVar3 = (longlong)*(int *)(lVar4 + 4);
  param_2[3] = lVar3;
  lVar3 = lVar3 >> 0x3f;
  param_2[4] = lVar3;
  param_2[5] = lVar3;
  lVar4 = (longlong)*(int *)(lVar4 + 8);
  param_2[6] = lVar4;
  lVar4 = lVar4 >> 0x3f;
  param_2[7] = lVar4;
  param_2[8] = lVar4;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[9] = 1;
  return param_2;
}



// FUNCTION 144cb4260 FUN_144cb4260 body=533 status=ok
// SIG undefined FUN_144cb4260(void)

void FUN_144cb4260(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_2 + 0x60) + *(int *)(param_2 + 0x50) + *(int *)(param_2 + 0x40) != 0) ||
      (*(int *)(param_2 + 0x20) != 0)) || (*(int *)(param_2 + 0x30) != 0)) {
    if (((*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x40) == 0) &&
        (*(int *)(param_1 + 0x20) == 0)) && (*(int *)(param_1 + 0x30) == 0)) {
      FUN_144cad710(param_1 + 0x68,param_2 + 0x68);
      FUN_144cad1f0(param_1 + 0xb8,param_2 + 0xb8);
      plVar1 = (longlong *)(param_2 + 0x18);
      plVar2 = (longlong *)(param_1 + 0x18);
      if (plVar1 != plVar2) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*plVar2 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar2,
                     (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) << 2);
        }
        *plVar2 = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0x80000000;
        FUN_147e548da(plVar1,&PTR_vftable_14c6e47a0);
        *plVar2 = *plVar1;
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
        *plVar1 = 0;
        *(undefined8 *)(param_2 + 0x20) = 0;
      }
      plVar1 = (longlong *)(param_2 + 0x28);
      plVar2 = (longlong *)(param_1 + 0x28);
      *(undefined4 *)(param_2 + 0x20) = 0;
      if (plVar1 != plVar2) {
        *(undefined4 *)(param_1 + 0x30) = 0;
        if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*plVar2 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar2,
                     (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) * 0x60);
        }
        *plVar2 = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
        *(undefined4 *)(param_1 + 0x34) = 0x80000000;
        FUN_147e5493c(plVar1,&PTR_vftable_14c6e47a0);
        *plVar2 = *plVar1;
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
        *plVar1 = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
      }
      *(undefined4 *)(param_2 + 0x30) = 0;
      FUN_144cb3570(param_1 + 0x38,param_2 + 0x38);
      FUN_14502c690(param_2 + 0x38);
      FUN_144cad910(param_1 + 0x68,param_2 + 0x68);
      FUN_144cad990(param_2 + 0x68,0);
      FUN_144cad440(param_1 + 0xb8,param_2 + 0xb8);
      FUN_144cad4c0(param_2 + 0xb8,0);
      return;
    }
    FUN_144cb4480();
  }
  return;
}



// FUNCTION 144cb4480 FUN_144cb4480 body=752 status=ok
// SIG undefined FUN_144cb4480(void)

void FUN_144cb4480(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar23;
  int iVar24;
  int local_48 [8];
  ulonglong uVar22;
  
  if (((*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x40) == 0) &&
      (*(int *)(param_1 + 0x20) == 0)) && (*(int *)(param_1 + 0x30) == 0)) {
    FUN_144cad710(param_1 + 0x68,param_2 + 0x68);
    FUN_144cad1f0(param_1 + 0xb8,param_2 + 0xb8);
  }
  iVar6 = *(int *)(param_1 + 0x20);
  iVar7 = *(int *)(param_1 + 0x30);
  FUN_14502c0a0(param_1 + 0x38,local_48);
  iVar8 = *(int *)(param_1 + 0x20);
  lVar23 = *(longlong *)(param_2 + 0x18);
  iVar24 = *(int *)(param_2 + 0x20) + iVar8;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar24) {
    FUN_144cb7480(param_1 + 0x18,&PTR_vftable_14c6e47a0);
  }
  uVar19 = 0;
  *(int *)(param_1 + 0x20) = iVar24;
  uVar21 = 0;
  uVar17 = *(uint *)(param_2 + 0x20);
  lVar18 = *(longlong *)(param_1 + 0x18) + (longlong)iVar8 * 4;
  if ((0 < (int)uVar17) && (7 < uVar17)) {
    uVar15 = uVar17 & 0x80000007;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
    }
    lVar14 = lVar23 - lVar18;
    piVar16 = (int *)(lVar18 + 8);
    uVar22 = uVar19;
    do {
      piVar1 = (int *)(lVar14 + -8 + (longlong)piVar16);
      iVar8 = *piVar1;
      iVar24 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      uVar21 = (int)uVar22 + 8;
      uVar22 = (ulonglong)uVar21;
      uVar19 = uVar19 + 8;
      piVar16[-2] = iVar8;
      piVar16[-1] = iVar24;
      *piVar16 = iVar9;
      piVar16[1] = iVar10;
      uVar4 = *(undefined8 *)piVar16;
      piVar16[-2] = iVar8 + iVar7;
      piVar16[-1] = iVar24 + iVar7;
      *piVar16 = (int)uVar4 + iVar7;
      piVar16[1] = (int)((ulonglong)uVar4 >> 0x20) + iVar7;
      auVar5 = *(undefined1 (*) [16])(lVar14 + -0x18 + (longlong)(piVar16 + 8));
      *(undefined1 (*) [16])(piVar16 + 2) = auVar5;
      uVar4 = *(undefined8 *)(piVar16 + 4);
      piVar16[2] = auVar5._0_4_ + iVar7;
      piVar16[3] = auVar5._4_4_ + iVar7;
      piVar16[4] = (int)uVar4 + iVar7;
      piVar16[5] = (int)((ulonglong)uVar4 >> 0x20) + iVar7;
      piVar16 = piVar16 + 8;
    } while ((longlong)uVar19 < (longlong)(int)(uVar17 - uVar15));
  }
  lVar14 = (longlong)(int)uVar21;
  if (lVar14 < (int)uVar17) {
    lVar20 = (int)uVar17 - lVar14;
    piVar16 = (int *)(lVar18 + lVar14 * 4);
    do {
      *piVar16 = *(int *)((longlong)piVar16 + (lVar23 - lVar18)) + iVar7;
      lVar20 = lVar20 + -1;
      piVar16 = piVar16 + 1;
    } while (lVar20 != 0);
  }
  iVar8 = *(int *)(param_1 + 0x30);
  iVar24 = *(int *)(param_2 + 0x30) + iVar8;
  lVar23 = *(longlong *)(param_2 + 0x28);
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar24) {
    FUN_144cb7580(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar24);
  }
  *(int *)(param_1 + 0x30) = iVar24;
  lVar14 = (longlong)*(int *)(param_2 + 0x30);
  lVar18 = (longlong)iVar8 * 0x60 + *(longlong *)(param_1 + 0x28);
  if (0 < lVar14) {
    piVar16 = (int *)(lVar18 + 8);
    lVar23 = lVar23 - lVar18;
    do {
      puVar2 = (undefined8 *)(lVar23 + -8 + (longlong)piVar16);
      uVar4 = puVar2[1];
      puVar3 = (undefined8 *)(lVar23 + 8 + (longlong)piVar16);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      *(undefined8 *)(piVar16 + -2) = *puVar2;
      *(undefined8 *)piVar16 = uVar4;
      puVar2 = (undefined8 *)(lVar23 + 0x18 + (longlong)piVar16);
      uVar4 = *puVar2;
      uVar13 = puVar2[1];
      *(undefined8 *)(piVar16 + 2) = uVar11;
      *(undefined8 *)(piVar16 + 4) = uVar12;
      puVar2 = (undefined8 *)(lVar23 + 0x28 + (longlong)piVar16);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      *(undefined8 *)(piVar16 + 6) = uVar4;
      *(undefined8 *)(piVar16 + 8) = uVar13;
      puVar2 = (undefined8 *)(lVar23 + 0x38 + (longlong)piVar16);
      uVar4 = *puVar2;
      uVar13 = puVar2[1];
      *(undefined8 *)(piVar16 + 10) = uVar11;
      *(undefined8 *)(piVar16 + 0xc) = uVar12;
      puVar2 = (undefined8 *)(lVar23 + 0x48 + (longlong)piVar16);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      *(undefined8 *)(piVar16 + 0xe) = uVar4;
      *(undefined8 *)(piVar16 + 0x10) = uVar13;
      *(undefined8 *)(piVar16 + 0x12) = uVar11;
      *(undefined8 *)(piVar16 + 0x14) = uVar12;
      uVar17 = (uint)piVar16[-2] >> 0x1e;
      iVar8 = local_48[uVar17];
      piVar16[-1] = piVar16[-1] + iVar6;
      *piVar16 = *piVar16 + iVar7;
      piVar16[1] = piVar16[1] + iVar7;
      piVar16[-2] = iVar8 + (piVar16[-2] & 0x3fffffffU) | uVar17 << 0x1e;
      if (-1 < piVar16[2]) {
        piVar16[2] = piVar16[2] + iVar7;
      }
      piVar16 = piVar16 + 0x18;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  FUN_144cad910(param_1 + 0x68,param_2 + 0x68);
  FUN_144cad440(param_1 + 0xb8,param_2 + 0xb8);
  return;
}



// FUNCTION 144cb4770 FUN_144cb4770 body=145 status=ok
// SIG undefined FUN_144cb4770(void)

void FUN_144cb4770(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 local_res8;
  
  local_res8 = 0x20;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"StridedMeshFaceOverlay");
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_2;
    *puVar1 = hkaiNavMeshGeneration::StridedMeshFaceOverlay<int>::vftable;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = 0x80000000;
  }
  FUN_144cad790(param_1 + 0x68,4,puVar1);
  return;
}



// FUNCTION 144cb4810 FUN_144cb4810 body=80 status=ok
// SIG undefined FUN_144cb4810(void)

longlong * FUN_144cb4810(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_144cad800(param_1 + 0x68,4);
  iVar1 = *(int *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  lVar3 = (longlong)(iVar1 * param_3);
  *param_2 = lVar2 + lVar3 * 4;
  param_2[1] = lVar2 + (lVar3 + iVar1) * 4;
  return param_2;
}



// FUNCTION 144cb4860 FUN_144cb4860 body=80 status=ok
// SIG undefined FUN_144cb4860(void)

longlong * FUN_144cb4860(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_144cad7f0(param_1 + 0x68,4);
  iVar1 = *(int *)(lVar2 + 8);
  lVar2 = *(longlong *)(lVar2 + 0x10);
  lVar3 = (longlong)(iVar1 * param_3);
  *param_2 = lVar2 + lVar3 * 4;
  param_2[1] = lVar2 + (lVar3 + iVar1) * 4;
  return param_2;
}



// FUNCTION 144cb48b0 FUN_144cb48b0 body=107 status=ok
// SIG undefined FUN_144cb48b0(void)

void FUN_144cb48b0(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = FUN_144cad7f0(param_1 + 0x68,4);
  puVar2 = (undefined4 *)
           (*(longlong *)(lVar1 + 0x10) + (longlong)(param_2 * *(int *)(lVar1 + 8)) * 4);
  iVar3 = (int)(param_3[1] - *param_3 >> 2);
  lVar1 = (longlong)iVar3;
  if (0 < iVar3) {
    lVar4 = *param_3 - (longlong)puVar2;
    do {
      *puVar2 = *(undefined4 *)(lVar4 + (longlong)puVar2);
      puVar2 = puVar2 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144cb4920 FUN_144cb4920 body=51 status=ok
// SIG undefined FUN_144cb4920(void)

longlong * FUN_144cb4920(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = FUN_144cad800(param_1 + 0x68,4);
  lVar2 = *(longlong *)(lVar3 + 0x10);
  iVar1 = *(int *)(lVar3 + 0x18);
  *param_2 = lVar2;
  param_2[1] = lVar2 + (longlong)iVar1 * 4;
  return param_2;
}



// FUNCTION 144cb4960 FUN_144cb4960 body=14 status=ok
// SIG undefined FUN_144cb4960(void)

void FUN_144cb4960(longlong param_1)

{
  FUN_144cad800(param_1 + 0x68,4);
  return;
}



// FUNCTION 144cb4970 FUN_144cb4970 body=26 status=ok
// SIG undefined FUN_144cb4970(void)

undefined4 FUN_144cb4970(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad800(param_1 + 0x68,4);
  return *(undefined4 *)(lVar1 + 8);
}



// FUNCTION 144cb4990 FUN_144cb4990 body=133 status=ok
// SIG undefined FUN_144cb4990(void)

void FUN_144cb4990(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshFaceOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = hkaiNavMeshGeneration::
              ScalarMeshFaceOverlay<hkaiClipper::BiplanarInnerTypes::ImplicitPlane<24>_>::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  FUN_144cad790(param_1 + 0x68,5,puVar2);
  return;
}



// FUNCTION 144cb4a20 FUN_144cb4a20 body=14 status=ok
// SIG undefined FUN_144cb4a20(void)

void FUN_144cb4a20(longlong param_1)

{
  FUN_144cad7c0(param_1 + 0x68,5);
  return;
}



// FUNCTION 144cb4a30 FUN_144cb4a30 body=76 status=ok
// SIG undefined FUN_144cb4a30(void)

void FUN_144cb4a30(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  lVar5 = FUN_144cad7f0(param_1 + 0x68,5);
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  lVar5 = *(longlong *)(lVar5 + 8);
  puVar1 = (undefined8 *)(lVar5 + lVar6 * 0x28);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  uVar2 = param_3[4];
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6 * 0x28);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar5 + 0x20 + lVar6 * 0x28) = uVar2;
  return;
}



// FUNCTION 144cb4a80 FUN_144cb4a80 body=82 status=ok
// SIG undefined FUN_144cb4a80(void)

undefined8 * FUN_144cb4a80(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_3;
  lVar6 = FUN_144cad800(param_1 + 0x68,5);
  lVar6 = *(longlong *)(lVar6 + 8);
  puVar1 = (undefined8 *)(lVar6 + lVar7 * 0x28);
  uVar3 = puVar1[1];
  puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar7 * 0x28);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  uVar3 = *(undefined8 *)(lVar6 + 0x20 + lVar7 * 0x28);
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  param_2[4] = uVar3;
  return param_2;
}



// FUNCTION 144cb4ae0 FUN_144cb4ae0 body=133 status=ok
// SIG undefined FUN_144cb4ae0(void)

void FUN_144cb4ae0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshFaceOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = hkaiNavMeshGeneration::ScalarMeshFaceOverlay<hkFpMath::FpUint<23>_>::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  FUN_144cad790(param_1 + 0x68,3,puVar2);
  return;
}



// FUNCTION 144cb4b70 FUN_144cb4b70 body=14 status=ok
// SIG undefined FUN_144cb4b70(void)

void FUN_144cb4b70(longlong param_1)

{
  FUN_144cad7c0(param_1 + 0x68,3);
  return;
}



// FUNCTION 144cb4b80 FUN_144cb4b80 body=48 status=ok
// SIG undefined FUN_144cb4b80(void)

void FUN_144cb4b80(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad7f0(param_1 + 0x68,3);
  *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 144cb4bb0 FUN_144cb4bb0 body=53 status=ok
// SIG undefined FUN_144cb4bb0(void)

undefined4 * FUN_144cb4bb0(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad800(param_1 + 0x68,3);
  *param_2 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)param_3 * 4);
  return param_2;
}



// FUNCTION 144cb4bf0 FUN_144cb4bf0 body=133 status=ok
// SIG undefined FUN_144cb4bf0(void)

void FUN_144cb4bf0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshFaceOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = hkaiNavMeshGeneration::
              ScalarMeshFaceOverlay<hkaiNavMeshGeneration::Simplification::HorizontalLimits>::
              vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  FUN_144cad790(param_1 + 0x68,7,puVar2);
  return;
}



// FUNCTION 144cb4c80 FUN_144cb4c80 body=68 status=ok
// SIG undefined FUN_144cb4c80(void)

void FUN_144cb4c80(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad7f0(param_1 + 0x68,7);
  lVar1 = *(longlong *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + (longlong)param_2 * 0xc) = *param_3;
  *(undefined4 *)(lVar1 + (longlong)param_2 * 0xc + 8) = *(undefined4 *)(param_3 + 1);
  return;
}



// FUNCTION 144cb4cd0 FUN_144cb4cd0 body=70 status=ok
// SIG undefined FUN_144cb4cd0(void)

undefined8 * FUN_144cb4cd0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144cad800(param_1 + 0x68,7);
  uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 8 + (longlong)param_3 * 0xc);
  *param_2 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)param_3 * 0xc);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 144cb4d20 FUN_144cb4d20 body=14 status=ok
// SIG undefined FUN_144cb4d20(void)

void FUN_144cb4d20(longlong param_1)

{
  FUN_144cad780(param_1 + 0x68,8);
  return;
}



// FUNCTION 144cb4d30 FUN_144cb4d30 body=168 status=ok
// SIG undefined FUN_144cb4d30(void)

void FUN_144cb4d30(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  local_res8 = 0x18;
  plVar1 = (longlong *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(plVar1,"ScalarMeshFaceOverlay");
  }
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    plVar1[2] = 0;
    *plVar1 = (longlong)hkaiNavMeshGeneration::ScalarMeshFaceOverlay<hkFpMath::FpUint<23>_>::vftable
    ;
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0x80000000;
    plVar2 = plVar1;
  }
  if (*(code **)(*plVar2 + 0x50) == FUN_144cb1960) {
    FUN_144cb1960();
  }
  else {
    (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(param_1 + 0x20));
  }
  FUN_144cad790(param_1 + 0x68,8,plVar2);
  return;
}



// FUNCTION 144cb4de0 FUN_144cb4de0 body=14 status=ok
// SIG undefined FUN_144cb4de0(void)

void FUN_144cb4de0(longlong param_1)

{
  FUN_144cad7c0(param_1 + 0x68,8);
  return;
}



// FUNCTION 144cb4df0 FUN_144cb4df0 body=48 status=ok
// SIG undefined FUN_144cb4df0(void)

void FUN_144cb4df0(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad7f0(param_1 + 0x68,8);
  *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 144cb4e20 FUN_144cb4e20 body=53 status=ok
// SIG undefined FUN_144cb4e20(void)

undefined4 * FUN_144cb4e20(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad800(param_1 + 0x68,8);
  *param_2 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)param_3 * 4);
  return param_2;
}



// FUNCTION 144cb4e60 FUN_144cb4e60 body=133 status=ok
// SIG undefined FUN_144cb4e60(void)

void FUN_144cb4e60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = 0x18;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar1,"ScalarMeshEdgeOverlay");
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = hkaiNavMeshGeneration::
              ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::InputEdgeEndpoints>::vftable;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x14) = 0x80000000;
    puVar2 = puVar1;
  }
  FUN_144cad2e0(param_1 + 0xb8,0,puVar2);
  return;
}



// FUNCTION 144cb4ef0 FUN_144cb4ef0 body=97 status=ok
// SIG undefined FUN_144cb4ef0(void)

void FUN_144cb4ef0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  lVar1 = FUN_144cad340(param_1 + 0xb8,0);
  lVar1 = *(longlong *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + lVar2 * 0x18) = *param_3;
  *(undefined8 *)(lVar1 + 0xc + lVar2 * 0x18) = *param_4;
  lVar1 = lVar1 + lVar2 * 0x18;
  *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_4 + 1);
  return;
}



// FUNCTION 144cb4f60 FUN_144cb4f60 body=120 status=ok
// SIG undefined FUN_144cb4f60(void)

undefined8 FUN_144cb4f60(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_144cad350(param_1 + 0xb8,0);
  piVar1 = (int *)(*(longlong *)(lVar2 + 8) + (longlong)param_2 * 0x18);
  if ((*piVar1 == 0 &&
       (*(int *)(*(longlong *)(lVar2 + 8) + 8 + (longlong)param_2 * 0x18) == 0 && piVar1[1] == 0))
     && (piVar1[3] == 0 && (piVar1[5] == 0 && piVar1[4] == 0))) {
    return 0;
  }
  return 1;
}



// FUNCTION 144cb4fe0 FUN_144cb4fe0 body=96 status=ok
// SIG undefined FUN_144cb4fe0(void)

void FUN_144cb4fe0(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_144cad350(param_1 + 0xb8,0);
  lVar1 = *(longlong *)(lVar2 + 8) + (longlong)param_2 * 0x18;
  *param_3 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + (longlong)param_2 * 0x18);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar1 + 8);
  *param_4 = *(undefined8 *)(lVar1 + 0xc);
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar1 + 0x14);
  return;
}



// FUNCTION 144cb5040 FUN_144cb5040 body=143 status=ok
// SIG undefined FUN_144cb5040(void)

void FUN_144cb5040(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = 0x20;
  puVar1 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
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
  FUN_144cad2e0(param_1 + 0xb8,1,puVar2);
  return;
}



// FUNCTION 144cb50d0 FUN_144cb50d0 body=17 status=ok
// SIG undefined FUN_144cb50d0(void)

void FUN_144cb50d0(longlong param_1)

{
  FUN_144cad310(param_1 + 0xb8,1);
  return;
}



// FUNCTION 144cb50f0 FUN_144cb50f0 body=93 status=ok
// SIG undefined FUN_144cb50f0(void)

void FUN_144cb50f0(longlong param_1,int param_2,byte param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = FUN_144cad340(param_1 + 0xb8,1);
  uVar3 = 1 << ((byte)param_2 & 0x1f);
  puVar1 = (uint *)(*(longlong *)(lVar2 + 8) + ((longlong)param_2 >> 5) * 4);
  *puVar1 = -(uint)param_3 & uVar3 | ~uVar3 & *puVar1;
  return;
}



// FUNCTION 144cb5150 FUN_144cb5150 body=57 status=ok
// SIG undefined FUN_144cb5150(void)

uint FUN_144cb5150(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad350(param_1 + 0xb8,1);
  return *(uint *)(*(longlong *)(lVar1 + 8) + ((longlong)param_2 >> 5) * 4) >>
         ((byte)param_2 & 0x1f) & 0xffffff01;
}



// FUNCTION 144cb5190 FUN_144cb5190 body=17 status=ok
// SIG undefined FUN_144cb5190(void)

void FUN_144cb5190(longlong param_1)

{
  FUN_144cad2d0(param_1 + 0xb8,2);
  return;
}



// FUNCTION 144cb51b0 FUN_144cb51b0 body=171 status=ok
// SIG undefined FUN_144cb51b0(void)

void FUN_144cb51b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  local_res8 = 0x18;
  plVar1 = (longlong *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(plVar1,"ScalarMeshEdgeOverlay");
  }
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    plVar1[2] = 0;
    *plVar1 = (longlong)
              hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::XyPlane>::vftable;
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0x80000000;
    plVar2 = plVar1;
  }
  if (*(code **)(*plVar2 + 0x50) == FUN_144caa5b0) {
    FUN_144caa5b0();
  }
  else {
    (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(param_1 + 0x30));
  }
  FUN_144cad2e0(param_1 + 0xb8,2,plVar2);
  return;
}



// FUNCTION 144cb5260 FUN_144cb5260 body=17 status=ok
// SIG undefined FUN_144cb5260(void)

void FUN_144cb5260(longlong param_1)

{
  FUN_144cad340(param_1 + 0xb8,2);
  return;
}



// FUNCTION 144cb5280 FUN_144cb5280 body=61 status=ok
// SIG undefined FUN_144cb5280(void)

void FUN_144cb5280(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_144cad340(param_1 + 0xb8,2);
  uVar2 = param_3[1];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)param_2 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  return;
}



// FUNCTION 144cb52c0 FUN_144cb52c0 body=104 status=ok
// SIG undefined FUN_144cb52c0(void)

undefined1 FUN_144cb52c0(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = FUN_144cad2d0(param_1 + 0xb8,2);
  if (cVar2 != '\0') {
    lVar1 = FUN_144cad350(param_1 + 0xb8,2);
    piVar3 = (int *)((longlong)param_2 * 0x10 + *(longlong *)(lVar1 + 8));
    if (*piVar3 != 0 || piVar3[1] != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144cb5330 FUN_144cb5330 body=46 status=ok
// SIG undefined FUN_144cb5330(void)

longlong FUN_144cb5330(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad350(param_1 + 0xb8,2);
  return (longlong)param_2 * 0x10 + *(longlong *)(lVar1 + 8);
}



// FUNCTION 144cb5360 FUN_144cb5360 body=17 status=ok
// SIG undefined FUN_144cb5360(void)

void FUN_144cb5360(longlong param_1)

{
  FUN_144cad2d0(param_1 + 0xb8,3);
  return;
}



// FUNCTION 144cb5380 FUN_144cb5380 body=171 status=ok
// SIG undefined FUN_144cb5380(void)

void FUN_144cb5380(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_res8;
  
  local_res8 = 0x18;
  plVar1 = (longlong *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(plVar1,"ScalarMeshEdgeOverlay");
  }
  plVar2 = (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    plVar1[2] = 0;
    *plVar1 = (longlong)hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkFpMath::FpUint<23>_>::vftable
    ;
    plVar1[1] = 0;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)((longlong)plVar1 + 0x14) = 0x80000000;
    plVar2 = plVar1;
  }
  if (*(code **)(*plVar2 + 0x50) == FUN_144cb3280) {
    FUN_144cb3280();
  }
  else {
    (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(param_1 + 0x30));
  }
  FUN_144cad2e0(param_1 + 0xb8,3,plVar2);
  return;
}



// FUNCTION 144cb5430 FUN_144cb5430 body=17 status=ok
// SIG undefined FUN_144cb5430(void)

void FUN_144cb5430(longlong param_1)

{
  FUN_144cad310(param_1 + 0xb8,3);
  return;
}



// FUNCTION 144cb5450 FUN_144cb5450 body=51 status=ok
// SIG undefined FUN_144cb5450(void)

void FUN_144cb5450(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad340(param_1 + 0xb8,3);
  *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)param_2 * 4) = param_3;
  return;
}



// FUNCTION 144cb5490 FUN_144cb5490 body=56 status=ok
// SIG undefined FUN_144cb5490(void)

undefined4 * FUN_144cb5490(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_144cad350(param_1 + 0xb8,3);
  *param_2 = *(undefined4 *)(*(longlong *)(lVar1 + 8) + (longlong)param_3 * 4);
  return param_2;
}



// FUNCTION 144cb54d0 FUN_144cb54d0 body=989 status=ok
// SIG undefined FUN_144cb54d0(void)

void FUN_144cb54d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int local_res20;
  undefined8 local_b0;
  char *local_a8;
  ulonglong local_a0;
  int local_98;
  uint local_94;
  longlong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong lStack_70;
  ulonglong local_68;
  ulonglong local_58;
  longlong lStack_50;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  local_res20 = 0;
  local_98 = 0;
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_a8 = (char *)(lVar8 + 0x114);
  if (*local_a8 == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar14 = (longlong *)(lVar8 + 0xf0);
  lVar8 = *plVar14;
  if (lVar8 == 0) {
    if (*local_a8 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *plVar14 = lVar8;
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x3d0) + 0x10);
  lVar10 = 0;
  if (*(longlong *)(lVar8 + 8) == 0) {
    lVar10 = lVar8;
  }
  local_80 = (longlong)(int)uVar1 * 4;
  local_90 = lVar10;
  local_68 = local_80;
  local_58 = local_80;
  if (lVar10 == 0) {
    local_a0 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar8 >> 8),1),&local_58,0x40);
  }
  else {
    local_b0 = local_80 + 0x3f & 0xffffffffffffffc0;
    if (local_b0 <= *(ulonglong *)(lVar10 + 0x28)) {
      local_a0 = *(ulonglong *)(lVar10 + 0x38);
      if (local_a0 + local_b0 <= *(ulonglong *)(lVar10 + 0x40)) {
        *(ulonglong *)(lVar10 + 0x38) = local_a0 + local_b0;
        goto LAB_144cb55d1;
      }
    }
    local_a0 = FUN_144b454a0(lVar10,&local_b0);
  }
LAB_144cb55d1:
  local_94 = uVar1 | 0x80000000;
  iVar2 = *(int *)(param_1 + 0x30);
  local_88 = local_a0;
  if ((int)(uVar1 & 0x7fffffff) < iVar2) {
    FUN_141807aa8(&local_a0,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    local_68 = local_80;
    local_res20 = local_98;
    lVar10 = local_90;
  }
  uVar6 = local_88;
  uVar1 = local_94;
  uVar5 = local_a0;
  pcVar4 = local_a8;
  if ((local_res20 < iVar2) || (iVar2 < local_res20)) {
    local_res20 = iVar2;
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  local_98 = 0;
  if (*local_a8 == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *plVar14;
  if (lVar8 == 0) {
    if (*pcVar4 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *plVar14 = lVar8;
  }
  lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x3d0) + 0x10);
  lVar11 = 0;
  if (*(longlong *)(lVar8 + 8) == 0) {
    lVar11 = lVar8;
  }
  local_a8 = (char *)((longlong)(int)uVar3 * 4);
  local_90 = lVar11;
  local_80 = (ulonglong)local_a8;
  local_78 = (ulonglong)local_a8;
  if (lVar11 == 0) {
    uVar13 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar8 >> 8),1),&local_78,0x40);
  }
  else {
    local_58 = (longlong)local_a8 + 0x3fU & 0xffffffffffffffc0;
    if (local_58 <= *(ulonglong *)(lVar11 + 0x28)) {
      uVar13 = *(ulonglong *)(lVar11 + 0x38);
      if (uVar13 + local_58 <= *(ulonglong *)(lVar11 + 0x40)) {
        *(ulonglong *)(lVar11 + 0x38) = uVar13 + local_58;
        goto LAB_144cb56eb;
      }
    }
    uVar13 = FUN_144b454a0(lVar11,&local_58);
  }
LAB_144cb56eb:
  local_94 = uVar3 | 0x80000000;
  local_b0 = CONCAT44(local_b0._4_4_,uVar3) | 0x80000000;
  iVar2 = *(int *)(param_1 + 0x20);
  local_a0 = uVar13;
  local_88 = uVar13;
  if ((int)(uVar3 & 0x7fffffff) < iVar2) {
    FUN_141807aa8(&local_a0,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    local_a8 = (char *)local_80;
    local_b0 = CONCAT44(local_b0._4_4_,local_94);
    lVar11 = local_90;
    iVar9 = local_98;
  }
  else {
    iVar9 = 0;
  }
  uVar7 = local_88;
  uVar13 = local_a0;
  if ((iVar9 < iVar2) || (iVar2 < iVar9)) {
    iVar9 = iVar2;
  }
  lStack_50 = local_a0 + (longlong)iVar9 * 4;
  lStack_70 = uVar5 + (longlong)local_res20 * 4;
  local_78 = uVar5;
  local_58 = local_a0;
  FUN_144cb58b0(param_1,param_2,param_3,&local_78,&local_58);
  if (lVar11 == 0) {
    (*DAT_14c787678)(1,uVar7);
  }
  else {
    uVar12 = (longlong)local_a8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar11 + 0x28) < uVar12) || (uVar7 + uVar12 != *(longlong *)(lVar11 + 0x38))
       ) {
      FUN_144be8550(lVar11,uVar7);
    }
    else {
      *(ulonglong *)(lVar11 + 0x38) = uVar7;
      if (*(ulonglong *)(lVar11 + 0x48) == uVar7) {
        FUN_144be8430(lVar11);
      }
    }
  }
  if ((-1 < (int)(uint)local_b0) && (uVar13 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,uVar13,(ulonglong)((uint)local_b0 & 0x7fffffff) << 2);
  }
  if (lVar10 == 0) {
    (*DAT_14c787678)(1,uVar6);
  }
  else {
    uVar13 = local_68 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar10 + 0x28) < uVar13) || (uVar6 + uVar13 != *(longlong *)(lVar10 + 0x38))
       ) {
      FUN_144be8550(lVar10,uVar6);
    }
    else {
      *(ulonglong *)(lVar10 + 0x38) = uVar6;
      if (*(ulonglong *)(lVar10 + 0x48) == uVar6) {
        FUN_144be8430(lVar10);
      }
    }
  }
  if ((-1 < (int)uVar1) && (uVar5 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,uVar5,(ulonglong)(uVar1 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144cb58b0 FUN_144cb58b0 body=2394 status=ok
// SIG undefined FUN_144cb58b0(void)

void FUN_144cb58b0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  undefined4 *puVar25;
  void *_Dst;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  bool bVar36;
  undefined8 local_res18;
  uint local_res20;
  uint local_178;
  void *local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong local_120;
  void *local_118;
  void *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined1 local_98 [40];
  longlong local_70;
  uint local_68 [5];
  undefined4 local_54 [5];
  
  local_res18 = param_3;
  FUN_14502c7c0(local_98,param_1 + 0x38);
  iVar35 = *(int *)(param_1 + 0x30);
  local_128 = *(longlong *)(param_1 + 0x18);
  lVar33 = *(longlong *)(param_1 + 0x28);
  _Dst = (void *)*param_4;
  lVar32 = local_128 + (longlong)*(int *)(param_1 + 0x20) * 4;
  local_108 = (void *)param_4[1];
  uVar19 = 0;
  uVar27 = (ulonglong)((longlong)local_108 + (3 - (longlong)_Dst)) >> 2;
  if (local_108 < _Dst) {
    uVar27 = uVar19;
  }
  local_118 = _Dst;
  if (uVar27 != 0) {
    memset(_Dst,-1,uVar27 << 2);
  }
  pvVar3 = (void *)*param_5;
  local_138 = (void *)param_5[1];
  uVar27 = (ulonglong)((longlong)local_138 + (3 - (longlong)pvVar3)) >> 2;
  if (local_138 < pvVar3) {
    uVar27 = uVar19;
  }
  if (uVar27 != 0) {
    memset(pvVar3,-1,uVar27 << 2);
  }
  iVar34 = 0;
  local_178 = 0;
  iVar13 = (int)param_2[2];
  iVar35 = (int)(((longlong)iVar35 * 0x60) / 0x60);
  if ((-1 < iVar35) && (iVar34 = iVar35, iVar13 < iVar35)) {
    iVar34 = iVar13;
  }
  if (iVar34 < iVar13) {
    iVar13 = iVar34;
  }
  iVar13 = iVar13 + -1;
  if (-1 < iVar13) {
    lVar28 = *param_2;
    lVar31 = (longlong)(iVar13 >> 5);
    param_5._0_4_ = 0;
    uVar26 = ~(iVar13 >> 0x1f) & 1;
    lVar29 = lVar31 + -1;
    uVar20 = 0xffffffff;
    lVar23 = 0;
    uVar30 = uVar19;
    uVar27 = uVar19;
    local_120 = lVar31;
    do {
      local_res20 = uVar26;
      uVar26 = (uint)uVar30;
      if (lVar23 < lVar31) {
        iVar34 = ((int)uVar19 + (uint)uVar30) * 0x20;
        puVar24 = (uint *)(lVar28 + lVar23 * 4);
        lVar23 = lVar31 - lVar23;
        do {
          uVar26 = *puVar24;
          uVar22 = uVar20 & ~uVar26;
          lVar31 = local_120;
          while (local_120 = lVar31, uVar22 != 0) {
            iVar14 = (*(code *)PTR_FUN_14c6da350)((-(~uVar26 & uVar20) & ~uVar26 & uVar20) - 1);
            uVar20 = uVar20 & -2 << ((byte)iVar14 & 0x1f);
            *(int *)((longlong)_Dst + (longlong)(iVar14 + iVar34) * 4) = (int)uVar27;
            local_178 = (int)uVar27 + 1;
            uVar27 = (ulonglong)local_178;
            FUN_14502c980(local_98,*(undefined4 *)((longlong)(iVar14 + iVar34) * 0x60 + lVar33));
            uVar26 = *puVar24;
            lVar31 = local_120;
            uVar22 = uVar20 & ~uVar26;
          }
          iVar34 = iVar34 + 0x20;
          puVar24 = puVar24 + 1;
          uVar20 = 0xffffffff;
          lVar23 = lVar23 + -1;
          uVar26 = (uint)param_5;
        } while (lVar23 != 0);
      }
      uVar19 = (ulonglong)((iVar13 >> 5) - 1);
      param_5._0_4_ = uVar26 + 1;
      uVar30 = (ulonglong)(uint)param_5;
      uVar26 = local_res20 - 1;
      lVar28 = lVar28 + 4;
      uVar20 = uVar20 & (~(-1 << ((byte)iVar13 & 0x1f)) * 2 | 1U);
      lVar23 = lVar29;
    } while (local_res20 != 0);
    local_res20 = -1;
  }
  iVar34 = 0;
  iVar14 = 0;
  param_5._0_4_ = 0;
  iVar13 = (int)local_res18[2];
  iVar17 = (int)(lVar32 - local_128 >> 2);
  if ((-1 < iVar17) && (iVar14 = iVar17, iVar13 < iVar17)) {
    iVar14 = iVar13;
  }
  if (iVar14 < iVar13) {
    iVar13 = iVar14;
  }
  iVar13 = iVar13 + -1;
  if (-1 < iVar13) {
    lVar29 = *local_res18;
    lVar28 = (longlong)(iVar13 >> 5);
    local_res20 = 0;
    lVar32 = 0;
    uVar20 = 0xffffffff;
    uVar26 = ~(iVar13 >> 0x1f) & 1;
    iVar14 = 0;
    iVar34 = 0;
    do {
      if (lVar32 < lVar28) {
        iVar14 = (iVar14 + local_res20) * 0x20;
        puVar24 = (uint *)(lVar29 + lVar32 * 4);
        lVar32 = lVar28 - lVar32;
        do {
          uVar22 = *puVar24;
          uVar18 = uVar20 & ~uVar22;
          while (uVar18 != 0) {
            iVar15 = (*(code *)PTR_FUN_14c6da350)((-(~uVar22 & uVar20) & ~uVar22 & uVar20) - 1);
            uVar20 = uVar20 & -2 << ((byte)iVar15 & 0x1f);
            *(int *)((longlong)pvVar3 + (longlong)(iVar15 + iVar14) * 4) = iVar34;
            param_5._0_4_ = iVar34 + 1;
            uVar22 = *puVar24;
            iVar34 = (uint)param_5;
            uVar18 = uVar20 & ~uVar22;
          }
          iVar14 = iVar14 + 0x20;
          puVar24 = puVar24 + 1;
          uVar20 = 0xffffffff;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
      }
      local_res20 = local_res20 + 1;
      lVar29 = lVar29 + 4;
      uVar20 = uVar20 & (~(-1 << ((byte)iVar13 & 0x1f)) * 2 | 1U);
      bVar36 = uVar26 != 0;
      lVar32 = lVar28 + -1;
      _Dst = local_118;
      uVar26 = uVar26 - 1;
      iVar14 = (iVar13 >> 5) + -1;
    } while (bVar36);
  }
  iVar15 = 0;
  iVar13 = (int)param_2[2];
  iVar14 = 0;
  if ((-1 < iVar35) && (iVar14 = iVar35, iVar13 < iVar35)) {
    iVar14 = iVar13;
  }
  if (iVar14 < iVar13) {
    iVar13 = iVar14;
  }
  iVar13 = iVar13 + -1;
  if (-1 < iVar13) {
    lVar32 = *param_2;
    lVar28 = (longlong)(iVar13 >> 5);
    uVar26 = ~(iVar13 >> 0x1f) & 1;
    uVar20 = 0xffffffff;
    lVar29 = 0;
    iVar35 = iVar15;
    do {
      local_res20 = uVar26;
      if (lVar29 < lVar28) {
        iVar35 = (iVar35 + iVar15) * 0x20;
        puVar24 = (uint *)(lVar32 + lVar29 * 4);
        lVar29 = lVar28 - lVar29;
        do {
          uVar26 = *puVar24;
          uVar22 = uVar20 & ~uVar26;
          while (uVar22 != 0) {
            iVar34 = (*(code *)PTR_FUN_14c6da350)((-(~uVar26 & uVar20) & ~uVar26 & uVar20) - 1);
            uVar20 = uVar20 & -2 << ((byte)iVar34 & 0x1f);
            lVar31 = (longlong)(iVar34 + iVar35) * 0x60;
            uVar4 = *(undefined8 *)(lVar31 + lVar33);
            piVar1 = (int *)(lVar31 + 0x10 + lVar33);
            local_e8 = *piVar1;
            iStack_e4 = piVar1[1];
            iStack_e0 = piVar1[2];
            iStack_dc = piVar1[3];
            puVar2 = (undefined8 *)(lVar31 + 0x20 + lVar33);
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2 = (undefined8 *)(lVar31 + 0x30 + lVar33);
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            puVar2 = (undefined8 *)(lVar31 + 0x40 + lVar33);
            uVar9 = *puVar2;
            uVar10 = puVar2[1];
            puVar2 = (undefined8 *)(lVar31 + 0x50 + lVar33);
            uVar11 = *puVar2;
            uVar12 = puVar2[1];
            uStack_f0._4_4_ = (int)((ulonglong)((undefined8 *)(lVar31 + lVar33))[1] >> 0x20);
            uStack_f0 = CONCAT44(*(undefined4 *)((longlong)_Dst + (longlong)uStack_f0._4_4_ * 4),
                                 *(undefined4 *)
                                  ((longlong)_Dst + (longlong)*(int *)(lVar31 + 8 + lVar33) * 4));
            if (-1 < local_e8) {
              local_e8 = *(int *)((longlong)_Dst + (longlong)local_e8 * 4);
            }
            local_f8 = CONCAT44(*(undefined4 *)
                                 ((longlong)pvVar3 + (longlong)(int)((ulonglong)uVar4 >> 0x20) * 4),
                                (int)uVar4);
            lVar31 = (longlong)*(int *)((longlong)_Dst + (longlong)(iVar34 + iVar35) * 4) * 0x60;
            *(undefined8 *)(lVar31 + lVar33) = local_f8;
            ((undefined8 *)(lVar31 + lVar33))[1] = uStack_f0;
            piVar1 = (int *)(lVar31 + 0x10 + lVar33);
            *piVar1 = local_e8;
            piVar1[1] = iStack_e4;
            piVar1[2] = iStack_e0;
            piVar1[3] = iStack_dc;
            puVar2 = (undefined8 *)(lVar31 + 0x20 + lVar33);
            *puVar2 = uVar5;
            puVar2[1] = uVar6;
            puVar2 = (undefined8 *)(lVar31 + 0x30 + lVar33);
            *puVar2 = uVar7;
            puVar2[1] = uVar8;
            puVar2 = (undefined8 *)(lVar31 + 0x40 + lVar33);
            *puVar2 = uVar9;
            puVar2[1] = uVar10;
            puVar2 = (undefined8 *)(lVar31 + 0x50 + lVar33);
            *puVar2 = uVar11;
            puVar2[1] = uVar12;
            uVar26 = *puVar24;
            uVar22 = uVar20 & ~uVar26;
          }
          iVar35 = iVar35 + 0x20;
          puVar24 = puVar24 + 1;
          uVar20 = 0xffffffff;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      iVar15 = iVar15 + 1;
      uVar26 = local_res20 - 1;
      lVar32 = lVar32 + 4;
      uVar20 = uVar20 & (~(-1 << ((byte)iVar13 & 0x1f)) * 2 | 1U);
      lVar29 = lVar28 + -1;
      iVar35 = (iVar13 >> 5) + -1;
    } while (local_res20 != 0);
    local_res20 = -1;
    iVar34 = (uint)param_5;
  }
  iVar35 = (int)local_res18[2];
  if (iVar17 < 0) {
    iVar17 = 0;
  }
  else if (iVar35 < iVar17) {
    iVar17 = iVar35;
  }
  if (iVar17 < iVar35) {
    iVar35 = iVar17;
  }
  iVar35 = iVar35 + -1;
  if (-1 < iVar35) {
    lVar32 = *local_res18;
    iVar13 = 0;
    lVar29 = (longlong)(iVar35 >> 5);
    local_res18 = (longlong *)(CONCAT44(local_res18._4_4_,~(-1 << ((byte)iVar35 & 0x1f)) * 2) | 1);
    local_res20 = (iVar35 >> 5) + -1;
    uVar20 = 0xffffffff;
    lVar33 = 0;
    uVar26 = ~(iVar35 >> 0x1f) & 1;
    uVar22 = (uint)local_res18;
    uVar18 = 0;
    do {
      lVar28 = local_128;
      if (lVar33 < lVar29) {
        iVar35 = (uVar18 + iVar13) * 0x20;
        puVar24 = (uint *)(lVar32 + lVar33 * 4);
        lVar33 = lVar29 - lVar33;
        do {
          uVar22 = *puVar24;
          uVar18 = uVar20 & ~uVar22;
          while (uVar18 != 0) {
            iVar34 = (*(code *)PTR_FUN_14c6da350)((-(~uVar22 & uVar20) & ~uVar22 & uVar20) - 1);
            uVar20 = uVar20 & -2 << ((byte)iVar34 & 0x1f);
            *(undefined4 *)
             (lVar28 + (longlong)*(int *)((longlong)pvVar3 + (longlong)(iVar34 + iVar35) * 4) * 4) =
                 *(undefined4 *)
                  ((longlong)_Dst + (longlong)*(int *)(lVar28 + (longlong)(iVar34 + iVar35) * 4) * 4
                  );
            uVar22 = *puVar24;
            uVar18 = uVar20 & ~uVar22;
          }
          iVar35 = iVar35 + 0x20;
          puVar24 = puVar24 + 1;
          uVar20 = 0xffffffff;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        uVar22 = (uint)local_res18;
      }
      iVar13 = iVar13 + 1;
      lVar32 = lVar32 + 4;
      uVar20 = uVar20 & uVar22;
      bVar36 = uVar26 != 0;
      lVar33 = lVar29 + -1;
      uVar26 = uVar26 - 1;
      iVar34 = (uint)param_5;
      uVar18 = local_res20;
    } while (bVar36);
  }
  FUN_14502ca20(local_98);
  puVar21 = *(undefined4 **)(param_1 + 0x28);
  puVar25 = puVar21 + (longlong)*(int *)(param_1 + 0x30) * 0x18;
  for (; puVar21 != puVar25; puVar21 = puVar21 + 0x18) {
    puVar16 = (undefined4 *)FUN_14502ce90(local_98,&local_res18,*puVar21);
    *puVar21 = *puVar16;
  }
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar34) {
    FUN_144cb7480(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar34);
  }
  if ((*(int *)(param_1 + 0x20) < iVar34) || (iVar34 < *(int *)(param_1 + 0x20))) {
    *(int *)(param_1 + 0x20) = iVar34;
  }
  uStack_130 = local_138;
  local_138 = pvVar3;
  FUN_144cad890(param_1 + 0x68,&local_138,iVar34);
  if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < (int)local_178) {
    FUN_144cb7580(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)(int)local_178);
  }
  if ((*(int *)(param_1 + 0x30) < (int)local_178) || ((int)local_178 < *(int *)(param_1 + 0x30))) {
    *(uint *)(param_1 + 0x30) = local_178;
  }
  uStack_130 = local_108;
  pvVar3 = uStack_130;
  uStack_130._0_4_ = SUB84(local_108,0);
  uStack_130._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
  uStack_100 = (undefined4)uStack_130;
  uStack_fc = uStack_130._4_4_;
  local_138 = _Dst;
  uStack_130 = pvVar3;
  local_108 = _Dst;
  FUN_144cad3c0(param_1 + 0xb8,&local_108,local_178);
  lVar32 = 3;
  puVar21 = local_54;
  do {
    lVar32 = lVar32 + -1;
    puVar21[-5] = 0;
    if ((-1 < (int)puVar21[-4]) && (*(longlong *)(puVar21 + -7) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(puVar21 + -7),
                 (ulonglong)(puVar21[-4] & 0x7fffffff) << 2);
    }
    *(undefined8 *)(puVar21 + -7) = 0;
    puVar21[-4] = 0x80000000;
    puVar21 = puVar21 + -4;
  } while (lVar32 != 0);
  return;
}



// FUNCTION 144cb6210 FUN_144cb6210 body=503 status=ok
// SIG undefined FUN_144cb6210(void)

undefined2 *
FUN_144cb6210(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined2 local_res8 [4];
  undefined8 *local_res10;
  undefined8 local_res18;
  
  local_res18 = 0x48;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"ReduceVerticesResult");
  }
  puVar5 = (undefined8 *)0x0;
  if (puVar4 == (undefined8 *)0x0) {
    local_res10 = (undefined8 *)0x0;
  }
  else {
    puVar4[4] = 0;
    puVar4[6] = 0;
    puVar4[8] = 0;
    *puVar4 = hkaiNavMeshGeneration::VertexSet::ReduceVerticesResult::vftable;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0x80000000;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0x80000000;
    puVar4[7] = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x44) = 0x80000000;
    local_res10 = puVar4;
    FUN_144b3d910(puVar4);
    puVar5 = puVar4;
  }
  FUN_14502cf70(param_1 + 0x38,local_res8,param_3,&local_res10,param_4,param_5);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar5);
  }
  local_res10 = (undefined8 *)0x50;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"ReferencedFunctorTask");
  }
  if (puVar4 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,param_2,0,0x40);
    puVar4 = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_144cb639e;
  }
  else {
    puVar4[1] = 0xffffffff;
    *puVar4 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Mesh::addReduceVerticesTasks(hkTaskGraph&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
              ::vftable;
    puVar4[2] = 1;
    puVar4[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Mesh::addReduceVerticesTasks(hkTaskGraph&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
                ::vftable;
    puVar4[8] = "ApplyReductionRemapping";
    puVar4[6] = param_1;
    puVar4[7] = puVar5;
    FUN_144be3b70(param_3,param_2,puVar4,0x40);
  }
  FUN_144b3f230(puVar4);
LAB_144cb639e:
  uVar1 = *param_2;
  iVar6 = *(int *)(param_3 + 0x330) + 1;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar6) {
    FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar2 = *(int *)(param_3 + 0x330);
  lVar3 = *(longlong *)(param_3 + 0x328);
  *(int *)(param_3 + 0x330) = iVar6;
  *(undefined2 *)(lVar3 + (longlong)iVar2 * 4) = local_res8[0];
  *(undefined2 *)(lVar3 + 2 + (longlong)iVar2 * 4) = uVar1;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar5);
  }
  return param_2;
}



// FUNCTION 144cb6410 FUN_144cb6410 body=503 status=ok
// SIG undefined FUN_144cb6410(void)

undefined2 *
FUN_144cb6410(longlong param_1,undefined2 *param_2,longlong param_3,undefined4 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined2 local_res8 [4];
  undefined8 *local_res10;
  undefined8 local_res18;
  
  local_res18 = 0x48;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"SortAndWeldVerticesResult");
  }
  puVar5 = (undefined8 *)0x0;
  if (puVar4 == (undefined8 *)0x0) {
    local_res10 = (undefined8 *)0x0;
  }
  else {
    puVar4[4] = 0;
    puVar4[6] = 0;
    puVar4[8] = 0;
    *puVar4 = hkaiNavMeshGeneration::VertexSet::SortAndWeldVerticesResult::vftable;
    puVar4[1] = 0xffffffff;
    puVar4[2] = 1;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x24) = 0x80000000;
    puVar4[5] = 0;
    *(undefined4 *)(puVar4 + 6) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x34) = 0x80000000;
    puVar4[7] = 0;
    *(undefined4 *)(puVar4 + 8) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x44) = 0x80000000;
    local_res10 = puVar4;
    FUN_144b3d910(puVar4);
    puVar5 = puVar4;
  }
  FUN_14502d5b0(param_1 + 0x38,local_res8,param_3,&local_res10,param_4,param_5);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144b3d910(puVar5);
  }
  local_res10 = (undefined8 *)0x50;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"ReferencedFunctorTask");
  }
  if (puVar4 == (undefined8 *)0x0) {
    FUN_144be3b70(param_3,param_2,0,0x40);
    puVar4 = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_144cb659e;
  }
  else {
    puVar4[1] = 0xffffffff;
    *puVar4 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Mesh::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
              ::vftable;
    puVar4[2] = 1;
    puVar4[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`public:_struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::Mesh::addSortAndWeldVerticesTasks(hkTaskGraph&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)___ptr64'::`2'::<lambda_1>_>
                ::vftable;
    puVar4[8] = "ApplySortRemapping";
    puVar4[6] = param_1;
    puVar4[7] = puVar5;
    FUN_144be3b70(param_3,param_2,puVar4,0x40);
  }
  FUN_144b3f230(puVar4);
LAB_144cb659e:
  uVar1 = *param_2;
  iVar6 = *(int *)(param_3 + 0x330) + 1;
  if ((int)(*(uint *)(param_3 + 0x334) & 0x7fffffff) < iVar6) {
    FUN_141807bca((longlong *)(param_3 + 0x328),&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  iVar2 = *(int *)(param_3 + 0x330);
  lVar3 = *(longlong *)(param_3 + 0x328);
  *(int *)(param_3 + 0x330) = iVar6;
  *(undefined2 *)(lVar3 + (longlong)iVar2 * 4) = local_res8[0];
  *(undefined2 *)(lVar3 + 2 + (longlong)iVar2 * 4) = uVar1;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_144b3f230(puVar5);
  }
  return param_2;
}



// FUNCTION 144cb6610 FUN_144cb6610 body=101 status=ok
// SIG undefined FUN_144cb6610(void)

void FUN_144cb6610(longlong param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined4 *)
           (*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)(*param_2 & 0x3fffffff) * 0xc);
  *param_3 = *(undefined8 *)
              (*(longlong *)(param_1 + 0x38) + (ulonglong)(*param_2 & 0x3fffffff) * 0xc);
  *(undefined4 *)(param_3 + 1) = uVar1;
  uVar2 = (ulonglong)
          (*(uint *)((longlong)(int)param_2[3] * 0x60 + *(longlong *)(param_1 + 0x28)) & 0x3fffffff)
  ;
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 8 + uVar2 * 0xc);
  *param_4 = *(undefined8 *)(*(longlong *)(param_1 + 0x38) + uVar2 * 0xc);
  *(undefined4 *)(param_4 + 1) = uVar1;
  return;
}



// FUNCTION 144cb6680 FUN_144cb6680 body=135 status=ok
// SIG undefined FUN_144cb6680(void)

void FUN_144cb6680(longlong param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_3 = *(undefined8 *)
              (*(longlong *)(param_1 + 0x38) + (ulonglong)(*param_2 & 0x3fffffff) * 0xc);
  *param_4 = *(undefined8 *)
              (*(longlong *)(param_1 + 0x38) +
              (ulonglong)
              (*(uint *)((longlong)(int)param_2[3] * 0x60 + *(longlong *)(param_1 + 0x28)) &
              0x3fffffff) * 0xc);
  return;
}



// FUNCTION 144cb6710 FUN_144cb6710 body=198 status=ok
// SIG undefined FUN_144cb6710(void)

void FUN_144cb6710(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_68 [96];
  
  puVar5 = (undefined8 *)FUN_144cb4190(param_1,local_68,*param_2);
  uVar4 = puVar5[1];
  *param_3 = *puVar5;
  param_3[1] = uVar4;
  uVar4 = puVar5[3];
  param_3[2] = puVar5[2];
  param_3[3] = uVar4;
  uVar4 = puVar5[5];
  param_3[4] = puVar5[4];
  param_3[5] = uVar4;
  uVar4 = puVar5[7];
  param_3[6] = puVar5[6];
  param_3[7] = uVar4;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x44);
  uVar2 = *(undefined4 *)(puVar5 + 9);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x4c);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(puVar5 + 8);
  *(undefined4 *)((longlong)param_3 + 0x44) = uVar1;
  *(undefined4 *)(param_3 + 9) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)((longlong)puVar5 + 0x54);
  uVar2 = *(undefined4 *)(puVar5 + 0xb);
  uVar3 = *(undefined4 *)((longlong)puVar5 + 0x5c);
  *(undefined4 *)(param_3 + 10) = *(undefined4 *)(puVar5 + 10);
  *(undefined4 *)((longlong)param_3 + 0x54) = uVar1;
  *(undefined4 *)(param_3 + 0xb) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0x5c) = uVar3;
  puVar5 = (undefined8 *)
           FUN_144cb4190(param_1,local_68,
                         *(undefined4 *)
                          ((longlong)(int)param_2[3] * 0x60 + *(longlong *)(param_1 + 0x28)));
  uVar4 = puVar5[1];
  *param_4 = *puVar5;
  param_4[1] = uVar4;
  uVar4 = puVar5[3];
  param_4[2] = puVar5[2];
  param_4[3] = uVar4;
  uVar4 = puVar5[5];
  param_4[4] = puVar5[4];
  param_4[5] = uVar4;
  uVar4 = puVar5[7];
  param_4[6] = puVar5[6];
  param_4[7] = uVar4;
  uVar4 = puVar5[9];
  param_4[8] = puVar5[8];
  param_4[9] = uVar4;
  uVar4 = puVar5[0xb];
  param_4[10] = puVar5[10];
  param_4[0xb] = uVar4;
  return;
}



// FUNCTION 144cb67e0 FUN_144cb67e0 body=284 status=ok
// SIG undefined FUN_144cb67e0(void)

void FUN_144cb67e0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_147e582da(param_1 + 0x38,&local_88,*param_2);
  *param_3 = local_88;
  param_3[1] = uStack_80;
  param_3[2] = local_78;
  param_3[3] = uStack_70;
  param_3[4] = local_68;
  param_3[5] = uStack_60;
  param_3[6] = local_58;
  param_3[7] = uStack_50;
  param_3[8] = local_48;
  param_3[9] = uStack_40;
  param_3[10] = local_38;
  param_3[0xb] = uStack_30;
  *(undefined4 *)(param_3 + 0xc) = local_28;
  *(undefined4 *)((longlong)param_3 + 100) = uStack_24;
  *(undefined4 *)(param_3 + 0xd) = uStack_20;
  *(undefined4 *)((longlong)param_3 + 0x6c) = uStack_1c;
  *(undefined4 *)(param_3 + 0xe) = local_18;
  *(undefined4 *)((longlong)param_3 + 0x74) = uStack_14;
  *(undefined4 *)(param_3 + 0xf) = uStack_10;
  *(undefined4 *)((longlong)param_3 + 0x7c) = uStack_c;
  FUN_147e582da(param_1 + 0x38,&local_88,
                *(undefined4 *)((longlong)(int)param_2[3] * 0x60 + *(longlong *)(param_1 + 0x28)));
  *param_4 = local_88;
  param_4[1] = uStack_80;
  param_4[2] = local_78;
  param_4[3] = uStack_70;
  param_4[4] = local_68;
  param_4[5] = uStack_60;
  param_4[6] = local_58;
  param_4[7] = uStack_50;
  param_4[8] = local_48;
  param_4[9] = uStack_40;
  param_4[10] = local_38;
  param_4[0xb] = uStack_30;
  param_4[0xc] = CONCAT44(uStack_24,local_28);
  param_4[0xd] = CONCAT44(uStack_1c,uStack_20);
  param_4[0xe] = CONCAT44(uStack_14,local_18);
  param_4[0xf] = CONCAT44(uStack_c,uStack_10);
  return;
}



// FUNCTION 144cb6900 FUN_144cb6900 body=246 status=ok
// SIG undefined FUN_144cb6900(void)

void FUN_144cb6900(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_147e582da(param_1 + 0x38,&local_88,*param_2);
  *param_3 = local_88;
  param_3[1] = uStack_84;
  param_3[2] = uStack_80;
  param_3[3] = uStack_7c;
  param_3[4] = local_78;
  param_3[5] = uStack_74;
  param_3[6] = uStack_70;
  param_3[7] = uStack_6c;
  param_3[8] = local_68;
  param_3[9] = uStack_64;
  param_3[10] = uStack_60;
  param_3[0xb] = uStack_5c;
  param_3[0xc] = local_58;
  param_3[0xd] = uStack_54;
  param_3[0xe] = uStack_50;
  param_3[0xf] = uStack_4c;
  *(undefined8 *)(param_3 + 0x10) = local_28;
  *(undefined8 *)(param_3 + 0x12) = uStack_20;
  *(undefined8 *)(param_3 + 0x14) = local_18;
  *(undefined8 *)(param_3 + 0x16) = uStack_10;
  FUN_147e582da(param_1 + 0x38,&local_88,
                *(undefined4 *)((longlong)(int)param_2[3] * 0x60 + *(longlong *)(param_1 + 0x28)));
  *param_4 = CONCAT44(uStack_84,local_88);
  param_4[1] = CONCAT44(uStack_7c,uStack_80);
  param_4[2] = CONCAT44(uStack_74,local_78);
  param_4[3] = CONCAT44(uStack_6c,uStack_70);
  param_4[4] = CONCAT44(uStack_64,local_68);
  param_4[5] = CONCAT44(uStack_5c,uStack_60);
  param_4[6] = CONCAT44(uStack_54,local_58);
  param_4[7] = CONCAT44(uStack_4c,uStack_50);
  param_4[8] = local_28;
  param_4[9] = uStack_20;
  param_4[10] = local_18;
  param_4[0xb] = uStack_10;
  return;
}



// FUNCTION 144cb6a00 FUN_144cb6a00 body=91 status=ok
// SIG undefined FUN_144cb6a00(void)

longlong FUN_144cb6a00(longlong param_1,ulonglong param_2)

{
  FUN_144bf90d0(param_1 + 8);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144cb6a60 FUN_144cb6a60 body=157 status=ok
// SIG undefined FUN_144cb6a60(void)

undefined8 * FUN_144cb6a60(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  *param_1 = hkaiNavMeshGeneration::StridedMeshFaceOverlay<int>::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x18);
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  if (0 < (int)uVar1) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[2] = uVar3;
    uVar6 = (ulonglong)uVar1;
    *(uint *)(param_1 + 3) = uVar1;
    *(uint *)((longlong)param_1 + 0x1c) = uVar1;
    puVar4 = (undefined4 *)param_1[2];
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar2;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
  }
  return param_1;
}



// FUNCTION 144cb6b00 FUN_144cb6b00 body=164 status=ok
// SIG undefined FUN_144cb6b00(void)

undefined8 * FUN_144cb6b00(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  *param_1 = hkaiNavMeshGeneration::
             ScalarMeshFaceOverlay<hkaiClipper::BiplanarInnerTypes::ImplicitPlane<24>_>::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  if (0 < (int)uVar2) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x28);
    param_1[1] = uVar3;
    uVar5 = (ulonglong)uVar2;
    *(uint *)(param_1 + 2) = uVar2;
    *(uint *)((longlong)param_1 + 0x14) = uVar2;
    puVar4 = (undefined8 *)param_1[1];
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar3 = puVar6[1];
        *puVar4 = *puVar6;
        puVar4[1] = uVar3;
        uVar3 = puVar6[3];
        puVar4[2] = puVar6[2];
        puVar4[3] = uVar3;
        puVar1 = puVar6 + 4;
        puVar6 = puVar6 + 5;
        puVar4[4] = *puVar1;
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 5;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 144cb6bb0 FUN_144cb6bb0 body=109 status=ok
// SIG undefined FUN_144cb6bb0(void)

void FUN_144cb6bb0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x28);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x28);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144cb6c20 FUN_144cb6c20 body=141 status=ok
// SIG undefined FUN_144cb6c20(void)

undefined8 * FUN_144cb6c20(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  *param_1 = hkaiNavMeshGeneration::ScalarMeshFaceOverlay<hkFpMath::FpUint<23>_>::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x10);
  puVar5 = *(undefined4 **)(param_2 + 8);
  if (0 < (int)uVar1) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[1] = uVar3;
    uVar6 = (ulonglong)uVar1;
    *(uint *)(param_1 + 2) = uVar1;
    *(uint *)((longlong)param_1 + 0x14) = uVar1;
    puVar4 = (undefined4 *)param_1[1];
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar2;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
  }
  return param_1;
}



// FUNCTION 144cb6cb0 FUN_144cb6cb0 body=103 status=ok
// SIG undefined FUN_144cb6cb0(void)

void FUN_144cb6cb0(undefined8 *param_1,longlong *param_2)

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



// FUNCTION 144cb6d20 FUN_144cb6d20 body=155 status=ok
// SIG undefined FUN_144cb6d20(void)

undefined8 * FUN_144cb6d20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  *param_1 = hkaiNavMeshGeneration::
             ScalarMeshFaceOverlay<hkaiNavMeshGeneration::Simplification::HorizontalLimits>::vftable
  ;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar5 = *(undefined8 **)(param_2 + 8);
  if (0 < (int)uVar2) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
    param_1[1] = uVar3;
    uVar6 = (ulonglong)uVar2;
    *(uint *)(param_1 + 2) = uVar2;
    *(uint *)((longlong)param_1 + 0x14) = uVar2;
    puVar4 = (undefined8 *)param_1[1];
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *puVar5;
        puVar1 = puVar5 + 1;
        puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)puVar1;
      }
      uVar6 = uVar6 - 1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
    } while (uVar6 != 0);
  }
  return param_1;
}



// FUNCTION 144cb6dc0 FUN_144cb6dc0 body=109 status=ok
// SIG undefined FUN_144cb6dc0(void)

void FUN_144cb6dc0(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    uVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0xc);
    FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
    *param_1 = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_1 + 1);
  }
  return;
}



// FUNCTION 144cb6e30 FUN_144cb6e30 body=156 status=ok
// SIG undefined FUN_144cb6e30(void)

undefined8 * FUN_144cb6e30(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  *param_1 = hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::InputEdgeEndpoints>
             ::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar6 = *(undefined8 **)(param_2 + 8);
  if (0 < (int)uVar2) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x18);
    param_1[1] = uVar3;
    uVar5 = (ulonglong)uVar2;
    *(uint *)(param_1 + 2) = uVar2;
    *(uint *)((longlong)param_1 + 0x14) = uVar2;
    puVar4 = (undefined8 *)param_1[1];
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar3 = puVar6[1];
        *puVar4 = *puVar6;
        puVar4[1] = uVar3;
        puVar1 = puVar6 + 2;
        puVar6 = puVar6 + 3;
        puVar4[2] = *puVar1;
      }
      uVar5 = uVar5 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 144cb6ed0 FUN_144cb6ed0 body=132 status=ok
// SIG undefined FUN_144cb6ed0(void)

void FUN_144cb6ed0(undefined8 *param_1,longlong *param_2)

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
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0x18);
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
          puVar3[2] = puVar4[2];
        }
        puVar3 = puVar3 + 3;
        puVar4 = puVar4 + 3;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      uVar5 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
  }
  return;
}



// FUNCTION 144cb6f60 FUN_144cb6f60 body=141 status=ok
// SIG undefined FUN_144cb6f60(void)

undefined8 * FUN_144cb6f60(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  *param_1 = hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkFpMath::FpUint<23>_>::vftable;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  uVar1 = *(uint *)(param_2 + 0x10);
  puVar5 = *(undefined4 **)(param_2 + 8);
  if (0 < (int)uVar1) {
    uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                      (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
    param_1[1] = uVar3;
    uVar6 = (ulonglong)uVar1;
    *(uint *)(param_1 + 2) = uVar1;
    *(uint *)((longlong)param_1 + 0x14) = uVar1;
    puVar4 = (undefined4 *)param_1[1];
    do {
      if (puVar4 != (undefined4 *)0x0) {
        uVar2 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar2;
      }
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 != 0);
  }
  return param_1;
}



// FUNCTION 144cb6ff0 FUN_144cb6ff0 body=108 status=ok
// SIG undefined FUN_144cb6ff0(void)

void FUN_144cb6ff0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  
  puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x28);
  puVar3 = puVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x30) * 0x18;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 0x18) {
    puVar1 = (undefined4 *)FUN_14502c580(*(longlong *)(param_1 + 0x18) + 0x18,local_res8,*puVar2);
    *puVar2 = *puVar1;
  }
  FUN_14502c5a0(*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}



// FUNCTION 144cb7060 FUN_144cb7060 body=5 status=ok
// SIG undefined FUN_144cb7060(void)

undefined8 FUN_144cb7060(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cb7070 FUN_144cb7070 body=115 status=ok
// SIG undefined FUN_144cb7070(void)

undefined8 * FUN_144cb7070(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144cb70f0 FUN_144cb70f0 body=108 status=ok
// SIG undefined FUN_144cb70f0(void)

void FUN_144cb70f0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  
  puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x10) + 0x28);
  puVar3 = puVar2 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x30) * 0x18;
  for (; puVar2 != puVar3; puVar2 = puVar2 + 0x18) {
    puVar1 = (undefined4 *)FUN_14502c580(*(longlong *)(param_1 + 0x18) + 0x18,local_res8,*puVar2);
    *puVar2 = *puVar1;
  }
  FUN_14502c5a0(*(longlong *)(param_1 + 0x18) + 0x18);
  return;
}



// FUNCTION 144cb7160 FUN_144cb7160 body=5 status=ok
// SIG undefined FUN_144cb7160(void)

undefined8 FUN_144cb7160(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cb7170 FUN_144cb7170 body=115 status=ok
// SIG undefined FUN_144cb7170(void)

undefined8 * FUN_144cb7170(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144cb71f0 FUN_144cb71f0 body=254 status=ok
// SIG undefined FUN_144cb71f0(void)

ulonglong FUN_144cb71f0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0x60;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
  uVar3 = uVar4 * 0x60 + 0x60;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x60;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x60;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 144cb72f0 FUN_144cb72f0 body=248 status=ok
// SIG undefined FUN_144cb72f0(void)

void FUN_144cb72f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar6 = (uint *)(param_1 + 0x1c);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -7 != (uint *)0x0) {
        *(undefined ***)(puVar6 + -7) = hkaiNavMeshGeneration::StridedMeshFaceOverlay<int>::vftable;
        puVar6[-5] = *(uint *)(param_2 + -0x14 + (longlong)puVar6);
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)(param_2 + -4 + (longlong)puVar6);
        puVar4 = *(undefined4 **)(param_2 + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          puVar3 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
          *(undefined4 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar1;
          uVar7 = (ulonglong)uVar1;
          *puVar6 = uVar1;
          do {
            if (puVar3 != (undefined4 *)0x0) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 8;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144cb73f0 FUN_144cb73f0 body=77 status=ok
// SIG undefined FUN_144cb73f0(void)

void FUN_144cb73f0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x20 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -4;
      plVar2 = plVar2 + -4;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144cb7480 FUN_144cb7480 body=247 status=ok
// SIG undefined FUN_144cb7480(void)

void FUN_144cb7480(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144cb7580 FUN_144cb7580 body=262 status=ok
// SIG undefined FUN_144cb7580(void)

ulonglong FUN_144cb7580(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x60,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x60);
  uVar3 = uVar4 * 0x60 + 0x60;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x60;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x60;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x60;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x60);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144cb76d0 FUN_144cb76d0 body=261 status=ok
// SIG undefined FUN_144cb76d0(void)

void FUN_144cb76d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint *puVar8;
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_1 + 0x14);
    lVar7 = (longlong)param_4;
    do {
      if (puVar8 + -5 != (uint *)0x0) {
        *(undefined ***)(puVar8 + -5) =
             hkaiNavMeshGeneration::
             ScalarMeshFaceOverlay<hkaiClipper::BiplanarInnerTypes::ImplicitPlane<24>_>::vftable;
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar8);
        puVar6 = *(undefined8 **)((param_2 - param_1) + -0xc + (longlong)puVar8);
        if (0 < (int)uVar2) {
          puVar4 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x28);
          *(undefined8 **)(puVar8 + -3) = puVar4;
          uVar5 = (ulonglong)uVar2;
          puVar8[-1] = uVar2;
          *puVar8 = uVar2;
          do {
            if (puVar4 != (undefined8 *)0x0) {
              uVar3 = puVar6[1];
              *puVar4 = *puVar6;
              puVar4[1] = uVar3;
              uVar3 = puVar6[3];
              puVar4[2] = puVar6[2];
              puVar4[3] = uVar3;
              puVar1 = puVar6 + 4;
              puVar6 = puVar6 + 5;
              puVar4[4] = *puVar1;
            }
            uVar5 = uVar5 - 1;
            puVar4 = puVar4 + 5;
          } while (uVar5 != 0);
        }
      }
      puVar8 = puVar8 + 6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144cb77e0 FUN_144cb77e0 body=88 status=ok
// SIG undefined FUN_144cb77e0(void)

void FUN_144cb77e0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144cb7880 FUN_144cb7880 body=237 status=ok
// SIG undefined FUN_144cb7880(void)

void FUN_144cb7880(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x14);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -5 != (uint *)0x0) {
        *(undefined ***)(puVar6 + -5) =
             hkaiNavMeshGeneration::ScalarMeshFaceOverlay<hkFpMath::FpUint<23>_>::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          puVar3 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
          *(undefined4 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar1;
          uVar7 = (ulonglong)uVar1;
          *puVar6 = uVar1;
          do {
            if (puVar3 != (undefined4 *)0x0) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144cb7970 FUN_144cb7970 body=88 status=ok
// SIG undefined FUN_144cb7970(void)

void FUN_144cb7970(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144cb7a10 FUN_144cb7a10 body=248 status=ok
// SIG undefined FUN_144cb7a10(void)

void FUN_144cb7a10(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x14);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -5 != (uint *)0x0) {
        *(undefined ***)(puVar6 + -5) =
             hkaiNavMeshGeneration::
             ScalarMeshFaceOverlay<hkaiNavMeshGeneration::Simplification::HorizontalLimits>::vftable
        ;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined8 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar2) {
          puVar3 = (undefined8 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0xc);
          *(undefined8 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar2;
          uVar7 = (ulonglong)uVar2;
          *puVar6 = uVar2;
          do {
            if (puVar3 != (undefined8 *)0x0) {
              *puVar3 = *puVar4;
              puVar1 = puVar4 + 1;
              puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
              *(undefined4 *)(puVar3 + 1) = *(undefined4 *)puVar1;
            }
            uVar7 = uVar7 - 1;
            puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144cb7b10 FUN_144cb7b10 body=88 status=ok
// SIG undefined FUN_144cb7b10(void)

void FUN_144cb7b10(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144cb7bb0 FUN_144cb7bb0 body=249 status=ok
// SIG undefined FUN_144cb7bb0(void)

void FUN_144cb7bb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint *puVar10;
  
  if (0 < param_4) {
    puVar10 = (uint *)(param_1 + 0x14);
    lVar9 = (longlong)param_4;
    do {
      if (puVar10 + -5 != (uint *)0x0) {
        *(undefined ***)(puVar10 + -5) =
             hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkaiNavMeshGeneration::InputEdgeEndpoints>
             ::vftable;
        puVar10[-3] = 0;
        puVar10[-2] = 0;
        puVar10[-1] = 0;
        *puVar10 = 0x80000000;
        uVar2 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar10);
        puVar8 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar10);
        if (0 < (int)uVar2) {
          puVar6 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 * 0x18);
          *(undefined4 **)(puVar10 + -3) = puVar6;
          uVar7 = (ulonglong)uVar2;
          puVar10[-1] = uVar2;
          *puVar10 = uVar2;
          do {
            if (puVar6 != (undefined4 *)0x0) {
              uVar3 = puVar8[1];
              uVar4 = puVar8[2];
              uVar5 = puVar8[3];
              *puVar6 = *puVar8;
              puVar6[1] = uVar3;
              puVar6[2] = uVar4;
              puVar6[3] = uVar5;
              puVar1 = (undefined8 *)(puVar8 + 4);
              puVar8 = puVar8 + 6;
              *(undefined8 *)(puVar6 + 4) = *puVar1;
            }
            uVar7 = uVar7 - 1;
            puVar6 = puVar6 + 6;
          } while (uVar7 != 0);
        }
      }
      puVar10 = puVar10 + 6;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144cb7cb0 FUN_144cb7cb0 body=88 status=ok
// SIG undefined FUN_144cb7cb0(void)

void FUN_144cb7cb0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144cb7d50 FUN_144cb7d50 body=237 status=ok
// SIG undefined FUN_144cb7d50(void)

void FUN_144cb7d50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  
  if (0 < param_4) {
    puVar6 = (uint *)(param_1 + 0x14);
    lVar5 = (longlong)param_4;
    do {
      if (puVar6 + -5 != (uint *)0x0) {
        *(undefined ***)(puVar6 + -5) =
             hkaiNavMeshGeneration::ScalarMeshEdgeOverlay<hkFpMath::FpUint<23>_>::vftable;
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        uVar1 = *(uint *)((param_2 - param_1) + -4 + (longlong)puVar6);
        puVar4 = *(undefined4 **)((param_2 - param_1) + -0xc + (longlong)puVar6);
        if (0 < (int)uVar1) {
          puVar3 = (undefined4 *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 2);
          *(undefined4 **)(puVar6 + -3) = puVar3;
          puVar6[-1] = uVar1;
          uVar7 = (ulonglong)uVar1;
          *puVar6 = uVar1;
          do {
            if (puVar3 != (undefined4 *)0x0) {
              uVar2 = *puVar4;
              puVar4 = puVar4 + 1;
              *puVar3 = uVar2;
            }
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
      }
      puVar6 = puVar6 + 6;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 144cb7e40 FUN_144cb7e40 body=88 status=ok
// SIG undefined FUN_144cb7e40(void)

void FUN_144cb7e40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 0x18);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -3;
      plVar2 = plVar2 + -3;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144cb7ea0 FUN_144cb7ea0 body=281 status=ok
// SIG undefined FUN_144cb7ea0(void)

ulonglong FUN_144cb7ea0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x18;
  puVar5 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
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
    uVar10 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144cb7fc0 FUN_144cb7fc0 body=262 status=ok
// SIG undefined FUN_144cb7fc0(void)

ulonglong FUN_144cb7fc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x28,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x28);
  uVar3 = uVar4 * 0x28 + 0x28;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x28;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x28;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x28;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x28);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144cb80d0 FUN_144cb80d0 body=262 status=ok
// SIG undefined FUN_144cb80d0(void)

ulonglong FUN_144cb80d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144cb81e0 FUN_144cb81e0 body=291 status=ok
// SIG undefined FUN_144cb81e0(void)

ulonglong FUN_144cb81e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144cb8310 FUN_144cb8310 body=163 status=ok
// SIG undefined FUN_144cb8310(void)

void FUN_144cb8310(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0x28);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0x28);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144cb83c0 FUN_144cb83c0 body=159 status=ok
// SIG undefined FUN_144cb83c0(void)

void FUN_144cb83c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144cb8460 FUN_144cb8460 body=163 status=ok
// SIG undefined FUN_144cb8460(void)

void FUN_144cb8460(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 0xc);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) * 0xc);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144cb8510 FUN_144cb8510 body=190 status=ok
// SIG undefined FUN_144cb8510(void)

void FUN_144cb8510(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 * 0x18);
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
        *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar6 + 4);
      }
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 6;
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



// FUNCTION 144cb85d0 FUN_144cb85d0 body=9 status=ok
// SIG undefined FUN_144cb85d0(void)

void FUN_144cb85d0(longlong param_1)

{
  FUN_144cb7070(param_1 + -0x20);
  return;
}



// FUNCTION 144cb85dc FUN_144cb85dc body=9 status=ok
// SIG undefined FUN_144cb85dc(void)

void FUN_144cb85dc(longlong param_1)

{
  FUN_144cb7170(param_1 + -0x20);
  return;
}



// FUNCTION 144cb85f0 FUN_144cb85f0 body=271 status=ok
// SIG undefined FUN_144cb85f0(void)

void FUN_144cb85f0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  int local_res8 [2];
  int local_res10 [2];
  
  fVar3 = (float)FUN_144cc3f10(param_1 + 0x60,local_res8);
  lVar2 = FUN_147e59322(param_1,local_res10);
  iVar1 = local_res8[0];
  if ((float)lVar2 == 0.0) {
    *param_2 = 0;
  }
  else {
    *param_2 = local_res10[0] * 0x800000 + local_res8[0] * -0x800000 + (int)((float)lVar2 / fVar3);
  }
  lVar2 = FUN_147e59322(param_1 + 0x20,local_res8);
  if ((float)lVar2 == 0.0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = local_res8[0] * 0x800000 + iVar1 * -0x800000 + (int)((float)lVar2 / fVar3);
  }
  lVar2 = FUN_147e59322(param_1 + 0x40,local_res8);
  if ((float)lVar2 == 0.0) {
    param_2[2] = 0;
  }
  else {
    param_2[2] = local_res8[0] * 0x800000 + iVar1 * -0x800000 + (int)((float)lVar2 / fVar3);
  }
  return;
}



// FUNCTION 144cb8700 FUN_144cb8700 body=640 status=ok
// SIG undefined FUN_144cb8700(void)

uint FUN_144cb8700(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
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
  ulonglong local_38;
  ulonglong uStack_30;
  
  fVar8 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  fVar7 = (ABS(*(float *)(param_2 + 0xc)) + ABS(*(float *)(param_1 + 0xc))) * 2.3841858e-07;
  if (fVar8 < -fVar7) {
LAB_144cb8963:
    uVar5 = 1;
  }
  else {
    if (fVar8 <= fVar7) {
      if (param_1[0xb] == param_2[0xb] &&
          (param_1[10] == param_2[10] && (param_1[9] == param_2[9] && param_1[8] == param_2[8]))) {
        uVar1 = (ulonglong)(*param_1 < *param_2);
        uVar3 = param_1[1] - param_2[1];
        uVar2 = (ulonglong)(param_1[1] < param_2[1] || uVar3 < uVar1);
        uVar4 = param_1[2] - param_2[2];
        lVar6 = (param_1[3] - param_2[3]) - (ulonglong)(param_1[2] < param_2[2] || uVar4 < uVar2);
        if (((uVar4 != uVar2 || (uVar3 != uVar1 || *param_1 != *param_2)) || lVar6 != 0) ||
            lVar6 < 0) {
          return (uint)(lVar6 >> 0x3f) >> 0x1f;
        }
        return (uint)((longlong)
                      ((param_1[7] - param_2[7]) -
                      (ulonglong)
                      (param_1[6] < param_2[6] ||
                      param_1[6] - param_2[6] <
                      (ulonglong)
                      (param_1[5] < param_2[5] ||
                      param_1[5] - param_2[5] < (ulonglong)(param_1[4] < param_2[4])))) < 0);
      }
      local_a8 = *param_2;
      uStack_a0 = param_2[1];
      local_98 = param_2[2];
      uStack_90 = param_2[3];
      local_88 = param_2[8];
      uStack_80 = param_2[9];
      local_78 = param_2[10];
      uStack_70 = param_2[0xb];
      local_68 = *param_1;
      uStack_60 = param_1[1];
      local_58 = param_1[2];
      uStack_50 = param_1[3];
      local_48 = param_1[8];
      uStack_40 = param_1[9];
      local_38 = param_1[10];
      uStack_30 = param_1[0xb];
      uVar5 = FUN_144cab880(&local_68,&local_a8);
      if (uVar5 != 0) {
        return uVar5 >> 0x1f;
      }
      fVar8 = *(float *)((longlong)param_1 + 100) - *(float *)((longlong)param_2 + 100);
      fVar7 = (ABS(*(float *)((longlong)param_2 + 100)) + ABS(*(float *)((longlong)param_1 + 100)))
              * 2.3841858e-07;
      if (fVar8 < -fVar7) goto LAB_144cb8963;
      if (fVar8 <= fVar7) {
        local_68 = param_2[4];
        uStack_60 = param_2[5];
        local_58 = param_2[6];
        uStack_50 = param_2[7];
        local_48 = param_2[8];
        uStack_40 = param_2[9];
        local_38 = param_2[10];
        uStack_30 = param_2[0xb];
        local_a8 = param_1[4];
        uStack_a0 = param_1[5];
        local_98 = param_1[6];
        uStack_90 = param_1[7];
        local_88 = param_1[8];
        uStack_80 = param_1[9];
        local_78 = param_1[10];
        uStack_70 = param_1[0xb];
        uVar5 = FUN_144cab9d0(&local_a8,&local_68);
        return uVar5;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 144cb8980 FUN_144cb8980 body=513 status=ok
// SIG undefined FUN_144cb8980(void)

undefined8 FUN_144cb8980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
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
  
  fVar3 = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  fVar2 = (ABS(*(float *)(param_2 + 0xc)) + ABS(*(float *)(param_1 + 0xc))) * 2.3841858e-07;
  if (fVar2 < fVar3) {
LAB_144cb8b61:
    uVar1 = 1;
  }
  else {
    if (-fVar2 <= fVar3) {
      if (param_1[0xb] == param_2[0xb] &&
          (param_1[10] == param_2[10] && (param_1[9] == param_2[9] && param_1[8] == param_2[8]))) {
        uVar1 = FUN_144cabac0(param_1,param_2);
        return uVar1;
      }
      local_a8 = *param_2;
      uStack_a0 = param_2[1];
      local_98 = param_2[2];
      uStack_90 = param_2[3];
      local_88 = param_2[8];
      uStack_80 = param_2[9];
      local_78 = param_2[10];
      uStack_70 = param_2[0xb];
      local_68 = *param_1;
      uStack_60 = param_1[1];
      local_58 = param_1[2];
      uStack_50 = param_1[3];
      local_48 = param_1[8];
      uStack_40 = param_1[9];
      local_38 = param_1[10];
      uStack_30 = param_1[0xb];
      uVar1 = FUN_144cab880(&local_68,&local_a8);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      fVar3 = *(float *)((longlong)param_1 + 100) - *(float *)((longlong)param_2 + 100);
      fVar2 = (ABS(*(float *)((longlong)param_2 + 100)) + ABS(*(float *)((longlong)param_1 + 100)))
              * 2.3841858e-07;
      if (fVar2 < fVar3) goto LAB_144cb8b61;
      if (-fVar2 <= fVar3) {
        local_68 = param_2[4];
        uStack_60 = param_2[5];
        local_58 = param_2[6];
        uStack_50 = param_2[7];
        local_48 = param_2[8];
        uStack_40 = param_2[9];
        local_38 = param_2[10];
        uStack_30 = param_2[0xb];
        local_a8 = param_1[4];
        uStack_a0 = param_1[5];
        local_98 = param_1[6];
        uStack_90 = param_1[7];
        local_88 = param_1[8];
        uStack_80 = param_1[9];
        local_78 = param_1[10];
        uStack_70 = param_1[0xb];
        uVar1 = FUN_144cab880(&local_a8,&local_68);
        return uVar1;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 144cb8b90 FUN_144cb8b90 body=1255 status=ok
// SIG undefined FUN_144cb8b90(void)

uint FUN_144cb8b90(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  longlong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  FUN_144cac5a0(param_2 + 0x40,param_1,&local_128);
  uVar11 = local_100;
  uVar12 = local_f8;
  uVar13 = local_108;
  if (*(longlong *)(param_1 + 0x18) < 0) {
    uVar13 = local_108 - *(ulonglong *)(param_2 + 0x40);
    uVar12 = (ulonglong)(local_108 < *(ulonglong *)(param_2 + 0x40));
    uVar7 = local_100 - *(ulonglong *)(param_2 + 0x48);
    uVar11 = uVar7 - uVar12;
    uVar7 = (ulonglong)(local_100 < *(ulonglong *)(param_2 + 0x48) || uVar7 < uVar12);
    uVar9 = local_f8 - *(ulonglong *)(param_2 + 0x50);
    uVar12 = uVar9 - uVar7;
    local_f0 = (local_f0 - *(longlong *)(param_2 + 0x58)) -
               (ulonglong)(local_f8 < *(ulonglong *)(param_2 + 0x50) || uVar9 < uVar7);
  }
  puVar1 = (ulonglong *)(param_1 + 0x40);
  FUN_144cac5a0(puVar1,param_2,&local_218);
  uVar7 = local_1f8;
  uVar9 = local_1f0;
  uVar10 = local_1e8;
  if (*(longlong *)(param_2 + 0x18) < 0) {
    uVar7 = local_1f8 - *puVar1;
    uVar10 = local_1f0 - *(ulonglong *)(param_1 + 0x48);
    uVar9 = uVar10 - (local_1f8 < *puVar1);
    uVar2 = (ulonglong)
            (local_1f0 < *(ulonglong *)(param_1 + 0x48) || uVar10 < (local_1f8 < *puVar1));
    uVar6 = local_1e8 - *(ulonglong *)(param_1 + 0x50);
    uVar10 = uVar6 - uVar2;
    local_1e0 = (local_1e0 - *(longlong *)(param_1 + 0x58)) -
                (ulonglong)(local_1e8 < *(ulonglong *)(param_1 + 0x50) || uVar6 < uVar2);
  }
  local_78 = local_218 - local_128;
  local_70 = (local_210 - local_120) - (ulonglong)(local_218 < local_128);
  uVar2 = (ulonglong)
          (local_210 < local_120 || local_210 - local_120 < (ulonglong)(local_218 < local_128));
  local_68 = (local_208 - local_118) - uVar2;
  uVar2 = (ulonglong)(local_208 < local_118 || local_208 - local_118 < uVar2);
  local_60 = (local_200 - local_110) - uVar2;
  uVar2 = (ulonglong)(local_200 < local_110 || local_200 - local_110 < uVar2);
  local_58 = (uVar7 - uVar13) - uVar2;
  uVar13 = (ulonglong)(uVar7 < uVar13 || uVar7 - uVar13 < uVar2);
  local_50 = (uVar9 - uVar11) - uVar13;
  local_48 = (uVar10 - uVar12) - (ulonglong)(uVar9 < uVar11 || uVar9 - uVar11 < uVar13);
  FUN_144cac5a0(param_2 + 0x40,param_1 + 0x20,&local_168);
  uVar11 = local_140;
  uVar12 = local_138;
  uVar13 = local_148;
  if (*(longlong *)(param_1 + 0x38) < 0) {
    uVar13 = local_148 - *(ulonglong *)(param_2 + 0x40);
    uVar12 = (ulonglong)(local_148 < *(ulonglong *)(param_2 + 0x40));
    uVar7 = local_140 - *(ulonglong *)(param_2 + 0x48);
    uVar11 = uVar7 - uVar12;
    uVar7 = (ulonglong)(local_140 < *(ulonglong *)(param_2 + 0x48) || uVar7 < uVar12);
    uVar9 = local_138 - *(ulonglong *)(param_2 + 0x50);
    uVar12 = uVar9 - uVar7;
    local_130 = (local_130 - *(longlong *)(param_2 + 0x58)) -
                (ulonglong)(local_138 < *(ulonglong *)(param_2 + 0x50) || uVar9 < uVar7);
  }
  FUN_144cac5a0(puVar1,param_2 + 0x20,&local_218);
  uVar7 = local_1f8;
  uVar9 = local_1f0;
  uVar10 = local_1e8;
  if (*(longlong *)(param_2 + 0x38) < 0) {
    uVar7 = local_1f8 - *puVar1;
    uVar10 = local_1f0 - *(ulonglong *)(param_1 + 0x48);
    uVar9 = uVar10 - (local_1f8 < *puVar1);
    uVar2 = (ulonglong)
            (local_1f0 < *(ulonglong *)(param_1 + 0x48) || uVar10 < (local_1f8 < *puVar1));
    uVar6 = local_1e8 - *(ulonglong *)(param_1 + 0x50);
    uVar10 = uVar6 - uVar2;
    local_1e0 = (local_1e0 - *(longlong *)(param_1 + 0x58)) -
                (ulonglong)(local_1e8 < *(ulonglong *)(param_1 + 0x50) || uVar6 < uVar2);
  }
  local_128 = local_218 - local_168;
  local_120 = (local_210 - local_160) - (ulonglong)(local_218 < local_168);
  uVar2 = (ulonglong)
          (local_210 < local_160 || local_210 - local_160 < (ulonglong)(local_218 < local_168));
  local_118 = (local_208 - local_158) - uVar2;
  uVar2 = (ulonglong)(local_208 < local_158 || local_208 - local_158 < uVar2);
  local_110 = (local_200 - local_150) - uVar2;
  uVar2 = (ulonglong)(local_200 < local_150 || local_200 - local_150 < uVar2);
  local_108 = (uVar7 - uVar13) - uVar2;
  uVar13 = (ulonglong)(uVar7 < uVar13 || uVar7 - uVar13 < uVar2);
  local_100 = (uVar9 - uVar11) - uVar13;
  local_f8 = (uVar10 - uVar12) - (ulonglong)(uVar9 < uVar11 || uVar9 - uVar11 < uVar13);
  FUN_144cac5a0(param_3 + 0x40,param_1,&local_1d8);
  uVar11 = local_1b8;
  uVar12 = local_1b0;
  uVar13 = local_1a8;
  if (*(longlong *)(param_1 + 0x18) < 0) {
    uVar11 = local_1b8 - *(ulonglong *)(param_3 + 0x40);
    uVar13 = (ulonglong)(local_1b8 < *(ulonglong *)(param_3 + 0x40));
    uVar7 = local_1b0 - *(ulonglong *)(param_3 + 0x48);
    uVar12 = uVar7 - uVar13;
    uVar7 = (ulonglong)(local_1b0 < *(ulonglong *)(param_3 + 0x48) || uVar7 < uVar13);
    uVar9 = local_1a8 - *(ulonglong *)(param_3 + 0x50);
    uVar13 = uVar9 - uVar7;
    local_1a0 = (local_1a0 - *(longlong *)(param_3 + 0x58)) -
                (ulonglong)(local_1a8 < *(ulonglong *)(param_3 + 0x50) || uVar9 < uVar7);
  }
  FUN_144cac5a0(puVar1,param_3,&local_218);
  if (*(longlong *)(param_3 + 0x18) < 0) {
    bVar14 = local_1f8 < *puVar1;
    local_1f8 = local_1f8 - *puVar1;
    bVar15 = local_1f0 < *(ulonglong *)(param_1 + 0x48);
    uVar7 = local_1f0 - *(ulonglong *)(param_1 + 0x48);
    local_1f0 = uVar7 - bVar14;
    uVar7 = (ulonglong)(bVar15 || uVar7 < bVar14);
    bVar14 = local_1e8 < *(ulonglong *)(param_1 + 0x50);
    uVar9 = local_1e8 - *(ulonglong *)(param_1 + 0x50);
    local_1e8 = uVar9 - uVar7;
    local_1e0 = (local_1e0 - *(longlong *)(param_1 + 0x58)) - (ulonglong)(bVar14 || uVar9 < uVar7);
  }
  local_168 = local_218 - local_1d8;
  local_160 = (local_210 - local_1d0) - (ulonglong)(local_218 < local_1d8);
  uVar7 = (ulonglong)
          (local_210 < local_1d0 || local_210 - local_1d0 < (ulonglong)(local_218 < local_1d8));
  local_158 = (local_208 - local_1c8) - uVar7;
  uVar7 = (ulonglong)(local_208 < local_1c8 || local_208 - local_1c8 < uVar7);
  local_150 = (local_200 - local_1c0) - uVar7;
  uVar7 = (ulonglong)(local_200 < local_1c0 || local_200 - local_1c0 < uVar7);
  local_148 = (local_1f8 - uVar11) - uVar7;
  uVar11 = (ulonglong)(local_1f8 < uVar11 || local_1f8 - uVar11 < uVar7);
  local_140 = (local_1f0 - uVar12) - uVar11;
  local_138 = (local_1e8 - uVar13) - (ulonglong)(local_1f0 < uVar12 || local_1f0 - uVar12 < uVar11);
  FUN_144cac5a0(param_3 + 0x40,param_1 + 0x20,&local_e8);
  uVar11 = local_c8;
  uVar12 = local_c0;
  uVar13 = local_b8;
  if (*(longlong *)(param_1 + 0x38) < 0) {
    uVar11 = local_c8 - *(ulonglong *)(param_3 + 0x40);
    uVar13 = (ulonglong)(local_c8 < *(ulonglong *)(param_3 + 0x40));
    uVar7 = local_c0 - *(ulonglong *)(param_3 + 0x48);
    uVar12 = uVar7 - uVar13;
    uVar7 = (ulonglong)(local_c0 < *(ulonglong *)(param_3 + 0x48) || uVar7 < uVar13);
    uVar9 = local_b8 - *(ulonglong *)(param_3 + 0x50);
    uVar13 = uVar9 - uVar7;
    local_b0 = (local_b0 - *(longlong *)(param_3 + 0x58)) -
               (ulonglong)(local_b8 < *(ulonglong *)(param_3 + 0x50) || uVar9 < uVar7);
  }
  FUN_144cac5a0(puVar1,param_3 + 0x20,&local_1d8);
  uVar7 = local_1b8;
  uVar9 = local_1b0;
  uVar10 = local_1a8;
  if (*(longlong *)(param_3 + 0x38) < 0) {
    uVar7 = local_1b8 - *puVar1;
    uVar10 = local_1b0 - *(ulonglong *)(param_1 + 0x48);
    uVar9 = uVar10 - (local_1b8 < *puVar1);
    uVar2 = (ulonglong)
            (local_1b0 < *(ulonglong *)(param_1 + 0x48) || uVar10 < (local_1b8 < *puVar1));
    uVar6 = local_1a8 - *(ulonglong *)(param_1 + 0x50);
    uVar10 = uVar6 - uVar2;
    local_1a0 = (local_1a0 - *(longlong *)(param_1 + 0x58)) -
                (ulonglong)(local_1a8 < *(ulonglong *)(param_1 + 0x50) || uVar6 < uVar2);
  }
  local_218 = local_1d8 - local_e8;
  local_210 = (local_1d0 - local_e0) - (ulonglong)(local_1d8 < local_e8);
  uVar2 = (ulonglong)
          (local_1d0 < local_e0 || local_1d0 - local_e0 < (ulonglong)(local_1d8 < local_e8));
  local_208 = (local_1c8 - local_d8) - uVar2;
  uVar2 = (ulonglong)(local_1c8 < local_d8 || local_1c8 - local_d8 < uVar2);
  local_200 = (local_1c0 - local_d0) - uVar2;
  uVar2 = (ulonglong)(local_1c0 < local_d0 || local_1c0 - local_d0 < uVar2);
  local_1f8 = (uVar7 - uVar11) - uVar2;
  uVar11 = (ulonglong)(uVar7 < uVar11 || uVar7 - uVar11 < uVar2);
  local_1f0 = (uVar9 - uVar12) - uVar11;
  local_1e8 = (uVar10 - uVar13) - (ulonglong)(uVar9 < uVar12 || uVar9 - uVar12 < uVar11);
  FUN_144cc74c0(&local_128,&local_168,&local_1d8);
  FUN_144cc74c0(&local_78,&local_218,&local_e8);
  uVar11 = (ulonglong)
           (local_e0 < local_1d0 || local_e0 - local_1d0 < (ulonglong)(local_e8 < local_1d8));
  uVar12 = (ulonglong)(local_d8 < local_1c8 || local_d8 - local_1c8 < uVar11);
  uVar13 = (ulonglong)(local_d0 < local_1c0 || local_d0 - local_1c0 < uVar12);
  uVar7 = (ulonglong)(local_c8 < local_1b8 || local_c8 - local_1b8 < uVar13);
  uVar9 = (ulonglong)(local_c0 < local_1b0 || local_c0 - local_1b0 < uVar7);
  uVar10 = (ulonglong)(local_b8 < local_1a8 || local_b8 - local_1a8 < uVar9);
  uVar2 = (ulonglong)(local_b0 < local_1a0 || local_b0 - local_1a0 < uVar10);
  uVar6 = (ulonglong)(local_a8 < local_198 || local_a8 - local_198 < uVar2);
  uVar3 = (ulonglong)(local_a0 < local_190 || local_a0 - local_190 < uVar6);
  uVar4 = (ulonglong)(local_98 < local_188 || local_98 - local_188 < uVar3);
  uVar5 = (ulonglong)(local_90 < local_180 || local_90 - local_180 < uVar4);
  lVar8 = (local_80 - local_170) - (ulonglong)(local_88 < local_178 || local_88 - local_178 < uVar5)
  ;
  return (uint)(lVar8 >> 0x3f) |
         (uint)((local_88 - local_178 != uVar5 ||
                ((local_98 - local_188 != uVar3 ||
                 ((local_a8 - local_198 != uVar2 ||
                  ((local_b8 - local_1a8 != uVar9 ||
                   ((local_c8 - local_1b8 != uVar13 ||
                    ((local_d8 - local_1c8 != uVar11 ||
                     (local_e0 - local_1d0 != (ulonglong)(local_e8 < local_1d8) ||
                     local_e8 != local_1d8)) || local_d0 - local_1c0 != uVar12)) ||
                   local_c0 - local_1b0 != uVar7)) || local_b0 - local_1a0 != uVar10)) ||
                 local_a0 - local_190 != uVar6)) || local_90 - local_180 != uVar4)) || lVar8 != 0);
}



// FUNCTION 144cb9080 FUN_144cb9080 body=329 status=ok
// SIG undefined FUN_144cb9080(void)

uint FUN_144cb9080(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined1 local_80 [48];
  undefined1 local_50 [56];
  
  FUN_147e5f066(param_2 + 0x40,param_1 + 0x20,&local_b8);
  uVar11 = local_98;
  uVar12 = local_a0;
  uVar17 = local_90;
  if (*(longlong *)(param_1 + 0x30) < 0) {
    uVar12 = local_a0 - *(ulonglong *)(param_2 + 0x40);
    uVar17 = (ulonglong)(local_a0 < *(ulonglong *)(param_2 + 0x40));
    uVar5 = local_98 - *(ulonglong *)(param_2 + 0x48);
    uVar11 = uVar5 - uVar17;
    uVar5 = (ulonglong)(local_98 < *(ulonglong *)(param_2 + 0x48) || uVar5 < uVar17);
    uVar6 = local_90 - *(ulonglong *)(param_2 + 0x50);
    uVar17 = uVar6 - uVar5;
    local_88 = (local_88 - *(longlong *)(param_2 + 0x58)) -
               (ulonglong)(local_90 < *(ulonglong *)(param_2 + 0x50) || uVar6 < uVar5);
  }
  puVar7 = (ulonglong *)FUN_144cc6f10(local_80,param_1 + 0x10,param_2 + 0x20);
  puVar8 = (ulonglong *)FUN_144cc6f10(local_50,param_1,param_2);
  uVar10 = *puVar8 + *puVar7;
  uVar5 = (ulonglong)CARRY8(*puVar8,*puVar7);
  uVar6 = puVar8[1] + puVar7[1];
  uVar9 = uVar6 + uVar5;
  uVar5 = (ulonglong)(CARRY8(puVar8[1],puVar7[1]) || CARRY8(uVar6,uVar5));
  uVar6 = puVar8[2] + puVar7[2];
  uVar16 = uVar6 + uVar5;
  uVar5 = (ulonglong)(CARRY8(puVar8[2],puVar7[2]) || CARRY8(uVar6,uVar5));
  uVar6 = puVar8[3] + puVar7[3];
  uVar14 = uVar6 + uVar5;
  uVar5 = (ulonglong)(CARRY8(puVar8[3],puVar7[3]) || CARRY8(uVar6,uVar5));
  uVar1 = puVar8[4] + puVar7[4];
  uVar15 = uVar1 + uVar5;
  uVar6 = (ulonglong)CARRY8(uVar10,local_b8);
  uVar2 = uVar9 + local_b0;
  uVar9 = (ulonglong)(CARRY8(uVar9,local_b0) || CARRY8(uVar2,uVar6));
  uVar3 = uVar16 + local_a8;
  uVar16 = (ulonglong)(CARRY8(uVar16,local_a8) || CARRY8(uVar3,uVar9));
  uVar4 = uVar14 + uVar12;
  uVar12 = (ulonglong)(CARRY8(uVar14,uVar12) || CARRY8(uVar4,uVar16));
  uVar14 = uVar15 + uVar11;
  lVar13 = puVar8[5] + puVar7[5] + (ulonglong)(CARRY8(puVar8[4],puVar7[4]) || CARRY8(uVar1,uVar5)) +
           uVar17 + (ulonglong)(CARRY8(uVar15,uVar11) || CARRY8(uVar14,uVar12));
  return (uint)((uVar14 + uVar12 != 0 ||
                ((uVar3 + uVar9 != 0 || (uVar2 + uVar6 != 0 || uVar10 + local_b8 != 0)) ||
                uVar4 + uVar16 != 0)) || lVar13 != 0) | (uint)(lVar13 >> 0x3f);
}



// FUNCTION 144cb91d0 FUN_144cb91d0 body=235 status=ok
// SIG undefined FUN_144cb91d0(void)

undefined8 FUN_144cb91d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x38) * *(float *)(param_2 + 0x60) +
          *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 100) + *(float *)(param_1 + 0x40);
  fVar2 = (ABS(*(float *)(param_2 + 100)) * ABS(*(float *)(param_1 + 0x3c)) +
           ABS(*(float *)(param_2 + 0x60)) * ABS(*(float *)(param_1 + 0x38)) +
          ABS(*(float *)(param_1 + 0x40))) * 3.5762787e-07;
  if (fVar2 < fVar3) {
    return 1;
  }
  if (fVar3 < -fVar2) {
    return 0xffffffff;
  }
  uVar1 = FUN_144cb9080();
  return uVar1;
}



// FUNCTION 144cb92c0 FUN_144cb92c0 body=337 status=ok
// SIG undefined FUN_144cb92c0(void)

uint FUN_144cb92c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 local_68 [32];
  undefined1 local_48 [64];
  
  fVar10 = *(float *)(param_1 + 0x38) * *(float *)(param_2 + 0x3c) -
           *(float *)(param_2 + 0x38) * *(float *)(param_1 + 0x3c);
  fVar9 = (ABS(*(float *)(param_2 + 0x38)) * ABS(*(float *)(param_1 + 0x3c)) +
          ABS(*(float *)(param_2 + 0x3c)) * ABS(*(float *)(param_1 + 0x38))) * 3.5762787e-07;
  if (fVar10 <= fVar9) {
    if (-fVar9 <= fVar10) {
      puVar6 = (ulonglong *)FUN_144cc5990(local_68,param_1 + 0x10,param_2);
      puVar7 = (ulonglong *)FUN_144cc5990(local_48,param_1,param_2 + 0x10);
      uVar1 = (ulonglong)(*puVar7 < *puVar6);
      uVar3 = puVar7[1] - puVar6[1];
      uVar2 = (ulonglong)(puVar7[1] < puVar6[1] || uVar3 < uVar1);
      uVar4 = puVar7[2] - puVar6[2];
      lVar8 = (puVar7[3] - puVar6[3]) - (ulonglong)(puVar7[2] < puVar6[2] || uVar4 < uVar2);
      uVar5 = (uint)((uVar4 != uVar2 || (uVar3 != uVar1 || *puVar7 != *puVar6)) || lVar8 != 0) |
              (uint)(lVar8 >> 0x3f);
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144cb9420 FUN_144cb9420 body=443 status=ok
// SIG undefined FUN_144cb9420(void)

bool FUN_144cb9420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_b8 = -param_2[4];
  uVar1 = (ulonglong)(param_2[4] != 0);
  uVar2 = -param_2[5];
  lStack_b0 = uVar2 - uVar1;
  local_a8 = -(ulonglong)(param_2[5] != 0 || uVar2 < uVar1) - param_2[6];
  local_f8 = -param_1[4];
  uVar1 = (ulonglong)(param_1[4] != 0);
  uVar2 = -param_1[5];
  lStack_f0 = uVar2 - uVar1;
  local_e8 = -(ulonglong)(param_1[5] != 0 || uVar2 < uVar1) - param_1[6];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_28 = *param_2;
  uStack_20 = param_2[1];
  local_18 = *(undefined4 *)(param_1 + 2);
  uStack_14 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_10 = *(undefined4 *)(param_1 + 3);
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_d8 = *param_1;
  uStack_d0 = param_1[1];
  local_c8 = local_e8;
  cVar3 = FUN_144cc4040(&local_d8,&local_18,&local_28,&local_38,&local_f8,&local_b8,&local_98);
  if (cVar3 != '\0') {
    *param_3 = local_98;
    param_3[1] = local_90;
    param_3[2] = local_88;
    param_3[3] = local_80;
    param_3[4] = local_78;
    param_3[5] = local_70;
    param_3[6] = local_68;
    param_3[7] = local_60;
    param_3[8] = local_58;
    param_3[9] = local_50;
    param_3[10] = local_48;
    param_3[0xb] = local_40;
  }
  return cVar3 != '\0';
}



// FUNCTION 144cb95e0 FUN_144cb95e0 body=449 status=ok
// SIG undefined FUN_144cb95e0(void)

void FUN_144cb95e0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
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
  bool bVar12;
  bool bVar13;
  longlong local_res8;
  longlong local_res10;
  longlong *local_res18;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  longlong local_40;
  
  local_res8 = -param_2[2];
  if ((longlong)-param_2[2] < 0) {
    local_res8 = param_2[2];
  }
  local_res18 = param_3;
  FUN_144cc6970(param_1 + 0x40,param_2 + 3,&local_68);
  uVar9 = local_48;
  uVar10 = local_58;
  uVar11 = local_50;
  if ((longlong)param_2[4] < 0) {
    uVar10 = local_58 - *(ulonglong *)(param_1 + 0x40);
    uVar9 = (ulonglong)(local_58 < *(ulonglong *)(param_1 + 0x40));
    uVar4 = local_50 - *(ulonglong *)(param_1 + 0x48);
    uVar11 = uVar4 - uVar9;
    uVar4 = (ulonglong)(local_50 < *(ulonglong *)(param_1 + 0x48) || uVar4 < uVar9);
    uVar5 = local_48 - *(ulonglong *)(param_1 + 0x50);
    uVar9 = uVar5 - uVar4;
    local_40 = (local_40 - *(longlong *)(param_1 + 0x58)) -
               (ulonglong)(local_48 < *(ulonglong *)(param_1 + 0x50) || uVar5 < uVar4);
  }
  uVar1 = *param_2;
  FUN_144cc6890(param_1 + 0x20,param_2[1],&local_90,1);
  FUN_144cc6890(param_1,uVar1,&local_b8,1);
  uVar5 = local_b8 + local_90;
  uVar6 = uStack_b0 + local_88 + (ulonglong)CARRY8(local_b8,local_90);
  uVar4 = (ulonglong)
          (CARRY8(uStack_b0,local_88) ||
          CARRY8(uStack_b0 + local_88,(ulonglong)CARRY8(local_b8,local_90)));
  uVar7 = local_a8 + local_80 + uVar4;
  uVar4 = (ulonglong)(CARRY8(local_a8,local_80) || CARRY8(local_a8 + local_80,uVar4));
  bVar12 = CARRY8(uStack_a0,local_78);
  uVar2 = uStack_a0 + local_78;
  uVar8 = uVar2 + uVar4;
  local_90 = uVar5 + local_68;
  uVar5 = (ulonglong)CARRY8(uVar5,local_68);
  uVar3 = uVar6 + local_60;
  local_88 = uVar3 + uVar5;
  uVar5 = (ulonglong)(CARRY8(uVar6,local_60) || CARRY8(uVar3,uVar5));
  uVar3 = uVar7 + uVar10;
  local_80 = uVar3 + uVar5;
  uVar10 = (ulonglong)(CARRY8(uVar7,uVar10) || CARRY8(uVar3,uVar5));
  uVar5 = uVar8 + uVar11;
  local_78 = uVar5 + uVar10;
  local_70 = local_98 + local_70 + (ulonglong)(bVar12 || CARRY8(uVar2,uVar4)) + uVar9 +
             (ulonglong)(CARRY8(uVar8,uVar11) || CARRY8(uVar5,uVar10));
  FUN_144cc5ac0(&local_90,&local_res8,&local_b8,&local_res10);
  if (((uint)(local_res10 >> 0x3f) | (uint)(local_res10 != 0)) == 0xffffffff) {
    bVar12 = local_b8 != 0;
    local_b8 = local_b8 - 1;
    bVar13 = uStack_b0 != 0;
    uVar9 = uStack_b0 - 1;
    uStack_b0 = uVar9 + bVar12;
    uVar9 = (ulonglong)(bVar13 || CARRY8(uVar9,(ulonglong)bVar12));
    bVar12 = local_a8 != 0;
    uVar10 = local_a8 - 1;
    local_a8 = uVar10 + uVar9;
    uStack_a0 = (uStack_a0 - 1) + (ulonglong)(bVar12 || CARRY8(uVar10,uVar9));
  }
  uVar9 = (ulonglong)(uStack_b0 != 0 || -uStack_b0 < (ulonglong)(local_b8 != 0));
  *local_res18 = -local_b8;
  local_res18[1] = -uStack_b0 - (ulonglong)(local_b8 != 0);
  local_res18[2] = -local_a8 - uVar9;
  local_res18[3] = -(ulonglong)(local_a8 != 0 || -local_a8 < uVar9) - uStack_a0;
  return;
}



// FUNCTION 144cb97b0 FUN_144cb97b0 body=214 status=ok
// SIG undefined FUN_144cb97b0(void)

undefined8 * FUN_144cb97b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = param_2[6];
  lVar3 = FUN_147e513e3(param_1 + 2,local_res8);
  iVar2 = local_res8[0] * 0x800000;
  lVar4 = FUN_147e513e3(param_1,local_res8);
  *(float *)(param_1 + 7) = (float)(local_res8[0] * 0x800000 + (int)(float)lVar4) * 5.421011e-20;
  *(float *)((longlong)param_1 + 0x3c) = (float)((int)(float)lVar3 + iVar2) * 5.421011e-20;
  lVar3 = FUN_147e510dd(param_1 + 4,local_res8);
  *(float *)(param_1 + 8) = (float)((int)(float)lVar3 + local_res8[0] * 0x800000) * 5.421011e-20;
  return param_1;
}



// FUNCTION 144cb9890 FUN_144cb9890 body=179 status=ok
// SIG undefined FUN_144cb9890(void)

void FUN_144cb9890(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  
  lVar2 = FUN_147e513e3(param_1 + 0x10,local_res8);
  iVar1 = local_res8[0] * 0x800000;
  lVar3 = FUN_147e513e3(param_1,local_res8);
  *(float *)(param_1 + 0x38) = (float)(local_res8[0] * 0x800000 + (int)(float)lVar3) * 5.421011e-20;
  *(float *)(param_1 + 0x3c) = (float)((int)(float)lVar2 + iVar1) * 5.421011e-20;
  lVar2 = FUN_147e510dd(param_1 + 0x20,local_res8);
  *(float *)(param_1 + 0x40) = (float)((int)(float)lVar2 + local_res8[0] * 0x800000) * 5.421011e-20;
  return;
}



// FUNCTION 144cb9950 FUN_144cb9950 body=938 status=ok
// SIG undefined FUN_144cb9950(void)

longlong * FUN_144cb9950(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res18;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  longlong local_38;
  longlong lStack_30;
  
  uVar1 = param_1[3];
  if (uVar1 == 0 && (param_1[2] == 0 && (param_1[1] == 0 && *param_1 == 0))) {
    local_98 = param_1[4];
    uStack_90 = param_1[5];
    local_88 = param_1[6];
    uStack_80 = param_1[7];
    local_78 = param_1[8];
    uStack_70 = param_1[9];
    local_68 = param_1[10];
    uStack_60 = param_1[0xb];
    FUN_144cc1e10(&local_98,&local_118);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = local_118;
    param_2[5] = lStack_110;
    param_2[6] = CONCAT44(uStack_104,local_108);
    param_2[7] = CONCAT44(uStack_fc,uStack_100);
    param_2[8] = local_f8;
    param_2[9] = lStack_f0;
    param_2[10] = local_e8;
    param_2[0xb] = lStack_e0;
  }
  else {
    uVar2 = param_1[7];
    if (uVar2 == 0 && (param_1[6] == 0 && (param_1[5] == 0 && param_1[4] == 0))) {
      local_98 = *param_1;
      uStack_90 = param_1[1];
      local_88 = param_1[2];
      uStack_80 = param_1[3];
      local_78 = param_1[8];
      uStack_70 = param_1[9];
      local_68 = param_1[10];
      uStack_60 = param_1[0xb];
      FUN_144cc1e10(&local_98,&local_118);
      *param_2 = local_118;
      param_2[1] = lStack_110;
      param_2[2] = CONCAT44(uStack_104,local_108);
      param_2[3] = CONCAT44(uStack_fc,uStack_100);
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = local_f8;
      param_2[9] = lStack_f0;
      param_2[10] = local_e8;
      param_2[0xb] = lStack_e0;
    }
    else {
      uVar6 = (longlong)uVar1 >> 0x3f;
      uVar7 = *param_1 ^ uVar6;
      local_138 = uVar7 - uVar6;
      uVar8 = param_1[1] ^ uVar6;
      uVar7 = (ulonglong)(uVar7 < uVar6);
      uVar3 = uVar8 - uVar6;
      lStack_130 = uVar3 - uVar7;
      uVar9 = param_1[2] ^ uVar6;
      uVar7 = (ulonglong)(uVar8 < uVar6 || uVar3 < uVar7);
      uVar3 = uVar9 - uVar6;
      local_128 = uVar3 - uVar7;
      uStack_120 = ((uVar1 ^ uVar6) - uVar6) - (ulonglong)(uVar9 < uVar6 || uVar3 < uVar7);
      uVar6 = (longlong)param_1[7] >> 0x3f;
      uVar7 = param_1[4] ^ uVar6;
      local_b8 = uVar7 - uVar6;
      uVar7 = (ulonglong)(uVar7 < uVar6);
      uVar3 = (param_1[5] ^ uVar6) - uVar6;
      lStack_b0 = uVar3 - uVar7;
      uVar7 = (ulonglong)((param_1[5] ^ uVar6) < uVar6 || uVar3 < uVar7);
      uVar3 = (param_1[6] ^ uVar6) - uVar6;
      local_a8 = uVar3 - uVar7;
      local_a0 = ((param_1[7] ^ uVar6) - uVar6) -
                 (ulonglong)((param_1[6] ^ uVar6) < uVar6 || uVar3 < uVar7);
      FUN_144cc57b0(&local_118,&local_138,&local_b8,local_res18);
      FUN_147e58614(&local_98,&local_118,param_1 + 8,local_res18);
      FUN_147e58a78(&local_138,&local_98,&local_118,&local_158);
      FUN_147e58a78(&local_b8,&local_98,&local_138,&local_158);
      lVar5 = lStack_110;
      lVar4 = local_118;
      local_38 = local_118;
      lStack_30 = lStack_110;
      local_158 = local_118;
      lStack_150 = lStack_110;
      local_b8 = local_138;
      lStack_b0 = lStack_130;
      local_118 = local_138;
      lStack_110 = lStack_130;
      local_d8 = CONCAT44(uStack_104,local_108);
      uStack_d0 = CONCAT44(uStack_fc,uStack_100);
      local_148 = CONCAT44(uStack_104,local_108);
      uStack_140 = CONCAT44(uStack_fc,uStack_100);
      local_108 = (undefined4)local_128;
      uStack_104 = local_128._4_4_;
      uStack_100 = (undefined4)uStack_120;
      uStack_fc = uStack_120._4_4_;
      if ((longlong)uVar1 < 0) {
        local_38 = -lVar4;
        uVar1 = (ulonglong)(lVar4 != 0);
        uVar7 = -lVar5;
        lStack_30 = uVar7 - uVar1;
        uVar1 = (ulonglong)(lVar5 != 0 || uVar7 < uVar1);
        local_d8 = -local_148 - uVar1;
        uStack_d0 = -(ulonglong)(local_148 != 0 || (ulonglong)-local_148 < uVar1) - uStack_140;
        local_c8 = local_d8;
        lStack_c0 = uStack_d0;
      }
      lVar4 = local_128;
      lVar5 = uStack_120;
      if ((longlong)uVar2 < 0) {
        local_158 = -local_138;
        lStack_150 = -lStack_130 - (ulonglong)(local_138 != 0);
        uVar1 = (ulonglong)(lStack_130 != 0 || (ulonglong)-lStack_130 < (ulonglong)(local_138 != 0))
        ;
        local_148 = -local_128 - uVar1;
        uStack_140 = -(ulonglong)(local_128 != 0 || (ulonglong)-local_128 < uVar1) - uStack_120;
        lVar4 = local_148;
        lVar5 = uStack_140;
        local_b8 = local_158;
        lStack_b0 = lStack_150;
      }
      lStack_130 = lVar5;
      local_138 = lVar4;
      FUN_147e58a78(param_1 + 8,&local_98,&local_118,&local_158);
      *param_2 = local_38;
      param_2[1] = lStack_30;
      param_2[2] = local_d8;
      param_2[3] = uStack_d0;
      param_2[4] = local_b8;
      param_2[5] = lStack_b0;
      param_2[6] = local_138;
      param_2[7] = lStack_130;
      param_2[8] = local_118;
      param_2[9] = lStack_110;
      param_2[10] = CONCAT44(uStack_104,local_108);
      param_2[0xb] = CONCAT44(uStack_fc,uStack_100);
    }
  }
  return param_2;
}



// FUNCTION 144cb9d00 FUN_144cb9d00 body=197 status=ok
// SIG undefined FUN_144cb9d00(void)

void FUN_144cb9d00(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  int local_res8 [2];
  int local_res10 [6];
  
  fVar2 = (float)FUN_144cc3f10(param_1 + 0x40,local_res8);
  lVar1 = FUN_147e59322(param_1,local_res10);
  if ((float)lVar1 == 0.0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    *(int *)(param_1 + 0x60) =
         local_res10[0] * 0x800000 + local_res8[0] * -0x800000 + (int)((float)lVar1 / fVar2);
  }
  lVar1 = FUN_147e59322(param_1 + 0x20,local_res10);
  if ((float)lVar1 != 0.0) {
    *(int *)(param_1 + 100) =
         (local_res10[0] - local_res8[0]) * 0x800000 + (int)((float)lVar1 / fVar2);
    return;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}



// FUNCTION 144cb9dd0 FUN_144cb9dd0 body=395 status=ok
// SIG undefined FUN_144cb9dd0(void)

longlong * FUN_144cb9dd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*param_1,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    FUN_147e57e02(param_2,&PTR_vftable_14c6e47a0);
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
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 3);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
    FUN_147e57e68(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *plVar1 = 0;
    param_2[3] = 0;
  }
  plVar1 = param_2 + 4;
  plVar2 = param_1 + 4;
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 5) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) * 0x70);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
    FUN_147e57ece(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *plVar1 = 0;
    param_2[5] = 0;
  }
  return param_1;
}



// FUNCTION 144cb9f60 FUN_144cb9f60 body=670 status=ok
// SIG undefined FUN_144cb9f60(void)

undefined4 * FUN_144cb9f60(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  longlong *_Dst;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  uint local_res18;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar8 = 8;
  if (8 < param_3) {
    iVar8 = param_3;
  }
  lVar3 = param_1[1];
  lVar11 = 0;
  local_48 = 0;
  local_40 = 0;
  local_res18 = 0x80000000;
  local_3c = 0x80000000;
  if (param_1 != &local_48) {
    FUN_143821c08(&local_48,&PTR_vftable_14c6e47c0);
    FUN_143821c08(param_1,&PTR_vftable_14c6e47c0);
    lVar11 = *param_1;
    *param_1 = local_48;
    local_res18 = *(uint *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_141807e20(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar8);
  }
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar5 | uVar5 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar7 = uVar5 - (uVar5 >> 1);
  if ((int)param_1[1] < (int)uVar7) {
    *(uint *)(param_1 + 1) = uVar7;
  }
  else if ((int)uVar7 < (int)param_1[1]) {
    *(uint *)(param_1 + 1) = uVar7;
  }
  iVar9 = 0;
  iVar8 = iVar9;
  if ((0 < (int)uVar7) && (iVar8 = 0, 3 < uVar7)) {
    _Dst = (longlong *)*param_1;
    if ((param_1 < _Dst) ||
       ((longlong *)((longlong)_Dst + (longlong)(int)(uVar7 - 1) * 4) < param_1)) {
      uVar4 = uVar7 & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      do {
        iVar9 = iVar9 + 4;
      } while (iVar9 < (int)(uVar7 - uVar4));
      iVar8 = (uVar7 - uVar4) + 3;
      memset(_Dst,-1,(longlong)((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) << 4);
      iVar8 = iVar9;
    }
  }
  for (lVar6 = (longlong)iVar8; lVar6 < (longlong)((ulonglong)uVar5 - (ulonglong)(uVar5 >> 1));
      lVar6 = lVar6 + 1) {
    *(undefined4 *)(*param_1 + lVar6 * 4) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  lVar6 = 0;
  if (0 < (longlong)(int)lVar3) {
    do {
      iVar8 = *(int *)(lVar11 + lVar6 * 4);
      if (iVar8 != -1) {
        iVar9 = (int)param_1[1] + -1;
        if (iVar9 < (int)param_1[2] * 2) {
          FUN_144cb9f60(param_1,local_res8,iVar9 * 2 + 2);
        }
        iVar10 = 1;
        lVar2 = *param_1;
        uVar7 = (int)param_1[1] - 1;
        uVar5 = iVar8 * -0x61c8864f;
        uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                iVar8 * -0x4f000000) & uVar7;
        lVar1 = (longlong)(int)uVar5 * 4;
        iVar9 = *(int *)(lVar1 + lVar2);
        while (iVar9 != -1) {
          if (*(int *)(lVar1 + lVar2) == iVar8) {
            iVar10 = 0;
            break;
          }
          uVar5 = uVar5 + 1 & uVar7;
          lVar1 = (longlong)(int)uVar5 * 4;
          iVar9 = *(int *)(lVar1 + lVar2);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar10;
        *(int *)(lVar2 + (longlong)(int)uVar5 * 4) = iVar8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)lVar3);
  }
  *param_2 = 0;
  if ((-1 < (int)local_res18) && (lVar11 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar11,(ulonglong)(local_res18 & 0x7fffffff) << 2);
  }
  return param_2;
}



// FUNCTION 144cba200 FUN_144cba200 body=1610 status=ok
// SIG undefined FUN_144cba200(void)

undefined2 *
FUN_144cba200(undefined2 *param_1,longlong param_2,longlong param_3,longlong param_4,
             longlong param_5,undefined2 param_6,undefined4 param_7,longlong *param_8,
             undefined4 param_9,undefined2 param_10)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined2 uVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 local_res10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  
  uVar8 = param_9;
  plVar7 = param_8;
  cVar5 = (char)param_6;
  param_8[9] = param_5;
  *(bool *)(param_8 + 0x30) = param_3 == param_4;
  *param_8 = param_3;
  *(undefined4 *)((longlong)param_8 + 0x184) = param_7;
  *(char *)(param_8 + 2) = (char)param_6;
  param_8[1] = param_4;
  param_5 = 0x50;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,&param_5,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar9,"ReferencedFunctorTask");
  }
  local_48 = SUB84(plVar7,0);
  uStack_44 = (undefined4)((ulonglong)plVar7 >> 0x20);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,&param_6,0,0x40);
  }
  else {
    puVar9[1] = 0xffffffff;
    puVar9[2] = 1;
    *puVar9 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar9[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    puVar9[8] = "setupFaceClipping";
    *(undefined4 *)(puVar9 + 6) = local_48;
    *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_44;
    *(undefined4 *)(puVar9 + 7) = uVar8;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_3c;
    FUN_144be3b70(param_2,&param_6,puVar9,0x40);
    FUN_144b3f230(puVar9);
  }
  uVar2 = param_6;
  plVar1 = (longlong *)(param_2 + 0x328);
  iVar11 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar11;
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  local_res10 = 0x50;
  *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = param_10;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,&local_res10,0);
  if (cVar5 == '\0') {
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar9,"ReferencedMultiplicitousFunctorTask");
    }
    if (puVar9 == (undefined8 *)0x0) {
      FUN_144be3b70(param_2,&param_10,0,0x40);
    }
    else {
      puVar9[2] = 1;
      puVar9[1] = 0xffffffff;
      *puVar9 = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`7'::<lambda_3>_>
                ::vftable;
      puVar9[4] = hkaiNavMeshGeneration::
                  ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`7'::<lambda_3>_>
                  ::vftable;
      puVar9[8] = "CalculateAabbs";
      puVar9[6] = plVar7;
      *(undefined4 *)(puVar9 + 7) = uVar8;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = 1;
      FUN_144be3b70(param_2,&param_10,puVar9,0x40);
      FUN_144b3f230(puVar9);
    }
    uVar6 = param_10;
    uVar2 = param_6;
    iVar11 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
      FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    iVar3 = *(int *)(param_2 + 0x330);
    lVar4 = *plVar1;
    *(int *)(param_2 + 0x330) = iVar11;
    *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = uVar2;
    *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar6;
    plVar10 = plVar7 + 0x4b0;
  }
  else {
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar9,"ReferencedMultiplicitousFunctorTask");
    }
    if (puVar9 == (undefined8 *)0x0) {
      FUN_144be3b70(param_2,&param_10,0,0x40);
    }
    else {
      puVar9[2] = 1;
      puVar9[1] = 0xffffffff;
      *puVar9 = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`5'::<lambda_2>_>
                ::vftable;
      puVar9[4] = hkaiNavMeshGeneration::
                  ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`5'::<lambda_2>_>
                  ::vftable;
      puVar9[8] = "CalculateAabbs";
      puVar9[6] = plVar7;
      *(undefined4 *)(puVar9 + 7) = uVar8;
      *(undefined4 *)((longlong)puVar9 + 0x3c) = 1;
      FUN_144be3b70(param_2,&param_10,puVar9,0x40);
      FUN_144b3f230(puVar9);
    }
    uVar6 = param_10;
    uVar2 = param_6;
    iVar11 = *(int *)(param_2 + 0x330) + 1;
    if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
      FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    iVar3 = *(int *)(param_2 + 0x330);
    lVar4 = *plVar1;
    *(int *)(param_2 + 0x330) = iVar11;
    *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = uVar2;
    *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar6;
    plVar10 = plVar7 + 0x4b3;
  }
  FUN_147e557be(param_10,plVar7 + 0x153,plVar7 + 0x158,plVar7 + 0x4a6,plVar7 + 0x155,uVar8,0x40,
                plVar10,param_2,&param_5,&param_8,0,0,0,0,0);
  param_5 = 0x50;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,&param_5,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar9,"ReferencedFunctorTask");
  }
  if (puVar9 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,&param_7,0,0x40);
  }
  else {
    puVar9[2] = 1;
    puVar9[1] = 0xffffffff;
    *puVar9 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_4>_>
              ::vftable;
    puVar9[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_4>_>
                ::vftable;
    puVar9[8] = "setupFaceClipping";
    *(undefined4 *)(puVar9 + 6) = local_48;
    *(undefined4 *)((longlong)puVar9 + 0x34) = uStack_44;
    *(undefined4 *)(puVar9 + 7) = uVar8;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = uStack_3c;
    FUN_144be3b70(param_2,&param_7,puVar9,0x40);
    FUN_144b3f230(puVar9);
  }
  uVar6 = param_8._0_2_;
  iVar11 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = (undefined2)param_7;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar11;
  param_5 = 0x50;
  *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = uVar6;
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,&param_5,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar9,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar9 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,&param_9,0,0x40);
  }
  else {
    puVar9[2] = 1;
    puVar9[1] = 0xffffffff;
    *puVar9 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_5>_>
              ::vftable;
    puVar9[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_5>_>
                ::vftable;
    puVar9[8] = "ClipFaces";
    puVar9[6] = plVar7;
    *(undefined4 *)(puVar9 + 7) = uVar8;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = 1;
    FUN_144be3b70(param_2,&param_9,puVar9,0x40);
    FUN_144b3f230(puVar9);
  }
  iVar11 = *(int *)(param_2 + 0x330) + 1;
  uVar6 = (undefined2)param_9;
  uVar2 = (undefined2)param_7;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar11;
  param_5 = 0x40;
  *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = uVar2;
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar6;
  puVar9 = (undefined8 *)(*DAT_14c787670)(0,&param_5,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar9,"ReferencedFunctorTask");
  }
  if (puVar9 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,param_1,0,0x40);
  }
  else {
    puVar9[2] = 1;
    puVar9[1] = 0xffffffff;
    *puVar9 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_6>_>
              ::vftable;
    puVar9[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::General::Clip::addTasks(hkTaskGraph&___ptr64,hkaiNavMeshGeneration::Mesh_const&___ptr64,hkaiNavMeshGeneration::Mesh&___ptr64,hkaiNavMeshGeneration::EdgeConnection::General::CycleMesh_const*___ptr64,bool,hkFpMath::FpUint<23>,hkaiNavMeshGeneration::EdgeConnection::General::Clip::ClipContext&___ptr64,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_6>_>
                ::vftable;
    puVar9[7] = "PostClip";
    puVar9[6] = plVar7;
    FUN_144be3b70(param_2,param_1,puVar9,0x40);
    FUN_144b3f230(puVar9);
  }
  iVar11 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = *param_1;
  uVar6 = (undefined2)param_9;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar11) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar11;
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = uVar6;
  return param_1;
}



// FUNCTION 144cba850 FUN_144cba850 body=4332 status=ok
// SIG undefined FUN_144cba850(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144cba850(longlong ****param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6,longlong *param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  longlong **pplVar3;
  longlong **pplVar4;
  longlong ***ppplVar5;
  ulonglong ***pppuVar6;
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
  ulonglong ***pppuVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  byte bVar26;
  int iVar27;
  undefined8 *puVar28;
  undefined1 (*pauVar29) [16];
  ulonglong uVar30;
  undefined8 uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  longlong ****pppplVar36;
  longlong lVar37;
  float *pfVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  longlong ****pppplVar41;
  ulonglong ****ppppuVar42;
  uint uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  bool bVar46;
  float fVar47;
  longlong local_res10;
  uint local_res18;
  longlong ****local_588;
  undefined8 uStack_580;
  float *local_578 [2];
  int *local_568;
  undefined1 local_560 [8];
  undefined1 local_558 [16];
  float *local_548 [2];
  int *local_538;
  int local_530;
  uint local_52c;
  undefined4 local_528 [4];
  undefined1 local_518 [16];
  float *local_508;
  longlong ****local_4f8;
  longlong lStack_4f0;
  longlong local_4e8;
  longlong lStack_4e0;
  float *local_4d8;
  ulonglong ***pppuStack_4d0;
  longlong lStack_4c8;
  longlong ****local_4b8;
  longlong lStack_4b0;
  float *local_4a8;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined1 local_488 [8];
  undefined8 uStack_480;
  undefined1 local_478 [8];
  undefined8 uStack_470;
  undefined1 local_468 [16];
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  int *local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined4 local_3b8;
  float *local_398;
  longlong local_388;
  longlong local_380;
  float *local_378;
  longlong local_370;
  longlong local_368;
  ulonglong ***local_360;
  longlong lStack_358;
  longlong ****local_348;
  longlong lStack_340;
  longlong ****local_338;
  ulonglong uStack_330;
  longlong ****local_328;
  ulonglong ****ppppuStack_320;
  ulonglong ***local_318;
  longlong lStack_310;
  longlong ****local_308;
  longlong lStack_300;
  longlong ****local_2f8;
  ulonglong ****ppppuStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  int *local_2c8;
  int iStack_2c0;
  uint uStack_2bc;
  int local_2b8;
  undefined1 auStack_2b4 [12];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  float *local_228;
  longlong ***local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong lStack_1e8;
  float *local_1e0;
  ulonglong ***pppuStack_1d8;
  longlong local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong local_180;
  undefined4 local_178;
  uint local_174;
  longlong local_168;
  longlong lStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  int *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  
  pppplVar41 = param_1 + 1;
  local_578[0] = &local_3f8;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x2088) = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 0x2098) = 0;
  *(undefined4 *)(param_2 + 0x20a8) = 0;
  *(undefined4 *)(param_2 + 0x20b8) = 0;
  *(undefined4 *)(param_2 + 0x20c8) = 0;
  *(undefined4 *)(param_2 + 0x20d8) = 0;
  *(undefined4 *)(param_2 + 0x20e8) = 0;
  *(undefined4 *)(param_2 + 0x20f8) = 0;
  *(undefined4 *)(param_2 + 0x2110) = 0;
  local_3e8 = -_DAT_14c6dae80;
  fStack_3e4 = -fRam000000014c6dae84;
  fStack_3e0 = -fRam000000014c6dae88;
  fStack_3dc = -fRam000000014c6dae8c;
  uStack_580._0_4_ = (uint)param_2;
  uStack_580._4_4_ = (uint)((ulonglong)param_2 >> 0x20);
  local_3f8 = _DAT_14c6dae80;
  fStack_3f4 = fRam000000014c6dae84;
  fStack_3f0 = fRam000000014c6dae88;
  fStack_3ec = fRam000000014c6dae8c;
  uVar45 = (ulonglong)(int)param_3;
  local_res10 = param_2;
  local_res18 = param_3;
  local_588 = param_1;
  local_4b8 = param_1;
  lStack_4b0 = param_2;
  local_4a8 = local_578[0];
  if (*(char *)(param_1 + 2) == '\0') {
    ppplVar5 = *pppplVar41;
    pplVar3 = ppplVar5[3];
    iVar32 = *(int *)((longlong)pplVar3 + uVar45 * 4);
    do {
      pplVar4 = ppplVar5[5];
      FUN_144cbdef0(&local_4b8,iVar32);
      iVar32 = *(int *)((longlong)pplVar4 + (longlong)iVar32 * 0x60 + 0xc);
    } while (iVar32 != *(int *)((longlong)pplVar3 + uVar45 * 4));
    uVar45 = (ulonglong)local_res18;
  }
  else {
    FUN_144cbe170(param_1[9],param_4,&local_4b8);
  }
  pppplVar36 = param_1 + 0x4b3;
  local_538 = (int *)0x0;
  local_530 = 0;
  local_52c = 0x80000000;
  local_558._0_8_ = &local_538;
  local_3f8 = (0.0 - _DAT_14c6dae60) + local_3f8;
  fStack_3f4 = (0.0 - fRam000000014c6dae64) + fStack_3f4;
  fStack_3f0 = (0.0 - fRam000000014c6dae68) + fStack_3f0;
  fStack_3ec = (0.0 - fRam000000014c6dae6c) + fStack_3ec;
  fVar47 = (float)*(uint *)((longlong)param_1 + 0x184) + 1.0;
  local_3e8 = fVar47 * _DAT_14c6dae60 + local_3e8;
  fStack_3e4 = fVar47 * fRam000000014c6dae64 + fStack_3e4;
  fStack_3e0 = fVar47 * fRam000000014c6dae68 + fStack_3e0;
  fStack_3dc = fVar47 * fRam000000014c6dae6c + fStack_3dc;
  local_3f8 = local_3f8 - ABS(local_3f8) * 3.5762787e-07;
  fStack_3f4 = fStack_3f4 - ABS(fStack_3f4) * 3.5762787e-07;
  local_458 = fStack_3f0 - ABS(fStack_3f0) * 3.5762787e-07;
  fStack_3ec = fStack_3ec - ABS(fStack_3ec) * 3.5762787e-07;
  local_3e8 = local_3e8 + ABS(local_3e8) * 3.5762787e-07;
  fStack_3e4 = fStack_3e4 + ABS(fStack_3e4) * 3.5762787e-07;
  local_448 = fStack_3e0 + ABS(fStack_3e0) * 3.5762787e-07;
  fStack_3dc = fStack_3dc + ABS(fStack_3dc) * 3.5762787e-07;
  local_498 = (int *)CONCAT44(local_3f8,local_3f8);
  uStack_490 = CONCAT44(local_3f8,local_3f8);
  local_478._4_4_ = fStack_3f4;
  local_478._0_4_ = fStack_3f4;
  uStack_470._0_4_ = fStack_3f4;
  uStack_470._4_4_ = fStack_3f4;
  local_468._4_4_ = fStack_3e4;
  local_468._0_4_ = fStack_3e4;
  local_468._8_4_ = fStack_3e4;
  local_468._12_4_ = fStack_3e4;
  local_488._4_4_ = local_3e8;
  local_488._0_4_ = local_3e8;
  uStack_480._0_4_ = local_3e8;
  uStack_480._4_4_ = local_3e8;
  if (*(char *)(param_1 + 2) == '\0') {
    pppplVar36 = param_1 + 0x4b0;
  }
  fStack_454 = local_458;
  fStack_450 = local_458;
  fStack_44c = local_458;
  fStack_444 = local_448;
  fStack_440 = local_448;
  fStack_43c = local_448;
  fStack_3f0 = local_458;
  fStack_3e0 = local_448;
  FUN_144cc4470(pppplVar36,&local_498,local_558);
  FUN_144cb4bb0(*pppplVar41,local_528,uVar45 & 0xffffffff);
  puVar28 = (undefined8 *)FUN_144cb4860(*pppplVar41,&local_588,uVar45 & 0xffffffff);
  local_3d0 = *puVar28;
  local_3c8 = puVar28[1];
  FUN_144cb4cd0(*pppplVar41,&local_3c0,uVar45 & 0xffffffff);
  FUN_144cb4a80(*pppplVar41,&local_4e8,uVar45 & 0xffffffff);
  if (*(char *)(param_1 + 0x30) == '\0') {
    bVar46 = local_530 == 0;
  }
  else {
    bVar46 = local_530 == 1;
  }
  if (bVar46) {
    local_2c8 = &local_2b8;
    pppplVar36 = (longlong ****)0x0;
    uVar43 = 0;
    iVar32 = 0;
    iStack_2c0 = 1;
    local_578[0] = (float *)((ulonglong)local_578[0] & 0xffffffff00000000);
    uStack_2bc = 0x80000020;
    local_588 = (longlong ****)0x0;
    uStack_580._0_4_ = 0;
    uStack_580._4_4_ = 0x80000000;
    local_2b8 = (int)uVar45;
    do {
      uVar35 = uVar43 - 1;
      iStack_2c0 = iStack_2c0 + -1;
      uVar1 = local_2c8[iStack_2c0];
      uVar33 = uVar43;
      if (0 < (int)uVar35) {
        uVar33 = uVar1 * -0x61c8864f;
        uVar34 = (uVar33 >> 0x18 | (uVar33 & 0xff0000) >> 8 | (uVar33 & 0xff00) << 8 |
                 uVar1 * -0x4f000000) & uVar35;
        uVar2 = *(uint *)((longlong)pppplVar36 + (longlong)(int)uVar34 * 4);
        while ((uVar33 = uVar43, uVar2 != 0xffffffff && (uVar33 = uVar34, uVar2 != uVar1))) {
          uVar34 = uVar34 + 1 & uVar35;
          uVar2 = *(uint *)((longlong)pppplVar36 + (longlong)(int)uVar34 * 4);
        }
      }
      if ((int)(uVar43 - 1) < (int)uVar33) {
        if ((int)(uVar43 - 1) < iVar32 * 2) {
          FUN_144cb9f60(&local_588,&local_res10,uVar43 * 2);
          pppplVar36 = local_588;
          iVar32 = (int)local_578[0];
          uVar43 = (uint)uStack_580;
        }
        uVar35 = uVar1 * -0x61c8864f;
        iVar27 = 1;
        uVar33 = (uVar35 >> 0x18 | (uVar35 & 0xff0000) >> 8 | (uVar35 & 0xff00) << 8 |
                 uVar1 * -0x4f000000) & uVar43 - 1;
        uVar35 = *(uint *)((longlong)pppplVar36 + (longlong)(int)uVar33 * 4);
        while (uVar35 != 0xffffffff) {
          if (uVar35 == uVar1) {
            iVar27 = 0;
            break;
          }
          uVar33 = uVar33 + 1 & uVar43 - 1;
          uVar35 = *(uint *)((longlong)pppplVar36 + (longlong)(int)uVar33 * 4);
        }
        local_578[0] = (float *)CONCAT44(local_578[0]._4_4_,iVar32 + iVar27);
        *(uint *)((longlong)pppplVar36 + (longlong)(int)uVar33 * 4) = uVar1;
        *(uint *)(*param_6 + (longlong)((int)uVar1 >> 5) * 4) =
             *(uint *)(*param_6 + (longlong)((int)uVar1 >> 5) * 4) & ~(1 << (uVar1 & 0x1f));
        uVar43 = *(uint *)((longlong)(*pppplVar41)[3] + (longlong)(int)uVar1 * 4);
        uVar35 = uVar43;
        do {
          pplVar3 = (*pppplVar41)[5];
          *(uint *)(*param_7 + (longlong)((int)uVar35 >> 5) * 4) =
               *(uint *)(*param_7 + (longlong)((int)uVar35 >> 5) * 4) & ~(1 << (uVar35 & 0x1f));
          if (pplVar3[(longlong)(int)uVar35 * 0xc + 6] == (longlong *)0x0 &&
              (pplVar3[(longlong)(int)uVar35 * 0xc + 5] == (longlong *)0x0 &&
              (pplVar3[(longlong)(int)uVar35 * 0xc + 4] == (longlong *)0x0 &&
              pplVar3[(longlong)(int)uVar35 * 0xc + 3] == (longlong *)0x0))) {
            iVar27 = *(int *)(pplVar3 + (longlong)(int)uVar35 * 0xc + 2);
            iVar32 = iStack_2c0 + 1;
            pplVar4 = (*pppplVar41)[5];
            if ((int)(uStack_2bc & 0x7fffffff) < iVar32) {
              FUN_1401f86b2(&local_2c8,&PTR_vftable_14c6e47c0,(longlong)iVar32);
            }
            lVar37 = (longlong)iStack_2c0;
            iStack_2c0 = iVar32;
            if (local_2c8 + lVar37 != (int *)0x0) {
              local_2c8[lVar37] = *(int *)((longlong)pplVar4 + (longlong)iVar27 * 0x60 + 4);
            }
          }
          uVar35 = *(uint *)((longlong)pplVar3 + (longlong)(int)uVar35 * 0x60 + 0xc);
        } while (uVar35 != uVar43);
        pppplVar36 = local_588;
        iVar32 = (int)local_578[0];
        uVar43 = (uint)uStack_580;
      }
    } while (iStack_2c0 != 0);
    uStack_580._0_4_ = iStack_2c0;
    if ((-1 < (int)uStack_580._4_4_) && (pppplVar36 != (longlong ****)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,pppplVar36,(ulonglong)(uStack_580._4_4_ & 0x7fffffff) << 2);
    }
    local_588 = (longlong ****)0x0;
    uStack_580._4_4_ = 0x80000000;
    iStack_2c0 = 0;
    ppppuVar42 = (ulonglong ****)CONCAT44(0x80000000,(uint)uStack_580);
    if ((-1 < (int)uStack_2bc) &&
       (ppppuVar42 = (ulonglong ****)CONCAT44(0x80000000,(uint)uStack_580), local_2c8 != (int *)0x0)
       ) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_2c8,(ulonglong)(uStack_2bc & 0x7fffffff) << 2);
      ppppuVar42 = (ulonglong ****)CONCAT44(uStack_580._4_4_,(uint)uStack_580);
    }
  }
  else {
    uVar40 = CONCAT44(0,*(uint *)((longlong)param_1 + 0x184));
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_4d8;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar40;
    local_318 = pppuStack_4d0;
    lStack_310 = lStack_4c8;
    local_4f8 = (longlong ****)((longlong)pppuStack_4d0 - (longlong)(uVar40 * (longlong)local_4d8));
    lStack_4f0 = (lStack_4c8 - (SUB168(auVar7 * auVar15,8) - ((longlong)local_4d8 >> 0x3f & uVar40))
                 ) - (ulonglong)(pppuStack_4d0 < (ulonglong ***)(uVar40 * (longlong)local_4d8));
    ppplVar5 = param_1[1];
    local_308 = local_4f8;
    lStack_300 = lStack_4f0;
    FUN_147e582da(ppplVar5 + 7,&local_158,
                  *(undefined4 *)
                   (ppplVar5[5] +
                   (longlong)*(int *)((longlong)ppplVar5[3] + (longlong)(int)uVar45 * 4) * 0xc));
    ppppuVar42 = (ulonglong ****)CONCAT44(uStack_580._4_4_,(uint)uStack_580);
    uVar45 = uVar45 & 0xffffffff;
    if (*(char *)(param_1 + 0x30) == '\0') {
      uVar45 = 0xffffffff;
    }
    local_568 = local_538;
    local_res18 = (uint)uVar45;
    local_3d8 = local_538 + local_530;
    if (local_538 != local_3d8) {
      do {
        iVar32 = *local_568;
        uVar40 = (ulonglong)iVar32;
        if (*(char *)(param_1 + 2) == '\0') {
          uVar40 = 0xffffffff;
        }
        else {
          iVar32 = *(int *)((longlong)param_1[3] + uVar40 * 8 + 4);
        }
        if (iVar32 != (int)uVar45) {
          uStack_580 = ppppuVar42;
          FUN_144cb4a80(*param_1,&local_388,iVar32);
          param_2 = local_res10;
          if (SUB168(SEXT816((longlong)local_4d8) * SEXT816(local_380),8) -
              SUB168(SEXT816(lStack_4e0) * SEXT816((longlong)local_378),8) ==
              (ulonglong)
              ((ulonglong)(local_380 * (longlong)local_4d8) <
              (ulonglong)(lStack_4e0 * (longlong)local_378)) &&
              ((((local_388 * lStack_4e0 - local_380 * local_4e8 == 0 &&
                 (longlong)local_378 * local_4e8 - local_388 * (longlong)local_4d8 == 0) &&
                local_380 * (longlong)local_4d8 - lStack_4e0 * (longlong)local_378 == 0) &&
               SUB168(SEXT816(lStack_4e0) * SEXT816(local_388),8) -
               SUB168(SEXT816(local_4e8) * SEXT816(local_380),8) ==
               (ulonglong)((ulonglong)(local_388 * lStack_4e0) < (ulonglong)(local_380 * local_4e8))
               ) && SUB168(SEXT816(local_4e8) * SEXT816((longlong)local_378),8) -
                    SUB168(SEXT816((longlong)local_4d8) * SEXT816(local_388),8) ==
                    (ulonglong)
                    ((ulonglong)((longlong)local_378 * local_4e8) <
                    (ulonglong)(local_388 * (longlong)local_4d8)))) {
            local_2d8 = -local_370;
            lStack_2d0 = -(ulonglong)(local_370 != 0) - local_368;
            pfVar38 = (float *)-(longlong)local_378;
            if (-(longlong)local_378 < 0) {
              pfVar38 = local_378;
            }
            local_398 = pfVar38;
            if ((longlong)local_378 < 0) {
              local_2e8 = local_370;
              lStack_2e0 = -(ulonglong)(local_2d8 != 0) - lStack_2d0;
              pauVar29 = (undefined1 (*) [16])&local_2e8;
            }
            else {
              pauVar29 = (undefined1 (*) [16])&local_168;
              local_168 = local_2d8;
              lStack_160 = lStack_2d0;
            }
            local_588 = *(longlong *****)*pauVar29;
            uVar45 = *(ulonglong *)(*pauVar29 + 8);
            auVar7 = *pauVar29;
            local_348 = (longlong ****)-(longlong)pppuStack_4d0;
            lStack_340 = -(ulonglong)(pppuStack_4d0 != (ulonglong ***)0x0) - lStack_4c8;
            local_228 = (float *)-(longlong)local_4d8;
            if (-(longlong)local_4d8 < 0) {
              local_228 = local_4d8;
            }
            if ((longlong)local_4d8 < 0) {
              ppppuVar42 = &local_360;
              local_360 = pppuStack_4d0;
              lStack_358 = -(ulonglong)(local_348 != (longlong ****)0x0) - lStack_340;
            }
            else {
              ppppuVar42 = (ulonglong ****)&local_4b8;
              local_4b8 = local_348;
              lStack_4b0 = lStack_340;
            }
            pppuVar6 = ppppuVar42[1];
            pppplVar36 = (longlong ****)*ppppuVar42;
            pppuVar23 = ppppuVar42[1];
            pppplVar41 = (longlong ****)((longlong)pppplVar36 * (longlong)pfVar38);
            auVar8._8_8_ = 0;
            auVar8._0_8_ = pfVar38;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = pppplVar36;
            uVar39 = SUB168(auVar8 * auVar16,8);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = pfVar38;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = pppuVar6;
            ppppuVar42 = (ulonglong ****)((longlong)pppuVar6 * (longlong)pfVar38 + uVar39);
            uStack_580._0_4_ = (uint)ppppuVar42;
            uStack_580._4_4_ = (uint)((ulonglong)ppppuVar42 >> 0x20);
            local_578[0] = (float *)((ulonglong)
                                     CARRY8((longlong)pppuVar6 * (longlong)pfVar38,uVar39) +
                                    SUB168(auVar9 * auVar17,8));
            if ((longlong)pppuVar6 < 0) {
              local_578[0] = (float *)((longlong)local_578[0] - (longlong)pfVar38);
            }
            auVar24._8_4_ = (uint)uStack_580;
            auVar24._0_8_ = pppplVar41;
            auVar24._12_4_ = uStack_580._4_4_;
            local_508 = local_578[0];
            auVar10._8_8_ = 0;
            auVar10._0_8_ = local_228;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = local_588;
            uVar39 = SUB168(auVar10 * auVar18,8);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = local_228;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar45;
            uVar44 = uVar45 * (longlong)local_228 + uVar39;
            lVar37 = (ulonglong)CARRY8(uVar45 * (longlong)local_228,uVar39) +
                     SUB168(auVar11 * auVar19,8);
            if ((longlong)uVar45 < 0) {
              lVar37 = lVar37 - (longlong)local_228;
            }
            uVar39 = (ulonglong)
                     ((longlong ****)((longlong)local_588 * (longlong)local_228) < pppplVar41);
            uVar30 = uVar44 - auVar24._8_8_;
            local_558._0_8_ = uVar30 - uVar39;
            if (-1 < (longlong)
                     ((lVar37 - (longlong)local_578[0]) -
                     (ulonglong)(uVar44 < auVar24._8_8_ || uVar30 < uVar39))) {
              uVar39 = CONCAT44(0,*(uint *)((longlong)param_1 + 0x184));
              auVar12._8_8_ = 0;
              auVar12._0_8_ = local_228;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar39;
              uVar39 = uVar39 * (longlong)local_228;
              uStack_580._0_4_ = (uint)uVar45;
              uStack_580._4_4_ = (uint)(uVar45 >> 0x20);
              pppplVar41 = (longlong ****)((longlong)pppplVar36 + uVar39);
              uVar39 = (longlong)pppuVar23 +
                       (ulonglong)CARRY8((ulonglong)pppplVar36,uVar39) + SUB168(auVar12 * auVar20,8)
              ;
              local_578[0] = pfVar38;
              local_548[0] = local_228;
              local_508 = local_228;
              local_338 = pppplVar41;
              uStack_330 = uVar39;
              local_558._0_8_ = pppplVar41;
              local_558._8_8_ = uVar39;
              pauVar29 = (undefined1 (*) [16])FUN_144cc1da0(local_518,&local_588,local_548);
              ppppuVar42 = (ulonglong ****)CONCAT44(uStack_580._4_4_,(uint)uStack_580);
              local_398 = *(float **)pauVar29[1];
              auVar13._8_8_ = 0;
              auVar13._0_8_ = local_578[0];
              auVar21._8_8_ = 0;
              auVar21._0_8_ = pppplVar41;
              uVar45 = SUB168(auVar13 * auVar21,8);
              auVar14._8_8_ = 0;
              auVar14._0_8_ = local_578[0];
              auVar22._8_8_ = 0;
              auVar22._0_8_ = uVar39;
              uVar44 = uVar39 * (longlong)local_578[0] + uVar45;
              lVar37 = (ulonglong)CARRY8(uVar39 * (longlong)local_578[0],uVar45) +
                       SUB168(auVar14 * auVar22,8);
              if ((longlong)uVar39 < 0) {
                lVar37 = lVar37 - (longlong)local_578[0];
              }
              uVar30 = SUB168(*pauVar29,8);
              uVar45 = (ulonglong)
                       ((ulonglong)((longlong)pppplVar41 * (longlong)local_578[0]) <
                       SUB168(*pauVar29,0));
              uVar39 = uVar44 - uVar30;
              local_558._0_8_ = uVar39 - uVar45;
              param_2 = local_res10;
              pppplVar41 = local_588;
              if (-1 < (longlong)
                       ((lVar37 - (longlong)local_398) -
                       (ulonglong)(uVar44 < uVar30 || uVar39 < uVar45))) {
                local_578[0] = local_228;
                uStack_580._0_4_ = (uint)pppuVar23;
                uStack_580._4_4_ = (uint)((ulonglong)pppuVar23 >> 0x20);
                local_588 = pppplVar36;
                local_558 = auVar7;
                local_548[0] = pfVar38;
                pauVar29 = (undefined1 (*) [16])FUN_144cc1da0(local_518,&local_588,local_548);
                local_398 = *(float **)pauVar29[1];
                auVar7 = *pauVar29;
                pauVar29 = (undefined1 (*) [16])FUN_144cc1da0(&local_438,local_558,local_578);
                local_228 = *(float **)pauVar29[1];
                if (local_228 == local_398 &&
                    (SUB168(*pauVar29,8) == auVar7._8_8_ && SUB168(*pauVar29,0) == auVar7._0_8_)) {
                  ppplVar5 = *param_1;
                  FUN_147e582da(ppplVar5 + 7,&local_2c8,
                                *(undefined4 *)
                                 (ppplVar5[5] +
                                 (longlong)*(int *)((longlong)ppplVar5[3] + (longlong)iVar32 * 4) *
                                 0xc));
                  uVar25 = uStack_250;
                  uVar31 = local_258;
                  auVar7 = local_268;
                  if (*(char *)(param_1 + 0x30) != '\0') {
                    uStack_490 = CONCAT44(uStack_2bc,iStack_2c0);
                    unique0x10001250 = auStack_2b4;
                    local_488._0_4_ = local_2b8;
                    local_498 = local_2c8;
                    _local_478 = local_268;
                    local_468._8_8_ = uStack_250;
                    local_468._0_8_ = local_258;
                    local_438 = local_158;
                    uStack_430 = uStack_150;
                    local_428._8_8_ = uStack_140;
                    local_428._0_8_ = local_148;
                    local_418._8_8_ = uStack_f0;
                    local_418._0_8_ = local_f8;
                    local_408 = local_e8;
                    uStack_400 = uStack_e0;
                    iVar27 = FUN_144cab880(&local_498,&local_438);
                    if (iVar27 == 0) {
                      local_498 = local_138;
                      uStack_490 = uStack_130;
                      uStack_470 = uStack_f0;
                      local_478 = (undefined1  [8])local_f8;
                      uStack_480 = uStack_120;
                      local_488 = (undefined1  [8])local_128;
                      local_438 = local_2a8;
                      uStack_430 = uStack_2a0;
                      local_468._8_8_ = uStack_e0;
                      local_468._0_8_ = local_e8;
                      local_428 = local_298;
                      local_418 = auVar7;
                      local_408 = uVar31;
                      uStack_400 = uVar25;
                      iVar27 = FUN_144cab880(&local_438,&local_498);
                      if (iVar27 == 0) {
                        local_438 = local_288;
                        uStack_430 = uStack_280;
                        local_428 = local_278;
                        local_498 = local_118;
                        uStack_490 = uStack_110;
                        uStack_480 = uStack_100;
                        local_488 = (undefined1  [8])local_108;
                        local_418 = auVar7;
                        local_408 = uVar31;
                        uStack_400 = uVar25;
                        bVar26 = FUN_144cab9d0(&local_438,&local_498);
                      }
                      else {
                        bVar26 = (byte)((uint)iVar27 >> 0x1f);
                      }
                    }
                    else {
                      bVar26 = (byte)((uint)iVar27 >> 0x1f);
                    }
                    ppppuVar42 = (ulonglong ****)CONCAT44(uStack_580._4_4_,(uint)uStack_580);
                    param_2 = local_res10;
                    pppplVar41 = local_588;
                    if (bVar26 != 0) goto LAB_144cbb53c;
                  }
                }
                param_2 = local_res10;
                lStack_4f0 = local_res10;
                local_558._8_8_ = local_res10;
                local_558._0_8_ = param_1;
                local_4f8 = param_1;
                if (*(char *)(param_1 + 2) == '\0') {
                  ppplVar5 = *param_1;
                  pplVar3 = ppplVar5[3];
                  iVar27 = *(int *)((longlong)pplVar3 + (longlong)iVar32 * 4);
                  do {
                    pplVar4 = ppplVar5[5];
                    FUN_144cbe480(local_558,iVar27);
                    ppppuVar42 = (ulonglong ****)CONCAT44(uStack_580._4_4_,(uint)uStack_580);
                    iVar27 = *(int *)((longlong)pplVar4 + (longlong)iVar27 * 0x60 + 0xc);
                    param_2 = local_res10;
                    pppplVar41 = local_588;
                  } while (iVar27 != *(int *)((longlong)pplVar3 + (longlong)iVar32 * 4));
                }
                else {
                  FUN_144cbe6d0(param_1 + 3,uVar40 & 0xffffffff,local_558);
                  pppplVar41 = local_588;
                  ppppuVar42 = (ulonglong ****)CONCAT44(uStack_580._4_4_,(uint)uStack_580);
                }
              }
            }
          }
          else {
            local_558._0_8_ = local_res10;
            if (*(char *)(param_1 + 2) == '\0') {
              uVar31 = FUN_144ccf960(&local_438,*param_1,iVar32);
              FUN_144cb9dd0(param_2 + 0x2130,uVar31);
              FUN_147e57b84(&local_438);
              local_588 = (longlong ****)&local_318;
              ppppuStack_2f0 = (ulonglong ****)&local_2f8;
              local_508 = local_4d8;
              local_2f8 = local_588;
              uStack_580 = ppppuStack_2f0;
              FUN_144cbfed0(*param_1,param_2 + 0x2130,0,&local_388,local_518,&local_588,local_558,
                            local_558);
              pppplVar41 = local_588;
              ppppuVar42 = uStack_580;
            }
            else {
              local_588 = (longlong ****)&local_318;
              ppppuStack_320 = (ulonglong ****)&local_2f8;
              local_508 = local_4d8;
              local_328 = local_588;
              uStack_580 = ppppuStack_320;
              FUN_144cbeb10(*param_1,param_1 + 3,uVar40 & 0xffffffff,&local_388,local_518,&local_588
                            ,local_558,local_558);
              pppplVar41 = local_588;
              ppppuVar42 = uStack_580;
            }
          }
LAB_144cbb53c:
          local_588 = pppplVar41;
          uVar45 = (ulonglong)local_res18;
        }
        local_568 = local_568 + 1;
      } while (local_568 != local_3d8);
    }
    local_200 = *(longlong *)(param_2 + 8);
    local_218 = param_1[1];
    local_210 = param_5;
    local_208 = param_8;
    local_1c8 = local_528[0];
    local_1f0 = local_4e8;
    lStack_1e8 = lStack_4e0;
    local_1f8 = (longlong)*(int *)(param_2 + 0x10) * 0x120 + local_200;
    local_1c0 = local_3d0;
    local_1d0 = lStack_4c8;
    local_1b8 = local_3c8;
    local_1a8 = local_3b8;
    local_1e0 = local_4d8;
    pppuStack_1d8 = pppuStack_4d0;
    local_1a0 = 0;
    local_1b0 = local_3c0;
    local_198 = 0;
    local_180 = 0;
    local_178 = 0;
    local_174 = 0x80000000;
    uStack_580 = ppppuVar42;
    FUN_144be90e0(0x9387ab15);
    FUN_144cc1290(param_2,local_560,&local_218,param_2 + 0x48,&local_res10);
    local_178 = 0;
    if ((-1 < (int)local_174) && (local_180 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_180,(ulonglong)(local_174 & 0x7fffffff) << 2);
    }
    local_180 = 0;
    local_174 = 0x80000000;
    ppppuVar42 = uStack_580;
  }
  local_530 = 0;
  if ((-1 < (int)local_52c) && (local_538 != (int *)0x0)) {
    uStack_580 = ppppuVar42;
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_538,(ulonglong)(local_52c & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144cbb940 FUN_144cbb940 body=142 status=ok
// SIG undefined FUN_144cbb940(void)

void FUN_144cbb940(longlong *param_1)

{
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144cbb9d0 FUN_144cbb9d0 body=232 status=ok
// SIG undefined FUN_144cbb9d0(void)

void FUN_144cbb9d0(longlong *param_1,byte param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
    FUN_1401f86b2(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar1 = (uint *)(*param_1 + (longlong)(int)param_1[1] * 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = (uint)param_2;
  }
  *(int *)(param_1 + 1) = iVar3;
  iVar3 = (int)param_1[3] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar3) {
    FUN_1401f86b2(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar1 = (uint *)(param_1[2] + (longlong)(int)param_1[3] * 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2 ^ 1;
  }
  *(int *)(param_1 + 3) = iVar3;
  iVar3 = (int)param_1[5] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar3) {
    FUN_1401f86b2(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  puVar2 = (undefined4 *)(param_1[4] + (longlong)(int)param_1[5] * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_3;
  }
  *(int *)(param_1 + 5) = iVar3;
  return;
}



// FUNCTION 144cbbac0 FUN_144cbbac0 body=201 status=ok
// SIG undefined FUN_144cbbac0(void)

void FUN_144cbbac0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 2);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 2);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144cbbb90 FUN_144cbbb90 body=397 status=ok
// SIG undefined FUN_144cbbb90(void)

longlong * FUN_144cbbb90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
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
    FUN_143821c08(param_2,&PTR_vftable_14c6e47a0);
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
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
    FUN_143821c08(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *plVar1 = 0;
    param_2[3] = 0;
  }
  plVar1 = param_2 + 4;
  plVar2 = param_1 + 4;
  if (plVar1 != plVar2) {
    *(undefined4 *)(param_1 + 5) = 0;
    if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 2);
    }
    *plVar2 = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
    FUN_143821c08(plVar1,&PTR_vftable_14c6e47a0);
    *plVar2 = *plVar1;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *plVar1 = 0;
    param_2[5] = 0;
  }
  return param_1;
}



// FUNCTION 144cbbd20 FUN_144cbbd20 body=96 status=ok
// SIG undefined FUN_144cbbd20(void)

void FUN_144cbbd20(longlong param_1)

{
  FUN_144cbbac0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) * 0x120);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 144cbbd80 FUN_144cbbd80 body=178 status=ok
// SIG undefined FUN_144cbbd80(void)

undefined4 FUN_144cbbd80(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  lVar4 = (longlong)param_2;
  iVar5 = iVar1 + param_2;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar5) {
    FUN_144cc8620((longlong *)(param_1 + 0x10),&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  *(int *)(param_1 + 0x18) = iVar5;
  if (0 < param_2) {
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x20 + 8 + *(longlong *)(param_1 + 0x10));
    do {
      puVar3[-1] = 0xffffffffffffffff;
      *puVar3 = 0xffffffffffffffff;
      *(uint *)((longlong)puVar3 + 0x14) = *(uint *)((longlong)puVar3 + 0x14) & 0xfffffff4 | 4;
      puVar3[1] = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return uVar2;
}



// FUNCTION 144cbbe40 FUN_144cbbe40 body=142 status=ok
// SIG undefined FUN_144cbbe40(void)

void FUN_144cbbe40(longlong *param_1)

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
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x68);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144cbbed0 FUN_144cbbed0 body=295 status=ok
// SIG undefined FUN_144cbbed0(void)

int FUN_144cbbed0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x201c);
  if (iVar7 == -1) {
    iVar7 = *(int *)(param_1 + 0x10);
    iVar8 = iVar7 + 1;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar8) {
      FUN_144cc6fc0(param_1 + 8,&PTR_vftable_14c6e47c0,(longlong)iVar8);
    }
    *(int *)(param_1 + 0x10) = iVar8;
  }
  else {
    *(undefined4 *)(param_1 + 0x201c) =
         *(undefined4 *)((longlong)iVar7 * 0x80 + 0x78 + *(longlong *)(param_1 + 8));
  }
  uVar4 = param_2[1];
  puVar6 = (undefined8 *)((longlong)iVar7 * 0x80 + *(longlong *)(param_1 + 8));
  *puVar6 = *param_2;
  puVar6[1] = uVar4;
  uVar4 = param_2[3];
  puVar6[2] = param_2[2];
  puVar6[3] = uVar4;
  uVar4 = param_2[5];
  puVar6[4] = param_2[4];
  puVar6[5] = uVar4;
  uVar4 = param_2[7];
  puVar6[6] = param_2[6];
  puVar6[7] = uVar4;
  uVar4 = param_2[9];
  puVar6[8] = param_2[8];
  puVar6[9] = uVar4;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x54);
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)puVar6 + 0x54) = uVar5;
  *(undefined4 *)(puVar6 + 0xb) = uVar1;
  *(undefined4 *)((longlong)puVar6 + 0x5c) = uVar2;
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)((longlong)param_2 + 100);
  uVar2 = *(undefined4 *)(param_2 + 0xd);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
  puVar6[0xe] = 0xffffffffffffffff;
  *(undefined4 *)(puVar6 + 0xc) = uVar5;
  *(undefined4 *)((longlong)puVar6 + 100) = uVar1;
  *(undefined4 *)(puVar6 + 0xd) = uVar2;
  *(undefined4 *)((longlong)puVar6 + 0x6c) = uVar3;
  *(undefined4 *)(puVar6 + 0xf) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x7c) = 0;
  iVar8 = *(int *)(param_1 + 0x2018);
  if (iVar8 == -1) {
    *(int *)(param_1 + 0x2018) = iVar7;
    return iVar7;
  }
  if (iVar7 == -1) {
    *(int *)(param_1 + 0x2018) = iVar8;
    return -1;
  }
  uVar5 = FUN_144cbc000(param_1,iVar8,iVar7);
  *(undefined4 *)(param_1 + 0x2018) = uVar5;
  return iVar7;
}



// FUNCTION 144cbc000 FUN_144cbc000 body=591 status=ok
// SIG undefined FUN_144cbc000(void)

ulonglong FUN_144cbc000(longlong param_1,uint param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar6 = *(longlong *)(param_1 + 8);
  uVar8 = (ulonglong)(int)param_2;
  uVar4 = (uint)param_3;
  uVar9 = (ulonglong)(int)uVar4;
  lVar12 = uVar8 * 0x80;
  lVar11 = uVar9 * 0x80;
  lVar7 = lVar12 + lVar6;
  lVar1 = lVar11 + lVar6;
  if (*(char *)(lVar12 + 0x7c + lVar6) == '\0') {
    if (*(char *)(lVar1 + 0x7c) == '\0') {
      iVar5 = FUN_144cb8980(lVar7,lVar1);
      if (iVar5 < 0) {
        *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(lVar7 + 0x70);
        uVar9 = (ulonglong)param_2;
        *(uint *)(lVar7 + 0x70) = uVar4;
      }
      else if (iVar5 < 1) {
        lVar6 = *(longlong *)(param_1 + 8);
        lVar12 = lVar12 + lVar6;
        iVar5 = *(int *)(lVar12 + 0x78);
        while (iVar5 != -1) {
          iVar5 = *(int *)(lVar11 + lVar6 + 0x78);
          if (iVar5 == -1) {
            *(uint *)(lVar11 + lVar6 + 0x78) = param_2;
            uVar9 = param_3 & 0xffffffff;
            goto LAB_144cbc16f;
          }
          lVar12 = (longlong)*(int *)(lVar12 + 0x78) * 0x80 + lVar6;
          lVar11 = (longlong)iVar5 << 7;
          iVar5 = *(int *)(lVar12 + 0x78);
        }
        uVar9 = (ulonglong)param_2;
        *(uint *)(lVar12 + 0x78) = uVar4;
        param_2 = uVar4;
LAB_144cbc16f:
        iVar5 = *(int *)(lVar7 + 0x70);
        iVar10 = (int)uVar9;
        if (iVar5 == -1) {
LAB_144cbc23b:
          *(undefined4 *)((longlong)iVar10 * 0x80 + 0x70 + *(longlong *)(param_1 + 8)) =
               *(undefined4 *)(lVar1 + 0x70);
        }
        else {
          iVar2 = *(int *)(lVar1 + 0x70);
          lVar12 = *(longlong *)(param_1 + 8);
          if (iVar2 == -1) {
            *(int *)((longlong)iVar10 * 0x80 + 0x70 + lVar12) = iVar5;
          }
          else {
            lVar6 = (longlong)iVar5 * 0x80 + lVar12;
            iVar5 = *(int *)(lVar6 + 0x74);
            iVar3 = iVar2;
            while (iVar5 != -1) {
              lVar11 = (longlong)iVar3 * 0x80 + lVar12;
              iVar3 = *(int *)(lVar11 + 0x74);
              if (iVar3 == -1) {
                *(undefined4 *)(lVar11 + 0x74) = *(undefined4 *)(lVar7 + 0x70);
                goto LAB_144cbc23b;
              }
              lVar6 = (longlong)*(int *)(lVar6 + 0x74) * 0x80 + lVar12;
              iVar5 = *(int *)(lVar6 + 0x74);
            }
            *(int *)(lVar6 + 0x74) = iVar2;
            *(undefined4 *)((longlong)iVar10 * 0x80 + 0x70 + *(longlong *)(param_1 + 8)) =
                 *(undefined4 *)(lVar7 + 0x70);
          }
        }
        *(undefined4 *)((longlong)(int)param_2 * 0x80 + 0x70 + *(longlong *)(param_1 + 8)) =
             0xffffffff;
      }
      else {
        *(undefined4 *)(lVar7 + 0x74) = *(undefined4 *)(lVar1 + 0x70);
        uVar9 = param_3 & 0xffffffff;
        *(uint *)(lVar1 + 0x70) = param_2;
      }
    }
    else {
      iVar5 = *(int *)(lVar1 + 0x70);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(param_1 + 0x201c);
      *(uint *)(param_1 + 0x201c) = uVar4;
      while (iVar5 != -1) {
        lVar7 = (longlong)iVar5;
        iVar5 = *(int *)(lVar7 * 0x80 + 0x74 + *(longlong *)(param_1 + 8));
        *(undefined4 *)(lVar7 * 0x80 + 0x74 + *(longlong *)(param_1 + 8)) = 0xffffffff;
        uVar4 = FUN_144cbc000(param_1,uVar8 & 0xffffffff);
        uVar8 = (ulonglong)uVar4;
      }
      uVar9 = uVar8 & 0xffffffff;
    }
  }
  else {
    iVar5 = *(int *)(lVar7 + 0x70);
    *(undefined4 *)(lVar7 + 0x78) = *(undefined4 *)(param_1 + 0x201c);
    *(uint *)(param_1 + 0x201c) = param_2;
    while (iVar5 != -1) {
      lVar7 = (longlong)iVar5;
      iVar5 = *(int *)(lVar7 * 0x80 + 0x74 + *(longlong *)(param_1 + 8));
      *(undefined4 *)(lVar7 * 0x80 + 0x74 + *(longlong *)(param_1 + 8)) = 0xffffffff;
      uVar4 = FUN_144cbc000(param_1,uVar9 & 0xffffffff);
      uVar9 = (ulonglong)uVar4;
    }
    uVar9 = uVar9 & 0xffffffff;
  }
  return uVar9;
}



// FUNCTION 144cbc250 FUN_144cbc250 body=734 status=ok
// SIG undefined FUN_144cbc250(void)

uint FUN_144cbc250(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (param_2 == 0xffffffff) {
    return 0xffffffff;
  }
  do {
    uVar6 = 0xffffffff;
    uVar7 = param_2;
    while (param_2 = uVar6, uVar7 != 0xffffffff) {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar14 = (longlong)(int)uVar7 * 0x80;
      uVar6 = *(uint *)(lVar14 + 0x74 + lVar5);
      uVar11 = (ulonglong)(int)uVar6;
      if (uVar6 == 0xffffffff) {
        if (param_2 == 0xffffffff) {
          return uVar7;
        }
        *(uint *)(lVar14 + lVar5 + 0x74) = param_2;
        param_2 = uVar7;
        break;
      }
      lVar13 = uVar11 * 0x80;
      uVar2 = *(uint *)(lVar13 + 0x74 + lVar5);
      *(undefined4 *)(lVar14 + lVar5 + 0x74) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x74 + lVar13) = 0xffffffff;
      lVar10 = *(longlong *)(param_1 + 8);
      lVar5 = lVar10 + lVar14;
      lVar1 = lVar10 + lVar13;
      if (*(char *)(lVar10 + 0x7c + lVar14) == '\0') {
        if (*(char *)(lVar1 + 0x7c) == '\0') {
          iVar8 = FUN_144cb8980(lVar5,lVar1);
          if (iVar8 < 0) {
            *(undefined4 *)(lVar1 + 0x74) = *(undefined4 *)(lVar5 + 0x70);
            *(uint *)(lVar5 + 0x70) = uVar6;
            uVar6 = uVar7;
          }
          else if (iVar8 < 1) {
            lVar10 = *(longlong *)(param_1 + 8);
            lVar14 = lVar10 + lVar14;
            iVar8 = *(int *)(lVar14 + 0x78);
            while (iVar8 != -1) {
              iVar8 = *(int *)(lVar10 + lVar13 + 0x78);
              if (iVar8 == -1) {
                *(uint *)(lVar10 + lVar13 + 0x78) = uVar7;
                uVar12 = uVar7;
                goto LAB_144cbc41f;
              }
              lVar14 = (longlong)*(int *)(lVar14 + 0x78) * 0x80 + lVar10;
              lVar13 = (longlong)iVar8 << 7;
              iVar8 = *(int *)(lVar14 + 0x78);
            }
            *(uint *)(lVar14 + 0x78) = uVar6;
            uVar12 = uVar6;
            uVar6 = uVar7;
LAB_144cbc41f:
            iVar8 = *(int *)(lVar5 + 0x70);
            if (iVar8 == -1) {
              uVar9 = *(undefined4 *)(lVar1 + 0x70);
LAB_144cbc49f:
              *(undefined4 *)((longlong)(int)uVar6 * 0x80 + 0x70 + *(longlong *)(param_1 + 8)) =
                   uVar9;
            }
            else {
              iVar3 = *(int *)(lVar1 + 0x70);
              lVar14 = *(longlong *)(param_1 + 8);
              if (iVar3 != -1) {
                lVar10 = (longlong)iVar8 * 0x80 + lVar14;
                iVar8 = *(int *)(lVar10 + 0x74);
                iVar4 = iVar3;
                while (iVar8 != -1) {
                  lVar13 = (longlong)iVar4 * 0x80 + lVar14;
                  iVar4 = *(int *)(lVar13 + 0x74);
                  if (iVar4 == -1) {
                    *(undefined4 *)(lVar13 + 0x74) = *(undefined4 *)(lVar5 + 0x70);
                    uVar9 = *(undefined4 *)(lVar1 + 0x70);
                    goto LAB_144cbc49f;
                  }
                  lVar10 = (longlong)*(int *)(lVar10 + 0x74) * 0x80 + lVar14;
                  iVar8 = *(int *)(lVar10 + 0x74);
                }
                *(int *)(lVar10 + 0x74) = iVar3;
                uVar9 = *(undefined4 *)(lVar5 + 0x70);
                goto LAB_144cbc49f;
              }
              *(int *)((longlong)(int)uVar6 * 0x80 + 0x70 + lVar14) = iVar8;
            }
            *(undefined4 *)((longlong)(int)uVar12 * 0x80 + 0x70 + *(longlong *)(param_1 + 8)) =
                 0xffffffff;
          }
          else {
            *(undefined4 *)(lVar5 + 0x74) = *(undefined4 *)(lVar1 + 0x70);
            *(uint *)(lVar1 + 0x70) = uVar7;
          }
        }
        else {
          iVar8 = *(int *)(lVar1 + 0x70);
          *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(param_1 + 0x201c);
          *(uint *)(param_1 + 0x201c) = uVar6;
          while (uVar6 = uVar7, iVar8 != -1) {
            lVar14 = (longlong)iVar8;
            iVar8 = *(int *)(lVar14 * 0x80 + 0x74 + *(longlong *)(param_1 + 8));
            *(undefined4 *)(lVar14 * 0x80 + 0x74 + *(longlong *)(param_1 + 8)) = 0xffffffff;
            uVar7 = FUN_144cbc000(param_1,uVar7);
          }
        }
      }
      else {
        iVar8 = *(int *)(lVar5 + 0x70);
        *(undefined4 *)(lVar5 + 0x78) = *(undefined4 *)(param_1 + 0x201c);
        *(uint *)(param_1 + 0x201c) = uVar7;
        while (iVar8 != -1) {
          lVar14 = (longlong)iVar8;
          iVar8 = *(int *)(lVar14 * 0x80 + 0x74 + *(longlong *)(param_1 + 8));
          *(undefined4 *)(lVar14 * 0x80 + 0x74 + *(longlong *)(param_1 + 8)) = 0xffffffff;
          uVar6 = FUN_144cbc000(param_1,uVar11 & 0xffffffff);
          uVar11 = (ulonglong)uVar6;
        }
      }
      *(uint *)((longlong)(int)uVar6 * 0x80 + 0x74 + *(longlong *)(param_1 + 8)) = param_2;
      uVar7 = uVar2;
    }
  } while( true );
}



// FUNCTION 144cbc530 FUN_144cbc530 body=107 status=ok
// SIG undefined FUN_144cbc530(void)

void FUN_144cbc530(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 7);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0x80000000;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 144cbc5a0 FUN_144cbc5a0 body=106 status=ok
// SIG undefined FUN_144cbc5a0(void)

void FUN_144cbc5a0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x2030) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x2034)) && (*(longlong *)(param_1 + 0x2028) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x2028),
               (ulonglong)(*(uint *)(param_1 + 0x2034) & 0x7fffffff) * 0x128);
  }
  *(undefined8 *)(param_1 + 0x2028) = 0;
  *(undefined4 *)(param_1 + 0x2034) = 0x80000000;
  FUN_144cbc530(param_1 + 8);
  return;
}



// FUNCTION 144cbc610 FUN_144cbc610 body=98 status=ok
// SIG undefined FUN_144cbc610(void)

void FUN_144cbc610(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(longlong *)(param_1 + 0x50) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x50),
               (ulonglong)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  FUN_144cbb940(param_1 + 0x30);
  FUN_144cbbac0(param_1);
  return;
}



// FUNCTION 144cbc680 FUN_144cbc680 body=107 status=ok
// SIG undefined FUN_144cbc680(void)

void FUN_144cbc680(longlong param_1)

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



// FUNCTION 144cbc6f0 FUN_144cbc6f0 body=500 status=ok
// SIG undefined FUN_144cbc6f0(void)

void FUN_144cbc6f0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *local_48;
  char *local_40;
  undefined1 local_38 [48];
  
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
  lVar2 = *(longlong *)(lVar5 + 0x3e0);
  if (lVar2 != 0) {
    local_48 = "TtPrepareAabbBuild";
    local_40 = "";
    FUN_144b3f370(lVar2,&local_48);
  }
  plVar3 = (longlong *)*param_1;
  if ((char)plVar3[2] == '\0') {
    FUN_144bf95c0(plVar3 + 0x32,(int)param_1[1],*(undefined4 *)(*plVar3 + 0x20),1);
    plVar3 = (longlong *)*param_1;
    iVar1 = *(int *)(*plVar3 + 0x20);
    if ((int)(*(uint *)((longlong)plVar3 + 0xaa4) & 0x7fffffff) < iVar1) {
      FUN_141807cf8(plVar3 + 0x153,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if (((int)plVar3[0x154] < iVar1) || (iVar1 < (int)plVar3[0x154])) {
      *(int *)(plVar3 + 0x154) = iVar1;
    }
    puVar4 = (undefined8 *)*param_1;
    puVar7 = (undefined8 *)*puVar4;
  }
  else {
    uVar6 = FUN_144ccf750(local_38,*plVar3);
    FUN_144cb9dd0(*param_1 + 0x18,uVar6);
    FUN_147e57b84(local_38);
    FUN_144bf95c0(*param_1 + 400,(int)param_1[1],*(undefined4 *)(*param_1 + 0x20),1);
    lVar5 = *param_1;
    iVar1 = *(int *)(lVar5 + 0x20);
    if ((int)(*(uint *)(lVar5 + 0xaa4) & 0x7fffffff) < iVar1) {
      FUN_141807cf8(lVar5 + 0xa98,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if ((*(int *)(lVar5 + 0xaa0) < iVar1) || (iVar1 < *(int *)(lVar5 + 0xaa0))) {
      *(int *)(lVar5 + 0xaa0) = iVar1;
    }
    puVar7 = (undefined8 *)*param_1;
    puVar4 = puVar7;
  }
  iVar1 = *(int *)(puVar7 + 4);
  if ((int)(*(uint *)((longlong)puVar4 + 0xab4) & 0x7fffffff) < iVar1) {
    FUN_147e57f40(puVar4 + 0x155,&PTR_vftable_14c6e47a0,(longlong)iVar1);
  }
  if ((*(int *)(puVar4 + 0x156) < iVar1) || (iVar1 < *(int *)(puVar4 + 0x156))) {
    *(int *)(puVar4 + 0x156) = iVar1;
  }
  if (lVar2 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar2,&local_48);
  }
  return;
}



// FUNCTION 144cbc8f0 FUN_144cbc8f0 body=795 status=ok
// SIG undefined FUN_144cbc8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144cbc8f0(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  float *pfVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  int local_res10 [2];
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  
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
  local_98._8_8_ = "";
  local_98._0_8_ = "TtCalculateAabbs";
  if (lVar2 != 0) {
    local_98._8_8_ = "";
    local_98._0_8_ = "TtCalculateAabbs";
    FUN_144b3f370(lVar2,local_98);
  }
  uVar10 = 0;
  local_88 = *param_1 + 400;
  local_74 = param_2;
  if (local_88 != 0) {
    local_80 = 0;
    local_78 = 0;
  }
  do {
    if (local_80._4_4_ <= uVar10) {
      if ((local_88 == 0) || (FUN_144bf9800(local_88,local_res10,&local_88), local_res10[0] < 0)) {
        if (lVar2 != 0) {
          local_98._8_8_ = &DAT_149981766;
          local_98._0_8_ = &DAT_149981764;
          FUN_144b3f260(lVar2,local_98);
        }
        return;
      }
      uVar10 = (uint)local_80;
    }
    auVar16._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
    auVar16._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
    auVar16._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
    iVar3 = *(int *)(*(longlong *)(*param_1 + 0x18) + (longlong)(int)uVar10 * 8);
    auVar18 = _DAT_14c6dae80;
    while (iVar3 != -1) {
      lVar11 = (longlong)iVar3;
      lVar4 = *(longlong *)(*param_1 + 0x28);
      iVar3 = *(int *)(lVar4 + lVar11 * 8);
      do {
        lVar6 = *(longlong *)*param_1;
        lVar9 = (longlong)iVar3 * 0x70 + ((longlong *)*param_1)[7];
        uVar1 = *(uint *)((longlong)*(int *)(lVar9 + 0x68) * 0x60 + *(longlong *)(lVar6 + 0x28));
        uVar5 = (ulonglong)(uVar1 & 0x3fffffff);
        if (uVar1 >> 0x1e == 0) {
          lVar6 = *(longlong *)(lVar6 + 0x38);
          local_98._0_4_ = (float)*(int *)(lVar6 + uVar5 * 0xc);
          local_98._4_4_ = (float)*(int *)(lVar6 + 4 + uVar5 * 0xc);
          local_98._8_4_ = (float)*(int *)(lVar6 + 8 + uVar5 * 0xc);
          local_98._12_4_ = 0;
        }
        else if (uVar1 >> 0x1e == 1) {
          lVar6 = uVar5 * 0x60 + *(longlong *)(lVar6 + 0x48);
          FUN_144cc17d0(lVar6,lVar6 + 0x18,lVar6 + 0x30,lVar6 + 0x48,local_98);
        }
        else {
          FUN_144cb85f0(uVar5 * 0x80 + *(longlong *)(lVar6 + 0x58),local_98);
        }
        iVar3 = *(int *)(lVar9 + 0x6c);
        auVar18 = minps(auVar18,local_98);
        auVar16 = maxps(auVar16,local_98);
      } while (iVar3 != *(int *)(lVar4 + lVar11 * 8));
      iVar3 = *(int *)(lVar4 + 4 + lVar11 * 8);
    }
    pfVar7 = (float *)((longlong)(int)uVar10 * 0x20 + *(longlong *)(*param_1 + 0xa98));
    fVar17 = auVar18._0_4_ - ABS(auVar18._0_4_) * 3.5762787e-07;
    fVar19 = auVar18._4_4_ - ABS(auVar18._4_4_) * 3.5762787e-07;
    fVar20 = auVar18._8_4_ - ABS(auVar18._8_4_) * 3.5762787e-07;
    fVar21 = auVar18._12_4_ - ABS(auVar18._12_4_) * 3.5762787e-07;
    *pfVar7 = fVar17;
    pfVar7[1] = fVar19;
    pfVar7[2] = fVar20;
    pfVar7[3] = fVar21;
    fVar12 = ABS(auVar16._0_4_) * 3.5762787e-07 + auVar16._0_4_;
    fVar13 = ABS(auVar16._4_4_) * 3.5762787e-07 + auVar16._4_4_;
    fVar14 = ABS(auVar16._8_4_) * 3.5762787e-07 + auVar16._8_4_;
    fVar15 = ABS(auVar16._12_4_) * 3.5762787e-07 + auVar16._12_4_;
    pfVar7[4] = fVar12;
    pfVar7[5] = fVar13;
    pfVar7[6] = fVar14;
    pfVar7[7] = fVar15;
    fVar12 = (fVar12 + fVar17) * _DAT_14c6dad90;
    fVar13 = (fVar13 + fVar19) * fRam000000014c6dad94;
    fVar14 = (fVar14 + fVar20) * fRam000000014c6dad98;
    fVar15 = (fVar15 + fVar21) * fRam000000014c6dad9c;
    puVar8 = (uint *)((longlong)(int)uVar10 * 0x10 + *(longlong *)(*param_1 + 0xaa8));
    *puVar8 = (uint)((int)fVar12 >> 0x1f) >> 1 ^ (uint)fVar12;
    puVar8[1] = (uint)((int)fVar13 >> 0x1f) >> 1 ^ (uint)fVar13;
    puVar8[2] = (uint)((int)fVar14 >> 0x1f) >> 1 ^ (uint)fVar14;
    puVar8[3] = (uint)((int)fVar15 >> 0x1f) >> 1 ^ (uint)fVar15;
    puVar8[3] = uVar10;
    uVar10 = uVar10 + 1;
  } while( true );
}



// FUNCTION 144cbcc10 FUN_144cbcc10 body=890 status=ok
// SIG undefined FUN_144cbcc10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144cbcc10(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float *pfVar6;
  uint *puVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 auVar16 [16];
  float fVar19;
  int local_res10 [2];
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  
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
  local_d8._8_8_ = "";
  local_d8._0_8_ = "TtCalculateAabbs";
  if (lVar1 != 0) {
    local_d8._8_8_ = "";
    local_d8._0_8_ = "TtCalculateAabbs";
    FUN_144b3f370(lVar1,local_d8);
  }
  uVar8 = 0;
  local_c8 = *param_1 + 400;
  local_b4 = param_2;
  if (local_c8 != 0) {
    local_c0 = 0;
    local_b8 = 0;
  }
  do {
    if (local_c0._4_4_ <= uVar8) {
      if ((local_c8 == 0) || (FUN_144bf9800(local_c8,local_res10,&local_c8), local_res10[0] < 0)) {
        if (lVar1 != 0) {
          local_d8._8_8_ = &DAT_149981766;
          local_d8._0_8_ = &DAT_149981764;
          FUN_144b3f260(lVar1,local_d8);
        }
        return;
      }
      uVar8 = (uint)local_c0;
    }
    fVar19 = DAT_14c6dae80._12_4_;
    fVar15 = (float)DAT_14c6dae80;
    fVar17 = DAT_14c6dae80._4_4_;
    fVar18 = DAT_14c6dae80._8_4_;
    lVar9 = (longlong)(int)uVar8;
    fVar12 = -fVar15;
    fVar14 = -fVar17;
    auVar13._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
    auVar13._8_4_ = -fVar18;
    auVar13._12_4_ = -fVar19;
    lVar2 = *(longlong *)(*(longlong *)*param_1 + 0x18);
    uVar3 = *(uint *)(lVar2 + lVar9 * 4);
    auVar16 = _DAT_14c6dae80;
    fVar10 = auVar13._8_4_;
    fVar11 = auVar13._12_4_;
    do {
      lVar5 = *(longlong *)*param_1;
      puVar7 = (uint *)((longlong)(int)uVar3 * 0x60 + *(longlong *)(lVar5 + 0x28));
      uVar3 = *puVar7;
      uVar4 = (ulonglong)(uVar3 & 0x3fffffff);
      if (uVar3 >> 0x1e == 0) {
        lVar5 = *(longlong *)(lVar5 + 0x38);
        auVar16._4_4_ = fVar17;
        auVar16._0_4_ = fVar15;
        auVar16._8_4_ = fVar18;
        auVar16._12_4_ = fVar19;
        auVar13._4_4_ = fVar14;
        auVar13._0_4_ = fVar12;
        auVar13._8_4_ = fVar10;
        auVar13._12_4_ = fVar11;
        local_d8._0_4_ = (float)*(int *)(lVar5 + uVar4 * 0xc);
        local_d8._4_4_ = (float)*(int *)(lVar5 + 4 + uVar4 * 0xc);
        local_d8._8_4_ = (float)*(int *)(lVar5 + 8 + uVar4 * 0xc);
        local_d8._12_4_ = 0;
      }
      else if (uVar3 >> 0x1e == 1) {
        lVar5 = uVar4 * 0x60 + *(longlong *)(lVar5 + 0x48);
        FUN_144cc17d0(lVar5,lVar5 + 0x18,lVar5 + 0x30,lVar5 + 0x48,local_d8);
      }
      else {
        FUN_144cb85f0(uVar4 * 0x80 + *(longlong *)(lVar5 + 0x58),local_d8);
        auVar16._4_4_ = fVar17;
        auVar16._0_4_ = fVar15;
        auVar16._8_4_ = fVar18;
        auVar16._12_4_ = fVar19;
        auVar13._4_4_ = fVar14;
        auVar13._0_4_ = fVar12;
        auVar13._8_4_ = fVar10;
        auVar13._12_4_ = fVar11;
      }
      uVar3 = puVar7[3];
      auVar16 = minps(auVar16,local_d8);
      auVar13 = maxps(auVar13,local_d8);
      fVar15 = auVar16._0_4_;
      fVar17 = auVar16._4_4_;
      fVar18 = auVar16._8_4_;
      fVar19 = auVar16._12_4_;
      fVar12 = auVar13._0_4_;
      fVar14 = auVar13._4_4_;
      fVar10 = auVar13._8_4_;
      fVar11 = auVar13._12_4_;
    } while (uVar3 != *(uint *)(lVar2 + lVar9 * 4));
    pfVar6 = (float *)(lVar9 * 0x20 + *(longlong *)(*param_1 + 0xa98));
    fVar15 = fVar15 - ABS(fVar15) * 3.5762787e-07;
    fVar17 = fVar17 - ABS(fVar17) * 3.5762787e-07;
    fVar18 = fVar18 - ABS(fVar18) * 3.5762787e-07;
    fVar19 = fVar19 - ABS(fVar19) * 3.5762787e-07;
    *pfVar6 = fVar15;
    pfVar6[1] = fVar17;
    pfVar6[2] = fVar18;
    pfVar6[3] = fVar19;
    fVar12 = ABS(fVar12) * 3.5762787e-07 + fVar12;
    fVar14 = ABS(fVar14) * 3.5762787e-07 + fVar14;
    fVar10 = ABS(fVar10) * 3.5762787e-07 + fVar10;
    fVar11 = ABS(fVar11) * 3.5762787e-07 + fVar11;
    pfVar6[4] = fVar12;
    pfVar6[5] = fVar14;
    pfVar6[6] = fVar10;
    pfVar6[7] = fVar11;
    fVar12 = (fVar12 + fVar15) * _DAT_14c6dad90;
    fVar14 = (fVar14 + fVar17) * fRam000000014c6dad94;
    fVar10 = (fVar10 + fVar18) * fRam000000014c6dad98;
    fVar19 = (fVar11 + fVar19) * fRam000000014c6dad9c;
    puVar7 = (uint *)(lVar9 * 0x10 + *(longlong *)(*param_1 + 0xaa8));
    *puVar7 = (uint)((int)fVar12 >> 0x1f) >> 1 ^ (uint)fVar12;
    puVar7[1] = (uint)((int)fVar14 >> 0x1f) >> 1 ^ (uint)fVar14;
    puVar7[2] = (uint)((int)fVar10 >> 0x1f) >> 1 ^ (uint)fVar10;
    puVar7[3] = (uint)((int)fVar19 >> 0x1f) >> 1 ^ (uint)fVar19;
    puVar7[3] = uVar8;
    uVar8 = uVar8 + 1;
  } while( true );
}



// FUNCTION 144cbcf90 FUN_144cbcf90 body=517 status=ok
// SIG undefined FUN_144cbcf90(void)

void FUN_144cbcf90(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
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
  local_18 = "TtSetupFaceClipping";
  pcStack_10 = "";
  if (lVar2 != 0) {
    local_18 = "TtSetupFaceClipping";
    pcStack_10 = "";
    FUN_144b3f370(lVar2,&local_18);
  }
  FUN_144cb3710(*param_1 + 0x50,*(undefined8 *)(*param_1 + 8));
  FUN_144c3fad0(*param_1 + 0x130,0,*(undefined4 *)(*(longlong *)(*param_1 + 8) + 0x20),1);
  FUN_144c3fad0(*param_1 + 0x148,0,*(undefined4 *)(*(longlong *)(*param_1 + 8) + 0x30),1);
  lVar3 = *param_1;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x20);
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar3 + 0x48) + 8);
  }
  FUN_144bf95c0(lVar3 + 400,(int)param_1[1],uVar1,1);
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0xaa0) = 0;
  if ((-1 < (int)*(uint *)(lVar3 + 0xaa4)) && (*(longlong *)(lVar3 + 0xa98) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar3 + 0xa98),
               (ulonglong)(*(uint *)(lVar3 + 0xaa4) & 0x7fffffff) << 5);
  }
  *(undefined8 *)(lVar3 + 0xa98) = 0;
  *(undefined4 *)(lVar3 + 0xaa4) = 0x80000000;
  lVar3 = *param_1;
  *(undefined4 *)(lVar3 + 0xab0) = 0;
  if ((-1 < (int)*(uint *)(lVar3 + 0xab4)) && (*(longlong *)(lVar3 + 0xaa8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar3 + 0xaa8),
               (ulonglong)(*(uint *)(lVar3 + 0xab4) & 0x7fffffff) << 4);
  }
  *(undefined8 *)(lVar3 + 0xaa8) = 0;
  *(undefined4 *)(lVar3 + 0xab4) = 0x80000000;
  if (lVar2 != 0) {
    local_18 = "Et";
    pcStack_10 = "";
    FUN_144b3f260(lVar2,&local_18);
  }
  return;
}



// FUNCTION 144cbd1a0 FUN_144cbd1a0 body=1914 status=ok
// SIG undefined FUN_144cbd1a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144cbd1a0(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  char *pcVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int local_res10 [2];
  char *local_22d8;
  undefined8 uStack_22d0;
  int local_22c8;
  undefined4 *local_22b8;
  int local_22b0;
  uint local_22ac;
  longlong local_22a8;
  uint local_22a0;
  uint local_229c;
  int local_2298;
  longlong local_2290;
  undefined8 local_2288;
  undefined4 local_2280;
  int local_227c;
  undefined **local_2278;
  undefined8 local_2270;
  undefined8 local_2268;
  undefined8 local_2260;
  undefined4 local_2258;
  undefined4 local_2254;
  undefined8 local_2250;
  undefined4 local_2248;
  undefined4 local_2244;
  undefined8 local_2240;
  undefined4 local_2238;
  undefined4 local_2234;
  undefined8 local_2230;
  undefined4 local_2228;
  undefined4 local_2224;
  undefined8 local_2220;
  undefined4 local_2218;
  undefined4 local_2214;
  undefined4 local_2210;
  undefined8 local_2208;
  undefined8 uStack_2200;
  undefined8 local_21f8;
  undefined8 uStack_21f0;
  undefined8 local_21e8;
  undefined8 uStack_21e0;
  undefined8 local_21d8;
  undefined8 uStack_21d0;
  undefined8 local_21c8;
  undefined4 local_21c0;
  undefined8 local_21b8;
  undefined8 uStack_21b0;
  undefined8 local_21a8;
  undefined8 uStack_21a0;
  undefined1 local_2198 [8];
  undefined8 local_2190;
  undefined4 local_2188;
  undefined4 local_2184;
  undefined8 local_2180;
  undefined4 local_2178;
  undefined4 local_2174;
  undefined8 local_2170;
  undefined4 local_2168;
  undefined4 local_2164;
  undefined8 local_2160;
  undefined4 local_2158;
  undefined4 local_2154;
  undefined8 local_2150;
  undefined4 local_2148;
  undefined4 local_2144;
  undefined8 local_2140;
  undefined4 local_2138;
  undefined4 local_2134;
  undefined1 local_2130 [16];
  undefined1 *local_2120;
  undefined4 local_2118;
  undefined4 local_2114;
  undefined1 local_2110 [8192];
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0x144cbd1c6;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10[0] = param_2;
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar4 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar8;
  }
  lVar4 = *(longlong *)(lVar8 + 0x3e0);
  local_22d8 = "TtClipFaces";
  uStack_22d0 = "";
  if (lVar4 != 0) {
    local_22d8 = "TtClipFaces";
    uStack_22d0 = "";
    FUN_144b3f370(lVar4,&local_22d8);
  }
  lVar8 = *param_1;
  uVar18 = 0;
  local_2268 = 1;
  local_2260 = 0;
  local_2258 = 0;
  local_2270 = 0xffffffff;
  local_2254 = 0x80000000;
  local_2278 = &PTR_LAB_14aba30f0;
  local_2250 = 0;
  local_2248 = 0;
  local_2244 = 0x80000000;
  local_2240 = 0;
  local_2238 = 0;
  local_2234 = 0x80000000;
  local_2230 = 0;
  local_2228 = 0;
  local_2224 = 0x80000000;
  local_2220 = 0;
  local_2218 = 0;
  local_2214 = 0x80000000;
  local_2210 = 0;
  local_2208 = 0;
  uStack_2200 = 0;
  local_21c8 = 0;
  local_21f8 = 0;
  uStack_21f0 = 0;
  local_21c0 = 0;
  local_21e8 = 0;
  uStack_21e0 = 0;
  local_22b8 = (undefined4 *)0x0;
  local_21d8 = 0;
  uStack_21d0 = 0;
  local_22b0 = 0;
  local_21b8 = 0;
  uStack_21b0 = 0;
  local_22ac = 0x80000000;
  local_21a8 = 0;
  uStack_21a0 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0xa70));
  FUN_144cb3710(&local_2278,*param_1 + 0x50);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0xa70));
  local_2298 = *(int *)(*(longlong *)(*param_1 + 8) + 0x20);
  uVar12 = local_2298 + 0x1f >> 5;
  if ((int)uVar12 < 1) {
    local_22a8 = 0;
    local_229c = 0x80000000;
    local_22a0 = 0;
  }
  else {
    local_22a8 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                           (&PTR_vftable_14c6e47a0,(longlong)(int)uVar12 << 2);
    local_22a0 = uVar12;
    local_229c = uVar12;
  }
  if ((int)(local_229c & 0x7fffffff) < (int)uVar12) {
    FUN_140163394(&local_22a8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar12);
  }
  lVar8 = local_22a8;
  if (((int)local_22a0 < (int)uVar12) || ((int)uVar12 < (int)local_22a0)) {
    local_22a0 = uVar12;
  }
  uVar12 = local_22a0;
  FUN_144bfb550(local_22a8,0xffffffff,(longlong)(int)local_22a0);
  local_22c8 = *(int *)(*(longlong *)(*param_1 + 8) + 0x30);
  uVar13 = local_22c8 + 0x1f >> 5;
  if ((int)uVar13 < 1) {
    local_22d8 = (char *)0x0;
    uStack_22d0 = (char *)0x8000000000000000;
  }
  else {
    local_22d8 = (char *)(**(code **)(PTR_vftable_14c6e47a0 + 8))
                                   (&PTR_vftable_14c6e47a0,(longlong)(int)uVar13 << 2);
    uStack_22d0 = (char *)CONCAT44(uVar13,uVar13);
    uVar18 = uVar13;
  }
  if ((int)(uVar18 & 0x7fffffff) < (int)uVar13) {
    FUN_140163394(&local_22d8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar13);
    uVar18 = (uint)uStack_22d0;
  }
  pcVar7 = local_22d8;
  if (((int)uVar18 < (int)uVar13) || ((int)uVar13 < (int)uVar18)) {
    uStack_22d0 = (char *)CONCAT44(uStack_22d0._4_4_,uVar13);
    uVar18 = uVar13;
  }
  FUN_144bfb550(local_22d8,0xffffffff,(longlong)(int)uVar18);
  uVar13 = 0;
  local_2120 = local_2110;
  local_2190 = 0;
  local_2290 = *param_1 + 400;
  local_80 = &local_2150;
  local_2188 = 0;
  local_227c = local_res10[0];
  local_2184 = 0x80000000;
  local_2180 = 0;
  local_2178 = 0;
  local_2174 = 0x80000000;
  local_2170 = 0;
  local_2168 = 0;
  local_2164 = 0x80000000;
  local_2160 = 0;
  local_2158 = 0;
  local_2154 = 0x80000000;
  local_2150 = 0;
  local_2148 = 0;
  local_2144 = 0x80000000;
  local_2140 = 0;
  local_2138 = 0;
  local_2134 = 0x80000000;
  local_2118 = 0;
  local_2114 = 0x80000040;
  local_110 = 0xffffffffffffffff;
  local_108 = 0;
  local_100 = 0;
  local_fc = 0x80000000;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 0x80000000;
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 0x80000000;
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 0x80000000;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x80000000;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0x80000000;
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 0x80000000;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x80000000;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_58 = 0;
  local_50 = 0;
  local_4c = 0x80000000;
  local_48 = 0;
  local_40 = 0x8000000000000000;
  if (local_2290 != 0) {
    local_2288 = 0;
    local_2280 = 0;
  }
  do {
    if (local_2288._4_4_ <= uVar13) {
      if ((local_2290 == 0) ||
         (FUN_144bf9800(local_2290,local_res10,&local_2290), local_res10[0] < 0)) {
        lVar5 = *param_1;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0xa70));
        FUN_144cb4260(*param_1 + 0x50,&local_2278);
        puVar14 = local_22b8;
        uVar13 = *(uint *)(*param_1 + 0x138);
        if ((int)uVar12 < (int)uVar13) {
          uVar13 = uVar12;
        }
        if (-1 < (int)uVar13) {
          lVar11 = *(longlong *)(*param_1 + 0x130);
          lVar10 = (longlong)(int)uVar13;
          if (uVar13 != 0) {
            puVar9 = (uint *)(lVar11 + lVar10 * 4);
            do {
              puVar2 = (uint *)((lVar8 - lVar11) + -4 + (longlong)puVar9);
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar9 & *puVar2;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        uVar12 = *(uint *)(*param_1 + 0x150);
        if ((int)uVar18 < (int)uVar12) {
          uVar12 = uVar18;
        }
        if (-1 < (int)uVar12) {
          lVar8 = *(longlong *)(*param_1 + 0x148);
          lVar11 = (longlong)(int)uVar12;
          if (uVar12 != 0) {
            puVar9 = (uint *)(lVar8 + lVar11 * 4);
            do {
              puVar2 = (uint *)(pcVar7 + (-4 - lVar8) + (longlong)puVar9);
              puVar9 = puVar9 + -1;
              *puVar9 = *puVar9 & *puVar2;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
        }
        lVar8 = *param_1;
        puVar1 = local_22b8 + local_22b0;
        iVar3 = *(int *)(lVar8 + 0x168);
        iVar15 = (int)((longlong)puVar1 - (longlong)local_22b8 >> 2) + iVar3;
        if ((int)(*(uint *)(lVar8 + 0x16c) & 0x7fffffff) < iVar15) {
          FUN_141807aa8(lVar8 + 0x160,&PTR_vftable_14c6e47a0,(longlong)iVar15);
        }
        puVar6 = (undefined4 *)(*(longlong *)(lVar8 + 0x160) + (longlong)iVar3 * 4);
        for (; puVar14 != puVar1; puVar14 = puVar14 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar14;
          }
          puVar6 = puVar6 + 1;
        }
        *(int *)(lVar8 + 0x168) = iVar15;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0xa70));
        FUN_147e57b84(&local_68);
        FUN_144cbc680(local_98);
        FUN_144cbc610(&local_f8);
        FUN_144cbc5a0(local_2130);
        FUN_144cbbe40(&local_2150);
        FUN_144cbbd20(local_2198);
        FUN_144bf90d0(&local_22d8);
        FUN_144bf90d0(&local_22a8);
        local_22b0 = 0;
        if ((-1 < (int)local_22ac) && (local_22b8 != (undefined4 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_22b8,(ulonglong)(local_22ac & 0x7fffffff) << 2);
        }
        local_22b8 = (undefined4 *)0x0;
        local_22ac = 0x80000000;
        FUN_147e4ccc0(&local_2278);
        if (lVar4 != 0) {
          local_22d8 = "Et";
          uStack_22d0 = &DAT_149981766;
          FUN_144b3f260(lVar4,&local_22d8);
        }
        return;
      }
      uVar13 = (uint)local_2288;
    }
    lVar5 = *param_1;
    if (*(char *)(lVar5 + 0x10) == '\0') {
      uVar17 = 0xffffffff;
      uVar16 = uVar13;
    }
    else {
      uVar16 = *(uint *)(**(longlong **)(lVar5 + 0x48) + 4 + (longlong)(int)uVar13 * 8);
      uVar17 = uVar13;
    }
    FUN_144cba850(lVar5,local_2198,uVar16,uVar17,&local_2278,&local_22a8,&local_22d8,&local_22b8);
    uVar13 = uVar13 + 1;
  } while( true );
}



// FUNCTION 144cbd920 FUN_144cbd920 body=1487 status=ok
// SIG undefined FUN_144cbd920(void)

void FUN_144cbd920(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  int *piVar20;
  ulonglong uVar21;
  int *piVar22;
  uint uVar23;
  longlong lVar24;
  bool bVar25;
  uint local_res10;
  ulonglong local_78;
  undefined8 uStack_70;
  int *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined *puStack_50;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
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
  local_58 = *(undefined **)(lVar9 + 0x3e0);
  local_68 = (int *)0x1499c0f90;
  uStack_60 = (int *)0x1499c0f9a;
  if (local_58 != (undefined *)0x0) {
    local_68 = (int *)0x1499c0f90;
    uStack_60 = (int *)0x1499c0f9a;
    FUN_144b3f370(local_58,&local_68);
  }
  lVar2 = *param_1;
  piVar10 = (int *)0x0;
  plVar14 = (longlong *)(lVar2 + 0x2580);
  iVar16 = 0;
  if (*(int *)(lVar2 + 0x258c) < 0) {
    piVar12 = (int *)(*plVar14 + (longlong)plVar14);
    if (*plVar14 == 0) {
      piVar12 = piVar10;
    }
    (*DAT_14c787678)(0,piVar12,0);
  }
  *plVar14 = 0;
  *(undefined8 *)(lVar2 + 0x2588) = 0;
  lVar2 = *param_1;
  plVar14 = (longlong *)(lVar2 + 0x2598);
  if (*(int *)(lVar2 + 0x25a4) < 0) {
    piVar12 = (int *)((longlong)plVar14 + *plVar14);
    if (*plVar14 == 0) {
      piVar12 = piVar10;
    }
    (*DAT_14c787678)(0,piVar12,0);
  }
  *plVar14 = 0;
  *(undefined8 *)(lVar2 + 0x25a0) = 0;
  FUN_144ccf680(*param_1 + 0x18);
  lVar2 = *param_1;
  iVar8 = *(int *)(*(longlong *)(lVar2 + 8) + 0x30);
  iVar7 = *(int *)(lVar2 + 0x158);
  if ((-1 < iVar8) && (iVar16 = iVar8, iVar7 < iVar8)) {
    iVar16 = iVar7;
  }
  if (iVar16 < iVar7) {
    iVar7 = iVar16;
  }
  iVar7 = iVar7 + -1;
  if (-1 < iVar7) {
    lVar9 = *(longlong *)(lVar2 + 0x148);
    uVar21 = (ulonglong)(iVar7 >> 5);
    local_res10 = 0;
    local_68 = (int *)(uVar21 - 1);
    uVar13 = 0xffffffff;
    piVar12 = piVar10;
    piVar20 = piVar10;
    piVar22 = local_68;
    uVar23 = ~(iVar7 >> 0x1f) & 1;
    local_78 = uVar21;
    do {
      uVar19 = (uint)piVar20;
      if ((longlong)piVar10 < (longlong)uVar21) {
        puVar18 = (uint *)((longlong)piVar10 * 4 + lVar9);
        iVar16 = ((int)piVar12 + (uint)piVar20) * 0x20;
        lVar24 = uVar21 - (longlong)piVar10;
        do {
          uVar19 = *puVar18;
          uVar4 = uVar13 & uVar19;
          uVar21 = local_78;
          while (local_78 = uVar21, uVar4 != 0) {
            iVar8 = (*(code *)PTR_FUN_14c6da350)((-(uVar19 & uVar13) & uVar19 & uVar13) - 1);
            uVar13 = uVar13 & -2 << ((byte)iVar8 & 0x1f);
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x28);
            lVar11 = (longlong)(iVar8 + iVar16) * 0x60;
            iVar8 = *(int *)(lVar11 + 0x10 + lVar3);
            if (-1 < iVar8) {
              *(undefined4 *)(lVar11 + 0x10 + lVar3) = 0xffffffff;
              *(undefined4 *)((longlong)iVar8 * 0x60 + 0x10 + lVar3) = 0xffffffff;
            }
            uVar19 = *puVar18;
            uVar21 = local_78;
            uVar4 = uVar13 & uVar19;
          }
          iVar16 = iVar16 + 0x20;
          puVar18 = puVar18 + 1;
          uVar13 = 0xffffffff;
          lVar24 = lVar24 + -1;
          piVar22 = local_68;
          uVar19 = local_res10;
        } while (lVar24 != 0);
      }
      piVar10 = piVar22;
      uVar13 = uVar13 & (~(-1 << ((byte)iVar7 & 0x1f)) * 2 | 1U);
      piVar12 = (int *)(ulonglong)((iVar7 >> 5) - 1);
      local_res10 = uVar19 + 1;
      piVar20 = (int *)(ulonglong)local_res10;
      lVar9 = lVar9 + 4;
      bVar25 = uVar23 != 0;
      piVar22 = piVar10;
      uVar23 = uVar23 - 1;
    } while (bVar25);
  }
  uVar17 = 0;
  uStack_60._4_4_ = 0x80000000;
  uStack_60._0_4_ = 0;
  local_68 = (int *)0x0;
  local_78 = 0;
  uVar13 = 0x80000000;
  uStack_60 = (int *)0x8000000000000000;
  uStack_70 = 0x8000000000000000;
  iVar16 = *(int *)(*(longlong *)(*param_1 + 8) + 0x30);
  uVar21 = uVar17;
  if (iVar16 < 1) {
LAB_144cbdbd2:
    iVar8 = (int)uVar21;
    uVar23 = uStack_60._4_4_;
    if (iVar16 < (int)uStack_60) goto LAB_144cbdbd4;
  }
  else {
    FUN_141807aa8(&local_68,&PTR_vftable_14c6e47c0,(longlong)iVar16);
    uVar21 = (ulonglong)uStack_60 & 0xffffffff;
    uVar23 = uStack_60._4_4_;
    if (iVar16 <= (int)uStack_60) goto LAB_144cbdbd2;
LAB_144cbdbd4:
    iVar8 = iVar16;
  }
  piVar10 = local_68;
  iVar16 = *(int *)(*(longlong *)(*param_1 + 8) + 0x20);
  if (iVar16 < 1) {
    uStack_70._0_4_ = 0;
    local_78 = uVar17;
LAB_144cbdc0f:
    iVar7 = (int)uVar17;
    uVar21 = local_78;
    uStack_70._4_4_ = uVar13;
    if ((int)uStack_70 <= iVar16) goto LAB_144cbdc13;
  }
  else {
    FUN_141807aa8(&local_78,&PTR_vftable_14c6e47c0,(longlong)iVar16);
    uVar17 = uStack_70 & 0xffffffff;
    uVar13 = uStack_70._4_4_;
    if (iVar16 <= (int)uStack_70) goto LAB_144cbdc0f;
  }
  uVar21 = local_78;
  uVar13 = uStack_70._4_4_;
  iVar7 = iVar16;
LAB_144cbdc13:
  uStack_70 = uVar21 + (longlong)iVar7 * 4;
  uStack_60 = piVar10 + iVar8;
  lVar2 = *param_1;
  local_78 = uVar21;
  local_68 = piVar10;
  FUN_144cb58b0(*(undefined8 *)(lVar2 + 8),lVar2 + 0x148,lVar2 + 0x130,&local_68,&local_78);
  lVar2 = *param_1;
  iVar16 = *(int *)(*(longlong *)(lVar2 + 8) + 0x30);
  if ((int)(*(uint *)(lVar2 + 0x17c) & 0x7fffffff) < iVar16) {
    FUN_141807aa8(lVar2 + 0x170,&PTR_vftable_14c6e47a0,(longlong)iVar16);
  }
  if ((*(int *)(lVar2 + 0x178) < iVar16) || (iVar16 < *(int *)(lVar2 + 0x178))) {
    *(int *)(lVar2 + 0x178) = iVar16;
  }
  iVar16 = 0;
  piVar12 = piVar10;
  if (0 < iVar8) {
    do {
      if (-1 < *piVar12) {
        *(int *)(*(longlong *)(*param_1 + 0x170) + (longlong)*piVar12 * 4) = iVar16;
      }
      iVar16 = iVar16 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar16 < iVar8);
  }
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x158) = 0;
  *(undefined4 *)(lVar2 + 0x150) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x154)) && (lVar9 = *(longlong *)(lVar2 + 0x148), lVar9 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar9,(ulonglong)(*(uint *)(lVar2 + 0x154) & 0x7fffffff) << 2)
    ;
  }
  *(longlong *)(lVar2 + 0x148) = 0;
  *(undefined4 *)(lVar2 + 0x154) = 0x80000000;
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x140) = 0;
  *(undefined4 *)(lVar2 + 0x138) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x13c)) && (lVar9 = *(longlong *)(lVar2 + 0x130), lVar9 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar9,(ulonglong)(*(uint *)(lVar2 + 0x13c) & 0x7fffffff) << 2)
    ;
  }
  *(longlong *)(lVar2 + 0x130) = 0;
  *(undefined4 *)(lVar2 + 0x13c) = 0x80000000;
  if ((-1 < (int)uVar13) && (uVar21 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,uVar21,(ulonglong)(uVar13 & 0x7fffffff) << 2);
  }
  if ((-1 < (int)uVar23) && (piVar10 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,piVar10,(ulonglong)(uVar23 & 0x7fffffff) << 2);
  }
  FUN_144cb4260(*(undefined8 *)(*param_1 + 8),*param_1 + 0x50);
  FUN_144cb3790(*param_1 + 0x50);
  lVar2 = *param_1;
  puVar15 = *(undefined4 **)(lVar2 + 0x160);
  iVar16 = *(int *)(lVar2 + 0x178);
  puVar1 = puVar15 + *(int *)(lVar2 + 0x168);
  iVar8 = *(int *)(lVar2 + 0x168) + iVar16;
  if ((int)(*(uint *)(lVar2 + 0x17c) & 0x7fffffff) < iVar8) {
    FUN_141807aa8((longlong *)(lVar2 + 0x170),&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  puVar5 = (undefined4 *)(*(longlong *)(lVar2 + 0x170) + (longlong)iVar16 * 4);
  for (; puVar15 != puVar1; puVar15 = puVar15 + 1) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar15;
    }
    puVar5 = puVar5 + 1;
  }
  *(int *)(lVar2 + 0x178) = iVar8;
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x168) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x16c)) && (*(longlong *)(lVar2 + 0x160) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar2 + 0x160),
               (ulonglong)(*(uint *)(lVar2 + 0x16c) & 0x7fffffff) << 2);
  }
  puVar6 = local_58;
  *(undefined8 *)(lVar2 + 0x160) = 0;
  *(undefined4 *)(lVar2 + 0x16c) = 0x80000000;
  if (local_58 != (undefined *)0x0) {
    local_58 = &DAT_149981764;
    puStack_50 = &DAT_149981766;
    FUN_144b3f260(puVar6,&local_58);
  }
  return;
}



// FUNCTION 144cbdef0 FUN_144cbdef0 body=628 status=ok
// SIG undefined FUN_144cbdef0(void)

void FUN_144cbdef0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  lVar1 = *(longlong *)(*param_1 + 8);
  puVar9 = (undefined4 *)((longlong)param_2 * 0x60 + *(longlong *)(lVar1 + 0x28));
  iVar10 = puVar9[3];
  lVar2 = *(longlong *)(lVar1 + 0x28);
  FUN_147e582da(lVar1 + 0x38,&local_118,*puVar9);
  FUN_147e582da(*(longlong *)(*param_1 + 8) + 0x38,&local_98,
                *(undefined4 *)((longlong)iVar10 * 0x60 + lVar2));
  lVar1 = param_1[1];
  iVar10 = *(int *)(lVar1 + 0x10) + 1;
  if ((int)(*(uint *)(lVar1 + 0x14) & 0x7fffffff) < iVar10) {
    FUN_144cc4bc0(lVar1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  puVar8 = (undefined8 *)((longlong)*(int *)(lVar1 + 0x10) * 0x120 + *(longlong *)(lVar1 + 8));
  *(int *)(lVar1 + 0x10) = iVar10;
  local_198 = local_118;
  uStack_190 = uStack_110;
  local_188 = CONCAT44(uStack_104,local_108);
  uStack_180 = CONCAT44(uStack_fc,uStack_100);
  local_178 = local_f8;
  uStack_174 = uStack_f4;
  uStack_170 = uStack_f0;
  uStack_16c = uStack_ec;
  local_168 = local_e8;
  uStack_164 = uStack_e4;
  uStack_160 = uStack_e0;
  uStack_15c = uStack_dc;
  local_158 = local_b8;
  uStack_150 = uStack_b0;
  local_148 = local_a8;
  uStack_140 = uStack_a0;
  FUN_144cb9d00(&local_198);
  *puVar8 = local_198;
  puVar8[1] = uStack_190;
  puVar8[2] = local_188;
  puVar8[3] = uStack_180;
  puVar8[4] = CONCAT44(uStack_174,local_178);
  puVar8[5] = CONCAT44(uStack_16c,uStack_170);
  puVar8[6] = CONCAT44(uStack_164,local_168);
  puVar8[7] = CONCAT44(uStack_15c,uStack_160);
  puVar8[8] = local_158;
  puVar8[9] = uStack_150;
  puVar8[10] = local_148;
  puVar8[0xb] = uStack_140;
  puVar8[0xc] = local_138;
  local_188 = local_88;
  uStack_180 = uStack_80;
  local_198 = CONCAT44(uStack_94,local_98);
  uStack_190 = CONCAT44(uStack_8c,uStack_90);
  local_178 = local_78;
  uStack_174 = uStack_74;
  uStack_170 = uStack_70;
  uStack_16c = uStack_6c;
  local_168 = local_68;
  uStack_164 = uStack_64;
  uStack_160 = uStack_60;
  uStack_15c = uStack_5c;
  local_158 = local_38;
  uStack_150 = uStack_30;
  local_148 = local_28;
  uStack_140 = uStack_20;
  FUN_144cb9d00(&local_198);
  puVar8[0xd] = local_198;
  puVar8[0xe] = uStack_190;
  puVar8[0xf] = local_188;
  puVar8[0x10] = uStack_180;
  puVar8[0x11] = CONCAT44(uStack_174,local_178);
  puVar8[0x12] = CONCAT44(uStack_16c,uStack_170);
  puVar8[0x13] = CONCAT44(uStack_164,local_168);
  puVar8[0x14] = CONCAT44(uStack_15c,uStack_160);
  puVar8[0x15] = local_158;
  puVar8[0x16] = uStack_150;
  puVar8[0x17] = local_148;
  puVar8[0x18] = uStack_140;
  puVar8[0x19] = local_138;
  uVar7 = *(undefined8 *)(puVar9 + 8);
  puVar8[0x1a] = *(undefined8 *)(puVar9 + 6);
  puVar8[0x1b] = uVar7;
  uVar7 = *(undefined8 *)(puVar9 + 0xc);
  puVar8[0x1c] = *(undefined8 *)(puVar9 + 10);
  puVar8[0x1d] = uVar7;
  uVar7 = *(undefined8 *)(puVar9 + 0x10);
  puVar8[0x1e] = *(undefined8 *)(puVar9 + 0xe);
  puVar8[0x1f] = uVar7;
  uVar4 = puVar9[0x13];
  uVar5 = puVar9[0x14];
  uVar6 = puVar9[0x15];
  *(undefined4 *)(puVar8 + 0x20) = puVar9[0x12];
  *(undefined4 *)((longlong)puVar8 + 0x104) = uVar4;
  *(undefined4 *)(puVar8 + 0x21) = uVar5;
  *(undefined4 *)((longlong)puVar8 + 0x10c) = uVar6;
  puVar8[0x22] = *(undefined8 *)(puVar9 + 0x16);
  *(int *)(puVar8 + 0x23) = param_2;
  FUN_144cbb9d0(param_1[1] + 0x18,1,*(int *)(param_1[1] + 0x10) + -1);
  uVar7 = FUN_147e58064(&local_118,&local_98);
  FUN_144cb85f0(uVar7,local_128);
  pauVar3 = (undefined1 (*) [16])param_1[2];
  auVar11 = minps(*pauVar3,local_128);
  *pauVar3 = auVar11;
  auVar11 = maxps(pauVar3[1],local_128);
  pauVar3[1] = auVar11;
  return;
}



// FUNCTION 144cbe170 FUN_144cbe170 body=783 status=ok
// SIG undefined FUN_144cbe170(void)

void FUN_144cbe170(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  longlong local_160;
  undefined1 (*local_158) [16];
  int *local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
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
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar8 = *(int *)(*param_1 + (longlong)param_2 * 8);
  if (iVar8 != -1) {
    lVar1 = param_3[1];
    local_158 = (undefined1 (*) [16])param_3[2];
    lVar2 = *param_3;
    local_160 = lVar1 + 0x18;
    do {
      local_150 = (int *)(param_1[2] + (longlong)iVar8 * 8);
      iVar8 = *local_150;
      do {
        lVar3 = *(longlong *)(lVar2 + 8);
        lVar13 = (longlong)iVar8 * 0x70 + param_1[4];
        iVar8 = *(int *)(lVar13 + 0x68);
        puVar10 = (undefined4 *)((longlong)iVar8 * 0x60 + *(longlong *)(lVar3 + 0x28));
        iVar11 = puVar10[3];
        lVar4 = *(longlong *)(lVar3 + 0x28);
        FUN_147e582da(lVar3 + 0x38,&local_138,*puVar10);
        FUN_147e582da(*(longlong *)(lVar2 + 8) + 0x38,&local_b8,
                      *(undefined4 *)((longlong)iVar11 * 0x60 + lVar4));
        iVar11 = *(int *)(lVar1 + 0x10) + 1;
        if ((int)(*(uint *)(lVar1 + 0x14) & 0x7fffffff) < iVar11) {
          FUN_144cc4bc0((longlong *)(lVar1 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        puVar12 = (undefined8 *)
                  ((longlong)*(int *)(lVar1 + 0x10) * 0x120 + *(longlong *)(lVar1 + 8));
        *(int *)(lVar1 + 0x10) = iVar11;
        local_1c8 = local_138;
        uStack_1c0 = uStack_130;
        local_1b8 = local_128;
        uStack_1b4 = uStack_124;
        uStack_1b0 = uStack_120;
        uStack_1ac = uStack_11c;
        local_1a8 = local_118;
        uStack_1a4 = uStack_114;
        uStack_1a0 = uStack_110;
        uStack_19c = uStack_10c;
        local_198 = local_108;
        uStack_194 = uStack_104;
        uStack_190 = uStack_100;
        uStack_18c = uStack_fc;
        local_188 = local_d8;
        uStack_180 = uStack_d0;
        local_178 = local_c8;
        uStack_170 = uStack_c0;
        FUN_144cb9d00(&local_1c8);
        *puVar12 = local_1c8;
        puVar12[1] = uStack_1c0;
        puVar12[2] = CONCAT44(uStack_1b4,local_1b8);
        puVar12[3] = CONCAT44(uStack_1ac,uStack_1b0);
        puVar12[4] = CONCAT44(uStack_1a4,local_1a8);
        puVar12[5] = CONCAT44(uStack_19c,uStack_1a0);
        puVar12[6] = CONCAT44(uStack_194,local_198);
        puVar12[7] = CONCAT44(uStack_18c,uStack_190);
        puVar12[8] = local_188;
        puVar12[9] = uStack_180;
        puVar12[10] = local_178;
        puVar12[0xb] = uStack_170;
        puVar12[0xc] = local_168;
        local_1c8 = local_b8;
        uStack_1c0 = uStack_b0;
        local_1b8 = local_a8;
        uStack_1b4 = uStack_a4;
        uStack_1b0 = uStack_a0;
        uStack_1ac = uStack_9c;
        local_1a8 = local_98;
        uStack_1a4 = uStack_94;
        uStack_1a0 = uStack_90;
        uStack_19c = uStack_8c;
        local_198 = local_88;
        uStack_194 = uStack_84;
        uStack_190 = uStack_80;
        uStack_18c = uStack_7c;
        local_188 = local_58;
        uStack_180 = uStack_50;
        local_178 = local_48;
        uStack_170 = uStack_40;
        FUN_144cb9d00(&local_1c8);
        puVar12[0xd] = local_1c8;
        puVar12[0xe] = uStack_1c0;
        puVar12[0xf] = CONCAT44(uStack_1b4,local_1b8);
        puVar12[0x10] = CONCAT44(uStack_1ac,uStack_1b0);
        puVar12[0x11] = CONCAT44(uStack_1a4,local_1a8);
        puVar12[0x12] = CONCAT44(uStack_19c,uStack_1a0);
        puVar12[0x13] = CONCAT44(uStack_194,local_198);
        puVar12[0x14] = CONCAT44(uStack_18c,uStack_190);
        puVar12[0x15] = local_188;
        puVar12[0x16] = uStack_180;
        puVar12[0x17] = local_178;
        puVar12[0x18] = uStack_170;
        puVar12[0x19] = local_168;
        uVar9 = *(undefined8 *)(puVar10 + 8);
        puVar12[0x1a] = *(undefined8 *)(puVar10 + 6);
        puVar12[0x1b] = uVar9;
        uVar9 = *(undefined8 *)(puVar10 + 0xc);
        puVar12[0x1c] = *(undefined8 *)(puVar10 + 10);
        puVar12[0x1d] = uVar9;
        uVar9 = *(undefined8 *)(puVar10 + 0x10);
        puVar12[0x1e] = *(undefined8 *)(puVar10 + 0xe);
        puVar12[0x1f] = uVar9;
        uVar5 = puVar10[0x13];
        uVar6 = puVar10[0x14];
        uVar7 = puVar10[0x15];
        *(undefined4 *)(puVar12 + 0x20) = puVar10[0x12];
        *(undefined4 *)((longlong)puVar12 + 0x104) = uVar5;
        *(undefined4 *)(puVar12 + 0x21) = uVar6;
        *(undefined4 *)((longlong)puVar12 + 0x10c) = uVar7;
        puVar12[0x22] = *(undefined8 *)(puVar10 + 0x16);
        *(int *)(puVar12 + 0x23) = iVar8;
        FUN_144cbb9d0(local_160,1,*(int *)(lVar1 + 0x10) + -1);
        uVar9 = FUN_147e58064(&local_138,&local_b8);
        FUN_144cb85f0(uVar9,local_148);
        auVar14 = minps(*local_158,local_148);
        *local_158 = auVar14;
        auVar14 = maxps(local_158[1],local_148);
        local_158[1] = auVar14;
        iVar8 = *(int *)(lVar13 + 0x6c);
      } while (iVar8 != *local_150);
      iVar8 = local_150[1];
    } while (iVar8 != -1);
  }
  return;
}



// FUNCTION 144cbe480 FUN_144cbe480 body=577 status=ok
// SIG undefined FUN_144cbe480(void)

void FUN_144cbe480(undefined8 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
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
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar3 = param_1[1];
  iVar11 = *(int *)(lVar3 + 0x10) + 1;
  puVar10 = (undefined4 *)((longlong)param_2 * 0x60 + *(longlong *)(*(longlong *)*param_1 + 0x28));
  iVar1 = puVar10[3];
  lVar4 = *(longlong *)(*(longlong *)*param_1 + 0x28);
  if ((int)(*(uint *)(lVar3 + 0x14) & 0x7fffffff) < iVar11) {
    FUN_144cc4bc0(lVar3 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar11);
  }
  iVar2 = *(int *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x10) = iVar11;
  puVar9 = (undefined8 *)((longlong)iVar2 * 0x120 + *(longlong *)(lVar3 + 8));
  FUN_147e582da(*(longlong *)*param_1 + 0x38,&local_a0,*puVar10);
  local_108 = local_a0;
  uStack_104 = uStack_9c;
  uStack_100 = uStack_98;
  uStack_fc = uStack_94;
  local_f8 = local_90;
  uStack_f4 = uStack_8c;
  uStack_f0 = uStack_88;
  uStack_ec = uStack_84;
  local_e8 = local_80;
  uStack_e4 = uStack_7c;
  uStack_e0 = uStack_78;
  uStack_dc = uStack_74;
  local_d8 = local_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  uStack_cc = uStack_64;
  local_c8 = local_40;
  uStack_c0 = uStack_38;
  local_b8 = local_30;
  uStack_b0 = uStack_28;
  FUN_144cb9d00(&local_108);
  *puVar9 = CONCAT44(uStack_104,local_108);
  puVar9[1] = CONCAT44(uStack_fc,uStack_100);
  puVar9[2] = CONCAT44(uStack_f4,local_f8);
  puVar9[3] = CONCAT44(uStack_ec,uStack_f0);
  puVar9[4] = CONCAT44(uStack_e4,local_e8);
  puVar9[5] = CONCAT44(uStack_dc,uStack_e0);
  puVar9[6] = CONCAT44(uStack_d4,local_d8);
  puVar9[7] = CONCAT44(uStack_cc,uStack_d0);
  puVar9[8] = local_c8;
  puVar9[9] = uStack_c0;
  *(undefined4 *)(puVar9 + 10) = (undefined4)local_b8;
  *(undefined4 *)((longlong)puVar9 + 0x54) = local_b8._4_4_;
  *(undefined4 *)(puVar9 + 0xb) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)puVar9 + 0x5c) = uStack_b0._4_4_;
  puVar9[0xc] = local_a8;
  FUN_147e582da(*(longlong *)*param_1 + 0x38,&local_a0,
                *(undefined4 *)((longlong)iVar1 * 0x60 + lVar4));
  local_108 = local_a0;
  uStack_104 = uStack_9c;
  uStack_100 = uStack_98;
  uStack_fc = uStack_94;
  local_f8 = local_90;
  uStack_f4 = uStack_8c;
  uStack_f0 = uStack_88;
  uStack_ec = uStack_84;
  local_e8 = local_80;
  uStack_e4 = uStack_7c;
  uStack_e0 = uStack_78;
  uStack_dc = uStack_74;
  local_d8 = local_70;
  uStack_d4 = uStack_6c;
  uStack_d0 = uStack_68;
  uStack_cc = uStack_64;
  local_c8 = local_40;
  uStack_c0 = uStack_38;
  local_b8 = local_30;
  uStack_b0 = uStack_28;
  FUN_144cb9d00(&local_108);
  puVar9[0xd] = CONCAT44(uStack_104,local_108);
  puVar9[0xe] = CONCAT44(uStack_fc,uStack_100);
  puVar9[0xf] = CONCAT44(uStack_f4,local_f8);
  puVar9[0x10] = CONCAT44(uStack_ec,uStack_f0);
  puVar9[0x11] = CONCAT44(uStack_e4,local_e8);
  puVar9[0x12] = CONCAT44(uStack_dc,uStack_e0);
  puVar9[0x13] = CONCAT44(uStack_d4,local_d8);
  puVar9[0x14] = CONCAT44(uStack_cc,uStack_d0);
  puVar9[0x15] = local_c8;
  puVar9[0x16] = uStack_c0;
  puVar9[0x17] = local_b8;
  puVar9[0x18] = uStack_b0;
  puVar9[0x19] = local_a8;
  uVar8 = *(undefined8 *)(puVar10 + 8);
  puVar9[0x1a] = *(undefined8 *)(puVar10 + 6);
  puVar9[0x1b] = uVar8;
  uVar8 = *(undefined8 *)(puVar10 + 0xc);
  puVar9[0x1c] = *(undefined8 *)(puVar10 + 10);
  puVar9[0x1d] = uVar8;
  uVar8 = *(undefined8 *)(puVar10 + 0x10);
  puVar9[0x1e] = *(undefined8 *)(puVar10 + 0xe);
  puVar9[0x1f] = uVar8;
  uVar5 = puVar10[0x13];
  uVar6 = puVar10[0x14];
  uVar7 = puVar10[0x15];
  *(undefined4 *)(puVar9 + 0x20) = puVar10[0x12];
  *(undefined4 *)((longlong)puVar9 + 0x104) = uVar5;
  *(undefined4 *)(puVar9 + 0x21) = uVar6;
  *(undefined4 *)((longlong)puVar9 + 0x10c) = uVar7;
  puVar9[0x22] = *(undefined8 *)(puVar10 + 0x16);
  *(undefined4 *)(puVar9 + 0x23) = 0xffffffff;
  FUN_144cbb9d0(param_1[1] + 0x18,0,*(int *)(param_1[1] + 0x10) + -1);
  return;
}



// FUNCTION 144cbe6d0 FUN_144cbe6d0 body=728 status=ok
// SIG undefined FUN_144cbe6d0(void)

void FUN_144cbe6d0(longlong *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
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
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar8 = *(int *)(*param_1 + (longlong)param_2 * 8);
  if (iVar8 != -1) {
    lVar2 = param_3[1];
    plVar11 = (longlong *)*param_3;
    do {
      local_c0 = (int *)(param_1[2] + (longlong)iVar8 * 8);
      iVar8 = *(int *)(param_1[2] + (longlong)iVar8 * 8);
      do {
        lVar3 = *(longlong *)(*plVar11 + 0x28);
        iVar10 = *(int *)(lVar2 + 0x10) + 1;
        lVar13 = (longlong)iVar8 * 0x70 + param_1[4];
        puVar9 = (undefined4 *)((longlong)*(int *)(lVar13 + 0x68) * 0x60 + lVar3);
        iVar8 = puVar9[3];
        if ((int)(*(uint *)(lVar2 + 0x14) & 0x7fffffff) < iVar10) {
          FUN_144cc4bc0((longlong *)(lVar2 + 8),&PTR_vftable_14c6e47a0,(longlong)iVar10);
        }
        iVar1 = *(int *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x10) = iVar10;
        plVar11 = (longlong *)*param_3;
        puVar12 = (undefined8 *)((longlong)iVar1 * 0x120 + *(longlong *)(lVar2 + 8));
        FUN_147e582da(*plVar11 + 0x38,&local_b8,*puVar9);
        local_128 = local_b8;
        uStack_124 = uStack_b4;
        uStack_120 = uStack_b0;
        uStack_11c = uStack_ac;
        local_118 = local_a8;
        uStack_114 = uStack_a4;
        uStack_110 = uStack_a0;
        uStack_10c = uStack_9c;
        local_108 = local_98;
        uStack_104 = uStack_94;
        uStack_100 = uStack_90;
        uStack_fc = uStack_8c;
        local_f8 = local_88;
        uStack_f4 = uStack_84;
        uStack_f0 = uStack_80;
        uStack_ec = uStack_7c;
        local_e8 = local_58;
        uStack_e0 = uStack_50;
        local_d8 = local_48;
        uStack_d0 = uStack_40;
        FUN_144cb9d00(&local_128);
        *puVar12 = CONCAT44(uStack_124,local_128);
        puVar12[1] = CONCAT44(uStack_11c,uStack_120);
        puVar12[2] = CONCAT44(uStack_114,local_118);
        puVar12[3] = CONCAT44(uStack_10c,uStack_110);
        puVar12[4] = CONCAT44(uStack_104,local_108);
        puVar12[5] = CONCAT44(uStack_fc,uStack_100);
        puVar12[6] = CONCAT44(uStack_f4,local_f8);
        puVar12[7] = CONCAT44(uStack_ec,uStack_f0);
        puVar12[8] = local_e8;
        puVar12[9] = uStack_e0;
        *(undefined4 *)(puVar12 + 10) = (undefined4)local_d8;
        *(undefined4 *)((longlong)puVar12 + 0x54) = local_d8._4_4_;
        *(undefined4 *)(puVar12 + 0xb) = (undefined4)uStack_d0;
        *(undefined4 *)((longlong)puVar12 + 0x5c) = uStack_d0._4_4_;
        puVar12[0xc] = local_c8;
        FUN_147e582da(*plVar11 + 0x38,&local_b8,*(undefined4 *)((longlong)iVar8 * 0x60 + lVar3));
        local_128 = local_b8;
        uStack_124 = uStack_b4;
        uStack_120 = uStack_b0;
        uStack_11c = uStack_ac;
        local_118 = local_a8;
        uStack_114 = uStack_a4;
        uStack_110 = uStack_a0;
        uStack_10c = uStack_9c;
        local_108 = local_98;
        uStack_104 = uStack_94;
        uStack_100 = uStack_90;
        uStack_fc = uStack_8c;
        local_f8 = local_88;
        uStack_f4 = uStack_84;
        uStack_f0 = uStack_80;
        uStack_ec = uStack_7c;
        local_e8 = local_58;
        uStack_e0 = uStack_50;
        local_d8 = local_48;
        uStack_d0 = uStack_40;
        FUN_144cb9d00(&local_128);
        puVar12[0xd] = CONCAT44(uStack_124,local_128);
        puVar12[0xe] = CONCAT44(uStack_11c,uStack_120);
        puVar12[0xf] = CONCAT44(uStack_114,local_118);
        puVar12[0x10] = CONCAT44(uStack_10c,uStack_110);
        puVar12[0x11] = CONCAT44(uStack_104,local_108);
        puVar12[0x12] = CONCAT44(uStack_fc,uStack_100);
        puVar12[0x13] = CONCAT44(uStack_f4,local_f8);
        puVar12[0x14] = CONCAT44(uStack_ec,uStack_f0);
        puVar12[0x15] = local_e8;
        puVar12[0x16] = uStack_e0;
        puVar12[0x17] = local_d8;
        puVar12[0x18] = uStack_d0;
        puVar12[0x19] = local_c8;
        uVar7 = *(undefined8 *)(puVar9 + 8);
        puVar12[0x1a] = *(undefined8 *)(puVar9 + 6);
        puVar12[0x1b] = uVar7;
        uVar7 = *(undefined8 *)(puVar9 + 0xc);
        puVar12[0x1c] = *(undefined8 *)(puVar9 + 10);
        puVar12[0x1d] = uVar7;
        uVar7 = *(undefined8 *)(puVar9 + 0x10);
        puVar12[0x1e] = *(undefined8 *)(puVar9 + 0xe);
        puVar12[0x1f] = uVar7;
        uVar4 = puVar9[0x13];
        uVar5 = puVar9[0x14];
        uVar6 = puVar9[0x15];
        *(undefined4 *)(puVar12 + 0x20) = puVar9[0x12];
        *(undefined4 *)((longlong)puVar12 + 0x104) = uVar4;
        *(undefined4 *)(puVar12 + 0x21) = uVar5;
        *(undefined4 *)((longlong)puVar12 + 0x10c) = uVar6;
        puVar12[0x22] = *(undefined8 *)(puVar9 + 0x16);
        *(undefined4 *)(puVar12 + 0x23) = 0xffffffff;
        FUN_144cbb9d0(lVar2 + 0x18,0,*(int *)(lVar2 + 0x10) + -1);
        iVar8 = *(int *)(lVar13 + 0x6c);
      } while (iVar8 != *local_c0);
      iVar8 = local_c0[1];
    } while (iVar8 != -1);
  }
  return;
}



// FUNCTION 144cbe9b0 FUN_144cbe9b0 body=345 status=ok
// SIG undefined FUN_144cbe9b0(void)

void FUN_144cbe9b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  lVar2 = *param_1;
  iVar8 = *(int *)(lVar2 + 0x10) + 1;
  if ((int)(*(uint *)(lVar2 + 0x14) & 0x7fffffff) < iVar8) {
    FUN_144cc4bc0(lVar2 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  iVar1 = *(int *)(lVar2 + 0x10);
  *(int *)(lVar2 + 0x10) = iVar8;
  uVar6 = param_2[1];
  puVar7 = (undefined8 *)((longlong)iVar1 * 0x120 + *(longlong *)(lVar2 + 8));
  *puVar7 = *param_2;
  puVar7[1] = uVar6;
  uVar6 = param_2[3];
  puVar7[2] = param_2[2];
  puVar7[3] = uVar6;
  uVar6 = param_2[5];
  puVar7[4] = param_2[4];
  puVar7[5] = uVar6;
  uVar6 = param_2[7];
  puVar7[6] = param_2[6];
  puVar7[7] = uVar6;
  uVar6 = param_2[9];
  puVar7[8] = param_2[8];
  puVar7[9] = uVar6;
  uVar6 = param_2[0xb];
  puVar7[10] = param_2[10];
  puVar7[0xb] = uVar6;
  puVar7[0xc] = param_2[0xc];
  uVar6 = param_3[1];
  puVar7[0xd] = *param_3;
  puVar7[0xe] = uVar6;
  uVar6 = param_3[3];
  puVar7[0xf] = param_3[2];
  puVar7[0x10] = uVar6;
  uVar6 = param_3[5];
  puVar7[0x11] = param_3[4];
  puVar7[0x12] = uVar6;
  uVar6 = param_3[7];
  puVar7[0x13] = param_3[6];
  puVar7[0x14] = uVar6;
  uVar6 = param_3[9];
  puVar7[0x15] = param_3[8];
  puVar7[0x16] = uVar6;
  uVar6 = param_3[0xb];
  puVar7[0x17] = param_3[10];
  puVar7[0x18] = uVar6;
  puVar7[0x19] = param_3[0xc];
  uVar6 = param_4[1];
  puVar7[0x1a] = *param_4;
  puVar7[0x1b] = uVar6;
  uVar6 = param_4[3];
  puVar7[0x1c] = param_4[2];
  puVar7[0x1d] = uVar6;
  uVar6 = param_4[5];
  puVar7[0x1e] = param_4[4];
  puVar7[0x1f] = uVar6;
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar4 = *(undefined4 *)(param_4 + 7);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(param_4 + 6);
  *(undefined4 *)((longlong)puVar7 + 0x104) = uVar3;
  *(undefined4 *)(puVar7 + 0x21) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x10c) = uVar5;
  puVar7[0x22] = param_4[8];
  *(undefined4 *)(puVar7 + 0x23) = 0xffffffff;
  FUN_144cbb9d0(*param_1 + 0x18,0,*(int *)(*param_1 + 0x10) + -1);
  return;
}



// FUNCTION 144cbeb10 FUN_144cbeb10 body=5027 status=ok
// SIG undefined FUN_144cbeb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144cbeb10(longlong param_1,longlong *param_2,int param_3,longlong *param_4,
                  ulonglong *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 *puVar34;
  char cVar35;
  int iVar36;
  int iVar37;
  longlong lVar38;
  longlong *plVar39;
  longlong lVar40;
  longlong lVar41;
  undefined8 *puVar42;
  ulonglong *puVar43;
  undefined4 *puVar44;
  ulonglong uVar45;
  uint uVar46;
  longlong lVar47;
  longlong *plVar48;
  int iVar49;
  float *pfVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  int iVar54;
  uint uVar55;
  longlong *plVar56;
  bool bVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  longlong local_res10;
  undefined1 local_res18;
  int local_res20;
  undefined1 local_2c08 [4];
  int local_2c04;
  int local_2c00;
  int local_2bfc;
  longlong local_2bf8;
  longlong lStack_2bf0;
  longlong local_2be8;
  ulonglong *local_2bd8;
  longlong lStack_2bd0;
  undefined8 local_2bc8;
  undefined8 uStack_2bc0;
  undefined8 local_2bb8;
  undefined8 uStack_2bb0;
  ulonglong uStack_2ba8;
  ulonglong uStack_2ba0;
  undefined1 local_2b98 [16];
  undefined8 *local_2b88;
  longlong lStack_2b80;
  undefined1 local_2b78 [16];
  longlong local_2b68;
  longlong lStack_2b60;
  longlong local_2b58;
  undefined8 uStack_2b50;
  ulonglong local_2b48;
  ulonglong local_2b40;
  ulonglong local_2b38;
  ulonglong local_2b30;
  longlong local_2b28;
  undefined8 *local_2b20;
  longlong lStack_2b18;
  undefined8 local_2b08;
  undefined8 uStack_2b00;
  undefined8 local_2af8;
  undefined8 uStack_2af0;
  undefined4 local_2ae8;
  undefined4 uStack_2ae4;
  undefined4 uStack_2ae0;
  undefined4 uStack_2adc;
  undefined4 local_2ad8;
  undefined4 uStack_2ad4;
  undefined4 uStack_2ad0;
  undefined4 uStack_2acc;
  undefined8 local_2ac8;
  undefined8 uStack_2ac0;
  undefined8 local_2ab8;
  undefined8 uStack_2ab0;
  undefined8 local_2aa8;
  undefined8 uStack_2aa0;
  undefined8 local_2a98;
  undefined8 uStack_2a90;
  undefined8 local_2a88;
  undefined8 uStack_2a80;
  undefined8 local_2a78;
  undefined8 uStack_2a70;
  undefined8 local_2a68;
  ulonglong local_2a58;
  ulonglong uStack_2a50;
  ulonglong local_2a48;
  ulonglong uStack_2a40;
  ulonglong local_2a38;
  ulonglong uStack_2a30;
  ulonglong local_2a28;
  ulonglong uStack_2a20;
  ulonglong local_2a18;
  ulonglong uStack_2a10;
  ulonglong local_2a08;
  ulonglong uStack_2a00;
  undefined8 local_29f8;
  longlong local_29e8;
  longlong lStack_29e0;
  longlong local_29d8;
  undefined8 local_29c8;
  undefined8 uStack_29c0;
  ulonglong local_29b8;
  undefined4 local_29a8;
  undefined4 uStack_29a4;
  undefined4 uStack_29a0;
  undefined4 uStack_299c;
  undefined4 local_2998;
  undefined4 uStack_2994;
  undefined4 uStack_2990;
  undefined4 uStack_298c;
  undefined4 local_2988;
  undefined4 uStack_2984;
  undefined4 uStack_2980;
  undefined4 uStack_297c;
  undefined4 local_2978;
  undefined4 uStack_2974;
  undefined4 uStack_2970;
  undefined4 uStack_296c;
  undefined4 local_2968;
  undefined4 uStack_2964;
  undefined4 uStack_2960;
  undefined4 uStack_295c;
  undefined4 local_2958;
  undefined4 uStack_2954;
  undefined4 uStack_2950;
  undefined4 uStack_294c;
  int local_2948;
  int iStack_2944;
  undefined8 local_2938;
  undefined8 uStack_2930;
  longlong local_2928;
  undefined1 *local_2918;
  int local_2910;
  uint local_290c;
  undefined1 local_2908 [216];
  longlong *local_2830;
  int local_2828;
  uint local_2824;
  longlong local_2820 [1271];
  
  local_2918 = local_2908;
  puVar43 = (ulonglong *)*param_6;
  puVar4 = (ulonglong *)param_6[1];
  local_2910 = 0;
  local_290c = 0x80000003;
  local_2bd8 = puVar43;
  if (puVar43 != puVar4) {
    local_res18 = (undefined1)param_3;
    do {
      local_2bc8 = *param_5;
      uStack_2bc0 = param_5[1];
      iVar49 = local_2910 + 1;
      local_2bb8 = param_5[2];
      uStack_2bb0 = *puVar43;
      uStack_2ba8 = puVar43[1];
      if ((int)(local_290c & 0x7fffffff) < iVar49) {
        FUN_144cc5c50(&local_2918,&PTR_vftable_14c6e47a0,(longlong)iVar49);
      }
      puVar34 = local_2918;
      lVar38 = (longlong)local_2910;
      local_2910 = iVar49;
      plVar39 = (longlong *)FUN_147e5ec64(&local_2b08,param_4,&local_2bc8,local_res18);
      puVar42 = (undefined8 *)*plVar39;
      lVar47 = plVar39[1];
      auVar3 = *(undefined1 (*) [16])(plVar39 + 2);
      lVar53 = plVar39[4];
      lVar52 = plVar39[5];
      local_2b58 = plVar39[6];
      local_2b88 = puVar42;
      lStack_2b80 = lVar47;
      local_2b78 = auVar3;
      local_2b68 = lVar53;
      lStack_2b60 = lVar52;
      lVar40 = FUN_147e513e3(local_2b78,&local_2c04);
      iVar49 = local_2c04 * 0x800000;
      lVar41 = FUN_147e513e3(&local_2b88,&local_2c00);
      uStack_2b50 = CONCAT44((float)((int)(float)lVar40 + iVar49) * 5.421011e-20,
                             (float)(local_2c00 * 0x800000 + (int)(float)lVar41) * 5.421011e-20);
      lVar40 = FUN_147e510dd(&local_2b68,&local_2bfc);
      puVar43 = puVar43 + 2;
      *(undefined8 **)(puVar34 + lVar38 * 0x48) = puVar42;
      *(longlong *)((longlong)(puVar34 + lVar38 * 0x48) + 8) = lVar47;
      *(undefined1 (*) [16])(puVar34 + lVar38 * 0x48 + 0x10) = auVar3;
      *(longlong *)(puVar34 + lVar38 * 0x48 + 0x20) = lVar53;
      *(longlong *)((longlong)(puVar34 + lVar38 * 0x48 + 0x20) + 8) = lVar52;
      *(longlong *)(puVar34 + lVar38 * 0x48 + 0x30) = local_2b58;
      *(ulonglong *)((longlong)(puVar34 + lVar38 * 0x48 + 0x30) + 8) = uStack_2b50;
      local_2b48 = CONCAT44((int)(local_2b48 >> 0x20),
                            (float)((int)(float)lVar40 + local_2bfc * 0x800000) * 5.421011e-20);
      *(ulonglong *)(puVar34 + lVar38 * 0x48 + 0x40) = local_2b48;
    } while (puVar43 != puVar4);
  }
  local_2824 = 0x80000003;
  local_2828 = 0;
  local_2830 = local_2820;
  iVar49 = (int)((longlong)puVar4 - (longlong)local_2bd8 >> 4);
  lVar47 = (longlong)iVar49;
  if (3 < iVar49) {
    FUN_144cc6350(&local_2830,&PTR_vftable_14c6e47a0,lVar47);
  }
  if (local_2828 < iVar49) {
    for (plVar39 = local_2830 + (longlong)local_2828 * 0x1a2; local_2828 = iVar49,
        plVar39 != local_2830 + lVar47 * 0x1a2; plVar39 = plVar39 + 0x1a2) {
      if (plVar39 != (longlong *)0x0) {
        *(undefined4 *)(plVar39 + 1) = 0;
        *plVar39 = (longlong)(plVar39 + 2);
        *(undefined4 *)((longlong)plVar39 + 0xc) = 0x80000020;
      }
    }
  }
  else if (iVar49 < local_2828) {
    lVar53 = (longlong)local_2828;
    plVar56 = local_2830 + lVar47 * 0x1a2;
    local_2828 = iVar49;
    plVar39 = local_2830 + lVar53 * 0x1a2;
    while (plVar39 != plVar56) {
      plVar48 = plVar39 + -0x1a2;
      *(undefined4 *)(plVar39 + -0x1a1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar39 + -0xd04)) && (*plVar48 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar48,
                   (ulonglong)(*(uint *)((longlong)plVar39 + -0xd04) & 0x7fffffff) * 0x68);
      }
      *plVar48 = 0;
      *(undefined4 *)((longlong)plVar39 + -0xd04) = 0x80000000;
      plVar39 = plVar48;
    }
  }
  iVar49 = *(int *)(*param_2 + (longlong)param_3 * 8);
  iVar36 = local_2910;
  do {
    local_2910 = iVar36;
    if (iVar49 == -1) {
      uVar55 = 0;
      uVar2 = *param_5;
      lVar47 = *param_4;
      uVar5 = param_5[2];
      lVar53 = param_4[2];
      uVar51 = param_4[1] * uVar2;
      uVar45 = param_5[1] * lVar47;
      local_2bf8 = uVar45 - uVar51;
      lStack_2bf0 = (SUB168(SEXT816((longlong)param_5[1]) * SEXT816(lVar47),8) -
                    SUB168(SEXT816((longlong)uVar2) * SEXT816(param_4[1]),8)) -
                    (ulonglong)(uVar45 < uVar51);
      uVar45 = (ulonglong)(uVar2 * lVar53 < lVar47 * uVar5);
      uVar6 = SUB168(SEXT816((longlong)uVar2) * SEXT816(lVar53),8) -
              SUB168(SEXT816((longlong)uVar5) * SEXT816(lVar47),8);
      uVar51 = (ulonglong)(uVar5 * param_4[1] < lVar53 * param_5[1]);
      uVar7 = SUB168(SEXT816((longlong)uVar5) * SEXT816(param_4[1]),8) -
              SUB168(SEXT816((longlong)param_5[1]) * SEXT816(lVar53),8);
      bVar57 = uVar5 * param_4[1] - lVar53 * param_5[1] == 0;
      if (bVar57 && uVar7 == uVar51) {
        local_2c08[0] =
             -1 < (longlong)(uVar6 - uVar45) &&
             (uVar6 != uVar45 || uVar2 * lVar53 - lVar47 * uVar5 != 0);
      }
      else {
        uVar46 = uVar55;
        if (-1 < (longlong)(uVar7 - uVar51)) {
          uVar46 = (uint)(!bVar57 || uVar7 != uVar51);
        }
        local_2c08[0] = (undefined1)uVar46;
      }
      lVar47 = param_6[1];
      lVar53 = *param_6;
      if (0 < (int)(lVar47 - lVar53 >> 4)) {
        local_res10 = 0;
        do {
          plVar39 = local_2830;
          iVar36 = 0;
          iVar49 = (int)local_2830[local_res10 * 0x1a2 + 1];
          if (1 < iVar49) {
            FUN_144cc4d60(local_2830[local_res10 * 0x1a2],0,iVar49 + -1,local_2c08);
            iVar49 = (int)plVar39[local_res10 * 0x1a2 + 1];
          }
          plVar56 = (longlong *)(local_2918 + local_res10 * 0x48);
          local_2bd8 = (ulonglong *)-plVar56[2];
          lStack_2bd0 = -(ulonglong)(plVar56[2] != 0) - plVar56[3];
          local_2b88 = (undefined8 *)-*plVar56;
          local_2b48 = *(ulonglong *)(local_2918 + local_res10 * 0x48 + 0x40) ^ 0x80000000;
          lStack_2b80 = -(ulonglong)(*plVar56 != 0) - plVar56[1];
          local_2bf8 = -plVar56[4];
          local_2b78._8_8_ = lStack_2bd0;
          local_2b78._0_8_ = local_2bd8;
          uVar2 = (ulonglong)(plVar56[4] != 0);
          uVar5 = -plVar56[5];
          lStack_2bf0 = uVar5 - uVar2;
          local_2be8 = -(ulonglong)(plVar56[5] != 0 || uVar5 < uVar2) - plVar56[6];
          uStack_2b50 = plVar56[7] ^ 0x8000000080000000;
          local_res20 = (int)(lVar47 - lVar53 >> 4);
          local_2b68 = local_2bf8;
          lStack_2b60 = lStack_2bf0;
          local_2b58 = local_2be8;
          local_2b20 = local_2b88;
          lStack_2b18 = lStack_2b80;
          if (0 < iVar49) {
            do {
              lVar52 = (longlong)(iVar36 + 1) * 0x68;
              lVar38 = (longlong)iVar36 * 0x68;
              cVar35 = FUN_144cc4380(plVar39[local_res10 * 0x1a2] + lVar38,
                                     plVar39[local_res10 * 0x1a2] + lVar52);
              if (cVar35 == '\0') {
                if (uVar55 != 0) {
                  if (local_res10 == 1) {
                    FUN_144cbe9b0(param_8,plVar39[local_res10 * 0x1a2] + lVar38,
                                  plVar39[local_res10 * 0x1a2] + lVar52,plVar56);
                  }
                }
                if ((int)uVar55 < local_res20 + -1) {
                  if (uVar55 == 0) {
                    FUN_144cbe9b0(param_8,plVar39[local_res10 * 0x1a2] + lVar52,
                                  plVar39[local_res10 * 0x1a2] + lVar38,&local_2b88);
                  }
                }
              }
              iVar36 = iVar36 + 2;
            } while (iVar36 < (int)plVar39[local_res10 * 0x1a2 + 1]);
          }
          uVar55 = uVar55 + 1;
          local_res10 = local_res10 + 1;
        } while ((int)uVar55 < local_res20);
      }
      plVar56 = local_2830;
      plVar39 = local_2830 + (longlong)local_2828 * 0x1a2;
      while (plVar39 != plVar56) {
        plVar48 = plVar39 + -0x1a2;
        *(undefined4 *)(plVar39 + -0x1a1) = 0;
        if ((-1 < (int)*(uint *)((longlong)plVar39 + -0xd04)) && (*plVar48 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar48,
                     (ulonglong)(*(uint *)((longlong)plVar39 + -0xd04) & 0x7fffffff) * 0x68);
        }
        *plVar48 = 0;
        *(undefined4 *)((longlong)plVar39 + -0xd04) = 0x80000000;
        plVar39 = plVar48;
      }
      local_2828 = 0;
      if ((-1 < (int)local_2824) && (local_2830 != (longlong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2830,(ulonglong)(local_2824 & 0x7fffffff) * 0xd10);
      }
      local_2830 = (longlong *)0x0;
      local_2910 = 0;
      local_2824 = 0x80000000;
      if ((-1 < (int)local_290c) && (local_2918 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2918,(ulonglong)(local_290c & 0x7fffffff) * 0x48);
      }
      return;
    }
    iVar54 = 0;
    local_2bd8 = (ulonglong *)param_2[2];
    local_2b28 = (longlong)iVar49;
    puVar42 = (undefined8 *)((longlong)(int)local_2bd8[local_2b28] * 0x70 + param_2[4]);
    local_2ac8 = *puVar42;
    uStack_2ac0 = puVar42[1];
    local_2ab8 = puVar42[2];
    uStack_2ab0 = puVar42[3];
    local_2aa8 = puVar42[4];
    uStack_2aa0 = puVar42[5];
    local_2a98 = puVar42[6];
    uStack_2a90 = puVar42[7];
    local_2a88 = puVar42[8];
    uStack_2a80 = puVar42[9];
    local_2a78 = puVar42[10];
    uStack_2a70 = puVar42[0xb];
    uVar1 = puVar42[0xc];
    iVar37 = iVar36 >> 0x1f;
    iVar49 = (int)(((longlong)iVar36 * 0x48) / 0x48) + iVar37;
    if (iVar49 != iVar37 && -1 < iVar49 - iVar37) {
      local_2a68._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      pfVar50 = (float *)(local_2918 + 0x38);
      local_2a68._0_4_ = (float)uVar1;
      fVar58 = local_2a68._4_4_;
      fVar61 = (float)local_2a68;
      local_2a68 = uVar1;
      do {
        fVar60 = fVar61 * *pfVar50 + fVar58 * pfVar50[1] + pfVar50[2];
        fVar59 = (ABS(pfVar50[1]) * ABS(fVar58) + ABS(*pfVar50) * ABS(fVar61) + ABS(pfVar50[2])) *
                 3.5762787e-07;
        if (fVar59 < fVar60) break;
        if (-fVar59 <= fVar60) {
          iVar49 = FUN_144cb9080(pfVar50 + -0xe,&local_2ac8);
          if (-1 < iVar49) break;
          fVar58 = local_2a68._4_4_;
          fVar61 = (float)local_2a68;
        }
        iVar54 = iVar54 + 1;
        pfVar50 = pfVar50 + 0x12;
      } while (iVar54 < (int)(((longlong)iVar36 * 0x48) / 0x48));
    }
    iVar49 = (int)local_2bd8[local_2b28];
    do {
      puVar34 = local_2918;
      lVar53 = (longlong)iVar54;
      local_2b20 = (undefined8 *)((longlong)iVar49 * 0x70 + param_2[4]);
      local_2a68 = local_2b20[0xc];
      uVar9 = *(undefined4 *)local_2b20;
      uVar10 = *(undefined4 *)((longlong)local_2b20 + 4);
      local_2ac8 = *local_2b20;
      uVar11 = *(undefined4 *)(local_2b20 + 1);
      uVar12 = *(undefined4 *)((longlong)local_2b20 + 0xc);
      uStack_2ac0 = local_2b20[1];
      uVar13 = *(undefined4 *)(local_2b20 + 2);
      uVar14 = *(undefined4 *)((longlong)local_2b20 + 0x14);
      local_2ab8 = local_2b20[2];
      uVar15 = *(undefined4 *)(local_2b20 + 3);
      uVar16 = *(undefined4 *)((longlong)local_2b20 + 0x1c);
      uStack_2ab0 = local_2b20[3];
      uVar17 = *(undefined4 *)(local_2b20 + 4);
      uVar18 = *(undefined4 *)((longlong)local_2b20 + 0x24);
      local_2aa8 = local_2b20[4];
      uVar19 = *(undefined4 *)(local_2b20 + 5);
      uVar20 = *(undefined4 *)((longlong)local_2b20 + 0x2c);
      uStack_2aa0 = local_2b20[5];
      uVar21 = *(undefined4 *)(local_2b20 + 6);
      uVar22 = *(undefined4 *)((longlong)local_2b20 + 0x34);
      local_2a98 = local_2b20[6];
      uVar23 = *(undefined4 *)(local_2b20 + 7);
      uVar24 = *(undefined4 *)((longlong)local_2b20 + 0x3c);
      uStack_2a90 = local_2b20[7];
      local_29e8 = (longlong)*(int *)(local_2b20 + 0xd) * 0x60 + *(longlong *)(param_1 + 0x28);
      uVar25 = *(undefined4 *)(local_2b20 + 8);
      uVar26 = *(undefined4 *)((longlong)local_2b20 + 0x44);
      local_2a88 = local_2b20[8];
      uVar27 = *(undefined4 *)(local_2b20 + 9);
      uVar28 = *(undefined4 *)((longlong)local_2b20 + 0x4c);
      uStack_2a80 = local_2b20[9];
      uVar29 = *(undefined4 *)(local_2b20 + 10);
      uVar30 = *(undefined4 *)((longlong)local_2b20 + 0x54);
      local_2a78 = local_2b20[10];
      uVar31 = *(undefined4 *)(local_2b20 + 0xb);
      uVar32 = *(undefined4 *)((longlong)local_2b20 + 0x5c);
      uStack_2a70 = local_2b20[0xb];
      lVar47 = (longlong)local_2910;
      puVar43 = (ulonglong *)((longlong)*(int *)((longlong)local_2b20 + 0x6c) * 0x70 + param_2[4]);
      local_2a58 = *puVar43;
      uStack_2a50 = puVar43[1];
      local_2a48 = puVar43[2];
      uStack_2a40 = puVar43[3];
      local_2a38 = puVar43[4];
      uStack_2a30 = puVar43[5];
      local_2a28 = puVar43[6];
      uStack_2a20 = puVar43[7];
      local_2a18 = puVar43[8];
      uStack_2a10 = puVar43[9];
      local_2a08 = puVar43[10];
      uStack_2a00 = puVar43[0xb];
      uVar2 = puVar43[0xc];
      local_29f8._4_4_ = (float)(uVar2 >> 0x20);
      local_29f8._0_4_ = (float)uVar2;
      fVar58 = (float)local_29f8;
      fVar61 = local_29f8._4_4_;
      iVar49 = iVar54;
      if (0 < iVar54) {
        pfVar50 = (float *)(local_2918 + (lVar53 * 9 + -2) * 8);
        local_29f8 = uVar2;
        do {
          fVar60 = fVar61 * pfVar50[1] + fVar58 * *pfVar50 + pfVar50[2];
          fVar59 = (ABS(pfVar50[1]) * ABS(fVar61) + ABS(*pfVar50) * ABS(fVar58) + ABS(pfVar50[2])) *
                   3.5762787e-07;
          if (fVar60 <= fVar59) {
            uVar2 = local_29f8;
            if (fVar60 < -fVar59) break;
            iVar36 = FUN_144cb9080(pfVar50 + -0xe,&local_2a58);
            fVar58 = (float)local_29f8;
            fVar61 = local_29f8._4_4_;
            uVar2 = local_29f8;
            if (iVar36 < 0) break;
          }
          iVar49 = iVar49 + -1;
          lVar53 = lVar53 + -1;
          pfVar50 = pfVar50 + -0x12;
          uVar2 = local_29f8;
        } while (0 < lVar53);
      }
      local_29f8 = uVar2;
      lVar47 = (lVar47 * 0x48) / 0x12 + (lVar47 * 0x48 >> 0x3f);
      iVar36 = (int)(lVar47 >> 2) - (int)(lVar47 >> 0x3f);
      uVar2 = local_2a18;
      uVar5 = uStack_2a10;
      lVar47 = local_29e8;
      if (iVar49 < iVar36) {
        pfVar50 = (float *)(puVar34 + ((longlong)iVar49 * 9 + 7) * 8);
        do {
          fVar60 = fVar61 * pfVar50[1] + fVar58 * *pfVar50 + pfVar50[2];
          fVar59 = (ABS(pfVar50[1]) * ABS(fVar61) + ABS(*pfVar50) * ABS(fVar58) + ABS(pfVar50[2])) *
                   3.5762787e-07;
          uVar2 = local_2a18;
          uVar5 = uStack_2a10;
          lVar47 = local_29e8;
          if (fVar59 < fVar60) break;
          if (-fVar59 <= fVar60) {
            iVar37 = FUN_144cb9080(pfVar50 + -0xe,&local_2a58);
            fVar58 = (float)local_29f8;
            fVar61 = local_29f8._4_4_;
            uVar2 = local_2a18;
            uVar5 = uStack_2a10;
            lVar47 = local_29e8;
            if (-1 < iVar37) break;
          }
          iVar49 = iVar49 + 1;
          pfVar50 = pfVar50 + 0x12;
          uVar2 = local_2a18;
          uVar5 = uStack_2a10;
          lVar47 = local_29e8;
        } while (iVar49 < iVar36);
      }
      for (; lVar53 = local_29e8, local_2a18 = uVar2, uStack_2a10 = uVar5, iVar49 != iVar54;
          iVar54 = iVar54 + iVar36) {
        lVar47 = (longlong)(int)(((iVar54 < iVar49) - 1) + iVar54);
        local_2b08 = -*(longlong *)(local_2918 + lVar47 * 0x48 + 0x20);
        local_2928 = *(longlong *)(local_2918 + lVar47 * 0x48 + 0x30);
        uVar2 = (ulonglong)(*(longlong *)(local_2918 + lVar47 * 0x48 + 0x20) != 0);
        uVar5 = -*(longlong *)(local_2918 + lVar47 * 0x48 + 0x28);
        uStack_2b00 = uVar5 - uVar2;
        local_2be8 = -(ulonglong)
                      (*(longlong *)(local_2918 + lVar47 * 0x48 + 0x28) != 0 || uVar5 < uVar2) -
                     local_2928;
        local_2bc8 = -*(longlong *)(local_29e8 + 0x38);
        uVar2 = (ulonglong)(*(longlong *)(local_29e8 + 0x38) != 0);
        uVar5 = -*(longlong *)(local_29e8 + 0x40);
        uStack_2bc0 = uVar5 - uVar2;
        local_29d8 = *(longlong *)(local_29e8 + 0x48);
        local_2bb8 = -(ulonglong)(*(longlong *)(local_29e8 + 0x40) != 0 || uVar5 < uVar2) -
                     local_29d8;
        local_2938 = *(undefined8 *)(local_2918 + lVar47 * 0x48);
        uStack_2930 = *(undefined8 *)((longlong)(local_2918 + lVar47 * 0x48) + 8);
        lStack_29e0 = *(longlong *)((longlong)(local_2918 + lVar47 * 0x48 + 0x10) + 8);
        local_2bf8 = *(longlong *)(local_29e8 + 0x18);
        lStack_2bf0 = *(undefined8 *)(local_29e8 + 0x20);
        local_29c8 = *(undefined8 *)(local_29e8 + 0x28);
        uStack_29c0 = *(undefined8 *)(local_29e8 + 0x30);
        local_2af8 = local_2be8;
        local_29e8 = *(longlong *)(local_2918 + lVar47 * 0x48 + 0x10);
        local_29b8 = local_2bb8;
        cVar35 = FUN_144cc4040(&local_2bf8,&local_29c8,&local_2938,&local_29e8,&local_2bc8,
                               &local_2b08,&local_2b88);
        if (cVar35 != '\0') {
          local_2b08 = local_2b68;
          lVar47 = local_2b08;
          uStack_2b00 = lStack_2b60;
          lVar52 = uStack_2b00;
          local_2b08._0_4_ = (undefined4)local_2b68;
          local_2b08._4_4_ = (undefined4)((ulonglong)local_2b68 >> 0x20);
          uStack_2b00._0_4_ = (undefined4)lStack_2b60;
          uStack_2b00._4_4_ = (undefined4)((ulonglong)lStack_2b60 >> 0x20);
          local_2af8 = local_2b58;
          lVar38 = local_2af8;
          uStack_2af0 = uStack_2b50;
          uVar6 = uStack_2af0;
          local_2af8._0_4_ = (undefined4)local_2b58;
          local_2af8._4_4_ = (undefined4)((ulonglong)local_2b58 >> 0x20);
          uStack_2af0._0_4_ = (undefined4)uStack_2b50;
          uStack_2af0._4_4_ = (undefined4)(uStack_2b50 >> 0x20);
          local_2bc8._0_4_ = SUB84(local_2b88,0);
          local_29a8 = (undefined4)local_2bc8;
          local_2bc8._4_4_ = (undefined4)((ulonglong)local_2b88 >> 0x20);
          uStack_29a4 = local_2bc8._4_4_;
          uStack_2bc0._0_4_ = (undefined4)lStack_2b80;
          uStack_29a0 = (undefined4)uStack_2bc0;
          uStack_2bc0._4_4_ = (undefined4)((ulonglong)lStack_2b80 >> 0x20);
          uStack_299c = uStack_2bc0._4_4_;
          local_2bb8._0_4_ = local_2b78._0_4_;
          local_2998 = (undefined4)local_2bb8;
          local_2bb8._4_4_ = local_2b78._4_4_;
          uStack_2994 = local_2bb8._4_4_;
          uStack_2bb0._0_4_ = local_2b78._8_4_;
          uStack_2990 = (undefined4)uStack_2bb0;
          uStack_2bb0._4_4_ = local_2b78._12_4_;
          uStack_298c = uStack_2bb0._4_4_;
          local_2bc8 = local_2b48;
          uVar2 = local_2bc8;
          uStack_2bc0 = local_2b40;
          uVar5 = uStack_2bc0;
          local_2bc8._0_4_ = (undefined4)local_2b48;
          local_2bc8._4_4_ = (undefined4)(local_2b48 >> 0x20);
          uStack_2bc0._0_4_ = (undefined4)local_2b40;
          uStack_2bc0._4_4_ = (undefined4)(local_2b40 >> 0x20);
          local_2bb8 = local_2b38;
          uVar45 = local_2bb8;
          uStack_2bb0 = local_2b30;
          uVar51 = uStack_2bb0;
          local_2bb8._0_4_ = (undefined4)local_2b38;
          local_2bb8._4_4_ = (undefined4)(local_2b38 >> 0x20);
          uStack_2bb0._0_4_ = (undefined4)local_2b30;
          uStack_2bb0._4_4_ = (undefined4)(local_2b30 >> 0x20);
          local_2958 = (undefined4)local_2bb8;
          uStack_2954 = local_2bb8._4_4_;
          uStack_2950 = (undefined4)uStack_2bb0;
          uStack_294c = uStack_2bb0._4_4_;
          local_2988 = (undefined4)local_2b08;
          uStack_2984 = local_2b08._4_4_;
          uStack_2980 = (undefined4)uStack_2b00;
          uStack_297c = uStack_2b00._4_4_;
          local_2978 = (undefined4)local_2af8;
          uStack_2974 = local_2af8._4_4_;
          uStack_2970 = (undefined4)uStack_2af0;
          uStack_296c = uStack_2af0._4_4_;
          local_2968 = (undefined4)local_2bc8;
          uStack_2964 = local_2bc8._4_4_;
          uStack_2960 = (undefined4)uStack_2bc0;
          uStack_295c = uStack_2bc0._4_4_;
          local_2bc8 = uVar2;
          uStack_2bc0 = uVar5;
          local_2bb8 = uVar45;
          uStack_2bb0 = uVar51;
          local_2b08 = lVar47;
          uStack_2b00 = lVar52;
          local_2af8 = lVar38;
          uStack_2af0 = uVar6;
        }
        uVar32 = uStack_294c;
        uVar31 = uStack_2950;
        uVar30 = uStack_2954;
        uVar29 = local_2958;
        uVar28 = uStack_295c;
        uVar27 = uStack_2960;
        uVar26 = uStack_2964;
        uVar25 = local_2968;
        uVar24 = uStack_296c;
        uVar23 = uStack_2970;
        uVar22 = uStack_2974;
        uVar21 = local_2978;
        uVar20 = uStack_297c;
        uVar19 = uStack_2980;
        uVar18 = uStack_2984;
        uVar17 = local_2988;
        uVar16 = uStack_298c;
        uVar15 = uStack_2990;
        uVar14 = uStack_2994;
        uVar13 = local_2998;
        uVar12 = uStack_299c;
        uVar11 = uStack_29a0;
        uVar10 = uStack_29a4;
        uVar9 = local_29a8;
        fVar59 = (float)FUN_144cc3f10(&local_2968,&local_2bfc);
        lVar47 = FUN_147e59322(&local_29a8,&local_2c00);
        iVar36 = local_2bfc;
        if ((float)lVar47 == 0.0) {
          local_2948 = 0;
        }
        else {
          local_2948 = (local_2c00 - local_2bfc) * 0x800000 + (int)((float)lVar47 / fVar59);
        }
        lVar47 = FUN_147e59322(&local_2988,&local_2c04);
        if ((float)lVar47 == 0.0) {
          iStack_2944 = 0;
        }
        else {
          iStack_2944 = (local_2c04 - iVar36) * 0x800000 + (int)((float)lVar47 / fVar59);
        }
        plVar39 = local_2830 + (longlong)(int)(((iVar54 < iVar49) - 1) + iVar54) * 0x1a2;
        iVar36 = (int)plVar39[1] + 1;
        if ((int)(*(uint *)((longlong)plVar39 + 0xc) & 0x7fffffff) < iVar36) {
          FUN_144cc6250(plVar39,&PTR_vftable_14c6e47a0,(longlong)iVar36);
        }
        uVar1 = CONCAT44(iStack_2944,local_2948);
        puVar44 = (undefined4 *)((longlong)(int)plVar39[1] * 0x68 + *plVar39);
        if (puVar44 != (undefined4 *)0x0) {
          *puVar44 = uVar9;
          puVar44[1] = uVar10;
          puVar44[2] = uVar11;
          puVar44[3] = uVar12;
          puVar44[4] = uVar13;
          puVar44[5] = uVar14;
          puVar44[6] = uVar15;
          puVar44[7] = uVar16;
          puVar44[8] = uVar17;
          puVar44[9] = uVar18;
          puVar44[10] = uVar19;
          puVar44[0xb] = uVar20;
          puVar44[0xc] = uVar21;
          puVar44[0xd] = uVar22;
          puVar44[0xe] = uVar23;
          puVar44[0xf] = uVar24;
          puVar44[0x10] = uVar25;
          puVar44[0x11] = uVar26;
          puVar44[0x12] = uVar27;
          puVar44[0x13] = uVar28;
          puVar44[0x14] = uVar29;
          puVar44[0x15] = uVar30;
          puVar44[0x16] = uVar31;
          puVar44[0x17] = uVar32;
          *(undefined8 *)(puVar44 + 0x18) = uVar1;
        }
        *(int *)(plVar39 + 1) = iVar36;
        cVar35 = FUN_144cc4380(&local_2ac8,&local_29a8);
        if ((cVar35 == '\0') && (iVar54 == 1)) {
          FUN_144cbe9b0(param_7,&local_2ac8,&local_29a8,lVar53 + 0x18);
        }
        local_2ac8 = CONCAT44(uVar10,uVar9);
        uStack_2ac0 = CONCAT44(uVar12,uVar11);
        local_2ab8 = CONCAT44(uVar14,uVar13);
        uStack_2ab0 = CONCAT44(uVar16,uVar15);
        local_2aa8 = CONCAT44(uVar18,uVar17);
        uStack_2aa0 = CONCAT44(uVar20,uVar19);
        iVar36 = -1;
        if (iVar54 < iVar49) {
          iVar36 = 1;
        }
        local_2a98 = CONCAT44(uVar22,uVar21);
        uStack_2a90 = CONCAT44(uVar24,uVar23);
        local_2a88 = CONCAT44(uVar26,uVar25);
        uStack_2a80 = CONCAT44(uVar28,uVar27);
        local_2a78 = CONCAT44(uVar30,uVar29);
        uStack_2a70 = CONCAT44(uVar32,uVar31);
        local_2a68 = uVar1;
        uVar2 = local_2a18;
        uVar5 = uStack_2a10;
        lVar47 = local_29e8;
        local_29e8 = lVar53;
      }
      fVar59 = (ABS(fVar58) + ABS((float)local_2a68)) * 2.3841858e-07;
      local_29e8 = lVar47;
      if ((fVar59 < (float)local_2a68 - fVar58) || ((float)local_2a68 - fVar58 < -fVar59)) {
LAB_144cbf9a5:
        if (iVar54 == 1) {
          FUN_144cbe9b0(param_7,&local_2ac8,&local_2a58,lVar53 + 0x18);
        }
      }
      else {
        auVar3._4_4_ = uVar26;
        auVar3._0_4_ = uVar25;
        auVar3._8_4_ = uVar27;
        auVar3._12_4_ = uVar28;
        auVar8._4_4_ = uVar30;
        auVar8._0_4_ = uVar29;
        auVar8._8_4_ = uVar31;
        auVar8._12_4_ = uVar32;
        if (auVar8._8_8_ != uStack_2a00 ||
            (CONCAT44(uVar30,uVar29) != local_2a08 ||
            (auVar3._8_8_ != uVar5 || CONCAT44(uVar26,uVar25) != uVar2))) {
          auVar33._8_8_ = uStack_2a00;
          auVar33._0_8_ = local_2a08;
          local_2b08 = CONCAT44(uVar10,uVar9);
          uStack_2b00 = CONCAT44(uVar12,uVar11);
          local_2af8 = CONCAT44(uVar14,uVar13);
          uStack_2af0 = CONCAT44(uVar16,uVar15);
          local_2bc8 = local_2a58;
          uStack_2bc0 = uStack_2a50;
          local_2bb8 = local_2a48;
          uStack_2bb0 = uStack_2a40;
          uStack_2ba8 = uVar2;
          uStack_2ba0 = uVar5;
          local_2b98 = auVar33;
          local_2ae8 = uVar25;
          uStack_2ae4 = uVar26;
          uStack_2ae0 = uVar27;
          uStack_2adc = uVar28;
          local_2ad8 = uVar29;
          uStack_2ad4 = uVar30;
          uStack_2ad0 = uVar31;
          uStack_2acc = uVar32;
          iVar49 = FUN_144cab880(&local_2b08,&local_2bc8);
          if (iVar49 == 0) {
            fVar58 = (ABS(fVar61) + ABS(local_2a68._4_4_)) * 2.3841858e-07;
            if ((local_2a68._4_4_ - fVar61 <= fVar58) && (-fVar58 <= local_2a68._4_4_ - fVar61)) {
              local_2bc8 = local_2a38;
              uStack_2bc0 = uStack_2a30;
              local_2bb8 = local_2a28;
              uStack_2bb0 = uStack_2a20;
              local_2b08 = CONCAT44(uVar18,uVar17);
              uStack_2b00 = CONCAT44(uVar20,uVar19);
              local_2af8 = CONCAT44(uVar22,uVar21);
              uStack_2af0 = CONCAT44(uVar24,uVar23);
              uStack_2ba8 = uVar2;
              uStack_2ba0 = uVar5;
              local_2b98 = auVar33;
              local_2ae8 = uVar25;
              uStack_2ae4 = uVar26;
              uStack_2ae0 = uVar27;
              uStack_2adc = uVar28;
              local_2ad8 = uVar29;
              uStack_2ad4 = uVar30;
              uStack_2ad0 = uVar31;
              uStack_2acc = uVar32;
              iVar49 = FUN_144cab880(&local_2b08,&local_2bc8);
              goto LAB_144cbf9a1;
            }
          }
          goto LAB_144cbf9a5;
        }
        iVar49 = FUN_144cabac0(&local_2ac8,&local_2a58);
LAB_144cbf9a1:
        if (iVar49 != 0) goto LAB_144cbf9a5;
      }
      iVar49 = *(int *)((longlong)local_2b20 + 0x6c);
    } while (iVar49 != (int)local_2bd8[local_2b28]);
    iVar49 = *(int *)((longlong)local_2bd8 + local_2b28 * 8 + 4);
    iVar36 = local_2910;
  } while( true );
}



// FUNCTION 144cbfed0 FUN_144cbfed0 body=5027 status=ok
// SIG undefined FUN_144cbfed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144cbfed0(longlong param_1,longlong *param_2,int param_3,longlong *param_4,
                  ulonglong *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 *puVar34;
  char cVar35;
  int iVar36;
  int iVar37;
  longlong lVar38;
  longlong *plVar39;
  longlong lVar40;
  longlong lVar41;
  undefined8 *puVar42;
  ulonglong *puVar43;
  undefined4 *puVar44;
  ulonglong uVar45;
  uint uVar46;
  longlong lVar47;
  longlong *plVar48;
  int iVar49;
  float *pfVar50;
  ulonglong uVar51;
  longlong lVar52;
  longlong lVar53;
  int iVar54;
  uint uVar55;
  longlong *plVar56;
  bool bVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  longlong local_res10;
  undefined1 local_res18;
  int local_res20;
  undefined1 local_2c08 [4];
  int local_2c04;
  int local_2c00;
  int local_2bfc;
  longlong local_2bf8;
  longlong lStack_2bf0;
  longlong local_2be8;
  ulonglong *local_2bd8;
  longlong lStack_2bd0;
  undefined8 local_2bc8;
  undefined8 uStack_2bc0;
  undefined8 local_2bb8;
  undefined8 uStack_2bb0;
  ulonglong uStack_2ba8;
  ulonglong uStack_2ba0;
  undefined1 local_2b98 [16];
  undefined8 *local_2b88;
  longlong lStack_2b80;
  undefined1 local_2b78 [16];
  longlong local_2b68;
  longlong lStack_2b60;
  longlong local_2b58;
  undefined8 uStack_2b50;
  ulonglong local_2b48;
  ulonglong local_2b40;
  ulonglong local_2b38;
  ulonglong local_2b30;
  longlong local_2b28;
  undefined8 *local_2b20;
  longlong lStack_2b18;
  undefined8 local_2b08;
  undefined8 uStack_2b00;
  undefined8 local_2af8;
  undefined8 uStack_2af0;
  undefined4 local_2ae8;
  undefined4 uStack_2ae4;
  undefined4 uStack_2ae0;
  undefined4 uStack_2adc;
  undefined4 local_2ad8;
  undefined4 uStack_2ad4;
  undefined4 uStack_2ad0;
  undefined4 uStack_2acc;
  undefined8 local_2ac8;
  undefined8 uStack_2ac0;
  undefined8 local_2ab8;
  undefined8 uStack_2ab0;
  undefined8 local_2aa8;
  undefined8 uStack_2aa0;
  undefined8 local_2a98;
  undefined8 uStack_2a90;
  undefined8 local_2a88;
  undefined8 uStack_2a80;
  undefined8 local_2a78;
  undefined8 uStack_2a70;
  undefined8 local_2a68;
  ulonglong local_2a58;
  ulonglong uStack_2a50;
  ulonglong local_2a48;
  ulonglong uStack_2a40;
  ulonglong local_2a38;
  ulonglong uStack_2a30;
  ulonglong local_2a28;
  ulonglong uStack_2a20;
  ulonglong local_2a18;
  ulonglong uStack_2a10;
  ulonglong local_2a08;
  ulonglong uStack_2a00;
  undefined8 local_29f8;
  longlong local_29e8;
  longlong lStack_29e0;
  longlong local_29d8;
  undefined8 local_29c8;
  undefined8 uStack_29c0;
  ulonglong local_29b8;
  undefined4 local_29a8;
  undefined4 uStack_29a4;
  undefined4 uStack_29a0;
  undefined4 uStack_299c;
  undefined4 local_2998;
  undefined4 uStack_2994;
  undefined4 uStack_2990;
  undefined4 uStack_298c;
  undefined4 local_2988;
  undefined4 uStack_2984;
  undefined4 uStack_2980;
  undefined4 uStack_297c;
  undefined4 local_2978;
  undefined4 uStack_2974;
  undefined4 uStack_2970;
  undefined4 uStack_296c;
  undefined4 local_2968;
  undefined4 uStack_2964;
  undefined4 uStack_2960;
  undefined4 uStack_295c;
  undefined4 local_2958;
  undefined4 uStack_2954;
  undefined4 uStack_2950;
  undefined4 uStack_294c;
  int local_2948;
  int iStack_2944;
  undefined8 local_2938;
  undefined8 uStack_2930;
  longlong local_2928;
  undefined1 *local_2918;
  int local_2910;
  uint local_290c;
  undefined1 local_2908 [216];
  longlong *local_2830;
  int local_2828;
  uint local_2824;
  longlong local_2820 [1271];
  
  local_2918 = local_2908;
  puVar43 = (ulonglong *)*param_6;
  puVar4 = (ulonglong *)param_6[1];
  local_2910 = 0;
  local_290c = 0x80000003;
  local_2bd8 = puVar43;
  if (puVar43 != puVar4) {
    local_res18 = (undefined1)param_3;
    do {
      local_2bc8 = *param_5;
      uStack_2bc0 = param_5[1];
      iVar49 = local_2910 + 1;
      local_2bb8 = param_5[2];
      uStack_2bb0 = *puVar43;
      uStack_2ba8 = puVar43[1];
      if ((int)(local_290c & 0x7fffffff) < iVar49) {
        FUN_144cc5c50(&local_2918,&PTR_vftable_14c6e47a0,(longlong)iVar49);
      }
      puVar34 = local_2918;
      lVar38 = (longlong)local_2910;
      local_2910 = iVar49;
      plVar39 = (longlong *)FUN_147e5ec64(&local_2b08,param_4,&local_2bc8,local_res18);
      puVar42 = (undefined8 *)*plVar39;
      lVar47 = plVar39[1];
      auVar3 = *(undefined1 (*) [16])(plVar39 + 2);
      lVar53 = plVar39[4];
      lVar52 = plVar39[5];
      local_2b58 = plVar39[6];
      local_2b88 = puVar42;
      lStack_2b80 = lVar47;
      local_2b78 = auVar3;
      local_2b68 = lVar53;
      lStack_2b60 = lVar52;
      lVar40 = FUN_147e513e3(local_2b78,&local_2c04);
      iVar49 = local_2c04 * 0x800000;
      lVar41 = FUN_147e513e3(&local_2b88,&local_2c00);
      uStack_2b50 = CONCAT44((float)((int)(float)lVar40 + iVar49) * 5.421011e-20,
                             (float)(local_2c00 * 0x800000 + (int)(float)lVar41) * 5.421011e-20);
      lVar40 = FUN_147e510dd(&local_2b68,&local_2bfc);
      puVar43 = puVar43 + 2;
      *(undefined8 **)(puVar34 + lVar38 * 0x48) = puVar42;
      *(longlong *)((longlong)(puVar34 + lVar38 * 0x48) + 8) = lVar47;
      *(undefined1 (*) [16])(puVar34 + lVar38 * 0x48 + 0x10) = auVar3;
      *(longlong *)(puVar34 + lVar38 * 0x48 + 0x20) = lVar53;
      *(longlong *)((longlong)(puVar34 + lVar38 * 0x48 + 0x20) + 8) = lVar52;
      *(longlong *)(puVar34 + lVar38 * 0x48 + 0x30) = local_2b58;
      *(ulonglong *)((longlong)(puVar34 + lVar38 * 0x48 + 0x30) + 8) = uStack_2b50;
      local_2b48 = CONCAT44((int)(local_2b48 >> 0x20),
                            (float)((int)(float)lVar40 + local_2bfc * 0x800000) * 5.421011e-20);
      *(ulonglong *)(puVar34 + lVar38 * 0x48 + 0x40) = local_2b48;
    } while (puVar43 != puVar4);
  }
  local_2824 = 0x80000003;
  local_2828 = 0;
  local_2830 = local_2820;
  iVar49 = (int)((longlong)puVar4 - (longlong)local_2bd8 >> 4);
  lVar47 = (longlong)iVar49;
  if (3 < iVar49) {
    FUN_144cc6350(&local_2830,&PTR_vftable_14c6e47a0,lVar47);
  }
  if (local_2828 < iVar49) {
    for (plVar39 = local_2830 + (longlong)local_2828 * 0x1a2; local_2828 = iVar49,
        plVar39 != local_2830 + lVar47 * 0x1a2; plVar39 = plVar39 + 0x1a2) {
      if (plVar39 != (longlong *)0x0) {
        *(undefined4 *)(plVar39 + 1) = 0;
        *plVar39 = (longlong)(plVar39 + 2);
        *(undefined4 *)((longlong)plVar39 + 0xc) = 0x80000020;
      }
    }
  }
  else if (iVar49 < local_2828) {
    lVar53 = (longlong)local_2828;
    plVar56 = local_2830 + lVar47 * 0x1a2;
    local_2828 = iVar49;
    plVar39 = local_2830 + lVar53 * 0x1a2;
    while (plVar39 != plVar56) {
      plVar48 = plVar39 + -0x1a2;
      *(undefined4 *)(plVar39 + -0x1a1) = 0;
      if ((-1 < (int)*(uint *)((longlong)plVar39 + -0xd04)) && (*plVar48 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*plVar48,
                   (ulonglong)(*(uint *)((longlong)plVar39 + -0xd04) & 0x7fffffff) * 0x68);
      }
      *plVar48 = 0;
      *(undefined4 *)((longlong)plVar39 + -0xd04) = 0x80000000;
      plVar39 = plVar48;
    }
  }
  iVar49 = *(int *)(*param_2 + (longlong)param_3 * 8);
  iVar36 = local_2910;
  do {
    local_2910 = iVar36;
    if (iVar49 == -1) {
      uVar55 = 0;
      uVar2 = *param_5;
      lVar47 = *param_4;
      uVar5 = param_5[2];
      lVar53 = param_4[2];
      uVar51 = param_4[1] * uVar2;
      uVar45 = param_5[1] * lVar47;
      local_2bf8 = uVar45 - uVar51;
      lStack_2bf0 = (SUB168(SEXT816((longlong)param_5[1]) * SEXT816(lVar47),8) -
                    SUB168(SEXT816((longlong)uVar2) * SEXT816(param_4[1]),8)) -
                    (ulonglong)(uVar45 < uVar51);
      uVar45 = (ulonglong)(uVar2 * lVar53 < lVar47 * uVar5);
      uVar6 = SUB168(SEXT816((longlong)uVar2) * SEXT816(lVar53),8) -
              SUB168(SEXT816((longlong)uVar5) * SEXT816(lVar47),8);
      uVar51 = (ulonglong)(uVar5 * param_4[1] < lVar53 * param_5[1]);
      uVar7 = SUB168(SEXT816((longlong)uVar5) * SEXT816(param_4[1]),8) -
              SUB168(SEXT816((longlong)param_5[1]) * SEXT816(lVar53),8);
      bVar57 = uVar5 * param_4[1] - lVar53 * param_5[1] == 0;
      if (bVar57 && uVar7 == uVar51) {
        local_2c08[0] =
             -1 < (longlong)(uVar6 - uVar45) &&
             (uVar6 != uVar45 || uVar2 * lVar53 - lVar47 * uVar5 != 0);
      }
      else {
        uVar46 = uVar55;
        if (-1 < (longlong)(uVar7 - uVar51)) {
          uVar46 = (uint)(!bVar57 || uVar7 != uVar51);
        }
        local_2c08[0] = (undefined1)uVar46;
      }
      lVar47 = param_6[1];
      lVar53 = *param_6;
      if (0 < (int)(lVar47 - lVar53 >> 4)) {
        local_res10 = 0;
        do {
          plVar39 = local_2830;
          iVar36 = 0;
          iVar49 = (int)local_2830[local_res10 * 0x1a2 + 1];
          if (1 < iVar49) {
            FUN_144cc4f70(local_2830[local_res10 * 0x1a2],0,iVar49 + -1,local_2c08);
            iVar49 = (int)plVar39[local_res10 * 0x1a2 + 1];
          }
          plVar56 = (longlong *)(local_2918 + local_res10 * 0x48);
          local_2bd8 = (ulonglong *)-plVar56[2];
          lStack_2bd0 = -(ulonglong)(plVar56[2] != 0) - plVar56[3];
          local_2b88 = (undefined8 *)-*plVar56;
          local_2b48 = *(ulonglong *)(local_2918 + local_res10 * 0x48 + 0x40) ^ 0x80000000;
          lStack_2b80 = -(ulonglong)(*plVar56 != 0) - plVar56[1];
          local_2bf8 = -plVar56[4];
          local_2b78._8_8_ = lStack_2bd0;
          local_2b78._0_8_ = local_2bd8;
          uVar2 = (ulonglong)(plVar56[4] != 0);
          uVar5 = -plVar56[5];
          lStack_2bf0 = uVar5 - uVar2;
          local_2be8 = -(ulonglong)(plVar56[5] != 0 || uVar5 < uVar2) - plVar56[6];
          uStack_2b50 = plVar56[7] ^ 0x8000000080000000;
          local_res20 = (int)(lVar47 - lVar53 >> 4);
          local_2b68 = local_2bf8;
          lStack_2b60 = lStack_2bf0;
          local_2b58 = local_2be8;
          local_2b20 = local_2b88;
          lStack_2b18 = lStack_2b80;
          if (0 < iVar49) {
            do {
              lVar52 = (longlong)(iVar36 + 1) * 0x68;
              lVar38 = (longlong)iVar36 * 0x68;
              cVar35 = FUN_144cc4380(plVar39[local_res10 * 0x1a2] + lVar38,
                                     plVar39[local_res10 * 0x1a2] + lVar52);
              if (cVar35 == '\0') {
                if (uVar55 != 0) {
                  if (local_res10 == 1) {
                    FUN_144cbe9b0(param_8,plVar39[local_res10 * 0x1a2] + lVar38,
                                  plVar39[local_res10 * 0x1a2] + lVar52,plVar56);
                  }
                }
                if ((int)uVar55 < local_res20 + -1) {
                  if (uVar55 == 0) {
                    FUN_144cbe9b0(param_8,plVar39[local_res10 * 0x1a2] + lVar52,
                                  plVar39[local_res10 * 0x1a2] + lVar38,&local_2b88);
                  }
                }
              }
              iVar36 = iVar36 + 2;
            } while (iVar36 < (int)plVar39[local_res10 * 0x1a2 + 1]);
          }
          uVar55 = uVar55 + 1;
          local_res10 = local_res10 + 1;
        } while ((int)uVar55 < local_res20);
      }
      plVar56 = local_2830;
      plVar39 = local_2830 + (longlong)local_2828 * 0x1a2;
      while (plVar39 != plVar56) {
        plVar48 = plVar39 + -0x1a2;
        *(undefined4 *)(plVar39 + -0x1a1) = 0;
        if ((-1 < (int)*(uint *)((longlong)plVar39 + -0xd04)) && (*plVar48 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*plVar48,
                     (ulonglong)(*(uint *)((longlong)plVar39 + -0xd04) & 0x7fffffff) * 0x68);
        }
        *plVar48 = 0;
        *(undefined4 *)((longlong)plVar39 + -0xd04) = 0x80000000;
        plVar39 = plVar48;
      }
      local_2828 = 0;
      if ((-1 < (int)local_2824) && (local_2830 != (longlong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2830,(ulonglong)(local_2824 & 0x7fffffff) * 0xd10);
      }
      local_2830 = (longlong *)0x0;
      local_2910 = 0;
      local_2824 = 0x80000000;
      if ((-1 < (int)local_290c) && (local_2918 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_2918,(ulonglong)(local_290c & 0x7fffffff) * 0x48);
      }
      return;
    }
    iVar54 = 0;
    local_2bd8 = (ulonglong *)param_2[2];
    local_2b28 = (longlong)iVar49;
    puVar42 = (undefined8 *)((longlong)(int)local_2bd8[local_2b28] * 0x70 + param_2[4]);
    local_2ac8 = *puVar42;
    uStack_2ac0 = puVar42[1];
    local_2ab8 = puVar42[2];
    uStack_2ab0 = puVar42[3];
    local_2aa8 = puVar42[4];
    uStack_2aa0 = puVar42[5];
    local_2a98 = puVar42[6];
    uStack_2a90 = puVar42[7];
    local_2a88 = puVar42[8];
    uStack_2a80 = puVar42[9];
    local_2a78 = puVar42[10];
    uStack_2a70 = puVar42[0xb];
    uVar1 = puVar42[0xc];
    iVar37 = iVar36 >> 0x1f;
    iVar49 = (int)(((longlong)iVar36 * 0x48) / 0x48) + iVar37;
    if (iVar49 != iVar37 && -1 < iVar49 - iVar37) {
      local_2a68._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      pfVar50 = (float *)(local_2918 + 0x38);
      local_2a68._0_4_ = (float)uVar1;
      fVar58 = local_2a68._4_4_;
      fVar61 = (float)local_2a68;
      local_2a68 = uVar1;
      do {
        fVar60 = fVar61 * *pfVar50 + fVar58 * pfVar50[1] + pfVar50[2];
        fVar59 = (ABS(pfVar50[1]) * ABS(fVar58) + ABS(*pfVar50) * ABS(fVar61) + ABS(pfVar50[2])) *
                 3.5762787e-07;
        if (fVar59 < fVar60) break;
        if (-fVar59 <= fVar60) {
          iVar49 = FUN_144cb9080(pfVar50 + -0xe,&local_2ac8);
          if (-1 < iVar49) break;
          fVar58 = local_2a68._4_4_;
          fVar61 = (float)local_2a68;
        }
        iVar54 = iVar54 + 1;
        pfVar50 = pfVar50 + 0x12;
      } while (iVar54 < (int)(((longlong)iVar36 * 0x48) / 0x48));
    }
    iVar49 = (int)local_2bd8[local_2b28];
    do {
      puVar34 = local_2918;
      lVar53 = (longlong)iVar54;
      local_2b20 = (undefined8 *)((longlong)iVar49 * 0x70 + param_2[4]);
      local_2a68 = local_2b20[0xc];
      uVar9 = *(undefined4 *)local_2b20;
      uVar10 = *(undefined4 *)((longlong)local_2b20 + 4);
      local_2ac8 = *local_2b20;
      uVar11 = *(undefined4 *)(local_2b20 + 1);
      uVar12 = *(undefined4 *)((longlong)local_2b20 + 0xc);
      uStack_2ac0 = local_2b20[1];
      uVar13 = *(undefined4 *)(local_2b20 + 2);
      uVar14 = *(undefined4 *)((longlong)local_2b20 + 0x14);
      local_2ab8 = local_2b20[2];
      uVar15 = *(undefined4 *)(local_2b20 + 3);
      uVar16 = *(undefined4 *)((longlong)local_2b20 + 0x1c);
      uStack_2ab0 = local_2b20[3];
      uVar17 = *(undefined4 *)(local_2b20 + 4);
      uVar18 = *(undefined4 *)((longlong)local_2b20 + 0x24);
      local_2aa8 = local_2b20[4];
      uVar19 = *(undefined4 *)(local_2b20 + 5);
      uVar20 = *(undefined4 *)((longlong)local_2b20 + 0x2c);
      uStack_2aa0 = local_2b20[5];
      uVar21 = *(undefined4 *)(local_2b20 + 6);
      uVar22 = *(undefined4 *)((longlong)local_2b20 + 0x34);
      local_2a98 = local_2b20[6];
      uVar23 = *(undefined4 *)(local_2b20 + 7);
      uVar24 = *(undefined4 *)((longlong)local_2b20 + 0x3c);
      uStack_2a90 = local_2b20[7];
      local_29e8 = (longlong)*(int *)(local_2b20 + 0xd) * 0x60 + *(longlong *)(param_1 + 0x28);
      uVar25 = *(undefined4 *)(local_2b20 + 8);
      uVar26 = *(undefined4 *)((longlong)local_2b20 + 0x44);
      local_2a88 = local_2b20[8];
      uVar27 = *(undefined4 *)(local_2b20 + 9);
      uVar28 = *(undefined4 *)((longlong)local_2b20 + 0x4c);
      uStack_2a80 = local_2b20[9];
      uVar29 = *(undefined4 *)(local_2b20 + 10);
      uVar30 = *(undefined4 *)((longlong)local_2b20 + 0x54);
      local_2a78 = local_2b20[10];
      uVar31 = *(undefined4 *)(local_2b20 + 0xb);
      uVar32 = *(undefined4 *)((longlong)local_2b20 + 0x5c);
      uStack_2a70 = local_2b20[0xb];
      lVar47 = (longlong)local_2910;
      puVar43 = (ulonglong *)((longlong)*(int *)((longlong)local_2b20 + 0x6c) * 0x70 + param_2[4]);
      local_2a58 = *puVar43;
      uStack_2a50 = puVar43[1];
      local_2a48 = puVar43[2];
      uStack_2a40 = puVar43[3];
      local_2a38 = puVar43[4];
      uStack_2a30 = puVar43[5];
      local_2a28 = puVar43[6];
      uStack_2a20 = puVar43[7];
      local_2a18 = puVar43[8];
      uStack_2a10 = puVar43[9];
      local_2a08 = puVar43[10];
      uStack_2a00 = puVar43[0xb];
      uVar2 = puVar43[0xc];
      local_29f8._4_4_ = (float)(uVar2 >> 0x20);
      local_29f8._0_4_ = (float)uVar2;
      fVar58 = (float)local_29f8;
      fVar61 = local_29f8._4_4_;
      iVar49 = iVar54;
      if (0 < iVar54) {
        pfVar50 = (float *)(local_2918 + (lVar53 * 9 + -2) * 8);
        local_29f8 = uVar2;
        do {
          fVar60 = fVar61 * pfVar50[1] + fVar58 * *pfVar50 + pfVar50[2];
          fVar59 = (ABS(pfVar50[1]) * ABS(fVar61) + ABS(*pfVar50) * ABS(fVar58) + ABS(pfVar50[2])) *
                   3.5762787e-07;
          if (fVar60 <= fVar59) {
            uVar2 = local_29f8;
            if (fVar60 < -fVar59) break;
            iVar36 = FUN_144cb9080(pfVar50 + -0xe,&local_2a58);
            fVar58 = (float)local_29f8;
            fVar61 = local_29f8._4_4_;
            uVar2 = local_29f8;
            if (iVar36 < 0) break;
          }
          iVar49 = iVar49 + -1;
          lVar53 = lVar53 + -1;
          pfVar50 = pfVar50 + -0x12;
          uVar2 = local_29f8;
        } while (0 < lVar53);
      }
      local_29f8 = uVar2;
      lVar47 = (lVar47 * 0x48) / 0x12 + (lVar47 * 0x48 >> 0x3f);
      iVar36 = (int)(lVar47 >> 2) - (int)(lVar47 >> 0x3f);
      uVar2 = local_2a18;
      uVar5 = uStack_2a10;
      lVar47 = local_29e8;
      if (iVar49 < iVar36) {
        pfVar50 = (float *)(puVar34 + ((longlong)iVar49 * 9 + 7) * 8);
        do {
          fVar60 = fVar61 * pfVar50[1] + fVar58 * *pfVar50 + pfVar50[2];
          fVar59 = (ABS(pfVar50[1]) * ABS(fVar61) + ABS(*pfVar50) * ABS(fVar58) + ABS(pfVar50[2])) *
                   3.5762787e-07;
          uVar2 = local_2a18;
          uVar5 = uStack_2a10;
          lVar47 = local_29e8;
          if (fVar59 < fVar60) break;
          if (-fVar59 <= fVar60) {
            iVar37 = FUN_144cb9080(pfVar50 + -0xe,&local_2a58);
            fVar58 = (float)local_29f8;
            fVar61 = local_29f8._4_4_;
            uVar2 = local_2a18;
            uVar5 = uStack_2a10;
            lVar47 = local_29e8;
            if (-1 < iVar37) break;
          }
          iVar49 = iVar49 + 1;
          pfVar50 = pfVar50 + 0x12;
          uVar2 = local_2a18;
          uVar5 = uStack_2a10;
          lVar47 = local_29e8;
        } while (iVar49 < iVar36);
      }
      for (; lVar53 = local_29e8, local_2a18 = uVar2, uStack_2a10 = uVar5, iVar49 != iVar54;
          iVar54 = iVar54 + iVar36) {
        lVar47 = (longlong)(int)(((iVar54 < iVar49) - 1) + iVar54);
        local_2b08 = -*(longlong *)(local_2918 + lVar47 * 0x48 + 0x20);
        local_2928 = *(longlong *)(local_2918 + lVar47 * 0x48 + 0x30);
        uVar2 = (ulonglong)(*(longlong *)(local_2918 + lVar47 * 0x48 + 0x20) != 0);
        uVar5 = -*(longlong *)(local_2918 + lVar47 * 0x48 + 0x28);
        uStack_2b00 = uVar5 - uVar2;
        local_2be8 = -(ulonglong)
                      (*(longlong *)(local_2918 + lVar47 * 0x48 + 0x28) != 0 || uVar5 < uVar2) -
                     local_2928;
        local_2bc8 = -*(longlong *)(local_29e8 + 0x38);
        uVar2 = (ulonglong)(*(longlong *)(local_29e8 + 0x38) != 0);
        uVar5 = -*(longlong *)(local_29e8 + 0x40);
        uStack_2bc0 = uVar5 - uVar2;
        local_29d8 = *(longlong *)(local_29e8 + 0x48);
        local_2bb8 = -(ulonglong)(*(longlong *)(local_29e8 + 0x40) != 0 || uVar5 < uVar2) -
                     local_29d8;
        local_2938 = *(undefined8 *)(local_2918 + lVar47 * 0x48);
        uStack_2930 = *(undefined8 *)((longlong)(local_2918 + lVar47 * 0x48) + 8);
        lStack_29e0 = *(longlong *)((longlong)(local_2918 + lVar47 * 0x48 + 0x10) + 8);
        local_2bf8 = *(longlong *)(local_29e8 + 0x18);
        lStack_2bf0 = *(undefined8 *)(local_29e8 + 0x20);
        local_29c8 = *(undefined8 *)(local_29e8 + 0x28);
        uStack_29c0 = *(undefined8 *)(local_29e8 + 0x30);
        local_2af8 = local_2be8;
        local_29e8 = *(longlong *)(local_2918 + lVar47 * 0x48 + 0x10);
        local_29b8 = local_2bb8;
        cVar35 = FUN_144cc4040(&local_2bf8,&local_29c8,&local_2938,&local_29e8,&local_2bc8,
                               &local_2b08,&local_2b88);
        if (cVar35 != '\0') {
          local_2b08 = local_2b68;
          lVar47 = local_2b08;
          uStack_2b00 = lStack_2b60;
          lVar52 = uStack_2b00;
          local_2b08._0_4_ = (undefined4)local_2b68;
          local_2b08._4_4_ = (undefined4)((ulonglong)local_2b68 >> 0x20);
          uStack_2b00._0_4_ = (undefined4)lStack_2b60;
          uStack_2b00._4_4_ = (undefined4)((ulonglong)lStack_2b60 >> 0x20);
          local_2af8 = local_2b58;
          lVar38 = local_2af8;
          uStack_2af0 = uStack_2b50;
          uVar6 = uStack_2af0;
          local_2af8._0_4_ = (undefined4)local_2b58;
          local_2af8._4_4_ = (undefined4)((ulonglong)local_2b58 >> 0x20);
          uStack_2af0._0_4_ = (undefined4)uStack_2b50;
          uStack_2af0._4_4_ = (undefined4)(uStack_2b50 >> 0x20);
          local_2bc8._0_4_ = SUB84(local_2b88,0);
          local_29a8 = (undefined4)local_2bc8;
          local_2bc8._4_4_ = (undefined4)((ulonglong)local_2b88 >> 0x20);
          uStack_29a4 = local_2bc8._4_4_;
          uStack_2bc0._0_4_ = (undefined4)lStack_2b80;
          uStack_29a0 = (undefined4)uStack_2bc0;
          uStack_2bc0._4_4_ = (undefined4)((ulonglong)lStack_2b80 >> 0x20);
          uStack_299c = uStack_2bc0._4_4_;
          local_2bb8._0_4_ = local_2b78._0_4_;
          local_2998 = (undefined4)local_2bb8;
          local_2bb8._4_4_ = local_2b78._4_4_;
          uStack_2994 = local_2bb8._4_4_;
          uStack_2bb0._0_4_ = local_2b78._8_4_;
          uStack_2990 = (undefined4)uStack_2bb0;
          uStack_2bb0._4_4_ = local_2b78._12_4_;
          uStack_298c = uStack_2bb0._4_4_;
          local_2bc8 = local_2b48;
          uVar2 = local_2bc8;
          uStack_2bc0 = local_2b40;
          uVar5 = uStack_2bc0;
          local_2bc8._0_4_ = (undefined4)local_2b48;
          local_2bc8._4_4_ = (undefined4)(local_2b48 >> 0x20);
          uStack_2bc0._0_4_ = (undefined4)local_2b40;
          uStack_2bc0._4_4_ = (undefined4)(local_2b40 >> 0x20);
          local_2bb8 = local_2b38;
          uVar45 = local_2bb8;
          uStack_2bb0 = local_2b30;
          uVar51 = uStack_2bb0;
          local_2bb8._0_4_ = (undefined4)local_2b38;
          local_2bb8._4_4_ = (undefined4)(local_2b38 >> 0x20);
          uStack_2bb0._0_4_ = (undefined4)local_2b30;
          uStack_2bb0._4_4_ = (undefined4)(local_2b30 >> 0x20);
          local_2958 = (undefined4)local_2bb8;
          uStack_2954 = local_2bb8._4_4_;
          uStack_2950 = (undefined4)uStack_2bb0;
          uStack_294c = uStack_2bb0._4_4_;
          local_2988 = (undefined4)local_2b08;
          uStack_2984 = local_2b08._4_4_;
          uStack_2980 = (undefined4)uStack_2b00;
          uStack_297c = uStack_2b00._4_4_;
          local_2978 = (undefined4)local_2af8;
          uStack_2974 = local_2af8._4_4_;
          uStack_2970 = (undefined4)uStack_2af0;
          uStack_296c = uStack_2af0._4_4_;
          local_2968 = (undefined4)local_2bc8;
          uStack_2964 = local_2bc8._4_4_;
          uStack_2960 = (undefined4)uStack_2bc0;
          uStack_295c = uStack_2bc0._4_4_;
          local_2bc8 = uVar2;
          uStack_2bc0 = uVar5;
          local_2bb8 = uVar45;
          uStack_2bb0 = uVar51;
          local_2b08 = lVar47;
          uStack_2b00 = lVar52;
          local_2af8 = lVar38;
          uStack_2af0 = uVar6;
        }
        uVar32 = uStack_294c;
        uVar31 = uStack_2950;
        uVar30 = uStack_2954;
        uVar29 = local_2958;
        uVar28 = uStack_295c;
        uVar27 = uStack_2960;
        uVar26 = uStack_2964;
        uVar25 = local_2968;
        uVar24 = uStack_296c;
        uVar23 = uStack_2970;
        uVar22 = uStack_2974;
        uVar21 = local_2978;
        uVar20 = uStack_297c;
        uVar19 = uStack_2980;
        uVar18 = uStack_2984;
        uVar17 = local_2988;
        uVar16 = uStack_298c;
        uVar15 = uStack_2990;
        uVar14 = uStack_2994;
        uVar13 = local_2998;
        uVar12 = uStack_299c;
        uVar11 = uStack_29a0;
        uVar10 = uStack_29a4;
        uVar9 = local_29a8;
        fVar59 = (float)FUN_144cc3f10(&local_2968,&local_2bfc);
        lVar47 = FUN_147e59322(&local_29a8,&local_2c00);
        iVar36 = local_2bfc;
        if ((float)lVar47 == 0.0) {
          local_2948 = 0;
        }
        else {
          local_2948 = (local_2c00 - local_2bfc) * 0x800000 + (int)((float)lVar47 / fVar59);
        }
        lVar47 = FUN_147e59322(&local_2988,&local_2c04);
        if ((float)lVar47 == 0.0) {
          iStack_2944 = 0;
        }
        else {
          iStack_2944 = (local_2c04 - iVar36) * 0x800000 + (int)((float)lVar47 / fVar59);
        }
        plVar39 = local_2830 + (longlong)(int)(((iVar54 < iVar49) - 1) + iVar54) * 0x1a2;
        iVar36 = (int)plVar39[1] + 1;
        if ((int)(*(uint *)((longlong)plVar39 + 0xc) & 0x7fffffff) < iVar36) {
          FUN_144cc6250(plVar39,&PTR_vftable_14c6e47a0,(longlong)iVar36);
        }
        uVar1 = CONCAT44(iStack_2944,local_2948);
        puVar44 = (undefined4 *)((longlong)(int)plVar39[1] * 0x68 + *plVar39);
        if (puVar44 != (undefined4 *)0x0) {
          *puVar44 = uVar9;
          puVar44[1] = uVar10;
          puVar44[2] = uVar11;
          puVar44[3] = uVar12;
          puVar44[4] = uVar13;
          puVar44[5] = uVar14;
          puVar44[6] = uVar15;
          puVar44[7] = uVar16;
          puVar44[8] = uVar17;
          puVar44[9] = uVar18;
          puVar44[10] = uVar19;
          puVar44[0xb] = uVar20;
          puVar44[0xc] = uVar21;
          puVar44[0xd] = uVar22;
          puVar44[0xe] = uVar23;
          puVar44[0xf] = uVar24;
          puVar44[0x10] = uVar25;
          puVar44[0x11] = uVar26;
          puVar44[0x12] = uVar27;
          puVar44[0x13] = uVar28;
          puVar44[0x14] = uVar29;
          puVar44[0x15] = uVar30;
          puVar44[0x16] = uVar31;
          puVar44[0x17] = uVar32;
          *(undefined8 *)(puVar44 + 0x18) = uVar1;
        }
        *(int *)(plVar39 + 1) = iVar36;
        cVar35 = FUN_144cc4380(&local_2ac8,&local_29a8);
        if ((cVar35 == '\0') && (iVar54 == 1)) {
          FUN_144cbe9b0(param_7,&local_2ac8,&local_29a8,lVar53 + 0x18);
        }
        local_2ac8 = CONCAT44(uVar10,uVar9);
        uStack_2ac0 = CONCAT44(uVar12,uVar11);
        local_2ab8 = CONCAT44(uVar14,uVar13);
        uStack_2ab0 = CONCAT44(uVar16,uVar15);
        local_2aa8 = CONCAT44(uVar18,uVar17);
        uStack_2aa0 = CONCAT44(uVar20,uVar19);
        iVar36 = -1;
        if (iVar54 < iVar49) {
          iVar36 = 1;
        }
        local_2a98 = CONCAT44(uVar22,uVar21);
        uStack_2a90 = CONCAT44(uVar24,uVar23);
        local_2a88 = CONCAT44(uVar26,uVar25);
        uStack_2a80 = CONCAT44(uVar28,uVar27);
        local_2a78 = CONCAT44(uVar30,uVar29);
        uStack_2a70 = CONCAT44(uVar32,uVar31);
        local_2a68 = uVar1;
        uVar2 = local_2a18;
        uVar5 = uStack_2a10;
        lVar47 = local_29e8;
        local_29e8 = lVar53;
      }
      fVar59 = (ABS(fVar58) + ABS((float)local_2a68)) * 2.3841858e-07;
      local_29e8 = lVar47;
      if ((fVar59 < (float)local_2a68 - fVar58) || ((float)local_2a68 - fVar58 < -fVar59)) {
LAB_144cc0d65:
        if (iVar54 == 1) {
          FUN_144cbe9b0(param_7,&local_2ac8,&local_2a58,lVar53 + 0x18);
        }
      }
      else {
        auVar3._4_4_ = uVar26;
        auVar3._0_4_ = uVar25;
        auVar3._8_4_ = uVar27;
        auVar3._12_4_ = uVar28;
        auVar8._4_4_ = uVar30;
        auVar8._0_4_ = uVar29;
        auVar8._8_4_ = uVar31;
        auVar8._12_4_ = uVar32;
        if (auVar8._8_8_ != uStack_2a00 ||
            (CONCAT44(uVar30,uVar29) != local_2a08 ||
            (auVar3._8_8_ != uVar5 || CONCAT44(uVar26,uVar25) != uVar2))) {
          auVar33._8_8_ = uStack_2a00;
          auVar33._0_8_ = local_2a08;
          local_2b08 = CONCAT44(uVar10,uVar9);
          uStack_2b00 = CONCAT44(uVar12,uVar11);
          local_2af8 = CONCAT44(uVar14,uVar13);
          uStack_2af0 = CONCAT44(uVar16,uVar15);
          local_2bc8 = local_2a58;
          uStack_2bc0 = uStack_2a50;
          local_2bb8 = local_2a48;
          uStack_2bb0 = uStack_2a40;
          uStack_2ba8 = uVar2;
          uStack_2ba0 = uVar5;
          local_2b98 = auVar33;
          local_2ae8 = uVar25;
          uStack_2ae4 = uVar26;
          uStack_2ae0 = uVar27;
          uStack_2adc = uVar28;
          local_2ad8 = uVar29;
          uStack_2ad4 = uVar30;
          uStack_2ad0 = uVar31;
          uStack_2acc = uVar32;
          iVar49 = FUN_144cab880(&local_2b08,&local_2bc8);
          if (iVar49 == 0) {
            fVar58 = (ABS(fVar61) + ABS(local_2a68._4_4_)) * 2.3841858e-07;
            if ((local_2a68._4_4_ - fVar61 <= fVar58) && (-fVar58 <= local_2a68._4_4_ - fVar61)) {
              local_2bc8 = local_2a38;
              uStack_2bc0 = uStack_2a30;
              local_2bb8 = local_2a28;
              uStack_2bb0 = uStack_2a20;
              local_2b08 = CONCAT44(uVar18,uVar17);
              uStack_2b00 = CONCAT44(uVar20,uVar19);
              local_2af8 = CONCAT44(uVar22,uVar21);
              uStack_2af0 = CONCAT44(uVar24,uVar23);
              uStack_2ba8 = uVar2;
              uStack_2ba0 = uVar5;
              local_2b98 = auVar33;
              local_2ae8 = uVar25;
              uStack_2ae4 = uVar26;
              uStack_2ae0 = uVar27;
              uStack_2adc = uVar28;
              local_2ad8 = uVar29;
              uStack_2ad4 = uVar30;
              uStack_2ad0 = uVar31;
              uStack_2acc = uVar32;
              iVar49 = FUN_144cab880(&local_2b08,&local_2bc8);
              goto LAB_144cc0d61;
            }
          }
          goto LAB_144cc0d65;
        }
        iVar49 = FUN_144cabac0(&local_2ac8,&local_2a58);
LAB_144cc0d61:
        if (iVar49 != 0) goto LAB_144cc0d65;
      }
      iVar49 = *(int *)((longlong)local_2b20 + 0x6c);
    } while (iVar49 != (int)local_2bd8[local_2b28]);
    iVar49 = *(int *)((longlong)local_2bd8 + local_2b28 * 8 + 4);
    iVar36 = local_2910;
  } while( true );
}



// FUNCTION 144cc1290 FUN_144cc1290 body=1330 status=ok
// SIG undefined FUN_144cc1290(void)

undefined1
FUN_144cc1290(longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong local_res8;
  ulonglong local_res10;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
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
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  
  *(undefined4 *)(param_4 + 0x2050) = 0;
  *(undefined4 *)(param_4 + 0x2050) = 0;
  *(undefined4 *)(param_4 + 8) = 0;
  *(undefined4 *)(param_4 + 0x18) = 0;
  *(undefined4 *)(param_4 + 0x38) = 0;
  *(undefined8 *)(param_4 + 0x2040) = 0xffffffffffffffff;
  *(undefined4 *)(param_4 + 0x2060) = 0;
  *(undefined4 *)(param_4 + 0x2070) = 0;
  *(undefined4 *)(param_4 + 0x2080) = 0;
  *(undefined4 *)(param_4 + 0x2090) = 0;
  *(undefined4 *)(param_4 + 0x20a0) = 0;
  *(undefined4 *)(param_4 + 0x20b0) = 0;
  *(undefined4 *)(param_4 + 0x20c8) = 0;
  puVar5 = *(undefined4 **)(param_1 + 8);
  puVar9 = puVar5 + (longlong)*(int *)(param_1 + 0x10) * 0x48;
  local_res10 = param_2;
  if (puVar5 != puVar9) {
    puVar7 = (undefined8 *)(puVar5 + 0x1a);
    do {
      local_78 = puVar7[0xd];
      uStack_70 = puVar7[0xe];
      iVar8 = *(int *)(param_4 + 0x2050) + 1;
      local_128 = puVar5[4];
      uStack_124 = puVar5[5];
      uStack_120 = puVar5[6];
      uStack_11c = puVar5[7];
      local_res8 = *(longlong *)(puVar5 + 0x18);
      uVar10 = (undefined4)local_res8;
      uVar11 = (undefined4)((ulonglong)local_res8 >> 0x20);
      local_68 = puVar7[0xf];
      uStack_60 = puVar7[0x10];
      local_118 = puVar5[8];
      uStack_114 = puVar5[9];
      uStack_110 = puVar5[10];
      uStack_10c = puVar5[0xb];
      local_58 = puVar7[0x11];
      uStack_50 = puVar7[0x12];
      local_108 = puVar5[0xc];
      uStack_104 = puVar5[0xd];
      uStack_100 = puVar5[0xe];
      uStack_fc = puVar5[0xf];
      local_158 = puVar7[0x13];
      uStack_150 = puVar7[0x14];
      local_f8 = puVar5[0x10];
      uStack_f4 = puVar5[0x11];
      uStack_f0 = puVar5[0x12];
      uStack_ec = puVar5[0x13];
      local_168 = puVar7[0x15];
      local_d8 = *puVar7;
      uStack_d0 = puVar7[1];
      local_e8 = puVar5[0x14];
      uStack_e4 = puVar5[0x15];
      uStack_e0 = puVar5[0x16];
      uStack_dc = puVar5[0x17];
      local_c8 = puVar7[2];
      uStack_c0 = puVar7[3];
      local_b8 = puVar7[4];
      uStack_b0 = puVar7[5];
      local_a8 = puVar7[6];
      uStack_a0 = puVar7[7];
      local_98 = puVar7[8];
      uStack_90 = puVar7[9];
      local_88 = puVar7[10];
      uStack_80 = puVar7[0xb];
      local_178 = puVar7[0xc];
      local_138 = *puVar5;
      uStack_134 = puVar5[1];
      uStack_130 = puVar5[2];
      uStack_12c = puVar5[3];
      if ((int)(*(uint *)(param_4 + 0x2054) & 0x7fffffff) < iVar8) {
        FUN_144cc6780((longlong *)(param_4 + 0x2048),&PTR_vftable_14c6e47a0,(longlong)iVar8);
        uVar10 = (undefined4)local_res8;
        uVar11 = (undefined4)((ulonglong)local_res8 >> 0x20);
      }
      iVar2 = *(int *)(param_4 + 0x2050);
      puVar5 = puVar5 + 0x48;
      *(int *)(param_4 + 0x2050) = iVar8;
      puVar7 = puVar7 + 0x24;
      puVar3 = (undefined4 *)((longlong)iVar2 * 0x128 + *(longlong *)(param_4 + 0x2048));
      puVar3[0x48] = puVar3[0x48] & 0xfffffffc;
      *(undefined8 *)(puVar3 + 0x46) = 0xffffffffffffffff;
      *puVar3 = local_138;
      puVar3[1] = uStack_134;
      puVar3[2] = uStack_130;
      puVar3[3] = uStack_12c;
      *(undefined8 *)(puVar3 + 0x1a) = local_d8;
      *(undefined8 *)(puVar3 + 0x1c) = uStack_d0;
      puVar3[4] = local_128;
      puVar3[5] = uStack_124;
      puVar3[6] = uStack_120;
      puVar3[7] = uStack_11c;
      *(undefined8 *)(puVar3 + 0x1e) = local_c8;
      *(undefined8 *)(puVar3 + 0x20) = uStack_c0;
      *(undefined8 *)(puVar3 + 0x22) = local_b8;
      *(undefined8 *)(puVar3 + 0x24) = uStack_b0;
      *(undefined8 *)(puVar3 + 0x26) = local_a8;
      *(undefined8 *)(puVar3 + 0x28) = uStack_a0;
      *(undefined8 *)(puVar3 + 0x2a) = local_98;
      *(undefined8 *)(puVar3 + 0x2c) = uStack_90;
      puVar3[8] = local_118;
      puVar3[9] = uStack_114;
      puVar3[10] = uStack_110;
      puVar3[0xb] = uStack_10c;
      *(undefined8 *)(puVar3 + 0x2e) = local_88;
      *(undefined8 *)(puVar3 + 0x30) = uStack_80;
      *(longlong *)(puVar3 + 0x32) = local_178;
      *(undefined8 *)(puVar3 + 0x34) = local_78;
      *(undefined8 *)(puVar3 + 0x36) = uStack_70;
      *(undefined8 *)(puVar3 + 0x38) = local_68;
      *(undefined8 *)(puVar3 + 0x3a) = uStack_60;
      *(undefined8 *)(puVar3 + 0x3c) = local_58;
      *(undefined8 *)(puVar3 + 0x3e) = uStack_50;
      puVar3[0xc] = local_108;
      puVar3[0xd] = uStack_104;
      puVar3[0xe] = uStack_100;
      puVar3[0xf] = uStack_fc;
      puVar3[0x10] = local_f8;
      puVar3[0x11] = uStack_f4;
      puVar3[0x12] = uStack_f0;
      puVar3[0x13] = uStack_ec;
      puVar3[0x14] = local_e8;
      puVar3[0x15] = uStack_e4;
      puVar3[0x16] = uStack_e0;
      puVar3[0x17] = uStack_dc;
      *(ulonglong *)(puVar3 + 0x18) = CONCAT44(uVar11,uVar10);
      puVar3[0x40] = (undefined4)local_158;
      puVar3[0x41] = local_158._4_4_;
      puVar3[0x42] = (undefined4)uStack_150;
      puVar3[0x43] = uStack_150._4_4_;
      *(longlong *)(puVar3 + 0x44) = local_168;
    } while (puVar5 != puVar9);
  }
  iVar8 = *(int *)(param_4 + 0x2050);
  lVar6 = (longlong)iVar8;
  if ((int)(*(uint *)(param_4 + 0x20b4) & 0x7fffffff) < iVar8) {
    FUN_144cc6670(param_4 + 0x20a8,&PTR_vftable_14c6e47a0,lVar6);
  }
  iVar2 = *(int *)(param_4 + 0x20b0);
  if ((iVar2 < iVar8) || (iVar8 < iVar2)) {
    *(int *)(param_4 + 0x20b0) = iVar8;
    iVar2 = iVar8;
  }
  puVar7 = *(undefined8 **)(param_4 + 0x20a8);
  puVar4 = puVar7 + (longlong)iVar2 * 2;
  for (; puVar7 != puVar4; puVar7 = puVar7 + 2) {
    *puVar7 = 0xffffffffffffffff;
  }
  *(undefined4 *)(param_4 + 0x2060) = 0;
  *(undefined4 *)(param_4 + 0x2070) = 0;
  *(undefined4 *)(param_4 + 0x2080) = 0;
  FUN_144cbbb90(param_4 + 0x2058,param_1 + 0x18);
  *(undefined4 *)(param_4 + 0x2090) = 0;
  *(undefined4 *)(param_4 + 0x20a0) = 0;
  if ((int)(*(uint *)(param_4 + 0x2094) & 0x7fffffff) < iVar8) {
    FUN_141807aa8(param_4 + 0x2088,&PTR_vftable_14c6e47a0,lVar6);
  }
  if ((*(int *)(param_4 + 0x2090) < iVar8) || (iVar8 < *(int *)(param_4 + 0x2090))) {
    *(int *)(param_4 + 0x2090) = iVar8;
  }
  if ((int)(*(uint *)(param_4 + 0x20a4) & 0x7fffffff) < iVar8) {
    FUN_141807aa8(param_4 + 0x2098,&PTR_vftable_14c6e47a0,lVar6);
  }
  if ((*(int *)(param_4 + 0x20a0) < iVar8) || (iVar8 < *(int *)(param_4 + 0x20a0))) {
    *(int *)(param_4 + 0x20a0) = iVar8;
  }
  if ((int)(*(uint *)(param_4 + 0x20cc) & 0x7fffffff) < iVar8) {
    FUN_144cc6560((undefined8 *)(param_4 + 0x20c0),&PTR_vftable_14c6e47a0,lVar6);
  }
  iVar2 = *(int *)(param_4 + 0x20c8);
  if ((iVar2 < iVar8) || (iVar8 < iVar2)) {
    *(int *)(param_4 + 0x20c8) = iVar8;
    iVar2 = iVar8;
  }
  puVar4 = *(undefined8 **)(param_4 + 0x20c0);
  puVar7 = puVar4 + iVar2;
  for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
    *puVar4 = 0xffffffffffffffff;
  }
  local_res8 = param_4 + 0x2058;
  FUN_144cc1fc0(param_4 + 0x20,&local_res8);
  local_160 = &local_res8;
  local_170 = &local_168;
  local_158 = local_res10;
  uStack_150 = param_4 + 0x2058;
  local_148 = &local_178;
  *param_5 = 0;
  local_res8 = param_4;
  local_178 = param_4 + 0x20b8;
  local_168 = param_4;
  FUN_144be90e0(0xa8fb492);
  cVar1 = FUN_144cc2270(param_4 + 0x20,&local_158,param_5);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_144cc37b0(local_res10 & 0xff,param_4);
  FUN_144cc3bf0(local_res10 & 0xff,param_4,param_3);
  return 1;
}



// FUNCTION 144cc17d0 FUN_144cc17d0 body=562 status=ok
// SIG undefined FUN_144cc17d0(void)

void FUN_144cc17d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                  int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  int local_58 [12];
  
  iVar7 = 2;
  lVar4 = 2;
  do {
    uVar6 = param_4[lVar4];
    if (uVar6 != 0) {
      uVar5 = (uint)uVar6 | (uint)(uVar6 >> 1) & 0x7fffffff;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      uVar5 = (uint)(uVar6 >> 0x20);
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      iVar1 = 0x20 - iVar3;
      if (0x1f < 0x20 - iVar3) {
        iVar1 = 0x40 - iVar2;
      }
      iVar2 = iVar7 * 0x40 - iVar1;
      uVar6 = param_4[iVar7] << ((byte)iVar1 & 0x3f);
      if (iVar1 != 0) {
        uVar6 = uVar6 | param_4[(longlong)iVar7 + -1] >> (0x40 - (byte)iVar1 & 0x3f);
      }
      goto LAB_144cc18cf;
    }
    iVar7 = iVar7 + -1;
    lVar4 = lVar4 + -1;
  } while (0 < lVar4);
  uVar6 = *param_4;
  iVar2 = 0;
LAB_144cc18cf:
  fVar8 = (float)uVar6;
  lVar4 = FUN_147e510dd(param_1,local_58);
  if ((float)lVar4 == 0.0) {
    *param_5 = 0;
  }
  else {
    *param_5 = local_58[0] * 0x800000 + iVar2 * -0x800000 + (int)((float)lVar4 / fVar8);
  }
  lVar4 = FUN_147e510dd(param_2,local_58);
  if ((float)lVar4 == 0.0) {
    param_5[1] = 0;
  }
  else {
    param_5[1] = local_58[0] * 0x800000 + iVar2 * -0x800000 + (int)((float)lVar4 / fVar8);
  }
  lVar4 = FUN_147e510dd(param_3,local_58);
  if ((float)lVar4 != 0.0) {
    param_5[2] = local_58[0] * 0x800000 + iVar2 * -0x800000 + (int)((float)lVar4 / fVar8);
    return;
  }
  param_5[2] = 0;
  return;
}



// FUNCTION 144cc1a10 FUN_144cc1a10 body=9 status=ok
// SIG undefined FUN_144cc1a10(void)

void FUN_144cc1a10(longlong param_1)

{
  FUN_144cbc6f0(param_1 + 0x10);
  return;
}



// FUNCTION 144cc1a20 FUN_144cc1a20 body=5 status=ok
// SIG undefined FUN_144cc1a20(void)

undefined8 FUN_144cc1a20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cc1a30 FUN_144cc1a30 body=101 status=ok
// SIG undefined FUN_144cc1a30(void)

undefined8 * FUN_144cc1a30(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144cc1aa0 FUN_144cc1aa0 body=15 status=ok
// SIG undefined FUN_144cc1aa0(void)

undefined4 * FUN_144cc1aa0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 144cc1ab0 FUN_144cc1ab0 body=12 status=ok
// SIG undefined FUN_144cc1ab0(void)

void FUN_144cc1ab0(longlong param_1,longlong param_2)

{
  FUN_144cbc8f0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 144cc1ac0 FUN_144cc1ac0 body=5 status=ok
// SIG undefined FUN_144cc1ac0(void)

undefined8 FUN_144cc1ac0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cc1ad0 FUN_144cc1ad0 body=101 status=ok
// SIG undefined FUN_144cc1ad0(void)

undefined8 * FUN_144cc1ad0(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144cc1b40 FUN_144cc1b40 body=15 status=ok
// SIG undefined FUN_144cc1b40(void)

undefined4 * FUN_144cc1b40(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 144cc1b50 FUN_144cc1b50 body=12 status=ok
// SIG undefined FUN_144cc1b50(void)

void FUN_144cc1b50(longlong param_1,longlong param_2)

{
  FUN_144cbcc10(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 144cc1b60 FUN_144cc1b60 body=5 status=ok
// SIG undefined FUN_144cc1b60(void)

undefined8 FUN_144cc1b60(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cc1b70 FUN_144cc1b70 body=101 status=ok
// SIG undefined FUN_144cc1b70(void)

undefined8 * FUN_144cc1b70(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144cc1be0 FUN_144cc1be0 body=9 status=ok
// SIG undefined FUN_144cc1be0(void)

void FUN_144cc1be0(longlong param_1)

{
  FUN_144cbcf90(param_1 + 0x10);
  return;
}



// FUNCTION 144cc1bf0 FUN_144cc1bf0 body=5 status=ok
// SIG undefined FUN_144cc1bf0(void)

undefined8 FUN_144cc1bf0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cc1c00 FUN_144cc1c00 body=101 status=ok
// SIG undefined FUN_144cc1c00(void)

undefined8 * FUN_144cc1c00(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144cc1c70 FUN_144cc1c70 body=15 status=ok
// SIG undefined FUN_144cc1c70(void)

undefined4 * FUN_144cc1c70(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  return param_2;
}



// FUNCTION 144cc1c80 FUN_144cc1c80 body=12 status=ok
// SIG undefined FUN_144cc1c80(void)

void FUN_144cc1c80(longlong param_1,longlong param_2)

{
  FUN_144cbd1a0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 144cc1c90 FUN_144cc1c90 body=5 status=ok
// SIG undefined FUN_144cc1c90(void)

undefined8 FUN_144cc1c90(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cc1ca0 FUN_144cc1ca0 body=101 status=ok
// SIG undefined FUN_144cc1ca0(void)

undefined8 * FUN_144cc1ca0(undefined8 *param_1,ulonglong param_2)

{
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



// FUNCTION 144cc1d10 FUN_144cc1d10 body=9 status=ok
// SIG undefined FUN_144cc1d10(void)

void FUN_144cc1d10(longlong param_1)

{
  FUN_144cbd920(param_1 + 0x10);
  return;
}



// FUNCTION 144cc1d20 FUN_144cc1d20 body=5 status=ok
// SIG undefined FUN_144cc1d20(void)

undefined8 FUN_144cc1d20(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144cc1d30 FUN_144cc1d30 body=101 status=ok
// SIG undefined FUN_144cc1d30(void)

undefined8 * FUN_144cc1d30(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144cc1da0 FUN_144cc1da0 body=105 status=ok
// SIG undefined FUN_144cc1da0(void)

longlong * FUN_144cc1da0(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong uVar8;
  
  uVar1 = *param_3;
  uVar2 = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_2;
  uVar8 = SUB168(auVar3 * auVar5,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  lVar7 = (ulonglong)CARRY8(uVar2 * uVar1,uVar8) + SUB168(auVar4 * auVar6,8);
  if ((longlong)uVar2 < 0) {
    lVar7 = lVar7 - uVar1;
  }
  *param_1 = *param_2 * uVar1;
  param_1[1] = uVar2 * uVar1 + uVar8;
  param_1[2] = lVar7;
  return param_1;
}



// FUNCTION 144cc1e10 FUN_144cc1e10 body=425 status=ok
// SIG undefined FUN_144cc1e10(void)

longlong * FUN_144cc1e10(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_res18;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  
  uVar1 = param_1[3];
  if (uVar1 == 0 && (param_1[2] == 0 && (param_1[1] == 0 && *param_1 == 0))) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 1;
  }
  else {
    uVar3 = (longlong)uVar1 >> 0x3f;
    uVar4 = *param_1 ^ uVar3;
    local_a8 = uVar4 - uVar3;
    uVar5 = param_1[1] ^ uVar3;
    uVar4 = (ulonglong)(uVar4 < uVar3);
    uVar2 = uVar5 - uVar3;
    uStack_a0 = uVar2 - uVar4;
    uVar6 = param_1[2] ^ uVar3;
    uVar4 = (ulonglong)(uVar5 < uVar3 || uVar2 < uVar4);
    uVar2 = uVar6 - uVar3;
    local_98 = uVar2 - uVar4;
    lStack_90 = ((uVar1 ^ uVar3) - uVar3) - (ulonglong)(uVar6 < uVar3 || uVar2 < uVar4);
    FUN_147e58614(local_38,&local_a8,param_1 + 4,local_res18);
    FUN_147e58a78(&local_a8,local_38,&local_58,&local_88);
    local_68 = local_58;
    lStack_60 = lStack_50;
    local_88 = local_58;
    lStack_80 = lStack_50;
    local_a8 = CONCAT44(uStack_44,local_48);
    uStack_a0 = CONCAT44(uStack_3c,uStack_40);
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    if ((longlong)uVar1 < 0) {
      local_68 = -local_58;
      lStack_60 = -lStack_50 - (ulonglong)(local_58 != 0);
      uVar1 = (ulonglong)(lStack_50 != 0 || (ulonglong)-lStack_50 < (ulonglong)(local_58 != 0));
      local_a8 = -CONCAT44(uStack_44,local_48) - uVar1;
      uStack_a0 = -(ulonglong)
                   (CONCAT44(uStack_44,local_48) != 0 ||
                   (ulonglong)-CONCAT44(uStack_44,local_48) < uVar1) - CONCAT44(uStack_3c,uStack_40)
      ;
      local_98 = local_a8;
      lStack_90 = uStack_a0;
    }
    FUN_147e58a78(param_1 + 4,local_38,&local_58,&local_88);
    *param_2 = local_68;
    param_2[1] = lStack_60;
    param_2[2] = local_a8;
    param_2[3] = uStack_a0;
    param_2[4] = local_58;
    param_2[5] = lStack_50;
    param_2[6] = CONCAT44(uStack_44,local_48);
    param_2[7] = CONCAT44(uStack_3c,uStack_40);
  }
  return param_2;
}



// FUNCTION 144cc1fc0 FUN_144cc1fc0 body=673 status=ok
// SIG undefined FUN_144cc1fc0(void)

void FUN_144cc1fc0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  undefined8 *puVar24;
  uint uVar25;
  longlong lVar26;
  
  lVar2 = *(longlong *)(param_1 + 0x2028);
  uVar25 = 0;
  iVar10 = *(int *)(param_1 + 0x2030) >> 0x1f;
  iVar9 = (int)(((longlong)*(int *)(param_1 + 0x2030) * 0x128) / 0x128) + iVar10;
  if (iVar9 != iVar10) {
    do {
      lVar26 = (longlong)(int)uVar25;
      puVar24 = (undefined8 *)(lVar26 * 0x128 + lVar2);
      iVar23 = FUN_144cb8980(puVar24,puVar24 + 0xd);
      if (iVar23 == 0) {
        *(uint *)(puVar24 + 0x24) = *(uint *)(puVar24 + 0x24) | 1;
      }
      else if (0 < iVar23) {
        uVar11 = *puVar24;
        uVar12 = puVar24[1];
        uVar13 = puVar24[2];
        uVar14 = puVar24[3];
        uVar15 = puVar24[4];
        uVar16 = puVar24[5];
        uVar17 = puVar24[6];
        uVar18 = puVar24[7];
        uVar19 = puVar24[8];
        uVar20 = puVar24[9];
        uVar21 = puVar24[10];
        uVar22 = puVar24[0xb];
        uVar1 = puVar24[0xc];
        *puVar24 = puVar24[0xd];
        puVar24[1] = puVar24[0xe];
        puVar24[2] = puVar24[0xf];
        puVar24[3] = puVar24[0x10];
        puVar24[4] = puVar24[0x11];
        puVar24[5] = puVar24[0x12];
        puVar24[6] = puVar24[0x13];
        puVar24[7] = puVar24[0x14];
        puVar24[8] = puVar24[0x15];
        puVar24[9] = puVar24[0x16];
        puVar24[10] = puVar24[0x17];
        puVar24[0xb] = puVar24[0x18];
        puVar24[0xc] = puVar24[0x19];
        puVar24[0xd] = uVar11;
        puVar24[0xe] = uVar12;
        puVar24[0xf] = uVar13;
        puVar24[0x10] = uVar14;
        puVar24[0x11] = uVar15;
        puVar24[0x12] = uVar16;
        puVar24[0x13] = uVar17;
        puVar24[0x14] = uVar18;
        puVar24[0x15] = uVar19;
        puVar24[0x16] = uVar20;
        puVar24[0x17] = uVar21;
        puVar24[0x18] = uVar22;
        puVar24[0x19] = uVar1;
        lVar3 = puVar24[0x1c];
        lVar4 = puVar24[0x1a];
        uVar7 = (ulonglong)(puVar24[0x1e] != 0);
        lVar5 = puVar24[0x1f];
        uVar8 = -puVar24[0x1f];
        puVar24[0x1a] = -puVar24[0x1a];
        puVar24[0x1b] = -(ulonglong)(lVar4 != 0) - puVar24[0x1b];
        puVar24[0x1c] = -puVar24[0x1c];
        puVar24[0x1d] = -(ulonglong)(lVar3 != 0) - puVar24[0x1d];
        puVar24[0x1e] = -puVar24[0x1e];
        puVar24[0x1f] = uVar8 - uVar7;
        puVar24[0x20] = -(ulonglong)(lVar5 != 0 || uVar8 < uVar7) - puVar24[0x20];
        plVar6 = (longlong *)*param_2;
        *(uint *)(puVar24 + 0x21) = *(uint *)(puVar24 + 0x21) ^ 0x80000000;
        lVar3 = *plVar6;
        *(uint *)((longlong)puVar24 + 0x10c) = *(uint *)((longlong)puVar24 + 0x10c) ^ 0x80000000;
        *(uint *)(puVar24 + 0x22) = *(uint *)(puVar24 + 0x22) ^ 0x80000000;
        *(int *)(lVar3 + lVar26 * 4) = -*(int *)(lVar3 + lVar26 * 4);
        lVar3 = plVar6[2];
        *(int *)(lVar3 + lVar26 * 4) = -*(int *)(lVar3 + lVar26 * 4);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < (uint)(iVar9 - iVar10));
  }
  return;
}



// FUNCTION 144cc2270 FUN_144cc2270 body=5440 status=ok
// SIG undefined FUN_144cc2270(void)

undefined8 FUN_144cc2270(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  char cVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
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
  uint local_res20;
  undefined8 *local_4b8;
  uint local_4b0;
  uint local_4ac;
  uint *local_4a8;
  int local_4a0;
  uint local_49c;
  uint local_498 [16];
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 *local_3f8;
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
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  uint local_364;
  uint local_360;
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
  longlong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong local_2c8;
  longlong lStack_2c0;
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
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
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
  undefined8 *local_f8;
  undefined4 local_f0;
  uint local_ec;
  
  lVar25 = param_1 + 8;
  lVar7 = *(longlong *)(param_1 + 0x2028);
  lVar29 = (longlong)*(int *)(param_1 + 0x2030) * 0x128;
  local_2e0 = lVar29 + lVar7;
  iVar36 = (int)(lVar29 / 0x128);
  local_2e8 = lVar25;
  if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar36) {
    FUN_144cc6dd0(param_1 + 0x10,&PTR_vftable_14c6e47c0,(longlong)iVar36);
  }
  iVar32 = 0;
  if (0 < iVar36) {
    do {
      lVar29 = (longlong)iVar32 * 0x128;
      if ((*(byte *)(lVar29 + 0x120 + lVar7) & 1) == 0) {
        iVar35 = *(int *)(param_1 + 0x18) + 1;
        if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar35) {
          FUN_144cc6fc0(param_1 + 0x10,&PTR_vftable_14c6e47c0,(longlong)iVar35);
        }
        iVar6 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar35;
        puVar22 = (undefined8 *)((longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 0x10));
        *(undefined4 *)(puVar22 + 0xe) = 0xffffffff;
        *(undefined4 *)((longlong)puVar22 + 0x74) = *(undefined4 *)(param_1 + 0x2020);
        *(undefined4 *)(puVar22 + 0xf) = 0xffffffff;
        *(undefined1 *)((longlong)puVar22 + 0x7c) = 0;
        *(int *)(param_1 + 0x2020) = *(int *)(param_1 + 0x18) + -1;
        *(undefined4 *)(puVar22 + 0xd) = 0;
        uVar28 = ((undefined8 *)(lVar29 + lVar7))[1];
        *puVar22 = *(undefined8 *)(lVar29 + lVar7);
        puVar22[1] = uVar28;
        puVar27 = (undefined8 *)(lVar29 + 0x10 + lVar7);
        uVar28 = puVar27[1];
        puVar22[2] = *puVar27;
        puVar22[3] = uVar28;
        puVar27 = (undefined8 *)(lVar29 + 0x20 + lVar7);
        uVar28 = puVar27[1];
        puVar22[4] = *puVar27;
        puVar22[5] = uVar28;
        puVar27 = (undefined8 *)(lVar29 + 0x30 + lVar7);
        uVar28 = puVar27[1];
        puVar22[6] = *puVar27;
        puVar22[7] = uVar28;
        puVar27 = (undefined8 *)(lVar29 + 0x40 + lVar7);
        uVar28 = puVar27[1];
        puVar22[8] = *puVar27;
        puVar22[9] = uVar28;
        puVar27 = (undefined8 *)(lVar29 + 0x50 + lVar7);
        uVar28 = puVar27[1];
        puVar22[10] = *puVar27;
        puVar22[0xb] = uVar28;
        puVar22[0xc] = *(undefined8 *)(lVar29 + 0x60 + lVar7);
        *(int *)((longlong)puVar22 + 0x6c) = iVar32;
      }
      iVar32 = iVar32 + 1;
    } while (iVar32 < iVar36);
  }
  *param_3 = 0;
  FUN_144be90e0(0xe70ee67);
  uVar18 = FUN_144cbc250(lVar25,*(undefined4 *)(param_1 + 0x2020));
  *(undefined4 *)(param_1 + 0x2020) = uVar18;
  *param_3 = 0;
  FUN_144be90e0(0xe0366c35);
  *param_3 = 0;
  FUN_144be90e0(0x197edd1b);
  uVar19 = *(uint *)(param_1 + 0x2020);
  local_4a8 = local_498;
  local_4b0 = 0xffffffff;
  local_4a0 = 0;
  local_49c = 0x80000010;
  do {
    if (uVar19 == 0xffffffff) {
      *param_3 = 0;
      FUN_144be90e0(0xa6cc5fff);
      uVar28 = 1;
LAB_144cc36c6:
      local_4a0 = 0;
      if ((-1 < (int)local_49c) && (local_4a8 != (uint *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_4a8,(ulonglong)(local_49c & 0x7fffffff) << 2);
      }
      return uVar28;
    }
    uVar30 = (ulonglong)uVar19;
    uVar34 = 0xffffffff;
    lVar29 = *(longlong *)(lVar25 + 8);
    local_4a0 = 0;
    lVar23 = (longlong)(int)uVar19 * 0x80;
    local_res20 = 0xffffffff;
    puVar2 = (undefined4 *)(lVar23 + lVar29);
    uVar18 = *puVar2;
    uVar48 = puVar2[1];
    uVar49 = puVar2[2];
    uVar50 = puVar2[3];
    puVar27 = (undefined8 *)(lVar23 + 0x10 + lVar29);
    uVar51 = *(undefined4 *)puVar27;
    uVar52 = *(undefined4 *)((longlong)puVar27 + 4);
    local_378 = *puVar27;
    uVar53 = *(undefined4 *)(puVar27 + 1);
    uVar54 = *(undefined4 *)((longlong)puVar27 + 0xc);
    uStack_370 = puVar27[1];
    puVar2 = (undefined4 *)(lVar23 + 0x50 + lVar29);
    uVar40 = *puVar2;
    uVar41 = puVar2[1];
    uVar42 = puVar2[2];
    uVar43 = puVar2[3];
    puVar22 = *(undefined8 **)(lVar23 + 0x60 + lVar29);
    uVar44 = SUB84(puVar22,0);
    uVar46 = (undefined4)((ulonglong)puVar22 >> 0x20);
    puVar27 = (undefined8 *)(lVar23 + 0x20 + lVar29);
    uVar55 = *(undefined4 *)puVar27;
    uVar56 = *(undefined4 *)((longlong)puVar27 + 4);
    uVar28 = *puVar27;
    uVar57 = *(undefined4 *)(puVar27 + 1);
    uVar58 = *(undefined4 *)((longlong)puVar27 + 0xc);
    uVar11 = puVar27[1];
    puVar27 = (undefined8 *)(lVar23 + 0x30 + lVar29);
    uVar59 = *(undefined4 *)puVar27;
    uVar60 = *(undefined4 *)((longlong)puVar27 + 4);
    uVar12 = *puVar27;
    uVar61 = *(undefined4 *)(puVar27 + 1);
    uVar62 = *(undefined4 *)((longlong)puVar27 + 0xc);
    uVar13 = puVar27[1];
    puVar27 = (undefined8 *)(lVar23 + 0x40 + lVar29);
    uVar63 = *(undefined4 *)puVar27;
    uVar64 = *(undefined4 *)((longlong)puVar27 + 4);
    uVar14 = *puVar27;
    uVar65 = *(undefined4 *)(puVar27 + 1);
    uVar66 = *(undefined4 *)((longlong)puVar27 + 0xc);
    uVar15 = puVar27[1];
    local_4b8 = puVar22;
    local_458 = uVar18;
    uStack_454 = uVar48;
    uStack_450 = uVar49;
    uStack_44c = uVar50;
    local_448 = uVar51;
    uStack_444 = uVar52;
    uStack_440 = uVar53;
    uStack_43c = uVar54;
    local_438 = uVar55;
    uStack_434 = uVar56;
    uStack_430 = uVar57;
    uStack_42c = uVar58;
    local_428 = uVar59;
    uStack_424 = uVar60;
    uStack_420 = uVar61;
    uStack_41c = uVar62;
    local_418 = uVar63;
    uStack_414 = uVar64;
    uStack_410 = uVar65;
    uStack_40c = uVar66;
    local_408 = uVar40;
    uStack_404 = uVar41;
    uStack_400 = uVar42;
    uStack_3fc = uVar43;
    local_3f8 = puVar22;
    local_2d8 = uVar40;
    uStack_2d4 = uVar41;
    uStack_2d0 = uVar42;
    uStack_2cc = uVar43;
    local_248 = uVar18;
    uStack_244 = uVar48;
    uStack_240 = uVar49;
    uStack_23c = uVar50;
    while( true ) {
      while( true ) {
        lVar29 = *(longlong *)(lVar25 + 8);
        lVar23 = (longlong)(int)uVar30 * 0x80;
        if (*(int *)(lVar23 + 0x68 + lVar29) == 0) break;
        uVar19 = *(uint *)(lVar23 + 0x6c + lVar29);
        uVar33 = *(uint *)(lVar23 + 0x78 + lVar29);
        if ((*(byte *)((longlong)(int)uVar19 * 0x128 + 0x120 + lVar7) & 2) != 0) {
          uVar34 = uVar19;
        }
        while( true ) {
          local_res20 = uVar34;
          if (uVar33 == 0xffffffff) {
            iVar36 = *(int *)(lVar25 + 0x2018);
            uVar20 = *(undefined4 *)(lVar23 + 0x70 + lVar29);
            *(undefined4 *)((longlong)iVar36 * 0x80 + 0x78 + *(longlong *)(lVar25 + 8)) =
                 *(undefined4 *)(lVar25 + 0x201c);
            *(int *)(lVar25 + 0x201c) = iVar36;
            uVar19 = FUN_144cbc250(lVar25,uVar20);
            *(uint *)(lVar25 + 0x2018) = uVar19;
            goto joined_r0x000144cc2723;
          }
          uVar30 = (ulonglong)uVar33;
          lVar24 = *(longlong *)(lVar25 + 8);
          lVar26 = (longlong)(int)uVar33 * 0x80;
          if (*(char *)(lVar26 + 0x7c + lVar24) == '\0') break;
          uVar19 = *(uint *)(lVar26 + 0x78 + lVar24);
          *(undefined4 *)(lVar26 + 0x78 + lVar24) = *(undefined4 *)(lVar25 + 0x201c);
          *(uint *)(lVar25 + 0x201c) = uVar33;
          uVar33 = uVar19;
        }
        *(undefined4 *)(lVar26 + 0x70 + lVar24) = *(undefined4 *)(lVar23 + 0x70 + lVar29);
        iVar36 = *(int *)(lVar25 + 0x2018);
        *(undefined4 *)((longlong)iVar36 * 0x80 + 0x78 + *(longlong *)(lVar25 + 8)) =
             *(undefined4 *)(lVar25 + 0x201c);
        *(int *)(lVar25 + 0x201c) = iVar36;
        *(uint *)(lVar25 + 0x2018) = uVar33;
      }
      iVar36 = local_4a0 + 1;
      if ((int)(local_49c & 0x7fffffff) < iVar36) {
        FUN_141807990(&local_4a8,&PTR_vftable_14c6e47c0,(longlong)iVar36);
      }
      if (local_4a8 + local_4a0 != (uint *)0x0) {
        local_4a8[local_4a0] = *(uint *)(lVar23 + 0x6c + lVar29);
      }
      lVar24 = (longlong)*(int *)(lVar23 + 0x6c + lVar29) * 0x128;
      puVar27 = (undefined8 *)(lVar24 + 0x68 + lVar7);
      uVar10 = puVar27[1];
      *(undefined8 *)(lVar23 + lVar29) = *puVar27;
      ((undefined8 *)(lVar23 + lVar29))[1] = uVar10;
      puVar27 = (undefined8 *)(lVar24 + 0x78 + lVar7);
      uVar10 = puVar27[1];
      puVar3 = (undefined8 *)(lVar23 + 0x10 + lVar29);
      *puVar3 = *puVar27;
      puVar3[1] = uVar10;
      puVar3 = (undefined8 *)(lVar24 + 0x88 + lVar7);
      uVar10 = puVar3[1];
      puVar27 = (undefined8 *)(lVar23 + 0x20 + lVar29);
      *puVar27 = *puVar3;
      puVar27[1] = uVar10;
      puVar3 = (undefined8 *)(lVar24 + 0x98 + lVar7);
      uVar10 = puVar3[1];
      puVar27 = (undefined8 *)(lVar23 + 0x30 + lVar29);
      *puVar27 = *puVar3;
      puVar27[1] = uVar10;
      puVar3 = (undefined8 *)(lVar24 + 0xa8 + lVar7);
      uVar10 = puVar3[1];
      puVar27 = (undefined8 *)(lVar23 + 0x40 + lVar29);
      *puVar27 = *puVar3;
      puVar27[1] = uVar10;
      puVar4 = (undefined4 *)(lVar24 + 0xb8 + lVar7);
      uVar20 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar2 = (undefined4 *)(lVar23 + 0x50 + lVar29);
      *puVar2 = *puVar4;
      puVar2[1] = uVar20;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      *(undefined8 *)(lVar23 + 0x60 + lVar29) = *(undefined8 *)(lVar24 + 200 + lVar7);
      *(undefined4 *)(lVar23 + 0x68 + lVar29) = 1;
      lVar29 = (longlong)*(int *)(lVar25 + 0x2018) * 0x80 + *(longlong *)(lVar25 + 8);
      iVar32 = *(int *)(lVar29 + 0x78);
      uVar30 = (ulonglong)iVar32;
      local_4a0 = iVar36;
      if (iVar32 == -1) break;
      *(undefined4 *)(uVar30 * 0x80 + 0x70 + *(longlong *)(lVar25 + 8)) =
           *(undefined4 *)(lVar29 + 0x70);
      *(undefined8 *)(lVar29 + 0x70) = 0xffffffffffffffff;
      *(undefined4 *)(lVar29 + 0x78) = 0xffffffff;
      if (*(int *)(lVar25 + 0x2018) != -1) {
        uVar19 = FUN_144cbc000(lVar25,*(int *)(lVar25 + 0x2018),iVar32);
        uVar30 = (ulonglong)uVar19;
      }
      *(int *)(lVar25 + 0x2018) = (int)uVar30;
    }
    *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar29 + 0x70);
    *(undefined4 *)(lVar29 + 0x70) = 0xffffffff;
    *(undefined4 *)(lVar29 + 0x78) = 0xffffffff;
    uVar20 = FUN_144cbc250(lVar25,*(undefined4 *)(lVar25 + 0x2018));
    *(undefined4 *)(lVar25 + 0x2018) = uVar20;
LAB_144cc2824:
    uVar19 = 0xffffffff;
    local_2b8 = uVar18;
    uStack_2b4 = uVar48;
    uStack_2b0 = uVar49;
    uStack_2ac = uVar50;
    local_2a8 = uVar51;
    uStack_2a4 = uVar52;
    uStack_2a0 = uVar53;
    uStack_29c = uVar54;
    local_298 = uVar55;
    uStack_294 = uVar56;
    uStack_290 = uVar57;
    uStack_28c = uVar58;
    local_288 = uVar59;
    uStack_284 = uVar60;
    uStack_280 = uVar61;
    uStack_27c = uVar62;
    local_278 = uVar63;
    uStack_274 = uVar64;
    uStack_270 = uVar65;
    uStack_26c = uVar66;
    local_268 = uVar40;
    uStack_264 = uVar41;
    uStack_260 = uVar42;
    uStack_25c = uVar43;
    if (uVar34 == 0xffffffff) {
      uVar31 = 0xffffffff;
      local_res20 = 0xffffffff;
      uVar33 = 0xffffffff;
      uVar34 = local_4b0;
      local_258 = puVar22;
      uVar16 = 0xffffffff;
      if (local_4b0 != 0xffffffff) {
        do {
          uVar33 = uVar16;
          lVar29 = lVar7 + 0xd0 + (longlong)(int)uVar34 * 0x128;
          fVar47 = *(float *)(lVar29 + 0x38) * (float)local_258 +
                   *(float *)(lVar29 + 0x3c) * local_258._4_4_ + *(float *)(lVar29 + 0x40);
          fVar39 = (ABS(local_258._4_4_) * ABS(*(float *)(lVar29 + 0x3c)) +
                    ABS((float)local_258) * ABS(*(float *)(lVar29 + 0x38)) +
                   ABS(*(float *)(lVar29 + 0x40))) * 3.5762787e-07;
          uVar16 = uVar34;
          if (fVar47 <= fVar39) {
            uVar37 = uVar34;
            if (fVar47 < -fVar39) break;
            iVar36 = FUN_144cb9080(lVar29,&local_2b8);
            if (iVar36 < 1) {
              if (iVar36 != 0) break;
              uVar16 = uVar19;
              local_res20 = uVar34;
              if (uVar33 == 0xffffffff) {
                uVar33 = uVar34;
              }
            }
          }
          uVar19 = uVar16;
          uVar34 = *(uint *)((longlong)(int)uVar34 * 0x128 + 0x11c + lVar7);
          uVar37 = uVar31;
          uVar16 = uVar33;
        } while (uVar34 != 0xffffffff);
        goto LAB_144cc2be9;
      }
    }
    else {
      uVar31 = *(uint *)((longlong)(int)uVar34 * 0x128 + 0x118 + lVar7);
      uVar33 = uVar34;
      while (uVar19 = uVar31, local_258 = puVar22, uVar19 != 0xffffffff) {
        local_258._0_4_ = SUB84(puVar22,0);
        local_258._4_4_ = (float)((ulonglong)puVar22 >> 0x20);
        lVar29 = lVar7 + 0xd0 + (longlong)(int)uVar19 * 0x128;
        fVar45 = *(float *)(lVar29 + 0x38) * (float)local_258 +
                 *(float *)(lVar29 + 0x3c) * local_258._4_4_ + *(float *)(lVar29 + 0x40);
        fVar38 = (ABS(local_258._4_4_) * ABS(*(float *)(lVar29 + 0x3c)) +
                  ABS((float)local_258) * ABS(*(float *)(lVar29 + 0x38)) +
                 ABS(*(float *)(lVar29 + 0x40))) * 3.5762787e-07;
        fVar39 = (float)local_258;
        fVar47 = local_258._4_4_;
        if ((fVar38 < fVar45) || (fVar45 < -fVar38)) goto LAB_144cc2988;
        iVar36 = FUN_144cb9080(lVar29,&local_2b8);
        if (iVar36 != 0) break;
        puVar22 = local_258;
        uVar33 = uVar19;
        uVar31 = *(uint *)((longlong)(int)uVar19 * 0x128 + 0x118 + lVar7);
      }
      fVar39 = (float)local_258;
      fVar47 = local_258._4_4_;
      puVar22 = local_258;
LAB_144cc2988:
      local_258 = puVar22;
      uVar37 = *(uint *)((longlong)(int)uVar34 * 0x128 + 0x11c + lVar7);
      if (uVar37 != 0xffffffff) {
        while( true ) {
          uVar34 = uVar37;
          lVar29 = lVar7 + 0xd0 + (longlong)(int)uVar34 * 0x128;
          fVar38 = *(float *)(lVar29 + 0x38) * fVar39 + *(float *)(lVar29 + 0x3c) * fVar47 +
                   *(float *)(lVar29 + 0x40);
          fVar39 = (ABS(fVar47) * ABS(*(float *)(lVar29 + 0x3c)) +
                    ABS(fVar39) * ABS(*(float *)(lVar29 + 0x38)) + ABS(*(float *)(lVar29 + 0x40))) *
                   3.5762787e-07;
          uVar37 = uVar34;
          if ((((fVar39 < fVar38) || (fVar38 < -fVar39)) ||
              (iVar36 = FUN_144cb9080(lVar29,&local_2b8), iVar36 != 0)) ||
             (uVar37 = *(uint *)((longlong)(int)uVar34 * 0x128 + 0x11c + lVar7),
             local_res20 = uVar34, uVar37 == 0xffffffff)) break;
          fVar39 = (float)local_258;
          fVar47 = local_258._4_4_;
        }
        uVar18 = local_248;
        uVar48 = uStack_244;
        uVar49 = uStack_240;
        uVar50 = uStack_23c;
        uVar51 = (undefined4)local_378;
        uVar52 = local_378._4_4_;
        uVar53 = (undefined4)uStack_370;
        uVar54 = uStack_370._4_4_;
      }
LAB_144cc2be9:
      uVar44 = SUB84(local_4b8,0);
      uVar46 = (undefined4)((ulonglong)local_4b8 >> 0x20);
      uVar40 = local_2d8;
      uVar41 = uStack_2d4;
      uVar42 = uStack_2d0;
      uVar43 = uStack_2cc;
      uVar31 = uVar37;
    }
    lVar29 = param_2[1];
    local_378 = *(longlong *)(lVar29 + 0x50);
    uStack_370 = (longlong)*(int *)(lVar29 + 0x58) * 0x10 + local_378;
    if (uVar19 == 0xffffffff) {
      local_368 = 0xffffffff;
    }
    else {
      lVar23 = (longlong)(int)uVar19;
      iVar36 = *(int *)(local_378 + 8 + lVar23 * 0x10);
      local_368 = *(undefined4 *)(local_378 + 8 + lVar23 * 0x10);
      if ((iVar36 != -1) && (*(int *)(local_378 + 0xc + lVar23 * 0x10) == -1)) {
        uVar30 = (ulonglong)uVar19;
        do {
          iVar32 = *(int *)(local_378 + (longlong)(int)uVar30 * 0x10);
          uVar30 = (ulonglong)iVar32;
          if ((iVar32 == -1) || (*(int *)(local_378 + 8 + uVar30 * 0x10) != iVar36)) break;
        } while (*(int *)(local_378 + 0xc + uVar30 * 0x10) == -1);
      }
    }
    local_360 = uVar31;
    if (uVar33 == 0xffffffff) {
      local_360 = 0xffffffff;
    }
    local_4b8 = &local_378;
    local_3e8 = CONCAT44(uVar48,uVar18);
    uStack_3e0 = CONCAT44(uVar50,uVar49);
    local_3d8 = CONCAT44(uVar52,uVar51);
    uStack_3d0 = CONCAT44(uVar54,uVar53);
    local_398 = CONCAT44(uVar41,uVar40);
    uStack_390 = CONCAT44(uVar43,uVar42);
    local_388 = CONCAT44(uVar46,uVar44);
    local_3c8 = uVar28;
    uStack_3c0 = uVar11;
    local_3b8 = uVar12;
    uStack_3b0 = uVar13;
    local_3a8 = uVar14;
    uStack_3a0 = uVar15;
    local_364 = uVar33;
    cVar17 = FUN_144cc7240(&local_3e8,&local_4b8,*(undefined8 *)param_2[2],
                           ((undefined8 *)param_2[2])[1]);
    if (cVar17 == '\0') {
LAB_144cc37a9:
      uVar28 = 0;
      goto LAB_144cc36c6;
    }
    if (uVar19 != 0xffffffff) {
      *(uint *)(*(longlong *)(lVar29 + 0x50) + 4 + (longlong)(int)uVar19 * 0x10) = uVar31;
    }
    if (uVar31 != 0xffffffff) {
      *(uint *)(*(longlong *)(lVar29 + 0x50) + (longlong)(int)uVar31 * 0x10) = uVar19;
    }
    uVar34 = uVar33;
    if (uVar33 != 0xffffffff) {
      while( true ) {
        cVar17 = FUN_144cb8700(&local_458,lVar7 + 0x68 + (longlong)(int)uVar34 * 0x128);
        if (cVar17 != '\0') {
          iVar36 = local_4a0 + 1;
          local_4b8 = (undefined8 *)CONCAT44(local_4b8._4_4_,iVar36);
          if ((int)(local_49c & 0x7fffffff) < iVar36) {
            FUN_141807990(&local_4a8,&PTR_vftable_14c6e47c0,(longlong)iVar36);
            iVar36 = (int)local_4b8;
          }
          lVar25 = (longlong)local_4a0;
          local_4a0 = iVar36;
          if (local_4a8 + lVar25 != (uint *)0x0) {
            local_4a8[lVar25] = uVar34;
          }
        }
        if (uVar34 == local_res20) break;
        uVar34 = *(uint *)((longlong)(int)uVar34 * 0x128 + 0x11c + lVar7);
      }
      lVar25 = (longlong)(int)uVar33 * 0x128 + lVar7;
      *(uint *)(lVar25 + 0x120) = *(uint *)(lVar25 + 0x120) & 0xfffffffd;
      *(undefined8 *)(lVar25 + 0x118) = 0xffffffffffffffff;
      uVar34 = *(uint *)(lVar25 + 0x11c);
      while (uVar16 = uVar34, uVar33 != local_res20) {
        lVar25 = (longlong)(int)uVar16 * 0x128 + lVar7;
        *(undefined8 *)(lVar25 + 0x118) = 0xffffffffffffffff;
        *(uint *)(lVar25 + 0x120) = *(uint *)(lVar25 + 0x120) & 0xfffffffd;
        uVar34 = *(uint *)(lVar25 + 0x11c);
        uVar33 = uVar16;
      }
      uVar44 = SUB84(local_3f8,0);
      uVar46 = (undefined4)((ulonglong)local_3f8 >> 0x20);
      lVar25 = local_2e8;
      uVar40 = local_408;
      uVar41 = uStack_404;
      uVar42 = uStack_400;
      uVar43 = uStack_3fc;
      uVar18 = local_458;
      uVar48 = uStack_454;
      uVar49 = uStack_450;
      uVar50 = uStack_44c;
      uVar51 = local_448;
      uVar52 = uStack_444;
      uVar53 = uStack_440;
      uVar54 = uStack_43c;
      uVar55 = local_438;
      uVar56 = uStack_434;
      uVar57 = uStack_430;
      uVar58 = uStack_42c;
      uVar59 = local_428;
      uVar60 = uStack_424;
      uVar61 = uStack_420;
      uVar62 = uStack_41c;
      uVar63 = local_418;
      uVar64 = uStack_414;
      uVar65 = uStack_410;
      uVar66 = uStack_40c;
    }
    if (local_4a0 == 0) {
      if (uVar19 == 0xffffffff) {
        puVar21 = &local_4b0;
      }
      else {
        puVar21 = (uint *)((longlong)(int)uVar19 * 0x128 + 0x11c + lVar7);
      }
      *puVar21 = uVar31;
      if (uVar31 == 0xffffffff) {
        puVar21 = &local_4ac;
      }
      else {
        puVar21 = (uint *)((longlong)(int)uVar31 * 0x128 + 0x118 + lVar7);
      }
      *puVar21 = uVar19;
      local_358 = CONCAT44(uVar48,uVar18);
      uStack_350 = CONCAT44(uVar50,uVar49);
      local_348 = CONCAT44(uVar52,uVar51);
      uStack_340 = CONCAT44(uVar54,uVar53);
      local_378 = 0;
      uStack_370 = 0;
      local_338 = CONCAT44(uVar56,uVar55);
      uStack_330 = CONCAT44(uVar58,uVar57);
      local_328 = CONCAT44(uVar60,uVar59);
      uStack_320 = CONCAT44(uVar62,uVar61);
      local_318 = CONCAT44(uVar64,uVar63);
      uStack_310 = CONCAT44(uVar66,uVar65);
      local_308 = CONCAT44(uVar41,uVar40);
      uStack_300 = CONCAT44(uVar43,uVar42);
      local_2f8 = CONCAT44(uVar46,uVar44);
      cVar17 = FUN_144cc5fe0(&local_358,uVar19,&local_378,uVar31,*param_2,param_2[1],param_2[2]);
      if (cVar17 == '\0') {
        *param_3 = 0;
        FUN_144be90e0(0x19b77753);
        goto LAB_144cc37a9;
      }
      if ((uVar19 != 0xffffffff) && (uVar31 != 0xffffffff)) {
        lVar23 = (longlong)(int)uVar19 * 0x128;
        lVar29 = *(longlong *)(param_1 + 0x2028);
        lVar24 = (longlong)(int)uVar31 * 0x128;
        puVar27 = (undefined8 *)(lVar29 + 0x68 + lVar23);
        local_3e8 = *puVar27;
        uStack_3e0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0x78 + lVar23);
        local_3d8 = *puVar27;
        uStack_3d0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0x88 + lVar23);
        local_3c8 = *puVar27;
        uStack_3c0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0x98 + lVar23);
        local_3b8 = *puVar27;
        uStack_3b0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0xa8 + lVar23);
        local_3a8 = *puVar27;
        uStack_3a0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0xb8 + lVar23);
        local_398 = *puVar27;
        uStack_390 = puVar27[1];
        local_388 = *(undefined8 *)(lVar29 + 200 + lVar23);
        puVar27 = (undefined8 *)(lVar29 + 0x68 + lVar24);
        local_358 = *puVar27;
        uStack_350 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0x78 + lVar24);
        local_348 = *puVar27;
        uStack_340 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0x88 + lVar24);
        local_338 = *puVar27;
        uStack_330 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0x98 + lVar24);
        local_328 = *puVar27;
        uStack_320 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0xa8 + lVar24);
        local_318 = *puVar27;
        uStack_310 = puVar27[1];
        puVar27 = (undefined8 *)(lVar29 + 0xb8 + lVar24);
        local_308 = *puVar27;
        uStack_300 = puVar27[1];
        local_2f8 = *(undefined8 *)(lVar29 + 200 + lVar24);
        iVar36 = FUN_144cb91d0(lVar29 + 0xd0 + lVar23,&local_358);
        if ((iVar36 < 0) &&
           (iVar36 = FUN_144cb91d0(*(longlong *)(param_1 + 0x2028) + 0xd0 + lVar24,&local_3e8),
           0 < iVar36)) {
          cVar17 = FUN_144cb9420(*(longlong *)(param_1 + 0x2028) + 0xd0 + lVar23,
                                 *(longlong *)(param_1 + 0x2028) + 0xd0 + lVar24,&local_458);
          if (cVar17 != '\0') {
            FUN_144cb9d00(&local_458);
          }
          local_158 = CONCAT44(uStack_454,local_458);
          uStack_150 = CONCAT44(uStack_44c,uStack_450);
          puVar27 = &local_158;
          local_148 = CONCAT44(uStack_444,local_448);
          uStack_140 = CONCAT44(uStack_43c,uStack_440);
          local_138 = CONCAT44(uStack_434,local_438);
          uStack_130 = CONCAT44(uStack_42c,uStack_430);
          local_118 = CONCAT44(uStack_414,local_418);
          uStack_110 = CONCAT44(uStack_40c,uStack_410);
          local_128 = CONCAT44(uStack_424,local_428);
          uStack_120 = CONCAT44(uStack_41c,uStack_420);
          local_f8 = local_3f8;
          local_f0 = 2;
          local_108 = local_408;
          uStack_104 = uStack_404;
          uStack_100 = uStack_400;
          uStack_fc = uStack_3fc;
          local_ec = uVar19;
          goto LAB_144cc368e;
        }
      }
    }
    else {
      lStack_2c0 = local_2e0;
      iVar36 = (int)((longlong)local_4a0 * 4 >> 2);
      local_2c8 = lVar7;
      if (1 < iVar36) {
        uStack_370 = local_2e0;
        local_378 = lVar7;
        FUN_144cc6ac0(local_4a8,0,iVar36 + -1,&local_378);
      }
      local_3e8 = CONCAT44(uVar48,uVar18);
      uStack_3e0 = CONCAT44(uVar50,uVar49);
      local_3d8 = CONCAT44(uVar52,uVar51);
      uStack_3d0 = CONCAT44(uVar54,uVar53);
      local_3c8 = CONCAT44(uVar56,uVar55);
      uStack_3c0 = CONCAT44(uVar58,uVar57);
      local_3b8 = CONCAT44(uVar60,uVar59);
      uStack_3b0 = CONCAT44(uVar62,uVar61);
      local_3a8 = CONCAT44(uVar64,uVar63);
      uStack_3a0 = CONCAT44(uVar66,uVar65);
      local_398 = CONCAT44(uVar41,uVar40);
      uStack_390 = CONCAT44(uVar43,uVar42);
      local_388 = CONCAT44(uVar46,uVar44);
      FUN_144cc5180(param_1,&local_4a8,&local_3e8);
      iVar36 = 0;
      iVar32 = (int)((longlong)local_4a0 * 4 >> 2) + -1;
      puVar21 = local_4a8;
      if (0 < iVar32) {
        do {
          puVar1 = puVar21 + 1;
          iVar36 = iVar36 + 1;
          *(uint *)((longlong)(int)*puVar21 * 0x128 + 0x11c + lVar7) = *puVar1;
          puVar5 = (uint *)((longlong)(int)*puVar21 * 0x128 + 0x120 + lVar7);
          *puVar5 = *puVar5 | 2;
          *(uint *)((longlong)(int)*puVar1 * 0x128 + 0x118 + lVar7) = *puVar21;
          puVar21 = puVar1;
        } while (iVar36 < iVar32);
      }
      puVar21 = (uint *)((longlong)(int)local_4a8[(longlong)local_4a0 + -1] * 0x128 + 0x120 + lVar7)
      ;
      *puVar21 = *puVar21 | 2;
      *(uint *)((longlong)(int)*local_4a8 * 0x128 + 0x118 + lVar7) = uVar19;
      *(uint *)((longlong)(int)local_4a8[local_4a0 + -1] * 0x128 + 0x11c + lVar7) = uVar31;
      if (uVar19 != 0xffffffff) {
        *(uint *)((longlong)(int)uVar19 * 0x128 + 0x11c + lVar7) = *local_4a8;
      }
      if (uVar31 != 0xffffffff) {
        *(uint *)((longlong)(int)uVar31 * 0x128 + 0x118 + lVar7) = local_4a8[local_4a0 + -1];
      }
      local_3e8 = CONCAT44(uVar48,uVar18);
      uStack_3e0 = CONCAT44(uVar50,uVar49);
      local_3d8 = CONCAT44(uVar52,uVar51);
      uStack_3d0 = CONCAT44(uVar54,uVar53);
      local_3c8 = CONCAT44(uVar56,uVar55);
      uStack_3c0 = CONCAT44(uVar58,uVar57);
      local_3b8 = CONCAT44(uVar60,uVar59);
      uStack_3b0 = CONCAT44(uVar62,uVar61);
      local_3a8 = CONCAT44(uVar64,uVar63);
      uStack_3a0 = CONCAT44(uVar66,uVar65);
      local_398 = CONCAT44(uVar41,uVar40);
      uStack_390 = CONCAT44(uVar43,uVar42);
      local_388 = CONCAT44(uVar46,uVar44);
      cVar17 = FUN_144cc5d60(&local_3e8,uVar19,&local_4a8,uVar31,*param_2,param_2[1],param_2[2]);
      if (cVar17 == '\0') goto LAB_144cc37a9;
      if (uVar19 == 0xffffffff) {
        local_4b0 = *local_4a8;
      }
      else {
        lVar24 = (longlong)(int)uVar19 * 0x128;
        *(uint *)(lVar24 + 0x11c + lVar7) = *local_4a8;
        lVar29 = *(longlong *)(param_1 + 0x2028);
        puVar27 = (undefined8 *)(lVar24 + 0x68 + lVar29);
        local_358 = *puVar27;
        uStack_350 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0x78 + lVar29);
        local_348 = *puVar27;
        uStack_340 = puVar27[1];
        lVar23 = (longlong)(int)*local_4a8 * 0x128;
        puVar27 = (undefined8 *)(lVar24 + 0x88 + lVar29);
        local_338 = *puVar27;
        uStack_330 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0x98 + lVar29);
        local_328 = *puVar27;
        uStack_320 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0xa8 + lVar29);
        local_318 = *puVar27;
        uStack_310 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0xb8 + lVar29);
        local_308 = *puVar27;
        uStack_300 = puVar27[1];
        local_2f8 = *(undefined8 *)(lVar24 + 200 + lVar29);
        puVar27 = (undefined8 *)(lVar23 + 0x68 + lVar29);
        local_3e8 = *puVar27;
        uStack_3e0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0x78 + lVar29);
        local_3d8 = *puVar27;
        uStack_3d0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0x88 + lVar29);
        local_3c8 = *puVar27;
        uStack_3c0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0x98 + lVar29);
        local_3b8 = *puVar27;
        uStack_3b0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0xa8 + lVar29);
        local_3a8 = *puVar27;
        uStack_3a0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0xb8 + lVar29);
        local_398 = *puVar27;
        uStack_390 = puVar27[1];
        local_388 = *(undefined8 *)(lVar23 + 200 + lVar29);
        iVar36 = FUN_144cb91d0(lVar29 + 0xd0 + lVar24,&local_3e8);
        if ((iVar36 < 0) &&
           (iVar36 = FUN_144cb91d0(*(longlong *)(param_1 + 0x2028) + 0xd0 + lVar23,&local_358),
           0 < iVar36)) {
          cVar17 = FUN_144cb9420(*(longlong *)(param_1 + 0x2028) + 0xd0 + lVar24,
                                 *(longlong *)(param_1 + 0x2028) + 0xd0 + lVar23,&local_458);
          if (cVar17 != '\0') {
            FUN_144cb9d00(&local_458);
          }
          local_238 = CONCAT44(uStack_454,local_458);
          uStack_230 = CONCAT44(uStack_44c,uStack_450);
          local_228 = CONCAT44(uStack_444,local_448);
          uStack_220 = CONCAT44(uStack_43c,uStack_440);
          local_218 = CONCAT44(uStack_434,local_438);
          uStack_210 = CONCAT44(uStack_42c,uStack_430);
          local_1f8 = CONCAT44(uStack_414,local_418);
          uStack_1f0 = CONCAT44(uStack_40c,uStack_410);
          local_208 = CONCAT44(uStack_424,local_428);
          uStack_200 = CONCAT44(uStack_41c,uStack_420);
          local_1d8 = local_3f8;
          local_1d0 = 2;
          local_1e8 = local_408;
          uStack_1e4 = uStack_404;
          uStack_1e0 = uStack_400;
          uStack_1dc = uStack_3fc;
          local_1cc = uVar19;
          FUN_144cbbed0(lVar25,&local_238);
        }
      }
      if (uVar31 != 0xffffffff) {
        lVar23 = (longlong)(int)uVar31 * 0x128;
        *(uint *)(lVar23 + 0x118 + lVar7) = local_4a8[local_4a0 + -1];
        uVar19 = local_4a8[local_4a0 + -1];
        lVar29 = *(longlong *)(param_1 + 0x2028);
        lVar24 = (longlong)(int)uVar19 * 0x128;
        puVar27 = (undefined8 *)(lVar24 + 0x68 + lVar29);
        local_3e8 = *puVar27;
        uStack_3e0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0x78 + lVar29);
        local_3d8 = *puVar27;
        uStack_3d0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0x88 + lVar29);
        local_3c8 = *puVar27;
        uStack_3c0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0x98 + lVar29);
        local_3b8 = *puVar27;
        uStack_3b0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0xa8 + lVar29);
        local_3a8 = *puVar27;
        uStack_3a0 = puVar27[1];
        puVar27 = (undefined8 *)(lVar24 + 0xb8 + lVar29);
        local_398 = *puVar27;
        uStack_390 = puVar27[1];
        local_388 = *(undefined8 *)(lVar24 + 200 + lVar29);
        puVar27 = (undefined8 *)(lVar23 + 0x68 + lVar29);
        local_358 = *puVar27;
        uStack_350 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0x78 + lVar29);
        local_348 = *puVar27;
        uStack_340 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0x88 + lVar29);
        local_338 = *puVar27;
        uStack_330 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0x98 + lVar29);
        local_328 = *puVar27;
        uStack_320 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0xa8 + lVar29);
        local_318 = *puVar27;
        uStack_310 = puVar27[1];
        puVar27 = (undefined8 *)(lVar23 + 0xb8 + lVar29);
        local_308 = *puVar27;
        uStack_300 = puVar27[1];
        local_2f8 = *(undefined8 *)(lVar23 + 200 + lVar29);
        iVar36 = FUN_144cb91d0(lVar29 + 0xd0 + lVar24,&local_358);
        if ((iVar36 < 0) &&
           (iVar36 = FUN_144cb91d0(*(longlong *)(param_1 + 0x2028) + 0xd0 + lVar23,&local_3e8),
           0 < iVar36)) {
          cVar17 = FUN_144cb9420(*(longlong *)(param_1 + 0x2028) + 0xd0 + lVar24,
                                 *(longlong *)(param_1 + 0x2028) + 0xd0 + lVar23,&local_458);
          if (cVar17 != '\0') {
            FUN_144cb9d00(&local_458);
          }
          local_1c8 = CONCAT44(uStack_454,local_458);
          uStack_1c0 = CONCAT44(uStack_44c,uStack_450);
          puVar27 = &local_1c8;
          local_1b8 = CONCAT44(uStack_444,local_448);
          uStack_1b0 = CONCAT44(uStack_43c,uStack_440);
          local_1a8 = CONCAT44(uStack_434,local_438);
          uStack_1a0 = CONCAT44(uStack_42c,uStack_430);
          local_188 = CONCAT44(uStack_414,local_418);
          uStack_180 = CONCAT44(uStack_40c,uStack_410);
          local_198 = CONCAT44(uStack_424,local_428);
          uStack_190 = CONCAT44(uStack_41c,uStack_420);
          local_168 = local_3f8;
          local_160 = 2;
          local_178 = local_408;
          uStack_174 = uStack_404;
          uStack_170 = uStack_400;
          uStack_16c = uStack_3fc;
          local_15c = uVar19;
LAB_144cc368e:
          FUN_144cbbed0(lVar25,puVar27);
        }
      }
    }
    uVar19 = *(uint *)(lVar25 + 0x2018);
  } while( true );
joined_r0x000144cc2723:
  uVar30 = (ulonglong)uVar19;
  if (uVar19 == 0xffffffff) goto LAB_144cc2824;
  while( true ) {
    lVar29 = *(longlong *)(lVar25 + 8);
    iVar36 = (int)uVar30;
    lVar23 = (longlong)iVar36 * 0x80;
    if (*(char *)(lVar23 + 0x7c + lVar29) == '\0') goto LAB_144cc2824;
    iVar32 = *(int *)(lVar23 + 0x78 + lVar29);
    uVar30 = (ulonglong)iVar32;
    uVar20 = *(undefined4 *)(lVar23 + 0x70 + lVar29);
    if (iVar32 == -1) break;
    *(undefined4 *)(uVar30 * 0x80 + 0x70 + lVar29) = uVar20;
    iVar36 = *(int *)(lVar25 + 0x2018);
    *(undefined4 *)((longlong)iVar36 * 0x80 + 0x78 + *(longlong *)(lVar25 + 8)) =
         *(undefined4 *)(lVar25 + 0x201c);
    *(int *)(lVar25 + 0x201c) = iVar36;
    *(int *)(lVar25 + 0x2018) = iVar32;
  }
  *(undefined4 *)(lVar23 + 0x78 + lVar29) = *(undefined4 *)(lVar25 + 0x201c);
  *(int *)(lVar25 + 0x201c) = iVar36;
  uVar19 = FUN_144cbc250(lVar25,uVar20);
  *(uint *)(lVar25 + 0x2018) = uVar19;
  goto joined_r0x000144cc2723;
}



// FUNCTION 144cc37b0 FUN_144cc37b0 body=1077 status=ok
// SIG undefined FUN_144cc37b0(void)

void FUN_144cc37b0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 local_188;
  undefined8 uStack_180;
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
  
  uVar14 = 0;
  FUN_144be90e0(0xeab13cc2);
  uVar2 = *(uint *)(param_2 + 3);
  uVar20 = 0;
  if (uVar2 != 0) {
    do {
      lVar11 = param_2[2];
      piVar15 = (int *)((longlong)(int)uVar20 * 0x20 + lVar11);
      if ((*(byte *)(piVar15 + 7) & 5) == 0) {
        lVar13 = *param_2;
        iVar3 = piVar15[1];
        piVar16 = (int *)((longlong)iVar3 * 0x20 + lVar11);
        lVar19 = (longlong)piVar15[3] * 0x20 + lVar11;
        iVar4 = *(int *)(lVar19 + 8);
        lVar10 = (longlong)iVar4 * 0x20 + lVar11;
        lVar11 = (longlong)*(int *)((longlong)*(int *)(lVar10 + 8) * 0x20 + lVar11) * 0x68;
        local_a8 = *(undefined8 *)(lVar11 + lVar13);
        uStack_a0 = ((undefined8 *)(lVar11 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar13);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar13);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar13);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar13);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar13);
        local_58 = *puVar1;
        uStack_50 = puVar1[1];
        local_48 = *(undefined8 *)(lVar11 + 0x60 + lVar13);
        lVar11 = (longlong)*piVar15 * 0x68;
        local_188 = *(undefined8 *)(lVar11 + lVar13);
        uStack_180 = ((undefined8 *)(lVar11 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar13);
        local_178 = *puVar1;
        uStack_170 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar13);
        local_168 = *puVar1;
        uStack_160 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar13);
        local_158 = *puVar1;
        uStack_150 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar13);
        local_148 = *puVar1;
        uStack_140 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar13);
        local_138 = *puVar1;
        uStack_130 = puVar1[1];
        local_128 = *(undefined8 *)(lVar11 + 0x60 + lVar13);
        lVar11 = (longlong)*piVar16 * 0x68;
        local_118 = *(undefined8 *)(lVar11 + lVar13);
        uStack_110 = ((undefined8 *)(lVar11 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar13);
        local_108 = *puVar1;
        uStack_100 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar13);
        local_f8 = *puVar1;
        uStack_f0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar13);
        local_e8 = *puVar1;
        uStack_e0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar13);
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar13);
        local_c8 = *puVar1;
        uStack_c0 = puVar1[1];
        local_b8 = *(undefined8 *)(lVar11 + 0x60 + lVar13);
        iVar8 = FUN_144cb8b90(&local_118,&local_188,&local_a8);
        if (iVar8 == 0) {
          bVar6 = FUN_144cb8700(&local_118,&local_188);
          bVar7 = FUN_144cb8700(&local_188,&local_a8);
          bVar7 = bVar7 ^ bVar6;
        }
        else {
          bVar7 = (byte)((uint)iVar8 >> 0x1f);
        }
        if (bVar7 == 0) {
          lVar11 = *param_2;
          lVar13 = param_2[2];
          iVar8 = piVar15[2];
          iVar5 = *(int *)(lVar19 + 4);
          piVar18 = (int *)((longlong)iVar8 * 0x20 + lVar13);
          piVar17 = (int *)((longlong)iVar5 * 0x20 + lVar13);
          lVar13 = (longlong)*(int *)((longlong)piVar18[2] * 0x20 + lVar13) * 0x68;
          local_118 = *(undefined8 *)(lVar13 + lVar11);
          uStack_110 = ((undefined8 *)(lVar13 + lVar11))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar11);
          local_108 = *puVar1;
          uStack_100 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar11);
          local_f8 = *puVar1;
          uStack_f0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar11);
          local_e8 = *puVar1;
          uStack_e0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar11);
          local_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar11);
          local_c8 = *puVar1;
          uStack_c0 = puVar1[1];
          local_b8 = *(undefined8 *)(lVar13 + 0x60 + lVar11);
          lVar13 = (longlong)*piVar18 * 0x68;
          local_188 = *(undefined8 *)(lVar13 + lVar11);
          uStack_180 = ((undefined8 *)(lVar13 + lVar11))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar11);
          local_178 = *puVar1;
          uStack_170 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar11);
          local_168 = *puVar1;
          uStack_160 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar11);
          local_158 = *puVar1;
          uStack_150 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar11);
          local_148 = *puVar1;
          uStack_140 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar11);
          local_138 = *puVar1;
          uStack_130 = puVar1[1];
          local_128 = *(undefined8 *)(lVar13 + 0x60 + lVar11);
          lVar13 = (longlong)*piVar17 * 0x68;
          local_a8 = *(undefined8 *)(lVar13 + lVar11);
          uStack_a0 = ((undefined8 *)(lVar13 + lVar11))[1];
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar11);
          local_98 = *puVar1;
          uStack_90 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar11);
          local_88 = *puVar1;
          uStack_80 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar11);
          local_78 = *puVar1;
          uStack_70 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar11);
          local_68 = *puVar1;
          uStack_60 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar11);
          local_58 = *puVar1;
          uStack_50 = puVar1[1];
          local_48 = *(undefined8 *)(lVar13 + 0x60 + lVar11);
          iVar9 = FUN_144cb8b90(&local_a8,&local_188,&local_118);
          if (iVar9 == 0) {
            bVar6 = FUN_144cb8700(&local_a8,&local_188);
            bVar7 = FUN_144cb8700(&local_188,&local_118);
            bVar7 = bVar7 ^ bVar6;
          }
          else {
            bVar7 = (byte)((uint)iVar9 >> 0x1f);
          }
          if (bVar7 == 0) {
            uVar14 = uVar14 + 0x37af4db;
            piVar16[2] = iVar4;
            *(int *)(lVar10 + 4) = iVar3;
            piVar17[2] = iVar8;
            piVar18[1] = iVar5;
            piVar15[7] = piVar15[7] | 1;
            *(uint *)(lVar19 + 0x1c) = *(uint *)(lVar19 + 0x1c) | 1;
            piVar15[3] = -1;
            *(undefined4 *)(lVar19 + 0xc) = 0xffffffff;
            if (uVar14 < 0x37af4db) {
              uVar12 = 0x5dc7f46d;
              goto LAB_144cc3b98;
            }
          }
          else {
            piVar15[7] = piVar15[7] | 4;
            uVar14 = uVar14 + 0x35e0369;
            *(uint *)(lVar19 + 0x1c) = *(uint *)(lVar19 + 0x1c) | 4;
            if (uVar14 < 0x35e0369) {
              uVar12 = 0xf0b79d89;
LAB_144cc3b98:
              FUN_144be90e0(uVar12);
            }
          }
        }
        else {
          piVar15[7] = piVar15[7] | 4;
          uVar14 = uVar14 + 0x1c6bc32;
          *(uint *)(lVar19 + 0x1c) = *(uint *)(lVar19 + 0x1c) | 4;
          if (uVar14 < 0x1c6bc32) {
            uVar12 = 0x92ca1871;
            goto LAB_144cc3b98;
          }
        }
      }
      else {
        uVar14 = uVar14 + 0x238664;
        if (uVar14 < 0x238664) {
          uVar12 = 0xf760a5aa;
          goto LAB_144cc3b98;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar2);
  }
  FUN_144be90e0(0x7f3c9adc);
  return;
}



// FUNCTION 144cc3bf0 FUN_144cc3bf0 body=786 status=ok
// SIG undefined FUN_144cc3bf0(void)

void FUN_144cc3bf0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar12 = *(longlong *)(param_3 + 8);
  *(undefined4 *)(param_3 + 0xa0) = 0;
  iVar19 = *(int *)(lVar12 + 0x60);
  iVar16 = (int)param_2[1];
  uVar2 = *(undefined4 *)(lVar12 + 0x60);
  iVar18 = iVar16 + iVar19;
  if ((int)(*(uint *)(lVar12 + 100) & 0x7fffffff) < iVar18) {
    FUN_144cc4ac0((longlong *)(lVar12 + 0x58),&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  *(int *)(lVar12 + 0x60) = iVar18;
  lVar12 = (longlong)iVar19 * 0x80 + *(longlong *)(lVar12 + 0x58);
  iVar19 = 0;
  *(undefined4 *)(param_3 + 0x88) = 2;
  *(undefined4 *)(param_3 + 0x8c) = uVar2;
  *(int *)(param_3 + 0x90) = iVar16;
  *(longlong *)(param_3 + 0x78) = lVar12;
  *(longlong *)(param_3 + 0x80) = (longlong)iVar16 * 0x80 + lVar12;
  lVar12 = *param_2;
  if (0 < iVar16) {
    do {
      lVar14 = (longlong)iVar19;
      lVar11 = lVar14 * 0x68;
      puVar15 = (undefined4 *)(lVar11 + lVar12);
      local_98 = *puVar15;
      uStack_94 = puVar15[1];
      uStack_90 = puVar15[2];
      uStack_8c = puVar15[3];
      puVar15 = (undefined4 *)(lVar11 + 0x10 + lVar12);
      local_88 = *puVar15;
      uStack_84 = puVar15[1];
      uStack_80 = puVar15[2];
      uStack_7c = puVar15[3];
      puVar15 = (undefined4 *)(lVar11 + 0x20 + lVar12);
      local_78 = *puVar15;
      uStack_74 = puVar15[1];
      uStack_70 = puVar15[2];
      uStack_6c = puVar15[3];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + lVar12);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x40 + lVar12);
      local_58 = *puVar1;
      uStack_50 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar12);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      local_a8 = *(undefined8 *)(lVar11 + 0x60 + lVar12);
      FUN_144cb9950(&local_98,&local_108);
      uVar10 = uStack_d0;
      uVar9 = local_d8;
      uVar8 = uStack_e0;
      uVar7 = local_e8;
      uVar6 = uStack_f0;
      uVar5 = local_f8;
      uVar4 = uStack_100;
      uVar3 = local_108;
      local_128 = local_c8;
      uStack_124 = uStack_c4;
      uStack_120 = uStack_c0;
      uStack_11c = uStack_bc;
      local_118 = local_b8;
      uStack_114 = uStack_b4;
      uStack_110 = uStack_b0;
      uStack_10c = uStack_ac;
      FUN_144cb95e0(&local_108,param_3 + 0x28,&local_148);
      lVar11 = *(longlong *)(param_3 + 0x78);
      iVar19 = iVar19 + 1;
      lVar14 = lVar14 * 0x80;
      *(undefined8 *)(lVar14 + lVar11) = uVar3;
      ((undefined8 *)(lVar14 + lVar11))[1] = uVar4;
      puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar11);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar11);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar11);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1 = (undefined8 *)(lVar14 + 0x40 + lVar11);
      *puVar1 = local_148;
      puVar1[1] = uStack_140;
      puVar1 = (undefined8 *)(lVar14 + 0x50 + lVar11);
      *puVar1 = local_138;
      puVar1[1] = uStack_130;
      puVar15 = (undefined4 *)(lVar14 + 0x60 + lVar11);
      *puVar15 = local_128;
      puVar15[1] = uStack_124;
      puVar15[2] = uStack_120;
      puVar15[3] = uStack_11c;
      puVar1 = (undefined8 *)(lVar14 + 0x70 + lVar11);
      *puVar1 = CONCAT44(uStack_114,local_118);
      puVar1[1] = CONCAT44(uStack_10c,uStack_110);
    } while (iVar19 < iVar16);
  }
  iVar16 = 0;
  lVar12 = param_2[2];
  iVar19 = (int)param_2[3];
  FUN_144cb3b30(*(longlong *)(param_3 + 8),*(int *)(*(longlong *)(param_3 + 8) + 0x30) + iVar19);
  if ((int)(*(uint *)(param_3 + 0xa4) & 0x7fffffff) < iVar19) {
    FUN_141807aa8((longlong *)(param_3 + 0x98),&PTR_vftable_14c6e47a0,(longlong)iVar19);
  }
  iVar18 = *(int *)(param_3 + 0xa0);
  if (iVar18 < iVar19) {
    *(int *)(param_3 + 0xa0) = iVar19;
    if (0 < iVar19 - iVar18) {
      uVar13 = (ulonglong)(uint)(iVar19 - iVar18);
      puVar15 = (undefined4 *)(*(longlong *)(param_3 + 0x98) + (longlong)iVar18 * 4);
      do {
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = 0xffffffff;
        }
        uVar13 = uVar13 - 1;
        puVar15 = puVar15 + 1;
      } while (uVar13 != 0);
    }
  }
  else if (iVar19 < iVar18) {
    *(int *)(param_3 + 0xa0) = iVar19;
  }
  if (0 < iVar19) {
    do {
      puVar15 = (undefined4 *)((longlong)iVar16 * 0x20 + lVar12);
      if ((*(byte *)(puVar15 + 7) & 9) == 0) {
        FUN_1450319b0(param_3,puVar15[6]);
        lVar11 = (longlong)(int)puVar15[2] * 0x20;
        iVar18 = iVar16;
        do {
          puVar17 = (undefined4 *)(lVar11 + lVar12);
          puVar15[7] = puVar15[7] | 8;
          FUN_145031a70(param_3,iVar18,*puVar15,*puVar17,puVar15[3],puVar15[5]);
          iVar18 = puVar15[2];
          lVar11 = (longlong)(int)puVar17[2] << 5;
          puVar15 = puVar17;
        } while (iVar18 != iVar16);
        FUN_145031cf0(param_3);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar19);
  }
  return;
}



// FUNCTION 144cc3f10 FUN_144cc3f10 body=301 status=ok
// SIG undefined FUN_144cc3f10(void)

float FUN_144cc3f10(ulonglong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = 3;
  lVar4 = 3;
  do {
    uVar6 = param_1[lVar4];
    if (uVar6 != 0) {
      uVar5 = (uint)uVar6 | (uint)(uVar6 >> 1) & 0x7fffffff;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar2 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      uVar5 = (uint)(uVar6 >> 0x20);
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      iVar3 = (*(code *)PTR_FUN_14c6da350)(uVar5 >> 0x10 | uVar5);
      iVar1 = 0x20 - iVar3;
      if (0x1f < 0x20 - iVar3) {
        iVar1 = 0x40 - iVar2;
      }
      *param_2 = iVar7 * 0x40 - iVar1;
      uVar6 = param_1[iVar7] << ((byte)iVar1 & 0x3f);
      if (iVar1 != 0) {
        uVar6 = uVar6 | param_1[(longlong)iVar7 + -1] >> (0x40 - (byte)iVar1 & 0x3f);
      }
      goto LAB_144cc3ffd;
    }
    iVar7 = iVar7 + -1;
    lVar4 = lVar4 + -1;
  } while (0 < lVar4);
  *param_2 = 0;
  uVar6 = *param_1;
LAB_144cc3ffd:
  if ((longlong)uVar6 < 0) {
    return (float)uVar6;
  }
  return (float)(longlong)uVar6;
}



// FUNCTION 144cc4040 FUN_144cc4040 body=823 status=ok
// SIG undefined FUN_144cc4040(void)

undefined8
FUN_144cc4040(longlong *param_1,ulonglong *param_2,longlong *param_3,longlong *param_4,
             ulonglong *param_5,ulonglong *param_6,longlong *param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  ulonglong local_c8;
  longlong lStack_c0;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  longlong local_48;
  
  puVar3 = (ulonglong *)FUN_144cc5990(&local_d8);
  puVar4 = (ulonglong *)FUN_144cc5990(&local_f8,param_1,param_4);
  local_78 = *puVar4 - *puVar3;
  uVar13 = (ulonglong)(*puVar4 < *puVar3);
  uVar7 = puVar4[1] - puVar3[1];
  local_70 = uVar7 - uVar13;
  uVar13 = (ulonglong)(puVar4[1] < puVar3[1] || uVar7 < uVar13);
  uVar7 = puVar4[2] - puVar3[2];
  local_68 = uVar7 - uVar13;
  uVar13 = (puVar4[3] - puVar3[3]) - (ulonglong)(puVar4[2] < puVar3[2] || uVar7 < uVar13);
  if (uVar13 == 0 && (local_68 == 0 && (local_70 == 0 && local_78 == 0))) {
    uVar5 = 0;
  }
  else {
    FUN_144cc7110(param_2,param_6,&local_b0);
    lVar6 = local_90;
    uVar7 = local_a0;
    uVar14 = local_98;
    if ((longlong)param_2[1] < 0) {
      uVar7 = local_a0 - *param_6;
      uVar1 = local_98 - param_6[1];
      uVar14 = uVar1 - (local_a0 < *param_6);
      lVar6 = (local_90 - param_6[2]) -
              (ulonglong)(local_98 < param_6[1] || uVar1 < (local_a0 < *param_6));
    }
    if ((longlong)param_6[2] < 0) {
      bVar16 = uVar14 < *param_2;
      uVar14 = uVar14 - *param_2;
      local_90 = (lVar6 - param_2[1]) - (ulonglong)bVar16;
    }
    FUN_144cc7110(param_4,param_5,&local_d8);
    if (param_4[1] < 0) {
      bVar16 = local_c8 < *param_5;
      local_c8 = local_c8 - *param_5;
      lStack_c0 = (lStack_c0 - param_5[1]) - (ulonglong)bVar16;
    }
    if ((longlong)param_5[2] < 0) {
      lStack_c0 = lStack_c0 - *param_4;
    }
    local_f8 = local_d8 - local_b0;
    lStack_f0 = (uStack_d0 - local_a8) - (ulonglong)(local_d8 < local_b0);
    uVar1 = (ulonglong)
            (uStack_d0 < local_a8 || uStack_d0 - local_a8 < (ulonglong)(local_d8 < local_b0));
    lVar15 = (local_c8 - uVar7) - uVar1;
    lVar6 = (lStack_c0 - uVar14) - (ulonglong)(local_c8 < uVar7 || local_c8 - uVar7 < uVar1);
    local_e8 = lVar15;
    lStack_e0 = lVar6;
    local_88 = local_f8;
    local_80 = lStack_f0;
    FUN_144cc7110(param_3,param_5,&local_60);
    uVar7 = local_50;
    if (param_3[1] < 0) {
      uVar7 = local_50 - *param_5;
      local_48 = (local_48 - param_5[1]) - (ulonglong)(local_50 < *param_5);
    }
    if ((longlong)param_5[2] < 0) {
      local_48 = local_48 - *param_3;
    }
    FUN_144cc7110(param_1,param_6,&local_b0);
    if (param_1[1] < 0) {
      bVar16 = local_a0 < *param_6;
      local_a0 = local_a0 - *param_6;
      local_98 = (local_98 - param_6[1]) - (ulonglong)bVar16;
    }
    if ((longlong)param_6[2] < 0) {
      local_98 = local_98 - *param_1;
    }
    lVar11 = local_b0 - local_60;
    lVar12 = (local_a8 - local_58) - (ulonglong)(local_b0 < local_60);
    uVar14 = (ulonglong)
             (local_a8 < local_58 || local_a8 - local_58 < (ulonglong)(local_b0 < local_60));
    lVar10 = (local_a0 - uVar7) - uVar14;
    lVar8 = (local_98 - local_48) - (ulonglong)(local_a0 < uVar7 || local_a0 - uVar7 < uVar14);
    if ((longlong)uVar13 < 0) {
      uVar7 = (ulonglong)(local_80 != 0 || (ulonglong)-local_80 < (ulonglong)(local_88 != 0));
      bVar16 = lVar11 != 0;
      lVar11 = -lVar11;
      bVar17 = lVar12 != 0;
      uVar14 = -lVar12;
      lVar12 = uVar14 - bVar16;
      uVar14 = (ulonglong)(bVar17 || uVar14 < bVar16);
      bVar16 = lVar10 != 0;
      uVar1 = -lVar10;
      lVar10 = uVar1 - uVar14;
      *param_7 = -local_88;
      param_7[1] = -local_80 - (ulonglong)(local_88 != 0);
      lVar8 = -(ulonglong)(bVar16 || uVar1 < uVar14) - lVar8;
      param_7[2] = -lVar15 - uVar7;
      param_7[3] = -(ulonglong)(lVar15 != 0 || (ulonglong)-lVar15 < uVar7) - lVar6;
    }
    else {
      *param_7 = local_f8;
      param_7[1] = lStack_f0;
      param_7[2] = local_e8;
      param_7[3] = lStack_e0;
    }
    uVar9 = (longlong)uVar13 >> 0x3f;
    param_7[4] = lVar11;
    param_7[5] = lVar12;
    uVar7 = (ulonglong)((local_78 ^ uVar9) < uVar9);
    uVar1 = (local_70 ^ uVar9) - uVar9;
    param_7[6] = lVar10;
    param_7[7] = lVar8;
    uVar14 = (ulonglong)((local_70 ^ uVar9) < uVar9 || uVar1 < uVar7);
    uVar2 = (local_68 ^ uVar9) - uVar9;
    param_7[8] = (local_78 ^ uVar9) - uVar9;
    param_7[9] = uVar1 - uVar7;
    uVar5 = 1;
    param_7[10] = uVar2 - uVar14;
    param_7[0xb] = ((uVar13 ^ uVar9) - uVar9) -
                   (ulonglong)((local_68 ^ uVar9) < uVar9 || uVar2 < uVar14);
  }
  return uVar5;
}



// FUNCTION 144cc4380 FUN_144cc4380 body=237 status=ok
// SIG undefined FUN_144cc4380(void)

undefined8 FUN_144cc4380(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
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
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_68 = param_2[8];
  uStack_60 = param_2[9];
  local_58 = param_2[10];
  uStack_50 = param_2[0xb];
  local_48 = *param_1;
  uStack_40 = param_1[1];
  local_38 = param_1[2];
  uStack_30 = param_1[3];
  local_28 = param_1[8];
  uStack_20 = param_1[9];
  local_18 = param_1[10];
  uStack_10 = param_1[0xb];
  cVar1 = FUN_144cabe50(&local_48,&local_88);
  if (cVar1 != '\0') {
    local_48 = param_2[4];
    uStack_40 = param_2[5];
    local_38 = param_2[6];
    uStack_30 = param_2[7];
    local_28 = param_2[8];
    uStack_20 = param_2[9];
    local_18 = param_2[10];
    uStack_10 = param_2[0xb];
    local_88 = param_1[4];
    uStack_80 = param_1[5];
    local_78 = param_1[6];
    uStack_70 = param_1[7];
    local_68 = param_1[8];
    uStack_60 = param_1[9];
    local_58 = param_1[10];
    uStack_50 = param_1[0xb];
    cVar1 = FUN_144cabe50(&local_88,&local_48);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144cc4470 FUN_144cc4470 body=1600 status=ok
// SIG undefined FUN_144cc4470(void)

void FUN_144cc4470(longlong *param_1,float *param_2,longlong *param_3,undefined4 param_4)

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
          goto LAB_144cc4731;
        }
LAB_144cc46cb:
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
        if (((uint)pfVar24[0x1d] & 1) != 0) goto LAB_144cc46cb;
        *local_48 = auVar30;
LAB_144cc4731:
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
          goto LAB_144cc4a62;
        }
LAB_144cc49fc:
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
        if (((uint)pfVar24[0x1d] & 1) != 0) goto LAB_144cc49fc;
        *local_48 = auVar30;
LAB_144cc4a62:
        local_48 = (undefined1 (*) [16])(*local_48 + (longlong)iVar26 * 4);
      }
      lVar17 = (longlong)local_48 - (longlong)&uStack_448 >> 2;
      pauVar25 = local_48;
    } while ((int)lVar17 != 0);
  }
  return;
}



// FUNCTION 144cc4ac0 FUN_144cc4ac0 body=246 status=ok
// SIG undefined FUN_144cc4ac0(void)

void FUN_144cc4ac0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x80,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 7);
  uVar1 = uVar3 * 0x80 + 0x80;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x80;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x80 >> 7);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 7);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144cc4bc0 FUN_144cc4bc0 body=404 status=ok
// SIG undefined FUN_144cc4bc0(void)

ulonglong FUN_144cc4bc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong local_res8;
  
  uVar17 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar16 = uVar17 * 2;
  uVar12 = param_3;
  if (param_3 < uVar16) {
    uVar12 = uVar16;
  }
  if ((0x7ffffffe < uVar12) && (uVar12 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar12 * 0x120,&local_res8);
  puVar15 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar16 = (ulonglong)*(uint *)(param_1 + 1);
    puVar14 = puVar8;
    do {
      if (puVar14 != (undefined8 *)0x0) {
        lVar11 = 2;
        puVar6 = puVar15;
        puVar7 = puVar14;
        do {
          puVar10 = puVar7;
          puVar9 = puVar6;
          uVar5 = puVar9[1];
          *puVar10 = *puVar9;
          puVar10[1] = uVar5;
          uVar5 = puVar9[3];
          puVar10[2] = puVar9[2];
          puVar10[3] = uVar5;
          uVar5 = puVar9[5];
          puVar10[4] = puVar9[4];
          puVar10[5] = uVar5;
          uVar5 = puVar9[7];
          puVar10[6] = puVar9[6];
          puVar10[7] = uVar5;
          uVar5 = puVar9[9];
          puVar10[8] = puVar9[8];
          puVar10[9] = uVar5;
          uVar5 = puVar9[0xb];
          puVar10[10] = puVar9[10];
          puVar10[0xb] = uVar5;
          uVar5 = puVar9[0xd];
          puVar10[0xc] = puVar9[0xc];
          puVar10[0xd] = uVar5;
          uVar5 = puVar9[0xf];
          puVar10[0xe] = puVar9[0xe];
          puVar10[0xf] = uVar5;
          lVar11 = lVar11 + -1;
          puVar6 = puVar9 + 0x10;
          puVar7 = puVar10 + 0x10;
        } while (lVar11 != 0);
        uVar2 = *(undefined4 *)((longlong)puVar9 + 0x84);
        uVar3 = *(undefined4 *)(puVar9 + 0x11);
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x8c);
        *(undefined4 *)(puVar10 + 0x10) = *(undefined4 *)(puVar9 + 0x10);
        *(undefined4 *)((longlong)puVar10 + 0x84) = uVar2;
        *(undefined4 *)(puVar10 + 0x11) = uVar3;
        *(undefined4 *)((longlong)puVar10 + 0x8c) = uVar4;
        uVar5 = puVar9[0x13];
        puVar10[0x12] = puVar9[0x12];
        puVar10[0x13] = uVar5;
      }
      puVar14 = puVar14 + 0x24;
      puVar15 = puVar15 + 0x24;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar16 = uVar12 * 0x120 + 0x120;
  uVar13 = uVar12;
  if (uVar16 <= local_res8) {
    local_res8 = local_res8 - 0x120;
    uVar13 = uVar12 + 1;
    if (uVar16 <= local_res8) {
      uVar12 = local_res8 + uVar12 * -0x120;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar12;
      uVar16 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
      uVar13 = uVar13 + uVar12 / 0x120;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar16 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar17 * 0x120);
  }
  *param_1 = puVar8;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar13;
  return uVar16;
}



// FUNCTION 144cc4d60 FUN_144cc4d60 body=514 status=ok
// SIG undefined FUN_144cc4d60(void)

void FUN_144cc4d60(longlong param_1,int param_2,uint param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar24 = (ulonglong)param_2;
  uVar25 = uVar24;
  do {
    lVar16 = (longlong)(int)param_3;
    uVar23 = uVar24 & 0xffffffff;
    lVar17 = ((longlong)(int)(param_3 + (int)uVar24) >> 1) * 0x68;
    local_e0 = *(undefined8 *)(lVar17 + param_1);
    uStack_d8 = ((undefined8 *)(lVar17 + param_1))[1];
    puVar18 = (undefined8 *)(lVar17 + 0x10 + param_1);
    local_d0 = *puVar18;
    uStack_c8 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x20 + param_1);
    local_c0 = *puVar18;
    uStack_b8 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x30 + param_1);
    local_b0 = *puVar18;
    uStack_a8 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x40 + param_1);
    local_a0 = *puVar18;
    uStack_98 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x50 + param_1);
    local_90 = *puVar18;
    uStack_88 = puVar18[1];
    local_80 = *(undefined8 *)(lVar17 + 0x60 + param_1);
    uVar21 = param_3;
    do {
      while( true ) {
        uVar22 = (uint)uVar23;
        puVar19 = (undefined8 *)((longlong)(int)uVar22 * 0x68 + param_1);
        puVar18 = &local_e0;
        if (*param_4 != '\0') {
          puVar18 = puVar19;
          puVar19 = &local_e0;
        }
        cVar15 = FUN_144cb8700(puVar18,puVar19);
        if (cVar15 == '\0') break;
        uVar23 = (ulonglong)(uVar22 + 1);
        uVar25 = uVar25 + 1;
      }
      while( true ) {
        puVar20 = (undefined8 *)((longlong)(int)uVar21 * 0x68 + param_1);
        puVar18 = puVar20;
        puVar19 = &local_e0;
        if (*param_4 != '\0') {
          puVar18 = &local_e0;
          puVar19 = puVar20;
        }
        cVar15 = FUN_144cb8700(puVar18,puVar19);
        if (cVar15 == '\0') break;
        uVar21 = uVar21 - 1;
        lVar16 = lVar16 + -1;
      }
      if ((int)uVar21 < (int)uVar22) break;
      if (uVar21 != uVar22) {
        puVar18 = (undefined8 *)(lVar16 * 0x68 + param_1);
        uVar2 = *puVar18;
        uVar3 = puVar18[1];
        puVar19 = (undefined8 *)(uVar25 * 0x68 + param_1);
        uVar4 = puVar18[2];
        uVar5 = puVar18[3];
        uVar6 = puVar18[4];
        uVar7 = puVar18[5];
        uVar8 = puVar19[1];
        uVar9 = puVar18[6];
        uVar10 = puVar18[7];
        uVar11 = puVar18[8];
        uVar12 = puVar18[9];
        uVar13 = puVar18[10];
        uVar14 = puVar18[0xb];
        uVar1 = puVar18[0xc];
        *puVar18 = *puVar19;
        puVar18[1] = uVar8;
        uVar8 = puVar19[3];
        puVar18[2] = puVar19[2];
        puVar18[3] = uVar8;
        uVar8 = puVar19[5];
        puVar18[4] = puVar19[4];
        puVar18[5] = uVar8;
        uVar8 = puVar19[7];
        puVar18[6] = puVar19[6];
        puVar18[7] = uVar8;
        uVar8 = puVar19[9];
        puVar18[8] = puVar19[8];
        puVar18[9] = uVar8;
        uVar8 = puVar19[0xb];
        puVar18[10] = puVar19[10];
        puVar18[0xb] = uVar8;
        puVar18[0xc] = puVar19[0xc];
        *puVar19 = uVar2;
        puVar19[1] = uVar3;
        puVar19[2] = uVar4;
        puVar19[3] = uVar5;
        puVar19[4] = uVar6;
        puVar19[5] = uVar7;
        puVar19[6] = uVar9;
        puVar19[7] = uVar10;
        puVar19[8] = uVar11;
        puVar19[9] = uVar12;
        puVar19[10] = uVar13;
        puVar19[0xb] = uVar14;
        puVar19[0xc] = uVar1;
      }
      uVar21 = uVar21 - 1;
      lVar16 = lVar16 + -1;
      uVar22 = uVar22 + 1;
      uVar23 = (ulonglong)uVar22;
      uVar25 = uVar25 + 1;
    } while ((int)uVar22 <= (int)uVar21);
    if ((int)uVar24 < (int)uVar21) {
      FUN_144cc4d60(param_1,uVar24 & 0xffffffff,uVar21,param_4);
    }
    if ((int)param_3 <= (int)uVar22) {
      return;
    }
    uVar24 = (ulonglong)uVar22;
  } while( true );
}



// FUNCTION 144cc4f70 FUN_144cc4f70 body=514 status=ok
// SIG undefined FUN_144cc4f70(void)

void FUN_144cc4f70(longlong param_1,int param_2,uint param_3,char *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar24 = (ulonglong)param_2;
  uVar25 = uVar24;
  do {
    lVar16 = (longlong)(int)param_3;
    uVar23 = uVar24 & 0xffffffff;
    lVar17 = ((longlong)(int)(param_3 + (int)uVar24) >> 1) * 0x68;
    local_e0 = *(undefined8 *)(lVar17 + param_1);
    uStack_d8 = ((undefined8 *)(lVar17 + param_1))[1];
    puVar18 = (undefined8 *)(lVar17 + 0x10 + param_1);
    local_d0 = *puVar18;
    uStack_c8 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x20 + param_1);
    local_c0 = *puVar18;
    uStack_b8 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x30 + param_1);
    local_b0 = *puVar18;
    uStack_a8 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x40 + param_1);
    local_a0 = *puVar18;
    uStack_98 = puVar18[1];
    puVar18 = (undefined8 *)(lVar17 + 0x50 + param_1);
    local_90 = *puVar18;
    uStack_88 = puVar18[1];
    local_80 = *(undefined8 *)(lVar17 + 0x60 + param_1);
    uVar21 = param_3;
    do {
      while( true ) {
        uVar22 = (uint)uVar23;
        puVar19 = (undefined8 *)((longlong)(int)uVar22 * 0x68 + param_1);
        puVar18 = &local_e0;
        if (*param_4 != '\0') {
          puVar18 = puVar19;
          puVar19 = &local_e0;
        }
        cVar15 = FUN_144cb8700(puVar18,puVar19);
        if (cVar15 == '\0') break;
        uVar23 = (ulonglong)(uVar22 + 1);
        uVar25 = uVar25 + 1;
      }
      while( true ) {
        puVar20 = (undefined8 *)((longlong)(int)uVar21 * 0x68 + param_1);
        puVar18 = puVar20;
        puVar19 = &local_e0;
        if (*param_4 != '\0') {
          puVar18 = &local_e0;
          puVar19 = puVar20;
        }
        cVar15 = FUN_144cb8700(puVar18,puVar19);
        if (cVar15 == '\0') break;
        uVar21 = uVar21 - 1;
        lVar16 = lVar16 + -1;
      }
      if ((int)uVar21 < (int)uVar22) break;
      if (uVar21 != uVar22) {
        puVar18 = (undefined8 *)(lVar16 * 0x68 + param_1);
        uVar2 = *puVar18;
        uVar3 = puVar18[1];
        puVar19 = (undefined8 *)(uVar25 * 0x68 + param_1);
        uVar4 = puVar18[2];
        uVar5 = puVar18[3];
        uVar6 = puVar18[4];
        uVar7 = puVar18[5];
        uVar8 = puVar19[1];
        uVar9 = puVar18[6];
        uVar10 = puVar18[7];
        uVar11 = puVar18[8];
        uVar12 = puVar18[9];
        uVar13 = puVar18[10];
        uVar14 = puVar18[0xb];
        uVar1 = puVar18[0xc];
        *puVar18 = *puVar19;
        puVar18[1] = uVar8;
        uVar8 = puVar19[3];
        puVar18[2] = puVar19[2];
        puVar18[3] = uVar8;
        uVar8 = puVar19[5];
        puVar18[4] = puVar19[4];
        puVar18[5] = uVar8;
        uVar8 = puVar19[7];
        puVar18[6] = puVar19[6];
        puVar18[7] = uVar8;
        uVar8 = puVar19[9];
        puVar18[8] = puVar19[8];
        puVar18[9] = uVar8;
        uVar8 = puVar19[0xb];
        puVar18[10] = puVar19[10];
        puVar18[0xb] = uVar8;
        puVar18[0xc] = puVar19[0xc];
        *puVar19 = uVar2;
        puVar19[1] = uVar3;
        puVar19[2] = uVar4;
        puVar19[3] = uVar5;
        puVar19[4] = uVar6;
        puVar19[5] = uVar7;
        puVar19[6] = uVar9;
        puVar19[7] = uVar10;
        puVar19[8] = uVar11;
        puVar19[9] = uVar12;
        puVar19[10] = uVar13;
        puVar19[0xb] = uVar14;
        puVar19[0xc] = uVar1;
      }
      uVar21 = uVar21 - 1;
      lVar16 = lVar16 + -1;
      uVar22 = uVar22 + 1;
      uVar23 = (ulonglong)uVar22;
      uVar25 = uVar25 + 1;
    } while ((int)uVar22 <= (int)uVar21);
    if ((int)uVar24 < (int)uVar21) {
      FUN_144cc4f70(param_1,uVar24 & 0xffffffff,uVar21,param_4);
    }
    if ((int)param_3 <= (int)uVar22) {
      return;
    }
    uVar24 = (ulonglong)uVar22;
  } while( true );
}



// FUNCTION 144cc5180 FUN_144cc5180 body=1575 status=ok
// SIG undefined FUN_144cc5180(void)

void FUN_144cc5180(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  undefined8 *puVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  undefined8 *puVar35;
  float fVar36;
  float fVar37;
  int local_188;
  int local_180;
  longlong local_178;
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
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  int iStack_fc;
  undefined1 local_f8 [32];
  undefined1 local_d8 [160];
  
  iVar28 = (int)param_2[1];
  if (1 < iVar28) {
    iVar32 = 0;
    lVar33 = 0;
    local_180 = 0;
    local_178 = 0;
    do {
      iVar32 = iVar32 + 1;
      iVar30 = *(int *)(*param_2 + lVar33 * 4);
      lVar33 = lVar33 + 1;
      local_188 = iVar30;
      if (iVar32 < iVar28) {
        do {
          iVar28 = *(int *)(*param_2 + lVar33 * 4);
          lVar27 = (longlong)iVar28;
          if (*(int *)(*param_2 + -4 + lVar33 * 4) != iVar28) {
            lVar34 = (longlong)iVar30;
            puVar31 = (undefined8 *)(lVar27 * 0x128 + *(longlong *)(param_1 + 0x2028));
            puVar35 = (undefined8 *)(lVar34 * 0x128 + *(longlong *)(param_1 + 0x2028));
            fVar37 = *(float *)(puVar35 + 0x21) * *(float *)((longlong)puVar31 + 0x10c) -
                     *(float *)(puVar31 + 0x21) * *(float *)((longlong)puVar35 + 0x10c);
            fVar36 = (ABS(*(float *)(puVar31 + 0x21)) * ABS(*(float *)((longlong)puVar35 + 0x10c)) +
                     ABS(*(float *)((longlong)puVar31 + 0x10c)) * ABS(*(float *)(puVar35 + 0x21))) *
                     3.5762787e-07;
            if ((fVar36 < fVar37) || (fVar37 < -fVar36)) break;
            puVar25 = (ulonglong *)FUN_144cc5990(local_f8,puVar35 + 0x1c,puVar31 + 0x1a);
            puVar26 = (ulonglong *)FUN_144cc5990(local_d8,puVar35 + 0x1a,puVar31 + 0x1c);
            uVar29 = (ulonglong)(*puVar26 < *puVar25);
            uVar6 = puVar26[1] - puVar25[1];
            uVar4 = (ulonglong)(puVar26[1] < puVar25[1] || uVar6 < uVar29);
            uVar7 = puVar26[2] - puVar25[2];
            uVar5 = (ulonglong)(puVar26[2] < puVar25[2] || uVar7 < uVar4);
            if (((uVar7 != uVar4 || (uVar6 != uVar29 || *puVar26 != *puVar25)) ||
                puVar26[3] - puVar25[3] != uVar5) ||
                (longlong)((puVar26[3] - puVar25[3]) - uVar5) < 0) break;
            iVar23 = FUN_144cb8980(puVar35 + 0xd,puVar31 + 0xd);
            plVar2 = *(longlong **)(param_4 + 8);
            lVar3 = *plVar2;
            if (iVar23 < 1) {
              piVar1 = (int *)(lVar3 + lVar34 * 4);
              *piVar1 = *piVar1 + *(int *)(lVar3 + lVar27 * 4);
              piVar1 = (int *)(plVar2[2] + lVar34 * 4);
              *piVar1 = *piVar1 + *(int *)(plVar2[2] + lVar27 * 4);
              lVar3 = plVar2[4];
              iVar30 = *(int *)(lVar3 + lVar34 * 4);
              piVar1 = (int *)(lVar3 + lVar27 * 4);
              if ((iVar30 < 0) || (*piVar1 < iVar30)) {
                *(int *)(lVar3 + lVar34 * 4) = *piVar1;
              }
              *(uint *)(puVar31 + 0x24) = *(uint *)(puVar31 + 0x24) & 0xfffffffd;
              iVar30 = local_188;
              if (iVar23 != 0) {
                uVar11 = puVar35[0xe];
                uStack_100 = 0;
                *puVar31 = puVar35[0xd];
                puVar31[1] = uVar11;
                uVar11 = puVar35[0x10];
                puVar31[2] = puVar35[0xf];
                puVar31[3] = uVar11;
                uVar11 = puVar35[0x12];
                puVar31[4] = puVar35[0x11];
                puVar31[5] = uVar11;
                uVar11 = puVar35[0x14];
                puVar31[6] = puVar35[0x13];
                puVar31[7] = uVar11;
                uVar11 = puVar35[0x16];
                puVar31[8] = puVar35[0x15];
                puVar31[9] = uVar11;
                uVar11 = puVar35[0x18];
                puVar31[10] = puVar35[0x17];
                puVar31[0xb] = uVar11;
                puVar31[0xc] = puVar35[0x19];
                local_168 = puVar35[0xd];
                uStack_160 = puVar35[0xe];
                local_158 = puVar35[0xf];
                uStack_150 = puVar35[0x10];
                local_148 = puVar35[0x11];
                uStack_140 = puVar35[0x12];
                local_138 = puVar35[0x13];
                uStack_130 = puVar35[0x14];
                local_128 = puVar35[0x15];
                uStack_120 = puVar35[0x16];
                local_118 = *(undefined4 *)(puVar35 + 0x17);
                uStack_114 = *(undefined4 *)((longlong)puVar35 + 0xbc);
                uStack_110 = *(undefined4 *)(puVar35 + 0x18);
                uStack_10c = *(undefined4 *)((longlong)puVar35 + 0xc4);
                local_108 = puVar35[0x19];
                iStack_fc = iVar28;
                FUN_144cbbed0(param_1 + 8,&local_168);
              }
            }
            else {
              piVar1 = (int *)(lVar3 + lVar27 * 4);
              *piVar1 = *piVar1 + *(int *)(lVar3 + lVar34 * 4);
              piVar1 = (int *)(plVar2[2] + lVar27 * 4);
              *piVar1 = *piVar1 + *(int *)(plVar2[2] + lVar34 * 4);
              lVar3 = plVar2[4];
              iVar30 = *(int *)(lVar3 + lVar27 * 4);
              piVar1 = (int *)(lVar3 + lVar34 * 4);
              if ((iVar30 < 0) || (*piVar1 < iVar30)) {
                *(int *)(lVar3 + lVar27 * 4) = *piVar1;
              }
              *(uint *)(puVar35 + 0x24) = *(uint *)(puVar35 + 0x24) & 0xfffffffd;
              uVar11 = puVar31[0xe];
              uStack_100 = 0;
              *puVar35 = puVar31[0xd];
              puVar35[1] = uVar11;
              iStack_fc = local_188;
              uVar11 = puVar31[0x10];
              puVar35[2] = puVar31[0xf];
              puVar35[3] = uVar11;
              uVar11 = puVar31[0x12];
              puVar35[4] = puVar31[0x11];
              puVar35[5] = uVar11;
              uVar11 = puVar31[0x14];
              puVar35[6] = puVar31[0x13];
              puVar35[7] = uVar11;
              uVar11 = puVar31[0x16];
              puVar35[8] = puVar31[0x15];
              puVar35[9] = uVar11;
              uVar8 = *(undefined4 *)((longlong)puVar31 + 0xbc);
              uVar9 = *(undefined4 *)(puVar31 + 0x18);
              uVar10 = *(undefined4 *)((longlong)puVar31 + 0xc4);
              *(undefined4 *)(puVar35 + 10) = *(undefined4 *)(puVar31 + 0x17);
              *(undefined4 *)((longlong)puVar35 + 0x54) = uVar8;
              *(undefined4 *)(puVar35 + 0xb) = uVar9;
              *(undefined4 *)((longlong)puVar35 + 0x5c) = uVar10;
              puVar35[0xc] = puVar31[0x19];
              local_108 = puVar31[0x19];
              uVar11 = puVar31[0xd];
              uVar12 = puVar31[0xe];
              uVar13 = puVar31[0xf];
              uVar14 = puVar31[0x10];
              uVar15 = puVar31[0x11];
              uVar16 = puVar31[0x12];
              uVar17 = puVar31[0x13];
              uVar18 = puVar31[0x14];
              uVar19 = puVar31[0x15];
              uVar20 = puVar31[0x16];
              uVar21 = puVar31[0x17];
              uVar22 = puVar31[0x18];
              uVar29 = (ulonglong)*(int *)(param_1 + 0x2024);
              if (*(int *)(param_1 + 0x2024) == -1) {
                uVar29 = (ulonglong)*(uint *)(param_1 + 0x18);
                iVar30 = *(uint *)(param_1 + 0x18) + 1;
                if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar30) {
                  FUN_144cc6fc0(param_1 + 0x10,&PTR_vftable_14c6e47c0,(longlong)iVar30);
                }
                *(int *)(param_1 + 0x18) = iVar30;
              }
              else {
                *(undefined4 *)(param_1 + 0x2024) =
                     *(undefined4 *)(uVar29 * 0x80 + 0x78 + *(longlong *)(param_1 + 0x10));
              }
              iVar24 = (int)uVar29;
              puVar31 = (undefined8 *)((longlong)iVar24 * 0x80 + *(longlong *)(param_1 + 0x10));
              *puVar31 = uVar11;
              puVar31[1] = uVar12;
              puVar31[0xe] = 0xffffffffffffffff;
              puVar31[2] = uVar13;
              puVar31[3] = uVar14;
              *(undefined4 *)(puVar31 + 0xf) = 0xffffffff;
              puVar31[4] = uVar15;
              puVar31[5] = uVar16;
              *(undefined1 *)((longlong)puVar31 + 0x7c) = 0;
              puVar31[6] = uVar17;
              puVar31[7] = uVar18;
              puVar31[8] = uVar19;
              puVar31[9] = uVar20;
              puVar31[10] = uVar21;
              puVar31[0xb] = uVar22;
              *(undefined4 *)(puVar31 + 0xc) = (undefined4)local_108;
              *(undefined4 *)((longlong)puVar31 + 100) = local_108._4_4_;
              *(undefined4 *)(puVar31 + 0xd) = uStack_100;
              *(int *)((longlong)puVar31 + 0x6c) = iStack_fc;
              iVar23 = *(int *)(param_1 + 0x2020);
              iVar30 = iVar28;
              local_188 = iVar28;
              if (iVar23 != -1) {
                if (iVar24 == -1) {
                  *(int *)(param_1 + 0x2020) = iVar23;
                  goto LAB_144cc54e4;
                }
                iVar24 = FUN_144cbc000(param_1 + 8,iVar23,uVar29 & 0xffffffff);
              }
              *(int *)(param_1 + 0x2020) = iVar24;
            }
          }
LAB_144cc54e4:
          iVar32 = iVar32 + 1;
          lVar33 = lVar33 + 1;
        } while (iVar32 < (int)param_2[1]);
      }
      local_180 = local_180 + 1;
      *(int *)(local_178 + *param_2) = iVar30;
      local_178 = local_178 + 4;
      iVar28 = (int)param_2[1];
    } while (iVar32 < iVar28);
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < local_180) {
      FUN_140163394(param_2,&PTR_vftable_14c6e47c0,(longlong)local_180);
    }
    if (((int)param_2[1] < local_180) || (local_180 < (int)param_2[1])) {
      *(int *)(param_2 + 1) = local_180;
    }
  }
  return;
}



// FUNCTION 144cc57b0 FUN_144cc57b0 body=468 status=ok
// SIG undefined FUN_144cc57b0(void)

ulonglong * FUN_144cc57b0(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

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
  param_1[3] = param_1[3] & 0x7ffffffffff;
  return param_1;
}



// FUNCTION 144cc5990 FUN_144cc5990 body=299 status=ok
// SIG undefined FUN_144cc5990(void)

longlong * FUN_144cc5990(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = param_2[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  uVar15 = SUB168(auVar7 * auVar11,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar3;
  uVar19 = uVar3 * uVar2 + uVar15;
  uVar4 = param_3[1];
  uVar20 = SUB168(auVar8 * auVar12,8) + (ulonglong)CARRY8(uVar3 * uVar2,uVar15);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar4;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  uVar16 = SUB168(auVar9 * auVar13,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar4;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar3;
  uVar5 = uVar3 * uVar4 + uVar16;
  uVar15 = (ulonglong)CARRY8(uVar1 * uVar4,uVar19);
  uVar6 = uVar5 + uVar20;
  uVar18 = uVar6 + uVar15;
  lVar17 = SUB168(auVar10 * auVar14,8) + (ulonglong)CARRY8(uVar3 * uVar4,uVar16) +
           (ulonglong)(CARRY8(uVar5,uVar20) || CARRY8(uVar6,uVar15));
  if ((longlong)uVar3 < 0) {
    bVar21 = uVar18 < uVar2;
    uVar18 = uVar18 - uVar2;
    lVar17 = (lVar17 - uVar4) - (ulonglong)bVar21;
  }
  if ((longlong)uVar4 < 0) {
    bVar21 = uVar18 < *param_2;
    uVar18 = uVar18 - *param_2;
    lVar17 = (lVar17 - uVar3) - (ulonglong)bVar21;
  }
  *param_1 = uVar1 * uVar2;
  param_1[1] = uVar1 * uVar4 + uVar19;
  param_1[2] = uVar18;
  param_1[3] = lVar17;
  return param_1;
}



// FUNCTION 144cc5ac0 FUN_144cc5ac0 body=399 status=ok
// SIG undefined FUN_144cc5ac0(void)

void FUN_144cc5ac0(ulonglong *param_1,ulonglong *param_2,longlong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong local_68 [4];
  longlong local_48;
  
  uVar1 = param_1[4];
  uVar11 = (longlong)uVar1 >> 0x3f;
  iVar10 = 4;
  local_68[0] = (*param_1 ^ uVar11) - uVar11;
  uVar3 = (ulonglong)((*param_1 ^ uVar11) < uVar11);
  uVar9 = (param_1[1] ^ uVar11) - uVar11;
  local_68[1] = uVar9 - uVar3;
  uVar3 = (ulonglong)((param_1[1] ^ uVar11) < uVar11 || uVar9 < uVar3);
  uVar9 = (param_1[2] ^ uVar11) - uVar11;
  local_68[2] = uVar9 - uVar3;
  uVar9 = (ulonglong)((param_1[2] ^ uVar11) < uVar11 || uVar9 < uVar3);
  uVar4 = (param_1[3] ^ uVar11) - uVar11;
  local_68[3] = uVar4 - uVar9;
  lVar8 = 4;
  plVar7 = param_3 + 4;
  uVar3 = *param_2;
  local_48 = ((uVar1 ^ uVar11) - uVar11) -
             (ulonglong)((param_1[3] ^ uVar11) < uVar11 || uVar4 < uVar9);
  do {
    if (*(longlong *)(((longlong)local_68 - (longlong)param_3) + (longlong)plVar7) != 0) break;
    *plVar7 = 0;
    iVar10 = iVar10 + -1;
    plVar7 = plVar7 + -1;
    lVar8 = lVar8 + -1;
  } while (0 < lVar8);
  uVar9 = local_68[iVar10] % uVar3;
  param_3[iVar10] = local_68[iVar10] / uVar3;
  lVar8 = (longlong)(iVar10 + -1);
  if (-1 < iVar10 + -1) {
    plVar7 = param_3 + lVar8;
    do {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar3;
      auVar6._8_8_ = uVar9;
      auVar6._0_8_ = *(undefined8 *)((longlong)plVar7 + ((longlong)local_68 - (longlong)param_3));
      uVar9 = SUB168(auVar6 % auVar5,0);
      lVar8 = lVar8 + -1;
      *plVar7 = SUB168(auVar6 / auVar5,0);
      plVar7 = plVar7 + -1;
    } while (-1 < lVar8);
  }
  *param_4 = uVar9;
  if ((longlong)uVar1 < 0) {
    lVar8 = *param_3;
    uVar9 = -param_3[1];
    uVar1 = (ulonglong)(param_3[1] != 0 || uVar9 < (lVar8 != 0));
    uVar4 = -param_3[2];
    uVar3 = (ulonglong)(param_3[2] != 0 || uVar4 < uVar1);
    lVar2 = param_3[3];
    uVar11 = -param_3[3];
    *param_3 = -*param_3;
    param_3[1] = uVar9 - (lVar8 != 0);
    param_3[2] = uVar4 - uVar1;
    param_3[3] = uVar11 - uVar3;
    param_3[4] = -(ulonglong)(lVar2 != 0 || uVar11 < uVar3) - param_3[4];
    *param_4 = -*param_4;
  }
  return;
}



// FUNCTION 144cc5c50 FUN_144cc5c50 body=262 status=ok
// SIG undefined FUN_144cc5c50(void)

ulonglong FUN_144cc5c50(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x48,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x48);
  uVar3 = uVar4 * 0x48 + 0x48;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x48;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x48;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x48;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x48);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144cc5d60 FUN_144cc5d60 body=628 status=ok
// SIG undefined FUN_144cc5d60(void)

void FUN_144cc5d60(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  longlong local_b8;
  longlong local_b0;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  uVar9 = (uint)param_2;
  puVar12 = (uint *)*param_3;
  bVar5 = false;
  uVar8 = param_2 & 0xffffffff;
  uVar6 = 0xffffffff;
  puVar1 = puVar12 + *(int *)(param_3 + 1);
  lVar3 = param_6[10];
  uVar11 = param_2;
  if (puVar12 != puVar1) {
    do {
      uVar9 = *puVar12;
      if (!bVar5) {
        bVar5 = true;
        uVar6 = uVar9;
      }
      iVar14 = (int)uVar8;
      if (iVar14 != -1) {
        *(uint *)(lVar3 + 4 + (longlong)iVar14 * 0x10) = uVar9;
      }
      puVar12 = puVar12 + 1;
      *(int *)(lVar3 + (longlong)(int)uVar9 * 0x10) = iVar14;
      uVar8 = (ulonglong)uVar9;
    } while (puVar12 != puVar1);
    uVar11 = param_2 & 0xffffffff;
  }
  if (uVar9 != 0xffffffff) {
    *(int *)(lVar3 + 4 + (longlong)(int)uVar9 * 0x10) = param_4;
  }
  if (param_4 != -1) {
    *(uint *)(lVar3 + (longlong)param_4 * 0x10) = uVar9;
  }
  lVar3 = param_6[10];
  iVar14 = -1;
  if ((int)uVar11 != -1) {
    iVar14 = *(int *)(lVar3 + 8 + (longlong)(int)uVar11 * 0x10);
  }
  puVar12 = (uint *)*param_3;
  uVar8 = uVar11 & 0xffffffff;
  puVar1 = puVar12 + *(int *)(param_3 + 1);
  if (puVar12 != puVar1) {
    do {
      uVar9 = *puVar12;
      lVar13 = (longlong)(int)uVar9;
      lVar4 = param_6[6];
      iVar10 = *(int *)(*param_6 + lVar13 * 4);
      if ((int)uVar8 == -1) {
        *(int *)(lVar4 + lVar13 * 4) = iVar10;
        *(undefined4 *)(param_6[8] + lVar13 * 4) = *(undefined4 *)(param_6[2] + lVar13 * 4);
      }
      else {
        lVar2 = (longlong)(int)uVar8 * 4;
        *(int *)(lVar4 + lVar13 * 4) = *(int *)(lVar2 + lVar4) + iVar10;
        *(int *)(param_6[8] + lVar13 * 4) =
             *(int *)(param_6[2] + lVar13 * 4) + *(int *)(param_6[8] + lVar2);
      }
      if ((*(int *)(param_6[6] + lVar13 * 4) < 1) || (*(int *)(param_6[8] + lVar13 * 4) != 0)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      iVar10 = 0;
      if (!bVar5) {
        iVar10 = -1;
      }
      *(int *)(lVar3 + 8 + lVar13 * 0x10) = iVar10;
      if ((iVar14 != -1) || (bVar5)) {
        uVar7 = *(undefined4 *)(param_6[4] + lVar13 * 4);
      }
      else {
        uVar7 = 0xffffffff;
      }
      puVar12 = puVar12 + 1;
      *(undefined4 *)(lVar3 + 0xc + lVar13 * 0x10) = uVar7;
      uVar8 = (ulonglong)uVar9;
      iVar14 = iVar10;
    } while (puVar12 != puVar1);
    uVar11 = param_2 & 0xffffffff;
  }
  local_b8 = param_6[10];
  local_b0 = (longlong)(int)param_6[0xb] * 0x10 + local_b8;
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
  local_58 = *(undefined4 *)(param_1 + 10);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_50 = *(undefined4 *)(param_1 + 0xb);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_48 = param_1[0xc];
  FUN_144cc6c80(&local_a8,uVar11,uVar6,param_4,param_4,&local_b8,param_7);
  return;
}



// FUNCTION 144cc5fe0 FUN_144cc5fe0 body=613 status=ok
// SIG undefined FUN_144cc5fe0(void)

void FUN_144cc5fe0(undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  longlong local_b8;
  longlong local_b0;
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
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  bVar6 = false;
  piVar3 = (int *)param_3[1];
  iVar7 = -1;
  lVar4 = param_6[10];
  iVar11 = param_2;
  for (piVar12 = (int *)*param_3; piVar12 != piVar3; piVar12 = piVar12 + 1) {
    iVar1 = *piVar12;
    if (!bVar6) {
      bVar6 = true;
      iVar7 = iVar1;
    }
    if (iVar11 != -1) {
      *(int *)(lVar4 + 4 + (longlong)iVar11 * 0x10) = iVar1;
    }
    *(int *)(lVar4 + (longlong)iVar1 * 0x10) = iVar11;
    iVar11 = iVar1;
  }
  if (iVar11 != -1) {
    *(int *)(lVar4 + 4 + (longlong)iVar11 * 0x10) = param_4;
  }
  if (param_4 != -1) {
    *(int *)(lVar4 + (longlong)param_4 * 0x10) = iVar11;
  }
  lVar4 = param_6[10];
  iVar11 = -1;
  if (param_2 != -1) {
    iVar11 = *(int *)(lVar4 + 8 + (longlong)param_2 * 0x10);
  }
  piVar3 = (int *)param_3[1];
  iVar1 = param_2;
  for (piVar12 = (int *)*param_3; piVar12 != piVar3; piVar12 = piVar12 + 1) {
    iVar2 = *piVar12;
    lVar10 = (longlong)iVar2;
    lVar5 = param_6[6];
    iVar9 = *(int *)(*param_6 + lVar10 * 4);
    if (iVar1 == -1) {
      *(int *)(lVar5 + lVar10 * 4) = iVar9;
      *(undefined4 *)(param_6[8] + lVar10 * 4) = *(undefined4 *)(param_6[2] + lVar10 * 4);
    }
    else {
      *(int *)(lVar5 + lVar10 * 4) = *(int *)((longlong)iVar1 * 4 + lVar5) + iVar9;
      *(int *)(param_6[8] + lVar10 * 4) =
           *(int *)(param_6[2] + lVar10 * 4) + *(int *)(param_6[8] + (longlong)iVar1 * 4);
    }
    if ((*(int *)(param_6[6] + lVar10 * 4) < 1) || (*(int *)(param_6[8] + lVar10 * 4) != 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    iVar9 = 0;
    if (!bVar6) {
      iVar9 = -1;
    }
    *(int *)(lVar4 + 8 + lVar10 * 0x10) = iVar9;
    if ((iVar11 != -1) || (bVar6)) {
      uVar8 = *(undefined4 *)(param_6[4] + lVar10 * 4);
    }
    else {
      uVar8 = 0xffffffff;
    }
    *(undefined4 *)(lVar4 + 0xc + lVar10 * 0x10) = uVar8;
    iVar1 = iVar2;
    iVar11 = iVar9;
  }
  local_b8 = param_6[10];
  local_b0 = (longlong)(int)param_6[0xb] * 0x10 + local_b8;
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
  local_58 = *(undefined4 *)(param_1 + 10);
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_50 = *(undefined4 *)(param_1 + 0xb);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_48 = param_1[0xc];
  FUN_144cc6c80(&local_a8,param_2,iVar7,param_4,param_4,&local_b8,param_7);
  return;
}



// FUNCTION 144cc6250 FUN_144cc6250 body=244 status=ok
// SIG undefined FUN_144cc6250(void)

ulonglong FUN_144cc6250(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar4 = param_3;
  if (param_3 < uVar3) {
    uVar4 = uVar3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar4 * 0x68;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x68);
  uVar3 = uVar4 * 0x68 + 0x68;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x68;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x68;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0x4ec4ec4ec4ec4ec5) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x68;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar2;
  return uVar3;
}



// FUNCTION 144cc6350 FUN_144cc6350 body=526 status=ok
// SIG undefined FUN_144cc6350(void)

ulonglong FUN_144cc6350(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong local_res8;
  undefined8 *local_res10;
  
  uVar15 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar15 * 2;
  uVar10 = param_3;
  if (param_3 < uVar9) {
    uVar10 = uVar9;
  }
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,uVar10 * 0xd10,&local_res8);
  uVar2 = *(uint *)(param_1 + 1);
  local_res10 = (undefined8 *)*param_1;
  uVar9 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    puVar11 = local_res10 + 2;
    uVar7 = (ulonglong)uVar2;
    puVar13 = (undefined4 *)(lVar4 + 0xc);
    puVar14 = local_res10;
    do {
      puVar1 = (undefined8 *)(puVar13 + -3);
      if (puVar1 != (undefined8 *)0x0) {
        puVar13[-1] = 0;
        puVar5 = (undefined8 *)(puVar13 + 1);
        *puVar1 = puVar5;
        *puVar13 = 0x80000020;
        if (puVar14 != puVar1) {
          *puVar13 = 0x80000000;
          *puVar1 = 0;
          puVar13[-1] = *(undefined4 *)(puVar11 + -1);
          *puVar13 = *(undefined4 *)((longlong)puVar11 + -4);
          if ((undefined8 *)*puVar14 == puVar11) {
            *puVar1 = puVar5;
            if (puVar5 != puVar11) {
              lVar6 = 0x1a0;
              lVar12 = (longlong)puVar11 - (longlong)puVar5;
              do {
                *puVar5 = *(undefined8 *)(lVar12 + (longlong)puVar5);
                puVar5 = puVar5 + 1;
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
          }
          else {
            *puVar1 = (undefined8 *)*puVar14;
            *puVar14 = puVar11;
            *(undefined4 *)((longlong)puVar11 + -4) = 0x80000020;
          }
          *(undefined4 *)(puVar11 + -1) = 0;
        }
      }
      puVar13 = puVar13 + 0x344;
      puVar14 = puVar14 + 0x1a2;
      puVar11 = puVar11 + 0x1a2;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar8 = (uint *)((longlong)local_res10 + 0xc);
    do {
      puVar8[-1] = 0;
      if ((-1 < (int)*puVar8) && (*(longlong *)(puVar8 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar8 + -3),
                   (ulonglong)(*puVar8 & 0x7fffffff) * 0x68);
      }
      *puVar8 = 0x80000000;
      puVar8[-3] = 0;
      puVar8[-2] = 0;
      puVar8 = puVar8 + 0x344;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar10 * 0xd10 + 0xd10;
  uVar7 = uVar10;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0xd10;
    uVar7 = uVar10 + 1;
    if (uVar9 <= local_res8) {
      uVar10 = local_res8 + uVar10 * -0xd10;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar10;
      uVar9 = SUB168(ZEXT816(0x9cc8e160c3fb19b9) * auVar3,0);
      uVar7 = uVar7 + uVar10 / 0xd10;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar9 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar15 * 0xd10);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar9;
}



// FUNCTION 144cc6560 FUN_144cc6560 body=269 status=ok
// SIG undefined FUN_144cc6560(void)

void FUN_144cc6560(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144cc6670 FUN_144cc6670 body=266 status=ok
// SIG undefined FUN_144cc6670(void)

void FUN_144cc6670(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 144cc6780 FUN_144cc6780 body=267 status=ok
// SIG undefined FUN_144cc6780(void)

ulonglong FUN_144cc6780(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x128,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) * 0x128);
  uVar3 = uVar4 * 0x128 + 0x128;
  uVar5 = uVar4;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x128;
    uVar5 = uVar4 + 1;
    if (uVar3 <= local_res8) {
      uVar4 = local_res8 + uVar4 * -0x128;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4;
      uVar3 = SUB168(ZEXT816(0xdd67c8a60dd67c8b) * auVar1,0);
      uVar5 = uVar5 + uVar4 / 0x128;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar6 * 0x128);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  return uVar3;
}



// FUNCTION 144cc6890 FUN_144cc6890 body=223 status=ok
// SIG undefined FUN_144cc6890(void)

void FUN_144cc6890(ulonglong *param_1,ulonglong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  uVar12 = SUB168(auVar1 * auVar5,8);
  *param_3 = *param_1 * param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1[1];
  uVar13 = SUB168(auVar2 * auVar6,8);
  uVar15 = param_1[1] * param_2;
  param_3[1] = uVar15 + uVar12;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_1[2];
  uVar14 = SUB168(auVar3 * auVar7,8);
  uVar9 = param_1[2] * param_2;
  uVar12 = (ulonglong)CARRY8(uVar15,uVar12);
  uVar15 = uVar9 + uVar13;
  param_3[2] = uVar15 + uVar12;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_1[3];
  uVar10 = param_1[3] * param_2;
  uVar12 = (ulonglong)(CARRY8(uVar9,uVar13) || CARRY8(uVar15,uVar12));
  uVar15 = uVar10 + uVar14;
  param_3[3] = uVar15 + uVar12;
  lVar11 = (ulonglong)(CARRY8(uVar10,uVar14) || CARRY8(uVar15,uVar12)) + SUB168(auVar4 * auVar8,8);
  param_3[4] = lVar11;
  if ((longlong)param_1[3] < 0) {
    param_3[4] = lVar11 - param_2;
  }
  if ((longlong)param_2 < 0) {
    uVar12 = param_3[1];
    uVar15 = *param_1;
    param_3[1] = uVar12 - *param_1;
    uVar9 = param_3[2];
    uVar10 = (ulonglong)(uVar12 < uVar15);
    uVar12 = param_1[1];
    uVar13 = uVar9 - param_1[1];
    param_3[2] = uVar13 - uVar10;
    uVar15 = param_3[3];
    uVar9 = (ulonglong)(uVar9 < uVar12 || uVar13 < uVar10);
    uVar12 = param_1[2];
    uVar10 = uVar15 - param_1[2];
    param_3[3] = uVar10 - uVar9;
    param_3[4] = (param_3[4] - param_1[3]) - (ulonglong)(uVar15 < uVar12 || uVar10 < uVar9);
  }
  return;
}



// FUNCTION 144cc6970 FUN_144cc6970 body=335 status=ok
// SIG undefined FUN_144cc6970(void)

void FUN_144cc6970(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
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
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_2[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar2;
  uVar23 = SUB168(auVar7 * auVar15,8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar3;
  uVar24 = SUB168(auVar8 * auVar16,8);
  uVar31 = uVar3 * uVar1 + uVar23;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar4;
  uVar25 = SUB168(auVar9 * auVar17,8);
  uVar23 = (ulonglong)CARRY8(uVar3 * uVar1,uVar23);
  uVar26 = uVar4 * uVar1 + uVar24;
  uVar32 = uVar26 + uVar23;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar5;
  uVar23 = (ulonglong)(CARRY8(uVar4 * uVar1,uVar24) || CARRY8(uVar26,uVar23));
  uVar26 = uVar5 * uVar1 + uVar25;
  uVar30 = uVar26 + uVar23;
  uVar29 = SUB168(auVar10 * auVar18,8) +
           (ulonglong)(CARRY8(uVar5 * uVar1,uVar25) || CARRY8(uVar26,uVar23));
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar6;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar2;
  uVar26 = SUB168(auVar11 * auVar19,8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar6;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  uVar24 = SUB168(auVar12 * auVar20,8);
  uVar23 = uVar3 * uVar6 + uVar26;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar6;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar4;
  uVar27 = SUB168(auVar13 * auVar21,8);
  uVar3 = (ulonglong)CARRY8(uVar3 * uVar6,uVar26);
  uVar26 = uVar4 * uVar6 + uVar24;
  uVar33 = uVar26 + uVar3;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar6;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  uVar3 = (ulonglong)(CARRY8(uVar4 * uVar6,uVar24) || CARRY8(uVar26,uVar3));
  uVar26 = uVar5 * uVar6 + uVar27;
  uVar28 = uVar26 + uVar3;
  uVar4 = (ulonglong)CARRY8(uVar2 * uVar6,uVar31);
  uVar24 = uVar23 + uVar32;
  uVar23 = (ulonglong)(CARRY8(uVar23,uVar32) || CARRY8(uVar24,uVar4));
  uVar25 = uVar33 + uVar30;
  *param_3 = uVar2 * uVar1;
  param_3[1] = uVar2 * uVar6 + uVar31;
  uVar1 = (ulonglong)(CARRY8(uVar33,uVar30) || CARRY8(uVar25,uVar23));
  uVar2 = uVar28 + uVar29;
  param_3[2] = uVar24 + uVar4;
  param_3[3] = uVar25 + uVar23;
  param_3[4] = uVar2 + uVar1;
  param_3[5] = SUB168(auVar14 * auVar22,8) +
               (ulonglong)(CARRY8(uVar5 * uVar6,uVar27) || CARRY8(uVar26,uVar3)) +
               (ulonglong)(CARRY8(uVar28,uVar29) || CARRY8(uVar2,uVar1));
  return;
}



// FUNCTION 144cc6ac0 FUN_144cc6ac0 body=448 status=ok
// SIG undefined FUN_144cc6ac0(void)

void FUN_144cc6ac0(longlong param_1,uint param_2,int param_3,ulonglong *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  uint local_res10;
  int local_68;
  ulonglong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar6 = (ulonglong)(int)param_2;
  uVar4 = *param_4;
  uVar8 = uVar6;
  local_res10 = param_2;
  do {
    local_48 = (ulonglong)param_3;
    uVar10 = uVar6 & 0xffffffff;
    uVar1 = *(uint *)(param_1 + ((longlong)((int)uVar6 + param_3) >> 1) * 4);
    lVar7 = uVar4 + 0xd0 + (longlong)(int)uVar1 * 0x128;
    local_68 = param_3;
    do {
      while( true ) {
        uVar9 = *(uint *)(param_1 + uVar8 * 4);
        iVar5 = FUN_144cb92c0((longlong)(int)uVar9 * 0x128 + 0xd0 + uVar4,lVar7);
        if (iVar5 == 0) {
          bVar11 = uVar9 < uVar1;
        }
        else {
          bVar11 = 0 < iVar5;
        }
        uVar9 = (uint)uVar10;
        uVar6 = local_48;
        if (!bVar11) break;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar8 = uVar8 + 1;
      }
      while( true ) {
        uVar2 = *(uint *)(param_1 + uVar6 * 4);
        iVar5 = FUN_144cb92c0(lVar7,(longlong)(int)uVar2 * 0x128 + 0xd0 + uVar4);
        if (iVar5 == 0) {
          bVar11 = uVar1 < uVar2;
        }
        else {
          bVar11 = 0 < iVar5;
        }
        if (!bVar11) break;
        local_68 = local_68 + -1;
        uVar6 = uVar6 - 1;
      }
      if ((longlong)uVar6 < (longlong)uVar8) break;
      if (uVar6 != uVar8) {
        uVar3 = *(undefined4 *)(param_1 + uVar6 * 4);
        *(undefined4 *)(param_1 + uVar6 * 4) = *(undefined4 *)(param_1 + uVar8 * 4);
        *(undefined4 *)(param_1 + uVar8 * 4) = uVar3;
      }
      local_68 = local_68 + -1;
      local_48 = uVar6 - 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)local_48);
    if ((int)local_res10 < local_68) {
      local_48 = *param_4;
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_144cc6ac0(param_1,local_res10,local_68,&local_48);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar6 = (ulonglong)uVar9;
    local_res10 = uVar9;
  } while( true );
}



// FUNCTION 144cc6c80 FUN_144cc6c80 body=324 status=ok
// SIG undefined FUN_144cc6c80(void)

void FUN_144cc6c80(undefined8 *param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5
                  ,longlong *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar7 = (ulonglong)param_2;
  uVar6 = 0xffffffff;
  local_98 = *param_6;
  lStack_90 = param_6[1];
  if (param_2 == -1) {
    local_88 = 0xffffffff;
    local_80 = param_5;
    if (param_3 == -1) {
      local_80 = 0xffffffff;
    }
  }
  else {
    lVar4 = *param_6;
    if (param_3 == -1) {
      param_5 = 0xffffffff;
    }
    local_88 = *(undefined4 *)(lVar4 + 8 + uVar7 * 0x10);
    lVar5 = lVar4 + uVar7 * 0x10;
    iVar1 = *(int *)(lVar5 + 8);
    local_80 = param_5;
    if (iVar1 == -1) goto LAB_144cc6d38;
    iVar2 = *(int *)(lVar5 + 0xc);
    while (iVar2 == -1) {
      uVar3 = *(uint *)(lVar4 + (longlong)(int)uVar7 * 0x10);
      if ((uVar3 == 0xffffffff) || (*(int *)(lVar4 + 8 + (longlong)(int)uVar3 * 0x10) != iVar1))
      break;
      uVar7 = (ulonglong)uVar3;
      iVar2 = *(int *)(lVar4 + 0xc + (longlong)(int)uVar3 * 0x10);
    }
  }
  uVar6 = uVar7 & 0xffffffff;
LAB_144cc6d38:
  local_78 = *param_1;
  uStack_70 = param_1[1];
  local_68 = param_1[2];
  uStack_60 = param_1[3];
  local_58 = param_1[4];
  uStack_50 = param_1[5];
  local_48 = param_1[6];
  uStack_40 = param_1[7];
  local_38 = param_1[8];
  uStack_30 = param_1[9];
  local_28 = *(undefined4 *)(param_1 + 10);
  uStack_24 = *(undefined4 *)((longlong)param_1 + 0x54);
  uStack_20 = *(undefined4 *)(param_1 + 0xb);
  uStack_1c = *(undefined4 *)((longlong)param_1 + 0x5c);
  local_18 = param_1[0xc];
  local_84 = param_3;
  FUN_144cc75b0(&local_78,uVar6,local_88,&local_98,*param_7,param_7[1]);
  return;
}



// FUNCTION 144cc6dd0 FUN_144cc6dd0 body=317 status=ok
// SIG undefined FUN_144cc6dd0(void)

void FUN_144cc6dd0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar8 * 0x80;
  puVar5 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
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
        uVar4 = puVar7[5];
        puVar6[4] = puVar7[4];
        puVar6[5] = uVar4;
        uVar4 = puVar7[7];
        puVar6[6] = puVar7[6];
        puVar6[7] = uVar4;
        uVar4 = puVar7[9];
        puVar6[8] = puVar7[8];
        puVar6[9] = uVar4;
        uVar4 = puVar7[0xb];
        puVar6[10] = puVar7[10];
        puVar6[0xb] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar7 + 100);
        uVar2 = *(undefined4 *)(puVar7 + 0xd);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x6c);
        *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
        *(undefined4 *)((longlong)puVar6 + 100) = uVar1;
        *(undefined4 *)(puVar6 + 0xd) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x6c) = uVar3;
        uVar4 = puVar7[0xf];
        puVar6[0xe] = puVar7[0xe];
        puVar6[0xf] = uVar4;
      }
      puVar6 = puVar6 + 0x10;
      puVar7 = puVar7 + 0x10;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x80 + 0x80;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x80;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x80 >> 7);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144cc6f10 FUN_144cc6f10 body=168 status=ok
// SIG undefined FUN_144cc6f10(void)

undefined8 * FUN_144cc6f10(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  longlong lStack_10;
  
  FUN_147e5f211(param_2,param_3,&local_38);
  if ((longlong)param_2[1] < 0) {
    bVar3 = local_28 < *param_3;
    local_28 = local_28 - *param_3;
    uVar1 = (ulonglong)bVar3;
    bVar3 = uStack_20 < param_3[1];
    uVar2 = uStack_20 - param_3[1];
    uStack_20 = uVar2 - uVar1;
    uVar1 = (ulonglong)(bVar3 || uVar2 < uVar1);
    bVar3 = local_18 < param_3[2];
    uVar2 = local_18 - param_3[2];
    local_18 = uVar2 - uVar1;
    lStack_10 = (lStack_10 - param_3[3]) - (ulonglong)(bVar3 || uVar2 < uVar1);
  }
  if ((longlong)param_3[3] < 0) {
    bVar3 = local_18 < *param_2;
    local_18 = local_18 - *param_2;
    lStack_10 = (lStack_10 - param_2[1]) - (ulonglong)bVar3;
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
  param_1[2] = local_28;
  param_1[3] = uStack_20;
  param_1[4] = local_18;
  param_1[5] = lStack_10;
  return param_1;
}



// FUNCTION 144cc6fc0 FUN_144cc6fc0 body=325 status=ok
// SIG undefined FUN_144cc6fc0(void)

void FUN_144cc6fc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar11 = uVar10 * 2;
  uVar8 = param_3;
  if (param_3 < uVar11) {
    uVar8 = uVar11;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x80,&local_res8);
  uVar11 = (ulonglong)*(uint *)(param_1 + 1);
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
        uVar4 = puVar7[5];
        puVar6[4] = puVar7[4];
        puVar6[5] = uVar4;
        uVar4 = puVar7[7];
        puVar6[6] = puVar7[6];
        puVar6[7] = uVar4;
        uVar4 = puVar7[9];
        puVar6[8] = puVar7[8];
        puVar6[9] = uVar4;
        uVar4 = puVar7[0xb];
        puVar6[10] = puVar7[10];
        puVar6[0xb] = uVar4;
        uVar1 = *(undefined4 *)((longlong)puVar7 + 100);
        uVar2 = *(undefined4 *)(puVar7 + 0xd);
        uVar3 = *(undefined4 *)((longlong)puVar7 + 0x6c);
        *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
        *(undefined4 *)((longlong)puVar6 + 100) = uVar1;
        *(undefined4 *)(puVar6 + 0xd) = uVar2;
        *(undefined4 *)((longlong)puVar6 + 0x6c) = uVar3;
        uVar4 = puVar7[0xf];
        puVar6[0xe] = puVar7[0xe];
        puVar6[0xf] = uVar4;
      }
      puVar6 = puVar6 + 0x10;
      puVar7 = puVar7 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  uVar11 = uVar8 * 0x80 + 0x80;
  uVar9 = uVar8;
  if (uVar11 <= local_res8) {
    local_res8 = local_res8 - 0x80;
    uVar9 = uVar8 + 1;
    if (uVar11 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar8 * -0x80 >> 7);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 7);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  *param_1 = puVar5;
  return;
}



// FUNCTION 144cc7110 FUN_144cc7110 body=294 status=ok
// SIG undefined FUN_144cc7110(void)

void FUN_144cc7110(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong auStack_50 [7];
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar4 = param_1[1];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar3;
  uVar17 = SUB168(auVar9 * auVar13,8);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar4;
  auStack_50[2] = uVar4 * uVar2 + uVar17;
  auStack_50[3] = SUB168(auVar10 * auVar14,8) + (ulonglong)CARRY8(uVar4 * uVar2,uVar17);
  lVar19 = 1;
  iVar20 = 1;
  do {
    uVar17 = param_2[lVar19];
    lVar1 = lVar19 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar17;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar3;
    uVar18 = SUB168(auVar11 * auVar15,8);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar17;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar4;
    uVar7 = uVar4 * uVar17 + uVar18;
    uVar5 = auStack_50[lVar1];
    auStack_50[(longlong)iVar20 + 1] = uVar3 * uVar17 + auStack_50[lVar1];
    uVar6 = (ulonglong)CARRY8(uVar3 * uVar17,uVar5);
    uVar5 = auStack_50[lVar19 + 2];
    uVar8 = uVar7 + auStack_50[lVar19 + 2];
    auStack_50[(longlong)(iVar20 + 1) + 1] = uVar8 + uVar6;
    auStack_50[(longlong)(iVar20 + 2) + 1] =
         SUB168(auVar12 * auVar16,8) + (ulonglong)CARRY8(uVar4 * uVar17,uVar18) +
         (ulonglong)(CARRY8(uVar7,uVar5) || CARRY8(uVar8,uVar6));
    lVar19 = lVar1;
    iVar20 = iVar20 + 1;
  } while (lVar1 < 3);
  *param_3 = uVar3 * uVar2;
  param_3[1] = auStack_50[2];
  param_3[2] = auStack_50[3];
  param_3[3] = auStack_50[4];
  param_3[4] = auStack_50[5];
  return;
}



// FUNCTION 144cc7240 FUN_144cc7240 body=638 status=ok
// SIG undefined FUN_144cc7240(void)

ulonglong FUN_144cc7240(undefined8 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uStack_34;
  
  plVar5 = *(longlong **)(param_3 + 0x18);
  *(int *)(param_3 + 0x28) = (int)plVar5[1];
  iVar18 = (int)plVar5[1] + 1;
  if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar18) {
    FUN_144cc6250(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  puVar16 = (undefined8 *)((longlong)(int)plVar5[1] * 0x68 + *plVar5);
  if (puVar16 != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    *puVar16 = *param_1;
    puVar16[1] = uVar1;
    uVar1 = param_1[4];
    uVar11 = param_1[5];
    puVar16[2] = uVar9;
    puVar16[3] = uVar10;
    uVar9 = param_1[6];
    uVar10 = param_1[7];
    puVar16[4] = uVar1;
    puVar16[5] = uVar11;
    uVar1 = param_1[8];
    uVar11 = param_1[9];
    puVar16[6] = uVar9;
    puVar16[7] = uVar10;
    uVar9 = param_1[10];
    uVar10 = param_1[0xb];
    puVar16[8] = uVar1;
    puVar16[9] = uVar11;
    uVar1 = param_1[0xc];
    puVar16[10] = uVar9;
    puVar16[0xb] = uVar10;
    puVar16[0xc] = uVar1;
  }
  *(int *)(plVar5 + 1) = iVar18;
  uVar19 = 0xffffffff;
  lVar6 = *(longlong *)(param_3 + 0x18);
  *(undefined1 *)(param_3 + 0x2c) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0xffffffffffffffff;
  param_2 = (longlong *)*param_2;
  lVar7 = *(longlong *)(param_3 + 8);
  uStack_34 = *(uint *)((longlong)param_2 + 0x14);
  uVar2 = *(uint *)(param_2 + 3);
  iVar18 = (int)param_2[2];
  lVar12 = *param_2;
  if (uStack_34 != uVar2) {
    while( true ) {
      lVar14 = (longlong)(int)uStack_34;
      iVar3 = *(int *)(lVar12 + 8 + lVar14 * 0x10);
      if (iVar18 != iVar3) break;
      if (((iVar18 != -1) && (*(int *)(lVar12 + 0xc + lVar14 * 0x10) != -1)) ||
         (uStack_34 = *(uint *)(lVar12 + 4 + lVar14 * 0x10), iVar18 = iVar3, uStack_34 == uVar2))
      break;
    }
  }
  uVar15 = (ulonglong)uStack_34;
  while (uStack_34 != uVar2) {
    lVar14 = (longlong)(int)uStack_34;
    iVar18 = *(int *)(lVar7 + lVar14 * 8);
    if (iVar18 != -1) {
      if (uVar19 == 0xffffffff) {
        *(int *)(param_3 + 0x20) = iVar18;
      }
      else {
        lVar8 = *(longlong *)(lVar6 + 0x10);
        lVar17 = (longlong)iVar18 * 0x20;
        *(int *)((longlong)(int)uVar19 * 0x20 + 8 + lVar8) = iVar18;
        *(uint *)(lVar8 + 4 + lVar17) = uVar19;
        *(undefined4 *)(lVar8 + lVar17) = *(undefined4 *)(param_3 + 0x28);
        *(undefined1 *)(param_3 + 0x2c) = 1;
        puVar16 = (undefined8 *)param_4[1];
        lVar8 = *(longlong *)(*param_4 + 0x10);
        lVar17 = (longlong)*(int *)((longlong)*(int *)(lVar8 + 4 + lVar17) * 0x20 + 0x10 + lVar8);
        if ((*(byte *)(lVar17 * 0x20 + 0x1c + lVar8) & 2) != 0) {
          uVar13 = FUN_144cc82a0(lVar17,iVar18);
          FUN_144cc7d40(uVar13,*puVar16);
        }
        uVar15 = FUN_144cc7d40(iVar18,*puVar16);
        if ((char)uVar15 == '\0') {
          return uVar15 & 0xffffffffffffff00;
        }
        uVar19 = 0xffffffff;
      }
      *(undefined4 *)(lVar7 + lVar14 * 8) = 0xffffffff;
    }
    uVar4 = *(uint *)(lVar7 + 4 + lVar14 * 8);
    uVar15 = (ulonglong)uVar4;
    if (uVar4 != 0xffffffff) {
      *(undefined4 *)(lVar7 + 4 + lVar14 * 8) = 0xffffffff;
      uVar19 = uVar4;
    }
    uStack_34 = *(uint *)(lVar12 + 4 + lVar14 * 0x10);
    iVar18 = *(int *)(lVar12 + 8 + lVar14 * 0x10);
    while( true ) {
      if (uStack_34 == uVar2) goto LAB_144cc7481;
      lVar14 = (longlong)(int)uStack_34;
      uVar15 = lVar14 * 2;
      if ((iVar18 != *(int *)(lVar12 + 8 + lVar14 * 0x10)) ||
         ((iVar18 != -1 && (*(int *)(lVar12 + 0xc + lVar14 * 0x10) != -1)))) break;
      uStack_34 = *(uint *)(lVar12 + 4 + lVar14 * 0x10);
    }
  }
LAB_144cc7481:
  *(uint *)(param_3 + 0x24) = uVar19;
  return CONCAT71((int7)(uVar15 >> 8),1);
}



// FUNCTION 144cc74c0 FUN_144cc74c0 body=225 status=ok
// SIG undefined FUN_144cc74c0(void)

void FUN_144cc74c0(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_144cc7a40();
  if ((longlong)param_1[6] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x38);
    uVar2 = *param_2;
    *(ulonglong *)(param_3 + 0x38) = uVar1 - *param_2;
    uVar3 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_2[1];
    uVar5 = uVar3 - param_2[1];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x48);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[2];
    uVar5 = uVar2 - param_2[2];
    *(ulonglong *)(param_3 + 0x48) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x50);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[3];
    uVar5 = uVar3 - param_2[3];
    *(ulonglong *)(param_3 + 0x50) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x58);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[4];
    uVar5 = uVar2 - param_2[4];
    *(ulonglong *)(param_3 + 0x58) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x60);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_2[5];
    uVar4 = uVar3 - param_2[5];
    *(ulonglong *)(param_3 + 0x60) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x68) =
         (*(longlong *)(param_3 + 0x68) - param_2[6]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  }
  if ((longlong)param_2[6] < 0) {
    uVar1 = *(ulonglong *)(param_3 + 0x38);
    uVar2 = *param_1;
    *(ulonglong *)(param_3 + 0x38) = uVar1 - *param_1;
    uVar3 = *(ulonglong *)(param_3 + 0x40);
    uVar4 = (ulonglong)(uVar1 < uVar2);
    uVar1 = param_1[1];
    uVar5 = uVar3 - param_1[1];
    *(ulonglong *)(param_3 + 0x40) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x48);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[2];
    uVar5 = uVar2 - param_1[2];
    *(ulonglong *)(param_3 + 0x48) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x50);
    uVar4 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[3];
    uVar5 = uVar3 - param_1[3];
    *(ulonglong *)(param_3 + 0x50) = uVar5 - uVar4;
    uVar2 = *(ulonglong *)(param_3 + 0x58);
    uVar4 = (ulonglong)(uVar3 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[4];
    uVar5 = uVar2 - param_1[4];
    *(ulonglong *)(param_3 + 0x58) = uVar5 - uVar4;
    uVar3 = *(ulonglong *)(param_3 + 0x60);
    uVar2 = (ulonglong)(uVar2 < uVar1 || uVar5 < uVar4);
    uVar1 = param_1[5];
    uVar4 = uVar3 - param_1[5];
    *(ulonglong *)(param_3 + 0x60) = uVar4 - uVar2;
    *(ulonglong *)(param_3 + 0x68) =
         (*(longlong *)(param_3 + 0x68) - param_1[6]) - (ulonglong)(uVar3 < uVar1 || uVar4 < uVar2);
  }
  return;
}



// FUNCTION 144cc75b0 FUN_144cc75b0 body=1166 status=ok
// SIG undefined FUN_144cc75b0(void)

ulonglong FUN_144cc75b0(undefined8 param_1,int param_2,int param_3,longlong *param_4,
                       longlong param_5,longlong *param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  int local_res18 [2];
  longlong *local_res20;
  
  lVar8 = param_5;
  uVar18 = 0xffffffff;
  lVar19 = *param_4;
  lVar16 = *param_4;
  uVar2 = *(uint *)((longlong)param_4 + 0x14);
  uVar3 = *(uint *)(param_4 + 3);
  lVar4 = *(longlong *)(param_5 + 8);
  plVar20 = (longlong *)(*(longlong *)(param_5 + 0x18) + 0x10);
  param_5._0_4_ = -1;
  iVar17 = (int)param_4[2];
  while (uVar12 = (ulonglong)uVar2, local_res20 = plVar20, uVar2 != uVar3) {
    lVar14 = (longlong)(int)uVar2;
    iVar9 = *(int *)(lVar16 + 8 + lVar14 * 0x10);
    local_res18[0] = param_3;
    if (iVar17 != iVar9) goto LAB_144cc7670;
    if ((iVar17 != -1) && (*(int *)(lVar16 + 0xc + lVar14 * 0x10) != -1)) {
      if (uVar2 != uVar3) goto LAB_144cc7670;
      break;
    }
    iVar17 = iVar9;
    uVar2 = *(uint *)(lVar16 + 4 + lVar14 * 0x10);
  }
  goto LAB_144cc794a;
LAB_144cc7670:
  do {
    lVar16 = (longlong)(int)uVar12 * 0x10 + lVar19;
    piVar1 = (int *)(lVar4 + (longlong)(int)uVar12 * 8);
    uVar10 = *(undefined4 *)(lVar16 + 0xc);
    iVar17 = *(int *)(lVar16 + 8);
    iVar9 = (int)param_5;
    if (local_res18[0] != -1) {
      iVar9 = FUN_144cbbd80(*(undefined8 *)(lVar8 + 0x18),1);
      lVar14 = (longlong)iVar9 * 0x20 + *local_res20;
      *piVar1 = iVar9;
      *(undefined4 *)(lVar14 + 0x14) = uVar10;
      *(int *)(lVar14 + 0x18) = local_res18[0];
      iVar13 = (int)uVar18;
      plVar20 = local_res20;
      if (iVar13 == -1) {
        iVar13 = *(int *)(lVar8 + 0x20);
        if (iVar13 == -1) goto LAB_144cc7782;
        bVar7 = false;
        *(undefined4 *)(lVar8 + 0x20) = 0xffffffff;
      }
      else {
        bVar7 = true;
        uVar18 = 0xffffffff;
      }
      lVar5 = *local_res20;
      *(int *)(lVar14 + 8) = iVar13;
      lVar14 = (longlong)iVar13 * 0x20;
      *(int *)(lVar5 + 4 + lVar14) = iVar9;
      *(undefined4 *)(lVar5 + lVar14) = *(undefined4 *)(lVar8 + 0x28);
      *(undefined1 *)(lVar8 + 0x2c) = 1;
      if (bVar7) {
        *(int *)(*(longlong *)(*param_6 + 0x10) + 0x10 + lVar14) = iVar13;
        iVar9 = (int)param_5;
      }
      else {
        local_res18[0] = iVar13;
        uVar12 = FUN_144cc8380(local_res18,*(undefined4 *)(lVar4 + 4 + (longlong)param_2 * 8),
                               *param_6);
        plVar20 = local_res20;
        iVar9 = (int)param_5;
        if ((char)uVar12 == '\0') goto LAB_144cc79f6;
      }
    }
LAB_144cc7782:
    param_5._0_4_ = iVar9;
    if (iVar17 != -1) {
      iVar9 = FUN_144cbbd80(*(undefined8 *)(lVar8 + 0x18),1);
      uVar18 = (ulonglong)iVar9;
      puVar15 = (undefined4 *)(uVar18 * 0x20 + *local_res20);
      piVar1[1] = iVar9;
      *puVar15 = *(undefined4 *)(lVar8 + 0x28);
      puVar15[5] = uVar10;
      puVar15[6] = iVar17;
      *(undefined1 *)(lVar8 + 0x2c) = 1;
      plVar20 = local_res20;
      if (*piVar1 != -1) {
        *(int *)((longlong)*piVar1 * 0x20 + 0xc + *local_res20) = iVar9;
        puVar15[3] = *piVar1;
      }
    }
    uVar2 = *(uint *)(lVar16 + 4);
    while( true ) {
      uVar12 = (ulonglong)uVar2;
      local_res18[0] = iVar17;
      if (uVar2 == uVar3) goto LAB_144cc7821;
      lVar14 = (longlong)(int)uVar2;
      if (*(int *)(lVar16 + 8) != *(int *)(lVar19 + 8 + lVar14 * 0x10)) goto LAB_144cc7670;
      if ((*(int *)(lVar16 + 8) != -1) && (*(int *)(lVar19 + 0xc + lVar14 * 0x10) != -1)) break;
      uVar2 = *(uint *)(lVar19 + 4 + lVar14 * 0x10);
    }
  } while (uVar2 != uVar3);
LAB_144cc7821:
  iVar17 = (int)uVar18;
  if ((int)param_5 != -1) {
    lVar16 = *plVar20;
    lVar19 = (longlong)iVar17 * 0x20;
    *(int *)((longlong)(int)param_5 * 0x20 + 8 + lVar16) = iVar17;
    *(int *)(lVar16 + 4 + lVar19) = (int)param_5;
    *(undefined4 *)(lVar16 + lVar19) = *(undefined4 *)(lVar8 + 0x28);
    *(undefined1 *)(lVar8 + 0x2c) = 1;
    iVar9 = *(int *)(lVar4 + 4 + (longlong)param_2 * 8);
    lVar4 = *param_6;
    iVar13 = *(int *)(lVar4 + 0x18) + 2;
    if ((int)(*(uint *)(lVar4 + 0x1c) & 0x7fffffff) < iVar13) {
      FUN_144cc8530(lVar4 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar13);
    }
    lVar16 = (longlong)iVar9 * 0x20 + *(longlong *)(lVar4 + 0x10);
    iVar9 = FUN_144cc82a0(uVar18 & 0xffffffff,*(undefined4 *)(lVar16 + 0x10),lVar4);
    *(int *)(lVar16 + 0x10) = iVar9 + 1;
    uVar12 = *(ulonglong *)(lVar4 + 0x10);
    *(int *)(uVar12 + 0x10 + lVar19) = iVar17;
    goto LAB_144cc7a0e;
  }
  if (iVar17 != -1) {
    iVar9 = *(int *)(lVar8 + 0x24);
    lVar4 = *plVar20;
    lVar14 = (longlong)iVar17 * 0x20;
    *(int *)((longlong)iVar9 * 0x20 + 8 + lVar4) = iVar17;
    *(int *)(lVar4 + 4 + lVar14) = iVar9;
    lVar4 = *param_6;
    puVar6 = (undefined8 *)param_6[1];
    lVar16 = *(longlong *)(lVar4 + 0x10);
    lVar19 = (longlong)*(int *)((longlong)*(int *)(lVar14 + 4 + lVar16) * 0x20 + 0x10 + lVar16);
    if ((*(byte *)(lVar19 * 0x20 + 0x1c + lVar16) & 2) != 0) {
      uVar10 = FUN_144cc82a0(lVar19,uVar18 & 0xffffffff,lVar4);
      uVar12 = FUN_144cc7d40(uVar10,*puVar6);
      if ((char)uVar12 == '\0') goto LAB_144cc79f6;
    }
    uVar12 = *(ulonglong *)(lVar4 + 0x10);
    *(int *)(uVar12 + 0x10 + lVar14) = iVar17;
    goto LAB_144cc7a0e;
  }
LAB_144cc794a:
  local_res18[0] = *(int *)(lVar8 + 0x20);
  if (local_res18[0] != -1) {
    lVar16 = *plVar20;
    iVar17 = *(int *)(lVar8 + 0x24);
    lVar19 = (longlong)local_res18[0] * 0x20;
    *(int *)((longlong)iVar17 * 0x20 + 8 + lVar16) = local_res18[0];
    *(int *)(lVar16 + 4 + lVar19) = iVar17;
    *(undefined4 *)(lVar16 + lVar19) = *(undefined4 *)(lVar8 + 0x28);
    *(undefined1 *)(lVar8 + 0x2c) = 1;
    uVar10 = *(undefined4 *)(lVar4 + 4 + (longlong)param_2 * 8);
    lVar4 = *param_6;
    puVar6 = (undefined8 *)param_6[1];
    lVar16 = *(longlong *)(lVar4 + 0x10);
    lVar19 = (longlong)*(int *)((longlong)*(int *)(lVar16 + 4 + lVar19) * 0x20 + 0x10 + lVar16);
    if ((*(byte *)(lVar19 * 0x20 + 0x1c + lVar16) & 2) != 0) {
      uVar11 = FUN_144cc82a0(lVar19,local_res18[0],lVar4);
      uVar12 = FUN_144cc7d40(uVar11,*puVar6);
      if ((char)uVar12 == '\0') goto LAB_144cc79f6;
    }
    uVar12 = FUN_144cc8380(local_res18,uVar10,lVar4,puVar6);
    if ((char)uVar12 == '\0') {
LAB_144cc79f6:
      return uVar12 & 0xffffffffffffff00;
    }
    uVar12 = (longlong)local_res18[0] * 0x20 + *(longlong *)(lVar4 + 0x10);
    *(uint *)(uVar12 + 0x1c) = *(uint *)(uVar12 + 0x1c) | 2;
  }
LAB_144cc7a0e:
  if (*(char *)(lVar8 + 0x2c) == '\0') {
    uVar12 = *(ulonglong *)(lVar8 + 0x18);
    *(int *)(uVar12 + 8) = *(int *)(uVar12 + 8) + -1;
  }
  *(undefined4 *)(lVar8 + 0x28) = 0xffffffff;
  return CONCAT71((int7)(uVar12 >> 8),1);
}



// FUNCTION 144cc7a40 FUN_144cc7a40 body=763 status=ok
// SIG undefined FUN_144cc7a40(void)

void FUN_144cc7a40(ulonglong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
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
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  int iVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong local_res8;
  ulonglong local_f8 [12];
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar2 = *param_2;
  uVar3 = *param_1;
  uVar40 = param_1[1];
  uVar4 = param_1[3];
  uVar45 = param_1[2];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar3;
  uVar33 = SUB168(auVar5 * auVar19,8);
  local_68 = uVar3;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar40;
  uVar34 = SUB168(auVar6 * auVar20,8);
  local_60 = uVar40;
  local_58 = uVar45;
  local_f8[1] = uVar40 * uVar2 + uVar33;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar45;
  uVar35 = SUB168(auVar7 * auVar21,8);
  uVar33 = (ulonglong)CARRY8(uVar40 * uVar2,uVar33);
  uVar37 = uVar45 * uVar2 + uVar34;
  local_f8[2] = uVar37 + uVar33;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar2;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  uVar36 = SUB168(auVar8 * auVar22,8);
  local_88 = param_1[4];
  uVar33 = (ulonglong)(CARRY8(uVar45 * uVar2,uVar34) || CARRY8(uVar37,uVar33));
  uVar37 = uVar4 * uVar2 + uVar35;
  local_f8[3] = uVar37 + uVar33;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar2;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = local_88;
  uVar34 = SUB168(auVar9 * auVar23,8);
  local_80 = param_1[5];
  uVar33 = (ulonglong)(CARRY8(uVar4 * uVar2,uVar35) || CARRY8(uVar37,uVar33));
  uVar37 = local_88 * uVar2 + uVar36;
  local_f8[4] = uVar37 + uVar33;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar2;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = local_80;
  uVar35 = SUB168(auVar10 * auVar24,8);
  local_78 = param_1[6];
  uVar33 = (ulonglong)(CARRY8(local_88 * uVar2,uVar36) || CARRY8(uVar37,uVar33));
  uVar37 = local_80 * uVar2 + uVar34;
  local_f8[5] = uVar37 + uVar33;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar2;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = local_78;
  local_res8 = 1;
  uVar33 = (ulonglong)(CARRY8(local_80 * uVar2,uVar34) || CARRY8(uVar37,uVar33));
  uVar37 = local_78 * uVar2 + uVar35;
  local_f8[6] = uVar37 + uVar33;
  local_f8[7] = SUB168(auVar11 * auVar25,8) +
                (ulonglong)(CARRY8(local_78 * uVar2,uVar35) || CARRY8(uVar37,uVar33));
  iVar42 = 1;
  do {
    uVar33 = param_2[local_res8];
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar33;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = local_68;
    uVar37 = SUB168(auVar12 * auVar26,8);
    uVar36 = local_68 * uVar33;
    local_70 = uVar36;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar33;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar40;
    uVar35 = SUB168(auVar13 * auVar27,8);
    uVar34 = uVar40 * uVar33 + uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    uVar38 = SUB168(auVar14 * auVar28,8);
    uVar40 = (ulonglong)CARRY8(uVar40 * uVar33,uVar37);
    uVar37 = uVar45 * uVar33 + uVar35;
    uVar47 = uVar37 + uVar40;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar33;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar4;
    uVar39 = SUB168(auVar15 * auVar29,8);
    uVar40 = (ulonglong)(CARRY8(uVar45 * uVar33,uVar35) || CARRY8(uVar37,uVar40));
    uVar45 = uVar4 * uVar33 + uVar38;
    uVar46 = uVar45 + uVar40;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar33;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = local_88;
    uVar37 = SUB168(auVar16 * auVar30,8);
    uVar40 = (ulonglong)(CARRY8(uVar4 * uVar33,uVar38) || CARRY8(uVar45,uVar40));
    uVar45 = local_88 * uVar33 + uVar39;
    uVar41 = uVar45 + uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar33;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = local_80;
    uVar38 = SUB168(auVar17 * auVar31,8);
    uVar40 = (ulonglong)(CARRY8(local_88 * uVar33,uVar39) || CARRY8(uVar45,uVar40));
    uVar45 = local_80 * uVar33 + uVar37;
    uVar39 = uVar45 + uVar40;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = local_78;
    uVar43 = local_78 * uVar33;
    uVar37 = (ulonglong)(CARRY8(local_80 * uVar33,uVar37) || CARRY8(uVar45,uVar40));
    uVar35 = uVar43 + uVar38;
    uVar44 = uVar35 + uVar37;
    uVar40 = local_f8[local_res8];
    lVar1 = local_res8 + 1;
    local_f8[iVar42] = uVar36 + local_f8[local_res8];
    uVar45 = (ulonglong)CARRY8(uVar36,uVar40);
    uVar40 = local_f8[lVar1];
    uVar33 = uVar34 + local_f8[lVar1];
    local_f8[iVar42 + 1] = uVar33 + uVar45;
    uVar45 = (ulonglong)(CARRY8(uVar34,uVar40) || CARRY8(uVar33,uVar45));
    uVar40 = local_f8[local_res8 + 2];
    uVar33 = uVar47 + local_f8[local_res8 + 2];
    local_f8[iVar42 + 2] = uVar33 + uVar45;
    uVar45 = (ulonglong)(CARRY8(uVar47,uVar40) || CARRY8(uVar33,uVar45));
    uVar40 = local_f8[local_res8 + 3];
    uVar33 = uVar46 + local_f8[local_res8 + 3];
    local_f8[iVar42 + 3] = uVar33 + uVar45;
    uVar34 = (ulonglong)(CARRY8(uVar46,uVar40) || CARRY8(uVar33,uVar45));
    uVar33 = local_f8[local_res8 + 4];
    uVar36 = uVar41 + local_f8[local_res8 + 4];
    local_f8[iVar42 + 4] = uVar36 + uVar34;
    uVar45 = local_58;
    uVar40 = local_60;
    uVar34 = (ulonglong)(CARRY8(uVar41,uVar33) || CARRY8(uVar36,uVar34));
    uVar33 = local_f8[local_res8 + 5];
    uVar36 = uVar39 + local_f8[local_res8 + 5];
    local_f8[iVar42 + 5] = uVar36 + uVar34;
    uVar34 = (ulonglong)(CARRY8(uVar39,uVar33) || CARRY8(uVar36,uVar34));
    uVar33 = local_f8[local_res8 + 6];
    uVar36 = uVar44 + local_f8[local_res8 + 6];
    local_f8[iVar42 + 6] = uVar36 + uVar34;
    local_f8[iVar42 + 7] =
         SUB168(auVar18 * auVar32,8) + (ulonglong)(CARRY8(uVar43,uVar38) || CARRY8(uVar35,uVar37)) +
         (ulonglong)(CARRY8(uVar44,uVar33) || CARRY8(uVar36,uVar34));
    local_res8 = lVar1;
    iVar42 = iVar42 + 1;
  } while (lVar1 < 7);
  *param_3 = uVar3 * uVar2;
  param_3[1] = local_f8[1];
  param_3[2] = local_f8[2];
  param_3[3] = local_f8[3];
  param_3[4] = local_f8[4];
  param_3[5] = local_f8[5];
  param_3[6] = local_f8[6];
  param_3[7] = local_f8[7];
  param_3[8] = local_f8[8];
  param_3[9] = local_f8[9];
  param_3[10] = local_f8[10];
  param_3[0xb] = local_f8[0xb];
  param_3[0xc] = local_98;
  param_3[0xd] = lStack_90;
  return;
}



// FUNCTION 144cc7d40 FUN_144cc7d40 body=1361 status=ok
// SIG undefined FUN_144cc7d40(void)

undefined8 FUN_144cc7d40(int param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool local_res8;
  uint local_res18;
  uint local_res20;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
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
  
  uVar19 = (ulonglong)param_1;
  lVar15 = param_2[2];
  uVar9 = *(uint *)(uVar19 * 0x20 + 4 + lVar15);
  uVar12 = *(uint *)(uVar19 * 0x20 + 8 + lVar15);
  puVar13 = (uint *)((longlong)(int)uVar9 * 0x20 + lVar15);
  puVar11 = (uint *)((longlong)(int)uVar12 * 0x20 + lVar15);
  uVar3 = *puVar11;
  uVar2 = *puVar13;
  if (uVar2 < uVar3) {
    local_res18 = puVar11[2];
    local_res20 = uVar9;
  }
  else {
    local_res20 = puVar13[1];
    local_res18 = uVar12;
  }
  local_res8 = uVar2 < uVar3;
  uVar7 = uVar12;
  if (uVar3 <= uVar2) {
    uVar7 = uVar9;
  }
  if (uVar9 != uVar12) {
LAB_144cc7df0:
    uVar3 = local_res20;
    uVar12 = local_res18;
    lVar15 = param_2[2];
    uVar2 = *(uint *)((longlong)(int)local_res18 * 0x20 + lVar15);
    uVar9 = *(uint *)((longlong)(int)local_res20 * 0x20 + lVar15);
    if (uVar9 < uVar2) {
      local_res18 = *(uint *)((longlong)(int)local_res18 * 0x20 + 8 + lVar15);
    }
    else {
      local_res20 = *(uint *)((longlong)(int)local_res20 * 0x20 + 4 + lVar15);
    }
    bVar4 = uVar9 < uVar2;
    uVar10 = uVar12;
    if (uVar2 <= uVar9) {
      uVar10 = uVar3;
    }
    if (uVar3 != uVar12) {
      if (bVar4 == local_res8) {
        lVar16 = *param_2;
        piVar18 = (int *)((longlong)(int)uVar10 * 0x20 + lVar15);
        lVar14 = (longlong)*piVar18 * 0x68;
        local_b8 = *(undefined8 *)(lVar14 + lVar16);
        uStack_b0 = ((undefined8 *)(lVar14 + lVar16))[1];
        puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar16);
        local_a8 = *puVar1;
        uStack_a0 = puVar1[1];
        puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar16);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar16);
        local_88 = *puVar1;
        uStack_80 = puVar1[1];
        puVar1 = (undefined8 *)(lVar14 + 0x40 + lVar16);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        puVar1 = (undefined8 *)(lVar14 + 0x50 + lVar16);
        local_68 = *puVar1;
        uStack_60 = puVar1[1];
        local_58 = *(undefined8 *)(lVar14 + 0x60 + lVar16);
        if (uVar9 < uVar2) {
          uVar20 = (ulonglong)*(int *)((longlong)piVar18[1] * 0x20 + 4 + lVar15);
          lVar14 = (longlong)*(int *)((longlong)piVar18[1] * 0x20 + lVar15) * 0x68;
          piVar18 = (int *)(uVar20 * 0x20 + lVar15);
          local_128 = *(undefined8 *)(lVar14 + lVar16);
          uStack_120 = ((undefined8 *)(lVar14 + lVar16))[1];
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar16);
          local_118 = *puVar1;
          uStack_110 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar16);
          local_108 = *puVar1;
          uStack_100 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar16);
          local_f8 = *puVar1;
          uStack_f0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x40 + lVar16);
          local_e8 = *puVar1;
          uStack_e0 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x50 + lVar16);
          local_d8 = *puVar1;
          uStack_d0 = puVar1[1];
          local_c8 = *(undefined8 *)(lVar14 + 0x60 + lVar16);
          lVar15 = (longlong)*piVar18 * 0x68;
          local_198 = *(undefined8 *)(lVar15 + lVar16);
          uStack_190 = ((undefined8 *)(lVar15 + lVar16))[1];
          puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar16);
          local_188 = *puVar1;
          uStack_180 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x20 + lVar16);
          local_178 = *puVar1;
          uStack_170 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x30 + lVar16);
          local_168 = *puVar1;
          uStack_160 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x40 + lVar16);
          local_158 = *puVar1;
          uStack_150 = puVar1[1];
          puVar1 = (undefined8 *)(lVar15 + 0x50 + lVar16);
          local_148 = *puVar1;
          uStack_140 = puVar1[1];
          local_138 = *(undefined8 *)(lVar15 + 0x60 + lVar16);
          iVar8 = FUN_144cb8b90(&local_b8,&local_128,&local_198);
          while (uVar7 = uVar10, iVar8 < 0) {
            uVar2 = piVar18[1];
            uVar9 = FUN_144cc82a0(uVar10,uVar20 & 0xffffffff,param_2);
            if ((int)uVar20 == (int)uVar19) {
              uVar19 = (ulonglong)uVar9;
              break;
            }
            local_128 = local_198;
            uStack_120 = uStack_190;
            uVar20 = (ulonglong)uVar2;
            local_108 = local_178;
            uStack_100 = uStack_170;
            local_118 = local_188;
            uStack_110 = uStack_180;
            local_e8 = local_158;
            uStack_e0 = uStack_150;
            local_f8 = local_168;
            uStack_f0 = uStack_160;
            local_c8 = local_138;
            local_d8 = local_148;
            uStack_d0 = uStack_140;
            piVar18 = (int *)((longlong)(int)uVar2 * 0x20 + param_2[2]);
            lVar16 = (longlong)*piVar18 * 0x68;
            lVar15 = *param_2;
            local_198 = *(undefined8 *)(lVar16 + lVar15);
            uStack_190 = ((undefined8 *)(lVar16 + lVar15))[1];
            puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar15);
            local_188 = *puVar1;
            uStack_180 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar15);
            local_178 = *puVar1;
            uStack_170 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar15);
            local_168 = *puVar1;
            uStack_160 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar15);
            local_158 = *puVar1;
            uStack_150 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x50 + lVar15);
            local_148 = *puVar1;
            uStack_140 = puVar1[1];
            local_138 = *(undefined8 *)(lVar16 + 0x60 + lVar15);
            iVar8 = FUN_144cb8b90(&local_b8,&local_128,&local_198);
          }
        }
        else {
          lVar17 = (longlong)piVar18[2] * 0x20;
          lVar14 = (longlong)*(int *)(lVar17 + lVar15) * 0x68;
          local_198 = *(undefined8 *)(lVar14 + lVar16);
          uStack_190 = ((undefined8 *)(lVar14 + lVar16))[1];
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar16);
          local_188 = *puVar1;
          uStack_180 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x20 + lVar16);
          local_178 = *puVar1;
          uStack_170 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x30 + lVar16);
          local_168 = *puVar1;
          uStack_160 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x40 + lVar16);
          local_158 = *puVar1;
          uStack_150 = puVar1[1];
          puVar1 = (undefined8 *)(lVar14 + 0x50 + lVar16);
          local_148 = *puVar1;
          uStack_140 = puVar1[1];
          local_138 = *(undefined8 *)(lVar14 + 0x60 + lVar16);
          iVar8 = *(int *)(lVar17 + 8 + lVar15);
          iVar6 = piVar18[2];
          while (iVar5 = iVar8, uVar7 = uVar10, iVar6 != (int)uVar19) {
            piVar18 = (int *)((longlong)iVar5 * 0x20 + param_2[2]);
            lVar16 = (longlong)*piVar18 * 0x68;
            lVar15 = *param_2;
            local_128 = *(undefined8 *)(lVar16 + lVar15);
            uStack_120 = ((undefined8 *)(lVar16 + lVar15))[1];
            puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar15);
            local_118 = *puVar1;
            uStack_110 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar15);
            local_108 = *puVar1;
            uStack_100 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar15);
            local_f8 = *puVar1;
            uStack_f0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar15);
            local_e8 = *puVar1;
            uStack_e0 = puVar1[1];
            puVar1 = (undefined8 *)(lVar16 + 0x50 + lVar15);
            local_d8 = *puVar1;
            uStack_d0 = puVar1[1];
            local_c8 = *(undefined8 *)(lVar16 + 0x60 + lVar15);
            iVar8 = FUN_144cb8b90(&local_b8,&local_198,&local_128);
            if (iVar8 < 1) break;
            iVar8 = piVar18[2];
            uVar10 = FUN_144cc82a0(iVar5,uVar10,param_2);
            local_138 = local_c8;
            local_198 = local_128;
            uStack_190 = uStack_120;
            local_188 = local_118;
            uStack_180 = uStack_110;
            local_178 = local_108;
            uStack_170 = uStack_100;
            local_168 = local_f8;
            uStack_160 = uStack_f0;
            local_158 = local_e8;
            uStack_150 = uStack_e0;
            local_148 = local_d8;
            uStack_140 = uStack_d0;
            iVar6 = iVar5;
          }
        }
      }
      else {
        uVar7 = FUN_144cc82a0(uVar7,uVar10,param_2);
        uVar12 = uVar10;
        if (uVar9 < uVar2) {
          uVar12 = uVar7;
        }
        FUN_144cc8410(uVar12,param_2);
        local_res8 = bVar4;
        if (uVar9 < uVar2) {
          uVar19 = (ulonglong)(uVar7 + 1);
          uVar7 = uVar10;
        }
        else {
          uVar19 = (ulonglong)*(uint *)((longlong)(int)uVar7 * 0x20 + 8 + param_2[2]);
        }
      }
      goto LAB_144cc7df0;
    }
    FUN_144cc8410(uVar10,param_2);
  }
  return 1;
}



// FUNCTION 144cc82a0 FUN_144cc82a0 body=212 status=ok
// SIG undefined FUN_144cc82a0(void)

int FUN_144cc82a0(int param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  iVar5 = FUN_144cbbd80(param_3,2);
  lVar4 = *(longlong *)(param_3 + 0x10);
  puVar7 = (undefined4 *)((longlong)param_1 * 0x20 + lVar4);
  puVar6 = (undefined4 *)((longlong)iVar5 * 0x20 + lVar4);
  puVar8 = (undefined4 *)((longlong)param_2 * 0x20 + lVar4);
  iVar9 = iVar5 + 1;
  iVar1 = puVar7[1];
  iVar2 = puVar8[1];
  puVar7[1] = iVar5;
  puVar8[1] = iVar9;
  *(int *)((longlong)iVar1 * 0x20 + 8 + lVar4) = iVar9;
  *(int *)((longlong)iVar2 * 0x20 + 8 + lVar4) = iVar5;
  *puVar6 = *puVar8;
  puVar6[1] = iVar2;
  puVar6[2] = param_1;
  puVar6[3] = iVar9;
  uVar3 = puVar7[6];
  puVar6[7] = puVar6[7] & 0xfffffffb;
  puVar6[6] = uVar3;
  puVar6[5] = 0xffffffff;
  puVar6[8] = *puVar7;
  puVar6[10] = param_2;
  puVar6[0xb] = iVar5;
  puVar6[9] = iVar1;
  uVar3 = puVar8[6];
  puVar6[0xf] = puVar6[0xf] & 0xfffffffb;
  puVar6[0xe] = uVar3;
  puVar6[0xd] = 0xffffffff;
  return iVar5;
}



// FUNCTION 144cc8380 FUN_144cc8380 body=144 status=ok
// SIG undefined FUN_144cc8380(void)

undefined8 FUN_144cc8380(int *param_1,int param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  lVar6 = (longlong)param_2 * 0x20;
  lVar5 = (longlong)*(int *)(lVar6 + 0x10 + lVar1);
  lVar3 = lVar5 * 0x20;
  if ((*(byte *)(lVar3 + 0x1c + lVar1) & 2) == 0) {
    *(int *)(lVar6 + lVar1 + 0x10) = *param_1;
  }
  else {
    iVar2 = FUN_144cc82a0(*param_1,lVar5,param_3);
    uVar4 = FUN_144cc7d40(*param_1,*param_4);
    if ((char)uVar4 == '\0') {
      return uVar4;
    }
    *param_1 = iVar2 + 1;
    lVar3 = *(longlong *)(param_3 + 0x10);
    *(int *)(lVar3 + 0x10 + lVar6) = iVar2 + 1;
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 144cc8410 FUN_144cc8410 body=288 status=ok
// SIG undefined FUN_144cc8410(void)

void FUN_144cc8410(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  lVar6 = *(longlong *)(param_2 + 0x10);
  uVar12 = (ulonglong)param_1;
  iVar1 = *(int *)(uVar12 * 0x20 + 4 + lVar6);
  iVar2 = *(int *)((longlong)*(int *)(uVar12 * 0x20 + 8 + lVar6) * 0x20 + 8 + lVar6);
  while (iVar2 != iVar1) {
    uVar7 = FUN_144cbbd80(param_2,2);
    lVar6 = *(longlong *)(param_2 + 0x10);
    lVar11 = (longlong)iVar2 * 0x20;
    iVar10 = uVar7 + 1;
    puVar9 = (undefined4 *)((longlong)(int)uVar12 * 0x20 + lVar6);
    iVar3 = *(int *)(lVar11 + 4 + lVar6);
    puVar8 = (undefined4 *)((longlong)(int)uVar7 * 0x20 + lVar6);
    iVar4 = puVar9[1];
    *(uint *)(lVar11 + 4 + lVar6) = uVar7;
    puVar9[1] = iVar10;
    *(int *)((longlong)iVar3 * 0x20 + 8 + lVar6) = iVar10;
    *(uint *)((longlong)iVar4 * 0x20 + 8 + lVar6) = uVar7;
    *puVar8 = *puVar9;
    puVar8[1] = iVar4;
    puVar8[2] = iVar2;
    puVar8[3] = iVar10;
    uVar5 = *(undefined4 *)(lVar11 + 0x18 + lVar6);
    puVar8[7] = puVar8[7] & 0xfffffffb;
    puVar8[6] = uVar5;
    puVar8[5] = 0xffffffff;
    uVar5 = *(undefined4 *)(lVar11 + lVar6);
    puVar8[10] = (int)uVar12;
    uVar12 = (ulonglong)uVar7;
    puVar8[8] = uVar5;
    puVar8[9] = iVar3;
    puVar8[0xb] = uVar7;
    uVar5 = puVar9[6];
    puVar8[0xf] = puVar8[0xf] & 0xfffffffb;
    puVar8[0xe] = uVar5;
    puVar8[0xd] = 0xffffffff;
    iVar2 = *(int *)(lVar11 + 8 + *(longlong *)(param_2 + 0x10));
  }
  return;
}



// FUNCTION 144cc8530 FUN_144cc8530 body=236 status=ok
// SIG undefined FUN_144cc8530(void)

void FUN_144cc8530(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_res8 = uVar3 * 0x20;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar3 * 0x20 + 0x20;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144cc8620 FUN_144cc8620 body=243 status=ok
// SIG undefined FUN_144cc8620(void)

void FUN_144cc8620(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 0x20,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar3 * 0x20 + 0x20;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 << 5);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144cc8714 FUN_144cc8714 body=9 status=ok
// SIG undefined FUN_144cc8714(void)

void FUN_144cc8714(longlong param_1)

{
  FUN_144cc1a30(param_1 + -0x20);
  return;
}



// FUNCTION 144cc8720 FUN_144cc8720 body=9 status=ok
// SIG undefined FUN_144cc8720(void)

void FUN_144cc8720(longlong param_1)

{
  FUN_144cc1ad0(param_1 + -0x20);
  return;
}



// FUNCTION 144cc872c FUN_144cc872c body=9 status=ok
// SIG undefined FUN_144cc872c(void)

void FUN_144cc872c(longlong param_1)

{
  FUN_144cc1b70(param_1 + -0x20);
  return;
}



// FUNCTION 144cc8738 FUN_144cc8738 body=9 status=ok
// SIG undefined FUN_144cc8738(void)

void FUN_144cc8738(longlong param_1)

{
  FUN_144cc1c00(param_1 + -0x20);
  return;
}



// FUNCTION 144cc8744 FUN_144cc8744 body=9 status=ok
// SIG undefined FUN_144cc8744(void)

void FUN_144cc8744(longlong param_1)

{
  FUN_144cc1ca0(param_1 + -0x20);
  return;
}



// FUNCTION 144cc8750 FUN_144cc8750 body=9 status=ok
// SIG undefined FUN_144cc8750(void)

void FUN_144cc8750(longlong param_1)

{
  FUN_144cc1d30(param_1 + -0x20);
  return;
}



// FUNCTION 144cc8760 FUN_144cc8760 body=1103 status=ok
// SIG undefined FUN_144cc8760(void)

undefined2 *
FUN_144cc8760(undefined2 *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             undefined2 param_5)

{
  longlong *plVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined2 local_res8 [4];
  undefined2 local_res10 [4];
  longlong local_res18;
  undefined4 local_res20;
  undefined8 local_58 [3];
  
  local_res18 = 0x940;
  local_res20 = param_4;
  _Dst = (void *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  if (_Dst == (void *)0x0) {
    lVar5 = 0;
  }
  else {
    memset(_Dst,0,0x940);
    lVar5 = FUN_144cc8bb0(_Dst);
    if (lVar5 != 0) {
      FUN_144b3d910(lVar5);
    }
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    FUN_144b3d910(lVar4);
  }
  local_res18 = 0x50;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"ReferencedFunctorTask");
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res8,0,0x40);
    local_res18 = lVar5;
    if (lVar4 != 0) {
      FUN_144b3f230(lVar4);
    }
    if (lVar5 != 0) {
      FUN_144b3f230(lVar5);
    }
  }
  else {
    puVar6[1] = 0xffffffff;
    puVar6[2] = 1;
    *puVar6 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::Horizontal::addTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::EdgeConnection::EdgeConnectionContext>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
              ::vftable;
    puVar6[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::Horizontal::addTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::EdgeConnection::EdgeConnectionContext>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_1>_>
                ::vftable;
    puVar6[9] = "PreFindHorizontalConnections";
    puVar6[6] = lVar5;
    puVar6[7] = lVar4;
    *(undefined4 *)(puVar6 + 8) = param_4;
    FUN_144be3b70(param_2,local_res8,puVar6,0x40);
    FUN_144b3f230(puVar6);
    local_res18 = lVar5;
  }
  uVar2 = local_res8[0];
  plVar1 = (longlong *)(param_2 + 0x328);
  iVar7 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar7) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar7;
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = param_5;
  if (lVar5 != 0) {
    FUN_144b3d910(lVar5);
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    FUN_144b3d910(lVar4);
  }
  local_58[0] = 0x50;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"ReferencedMultiplicitousFunctorTask");
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,local_res10,0,0x40);
    local_res18 = lVar5;
    if (lVar4 != 0) {
      FUN_144b3f230(lVar4);
    }
    if (lVar5 != 0) {
      FUN_144b3f230(lVar5);
    }
  }
  else {
    puVar6[2] = 1;
    puVar6[1] = 0xffffffff;
    puVar6[6] = lVar5;
    *puVar6 = hkaiNavMeshGeneration::
              ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::Horizontal::addTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::EdgeConnection::EdgeConnectionContext>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
              ::vftable;
    puVar6[4] = hkaiNavMeshGeneration::
                ReferencedMultiplicitousFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::Horizontal::addTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::EdgeConnection::EdgeConnectionContext>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_2>_>
                ::vftable;
    *(undefined4 *)(puVar6 + 8) = local_res20;
    puVar6[9] = "FindHorizontalConnections";
    puVar6[7] = lVar4;
    *(undefined4 *)((longlong)puVar6 + 0x44) = 1;
    FUN_144be3b70(param_2,local_res10,puVar6,0x40);
    FUN_144b3f230(puVar6);
    lVar5 = local_res18;
  }
  uVar2 = local_res10[0];
  iVar7 = *(int *)(param_2 + 0x330) + 1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar7) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar7;
  *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = local_res8[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (lVar5 != 0) {
    FUN_144b3d910(lVar5);
  }
  lVar4 = *param_3;
  if (lVar4 != 0) {
    FUN_144b3d910(lVar4);
  }
  local_58[0] = 0x50;
  puVar6 = (undefined8 *)(*DAT_14c787670)(0,local_58,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar6,"ReferencedFunctorTask");
  }
  if (puVar6 == (undefined8 *)0x0) {
    FUN_144be3b70(param_2,param_1,0,0x40);
    if (lVar4 != 0) {
      FUN_144b3f230(lVar4);
    }
    if (lVar5 != 0) {
      FUN_144b3f230(lVar5);
    }
  }
  else {
    puVar6[2] = 1;
    puVar6[1] = 0xffffffff;
    puVar6[6] = lVar5;
    *puVar6 = hkaiNavMeshGeneration::
              ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::Horizontal::addTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::EdgeConnection::EdgeConnectionContext>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_3>_>
              ::vftable;
    puVar6[4] = hkaiNavMeshGeneration::
                ReferencedFunctorTask<`struct_hkHandle<unsigned_short,65535,hkTaskGraph::TaskIdDiscriminant>___cdecl_hkaiNavMeshGeneration::EdgeConnection::Horizontal::addTasks(hkTaskGraph&___ptr64,hkRefPtr<hkaiNavMeshGeneration::EdgeConnection::EdgeConnectionContext>,int,hkHandle<unsigned_short,65535,struct_hkTaskGraph::TaskIdDiscriminant>)'::`2'::<lambda_3>_>
                ::vftable;
    puVar6[8] = "ApplyHorizontalConnections";
    puVar6[7] = lVar4;
    FUN_144be3b70(param_2,param_1,puVar6,0x40);
    FUN_144b3f230(puVar6);
    lVar5 = local_res18;
  }
  iVar7 = *(int *)(param_2 + 0x330) + 1;
  uVar2 = *param_1;
  if ((int)(*(uint *)(param_2 + 0x334) & 0x7fffffff) < iVar7) {
    FUN_141807bca(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  iVar3 = *(int *)(param_2 + 0x330);
  lVar4 = *plVar1;
  *(int *)(param_2 + 0x330) = iVar7;
  *(undefined2 *)(lVar4 + (longlong)iVar3 * 4) = local_res10[0];
  *(undefined2 *)(lVar4 + 2 + (longlong)iVar3 * 4) = uVar2;
  if (lVar5 != 0) {
    FUN_144b3f230(lVar5);
  }
  if (*param_3 != 0) {
    FUN_144b3f230();
  }
  return param_1;
}



// FUNCTION 144cc8bb0 FUN_144cc8bb0 body=124 status=ok
// SIG undefined FUN_144cc8bb0(void)

undefined8 * FUN_144cc8bb0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshGeneration::EdgeConnection::Horizontal::Context::vftable;
  param_1[3] = 0;
  param_1[0xe] = param_1 + 0x10;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x98] = param_1 + 0x9a;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000011;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x80000011;
  FUN_144bdde80(param_1 + 0x122);
  return param_1;
}



// FUNCTION 144cc8c30 FUN_144cc8c30 body=181 status=ok
// SIG undefined FUN_144cc8c30(void)

undefined8 * FUN_144cc8c30(undefined8 *param_1,uint param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x122));
  FUN_14006c6ec(param_1 + 6);
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x220);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x940);
  }
  return param_1;
}



// FUNCTION 144cc8cf0 FUN_144cc8cf0 body=976 status=ok
// SIG undefined FUN_144cc8cf0(void)

void FUN_144cc8cf0(longlong *param_1,undefined4 param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  int local_res10 [2];
  undefined8 *local_68;
  int local_60;
  uint local_5c;
  longlong local_58;
  undefined4 local_50;
  uint local_4c;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar3 + 0xf0);
  if (lVar12 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar12;
  }
  lVar3 = *(longlong *)(lVar12 + 0x3e0);
  local_48 = "TtFindHorizontalConnections";
  uStack_40 = "";
  if (lVar3 != 0) {
    local_48 = "TtFindHorizontalConnections";
    uStack_40 = "";
    FUN_144b3f370(lVar3,&local_48);
  }
  uVar16 = 0;
  local_4c = 0x80000000;
  local_58 = 0;
  local_50 = 0;
  FUN_141807990(&local_58,&PTR_vftable_14c6e47c0,0x10);
  local_48 = (char *)(*param_1 + 0x30);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_5c = 0x80000000;
  local_34 = param_2;
  if (local_48 != (char *)0x0) {
    uStack_40 = (char *)0x0;
    local_38 = 0;
  }
  do {
    if (uStack_40._4_4_ <= uVar16) {
      if ((local_48 == (char *)0x0) ||
         (FUN_144bf9800(local_48,local_res10,&local_48), local_res10[0] < 0)) {
        lVar12 = *param_1;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x910));
        puVar17 = local_68;
        lVar4 = *param_1;
        ppuVar1 = (undefined8 **)(lVar4 + 0x18);
        if (*(int *)(lVar4 + 0x20) == 0) {
          if (&local_68 != ppuVar1) {
            FUN_147e605c2(ppuVar1,&PTR_vftable_14c6e47a0);
            FUN_147e605c2(&local_68,&PTR_vftable_14c6e47a0);
            puVar17 = *ppuVar1;
            *ppuVar1 = local_68;
            iVar2 = *(int *)(lVar4 + 0x20);
            *(int *)(lVar4 + 0x20) = local_60;
            uVar16 = *(uint *)(lVar4 + 0x24);
            *(uint *)(lVar4 + 0x24) = local_5c;
            local_68 = puVar17;
            local_60 = iVar2;
            local_5c = uVar16;
          }
        }
        else {
          iVar2 = *(int *)(lVar4 + 0x20);
          puVar19 = local_68 + (longlong)local_60 * 0x44;
          iVar18 = (int)(((longlong)puVar19 - (longlong)local_68) / 0x220) + iVar2;
          if ((int)(*(uint *)(lVar4 + 0x24) & 0x7fffffff) < iVar18) {
            FUN_147e6062a(ppuVar1,&PTR_vftable_14c6e47a0,(longlong)iVar18);
          }
          puVar9 = *ppuVar1 + (longlong)iVar2 * 0x44;
          for (; puVar17 != puVar19; puVar17 = puVar17 + 0x44) {
            if (puVar9 != (undefined8 *)0x0) {
              lVar14 = 4;
              puVar10 = puVar9;
              puVar11 = puVar17;
              do {
                puVar15 = puVar11;
                puVar13 = puVar10;
                uVar8 = puVar15[1];
                *puVar13 = *puVar15;
                puVar13[1] = uVar8;
                uVar8 = puVar15[3];
                puVar13[2] = puVar15[2];
                puVar13[3] = uVar8;
                uVar8 = puVar15[5];
                puVar13[4] = puVar15[4];
                puVar13[5] = uVar8;
                uVar8 = puVar15[7];
                puVar13[6] = puVar15[6];
                puVar13[7] = uVar8;
                uVar8 = puVar15[9];
                puVar13[8] = puVar15[8];
                puVar13[9] = uVar8;
                uVar8 = puVar15[0xb];
                puVar13[10] = puVar15[10];
                puVar13[0xb] = uVar8;
                uVar8 = puVar15[0xd];
                puVar13[0xc] = puVar15[0xc];
                puVar13[0xd] = uVar8;
                uVar8 = puVar15[0xf];
                puVar13[0xe] = puVar15[0xe];
                puVar13[0xf] = uVar8;
                lVar14 = lVar14 + -1;
                puVar10 = puVar13 + 0x10;
                puVar11 = puVar15 + 0x10;
              } while (lVar14 != 0);
              uVar5 = *(undefined4 *)((longlong)puVar15 + 0x84);
              uVar6 = *(undefined4 *)(puVar15 + 0x11);
              uVar7 = *(undefined4 *)((longlong)puVar15 + 0x8c);
              *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar15 + 0x10);
              *(undefined4 *)((longlong)puVar13 + 0x84) = uVar5;
              *(undefined4 *)(puVar13 + 0x11) = uVar6;
              *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar7;
              uVar8 = puVar15[0x13];
              puVar13[0x12] = puVar15[0x12];
              puVar13[0x13] = uVar8;
            }
            puVar9 = puVar9 + 0x44;
          }
          *(int *)(lVar4 + 0x20) = iVar18;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x910));
        local_60 = 0;
        if ((-1 < (int)local_5c) && (local_68 != (undefined8 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) * 0x220);
        }
        local_68 = (undefined8 *)0x0;
        local_5c = 0x80000000;
        local_50 = 0;
        if ((-1 < (int)local_4c) && (local_58 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_58,(ulonglong)(local_4c & 0x7fffffff) << 2);
        }
        local_58 = 0;
        local_4c = 0x80000000;
        if (lVar3 != 0) {
          local_48 = "Et";
          uStack_40 = &DAT_149981766;
          FUN_144b3f260(lVar3,&local_48);
        }
        return;
      }
      uVar16 = (uint)uStack_40;
    }
    lVar12 = param_1[1];
    FUN_145025db0(*(undefined8 *)(lVar12 + 0x18),
                  *(undefined4 *)(*(longlong *)(lVar12 + 0x38) + (longlong)(int)uVar16 * 4),
                  lVar12 + 0x1b20,*(undefined4 *)(lVar12 + 0x20),&local_58,&local_68);
    uVar16 = uVar16 + 1;
  } while( true );
}



// FUNCTION 144cc90c0 FUN_144cc90c0 body=236 status=ok
// SIG undefined FUN_144cc90c0(void)

void FUN_144cc90c0(longlong param_1)

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
    local_18 = "TtPreFindHorizontalConnections";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  FUN_144bf95c0(*(longlong *)(param_1 + 0x10) + 0x30,*(undefined4 *)(param_1 + 0x20),
                *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x40),1);
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144cc91b0 FUN_144cc91b0 body=5 status=ok
// SIG undefined FUN_144cc91b0(void)

undefined8 FUN_144cc91b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144cc91c0 FUN_144cc91c0 body=129 status=ok
// SIG undefined FUN_144cc91c0(void)

undefined8 * FUN_144cc91c0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144cc9250 FUN_144cc9250 body=15 status=ok
// SIG undefined FUN_144cc9250(void)

undefined4 * FUN_144cc9250(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = *(undefined4 *)(param_1 + 0x24);
  return param_2;
}



// FUNCTION 144cc9260 FUN_144cc9260 body=12 status=ok
// SIG undefined FUN_144cc9260(void)

void FUN_144cc9260(longlong param_1,longlong param_2)

{
  FUN_144cc8cf0(param_1 + 0x10,*(undefined4 *)(param_2 + 0x18));
  return;
}



// FUNCTION 144cc9270 FUN_144cc9270 body=5 status=ok
// SIG undefined FUN_144cc9270(void)

undefined8 FUN_144cc9270(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144cc9280 FUN_144cc9280 body=129 status=ok
// SIG undefined FUN_144cc9280(void)

undefined8 * FUN_144cc9280(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144cc9310 FUN_144cc9310 body=269 status=ok
// SIG undefined FUN_144cc9310(void)

void FUN_144cc9310(longlong param_1)

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
    local_18 = "TtApplyHorizontalConnections";
    local_10 = "";
    FUN_144b3f370(lVar1,&local_18);
  }
  local_18 = *(char **)(*(longlong *)(param_1 + 0x10) + 0x18);
  local_10 = local_18 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x20) * 0x220;
  FUN_144cab660(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18),&local_18);
  FUN_144cb3890(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18));
  if (lVar1 != 0) {
    local_18 = "Et";
    local_10 = "";
    FUN_144b3f260(lVar1,&local_18);
  }
  return;
}



// FUNCTION 144cc9420 FUN_144cc9420 body=5 status=ok
// SIG undefined FUN_144cc9420(void)

undefined8 FUN_144cc9420(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 144cc9430 FUN_144cc9430 body=129 status=ok
// SIG undefined FUN_144cc9430(void)

undefined8 * FUN_144cc9430(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144cc94b4 FUN_144cc94b4 body=9 status=ok
// SIG undefined FUN_144cc94b4(void)

void FUN_144cc94b4(longlong param_1)

{
  FUN_144cc91c0(param_1 + -0x20);
  return;
}



// FUNCTION 144cc94c0 FUN_144cc94c0 body=9 status=ok
// SIG undefined FUN_144cc94c0(void)

void FUN_144cc94c0(longlong param_1)

{
  FUN_144cc9280(param_1 + -0x20);
  return;
}



// FUNCTION 144cc94cc FUN_144cc94cc body=9 status=ok
// SIG undefined FUN_144cc94cc(void)

void FUN_144cc94cc(longlong param_1)

{
  FUN_144cc9430(param_1 + -0x20);
  return;
}


